#ifndef GUI_NOTIFIER_H
#define GUI_NOTIFIER_H
#include "Observer.hpp"
#include "MailBox.hpp"

class GuiNotifier : public Observer{

    GuiNotifier(MailBox* mb) : mailbox(mb){
        mailbox->addObserver(this);
    }

    ~GuiNotifier(){
        mailbox->removeObserver(this);
    }

    virtual void update() override {
        string lastSender = mailbox->getLastMail().getSender();
        string lastTitle = mailbox->getLastMail().getTitle();
        string lastText = mailbox->getLastMail().getMailText();
        cout << "New email arrived! ";
        cout << "[EMAIL TITLE] " << lastTitle << " [EMAIL SENDER]: " << lastSender << " [EMAIL TEXT]: " << lastText;
    }

    private:
    MailBox* mailbox;

};

#endif //GUI_NOTIFIER_H