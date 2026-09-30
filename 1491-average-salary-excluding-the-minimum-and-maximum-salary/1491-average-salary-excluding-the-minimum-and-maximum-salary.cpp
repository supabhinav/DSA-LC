class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;

        for (int s : salary) {
            sum += s;
            minSalary = min(minSalary, s);
            maxSalary = max(maxSalary, s);
        }

        return (sum - minSalary - maxSalary) / (salary.size() - 2);
    }
};