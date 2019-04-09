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
USI_t test_KeyNode() {
    using namespace std;

    USI_t retval = 0;

    cout << "===| BEGIN TEST: KeyNode class |===" << endl;
    cout << endl;

    try {
        /*
         * CONSTRUCTOR TESTS
         */
        cout << "\t1) Constructors" << endl;
        cout << endl;

        char text_0[] = {'n', 'U', 'l', 'Z', '\0'};
        char text_1[] = {'B', 'l', 'A', 'n', 'K', '\0'};
        char text_2[] = {'Y', 'A', 'F', 'F', 'I', 'N', 'A', 'T', 'O', 'R', '\0'};
        cout << "| text_0 is " << text_0 << endl;
        cout << "| text_1 is " << text_1 << endl;
        cout << "| text_2 is " << text_2 << endl;
        cout << endl;

        auto* node_blank = new KeyNode();
        auto* node_2 = new KeyNode(text_2);
        auto* node_1 = new KeyNode(text_0, 4);
        auto* node_0 = new KeyNode(text_1, 5, node_1);

        //
        Output::print_node(node_blank);
        Output::print_node(node_0);
        Output::print_node(node_1);
        Output::print_node(node_2);

        if (node_0->get_key()[0] != 'B') {
            cout << "|Err| Failed to set key " << endl;
            retval = 11;
        }
        if (node_0->get_key_len() != 5) {
            cout << "|Err| Failed to set key_len " << endl;
            retval = 12;
        }
        if (node_0->get_next() != node_1) {
            cout << "|Err| Failed to set link " << endl;
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

        USI_t key_len_0 = 4;
        USI_t key_len_1 = 5;
        USI_t key_len_2 = 10;

        cout << "| Setting node_blank key to " << text_1 << " " << endl;
        cout << "| Setting node_blank key_len to " << key_len_1 << " " << endl;
        cout << "| Setting node_blank link to " << node_2->get_key() << " " << endl;
        node_blank->set_key(text_1);
        node_blank->set_key_len(key_len_1);
        node_blank->set_next(node_2);

        Output::print_node(node_blank);

        cout << "| Setting node_1 link to " << node_2->get_key() << " " << endl;
        node_1->set_next(node_2);
        cout << "| Setting node_blank key to " << node_2->get_key() << " " << endl;
        cout << "| Setting node_blank key_len to " << node_2->get_key_len() << " " << endl;
        cout << "| Setting node_2 link to " << node_blank->get_key() << " " << endl;
        node_blank->set_key(node_2->get_key());
        node_blank->set_key_len(node_2->get_key_len());
        node_2->set_next(node_blank);

        Output::print_node(node_blank);
        Output::print_node(node_2);
        Output::print_node(node_1);
        Output::print_node(node_0);

        if (node_blank->get_key()[0] != 'Y') {
            cout << "|Err| Failed to set key " << endl;
            retval = 21;
        }
        if (node_blank->get_key_len() != key_len_2) {
            cout << "|Err| Failed to set key_len " << endl;
            retval = 22;
        }
        if (node_blank->get_next() != node_2) {
            cout << "|Err| Failed to set link " << endl;
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
            auto* node_scoped = new KeyNode(text_1, key_len_1, node_blank);
            node_ptr = node_scoped;
            Output::print_node(node_ptr);
        }

        if (node_ptr->get_key()[0] == 'Y') {
            cout << "|Err| Destructor failed " << endl;
            Output::print_node(node_ptr);
            retval = 1;
        }
        else {
            cout << "| Destructor succeeded " << endl;
        }

        cout << "\tEnd section 3" << endl;
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

USI_t test_HashList() {
    USI_t retval = 0;

    return retval;
};

USI_t test_Table() {
    USI_t retval = 0;

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