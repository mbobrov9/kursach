#include "FACT.hpp"
#include "car.hpp"
#include "tram.hpp"
#include "truck.hpp"

#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	TRANSPORT *mv = nullptr;
	
	
	int a,flag;
	flag = 1;
	while (flag == 1)
	{
		cout << "1. добавить новые\n2. Из фала загрузить\n";
		cin >> a;
		if (a == 1) {
			cout << "1. Легковушка\n2. Грузовик\n3. Трамвай\n";
			int b;
			cin >> b;
			cout << "Кол-во, цена, кол_пассажиров, цвет, тип_топлива,  масса_груза, объём_двигателя, год_выпуска, год_запуска, номер_маршрута:\n";
			if (b == 1)
			{
				mv = new TRANSPORT(new Carabrica(), cin);
				ofstream cout("cout.txt", ios_base::app);
				cout << (*mv);
				cout.close();
			}
			else if (b == 2) {
				mv = new TRANSPORT(new truckabrica(), cin);
				ofstream tout("tout.txt", ios_base::app);
				tout << (*mv);
				tout.close();
			}
			else
			{
				mv = new TRANSPORT(new tramabrica(), cin);
				ofstream trout("trout.txt", ios_base::app);
				trout << (*mv);
				trout.close();
			}
		}
		else if (a == 2)
		{
			string fileName;
			cout << "File name: ";
			cin >> fileName;
			ifstream in(fileName);
			string str;
			int b;
			while (!in.eof())
			{
				getline(in, str);

				if (str == "Car")
					b = 1;
				else if (str == "truck")
					b = 2;
				else
					b = 3;

				if (b == 1) {
					mv = new TRANSPORT(new Carabrica(), in);
					ofstream cout("cout.txt", ios_base::app);
					cout << (*mv);
					cout << '\n';
					cout.close();
				}
				else if (b == 2) {
					mv = new TRANSPORT(new truckabrica(), in);
					ofstream tout("tout.txt", ios_base::app);
					tout << (*mv);
					tout << '\n';
					tout.close();
				}
				else
				{
					mv = new TRANSPORT(new tramabrica(), in);
					ofstream trout("trout.txt", ios_base::app);
					trout << (*mv);
					trout.close();
					trout << '\n';
				}
				getline(in, str);
			}
		}
		else
			flag = 0;
	}
	ifstream carin("cout.txt");
	ifstream tin("tout.txt");
	ifstream trin("trout.txt");
	string str2;
	while (!carin.eof())
	{
		getline(carin, str2);
		if (str2 != "")
		{
			mv = new TRANSPORT(new Carabrica(), carin);
			ofstream out("out.txt", ios_base::app);
			out << (*mv);
			out << '\n';
			out.close();
			getline(carin, str2);
		}
	}
	while (!tin.eof())
	{
		getline(tin, str2);
		if (str2 != "")
		{
			mv = new TRANSPORT(new truckabrica(), tin);
			ofstream out("out.txt", ios_base::app);
			out << (*mv);
			out << '\n';
			out.close();
			getline(carin, str2);
		}
	}
	while (!trin.eof())
	{
		getline(trin, str2);
		if (str2 != "")
		{
			mv = new TRANSPORT(new tramabrica(), trin);
			ofstream out("out.txt", ios_base::app);
			out << (*mv);
			out << '\n';
			out.close();
			getline(carin, str2);
		}
	}

	system("pause>>void");
}
