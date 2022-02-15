class Solution {
public:
    int firstBadVersion(int n) {
        int res = 1;
        
        if(n < res)
        {
           return res;
        }
        
        int left=1; //start of array
        int right=n; //end of array
        
        while(left <= right){
            int mid = left + (right - left) / 2; //calc the mid of array
            
            if(isBadVersion(mid)){
                res = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return res;
    }
};

