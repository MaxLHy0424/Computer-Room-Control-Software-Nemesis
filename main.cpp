#include"extern.hpp"
void SwInfo(){
    puts("| 关于 |\n");
    puts("  [名称] Computer Room Control Software Nemesis");
    puts("  [版本] v4.8.20");
    puts("  [网址] https://github.com/MaxLHy0424/CRCSN\n");
    puts("  (C) 2023- MaxLHy0424, All Rights Reserved.\n");
    puts("==================================================\n");
    puts("按任意键返回.\n");
    system("pause");
    return;
}
void Crack(){
BEGIN:
    puts("| 破解 |\n");
    printf("[规则] %s\n\n",((IsUserAnAdmin())?("增强"):("基本")));
    puts("  [0] 返回");
    puts("  [1] 极域电子教室");
    puts("  [2] 联想云教室\n");
    printf("请输入: ");
    for(;;){
        scanf("%s",&Data[0]);
        if((Data[0]=='0'||Data[0]=='1'||Data[0]=='2')&&(Data[1]==0)){
            break;
        }
        printf("输入错误, 请重试: ");
    }
    if(Data[0]=='0'){
        return;
    }
    if(Continue()){
        puts("\n========================================\n");
        switch(Data[0]){
            case '1':{
                system("taskKill /f /im StudentMain.exe");
                system("taskKill /f /im DispcapHelper.exe");
                system("taskKill /f /im InstHelpApp.exe");
                system("taskKill /f /im GATESRV.exe");
                system("taskKill /f /im ProcHelper64.exe");
                system("taskKill /f /im MasterHelper.exe");
                if(IsUserAnAdmin()){
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\StudentMain.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DispcapHelper.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\VRCwPlayer.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\InstHelpApp.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\InstHelpApp64.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\TDOvrSet.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\GATESRV.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ProcHelper64.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\MasterHelper.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("net stop TDNetFilter /y");
                    system("net stop TDFileFilter /y");
                    system("net stop STUDSRV /y");
                }
                break;
            }case '2':{
                system("taskKill /f /im vncviewer.exe");
                system("taskKill /f /im tvnserver32.exe");
                system("taskKill /f /im WfbsPnpInstall.exe");
                system("taskKill /f /im WFBSMon.exe");
                system("taskKill /f /im WFBSMlogon.exe");
                system("taskKill /f /im WFBSSvrLogShow.exe");
                system("taskKill /f /im ResetIp.exe");
                system("taskKill /f /im Fireware.exe");
                system("taskKill /f /im BCDBootCopy.exe");
                system("taskKill /f /im refreship.exe");
                system("taskKill /f /im LenovoLockScreen.exe");
                system("taskKill /f /im PortControl64.exe");
                system("taskKill /f /im DesktopCheck.exe");
                system("taskKill /f /im DeploymentManager.exe");
                system("taskKill /f /im DeploymentAgent.exe");
                system("taskKill /f /im XYNTService.exe");
                if(IsUserAnAdmin()){
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\vncviewer.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\tvnserver32.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WfbsPnpInstall.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMon.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMlogon.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSSvrLogShow.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ResetIp.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\FuncForWIN64.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\CertMgr.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\Fireware.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\BCDBootCopy.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\refreship.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\LenovoLockScreen.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\PortControl64.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DesktopCheck.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentManager.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentAgent.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\XYNTService.exe\" /f /t reg_sz /v debugger /d \"hjk\"");
                    system("net stop tvnserver /y");
                    system("net stop BSAgentSvr /y");
                    system("net stop WFBSMlogon /y");
                }
                break;
            }
        }
        puts("\n========================================\n");
        puts("按任意键返回.\n");
        system("pause");
    }
    system("cls");
    goto BEGIN;
}
void Recovery(){
BEGIN:
    puts("| 恢复 |\n");
    if(!IsUserAnAdmin()){
        puts("权限不足.\n");
        puts("========================================\n");
        puts("按任意键返回.\n");
        system("pause");
        return;
    }
    puts("  [0] 返回");
    puts("  [1] 极域电子教室");
    puts("  [2] 联想云教室\n");
    printf("请输入: ");
    for(;;){
        scanf("%s",&Data[0]);
        if((Data[0]=='0'||Data[0]=='1'||Data[0]=='2')&&(Data[1]==0)){
            break;
        }
        printf("输入错误, 请重试: ");
    }
    if(Data[0]=='0'){
        return;
    }
    if(Continue()){
        puts("\n========================================\n");
        switch(Data[0]){
            case '1':{
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\StudentMain.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DispcapHelper.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\VRCwPlayer.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\InstHelpApp.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\InstHelpApp64.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\TDOvrSet.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\GATESRV.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ProcHelper64.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\MasterHelper.exe\" /f");
                system("net start TDNetFilter");
                system("net start TDFileFilter");
                system("net start STUDSRV");
                break;
            }case '2':{
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\vncviewer.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\tvnserver32.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WfbsPnpInstall.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMon.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSMlogon.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\WFBSSvrLogShow.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ResetIp.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\FuncForWIN64.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\CertMgr.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\Fireware.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\BCDBootCopy.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\refreship.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\LenovoLockScreen.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\PortControl64.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DesktopCheck.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentManager.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\DeploymentAgent.exe\" /f");
                system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\XYNTService.exe\" /f");
                system("net start tvnserver");
                system("net start BSAgentSvr");
                system("net start WFBSMlogon");
                break;
            }
        }
        puts("========================================\n");
        puts("按任意键返回.\n");
        system("pause");
    }
    system("cls");
    goto BEGIN;
}
void Toolkit(){
BEGIN:
    puts("| 工具箱 |\n");
    if(!IsUserAnAdmin()){
        puts("权限不足.\n");
        puts("========================================\n");
        puts("按任意键返回.\n");
        system("pause");
        return;
    }
    puts("  [0] 返回");
    puts("  [$] 命令提示符");
    puts("  [1] 系统修复");
    puts("  [2] 磁盘清理");
    puts("  [3] 高级启动\n");
    printf("请输入: ");
    for(;;){
        scanf("%s",&Data[0]);
        if((Data[0]=='0'||Data[0]=='$'||Data[0]=='1'||Data[0]=='2'||Data[0]=='3')&&(Data[1]==0)){
            break;
        }
        printf("输入错误, 请重试: ");
    }
    system("cls");
    switch(Data[0]){
        case '0':{
            return;
        }case '$':{
            puts("| 工具箱 > 命令提示符 |\n");
            puts("退出 \"exit\".\n");
            system("cmd");
            goto END;
        }case '1':{
            puts("| 工具箱 > 系统修复 |\n");
            if(!Continue()){
                goto END;
            }
            if(NtKernel>=62UL){
                system("dism /online /cleanup-image /restoreHealth");
            }
            system("sfc /scanNow");
            break;
        }case '2':{
            puts("| 工具箱 > 垃圾清理 |\n");
            if(!Continue()){
                goto END;
            }
            if(NtKernel>=100UL){
                system("dism /online /set-reservedStorageState /state:disabled");
            }
            system("del /f /s /q %temp%");
            break;
        }case '3':{
            puts("| 工具箱 > 高级启动 |\n");
            if(NtKernel<62UL){
                puts("Windows 8+.");
                break;
            }
            if(!Continue()){
                goto END;
            }
            system("shutdown /r /o /t 0");
            break;
        }
    }
    puts("\n========================================\n");
    puts("按任意键返回.\n");
    system("pause");
END:
    system("cls");
    goto BEGIN;
}
int main(int argc,char* argv[]){
    system("title CRCSN");
    if(argc==1){
        goto BEGIN;
    }
    {
        std::string opt[argc-1]{},tmp{};
        for(unsigned short i{1};i<argc;++i){
            tmp=argv[i];
            if((opt[0]=="")&&(tmp.length()>=5)&&(tmp.substr(0,5)=="-clr=")){
                tmp.erase(0,5);
                opt[0]="color "+tmp;
            }else if((opt[1]=="")&&(tmp=="-fs")){
                opt[1]="1";
            }
            else{
                puts("启动参数错误.\n");
                puts("========================================\n");
                puts("按任意键退出.\n");
                system("pause");
                return 0;
            }
        }
        system(opt[0].c_str());
        if(opt[1]=="1"){
            std::thread(ForceShow).detach();
        }
    }
BEGIN:
    puts("| 主页 |\n");
    puts("  [i] 信息");
    puts("  [1] 破解");
    puts("  [2] 恢复");
    puts("  [3] 工具箱\n");
    printf("请输入: ");
    for(;;){
        scanf("%s",&Data[0]);
        if((Data[0]=='i'||Data[0]=='1'||Data[0]=='2'||Data[0]=='3')&&(Data[1]==0)){
            break;
        }
        printf("输入错误, 请重试: ");
    }
    system("cls");
    switch(Data[0]){
        case 'i':{
            SwInfo();
            break;
        }case '1':{
            Crack();
            break;
        }case '2':{
            Recovery();
            break;
        }case '3':{
            Toolkit();
            break;
        }
    }
    system("cls");
    goto BEGIN;
}