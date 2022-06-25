#include<iostream>
#ifndef _MYSTRING_H
#define _MYSTRING_H
class Mystring{
    private:
    char *str;
    public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;
};
#endif