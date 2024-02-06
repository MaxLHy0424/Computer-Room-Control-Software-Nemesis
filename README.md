# 简介

您是否因为无法脱离机房的控制, 因此无法欢快使用机房电脑, 而感到烦恼?

这个软件可以帮到您!

机房控制软件克星 (Computer Room Control Software Nemesis), 可以通过简单的操作让您快速脱离控制!

# 使用方式

> 最后更新于 2024/02/06
> 
> 适用于 CRCSN v3.0.0 (Build 30170) 及以上版本

建议先关闭操作系统上已安装的所有反病毒软件, 以免影响 CRCSN 执行操作.

## 破解

以 Administrator 权限运行软件, 依次输入 `1 1 Y`, 开始破解.

然后等个几十秒关闭软件窗口即可.

## 恢复

以 Administrator 权限运行软件, 依次输入 `2 Y`, 开始恢复.

接着根据提示, 手动打开列出的控制软件的安装目录, 分别找到每个可执行文件, 分别以 Administrator 权限运行.

接着关闭软件窗口即可.

# 注意事项

软件仅对 64 位的 Windows 8 / 8.1 / 10 / 11 提供适配支持, Windows 7 及以下的 Windows 操作系统可使用软件, 但不会专门适配.

软件按照 MIT 协议开源, 请在遵守 MIT 协议的情况下使用.

© Copyright 2023-2024 MaxLHy0424, All Rights Reserved.

# 常见问题

## 1. GitHub 在中国大陆地区难以访问, 获取软件非常不方便

目前已经在国内云盘上传最新版本, 可以从[这里](https://www.123pan.com/s/HmR8jv-tZLN.html "点击跳转")下载.

## 2. 运行软件时控制台界面总是输出 "命令提示符已被管理员禁用" 之类的提示, 无法正常使用

这说明 CMD 已被禁用. 可以试试打开注册表编辑器, 定位到 `HKEY_CURRENT_USER\Software\Policies\Microsoft\Windows\System` 下, 看看有没有一个叫 `DisableCMD` 的 DWORD 值, 有的话就删掉. 再次打开软件试试.

## 3. 软件无法在 32 位 Windows 系统中使用

软件暂无计划发布 32 位版本. 可以先下载软件源代码, 使用 MinGW-w32 编译源代码文件, 正常使用即可.

## 4. 破解后一些软件打开提示 "找不到文件" 之类的错误, 并且打开的软件本身并没有损坏

CRCSN v3.0 添加了通过注册表劫持控制软件, 间接达到禁止启动控制软件的效果, 但弊端是和控制软件的文件名一样的软件文件也无法打开了. 在不影响软件正常运行的情况下, 可以试试给软件文件修改一个名称, 再打开试试. 实在不行就打开注册表编辑器, 定位到 `HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\` 下, 找到和要运行的软件的文件名称相同的项, 删除项即可.

# 公告

CRCSN v3.0 功能更新如下:
1. 全新的映像劫持功能
2. 更加全面的进程处理规则, 更加全面的服务处理规则
3. 统一的返回操作
4. 方便的 "受限模式"
5. 更深度的优化

# 鸣谢

所有的测试人员, 所有提出建议的网友, 以及我的老师.