// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// TArrayFaceND<double,3> @ 143df9980

TArrayFaceND<double,3> * __thiscall
Chaos::TArrayFaceND<double,3>::TArrayFaceND<double,3>
          (TArrayFaceND<double,3> *this,
          TArray<Chaos::TArrayND<double,3>,TFixedAllocator<3>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  uchar *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArrayFaceND<double,3> *pTVar10;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  piVar1 = &(this->MArray).ArrayMax;
  piVar2 = &(this->MArray).ArrayNum;
  *piVar1 = 3;
  *piVar2 = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow<0,TFixedAllocator<3>::ForElementType<Chaos::TArrayND<double,3>_>_>
                    (0x20,8,3,(ForElementType<Chaos::TArrayND<double,3>_> *)this,piVar2,piVar1);
  DefaultConstructItems<Chaos::TArrayND<double,3>,int>
            ((this->MArray).AllocatorInstance.InlineData + iVar9,3);
  if (param_1->ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = *(int *)((param_1->AllocatorInstance).InlineData[0].Pad + 0x18);
  uVar4 = *(undefined8 *)(param_1->AllocatorInstance).InlineData[0].Pad;
  uVar5 = *(undefined4 *)((param_1->AllocatorInstance).InlineData[0].Pad + 8);
  pvVar6 = *(void **)((param_1->AllocatorInstance).InlineData[0].Pad + 0x10);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar9);
  if (iVar9 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar9,0,&local_68,iVar9,(int *)((longlong)&local_60 + 4));
    memcpy(local_68.Data,pvVar6,(longlong)iVar9 << 3);
  }
  if (*(int *)((param_1->AllocatorInstance).InlineData[0].Pad + 8) *
      *(int *)((param_1->AllocatorInstance).InlineData[0].Pad + 4) *
      *(int *)(param_1->AllocatorInstance).InlineData[0].Pad !=
      *(int *)((param_1->AllocatorInstance).InlineData[0].Pad + 0x18)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Counts.Product() == Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayND.h"
                       ,0x100,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  if (*piVar2 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar3 = (this->MArray).AllocatorInstance.InlineData[0].Pad + 0x10;
  *(undefined8 *)(this->MArray).AllocatorInstance.InlineData[0].Pad = uVar4;
  *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 8) = uVar5;
  if ((ForAnyElementType *)puVar3 != &local_68) {
    if (*(void **)puVar3 != (void *)0x0) {
      FMemory::Free(*(void **)puVar3);
    }
    *(FScriptContainerElement **)puVar3 = local_68.Data;
    *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x18) =
         (undefined4)local_60;
    *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x1c) = local_60._4_4_;
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (param_1->ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = *(int *)((param_1->AllocatorInstance).InlineData[1].Pad + 0x18);
  local_58 = *(undefined8 *)(param_1->AllocatorInstance).InlineData[1].Pad;
  local_50 = *(undefined4 *)((param_1->AllocatorInstance).InlineData[1].Pad + 8);
  pvVar6 = *(void **)((param_1->AllocatorInstance).InlineData[1].Pad + 0x10);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar9);
  if (iVar9 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar9,0,&local_48,iVar9,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pvVar6,(longlong)iVar9 << 3);
  }
  if (*(int *)((param_1->AllocatorInstance).InlineData[1].Pad + 8) *
      *(int *)((param_1->AllocatorInstance).InlineData[1].Pad + 4) *
      *(int *)(param_1->AllocatorInstance).InlineData[1].Pad !=
      *(int *)((param_1->AllocatorInstance).InlineData[1].Pad + 0x18)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Counts.Product() == Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayND.h"
                       ,0x100,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  if (*piVar2 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar3 = (this->MArray).AllocatorInstance.InlineData[1].Pad + 0x10;
  *(undefined8 *)(this->MArray).AllocatorInstance.InlineData[1].Pad = local_58;
  *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 8) = local_50;
  if ((ForAnyElementType *)puVar3 != &local_48) {
    if (*(void **)puVar3 != (void *)0x0) {
      FMemory::Free(*(void **)puVar3);
    }
    *(FScriptContainerElement **)puVar3 = local_48.Data;
    *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x18) =
         (undefined4)local_40;
    *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x1c) = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (param_1->ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = *(int *)((param_1->AllocatorInstance).InlineData[2].Pad + 0x18);
  local_38 = *(undefined8 *)(param_1->AllocatorInstance).InlineData[2].Pad;
  local_30 = *(undefined4 *)((param_1->AllocatorInstance).InlineData[2].Pad + 8);
  pvVar6 = *(void **)((param_1->AllocatorInstance).InlineData[2].Pad + 0x10);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar9);
  if (iVar9 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar9,0,&local_28,iVar9,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,pvVar6,(longlong)iVar9 << 3);
  }
  if (*(int *)((param_1->AllocatorInstance).InlineData[2].Pad + 8) *
      *(int *)((param_1->AllocatorInstance).InlineData[2].Pad + 4) *
      *(int *)(param_1->AllocatorInstance).InlineData[2].Pad !=
      *(int *)((param_1->AllocatorInstance).InlineData[2].Pad + 0x18)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Counts.Product() == Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayND.h"
                       ,0x100,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  if (*piVar2 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TArrayFaceND<double,3> *)(*pcVar7)();
      return pTVar10;
    }
  }
  puVar3 = (this->MArray).AllocatorInstance.InlineData[2].Pad + 0x10;
  *(undefined8 *)(this->MArray).AllocatorInstance.InlineData[2].Pad = local_38;
  *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 8) = local_30;
  if ((ForAnyElementType *)puVar3 != &local_28) {
    if (*(void **)puVar3 != (void *)0x0) {
      FMemory::Free(*(void **)puVar3);
    }
    *(FScriptContainerElement **)puVar3 = local_28.Data;
    *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x18) =
         (undefined4)local_20;
    *(undefined4 *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x1c) = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return this;
}

