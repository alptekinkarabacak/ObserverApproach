//
// Created by Alptekin's Macbook on 22.01.2023.
//

#ifndef PUBLISHER_NOTIFIER_MESSAGING_SERVICE_H
#define PUBLISHER_NOTIFIER_MESSAGING_SERVICE_H

#include "subscriber_manager.h"
#include "message.h"

#include <memory>
#include <map>

/** @brief this class is message service class for all clients can use.
 */

class MessagingService {
public:
    MessagingService();
    /** @brief this function called when at least one subscriber has same topic with the publisher's message.
     *  @param message message to be published.
    */
    void publishMessage(std::unique_ptr<Message> message);
    std::unique_ptr<SubscriberManager> m_subscriber_manager;

};


#endif //PUBLISHER_NOTIFIER_MESSAGING_SERVICE_H
