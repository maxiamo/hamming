#include <iostream>
#include <vector>

using namespace std;

void All() {
    vector<int> arr;
    arr.resize(15);
    arr[0] = 0;
    arr[1] = 0;
    arr[3] = 0;
    arr[7] = 0;
    cout << endl;
    cout << "            --------Вставьте 11 чисел через пробел--------" << endl;
    cout << endl;
    cin >> arr[2] >> arr[4] >> arr[5] >> arr[6] >> arr[8] >> arr[9] >> arr[10] >> arr[11] >> arr[12] >> arr[13] >> arr[14];
    cout << endl;
    if ((arr[0] + arr[2] + arr[4] + arr[6] + arr[8] + arr[10] + arr[12] + arr[14]) % 2 != 0) {
        arr[0] = 1;

    }
    if ((arr[1] + arr[2] + arr[5] + arr[6] + arr[9] + arr[10] + arr[13] + arr[14]) % 2 != 0) {
        arr[1] = 1;

    }
    if ((arr[3] + arr[4] + arr[5] + arr[6] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        arr[3] = 1;

    }
    if ((arr[7] + arr[8] + arr[9] + arr[10] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        arr[7] = 1;

    }
    int score = 0;
    if ((arr[0] + arr[2] + arr[4] + arr[6] + arr[8] + arr[10] + arr[12] + arr[14]) % 2 != 0) {
        score += 1;
        cout << "ERROR 1" << endl;
    }
    if ((arr[1] + arr[2] + arr[5] + arr[6] + arr[9] + arr[10] + arr[13] + arr[14]) % 2 != 0) {
        score += 2;
        cout << "ERROR 2" << endl;
    }
    if ((arr[3] + arr[4] + arr[5] + arr[6] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        score += 4;
        cout << "ERROR 4" << endl;
    }
    if ((arr[7] + arr[8] + arr[9] + arr[10] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        score += 8;
        cout << "ERROR 8" << endl;
    }
    if (score != 0) {
        if (arr[score - 1] == 0) {
            arr[score - 1] = 1;
        }
        else if (arr[score - 1] == 1) {
            arr[score - 1] = 0;
        }

    }
    if (score == 0) {
        cout << "NO ERRORS" << endl;

    }
    if (score != 0) {
        cout << "ERROR IN " << score << " NUM" << endl;
    }
    cout << "Целое число = ";
    for (int i = 0; i < 15; i++) {

        cout << arr[i];
    }
    cout << endl << endl;
    arr[0] = 5;
    arr[1] = 5;
    arr[3] = 5;
    arr[7] = 5;
    cout << "Итоговый результат = ";
    for (int i = 0; i < 15; i++) {
        cout << arr[i];
    }
    cout << endl;
    cout << "Через пробел = ";
    for (int i = 0; i < 15; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "                   ------R = Заново, E = Выйти------" << endl;
}

void Shifr() {
    vector<int> arr;
    arr.resize(15);
    arr[0] = 0;
    arr[1] = 0;
    arr[3] = 0;
    arr[7] = 0;
    cout << endl;
    cout << "            --------Вставьте 11 чисел через пробел--------" << endl;
    cout << endl;
    cin >> arr[2] >> arr[4] >> arr[5] >> arr[6] >> arr[8] >> arr[9] >> arr[10] >> arr[11] >> arr[12] >> arr[13] >> arr[14];
    cout << endl;
    if ((arr[0] + arr[2] + arr[4] + arr[6] + arr[8] + arr[10] + arr[12] + arr[14]) % 2 != 0) {
        arr[0] = 1;

    }
    if ((arr[1] + arr[2] + arr[5] + arr[6] + arr[9] + arr[10] + arr[13] + arr[14]) % 2 != 0) {
        arr[1] = 1;

    }
    if ((arr[3] + arr[4] + arr[5] + arr[6] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        arr[3] = 1;

    }
    if ((arr[7] + arr[8] + arr[9] + arr[10] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        arr[7] = 1;

    }
    cout << "FIRST NUM = " << arr[0] << endl;
    cout << "SECOND NUM = " << arr[1] << endl;
    cout << "FOURTH NUM = " << arr[3] << endl;
    cout << "EIGHTH NUM = " << arr[7] << endl;
    cout << endl;
    cout << "RESULT = ";

    for (int i = 0; i < 15; i++) {
        cout << arr[i];
    }
    cout << endl;
    cout << "Через пробел = ";
    for (int i = 0; i < 15; i++) {
        cout << arr[i]<<" ";
    }
    cout << endl<<endl;
    cout << "                   ------R = Заново, E = Выйти------" << endl;
}
void Hemming() {
    cout << endl;
    cout << "            --------Вставьте 15 чисел через пробел--------" << endl;
    cout << endl;
    vector<int> arr;

    arr.resize(15);
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    int score = 0;
    if ((arr[0] + arr[2] + arr[4] + arr[6] + arr[8] + arr[10] + arr[12] + arr[14]) % 2 != 0) {
        score += 1;
        cout << "ERROR 1" << endl;
    }
    if ((arr[1] + arr[2] + arr[5] + arr[6] + arr[9] + arr[10] + arr[13] + arr[14]) % 2 != 0) {
        score += 2;
        cout << "ERROR 2" << endl;
    }
    if ((arr[3] + arr[4] + arr[5] + arr[6] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        score += 4;
        cout << "ERROR 4" << endl;
    }
    if ((arr[7] + arr[8] + arr[9] + arr[10] + arr[11] + arr[12] + arr[13] + arr[14]) % 2 != 0) {
        score += 8;
        cout << "ERROR 8" << endl;
    }
    if (score != 0) {
        if (arr[score - 1] == 0) {
            arr[score - 1] = 1;
        }
        else if (arr[score - 1] == 1) {
            arr[score - 1] = 0;
        }

    }
    if (score == 0) {
        cout << "NO ERRORS" << endl;

    }
    if (score != 0) {
        cout << "ERROR IN " << score << " NUM" << endl;
    }
    cout << "Целое число = ";
    for (int i = 0; i < 15; i++) {

        cout << arr[i];
    }
    cout << endl << endl;
    arr[0] = 5;
    arr[1] = 5;
    arr[3] = 5;
    arr[7] = 5;
    cout << "Итоговый результат = ";
    for (int i = 0; i < 15; i++) {
        cout << arr[i];
    }
    cout << endl;
    cout << "Через пробел = ";
    for (int i = 0; i < 15; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "                   ------R = Заново, E = Выйти------" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "---------------------------------------------------------------------" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "                                " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "                                " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "                                " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "         Дешифровка             " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "          Хемминга              " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "                                " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "                                " << "]]]]]]]]]]]]]]]]]]]" << endl;
    cout << "[[[[[[[[[[[[[[[[[[" << "                                " << "]]]]]]]]]]]]]]]]]]]" << endl;

    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;

    cout << endl;
   // Hemming();
    char command,action;
    cout <<  "---Введите 1 для Расшифровки | Введите 2 для Зашифровки | 3 для всего сразу ---" << endl;
    cout << endl;
    cin >> action;
    if (action == '1')
    {
        Hemming();
    }
    else if (action == '2')
    {
        Shifr();
    }
    else if (action == '3')
    {
        All();
    }
    while (1 == 1) {
        cin >> command;
        if (command == 'r' || command == 'R') {
            cout << "        Введите 1 для Расшифровки | 2 для Зашифровки | 3 для всего сразу " << endl;
            cin >> action;
            if(action=='1')
            {
                Hemming();
            }
            else if (action == '2')
            {
                Shifr();
            }
            else if (action == '3')
            {
                All();
            }
        }
        else if (command == 'e' || command == 'E') {
            return 0;
        }
    }
    system("pause");
}
