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

export module boost.asio.buffers ;

namespace boost::asio
{

// Classes

export using boost::asio::const_buffer;
export using boost::asio::mutable_buffer;
export using boost::asio::const_registered_buffer;
export using boost::asio::mutable_registered_buffer;
export using boost::asio::streambuf;
export using boost::asio::registered_buffer_id;

// Class Templates

export using boost::asio::basic_streambuf;
export using boost::asio::buffer_registration;
export using boost::asio::buffered_read_stream;
export using boost::asio::buffered_stream;
export using boost::asio::buffered_write_stream;
export using boost::asio::buffers_iterator;
export using boost::asio::dynamic_string_buffer;
export using boost::asio::dynamic_vector_buffer;

// Free Functions

export using boost::asio::async_read;
export using boost::asio::async_read_at;
export using boost::asio::async_read_until;
export using boost::asio::async_write;
export using boost::asio::async_write_at;
export using boost::asio::buffer;
export using boost::asio::buffer_copy;
export using boost::asio::buffer_size;
export using boost::asio::buffer_sequence_begin;
export using boost::asio::buffer_sequence_end;
export using boost::asio::buffers_begin;
export using boost::asio::buffers_end;
export using boost::asio::dynamic_buffer;
export using boost::asio::read;
export using boost::asio::read_at;
export using boost::asio::read_until;
export using boost::asio::register_buffers;
export using boost::asio::transfer_all;
export using boost::asio::transfer_at_least;
export using boost::asio::transfer_exactly;
export using boost::asio::write;
export using boost::asio::write_at;

// Type Traits

export using boost::asio::is_const_buffer_sequence;
export using boost::asio::is_dynamic_buffer;
export using boost::asio::is_dynamic_buffer_v1;
export using boost::asio::is_dynamic_buffer_v2;
export using boost::asio::is_match_condition;
export using boost::asio::is_mutable_buffer_sequence;
export using boost::asio::is_read_buffered;
export using boost::asio::is_write_buffered;


}