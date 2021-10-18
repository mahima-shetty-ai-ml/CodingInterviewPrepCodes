int Solution::maxSubArray(const vector<int> &A) {

    //Kadane Algorithm
    int max_sum = INT_MIN;
    int current_sum = 0;

    int n = A.size();

    for(int i = 0; i<n; i++){
        current_sum += A[i];
        if(max_sum<current_sum){
            max_sum = current_sum;
        }
        if(current_sum<0)
            current_sum = 0;
    }
    return max_sum;

}
