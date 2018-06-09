#include "../include/seged.h"

int get_digit(int number, uint k)
{
    // get_digit(756,1) -> 6
    // get_digit(756,3) -> 7
    // get_digit(756,4) -> -1
    int num_digits = log10(number) + 1;
    std::string s_number = std::to_string(number);
    if (s_number.length()>=k && k>0) {
        return std::stoi(s_number.substr(num_digits-k,1));
    } else {
        return (-1);
    }
}

int mirror_left2right(int number)
{
    // mirror_left2right(12)   -> 11
    // mirror_left2right(123)  -> 121
    // mirror_left2right(1234) -> 1221
    int num_digits = log10(number) + 1;
    std::string s_number = std::to_string(number);
    std::string s_mirrored(s_number);
    std::reverse(s_number.begin(),s_number.end());
    for(int ii=num_digits-1;ii>=num_digits/2;--ii) {
        s_mirrored[ii] = s_number[ii];
    }
    return std::stoi(s_mirrored);
}

bool is_palindrome(int num)
{
    std::string s_number = std::to_string(num);
    std::string s_mirrored(s_number);
    std::reverse(s_mirrored.begin(),s_mirrored.end());
    return (s_number == s_mirrored);
}

int find_closest_palindrome(int num)
{
    for (int ii=1;ii<15;++ii){
        if (num == pow(10,ii)) {
            return pow(10,ii)-1;
        }
    }
    return mirror_left2right(num);
}

