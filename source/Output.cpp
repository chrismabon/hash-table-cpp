/*
 * Output.cpp
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

#include "../headers/Output.hpp"
#include <iostream>

Output::Output(SmInt state)
        : _state(state) {

}

Output::~Output() = default {

}

SmInt Output::get_state() const {
    return _state;
}

void Output::set_state(SmInt state) {
    Output::_state = state;
}

void Output::print_node(KeyNode* keyNode) const {
    using namespace std;

    if (keyNode->getKey().length() && keyNode->getKeyLen()) {
        cout << "| ";
        cout << "Key: " << keyNode->getKey();
        cout << " | ";
        cout << "Key length: " << keyNode->getKeyLen();
        cout << " | ";
        cout << "Next node: ";
        keyNode->getNext() ? cout << keyNode->getNext()->getKey() << " |" << endl
                           : cout << "NULL" << " |" << endl;
    }
    else {
        cout << "| Node is empty |" << endl;
    }
}

void Output::print_list(HashList* hashList) const {
    using namespace std;

    KeyNode* cur_node = hashList->getKeys();
    while (cur_node) {
        Output::print_node(cur_node);
        cur_node = cur_node->getNext();
    }
}

void Output::print_excep(std::string excep) const {
    using namespace std;

    cout << "|ERR| " << excep << endl;
}