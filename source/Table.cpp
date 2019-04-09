/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include "../headers/Table.hpp"

Table::Table(ULLI_t i_fill, ULLI_t i_tbl_size, HashList** i_table)
        : fill(i_fill), tbl_size(i_tbl_size), table(i_table) {

}

Table::~Table() {

}

ULLI_t Table::get_fill() const {
    return fill;
}

ULLI_t Table::get_tbl_size() const {
    return tbl_size;
}

HashList** Table::get_table() const {
    return table;
}

void Table::set_fill(ULLI_t i_fill) {
    Table::fill = i_fill;
}

void Table::set_tbl_size(ULLI_t i_tbl_size) {
    Table::tbl_size = i_tbl_size;
}

void Table::set_table(HashList** i_table) {
    Table::table = i_table;
}
