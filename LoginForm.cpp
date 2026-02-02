#include<iostream>
#include<vector>
#include<string>

using namespace std;

class User{
    private:
    string username,password;

    public:
    User(string name,string pass){
        username=name;
        password=pass;
    }

    string getusername(){
        return username;
    }

    string getPassword(){
        return password;
    }
};

class UserManager{
    private:
    vector<User> users;

    public:
    void RegisterUser(){
        string username,password;
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;
        User newUser(username,password);
        users.push_back(newUser);
        cout<<"\t\t Registration Successful!"<<endl;
    }

    bool LoginUser(string username,string password){
        for(int i=0;i<users.size();i++){
            if(users[i].getusername()==username && users[i].getPassword()==password){
                return true;
            }
        }
        cout<<"Invalid username or password."<<endl;
        return false;
    }

    void ShowUserList(){
        cout<<"\t\t Registered Users: "<<endl;
        for(int i=0;i<users.size();i++){
            cout<<"\t\t"<<i+1<<". "<<users[i].getusername()<<endl;
        }
    }

    void SearchUser(string username){
        for(int i=0;i<users.size();i++){
            if(users[i].getusername()==username){
                cout<<"\t\t User found: "<<users[i].getusername()<<endl;
                return;
            }
        }
        cout<<"\t\t User not found."<<endl;
    }

    void deleteuser(string username){
        for(int i=0;i<users.size();i++){
            if(users[i].getusername()==username){
                users.erase(users.begin()+i);
                cout<<"\t\t User deleted successfully."<<endl;
                return;
            }
        }
        cout<<"\t\t User not found."<<endl;
    }
};

int main(){
    UserManager usermanage;
    int op;

    do{
        system("cls");

        cout<<"\n\n\t\t============================"<<endl;
        cout<<"\n\n\t\t1.Register User"<<endl;
        cout<<"\t\t2.Login"<<endl;
        cout<<"\t\t3.Show User List"<<endl;
        cout<<"\t\t4.Search user"<<endl;
        cout<<"\t\t5.Delete User"<<endl;
        cout<<"\t\t6.Exit"<<endl;
        cout<<"\t\tEnter Your Choice: ";
        cin>>op;

        switch(op){

        case 1:
            usermanage.RegisterUser();
            break;

        case 2:{
            string username,password;
            cout<<"\t\tEnter username: ";
            cin>>username;
            cout<<"Enter password: ";
            cin>>password;

            if(usermanage.LoginUser(username,password)){
                cout<<"Login Successful!"<<endl;
            }
            break;
        }

        case 3:
            usermanage.ShowUserList();
            break;

        case 4:{
            string searchUsername;
            cout<<"\t\tEnter username to search: ";
            cin>>searchUsername;
            usermanage.SearchUser(searchUsername);
            break;
        }

        case 5:{
            string deleteUsername;
            cout<<"\t\tEnter username to delete: ";
            cin>>deleteUsername;
            usermanage.deleteuser(deleteUsername);
            break;
        }

        case 6:
            cout<<"\t\tExiting the program. Goodbye!"<<endl;
            break;

        default:
            cout<<"\t\tInvalid choice. Please try again."<<endl;
        }

        system("pause");

    }while(op!=6);

    return 0;
}
