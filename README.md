# Install Dependencies

	vcpkg install benchmark
	vcpkg install corrade
	vcpkg install fmt


# Result

	11/28/19 12:49:28
	Running C:\workspace\format-benchmark\build\Release\main.exe
	Run on (6 X 2904 MHz CPU s)
	CPU Caches:
	  L1 Data 32K (x6)
	  L1 Instruction 32K (x6)
	  L2 Unified 262K (x6)
	  L3 Unified 9437K (x1)
	-----------------------------------------------------
	Benchmark           Time             CPU   Iterations
	-----------------------------------------------------
	BM_fmt            845 ns          785 ns       896000
	BM_corrade       2478 ns         2455 ns       280000
	BM_tochars        247 ns          241 ns      2986667