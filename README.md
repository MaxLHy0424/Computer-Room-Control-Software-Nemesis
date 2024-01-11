# 简介

你是否因为无法脱离机房老师的控制, 而无法欢快使用机房的电脑?

这个软件可以帮到你!

Computer Room Control Software Nemesis (中文名 机房控制软件克星 , 简称 CRCSN), 可以帮助你通过简单的操作快速 (间接) 脱离控制!

# 实现原理
>最后更新于 2024/01/09
>
> 适用于 CRCSN v3.0
## "破解模式" 技术细节

使用 ``ShlObj.h`` 头文件中的 system 函数运行 CMD 命令.

主要是用了以下的命令:
````batch
sc config tvnserver start= Disabled
sc config TDNetFilter start= Disabled
sc config TDFileFilter start= Disabled
Net Stop tvnserver
Net Stop TDNetFilter
Net Stop TDFileFilter
ntsd -c q -pn PortControl64.exe
ntsd -c q -pn DesktopCheck.exe
ntsd -c q -pn DeploymentAgent.exe
ntsd -c q -pn XYNTService.exe
ntsd -c q -pn ProcHelper64.exe
ntsd -c q -pn StudentMain.exe
ntsd -c q -pn GATESRV.exe
ntsd -c q -pn MasterHelper.exe
````
> 上面命令中的 ``ntsd`` 命令在 Windows XP 之后便不再内置于 Windows 系统当中, 直接运行建议替换为 ``TaskKill`` 命令, 例如: ``TaskKill /F /T /IM StudentMain.exe``.
运行了以上几个命令后, 基本可以解决大部分的控制了.

"恢复模式" 的实现方法则是将上面的三个服务启用, 达到恢复的效果.

## "劫持工具" 技术细节
"劫持工具" 主要是通过修改注册表实现劫持.

例如, 在 CMD 中输入如下命令:
````batch
reg add "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\taskmgr.exe\" /t REG_SZ -v debugger /d "THIS_PROGRAM_HAS_BEEN_BLOCKED" /F
````
即可将 ``taskmgr.exe`` 劫持为 ``THIS_PROGRAM_HAS_BEEN_BLOCKED``, 但因为劫持的程序不存在, 所以就无法启动 ``taskmgr.exe``, 间接达到了屏蔽的效果.

# 注意事项

此软件仅可用于 Windows 平台.

此软件仅用于学习交流, 禁止用于商业用途.

此软件按照 MIT 协议开源, 请在遵守 MIT 协议的情况下使用.

如果此软件对计算机造成影响 (包括但不限于: 卡顿, 死机), 请勿使用.

# 常见问题

Q1: 打开程序时提示 "命令提示符已被管理员禁用" 之类的提示, 如何解决?

A1: 这说明 CMD 已被禁用. 可以试试打开注册表编辑器, 定位到 ``HKEY_CURRENT_USER\Software\Policies\Microsoft\Windows\System`` 下, 看看有没有一个叫 ``DisableCMD`` 的 DWORD 值, 有的话就删掉. 再次打开软件看看是否能成功. (如果还是打不开, 那我也不知道了 awa)

Q2: 程序无法在 32 位 Windows 系统中打开, 如何解决?

A2: 程序发布版本暂无 32 位版本. 可以先下载程序源代码, 使用 MinGW-w32 编译源代码文件, 正常使用即可. 

# 公告

1. CRCSN 会在本年推出特别版本, 比如愚人节特别版.
2. CRCSN v3.0 正在开发中, 有什么功能需求可以随时提出!

# 鸣谢

支持本项目的所有网友, 所有测试人员, 以及我的老师.
