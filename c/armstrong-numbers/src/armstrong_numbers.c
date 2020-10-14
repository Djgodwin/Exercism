#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {
    int radix = 1;
    int digit_num = (int) floor(log10(candidate)) + 1;
    int sum = 0;
    int temp = candidate;

    while (temp > 0)
    {
        int digit = temp % 10;
        temp = temp / ((int) pow(10.0, (double)radix));
        sum += (int) pow(digit, digit_num);
    }

    return (sum == candidate) ? true : false;
}
