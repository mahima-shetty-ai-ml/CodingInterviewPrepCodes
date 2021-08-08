#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int num, ans = 0;
	cin >> num;
	int copy = num;
	while(num>0){
		ans = ans * 10 + num%10;
		num = num/10;
	}

	if(copy == ans) cout<<"True"<<endl;
	else	cout<<"False"<<endl;
}
