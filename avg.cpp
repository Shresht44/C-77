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
