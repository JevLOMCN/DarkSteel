// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetTaskPriority @ 1488df480

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl ENamedThreads::SetTaskPriority(Type param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (((param_1 & ~AnyNormalThreadNormalTask) != MainQueue) ||
     ((param_2 & ~HighTaskPriority) != MainQueue)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  return param_1 | param_2;
}

