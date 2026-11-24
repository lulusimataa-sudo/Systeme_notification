#pragma once
#include "Notifications.h"
class NotificationPush :public Notifications
{
private:
	string application;
public:
	NotificationPush(string destinaire, string application, string message);
	void afficher()const override;
	void envoyer() override;
	~NotificationPush();
};

