#ifndef _USER_H
#define _USER_H

#include <string>

class User
{
private:
    static int current_id;

public:
    int id;
    std::string username;

    User(std::string username);
};

User::User(std::string username) : id(current_id++) {}

#endif