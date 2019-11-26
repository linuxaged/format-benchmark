#include <benchmark/benchmark.h>
#include <fmt/format.h>
#include <Corrade/Utility/FormatStl.h>

void fmt_fmt() {
	for(int i=0; i<10; ++i) {
		auto str = fmt::format("index{}", i);
	}
}

void fmt_corrade() {
	for(int i=0; i<10; ++i) {
		auto str = Corrade::Utility::formatString("index{}", i);	
	}
}

static void BM_fmt(benchmark::State& state) {
  for (auto _ : state) {
	  fmt_fmt();
  }
}

static void BM_corrade(benchmark::State& state) {
	for(auto _ : state) {
		fmt_corrade();
	}
}

BENCHMARK(BM_fmt);
BENCHMARK(BM_corrade);

BENCHMARK_MAIN();
