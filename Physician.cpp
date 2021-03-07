#include "Physician.h"

Physician::Physician(string p_name, int _age, string _adre)
{
	age = _age;
	name = p_name;
	adress = _adre;
	no_of_patient = 0;
}
Physician::Physician()
{
	no_of_patient = 0;
}

Physician::~Physician()
{
}

void Physician::setname(string p_name)
{
	name = p_name;
}

string Physician::getname()
{
	return name;
}

void Physician::setAddress(string C)
{
	adress = C;
}

string Physician::getAddress()
{
	return adress;
}

void Physician::set_age(int x)
{
	age = x;
}

int Physician::get_age()
{
	return age;
}

string* Physician::seepatient(string patient_name)
{
	patient_list[no_of_patient] = patient_name;
	no_of_patient++;
	return patient_list;
}

void Physician::discharges(string find_patient)
{
	int size = no_of_patient;
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (find_patient == patient_list[i]) {
			patient_list[i] = "discharged";
			flag = true;
			break;
			
		}
	}
	if (!flag) {
		cout << "patient not found" << endl;
	}

}

Fellow::Fellow(string sp)
{
	specialty = sp;
}

Fellow::~Fellow()
{
}

string Fellow::getSpecialty()
{
	return specialty;
}

string* Fellow::seepatient(string patient_name)
{
	if (specialty == "Cardiologist") {
		patient_list[no_of_patient] = patient_name + " with a coronary condition";
		no_of_patient++;
		return patient_list;
	}
	else {
		return Physician::seepatient(patient_name);
	}
}

void Fellow::discharges(string find_patient)
{
	if (specialty == "Cardiologist") {
		int size = no_of_patient;
		bool flag = false;
		for (int i = 0; i < size; i++)
		{
			if (find_patient + " with a coronary condition" == patient_list[i]) {
				patient_list[i] = "left ventricular hypertrophy";
				flag = true;
				break;

			}
		}
		if (!flag) {
			cout << "patient not found" << endl;
		}
	}
	else {
		Physician::discharges(find_patient);
	}
}