#include <algorithm>
#include <iostream>
#include <vector>

int square(int i)
{
    return i * i;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> v(nums, nums + 10);

    std::vector<int> result;
    std::transform(v.cbegin(), v.cend(), std::back_inserter(result), square);

    return 0;
}
