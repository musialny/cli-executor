import cli_executor.cli_preprocessor;
import cli_executor.cli_example.commands;

using cli_executor::cli_preprocessor::CliCommandExecutor;
using cli_executor::cli_preprocessor::CliActionsContainer;
using cli_executor::cli_example::commands::Version;

int main(const int argc, const char* argv[]) {
    const CliCommandExecutor commandExecutor {
            {
                .amountOfArguments = argc - 1,
                .arguments = argv + 1
            }
    };

    return commandExecutor(CliActionsContainer {
        {
            Version
        }
    });
}
