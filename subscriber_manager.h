//
// Created by Alptekin's Macbook on 22.01.2023.
//

#ifndef PUBLISHER_NOTIFIER_SUBSCRIBER_MANAGER_H
#define PUBLISHER_NOTIFIER_SUBSCRIBER_MANAGER_H

#include "subscriber.h"

#include <map>
#include <string>
#include <memory>

/** @brief this class is a manager class for adding subscriber to subscriber list,
 * and get the registered subscribers according to the published message topic
 */

class SubscriberManager {
public:
    std::multimap<std::string, std::unique_ptr<Subscriber>> m_subscribers;
    /** @brief Adds subscriber with specific topic to subscribers list
     *  @param subscriber registered subscriber
     *  @param topic_name topic name which is subscriber's specific topic when the message with the same topic is published
    */
    void addSubscriber(std::unique_ptr<Subscriber> subscriber, std::string topic_name);
    /** @brief this function returns the subscriber list, according to published message's topic
     *  @param topic topic name which is searched in the subscriber's registered topic.
     *  @return Subscriber list same topic published message
   */
    std::pair<std::multimap<std::string, std::unique_ptr<Subscriber>>::iterator,
            std::multimap<std::string, std::unique_ptr<Subscriber>>::iterator> getSubscriber(std::string topic);
};


#endif //PUBLISHER_NOTIFIER_SUBSCRIBER_MANAGER_H
