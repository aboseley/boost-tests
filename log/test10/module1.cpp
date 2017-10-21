#include <boost/log/common.hpp>
#include <boost/log/sinks.hpp>
#include <boost/log/sources/logger.hpp>
#include <boost/utility/empty_deleter.hpp>
#include <boost/shared_ptr.hpp>
#include <iostream>
#include <exception>

using namespace boost::log;

BOOST_LOG_INLINE_GLOBAL_LOGGER_DEFAULT(lg, sources::wlogger_mt)

void over_here(void)
{
    BOOST_LOG(lg::get()) << L"note2";
}

