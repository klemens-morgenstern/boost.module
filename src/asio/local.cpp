//
// Copyright (c) 2023 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;

#include <memory>

#include <boost/asio/local/stream_protocol.hpp>
#include <boost/asio/local/connect_pair.hpp>
#include <boost/asio/local/datagram_protocol.hpp>
#include <boost/asio/local/seq_packet_protocol.hpp>

export module boost.asio.local ;

namespace boost::asio::local
{

export using boost::asio::local::seq_packet_protocol;
export using boost::asio::local::stream_protocol;
export using boost::asio::local::datagram_protocol;
export using boost::asio::local::connect_pair;;

}


