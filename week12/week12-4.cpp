// week12-4.cpp 學習計畫 Math 倒數第2題
// LeetCode 43. Multiply Strings 乘數字(字串)
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0"; // 0乘上任何數,都變成0
        int N1 = num1.length(), N2 = num2.length();
        int N = N1 + N2;
        vector<int> ans(N); // 伸縮自如的陣列,長度N
        for(int i=N1-1; i>=0; i--){
            for(int j=N2-1; j>=0; j--){ // 逐項相乘, 放入ans裡
                // nums[i]乘nums[j] 會放到ans[???]
                ans[i+j+1] += (num1[i]-'0') * (num2[j]-'0'); // 放對格子
                if(ans[i+j+1]>9){ // 若有進位
                    ans[i+j] += ans[i+j+1] / 10; // 進到上一位
                    ans[i+j+1] =ans[i+j+1] % 10; // 原位「留餘數」
                }
            }
        }
        string strAns=""; // 一開始,字串裡「甚麼都沒有」
        if  (ans[0]==0){ // 首項是0, 就避開他、不要一開始就在「字串」裡放0喔
            for(int i=1; i<N; i++) strAns += (char)(ans[i]+'0');
        }else{ // 首項不是0,很好, 就從頭到尾,都加到「字串」裡
            for(int i=0; i<N; i++) strAns += (char)(ans[i]+'0');
        }
        return strAns; // 這題要寫很久, 因為很容易出錯
    }
};
