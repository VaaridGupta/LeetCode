void rotate(int* nums, int n, int k) {
    if (n <= 1) return;

    k = k % n;
    if (k == 0) return;

    int temp[k];

    // Store last k elements
    for (int i = 0; i < k; i++) {
        temp[i] = nums[n - k + i];
    }

    // Shift remaining elements to the right
    for (int i = n - k - 1; i >= 0; i--) {
        nums[i + k] = nums[i];
    }

    // Copy saved elements to the beginning
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}