// week15-3.cpp 學習計畫 Basic 第5題, 超難、很難想到解法
// LeetCode 459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // 解法卻很簡單, 把 s+s 的頭、尾, 各扣1個字母
        // 再找找看 裡面有沒有 s 本身
        string s2 = s + s; // 兩倍的長度
        string s3 = s2.substr(1, s2.length()-2); // .substr()子字串, 去掉頭尾
        return s3.find(s) != string ::npos; // 右邊叫「沒有找到」
        // 找完後   「如果不是」「沒有找到」就叫作「有找到」
    } // 老師其實寫不出這一題, 因為用到很多進階的觀念、技巧、函式
};
