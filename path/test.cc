#include <llvm/ADT/SmallVector.h>
#include <llvm/Support/Path.h>
#include <llvm/Support/raw_ostream.h>

int main(void)
{
    llvm::StringRef full_path("/usr/include/stdio.h");
    llvm::SmallString<128> base_path(full_path);

    llvm::sys::path::remove_filename(base_path);

    llvm::outs() << "Path name for '" << full_path << "' => '"
                 << base_path.c_str() << "'\n";
    return 0;
}
