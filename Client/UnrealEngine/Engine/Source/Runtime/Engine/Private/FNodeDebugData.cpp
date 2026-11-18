// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FNodeDebugData @ 1474367d0

void __thiscall FNodeDebugData::~FNodeDebugData(FNodeDebugData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNodeDebugData,int>
            ((FNodeDebugData *)(this->SaveCachePoseNodes).AllocatorInstance.Data,
             (this->SaveCachePoseNodes).ArrayNum);
  pFVar1 = (this->SaveCachePoseNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodeDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNodeDebugData::DebugItem,int>
            ((DebugItem *)(this->NodeChain).AllocatorInstance.Data,(this->NodeChain).ArrayNum);
  pFVar1 = (this->NodeChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddDebugItem @ 1474b9300

void __thiscall FNodeDebugData::AddDebugItem(FNodeDebugData *this,FString *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  uint uVar8;
  FString local_58;
  FString local_48;
  FScriptContainerElement local_38;
  void *local_30;
  undefined8 local_28;
  
  iVar6 = (this->NodeChain).ArrayNum;
  if (iVar6 != 0) {
    uVar5 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar5 = ~(iVar6 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
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
    if (*(int *)((this->NodeChain).AllocatorInstance.Data +
                (longlong)(this->NodeChain).ArrayNum * 0x28 + -8) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeChain.Num() == 0 || NodeChain.Last().ChildNodeChain.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                         ,0x20d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  pFVar7 = ::FString::FString(&local_58,param_1);
  ::FString::FString(&local_48,pFVar7);
  local_30 = (void *)0x0;
  local_28 = 0;
  pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
  local_38 = (FScriptContainerElement)param_2;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NodeChain).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->NodeChain).ArrayMax * 0x28))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NodeChain).ArrayNum;
  piVar1 = &(this->NodeChain).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->NodeChain).AllocatorInstance,piVar1);
  }
  (this->NodeChain).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NodeChain).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x28) = 0;
  pFVar2 = pFVar2 + (longlong)iVar6 * 0x28;
  *(FScriptContainerElement **)pFVar2 = local_48.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar2 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  *(undefined8 *)(pFVar2 + 0x18) = 0;
  pFVar2[0x10] = local_38;
  *(void **)(pFVar2 + 0x18) = local_30;
  local_30 = (void *)0x0;
  *(undefined4 *)(pFVar2 + 0x20) = (undefined4)local_28;
  *(undefined4 *)(pFVar2 + 0x24) = local_28._4_4_;
  local_28 = 0;
  DestructItems<FNodeDebugData,int>((FNodeDebugData *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar6 = (this->NodeChain).ArrayNum;
  uVar8 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar8 < iVar6) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar2 = (this->NodeChain).AllocatorInstance.Data +
           ((longlong)(this->NodeChain).ArrayNum * 5 + -2) * 8;
  if (*(int *)(pFVar2 + 0xc) < 0xc) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0xc,(ForAnyElementType *)pFVar2,*(int *)&pFVar2[8].field_0x0,
               (int *)(pFVar2 + 0xc));
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// BranchFlow @ 1474c0bb0

