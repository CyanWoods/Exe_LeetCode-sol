/*
 * @lc app=leetcode.cn id=7 lang=java
 *
 * [7] 整数反转
 */

// @lc code=start
//这个没有考虑反转后的数据溢出问题
class Solution {
    public int reverse(int x) {
        int p=0;
        if (x==0)
            return 0;
        else if (x>0)
        {
            for (int n=x;n>0; n/=10)
            {
                int s=n%10;
                p=p*10+s;
                if (p>Integer.MAX_VALUE / 10)
                    return 0;
            }
        }
        else if (x<0)
        {
            for (int n=x;n<0; n/=10)
            {
                int s=n%10;
                p=p*10+s;
            if (p<Integer.MIN_VALUE / 10)
            return 0;
            }
        }
    return p;
    }
}
// @lc code=end

