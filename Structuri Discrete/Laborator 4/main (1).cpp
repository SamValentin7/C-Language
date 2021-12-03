#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>

int a[20][20], t[20][20], c[20][20], drum[20][20], m, n, i, j, k;
char local[20][20] = {"Briceni", "Ocnita", "Edinet", "Corjeuti", "Balti", "Rautel", "Falesti", "Chisinau", "Sangerei", "Ialoveni"};
using namespace std;
void floyd()
{
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            t[i][j] = c[i][j];
            drum[i][j] = 0;
        }
    for (i = 1; i <= n; i++)
        t[i][i] = 0;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (t[i][k] + t[k][j] < t[i][j])
                {
                    t[i][j] = t[i][k] + t[k][j];
                    drum[i][j] = k;
                }
}
void traseu(int i, int j)
{
    int k = drum[i][j];
    if (k != 0)
    {
        traseu(i, k);
        cout << k << " ";
        traseu(k, j);
    }
}
int main()
{
    cout << "Proiect nr.4" << endl;
    cout << "Tema: Algitmul Floyd-Warshall" << endl;
    cout << "Elaborat de Samciucov Valentin" << endl;
    ifstream fin;
    fin.open("floyd.txt", ios::in);
    fin >> n >> m;
    int cost;
    cout << "Introduceti numarul de varfuri  ";
    cin >> n;
    cout << "Introduceti numarul de arce ";
    cin >> m;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            a[i][j] = 0;
            c[i][j] = 9999;
        }
    for (i = 1; i <= m; i++)
    {
        cout << "Extrimitati arce " << i << ": ";
        cin >> j >> k;
        a[j][k] = 1;
        cout << "Costul arcului ";
        cin >> cost;
        c[j][k] = cost;
    }
    floyd();
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i != j)
                if (t[i][j] == 9999)
                    cout << endl
                         << "Nu exista drum intre " << i << " si " << j;
                else
                {
                    cout << endl
                         << "Costul drumului intre " << i << " si " << j << " este " << t[i][j];
                    cout << endl
                         << "Traseul " << i << " ";
                    traseu(i, j);
                    cout << j << " ";
                }
    getch();
    return 0;
}
