make clean;
make;
./unload_booga;
sleep .3;
./load_booga;
./run_tests.sh;
