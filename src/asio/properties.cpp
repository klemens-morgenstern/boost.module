//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <compare>
#include <memory>

#include <boost/asio.hpp>

export module boost.asio.properties ;

namespace boost::asio
{


// Properties
//  Execution
//   Customisation Points
export constexpr inline boost::asio::prefer_t          prefer{};
export constexpr inline boost::asio::query_t           query{};
export constexpr inline boost::asio::require_t         require{};
export constexpr inline boost::asio::require_concept_t require_concept{};

//   Traits
export using boost::asio::can_prefer;
export using boost::asio::can_query;
export using boost::asio::can_require;
export using boost::asio::can_require_concept;
export using boost::asio::is_nothrow_prefer;
export using boost::asio::is_nothrow_query;
export using boost::asio::is_nothrow_require;
export using boost::asio::is_nothrow_require_concept;
export using boost::asio::prefer_result;
export using boost::asio::query_result;
export using boost::asio::require_result;
export using boost::asio::require_concept_result;

}