licenses(["notice"])  # Apache 2.0

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "helper",
    srcs = ["cc/kernels/helper.cc"],
    hdrs = ["cc/kernels/helper.h"],
    deps = [
        "@com_google_sentencepiece//src:sentencepiece_processor",
         "@com_google_absl//absl/strings",
       # Without the below I get Error 1:
        "@com_google_absl//absl/container:inlined_vector",
        "@com_google_absl//absl/types:optional",

    ],
)

cc_binary(
    name = 'python/ops/_zero_out_ops.so',
    srcs = [
        "cc/kernels/zero_out_kernels.cc",
        "cc/ops/zero_out_ops.cc",
    ],
    linkshared = 1,
    deps = [
        ":helper",
        "@local_config_tf//:libtensorflow_framework",
        "@local_config_tf//:tf_header_lib",
    ],
    copts = ["-pthread", "-std=c++11", "-D_GLIBCXX_USE_CXX11_ABI=0"]
)

py_library(
    name = "zero_out_ops_py",
    srcs = ([
        "python/ops/zero_out_ops.py",
    ]),
    data = [
        ":python/ops/_zero_out_ops.so"
    ],
    srcs_version = "PY2AND3",
)

py_test(
    name = "zero_out_ops_py_test",
    srcs = [
        "python/ops/zero_out_ops_test.py"
    ],
    main = "python/ops/zero_out_ops_test.py",
    deps = [
        ":zero_out_ops_py",
    ],
    srcs_version = "PY2AND3",
)

py_library(
    name = "zero_out_py",
    srcs = ([
        "__init__.py",
        "python/__init__.py",
        "python/ops/__init__.py",
    ]),
    deps = [
        ":zero_out_ops_py"
    ],
    srcs_version = "PY2AND3",
)
