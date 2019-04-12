/*
 * Table.cpp
 *
 * Hash Table
 * A data structure template in C++
 * Copyright (C) 2019 Chris Mabon
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * @package hash_table
 * @author Chris Mabon
 * https://github.com/chrismabon
 */

#include "../headers/Table.hpp"

Table::Table(LgInt i_fill, LgInt i_tbl_size, HashList** i_table)
        : fill(i_fill), tbl_size(i_tbl_size), table(i_table) {

}

Table::~Table() = default {

}

LgInt Table::get_fill() const {
    return fill;
}

LgInt Table::get_tbl_size() const {
    return tbl_size;
}

HashList** Table::get_table() const {
    return table;
}

void Table::set_fill(LgInt i_fill) {
    Table::fill = i_fill;
}

void Table::set_tbl_size(LgInt i_tbl_size) {
    Table::tbl_size = i_tbl_size;
}

void Table::set_table(HashList** i_table) {
    Table::table = i_table;
}
