class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() <= 1)
            return;

        k = k % nums.size();
        if (k == 0)
            return;

        int temp[k];

        // Store last k elements
        for (int i = 0; i < k; i++) {
            temp[i] = nums[nums.size() - k + i];
        }

        // Shift remaining elements to the right
        for (int i = nums.size() - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Copy saved elements to the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};