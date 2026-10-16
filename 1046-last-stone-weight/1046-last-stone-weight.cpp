class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        // Insert all stones into the max heap
        for (int stone : stones) {
            pq.push(stone);
        }

        // Smash the two heaviest stones
        while (pq.size() > 1) {
            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            if (x != y) {
                pq.push(x - y);
            }
        }

        // Return the final stone's weight
        return pq.empty() ? 0 : pq.top();
    }
};