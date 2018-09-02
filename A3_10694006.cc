#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Insert the Score between 0 and 100: ";
    cin >> n;

    if(n>=80){
        cout << "Grade: A" << endl;
    }else{
        if(n>=75){
            cout << "Grade: B+" << endl;
        }else{
            if(n>=70){
                cout << "Grade: B" << endl;
            }else{
                if(n>=65){
                    cout << "Grade: C+" << endl;
                }else{
                    if(n>=60){
                        cout << "Grade: C" << endl;
                    }else{
                        if(n>=55){
                            cout << "Grade: D+" << endl;
                        }else{
                            if(n>=50){
                                cout << "Grade: D" << endl;
                            }else{
                                cout << "Grade: F" << endl;
                                }
                            }
                    }   }
                }
            }
        }
    }
    return 0;
}
