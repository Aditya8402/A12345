#include<bits/stdc++.h>
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
