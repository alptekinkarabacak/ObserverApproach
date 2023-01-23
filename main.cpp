#include "publisher.h"
#include "subscriber.h"

#include <iostream>
#include <memory>
#include <vector>
#include <thread>


void startTest();
void publisherCreator(std::shared_ptr<MessagingService>& messaging_service);
void subscriberCreator(std::shared_ptr<MessagingService>& messaging_service);
int main() {
    std::cout << "Hello, World!" << std::endl;
    startTest();
    return 0;
}

void startTest() {
    std::shared_ptr<MessagingService> messaging_service = std::make_shared<MessagingService>();
    subscriberCreator(messaging_service);
    std::thread publisherThread(&publisherCreator, std::ref(messaging_service));
    publisherThread.join();

}

void publisherCreator(std::shared_ptr<MessagingService>& messaging_service) {
    // This part of the code considered as clients who wants to publish a message
    // This function for only testing purposes.
    std::shared_ptr<Publisher> publisher = std::make_shared<Publisher>(messaging_service);
    std::unique_ptr<Message> message = std::make_unique<Message>();
    message->setTopic("Speed");
    message->setTimestamp("22.01.2023");
    std::vector<int> payload = {1, 2, 3, 4, 5, 6};
    message->setPayload(payload);
    publisher->publishMessage(std::move(message));
}

void subscriberCreator(std::shared_ptr<MessagingService>& messaging_service) {
    // This part of the code considered as clients who wants to register to subscriber list
    // This function for only testing purposes.

    std::unique_ptr<Subscriber> subscriber_1 = std::make_unique<Subscriber>();
    subscriber_1->setMSubscriberId(1);
    messaging_service->m_subscriber_manager->addSubscriber(std::move(subscriber_1), "Speed");

    std::unique_ptr<Subscriber> subscriber_2 = std::make_unique<Subscriber>();
    subscriber_2->setMSubscriberId(2);
    messaging_service->m_subscriber_manager->addSubscriber(std::move(subscriber_2), "Speed");

    std::unique_ptr<Subscriber> subscriber_3 = std::make_unique<Subscriber>();
    subscriber_3->setMSubscriberId(3);
    messaging_service->m_subscriber_manager->addSubscriber(std::move(subscriber_3), "Altitude");

    std::unique_ptr<Subscriber> subscriber_4 = std::make_unique<Subscriber>();
    subscriber_4->setMSubscriberId(4);
    messaging_service->m_subscriber_manager->addSubscriber(std::move(subscriber_4), "Altitude");
}
