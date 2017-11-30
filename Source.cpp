//do NOT include this when turning in assignment. This is just to test the class and its functions

#include <iostream>
//#include <string>
#include "Character.h"
#include "CharacterList.h"
#include <iomanip>

using namespace std;
/*
int main()
{
	char name[65];
	int al;
	//creating a character using parameter constructor
	Character char1("Patricia Glaze",2,300000,4,5,6,7,8,9,10);
	
	char1.printAll();//printing inputed values
	
	//checking get functions functionality for char1
	char1.getName(name);
	cout<<"The character name is "<<name<<endl;
	
	char1.getClass(al);
	cout<<"The character's class is "<<al<<endl;
	
	char1.getAlignment(al);
	cout<<"The character's alignment is "<<al<<endl;	
	
	char1.getHitPoints(al);
	cout<<"The character's Hit Points is "<<al<<endl;

	char1.getStrength(&al);
	cout<<"The character's Strength is "<<al<<endl;
	
	char1.getDexterity(&al);
	cout<<"The character's Dexterity is "<<al<<endl;

	char1.getConstitution(&al);
	cout<<"The character's Constitution is "<<al<<endl;

	char1.getIntelligence(&al);
	cout<<"The character's Intellegence is "<<al<<endl;

	char1.getWisdom(&al);
	cout<<"The character's Wisdom is "<<al<<endl;
	
	char1.getCharisma(&al);
	cout<<"The character's Charisma is "<<al<<endl;
	char1.setCharisma(5000);
	char1.getCharisma(&al);
	cout<<"The character's Charisma is "<<al<<endl;
	char1.printAll();
	cout<<endl;
	//creating a character using default constructor
	Character char2;
	char2.setName("melissa");
	char2.setClass(2);
	char2.setAlignment(3);
	char2.setCharisma(4);
	char2.setConstitution(5);
	char2.setDexterity(6);
	char2.setHitPoints(599);
	char2.setIntelligence(7);
	char2.setStrength(100);
	char2.setWisdom(3003);
	char2.printAll();

	//checking get functions functionality for char2
	char2.getName(name);
	cout<<"The character name is "<<name<<endl;
	
	char2.getClass(al);
	cout<<"The character's class is "<<al<<endl;
	
	char2.getAlignment(al);
	cout<<"The character's alignment is "<<al<<endl;	
	
	char2.getHitPoints(al);
	cout<<"The character's Hit Points is "<<al<<endl;

	char2.getStrength(&al);
	cout<<"The character's Strength is "<<al<<endl;
	
	char2.getDexterity(&al);
	cout<<"The character's Dexterity is "<<al<<endl;

	char2.getConstitution(&al);
	cout<<"The character's Constitution is "<<al<<endl;

	char2.getIntelligence(&al);
	cout<<"The character's Intellegence is "<<al<<endl;

	char2.getWisdom(&al);
	cout<<"The character's Wisdom is "<<al<<endl;
	
	char2.getCharisma(&al);
	cout<<"The character's Charisma is "<<al<<endl;

	system("pause");
	}
*/
int main()
{
	int i,j,k;
	i=j=k=333;
	char name[65]="";
	Item *tempItem=new Item;
	Character c1("Archer",1,2,3,4,5,6,7,8,9);
	Character c2("Basil",9,8,7,6,5,4,3,2,1);
	Character c3("Cami",11,22,33,44,55,66,77,88,99);
	Character *p_c4=new Character("Dani",99,88,77,66,55,44,33,22,11);
	
	Character c5;
	c5.setName("Christie");
	c5.setAlignment(1);
	c5.setCharisma(2);
	c5.setClass(3);
	c5.setConstitution(4);
	c5.setDexterity(5);
	c5.setHitPoints(6);
	c5.setIntelligence(7);
	c5.setStrength(8);
	c5.setWisdom(9);
	
	
	Character *p_c1=&c1;
	Character *p_c2=&c2;
	Character *p_c3=&c3;
	//Character *p_c4=&c4;
	
	//Tests constructor
	CharacterList CharList;
	
	
	Item *item1=new Item;
	strcpy(item1->m_sItemName,"item 1");
	item1->m_dValue=500;
	item1->m_dWeight=10.5;

	Item *item2=new Item;
	strcpy(item2->m_sItemName,"item 2");
	item2->m_dValue=1000.4;
	item2->m_dWeight=8.3;

	Item *item3=new Item;
	strcpy(item3->m_sItemName,"item 3");
	item3->m_dValue=3;
	item3->m_dWeight=3;

	Item *item4=new Item;
	strcpy(item4->m_sItemName,"item 4");
	item4->m_dValue=0.4;
	item4->m_dWeight=0.4;
	
	Item *item5=new Item;
	strcpy(item5->m_sItemName,"item 5");
	item5->m_dValue=5;
	item5->m_dWeight=5;

	Item *item6=new Item;
	strcpy(item6->m_sItemName,"item 6");
	item6->m_dValue=6;
	item6->m_dWeight=6;

	Item *item7=new Item;
	strcpy(item7->m_sItemName,"item 7");
	item7->m_dValue=7.7;
	item7->m_dWeight=7;

	Item *item8=new Item;
	strcpy(item8->m_sItemName,"item 8");
	item8->m_dValue=8.88;
	item8->m_dWeight=8;
	
	Item *item9=new Item;
	strcpy(item9->m_sItemName,"item 9"); 
	item9->m_dValue=99999;
	item9->m_dWeight=9;
	
	Item *item10=new Item;
	strcpy(item10->m_sItemName,"item 10");
	item10->m_dValue=10;
	item10->m_dWeight=10;	
	
	Item *item11=new Item;
	strcpy(item11->m_sItemName,"item 11");
	item11->m_dValue=11;
	item11->m_dWeight=11;

	c5.addItem(item1);
	

	cout<<"Testing get functions in for Character 1"<<endl;
	strcpy(name,c1.getName());
	cout<<name<<"  ";
	k=c1.getClass();
	cout<<k<<"   ";
	k=c1.getAlignment();
	cout<<k<<"   ";
	k=c1.getHitPoints();
	cout<<k<<"   ";
	k=c1.getStrength();
	cout<<k<<"   ";
	k=c1.getDexterity();
	cout<<k<<"   ";
	k=c1.getConstitution();
	cout<<k<<"   ";
	k=c1.getIntelligence();
	cout<<k<<"   ";
	k=c1.getWisdom();
	cout<<k<<"   ";
	k=c1.getCharisma();
	cout<<k<<endl;
	
	system("pause");

	cout<<"Test Character getItem for empty Item array"<<endl;
	tempItem=c1.getItem("item 1");
	if(tempItem==NULL)
	{
	cout<<"Item 1 cannot be found."<<endl;
	}
	else
	{
		cout<<"Got the "<<tempItem->m_sItemName<<endl;
	}

	cout<<"Testing Character addItem Item array"<<endl;
	if (c1.addItem(item1)==true)
	{
		cout<<"The "<<item1->m_sItemName<<" was added."<<endl;
	}
	else
	{
		cout<<"The "<<item1->m_sItemName<<" could not be added."<<endl;
	}
	
	if (c1.addItem(item2)==true)
	{
		cout<<"The "<<item2->m_sItemName<<" was added."<<endl;
	}
	else
	{
		cout<<"The "<<item2->m_sItemName<<" could not be added."<<endl;
	}
	c1.addItem(item3);
	c1.addItem(item4);
	c1.addItem(item5);
	c1.addItem(item6);
	c1.addItem(item7);
	c1.addItem(item8);
	c1.addItem(item9);
	if (c1.addItem(item10)==true)
	{
		cout<<"The "<<item10->m_sItemName<<" was added."<<endl;
	}
	else
	{
		cout<<"The "<<item10->m_sItemName<<" could not be added."<<endl;
	}
	
	if (c1.addItem(item11)==true)
	{
		cout<<"The "<<item11->m_sItemName<<" was added."<<endl;
	}
	else
	{
		cout<<"The "<<item11->m_sItemName<<" could not be added."<<endl;
	}
	
	c1.printAll();
	system("pause");

	cout<<"Testing Character getItem with nonempty Item array"<<endl;

	tempItem=c1.getItem("item 1");
	if(tempItem==NULL)
	{
	cout<<"This item cannot be found."<<endl;
	}
	else
	{
		cout<<"Got the "<<tempItem->m_sItemName<<endl;
	}

	//c1.printAll();

	cout<<"Testing dropitem"<<endl;
	
	tempItem=c1.dropItem("item 1");
	if(tempItem==NULL)
	{
	cout<<"This item cannot be found."<<endl;
	}
	else
	{
		cout<<"The "<<tempItem->m_sItemName<<" was dropped."<<endl;
	}
	//c1.printAll();

	tempItem=c1.dropItem("sword");
	if(tempItem==NULL)
	{
	cout<<"The sword cannot be found."<<endl;
	}
	else
	{
		cout<<"The "<<tempItem->m_sItemName<<" was dropped."<<endl;
	}
	c1.dropItem("item 5");
	c1.dropItem("item 10");
	
	c1.printAll();
	
	c2.addItem(item3);
	c2.addItem(item4);
	c2.addItem(item5);
	c2.addItem(item6);

	c3.addItem(item1);
	c3.addItem(item2);
	c3.addItem(item3);
	c3.addItem(item4);

	p_c4->addItem(item7);
	p_c4->addItem(item8);
	p_c4->addItem(item9);
	p_c4->addItem(item10);

	system("pause");

	///////////////////////////////////////////////////////////
	//Testing CharacterList class
	//////////////////////////////////////////////////////////////
	cout<<"Testing CharacterList addcharacter function"<<endl;
	//tests addCharacter
	cout<< CharList.addCharacter(p_c3);
	
	CharList.printCharacters();

	i=CharList.addCharacter(p_c4);
	cout<<i<<endl;
	CharList.printCharacters();

	i=CharList.addCharacter(p_c1);
	cout<<i<<endl;
	CharList.printCharacters();

	i=CharList.addCharacter(p_c2);
	cout<<i<<endl;
	CharList.printCharacters();

	system("pause");

	cout<<"Testing deletecharacter from list"<<endl;
	CharList.deleteCharacter("Basil");
	//CharList.printCharacters();

	if (CharList.deleteCharacter("Sal")==NULL)
		cout<<"That character was not found in the list."<<endl;
	
	CharList.deleteCharacter("Archer");
	CharList.printCharacters();
	CharList.deleteCharacter("Dani");
	CharList.printCharacters();
	CharList.deleteCharacter("Cami");
	
	CharList.printCharacters();	


	system("pause");

	cout<<"Add characters back to list and gave them some more items using addItem function"<<endl;
	CharList.addCharacter(p_c3);
	CharList.addCharacter(p_c4);
	CharList.addCharacter(p_c1);
	CharList.addCharacter(p_c2);

	//CharList.printCharacters();
	
	cout<<CharList.addItem("Dani",item1)<<endl;
	cout<<CharList.addItem("Basil",item1)<<endl;
	cout<<CharList.addItem("Cami", item1)<<endl;
	cout<<CharList.addItem("Sal", item1)<<endl;
	cout<<CharList.addItem("Archer", item1)<<endl;
	cout<<CharList.addItem("Archer", item1)<<endl;
	cout<<CharList.addItem("Archer", item1)<<endl;
	cout<<CharList.addItem("Archer", item1)<<endl;
	cout<<CharList.addItem("Archer", item1)<<endl;
	
	CharList.printCharacters();

	system("pause");

	cout<<"Testing getItem function in CharacterList"<<endl; 
	tempItem=CharList.getItem("Archer","item 1");
	if(tempItem!=NULL)
		cout<<"Got "<<tempItem->m_sItemName<<endl;
	else
		cout<<"Item or Character was not found."<<endl;

	tempItem=CharList.getItem("Sal","item 1");
	if(tempItem!=NULL)
		cout<<tempItem->m_sItemName<<endl;
	else
		cout<<"Character was not found."<<endl;

	tempItem=CharList.getItem("Archer","sword");
	if(tempItem!=NULL)
		cout<<tempItem->m_sItemName<<endl;
	else
		cout<<"Item was not found."<<endl;
	
	cout<<endl;
	tempItem=CharList.getItem("Basil","item 1");
	cout<<"Got "<<tempItem->m_sItemName<<endl;
	tempItem=CharList.getItem("Cami","item 1");
	cout<<"Got "<<tempItem->m_sItemName<<endl;
	tempItem=CharList.getItem("Dani","item 1");
	cout<<"Got "<<tempItem->m_sItemName<<endl;
	
	system("pause");

	cout<<"Testing CharacterList dropItem"<<endl;

	tempItem=CharList.dropItem("Archer","item 1");
	cout<<"Dropped "<<tempItem->m_sItemName<<endl;

	tempItem=CharList.dropItem("Basil","item 1");
	cout<<"Dropped "<<tempItem->m_sItemName<<endl;
	
	tempItem=CharList.dropItem("Cami","item 1");
	cout<<"Dropped "<<tempItem->m_sItemName<<endl;

	tempItem=CharList.dropItem("Dani","item 1");
	cout<<"Dropped "<<tempItem->m_sItemName<<endl;
	
	tempItem=CharList.dropItem("Archer","sword");
	if(tempItem==NULL)
		cout<<"Item not found."<<endl;
	tempItem=CharList.dropItem("Sal","item 1");
	if(tempItem==NULL)
		cout<<"That Character doesn't exist."<<endl;

	CharList.printCharacters();

	system("pause");
}