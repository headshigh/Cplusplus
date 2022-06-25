/*
#include<iostream>
using namespace std;
class class2;
class class1{
    int a;
    public:
    void set_value(int a_var){
        a=a_var;
    }
    friend int max(class1 obj1, class2 obj2);
};
class class2{
    int b;
    public:
    void setvalue(int b_var){
        b=b_var;

    }
    friend int max(class1 obj1,class2 obj2);
};
int max(class1 obj1, class2 obj2){
    return obj1.a>obj2.b?obj1.a:obj2.b;
}
int main()
{
    class1 n1;
    class2 n2;
    n1.set_value(23);
    n2.setvalue(25);
    cout<<"Max is "<<max(n1,n2)<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    std::string address;
    public:
    person(string name_var, int age_var, string address_var):name{name_var},age{age_var},address{address_var}{}
    
};
class teacher:public person{
    std::string qualification;
    std::string department;
    public:
    teacher(string name_var,int age_var,string address_var, string qualification_var,string department_var):person(name_var,age_var,address_var){
        qualification=qualification_var;
        department=department_var;
    }
    void display(){
        cout<<name<<age<<address<<qualification<<department<<endl;
    }
};
class student:public person{
    string program;
    string semester;
    public:
    student(string name_var,int age_var,string address_var,string program_var,string semester_var):person(name_var,age_var,address_var){
    program=program_var;
    semester=semester_var;
    }
    void display(){
        cout<<name<<age<<address<<program<<semester<<endl;
    }
};
int main()
{
    teacher sarun{"Sarun",18,"Arjunchaupari","Bachelour","Engineering"};
    student nischal{"nischal",18,"Nawalpur","Software","second"};
    sarun.display();
    nischal.display();

    return 0;
}