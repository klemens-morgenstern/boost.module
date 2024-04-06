//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/asio/experimental/as_single.hpp>
#include <boost/asio/experimental/co_composed.hpp>
#include <boost/asio/experimental/coro.hpp>
#include <boost/asio/experimental/parallel_group.hpp>
#include <boost/asio/experimental/concurrent_channel.hpp>
#include <boost/asio/experimental/channel.hpp>
#include <boost/asio/experimental/promise.hpp>
#include <boost/asio/experimental/use_coro.hpp>
#include <boost/asio/experimental/use_promise.hpp>

export module boost.asio.experimental ;

namespace boost::asio::experimental
{


export using boost::asio::experimental::as_single;
export using boost::asio::experimental::co_composed;
export using boost::asio::experimental::make_parallel_group;

export using boost::asio::experimental::as_single_t;
export using boost::asio::experimental::basic_channel;
export using boost::asio::experimental::basic_concurrent_channel;
export using boost::asio::experimental::channel_traits;
export using boost::asio::experimental::coro;
export using boost::asio::experimental::parallel_group;
export using boost::asio::experimental::promise;
export using boost::asio::experimental::ranged_parallel_group;
export using boost::asio::experimental::use_coro_t;
export using boost::asio::experimental::use_promise_t;
export using boost::asio::experimental::wait_for_all;
export using boost::asio::experimental::wait_for_one;
export using boost::asio::experimental::wait_for_one_error;
export using boost::asio::experimental::wait_for_one_success;

}