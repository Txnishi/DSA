class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        
        int max = *max_element(a.begin(), a.end());
        
        for(int i = 0; i< a.size(); i++){
            if(a[i] == max){
                return i;
            }
        }
        
        return 0;
    }
};