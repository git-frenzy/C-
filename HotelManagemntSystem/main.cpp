#include <iostream>
#include <string>

using namespace std;

const string username = "Admin";
const string password = "1357";

bool getLogin = false;
int menuInput;
bool available;

void guestRegistration();

void roomAllotment(string name);

int roomManagement();

int guestManagement();

int groceryManagement();

int security();

void menu();

bool login(string username, string password);

int main() {

//    switch (login()) {
//        case true:
//            cout << "Authentication Successful" << endl;
//            menu();
//            break;
//        case false:
//            cout << "Authentication Failed" << endl;
//            login();
//            break;
//        default:
//            cout << "Invalid Details" << endl;
//            login();
//            break;
//
//    }

//    do {
//        if (login() == true) {
//            cout << "Authentication Successful" << endl;
//            cout << endl;
//            menu();
//            break;
//        }
//    } while (login() != true);
//    if (login() != true) {
//        cout << "Invalid Details" << endl;
//        cout << endl;
//        login();
//
//    }


    bool authenticated = false;
    do {
        authenticated = login("admin", "password");
        if (authenticated) {
            cout << "Authentication Successful" << endl;
            cout << endl;
            menu();
            break;
        } else {
            cout << "Invalid Details" << endl;
            cout << endl;
        }
    } while (!authenticated);

    return 0;


}

bool login() {

    cout << "------Enter your Login details------" << endl;


    string getUsername;
    cout << "Username: ";
    getline(cin, getUsername);

    string getPassword;
    cout << "Password: ";
    getline(cin, getPassword);

    cout << endl;


    if (username == getUsername && password == getPassword) {
        return true;
    } else {
        return false;
    }

}

void guestRegistration() {
    cout << "------New Guest Registration------" << endl;


    cout << endl;

    cout << "Enter guest details" << endl;


    string name;

    cout << "Name: ";
    getline(cin, name);


    int age;

    cout << "Age: ";
    cin >> age;

    if (age < 18) {
        cout << "Underage registration prohibited." << endl;
        guestRegistration();
        return;
    }


    string mobileNo;

    cout << "Mobile number: ";
    cin >> mobileNo;

    if (mobileNo.length() != 10) {
        cout << "Invalid Mobile Number." << endl;
        guestRegistration();
        return;
    }

    cout << "----------------------------------" << endl;


    roomAllotment(name);
}

void roomAllotment(string name) {

    char room[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                   ' ', ' ', ' ', ' ', ' '};


    int totalRooms = sizeof(room) / sizeof(char);

//    cout<<totalRooms;

    for (int i = 0; i < totalRooms; i++) {
        if (room[i] == ' ') {
            room[i] = name[0];
            cout << name << " are allotted to room number: " << i + 1;

        }
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
            ::exit(0);
            break;
        default:
            menu();
            break;
    }

}


