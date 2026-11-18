// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147512bc0

UScriptStruct * __cdecl FBakedAnimationStateMachine::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationStateMachine,(UObject *)pUVar1,
                         L"BakedAnimationStateMachine");
  }
  return Z_Registration_Info_UScriptStruct_FBakedAnimationStateMachine.OuterSingleton;
}

// FindStateIndex @ 147555140

int __thiscall
FBakedAnimationStateMachine::FindStateIndex(FBakedAnimationStateMachine *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->States).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->States).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->States).AllocatorInstance.Data + lVar6 + 0x30) == *param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x50;
    } while ((int)uVar5 < (this->States).ArrayNum);
  }
  return -1;
}

// FindTransitionIndex @ 147555200

int __thiscall
FBakedAnimationStateMachine::FindTransitionIndex
          (FBakedAnimationStateMachine *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar5 = FindStateIndex(this,param_2);
  iVar6 = FindStateIndex(this,param_1);
  if ((iVar6 == -1) || (iVar5 == -1)) {
    return -1;
  }
  iVar1 = (this->Transitions).ArrayNum;
  uVar8 = 0;
  if (0 < iVar1) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Transitions).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      pFVar2 = (this->Transitions).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar9 + 0x18) == iVar6) && (*(int *)(pFVar2 + lVar9 + 0x1c) == iVar5))
      {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x38;
    } while (lVar10 < iVar1);
  }
  return -1;
}

// FindTransitionIndex @ 147555310

int __thiscall
FBakedAnimationStateMachine::FindTransitionIndex
          (FBakedAnimationStateMachine *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1 != -1) && (param_2 != -1)) {
    iVar5 = (this->Transitions).ArrayNum;
    uVar6 = 0;
    if (0 < iVar5) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->Transitions).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pFVar1 = (this->Transitions).AllocatorInstance.Data;
        if ((*(int *)(pFVar1 + lVar7 + 0x18) == param_1) &&
           (*(int *)(pFVar1 + lVar7 + 0x1c) == param_2)) {
          return uVar6;
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar8 < iVar5);
    }
  }
  return -1;
}

