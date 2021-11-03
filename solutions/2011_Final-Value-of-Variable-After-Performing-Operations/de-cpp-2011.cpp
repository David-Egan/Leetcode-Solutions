class Solution {
public:
    // O(n) time
    int finalValueAfterOperations(vector<string>& operations) {
        int answer = 0;
        
        for(string op : operations){
            answer = (op.at(1) == '+') ? answer+1 : answer-1;
        }
        
        return answer;
    }
};