//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_GENERIC_FUNCTION_AUTOSPLAT_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_GENERIC_FUNCTION_AUTOSPLAT_HPP_INCLUDED

#include <boost/dispatch/function/overload.hpp>
#include <boost/dispatch/hierarchy/functions.hpp>
#include <boost/simd/sdk/hierarchy/simd.hpp>
#include <boost/simd/arch/common/tags.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;

  // ({P,S},{S,P})
  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( (typename F, typename P0, typename S0, typename E0)
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( S0 const& s0
                   , P0 const& p0
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(P0(s0), p0))
  };

  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( (typename F, typename P0, typename S0, typename E0)
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( P0 const& p0
                   , S0 const& s0
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(p0, P0(s0)))
  };

  // ({P,S},{P,S},{P,S})
  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( ( typename F
                                     , typename P0
                                     , typename S0
                                     , typename E0
                                     )
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( P0 const& p0
                   , P0 const& p1
                   , S0 const& s0
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(p0, p1, P0(s0)))
  };

  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( ( typename F
                                     , typename P0
                                     , typename S0
                                     , typename E0
                                     )
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( P0 const& p0
                   , S0 const& s0
                   , P0 const& p1
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(p0, P0(s0), p1))
  };

  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( ( typename F
                                     , typename P0
                                     , typename S0
                                     , typename E0
                                     )
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( S0 const& s0
                   , P0 const& p0
                   , P0 const& p1
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(P0(s0), p0, p1))
  };

  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( ( typename F
                                     , typename P0
                                     , typename S0
                                     , typename S1
                                     , typename E0
                                     )
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   , bd::scalar_<bd::unspecified_<S1>>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( S0 const& s0
                   , S1 const& s1
                   , P0 const& p0
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(P0(s0), P0(s1), p0))
  };

  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( ( typename F
                                     , typename P0
                                     , typename S0
                                     , typename S1
                                     , typename E0
                                     )
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bd::scalar_<bd::unspecified_<S1>>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( S0 const& s0
                   , P0 const& p0
                   , S1 const& s1
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(P0(s0), p0, P0(s1)))
  };

  // -----------------------------------------------------------------------------------------------

  BOOST_DISPATCH_OVERLOAD_FALLBACK ( ( typename F
                                     , typename P0
                                     , typename S0
                                     , typename S1
                                     , typename E0
                                     )
                                   , bd::elementwise_<F>
                                   , bd::cpu_
                                   , bs::pack_<bd::unspecified_<P0>, E0>
                                   , bd::scalar_<bd::unspecified_<S0>>
                                   , bd::scalar_<bd::unspecified_<S1>>
                                   )
  {
    using functor = bd::functor<F>;

    auto operator()( P0 const& p0
                   , S0 const& s0
                   , S1 const& s1
                   ) const
    BOOST_NOEXCEPT_DECLTYPE_BODY(functor()(p0, P0(s0), P0(s1)))
  };

} } }

#endif