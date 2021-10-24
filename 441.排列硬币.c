/*
 * @lc app=leetcode.cn id=441 lang=c
 *
 * [441] 排列硬币
 */

// @lc code=start


int arrangeCoins(int n){

    if (n==1)
        return 1;
    
    int x=n/2-1;
    do 
    ( 
        x++
    );
    while ((x*(1+x)/2)<=n);
    return x-1;
}
// @lc code=end

