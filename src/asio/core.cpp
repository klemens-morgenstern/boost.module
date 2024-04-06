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

export module boost.asio.core ;

namespace boost::asio
{

// Classes

export using boost::asio::any_completion_executor;
export using boost::asio::any_io_executor;
export using boost::asio::bad_executor;
export using boost::asio::cancellation_signal;
export using boost::asio::cancellation_slot;
export using boost::asio::cancellation_state;
export using boost::asio::cancellation_type;
export using boost::asio::coroutine;
export using boost::asio::detached_t;
export using boost::asio::execution_context;
export using boost::asio::executor;
export using boost::asio::executor_arg_t;
export using boost::asio::invalid_service_owner;
export using boost::asio::io_context;
export using boost::asio::multiple_exceptions;
export using boost::asio::service_already_exists;
export using boost::asio::static_thread_pool;
export using boost::asio::system_context;
export using boost::asio::system_executor;

namespace this_coro
{
export using boost::asio::this_coro::cancellation_state_t;
export using boost::asio::this_coro::executor_t;
}

export using boost::asio::thread_pool;

// Class Templates

export using boost::asio::any_completion_handler;
export using boost::asio::any_completion_handler_allocator;
export using boost::asio::append_t;
export using boost::asio::as_tuple_t;
export using boost::asio::async_completion;
export using boost::asio::awaitable;
export using boost::asio::basic_io_object;
export using boost::asio::basic_system_executor;
export using boost::asio::cancellation_filter;
export using boost::asio::cancellation_slot_binder;
export using boost::asio::consign_t;
export using boost::asio::deferred_t;
export using boost::asio::executor_binder;
export using boost::asio::executor_work_guard;


export using boost::asio::io_context;
export using boost::asio::prepend_t;
export using boost::asio::recycling_allocator;
export using boost::asio::redirect_error_t;
export using boost::asio::strand;
export using boost::asio::thread_pool;
export using boost::asio::use_awaitable_t;
export using boost::asio::use_future_t;

// Free Functions
export using boost::asio::append;
export using boost::asio::as_tuple;
export using boost::asio::asio_handler_is_continuation;
export using boost::asio::async_compose;
export using boost::asio::async_initiate;
export using boost::asio::bind_allocator;
export using boost::asio::bind_cancellation_slot;
export using boost::asio::bind_executor;
export using boost::asio::bind_immediate_executor;
export using boost::asio::co_spawn;
export using boost::asio::consign;
export using boost::asio::defer;
export using boost::asio::dispatch;
export using boost::asio::get_associated_allocator;
export using boost::asio::get_associated_cancellation_slot;
export using boost::asio::get_associated_executor;
export using boost::asio::get_associated_immediate_executor;
export using boost::asio::has_service;
export using boost::asio::make_service;
export using boost::asio::make_strand;
export using boost::asio::make_work_guard;
export using boost::asio::post;
export using boost::asio::prepend;
export using boost::asio::redirect_error;

namespace this_coro
{
export using boost::asio::this_coro::reset_cancellation_state;
export using boost::asio::this_coro::throw_if_cancelled;
}
export using boost::asio::use_service;

// Special Values

export using boost::asio::deferred;
export using boost::asio::detached;
export using boost::asio::executor_arg;
namespace this_coro
{
export using boost::asio::this_coro::cancellation_state;
export using boost::asio::this_coro::executor;

}

export using boost::asio::use_awaitable;
export using boost::asio::use_future;

//Error Codes

namespace error
{

export using boost::asio::error::basic_errors;
export using boost::asio::error::netdb_errors;
export using boost::asio::error::addrinfo_errors;
export using boost::asio::error::misc_errors;

}

// Bind Placeholders

namespace placeholders
{

export using boost::asio::placeholders::bytes_transferred;
export using boost::asio::placeholders::endpoint;
export using boost::asio::placeholders::error;
export using boost::asio::placeholders::iterator;
export using boost::asio::placeholders::results;
export using boost::asio::placeholders::signal_number;

}

// Type Traits

export using boost::asio::associated_allocator;
export using boost::asio::associated_cancellation_slot;
export using boost::asio::associated_executor;
export using boost::asio::associated_immediate_executor;
export using boost::asio::associator;
export using boost::asio::async_result;
export using boost::asio::completion_signature_of;
export using boost::asio::default_completion_token;
export using boost::asio::is_async_operation;
export using boost::asio::is_executor;
export using boost::asio::uses_executor;


}