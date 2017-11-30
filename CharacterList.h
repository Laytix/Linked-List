/*******************************************************************
*   Character.h
*   Layiwola Oluwatobi
*   
*   
*   This program is entirely my own work
*******************************************************************/

#include "Character.h"

#pragma once


using namespace std;


class CharacterList{
	public:

		CharacterList();
		~CharacterList();

		 bool addCharacter(Character *newCharacter);
		 Character *deleteCharacter(char *characterName);
		 bool addItem(char *characterName, Item *newItem);
		 Item *getItem(char *characterName, char *itemName);
		 Item *dropItem(char *characterName, char *itemName);
		 void printCharacters();


		


	private:

		Character *m_pHead;
		



	};

	

