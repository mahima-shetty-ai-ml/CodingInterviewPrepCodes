//recursion method
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


void reverse (char *stri, int begin, int end){

	if(begin>=end){
		return;
	}

	char temp = *(stri + begin);
	*(stri + begin) = *(stri + end);
	*(stri + end) = temp;
	reverse(stri, ++begin, --end); 

}


int main(){

	char stri[1000];
	cin >> stri;

	int count = 0;
	while(stri[count]){
		count++;
	}

	int begin = 0;
	int end = count - 1;

	reverse(stri, begin, end);

	cout << stri;

}




// naive method

#include <iostream>

using namespace std;

int main(){
	char str[1000], rev[1000];
	int i,j, count = 0;
	cin >> str;
	while(str[count]){
		count++;
	}

	j = count - 1;

	for(int i = 0; i<count; i++){
		rev[j] = str[i];
		j--;
	}
	cout<<rev;

}


// stl library

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){

	string input;
	cin >> input;

	reverse(input.begin(), input.end());
	cout<<input<<endl;
	return 0;
}















