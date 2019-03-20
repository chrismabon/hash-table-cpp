/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#ifndef HASH_TABLE_KEYNODE_HPP
#define HASH_TABLE_KEYNODE_HPP


class KeyNode {
private:
    char* key;
    int key_len;
    KeyNode* next;

public:
    KeyNode(char* i_key, int i_key_len, KeyNode* i_next);

    virtual ~KeyNode();

    char* get_key() const;

    int get_key_len() const;

    KeyNode* get_next() const;

    void set_key(char* i_key);

    void set_key_len(int i_key_len);

    void set_next(KeyNode* i_next);
};


#endif //HASH_TABLE_KEYNODE_HPP
