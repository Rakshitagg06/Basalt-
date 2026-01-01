
#pragma once
#include <string>

enum class FileExtension {
    basalt, 
    llvm, 
    assembly,
    object
};

[[nodiscard]] FileExtension extract_file_extension(
    const std::string& filename
);