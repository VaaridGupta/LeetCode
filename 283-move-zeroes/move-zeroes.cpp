class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        int temp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1)
            return;
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
    }
};
