/*
 * Starts.h
 *
 *  Created on: 5.05.2017 ã.
 *      Author: ddada
 */

#ifndef STARTS_H_
#define STARTS_H_
#include<vector>
#include<iostream>
#include"Athlets.h"
#include"Discipline.h"
using namespace std;

class Starts {
public:
	Starts(int,int,string);
	void addAthl(const Athlets&);

	virtual ~Starts();
	const vector<Athlets>& getAthl() const;
	void setAthl(const vector<Athlets>& athl);
	int getDate() const;
	void setDate(int date);

	int getTime() const;
	void setTime(int time);
	const string& getDis() const;
	void setDis(const string& dis);

private:
	int date;
	int time;
	vector<Athlets>athl;
	string dis;
};

#endif /* STARTS_H_ */
