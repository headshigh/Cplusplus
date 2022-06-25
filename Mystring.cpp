#include<string>
#include<iostream>
#include"Mystring.h"
Mystring::Mystring():str{nullptr}{
    str= new char[1];
    *str="\0";
}