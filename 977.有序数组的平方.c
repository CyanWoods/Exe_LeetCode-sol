/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int* sorted = (int*)malloc(sizeof(int)*numsSize);

    int head = 0;
    int tail = numsSize-1;
    int tracker;

    for (tracker=numsSize-1; tracker>-1;tracker--)
    {
        if ((nums[head]*nums[head])>(nums[tail]*nums[tail]))
        {
            sorted[tracker]=nums[head]*nums[head];
            head++;
        }
        else 
        {
            sorted[tracker]=nums[tail]*nums[tail];
            tail--;
        }
    }
    *returnSize = numsSize;
    return sorted;
}
// @lc code=end

