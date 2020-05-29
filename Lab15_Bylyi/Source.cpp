#include <iostream>
#include "C_RgzM.h"
#include <vector>
using std::vector;
using std::auto_ptr;
using std::endl;
using std::cin;
using std::cout;
using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;

C_Rgz* creatEl();
void unique_ptr_vect(); 
void auto_ptr_vect();
void shared_ptr_vect();
void weak_ptr_vect();
int main() {

	unique_ptr_vect();
	auto_ptr_vect();
	shared_ptr_vect();
	weak_ptr_vect();
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}
void auto_ptr_vect() {
	vector <C_Rgz*> vect;
	auto_ptr <C_Rgz> pointer1(creatEl());
	auto_ptr<C_Rgz> pointer2(creatEl());
	auto_ptr<C_Rgz> pointer3(creatEl());
	auto_ptr<C_Rgz> pointer4(creatEl());
	vect.push_back(pointer1.get());
	vect.push_back(pointer2.get());
	vect.push_back(pointer3.get());
	vect.push_back(pointer4.get());
	cout << "=======================";
	for (auto var: vect) {
		cout<<endl<< *var<<endl;
	};
	cout << "=======================";
	vect.pop_back();
	cout << "=======================";
	for (auto var : vect) {
		cout << endl << *var << endl;
	};
	cout << "=======================";

}
void unique_ptr_vect() {
	vector <C_Rgz*> vect;
	unique_ptr<C_Rgz> pointer1(creatEl());
	unique_ptr<C_Rgz> pointer2(creatEl());
	unique_ptr<C_Rgz> pointer3(creatEl());
	unique_ptr<C_Rgz> pointer4(creatEl());
	vect.push_back(pointer1.get());
	vect.push_back(pointer2.get());
	vect.push_back(pointer3.get());
	vect.push_back(pointer4.get());
	cout << "=======================";
	for (auto var : vect) {
		cout << endl << *var << endl;
	};
	cout << "=======================";
	vect.pop_back();
	cout << "=======================";
	for (auto var : vect) {
		cout << endl << *var << endl;
	};
	cout << "=======================";

}
void shared_ptr_vect() {
	vector<C_Rgz*> vect;
	shared_ptr < C_Rgz> ptr1(creatEl());
	shared_ptr < C_Rgz> ptr2(creatEl());
	shared_ptr < C_Rgz> ptr3(creatEl());
	shared_ptr < C_Rgz> ptr4(creatEl());
	vect.push_back(ptr1.get());
	vect.push_back(ptr2.get());
	vect.push_back(ptr3.get());
	vect.push_back(ptr4.get());
	cout << "=======================";
	for (auto var : vect) {
		cout << endl << *var << endl;
	};
	cout << "=======================";
	vect.pop_back();
	cout << "=======================";
	for (auto var : vect) {
		cout << endl << *var << endl;
	};
	cout << "=======================";

}
void weak_ptr_vect() {
	
	
		vector<C_Rgz*> vect;
		shared_ptr<C_Rgz>sptr1(creatEl());
		shared_ptr<C_Rgz>sptr2(creatEl());
		shared_ptr<C_Rgz>sptr3(creatEl());
		shared_ptr<C_Rgz>sptr4(creatEl());
		weak_ptr<C_Rgz> ptr1 = sptr1;
		weak_ptr<C_Rgz> ptr2 = sptr2;
		weak_ptr<C_Rgz> ptr3 = sptr3;
		weak_ptr<C_Rgz> ptr4 = sptr4;
		vect.push_back(ptr1.lock().get());
		vect.push_back(ptr2.lock().get());
		vect.push_back(ptr3.lock().get());
		vect.push_back(ptr4.lock().get());
	cout << "=======================";
	for (size_t i = 0; i < 4; i++) {
		cout << endl << *vect[i] << endl;
	};
	cout << "=======================";
}
C_Rgz* creatEl()
{
	int choose;
	cout << "\n1-Rgz\n2-RgzM\nchoose: ";
	cin >> choose;
	cout << endl;
	C_Rgz* a;
	if (choose == 1) {
		a = new C_Rgz;
		cout << "\nObject:";
		cin >> *a;
	}
	else
	{
		a = new C_RgzM;
		cout << "\nObject, mark: ";
		cin >> *a;
	}
	return a;
};