// TArrayFaceND<double,3> @ 143df9e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayFaceND<double,3> * __thiscall
Chaos::TArrayFaceND<double,3>::TArrayFaceND<double,3>
          (TArrayFaceND<double,3> *this,TUniformGrid<double,3> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArrayFaceND<double,3> *pTVar9;
  int iVar10;
  TArray<double,TSizedDefaultAllocator<32>_> local_68;
  int local_58;
  int iStack_54;
  int local_50;
  TArray<double,TSizedDefaultAllocator<32>_> local_48;
  int local_38;
  int iStack_34;
  int local_30;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  
  piVar1 = &(this->MArray).ArrayMax;
  piVar2 = &(this->MArray).ArrayNum;
  *piVar1 = 3;
  *piVar2 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow<0,TFixedAllocator<3>::ForElementType<Chaos::TArrayND<double,3>_>_>
                    (0x20,8,3,(ForElementType<Chaos::TArrayND<double,3>_> *)this,piVar2,piVar1);
  DefaultConstructItems<Chaos::TArrayND<double,3>,int>
            ((this->MArray).AllocatorInstance.InlineData + iVar8,3);
  iVar8 = *(int *)&param_1->field_0x38;
  iVar4 = *(int *)&param_1->field_0x34;
  iVar10 = *(int *)&param_1->field_0x30 + 1;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_68,iVar8 * iVar4 * iVar10,Default);
  if ((*piVar2 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArrayFaceND<double,3> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)
           ((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x10);
  *(ulonglong *)(this->MArray).AllocatorInstance.InlineData[0].Pad = CONCAT44(iVar4,iVar10);
  *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 8) = iVar8;
  if (pTVar3 != &local_68) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
    *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x18) = local_68.ArrayNum;
    *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x1c) = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  local_58 = *(int *)&param_1->field_0x30;
  local_50 = *(int *)&param_1->field_0x38;
  iStack_54 = *(int *)&param_1->field_0x34 + 1;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&local_48,iStack_54 * local_50 * local_58,Default);
  if ((*piVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArrayFaceND<double,3> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)
           ((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x10);
  *(ulonglong *)(this->MArray).AllocatorInstance.InlineData[1].Pad = CONCAT44(iStack_54,local_58);
  *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 8) = local_50;
  if (pTVar3 != &local_48) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
    *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x18) = local_48.ArrayNum;
    *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x1c) = local_48.ArrayMax;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  iStack_34 = *(int *)&param_1->field_0x34;
  local_38 = *(int *)&param_1->field_0x30;
  local_30 = *(int *)&param_1->field_0x38 + 1;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&local_28,local_30 * iStack_34 * local_38,Default);
  if ((*piVar2 < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArrayFaceND<double,3> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)
           ((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x10);
  *(ulonglong *)(this->MArray).AllocatorInstance.InlineData[2].Pad = CONCAT44(iStack_34,local_38);
  *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 8) = local_30;
  if (pTVar3 != &local_28) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
    *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x18) = local_28.ArrayNum;
    *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x1c) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return this;
}

