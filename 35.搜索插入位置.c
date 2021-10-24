/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target)
{
    int left=0;
    int right=numsSize-1;
    int mid;

    while (left<=right)
    {
        mid =(right+left)/2;
        if (nums[mid]<target)
            left=mid+1;
        else if (nums[mid]>target) 
            right= mid-1;
        else 
            return mid;
    }    
    if(nums[mid] > target)              //若mid指向的值小于目标值，则目标值插入它之前，否则插入它之后
        return mid;
    else
        return mid+1;
}
// @lc code=end

