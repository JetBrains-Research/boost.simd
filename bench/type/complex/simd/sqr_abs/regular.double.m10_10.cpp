// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

#include <simd_bench.hpp>
#include <boost/simd/pack.hpp>
#include <boost/simd/type/complex.hpp>
#include <boost/simd/type/complex/function/sqr_abs.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

// before
//  struct sqr_abs_bench
// {
//   template < class T >
//   BOOST_FORCEINLINE T operator()(const T & r, const T & i) const BOOST_NOEXCEPT
//   {
//     bs::complex<T> z{r, i};
//     return bs::sqr_abs(z);
//   }
// };


// DEFINE_BENCH_MAIN()
// {
//   using T = bs::pack<double>;
//   run<T>(sqr_abs_bench(), nsbg::rand<T>(-10, 10), nsbg::rand<T>(-10, 10));
// }

// after complex adaptation
DEFINE_BENCH_MAIN()
{
  using T = std::complex<bs::pack<double>>;
  run<T>(bs::sqr_abs, nsbg::rand<T>(-10, 10, -10, 10));
}