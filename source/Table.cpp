/*
 * Table.cpp
 *
 * Hash Table
 * A data structure template in C++
 * Copyright (C) 2019 Chris Mabon
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * @package hash_table
 * @author Chris Mabon
 * https://github.com/chrismabon
 */

#include "../headers/Table.hpp"

Table::Table(LgInt tblSizeArg, LgInt fillArg = 0, HashList** tableArg)
        : fill(fillArg), tblSize(tblSizeArg), table(tableArg) {

}

Table::~Table() = default {

}

LgInt Table::getFill() const {
    return fill;
}

LgInt Table::getTblSize() const {
    return tblSize;
}

HashList** Table::getTable() const {
    return table;
}

void Table::setFill(LgInt fillArg) {
    Table::fill = fillArg;
}

void Table::setTblSize(LgInt tblSizeArg) {
    Table::tblSize = tblSizeArg;
}

void Table::setTable(HashList** tableArg) {
    Table::table = tableArg;
}
