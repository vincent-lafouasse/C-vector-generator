#include <fstream>
#include <iostream>

const std::string type = "int";

std::string quoted(const std::string& s)
{
    return "\"" + s + "\"";
}

int main()
{
    std::ofstream myfile;
    myfile.open("./vector_src/main.c");
    myfile << "#include <stdio.h>\n";
    myfile << "\n";
    myfile << "int main(void)\n";
    myfile << "{\n";
    myfile << "\tprintf(" << quoted("This will be a %s vector\\n") << ", "
           << quoted(type) << ");\n";
    myfile << "}\n";
    myfile.close();
}