FNodeDebugData * __thiscall
FNodeDebugData::BranchFlow(FNodeDebugData *this,float param_1,FString *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UAnimInstance *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FNodeDebugData *pFVar9;
  FString *pFVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FString local_98;
  float local_88 [2];
  DebugItem *local_80;
  undefined8 local_78;
  FString local_70;
  FNodeDebugData *local_60;
  void *local_58;
  undefined8 local_50;
  UAnimInstance *local_48;
  
  iVar2 = (this->NodeChain).ArrayNum;
  uVar13 = iVar2 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar2) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNodeDebugData *)(*pcVar6)();
      return pFVar9;
    }
  }
  iVar2 = (this->NodeChain).ArrayNum;
  pFVar9 = this->RootNodePtr;
  pFVar3 = (this->NodeChain).AllocatorInstance.Data;
  pFVar10 = ::FString::FString(&local_98,param_2);
  local_88[0] = param_1 * this->AbsoluteWeight;
  pUVar4 = this->AnimInstance;
  local_80 = (DebugItem *)0x0;
  local_78 = 0;
  ::FString::FString(&local_70,pFVar10);
  local_58 = (void *)0x0;
  local_50 = 0;
  pFVar5 = (pFVar10->Data).AllocatorInstance.Data;
  local_60 = pFVar9;
  local_48 = pUVar4;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if ((*(float **)(pFVar3 + (longlong)iVar2 * 0x28 + -0x10) <= local_88) &&
     (local_88 <
      *(float **)(pFVar3 + (longlong)iVar2 * 0x28 + -0x10) +
      (longlong)*(int *)(pFVar3 + (longlong)iVar2 * 0x28 + -4) * 0x12)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNodeDebugData *)(*pcVar6)();
      return pFVar9;
    }
  }
  iVar8 = *(int *)(pFVar3 + (longlong)iVar2 * 0x28 + -8);
  if (iVar8 == *(int *)(pFVar3 + (longlong)iVar2 * 0x28 + -4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)(pFVar3 + (longlong)iVar2 * 0x28 + -0x10),
                       (int *)(pFVar3 + (longlong)iVar2 * 0x28 + -4));
  }
  lVar11 = (longlong)iVar8;
  *(int *)(pFVar3 + (longlong)iVar2 * 0x28 + -8) = iVar8 + 1;
  lVar12 = *(longlong *)(pFVar3 + (longlong)iVar2 * 0x28 + -0x10);
  *(float *)(lVar12 + lVar11 * 0x48) = local_88[0];
  *(undefined8 *)(lVar12 + 8 + lVar11 * 0x48) = 0;
  *(DebugItem **)(lVar12 + 8 + lVar11 * 0x48) = local_80;
  local_80 = (DebugItem *)0x0;
  *(int *)(lVar12 + 0x10 + lVar11 * 0x48) = (int)local_78;
  *(undefined4 *)(lVar12 + 0x14 + lVar11 * 0x48) = local_78._4_4_;
  local_78 = 0;
  *(undefined8 *)(lVar12 + 0x18 + lVar11 * 0x48) = 0;
  *(FScriptContainerElement **)(lVar12 + 0x18 + lVar11 * 0x48) =
       local_70.Data.AllocatorInstance.Data;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(lVar12 + 0x20 + lVar11 * 0x48) = local_70.Data.ArrayNum;
  *(int *)(lVar12 + 0x24 + lVar11 * 0x48) = local_70.Data.ArrayMax;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  *(undefined8 *)(lVar12 + 0x30 + lVar11 * 0x48) = 0;
  *(FNodeDebugData **)(lVar12 + 0x28 + lVar11 * 0x48) = local_60;
  *(void **)(lVar12 + 0x30 + lVar11 * 0x48) = local_58;
  local_58 = (void *)0x0;
  *(undefined4 *)(lVar12 + 0x38 + lVar11 * 0x48) = (undefined4)local_50;
  *(undefined4 *)(lVar12 + 0x3c + lVar11 * 0x48) = local_50._4_4_;
  local_50 = 0;
  *(UAnimInstance **)(lVar12 + 0x40 + lVar11 * 0x48) = local_48;
  DestructItems<FNodeDebugData,int>((FNodeDebugData *)0x0,0);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  DestructItems<FNodeDebugData::DebugItem,int>(local_80,(int)local_78);
  if (local_80 != (DebugItem *)0x0) {
    FMemory::Free(local_80);
  }
  iVar2 = (this->NodeChain).ArrayNum;
  uVar13 = iVar2 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar2) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNodeDebugData *)(*pcVar6)();
      return pFVar9;
    }
  }
  lVar12 = (longlong)(this->NodeChain).ArrayNum;
  pFVar3 = (this->NodeChain).AllocatorInstance.Data;
  uVar14 = *(int *)(pFVar3 + lVar12 * 0x28 + -8) - 1;
  uVar13 = 0;
  uVar15 = uVar13;
  if ((int)uVar14 < *(int *)(pFVar3 + lVar12 * 0x28 + -8)) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNodeDebugData *)(*pcVar6)();
      return pFVar9;
    }
  }
  pFVar1 = (ForAnyElementType *)
           (*(longlong *)(pFVar3 + lVar12 * 0x28 + -0x10) +
           ((longlong)*(int *)(pFVar3 + lVar12 * 0x28 + -8) * 9 + -8) * 8);
  if (*(int *)((longlong)&pFVar1[1].Data + 4) < 0x32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0x32,pFVar1,*(int *)&pFVar1[1].Data,(int *)((longlong)&pFVar1[1].Data + 4));
  }
  iVar2 = (this->NodeChain).ArrayNum;
  uVar14 = iVar2 - 1;
  uVar15 = uVar13;
  if ((int)uVar14 < iVar2) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNodeDebugData *)(*pcVar6)();
      return pFVar9;
    }
  }
  lVar12 = (longlong)(this->NodeChain).ArrayNum;
  pFVar3 = (this->NodeChain).AllocatorInstance.Data;
  uVar15 = *(int *)(pFVar3 + lVar12 * 0x28 + -8) - 1;
  if ((int)uVar15 < *(int *)(pFVar3 + lVar12 * 0x28 + -8)) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FNodeDebugData *)(*pcVar6)();
      return pFVar9;
    }
  }
  iVar2 = *(int *)(pFVar3 + lVar12 * 0x28 + -8);
  lVar12 = *(longlong *)(pFVar3 + lVar12 * 0x28 + -0x10);
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return (FNodeDebugData *)(lVar12 + (longlong)(iVar2 + -1) * 0x48);
}

