using namespace std;

#include <iostream>
#include <string>
#include <unordered_map>

class LongestSubstringKDistinct {
 public:
  static int findLength(const string& str, int k) {
    int maxLength = 0;
    // TODO: Write your code here
    int windowStart=0;
    unordered_map<char ,int> mp;
    for(int windowEnd=0; windowEnd< str.length();windowEnd++){

        char rightChar = str[windowEnd];
          mp[rightChar]++;
       
       while(mp.size()>k){
           char leftChar = str[windowStart];
           mp[leftChar]--;
        if (mp[leftChar] == 0) {
          mp.erase(leftChar);
        }
       windowStart++;
       }
        maxLength = max(maxLength, windowEnd - windowStart + 1); 
    }
    return maxLength;
  }
};
// Time Complexity : O(N)   Space Complexity : O(K)
