/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int len = mountainArr.length();

        //if len == 3

        if(len == 3){

            for(int p = 0; p < len; p++){

                if(mountainArr.get(p) == target){
                    return p;
                }

            }

            return -1;

        }

        //finding the peak index of the array

        int i = 1, peak, mid;
        int high = len-2;

        while(i <= high){

            mid = (high+i+1)/2;

            if((mountainArr.get(mid-1) < mountainArr.get(mid)) && (mountainArr.get(mid) > mountainArr.get(mid+1)) ){
                peak = mid;
                break;
            }else if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                i = mid+1;
            } else if( mountainArr.get(mid-1) > mountainArr.get(mid) ){
                high = mid-1;
            }

        }

    

//finding the TARGET in the stricktly increasing plane of the mountain array

        int mid2;
        high = peak;
        i = 0;

        while(i <= high){

            mid2 = (high + i + 1)/2;

            if(mountainArr.get(mid2) == target){
                return mid2;
            }else if(mountainArr.get(mid2) > target){
                high = mid2 - 1;
            }else if(mountainArr.get(mid2) < target){
                i = mid2 + 1;
            }

        }

//finding the TARGET in the stricktly decreasing plane of the mountain array


    int mid3;
    i = peak+1;
    high = len-1;

    while(i <= high){
        
        mid3 = (high + i + 1)/2;

        if(mountainArr.get(mid3) == target){
            return mid3;
        }else if(mountainArr.get(mid3) < target){
            high = mid3 - 1;
            
        }else if(mountainArr.get(mid3) > target){
            i = mid3 + 1;
        }
    }  
        
    return -1;


    }
};
