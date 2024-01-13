#include <fstream>
#include <iostream>

const std::string type = "int";

int main()
{
    std::ofstream myfile;
    myfile.open("./vector_src/main.c");
    myfile << "#include <stdio.h>\n";
    myfile << "\n";
    myfile << "int main(void)\n";
    myfile << "{\n";
    myfile << "\tprintf(\"This will be a %s vector\\n\", \"" << type<< "\");\n";
    myfile << "}\n";
    myfile.close();
}
