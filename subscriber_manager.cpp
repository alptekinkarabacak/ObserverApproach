//
// Created by Alptekin's Macbook on 22.01.2023.
//

#include "subscriber_manager.h"

void SubscriberManager::addSubscriber(std::unique_ptr<Subscriber> subscriber, std::string topic_name) {
    m_subscribers.insert({topic_name, std::move(subscriber)});
}

std::pair<std::multimap<std::string, std::unique_ptr<Subscriber>>::iterator,
        std::multimap<std::string, std::unique_ptr<Subscriber>>::iterator>
SubscriberManager::getSubscriber(std::string topic) {
    return m_subscribers.equal_range(topic);
}
