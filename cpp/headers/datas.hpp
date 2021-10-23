#include<bits/stdc++.h>
#include"const.hpp"
using namespace std;
#define GITHUB

struct chapter{
    string name;
    vector<string> data;
};
struct book{
    string name,author;
    vector<chapter> chapters;
};
class reader{
    private:
        string name;
        vector<book> bookshelf;
    public:
        void NewReader(){
            reader r;
            cout<<"Input Name:";
            cin>>r.name;
            this=r;
        }
        void ChangeUserName(){
            cout<<"Old Name:"<<this.name;
            string newname;
            cout<<"Input New Name:";
            cin>>r;
            this.name=r;
            system("cls");
            cout<<"New Name:"<<this.name;
            cout<<"Successfully Changed name!";
            return;
        }
}
