#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif
#include <stdio.h>
#include <stdlib.h>
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

#include <cstdio>
#include <string>
#include <cassert>

std::string to_string( int x ) {
  int length = snprintf( NULL, 0, "%d", x );
  assert( length >= 0 );
  char* buf = new char[length + 1];
  snprintf( buf, length + 1, "%d", x );
  std::string str( buf );
  delete[] buf;
  return str;
}

int main(int argc, char *argv[])
{
    // did I get argument?

    if (argc > 0)
    {
       std::string message = std::string("Primljeni su neki argumenti...Broj argumenata: ") + to_string(argc);
       std::cout << message << std::endl;
        for (int index = 0; index < argc; ++index)
        {
            std::cout << argv[index] << std::endl;

        }
        std::this_thread::sleep_for (std::chrono::seconds(5));
    }

    return 1;
}
