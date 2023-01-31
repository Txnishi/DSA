class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int>mp;

        vector<string>ans;
        int c =0;

        for(int i = 0; i<arr.size(); i++){
            if(mp.find(arr[i]) != mp.end()){
                mp[arr[i]]++;
            }else{
                mp[arr[i]] =1;
            }
        }

        for(auto j: arr){
            if((mp[j]==1)&& c==k-1){
                return j;
            }
            if(mp[j]==1) c++;
        }
        
        return "";
    }
};
