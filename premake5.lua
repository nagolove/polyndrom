workspace "ray_example"
    configurations { "Debug", "Release" }
    includedirs { 
    }
    buildoptions { 
        "-ggdb3",
        "-fPIC",
        "-Wall",
        "-Wno-strict-aliasing",
    }
    links { 
        "m",
    }
    libdirs { 
        "/home/nagolove/projects/raylib/raylib",
    }
    language "C"
    kind "ConsoleApp"
    targetprefix ""
    targetdir "."

    project "polyndrome"
        buildoptions {
            "-Werror",
        }
        files { 
            "*.h", 
            "*.c",
        }

    filter "configurations:Debug"
    defines { "DEBUG" }
    symbols "On"

    filter "configurations:Release"
    defines { "NDEBUG" }
    optimize "On"
