/// week03-4b.cpp 第2種寫法,成功!
/// LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; /// nums[k++] = nums[i] 這種寫法
        for(int i=0; i<nums.size(); i++) /// 全部巡一次
        {
                if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size(); i++)  /// 再巡一次
        {
            nums[i] = 0; ///之後, 塞0的值
        }
    }
};
