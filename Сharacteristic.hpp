#pragma once
#include <string>
#include <iostream>

class Сharacteristic {//характеристики
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
	std::string& Сolor() { return color; }//цвет
	double& Prize() { return prize; }//цена
	std::string& FuelType() { return fuelType; }//тип топлива
	double& Weight() { return weight; }//масса груза
	double& Volume() { return volume; }//объём двигателя
	int& Year() { return year; }//год производства
	int& Year_start() { return year_start; }//год запуска в эксплуатации
	int& Number() { return number; }//номер маршрута
	unsigned& PeopleCount() { return peopleCount; }//число пассажиров
	unsigned& Count() { return count; }//количество
	//аналогично для констант
	const std::string& Сolor() const { return color; }//цвет
	const double& Prize() const { return prize; }//цена
	const std::string& FuelType() const { return fuelType; }//тип топлива
	const double& Weight() const { return weight; }//масса груза
	const double& Volume() const { return volume; }//объём двигателя
	const int& Year() const { return year; }//год производства
	const int& Year_start() const { return year_start; }//год запуска в эксплуатации
	const int& Number() const { return number; }//номер маршрута
	const unsigned& PeopleCount() const { return peopleCount; }//число пассажиров
	const unsigned& Count() const { return count; }//количество

	friend std::istream& operator >>(std::istream& in, Сharacteristic& characteristic) {
		in >> characteristic.count >> characteristic.prize >> characteristic.peopleCount
			>> characteristic.color >> characteristic.fuelType >> characteristic.weight >> characteristic.volume
			>> characteristic.year >> characteristic.year_start >> characteristic.number;
		return in;
	}

	friend std::ostream& operator <<(std::ostream& out, const Сharacteristic& characteristic) {
		out << characteristic.count << ' ' << characteristic.prize << ' ' << characteristic.peopleCount << ' '
			<< characteristic.color << ' ' << characteristic.fuelType << ' ' << characteristic.weight << ' ' << characteristic.volume
			<< ' ' << characteristic.year << ' ' << characteristic.year_start << ' ' << characteristic.number;
		return out;
	}
};