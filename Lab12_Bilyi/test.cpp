#include "C_Rgz.h"
#include "C_RgzM.h"
#include <vector>
#include <map>
#include <set>
#include <list> 
using std::vector;
using std::map;
using std::list;
using std::set;
using std::endl;
using std::make_pair;
short int choose = 1;
int main(){
	vector<C_Rgz*> vect;
	vector<C_Rgz*>::iterator itv;
	vect.push_back(new C_Rgz);
		
	if (vect.size() == 1)
		cout << "test 1: true" << endl;
	else
		cout << "test 1: false"<<endl;
	itv = vect.begin();
	delete* (itv);
	vect.erase(itv);
	if (vect.size() == 0)
		cout << "test 2: true" << endl;
	else
		cout << "test 2: false" << endl;
		
for (C_Rgz* var : vect)
{
	delete var;
}
list <C_Rgz*> lis;
list<C_Rgz*>::iterator itl;
		lis.push_back(new C_Rgz);

		if (lis.size() == 1)
			cout << "test 3: true" << endl;
		else
			cout << "test 3: false" << endl;
			itl = lis.begin();
			delete* itl;
			lis.erase(itl);

			if (lis.size() == 0)
				cout << "test 4: true" << endl;
			else
				cout << "test 4: false" << endl;

for (C_Rgz* var : lis)
{
	delete var;
}
map <int, C_Rgz*> mp;
map<int, C_Rgz*>::iterator itm;
			mp.insert(make_pair(50, new C_Rgz));

			if (mp.size() == 1)
				cout << "test 5: true" << endl;
			else
				cout << "test 5: false" << endl;
			itm = mp.find(50);
			delete itm->second;
			mp.erase(50);

			if (mp.size() == 0)
				cout << "test 6: true" << endl;
			else
				cout << "test 6: false" << endl;


set <C_Rgz*> st;
set <C_Rgz*>::iterator its;
st.insert(new C_Rgz);

if (st.size() == 1)
cout << "test 7: true" << endl;
else
cout << "test 7: false" << endl; 
its = st.begin();
delete* its;
st.erase(its);

if (st.size() == 0)
cout << "test 8: true" << endl;
else
cout << "test 8: false" << endl;

};