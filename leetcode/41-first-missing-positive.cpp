#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])
        {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
            return i + 1;
    }
    return n + 1;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int &x : nums)
            cin >> x;

        cout << firstMissingPositive(nums) << "\n";
    }
    return 0;
}