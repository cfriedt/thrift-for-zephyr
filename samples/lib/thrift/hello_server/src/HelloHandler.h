#pragma once

#include <iostream>

#include "Hello.h"

class HelloHandler : virtual public HelloIf
{
public:
    HelloHandler() : count(0)
    {
    }

    void ping()
    {
        printk("ping\n");
    }

    void echo(std::string &_return, const std::string &msg)
    {
        printk("echo: %s\n", msg.c_str());
        _return = msg;
    }

    int32_t counter()
    {
        ++count;
        printk("counter: %d\n", count);
        return count;
    }

protected:
    int count;
};
