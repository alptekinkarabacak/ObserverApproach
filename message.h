//
// Created by Alptekin's Macbook on 22.01.2023.
//

#ifndef PUBLISHER_NOTIFIER_MESSAGE_H
#define PUBLISHER_NOTIFIER_MESSAGE_H

#include <string>
#include <vector>

/** @brief this class is data container class for the message content.
 */


struct Message {
public:
    const std::string &getTopic() const;
    const std::string &getTimestamp() const;
    const std::vector<int> &getPayload() const;
private:
    std::string m_topic;
    std::string m_timestamp;
public:
    void setTopic(const std::string &topic);

    void setTimestamp(const std::string &timestamp);

    void setPayload(const std::vector<int> &payload);

private:
    std::vector<int> m_payload;
};



#endif //PUBLISHER_NOTIFIER_MESSAGE_H
