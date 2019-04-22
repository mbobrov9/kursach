#pragma once
#include <string>
#include <iostream>

class �haracteristic {//��������������
	std::string color;
	double prize;
	std::string fuelType;
	double weight;
	double volume;
	int year;
	int year_start;
	int number;
	unsigned peopleCount;
	unsigned count;
public:
	std::string& �olor() { return color; }//����
	double& Prize() { return prize; }//����
	std::string& FuelType() { return fuelType; }//��� �������
	double& Weight() { return weight; }//����� �����
	double& Volume() { return volume; }//����� ���������
	int& Year() { return year; }//��� ������������
	int& Year_start() { return year_start; }//��� ������� � ������������
	int& Number() { return number; }//����� ��������
	unsigned& PeopleCount() { return peopleCount; }//����� ����������
	unsigned& Count() { return count; }//����������
	//���������� ��� ��������
	const std::string& �olor() const { return color; }//����
	const double& Prize() const { return prize; }//����
	const std::string& FuelType() const { return fuelType; }//��� �������
	const double& Weight() const { return weight; }//����� �����
	const double& Volume() const { return volume; }//����� ���������
	const int& Year() const { return year; }//��� ������������
	const int& Year_start() const { return year_start; }//��� ������� � ������������
	const int& Number() const { return number; }//����� ��������
	const unsigned& PeopleCount() const { return peopleCount; }//����� ����������
	const unsigned& Count() const { return count; }//����������

	friend std::istream& operator >>(std::istream& in, �haracteristic& characteristic) {
		in >> characteristic.count >> characteristic.prize >> characteristic.peopleCount
			>> characteristic.color >> characteristic.fuelType >> characteristic.weight >> characteristic.volume
			>> characteristic.year >> characteristic.year_start >> characteristic.number;
		return in;
	}

	friend std::ostream& operator <<(std::ostream& out, const �haracteristic& characteristic) {
		out << characteristic.count << ' ' << characteristic.prize << ' ' << characteristic.peopleCount << ' '
			<< characteristic.color << ' ' << characteristic.fuelType << ' ' << characteristic.weight << ' ' << characteristic.volume
			<< ' ' << characteristic.year << ' ' << characteristic.year_start << ' ' << characteristic.number;
		return out;
	}
};