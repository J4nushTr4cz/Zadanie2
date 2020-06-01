bin_PROGRAMS = licz
licz_SOURCES = licz.cpp

noinst_LIBRARIES = libPole.a
lib_LTLIBRARIES = libPoleObj.la

libPole_a_SOURCES = libPole.h Pole.cpp
libPoleObj_la_SOURCES = libPoleObj.h PoleObj.cpp

licz_LDADD = libPole.a libPoleObj.la
