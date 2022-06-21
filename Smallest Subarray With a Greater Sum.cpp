using namespace std;

#include <iostream>
#include <limits>
#include <vector>

class MinSizeSubArraySum {
 public:
  static int findMinSubArray(int S, const vector<int>& arr) {
    // TODO: Write your code here
    int windowsum=0;
    int windowstart=0;
    int len=numeric_limits<int>::max();
    for(int windowend=0 ;windowend<arr.size();windowend++){
     
      windowsum=windowsum+arr[windowend];
      while(windowsum>=S){
          len=min(windowend-windowstart+1 , len);
          windowsum=windowsum-arr[windowstart];
          windowstart++;
      }
    }
    if(len==numeric_limits<int>::max())
       return -1;
    else 
      return len;
  }
};

// Time Complexity : O(N)  Space Complexity : O(1)
