//
// Created by Alptekin's Macbook on 22.01.2023.
//

#include "subscriber.h"

int Subscriber::getSubscriberId() const {
    return m_subscriber_id;
}

void Subscriber::setMSubscriberId(int subscriber_id) {
    m_subscriber_id = subscriber_id;
}

void Subscriber::receiveMessage() {
    std::cout<<"Message Received! Id is: "<< this->getSubscriberId()<<"\n";
}
