#include<bits/stdc++.h>
using namespace std;
#define GITHUB
struct chapter{
    string name;
    vector<string> chap;
};
struct book{
    string name,author;
    vector<chapter> chapters;
};
class reader{
    string name;
    vector<book> bookshelf;
};
