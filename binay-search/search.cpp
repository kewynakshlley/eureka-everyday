class Solution {
public:
    int search(vector<int>& nums, int target) {
        int result = -1;
        for(int k = 0; k < nums.size(); k++){
            if(nums[k] == target){
                result = k;
            }
        }
        return result;
    }
};
