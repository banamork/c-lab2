#include <iostream>
#include <string>
#include "bernulli.hpp"
#include "dialog.hpp"

using namespace std;

int main(){
    double F;
    cout << "Введите значение угла" << endl;
    do{
        if(!cin){
            cin.clear();
            while (cin.get() != '\n');
            cout << "Повторите ввод." << endl;
        }
        cin >> F;
    }while(!cin);
    lemniscata_bernulli lember;
    int flag = 0;
    do{
        int var = menu();
        switch(var){
            case 1:
                flag = 1;
                break;
            case 2:
                lember.return_distance(F);
                break;
            case 3:
                lember.radius(F);
                break;
            case 4:
                lember.sector_area(F);
                break;
            case 5:
                lember.square();
                break;
            case 6:
                double par;
                cout << "Введите значение параметра вашей кривой:" << endl;
                do{
                if(!cin){
                cin.clear();
                while (cin.get() != '\n');
                cout << "Повторите ввод." << endl;
                }
                cin >> par;
                }while(!cin);
                lember.set_a(par);
                break;
            case 7:
                cout << "Введите значение угла" << endl;
                do{
                    if(!cin){
                        cin.clear();
                        while (cin.get() != '\n');
                        cout << "Повторите ввод." << endl;
                    }
                    cin >> F;
                }while(!cin);
                break;
            default:
                break;
        }
    }while(flag != 1);
    return 0;
}