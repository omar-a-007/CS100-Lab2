#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./echo";
	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, Numbers) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "7";
	EXPECT_EQ("1 7", echo(3, test_val));
}

TEST(EchoTest, MyName) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Sevak"; test_val[2] = "Ohanian";
	EXPECT_EQ("Sevak Ohanian", echo(3, test_val));
}

TEST(EchoTest, ThreeWords) {
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "These"; test_val[2] = "are"; test_val[3] = "three.";
	EXPECT_EQ("These are three.", echo(4, test_val));
}



int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
