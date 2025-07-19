# SPETCT-Image-Processing
This is to record a project led by Yong.C, and operated by Yuwei S., Zelin L.,and so on.

这是一个基于 **Qt + C++** 开发的医学影像处理工具，集成了深度学习模型进行图像 **识别、分割和配准** 功能，支持 **ONNX Runtime** 推理。

## 🧠 功能概览

- 支持DICOM等多种医学影像格式加载
- 图像分割与配准：支持肺部 SPECT/CT 非刚性融合
- 使用 ONNX Runtime 推理深度学习模型，并插入Qt6 所构建的GUI应用程序中
- 简洁易用的界面，快速强大稳定的运行、简洁易维护可迁移的代码和数据系统 

## 🛠 技术栈

- Qt 6 
- C++
- OpenCV / VTK / DCMTK /ITK
- Pytorch (transplanted thru ONNX Runtime)
- CMake
