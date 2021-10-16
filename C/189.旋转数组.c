/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 旋转数组
 */

// @lc code=start


void rotate(int* nums, int numsSize, int k)
{
    int p=k%numsSize;
    int tmp[p+1];
    for (int i=0; i<p; i++)
    {
        tmp[i]=nums[numsSize-p+i];
    }

    for (int j=numsSize-1; j>p-1;j--)
    {
        nums[j]=nums[j-p];
    }
    for (int i = 0; i<p; i++)
    {
        nums[i]=tmp[i];
    }
}
// @lc code=end

