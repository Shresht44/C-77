#shresht23070123077
#include <iostream>
using namespace std;

int main(){
    int m1 , m2 , m3 , m4;
    float avg;
    
    cout << "Marks Average " << endl;
    
    cout << "Enter marks of subjects " << endl;
    cin >> m1 >> m2 >> m3 >> m4;
    
    avg = (m1 + m2 + m3 + m4)/4;
    cout << "Your Average is " << avg << endl;
    
    if (avg > 80 and avg < 90){
        cout << "Your grade is A" << endl;
    }
    if (avg > 70 and avg < 80){
        cout << "Your grade is B" << endl;
    }
    else{
        cout << "Your grade is C" << endl;
    }
    return 0;
}



Marks Average
Enter marks of subjects
70
80
90
80
Your Average is 80
Your grade is C

--------------------------------
Process exited after 6.612 seconds with return value 0
Press any key to continue . . .
