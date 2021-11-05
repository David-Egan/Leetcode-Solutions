#include <vector>

vector<int> runningSum(vector<int>& nums) {
    int lastNum = 0;
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = lastNum + nums[i];
        lastNum = nums[i];
    }

    return nums;
}

int main() {

}