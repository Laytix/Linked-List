/*******************************************************************
*   Character.h
*   Layiwola Olwatobi
*   Programming Assignment 1: Dungeons And Dragons
*   
*   This program is entirely my own work
*******************************************************************/
#pragma once

#include <iostream>
#include "Item.h"
using namespace std;

class Character{

	private:
		
		char m_sName[65];
		int m_iClass, m_iAlignment,m_iHitPoints;
		int m_iCharTraits[6];
		Item m_Items[10];

		



	

public:
	Character *m_pNext;
	Character(char *name, int cl, int al, int hp, int str,int dex, int con, int itl, int wis, int chr);
	~Character();
	Character();

	

	bool addItem(Item *item);

	Item *getItem(char *itemName);

	Item *dropItem(char *itemName);



	char *getName();
	void setName(char *name);

	int getClass();
	void setClass(int cl);

	int getAlignment();
	void setAlignment(int al);

	int getHitPoints();
	void setHitPoints(int hp);

	int getStrength();
	void setStrength(int str) ;

	int getDexterity();
	void setDexterity(int dex);

	int getConstitution();
	void setConstitution(int con);

	int getIntelligence();
	void setIntelligence(int itl);

	int getWisdom();
	void setWisdom(int wis);

	int getCharisma();
	void setCharisma(int chr);

	void printAll();
};
