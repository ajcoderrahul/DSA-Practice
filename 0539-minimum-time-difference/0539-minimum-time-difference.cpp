class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>mins;
        for(int i = 0;i<timePoints.size();i++){
            int hours = stoi(timePoints[i].substr(0,2));
            int minutes = stoi(timePoints[i].substr(3,2));
            int total = hours*60 + minutes;
            mins.push_back(total);
        }
        sort(mins.begin(),mins.end());
        int n = mins.size();
        int mini = INT_MAX;

        for(int i = 0;i<n-1;i++){
            int ans  = mins[i+1]-mins[i];
            mini = min(ans,mini);
        }
        int last = (mins[0]+1440) - mins[n-1];
        mini = min(last,mini);
        return mini;
    }
};