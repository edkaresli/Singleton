#ifndef _SINGLETON_H
#define _SINGLETON_H

#include <string>

class Singleton 
{
    static Singleton* s;

    std::string boss; 
    
    Singleton();
public:

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    ~Singleton();

    static Singleton* getInstance(); 

    void setBoss(const std::string&);
    std::string getBoss();
};


#endif
