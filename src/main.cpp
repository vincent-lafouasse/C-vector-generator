#include <fstream>
#include <iostream>

#define TYPE "int"

std::filesystem::path path(const std::string& filename, const std::string& type)
{
    const std::filesystem::path out_dir = "./vector_src";
    const std::string filename_full = type + "_" + filename;

    std::filesystem::path out = out_dir;
    out.append(filename_full);
    return out;
}

int main()
{
    std::filesystem::path header = path("vector.h", TYPE);

    std::ofstream myfile;
    myfile.open(header);
    myfile << "#include <stdio.h>\n";
    myfile.close();
}
