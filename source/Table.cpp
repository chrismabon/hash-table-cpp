/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/Table.hpp"

Table::Table(int num_entries, int tbl_size, HashList** table) : num_entries(num_entries), tbl_size(tbl_size),
                                                                table(table) {}

Table::~Table() = default {

}

int Table::get_num_entries() const {
    return num_entries;
}

void Table::set_num_entries(int i_num_entries) {
    Table::num_entries = i_num_entries;
}

int Table::get_tbl_size() const {
    return tbl_size;
}

void Table::set_tbl_size(int i_tbl_size) {
    Table::tbl_size = i_tbl_size;
}

HashList** Table::get_table() const {
    return table;
}

void Table::set_table(HashList** i_table) {
    Table::table = i_table;
}
