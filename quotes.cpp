#include <iostream> 
#include <sqlite3.h> 

using namespace std; 

static int callback(void* data, int argc, char** argv, char** azColName) 
{ 
	int i; 
	cout<<argv[0];
	printf("\n"); 
	return 0; 
} 

int main(int argc, char** argv) 
{ 
	sqlite3* DB; 
	int exit = 0; 
	exit = sqlite3_open("./quotes.db", &DB);
	string data("CALLBACK FUNCTION"); 
	string sql("SELECT * FROM quotes ORDER BY RANDOM() LIMIT 1;"); 
	if (exit) { 
		std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl; 
		return (-1); 
	} 
	int rc = sqlite3_exec(DB, sql.c_str(), callback, (void*)data.c_str(), NULL); 
	if (rc != SQLITE_OK) 
		cerr << "Error SELECT" << endl; 
	else { 
	} 

	sqlite3_close(DB); 
	return (0); 
} 
