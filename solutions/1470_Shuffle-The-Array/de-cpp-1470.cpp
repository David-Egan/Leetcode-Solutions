class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // can we do this in place? 
        
        // work from right of y(n) array swapping with whats in the x array
        vector<int> res;
        
        for(int xPtr = 0; xPtr < nums.size()/2; xPtr++){
            int yPtr = (nums.size()/2)+xPtr;
           
            res.push_back(nums[xPtr]);
            res.push_back(nums[yPtr]);
        }
        
        return res;
        
        
        
        
        for(int i = nums.size()-1; i > nums.size()/2; i--){
            
        }
    }
};