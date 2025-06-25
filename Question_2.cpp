#include <iostream>
using namespace std;

int main() {
//طباعة الاسم
cout<< "               الطاهر عباس احمد"<<endl;

//تعريف المتغيرات
int number;
int number2;

// طلب ادخال الرقم الاول من المستخدم 
cout<< "ادخال الرقم الاول :";
cin>>number;

//طلبادخال الرقم الثاني من المستخدم  
cout<<"ادخال الرقم الثاني:";
cin>>number2;
//اجراء عملية ضرب
   int Result=number * number2;
   //عرض النتائج 
   cout<< "النتائج هو :"<<Result<<endl;
}
