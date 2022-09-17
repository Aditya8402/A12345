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
	      cin>>test1
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
	cin>>test;
  swich(test)
  {

    case 1: display();
	  break;
    case 2: deletemail();
	  break;
    case 3: compose(usrname);
	  break;
    case 4: inbox();
	  break;
    default: return;
    
  }
  
}
void login(string username , password){
 if(user[username]!=user.end())
  {if(user[username]== password){
    return true;
  }  
  }
  return false;
}
void display(){
	int test2;
	cin>>test2;
    switch(test2){
        case 1:spam(username);
        break;
        case 2:drafts(username);
        break;
        case 3:unread(username);
        break;
        case 4:starred(username);
        break;
        case 5:inbox(username);
        default : return;
    }
}

void inbox(auto obj)
{
	showList(obj.inboxlist);
}
void starred(auto obj)
{
	showList(obj.starredlist);
}
void spam(auto obj)
{
	showList(obj.spamlist);
}
void drafts(auto obj)
{
	showList(obj.draftlist);
}
void unread(auto obj)
{
	showList(obj.unreadlist);
}
