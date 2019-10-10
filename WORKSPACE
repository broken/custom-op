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

tf_configure(name = "local_config_tf")

cuda_configure(name = "local_config_cuda")
