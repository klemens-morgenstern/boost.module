//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <compare>
#include <memory>

#include <boost/asio/generic/datagram_protocol.hpp>
#include <boost/asio/generic/raw_protocol.hpp>
#include <boost/asio/generic/seq_packet_protocol.hpp>
#include <boost/asio/generic/stream_protocol.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ip/icmp.hpp>
#include <boost/asio/ip/udp.hpp>
#include <boost/asio/ip/address.hpp>
#include <boost/asio/ip/address_v4_iterator.hpp>
#include <boost/asio/ip/address_v4_range.hpp>
#include <boost/asio/ip/address_v6_iterator.hpp>
#include <boost/asio/ip/address_v6_range.hpp>
#include <boost/asio/ip/host_name.hpp>
#include <boost/asio/ip/network_v4.hpp>
#include <boost/asio/ip/network_v6.hpp>
#include <boost/asio/ip/multicast.hpp>
#include <boost/asio/ip/unicast.hpp>
#include <boost/asio/ip/v6_only.hpp>
#include <boost/asio/connect.hpp>

export module boost.asio.networking ;

namespace boost::asio
{

namespace generic
{

// Classes

export using boost::asio::generic::datagram_protocol;
export using boost::asio::generic::raw_protocol;
export using boost::asio::generic::seq_packet_protocol;
export using boost::asio::generic::stream_protocol;

}

namespace ip
{

export using boost::asio::ip::address;
export using boost::asio::ip::address_v4;
export using boost::asio::ip::address_v4_iterator;
export using boost::asio::ip::address_v4_range;
export using boost::asio::ip::address_v6;
export using boost::asio::ip::address_v6_iterator;
export using boost::asio::ip::address_v6_range;
export using boost::asio::ip::bad_address_cast;
export using boost::asio::ip::icmp;
export using boost::asio::ip::network_v4;
export using boost::asio::ip::network_v6;
export using boost::asio::ip::resolver_base;
export using boost::asio::ip::resolver_query_base;
export using boost::asio::ip::tcp;
export using boost::asio::ip::udp;
export using boost::asio::ip::v4_mapped_t;

}

export using boost::asio::socket_base;

// Free Functions
export using boost::asio::async_connect;
export using boost::asio::connect;

namespace ip
{
export using boost::asio::ip::host_name;
export using boost::asio::ip::make_address;
export using boost::asio::ip::make_address_v4;
export using boost::asio::ip::make_address_v6;
export using boost::asio::ip::make_network_v4;
export using boost::asio::ip::make_network_v6;
}
// Class Templates
export using boost::asio::basic_datagram_socket;
export using boost::asio::basic_raw_socket;
export using boost::asio::basic_seq_packet_socket;
export using boost::asio::basic_socket;
export using boost::asio::basic_socket_acceptor;
export using boost::asio::basic_socket_iostream;
export using boost::asio::basic_socket_streambuf;
export using boost::asio::basic_stream_socket;

namespace generic {
export using boost::asio::generic::basic_endpoint;

}

namespace ip
{

export using boost::asio::ip::basic_endpoint;
export using boost::asio::ip::basic_resolver;
export using boost::asio::ip::basic_resolver_entry;
export using boost::asio::ip::basic_resolver_iterator;
export using boost::asio::ip::basic_resolver_results;
export using boost::asio::ip::basic_resolver_query;

// Socket Options
namespace multicast
{

export using boost::asio::ip::multicast::enable_loopback;
export using boost::asio::ip::multicast::hops;
export using boost::asio::ip::multicast::join_group;
export using boost::asio::ip::multicast::leave_group;
export using boost::asio::ip::multicast::outbound_interface;

}

export using boost::asio::ip::unicast::hops;
export using boost::asio::ip::v6_only;


}

}