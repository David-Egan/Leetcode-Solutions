
#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int numslen = nums.size();
    vector<int> ans;

    for (int i = 0; i < (numslen * 2); i++) {
        if (i < numslen) {
            ans.push_back(nums[i]);
        }else{
            ans.push_back(nums[i - numslen]);
        }
    }

    return ans;
}


int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);

    vector<int> results = getConcatenation(nums);

    for (int i : results) {
        cout << i << endl;
    }

    cin;
}
