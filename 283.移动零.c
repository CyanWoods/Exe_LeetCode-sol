/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start

//unfinished

void moveZeroes(int* nums, int numsSize)
{
    for (int i=0; i<numsSize; i++)
    {
        int j=i;
        if (nums[j]==0)
        {
            nums[i]=nums[j+1];
            j=j+2;
        }
    }
}
// @lc code=end

