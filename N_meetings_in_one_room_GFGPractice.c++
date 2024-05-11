class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>>vec;
        int min=INT_MIN;
        for(int i=0;i<n;i++){
            vec.push_back({end[i],start[i]});
        }
        sort(vec.begin(),vec.end());
        int a=vec[0].second;
        int b=vec[0].first;
        int count=1;
        for(int i=1;i<vec.size();i++){
            if(vec[i].second>b){
                count++;
                a=vec[i].second;
                b=vec[i].first;
            }
            
        }
        return count;
        
    }
};