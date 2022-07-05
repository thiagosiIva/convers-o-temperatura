#include <iostream>

using namespace std;

int main()
{
    float C, K, F;
    int opcao;

    cout << "Escolha a opção de temperatura" << endl;
    cout << "1 - Kelvin para Celsius" << endl;
    cout << "2 - Kelvin para Fahrenheit" << endl;
    cout << "3 - Celsius para Kelvin" << endl;
    cout << "4 - Celsius para Fahrenheit" << endl;
    cout << "5 - Fahrenheit para Celsius" << endl;
    cout << "6 - Fahrenheit para Kelvin" << endl;

    cin >> opcao;
    // Estrutura condicional aninhada
    if (opcao == 1)
    {
        cout << "Digite a temperatura em Kelvin" << endl;
        cin >> K;
        C = K - 273.15;
        cout << "Temperatura em Celsius: " << C;
    }
    else if (opcao == 2)
    {
        cout << "Digite a temperatura em Kelvin" << endl;
        cin >> K;
        F = (K - 273.15) * 1.8 + 32;
        cout << "Temperatura em Fahrenheit: " << F;
    }
    else if (opcao == 3)
    {
        cout << "Digite a temperatura em Celsius" << endl;
        cin >> C;
        K = C + 273.15;
        cout << "Temperatura em Kelvin: " << K;
    }
    else if (opcao == 4)
    {
        cout << "Digite a temperatura em Celsius" << endl;
        cin >> C;
        F = C * 1.8 + 32;
        cout << "Temperatura em Fahrenheit: " << F;
    }
    else if (opcao == 5)
    {
        cout << "Digite a temperatura em Fahrenheit" << endl;
        cin >> F;
        C = (F - 32) / 1.8;
        cout << "Temperatura em Celsius: " << C;
    }
    else if (opcao == 6)
    {
        cout << "Digite a temperatura em Fahrenheit" << endl;
        cin >> F;
        K = (F - 32) * 5 / 9 + 273;
        cout << "Temperatura em Kelvin: " << K;
    }
    else
    {
        cout << "Opcao invalida";
    }

    return 0;
}