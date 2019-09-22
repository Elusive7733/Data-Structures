#include <iostream>
#include <cstring>

using namespace std;


void mul(int sum, int a, int b, int count){
	if(count == b){
		cout << sum;
	}
	mul(sum+a, a, b, count+1);
}

int main(){
	int a, b;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	return 0;
}
