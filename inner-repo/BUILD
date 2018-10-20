package(default_visibility = ["//visibility:public"])

cc_library(
    name = "read_data",
    srcs = ["read_data.cc"],
    hdrs = ["read_data.h"],
    data = ["data.txt"],
)

cc_binary(
    name = "sample_read_data",
    srcs = ["sample_read_data.cc"],
    deps = [":read_data"],
)
