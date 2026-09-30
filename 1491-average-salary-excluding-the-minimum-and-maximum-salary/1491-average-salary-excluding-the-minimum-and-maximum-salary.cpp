class Solution {
public:
    double average(vector<int>& salary) {
      double sum = 0;
      int maxsal = INT_MIN;
      int minsal = INT_MAX;
      for(int s: salary){
        sum+=s;
        maxsal= max(s,maxsal);
        minsal = min(s,minsal);
      }
      return (sum - maxsal - minsal)/(salary.size()-2);
    }
};