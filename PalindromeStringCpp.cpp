#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

	char input[100];
	cin >> input;

	int length = strlen(input);
	int flag = 0;
	int i = 0;
	int l = length - 1;

	// while(input[i]==)
	for(int i = 0; i<length; i++){
		if(input[i] != input[l-i]){
			flag = 1;
			break;
		}
	}

	if(flag == 1){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}


}
