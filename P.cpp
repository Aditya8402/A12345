#include<bits/stdc++.h>

using namespace std;

unordered_map<string,string> User;

class Mail
{

	public:
	string usrname;
	string dest;
	string sub;
	string body;
	bool starred;

}

class Usermails
{
	public:
	string usrname,passwd;
	Usermails(string usr,string pass)
	{
		usrname=usr;
		passwd=pass;
	}
	list <Mail> spam;
	list <Mail> drafts;
	list <Mail> unread;
	list <Mail> starred;
	list <Mail> sentmail;
	list <Mail> inbox;
}

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
void login(string username , password){
 if(user[username]!=user.end())
  {if(user[username]== password){
    return true;
  }  
  }
  return false;
}
void display(){
    switch(test){
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

void compose(string usrname)
{

	Mail obj;
	cout<<"usrname,dest,sub,body,starred\n";
	cin>>obj.usrname>>obj.dest>>obj.sub>>obj.body>>obj.starred;
	int test,temp;
	cout<<"1 for send\n"
		switch(test)
		{
			case 1: {
				cout<<"Send?\n";
				cin>>temp;
				if(temp>0) sendlist.append(obj);
			}
			default: draftlist.append(obj);
		}
}

void manage_usr-acc(string usrname,string passwd)
{
	auto it = find(User[usrname]);
	if(it)
	{

		User.erase(passwd);
	}
}
