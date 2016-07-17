#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE DemoTests
#endif

#include <boost/test/unit_test.hpp>
#include "../src/shared/Foo.hpp"


BOOST_AUTO_TEST_SUITE(foo_suite)

    BOOST_AUTO_TEST_CASE(constructor_test)
    {
        Foo foo(3);

        BOOST_CHECK_EQUAL(foo.doubleValue(), 6);
    }

BOOST_AUTO_TEST_SUITE_END()