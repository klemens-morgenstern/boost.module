//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <boost/asio/ssl.hpp>

export module boost.asio.ssl ;

namespace boost::asio::ssl
{

// Classes
export using boost::asio::ssl::context;
export using boost::asio::ssl::context_base;
export using boost::asio::ssl::host_name_verification;
export using boost::asio::ssl::stream_base;
export using boost::asio::ssl::verify_context;

// Class Templates

export using boost::asio::ssl::stream;

}