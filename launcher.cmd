@Echo Off
Title CRCSN Launcher v1.0.10
PushD %~DP0 && Cd /D %~DP0
: SetLocal EnableDelayedExpansion
: %1 %2
: MsHta VbScript:CreateObject("Shell.Application").ShellExecute("%~S0","GoTo:RunAs","","RunAs",1)(Window.Close) && GoTo:EOF
:RunAs
.\bin\main.exe