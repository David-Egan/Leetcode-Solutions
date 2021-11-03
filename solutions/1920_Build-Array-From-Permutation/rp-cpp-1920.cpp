#include <vector>

vector<int> buildArray(vector<int>& nums) {
    vector<int> out;

    for (int i : nums) {
        out.push_back(nums[i]);
    }

    return out;
}

int main() {

}
