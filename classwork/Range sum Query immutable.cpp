//leetcode
class NumArray {
public:
    vector<int>A;
    NumArray(vector<int>& nums) {
         A= nums;
        int sum = 0;
        int len = A.size();
        for(int i=0; i<len; i++){
            sum+=A[i];
            A[i]=sum;
        }
    }
    
    int sumRange(int left, int right) {
        int result =0;
        if(left == 0){
            result = A[right];
        } else{
            result = A[right] - A[left -1];
        }
        
        return result;
    }
};
