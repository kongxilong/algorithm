
cc_library(
    name = "solution",
    hdrs = [ "solution.h",],
    srcs = [ "solution.cc",],
    visibility = ["//visibility:public"],
)


cc_test(
    name = "solution_test",
    size = "small",
    srcs = [
        "solution_test.cc",
    ],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        ":solution",
        "@gtest//:main",
    ],
)
