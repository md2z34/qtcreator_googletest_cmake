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
