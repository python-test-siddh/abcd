from distutils.core import setup, Extension
MOD = "moku"
setup(name = MOD, ext_modules = [Extension(MOD,sources=['moku.c'])],
description = "My C Extension Module")
