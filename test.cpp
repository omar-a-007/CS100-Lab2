#include "header/c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));
}


TEST(EchoTest, EmptyString){
        char* test_val[1]; test_val[0] = "./c-echo";
        EXPECT_EQ("", echo(1, test_val));	
}

TEST(EchoTest, IndentedString){
        char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "\t"; test_val[2] = "hello"; test_val[3] = "world";
        EXPECT_EQ("\t hello world", echo(4, test_val));
}

TEST(EchoTest, MultiLineString){
        char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "\n"; test_val[3] = "world";
        EXPECT_EQ("hello \n world", echo(4, test_val));
}

TEST(EchoTest, SpecialCharacters){
        char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "~!@#$%^&*()_+{}`=-/[]<>";
        EXPECT_EQ("~!@#$%^&*()_+{}`=-/[]<>", echo(2, test_val));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
