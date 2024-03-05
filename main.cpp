#include<stdio.h>
#include<string>
#include<fstream>
#include<ShlObj.h>
#include<windows.h>
char Code[3];
std::string Config[5];
unsigned short Start();
bool Configuration(bool reCfg){
    if(reCfg){
        printf("| 主菜单 > 重载配置 |\n\n");
    }
    std::ifstream fin;
    fin.open("config.ini",std::ios::in);
    if(!fin.is_open()){
        if(!reCfg){
            system("Color B");
            system("Title CRCSN");
        }
        printf("[错误] 无法读取 config.ini !\n\n");
        printf("########################################\n\n");
        printf("按任意键继续.\n\n");
        system("Pause");
        system("CLS");
        goto skip;
    }
    {
        for(unsigned short i{0};i<5;i++){
            getline(fin,Config[i]);
        }
        Config[0]="Color "+Config[0];
        system(Config[0].c_str());
        Config[1]="Title "+Config[1];
        system(Config[1].c_str());
        if(reCfg&&Config[2]=="1"){
            printf("[提示] 重载配置完成!\n\n");
            printf("########################################\n\n");
            printf("按任意键返回主菜单.\n\n");
            system("Pause");
        }
    }
    fin.close();
skip:
    system("CLS");
    Start();
    return reCfg;
}
void About(){
    printf("| 主菜单 > 关于 |\n\n");
    printf("    [软件名称] 机房控制软件克星 (Computer Room Control Software Nemesis)\n");
    printf("    [版本信息] v3.1.0_Dev15\n");
    printf("    [软件作者] MaxLHy0424\n");
    printf("    [主 仓 库] https://github.com/MaxLHy0424/Computer-Room-Control-Software-Nemesis\n\n");
    printf("    (C) Copyright 2023-2024 MaxLHy0424, all rights reserved.\n\n");
    printf("########################################\n\n");
    printf("按任意键返回.\n\n");
    system("Pause");
    system("CLS");
    Start();
}
void Cracking(){
    printf("| 主菜单 > 破解 |\n\n");
    if(!IsUserAnAdmin()){
        printf("[提示] 当前为受限模式, 以管理员权限重启软件解除限制.\n\n");
    }
    printf("   [0] 返回\n");
    printf("   [1] 单次模式\n");
    printf("   [2] 循环模式\n\n");
    printf("请输入: ");
    scanf("%s",&Code[0]);
    while((Code[0]!='0'&&Code[0]!='1'&&Code[0]!='2')||Code[1]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&Code[0]);
    }
    float sleepTime{0};
    switch(Code[0]){
        case '0':{
            system("CLS");
            Start();
            break;
        }case '2':{
            printf("请输入休眠时间 (单位: 秒; 范围: 0 ~ 10): ");
            scanf("%f",&sleepTime);
            while(sleepTime<0.0f||sleepTime>10.0f){
                printf("输入错误, 请重新输入: ");
                scanf("%f",&sleepTime);
            }
        }
    }
    system("CLS");
    printf("| 主菜单 > 破解 > 确认配置 |\n\n");
    printf("     [行为] ");
    switch(Code[0]){
        case '1':{
            printf("单次.\n");
            break;
        }case '2':{
            printf("循环.\n");
            break;
        }
    }
    printf(" [受限模式] ");
    if(IsUserAnAdmin()){
        printf("已禁用.\n");
    }else{
        printf("已启用.\n");
    }
    printf("     [休眠] ");
    if(!sleepTime){
        printf("已禁用.\n\n");
    }else{
        printf("已启用, %g 秒.\n\n",sleepTime);
    }
    printf("请确认 (Y: 继续, N: 放弃并返回): ");
    scanf("%s",&Code[1]);
    while((Code[1]!='Y'&&Code[1]!='N')||Code[2]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&Code[1]);
    }
    switch(Code[1]){
        case 'Y':{
            sleepTime*=1000;
            break;
        }case 'N':{
            system("CLS");
            Cracking();
            break;
        }
    }
    for(;;){
        system("CLS");
        system("TaskKill /F /T /IM vncviewer.exe");
        system("TaskKill /F /T /IM tvnserver32.exe");
        system("TaskKill /F /T /IM WfbsPnpInstall.exe");
        system("TaskKill /F /T /IM WFBSMon.exe");
        system("TaskKill /F /T /IM WFBSMlogon.exe");
        system("TaskKill /F /T /IM WFBSSvrLogShow.exe");
        system("TaskKill /F /T /IM ResetIp.exe");
        system("TaskKill /F /T /IM FuncForWIN64.exe");
        system("TaskKill /F /T /IM CertMgr.exe");
        system("TaskKill /F /T /IM Fireware.exe");
        system("TaskKill /F /T /IM BCDBootCopy.exe");
        system("TaskKill /F /T /IM refreship.exe");
        system("TaskKill /F /T /IM LenovoLockScreen.exe");
        system("TaskKill /F /T /IM PortControl64.exe");
        system("TaskKill /F /T /IM DesktopCheck.exe");
        system("TaskKill /F /T /IM DeploymentManager.exe");
        system("TaskKill /F /T /IM DeploymentAgent.exe");
        system("TaskKill /F /T /IM XYNTService.exe");
        system("TaskKill /F /T /IM ProcHelper64.exe");
        system("TaskKill /F /T /IM StudentMain.exe");
        system("TaskKill /F /T /IM DispcapHelper.exe");
        system("TaskKill /F /T /IM VRCwPlayer.exe");
        system("TaskKill /F /T /IM InstHelpApp.exe");
        system("TaskKill /F /T /IM TDOvrSet.exe");
        system("TaskKill /F /T /IM GATESRV.exe");
        system("TaskKill /F /T /IM MasterHelper.exe");
        if(IsUserAnAdmin()){
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\vncviewer.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\tvnserver32.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WfbsPnpInstall.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMon.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMlogon.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSSvrLogShow.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ResetIp.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\FuncForWIN64.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\CertMgr.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\Fireware.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\BCDBootCopy.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\refreship.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\LenovoLockScreen.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\PortControl64.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DesktopCheck.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentManager.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentAgent.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\XYNTService.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ProcHelper64.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\StudentMain.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DispcapHelper.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\VRCwPlayer.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\InstHelpApp.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\TDOvrSet.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\GATESRV.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("Reg Add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\MasterHelper.exe\" /t REG_SZ -v debugger /d \"THIS_PROGRAM_HAS_BEEN_BLOCKED\" /F");
            system("SC Config NcdAutoSetup Start= Disabled");
            system("SC Config netprofm Start= Disabled");
            system("SC Config EventLog Start= Disabled");
            system("SC Config Wecsvc Start= Disabled");
            system("SC Config NlaSvc Start= Disabled");
            system("SC Config tvnserver Start= Disabled");
            system("SC Config BSAgentSvr Start= Disabled");
            system("SC Config WFBSMlogon Start= Disabled");
            system("SC Config TDNetFilter Start= Disabled");
            system("SC Config TDFileFilter Start= Disabled");
            system("SC Config STUDSRV Start= Disabled");
            system("Net Stop NcdAutoSetup");
            system("Net Stop netprofm");
            system("Net Stop EventLog");
            system("Net Stop Wecsvc");
            system("Net Stop NlaSvc");
            system("Net Stop tvnserver");
            system("Net Stop BSAgentSvr");
            system("Net Stop WFBSMlogon");
            system("Net Stop TDNetFilter");
            system("Net Stop TDFileFilter");
            system("Net Stop STUDSRV");
        }
        if(Code[0]=='1'){
            break;
        }
        printf("\n休眠中...\n");
        Sleep(sleepTime);
    }
    printf("\n########################################\n\n");
    printf("按任意键返回主菜单.\n\n");
    system("Pause");
    system("CLS");
    Start();
}
void Recoverying(){
    printf("| 主菜单 > 恢复 |\n\n");
    if(!IsUserAnAdmin()){
        printf("[提示] 当前为受限模式, 已禁用此功能.\n\n");
        printf("########################################\n\n");
        printf("按任意键返回主菜单.\n\n");
        system("Pause");
        system("CLS");
        Start();
    }
    printf("本功能用于恢复破解时的部分操作, 部分情况下可能无法产生效果.\n\n");
    printf("请确认 (Y: 继续, N: 返回主菜单): ");
    scanf("%s",&Code[1]);
    while((Code[1]!='Y'&&Code[1]!='N')||Code[2]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&Code[1]);
    }
    switch(Code[1]){
        case 'Y':{
            break;
        }case 'N':{
            system("CLS");
            Start();
            break;
        }
    }
    system("CLS");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\vncviewer.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\tvnserver32.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WfbsPnpInstall.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMon.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMlogon.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSSvrLogShow.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ResetIp.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\FuncForWIN64.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\CertMgr.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\Fireware.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\BCDBootCopy.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\refreship.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\LenovoLockScreen.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\PortControl64.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DesktopCheck.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentManager.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentAgent.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\XYNTService.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ProcHelper64.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\StudentMain.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DispcapHelper.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\VRCwPlayer.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\InstHelpApp.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\TDOvrSet.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\GATESRV.exe\" /F");
    system("Reg Delete \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\MasterHelper.exe\" /F");
    system("SC Config NcdAutoSetup Start= Auto");
    system("SC Config netprofm Start= Auto");
    system("SC Config EventLog Start= Auto");
    system("SC Config Wecsvc Start= Auto");
    system("SC Config NlaSvc Start= Auto");
    system("SC Config tvnserver Start= Auto");
    system("SC Config BSAgentSvr Start= Auto");
    system("SC Config WFBSMlogon Start= Auto");
    system("SC Config TDNetFilter Start= Auto");
    system("SC Config TDFileFilter Start= Auto");
    system("SC Config STUDSRV Start= Auto");
    system("Net Start NcdAutoSetup");
    system("Net Start netprofm");
    system("Net Start EventLog");
    system("Net Start Wecsvc");
    system("Net Start NlaSvc");
    system("Net Start tvnserver");
    system("Net Start BSAgentSvr");
    system("Net Start WFBSMlogon");
    system("Net Start TDNetFilter");
    system("Net Start TDFileFilter");
    system("Net Start STUDSRV");
    printf("\n########################################\n");
    printf("    联想云教室: vncviewer.exe, tvnserver32.exe, WFDeskShow.exe, WfbsPnpInstall.exe, WFBSMon.exe, WFBSMlogon.exe, refreship.exe, LenovoLockScreen.exe, DeploymentManager.exe, WFBSSvrLogShow.exe, ResetIp.exe, FuncForWIN64.exe, CertMgr.exe, Fireware.exe, BCDBootCopy.exe, PortControl64.exe, DesktopCheck.exe, DeploymentAgent.exe, XYNTService.exe\n");
    printf("    极域电子教室: StudentMain.exe, GATESRV.exe, MasterHelper.exe, ProcHelper64.exe, DispcapHelper.exe, VRCwPlayer.exe\n\n");
    printf("请手动开启以上可执行文件.\n");
    printf("########################################\n\n");
    Sleep(2500u);
    printf("按任意键返回主菜单.\n\n");
    system("Pause");
    system("CLS");
    Start();
}
#pragma GCC diagnostic ignored "-Winfinite-recursion"
void Toolkit(){
    printf("| 主菜单 > 工具箱 |\n\n");
    {
        bool disableThisFeature{false};
        typedef void(__stdcall*NTPROC)(DWORD*,DWORD*,DWORD*);
        HINSTANCE inst{LoadLibrary(TEXT("ntdll.dll"))};
        NTPROC getSysKernalVersion{(NTPROC)GetProcAddress(inst,"RtlGetNtVersionNumbers")};
        DWORD major,minor;
        getSysKernalVersion(&major,&minor,NULL);
        if(Config[3]=="1"&&major*10+minor<62){
            printf("[提示] 当前 Windows 内核版本为 %lu.%lu, 低于 6.2.\n\n",major,minor);
            disableThisFeature=true;
        }if(!IsUserAnAdmin()){
            printf("[提示] 当前为受限模式, 已禁用此功能.\n\n");
            disableThisFeature=true;
        }
        if(disableThisFeature){
            printf("########################################\n\n");
            printf("按任意键返回主菜单.\n\n");
            system("Pause");
            system("CLS");
            goto backToTheMainMenu;
        }
    }
    printf("    [0] 返回\n");
    printf("    [$] 自定义命令\n");
    printf("    [1] 修复系统文件\n");
    printf("    [2] 重启至 WinRE\n\n");
    printf("请输入: ");
    scanf("%s",&Code[0]);
    while((Code[0]!='0'&&Code[0]!='$'&&Code[0]!='1'&&Code[0]!='2')||Code[1]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&Code[0]);
    }
    system("CLS");
    switch(Code[0]){
        case '0':{
backToTheMainMenu:
            Start();
            break;
        }case '$':{
            printf("| 主菜单 > 工具箱 > 自定义命令 |\n\n");
            std::ifstream fin;
            fin.open("config.ini",std::ios::in);
            if(!fin.is_open()){
                printf("[错误] 无法读取 config.ini !\n\n");
                fin.close();
            }else if(Config[4]=="$NULL$"){
                fin.close();
                printf("[提示] 配置选项为 $NULL$ , 请编辑并重载配置.\n\n");
            }else{
                fin.close();
                system(Config[4].c_str());
            }
            break;
        }case '1':{
            printf("| 主菜单 > 工具箱 > 修复系统文件|\n\n");
            printf("请输入修复次数 (输入 0 返回): ");
            unsigned short tmp{0};
            scanf("%hu",&tmp);
            if(!tmp){
                goto back;
            }
            for(;tmp>0;tmp--){
                system("DISM /Online /Cleanup-Image /RestoreHealth");
                system("SFC /ScanNow");
                Sleep(500u);
            }
            break;
        }case '2':{
            for(unsigned short tmp{5};tmp>=0;tmp--){
                system("CLS");
                printf("| 主菜单 > 工具箱 > 重启至 WinRE |\n\n");
                printf("[警告] 请确认重要文件是否已保存, %hu 秒后将可重启至 WinRE.\n",tmp);
                if(!tmp){
                    break;
                }
                Sleep(1000u);
            }
            system("Pause");
            system("ReAgentC /Enable");
            system("Shutdown /F /R /O /T 10");
            break;
        }
    }
    printf("########################################\n\n");
    printf("按任意键返回.\n\n");
    system("Pause");
back:
    system("CLS");
    Toolkit();
}
#pragma GCC diagnostic pop
unsigned short Start(){
    printf("| 主菜单 |\n\n");
    printf("    [?] 关于\n");
    printf("    [0] 重载配置\n");
    printf("    [1] 破解\n");
    printf("    [2] 恢复\n");
    printf("    [3] 工具箱\n\n");
    printf("请输入: ");
    scanf("%s",&Code[0]);
    while((Code[0]!='?'&&Code[0]!='0'&&Code[0]!='1'&&Code[0]!='2'&&Code[0]!='3')||Code[1]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&Code[0]);
    }
    system("CLS");
    switch(Code[0]){
        case '?':{
            About();
            break;
        }case '0':{
            Configuration(true);
            break;
        }case '1':{
            Cracking();
            break;
        }case '2':{
            Recoverying();
            break;
        }case '3':{
            Toolkit();
            break;
        }
    }
    return 0;
}
int main(){
    Configuration(false);
    if(!IsUserAnAdmin()){
        system("CLS");
        printf("[提示] 当前为普通用户权限, 建议以管理员权限运行.\n\n");
        printf("########################################\n\n");
        printf("按任意键以受限模式继续.\n\n");
        system("Pause");
        system("CLS");
    }
    Start();
}