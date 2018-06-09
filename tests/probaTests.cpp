#include <gtest/gtest.h>
#include <seged.h>

TEST(seged_fcns, tc1)
{
    EXPECT_EQ(get_digit(1234,0),-1);
    EXPECT_EQ(get_digit(1234,1),4);
    EXPECT_EQ(get_digit(1234,2),3);
    EXPECT_EQ(get_digit(1234,3),2);
    EXPECT_EQ(get_digit(1234,4),1);
    EXPECT_EQ(get_digit(1234,5),-1);
}

TEST(seged_fcns, tc2)
{
    EXPECT_EQ(mirror_left2right(8),8);
    EXPECT_EQ(mirror_left2right(123456),123321);
    EXPECT_EQ(mirror_left2right(1234567),1234321);
}
