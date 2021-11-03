#include <vector>
#include <string>

using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
	int count = 0;
	int ruleIndex = 0;

	if (ruleKey == "color") 
		ruleIndex = 1;
	
	else if (ruleKey == "name") 
		ruleIndex = 2;
	

	for (vector<string> i : items) {
		if (i[ruleIndex] == ruleValue)
			count++;
	}

	return count;
}

int main() {

}