# LVGL Windows CodeBlocks 模拟器

这是一个基于 **LVGL 9.0.0** 稳定版本的 Windows CodeBlocks 模拟器项目，专门为学习 LVGL 嵌入式 GUI 库和正点原子教程而设计。

## ? 项目来源

本项目基于以下官方仓库克隆而来：

- **LVGL Windows CodeBlocks 端口**：[https://github.com/lvgl/lv_port_win_codeblocks](https://github.com/lvgl/lv_port_win_codeblocks)
- **LVGL 核心库**：[https://github.com/lvgl/lvgl/tree/c903c1dc0fdfae20bce69d0a48894bdebae278ff](https://github.com/lvgl/lvgl/tree/c903c1dc0fdfae20bce69d0a48894bdebae278ff)

**版本信息：**
- LVGL 核心库版本：9.0.0 (稳定版本)
- 端口项目：lv_port_win_codeblocks-9.0.0
- 适用平台：Windows + CodeBlocks

## ? 项目简介

本项目是 LVGL 官方 Windows CodeBlocks 端口的克隆版本，使用 LVGL 9.0.0 稳定版本，具有以下特点：

- ? **稳定可靠**：基于 LVGL 9.0.0 稳定版本，兼容性好
- ? **易于学习**：适合初学者学习 LVGL 基础概念和 API
- ? **完整示例**：包含丰富的演示程序和示例代码
- ? **中文友好**：提供中文说明文档和学习指南
- ? **正点原子教程兼容**：与正点原子 LVGL 教程完美配合

## ?? 系统要求

- **操作系统**：Windows 10/11
- **IDE**：CodeBlocks 20.03 或更新版本（推荐使用包含 MinGW 的版本）
- **编译器**：MinGW-w64
- **Git**：用于克隆项目

## ? 安装步骤

### 1. 安装必要软件

1. **安装 Git**
   - 下载地址：[Git for Windows](https://git-scm.com/downloads)
   - 安装时选择默认选项即可

2. **安装 CodeBlocks**
   - 下载地址：[CodeBlocks Downloads](https://www.codeblocks.org/downloads/)
   - **强烈推荐**下载包含 MinGW 的版本，避免单独配置编译器的麻烦
   - 推荐版本：`codeblocks-20.03-mingw-setup.exe`

### 2. 克隆项目

打开命令提示符（Win + R → cmd）或 PowerShell（Win + R → powershell），执行以下命令：

```bash
# 克隆本项目仓库
git clone https://github.com/lai-nick/lv_port_win_codeblocks-9.0.0.git

# 进入项目目录
cd lv_port_win_codeblocks-9.0.0
```

**或者直接下载：**
- 点击本页面右上角的绿色 "Code" 按钮
- 选择 "Download ZIP" 下载压缩包
- 解压到本地目录

### 3. 打开项目

1. 启动 **CodeBlocks**
2. 选择 **File → Open an existing project**
3. 导航到项目文件夹，选择 `lvgl.cbp` 文件
4. 点击 **Open**

**注意：** 如果 CodeBlocks 版本 ≤ 20.03，可能需要升级 MinGW 编译器。

### 4. 编译运行

1. 点击工具栏的 **Build and Run** 按钮（绿色三角形）
2. 或按快捷键 **F9**
3. 如果编译成功，将看到一个 800x480 的窗口显示 LVGL 界面

## ? 项目结构说明

```
lv_port_win_codeblocks-9.0.0/
├── main.c              # 主程序入口，包含 LVGL 初始化和主循环
├── my_gui.c            # 自定义 GUI 代码（您的学习起点）
├── my_gui.h            # GUI 头文件
├── lv_conf.h           # LVGL 配置文件（重要！）
├── lvgl/               # LVGL 9.0.0 核心库文件
│   ├── src/            # 源代码
│   ├── demos/          # 官方演示程序
│   └── examples/       # 示例代码
├── bin/                # 编译输出目录
└── obj/                # 编译中间文件
```

## ? 开始学习

### 1. 运行默认程序

编译运行后，您会看到一个简单的 GUI 窗口，显示一个居中的矩形对象。这是 `my_gui.c` 中定义的示例代码。

### 2. 修改 GUI 代码

打开 `my_gui.c` 文件，您会看到：

```c
void my_gui(void){
    lv_obj_t* obj1 = lv_obj_create(lv_screen_active());
    lv_obj_set_size(obj1, 100, 200);
    lv_obj_set_align(obj1, LV_ALIGN_CENTER);
}
```

这是您的学习起点！尝试修改这些代码来创建不同的界面。

### 3. 运行官方演示

在 `main.c` 中，您可以取消注释以下行来运行官方演示：

```c
// 取消注释下面这行来运行官方演示
// lv_demo_widgets();
// 注释掉这行
my_gui();
```

可用的演示程序包括：
- `lv_demo_widgets()` - 控件演示
- `lv_demo_music()` - 音乐播放器演示
- `lv_demo_benchmark()` - 性能测试演示
- `lv_demo_stress()` - 压力测试演示

## ? 学习资源

### LVGL 官方资源
- [LVGL 官方文档](https://docs.lvgl.io/)
- [LVGL 在线示例](https://docs.lvgl.io/latest/en/html/examples.html)
- [LVGL GitHub 仓库](https://github.com/lvgl/lvgl)
- [LVGL Windows CodeBlocks 端口](https://github.com/lvgl/lv_port_win_codeblocks)

### 正点原子教程
- 正点原子 LVGL 教程视频
- 正点原子 LVGL 开发指南
- 正点原子 STM32 + LVGL 实战项目

### 常用 LVGL 概念
- **对象（Object）**：LVGL 的基本构建块
- **屏幕（Screen）**：显示界面
- **控件（Widget）**：按钮、标签、滑块等 UI 元素
- **样式（Style）**：定义对象的外观
- **事件（Event）**：处理用户交互

## ? 常见问题

### Q: 编译时出现错误
**A:** 确保使用包含 MinGW 的 CodeBlocks 版本，避免缺少头文件的问题。

### Q: 程序运行后窗口立即关闭
**A:** 检查 `main.c` 中的主循环是否正确，确保 `lv_task_handler()` 被定期调用。

### Q: 如何添加新的控件
**A:** 在 `my_gui.c` 中使用相应的 LVGL API 创建控件，例如：
```c
lv_obj_t* btn = lv_btn_create(lv_screen_active());
lv_obj_t* label = lv_label_create(btn);
lv_label_set_text(label, "Hello LVGL!");
```

### Q: 如何修改窗口大小
**A:** 在 `main.c` 中修改 `lv_windows_create_display` 的参数：
```c
lv_display_t * display = lv_windows_create_display(title, 1024, 768, 100, FALSE, FALSE);
```

## ? 贡献指南

如果您在使用过程中发现问题或有改进建议，欢迎：

1. 提交 Issue 描述问题
2. 提交 Pull Request 贡献代码
3. 分享学习心得和经验

## ? 许可证

本项目基于 LVGL 的 MIT 许可证，详见 [LICENSE](LICENSE) 文件。

## ? 致谢

感谢 LVGL 开发团队提供的优秀开源 GUI 库，以及正点原子团队提供的优质教程资源。

---

**祝您学习愉快！** ?

如有问题，请查看 [LVGL 官方论坛](https://forum.lvgl.io/) 或相关教程资源。

