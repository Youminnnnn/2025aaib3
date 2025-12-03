// week13-4.cpp 聖誕節倒數寫程式 Advent of Code 2025
// 第1題 --- Day 1: Secret Entrance --- 神秘的入口
// 我們利用 LeetCode 有個功能 My Playground 我的遊戲場 可以寫程式(右下角放stdin輸入)
// LeetCode 會幫我們 #include 全部的東西, 所以前面甚麼都不用寫

int main() {
    char c; // 每一行, 有一個英文
    int d; // 有一個數字
    int now = 50; // 現在的刻度是在50
    int ans = 0; // 刻度有「指到幾次0」
    while( cin >> c >> d ){
        // if(c=='L') cout << "往左轉" << d << "格\n";
        // if(c=='R') cout << "往右轉" << d << "格\n";

        if(c=='L') now -=d; // 往左轉, 減掉它
        if(c=='R') now +=d; // 往右轉, 加上它

        now = (now % 100 + 100) % 100; // 取餘數
        if(now==0) ans++; // 刻度有「指到幾次0」
        // cout << "現在到達格子刻度" << now << "\n";
    }
    cout <<　"答案是:" << ans;
}
// 先把題目的 Input 貼到右下角
/*
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/
