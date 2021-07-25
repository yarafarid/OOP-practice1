#include <iostream>

using namespace std;
class Items {
public :
    string Name ;
    double price ;
};
//vector <Items> cat[100];
class User {
public:
string Name , SSN ,CCN ;
public:
void setName(string name) {Name = name ;}
    string getName() {return Name ;}

    void setSSN(string ssn) {SSN = ssn ;}
    string getSSN() {return SSN ;}

    void setCCN(string ccn) {CCN = ccn ;}
    string getCCN() {return CCN ;}

    User (string name  , string ssn , string ccn){  //Constructor
         Name = name ;
         SSN  = ssn ;
         CCN  = ccn ;
    }
    void AddFeedback() {
     cout << "If items are very good please press 1\nIf items are good press 2\nIf bad press 3"<< endl;
     int q ;cin >> q ;
    }

};
/*class Admin : public User{
   public:
     string Password;

    User (string name  ,string pass) //Constructor(public, no return value ,same class name)
       : User (name)
        {
         Password = pass ;
        }
};
*/
int main()
{
 char choice ;
 cout << "if you want to sign in as a customer please press C else press A" << endl;
 cin >> choice ;
 if (choice == 'C'){
 string UserName , Ssn , Ccn;
 cout << "User name : " ; cin >> UserName ;
 cout << "\nSSN" ; cin >> Ssn ;
 cout <<"\nCCN" ; cin >> Ccn ;
// User u1 = (UserName , Ssn , Ccn) ;
 }

 }
