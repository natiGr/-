/*
 * Type.cpp
 *
 *  Created on: 7.05.2017 ã.
 *      Author: ddada
 */

#include "Type.h"



Type::Type(int klasificatin, int chetvFinal, int halfFinal, int final) {
	setKvalification(kvalification);
	setQuaterFinal(QuaterFinal);
	setSemiFinal(semiFinal);
	setFinal(final);
}

void Type::addDis(const Discipline&kl) {
	klas.push_back(kl);
}

Type::~Type() {
	// TODO Auto-generated destructor stub
}

int Type::getQuaterFinal() const {
	return quaterFinal;
}

void Type::setQuaterFinal(int chetvFinal) {

	this->quaterFinal = chetvFinal;
}

int Type::getFinal() const {
	return final;
}

void Type::setFinal(int final) {
	this->final = final;
}

int Type::getSemiFinal() const {
	return semiFinal;
}

void Type::setSemiFinal(int halfFinal) {
	this->semiFinal = halfFinal;
}

const vector<Discipline>& Type::getKlas() const {
	return klas;
}

void Type::setKlas(const vector<Discipline>& klas) {
	this->klas = klas;
}

int Type::getKvalification() const {
	return kvalification;
}

void Type::setKvalification(int klasification) {

	this->kvalification = klasification;
}
