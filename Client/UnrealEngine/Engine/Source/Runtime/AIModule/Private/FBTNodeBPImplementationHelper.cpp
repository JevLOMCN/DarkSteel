// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// CheckEventImplementationVersion @ 146ed59e0

int __cdecl
FBTNodeBPImplementationHelper::CheckEventImplementationVersion
          (FName param_1,FName param_2,UObject *param_3,UClass *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UFunction *pUVar4;
  uint uVar5;
  uint uVar6;
  
  pUVar4 = UClass::FindFunctionByName(*(UClass **)&param_3->field_0x10,param_1,IncludeSuper);
  uVar5 = 0;
  if (pUVar4 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    uVar6 = 1;
    if ((UClass *)pUVar4->_padding_ != param_4) goto LAB_146ed5a56;
  }
  uVar6 = 0;
LAB_146ed5a56:
  pUVar4 = UClass::FindFunctionByName(*(UClass **)&param_3->field_0x10,param_2,IncludeSuper);
  if (pUVar4 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    uVar5 = 0;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else if ((UClass *)pUVar4->_padding_ != param_4) {
    uVar5 = 2;
  }
  return uVar6 | uVar5;
}

