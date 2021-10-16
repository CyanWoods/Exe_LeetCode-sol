/*
 * @lc app=leetcode.cn id=852 lang=c
 *
 * [852] 山脉数组的峰顶索引
 */

// @lc code=start


int peakIndexInMountainArray(int* arr, int arrSize)
{
    int left=0;
    int right=arrSize-1;
    int mid;

    while (left<=right)
    {
        mid=(left+right)/2;
        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid-1])
        {
            left=mid;
        }
        else if (arr[mid] < arr[mid-1])
        {
            right=mid;
        }      
    }
    return NULL;
}
// @lc code=end

