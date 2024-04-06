//
// Copyright (c) 2023 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <memory>

#include <boost/asio/windows/object_handle.hpp>
#include <boost/asio/windows/overlapped_handle.hpp>
#include <boost/asio/windows/random_access_handle.hpp>
#include <boost/asio/windows/stream_handle.hpp>

export module boost.asio.windows ;

namespace boost::asio::window
{

#if defined(BOOST_ASIO_HAS_IOCP)
export using boost::asio::windows::object_handle;
export using boost::asio::windows::overlapped_handle;
export using boost::asio::windows::overlapped_ptr;
export using boost::asio::windows::random_access_handle;
export using boost::asio::windows::stream_handle;
export using boost::asio::windows::basic_object_handle;
export using boost::asio::windows::basic_overlapped_handle;
export using boost::asio::windows::basic_random_access_handle;
export using boost::asio::windows::basic_stream_handle;
#endif

}


