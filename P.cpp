#include<bits/stdc++.h>

using namespace std;

unordered_map<string,string> User;

void register(string usrname,string passwd)
{
User[usrname]=passwd;
  int test;
  cout<<"1 login, 2 exit\n";
  cin>>test;
  switch(test)
  {
    case 1: if(login(usrname,passwd))
    {
      int test1;
      cout<<"1 for Mails, 2 for manage_usr_account
        switch(test1)
        {

          case 1: Mails(usrname);
          case 2: manage_usr_acc(usrname);
          default: return;
        
        }
      default: exit;
      
    }
  }
}
void Mails(usrname)
{
  int test;
  cout<<"1 for diplay, 2 delete, 3 compose, 4 inbox\n";
  swich(test)
  {

    case 1: display();
    case 2: deletemail();
    case 3: compose(usrname);
    case 4: inbox();
    default: return;
    
  }
  
}

