#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User
{
    private: 
    string UserName;
    string UserPassword;
    
    public:
    void SetUserName (string Name);
    void SetPassword (string Password);
    string GetUserName ();
    string GetUserPassword ();

    User (string name, string password)
    {
        UserName = name;
        UserPassword = password;
    }

};

class Admin
{   
    private: 
    vector <User> Users;

    public: 
    void RegisterUser ();
    bool LoginUser ();
    void ShowUserList ();
    void SearchUser ();
    void DeleteUser ();
};

void ShowMenu (void);

int main()
{
    int MenuOptions = 0;
    Admin NewAdmin;

    while (MenuOptions != 6)
    {
        cout << "Select an Option: \n";
        ShowMenu();
        cin >> MenuOptions;

        switch (MenuOptions)
        {
            case 1: 
                cout << "Register User \n";
                NewAdmin.RegisterUser();
                break;

            case 2:
                cout << "Login User \n";
                NewAdmin.LoginUser();
                break;

            case 3:
                cout << "Show User List \n";
                NewAdmin.ShowUserList();
                break;

            case 4: 
                cout << "Search User \n";
                NewAdmin.SearchUser();
                break;

            case 5:
                cout << "Delete User \n";
                NewAdmin.DeleteUser();
                break;  

            case 6: 
                cout << "Good Bye! \n";
                break;

            default:
                cout << "Invalid Option! \n";
                break;
        }
        
    }
    

    return 0;
}

void User::SetUserName (string Name)
{
    UserName = Name;
}

void User::SetPassword (string password)
{
    UserPassword = password;
}

string User::GetUserName ()
{
    return UserName;
}
string User::GetUserPassword ()
{
    return UserPassword;
}

void Admin::RegisterUser ()
{
    string UserName, UserPassword;

    cout << "Enter User Name: \n";
    cin >> UserName;

    cout << "Enter User Password: \n";
    cin >> UserPassword;

    User NewUser (UserName, UserPassword);

    Users.push_back(NewUser);

    cout << "User Added Succesfully. \n";
}

bool Admin::LoginUser ()
{
    string UserName, UserPassword;

    cout << "Enter User Name: \n";
    cin >> UserName;

    cout << "Enter User Password: \n";
    cin >> UserPassword;

    for (int i = 0; i < Users.size(); i++)
    {
        if ((UserName == Users[i].GetUserName()) && (UserPassword == Users[i].GetUserPassword()))
        {
            cout << "Login Succesfully. \n";
            return true;
        }
    }

    cout << "Invalid Username or Password! \n";
    return false;
}

void Admin::ShowUserList ()
{
    for (int i = 0; i < Users.size(); i++)
    {
        cout << "User Name: " << Users[i].GetUserName() << "\n" ;
        cout << "User Password: " << Users[i].GetUserPassword() << "\n" ;
    }
}

void Admin::SearchUser ()
{
    string UserName;

    cout << "Enter User Name: \n";
    cin >> UserName;

    for (int i = 0; i < Users.size(); i++)
    {
        if (UserName == Users[i].GetUserName())
        {
            cout << "User Found. \n";
        }
    }

    cout << "User not found! \n";
}

void Admin::DeleteUser ()
{
    string UserName;

    cout << "Enter User Name: \n";
    cin >> UserName;

    for (int i = 0; i < Users.size(); i++)
    {
        if (UserName == Users[i].GetUserName())
        {
            Users.erase(Users.begin() + i);
            cout << "User Deleted. \n";
        }
    }

    cout << "User not found! \n";
}

void ShowMenu (void)
{
    cout << "**************************************\n";
    cout << "********** Select an Option **********\n";
    cout << "1- Register User \n";
    cout << "2- Login User \n";
    cout << "3- Show User List \n";
    cout << "4- Search user \n";
    cout << "5- Delete user \n";
    cout << "6- Exit \n";
    cout << "**************************************\n";
}
