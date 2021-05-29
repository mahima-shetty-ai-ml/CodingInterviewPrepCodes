#include <iostream>
using namespace std;

void first_digit(int n){
    
    while(n>10){
        n=n/10;
    }
    cout<<n<<endl;
}

int main() {
	
	int n;
	cin >> n;
	first_digit(n);
	return 0;
}
