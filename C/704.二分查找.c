/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start


int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize;
    
    while (left < right) {
        int idx = left + (right - left) / 2;
        if (nums[idx] == target) {
            return idx;
        } else if (nums[idx] > target ) {        
            right = idx;
        } else {
            left = idx + 1;
        }
    }
    return -1;
}
// @lc code=end

