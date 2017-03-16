// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor sqr_abs in std mode for float type with no decorator (regular call).
#include <simd_bench.hpp>
#include <complex>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

 struct sqr_abs_bench
{
  template < class T >
  BOOST_FORCEINLINE T operator()(const T & r, const T & i) const BOOST_NOEXCEPT
  {
    std::complex<T> z{r, i};
    return std::norm(z);
  }
};

DEFINE_BENCH_MAIN()
{
  using T = float;
  run<T>(sqr_abs_bench(), nsbg::rand<T>(-10, 10), nsbg::rand<T>(-10, 10));
}