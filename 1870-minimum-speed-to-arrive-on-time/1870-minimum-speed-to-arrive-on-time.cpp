class Solution {
public:
    bool reach(vector<int>& dist, double hour,int mid){
        double time = 0.0;
        for(int i = 0;i<dist.size();i++){
            double t = (double)dist[i]/mid;
            if(i != dist.size()-1){
                time += ceil(t);
            }else{
                time += t;
            }

        }
        return time <= hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s = 1;
        int e = (int)1e7;
        int ans = -1;
        while(s <=e){
            int mid = s+(e - s)/2;
            if(reach(dist,hour,mid)){
                ans = mid;
                e = mid-1;
            }else{
               s= mid+1;
            }
        }
    return ans;
    }
};