//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/url.hpp>

export module boost.url.grammar;

namespace boost::urls::grammar
{

// Grammar
// Functions
export using boost::urls::grammar::ci_compare;
export using boost::urls::grammar::ci_digest;
export using boost::urls::grammar::ci_is_equal;
export using boost::urls::grammar::ci_is_less;
export using boost::urls::grammar::delim_rule;
export using boost::urls::grammar::find_if;
export using boost::urls::grammar::find_if_not;
export using boost::urls::grammar::hexdig_value;
export using boost::urls::grammar::not_empty_rule;
export using boost::urls::grammar::optional_rule;
export using boost::urls::grammar::parse;
export using boost::urls::grammar::range_rule;
export using boost::urls::grammar::ref;
export using boost::urls::grammar::squelch;
export using boost::urls::grammar::to_lower;
export using boost::urls::grammar::to_upper;
export using boost::urls::grammar::token_rule;
export using boost::urls::grammar::tuple_rule;
export using boost::urls::grammar::variant_rule;

// Type Traits
export using boost::urls::grammar::is_charset;
export using boost::urls::grammar::is_rule;

// Types
export using boost::urls::grammar::aligned_storage;
export using boost::urls::grammar::ci_hash;
export using boost::urls::grammar::ci_equal;
export using boost::urls::grammar::ci_less;
export using boost::urls::grammar::lut_chars;
export using boost::urls::grammar::range;
export using boost::urls::grammar::recycled;
export using boost::urls::grammar::recycled_ptr;
export using boost::urls::grammar::string_view_base;
export using boost::urls::grammar::unsigned_rule;


export namespace string_token = boost::urls::string_token;

// Constants
export using boost::urls::grammar::all_chars;
export using boost::urls::grammar::alnum_chars;
export using boost::urls::grammar::alpha_chars;
export using boost::urls::grammar::condition;
export using boost::urls::grammar::dec_octet_rule;
export using boost::urls::grammar::digit_chars;
export using boost::urls::grammar::error;
export using boost::urls::grammar::hexdig_chars;
export using boost::urls::grammar::not_empty_rule;
export using boost::urls::grammar::vchars;

// Concepts
// not concepts.

}

namespace boost::urls::string_token {
export using boost::urls::string_token::append_to;
export using boost::urls::string_token::arg;
export using boost::urls::string_token::assign_to;
export using boost::urls::string_token::is_token;
export using boost::urls::string_token::preserve_size;
export using boost::urls::string_token::return_string;
}