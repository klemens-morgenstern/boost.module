//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <compare>
#include <memory>

#include <boost/asio/connect_pipe.hpp>
#include <boost/asio/readable_pipe.hpp>
#include <boost/asio/writable_pipe.hpp>

export module boost.asio.pipe ;

namespace boost::asio
{


// Classes
export using boost::asio::connect_pipe;

export using boost::asio::basic_readable_pipe;
export using boost::asio::basic_writable_pipe;
export using boost::asio::readable_pipe;
export using boost::asio::writable_pipe;


}