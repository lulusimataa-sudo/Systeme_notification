#pragma once
#include "Notifications.h"
class NotificationEmail : public Notifications
{
private:
	string Objet;
public:
	NotificationEmail(string destinaire, string Objet, string message);
	void afficher()const override;
	void envoyer() override;
	~NotificationEmail();

	
};

