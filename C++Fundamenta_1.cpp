#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

class IntCell{
private:
	int storedValue;
public:
	IntCell(){
		storedValue = 1;
	};
	IntCell(int initialValue){
		storedValue = initialValue;
	}
	int read(){
		return storedValue;
	}
	void write(int x){
		storedValue = x;
	}
};
class IntCell_2{
private:
	int storedValue;
public:
	explicit IntCell_2(int initialValue) :storedValue(initialValue){};
	int read() const{
		return storedValue;
	}
	void write(int x){
		storedValue = x;
	};
};
class IntCell_3{
private:
	int storedValue;
public:
	int read()const;
	void write(int x);
	~IntCell_3();
	IntCell_3(const IntCell_3 &rhs);
	const IntCell_3 &operator=(const IntCell_3 &rhs);
};
int IntCell_3::read()const{
	return storedValue;
}
void IntCell_3::write(int x){
	storedValue = x;
}
IntCell_3::IntCell_3(const IntCell_3 &rhs) :storedValue(rhs.storedValue){};
const IntCell_3 & IntCell_3 ::operator=(const IntCell_3 &rhs){
	if (this!= &rhs){
		storedValue = rhs.storedValue;
	}
	return *this;
}
const string& findMax(const vector<string> &arr){
	int max = 0;
	for (int i = 0; i != arr.size(); i++){
		if (arr[i] > arr[max]){
			max = i;
		}
	}
	return arr[max];
}
class IntCell_4{
private:
	int *storedValue;
public:
	explicit IntCell_4(int intialValue=0);
	IntCell_4(const IntCell &rhs);
	~IntCell_4();
	const IntCell_4 &operator=(const IntCell_4 &rhs);
	int read() const;
	void write(int x);
};
IntCell_4::IntCell_4(int initialValue){
	storedValue = new int(initialValue);
}
IntCell_4::IntCell_4(const IntCell_4 &rhs){
	storedValue = new int(*rhs.storedValue);
}
IntCell_4::~IntCell_4(){
	delete storedValue;
}
const IntCell_4 & IntCell_4::operator=(const IntCell_4 &rhs){
	if (this != &rhs){
		*storedValue = *rhs.storedValue;
	}
	return *this;
}
int main(){
	IntCell m;
	m.write(20);
	cout << m.read() << endl;
	IntCell *p;
	p = new IntCell(10);
	cout<<p->read()<<endl;
	delete p;
	vector<string> arr;
	string res = findMax(arr);
	cout << res << endl;
	return 0;
}