// GetCachePoseDebugData @ 1474d8430

FNodeDebugData * __thiscall
FNodeDebugData::GetCachePoseDebugData(FNodeDebugData *this,float param_1)

{
  TArray<FNodeDebugData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNodeDebugData *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  float local_68 [2];
  DebugItem *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  FNodeDebugData *local_40;
  void *local_38;
  undefined8 local_30;
  UAnimInstance *local_28;
  
  if (this->RootNodePtr == (FNodeDebugData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootNodePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                       ,0x21c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNodeDebugData *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar7 = this->RootNodePtr;
  pTVar1 = &pFVar7->SaveCachePoseNodes;
  local_28 = this->AnimInstance;
  local_60 = (DebugItem *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_68[0] = param_1;
  local_40 = pFVar7;
  if ((pFVar3 <= (FScriptContainerElement *)local_68) &&
     ((FScriptContainerElement *)local_68 <
      pFVar3 + (longlong)(pFVar7->SaveCachePoseNodes).ArrayMax * 0x48)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNodeDebugData *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar7->SaveCachePoseNodes).ArrayNum;
  piVar2 = &(pFVar7->SaveCachePoseNodes).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar8 = (longlong)iVar6;
  (pFVar7->SaveCachePoseNodes).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(float *)(pFVar3 + lVar8 * 0x48) = local_68[0];
  *(undefined8 *)(pFVar3 + lVar8 * 0x48 + 8) = 0;
  *(DebugItem **)(pFVar3 + lVar8 * 0x48 + 8) = local_60;
  local_60 = (DebugItem *)0x0;
  *(int *)(pFVar3 + lVar8 * 0x48 + 0x10) = (int)local_58;
  *(undefined4 *)(pFVar3 + lVar8 * 0x48 + 0x14) = local_58._4_4_;
  local_58 = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x48 + 0x18) = 0;
  *(void **)(pFVar3 + lVar8 * 0x48 + 0x18) = local_50;
  local_50 = (void *)0x0;
  *(undefined4 *)(pFVar3 + lVar8 * 0x48 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar3 + lVar8 * 0x48 + 0x24) = local_48._4_4_;
  local_48 = 0;
  *(undefined8 *)(pFVar3 + lVar8 * 0x48 + 0x30) = 0;
  *(FNodeDebugData **)(pFVar3 + lVar8 * 0x48 + 0x28) = local_40;
  *(void **)(pFVar3 + lVar8 * 0x48 + 0x30) = local_38;
  local_38 = (void *)0x0;
  *(undefined4 *)(pFVar3 + lVar8 * 0x48 + 0x38) = (undefined4)local_30;
  *(undefined4 *)(pFVar3 + lVar8 * 0x48 + 0x3c) = local_30._4_4_;
  local_30 = 0;
  *(UAnimInstance **)(pFVar3 + lVar8 * 0x48 + 0x40) = local_28;
  DestructItems<FNodeDebugData,int>((FNodeDebugData *)0x0,0);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<FNodeDebugData::DebugItem,int>(local_60,(int)local_58);
  if (local_60 != (DebugItem *)0x0) {
    FMemory::Free(local_60);
  }
  pFVar7 = this->RootNodePtr;
  iVar6 = (pFVar7->SaveCachePoseNodes).ArrayNum;
  uVar10 = iVar6 - 1;
  uVar9 = 0;
  if ((int)uVar10 < iVar6) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNodeDebugData *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (pFVar7->SaveCachePoseNodes).AllocatorInstance.Data +
           ((longlong)(pFVar7->SaveCachePoseNodes).ArrayNum * 9 + -8) * 8;
  if (*(int *)(pFVar3 + 0xc) < 0x32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0x32,(ForAnyElementType *)pFVar3,*(int *)&pFVar3[8].field_0x0,
               (int *)(pFVar3 + 0xc));
  }
  pFVar7 = this->RootNodePtr;
  iVar6 = (pFVar7->SaveCachePoseNodes).ArrayNum;
  uVar10 = iVar6 - 1;
  uVar9 = 0;
  if ((int)uVar10 < iVar6) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FNodeDebugData *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FNodeDebugData *)
         ((pFVar7->SaveCachePoseNodes).AllocatorInstance.Data +
         (longlong)((pFVar7->SaveCachePoseNodes).ArrayNum + -1) * 0x48);
}

