#pragma once
#include "Libs.h"
#include <list>
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
std::list<TicketData>;
class SqlManage
{
public:
    int id;
    int setUser(int i);
    SqlManage();//konstruktor inicjuj¹cy baze danych 
    UserData* getUser(const char* sql); //funkcja wpisuj¹ca dane usera do struktury
    TicketData* getTicket(const char* sql); //funkcja wpisuj¹ca dane usera do struktury
    void retriveData(std::string select, std::string from, std::string where);//funkcja do testowania zapytania SELECT
    void sqlExecute(const char* sql);//funkcja wykonuj¹ca podane polecenie sql
    int sqlGetId(std::string table);
    int sqlGetIdWhere(std::string table, std::string where);
    std::list<TicketData*> returnDataListTicket();
    BookingData* getBooking(const char* sql);

private:
    sqlite3* db;
};


