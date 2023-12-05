# CMakeList.txt: Projekt CMake pro CMakeProject3, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (CMakeProject3 "CMakeProject3.cpp" "CMakeProject3.h" "calculatorFuncs.h" "calculatorFuncs.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: V případě potřeby přidejte testy a cíle instalace.
