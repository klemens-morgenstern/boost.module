//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <compare>
#include <memory>
/*
#include <boost/asio/deadline_timer.hpp>
#include <boost/asio/high_resolution_timer.hpp>
#include <boost/asio/steady_timer.hpp>
#include <boost/asio/system_timer.hpp>
*/
#include <boost/asio.hpp>

export module boost.asio.timers ;

namespace boost::asio
{

// Classes

export using boost::asio::deadline_timer;
export using boost::asio::high_resolution_timer;
export using boost::asio::steady_timer;
export using boost::asio::system_timer;

// Class Templates

export using boost::asio::basic_deadline_timer;
export using boost::asio::basic_waitable_timer;
export using boost::asio::time_traits;
export using boost::asio::wait_traits;

}