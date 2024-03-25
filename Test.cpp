#include <iostream>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>

int main() {
    // Initialize MongoDB C++ Driver
    mongocxx::instance inst{};
    
    // Replace the uri string with your MongoDB Atlas connection string
    std::string uri_string = "mongodb+srv://amanarora10:Pe001950@cluster0.3yvxzpm.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0";
    mongocxx::uri uri(uri_string);
    
    // Create a new MongoDB client
    mongocxx::client client(uri);
    
    // Get a list of all databases on the server
    for (auto&& db : client.list_databases()) {
        std::cout << db["name"].get_utf8().value << std::endl;
    }
    
    return 0;
}
