#include <iostream>
#include <cmath>
using namespace std;



int isPrime(int i)
{
    for(int x = 2; x<=sqrt(i); x++)
    {
        if(i%x == 0)
        {
            return false;
        }
    }
    return true;
}

void prime_factors(int n){
    for(int i =2; i<=n; i++){
        if(isPrime(i)){
            int x = i;
            while(n%x == 0)
            {
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
}


int main() {
	int n;
	cin >> n;
	prime_factors(n);
	
	return 0;
}
