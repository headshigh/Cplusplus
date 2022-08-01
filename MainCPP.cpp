/*#include <iostream>
int a;
using namespace std;
int main(){
    cout <<"enter your number\n";
    cin >> a;
    cout << "wow that's my favoriate number too\n";
    cout << a <<  "is really my favoriate number\n" ;
    return 0;
}



#include <iostream>
using namespace std;
int num1;
int num2;
int main()
{
    cout<<"enter the first  integer\n";
    cin>> num1;
    cout<<"enter the second  integer\n";
    cin>> num2;
    cout<< "your first integer was "<< num1 << " and your second integer was"<< num2;
    
    return 0;
}
#include<iostream>
using namespace std;
int age{18};//initial value 18
int main()
{
    cout<<age<< endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char middle_name{'j'};
    bool gameOver{false};
    cout<<"my middle name is "<<middle_name<<endl;
    cout<< "the value of game over is "<<gameOver<<endl;
    cout<"the size of gameover is"<<sizeof gameOver;//gives the size of a variable;
    return 0;
}
//wap to promt user for number of rooms to be cleaned and display estimate cost of cleaning at the rate of 30$ per romm with sales tax at 6%
#include<iostream>
using namespace std;


float total_cost;
int main()
{
    cout<<"What are the numbers of rooms you want to get cleaned?\n";
    int no_of_rooms;
    cin>> no_of_rooms;

    const double price_per_room{30};
    const double sales_tax{0.06};
    const int estimate_expiry{30};//days;
    cout<<"Estimate for Room cleaning service\nNumber of Rooms: "<<no_of_rooms<<endl<<"price per Room:$30\n"<<"Total cost: $"<< (no_of_rooms*30) <<endl<<"Tax: "<<(sales_tax*(no_of_rooms*price_per_room))<<endl;
    cout<<"=======================================\n";
    cout<<"Total Estimate: "<<(sales_tax*(no_of_rooms*price_per_room))+(no_of_rooms*price_per_room)<<endl<<"This estimate is valid for "<< estimate_expiry<<" days";
    return 0;
}
//--------------------------------------------ARRAYS IN CPP-------------------------------------------------------------------------------
#include<iostream>
using namespace std;
double hi_temp[]={90.1,89.8,77.5,55};

int main()
{
    cout<<"the first element is "<< hi_temp[0]<<endl;
    cout<< "enter the 2nd element of the arrray\n";
    cin>> hi_temp[1];
    cout<<"the second element was set to "<<hi_temp[1];
    return 0;
}
///VECTORS
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int score_to_add{0};
    vector <int> scores{8,7,8,9};
    cout<<"The elements of the array are:\n";
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    cout<<scores[3]<<endl;
    cout<<"there are "<<scores.size()<<" elements in the array\n";
    cout<<"enter the score you want to add\n";
    cin>>score_to_add;
    scores.push_back(score_to_add);
    cout<<"enter another score you want to add\n";
    cin>>score_to_add;
    scores.push_back(score_to_add);
    cout<<"The updated elements of the array are:\n";
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    cout<<scores[3]<<endl;
    cout<<scores[4]<<endl;
    cout<<scores[5]<<endl;
    cout<<"there are "<<scores.size()<<" elements in the array\n";
    return 0;
}
-----------------------------operators-------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int result;
    int num1{200};
    int num2{300};
    result=num1*num2;
    cout<<num1+num2;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int total{};
    double average{0.0};
    int num1{},num2{},num3{};
    cout<<"enter three numbers\n";
    cin>>num1>>num2>>num3;
    total=num1+num2+num3;
    average=total/3;
    cout<<"the average of the numbers is: "<<average<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int dollars{},cents{},quarters{},dime{},nickle{},pennies{};
    cout<<"Enter the amount in cents"<<endl;
    cin>>cents;
    dollars=cents/100;//we can also use balance= balance-dollars*100
    quarters=(cents-dollars*100)/25;
    dime=(cents-((dollars*100)+quarters*25))/10;
    nickle=(cents-((dollars*100)+(quarters*25)+(dime*10)))/5;
    pennies=(cents-((dollars*100)+(quarters*25)+(dime*10)+(nickle*5)))/1;
    cout<<"dollars: "<<dollars<<endl<<"Quarters: "<< quarters<<endl<<"Dimes: "<<dime<<endl<<"nickle: "<<nickle<<endl<<"pennies: "<<pennies<<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
using  namespace std;
class Player{
    private:
    string name;
    int health;
    int xp;
    public:
    //considered method
    void talk( string name,string text_to_say){
        cout<<name<<" says "<<text_to_say<<endl;
    }
    bool is_dead(); 
};
int main()
{
    Player nischal;
    //nischal.name="Nischal"; cannot do this as name is private so cannot be acessed outside  of the member
    nischal.talk("Nischal","Hello There");

    return 0;
}

//implementing member methods outside of the class
#include<iostream>
using namespace std;
class Account{
    private:
    string name;
    double balance;
    public:
    void set_balance(double money);
    double get_balance();
};
void Account::set_balance(double money){
    balance=money;
}
double Account::get_balance(){
    return balance;
}
void Account::set_name(string n){
    name=n;
}
int main()
{
    Account Nischal;
    Nischal.set_balance(400);
    cout<<Nischal.get_balance()<<endl;
    return 0;
}
//constructors and destructors
#include<iostream>
#include <string>
using namespace std;
class Player{
    private:
    string name;
    int health;
    int xp;
    public:
    void set_name(string name_val){
        name=name_val;
    }
    //overloaded  constructor
    Player(){
        cout<<"NO args constructor called"<<endl;
    }
    Player(string name){
        cout<<"String args constructor called"<<endl;
    }
    Player(string name, int health, int xp){
        cout<<"Three args constructor called"<<endl;
    }
    ~Player(){
        cout<<"Destructor called for"<<name<<endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villan("Villan",100,12);
        villan.set_name("Villan");
    }
    return 0;
}
#include<iostream>
using namespace std;
class player{
    private:
    std::string name;
    int health;
    int xp;
    public:
    void set_name(std::string name_val){
        name=name_val;
    }
    std::string get_name(){
        return name;
    }
    //initializing default constructor
    player(){
        name="none";
        health=100;
        xp=3;
    }
}

}
int main()
{
    player nischal;//nischal here will have default values by the construcor player instead of garbage value
    frank.setname("Frank");
    cout<<frank.get_name

    return 0;
}


#include<iostream>
using namespace std;
class player{
    private:
    std::string name;
    int health;
    int xp;
    public:
    void set_name(std::string name_val){
        name=name_val;
    }
    std::string get_name(){
        return name;
    }
    player(std::string name_val,int health_val,int xp_value){
        name=name_val;
        health=health_val;
        xp=xp_val;
    }
    //same shit
    //player(std::string name_val,int health_val, int xp_val):name{name_val},health{health_val}xp{xp_val}{}
};

int main()
{
    //player frank; cannot use this way since a multi arg constructor is already initialized thus program doesnot run the default way
    player nischal{"nischal",100,13};

    return 0;
}
#include<iostream>
using namespace std;
 class number{
        private:
        int x,y;
        public:
        void get_number(){
            cout<<"enter two numbers"<<endl;
            cin>>x>>y;
        }
        void check(){
            if (x%2==0){
                cout<<"x is even"<<endl;
                
            }
            else{
                cout<<"x is odd"<<endl;
            }
            if (y%2==0){
                cout<<"y is even"<<endl;
                
            }
            else{
                cout<<"y is odd"<<endl;
            }
            
        }
    };
int main()
{
    number n1;
    n1.get_number();
    n1.check();
   
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int roll;
    int age;
    public:
    student(string name_val,int roll_val,int age_val):name{name_val},roll{roll_val},age{age_val}{}
    void printdata(){
        cout<<"The name,Roll No, and Age of the student is :"<<" "<<name<<" "<<roll<<" "<<age<<endl;
    }

};
int main()
{
    student nischal{"Nischal",18,19};
    nischal.printdata();

    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class player{
private:
    std::string name{"xxxxx"};
    int health;
    int xp;
public:
    //overloaded constructors
    player();
    player(std::string name_val);
    player(std::string name_val,int health_val, int xp_val);
    void print_data(){
        cout<<"name: "<<name<<endl<<"Health: "<<health<<endl<<"XP: "<<xp<<endl<<endl;

    }




};
player::player()
    :name{"none"},health{0},xp{0}{

}
player::player(std::string name_val)
        :name{name_val},health{0},xp{0}{}
player::player(std::string name_val, int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{}

int main()
{
    player empty;
    player nischal{"nischal"};
    player sarun{"sarun",100,100};
    nischal.print_data();
    sarun.print_data();
    empty.print_data();
    return 0;
}
///deligating constructors:reducing repetation
#include<iostream>
#include<string>
using namespace std;
class player{
private:
    std::string name{"xxxxx"};
    int health;
    int xp;
public:
    //overloaded constructors
    player();
    player(std::string name_val);
    player(std::string name_val,int health_val, int xp_val);
    void print_data(){
        cout<<"name: "<<name<<endl<<"Health: "<<health<<endl<<"XP: "<<xp<<endl<<endl;

    }




};
player::player()
    :player{"none",0,0}{//uses the third multi argument constructor 
        cout<<"no args constructor called"<<endl;

}
player::player(std::string name_val)
        :player{name_val,0,0}{
            cout<<"single args constructor called"<<endl;
        }
player::player(std::string name_val, int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        cout<<"multi args constructor called"<<endl;
    }

int main()
{
    player empty;
    player nischal{"nischal"};
    player sarun{"sarun",100,100};
    nischal.print_data();
    sarun.print_data();
    empty.print_data();
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class Player{
    private:
    std::string name;
    int health;
    int xp;
    public:
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    
    
};
Player::Player(std::string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{
    cout<<"multi-args constructor called"<<endl;
    cout<<name<<" "<<health<<xp<<endl;
}
int main()
{
    Player empty;
    Player frank{"Frank"};
    Player nischal{"nischal",100,550};

    return 0;   
}

///copy constructor
#include<iostream>
#include<string>
using namespace std;
class Player{
    private:
    std::string name;
    int health;
    int xp;
    public:
    std:: string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    //copy constructor
    Player(const Player &source);
    ~Player(){
        cout<<"destructor is being called for: "<<name<<endl;
    }
    
    
};
Player::Player(std::string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{
    cout<<"multi-args constructor called"<<endl;
    cout<<name<<" "<<health<<xp<<endl;
}
Player::Player(const Player &source):name{source.name},health{source.health},xp{source.xp}{
    cout<<"copy  constructor made up of : "<<source.name<<endl;
}
void display(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}
int main()
{
    Player empty;
    display(empty);
    Player frank{"Frank"};
    Player nischal{"nischal",100,550};

    return 0;   
}

//kunai function lai kunai object input dina lai copy constructor cahiyo

#include<iostream>
using namespace std;
class Shallow{
    private:
    int *data;
    public:
    void set_data_value(int d){*data=d;}
    int get_data_value(){return*data;}
    //constructor
    Shallow(int d);
    //copy constructor
    Shallow(const Shallow &source);
    //destructor
    ~Shallow();

};
Shallow::Shallow(int d){
    data=new int;
    *data=d;
}
Shallow::Shallow(const Shallow &source):data(source.data){
    cout<<"copy constructor-shallow copy"<<endl;
}
Shallow::~Shallow(){
    delete data;
    cout<<"Destructor Freeing data"<<endl;
}
void display_shallow(Shallow s){//no reference or value it is using copy constructor for input
    cout<<s.get_data_value()<<endl;
}
int main()
{
    Shallow obj1{100};
    display_shallow(obj1);
    Shallow obj2{obj1};//obj1=obj2
    obj2.set_data_value(1000);
    display_shallow(obj2);


    return 0;
}
//n shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from heap section, then copied object variable will also reference then same memory location.
//obj 1 is created and when obj 1 is given to display_shallow shallow constructor that copies the data from obj 1 is called,now source.data becomes value of data..here obj 1 and shallow s both point to same location in memory
//and when destructor is called the memory location is considered to have been cleared but obj1 still points to that adress in memory//when we try to copy obj1 to obj 2 and change it's value, the adress is invalid and program crashes
///deep copying
#include<iostream>
using namespace std;
class deep{
    private:
    int *data;
    public:
    void set_data_value(int d){
        *data=d;
    }
    int get_data_value(){
        return *data;
    }
    //constructor
    deep(int d);
    //copy constructor
    deep(const deep &source);
    //destructor
    ~deep();
};
deep::deep(int d){
    data =new int;
    *data=d;
}
deep::deep(const deep &source):deep{*source.data}//using delegating constructorsame as data=new int; *data=*source.data 
{
    cout<<"copy constructor-deep copy"<<endl;
}
deep::~deep(){
    delete data;
    cout<<"destructor freeing data"<<endl;
}
void display_deep(deep s){
    cout<<s.get_data_value()<<endl;
}
int main()
{
    deep obj1{100};
    display_deep(obj1);
    deep obj2{obj1};
    obj2.set_data_value(1000);
    display_deep(obj2);

    return 0;
}
//in deep copy the pointers  of display deep or copy constructor and the created object point to diffrent memory location so when the allocated memory of display deep gets destructed the memory allocated for obj1 still remains
//pointers and DMA
#include<iostream>
using namespace std;
int main()
{
    int score=100;
    double score2{120.7};
    int *score_ptr=&score;
    cout<<"The address of score is"<<score_ptr<<endl;
    cout<<"The value of score is"<<*score_ptr<<endl;
    return 0;
}
//derefrencing the pointer
#include<iostream>
using namespace std;
int main()
{
    int *int_ptr{nullptr};
    *int_ptr=100;
    int_ptr=new int;
    cout<<"address:"<<int_ptr<<endl;
    cout<<"value:"<<*int_ptr<<endl;
    delete int_ptr;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int *array_ptr{nullptr};
    int size{};
    cout<<"how big do you want the array"<<endl;
    cin>>size;
    array_ptr=new int[size];
    cout<<array_ptr<<endl;
    cout<<*array_ptr<<endl;
    delete [] array_ptr;

    return 0;
}
//move constructor
#include<iostream>
#include<vector>
using namespace std;
class move{
    private:
    int *data;
    public:
    void set_data_value(int d){*data=d;}
    int get_data_value(){return *data;}
    //constructor
    move(int d);
    //copy constructor
    move(const move &source);
    //move constructor
    move(move &&source) noexcept;
    //destructor
    ~move();
};
move::move(int d){
    data=new int;
    *data=d;
    cout<<"cons for "<<d<<endl;
}
//copy construcctor
move::move(const move & source):move{*source.data}{
    cout<<"copy constructor- deep copy for: "<<*data<<endl;

}
//move constructor
move::move(move &&source) noexcept:data{source.data}{
    source.data=nullptr;
    cout<<"move constructor for"<< *data<<endl;
}
move::~move(){
    if (data!=nullptr){
        cout<<"destructor freeing data for "<<*data<<endl;
    }
    else{
        cout<<"destructor freeing data for nullptr"<<endl;
    }
    delete data;
}
void display_deep(deep s){
    cout<<s.get_data_value()<<endl;
}
int main()
{
    
    vector<move> vec;
    vec.push_back(move{10});
    
    return 0;
}
//usinng const with classes

#include<iostream>
using namespace std;
class player{
    private:
    string name;
    int health;
    int xp;
    public:
    string get_name() const {//guranteeing the compiler this function not gonna change values
        //xp=100; cant do this
        return name;
    }
    void set_name(string name_val){
        name=name_val;
    }
    player();
    player(std::string name_val);
    player(std::string name_val,int health_val,int xp_val);

};
player::player():player{"none",0,0}{}
player::player(std::string name_val):player{name_val,0,0}{}
player::player(std::string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{}
void display_player(const player &p){
    cout<<p.get_name()<<endl;
}
int main()
{
    player hero{"Hero",20,100};
    display_player(hero);
    return 0;
}

//structt vs classes
//members of struct are public by default

//friend of a class
//friend: a function or class that has access to private class member and that function or class is not a member of the class it is acessing 

// multiple inheritance:sungle base to multiple derived classes
#include<iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
    void getx(int x_val){
        x=x_val;}
    };
class base2{
    protected:
    int y;
    public:
    void gety(int y_val){
        y=y_val;}
    };
class derived: public base,public base2{
    private:
    int sum;
    public:
    void display(){
        sum=x+y;
        cout<<"sum="<<sum<<endl;
    }
    };
int main()
{
    derived d1;
    d1.getx(12);
    d1.gety(15);
    d1.display();
    return 0;
}

//multilevel inheritance
#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void get_roll( int a){
        roll=a;
    }
};
class exam:public student{
    protected:
    int marks;
    public:
    void get_marks(int marks_val){
        marks=marks_val;
    }
};
class result:public exam{
    public:
    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    result r1;
    r1.get_marks(200);
    r1.get_roll(20);
    r1.display();
    return 0;
}
//hybrid inheritance
#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void get_roll( int a){
        roll=a;
    }
};
class exam: virtual public student{
    protected:
    int marks;
    public:
    void get_marks(int marks_val){
        marks=marks_val;
    }
};
class sport:virtual public student{
    protected:
    int grade;
    public:
    void get_grade(int grade_val){
        grade=grade_val;
    }
};
class result:public exam,  public sport{
    public:
    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
int main()
{
    result r1;
    r1.get_marks(200);
    r1.get_roll(20);
    r1.get_grade(4);
    r1.display();
    return 0;
}
//constructors in derived class
#include<iostream>
using namespace std;
class area{
    protected:
    float length;
    float breadth;
    public:
    area();
    area(float a,float b):length{a},breadth{b}{}
};
class volume:public area{
    private:
    float height;
    public:
    volume(float m, float n, float o):area(m,n){
        height=o;
    }
    void display(){
        cout<<"volume: "<<length*breadth*height<<endl;
    }
};

int main()
{
    volume v{1,2,3};
    v.display();
    return 0;
}
//operator overloading
#include<iostream>
using namespace std;
class dist{
    private:
    int feet, inch;
    public:
    void get_data(int feet_val,int inch_val){
        feet=feet_val;
        inch=inch_val;
    }
    void output(){
        
        cout<<feet<<"."<<inch<<endl;
    }
    dist operator +(dist o){
        dist temp;
        temp.feet=feet+o.feet;
        temp.inch=inch+o.inch;
    
        if(temp.inch>=12){
            temp.feet++;
            temp.inch=temp.inch-12;
        }
        return temp;
    }
};
int main()
{
    dist o1;dist o2;dist o3;
    o1.get_data(10,2);
    o2.get_data(11,20);
    o3=o1+o2;
    o3.output();
     
    return 0;
}/*
//type casting
//basic type to class type
#include<iostream>
#include<math.h>
using namespace std;
class time{
    private:
    int hour,minute;
    public:
    time();
    time(int m){//takes m in minutes
        hour=m/60;
        minute=m%60;

    }
    void display(){
        cout<<hour<<"."<<minute<<endl;
    }
    
};
int main()
{
    int given_minute=130;
    time t =given_minute;//calls parameterized constructor and puts the value of m as 130
    t.display();
    return 0;
}
#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
                Time(int);
		void display();
};

Time :: Time(int t)
{
	cout<<"Basic Type to ==> Class Type Conversion..."<<endl;
	hrs=t/60;
	min=t%60;
}

void Time::display()
{
	cout<<hrs<< ": Hours(s)" <<endl;
	cout<<min<< " Minutes" <<endl;
}

int main()
{
	
	
	int duration;
	cout<<"Enter time duration in minutes"; 
        cin>>duration;
	
	Time t1=duration;
        
	t1.display();
	
}

//using overloaded operator
 //operator = (int d);
 //in int main
 //duration=120;
 // t1.operator=(duration)


//class type to basic type
#include<iostream>
using namespace std;


class time{
    int hour,minute ;
    public:
    time(){};
    time( int hour_val, int minute_val){
        hour=hour_val;
        minute=minute_val;
        cout<<"operator called"<<endl;
        }
    operator int (){
    int min;
        
        min=hour*60+minute;
        return min;
        
    }
};


int main()
{
    int duration;
    
    time nischal{10,20};//calls for the overloaded operator since int value is supplied t1 now holds the value for min
    
    duration=nischal;
    cout<<duration<<endl; 
    return 0;
}
// C++ program to illustrate the
// above conversion
#include <bits/stdc++.h>
using namespace std;

// Tie Class
class Time {
	int hrs, mins;

public:
	// Constructor
	Time(int, int);

	// Casting operator
	operator int();

	// Destructor
	~Time()
	{
		cout << "Destructor is called."
			<< endl;
	}
};

// Function that assigns value to the
// member variable of the class
Time::Time(int a, int b)
{
	hrs = a;
	mins = b;
}

// int() operator is used for Data
// conversion of class to primitive
Time::operator int()
{
	cout << "Conversion of Class"
		<< " Type to Primitive Type"
		<< endl;

	return (hrs * 60 + mins);
}

// Function performs type conversion
// from the Time class type object
// to int data type
void TypeConversion(int hour, int mins)
{
	int duration;

	// Create Time Class object
	Time t(hour, mins);

	// Conversion OR duration = (int)t
	duration = t;
	cout << "Total Minutes are "
		<< duration << endl;

	// Conversion from Class type to
	// Primitive type
	//cout << "2nd method operator"
		//<< " overloading " << endl;

	//duration = t.operator int();

	//cout << "Total Minutes are "
		//<< duration << endl;

	return;
}

// Driver Code
int main()
{
	// Input value
	//int hour, mins;
	//hour = 2;
	//mins = 20;

	// Function call to illustrate
	// type conversion
	TypeConversion(20, 30);

	return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
class media{
        protected:
        string title;
        float price;
        public:
        media(){}
        media(string title_val,float price_val){
          title= title_val;
          price=price_val;

        }
        virtual void display()=0;//virtual function so media is now abstract class and it cannot have objects but it's inherited class can have
        
    };
class magzine:public media{
    int pages;
    public:
    magzine(){}
    magzine(string title_val,float price_val,int pages_val):media(title_val,price_val){
        pages=pages_val;
    }
    void display(){
        cout<<"Price: "<<price<<" Title "<<title<<
        " Pages: "<<pages<<endl;
    }
};
class cd:public media{
    int duration;
    public:
    cd(){}
    cd(string title_val,float price_val,int duration_val):media(title_val, price_val){
        duration=duration_val;
    }
    void display(){
        cout<<"Price "<<price<<" Title: " <<title<<" Duration:"<<duration<<endl;
    }
};

int main()
{
    media *mptr;
    magzine m{"Maths",250,25};
    cd c{"xxx",250,15};
    mptr=&m;
    mptr->display();
    mptr=&c;
    mptr->display();
    
    return 0;
}

#include<iostream>
using namespace std;
class staff{
    protected:
    int staff_Id;
    string name;
    public:
    void get_name_id(string name_val,int id_val){
        name=name_val;
        staff_Id=id_val;
    }
};
class lecturer:public staff{
    protected:
    string subject;
    string department;
    public:
    void get_sub_dept(string sub_val,string dept_val){
        subject=sub_val;
        department=dept_val;
    }
};
class administrive_staff:public lecturer{
    protected:
    string post;
    string admn_dept;
    public:
    void get_post(string post_val,string admn_dept_val){
        post=post_val;
        admn_dept=admn_dept_val;
    }
    void display(){
        cout<<staff_Id<<endl<<name<<endl<<subject<<endl<<department<<endl<<post<<endl<<admn_dept<<endl;
    }
};
int main()
{
    administrive_staff ad;
    ad.get_name_id("Sarun", 882838);
    ad.get_sub_dept("c++", "Technology");
    ad.get_post("accountant", "Money");
    ad.display();
    return 0;
}
//wap to use pure virtual function to print area of rectangle and triangle 
#include<iostream>
using namespace std;
class Area{
    protected:
    int base;
    int height;
    public:
    Area(){}
    Area(int base_val,int height_val):base{base_val},height{height_val}{}
    virtual void display()=0;

};
class triangle:public Area{
    public:
    triangle(int base_val,int height_val):Area(base_val,height_val){}
    void display(){
        cout<<"Area= "<<(0.5*base*height)<<endl;
    }
};
class rectangle:public Area{
    public:
    rectangle(int base_val,int height_val):Area (base_val,height_val){}
    void display(){
        cout<<"Area= "<<(base*height)<<endl;
    }
};
int main()
{
    Area *ptr;
    triangle t{12,13};
    rectangle s{12,12};
    ptr=&t;
    ptr->display();
    ptr=&s;
    ptr->display();
    

    
    return 0;
}
//wap to add two numbers using templatee function
#include<iostream>
using namespace std;
template <class T>
class sum{
    private:
    T a;
    T b;
    public:
    void get_data( T a_val, T b_val){
         a =  a_val;
         b =  b_val;
    }
    void display(){
        cout<<a+b<<endl;
    }
};
int main()
{
    sum<int> s1;
    sum<float> s2;
    s1.get_data(12,13);
    s2.get_data(14.1,13.2);
    s1.display();
    s2.display();
    return 0;
}
#include<iostream>
using namespace std;
template <class T1,class T2>
class sum{
    private:
    T1 a;
    T2 b;
    public:
    void get_data( T1 a_val, T2 b_val){
         a =  a_val;
         b =  b_val;
    }
    void display(){
        cout<<a+b<<endl;
    }
};
int main()
{
    sum<int,float> s1;
    sum<float,int> s2;
    s1.get_data(12,13.55);
    s2.get_data(14.33,13);
    s1.display();
    s2.display();
    return 0;
}
#include<iostream>
using namespace std;
class distance{
    int hr,min,sec;
    public:
    distance();
    distance(int hr_var,int min_var, int sec_var);
    void addData(distance d1,distance d2);
    
    void display(){}
};
distance::distance(int hr_var,int min_var, int sec_var){
        hr=hr_var;
        min=min_var;
        sec=sec_var;
}
void distance::addData( distance d1, distance d2 ){
        
        hr=d1.hr+d2.hr;
        min=d1.min+d2.min;
        sec=d1.sec+d2.sec;
    }
void distance::display(){
    cout<<hr<<min<<sec<<endl;
}
int main()
{
    distance a{12,4,50};
    distance b{12,4,50};
    distance c;
    c.addData(a,b);
    c.display();
    return 0;
}
#include<iostream>
using namespace std;
class tiem{
    int hrs,min,sec;
    public:
    tiem(){hrs=0;min=0;sec=0;};
    tiem(int h, int m, int s){
        hrs=h;
        min=m;
        sec=s;
    }
    void display(){
        cout<<hrs<<min<<sec<<endl;
    }
    void add(tiem t1,tiem t2){
    sec=t1.sec+t2.sec;
    min=t1.min+t2.min;
    hrs=t1.hrs+t2.hrs;
    if (sec>=60){
        min++;
        sec=sec-60;
    }
    if (min>=60){
        hrs++;
        min=min-60;
    }
}
};

int main()
{
    tiem t1{10,11,50};
    tiem t2{10,11,12};
    tiem t3;
    t3.add(t1,t2);
    t3.display();
    return 0;
}
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
}
#include<iostream>
using namespace std;
class player{
    int goals,assists,jersey_no;
    public:
    player(){
        cout<<"enter the no of goals assists and jersey number"<<endl;
        cin>>goals>>assists>>jersey_no;
    }
    player(const player &s){
        goals=s.goals;
        assists=s.assists;
        jersey_no=s.jersey_no;
    }
    bool operator >(player a){
        if((goals+assists)>(a.goals+a.assists)){
            return true;
        }
        else{
          return false;
        }
    }
    void display(){
        cout<<goals<<assists<<jersey_no<<endl;
    }
};
int main()
{
    int i;
    player p[2];
    for(int i=0;i<2;i++ ){
        player p[i];
    }
    player greatest = p[0];
    for(int i=0;i<2;i++){
        if(p[i]>greatest){
            greatest=p[i];
        }else{
            greatest=greatest;
        }

    }
    greatest.display();
    return 0;
}

#include<iostream>
using namespace std;
class calc{
        private:
        int feet;
        int inch;
        public:
        calc(){};
        calc(int meter_val){
            float meter_ininch=meter_val*39.37007874;
            feet=meter_ininch/12;
            inch=(meter_ininch-feet*12);
        }
        operator int(){
            int meteres;
            meteres=feet/3 +(inch/3.37007874);
            return meteres;
        }
        void display(){
            cout<<feet<<"."<<inch<<endl;
        }
    };
int main()
{
    calc s1;
    int meter=40;
    s1=meter;
    s1.display();
    meter=s1;
    cout<<meter;
    
    return 0;
}
#include<iostream>
using namespace std;
template<class T>
void bubble(T a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
template<class T>
void swap(T&x,T &y){
    T t;
    t=x;
    x=y;
    y=t;
}
int main()
{
    int x[5]={1,3,5,2,7};
    float y[3]={10.0,1.1,1.4};
    bubble(x,5);
    for(int i=0;i<5;i++){
        cout<<x[i]<<endl;
    }
    return 0;
}
// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> g1;

  for (int i = 1; i <= 5; i++)
    g1.push_back(i);

  cout << "Output of begin and end: ";
  for (auto i = g1.begin(); i != g1.end(); ++i)
    cout << *i << " ";

  cout << "\nOutput of cbegin and cend: ";
  for (auto i = g1.cbegin(); i != g1.cend(); ++i)
    cout << *i << " ";

  cout << "\nOutput of rbegin and rend: ";
  for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
    cout << *ir << " ";

  cout << "\nOutput of crbegin and crend : ";
  for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
    cout << *ir << " ";

  return 0;
}
#include<iostream>
using namespace std;
class base{
    protected:
    int hour;
    int min;
    int sec;
    public:
    void getdata(){
        cout<<"enter hour min and second"<<endl;
        cin>>hour>>min>>sec;
    }
    int secondsonly(){
        int seconds=(hour*60)+(min*60)+sec;
        return seconds;
    }

};

class derived:public base{
protected:
    int derivedhour;
    int derivedmin;
    int derivedsec;
    public:
    void  getderiveddata(){
        cout<<"enter derived value"<<endl;
        cin>>derivedhour>>derivedmin>>derivedsec;

    }
 
   void display(){
    cout<<derivedhour+hour<<","<<derivedmin+min<<","<<derivedsec+sec<<endl;
   }
   friend class x;
    
};
class x:public base{
    public:
    void displaydiffrence(derived n){
        cout<<(n.derivedhour)<<","<<min<<","<<(n.derivedsec)-sec<<endl;
    }
};
int main()
{
    
    derived d;
    d.getdata();
    d.getderiveddata();
    d.display();
    x p;
    p.displaydiffrence(d);
    return 0;
}

#include<iostream>
using namespace std;
int choise;
void select(){
    cout<<"enter your choice"<<endl;
    cin>>choise;
    try{
        if (choise==1){
            throw (100);//integer type
        }
        if (choise==2){
            throw('x');//character type
        }
        if(choise==3){
            throw (1.25f);//float type
        }
        else{cout<<"Bye babu!";}
    }
    catch(int a){
        cout<<"integer caught "<<a<<endl;
    }
    catch(char b){
        cout<<"character caught"<<b<<endl;
    }
    catch(float n){
        cout<<"float caught"<<n<<endl;
    }
}
int main()
{
    select();
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
class react{
    float xw;
    float yw;
    public:
    react(){
        xw=0.0;
        yw=0.0;
    }
    react(float x_val,float y_val){
        xw=x_val;
        yw=y_val;
    }
    void display(){
        cout<<xw<<"  "<<yw<<endl;
    }
};
class polar{
    float rad;
    float ang;
    public:
    polar();
    polar(float rad_val,float ang_val){
        rad=rad_val;
        ang=ang_val;
    }
    void pdisplay(){
        cout<<rad<<"  "<<ang<<endl;
    }
    operator react(){
        int xx;
        int yy;
        xx=rad*cos(ang);
        yy=rad*sin(ang);
        return react(xx,yy);
    }
};

int main()
{
    polar p(110,101);
    react r;
    r=p;
    r.display();
    p.pdisplay();
    return 0;
}

    


int main()
{
    base s1;
    s1.getdata(10,11);
    derived d;
    d.addvector()
    return 0;
}
#include<iostream>
using namespace std;
class unary{
    private:
    int x;
    int y;
    public:
    unary(int x_val,int y_val):x{x_val},y{y_val}{}
    void operator --(){
        x=--x;
        y=--y;

    }
    void display(){
        cout<<x<<"  "<<y<<endl;
    }
};
int main()
{
    unary u{12,13};
    u.display();
    --u;
    u.display();
    return 0;
}
#include<iostream>
using namespace std;
class base{
    protected:
    int x1;
    int y1;
    int x2;
    int y2;
    int ansx;
    int ansy;
    public:
    base(){};
    base(int x1_val,int y1_val,int x2_val,int y2_val){
        x1=x1_val;
        y1=y1_val;
        x2=x2_val;
        y2=y2_val;
        cout<<x1<<y2<<endl;
    }
};
class derived:public base
{
    public:
    // derived(){}
     void addvector(){
        cout<<x2<<" "<<endl;}
        
    
};

int main(){
    base b{10,11,15,25};
    derived d;
    d.addvector();
    return 0;
    
}
#include<iostream>
using namespace std;
class infeet{
    private:
    float feet;
    float inch;
    public:
    infeet(float feet_val,float inch_val){
        feet=feet_val;
        inch=inch_val;
    }
    friend class inmetere;
};
class inmetere{
    private:
    float metere;
    public:
    inmetere(){
    }
    inmetere(infeet b){
        float x= (b.feet+b.inch/12)*(1/3.2804);
        metere=x;

    }
    void display(){
        cout<<metere<<endl;
    }
};
int main()
{
    infeet a(5,11);
    inmetere n;
    n=a;
    n.display();
    return 0;
}
#include<iostream>
using namespace std;
class university{
        protected:
        string name;
        string location;
        public:
        university(){}
        university(string name_val,string location_val){
            name=name_val;
            location=location_val;
        }
        void display1(){
            cout<<name<<location<<endl;
        }
    };
    class cc: virtual public university{
        protected:
        string dean;
        string school;
        string nameofprogram;
        public:
        cc(){}
        cc(string dean_val,string school_val,string nameofprogram_val){
            dean=dean_val;
            school=school_val;
            nameofprogram=nameofprogram_val;
        }
        void display2(){
            cout<<dean<<school<<nameofprogram<<endl;
        }
    };
    class affiliatedcollege:virtual public university{
        protected:
        string collegename;
        int no_of_program;
        public:
        affiliatedcollege(){}
        affiliatedcollege(string collegename_val,int no_of_program_val){
            collegename=collegename_val;
            no_of_program=no_of_program_val;
        }
        void display3(){
            cout<<name<<location<<collegename<<no_of_program<<endl;
        }

    };
    class student:public cc,public affiliatedcollege{
        string studentname;
        string program;
        int enrolledyear;
        public:
        student(string name_val,string location_val,string dean_val,string school_val,string nameofprogram_val,string collegename_val,int noofprogram_val,string studentname_val,string program_val,int enrolled_val):university(name_val,location_val),cc(dean_val,collegename_val,nameofprogram_val),affiliatedcollege(collegename_val,noofprogram_val){
            studentname=studentname_val;
            program=program_val;
            enrolledyear=enrolled_val;
            
        }
        void display4(){
            cout<<name<<location<<dean<<school<<nameofprogram<<collegename<<no_of_program<<studentname<<program<<enrolledyear<<endl;
        }
    };
    
int main()
{
    student nischal("pu","bjpur","sarun","bblock","software","soe",4,"nischal","hi",2020);
    nischal.display4();
    
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    *p=5;
    cout<<p<<","<<*p<<endl;
    delete[]p;
    cout<<p<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class sample{
    private:
    int *p;
    int n;
    public:
    sample(int n_val ){
        n=n_val;
        p=new int[n];
        for(int i=0;i<n;i++){
            cout<<"enter value no:"<<i+1<<endl;
            cin>>p[i];
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<p[i]<<endl;
        }
    }
    ~sample(){
        delete p;
    }
};
int main()
{
    sample nischal(5);
    nischal.display();
    return 0;
}
#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class str{
    char x [50];
    public:
    void getdata(){
        cout<<"enter the string"<<endl;
        cin>>x;
    }
    void display(){
        cout<<x<<endl;
    }
    str operator +(str s){
        str temp;
        strcpy(temp.x,strcat(x,s.x));
        return temp;
    }
};
int main()
{
    str s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.display();
    return 0;
}


#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    string address;
    int citizenship_no;
    public:
    person(string name_val,int age_val,string address_val){
        name=name_val;
        age=age_val;
        address=address_val;
    }
    void assigncitizenship(){
        if(age>16){
            cout<<"enter citizenship number"<<endl;
            cin>>citizenship_no;
        }
    }
    void display(){
        cout<<name<<endl<<address<<endl<<age<<endl<<citizenship_no<<endl;
    }
};
int main()
{
    person s("Nischal",18,"rajahar");
    s.assigncitizenship();
    s.display();
    return 0;
}
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class stringA{
    private:
    char x[20];
    public:
    void readA(){
        cout<<"enter first string"<<endl;
        cin>>x;
    }
    char getx(){
        return x[20];
        }
};
class stringB{
    private:
    char y[20];
    stringA a;
    public:
    void readB(){
        a.readA();
        cout<<"enter second string"<<endl;
        cin>>y;
    }
    void concat(){
        char n[]=concat(a.getx(),y);
        
        cout<<"the concated string is: "<<n<<endl;
    }
};
int main()
{
    stringB n;
    n.readB();
    n.concat();
    return 0;
}*/
#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"Base Display"<<endl;
    }
    virtual ~base(){
        cout<<"base destructor called"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"derived display"<<endl;
    }
    ~derived(){
        cout<<"derived destructor called"<<endl;
    }
};
int main()
{
    base *ptr= new base();
    ptr->display();
    derived d;
    base *ptr2;
    ptr2=&d;//ptr 2 points to derived class now ,deleting it should call derived pointer
    ptr->display();
    delete ptr;
    delete ptr2;
    
    return 0;
}
