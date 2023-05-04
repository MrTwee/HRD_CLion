#include <algorithm>
#include <vector>
#include "median.h"

using std::vector;

int median(const vector<int> &vec)
{
    vector<int> nums =vec;

    std::sort(nums.begin(), nums.end());
    //sorting
    const vector<int>::size_type size = nums.size();
    const int result = (size / 2 ) ? nums[size/2] : (nums[size/2] + nums[size/2-1]) / 2;

    return result;
}


