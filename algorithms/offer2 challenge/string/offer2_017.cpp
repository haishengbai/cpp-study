#include <iostream>
#include <vector>
using namespace std;

/*
剑指 Offer II 017. 含有所有字符的最短字符串

给定两个字符串 s 和 t 。返回 s 中包含 t 的所有字符的最短子字符串。如果 s 中不存在符合条件的子字符串，则返回空字符串 "" 。

如果 s 中存在多个符合条件的子字符串，返回任意一个。

 

注意： 对于 t 中重复字符，我们寻找的子字符串中该字符数量必须不少于 t 中该字符数量。

 

示例 1：

输入：s = "ADOBECODEBANC", t = "ABC"
输出："BANC" 
解释：最短子字符串 "BANC" 包含了字符串 t 的所有字符 'A'、'B'、'C'
示例 2：

输入：s = "a", t = "a"
输出："a"
示例 3：

输入：s = "a", t = "aa"
输出：""
解释：t 中两个字符 'a' 均应包含在 s 的子串中，因此没有符合条件的子字符串，返回空字符串。
 

提示：

1 <= s.length, t.length <= 105
s 和 t 由英文字母组成

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/M1oyTv


*/

class Solution {
public:
    string minWindow(string s, string t) {
        int s_length = s.length();
        int t_length = t.length();

        int min_length = 0;

        if (s_length < t_length)
        {
            return "";
        }
        

        vector<int> counts(52);
        for (int i = 0; i < t_length; i++)
        {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        

    }
};