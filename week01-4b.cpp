///week01-4b.cpp 使用 C++語言 寫
#include <iostream> ///使用 C++語言 外掛
using namespace std; ///使用 C++語言的命名空間

int main()
{
    int a, b;
    cin>> a >> b;; ///C語言 讀資料
    int ans = 0;
    for(int i=a; i<=b; i++){
        if( i%3==0 ) ans += i;
    }
    cout << ans; ///C語言 印資料
}
