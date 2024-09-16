class Solution {
public:

    vector<int> prevSmallerE(vector<int>& arr) {
        stack<int> st;
        vector<int> v(arr.size(), -1);
        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if (!st.empty()) v[i] = st.top();
            st.push(i);
        }
        return v;
    }

    vector<int> nextSmallerE(vector<int>& arr) {
        stack<int> st;
        vector<int> v(arr.size(), arr.size());
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) st.pop();
            if (!st.empty()) v[i] = st.top();
            st.push(i);
        }
        return v;
    }

    vector<int> prevGreaterE(vector<int>& arr) {
        stack<int> st;
        vector<int> v(arr.size(), -1);
        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            if (!st.empty()) v[i] = st.top();
            st.push(i);
        }

        return v;
    }

    vector<int> nextGreaterE(vector<int>& arr) {
        stack<int> st;
        vector<int> v(arr.size(), arr.size());
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] < arr[i]) st.pop();
            if (!st.empty()) v[i] = st.top();
            st.push(i);
        }

        return v;
    }

    long long sumSubarrayMaxs(vector<int>& arr) {
        vector<int> prevG = prevGreaterE(arr);
        vector<int> nextG = nextGreaterE(arr);

        int n = arr.size();
        long long count = 0;
        for (int i = 0; i < n; i++) {
            long long l = prevG[i];
            long long r = nextG[i];

            count += (i - l) * (r - i) * 1LL * arr[i]; // Use 1LL to ensure multiplication stays in long long
        }
        return count;
    }

    long long sumSubarrayMins(vector<int>& arr) {
        vector<int> prevS = prevSmallerE(arr);
        vector<int> nextS = nextSmallerE(arr);
        int n = arr.size();
        long long count = 0;
        for (int i = 0; i < n; i++) {
            long long l = prevS[i];
            long long r = nextS[i];

            count += (i - l) * (r - i) * 1LL * arr[i]; // Use 1LL for long long multiplication
        }
        return count;
    }

    long long subArrayRanges(vector<int>& nums) {
        long long totalMaxs = sumSubarrayMaxs(nums); // Change to long long
        long long totalMins = sumSubarrayMins(nums); // Change to long long
        return totalMaxs - totalMins;
    }
};
