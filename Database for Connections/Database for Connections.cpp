#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

vector <string> users;
vector <string> passwords;

class user_database
{
protected:
    string username_db;
    string email_db;
    string password_db;
    string confirm_password;
public:
    void create_account_username()
    {
        system("cls");
        cout << "\t\t\t Please enter your username: " << endl;
        cin >> username_db;
        if ((count(users.begin(), users.end(), username_db)) || (size(username_db) < 8))
        {
            cout << "\t\t\t Please enter a valid username: " << endl;
            create_account_username();
        }
        else
        {
            users.push_back(username_db);
        }
    }
    void create_account_password()
    {
        system("cls");
        cout << "\t\t\t Please enter your password: " << endl;
        cin >> password_db;
        passwords.push_back(password_db);
    }
    void create_account_password()
    {

    }
    void create_account()
    {
        create_account_username();
        create_account_password();
    }
};

class current_user
{
protected:
    string username;
    string password;
public:
    void login()
    {
        

    }
};

int open()
{
    int option;
    do
    {
        cout << "\t\tWelcome to your personal networking assistant\t\t" << endl;
        cout << "\t\t\t 1. Login in \t\t\t" << endl;
        cout << "\t\t\t 2. Create account \t\t\t" << endl;
        cout << "\t\t\t 3. Quit \t\t\t" << endl;
        cin >> option;
    } while ((option > 4) || (option <= 0));
    return option;
}

int main()
{
    int move;
    user_database operations;
    do
    {
        move = open();
        system("cls");
        if (move == 1)
        {

        }
        else if (move == 2)
        {
            operations.create_account();
        }
        else if (move == 3)
        {

        }
        else
        {
            continue;
        }
    } while (move < 3);
}

