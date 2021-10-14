// Time Complexity : O(logn)
// Space Complexity :O(1)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : NO


// Your code here along with comments explaining your approach

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int mid;
        int end = nums.size()-1;
        
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            
            if(nums[start]<=nums[mid]){
                if(nums[mid]>target && nums[start]<=target){
                 end = mid-1;
                 }
                else{
                    start = mid+1;
                 }
            }
            else{
                 if(nums[mid]<target && nums[end]>=target){
                 start = mid+1;
                 }
                else{
                    end = mid-1;
                 }
            }
        }
        return -1;
    }
};
