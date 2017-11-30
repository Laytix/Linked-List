#include "CharacterList.h"
#include <iostream>
#include "Character.h"
#include "Item.h"

using namespace std;



CharacterList :: ~CharacterList(){}

CharacterList :: CharacterList(){

	m_pHead = NULL;

}

bool CharacterList :: addCharacter(Character *newCharacter){

	Character *temp, *back;
	
	temp = m_pHead;
	back = NULL;


	if(m_pHead == NULL){
		m_pHead = newCharacter;
	}
	else
	{

		while ((temp != NULL)&&(strcmp(temp->getName(), newCharacter->getName()) < 0 ))
		{
			
				back = temp;
				temp = temp->m_pNext;
			
		}
	

	
	if(back == NULL){

		newCharacter->m_pNext = temp;
		m_pHead = newCharacter;

		
	}
	else{
		newCharacter->m_pNext = temp;
		back->m_pNext = newCharacter;
	}
	}
	return true;
	
}

Character *CharacterList :: deleteCharacter(char *characterName){

	Character *temp, *back;
	temp = m_pHead;
	back = NULL;
	if(temp == NULL){
		return NULL;
	}
	
		

	while ((temp != NULL)&&(strcmp(temp->getName(), characterName) != 0 ))
	{
			
			back = temp;
			temp = temp->m_pNext;
			
	}
	if(temp == NULL){
		return NULL;
	}

	else if(back == NULL){
		m_pHead = m_pHead->m_pNext;
		temp->m_pNext = NULL;
		return temp;
	}
	else
	{
		back->m_pNext = temp -> m_pNext;
		temp->m_pNext = NULL;
		return temp;
	}


}

bool CharacterList :: addItem(char *characterName, Item *newItem){

	Character *temp;
	temp = m_pHead;

	while ((temp != NULL)&&(strcmp(temp->getName(), characterName) != 0 ))

	{
		
		temp = temp->m_pNext;

	}

	if(temp == NULL){
		return false;
	}else
	{
		temp->addItem(newItem);
	}

	return true;


}


Item *CharacterList :: getItem(char *characterName, char *itemName){

	Character *temp;

	temp = m_pHead;

	while ((temp != NULL)&&(strcmp(temp->getName(), characterName) != 0 ))

	{
		
		temp = temp->m_pNext;

	}

	if(temp == NULL){
		return NULL;
	}
	else
	{
		return temp->getItem(itemName);
	}

}

Item *CharacterList :: dropItem(char *characterName, char *itemName){

	Character *temp;

	temp = m_pHead;

	while ((temp != NULL)&&(strcmp(temp->getName(), characterName) != 0 ))

	{
		
		temp = temp->m_pNext;

	}

	if(temp == NULL){
		return NULL;
	}
	else
	{
		return temp->dropItem(itemName);
	}


}

void CharacterList :: printCharacters(){

	Character *temp;
	temp = m_pHead;

	while (temp != NULL)
	{
		temp->printAll();
		temp = temp->m_pNext;
	}
	
	



}



