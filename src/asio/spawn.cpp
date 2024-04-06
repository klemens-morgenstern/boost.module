//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <compare>
#include <memory>

#include <boost/asio/spawn.hpp>

export module boost.asio.spawn ;

namespace boost::asio
{

// Classes

export using boost::asio::yield_context;
export using boost::asio::basic_yield_context;
export using boost::asio::spawn;

}