using namespace std;

#include <iostream>
#include <vector>

class MaxSumSubArrayOfSizeK {
 public:
  static int findMaxSumSubArray(int k, const vector<int>& arr) {
    int maxSum = 0;
    // TODO: Write your code here
    int windowsum=0;
    int windowstart=0;
    for(int windowend=0; windowend<arr.size();windowend++){
        windowsum=windowsum+arr[windowend];
        if(windowend>=k-1){
          maxSum=max(windowsum,maxSum);
          windowsum=windowsum-arr[windowstart];
          windowstart++;
        }
    }
    return maxSum;
  }
};
