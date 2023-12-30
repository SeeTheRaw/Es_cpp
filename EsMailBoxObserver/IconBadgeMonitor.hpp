#ifndef _ICONBADGEMONITOR_HPP_
#define _ICONBADGEMONITOR_HPP_
#include "Observer.hpp"
#include "MailBox.hpp"

class IconBadgeMonitor : public Observer{

    public:

    IconBadgeMonitor(MailBox* mb) : mailbox(mb){
        mailbox->addObserver(this);
    }

    ~IconBadgeMonitor(){
        mailbox->removeObserver(this);
    }

    virtual void drawUnreadMails() {
        int unreadMails = 0;
        for(auto &itr : mailbox->getListOfMails()){
            if(itr.second.getRead() == false){
                unreadMails++;
            }
        }
        cout << "You have " << unreadMails << " unread mails!" << endl;

    }

    private:
    MailBox* mailbox;

};


#endif //_ICONBADGEMONITOR_HPP_