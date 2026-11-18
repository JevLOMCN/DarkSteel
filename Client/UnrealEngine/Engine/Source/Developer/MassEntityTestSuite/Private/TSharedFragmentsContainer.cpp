// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// Add @ 14710ecb0

/* WARNING: Type propagation algorithm not settling */

int __thiscall
FMassEntityManager::TSharedFragmentsContainer<FConstSharedStruct>::Add
          (TSharedFragmentsContainer<FConstSharedStruct> *this,FConstSharedStruct *param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FObjectPtr *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int local_res8 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_res10;
  FConstSharedStruct *local_48;
  undefined8 local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_38;
  FConstSharedStruct **local_30;
  
  pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  local_res10.DebugPtr = (UScriptStruct *)0x0;
  local_48 = (FConstSharedStruct *)0x0;
  local_40 = 0;
  if (pTVar3 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    local_res10 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar3->DebugPtr;
  }
  uVar8 = ((uint)((ulonglong)local_res10.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_res10.DebugPtr >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)&(this->TypeToInstanceMap).field_0x8 != *(int *)&(this->TypeToInstanceMap).field_0x34)
  {
    puVar10 = *(undefined1 **)&(this->TypeToInstanceMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->TypeToInstanceMap).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->TypeToInstanceMap).field_0x48 - 1U & uVar8) * 4);
    if (iVar7 != -1) {
      do {
        pFVar9 = (FObjectPtr *)((longlong)iVar7 * 0x20 + *(longlong *)&this->TypeToInstanceMap);
        if ((FObjectPtr_u_0)*(FObjectPtr *)&pFVar9->field0_0x0 ==
            (FObjectPtr_u_0)local_res10.DebugPtr) {
          local_40._0_4_ = 0;
          if (pFVar9 != (FObjectPtr *)0x0) goto LAB_14710edcd;
          break;
        }
        iVar7 = *(int *)&pFVar9[3].field0_0x0;
      } while (iVar7 != -1);
    }
  }
  local_38 = &local_res10;
  local_30 = &local_48;
  TSet<TTuple<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<UScriptStruct_const_*_&&,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->TypeToInstanceMap,(uint)local_res8,
             (TPairInitializer<UScriptStruct_const_*_&&,TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_>_&&>
              *)(ulonglong)uVar8,(bool *)&local_38);
  pFVar9 = (FObjectPtr *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this->TypeToInstanceMap);
LAB_14710edcd:
  pFVar1 = (ForAnyElementType *)(pFVar9 + 1);
  DestructItems<FConstSharedStruct,int>(local_48,(uint)local_40);
  if (local_48 != (FConstSharedStruct *)0x0) {
    FMemory::Free(local_48);
  }
  pFVar12 = (this->Instances).AllocatorInstance.Data;
  if (((pFVar12 <= param_1) && (param_1 < pFVar12 + (longlong)(this->Instances).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar8 = (this->Instances).ArrayNum;
  piVar2 = &(this->Instances).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar2);
  }
  pFVar12 = (this->Instances).AllocatorInstance.Data;
  (this->Instances).ArrayNum = uVar8 + 1;
  lVar13 = (longlong)(int)uVar8 * 0x10;
  *(FStructSharedMemory **)(pFVar12 + lVar13) = (param_1->StructMemoryPtr).Object;
  *(TReferenceControllerBase<1> **)(pFVar12 + lVar13 + 8) =
       (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController;
  (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  uVar11 = 0;
  if ((int)uVar8 < (this->Instances).ArrayNum) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  pFVar12 = (this->Instances).AllocatorInstance.Data + lVar13;
  if (((pFVar1->Data <= pFVar12) &&
      (pFVar12 < pFVar1->Data + (longlong)*(int *)((longlong)(pFVar9 + 2) + 4) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  iVar7 = *(int *)&pFVar9[2].field0_0x0;
  if (iVar7 == *(int *)((longlong)(pFVar9 + 2) + 4U)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)((longlong)(pFVar9 + 2) + 4U));
  }
  *(int *)&pFVar9[2].field0_0x0 = iVar7 + 1;
  pFVar4 = pFVar1->Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = *(undefined8 *)pFVar12;
  lVar13 = *(longlong *)(pFVar12 + 8);
  *(longlong *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  return uVar8;
}

// Add @ 14710efa0

/* WARNING: Type propagation algorithm not settling */

int __thiscall
FMassEntityManager::TSharedFragmentsContainer<FSharedStruct>::Add
          (TSharedFragmentsContainer<FSharedStruct> *this,FSharedStruct *param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FObjectPtr *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int local_res8 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_res10;
  FSharedStruct *local_48;
  undefined8 local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_38;
  FSharedStruct **local_30;
  
  pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->StructMemoryPtr).Object;
  local_res10.DebugPtr = (UScriptStruct *)0x0;
  local_48 = (FSharedStruct *)0x0;
  local_40 = 0;
  if (pTVar3 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    local_res10 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar3->DebugPtr;
  }
  uVar8 = ((uint)((ulonglong)local_res10.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_res10.DebugPtr >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)&(this->TypeToInstanceMap).field_0x8 != *(int *)&(this->TypeToInstanceMap).field_0x34)
  {
    puVar10 = *(undefined1 **)&(this->TypeToInstanceMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->TypeToInstanceMap).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->TypeToInstanceMap).field_0x48 - 1U & uVar8) * 4);
    if (iVar7 != -1) {
      do {
        pFVar9 = (FObjectPtr *)((longlong)iVar7 * 0x20 + *(longlong *)&this->TypeToInstanceMap);
        if ((FObjectPtr_u_0)*(FObjectPtr *)&pFVar9->field0_0x0 ==
            (FObjectPtr_u_0)local_res10.DebugPtr) {
          local_40._0_4_ = 0;
          if (pFVar9 != (FObjectPtr *)0x0) goto LAB_14710f0bd;
          break;
        }
        iVar7 = *(int *)&pFVar9[3].field0_0x0;
      } while (iVar7 != -1);
    }
  }
  local_38 = &local_res10;
  local_30 = &local_48;
  TSet<TTuple<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<UScriptStruct_const_*_&&,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->TypeToInstanceMap,(uint)local_res8,
             (TPairInitializer<UScriptStruct_const_*_&&,TArray<FSharedStruct,TSizedDefaultAllocator<32>_>_&&>
              *)(ulonglong)uVar8,(bool *)&local_38);
  pFVar9 = (FObjectPtr *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this->TypeToInstanceMap);
