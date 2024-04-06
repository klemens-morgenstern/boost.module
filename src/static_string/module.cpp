//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/static_string.hpp>

export module boost.static_string ;

namespace boost::static_strings
{

export using boost::static_strings::erase_if;
export using boost::static_strings::hash_value;
export using boost::static_strings::swap;
export using boost::static_strings::to_static_string;
export using boost::static_strings::to_static_wstring;
export using boost::static_strings::operator!=;
export using boost::static_strings::operator==;
export using boost::static_strings::operator+;
export using boost::static_strings::operator<;
export using boost::static_strings::operator>;
export using boost::static_strings::operator<=;
export using boost::static_strings::operator>=;
export using boost::static_strings::operator<<;
export using boost::static_strings::basic_string_view;
export using boost::static_strings::basic_static_string;
export using boost::static_strings::static_string;
export using boost::static_strings::static_wstring;
export using boost::static_strings::static_u8string;
export using boost::static_strings::static_u16string;
export using boost::static_strings::static_u32string;

}
namespace boost
{

export using boost::static_string;
export using boost::static_wstring;
export using boost::static_u16string;
export using boost::static_u32string;

}