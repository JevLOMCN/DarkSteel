// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FCsvStatRegister @ 1419163a0

FCsvStatRegister * __thiscall FCsvStatRegister::FCsvStatRegister(FCsvStatRegister *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  
  pTVar2 = &this->StatNames;
  *(undefined8 *)&this->StatIDToIndex = 0;
  piVar1 = &(this->StatNames).ArrayMax;
  *(undefined8 *)&(this->StatIDToIndex).field_0x8 = 0;
  piVar3 = &(this->StatCategoryIndices).ArrayMax;
  *(undefined8 *)&(this->StatIDToIndex).field_0x20 = 0;
  piVar4 = &(this->StatFlags).ArrayMax;
  *(undefined4 *)&(this->StatIDToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->StatIDToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatIDToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatIDToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->StatIDToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->StatIDToIndex).field_0x48 = 0;
  *(undefined8 *)&this->AnsiStringStatIDToIndex = 0;
  *(undefined8 *)&(this->AnsiStringStatIDToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->AnsiStringStatIDToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->AnsiStringStatIDToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x48 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StatNames).ArrayNum = 0;
  *piVar1 = 0;
  (this->StatCategoryIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatCategoryIndices).ArrayNum = 0;
  *piVar3 = 0;
  (this->StatFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatFlags).ArrayNum = 0;
  *piVar4 = 0;
  this->StatIndexCount = 0;
  if (*(int *)&(this->StatIDToIndex).field_0x8 != *(int *)&(this->StatIDToIndex).field_0x34) {
    TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                      *)this);
    *(undefined4 *)&(this->StatIDToIndex).field_0x8 = 0;
    if (*(int *)&(this->StatIDToIndex).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)&(this->StatIDToIndex).field_0xc);
    }
    *(undefined4 *)&(this->StatIDToIndex).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->StatIDToIndex).field_0x34 = 0;
    *(undefined4 *)&(this->StatIDToIndex).field_0x28 = 0;
  }
  if (*(int *)&(this->AnsiStringStatIDToIndex).field_0x8 !=
      *(int *)&(this->AnsiStringStatIDToIndex).field_0x34) {
    TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                      *)&this->AnsiStringStatIDToIndex);
    *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x8 = 0;
    if (*(int *)&(this->AnsiStringStatIDToIndex).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->AnsiStringStatIDToIndex,0,
                 (int *)&(this->AnsiStringStatIDToIndex).field_0xc);
    }
    *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x34 = 0;
    *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x28 = 0;
  }
  DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,(this->StatNames).ArrayNum)
  ;
  (this->StatNames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  (this->StatCategoryIndices).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->StatCategoryIndices).AllocatorInstance,0,piVar3);
  }
  (this->StatFlags).ArrayNum = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->StatFlags).AllocatorInstance,0,piVar4);
  }
  return this;
}

// ~FCsvStatRegister @ 14191ba40

