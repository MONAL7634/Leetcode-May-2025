class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=1;
        while(j<n){
            if(nums[i] != nums[j]){ // here we will get a unique element
                i++;
                nums[i] = nums[j];
            }
            j++; // to find unique elements
        }
        return i+1;
    }
};