/*
 * Type.h
 *
 *  Created on: 7.05.2017 ã.
 *      Author: ddada
 */

#ifndef TYPE_H_
#define TYPE_H_
#include<vector>
#include <string>
#include<iostream>
#include"Discipline.h"
using namespace std;

class Type {
public:
	Type(int, int,int,int);
	void addDis(const Discipline&);
	virtual ~Type();
	int getQuaterFinal() const;
	void setQuaterFinal(int chetvFinal);
	int getFinal() const;
	void setFinal(int final);
	int getSemiFinal() const;
	void setSemiFinal(int halfFinal);
	const vector<Discipline>& getKlas() const;
	void setKlas(const vector<Discipline>& klas);
	int getKvalification() const;
	void setKvalification(int klasification);

private:
	vector<Discipline>klas;
	int kvalification;
	int quaterFinal;
	int semiFinal;
	int final;
};

#endif /* TYPE_H_ */
