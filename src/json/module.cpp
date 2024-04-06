//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/json.hpp>

export module boost.json ;

namespace boost::json
{
// JSON
// Classes (1/2)
export using boost::json::array;
export using boost::json::basic_parser;
export using boost::json::key_value_pair;
export using boost::json::monotonic_resource;
export using boost::json::object;
export using boost::json::parser;
export using boost::json::parse_options;
export using boost::json::serializer;
export using boost::json::serialize_options;
export using boost::json::set_pointer_options;
export using boost::json::static_resource;
export using boost::json::storage_ptr;
export using boost::json::stream_parser;
export using boost::json::string;
export using boost::json::value;

export using boost::json::value_ref;
export using boost::json::value_stack;

// Functions
export using boost::json::get;
export using boost::json::get_null_resource;
export using boost::json::make_shared_resource;
export using boost::json::parse;
export using boost::json::parse_into;
export using boost::json::result_from_errno;
export using boost::json::serialize;
export using boost::json::to_string;
export using boost::json::try_value_to;
export using boost::json::value_from;
export using boost::json::value_to;
export using boost::json::visit;

// Type Traits
export using boost::json::has_value_from;
export using boost::json::has_value_to;
export using boost::json::is_deallocate_trivial;
export using boost::json::is_described_class;
export using boost::json::is_described_enum;
export using boost::json::is_map_like;
export using boost::json::is_null_like;
export using boost::json::is_optional_like;
export using boost::json::is_sequence_like;
export using boost::json::is_string_like;
export using boost::json::is_tuple_like;
export using boost::json::is_variant_like;
export using boost::json::result_for;
export using boost::json::try_value_to_tag;
export using boost::json::value_from_tag;
export using boost::json::value_to_tag;

// Operators

export using boost::json::operator==;
export using boost::json::operator!=;
export using boost::json::operator<;
export using boost::json::operator<=;
export using boost::json::operator>=;
export using boost::json::operator>;
export using boost::json::operator<<;

// Constants

export using boost::json::array_kind_t;
export BOOST_INLINE_CONSTEXPR array_kind_t array_kind{};

export using boost::json::condition;
export using boost::json::error;
export using boost::json::kind;
export using boost::json::number_precision;

export using boost::json::object_kind_t;
export BOOST_INLINE_CONSTEXPR object_kind_t object_kind{};

export using boost::json::string_kind_t;
export BOOST_INLINE_CONSTEXPR string_kind_t string_kind{};

// Aliases

export using boost::json::error_category;
export using boost::json::error_code;
export using boost::json::error_condition;
export using boost::json::memory_resource;
export using boost::json::parser_for;
export using boost::json::polymorphic_allocator;
export using boost::json::result;
export using boost::json::string_view;
export using boost::json::system_error;
// P0308R0
export using boost::json::pilfer;
export using boost::json::pilfered;
export using boost::json::is_pilfer_constructible;

}