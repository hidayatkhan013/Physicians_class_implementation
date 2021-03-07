#pragma once

#include <iostream>
using namespace std;

class Physician
{
public:
	Physician(string, int, string);
	Physician();
	~Physician();
	void setname(string);
	string getname();
	void setAddress(string C);
	string getAddress();
	void set_age(int x);
	int get_age();
	string* seepatient(string patient_name);
	void discharges(string);


protected:

	int age, no_of_patient;
	string name, adress, patient_list[100];

};

class Fellow : public Physician
{
public:
	Fellow(string );
	~Fellow();
	string* seepatient(string patient_name);
	void discharges(string);
private:
	string specialty;
	string getSpecialty();

};