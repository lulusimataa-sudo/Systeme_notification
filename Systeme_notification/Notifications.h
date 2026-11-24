#pragma once
#include <iostream>
using namespace std;
class Notifications
{
protected:
	string destinaire;
	string message;
public:
	Notifications(string destinaire, string message);
	virtual void afficher()const;
	virtual void envoyer()=0;
	~Notifications();

};

