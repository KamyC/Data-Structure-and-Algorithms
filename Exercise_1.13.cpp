/*
���һ����ģ��Collection, ���洢Object����ļ��ϣ���һ�������У���
�Լ��ü��ϵ�ǰ�Ĵ�С���ṩpublic�͵ĺ���isEmpty��makeEmpty��insert��remove��contains.
���ҽ����ü����д��ڵ���x��һ��Objectʱ��contains(x)����true
*/
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
template <typename Object>
class Collection{
private:
	Object obj;
public:
	Collection(){};
	~Collection(){};
	Collection(Object val) :obj(val){};
	Object getObj(){
		return obj;
	}
	bool isEmpty() const{
		return obj.size() ? false : true;
	}

	template<typename T>
	Object insert(T val){
		Object temp;
		temp.resize(obj.size() + 1);
		for (size_t i = 0; i!= obj.size(); i++){
			temp[i] = obj[i];
		}
		temp[temp.size() - 1] = val;
		obj = temp;
		return obj;
	}

	template<typename T>
	bool contains(T val){
		if (obj.size() == 0){
			return false;
		}
		else{
			for (size_t i = 0; i != obj.size(); i++){
				if (obj[i] == val){
					return true;
				}
				else{
					return false;
				}
			}
		}
	}

	template<typename T>
	void remove(T val){
		if (obj.size() == 0){
			return;
		}
		for (size_t i = 0; i != obj.size(); i++){
			if (obj[i] == val){
				obj[i] = NULL;
			}
		}
		Object temp;
		temp.resize(obj.size() - 1); 
		int i = 0;
		for (size_t i = 0; i != obj.size(); i++){
			if (obj[i] != NULL){
				temp[i] = obj[i];
			}
		}
		obj = temp;
	}
	void print(){
		for (size_t i = 0; i != obj.size(); i++){
			cout << obj[i] << " ";
		}
		cout<<endl;
	}
};
int main(){
	vector<int> a = { 1, 2, 3, 4, 5, 6 };
	vector<int> b;
	Collection<vector<int>> c(a);
	Collection < string > str;
	cout << c.getObj()[0] << endl;
	c.insert(11);
	cout << c.getObj()[6] << endl;
	c.remove(11);
	c.print();
	cout << c.contains(11) << endl;
	c.~Collection();
	cout << c.isEmpty() << endl;
	return 0;
}