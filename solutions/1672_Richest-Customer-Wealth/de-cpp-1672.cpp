class Solution{
public:
  
    int maximumWealth(vector<vector<int>>& accounts){

        int richestCustomersWealth = 0;

        for(auto customerBanks : accounts){
            int customerWealth = 0;
            customerWealth = accumulate(customerBanks.begin(), customerBanks.end(), customerWealth);

            richestCustomersWealth = (customerWealth > richestCustomersWealth) ? customerWealth : richestCustomersWealth;
        }

        return richestCustomersWealth;
    }
};