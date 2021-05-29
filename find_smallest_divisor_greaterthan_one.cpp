#include <iostream>
using namespace std;

// print smallest divisor greater than 1

int smallest_divisor(int n){
    int i;
    for(i =2; i<=n; i++){
        if(n%i == 0){
            break;
        }
    }
    return i;
}



int main() {
	int n;
	cin >> n;
	cout<<smallest_divisor(n);
	return 0;
}
