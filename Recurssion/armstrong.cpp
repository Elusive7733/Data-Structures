#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int sum, int num, int digits, int original){
	
	if(digits == 0){
	 	return sum; 
	}
	
	armstrong(sum+pow(num%10, 3), num/10, --digits, original);
}
	
int main(){
	
	int N, num;
	cout << "Enter number to check for armstrong number: ";
	cin >> N;
	num = armstrong(0, N, 3, N);
	if(num == N){
		cout << N << " :is a armstrong number";
	}
	else{
		cout << N << " :is not a armstrong number";
	}
	return 0;
}
