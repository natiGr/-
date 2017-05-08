/*
 * Discipline.h
 *
 *  Created on: 5.05.2017 ã.
 *      Author: ddada
 */

#ifndef DISCIPLINE_H_
#define DISCIPLINE_H_
#include<iostream>
#include<string>
using namespace std;

class Discipline {
public:
	Discipline(string ,int,int);
	virtual void Print();
	virtual ~Discipline();
	const string& getName() const;
	void setName(const string& name);
	int getRecord() const;
	void setRecord(int record);
	int getWorldRecord() const;
	void setWorldRecord(int worldRecord);

private:
	string name;
	int worldRecord;
	int Record;
};

#endif /* DISCIPLINE_H_ */
