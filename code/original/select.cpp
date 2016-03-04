/*
对操作进行选择 
*/

#include "introduction.cpp"

void select()
{
    string Select;
    welcome();
    introduce();
    while (cin >> Select)
    {
        system("cls");
        if (Select == "i")
        {
            Funtion_introduce();
            cout << "请输入1-12进行选择,输入\"q\"退出" << endl;
            string select;
            while (cin >> select)
            {
                if (select == "1")
                    set_root();
                else if (select == "2")
                    add_wife();
                else if (select == "3")
                    add_son();
                else if (select == "4")
                    add_daughter();
                else if (select == "5")
                    inquire();
                else if (select == "6")
                    amount_children();
                else if (select == "7")
                    amount_son();
                else if (select == "8")
                    amount_daughter();
                else if (select == "9")
                    print_son();
                else if (select == "10")
                    print_daughter();
                else if (select == "11")
                    print_parents();
                else if (select == "12")
                    print_all();
                else if (select == "q")
                {
                    Delete();
                    break;
                }
                else
                    cout << "输入有误，请重新输入" << endl;

                cout << endl;
                cout << "请输入1-12进行选择,输入\"q\"退出" << endl;
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
        }
        cout << endl << endl;
        cout << "***************************************" << endl
             << "   下面输入\"i\"继续使用，\"q\"退出    " << endl
             << "***************************************" << endl;
    }
}
