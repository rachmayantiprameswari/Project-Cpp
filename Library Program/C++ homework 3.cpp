#include <iostream>

using namespace std;

void header (){
    cout << "=============================================" << endl;
    cout << "               Library Program               " << endl;
    cout << "=============================================" << endl;
}

main (){
    string member, username, password, bookTitle, borrowBook, returnBook, dateBorrowing, dateReturn, deadline;
    int total, menu, totalBorrow;
    char yesNo, answer, finish;

    header();

    cout << "  Before select the menu, please login first " << endl;
    cout << "=============================================" << endl;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password; //Enter password 1234
    if (password == "1234"){
        system ("cls");
        cout << "Your PASSWORD and USERNAME Suitable!\nYou successfully login" << endl;
    }
    else {
        cout << "Failed login, your PASSWORD and USERNAME wrong!";
        exit (0);
    }
    cout << endl;

    header();
    cout << "List Menu: " << endl;
    cout << "1. Searching the book title" << endl;
    cout << "2. Borrow the book" << endl;
    cout << "3. Return the book" << endl;
    cout << "4. Warning of late return" << endl;
    cout << endl;

do{
    cout << "Enter the selected menu: ";
    cin >> menu;

    switch (menu){
     case 1:
         cout << "Search book title: ";
         cin >> bookTitle;

         cout << endl;
         cout << "Do you want to go another menu(Y/N)?: ";
         cin >> yesNo;
    break;

    case 2:
         cout << "Enter total borrow book: ";
         cin >> totalBorrow;

         cout << "Enter the date of borrowing book (dd/mm/yy): ";
         cin >> dateBorrowing;

         cout << endl;
         cout << "Do you want to go another menu (Y/N)?: ";
         cin >> yesNo;
    break;

    case 3:
         cout << "Enter the date of return book (dd/mm/yy): ";
         cin >> dateReturn;

         cout << endl;
         cout << "Do you want to go another menu(Y/N)?: ";
         cin >> yesNo;
    break;

    case 4:
         cout << "Enter the deadline of return (dd/mm/yy): ";
         cin >> deadline;

         cout << endl;
         cout << "Do you want to go another menu(Y/N)?: ";
         cin >> yesNo;
    break;
}
}while(yesNo == 'Y' || yesNo == 'y');
       {
        finish = true;
       }
    return 0;
}
