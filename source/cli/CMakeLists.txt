set(SOURCES
	"source/main.cpp"
	"source/CLIApplication.hpp" "source/CLIApplication.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME}
	PRIVATE
		CLI11)
