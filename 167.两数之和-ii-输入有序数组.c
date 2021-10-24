/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int* value= (int*) malloc(sizeof(int)*2);
    *returnSize=2;

    int left=0;
    int right=numbersSize-1;

    while (left<right)
    {
        int sum=numbers[left]+numbers[right];
        if(sum>target)
            right--;
        else if (sum<target)
            left++;
        else
        {
            value[0]=left+1;
            value[1]=right+1;
            break;
        }
    }
    return value;
}
// @lc code=end

