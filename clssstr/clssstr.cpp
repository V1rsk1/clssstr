#include <iostream>
using namespace std;

void analyzePath(const string& path) {
    cout << "Шлях до файлу: " << path << endl;
    
    size_t lslash = path.rfind("\\");
    if (lslash == string::npos) {
        cout << "\nШлях некоректний!" << endl;
        return;
    }

    cout << "\nШлях без імені файлу: ";
    for (size_t i = 0; i < lslash; i++) {
        cout << path[i];
    }

    size_t seclslash = path.rfind("\\", lslash - 1);
    cout << endl << "\nОстання папка в шляху: ";
    for (size_t i = seclslash + 1; i < lslash; i++) {
        cout << path[i];
    }

    cout << endl << "\nІм'я файлу з розширенням: " << path.substr(lslash + 1) << endl;
    
    size_t dot = path.rfind(".");
    cout << "\nРозширення файлу: " << path.substr(dot) << endl;

    cout << "\nІм'я файлу без розширення: ";
    for (size_t i = lslash + 1; i < dot; i++) {
        cout << path[i];
    }
    cout << endl;
}

int main() {
    analyzePath("F:\\HTML_P34\\menuuu_p34_3\\lesson5_homework\\ex1.png");
    return 0;
}
