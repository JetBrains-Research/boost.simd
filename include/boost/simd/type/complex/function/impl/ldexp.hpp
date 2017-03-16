//==================================================================================================
/**
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_TYPE_COMPLEX_FUNCTION_IMPL_LDEXP_HPP_INCLUDED
#define BOOST_SIMD_TYPE_COMPLEX_FUNCTION_IMPL_LDEXP_HPP_INCLUDED

#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/type/complex/detail/hierarchy.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;

  BOOST_DISPATCH_OVERLOAD ( ldexp_
                          , (typename A0, typename A1)
                          , bd::cpu_
                          , bs::cmplx::complex_<A0>
                          , bd::generic_<bd::arithmetic_<A1>>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0, const A1 & n) const BOOST_NOEXCEPT
    {
      return {bs::ldexp(a0.real, n), bs::ldexp(a0.imag, n)};
    }
  };

} } }

#endif