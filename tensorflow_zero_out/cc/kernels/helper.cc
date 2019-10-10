#include "tensorflow_zero_out/cc/kernels/helper.h"
#include <string>
#include "absl/strings/string_view.h"

bool IsEmpty(const absl::string_view s) {
  return s.empty();
}
