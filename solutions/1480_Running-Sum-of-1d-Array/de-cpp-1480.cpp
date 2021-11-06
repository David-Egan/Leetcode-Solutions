class Solution {
public: 
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int lastResult = 0;
        
        
        for(int i = 0; i < nums.size(); i++){
            
            result.push_back(lastResult + nums[i]);
            lastResult = result[i];
        }
        
        return result;
    }
};
