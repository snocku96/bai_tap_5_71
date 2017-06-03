#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello HUY!" << endl;
    string username;
    string yourname;
    int password;
    cout << "Please add new username \n";
    getline(cin,username, '\n');
    cout << "Your name is saved in system"<< "\n";
    cout << "Please enter your name again \n";
    getline(cin,yourname, '\n');
    cout << "please enter password system \n";
    cin >>password;
    if(username==yourname && password==1996){
        cout <<"Access allowed" << "\n";
    }else
        cout <<"Denied access";
    return 0;
}
