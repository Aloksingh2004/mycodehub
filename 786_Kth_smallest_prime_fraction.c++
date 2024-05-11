class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double,pair<int,int>>>vec;
        int m,n;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                m=arr[i];
                n=arr[j];
                vec.push_back({double(arr[i])/arr[j],{m,n}});
            }
        }    
        sort(vec.begin(),vec.end());       
        return {vec[k-1].second.first,vec[k-1].second.second};
    }
};