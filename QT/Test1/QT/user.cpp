#include "user.h"


//Constructor de user
user::user(std::string email, std::string pass)
{
    if(this->Login(email, pass))
    {
        this->_Email = email;
        this->_Password = pass;
        this->getDadosUser(email);
    }
    else
    {
        std::cout << "nao logado";
    }
}


//Função Login retorna True caso o login exista ou falso caso nao
bool user::Login(std::string email, std::string pass)
{
    //connecta a database e verifica se os dados condizem
    if(1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//Preenche automatico todos os dados do usar com esta funçao
void user::getDadosUser(std::string email)
{
    //busca os dados ao sql para preencher as propriedades do user
    this->_ID = 481738;
    this->_Username = "Kiko";
    this->_SaldoReal = 10000.50f;
    this->_SaldoVirtual = 10000.50f;
    this->_IP = "192.168.1.1";
}


//Para saber o Username do User
std::string user::getUsername()
{
    return this->_Username;
}


//Para saber  Email do User
std::string user::getEmail()
{
    return this->_Email;
}


//Para saber  SaldoReal do User
float user::getSaldoReal()
{
    return this->_SaldoVirtual;
}


//Para saber  SaldoVirtual do User
float user::getSaldoVirtual()
{
    return this->_SaldoVirtual;
}
