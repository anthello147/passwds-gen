/*
    PASSWDS-GEN.
    Version 0.30. Created by anthello147 at GitHub.
    File last revised on 31 January 2021.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

//  Function declarations.
int show_help();

int main(int argc, char* argv[])
{
    //  Define password character length and password amount variables.

    int passwdlen;
    int passwdamt;

    //  Register command-line flags and options.

    //  If no command-line flags.
    if (argc == 1)
    {
        passwdlen = 8;
        passwdamt = 1;
    }
    //  If '-h' or '--help' flags are present and there is only one argument.
    else if (argc == 2 && std::string(argv[1]) == "-h" ||
             argc == 2 && std::string(argv[1]) == "--help")
    {
        show_help();
        return 2;
    }
    //  If '-n' or '--number' flags are present and there are only two arguments.
    else if (argc == 3 && std::string(argv[1]) == "-n" ||
             argc == 3 && std::string(argv[1]) == "--number")
    {
        //  Checks if parameter for the '-n' flag is an integer.
        std::string passwdamt_arg = std::string(argv[2]);
        bool isint_argamt = (passwdamt_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_argamt == 0)
        {
            std::cout << "ERROR: paramater for the '-n' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            passwdamt = atoi(argv[2]);
            passwdlen = 8;
        };
    }
    //  If '-l' or '--length' flags are present and there are only two arguments.
    else if (argc == 3 && std::string(argv[1]) == "-l" ||
             argc == 3 && std::string(argv[1]) == "--length")
    {
        //  Checks if parameter for the '-l' flag is an integer.
        std::string passwdlen_arg = std::string(argv[2]);
        bool isint_arglen = (passwdlen_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_arglen == 0)
        {
            std::cout << "ERROR: paramater for the '-l' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            passwdlen = atoi(argv[2]);
            passwdamt = 1;
        };
    }
    //  If there are four arguments and both the '-n' and '-l' options are present, in that order.
    else if (
                (argc == 5 && std::string(argv[1]) == "-n" && std::string(argv[3]) == "-l") ||
                (argc == 5 && std::string(argv[1]) == "--number" && std::string(argv[3]) == "-l") ||
                (argc == 5 && std::string(argv[1]) == "-n" && std::string(argv[3]) == "--length") ||
                (argc == 5 && std::string(argv[1]) == "--number" && std::string(argv[3]) == "--length")
            )
    {
        //  Checks if parameter for the '-n' flag is an integer.
        std::string passwdamt_arg = std::string(argv[2]);
        bool isint_argamt = (passwdamt_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_argamt == 0)
        {
            std::cout << "ERROR: paramater for the '-n' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            passwdamt = atoi(argv[2]);
        };

        //  Checks if parameter for the '-l' flag is an integer.
        std::string passwdlen_arg = std::string(argv[4]);
        bool isint_arglen = (passwdlen_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_arglen == 0)
        {
            std::cout << "ERROR: paramater for the '-l' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            passwdlen = atoi(argv[4]);
        };
    }
    //  If there are four arguments and both the '-l' and '-n' options are present, in that order.
    else if (
                (argc == 5 && std::string(argv[1]) == "-l" && std::string(argv[3]) == "-n") ||
                (argc == 5 && std::string(argv[1]) == "--length" && std::string(argv[3]) == "-n") ||
                (argc == 5 && std::string(argv[1]) == "-l" && std::string(argv[3]) == "--number") ||
                (argc == 5 && std::string(argv[1]) == "--length" && std::string(argv[3]) == "--number")
            )
    {
        //  Checks if parameter for the '-n' flag is an integer.
        std::string passwdamt_arg = std::string(argv[4]);
        bool isint_argamt = (passwdamt_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_argamt == 0)
        {
            std::cout << "ERROR: paramater for the '-n' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            passwdamt = atoi(argv[4]);
        };

        //  Checks if parameter for the '-l' flag is an integer.
        std::string passwdlen_arg = std::string(argv[2]);
        bool isint_arglen = (passwdlen_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_arglen == 0)
        {
            std::cout << "ERROR: paramater for the '-l' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            passwdlen = atoi(argv[2]);
        };
    }
    //  If the user does not use the correct command-line usage.
    else
    {
        std::cout << "ERROR: illegal options.\n";
        return show_help();
    };

    //  Generate passwords.

    srand((int)time(0));

    for (int i = 0; i < passwdamt; i++)
    {
        std::string passwd = "";
        std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

        for (int i = 0; i < passwdlen; i++)
        {
            int randint = rand() % 61;
            char randchar = chars[randint];
            passwd += randchar;
        };

        std::cout << passwd << "\n";
    };

    return 0;
};

//  Function to show program usage.

int show_help()
{
    std::cout << "Usage: passwds-gen [OPTIONS]\n\n"
                 "  -n, --number NUMBER        specify number of passwords to generate\n"
                 "  -l, --length NUMBER        specify character length for passwords to generate\n"
                 "  -h, --help                 display this help message\n";
    return 1;
};
