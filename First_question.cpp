#include <iostream>
using namespace std;

//الطاهر عباس
struct student
{
    int age;
    string name;
     double grade;
};


int main() {
    student A;
    A.age=27;
    A.name="AlThir ";
    A.grade=92.7;
    cout<<"name:"<<A.name<<"\nage:"<<A.age<<"\ngrade:"<<A.grade<<endl;
   
    return 0;
}