LAB_14710f0bd:
  pFVar1 = (ForAnyElementType *)(pFVar9 + 1);
  DestructItems<FSharedStruct,int>(local_48,(uint)local_40);
  if (local_48 != (FSharedStruct *)0x0) {
    FMemory::Free(local_48);
  }
  pFVar12 = (this->Instances).AllocatorInstance.Data;
  if (((pFVar12 <= param_1) && (param_1 < pFVar12 + (longlong)(this->Instances).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  uVar8 = (this->Instances).ArrayNum;
  piVar2 = &(this->Instances).ArrayMax;
  if (uVar8 == *piVar2) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar2);
  }
  pFVar12 = (this->Instances).AllocatorInstance.Data;
  (this->Instances).ArrayNum = uVar8 + 1;
  lVar13 = (longlong)(int)uVar8 * 0x10;
  *(FStructSharedMemory **)(pFVar12 + lVar13) = (param_1->StructMemoryPtr).Object;
  *(TReferenceControllerBase<1> **)(pFVar12 + lVar13 + 8) =
       (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController;
  (param_1->StructMemoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
  uVar11 = 0;
  if ((int)uVar8 < (this->Instances).ArrayNum) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  pFVar12 = (this->Instances).AllocatorInstance.Data + lVar13;
  if (((pFVar1->Data <= pFVar12) &&
      (pFVar12 < pFVar1->Data + (longlong)*(int *)((longlong)(pFVar9 + 2) + 4) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  iVar7 = *(int *)&pFVar9[2].field0_0x0;
  if (iVar7 == *(int *)((longlong)(pFVar9 + 2) + 4U)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)((longlong)(pFVar9 + 2) + 4U));
  }
  *(int *)&pFVar9[2].field0_0x0 = iVar7 + 1;
  pFVar4 = pFVar1->Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = *(undefined8 *)pFVar12;
  lVar13 = *(longlong *)(pFVar12 + 8);
  *(longlong *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  return uVar8;
}

// Find @ 14711eb00

TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> * __thiscall
FMassEntityManager::TSharedFragmentsContainer<FConstSharedStruct>::Find
          (TSharedFragmentsContainer<FConstSharedStruct> *this,UScriptStruct *param_1)

{
  int iVar1;
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  uint uVar5;
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pTVar6 = (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *)0x0;
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  pTVar2 = pTVar6;
  if (*(int *)&(this->TypeToInstanceMap).field_0x8 != *(int *)&(this->TypeToInstanceMap).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->TypeToInstanceMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TypeToInstanceMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TypeToInstanceMap).field_0x48 - 1U &
                              (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x20 + *(longlong *)&this->TypeToInstanceMap);
        if ((UScriptStruct *)(pTVar2->AllocatorInstance).Data == param_1) break;
        iVar1 = pTVar2[1].ArrayNum;
        pTVar2 = pTVar6;
      } while (iVar1 != -1);
    }
  }
  pTVar3 = (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *)&pTVar2->ArrayNum;
  if (pTVar2 == (TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = pTVar6;
  }
  return pTVar3;
}

// Find @ 14711ebb0

TArray<FSharedStruct,TSizedDefaultAllocator<32>_> * __thiscall
FMassEntityManager::TSharedFragmentsContainer<FSharedStruct>::Find
          (TSharedFragmentsContainer<FSharedStruct> *this,UScriptStruct *param_1)

{
  int iVar1;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  uint uVar5;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pTVar6 = (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *)0x0;
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  pTVar2 = pTVar6;
  if (*(int *)&(this->TypeToInstanceMap).field_0x8 != *(int *)&(this->TypeToInstanceMap).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->TypeToInstanceMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TypeToInstanceMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TypeToInstanceMap).field_0x48 - 1U &
                              (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar1 * 0x20 + *(longlong *)&this->TypeToInstanceMap);
        if ((UScriptStruct *)(pTVar2->AllocatorInstance).Data == param_1) break;
        iVar1 = pTVar2[1].ArrayNum;
        pTVar2 = pTVar6;
      } while (iVar1 != -1);
    }
  }
  pTVar3 = (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *)&pTVar2->ArrayNum;
  if (pTVar2 == (TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = pTVar6;
  }
  return pTVar3;
}

