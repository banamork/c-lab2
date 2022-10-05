#include <iostream>
#include <string>

using namespace std;


void showMenu(){
    printf("\n ..................................................................... \n");
    cout << "Выберите действие:";
    cout << "0 - Выйти из программы." << endl;
    cout << "1 - " << endl;
    cout << "2 - " << endl;
    cout << "3 - " << endl;
    cout << "4 - " << endl;
    cout << "\n ..................................................................... \n";
}



int verify ( char* menu ){
    while ( 1 )
    {
        if( menu == NULL )
        {
            cout << "Вы ничего не ввели." << endl;
            //cin.getline( );
        } else if (strlen( menu ) == 0 )
        {
            cout << "Вы ничего не ввели." << endl;
            free( menu );
            //menu = readline("");
        } else if( strlen(menu) == 1 )
        {
            if (isdigit( menu[0]) )
            {
                int k = atoi( menu );
                free( menu );
                return k;
            }
            else
            {
                cout << "Неверно введён пункт меню." << endl;
                free( menu );
                //menu = cin.getline();
            }
        }
        else
        {
            cout << "Неверно введён пункт меню." << endl;
            free( menu );
            //cin.getline( menu );
        }
    }
}


