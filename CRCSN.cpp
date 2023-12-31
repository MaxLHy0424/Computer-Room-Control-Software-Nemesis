#include<stdio.h>
#include<unistd.h>
#include<ShlObj.h>
void About(){
    printf("[关于]\n\n");
    printf("   程序名称: 机房控制软件克星 (英文名 Computer Room Control Software Nemesis, 简称 CRCSN)\n");
    printf("   程序版本: v2.5_Stable\n");
    printf("   程序项目仓库: https://github.com/MaxLHy0424/Computer-Room-Control-Software-Nemesis\n");
    printf("   程序作者: MaxLHy0424\n");
    printf("   作者 B 站账号 UID: 1678066522\n");
    printf("   作者邮箱: MaxLHy974413@outlook.com\n\n");
    printf("   (C) Copyright 2023-2024 MaxLHy0424, All Rights Reserved.\n");
}
void CrackingMode(){
    printf("[破解模式]\n\n");
    printf("方案列表:\n");
    printf("   [1] 方案 A\n");
    printf("   [2] 方案 B\n\n");
    printf("请输入: ");
    char PlanCode[2]{0,0};
    scanf("%s",&PlanCode[0]);
    while((PlanCode[0]!='1'&&PlanCode[0]!='2')||PlanCode[1]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&PlanCode[0]);
    }
    printf("请输入 \"休眠\" 时间 (在每次执行操作后暂停执行一段时间, 单位 秒, 数值 0.0  ~ 15.0): ");
    double SleepTimes{0};
    scanf("%lf",&SleepTimes);
    unsigned short WrongInputNumber{0};
    while(SleepTimes>15.0||SleepTimes<0.0){
        if(WrongInputNumber>=5){
            SleepTimes=0;
            WrongInputNumber=0;
            break;
        }
        printf("输入错误, 请重新输入: ");
        scanf("%lf",&SleepTimes);
        WrongInputNumber++;
    }
    switch(PlanCode[0]){
        case '1':{
            PlanCode[0]=0;
            PlanCode[1]=0;
            system("cls");
            printf("配置:\n     方案: 方案 A.\n   \"休眠\": ");
            if(SleepTimes==0){
                printf("已禁用.\n\n");
            }else{
                printf("已启用, %lg 秒.\n\n",SleepTimes);
            }
            printf("提示: 已尝试临时修复环境变量, 在部分情况下可能出现找不到命令的情况, 如无法使用, 暂无解决方案.\n\n");
            printf("按任意键将清空以上内容并继续!\n\n");
            system("pause");
            for(;;){
                system("cls");
                printf("尝试禁用服务 tvnserver ...\n\n");
                system("sc config tvnserver start= Disabled");
                printf("\n尝试禁用服务 TDNetFilter ...\n\n");
                system("sc config TDNetFilter start= Disabled");
                printf("\n尝试禁用服务 TDFileFilter ...\n\n");
                system("sc config TDFileFilter start= Disabled");
                printf("\n尝试停止服务 tvnserver ...\n\n");
                system("net stop tvnserver");
                printf("\n尝试停止服务 TDNetFilter ...\n\n");
                system("net stop TDNetFilter");
                printf("\n尝试停止服务 TDFileFilter ...\n\n");
                system("net stop TDFileFilter");
                printf("\n尝试结束进程 PortControl64.exe ...\n\n");
                system("TaskKill /F /T /IM PortControl64.exe");
                printf("\n尝试结束进程 DesktopCheck.exe ...\n\n");
                system("TaskKill /F /T /IM DesktopCheck.exe");
                printf("\n尝试结束进程 DeploymentAgent.exe ...\n\n");
                system("TaskKill /F /T /IM DeploymentAgent.exe");
                printf("\n尝试结束进程 XYNTService.exe ...\n\n");
                system("TaskKill /F /T /IM XYNTService.exe");
                printf("\n尝试结束进程 StudentMain.exe ...\n\n");
                system("TaskKill /F /T /IM StudentMain.exe");
                printf("\n尝试结束进程 GATESRV.exe ...\n\n");
                system("TaskKill /F /T /IM GATESRV.exe");
                printf("\n尝试结束进程 MasterHelper.exe ...\n\n");
                system("TaskKill /F /T /IM MasterHelper.exe");
                printf("\n休眠中...\n");
                sleep(SleepTimes);
            }
            break;
        }case '2':{
            PlanCode[0]=0;
            PlanCode[1]=0;
            system("cls");
            printf("配置:\n     方案: 方案 B.\n   \"休眠\": ");
            if(SleepTimes==0){
                printf("已禁用.\n\n");
            }else{
                printf("已启用, %lg 秒.\n\n",SleepTimes);
            }
            printf("提示 1: 此方案推荐用于 \"方案 A\" 无法使用时的备选方案, 另外在部分情况下可能出现找不到命令的情况.\n");
            printf("提示 2: 已尝试临时修复环境变量, 如还是无法使用, 暂无解决方案.\n\n");
            printf("按任意键将清空以上内容并继续!\n\n");
            system("pause");
            for(;;){
                system("cls");
                printf("尝试禁用服务 tvnserver ...\n\n");
                system("sc config tvnserver start= Disabled");
                printf("\n尝试禁用服务 TDNetFilter ...\n\n");
                system("sc config TDNetFilter start= Disabled");
                printf("\n尝试禁用服务 TDFileFilter ...\n\n");
                system("sc config TDFileFilter start= Disabled");
                printf("\n尝试停止服务 tvnserver ...\n\n");
                system("net stop tvnserver");
                printf("\n尝试停止服务 TDNetFilter ...\n\n");
                system("net stop TDNetFilter");
                printf("\n尝试停止服务 TDFileFilter ...\n\n");
                system("net stop TDFileFilter");
                printf("\n尝试结束进程 PortControl64.exe ...\n\n");
                system("TsKill PortControl64 /A /V");
                printf("\n尝试结束进程 DesktopCheck.exe ...\n\n");
                system("TsKill DesktopCheck /A /V");
                printf("\n尝试结束进程 DeploymentAgent.exe ...\n\n");
                system("TsKill DeploymentAgent /A /V");
                printf("\n尝试结束进程 XYNTService.exe ...\n\n");
                system("TsKill XYNTService /A /V");
                printf("\n尝试结束进程 StudentMain.exe ...\n\n");
                system("TsKill StudentMain /A /V");
                printf("\n尝试结束进程 GATESRV.exe ...\n\n");
                system("TsKill GATESRV /A /V");
                printf("\n尝试结束进程 MasterHelper.exe ...\n\n");
                system("TsKill MasterHelper /A /V");
                printf("\n休眠中...\n");
                sleep(SleepTimes);
            }
            break;
        }
    }
}
void RecoveringMode(){
    printf("[恢复模式]\n\n");
    printf("说明: 本功能用于恢复破解时的部分操作, 部分情况下可能无法产生效果, 执行完毕后请手动开启控制软件.\n\n");
    printf("按任意键将清空以上内容并继续!\n\n");
    system("pause");
    system("cls");
    printf("尝试启用服务 tvnserver ...\n\n");
    system("sc config tvnserver start= Auto");
    printf("\n尝试启用服务 TDNetFilter ...\n\n");
    system("sc config TDNetFilter start= Auto");
    printf("\n尝试启用服务 TDFileFilter ...\n\n");
    system("sc config TDFileFilter start= Auto");
    printf("\n尝试启动服务 tvnserver ...\n\n");
    system("net start tvnserver");
    printf("\n尝试启动服务 TDNetFilter ...\n\n");
    system("net start TDNetFilter");
    printf("\n尝试启动服务 TDFileFilter ...\n\n");
    system("net start TDFileFilter");
}
int main(){
    system("color b");
    system("title 机房控制软件克星");
    {
        BOOL RunAsAdmin{IsUserAnAdmin()};
        if(!RunAsAdmin){
            printf("[Error] 当前权限为 User, 请以 Administrator 权限运行本程序...\n");
            printf("\n########################################\n\n");
            printf("按任意键退出程序!\n\n");
            system("pause");
            exit(0);
        }
    }
    printf("欢迎使用 机房控制软件克星!\n\n");
    printf("功能列表:\n");
    printf("  [x] 退出程序\n");
    printf("  [0] 关于\n");
    printf("  [1] 破解模式\n");
    printf("  [2] 恢复模式\n\n");
    printf("请输入: ");
    char FeatureCode[2]{0,0};
    scanf("%s",&FeatureCode[0]);
    while((FeatureCode[0]!='x'&&FeatureCode[0]!='0'&&FeatureCode[0]!='1'&&FeatureCode[0]!='2')||FeatureCode[1]!=0){
        printf("输入错误, 请重新输入: ");
        scanf("%s",&FeatureCode[0]);
    }
    system("cls");
    switch(FeatureCode[0]){
        case 'x':{
            exit(0);
        }
        case '0':{
            FeatureCode[0]=0;
            FeatureCode[1]=0;
            About();
            break;
        }case '1':{
            FeatureCode[0]=0;
            FeatureCode[1]=0;
            system("set path=%path%;C:\\Windows\\System32\\");
            CrackingMode();
            break;
        }case '2':{
            FeatureCode[0]=0;
            FeatureCode[1]=0;
            system("set path=%path%;C:\\Windows\\System32\\");
            RecoveringMode();
            break;
        }
    }
    printf("\n########################################\n\n");
    printf("按任意键退出程序!\n\n");
    system("pause");
    exit(0);
}