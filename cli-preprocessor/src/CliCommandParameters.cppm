module;

#include <vector>
#include <string_view>

export module cli_executor.cli_preprocessor.CliCommandParameters;

namespace cli_executor::cli_preprocessor {
    export using CommandParameters = std::vector<std::string_view>;
}
