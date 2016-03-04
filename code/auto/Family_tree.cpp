/*
家谱类的具体实现 
*/

#include "Family_tree.h"

void Family_tree::Set_Root(string name_Root)
{
    Node *temp = new Node;
    temp->name = name_Root;
    temp->gender = "man";
    temp->father = "";
    temp->mother = "";
    temp->left = NULL;
    temp->right = NULL;

    Root = temp;
}

void Family_tree::Add_wife(string name_husband, string name_wife)
{
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_husband)
        {
            Node *temp = new Node;
            temp->name = name_wife;
            temp->gender = "woman";
            temp->father = store.front()->father;
            temp->mother = store.front()->mother;
            temp->left = NULL;
            temp->right = NULL;
            store.front()->right = temp;
            break;
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Add_son(string name_husband, string name_son)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_husband)
        {
            if (store.front()->right)
            {
                Node *Temp = store.front()->right;
                while (Temp->left)
                {
                    Temp = Temp->left;
                }
                Node *temp = new Node;
                temp->name = name_son;
                temp->gender = "man";
                temp->father = name_husband;
                temp->mother = store.front()->right->name;
                temp->left = NULL;
                temp->right = NULL;

                Temp->left = temp;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Add_daughter(string name_husband, string name_daughter)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_husband)
        {
            if (store.front()->right)
            {
                Node *Temp = store.front()->right;
                while (Temp->left)
                {
                    Temp = Temp->left;
                }
                Node *temp = new Node;
                temp->name = name_daughter;
                temp->gender = "woman";
                temp->father = name_husband;
                temp->mother = store.front()->right->name;
                temp->left = NULL;
                temp->right = NULL;

                Temp->left = temp;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Inquire(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                if (store.front()->father != "")
                {
                    cout << "father: "
                         << store.front()->father << endl
                         << "mother: "
                         << store.front()->mother << endl;

                    Cout << "father: "
                         << store.front()->father << endl
                         << "mother: "
                         << store.front()->mother << endl;
                }
                else
                {
                    cout << "Ancestor!" << endl;
                    Cout << "Ancestor!" << endl;
                }
                cout << "wife: "
                     << store.front()->right->name << endl;
                Cout << "wife: "
                     << store.front()->right->name << endl;
                Node *temp = store.front()->right->left;
                cout << "children: ";
                Cout << "children: ";
                if (temp)
                {
                    while (temp)
                    {
                        cout << temp->name << "("
                             << temp->gender << ") ";
                        Cout << temp->name << "("
                             << temp->gender << ") ";
                        temp = temp->left;
                    }
                }
                else
                {
                    cout << "暂无孩子\n";
                    Cout << "暂无孩子\n";
                }
                cout << endl;
                Cout << endl;
                break;
            }
            else
            {
                if (store.front()->father != "")
                {
                    cout << "father: "
                         << store.front()->father << endl
                         << "mother: "
                         << store.front()->mother << endl;

                    Cout << "father: "
                         << store.front()->father << endl
                         << "mother: "
                         << store.front()->mother << endl;
                }
                cout << "暂无老婆孩子\n";
                Cout << "暂无老婆孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Amount_children(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    int amount_children = 0;
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                Node *temp = store.front()->right->left;
                while (temp)
                {
                    amount_children++;
                    temp = temp->left;
                }
                cout << "The amount of children is: "
                     << amount_children << endl;
                Cout << "The amount of children is: "
                     << amount_children << endl;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Amount_son(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    int amount_son = 0;
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                Node *temp = store.front()->right->left;
                while (temp)
                {
                    if (temp->gender == "man")
                        amount_son++;
                    temp = temp->left;
                }
                cout << "The amount of son is: "
                     << amount_son << endl;
                Cout << "The amount of son is: "
                     << amount_son << endl;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Amount_daughter(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    int amount_daughter = 0;
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                Node *temp = store.front()->right->left;
                while (temp)
                {
                    if (temp->gender == "woman")
                        amount_daughter++;
                    temp = temp->left;
                }
                cout << "The amount of daughter is: "
                     << amount_daughter << endl;
                Cout << "The amount of daughter is: "
                     << amount_daughter << endl;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Print_son(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                Node *temp = store.front()->right->left;
                while (temp)
                {
                    if (temp->gender == "man")
                    {
                        cout << temp->name << " ";
                        Cout << temp->name << " ";
                    }
                    temp = temp->left;
                }
                cout << endl;
                Cout << endl;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Print_daughter(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                Node *temp = store.front()->right->left;
                while (temp)
                {
                    if (temp->gender == "woman")
                    {
                        cout << temp->name << " ";
                        Cout << temp->name << " ";
                    }
                    temp = temp->left;
                }
                cout << endl;
                Cout << endl;
                break;
            }
            else
            {
                cout << "请检查，此人无老婆不可以有孩子\n";
                Cout << "请检查，此人无老婆不可以有孩子\n";
            }
        }
        else
        {
            if (store.front()->left)
                store.push(store.front()->left);
            if (store.front()->right)
                store.push(store.front()->right);
        }
        store.pop();
    }
}

void Family_tree::Print_wife(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->right)
            {
                cout << "wife: "
                     << store.front()->right->name << endl;

                Cout << "wife: "
                     << store.front()->right->name << endl;
                break;
            }
            else {
                cout << "暂无妻子" << endl;
                Cout << "暂无妻子" << endl;
                break;
            }
        }
        if (store.front()->left)
            store.push(store.front()->left);
        if (store.front()->right)
            store.push(store.front()->right);
        store.pop();
    }
}

void Family_tree::Print_parents(string name_inquire)
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->name == name_inquire)
        {
            if (store.front()->father != "")
            {
                cout << "father: "
                     << store.front()->father << endl
                     << "mother: "
                     << store.front()->mother << endl;

                Cout << "father: "
                     << store.front()->father << endl
                     << "mother: "
                     << store.front()->mother << endl;

                break;
            }
            else
            {
                cout << "此人是祖先，无法查询到父母" << endl;
                Cout << "此人是祖先，无法查询到父母" << endl;
                break;
            }
        }
        if (store.front()->left)
            store.push(store.front()->left);
        if (store.front()->right)
            store.push(store.front()->right);
        store.pop();
    }
}

