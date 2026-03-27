all:
	mkdir -p build
	cd build && cmake .. && ${MAKE}
test: all
	cd build && ctest --output-on-failure
clean:
	rm -rf build