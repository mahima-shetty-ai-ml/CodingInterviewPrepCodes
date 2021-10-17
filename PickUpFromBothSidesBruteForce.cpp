#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[7] = {1,2,-3,4,-5,6,7};
    int B;
    cin >> B;
    int i = 0;
    int sum = 0;
    int max_sum = -1;
    for(int j = 0; j<B; j++){
        for(int i = 0; i<j; i++){
            sum += A[i];
        }
        for(int k = 6; k>=7-j- 1; k--){
            sum+=A[k];
        }
        if(max_sum<sum){
            max_sum = sum;
        }
        sum = 0;
    }
    cout<<max_sum<<endl;
    // reverse(A, A+7);
    
    return 0;
}
