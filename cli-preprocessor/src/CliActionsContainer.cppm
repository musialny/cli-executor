module;

#include <vector>
#include <string_view>
#include <map>
#include <functional>

export module cli_executor.cli_preprocessor.CliActionsContainer;

import cli_executor.cli_preprocessor.CliCommandParameters;

namespace cli_executor::cli_preprocessor {
    export using ExecutorArguments = std::map<std::string_view, CommandParameters>;
    export using CliActionExecutor = std::function<int(const ExecutorArguments&)>;

    export struct CliActionArgument {
        std::string_view argument;
        std::vector<std::string_view> aliases;
    };

    export struct CliAction {
        std::string_view command;
        std::vector<CliActionArgument> arguments;
        CliActionExecutor executor;
    };

    export class CliActionsContainer {
        std::vector<CliAction> actions;
    public:
        explicit CliActionsContainer(std::vector<CliAction>&& actions) : actions(std::move(actions)) {}

        const std::vector<CliAction>& getActions() const {
            return actions;
        }
    };
}
