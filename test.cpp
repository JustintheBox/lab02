#include "c-echo.h"
#include "c-count.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));

}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
	
}

TEST(EchoTest, Algebraic_Expression) {
	char* test_val[6]; 
	test_val[0] = "./c-echo"; 
	test_val[1] = "(2+3)"; 
	test_val[2] = "-"; 
	test_val[3] = "(1*4)";
	test_val[4] = "=";
	test_val[5] = "1";
	EXPECT_EQ("(2+3) - (1*4) = 1", echo(6, test_val));

}


TEST(EchoTest, Newline_Quotes_Strings) {
        char* test_val[5]; 
	test_val[0] = "./c-echo"; 
	test_val[1] = "\"Christian\""; 
	test_val[2] = "\n"; 
	test_val[3] = "\'Maristela\'"; 
	test_val[4] = "\n";
        EXPECT_EQ("\"Christian\" \n \'Maristela\' \n", echo(5, test_val));

}

TEST(EchoTest, SpacingString) {
	char* test_val[6]; 
	test_val[0] = "./c-echo"; 
	test_val[1] = " ";
	test_val[2] = " "; 
	test_val[3] = "Center"; 
	test_val[4] = " ";
	test_val[5] = " ";
        EXPECT_EQ("    Center    ", echo(6, test_val));
}

TEST(CountTest, HelloWorld) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(CountTest, EmptyString) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(CountTest, ManySpaces) {
    std::string test_str = "   this   string has     weird   spacing";
    EXPECT_EQ(5, count(test_str));
}




int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
