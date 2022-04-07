/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize == 0)                           //输入不存在公共前缀
        return "";

    for(int i=0; i < strlen(strs[0]); i++){     //纵向遍历字符串数组
        for(int j=0; j < strsSize; j++){
            if(strs[j][i] != strs[0][i]){       //与的一个字符串同列字符不相同
                strs[0][i] = '\0';              //将第一个字符串从该列结束
                return strs[0];                 //返回的一个字符串
            }
        }
    }

    return strs[0];                             //全部符合则第一个字符串即为最长公共前缀
}

// @lc code=end

