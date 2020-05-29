#include "C_Rgz.h"
#include "C_RgzM.h"
#include <vector>
#include <map>
#include <set>
#include <list> 
#include <algorithm>
using std::vector;
using std::map;
using std::list;
using std::set;
using std::endl;
using std::make_pair;
using std::find_if;
void menu();
C_Rgz* tempclass;
C_Rgz* creatEl();
int main() {

	menu();
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}
void menu() {
	short int choose = 1;
	vector<C_Rgz*> vect;
	vector<C_Rgz*>::iterator itv;
	int count=0;
	while (choose != -1) {
		cout << "\n1-add\n2-delete\n3-show element\n4-show all\n5-find el\n6-count elem\n-1-exit\nchoose way: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			vect.push_back(creatEl());
			break;
		case 2:
			cout << "num: ";
			cin >> choose;
			if (!vect.empty()&& 0 < choose<vect.size()) {
				itv = vect.begin();
				delete* (itv + choose);
				vect.erase(itv + choose);
			}
			break;
		case 3:
			cout << "num: ";
			cin >> choose;
			if (!vect.empty() && 0 < choose < vect.size()) {
				cout<<vect.at(choose)->getString();
			}
			
			break;
		case 4:
			for  (C_Rgz* var : vect)
			{
				cout << var->getString()<<endl;
			}
			break;
		case 5: 
			tempclass=creatEl();
			if (find_if(vect.begin(), vect.end(), [](C_Rgz* a) {

				return a->getString() == tempclass->getString();
				}) != vect.end()) {
				cout << "element fount" << endl;
			}
			else {
				cout << "element not found " << endl;
				}
			delete tempclass;
			break;
		case 6:
			tempclass = creatEl();
			for (C_Rgz* var : vect) {
				if (var->getString() == tempclass->getString()) {
					count++;
				}
			}
			cout << "count: "<<count << endl;
			count = 0;
			delete tempclass;
		default:
			break;
		}
		
	}
	for (C_Rgz* var : vect)
	{
		delete var;
	}
	choose = 0;
	list <C_Rgz*> lis;
	list<C_Rgz*>::iterator itl;
	while (choose != -1) {
		cout << "\n1-add\n2-delete\n3-show element\n4-show all\n5-find el\n6-count elem\n-1-exit\nchoose way: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			lis.push_back(creatEl());
			break;
		case 2:
			cout << "num: ";
			cin >> choose;
			if (!lis.empty() && 0<choose < lis.size()) {
				itl = lis.begin();
				for (int i = 0; i < choose; i++) {
					itl++;
				}
				delete* itl;
				lis.erase(itl);
			}
			break;
		case 3:
			cout << "num: ";
			cin >> choose;
			if (!lis.empty() && 0 < choose < lis.size()) {
				itl = lis.begin();
				for (int i = 0; i < choose; i++) {
					itl++;
				}
				cout << (*itl)->getString() << endl;
			}
			break;
		case 4:
			for (C_Rgz* var : lis)
			{
				cout << var->getString() << endl;
			}
		case 5:
			tempclass = creatEl();
			if (find_if(lis.begin(), lis.end(), [](C_Rgz* a) {

				return a->getString() == tempclass->getString();
				}) != lis.end()) {
				cout << "element fount" << endl;
			}
			else {
				cout << "element not found " << endl;
			}
			delete tempclass;
			break;
		case 6:
			tempclass = creatEl();
			for (C_Rgz* var : lis) {
				if (var->getString() == tempclass->getString()) {
					count++;
				}
			}
			cout << "count: " << count << endl;
			count = 0;
			delete tempclass;
			break;
		default:
			break;
		}
	}
	for (C_Rgz* var : lis)
	{
		delete var;
	}
	bool prz=1;
	choose = 0;
	int key=0;
	vector<int> keymass;
	map <int,C_Rgz*> mp;
	map<int, C_Rgz*>::iterator itm;
	while (choose != -1) {
		cout << "\n1-add\n2-delete\n3-show element\n4-show all\n5-find el\n6-count elem\n-1-exit\nchoose way: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "\nkey: ";
			cin >> key;
			for (int i = 0; i < keymass.size(); i++) {
				if (key == keymass[i]) {
					prz = 0;
				}
			}
			if (prz) {
				mp.insert(make_pair(key, creatEl()));
				keymass.push_back(key);
			}
			prz = 1;
			break;
		case 2:
			cout << "\nkey: ";
			cin >> key;
			itm = mp.find(key);
			if (itm != mp.end()) {
				delete itm->second;
				
				mp.erase(key);
				for (int i = 0; i < keymass.size(); i++) {
					if (key == keymass[i]) {
						keymass.erase(keymass.begin()+i);
					}
				}
			}
			break;
		case 3:
			cout << "key: ";
			cin >> key;
			itm = mp.find(key);
			if (itm != mp.end())
				cout << itm->first<<" "<<itm->second->getString();
			break;
		case 4:
			for (int var : keymass) {
				itm = mp.find(var);
				if (itm != mp.end())
					cout << itm->first << " " << itm->second->getString()<<endl;
			}
			break;
		
		case 5: 
			tempclass = creatEl();
			if (find_if(mp.begin(), mp.end(), [](auto a) {

				return a.second->getString() == tempclass->getString();
				}) != mp.end()) {
				cout << "element fount" << endl;
			}
			else {
				cout << "element not found " << endl;
			}
			delete tempclass;
			break;
		case 6:
			tempclass = creatEl();
			for (auto var : mp) {
				if (var.second->getString() == tempclass->getString()) {
					count++;
				}
			}
			cout << "count: " << count << endl;
			count = 0;
			delete tempclass;
			break;
		default:
			break;
		}
	}
	for (int var : keymass) {
		itm = mp.find(var);
		if (itm != mp.end())
			delete itm->second;
	}
	prz = 0;
	int is=0;
	choose = 0;
	C_Rgz* el;
	// key = 0;
	//vector<C_Rgz*> keymass;
	set <C_Rgz*> st;
	set <C_Rgz*>::iterator its;
	while (choose != -1) {
		cout << "\n1-add\n2-delete\n3-show element\n4-show all\n5-find el\n6-count elem\n-1-exit\nchoose way: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			st.insert(creatEl());
			break;
		case 2:
			el = creatEl();
			its = st.begin();
			for (C_Rgz* var : st)
				if (var->getString() == el->getString()&&!prz) {
					prz = 1;
					for (int i = 0; i < is; i++)
						its++;
					break;
				}
				else {
					if(!prz)
					is++;
				}
			if (prz) {
				delete* its;
				st.erase(its);
			}
			delete el;
			break;
		case 3:
			el = creatEl();
			for (C_Rgz* var : st)
				
				if (el->getString() == var->getString()) {
					cout << var->getString()<<endl;
				}
			delete el;

			break;
		case 4:
			for (C_Rgz* var : st)
				cout << var->getString() << endl;
			break;
		case 5:
			tempclass = creatEl();
			if (find_if(st.begin(), st.end(), [](auto a) {

				return a->getString() == tempclass->getString();
				}) != st.end()) {
				cout << "element fount" << endl;
			}
			else {
				cout << "element not found " << endl;
			}
			delete tempclass;
			break;
		case 6:
			tempclass = creatEl();
			for (auto var : st) {
				if (var->getString() == tempclass->getString()) {
					count++;
				}
			}
			cout << "count: " << count << endl;
			count = 0;
			delete tempclass;
			break;
		default:
			break;
		}
	}
	for (C_Rgz* var : st)
		delete var;
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