// FindOrAdd @ 14711ec60

FConstSharedStruct * __thiscall
FMassEntityManager::TSharedFragmentsContainer<FConstSharedStruct>::FindOrAdd
          (TSharedFragmentsContainer<FConstSharedStruct> *this,uint param_1,UScriptStruct *param_2,
          uchar *param_3)

{
  TMultiMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>_>
  *pTVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FConstSharedStruct *pFVar7;
  UScriptStruct *pUVar8;
  longlong lVar9;
  undefined1 *puVar10;
  UScriptStruct *pUVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  UScriptStruct *pUVar14;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_98 [16];
  TReferenceControllerBase<1> *pTStack_88;
  uint *local_80;
  uint *local_78;
  TMultiMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>_>
  *local_70;
  uint uStack_68;
  int iStack_64;
  int local_60;
  TMultiMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>_>
  *local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  
  iVar2 = *(int *)&(this->HashToInstanceIndexMap).field_0x48;
  pTVar1 = &this->HashToInstanceIndexMap;
  iStack_4c = -1;
  if (iVar2 == 0) {
    local_48 = -1;
  }
  else {
    puVar10 = *(undefined1 **)&(this->HashToInstanceIndexMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->HashToInstanceIndexMap).field_0x38;
    }
    local_48 = *(int *)(puVar10 + ((longlong)iVar2 - 1U & (longlong)(int)param_1) * 4);
    iStack_4c = local_48;
    if (local_48 != -1) {
      do {
        local_48 = *(int *)(*(longlong *)pTVar1 + 8 + (longlong)iStack_4c * 0x10);
        if (*(uint *)(*(longlong *)pTVar1 + (longlong)iStack_4c * 0x10) == param_1) break;
        iStack_4c = local_48;
      } while (local_48 != -1);
    }
  }
  pUVar14 = (UScriptStruct *)0x0;
  local_58 = pTVar1;
  local_70 = pTVar1;
  local_res10[0] = param_1;
  uStack_68 = param_1;
  uStack_50 = param_1;
  iStack_64 = iStack_4c;
  iVar2 = local_48;
  do {
    local_60 = iVar2;
    if (iStack_64 == -1) {
LAB_14711ee45:
      local_98._8_8_ = (int *)0x0;
      pTStack_88 = (TReferenceControllerBase<1> *)0x0;
      FConstSharedStruct::InitializeAs((FConstSharedStruct *)(local_98 + 8),param_2,param_3);
      local_res8[0] = Add(this,(FConstSharedStruct *)(local_98 + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_88);
      local_80 = local_res10;
      local_78 = local_res8;
      TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>,FDefaultSetAllocator>
                  *)&this->HashToInstanceIndexMap,
                 (TPairInitializer<unsigned_int_const_&,int_const_&> *)local_98,(bool *)&local_80);
      lVar9 = (longlong)(int)local_res8[0];
      uVar13 = 0;
      if ((int)local_res8[0] < (this->Instances).ArrayNum) {
        uVar13 = ~local_res8[0] >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FConstSharedStruct *)(*pcVar4)();
          return pFVar7;
        }
      }
      return (FConstSharedStruct *)((this->Instances).AllocatorInstance.Data + lVar9 * 0x10);
    }
    uVar13 = *(uint *)(*(longlong *)pTVar1 + 4 + (longlong)iStack_64 * 0x10);
    uVar6 = 0;
    if ((int)uVar13 < (this->Instances).ArrayNum) {
      uVar6 = ~uVar13 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FConstSharedStruct *)(*pcVar4)();
        return pFVar7;
      }
    }
    pFVar12 = (this->Instances).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
    pUVar3 = (UScriptStruct *)
             ((TSharedPtr<FStructSharedMemory_const_,1> *)&pFVar12->field_0x0)->Object;
    pUVar8 = pUVar14;
    pUVar11 = pUVar14;
    if (pUVar3 != (UScriptStruct *)0x0) {
      pUVar8 = (((TObjectPtr<UScriptStruct_const_> *)&pUVar3->_padding_)->field0_0x0).DebugPtr;
      pUVar11 = pUVar3;
    }
    if (pUVar8 == param_2) {
      pUVar8 = pUVar14;
      if (pUVar3 != (UScriptStruct *)0x0) {
        lVar9 = (longlong)
                *(short *)((longlong)
                           &((((TObjectPtr<UScriptStruct_const_> *)&pUVar11->_padding_)->field0_0x0)
                            .DebugPtr)->_padding_ + 4);
        pUVar8 = (UScriptStruct *)
                 ((longlong)&((TObjectPtr<UScriptStruct_const_> *)&pUVar11->_padding_)->field0_0x0 +
                  lVar9 + 7 & -lVar9);
      }
      bVar5 = UScriptStruct::CompareScriptStruct(param_2,pUVar8,param_3,0);
      if (bVar5) {
        return (FConstSharedStruct *)pFVar12;
      }
    }
    iStack_64 = iVar2;
    if (iVar2 == -1) goto LAB_14711ee45;
    do {
      iVar2 = *(int *)(*(longlong *)pTVar1 + 8 + (longlong)iStack_64 * 0x10);
      if (*(uint *)(*(longlong *)pTVar1 + (longlong)iStack_64 * 0x10) == param_1) break;
      iStack_64 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

// FindOrAdd @ 14711ef30

FSharedStruct * __thiscall
FMassEntityManager::TSharedFragmentsContainer<FSharedStruct>::FindOrAdd
          (TSharedFragmentsContainer<FSharedStruct> *this,uint param_1,UScriptStruct *param_2,
          uchar *param_3)

{
  TMultiMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSharedStruct *pFVar6;
  FStructSharedMemory *pFVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  longlong lVar11;
  undefined1 *puVar12;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_a8 [16];
  FSharedReferencer<1> local_98;
  undefined8 local_90;
  TObjectPtr<UScriptStruct_const_>_u_0 local_88;
  uint *local_80;
  uint *local_78;
  TMultiMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>_>
  *local_70;
  uint uStack_68;
  int iStack_64;
  int local_60;
  TMultiMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>_>
  *local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  
  iVar2 = *(int *)&(this->HashToInstanceIndexMap).field_0x48;
  pTVar1 = &this->HashToInstanceIndexMap;
  iStack_4c = -1;
  if (iVar2 == 0) {
    local_48 = -1;
  }
  else {
    puVar12 = *(undefined1 **)&(this->HashToInstanceIndexMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->HashToInstanceIndexMap).field_0x38;
    }
    local_48 = *(int *)(puVar12 + ((longlong)iVar2 - 1U & (longlong)(int)param_1) * 4);
    iStack_4c = local_48;
    if (local_48 != -1) {
      do {
        local_48 = *(int *)(*(longlong *)pTVar1 + 8 + (longlong)iStack_4c * 0x10);
        if (*(uint *)(*(longlong *)pTVar1 + (longlong)iStack_4c * 0x10) == param_1) break;
        iStack_4c = local_48;
      } while (local_48 != -1);
    }
  }
  TVar9.DebugPtr = (UScriptStruct *)0x0;
  local_58 = pTVar1;
  local_70 = pTVar1;
  local_res10[0] = param_1;
  uStack_68 = param_1;
  uStack_50 = param_1;
  iStack_64 = iStack_4c;
  iVar2 = local_48;
  do {
    local_60 = iVar2;
    if (iStack_64 == -1) {
LAB_14711f11e:
      local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (param_2 == (UScriptStruct *)0x0) {
        local_a8._8_8_ = (FStructSharedMemory *)0x0;
        TVar9.DebugPtr = (UScriptStruct *)0x0;
      }
      else {
        pFVar7 = FStructSharedMemory::CreateImpl(param_2,param_3);
        if (pFVar7 == (FStructSharedMemory *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                             ,0x44,
                             L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FSharedStruct *)(*pcVar3)();
            return pFVar6;
          }
        }
        TVar8.DebugPtr = ::operator_new(0x18);
        if (TVar8.DebugPtr != (UScriptStruct *)0x0) {
          *(undefined4 *)&(TVar8.DebugPtr)->_padding_ = 1;
          (((TObjectPtr<UScriptStruct_const_> *)&(TVar8.DebugPtr)->_padding_)->field0_0x0).DebugPtr
               = (UScriptStruct *)
                 &
                 ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
          ;
          *(undefined4 *)((longlong)&(TVar8.DebugPtr)->_padding_ + 4) = 1;
          (TVar8.DebugPtr)->_padding_ = (longlong)pFVar7;
          TVar9.DebugPtr = TVar8.DebugPtr;
        }
        local_90 = 0;
        local_a8._8_8_ = pFVar7;
        local_88 = TVar9;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_98,(FSharedReferencer<1> *)&local_88.ObjectPtr);
        TVar9 = local_88;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar9.DebugPtr);
      local_res8[0] = Add(this,(FSharedStruct *)(local_a8 + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.ReferenceController);
      local_80 = local_res10;
      local_78 = local_res8;
      TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,1>,FDefaultSetAllocator>
                  *)&this->HashToInstanceIndexMap,
                 (TPairInitializer<unsigned_int_const_&,int_const_&> *)local_a8,(bool *)&local_80);
      lVar11 = (longlong)(int)local_res8[0];
      uVar14 = 0;
      if ((int)local_res8[0] < (this->Instances).ArrayNum) {
        uVar14 = ~local_res8[0] >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FSharedStruct *)(*pcVar3)();
          return pFVar6;
        }
      }
      return (FSharedStruct *)((this->Instances).AllocatorInstance.Data + lVar11 * 0x10);
    }
    uVar14 = *(uint *)(*(longlong *)pTVar1 + 4 + (longlong)iStack_64 * 0x10);
    uVar5 = 0;
    if ((int)uVar14 < (this->Instances).ArrayNum) {
      uVar5 = ~uVar14 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSharedStruct *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar15 = (this->Instances).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
    TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)
            ((TSharedPtr<FStructSharedMemory,1> *)&pFVar15->field_0x0)->Object;
    TVar10.DebugPtr = TVar9.DebugPtr;
    TVar13.DebugPtr = TVar9.DebugPtr;
    if (TVar8.DebugPtr != (UScriptStruct *)0x0) {
      TVar10.DebugPtr =
           (((TObjectPtr<UScriptStruct_const_> *)&(TVar8.DebugPtr)->_padding_)->field0_0x0).DebugPtr
      ;
      TVar13 = TVar8;
    }
    if (TVar10.DebugPtr == param_2) {
      TVar10.DebugPtr = TVar9.DebugPtr;
      if (TVar8.DebugPtr != (UScriptStruct *)0x0) {
        lVar11 = (longlong)
                 *(short *)((longlong)
                            &((((TObjectPtr<UScriptStruct_const_> *)&(TVar13.DebugPtr)->_padding_)->
                              field0_0x0).DebugPtr)->_padding_ + 4);
        TVar10.DebugPtr =
             (UScriptStruct *)
             ((longlong)
              &((TObjectPtr<UScriptStruct_const_> *)&(TVar13.DebugPtr)->_padding_)->field0_0x0 +
              lVar11 + 7 & -lVar11);
      }
      bVar4 = UScriptStruct::CompareScriptStruct(param_2,TVar10.DebugPtr,param_3,0);
      if (bVar4) {
        return (FSharedStruct *)pFVar15;
      }
    }
    iStack_64 = iVar2;
    if (iVar2 == -1) goto LAB_14711f11e;
    do {
      iVar2 = *(int *)(*(longlong *)pTVar1 + 8 + (longlong)iStack_64 * 0x10);
      if (*(uint *)(*(longlong *)pTVar1 + (longlong)iStack_64 * 0x10) == param_1) break;
      iStack_64 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

