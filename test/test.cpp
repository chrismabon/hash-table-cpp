/**
 * @title Hash Table
 * @project hash_table
 * @github https://github.com/chrismabon/hash_table
 * @author Chris Mabon
 */

#include <iostream>
#include "../headers/KeyNode.hpp"
#include "../headers/Output.hpp"

// Testing functions
// TODO implement testing functions for KeyNode
USI_t test_KeyNode() {
    using namespace std;

    USI_t retval = 0;

    cout << "===| BEGIN TEST: KeyNode class |===" << endl;

    try {
        /*
         * CONSTRUCTOR TESTS
         */
        cout << "|\t\t1) Constructors" << endl;

        auto* text_0 = new char['N', 'U', 'L', 'L', '\0'];
        auto* text_1 = new char['B', 'L', 'A', 'N', 'K', '\0'];
        auto* text_2 = new char['Y', 'A', 'F', 'F', 'I', 'N', 'A', 'T', 'O', 'R', '\0'];
        cout << "| text_0 is " << text_0 << endl;
        cout << "| text_1 is " << text_1 << endl;
        cout << "| text_2 is " << text_2 << endl;

        auto* node_blank = new KeyNode();
        auto* node_init_0 = new KeyNode(text_0, 4, node_blank);
        auto* node_init_1 = new KeyNode(text_1, 5);
        auto* node_init_2 = new KeyNode(text_2);
        cout << "| Creating node_blank... " << endl;
        cout << "| Creating node_init_0... " << endl;
        cout << "| Creating node_init_1... " << endl;
        cout << "| Creating node_init_2... " << endl;

        Output::print_node(node_blank);
        Output::print_node(node_init_0);
        Output::print_node(node_init_1);
        Output::print_node(node_init_2);

        if (node_init_0->get_key() != {'N', 'U', 'L', 'L', '\0'}) {
            cout << "|Err| Failed to set key " << endl;
            retval = 11;
        }
        if (node_init_0->get_key_len() != 4) {
            cout << "|Err| Failed to set key_len " << endl;
            retval = 12;
        }
        if (node_init_0->get_next() != node_blank) {
            cout << "|Err| Failed to set link " << endl;
            retval = 13;
        }

        cout << "| End section 1" << endl;

        /*
         * SET AND GET TESTS
         */
        cout << "|\t\t2) Sets and gets" << endl;

        USI_t key_len_0 = 4;
        USI_t key_len_1 = 5;
        USI_t key_len_2 = 10;

        cout << "| Setting node_blank key to " << text_0 << " " << endl;
        cout << "| Setting node_blank key_len to " << key_len_0 << " " << endl;
        cout << "| Setting node_blank link to " << node_init_1 << " " << endl;
        node_blank->set_key(text_0);
        node_blank->set_key_len(key_len_0);
        node_blank->set_next(node_init_1);

        Output::print_node(node_blank);

        cout << "| Setting node_init_0 link to " << node_init_1 << " " << endl;
        cout << "| Setting node_blank key to " << node_init_0->get_key() << " " << endl;
        cout << "| Setting node_blank key_len to " << node_init_0->get_key_len() << " " << endl;
        cout << "| Setting node_blank link to " << node_init_0->get_next() << " " << endl;
        node_init_0->set_next(node_init_1);
        node_blank->set_key(node_init_0->get_key());
        node_blank->set_key_len(node_init_0->get_key_len());
        node_blank->set_next(node_init_0->get_next());

        Output::print_node(node_blank);

        if (node_blank->get_key() != {'N', 'U', 'L', 'L', '\0'}) {
            cout << "|Err| Failed to set key " << endl;
            retval = 21;
        }
        if (node_blank->get_key_len() != key_len_0) {
            cout << "|Err| Failed to set key_len " << endl;
            retval = 22;
        }
        if (node_blank->get_next() != node_init_1) {
            cout << "|Err| Failed to set link " << endl;
            retval = 23;
        }

        cout << "| End section 2" << endl;

        /*
         * DESTRUCTOR TESTS
         */
        cout << "|\t\t3) Destructor" << endl;

        KeyNode* node_ptr = nullptr;

        if (true) {
            auto* node_scoped = new KeyNode(text_1, key_len_1, node_blank);
            node_ptr = node_scoped;
            Output::print_node(node_ptr);
        }

        if (node_ptr->get_key() && node_ptr->get_key_len() && node_ptr->get_next()) {
            cout << "|Err| Destructor failed " << endl;
            Output::print_node(node_ptr);
            retval = 1;
        }
        else {
            cout << "| Destructor succeeded " << endl;
        }

        cout << "| End section 3" << endl;
    }
    catch (const system_error &ex) {
        cout << "|Err| System error: " << ex.what() << endl;
        retval = 4;
    }
    catch (const bad_alloc &ex) {
        cout << "|Err| Memory-allocation error: " << ex.what() << endl;
        retval = 3;
    }
    catch (const range_error &ex) {
        cout << "|Err| Value error: " << ex.what() << endl;
        retval = 2;
    }
    catch (...) {
        cout << "|Err| Unhandled exception! " << endl;
        retval = 1;
    }

    cout << "===| END TEST: KeyNode class |===" << endl;

    return retval;
};

// TODO implement testing functions for HashList
USI_t test_HashList() {

};

// TODO implement testing functions for Table
USI_t test_Table() {

};


int main() {
    int retval = 0;

    retval += test_KeyNode();
    retval += test_HashList();
    retval += test_Table();

    return 0;
}