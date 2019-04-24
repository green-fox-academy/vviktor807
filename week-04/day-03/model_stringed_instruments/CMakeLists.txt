cmake_minimum_required(VERSION 3.13)
project(model_stringed_instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(model_stringed_instruments main.cpp Instrument.cpp Instrument.h StringedInstrument.cpp StringedInstrument.h Eguitar.cpp Eguitar.h Bguitar.cpp Bguitar.h Violin.cpp Violin.h)