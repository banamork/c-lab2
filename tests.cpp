#include <iostream>
#include "bernulli.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "Factorials are computed", "[factorial]" ) {
    lemniscata_bernulli test;
    REQUIRE( test.return_distance(60) == 12.7607 );
    REQUIRE( test.radius(60) == 850.715 );
    REQUIRE( test.sector_area(60) == 86.1162 );
    REQUIRE( test.square() == 50 );
}