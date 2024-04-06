//
// Copyright (c) 2024 Klemens Morgenstern (klemens.morgenstern@gmx.net)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

module;
#include <compare>
#include <memory>

#include <boost/asio/execution.hpp>

export module boost.asio.execution ;

namespace boost::asio::execution
{

// Properties
export using execution::allocator_t;
export using execution::blocking_t;
export using execution::blocking_adaptation_t;
export using execution::context_t;
export using execution::context_as_t;
export using execution::mapping_t;
export using execution::occupancy_t;
export using execution::outstanding_work_t;
export using execution::prefer_only;
export using execution::relationship_t;

// Property Objects

export using execution::allocator;
export using execution::blocking;
export using execution::blocking_adaptation;
export using execution::context;
export using execution::context_as;
export using execution::mapping;
export using execution::occupancy;
export using execution::outstanding_work;
export using execution::relationship;

}