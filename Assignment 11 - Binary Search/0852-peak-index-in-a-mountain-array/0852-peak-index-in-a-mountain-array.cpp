class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        
        
        
        int len = a.size()-1, i =0, mid;
        
        while(i<=len){
            mid = (len+i+1)/2;
            
            if((a[mid-1] < a[mid]) && (a[mid] > a[mid+1])){
                return mid;
            }else if(a[mid]< a[mid+1]){
                i = mid+1;
            }else if(a[mid-1] > a[mid]){
                len = mid-1;
            }
            
        }
        
        return mid;
    }
};