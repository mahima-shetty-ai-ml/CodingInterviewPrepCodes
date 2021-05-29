#include <iostream>
using namespace std;



void break_with_loop1(int n, int x){
    for(int i = 1; i<=n; i++){
        if(i%x == 0){
            continue;
        }
        else
        {
            cout<<i<<" ";
        }
    }
}


int main() {
	int n,x;
	cin >> n>>x;
	break_with_loop1(n,x);
	return 0;
}
