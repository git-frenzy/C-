#include <iostream>
#include <string>

using namespace std;

const string username = "Admin";
const string password = "1357";
bool getLogin;
int menuInput;

void roomAllotment(string basicString);
int roomManagement();

int guestManagement();

int groceryManagement();

int security();


void menu();



int login() {

    cout << "------Enter your Login details------" << endl;


    string getUsername;
    cout << "Username: ";
    getline(cin, getUsername);

    string getPassword;
    cout << "Password: ";
    getline(cin, getPassword);

    cout << endl;


    if (getUsername == username && getPassword == password) {
        getLogin = true;
    } else {
        getLogin = false;
    }

}

int guestRegistration() {
    cout << "------New Guest Registration------" << endl;


    cout << endl;

    cout << "Enter guest details" << endl;

    string fullName = NULL;
    int age = NULL;
    string mobileNo = NULL;


    cout << "FullName: ";
    getline(cin, fullName);

    cout << "Age: ";
    cin >> age;

    if (age < 18) {
        cout << "Underage registration prohibited." << endl;
        guestRegistration();
        return 0;
    }

    cout << "Mobile number: ";
    cin >> mobileNo;

    if (mobileNo.length() != 10) {
        cout << "Invalid Mobile Number." << endl;
        guestRegistration();
        return 0;
    }

    cout << "----------------------------------" << endl;


    roomAllotment(fullName);



    return 0;
}

void roomAllotment(string name) {

  char room[]={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};


  cout<<"Available rooms are "<<;


  for(int i=0; i<)

  if(room[]==' '){

  }




}

int roomManagement() {
    return 0;
}

int guestManagement() {
    return 0;
}

int groceryManagement() {
    return 0;
}

int security() {
    return 0;
}


void menu() {


    cout << "------Welcome to Ocean Resorts------" << endl;

    //MENU
    cout << "MAIN MENU" << endl;

    cout << "1. New Guest Registration" << endl;
    cout << "2. Room Management" << endl;
    cout << "3. Guest Management" << endl;
    cout << "4. Grocery Management" << endl;
    cout << "5. Security" << endl;
    cout << "6. Exit" << endl;
    cout << endl;

    cout << "Menu Input: ";

    cin >> menuInput;

    switch (menuInput) {
        case 1:
            guestRegistration();
            break;
        case 2:
            roomManagement();
            break;
        case 3:
            guestManagement();
            break;
        case 4:
            groceryManagement();
            break;
        case 5:
            security();
            break;
        case 6:
            login();
            break;
        default:
            menu();
            break;
    }


}

int main() {


    switch (login()) {
        case true:
            cout << "Authentication Successful";
            menu();
            break;
        default:
            cout << "Invalid Details";
            login();
            break;

    }

}