// GetFlattenedDebugData @ 1474d9ae0

/* WARNING: Removing unreachable block (ram,0x0001474d9ccc) */

void __thiscall
FNodeDebugData::GetFlattenedDebugData
          (FNodeDebugData *this,
          TArray<FNodeDebugData::FFlattenedDebugData,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int *param_3)

{
  float fVar1;
  FScriptContainerElement FVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  FNodeDebugData *pFVar10;
  FNodeDebugData *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97 [3];
  int local_94;
  uint local_90;
  FScriptContainerElement *local_88;
  FString local_80;
  FString local_70;
  float local_60;
  int local_5c;
  int local_58;
  FScriptContainerElement local_54;
  
  pFVar12 = (this->NodeChain).AllocatorInstance.Data;
  local_94 = *param_3;
  local_90 = (this->NodeChain).ArrayNum;
  uVar8 = (ulonglong)(int)local_90;
  local_88 = pFVar12 + uVar8 * 0x28;
  while( true ) {
    pFVar3 = local_88;
    if ((this->NodeChain).ArrayNum != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNodeDebugData::DebugItem,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar12 == pFVar3) {
      if (this->RootNodePtr == this) {
        iVar7 = (this->SaveCachePoseNodes).ArrayNum;
        pFVar11 = (FNodeDebugData *)(this->SaveCachePoseNodes).AllocatorInstance.Data;
        pFVar10 = pFVar11 + iVar7;
        while( true ) {
          if ((this->SaveCachePoseNodes).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FNodeDebugData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_97);
          }
          if (pFVar11 == pFVar10) break;
          *param_3 = *param_3 + 1;
          GetFlattenedDebugData(pFVar11,param_1,0,param_3);
          pFVar11 = pFVar11 + 1;
        }
      }
      return;
    }
    local_80.Data.ArrayNum = *(int *)(pFVar12 + 8);
    lVar9 = (longlong)local_80.Data.ArrayNum;
    FVar2 = pFVar12[0x10];
    fVar1 = this->AbsoluteWeight;
    _Src = *(void **)pFVar12;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_80.Data.ArrayNum == 0) {
      local_80.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80.Data.ArrayNum,0,(ForAnyElementType *)&local_80,local_80.Data.ArrayNum,
                 &local_80.Data.ArrayMax);
      memcpy(local_80.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    ::FString::FString(&local_70,&local_80);
    local_58 = local_94;
    local_60 = fVar1;
    local_5c = param_2;
    local_54 = FVar2;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 < pFVar3 + (longlong)param_1->ArrayMax * 0x20)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    pFVar3 = (param_1->AllocatorInstance).Data;
    lVar9 = (longlong)iVar7 * 0x20;
    *(undefined8 *)(pFVar3 + lVar9) = 0;
    *(FScriptContainerElement **)(pFVar3 + lVar9) = local_70.Data.AllocatorInstance.Data;
    *(int *)(pFVar3 + lVar9 + 8) = local_70.Data.ArrayNum;
    *(int *)(pFVar3 + lVar9 + 0xc) = local_70.Data.ArrayMax;
    *(float *)(pFVar3 + lVar9 + 0x10) = local_60;
    *(int *)(pFVar3 + lVar9 + 0x14) = local_5c;
    *(int *)(pFVar3 + lVar9 + 0x18) = local_58;
    pFVar3[lVar9 + 0x1c] = local_54;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = *(int *)(pFVar12 + 0x20);
    pFVar10 = *(FNodeDebugData **)(pFVar12 + 0x18);
    iVar5 = param_2 + 1;
    if (iVar7 < 2) {
      iVar5 = param_2;
    }
    pFVar11 = pFVar10 + iVar7;
    while( true ) {
      if (*(int *)(pFVar12 + 0x20) != iVar7) {
        local_98 = 0;
        `TCheckedPointerIterator<FNodeDebugData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_98);
      }
      if (pFVar10 == pFVar11) break;
      if (1 < iVar7) {
        *param_3 = *param_3 + 1;
      }
      GetFlattenedDebugData(pFVar10,param_1,iVar5,param_3);
      pFVar10 = pFVar10 + 1;
    }
    pFVar12 = pFVar12 + 0x28;
    uVar8 = (ulonglong)local_90;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

