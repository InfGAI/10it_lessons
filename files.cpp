#include <fstream>
#include<iostream>
#include <string>

using namespace std;

int main() {
    ifstream file_in; // Создаем файловую переменную для ввода
    ofstream file_out; // Создаем файловую переменную для вывода
    file_in.open("test.txt", ios::in); // Загружаем файл в оперативную память и связываем с файловой переменной
    file_out.open("file.txt", ios::out);
    string x;
    getline(file_in, x); // Читаем строку из файла
    cout << x;
    file_out << x; // Пишем в файл
    file_in.close(); // Закрываем файл ОБЯЗАТЕЛЬНО!
    file_out.close();
    return 0;
}