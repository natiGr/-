/*
 * Discipline.cpp
 *
 *  Created on: 5.05.2017 ã.
 *      Author: ddada
 */

#include "Discipline.h"



Discipline::Discipline(string name, int worldRecord, int Record) {
	setName(name);
	setWorldRecord(worldRecord);
	setRecord(Record);
}


void Discipline::Print() {
	cout<<"Name of discipline is :"<<getName()<<""<<"World record is :"<<getWorldRecord()<<""<<"Record"<<endl;
}

Discipline::~Discipline() {
	// TODO Auto-generated destructor stub
}

const string& Discipline::getName() const {
	return name;
}

void Discipline::setName(const string& name) {
	this->name = name;
}

int Discipline::getRecord() const {
	return Record;
}

void Discipline::setRecord(int record) {
	Record = record;
}

int Discipline::getWorldRecord() const {
	return worldRecord;
}

void Discipline::setWorldRecord(int worldRecord) {
	this->worldRecord = worldRecord;
}
