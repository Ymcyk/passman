#pragma once

#include <memory>

namespace passman {

	class CLIApplication final {
	private:
		struct Pimpl;

	public:
		CLIApplication();
		~CLIApplication();

		void setup();
		int parse(int argc, char** argv);

	private:
		std::unique_ptr<Pimpl> _pimpl;
	};

}