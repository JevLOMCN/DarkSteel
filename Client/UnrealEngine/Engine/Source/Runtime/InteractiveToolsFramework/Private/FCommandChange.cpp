// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// Execute @ 14969e7e0

TUniquePtr<FChange,TDefaultDelete<FChange>_> __thiscall
FCommandChange::Execute(FCommandChange *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FChange,TDefaultDelete<FChange>_> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Change.h"
                     ,0x96,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (FChange *)(*pcVar1)();
    return (TUniquePtr<FChange,TDefaultDelete<FChange>_>)TVar3.Ptr;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<FChange,TDefaultDelete<FChange>_>)(FChange *)param_1;
}

// GetChangeType @ 1496a0670

EChangeStyle __thiscall FCommandChange::GetChangeType(FCommandChange *this)

{
  return CommandPattern;
}

