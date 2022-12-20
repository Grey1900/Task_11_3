/******************************************************************************/
/* File Name: Task_11_3                                                       */
/* Data: 10.12.2022                                                           */
/* Developer: Sergey Plotnikov                                                */
/* Description: Solution for task 3 of Block 11 of the C++ study course       */
/******************************************************************************/

#include <iostream>
#include <string>

int octetCheck(std::string, int);

int main()
{
    std::string ipAdress;

    std::cout << "Enter IP-adress: ";
    std::cin >> ipAdress;

    for(int i = 0; i < 3; i++){
        int octet = i;
        if (octetCheck(ipAdress, octet) != 0) {
            std::cout << "Invalid";
            break;
        } else if (int octet = 3) {
            std::cout << "Valid";
        }
    }

    return 0;
}

int octetCheck(std::string ipAdress, int octet){
    int error = 0;



    return error;
}

std::string selectOctet(std::string ipAdress, int octet){
    char const sep = '.';
    std::string partIp = ipAdress.substr(octet, ipAdress.find(sep));
    
    return partIp;
}
