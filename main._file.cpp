
#include "Physician.h"


int main()
{
	/*Physician p("Tom", 34, "Landon");
	cout<<p.getname()<<endl;
	cout<<p.getAddress()<<endl;
	cout<<p.get_age()<<endl;*/

	Fellow f("Cardiologist");
	f.setAddress("USA");
	f.setname("Jim");
	f.set_age(50);
	cout <<"Fellow name : "<< f.getname() << endl;
	cout << "Fellow adress : " << f.getAddress() << endl;
	cout << "Fellow age : " << f.get_age() << endl;
	string *a = f.seepatient("hadi");
	a = f.seepatient("Ali");
	a = f.seepatient("alice");
	cout <<f.getname()<< " patients are below before discharge" << endl;
	for (size_t i = 0;; i++)
	{
		if (a[i] == "") break;
		cout << a[i] << endl;
		
	}
	cout << endl;
	cout << f.getname() << " patients are below After discharge" << endl;
	f.discharges("Ali");
	f.discharges("alice");
	for (size_t i = 0;; i++)
	{
		if (a[i] == "") break;
		cout << a[i] << endl;

	}

	Fellow f1("Opthalmologist");
	f1.setAddress("UK");
	f1.setname("BOB");
	f1.set_age(50);


	cout << endl;
	cout << "Fellow name : " << f1.getname() << endl;
	cout << "Fellow adress :"<< f1.getAddress() << endl;
	cout << "Fellow age : " << f1.get_age() << endl;

	cout << f1.getname() << " patients are below before discharge" << endl;

	string* v = f1.seepatient("kim");
	 v = f1.seepatient("lin");
	 v = f1.seepatient("Kathrine");
	for (size_t i = 0;; i++)
	{
		if (v[i] == "") break;
		cout << v[i] << endl;

	}
	cout << endl;
	cout << f.getname() << " patients are below After discharge" << endl;
	f1.discharges("Kathrine");
	for (size_t i = 0;; i++)
	{
		if (v[i] == "") break;
		cout << v[i] << endl;

	}
}
