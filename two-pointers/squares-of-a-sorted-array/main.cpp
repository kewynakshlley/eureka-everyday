class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> squaredNums(size, 0);
        
        int k = 0;
        int j = size - 1;
        int index = size - 1;
        
        while(k <= j){
            int multiK = nums[k] * nums[k];
            int multij = nums[j] * nums[j];
            
            if(multiK > multij){
                squaredNums[index--] = multiK;
                k++;
            }else {
                squaredNums[index--] = multij;
                j--;
            }
            
            
        }
        
        return squaredNums;
    }
};