#include "tensorflow_zero_out/cc/kernels/helper.h"
#include <string>
#include "absl/strings/string_view.h"
#include "src/sentencepiece_processor.h"


bool IsEmpty(const absl::string_view s) {
  sentencepiece::SentencePieceProcessor p;
  p.SetEncodeExtraOptions("");
  return s.empty();
}
