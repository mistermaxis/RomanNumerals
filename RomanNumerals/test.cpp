#include "pch.h"

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

std::string arabic_to_roman(int arabic)
{
	std::string roman;
	while (arabic >= 1)
	{
		roman += "I";
		arabic--;
	}
	return roman;
}

TEST(RomanNumerals, 1_is_converted_to_I) {
	ASSERT_EQ("I", arabic_to_roman(1));
}

TEST(RomanNumerals, 2_is_converted_to_II) {
	ASSERT_EQ("II", arabic_to_roman(2));
}

TEST(RomanNumerals, 3_is_converted_to_III) {
	ASSERT_EQ("III", arabic_to_roman(3));
}