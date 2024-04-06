//
// Copyright (c) 2023 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <memory>

#include <boost/asio/posix/stream_descriptor.hpp>
#include <boost/asio/posix/descriptor.hpp>

export module boost.asio.posix ;

namespace boost::asio::posix
{

#if defined(BOOST_ASIO_HAS_POSIX_STREAM_DESCRIPTOR)

export using boost::asio::posix::basic_descriptor;
export using boost::asio::posix::basic_stream_descriptor;
export using boost::asio::posix::descriptor;
export using boost::asio::posix::descriptor_base;
export using boost::asio::posix::stream_descriptor;

#endif

}


