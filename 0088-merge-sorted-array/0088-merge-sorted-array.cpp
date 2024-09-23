class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Declare 2 pointers:
        int left = m - 1;  
        int right = 0;

        // Swap the elements until nums1[left] is smaller than nums2[right]:
        while (left >= 0 && right < n) {  
            if (nums1[left] > nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--, right++;
            } else {
                break;
            }
        }

        // Sort nums1[] and nums2[] individually using iterators:
        sort(nums1.begin(), nums1.begin() + m); // Sort the first 'm' elements of nums1
        sort(nums2.begin(), nums2.end()); // Sort the entire nums2 array

        // Copy nums2 into nums1 starting at index 'm':
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
