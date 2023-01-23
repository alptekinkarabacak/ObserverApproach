//
// Created by Alptekin's Macbook on 22.01.2023.
//

#ifndef PUBLISHER_NOTIFIER_SUBSCRIBER_H
#define PUBLISHER_NOTIFIER_SUBSCRIBER_H

#include <iostream>

/** @brief this class is a data container for the subscribers
 */

struct Subscriber {
public:
    int getSubscriberId() const;
    void setMSubscriberId(int subscriber_id);
    void receiveMessage();
private:
    int m_subscriber_id;

};


#endif //PUBLISHER_NOTIFIER_SUBSCRIBER_H
