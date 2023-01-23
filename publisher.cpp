//
// Created by Alptekin's Macbook on 22.01.2023.
//

#include "publisher.h"

void Publisher::publishMessage(std::unique_ptr<Message> message) {
    std::cout<<"Message has been published by client!"<<"\n";
    m_messaging_service->publishMessage(std::move(message));
}
