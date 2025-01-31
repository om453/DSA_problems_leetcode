class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
     int maxi = releaseTimes[0];
        char lar = keysPressed[0];
        int n = releaseTimes.size();
        for (int i=1; i<n; i++)
        {
            int diff = releaseTimes[i]-releaseTimes[i-1];
            if (diff > maxi)
            {
                maxi = diff;
                lar = keysPressed[i];
            }
            else if (diff == maxi && keysPressed[i] > lar)
                lar = keysPressed[i];
        }

        return lar;    
    }
};