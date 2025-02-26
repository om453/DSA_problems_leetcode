class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
 unordered_map<int, int> map;
        for(auto num : nums){
            if(num%2 == 0){
                map[num]++;
            }
        }
        unordered_map<int, int>::iterator it;
        int maxFreqEvenNumber = -1;
        int maxFreq = 0;
        for(it = map.begin(); it != map.end(); it++){
            if(it->second > maxFreq){
                maxFreq = it->second;
                maxFreqEvenNumber = it->first;
            }
            else if(it->second == maxFreq){
                maxFreqEvenNumber = min(maxFreqEvenNumber, it->first);
            }
        }
        return maxFreqEvenNumber;
    }
};