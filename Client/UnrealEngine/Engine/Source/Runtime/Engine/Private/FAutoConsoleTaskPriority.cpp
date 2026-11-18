// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Get @ 1488c1520

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAutoConsoleTaskPriority::Get(FAutoConsoleTaskPriority *this,Type param_1)

{
  Type TVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  Type TVar5;
  
  TVar5 = this->ThreadPriority;
  iVar3 = ENamedThreads::bHasHighPriorityThreads;
  if (((TVar5 == HighThreadPriority) ||
      (iVar3 = ENamedThreads::bHasBackgroundThreads, TVar5 == BackgroundThreadPriority)) &&
     (iVar3 == 0)) {
    TVar5 = ENamedThreads::SetTaskPriority(param_1,this->TaskPriorityIfForcedToNormalThreadPriority)
    ;
    return TVar5;
  }
  TVar1 = this->TaskPriority;
  if (((((param_1 & ~AnyNormalThreadNormalTask) != MainQueue) ||
       ((TVar5 & ~ThreadPriorityMask) != MainQueue ||
        (TVar5 & ThreadPriorityMask) == ThreadPriorityMask)) ||
      ((TVar1 & ~HighTaskPriority) != MainQueue)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                         ,0xb1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar5 = (*pcVar2)();
    return TVar5;
  }
  return TVar5 | TVar1 | param_1;
}

