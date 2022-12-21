class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i!=j){
            if(nums[i]<nums[i+1])
            i++;
            else
            j--;
        }
        return i;

    }
};