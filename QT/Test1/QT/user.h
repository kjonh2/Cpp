#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>


class user
{
    public:
        user(std::string email, std::string pass);
        std::string getUsername();
        std::string getEmail();
        float getSaldoReal();
        float getSaldoVirtual();
        bool Login(std::string email, std::string pass);
    private:
        int _ID;
        std::string _Username;
        std::string _Password;
        float _SaldoReal;
        float _SaldoVirtual;
        std::string _Email;
        std::string _IP;

        void getDadosUser(std::string email);
};

#endif // USER_H
