/*
在操作过程中进行提示 
*/ 

#include "operation.cpp"

void introduce()
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    cout << "          ****************************************" << endl
         << "          *            Introduction              *" << endl
         << "          *          这是个家谱管理系统          *" << endl
         << "          *            欢迎大家使用              *" << endl
         << "          *           输入i:进入系统             *" << endl
         << "          *           输入q:退出系统             *" << endl
         << "          ****************************************" << endl << endl;
    Cout << "          ****************************************" << endl
         << "          *            Introduction              *" << endl
         << "          *          这是个家谱管理系统          *" << endl
         << "          *            欢迎大家使用              *" << endl
         << "          *           输入i:进入系统             *" << endl
         << "          *           输入q:退出系统             *" << endl
         << "          ****************************************" << endl << endl;
}

void welcome()
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    cout << "          *****************************************" << endl
         << "          *                                       *" << endl
         << "          *           欢迎使用此系统              *" << endl
         << "          *                                       *" << endl
         << "          *****************************************" << endl << endl;
    Cout << "          *****************************************" << endl
         << "          *                                       *" << endl
         << "          *           欢迎使用此系统              *" << endl
         << "          *                                       *" << endl
         << "          *****************************************" << endl << endl;
}

void Funtion_introduce()
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    cout << "          *******************************" << endl
         << "          *     请输入1-13进行选择      *" << endl
         << "          *      1:设置祖先名字         *" << endl
         << "          *      2:添加妻子             *" << endl
         << "          *      3:添加儿子             *" << endl
         << "          *      4:添加女儿             *" << endl
         << "          *      5:查询                 *" << endl
         << "          *      6:孩子数量             *" << endl
         << "          *      7:儿儿数量             *" << endl
         << "          *      8:女儿数量             *" << endl
         << "          *      9:打印全部儿子         *" << endl
         << "          *      10:打印全部女儿        *" << endl
         << "          *      11:打印其妻子          *" << endl
         << "          *      12:打印其父母亲        *" << endl
         << "          *      13:打印整个家谱        *" << endl
         << "          *******************************" << endl;
    Cout << "          *******************************" << endl
         << "          *     请输入1-13进行选择      *" << endl
         << "          *      1:设置祖先名字         *" << endl
         << "          *      2:添加妻子             *" << endl
         << "          *      3:添加儿子             *" << endl
         << "          *      4:添加女儿             *" << endl
         << "          *      5:查询                 *" << endl
         << "          *      6:孩子数量             *" << endl
         << "          *      7:儿儿数量             *" << endl
         << "          *      8:女儿数量             *" << endl
         << "          *      9:打印全部儿子         *" << endl
         << "          *      10:打印全部女儿        *" << endl
         << "          *      11:打印其妻子          *" << endl
         << "          *      12:打印其父母亲        *" << endl
         << "          *      13:打印整个家谱        *" << endl
         << "          *******************************" << endl;
}

void end()
{
    ofstream Cout;
    Cout.open("out.txt", ostream::app);
    system("cls");
    cout << endl << endl << endl << endl << endl;
    cout << "                   *******************************" << endl
         << "                   *                             *" << endl
         << "                   *    欢迎下次再次使用此系统   *" << endl
         << "                   *                             *" << endl
         << "                   *******************************" << endl;
    cout << endl << endl << endl << endl;
    
    Cout << endl << endl << endl << endl << endl;
    Cout << "                   *******************************" << endl
         << "                   *                             *" << endl
         << "                   *    欢迎下次再次使用此系统   *" << endl
         << "                   *                             *" << endl
         << "                   *******************************" << endl;
    Cout << endl << endl << endl << endl;
}
