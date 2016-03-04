/*
对家谱类进行调用 
*/ 

#include "Family_tree.cpp"

Family_tree Family_Tree;

void set_root(string name_Root)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << name_Root << endl;
    Family_Tree.Set_Root(name_Root);
}

void add_wife(string name_husband, string name_wife)
{    
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << name_husband << " " << name_wife << endl;
    Family_Tree.Add_wife(name_husband, name_wife);
}

void add_son(string name_husband, string name_son)
{    
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << name_husband << " " << name_son << endl;
    Family_Tree.Add_son(name_husband, name_son);
}

void add_daughter(string name_husband, string name_daughter)
{    
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << name_husband << " " << name_daughter << endl;
    Family_Tree.Add_daughter(name_husband, name_daughter);
}

void inquire(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你要查询人的名字" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;
    
    Family_Tree.Inquire(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void amount_children(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
    
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的孩子的个数" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;
    
    Family_Tree.Amount_children(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void amount_son(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的儿子的个数" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;
    
    Family_Tree.Amount_son(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void amount_daughter(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的女儿的个数" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;
    
    Family_Tree.Amount_daughter(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void print_son(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的全部儿子" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;
    
    Family_Tree.Print_son(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void print_daughter(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的全部女儿" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;     
    
    Family_Tree.Print_daughter(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void print_wife(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的妻子" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;  
    
    Family_Tree.Print_wife(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void print_parents(string name_inquire)
{
    cout << endl
         << "********************** Result *****************************" << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输入你想要查询人的父母" << endl;
    Cout << name_inquire << endl;
    Cout << endl
         << "********************** Result *****************************" << endl;  
    
    Family_Tree.Print_parents(name_inquire);
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void print_all()
{
    cout << "输出整个家谱的关系" << endl;
    cout << endl
         << "********************** Result *****************************" << endl << endl;
         
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    Cout << "输出整个家谱的关系" << endl;
    Cout << endl
         << "********************** Result *****************************" << endl << endl;  
    
    Family_Tree.Print_all();
    cout << "***********************************************************" << endl;
    
    Cout << "***********************************************************" << endl;
}

void Delete()
{
    Family_Tree.Delete();
}
