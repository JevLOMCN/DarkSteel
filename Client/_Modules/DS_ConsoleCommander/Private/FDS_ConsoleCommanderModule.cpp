// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_ConsoleCommander
// Functions: 2

// StartupModule @ 14c26ff60

void __thiscall FDS_ConsoleCommanderModule::StartupModule(FDS_ConsoleCommanderModule *this)

{
  FDS_CommandLibrary *this_00;
  
  this_00 = FDS_CommandLibrary::Get();
  FDS_CommandLibrary::CreateConsoleCommands(this_00);
  return;
}

// ShutdownModule @ 14c26ff80

void __thiscall FDS_ConsoleCommanderModule::ShutdownModule(FDS_ConsoleCommanderModule *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FDS_CommandLibrary *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  pFVar6 = FDS_CommandLibrary::Get();
  pFVar7 = (pFVar6->CommandArray).AllocatorInstance.Data;
  iVar2 = (pFVar6->CommandArray).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar6->CommandArray).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar7;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar3,1);
    pFVar7 = pFVar7 + 8;
  }
  return;
}