void __thiscall FCsvStatRegister::~FCsvStatRegister(FCsvStatRegister *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->StatFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatCategoryIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->StatNames).AllocatorInstance.Data,(this->StatNames).ArrayNum);
  pFVar1 = (this->StatNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AnsiStringStatIDToIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnsiStringStatIDToIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnsiStringStatIDToIndex);
  *(undefined4 *)&(this->StatIDToIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StatIDToIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetStatName @ 14194b7d0

FString * __thiscall FCsvStatRegister::GetStatName(FCsvStatRegister *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->StatNames).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FString *)((this->StatNames).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetUniqueIndex @ 14194bfa0

int __thiscall
FCsvStatRegister::GetUniqueIndex
          (FCsvStatRegister *this,ulong64 param_1,int param_2,bool param_3,bool param_4)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  void *_Src;
  code *pcVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  FNameEntry *this_00;
  FString *pFVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20 [2];
  FScriptContainerElement local_b8 [8];
  FString local_b0;
  ulonglong local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  int *local_80;
  ulonglong *local_78;
  uint *local_70;
  int **local_68;
  uint *local_60;
  ulonglong *local_58;
  uint *local_50;
  FString local_48;
  
  uVar8 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread) {
    uVar8 = GGameThreadId;
  }
  local_res18 = param_2;
  DVar6 = GetCurrentThreadId();
  if ((DVar6 != uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInCsvProcessingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x5cd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  uVar8 = local_res18;
  if ((0x7ff < local_res18) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCategoryIndex < CSV_MAX_CATEGORY_COUNT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0x12a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  uVar13 = (((ulonglong)(uVar8 & 0x7ff) | param_1 << 0xb) * 2 | (ulonglong)param_4) * 2 |
           (ulonglong)param_3;
  local_a0 = uVar13;
  piVar10 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
            ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                    *)this,uVar13);
  if (piVar10 != (int *)0x0) {
    return *piVar10;
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  if (param_3) {
    if (((param_1 & 0x7ffffffffffff) != param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InStatIDRaw & FNameOrIndexMask) == InStatIDRaw",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                           ,0x5de,L""), uVar13 = local_a0, bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    this_00 = ::FName::GetEntry((FNameEntryId)(uint)(uVar13 >> 0xd));
    pFVar11 = FNameEntry::GetPlainNameString(this_00,&local_48);
    if (&local_b0 != pFVar11) {
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      local_b0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_b0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar8 = FAnsiStringRegister::GetUniqueStringIndex((char *)param_1);
    local_80 = (int *)((ulonglong)uVar8 << 0xd | (ulonglong)((uint)local_a0 & 0x1fff));
    puVar12 = (uint *)TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                      ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                              *)&this->AnsiStringStatIDToIndex,(ulong64)local_80);
    if (puVar12 != (uint *)0x0) {
      local_res20[0] = *puVar12;
      local_78 = &local_a0;
      local_70 = local_res20;
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,int_const_&>_>
                ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<unsigned___int64_const_&,int_const_&> *)local_res10,
                 (bool *)&local_78);
      goto LAB_14194c4f3;
    }
    local_res8[0] = this->StatIndexCount;
    local_68 = &local_80;
    local_60 = local_res8;
    TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,int_&&>_>
              ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                *)&this->AnsiStringStatIDToIndex,
               (TPairInitializer<unsigned___int64_const_&,int_&&> *)local_88,(bool *)&local_68);
    uVar9 = 0;
    if ((int)uVar8 < UniqueNonFNameStatIDIndices.ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    local_98.Data = (FScriptContainerElement *)0x0;
    iVar7 = *(int *)(UniqueNonFNameStatIDIndices.AllocatorInstance.Data +
                    (longlong)(int)uVar8 * 0x10 + 8);
    _Src = *(void **)(UniqueNonFNameStatIDIndices.AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 0x10);
    local_90._0_4_ = iVar7;
    if (iVar7 == 0) {
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_98,iVar7,(int *)((longlong)&local_90 + 4));
      memcpy(local_98.Data,_Src,(longlong)iVar7 * 2);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    local_b0.Data.AllocatorInstance.Data = local_98.Data;
    local_b0.Data.ArrayNum = (int)local_90;
    local_b0.Data.ArrayMax = local_90._4_4_;
    local_90 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
  }
  local_res20[0] = this->StatIndexCount;
  local_58 = &local_a0;
  local_50 = local_res20;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,int_const_&>_>
            ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<unsigned___int64_const_&,int_const_&> *)(local_88 + 4),
             (bool *)&local_58);
  this->StatIndexCount = this->StatIndexCount + 1;
  pTVar1 = &this->StatNames;
  pFVar15 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar15 <= (FScriptContainerElement *)&local_b0) &&
      ((FScriptContainerElement *)&local_b0 < pFVar15 + (longlong)(this->StatNames).ArrayMax * 0x10)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = (this->StatNames).ArrayNum;
  piVar10 = &(this->StatNames).ArrayMax;
  if (iVar7 == *piVar10) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar10);
  }
  _Src_00.Data = local_b0.Data.AllocatorInstance.Data;
  (this->StatNames).ArrayNum = iVar7 + 1;
  pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar15 = 0;
  lVar14 = (longlong)local_b0.Data.ArrayNum;
  *(int *)(pFVar15 + 8) = local_b0.Data.ArrayNum;
  if (local_b0.Data.ArrayNum == 0) {
    *(int *)(pFVar15 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_b0.Data.ArrayNum,
               (int *)(pFVar15 + 0xc));
    memcpy(*(void **)pFVar15,_Src_00.Data,lVar14 * 2);
  }
  pTVar2 = &this->StatCategoryIndices;
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar15 <= (FScriptContainerElement *)&local_res18) &&
      ((FScriptContainerElement *)&local_res18 <
       pFVar15 + (longlong)(this->StatCategoryIndices).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = (this->StatCategoryIndices).ArrayNum;
  piVar10 = &(this->StatCategoryIndices).ArrayMax;
  if (iVar7 == *piVar10) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar10);
  }
  (this->StatCategoryIndices).ArrayNum = iVar7 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res18;
  local_b8[0] = (FScriptContainerElement)param_4;
  pTVar3 = &this->StatFlags;
  pFVar15 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar15 <= local_b8) && (local_b8 < pFVar15 + (this->StatFlags).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = (this->StatFlags).ArrayNum;
  piVar10 = &(this->StatFlags).ArrayMax;
  if (iVar7 == *piVar10) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,piVar10);
  }
  (this->StatFlags).ArrayNum = iVar7 + 1;
  (pTVar3->AllocatorInstance).Data[iVar7] = local_b8[0];
LAB_14194c4f3:
  uVar8 = local_res20[0];
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return uVar8;
}

