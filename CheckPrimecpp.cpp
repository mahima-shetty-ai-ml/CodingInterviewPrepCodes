#include<iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

bool prime(int number){
	if(number<=1){
		return false;
	}
	int flag = 0;
	for(int i = 2; i<=sqrt(number); i++){
		if(number%i == 0){
		 flag = 1;
		 break;
		}
	}
	if(flag){
		return false;
	}
	else{
		return true;
	}

}


int main(){
	int number;
	cin >> number;




	if(prime(number)){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not prime"<<endl;
	}
}
