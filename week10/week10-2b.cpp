/// week10-2b.cpp 學習計畫 Math 第1題
/// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2; /// 大約有一半是奇數
        if(low%2==1 || high%2==1) ans++; /// 有多1個奇數++
        return ans;
    }
};
