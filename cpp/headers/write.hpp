#include"datas.hpp"
#include"const.hpp"
#include"main.hpp"
#include<fstream>
using namespace std;
book k;
chapter c;
void _input(){
    iosspeedup;
    cout<<"Input Novel Name:";
    string s;
    cin>>s;
    k.name=s;
    cout<<endl;
    cout<<"Input Author:";
    cin>>s;
    k.author=x;
    cout<<"Now Write The Novel With Format name \n content.\n Use Ctrl(Command)+Z to End Input.";
    while(cin>>c.name){
        while(cin>>s)
            c.data.push_back(s);
        k.chapters.push_back(c);
    }
    cout<<"---finished writing---"<<"\n";
    return;
}
void _write_in_to_file(){
    k.name+="novel.txt";
    ofstream fout(k.name.c_str());
    fout<<"\t\t"<<name<<"\n"<<author<<"\n";
    for(int i=0;i<k.chapters.size();i++){
        fout<<"\t\t"<<k.chapters[i].name<<"\n";
        for(int j=0;j<k.chapters[i].data.size();j++){
            fout<<k.chapters[i].data[j]<<"\n";
        }
    }
    fout.close();
    k.name=k.name.substr(0,k,size()-10);
}
void _output(){
    cout<<"Done! Read It!"<<endl;
    cout<<"\t\t"<<name<<"\n"<<author<<"\n";\
    for(int i=0;i<k.chapters.size();i++){
        cout<<"\t\t"<<k.chapters[i].name<<"\n";
        for(int j=0;j<k.chapters[i].data.size();j++){
            cout<<k.chapters[i].data[j]<<"\n";
        }
    }
}
void write(){
    _input();
    _write_in_to_file();
    _output();
}