//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/url.hpp>

export module boost.url;

namespace boost
{
export using boost::url;
export using boost::url_view;
}

namespace boost::urls
{

// types

export using boost::urls::authority_view;
export using boost::urls::ignore_case_param;
export using boost::urls::ipv4_address;
export using boost::urls::ipv6_address;
export using boost::urls::no_value_t;
export using boost::urls::param;
export using boost::urls::param_pct_view;
export using boost::urls::param_view;
export using boost::urls::params_base;
export using boost::urls::params_encoded_base;
export using boost::urls::params_encoded_ref;
export using boost::urls::params_encoded_view;
export using boost::urls::params_ref;
export using boost::urls::params_view;
export using boost::urls::segments_base;
export using boost::urls::segments_view;
export using boost::urls::segments_encoded_base;
export using boost::urls::segments_encoded_ref;
export using boost::urls::segments_encoded_view;
export using boost::urls::segments_ref;
export using boost::urls::static_url;
export using boost::urls::static_url_base;
export using boost::urls::url;
export using boost::urls::url_base;
export using boost::urls::url_view;
export using boost::urls::url_view_base;

// Constants

export using boost::urls::error;
export using boost::urls::ignore_case;
export using boost::urls::host_type;
export using boost::urls::no_value;
export using boost::urls::scheme;

// Functions


export using boost::urls::operator<<;
export using boost::urls::arg;
export using boost::urls::format;
export using boost::urls::format_to;
export using boost::urls::parse_absolute_uri;
export using boost::urls::parse_authority;
export using boost::urls::parse_origin_form;
export using boost::urls::parse_path;
export using boost::urls::parse_relative_ref;
export using boost::urls::parse_uri;
export using boost::urls::parse_uri_reference;
export using boost::urls::resolve;

// Encoding
// Functions

export using boost::urls::encode;
export using boost::urls::encoded_size;
export using boost::urls::make_pct_string_view;

// Types

export using boost::urls::decode_view;
export using boost::urls::encoding_opts;
export using boost::urls::pct_string_view;

// Aliases
// Types


// export using boost::urls::errc; // < this doesn't work.
export using boost::urls::error_category;
export using boost::urls::error_code;
export using boost::urls::error_condition;
export using boost::urls::generic_category;
export using boost::urls::optional;
export using boost::urls::result;
// export using boost::urls::string_view; // < oudated docs?
export using boost::urls::system_category;
export using boost::urls::system_error;
export using boost::urls::variant;

// RFC3986


export using boost::urls::absolute_uri_rule;
export using boost::urls::authority_rule;
export using boost::urls::gen_delim_chars;
export using boost::urls::ipv4_address_rule;
export using boost::urls::ipv6_address_rule;
export using boost::urls::pchars;
export using boost::urls::pct_encoded_rule;
export using boost::urls::query_rule;
export using boost::urls::relative_ref_rule;
export using boost::urls::reserved_chars;
export using boost::urls::sub_delim_chars;
export using boost::urls::unreserved_chars;
export using boost::urls::uri_reference_rule;
export using boost::urls::uri_rule;

}