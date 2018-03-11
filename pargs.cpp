#include <iostream>
using namespace std;

/**
 * @param argc Number of command-line arguments passed to the program
 * @param argv Values of the command-line arguments.
 *
 * @note The function will always receive as first argument the name of the
 *       executable file which contains the program.
 *
 * @return 0 If the program completed successfully, !=0 in case of error
 */
int main(int argc, char* argv[])
{
    cout << "Printing " << argc << " command arguments:" << endl;
    for (int i=0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    return 0;
}
