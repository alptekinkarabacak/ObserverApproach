//
// Created by Alptekin's Macbook on 22.01.2023.
//

#include "messaging_service.h"

MessagingService::MessagingService() {
    m_subscriber_manager = std::make_unique<SubscriberManager>();
}

void MessagingService::publishMessage(std::unique_ptr<Message> message) {
    auto subscribers_by_topic = m_subscriber_manager->getSubscriber(message->getTopic());
    for (auto it = subscribers_by_topic.first; it != subscribers_by_topic.second; it++) {
        it->second->receiveMessage();
    }
}
