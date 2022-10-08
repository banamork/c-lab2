#include <iostream>
#include <string>
#include "bernulli.hpp"
#include "dialog.hpp"

using namespace std;

int main(){
    double A;
    double F;
    cout << "Введите значение параметра вашей кривой:" << endl;
    do{
        if(!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Повторите ввод." << endl;
        }
        cin >> A;
    }while(!cin);
    lemniscata_bernulli lember;
    lember.set_a(A);
    int flag = 0;
    do{
        int var = menu();
        switch(var){
            case 1:
                flag = 1;
                break;
            case 2:
                cout << "Введите значение угла" << endl;
                do{
                    if(!cin){
                        cin.clear();
                        while (cin.get() != '\n');
                        cout << "Повторите ввод." << endl;
                    }
                    cin >> F;
                }while(!cin);
                lember.return_distance(F);
                break;
            case 3:
                cout << "Введите значение угла" << endl;
                do{
                    if(!cin){
                        cin.clear();
                        while (cin.get() != '\n');
                        cout << "Повторите ввод." << endl;
                    }
                    cin >> F;
                }while(!cin);
                lember.radius(F);
                break;
            case 4:
                cout << "Введите значение угла" << endl;
                do{
                    if(!cin){
                        cin.clear();
                        while (cin.get() != '\n');
                        cout << "Повторите ввод." << endl;
                    }
                    cin >> F;
                }while(!cin);
                lember.sector_area(F);
                break;
            case 5:
                lember.square();
                break;
            default:
                break;
        }
    }while(flag != 1);
    return 0;
}