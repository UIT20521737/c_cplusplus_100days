CXX = g++
CXX_FLAGS = -Wall -g -std=c++17

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	@echo $@ > .last_run
all: main


run:
	@file=$$(cat .last_run 2>/dev/null); \
	if [ -z "$$file" ]; then \
		echo "No executable found. Run 'make <filename> first"; \
	else \
		./$$file; \
	fi


clean:
	@targets=$$(ls *.cpp 2>/dev/null | sed 's/\.cpp//'); \
	if [ ! -z "$$targets" ]; then \
		echo "Cleaning: $$targets"; \
		rm -f $$targets; \
	fi; \
	rm -f .last_run
	@echo "Clean done!"

.PHONY: run clean