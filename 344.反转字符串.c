/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */

// @lc code=start


void reverseString(char* s, int sSize){
    char t = *a;
    *a = *b, *b = t;
}

void reverseString(char *s, int sSize) {
    for (int left = 0, right = sSize - 1; left < right; ++left, --right) {
        swap(s + left, s + right);
    }
}
// @lc code=end

