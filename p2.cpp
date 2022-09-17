

#include<bits/stdc++.h>
#include<list>
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

};

class Usermails
{
	public:
	string usrname,passwd;
	Usermails(string usr,string pass)
	{
		usrname=usr;
		passwd=pass;
	}
	list <Mail> spamlist;
	list <Mail> draftlist;
	list <Mail> unreadlist;
	list <Mail> starredlist;
	list <Mail> sentmaillist;
	list <Mail> inboxlist;
};


void inbox(auto obj)
{
	showlist(obj.inboxlist);
}
void starred(auto obj)
{
	showlist(obj.starredlist);
}
void spam(auto obj)
{
	showlist(obj.spamlist);
}
void drafts(auto obj)
{
	showlist(obj.draftlist);
}
void unread(auto obj)
{
	showlist(obj.unreadlist);
}
void compose(string usrname,string passwd)
{
    Usermails objs(usrname,passwd);
	Mail obj;
	cout<<"usrname,dest,sub,body,starred\n";
	cin>>obj.usrname>>obj.dest>>obj.sub>>obj.body>>obj.starred;
	int test,temp;
	cout<<"1 for send\n";
		switch(test)
		{
			case 1: {
				cout<<"Send?\n";
				cin>>temp;
				if(temp>0) objs.sentmaillist.push_back(obj);
			}break;
			default: objs.draftlist.push_back(obj);
		}
}
void manage_usr_account(string usrname,string passwd)
{
	auto it = User.find(usrname);
		User.erase(passwd);
	
}
void display(string usrname){
    int test;
    cout<<"1 spam 2 drafts 3 unread 4 starred 5 inbox\n";
    cin>>test;
    switch(test){
        case 1:spam(usrname);
        break;
        case 2:drafts(usrname);
        break;
        case 3:unread(usrname);
        break;
        case 4:starred(usrname);
        break;
        case 5:inbox(usrname);
        default : return;
    }
}

void register (string usrname,string passwd)

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
      cout<<"1 for Mails, 2 for manage_usr_account";
        switch(test1)
        {
          case 1: Mails(usrname,passwd);break;
          case 2: manage_usr_acc(usrname);break;
          default: return;
        
        }
    }
    break;
    default: exit;
  }
}
bool login(string username ,string password)
{

  if(User[username]==password){
    return true;
  }  
  
  return false;
}

void Mails(string usrname,string passwd)
{
  int test;
  cout<<"1 for diplay, 2 delete, 3 compose, 4 inbox\n";
  switch(test)
  {
    case 1: display(usrname);break;
    case 3: compose(usrname,passwd);break;
    case 4: inbox();break;
    default: return;
    
  }
  
}


int main()
{
	User["aditya"]="1234";
	compose("aditya","1234");
	return 0;
}
