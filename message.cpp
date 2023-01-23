//
// Created by Alptekin's Macbook on 22.01.2023.
//
#include "message.h"

const std::string &Message::getTopic() const {
    return m_topic;
}

const std::string &Message::getTimestamp() const {
    return m_timestamp;
}

const std::vector<int> &Message::getPayload() const {
    return m_payload;
}

void Message::setTopic(const std::string &topic) {
    m_topic = topic;
}

void Message::setTimestamp(const std::string &timestamp) {
    m_timestamp = timestamp;
}

void Message::setPayload(const std::vector<int> &payload) {
    m_payload = payload;
}
