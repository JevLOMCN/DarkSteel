// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// SetPriorities @ 1414b07a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl ENamedThreads::SetPriorities(Type param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (((param_1 & ~AnyNormalThreadNormalTask) != MainQueue) || (2 < (uint)param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(ThreadAndIndex & ~ThreadIndexMask) && PriorityIndex >= 0 && PriorityIndex < NumThreadPriorities"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                       ,0xba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
  }
  return (uint)param_3 << 9 | param_2 << 10 | param_1;
}

