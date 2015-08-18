import os, string
EnsureSConsVersion( 2, 3, 0 )
libs = [
    "dl"
]
env = Environment(ENV = os.environ
                  , CC = "ccache gcc-5"
                  , CXX = "ccache g++-5"
                  , LINKFLAGS=['-v']
              )
env.Library(
    target= "tracebolt"
    ,source = 'test.c'
    ,CPPPATH = "."
    ,CPPFLAGS=['-fPIC']
    ,LIBS=["lttng-ust" ]
    ,LINKFLAGS=['-v']
    ,LIBPATH = ".")

env.SharedLibrary(
    target= "sharedbolt"
    ,source = 'libtest.cc'
    ,CPPPATH = "."
    ,CPPFLAGS=['-fPIC']
    ,LIBS=["tracebolt.a", "dl", "lttng-ust" ]
    ,LINKFLAGS=['-v']
    ,LIBPATH = ".")


env.Program(
    source = 'main.cc'
    ,CPPPATH = "."
    ,CPPFLAGS=['-fPIC']
    ,LIBS=["sharedbolt",  "dl", 'lttng-ust']
    ,LIBPATH = ".")
