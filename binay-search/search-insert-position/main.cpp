class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();

        if(target > nums.at(size - 1))
        {
            return size;
        }
        
        for(int k = 0; k < size; k++){
            int nextIndex = k + 1;
            if(nums[k] == target){
                return k;
            }
            if(target > nums[k] && target < nums[nextIndex]) {
                return nextIndex;
            }
        }
        
        return 0;
        
        
    }
};