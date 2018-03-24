#include "spdlog/spdlog.h"

#include <iostream>
#include <memory>

namespace spd = spdlog;
int main(int, char *[])
{
    try
    {
        // Console logger with color
        auto console = spd::stdout_color_mt("console");
        console->info("Welcome to spdlog!");
    }
    catch (const spd::spdlog_ex &ex)
    {
        std::cout << "Log init failed: " << ex.what() << std::endl;
        return 1;
    }
}