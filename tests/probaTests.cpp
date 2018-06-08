#include <gtest/gtest.h>
#include <seged.h>

TEST(set, tc1)
{
    EXPECT_EQ(get_digit(1234,0),-1);
    EXPECT_EQ(get_digit(1234,1),4);
    EXPECT_EQ(get_digit(1234,2),3);
    EXPECT_EQ(get_digit(1234,3),2);
    EXPECT_EQ(get_digit(1234,4),1);
    EXPECT_EQ(get_digit(1234,5),-1);
}
