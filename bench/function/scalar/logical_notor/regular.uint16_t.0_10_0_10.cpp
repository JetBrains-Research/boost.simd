// -------------------------------------------------------------------------------------------------
//                              Copyright 2017 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor logical_notor in scalar mode for std::uint16_t type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/logical_notor.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_SCALAR_BENCH(scalar_logical_notor, bs::logical_notor);

DEFINE_BENCH_MAIN()
{
  nsb::for_each<scalar_logical_notor, std::uint16_t>(-10, 10,-10, 10);
}
