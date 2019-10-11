load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("//tf:tf_configure.bzl", "tf_configure")
load("//gpu:cuda_configure.bzl", "cuda_configure")

http_archive(
    name = "com_google_absl",
    sha256 = "0b62fc2d00c2b2bc3761a892a17ac3b8af3578bd28535d90b4c914b0a7460d4e",
    strip_prefix = "abseil-cpp-20190808",
    urls = [
        "https://github.com/abseil/abseil-cpp/archive/20190808.zip",
    ],
)

http_archive(
    name = "io_bazel_rules_closure",
    sha256 = "e0a111000aeed2051f29fcc7a3f83be3ad8c6c93c186e64beb1ad313f0c7f9f9",
    strip_prefix = "rules_closure-cf1e44edb908e9616030cc83d085989b8e6cd6df",
    urls = [
        "http://mirror.tensorflow.org/github.com/bazelbuild/rules_closure/archive/cf1e44edb908e9616030cc83d085989b8e6cd6df.tar.gz",
        "https://github.com/bazelbuild/rules_closure/archive/cf1e44edb908e9616030cc83d085989b8e6cd6df.tar.gz",  # 2019-04-04
    ],
)

PROTOBUF_URLS = [
  "http://mirror.tensorflow.org/github.com/protocolbuffers/protobuf/archive/v3.6.1.2.tar.gz",
  "https://github.com/protocolbuffers/protobuf/archive/v3.6.1.2.tar.gz",
]
PROTOBUF_SHA256 = "2244b0308846bb22b4ff0bcc675e99290ff9f1115553ae9671eba1030af31bc0"
PROTOBUF_STRIP_PREFIX = "protobuf-3.6.1.2"

http_archive(
  name = "com_google_protobuf",
  sha256 = PROTOBUF_SHA256,
  strip_prefix = PROTOBUF_STRIP_PREFIX,
  urls = PROTOBUF_URLS,
)

http_archive(
  name = "com_google_protobuf_cc",
  sha256 = PROTOBUF_SHA256,
  strip_prefix = PROTOBUF_STRIP_PREFIX,
  urls = PROTOBUF_URLS,
)

http_archive(
    name = "com_google_googletest",
    sha256 = "ff7a82736e158c077e76188232eac77913a15dac0b22508c390ab3f88e6d6d86",
    strip_prefix = "googletest-b6cd405286ed8635ece71c72f118e659f4ade3fb",
    urls = [
        "http://mirror.tensorflow.org/github.com/google/googletest/archive/b6cd405286ed8635ece71c72f118e659f4ade3fb.zip",
        "https://github.com/google/googletest/archive/b6cd405286ed8635ece71c72f118e659f4ade3fb.zip",
    ],
)

http_archive(
    name = "com_google_sentencepiece",
    strip_prefix = "sentencepiece-1.0.0",
    sha256 = "c05901f30a1d0ed64cbcf40eba08e48894e1b0e985777217b7c9036cac631346",
    urls = [
        "https://github.com/google/sentencepiece/archive/1.0.0.zip"
    ],
)

# required by glog
http_archive(
        name = "com_github_gflags_gflags",
        sha256 = "ae27cdbcd6a2f935baa78e4f21f675649271634c092b1be01469440495609d0e",
        strip_prefix = "gflags-2.2.1",
        urls = [
            "http://mirror.tensorflow.org/github.com/gflags/gflags/archive/v2.2.1.tar.gz",
            "https://github.com/gflags/gflags/archive/v2.2.1.tar.gz",
        ],
)

http_archive(
    name = "com_google_glog",
    sha256 = "1ee310e5d0a19b9d584a855000434bb724aa744745d5b8ab1855c85bff8a8e21",
    strip_prefix = "glog-028d37889a1e80e8a07da1b8945ac706259e5fd8",
    urls = [
        "https://mirror.bazel.build/github.com/google/glog/archive/028d37889a1e80e8a07da1b8945ac706259e5fd8.tar.gz",
        "https://github.com/google/glog/archive/028d37889a1e80e8a07da1b8945ac706259e5fd8.tar.gz",
    ],
)
http_archive(
    name = "org_tensorflow",
    strip_prefix = "tensorflow-2.0.0",
    sha256 = "4c13e99a2e5fdddc491e003304141f9d9060e11584499061b1b4224e500dc49a",
    urls = [
        "https://github.com/tensorflow/tensorflow/archive/v2.0.0.zip"
    ],
)

load("@org_tensorflow//tensorflow:workspace.bzl", "tf_workspace")

tf_workspace(tf_repo_name="@org_tensorflow")



tf_configure(name = "local_config_tf")

cuda_configure(name = "local_config_cuda")
