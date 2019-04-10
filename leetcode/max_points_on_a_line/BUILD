
cc_library(
    name = "solution",
    hdrs = [ "solution.h",],
    srcs = [ "solution.cc",],
    deps = [
        "//leetcode/common:point",
    ],
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
        "//leetcode/common:point",
        "@gtest//:main",
    ],
)
