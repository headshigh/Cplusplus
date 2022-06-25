#include<iostream>
using namespace std;
class dist{
    private:
    int hour, min,second;
    public:
    void get_data(int hour_val,int min_val,int sec_val){
        hour=hour_val;
        min=min_val;
        second=sec_val;
    }
    void output(){
        
        cout<<hour<<"."<<min<<"."<<second<<endl;
    }
    dist operator +(dist o){
        dist temp;
        temp.hour=hour+o.hour;
        temp.second=second+o.second;
        temp.min=min+o.min;
        if(temp.second>=60){
            temp.min++;
            temp.second=temp.second-60;
        }
        if(temp.min>=60){
            temp.hour++;
            temp.min=temp.min-60;
            
        }
        return temp;
    }
};
int main()
{
    dist o1;dist o2;dist o3;
    o1.get_data(10,55,40);
    o2.get_data(11,18,50);
    o3=o1+o2;
    o3.output();
     
    return 0;}