# Coding Contest Scaffolding (VIPL Summer Camp)

This repository contains the scaffolding for the coding contest. Specifically, it includes a mock environment for testing examples and the true scaffolding for test cases where participants submit their solutions in Python or Cpp. Select your favorate language and follow the instructions below.

## Python Scaffolding

The python scaffolding is just as trivial as scripting with Python. You only need to install Python3 and add it to your PATH.

1. Install Python3 (the version does not matter).
2. Add `python` to your PATH.
3. Create virtual environment, eg. `python -m venv venv`.
4. Activate the virtual environment, eg. `source venv/bin/activate`.
5. Navigate into the `python/test` directory.
6. Paste the test cases and start coding.

## Cpp Scaffolding

The Cpp scaffolding is a bit more complicated. This scaffolding presumes you have installed [Visual Studio Build Tools](https://visualstudio.microsoft.com/zh-hans/downloads/?q=build+tools) and [CMake](https://cmake.org/). If you do not have them, please install them first. The scaffolding provides a build script (`build.ps1`), as well as tasks and launch configurations for Visual Studio Code (json files in `.vscode`).

1. Make sure you have installed Visual Studio Build Tools and CMake.
2. Paste the test cases in the `cplusplus/test/testee` directory.
3. Navigate into the `cplusplus/test` directory.
4. Run `cmake -B build -S .` to generate the build files.
5. Start coding (for debugging, click the `Debug` button on the top-right of the editor).

## Mock Environment

Each scaffolding contains a mock environment for testing examples. The mock environment shares the same structure as the real test environment. Use them as a reference.
