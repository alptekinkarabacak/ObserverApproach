//
// Created by Alptekin's Macbook on 22.01.2023.
//

#ifndef PUBLISHER_NOTIFIER_PUBLISHER_H
#define PUBLISHER_NOTIFIER_PUBLISHER_H

#include "message.h"
#include "messaging_service.h"

#include <memory>

/** @brief this class is for the publisher's actions.
 */

class Publisher {
public:
    Publisher(std::shared_ptr<MessagingService> messaging_service) : m_messaging_service(messaging_service){}
    /** @brief This is the publisher's function to publish a message.
    *  @param message message to be published.
    */
    void publishMessage(std::unique_ptr<Message> message);
    std::shared_ptr<MessagingService> m_messaging_service;
private:
};


#endif //PUBLISHER_NOTIFIER_PUBLISHER_H
