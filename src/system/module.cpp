//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/system.hpp>

export module boost.system ;

namespace boost::system
{

namespace errc
{
export using boost::system::errc::make_error_code;
export using boost::system::errc::make_error_condition;
export using boost::system::errc::errc_t;
}

export using boost::system::error_code;
export using boost::system::error_category;
export using boost::system::error_condition;
export using boost::system::in_place_value_t;
export using boost::system::in_place_error_t;

// error
export using boost::system::in_place_value;
export using boost::system::in_place_error;


export using boost::system::system_category;
export using boost::system::throw_exception_from_error;
export using boost::system::is_error_code_enum;
export using boost::system::is_error_condition_enum;
export using boost::system::generic_category;
export using boost::system::system_error;

export using boost::system::result;

}