#include "gtest/gtest.h"

TEST(TestCaseName, Test1)
{
	EXPECT_FALSE(true);
	EXPECT_TRUE(true);
	ASSERT_FALSE(true);
	ASSERT_TRUE(true);
}

TEST(TestCaseName, Test2)
{
	SUCCEED();
	FAIL();
	ADD_FAILURE();
}

TEST(TestCaseName, Test3)
{
	ASSERT_EQ(1,1);
	ASSERT_NE(1,2);
	ASSERT_LT(1,2);
	ASSERT_LE(1,1);
	ASSERT_GT(2,1);
	ASSERT_GE(1,1);
}

TEST(TestCaseName, Test4)
{
	EXPECT_EQ(1,1);
	EXPECT_NE(1,2);
	EXPECT_LT(1,2);
	EXPECT_LE(1,1);
	EXPECT_GT(2,1);
	EXPECT_GE(1,1);
}


TEST(TestCaseName, Test5)
{
	ASSERT_STREQ("Hi","Hi");
	ASSERT_STRNE("Hi","Hi");
	ASSERT_STRCASEEQ("Hi","Hi");
	ASSERT_STRCASENE("Hi","Hi");
}

TEST(TestCaseName, Test6)
{
	EXPECT_STREQ("Hi","Hi");
	EXPECT_STRNE("Hi","Hi");
	EXPECT_STRCASEEQ("Hi","Hi");
	EXPECT_STRCASENE("Hi","Hi");
}

TEST(TestCaseName, Test7)
{
	ASSERT_FLOAT_EQ(0.1,1);
	ASSERT_DOUBLE_EQ(0.1,1);
	ASSERT_NEAR(0.1,1,0.5);
}
