#include "CLIApplication.hpp"

#include "CLI11/CLI11.hpp"

using namespace passman;

struct CLIApplication::Pimpl {
	void setup();
	int parse(int argc, char** argv);

	CLI::App app{ "Simple password manager" };
};


CLIApplication::CLIApplication() :
	_pimpl{std::make_unique<CLIApplication::Pimpl>()} {

}

CLIApplication::~CLIApplication() = default;

void CLIApplication::setup() const {
	_pimpl->setup();
}

int CLIApplication::parse(int argc, char** argv) const {
	return _pimpl->parse(argc, argv);
}

void CLIApplication::Pimpl::setup() {
	std::string filename = "default";
	app.add_option("-f,--file", filename, "A help string");
}

int CLIApplication::Pimpl::parse(int argc, char** argv) {
	CLI11_PARSE(app, argc, argv);
}
