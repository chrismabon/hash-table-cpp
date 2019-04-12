/*
 * test.cpp
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

#include <iostream>
#include "../headers/KeyNode.hpp"
#include "../headers/Output.hpp"

// Testing functions
SmInt test_KeyNode() {
    using namespace std;

    SmInt retval = 0;

    cout << "===| BEGIN TEST: KeyNode class |===" << endl;
    cout << endl;

    try {
        /*
         * CONSTRUCTOR TESTS
         */
        cout << "\t1) Constructors" << endl;
        cout << endl;

        string text_0 = {'n', 'U', 'l', 'Z', '\0'};
        string text_1 = {'B', 'l', 'A', 'n', 'K', '\0'};
        string text_2 = {'Y', 'A', 'F', 'F', 'I', 'N', 'A', 'T', 'O', 'R', '\0'};
        cout << "| text_0 is " << text_0 << endl;
        cout << "| text_1 is " << text_1 << endl;
        cout << "| text_2 is " << text_2 << endl;
        cout << endl;

        auto* node_blank = new KeyNode();
        auto* node_2 = new KeyNode(text_2);
        auto* node_1 = new KeyNode(text_0);
        auto* node_0 = new KeyNode(text_1, node_1);

        //
        Output::print_node(node_blank);
        Output::print_node(node_0);
        Output::print_node(node_1);
        Output::print_node(node_2);

        if (node_0->getKey()[0] != 'B') {
            cout << "|ERR| Failed to set key " << endl;
            retval = 11;
        }
        if (node_0->getKeyLen() != 5) {
            cout << "|ERR| Failed to set _keyLen " << endl;
            retval = 12;
        }
        if (node_0->getNext() != node_1) {
            cout << "|ERR| Failed to set link " << endl;
            retval = 13;
        }

        cout << endl;
        cout << "\tEnd section 1" << endl;
        cout << endl;

        /*
         * SET AND GET TESTS
         */
        cout << "\t2) Sets and gets" << endl;
        cout << endl;

        SmInt key_len_0 = 4;
        SmInt key_len_1 = 5;
        SmInt key_len_2 = 10;

        cout << "| Setting node_blank key to " << text_1 << " " << endl;
        cout << "| Setting node_blank _keyLen to " << key_len_1 << " " << endl;
        cout << "| Setting node_blank link to " << node_2->getKey() << " " << endl;
        node_blank->setKey(text_1);
        node_blank->setKeyLen(key_len_1);
        node_blank->setNext(node_2);

        Output::print_node(node_blank);

        cout << "| Setting node_1 link to " << node_2->getKey() << " " << endl;
        node_1->setNext(node_2);
        cout << "| Setting node_blank key to " << node_2->getKey() << " " << endl;
        cout << "| Setting node_blank _keyLen to " << node_2->getKeyLen() << " " << endl;
        cout << "| Setting node_2 link to " << node_blank->getKey() << " " << endl;
        node_blank->setKey(node_2->getKey());
        node_blank->setKeyLen(node_2->getKeyLen());
        node_2->setNext(node_blank);

        Output::print_node(node_blank);
        Output::print_node(node_2);
        Output::print_node(node_1);
        Output::print_node(node_0);

        if (node_blank->getKey()[0] != 'Y') {
            cout << "|ERR| Failed to set key " << endl;
            retval = 21;
        }
        if (node_blank->getKeyLen() != key_len_2) {
            cout << "|ERR| Failed to set _keyLen " << endl;
            retval = 22;
        }
        if (node_blank->getNext() != node_2) {
            cout << "|ERR| Failed to set link " << endl;
            retval = 23;
        }

        cout << endl;
        cout << "\tEnd section 2" << endl;
        cout << endl;

        /*
         * DESTRUCTOR TESTS
         */
        cout << "\t3) Destructor" << endl;
        cout << endl;

        KeyNode* node_ptr = nullptr;

        if (true) {
            auto* node_scoped = new KeyNode(text_1, node_blank);
            node_ptr = node_scoped;
            Output::print_node(node_ptr);
        }

        if (node_ptr->getKey()[0] == 'Y') {
            cout << "|ERR| Destructor failed " << endl;
            Output::print_node(node_ptr);
            retval = 1;
        }
        else {
            cout << "| Destructor succeeded " << endl;
        }

        cout << "\tEnd section 3" << endl;
    }
    catch (const system_error &ex) {
        cout << "|ERR| System error: " << ex.what() << endl;
        retval = 4;
    }
    catch (const bad_alloc &ex) {
        cout << "|ERR| Memory-allocation error: " << ex.what() << endl;
        retval = 3;
    }
    catch (const range_error &ex) {
        cout << "|ERR| Value error: " << ex.what() << endl;
        retval = 2;
    }
    catch (...) {
        cout << "|ERR| Unhandled exception! " << endl;
        retval = 1;
    }

    cout << "===| END TEST: KeyNode class |===" << endl;

    return retval;
};

SmInt test_HashList() {
    SmInt retval = 0;

    return retval;
};

SmInt test_Table() {
    SmInt retval = 0;

    return retval;
};


int main() {
    using namespace std;

    int retval = 0;

    retval += test_KeyNode();
//    retval += test_HashList();
//    retval += test_Table();

    cout << "| Test function return value is " << retval << endl;

    return 0;
}