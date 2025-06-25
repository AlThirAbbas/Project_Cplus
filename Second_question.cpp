#include <iostream>
using namespace std;
//الطاهر عباس احمد
struct Library
{
    string title;
     string author;
     int year_Published;
};


int main() {
    Library b;
    b.title=" عرس الزين";
    b.author="الطيب صالح";
    b.year_Published=1969;
    cout<<"title:"<<b.title<<"\nauthor:"<<b.author<<"\nyear Published:"<<b.year_Published<<endl;
   
    return 0;
}