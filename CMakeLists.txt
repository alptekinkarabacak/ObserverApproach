cmake_minimum_required(VERSION 3.20)
project(Publisher_Notifier)

set(CMAKE_CXX_STANDARD 17)

find_package (Threads)

add_executable(Publisher_Notifier main.cpp publisher.cpp publisher.h message.h messaging_service.cpp messaging_service.h subscriber_manager.cpp subscriber_manager.h subscriber.cpp subscriber.h message.cpp)
target_link_libraries (Publisher_Notifier ${CMAKE_THREAD_LIBS_INIT})
