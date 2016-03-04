/*
对家谱类进行调用 
*/ 

#include "Family_tree.cpp"

Family_tree Family_Tree;

void set_root()
{
    string name_Root;
    cout << "输入祖先的名字" << endl;
    cin >> name_Root;
    Family_Tree.Set_Root(name_Root);
}

void add_wife()
{
    string name_husband;
    string name_wife;
    cout << "输入老公和老婆的名字" << endl;
    cin >> name_husband >> name_wife;
    Family_Tree.Add_wife(name_husband, name_wife);
}

void add_son()
{
    string name_husband;
    string name_son;
    cout << "输入父亲和儿子的名字" << endl;
    cin >> name_husband >> name_son;
    Family_Tree.Add_son(name_husband, name_son);
}

void add_daughter()
{
    string name_husband;
    string name_daughter;
    cout << "输入父亲和女儿的名字" << endl;
    cin >> name_husband >> name_daughter;
    Family_Tree.Add_daughter(name_husband, name_daughter);
}

void inquire()
{
    string name_inquire;
    cout << "输入你要查询人的名字" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Inquire(name_inquire);
    cout << "***********************************************************" << endl;
}

void amount_children()
{
    string name_inquire;
    cout << "输入你想要查询人的孩子的个数" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Amount_children(name_inquire);
    cout << "***********************************************************" << endl;
}

void amount_son()
{
    string name_inquire;
    cout << "输入你想要查询人的儿子的个数" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Amount_son(name_inquire);
    cout << "***********************************************************" << endl;
}

void amount_daughter()
{
    string name_inquire;
    cout << "输入你想要查询人的女儿的个数" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Amount_daughter(name_inquire);
    cout << "***********************************************************" << endl;
}

void print_son()
{
    string name_inquire;
    cout << "输入你想要查询人的全部儿子" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Print_son(name_inquire);
    cout << "***********************************************************" << endl;
}

void print_daughter()
{
    string name_inquire;
    cout << "输入你想要查询人的全部女儿" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Print_daughter(name_inquire);
    cout << "***********************************************************" << endl;
}

void print_parents()
{
    string name_inquire;
    cout << "输入你想要查询人的父母" << endl;
    cin >> name_inquire;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Print_parents(name_inquire);
    cout << "***********************************************************" << endl;
}

void print_all()
{
    cout << "输出整个家谱的关系" << endl;
    cout << endl
         << "********************** Result *****************************" << endl;
    Family_Tree.Print_all();
    cout << "***********************************************************" << endl;
}

void Delete()
{
    Family_Tree.Delete();
}
