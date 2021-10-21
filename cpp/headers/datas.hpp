#include<bits/stdc++.h>
#include"const.hpp"
using namespace std;
#define GITHUB

struct chapter{
    string name;
    vector<string> data;
    void output(){
        cout<<"\t\t"<<name<<endl;
        for(int i=0;i<vector.size();i++){
            cout<<data[i]<<"\n";
        }
        char ch;
        cout<<"Input Enter To Return:";
        cin>>ch;
        system("cls");
    }
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
        void readNewBook(book k){
            cout<<
        }
}