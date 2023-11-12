#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    int roll;
    float percentage;
    int grade;
    Student(int roll,float percentage,int grade){
        this->roll=roll;
        this->percentage=percentage;
        this->grade=grade;
    };
};
void change(Student *ptr){
    ptr->roll=54;
    ptr->percentage=63.3;
    ptr->grade=3;
}
int main(){
   Student akshith(44,96.2,1);
   Student*ptr=&akshith;
   change(ptr);
   cout<<akshith.roll<<" "<<akshith.percentage<<" "<<akshith.grade<<endl;


}