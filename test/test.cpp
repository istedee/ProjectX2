#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {

  // Create a FuzzedDataProvider instance with the input data
  FuzzedDataProvider fuzzed_data(data, size);

  // Define and mutate input variables
  float a = fuzzed_data.ConsumeIntegral<float>();
  float b = fuzzed_data.ConsumeIntegral<float>();
  std::string c = fuzzed_data.ConsumeRandomLengthString();

  // Call the target function with the mutated inputs
  calculator(a, c[0], b);
}
