#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string removeVowels(string str)
{
    vector<char> vowels = { 'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U' };

    for (int i = 0; i < str.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(),
            str[i]) != vowels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}

string removeConsonants(string str)
{
    vector<char> consonants = { 'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm',
                           'Q', 'W', 'R', 'T', 'P', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M' };

    for (int i = 0; i < str.length(); i++)
    {
        if (find(consonants.begin(), consonants.end(),
            str[i]) != consonants.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string word;
    int a;
    cout << "Введите слово (на английском): ";
    getline(cin, word);
    cout << "Выберите пункт:\n1.Слово выводится задом наперед.\n2.Вывести слово без гласных.\n3.Вывести слово без согласных.\n4.Рандомно раскидывать буквы заданного слова.\n";
    cin >> a;
    switch (a)
    {
        case 1:
            reverse(word.begin(), word.end());
            cout << word;
            break;
        case 2:
            word = removeVowels(word);
            cout << word;
            break;
        case 3:
            word = removeConsonants(word);
            cout << word;
            break;
        case 4:
            random_shuffle(word.begin(), word.end());
            cout << word;
            break;
    }
     
}