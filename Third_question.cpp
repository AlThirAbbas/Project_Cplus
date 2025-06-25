
#include <iostream>
using namespace std;
//الطاهر عباس احمد النور 
struct Student {
    string name;
    int age;
double grade;
};

int main() {
   Student A;
   A.name="احمد";
   A.age=16;
   A.grade=50;
   
    cout << "\n بيانات الطلاب الاول:\n";
 
        cout << "الاسم: " << A.name
             << ", العمر: " <<A.age
             << ", المعدل: " <<A.grade << endl;
             
             
Student B;
   B.name="عبدالله";
   B.age=15;
   B.grade=70;
   
                cout << "\nبيانات  الطلاب الثاني:\n";
 
        cout << "الاسم: " <<B.name
             << " العمر: " <<B.age
             << " المعدل: " <<B.grade<< endl;
             
    
    
                 
Student C;
   C.name="عثمان";
   C.age=17;
   C.grade=20;
   
                cout << "\nبيانات  الطلاب الثالث:\n";
 
        cout << "الاسم: " <<C.name
             << ", العمر: " <<C.age
             << ", المعدل: " <<C.grade << endl;
             
    
  double totalGrades=A.grade+C.grade+B.grade;

    cout << "\nالمعدل العام لجميع الطلاب: " << totalGrades /3 << endl;

    return 0;
}
