#include <iostream>
#include "bernulli.hpp"
#include <cmath>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "Factorials are computed", "[factorial]" ) {
    std::cout << "Тест запущен." << std::endl;
    lemniscata_bernulli test;
    REQUIRE( round(test.return_distance(60)*10000)/10000 == 12.7607 );
    REQUIRE( round(test.radius(60)*1000)/1000 == 850.715 );
    REQUIRE( round(test.sector_area(60)*10000)/10000 == 86.1162 );
    REQUIRE( test.square() == 50 );
}
