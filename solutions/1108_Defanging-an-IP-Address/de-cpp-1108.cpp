class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        
        for(char currChar : address){
            if(currChar == '.'){
                res += "[.]";
            } else{
                res += currChar;    
            }
            
        }
        
        return res;
    }
};
