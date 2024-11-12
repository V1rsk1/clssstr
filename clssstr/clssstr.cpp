#include <iostream>
using namespace std;
void StR(string str) {
    cout << "F:\\HTML_P34\\menuuu_p34_3\\lesson5_homework\\ex1.png" << endl;
    if (str.rfind("\\") == str.length()) {
        cout << "";
    }
    else {
        cout << "\nPath without file name: ";
        for (short i = 0; i < str.rfind("\\"); i++) {
            cout << str[i];
        }
    }
    cout << endl << "\nLast name folder in path: ";
    for (short i = str.rfind("\\", str.rfind("\\") - 1) + 1; i < str.rfind("\\"); i++) {
        cout << str[i];
    }
    cout << endl << "\nFile name with extension: " << str.substr(str.rfind("\\") + 1) << endl;
    cout << "\nExtension file name: " << str.substr(str.rfind(".")) << endl;
    cout << "\nFile name without extension: ";
    for (short i = str.rfind("\\") + 1; i < str.rfind("."); i++) {
        cout << str[i];
    }
}
int main()
{
    StR("F:\\HTML_P34\\menuuu_p34_3\\lesson5_homework\\ex1.png");
}
