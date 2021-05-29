//     *
//    **
//   ***
//  ****
// *****
// Type of triangle 2

#include <iostream>
using namespace std;

void print_triangles(int n){
    for(int i = 1; i<=n; i++){
        for(int j = n-i; j>=1;j--){
            cout<<" ";
        }
        for(int k =1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main() {
	int n;
	cin >> n;
	print_triangles(n);
	return 0;
}
