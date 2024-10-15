module;

#include <iostream>

export module cli_executor.cli_example.commands.Version;

#ifndef CLI_EXECUTOR_VERSION
#define CLI_EXECUTOR_VERSION "VERSION WAS NOT SPECIFIED"

#endif

import cli_executor.cli_preprocessor;

using cli_executor::cli_preprocessor::ExecutorArguments;
using cli_executor::cli_preprocessor::CliAction;

namespace cli_executor::cli_example::commands {
    export const CliAction Version {
        .command = "",
        .arguments = {
            {
                .argument = "--version",
                .aliases = {"-v", "-V"}
            }
        },
        .executor = [](const ExecutorArguments& arguments) {
            std::cout << "Version: " << CLI_EXECUTOR_VERSION << std::endl;
            return 0;
        }
    };
}
