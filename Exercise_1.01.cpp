/*
编写一个程序解决选择问题。令k=N/2,画出表格显示你的程序对N取不同值时的运行时间。
*/
/*
1)本程序编写了两个算法，分别为bubblesort和sort_2, 
2)对于bubblesort可以根据需要来决定输入的数组规模N，那么第K大的值必然在第K-1位。
3)对于sort_2，算法结束时，最后的返回值为第K大的。
4）同时利用标准库内的time函数来判断在N不同的时间下，二者的排序时间长短。
*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<time.h>
#include<ctime>
using namespace std;

void showAll(const  vector<int> &arr){
	for (vector<int>::size_type i = 0; i != arr.size(); i++){
		cout << arr[i] << ' ';
	}
	cout << "DONE!" << endl;
}
void bubbleSort(vector<int> &arr){
	for (vector<int>::size_type i = 0; i != arr.size(); i++){
		for (vector<int>::size_type j = i; j != arr.size(); j++){
			if (arr[i] < arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
}
void Sort_2(vector<int> &arr,int k){
	for (int i = 0; i != k+1; i++){//same as bubblesort except the input size.
		for (int j = i; j != k+1; j++){
			if (arr[i] < arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
	//showAll(arr);
	//cout << "start to swap" << endl;
	for (int i = k+1; i != arr.size(); i++){
		if (arr[i] > arr[k]){
			for (int j = 0; j !=k+1 ; j++){
				if (arr[i] > arr[j]){
					swap(arr[i], arr[j]);
					//showAll(arr);
				}
			}
		}
	}

}
void swap(int &a, int &b){
	int temp = b;
	b=a;
	a = temp;
}

void showK(const vector<int> &arr, int k){
	cout << arr[k] << endl;
}
void autoGenerate(vector<int> &arr, int N){
	srand((unsigned) time(NULL));
	for (int i = 0; i != N; i++){
		arr.push_back(rand());
	}
}
int main(){
	vector<int> arr = { 2, 4, 7, 1, 34, 74, 73, 84, 8, 10 };
	int N;
	cin >> N;
	int k = N / 2-1;
	//autoGenerate(arr, N);
	showAll(arr);
	cout << "-------" << endl;
	//double start = clock();
	bubbleSort(arr);
	//double end = clock();
	//cout << end - start << endl;
	showAll(arr);
	cout << "-------" << endl;
	showK(arr, k);
	cout << "-------" << endl;

	vector<int> arr_2 = { 2, 4, 7, 1, 34, 74, 73, 84, 8, 10 };
	Sort_2(arr_2, k);
	showK(arr_2, k);
	return 0;
}