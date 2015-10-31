//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_DEFINITION_IS_NOT_GREATER_EQUAL_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_DEFINITION_IS_NOT_GREATER_EQUAL_HPP_INCLUDED

#include <boost/dispatch/function/make_callable.hpp>
#include <boost/dispatch/hierarchy/functions.hpp>
#include <boost/simd/detail/dispatch.hpp>

namespace boost { namespace simd
{
  namespace tag
  {
    BOOST_DISPATCH_MAKE_TAG(ext, is_not_greater_equal_, boost::dispatch::elementwise_<is_not_greater_equal_>);
  }

  namespace ext
  {
    BOOST_DISPATCH_FUNCTION_DECLARATION(tag, is_not_greater_equal_);
  }

  namespace functional
  {
    BOOST_DISPATCH_CALLABLE_DEFINITION(tag::is_not_greater_equal_,is_not_greater_equal);
  }

  BOOST_DISPATCH_FUNCTION_DEFINITION(tag::is_not_greater_equal_, is_not_greater_equal);

} }

#endif