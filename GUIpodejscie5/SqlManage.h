#pragma once
#include "Libs.h"
struct UserData {
    std::string id;
    std::string UserName;
    std::string Password;
    std::string Money;
};
struct TicketData {
    std::string id;
    std::string stacjaPocz;
    std::string stacjaKonc;
    std::string cena;
    std::string godzPrzyjazdu;
    std::string godzOdjazdu;
    UserData* next;
};
struct BookingData
{
    std::string id;
    std::string User_id;
    std::string Ticket_id;
};
class SqlManage
{
public:
    SqlManage();//konstruktor inicjujący baze danych 
    UserData* getUser(const char* sql); //funkcja wpisująca dane usera do struktury
    TicketData* getTicket(const char* sql); //funkcja wpisująca dane usera do struktury
    void retriveData(std::string select, std::string from, std::string where);//funkcja do testowania zapytania SELECT
    void sqlExecute(const char* sql);//funkcja wykonująca podane polecenie sql


private:
    sqlite3* db;
};


