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
		if (cmp.isLessthan(arr[max],arr[i])){
			max = i;
		}
	}
	return arr[max];
}
class CaseSensitiveCompare{
public:
	bool isLessthan(const string &lhs, const string &rhs){
		return strcmp(lhs.c_str(), rhs.c_str())<0;
	}
};

int main(){
	vector<string> arr(3);
	arr[0] = "Zebra"; arr[1] = "Alligator"; arr[2] = "crocodile";
	cout << findMax(arr, CaseSensitiveCompare()) << endl;
	return 0;
}