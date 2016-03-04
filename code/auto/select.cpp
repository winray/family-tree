/*
对操作进行选择 
*/

#include "introduction.cpp"

void select()
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    ifstream cin;
    cin.open("input");
    string Select;
    welcome();
    introduce();
    while (cin >> Select)
    {
        Cout << Select << endl;
        system("cls");
        if (Select == "i")
        {
            Funtion_introduce();
            cout << "请输入1-13进行选择,输入\"q\"退出" << endl;
            Cout << "请输入1-13进行选择,输入\"q\"退出" << endl;
            string select;
            while (cin >> select)
            {
                Cout << select << endl;
                if (select == "1")
                {
                    string name_Root;
                    cout << "输入祖先的名字" << endl;
                    Cout << "输入祖先的名字" << endl;
                    cin >> name_Root;

                    set_root(name_Root);
                }
                else if (select == "2")
                {
                    string name_husband;
                    string name_wife;
                    cout << "输入老公和老婆的名字" << endl;
                    Cout << "输入老公和老婆的名字" << endl;
                    cin >> name_husband >> name_wife;

                    add_wife(name_husband, name_wife);
                }
                else if (select == "3")
                {
                    string name_husband;
                    string name_son;
                    cout << "输入父亲和儿子的名字" << endl;
                    Cout << "输入父亲和儿子的名字" << endl;
                    cin >> name_husband >> name_son;

                    add_son(name_husband, name_son);
                }
                else if (select == "4")
                {
                    string name_husband;
                    string name_daughter;
                    cout << "输入父亲和女儿的名字" << endl;
                    Cout << "输入父亲和女儿的名字" << endl;
                    cin >> name_husband >> name_daughter;

                    add_daughter(name_husband, name_daughter);
                }
                else if (select == "5")
                {
                    string name_inquire;
                    cout << "输入你要查询人的名字" << endl;
                    cin >> name_inquire;

                    inquire(name_inquire);
                }
                else if (select == "6")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的孩子的个数" << endl;
                    cin >> name_inquire;

                    amount_children(name_inquire);
                }
                else if (select == "7")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的儿子的个数" << endl;
                    cin >> name_inquire;

                    amount_son(name_inquire);
                }
                else if (select == "8")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的女儿的个数" << endl;
                    cin >> name_inquire;

                    amount_daughter(name_inquire);
                }
                else if (select == "9")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的全部儿子" << endl;
                    cin >> name_inquire;

                    print_son(name_inquire);
                }
                else if (select == "10")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的全部女儿" << endl;
                    cin >> name_inquire;

                    print_daughter(name_inquire);
                }
                else if (select == "11")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的妻子" << endl;
                    cin >> name_inquire;

                    print_wife(name_inquire);
                }
                else if (select == "12")
                {
                    string name_inquire;
                    cout << "输入你想要查询人的父母" << endl;
                    cin >> name_inquire;

                    print_parents(name_inquire);
                }
                else if (select == "13")
                {
                    print_all();
                }

                else if (select == "q")
                {
                    Delete();
                    break;
                }
                else
                {
                    cout << "输入有误，请重新输入" << endl;
                    Cout << "输入有误，请重新输入" << endl;
                }
                cout << endl;
                cout << "请输入1-13进行选择,输入\"q\"退出" << endl;
                Cout << endl;
                Cout << "请输入1-13进行选择,输入\"q\"退出" << endl;
            }
        }
        else if (Select == "q")
        {
            end();
            break;
        }
        else
        {
            cout << "亲，你输入有误，请重新输入" << endl;
            Cout << "亲，你输入有误，请重新输入" << endl;
        }
        cout << endl << endl;
        cout << "***************************************" << endl
             << "   下面输入\"i\"继续使用，\"q\"退出    " << endl
             << "***************************************" << endl;

        Cout << endl << endl;
        Cout << "***************************************" << endl
             << "   下面输入\"i\"继续使用，\"q\"退出    " << endl
             << "***************************************" << endl;
    }
}
