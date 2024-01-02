#include "gdexample.h"
#include <godot_cpp/core/class_db.hpp>

#include <iostream>
#include <sstream>
#include <string>
// #include "leveldb/db.h"

using namespace std;
using namespace godot;

void GDExample::_bind_methods() {
}

GDExample::GDExample() {
    // Initialize any variables here.
    time_passed = 0.0;

    // // Set up database connection information and open database
    // leveldb::DB* db;
    // leveldb::Options options;
    // options.create_if_missing = true;

    // leveldb::Status status = leveldb::DB::Open(options, "./testdb", &db);

    // if (false == status.ok()) {
    //     cerr << "Unable to open/create test database './testdb'" << endl;
    //     cerr << status.ToString() << endl;
    //     return -1;
    // }
    
    // // Add 256 values to the database
    // leveldb::WriteOptions writeOptions;
    // for (unsigned int i = 0; i < 256; ++i) {
    //     ostringstream keyStream;
    //     keyStream << "Key" << i;
        
    //     ostringstream valueStream;
    //     valueStream << "Test data value: " << i;
        
    //     db->Put(writeOptions, keyStream.str(), valueStream.str());
    // }
    
    // // Iterate over each item in the database and print them
    // leveldb::Iterator* it = db->NewIterator(leveldb::ReadOptions());
    
    // for (it->SeekToFirst(); it->Valid(); it->Next()) {
    //     cout << it->key().ToString() << " : " << it->value().ToString() << endl;
    // }
    
    // if (false == it->status().ok()) {
    //     cerr << "An error was found during the scan" << endl;
    //     cerr << it->status().ToString() << endl; 
    // }
    
    // delete it;
    
    // // Close the database
    // delete db;
}

GDExample::~GDExample() {
    // Add your cleanup here.
}

void GDExample::_process(double delta) {
    time_passed += delta;

    Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0 + (10.0 * cos(time_passed * 1.5)));

    set_position(new_position);
}