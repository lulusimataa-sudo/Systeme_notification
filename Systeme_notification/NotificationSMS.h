#pragma once
#include "Notifications.h"
class NotificationSMS : public Notifications
{
private:
	string opereteur;
public:
	NotificationSMS(string destinaire, string operateur, string message);
	void afficher() const override ;
	void envoyer() override;
	~NotificationSMS();
};

