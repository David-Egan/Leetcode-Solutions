class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result;
        
        result.push_back(first);
        
        for(int i = 1; i < encoded.size()+1; i++){
            int next_num = encoded.at(i-1) ^ result.at(i-1);
            result.push_back(next_num);
                // Sad attempt at Algebra to solve for arr[i]
            
                // encoded[i] = arr[i] XOR arr[i+1]
                // encoded[i-1] = arr[i-1] XOR arr[i]
                // (XOR arr[i-1])(encoded[i-1]) = (XOR arr[i-1])(arr[i-1] XOR arr[i])
                // encoded[i-1] XOR arr[i-1] = arr[i]
                // arr[i] = encoded[i-1] XOR arr[i-1]
                
        }
        
        return result;
    }
};