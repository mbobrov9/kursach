#include "FACT.hpp"
#include "car.hpp"
#include "tram.hpp"
#include "truck.hpp"

#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	cout << "1. �������� �����\n2. �� ���� ���������\n";
	TRANSPORT *mv = nullptr;
	int a;
	cin >> a;
	if (a == 1) {
		cout << "1. ����������\n2. ��������\n3. �������\n";
		int b;
		cin >> b;
		cout << "���-��, ����, ���_����������, ����, ���_�������,  �����_�����, �����_���������, ���_�������, ���_�������, �����_��������:\n";
		if (b == 1) {
			mv = new TRANSPORT(new Carabrica(), cin);
		}
		else if (b==2) {
			mv = new TRANSPORT(new truckabrica(), cin);
		}
		else
		{
			mv = new TRANSPORT(new tramabrica(), cin);
		}
	}
	else {
		string fileName;
		cout << "File name: ";
		cin >> fileName;
		ifstream in(fileName);
		string str;
		int b;
		getline(in, str);
		
		b = 1;
		char ab;
	
		if (b == 1) {
			mv = new TRANSPORT(new Carabrica(), in);
		}
		else if (b == 2) {
			mv = new TRANSPORT(new truckabrica(), in);
		}
		else
		{
			mv = new TRANSPORT(new tramabrica(), in);
		}
	}
	cout << '\n' << (*mv);
	ofstream out("out.txt");
	out << (*mv);
	system("pause>>void");
}