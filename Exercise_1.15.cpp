/*
使用图1-23的findMax例程，编写一个main函数来找到按字母顺序排列时，名字在最后面的Employee，忽略大小写。
*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
template<typename Object, typename Comparator>
const Object &findMax(const vector<Object> &arr, Comparator cmp){
	int max = 0;
	for (int i = 1; i != arr.size(); i++){
		if (cmp.isLessthan(arr[max], arr[i])){
			max = i;
		}
	}
	return arr[max];
}
class CaseSensitiveCompare{
public:
	bool isLessthan(const string &lhs, const string &rhs)const {
		return _stricmp(lhs.c_str(), rhs.c_str())<0;
	}
};

int main(){
	vector<string> arr(3);
	arr[0] = "zebra"; arr[1] = "Alligator"; arr[2] = "Crocodile";
	cout << findMax(arr, CaseSensitiveCompare()) << endl;
	return 0;
}