#include <iostream>

#include "CLIApplication.hpp"

int main(int argc, char** argv) {
	passman::CLIApplication app;

	app.setup();
	return app.parse(argc, argv);
}
