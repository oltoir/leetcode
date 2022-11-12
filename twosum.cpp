
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // make a vector nums
    vector<int> nums = {3, 2, 4};
    vector<int> ans;
    int target = 6;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                bool flag = nums[i] + nums[j] == target;
                cout << flag << endl;
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Answer: " << ans[i] << ",";
    }
}