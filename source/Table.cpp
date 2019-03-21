/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/Table.hpp"

Table::Table(int i_fill, int i_tbl_size, HashList** i_table)
        : fill(i_fill), tbl_size(i_tbl_size), table(i_table) {}

Table::~Table() = default {

}

int Table::get_fill() const {
    return fill;
}

void Table::set_fill(int i_fill) {
    Table::fill = i_fill;
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
