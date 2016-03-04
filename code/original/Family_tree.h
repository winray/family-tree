/*
家谱类
*/ 

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib> 
using namespace std;

struct Node
{
    string name;
    string gender;
    string father;
    string mother;
    Node *left;
    Node *right;
};

class Family_tree
{
public:
    Node *Root;
    void Set_Root(string name_Root);
    void Add_wife(string name_husband, string name_wife);
    void Add_son(string name_husband, string name_son);
    void Add_daughter(string name_husband, string name_daughter);
    void Inquire(string name_inquire);
    void Amount_children(string name_inquire);
    void Amount_son(string name_inquire);
    void Amount_daughter(string name_inquire);
    void Print_son(string name_inquire);
    void Print_daughter(string name_inquire);
    void Print_parents(string name_inquire);
    void Print_all();
    void Delete();
};