// TArrayFaceND<bool,3> @ 143dfa130

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArrayFaceND<bool,3> * __thiscall
Chaos::TArrayFaceND<bool,3>::TArrayFaceND<bool,3>
          (TArrayFaceND<bool,3> *this,TUniformGrid<double,3> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArrayFaceND<bool,3> *pTVar9;
  int iVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> local_68;
  int local_58;
  int iStack_54;
  int local_50;
  TArray<bool,TSizedDefaultAllocator<32>_> local_48;
  int local_38;
  int iStack_34;
  int local_30;
  TArray<bool,TSizedDefaultAllocator<32>_> local_28;
  
  piVar1 = &(this->MArray).ArrayMax;
  piVar2 = &(this->MArray).ArrayNum;
  *piVar1 = 3;
  *piVar2 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow<0,TFixedAllocator<3>::ForElementType<Chaos::TArrayND<bool,3>_>_>
                    (0x20,8,3,(ForElementType<Chaos::TArrayND<bool,3>_> *)this,piVar2,piVar1);
  DefaultConstructItems<Chaos::TArrayND<bool,3>,int>
            ((this->MArray).AllocatorInstance.InlineData + iVar8,3);
  iVar8 = *(int *)&param_1->field_0x38;
  iVar4 = *(int *)&param_1->field_0x34;
  iVar10 = *(int *)&param_1->field_0x30 + 1;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_68,iVar8 * iVar4 * iVar10,Default);
  if ((*piVar2 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArrayFaceND<bool,3> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
           ((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x10);
  *(ulonglong *)(this->MArray).AllocatorInstance.InlineData[0].Pad = CONCAT44(iVar4,iVar10);
  *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 8) = iVar8;
  if (pTVar3 != &local_68) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
    *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x18) = local_68.ArrayNum;
    *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x1c) = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  local_58 = *(int *)&param_1->field_0x30;
  local_50 = *(int *)&param_1->field_0x38;
  iStack_54 = *(int *)&param_1->field_0x34 + 1;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&local_48,iStack_54 * local_50 * local_58,Default);
  if ((*piVar2 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArrayFaceND<bool,3> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
           ((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x10);
  *(ulonglong *)(this->MArray).AllocatorInstance.InlineData[1].Pad = CONCAT44(iStack_54,local_58);
  *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 8) = local_50;
  if (pTVar3 != &local_48) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
    *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x18) = local_48.ArrayNum;
    *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x1c) = local_48.ArrayMax;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  iStack_34 = *(int *)&param_1->field_0x34;
  local_38 = *(int *)&param_1->field_0x30;
  local_30 = *(int *)&param_1->field_0x38 + 1;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&local_28,local_30 * iStack_34 * local_38,Default);
  if ((*piVar2 < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArrayFaceND<bool,3> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
           ((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x10);
  *(ulonglong *)(this->MArray).AllocatorInstance.InlineData[2].Pad = CONCAT44(iStack_34,local_38);
  *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 8) = local_30;
  if (pTVar3 != &local_28) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
    *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x18) = local_28.ArrayNum;
    *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x1c) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 143e07bd0

double * __thiscall
Chaos::TArrayFaceND<double,3>::operator()
          (TArrayFaceND<double,3> *this,Pair<int,Chaos::TVector<int,3>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1->First;
  uVar6 = 0;
  if ((int)uVar1 < (this->MArray).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar2)();
      return pdVar4;
    }
  }
  uVar5 = (*(int *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 4) *
           (param_1->Second).field0_0x0._s_0.X + (param_1->Second).field0_0x0._s_0.Y) *
          *(int *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 8) +
          (param_1->Second).field0_0x0._s_0.Z;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 0x18)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar4 = (double *)(*pcVar2)();
      return pdVar4;
    }
  }
  return (double *)
         (*(longlong *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 0x10) +
         (longlong)(int)uVar5 * 8);
}

// operator() @ 143e07cd0

bool * __thiscall
Chaos::TArrayFaceND<bool,3>::operator()
          (TArrayFaceND<bool,3> *this,Pair<int,Chaos::TVector<int,3>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool *pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1->First;
  uVar6 = 0;
  if ((int)uVar1 < (this->MArray).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar2)();
      return pbVar4;
    }
  }
  uVar5 = (*(int *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 4) *
           (param_1->Second).field0_0x0._s_0.X + (param_1->Second).field0_0x0._s_0.Y) *
          *(int *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 8) +
          (param_1->Second).field0_0x0._s_0.Z;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 0x18)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar2)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)(int)uVar5 +
                 *(longlong *)((this->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 0x10));
}

// Fill @ 143e1d190

void __thiscall Chaos::TArrayFaceND<double,3>::Fill(TArrayFaceND<double,3> *this,double *param_1)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  double *pdVar5;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((this->MArray).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar5 = *(double **)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x10);
  iVar2 = *(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x18);
  pdVar1 = pdVar5 + iVar2;
  while( true ) {
    if (*(int *)((this->MArray).AllocatorInstance.InlineData[0].Pad + 0x18) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pdVar5 == pdVar1) break;
    *pdVar5 = *param_1;
    pdVar5 = pdVar5 + 1;
  }
  if ((this->MArray).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar5 = *(double **)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x10);
  iVar2 = *(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x18);
  pdVar1 = pdVar5 + iVar2;
  while( true ) {
    if (*(int *)((this->MArray).AllocatorInstance.InlineData[1].Pad + 0x18) != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (pdVar5 == pdVar1) break;
    *pdVar5 = *param_1;
    pdVar5 = pdVar5 + 1;
  }
  if ((this->MArray).ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar5 = *(double **)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x10);
  iVar2 = *(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x18);
  pdVar1 = pdVar5 + iVar2;
  while( true ) {
    if (*(int *)((this->MArray).AllocatorInstance.InlineData[2].Pad + 0x18) != iVar2) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
      ;
    }
    if (pdVar5 == pdVar1) break;
    *pdVar5 = *param_1;
    pdVar5 = pdVar5 + 1;
  }
  return;
}

// GetComponent @ 143e26ca0

TArrayND<double,3> * __thiscall
Chaos::TArrayFaceND<double,3>::GetComponent(TArrayFaceND<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayND<double,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->MArray).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayND<double,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArrayND<double,3> *)((this->MArray).AllocatorInstance.InlineData + param_1);
}

