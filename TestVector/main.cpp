#include <iostream>
#include <vector>
#include ...
using std::cin; using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1;
    vector<int> v2(10);

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    vector<int> v3(nums, nums + 10);

    vector<int> v4 = v3;

    return 0;
}
