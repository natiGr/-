/*
 * Athlets.h
 *
 *  Created on: 5.05.2017 ã.
 *      Author: ddada
 */

#ifndef ATHLETS_H_
#define ATHLETS_H_
#include<string>
#include<iostream>
using namespace std;

class Athlets {
public:
	Athlets(string,string,int,string);
	virtual void Print();
	virtual ~Athlets();
	int getBestAchievement() const;
	void setBestAchievement(int bestAchievement);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	const string& getNationality() const;
	void setNationality(const string& nationality);

private:
	string firstName;
	string lastName;
	int bestAchievement;
	string nationality;
};

#endif /* ATHLETS_H_ */