void Family_tree::Print_all()
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    queue<Node *> store;
    store.push(Root);
    while (!store.empty())
    {
        if (store.front()->gender == "man")
        {
            if (store.front()->right)
            {
                if (store.front()->father != "")
                {
                    cout << "father: "
                         << store.front()->father << endl
                         << "mother: "
                         << store.front()->mother << endl;

                    Cout << "father: "
                         << store.front()->father << endl
                         << "mother: "
                         << store.front()->mother << endl;
                }

                if (store.front()->father == "")
                {
                    cout << "Ancestor: ";
                    Cout << "Ancestor: ";
                }
                else
                {
                    cout << "husband: ";
                    Cout << "husband: ";
                }

                cout << store.front()->name << endl;
                cout << "wife: "
                     << store.front()->right->name << endl;

                Cout << store.front()->name << endl;
                Cout << "wife: "
                     << store.front()->right->name << endl;
                Node *temp = store.front()->right->left;
                cout << "children: ";
                Cout << "children: ";
                if (temp)
                {
                    while (temp)
                    {
                        cout << temp->name << "("
                             << temp->gender << ") ";

                        Cout << temp->name << "("
                             << temp->gender << ") ";
                        temp = temp->left;
                    }
                    cout << endl << endl;
                    Cout << endl << endl;
                }
                else
                {
                    cout << "暂无孩子\n\n";
                    Cout << "暂无孩子\n\n";
                }
            }
        }
        if (store.front()->left)
            store.push(store.front()->left);
        if (store.front()->right)
            store.push(store.front()->right);
        store.pop();
    }
}

void Family_tree::Delete()
{
    queue<Node *> store;
    if (Root)
        store.push(Root);
    while (!store.empty())
    {
        Node *temp = store.front();
        if (store.front()->left)
            store.push(store.front()->left);
        if (store.front()->right)
            store.push(store.front()->right);
        store.pop();
        delete temp;
    }
}
