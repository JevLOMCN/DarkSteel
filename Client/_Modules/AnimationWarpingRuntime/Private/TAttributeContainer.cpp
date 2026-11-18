// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 2

// Find @ 14a726720

uchar * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Find
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  FScriptContainerElement *pFVar7;
  
  uVar3 = FindTypeIndex(this,param_1);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->AttributeIdentifiers).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    uVar4 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
            IndexOfByKey<UE::Anim::FAttributeId>
                      ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                       ((this->AttributeIdentifiers).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 0x10),param_2);
    if ((((int)uVar3 < 0) || ((this->Values).ArrayNum <= (int)uVar3)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204794>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x1ba,"Values.IsValidIndex(TypeIndex)"), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    uVar5 = 0;
    if ((int)uVar3 < (this->Values).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    if (uVar4 != 0xffffffff) {
      if ((((int)uVar4 < 0) || (*(int *)(pFVar7 + 8) <= (int)uVar4)) &&
         (bVar2 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1265464598543204799>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                             ,0x1bf,"TypedArray.IsValidIndex(AttributeIndex)"), bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      uVar3 = 0;
      if ((int)uVar4 < *(int *)(pFVar7 + 8)) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      return *(uchar **)(*(longlong *)pFVar7 + (longlong)(int)uVar4 * 0x10);
    }
  }
  return (uchar *)0x0;
}

// Find @ 14a7268f0

uchar * __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Find
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  FScriptContainerElement *pFVar7;
  
  uVar3 = FindTypeIndex(this,param_1);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->AttributeIdentifiers).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    uVar4 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
            IndexOfByKey<UE::Anim::FAttributeId>
                      ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                       ((this->AttributeIdentifiers).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 0x10),param_2);
    if ((((int)uVar3 < 0) || ((this->Values).ArrayNum <= (int)uVar3)) &&
       (bVar2 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204837>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x1e5,"Values.IsValidIndex(TypeIndex)"), bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    uVar5 = 0;
    if ((int)uVar3 < (this->Values).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uchar *)(*pcVar1)();
      return puVar6;
    }
    pFVar7 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    if (uVar4 != 0xffffffff) {
      if ((((int)uVar4 < 0) || (*(int *)(pFVar7 + 8) <= (int)uVar4)) &&
         (bVar2 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1265464598543204842>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                             ,0x1ea,"TypedArray.IsValidIndex(AttributeIndex)"), bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      uVar3 = 0;
      if ((int)uVar4 < *(int *)(pFVar7 + 8)) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uchar *)(*pcVar1)();
        return puVar6;
      }
      return *(uchar **)(*(longlong *)pFVar7 + (longlong)(int)uVar4 * 0x10);
    }
  }
  return (uchar *)0x0;
}

