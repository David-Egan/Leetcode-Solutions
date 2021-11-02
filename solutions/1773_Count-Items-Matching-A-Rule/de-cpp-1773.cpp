class Solution {
public:
    // O(n) solution - iterates through list once building the count
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int matchCount = 0;
        
        // translate ruleKey into corresponding index that key's value can be found.
        int ruleKeyIndex = getRuleKeyIndex(ruleKey);
        
        for(int i = 0; i < items.size(); i++){
            if(items[i][ruleKeyIndex] == ruleValue) matchCount++;
        }
        
        return matchCount;
    }
    
    // translate ruleKey into corresponding index that key's value can be found.
    int getRuleKeyIndex(string ruleKey){
        int ruleKeyIndex = 0;
        
        if(ruleKey == "type") return 0;
        else if(ruleKey == "color") return 1;
        else if(ruleKey == "name") return 2;
        
        return ruleKeyIndex;
    }
};