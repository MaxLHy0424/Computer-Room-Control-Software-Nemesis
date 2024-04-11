![logo](logo.png)\
**Computer Room Control Software Nemesis: 轻松破解机房控制.**\
*©️ 2024 MaxLHy0424, 保留所有权利.*

# 使用方式

> 适用于 v4.5.1 及以上版本.

**CRCSN 涉及到修改注册表等操作, 使用时建议关闭防病毒软件. 如果 CRCSN 被报为恶意软件, 请添加排除项.**

## 1 破解

以管理员权限运行软件, 输入`1`, 回车, 输入`1`, 回车, 输入`Y`, 回车, 开始破解.

不起作用的话, 请检查是否有保护进程, 或在上一步所在的页面依次输入`1 2 0 Y`, 重复破解.

## 2 恢复

以管理员权限运行软件, 输入`2`, 回车, 输入`Y`, 回车, 开始恢复.

## 3 编辑配置

使用 GBK 编码打开软件目录下的`dat.cfg`, 根据说明修改配置.

接下来运行软件查看效果. 如果此时软件已经运行, 需要在主菜单输入`0`重载配置.

> 配置存在错误, 软件也不会进行提示. 如果配置不合预期, 请检查是否正确配置.

接下来是配置项的详细介绍.

### 3-1 背景和文字的颜色

设置控制台背景和文字的颜色.

如果你经常使用命令提示符, 应该知道`Color`命令. 这个选项在软件内部的实现方式, 就是在所填配置的前面加上`Color `, 然后去执行来实现的.

举个例子, 配置选项为`F9`, 就相当于在命令提示符中执行`Color F9`, 就是在亮白色背景上显示蓝色文字.

具体配置详见`Color`命令帮助.

### 3-2 主菜单文本

设置在主菜单显示的额外文本.

选项为`NULL` (默认值) 时, 不会显示额外文本, 否则将会显示所配置的文本. 文本将会显示在导航栏和选项之间.

此项请根据使用情况自行配置. 此处就抛砖引玉, 供参考:
````Markdown
1. 欢迎使用 CRCSN!
2. 夏莱的老师, 是来破解控制, 启动什亭之匣吗?
3. 勇者, 愿 "光" 与你同在!
````

### 3-3 应用注册表劫持

设置是否在破解时应用注册表劫持.

选项为`true` (默认值) 时, 破解将会修改注册表. 其他选项为禁用.

建议在因为注册表劫持导致一些软件无法打开时修改此项.

# 注意事项

1. 软件优先适配 Windows 8/8.1/10/11, Windows 7 及以下的 Windows 操作系统的适配可能会延后.
2. 请勿在执行操作时关闭窗口, 否则可能影响效果.
3. 请在遵守 MIT 许可证的情况下使用软件.

# 常见问题

## 1 GitHub 在中国大陆地区难以访问, 获取软件非常不方便.

目前已经在网盘上传最新版本, 可以从[这里](https://www.123pan.com/s/HmR8jv-tZLN.html)下载.

## 2 运行软件时控制台总是输出 "命令提示符已被管理员禁用", 无法正常使用.

可以试试运行注册表编辑器, 定位到`HKEY_CURRENT_USER\Software\Policies\Microsoft\Windows\System`下, 看看有没有一个叫`DisableCMD`的`DWORD`值, 有的话就删掉, 再运行试试.

## 3 软件无法在 32 位 Windows 系统中使用.

可以克隆软件仓库, 使用 MinGW 编译源代码文件. 编译命令如下:
````Batch
g++ main.cpp -Ofast -Os -o main.exe -Wextra -lm -static -fexec-charset=GBK -std=c++11
````
编译完毕后, 运行生成的`main.exe`, 正常使用即可.

## 4 破解后一些软件运行时提示 "找不到文件" 之类的错误, 而运行的软件并没有损坏.

在不影响软件正常运行的情况下, 可以试试给软件文件修改一个名称, 再运行试试. 或者打开注册表编辑器, 定位到`HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\`, 找到和要运行的软件的文件名称相同的项, 删除即可.

## 5 软件无法正常显示`dat.cfg`中的中文字符.

请检查`dat.cfg`的文字编码, 确保为 GBK 编码. 可以使用 Windows Notepad 打 (即支持 GBK 编码的文本编辑器) 开`dat.cfg`, 另存为, 选择 GBK 编码保存, 再替换掉原来的`dat.cfg`.

# 鸣谢

所有的测试人员, 所有提出建议的网友, 以及我的老师.