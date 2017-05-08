/*
 * Athlets.cpp
 *
 *  Created on: 5.05.2017 ã.
 *      Author: ddada
 */

#include "Athlets.h"


Athlets::Athlets(string firstName, string lastName, int bestAchievement,
		string nationality) {
	setFirstName(firstName);
	setLastName(lastName);
	setBestAchievement(bestAchievement);
	setNationality(nationality);
}

void Athlets::Print() {
	cout<<"First name is :"<<getFirstName()<<""<<"LastName is :"<<getLastName()<<endl;
	cout<<"Best Achievment :"<<getBestAchievement()<<""<<"Nationality:"<<getNationality()<<endl;
}

Athlets::~Athlets() {
	// TODO Auto-generated destructor stub
}

int Athlets::getBestAchievement() const {
	return bestAchievement;
}

void Athlets::setBestAchievement(int bestAchievement) {
	this->bestAchievement = bestAchievement;
}

const string& Athlets::getFirstName() const {
	return firstName;
}

void Athlets::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Athlets::getLastName() const {
	return lastName;
}

void Athlets::setLastName(const string& lastName) {
	this->lastName = lastName;
}

const string& Athlets::getNationality() const {
	return nationality;
}

void Athlets::setNationality(const string& nationality) {
	this->nationality = nationality;
}
