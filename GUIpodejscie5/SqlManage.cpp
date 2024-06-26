#include "SqlManage.h"

SqlManage::SqlManage() {
    int rc = sqlite3_open("Data.db", &this->db);

    if (rc) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
    }
    else {
        std::cout << "Opened database successfully" << std::endl;
    }
}

UserData* SqlManage::getUser(const char* sql) {
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(this->db, sql, -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
        return NULL;
    }

    UserData* userCurrent = NULL;

    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        const unsigned char* id = sqlite3_column_text(stmt, 0);
        const unsigned char* userName = sqlite3_column_text(stmt, 1);
        const unsigned char* password = sqlite3_column_text(stmt, 2);
        const unsigned char* money = sqlite3_column_text(stmt, 3);
        auto* user = new UserData;
        user->id = reinterpret_cast<const char*>(id);
        user->UserName = reinterpret_cast<const char*>(userName);
        user->Password = reinterpret_cast<const char*>(password);
        user->Money = reinterpret_cast<const char*>(money);

        if (userCurrent == NULL) {
            userCurrent = user;
        }
    }

    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }

    sqlite3_finalize(stmt);

    return userCurrent;
}

TicketData* SqlManage::getTicket(const char* sql) {
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(this->db, sql, -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
        return NULL;
    }

    TicketData* currentTicket = NULL;

    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        const unsigned char* id = sqlite3_column_text(stmt, 0);
        const unsigned char* stacjaPocz = sqlite3_column_text(stmt, 1);
        const unsigned char* stacjaKonc = sqlite3_column_text(stmt, 2);
        const unsigned char* cena = sqlite3_column_text(stmt, 3);
        const unsigned char* godzPrzyjazdu = sqlite3_column_text(stmt, 4);
        const unsigned char* godzOdjazdu = sqlite3_column_text(stmt, 5);
        auto* ticket = new TicketData;
        ticket->id = reinterpret_cast<const char*>(id);
        ticket->stacjaPocz = reinterpret_cast<const char*>(stacjaPocz);
        ticket->stacjaKonc = reinterpret_cast<const char*>(stacjaKonc);
        ticket->cena = reinterpret_cast<const char*>(cena);
        ticket->godzPrzyjazdu = reinterpret_cast<const char*>(godzPrzyjazdu);
        ticket->godzOdjazdu = reinterpret_cast<const char*>(godzOdjazdu);

        if (currentTicket == NULL) {
            currentTicket = ticket;
        }
    }

    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }

    sqlite3_finalize(stmt);

    return currentTicket;
}
BookingData* SqlManage::getBooking(const char* sql) {
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(this->db, sql, -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
        return NULL;
    }

    BookingData* userCurrent = NULL;

    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        const unsigned char* id = sqlite3_column_text(stmt, 0);
        const unsigned char* idUser = sqlite3_column_text(stmt, 1);
        const unsigned char* idTicket = sqlite3_column_text(stmt, 2);
        auto* user = new BookingData;
        user->id = reinterpret_cast<const char*>(id);
        user->User_id = reinterpret_cast<const char*>(idUser);
        user->Ticket_id = reinterpret_cast<const char*>(idTicket);

        if (userCurrent == NULL) {
            userCurrent = user;
        }
    }

    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }

    sqlite3_finalize(stmt);

    return userCurrent;
}

void SqlManage::retriveData(std::string select, std::string from, std::string where) {
    sqlite3_stmt* stmt;
    char* messageError;
    std::string sql = "SELECT " + select + " FROM " + from + " WHERE " + where + ";";
    int exit = sqlite3_open("Data.db", &this->db);
    exit = sqlite3_prepare_v2(this->db, sql.c_str(), -1, &stmt, NULL);
    if (exit != SQLITE_OK) {

        std::cerr << "Error in selectData function." << std::endl;
    }
    else {
        while (exit = sqlite3_step(stmt) == SQLITE_ROW)
        {
        }
    }
}

void SqlManage::sqlExecute(const char* sql) {

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(this->db, sql, -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
    }
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
    }
    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
}

int SqlManage::sqlGetId(std::string table) {

    sqlite3_stmt* stmt;
    std::string sql1 = "SELECT * FROM "+table+"";
    int rc = sqlite3_prepare_v2(this->db, sql1.c_str(), -1, &stmt, nullptr);
    int i = 0;
    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
    }
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        i++;
    }
    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
    return i+1;
}
int SqlManage::sqlGetIdWhere(std::string table, std::string where) {

    sqlite3_stmt* stmt;
    std::string sql1 = "SELECT * FROM " + table + " WHERE " + where + "";
    int rc = sqlite3_prepare_v2(this->db, sql1.c_str(), -1, &stmt, nullptr);
    int i = 0;
    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
    }
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        i++;
    }
    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
    return i + 1;
}
std::list<TicketData*> SqlManage::returnDataListTicket() {
    sqlite3_stmt* stmt;
    std::list<TicketData*> a;
    std::string sql1 = "SELECT * FROM TicketData";
    int rc = sqlite3_prepare_v2(this->db, sql1.c_str(), -1, &stmt, nullptr);
    int i = 0;
    if (rc != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(this->db) << std::endl;
    }
    TicketData* currentTicket = NULL;
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        const unsigned char* id = sqlite3_column_text(stmt, 0);
        const unsigned char* stacjaPocz = sqlite3_column_text(stmt, 1);
        const unsigned char* stacjaKonc = sqlite3_column_text(stmt, 2);
        const unsigned char* cena = sqlite3_column_text(stmt, 3);
        const unsigned char* godzPrzyjazdu = sqlite3_column_text(stmt, 4);
        const unsigned char* godzOdjazdu = sqlite3_column_text(stmt, 5);
        auto* ticket = new TicketData;
        ticket->id = reinterpret_cast<const char*>(id);
        ticket->stacjaPocz = reinterpret_cast<const char*>(stacjaPocz);
        ticket->stacjaKonc = reinterpret_cast<const char*>(stacjaKonc);
        ticket->cena = reinterpret_cast<const char*>(cena);
        ticket->godzPrzyjazdu = reinterpret_cast<const char*>(godzPrzyjazdu);
        ticket->godzOdjazdu = reinterpret_cast<const char*>(godzOdjazdu);
        currentTicket = ticket;
        a.push_back(currentTicket);
    }
    if (rc != SQLITE_DONE) {
        std::cout << "Failed to execute statement: " << sqlite3_errmsg(db) << std::endl;
    }
    sqlite3_finalize(stmt);
    return a;
}
int SqlManage::setUser(int i) {
    return id = i;
}
;