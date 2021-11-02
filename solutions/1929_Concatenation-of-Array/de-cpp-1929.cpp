class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int startSize = nums.size();
        
        for(int i = 0; i < startSize; i++){
            nums.push_back(nums.at(i));
        }

        
        return nums;
    }
};