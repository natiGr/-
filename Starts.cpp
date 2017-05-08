/*
 * Starts.cpp
 *
 *  Created on: 5.05.2017 ã.
 *      Author: ddada
 */

#include "Starts.h"
#include<vector>


Starts::Starts(int date, int time,string dis) {
	setDate(date);
	setTime(time);
	setDis(dis);
}

void Starts::addAthl(const Athlets& atl) {
athl.push_back(atl);
}



Starts::~Starts() {
	// TODO Auto-generated destructor stub
}

const vector<Athlets>& Starts::getAthl() const {
	return athl;
}

void Starts::setAthl(const vector<Athlets>& athl) {
	this->athl = athl;
}

int Starts::getDate() const {
	return date;
}

void Starts::setDate(int date) {
	this->date = date;
}


int Starts::getTime() const {
	return time;
}

void Starts::setTime(int time) {
	this->time = time;
}

const string& Starts::getDis() const {
	return dis;
}

void Starts::setDis(const string& dis) {
	this->dis = dis;
}
