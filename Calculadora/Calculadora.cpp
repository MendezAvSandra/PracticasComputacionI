/*
 * Author: Sandra Mendez Aviles
 * mendezavilessandra@gmail.com
 * Sept 14, 2021
 */

#include <iostream>
using namespace std;
int main() {
    float num1 = 0;
    float num2 = 0;
    char opera;

    cout << "Primer numero:" << endl;
    cin >> num1; //read first number

    cout << "Operacion:" << endl;
    cin >> opera;

    cout << "Segundo numero" << endl;
    cin >> num2; //read second number
    //Todo bien con las variables//
    //Ahora va el código en orden//

    if (opera=='+') {
        std::cout <<"Resultado:" << std::endl;
        std::cout << num1 << opera << num2 << "=" << num1+num2 << std::endl;
    }
    else {
        if(opera=='-')
            std::cout <<"Resultado:" << std::endl;
            std::cout << num1 << opera << num2 << "=" << num1-num2 << std::endl;
        else {
            if(opera=='/')
                std::cout <<"Resultado:" << std::endl;
                std::cout << num1 << opera << num2 << "=" << num1/num2 << std::endl;
        }
        if(opera=='*')
            std::cout <<"Resultado:" << std::endl;
            std::cout << num1 << opera << num2 << "=" << num1*num2 << std::endl;
    }

    return 0;
}
