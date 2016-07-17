#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE DemoTests
#endif

#include <boost/test/unit_test.hpp>
#include "../src/shared/Bar.hpp"


BOOST_AUTO_TEST_SUITE(bar_suite)

    BOOST_AUTO_TEST_CASE(constructor_test)
    {
        Bar bar("fooey");

        BOOST_CHECK_EQUAL(bar.get(), "fooey");
    }

BOOST_AUTO_TEST_SUITE_END()