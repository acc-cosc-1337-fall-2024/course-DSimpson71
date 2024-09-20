#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Verify get_letter_grade_using_if ") 
{
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(50) == "F");
	// Testing outrageous num inputs
	REQUIRE(get_letter_grade_using_if(5300) == "Invalid Input");
	REQUIRE(get_letter_grade_using_if(-10) == "Invalid Input");
	
}


TEST_CASE("Verify get_letter_grade_using_switch")
{
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(75) == "C");
	REQUIRE(get_letter_grade_using_switch(65) == "D");
	REQUIRE(get_letter_grade_using_switch(50) == "F");
	// Testing outrageous num inputs
	REQUIRE(get_letter_grade_using_if(5300) == "Invalid Input");
	REQUIRE(get_letter_grade_using_if(-10) == "Invalid Input");

}