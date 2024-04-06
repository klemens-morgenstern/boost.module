//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/asio/random_access_file.hpp>
#include <boost/asio/stream_file.hpp>

export module boost.asio.file ;

namespace boost::asio
{

#if defined(BOOST_ASIO_HAS_FILE)

// Classes
using export boost::asio::basic_file;
using export boost::asio::basic_random_access_file;
using export boost::asio::basic_stream_file;
using export boost::asio::file_base;
using export boost::asio::random_access_file;
using export boost::asio::stream_file;
// Class Templates

#endif

}