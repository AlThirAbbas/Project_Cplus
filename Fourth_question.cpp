
#include <iostream>
using namespace std;
//الطاهر عباس احمد النور 
struct Employees {
    string name;
    int employeeID ;
double salary;
};

int main() {
   Student A;
   A.name="احمد";
   A.employeeID =1;
   A.salary=50;
   
    cout << "\n بيانات الموظف الاول:\n";
 
        cout << "الاسم: " << A.name
             << ", الرقم الوظيفي: " <<A.employeeID
             << "الراتب " <<A.salary<< endl;
             
             
Student B;
   B.name="عبدالله";
   B.employeeID=2;
   B.salary=70;
   
                cout << "\nبيانات  الموظف الثاني:\n";
 
        cout << "الاسم: " <<B.name
             << "الرقم الوظيفي: " <<B.employeeID
             << " الراتب: " <<B.salary<< endl;
             
    
    
                 
Student C;
   C.name="عثمان";
   C.employeeID=3;
   C.salary=20;
   
                cout << "\nبيانات  الموظف الثالث:\n";
 
        cout << "الاسم: " <<C.name;
             << ", الرقم الوظيفي: " <<C.employeeID
             << ", الراتب: " <<C.salary << endl;
             



}
