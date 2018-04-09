/*
编写一个递归方法，它返回数N的二进制表示中1的个数。利用这样的事实：如果N是奇数，那么他等于N/2的二进制表示中1的个数加1
*/
#include<iostream>
#include<string>
using namespace std;

//这个是非递归的方法
int conBinary_1(int n){
	int count = 0;
	while (n >0)
	{	
		if (n % 2 == 1){
			count++;
			cout << "count++" << endl;
		};
		n = n / 2;
	}

	return count;
}
//这个是递归的方法
int conBinary_2(int n){
	if (n == 0){
		return 0;
	}
	else if (n % 2 == 1){
		return conBinary_2(n / 2) + 1;
	}
	else{
		return conBinary_2(n / 2);
	};
}


int main(){
	int input;
	cin >> input;
	cout << conBinary_1(input) << endl;
	cout << conBinary_2(input) << endl;
	return 0;
}