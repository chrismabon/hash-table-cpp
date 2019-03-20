/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_HASHLIST_HPP
#define HASH_TABLE_HASHLIST_HPP


#include "KeyNode.hpp"

class HashList {
private:
    int hash;
    int num_keys;
    KeyNode* keys;

public:
    HashList(int hash, int num_keys, KeyNode* keys);

    virtual ~HashList();

    int get_hash() const;

    void set_hash(int i_hash);

    int get_num_keys() const;

    void set_num_keys(int i_num_keys);

    KeyNode* get_keys() const;

    void set_keys(KeyNode* i_keys);
};


#endif //HASH_TABLE_HASHLIST_HPP
