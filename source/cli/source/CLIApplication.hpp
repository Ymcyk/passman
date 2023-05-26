#pragma once

#include <memory>

namespace passman {

	class CLIApplication final {
	private:
		struct Pimpl;

	public:
		CLIApplication();
		~CLIApplication();

		void setup() const;
		int parse(int argc, char** argv) const;

	private:
		std::unique_ptr<Pimpl> _pimpl;
	};

}