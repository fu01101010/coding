######
coding
######

0: about this project
=====================

me solving coderun, codeforces, codewars and leetcode problems to 'git gud'.

1.1: project layout
===================

- :code:`root`: The :code:`CMakeLists.txt` and :code:`.command` files are located directly in the root folder.

  - :code:`/bin`: contains the :code:`solution` executable file.

  - :code:`/build`: contains the :code:`cmake` generated build files.

  - :code:`/source`: contains the :code:`solution.cpp` source file.

2: cmake
========

.. code-block::

	cmake_minimum_required(VERSION 3.28)
	project("coding")

	set (CMAKE_CXX_STANDARD 11)

	add_executable(solution 
	  "source/solution.cpp"
	)

	install(TARGETS solution DESTINATION "${PROJECT_SOURCE_DIR}/bin/")

3: build
========

- :code:`solution.command` contains the following:

  - :code:`~/projectRoot rm -rf build/` and :code:`~/projectRoot mkdir build` basically clears the build directory.

  - :code:`cd build`: enters the directory.

  - :code:`cmake ..`: builds the :code:`CMakeLists.txt` located in the parent directory.

  - :code:`make install`: creates the :code:`solution` executable and puts it in the :code:`~/projectRoot/bin` directory.

  - :code:`cd ../bin`: enters the /bin directory.

  - :code:`./solution`: launches the executable.

4: problems
===========

- :code:`001_triangle.cpp`:: :code:`coderun` : :code:`easy` : :code:`geometry` :

  - Даны три натуральных числа. Возможно ли построить треугольник с такими сторонами? Если это возможно, выведите строку YES, иначе выведите строку NO. Треугольник — это три точки, не лежащие на одной прямой.

  - :code:`формат ввода`	: Вводятся три натуральных числа.

  - :code:`формат вывода`	: Выведите ответ на задачу.

  - :code:`ограничения`		: 1 с, 64 мб.

  - :code:`пример 1`		: 3 4 5 -> YES.

  - :code:`пример 2`		: 3 5 4 -> YES.

  - :code:`пример 3`		: 4 5 3 -> YES.
