//实现了最简单的暴力算法，还需要学哈希表的用法
/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */



// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* value=malloc(2*sizeof(int));        
    for (int i=0; i<numsSize-1; i++)
    {
        for (int j=i+1; j<numsSize; j++)
        {
            if (nums[i]+nums[j]==target)
            {
                value[0]=i;
                value[1]=j;
                break;
            }
        }
    }
                *returnSize=2;
                return value;
}
// @lc code=end

