class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

       
        for (int x : arr) {
            freq[x]++;
        }

        int answer = -1;

 
        for (auto it : freq) {
            int num = it.first;
            int count = it.second;

            if (num == count) {
                answer = max(answer, num);
            }
        }

        return answer;
    }
};