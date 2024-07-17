# 编程竞赛脚手架 (VIPL夏令营)

本仓库包含VIPL夏令营机考的脚手架。具体来说，它包括用于测试示例的模拟环境以及测试者用Python或Cpp提交题解的真实脚手架。请选择你喜爱的语言并遵循以下说明。

## Python 脚手架

Python脚手架就像使用Python编写脚本。你只需安装Python3并将其添加到你的PATH中。

1. 安装Python3（版本无关紧要）。
2. 将`python`添加到你的PATH中。
3. 创建虚拟环境，例如`python -m venv venv`。
4. 激活虚拟环境，例如`source venv/bin/activate`。
5. 进入`python/test`目录。
6. 粘贴测试用例并开始编写代码。

## C++ 脚手架

C++脚手架稍微更复杂。这个脚手架假设你已经安装过[Visual Studio Build Tools](https://visualstudio.microsoft.com/zh-hans/downloads/?q=build+tools)和[CMake](https://cmake.org/)。如果没有，请先安装它们。脚手架提供有构建脚本(`build.ps1`)，以及Visual Studio Code的任务和启动配置（`.vscode`中的json文件）。

1. 确保你已安装Visual Studio Build Tools和CMake。
2. 在`cplusplus/test/testee`目录中粘贴测试用例。
3. 进入`cplusplus/test`目录。
4. 运行`cmake -B build -S .`以生成构建文件。
5. 开始编码（如需调试，在编辑器右上角点击`Debug`按钮）。

## 模拟环境

每个脚手架都包含用于测试示例的模拟环境。模拟环境与真实的测试环境目录结构相同。请将其作为参考使用。
