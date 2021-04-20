#include <cstdlib>
#include <ctime>
#include <iostream>

int show_help();

int main(int argc, char* argv[])
{
    int pwdlen, pwdamt;

    if (argc == 1)
    {
        pwdlen = 8; pwdamt = 1;
    }
    else if (argc == 2 && std::string(argv[1]) == "-h")
    {
        show_help();
        return 0;
    }
    else if (argc == 3 && std::string(argv[1]) == "-n")
    {
        std::string pwdamt_arg = std::string(argv[2]);
        bool isint_argamt = (pwdamt_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_argamt == 0)
        {
            std::cout << "ERROR: paramater for the '-n' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            pwdamt = atoi(argv[2]);
            pwdlen = 8;
        }
    }
    else if (argc == 3 && std::string(argv[1]) == "-l")
    {
        std::string pwdlen_arg = std::string(argv[2]);
        bool isint_arglen = (pwdlen_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_arglen == 0)
        {
            std::cout << "ERROR: paramater for the '-l' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            pwdlen = atoi(argv[2]);
            pwdamt = 1;
        }
    }
    else if (argc == 5 && std::string(argv[1]) == "-n" && std::string(argv[3]) == "-l")
    {
        std::string pwdamt_arg = std::string(argv[2]);
        bool isint_argamt = (pwdamt_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_argamt == 0)
        {
            std::cout << "ERROR: paramater for the '-n' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            pwdamt = atoi(argv[2]);
        }

        std::string pwdlen_arg = std::string(argv[4]);
        bool isint_arglen = (pwdlen_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_arglen == 0)
        {
            std::cout << "ERROR: paramater for the '-l' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            pwdlen = atoi(argv[4]);
        }
    }
    else if (argc == 5 && std::string(argv[1]) == "-l" && std::string(argv[3]) == "-n")
    {
        std::string pwdamt_arg = std::string(argv[4]);
        bool isint_argamt = (pwdamt_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_argamt == 0)
        {
            std::cout << "ERROR: paramater for the '-n' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            pwdamt = atoi(argv[4]);
        }

        std::string pwdlen_arg = std::string(argv[2]);
        bool isint_arglen = (pwdlen_arg.find_first_not_of("0123456789") == std::string::npos);

        if (isint_arglen == 0)
        {
            std::cout << "ERROR: paramater for the '-l' flag must be an integer.\n";
            return show_help();
        }
        else
        {
            pwdlen = atoi(argv[2]);
        }
    }
    else
    {
        std::cout << "ERROR: illegal options.\n";
        return show_help();
    }

    //  Generate passwords.

    srand((int)time(0));

    for (int i = 0; i < pwdamt; i++)
    {
        std::string pwd;
        std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

        for (int i = 0; i < pwdlen; i++)
        {
            int randint = rand() % 61;
            char randchar = chars[randint];
            pwd += randchar;
        }

        std::cout << pwd << "\n";
    }

    return 0;
}

int show_help()
{
    std::cout << "Usage: passwds-gen [OPTIONS]\n"
                 "  -n NUMBER    specify number of passwords to generate\n"
                 "  -l NUMBER    specify character length for passwords to generate\n"
                 "  -h           display this help message\n";
    return 1;
}
