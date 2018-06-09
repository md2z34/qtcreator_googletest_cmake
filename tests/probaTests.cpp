#include <gtest/gtest.h>
#include <seged.h>

TEST(seged_fcns, get_digit)
{
    EXPECT_EQ(get_digit(1234,0),-1);
    EXPECT_EQ(get_digit(1234,1),4);
    EXPECT_EQ(get_digit(1234,2),3);
    EXPECT_EQ(get_digit(1234,3),2);
    EXPECT_EQ(get_digit(1234,4),1);
    EXPECT_EQ(get_digit(1234,5),-1);
}

TEST(seged_fcns, mirror_left2right)
{
    EXPECT_EQ(mirror_left2right(8),8);
    EXPECT_EQ(mirror_left2right(123456),123321);
    EXPECT_EQ(mirror_left2right(1234567),1234321);
}

TEST(seged_fcns, is_palindrome)
{
    EXPECT_TRUE(is_palindrome(66));
    EXPECT_TRUE(is_palindrome(101));
    EXPECT_FALSE(is_palindrome(1012));
}

TEST(seged_fcns, find_closest_palindrome)
{
    EXPECT_EQ(find_closest_palindrome(123),121);
    EXPECT_EQ(find_closest_palindrome(1234),1221);
    EXPECT_EQ(find_closest_palindrome(54321),54345);
    EXPECT_EQ(find_closest_palindrome(100),99);
    EXPECT_EQ(find_closest_palindrome(1000),999);
}


