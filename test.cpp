#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Sign is changed", "[Sign]") {
	REQUIRE(Sign(1) == -1);
	REQUIRE(Sign(-1) == 1);
	REQUIRE(Sign(10) == -10);
	REQUIRE(Sign(-10) == 10);
}

// comment

TEST_CASE("Double is added to each element", "AddN") {
	std::vector<double> vec1 = {1, 1, 1, 1};
	std::vector<double> test1 = AddN(vec1, 1.0);
	std::vector<double> correct1 = {2, 2, 2, 2};
	for (int i = 0; i < (int)test1.size(); i++) {
		REQUIRE(test1[i] == correct1[i]);
	}

	std::vector<double> vec2 = {1, 2, 3, 4};
	std::vector<double> test2 = AddN(vec2, -1.0);
	std::vector<double> correct2 = {0, 1, 2, 3};
	for (int i = 0; i < (int)test2.size(); i++) {
		REQUIRE(test2[i] == correct2[i]);
	}
}
