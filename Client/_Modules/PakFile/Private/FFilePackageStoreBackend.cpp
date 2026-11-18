// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 15

// ~FFilePackageStoreBackend @ 142a563f0

void __thiscall FFilePackageStoreBackend::~FFilePackageStoreBackend(FFilePackageStoreBackend *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  *(undefined4 *)&(this->LocalizedPackages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LocalizedPackages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalizedPackages);
  *(undefined4 *)&(this->RedirectsPackageMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RedirectsPackageMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RedirectsPackageMap);
  pFVar2 = (this->EntryData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMemory::Free((this->PackageEntries).Slots);
  FMemory::Free((this->PackageEntries).Values);
  (this->PackageEntries).MaxValues = 0;
  (this->PackageEntries).SlotBits = 0;
  (this->PackageEntries).Slots = (uint *)0x0;
  (this->PackageEntries).Values = (ushort *)0x0;
  pFVar2 = (this->MountedContainers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UpdateLock);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  }
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  return;
}

// AddNewEntryData @ 142a5d960

FEntryHandle __thiscall
FFilePackageStoreBackend::AddNewEntryData
          (FFilePackageStoreBackend *this,FFilePackageStoreEntry *param_1,
          FFilePackageStoreEntrySoftReferences *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FEntryHandle FVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  longlong lVar13;
  int *in_R9;
  uint local_48 [2];
  uint local_40 [2];
  int local_38 [2];
  undefined4 local_30 [2];
  
  piVar1 = &(this->EntryData).ArrayNum;
  if ((0x1fffffff < (uint)(this->EntryData).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntryData.Num() < (1u << FEntryHandle::OffsetBits)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x1e2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar8 = (FEntryHandle)(*pcVar6)();
    return FVar8;
  }
  uVar3 = param_2[1].Indices.ArrayNum;
  uVar4 = (param_2->Indices).ArrayNum;
  uVar12 = *piVar1 & 0x1fffffff;
  (param_1->ImportedPackages).ArrayNum = uVar12;
  if ((uVar3 + uVar4 == 0) && ((in_R9 == (int *)0x0 || (*in_R9 == 0)))) {
    pFVar5 = (this->EntryData).AllocatorInstance.Data;
    local_30[0] = 0;
    if (((pFVar5 <= (FScriptContainerElement *)local_30) &&
        ((FScriptContainerElement *)local_30 < pFVar5 + (longlong)(this->EntryData).ArrayMax * 4))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    iVar9 = (this->EntryData).ArrayNum;
    piVar1 = &(this->EntryData).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->EntryData).AllocatorInstance,piVar1);
    }
    (this->EntryData).ArrayNum = iVar9 + 1;
    *(undefined4 *)((this->EntryData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_30[0];
  }
  else {
    if (uVar4 != 0) {
      pFVar5 = (this->EntryData).AllocatorInstance.Data;
      pvVar11 = (void *)((longlong)&(param_2->Indices).ArrayNum +
                        (ulonglong)(param_2->Indices).OffsetToDataFromThis);
      (param_1->ImportedPackages).ArrayNum = uVar12 | 0x20000000;
      local_48[0] = uVar4;
      if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)(this->EntryData).ArrayMax * 4))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEntryHandle)(*pcVar6)();
        return FVar8;
      }
      iVar9 = (this->EntryData).ArrayNum;
      piVar2 = &(this->EntryData).ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->EntryData).AllocatorInstance,piVar2);
      }
      (this->EntryData).ArrayNum = iVar9 + 1;
      *(uint *)((this->EntryData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_48[0];
      iVar9 = local_48[0] * 2;
      if (((pvVar11 == (void *)0x0) && (iVar9 != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEntryHandle)(*pcVar6)();
        return FVar8;
      }
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar9,&(this->EntryData).AllocatorInstance,piVar1,piVar2);
      if (iVar9 != 0) {
        memcpy((this->EntryData).AllocatorInstance.Data + (longlong)iVar10 * 4,pvVar11,
               (longlong)iVar9 << 2);
      }
    }
    uVar3 = param_2[1].Indices.ArrayNum;
    if (uVar3 != 0) {
      uVar4 = param_2[1].Indices.OffsetToDataFromThis;
      (param_1->ImportedPackages).ArrayNum = (param_1->ImportedPackages).ArrayNum | 0x40000000;
      pvVar11 = (void *)((longlong)&param_2[1].Indices.ArrayNum + (ulonglong)uVar4);
      pFVar5 = (this->EntryData).AllocatorInstance.Data;
      local_40[0] = uVar3;
      if (((pFVar5 <= (FScriptContainerElement *)local_40) &&
          ((FScriptContainerElement *)local_40 < pFVar5 + (longlong)(this->EntryData).ArrayMax * 4))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEntryHandle)(*pcVar6)();
        return FVar8;
      }
      iVar9 = (this->EntryData).ArrayNum;
      piVar1 = &(this->EntryData).ArrayNum;
      piVar2 = &(this->EntryData).ArrayMax;
      if (iVar9 == (this->EntryData).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->EntryData).AllocatorInstance,piVar2);
      }
      *piVar1 = iVar9 + 1;
      *(uint *)((this->EntryData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_40[0];
      iVar9 = local_40[0] * 5;
      if (((pvVar11 == (void *)0x0) && (iVar9 != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEntryHandle)(*pcVar6)();
        return FVar8;
      }
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar9,&(this->EntryData).AllocatorInstance,piVar1,piVar2);
      if (iVar9 != 0) {
        memcpy((this->EntryData).AllocatorInstance.Data + (longlong)iVar10 * 4,pvVar11,
               (longlong)iVar9 << 2);
      }
    }
    if ((in_R9 != (int *)0x0) && (iVar9 = *in_R9, iVar9 != 0)) {
      uVar3 = in_R9[1];
      (param_1->ImportedPackages).ArrayNum = (param_1->ImportedPackages).ArrayNum | 0x80000000;
      pFVar5 = (this->EntryData).AllocatorInstance.Data;
      local_38[0] = iVar9;
      if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
         (((FScriptContainerElement *)local_38 < pFVar5 + (longlong)(this->EntryData).ArrayMax * 4
          && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)))) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEntryHandle)(*pcVar6)();
        return FVar8;
      }
      iVar9 = (this->EntryData).ArrayNum;
      piVar1 = &(this->EntryData).ArrayNum;
      piVar2 = &(this->EntryData).ArrayMax;
      if (iVar9 == (this->EntryData).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->EntryData).AllocatorInstance,piVar2);
      }
      iVar10 = local_38[0];
      pFVar5 = (this->EntryData).AllocatorInstance.Data;
      *piVar1 = iVar9 + 1;
      *(int *)(pFVar5 + (longlong)iVar9 * 4) = local_38[0];
      lVar13 = (longlong)local_38[0];
      if ((((void *)((ulonglong)uVar3 + (longlong)in_R9) == (void *)0x0) && (local_38[0] != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEntryHandle)(*pcVar6)();
        return FVar8;
      }
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar10,&(this->EntryData).AllocatorInstance,piVar1,piVar2);
      if (iVar10 != 0) {
        memcpy((this->EntryData).AllocatorInstance.Data + (longlong)iVar9 * 4,
               (void *)((ulonglong)uVar3 + (longlong)in_R9),lVar13 << 2);
      }
    }
  }
  if (((uint)(this->EntryData).ArrayNum <= ((param_1->ImportedPackages).ArrayNum & 0x1fffffff)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)EntryData.Num() > Out.Offset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x205,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar8 = (FEntryHandle)(*pcVar6)();
    return FVar8;
  }
  return SUB84(param_1,0);
}

// AddOldEntryData @ 142a5df20

FEntryHandle __thiscall
FFilePackageStoreBackend::AddOldEntryData
          (FFilePackageStoreBackend *this,FEntryHandle param_1,
          TArrayView<unsigned_int_const_,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FEntryHandle FVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_register_00000014;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *in_R9;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined4 local_58 [2];
  int *local_50;
  longlong local_48;
  int *local_40;
  
  piVar1 = &(this->EntryData).ArrayNum;
  if ((0x1fffffff < (uint)(this->EntryData).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntryData.Num() < (1u << FEntryHandle::OffsetBits)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x20b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar8 = (FEntryHandle)(*pcVar6)();
    return FVar8;
  }
  uVar12 = (uint)param_2;
  *(uint *)CONCAT44(in_register_00000014,param_1) = (*piVar1 ^ uVar12) & 0x1fffffff ^ uVar12;
  if (((uint)((ulonglong)param_2 >> 0x1e) & 1) + ((uint)((ulonglong)param_2 >> 0x1d) & 1) +
      ((uint)((ulonglong)param_2 >> 0x1f) & 1) == 0) {
    pFVar4 = (this->EntryData).AllocatorInstance.Data;
    local_58[0] = 0;
    if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 < pFVar4 + (longlong)(this->EntryData).ArrayMax * 4))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    iVar9 = (this->EntryData).ArrayNum;
    piVar3 = &(this->EntryData).ArrayMax;
    if (iVar9 == *piVar3) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->EntryData).AllocatorInstance,piVar3);
    }
    (this->EntryData).ArrayNum = iVar9 + 1;
    *(undefined4 *)((this->EntryData).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_58[0];
  }
  else {
    iVar9 = (int)in_R9[1];
    if ((iVar9 <= (int)(uVar12 & 0x1fffffff)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    uVar14 = 0;
    piVar3 = (int *)(*in_R9 + (ulonglong)(uVar12 & 0x1fffffff) * 4);
    uVar12 = 0;
    uVar13 = uVar14;
    if (((ulonglong)param_2 >> 0x1d & 1) != 0) {
      uVar13 = (ulonglong)(*piVar3 * 2 + 1);
    }
    iVar11 = (int)uVar13;
    local_50 = piVar3 + uVar13;
    if (((int *)(*in_R9 + (longlong)iVar9 * 4) < local_50) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("It + NumPackageWords <= OldEntryData.end()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x217,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    pTVar15 = &this->EntryData;
    if (((piVar3 == (int *)0x0) && (iVar11 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    local_40 = &(this->EntryData).ArrayMax;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar11,&pTVar15->AllocatorInstance,piVar1,local_40);
    if (iVar11 != 0) {
      memcpy((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 4,piVar3,(longlong)iVar11 << 2);
    }
    if (((ulonglong)param_2 >> 0x1e & 1) != 0) {
      uVar12 = *local_50 * 5 + 1;
    }
    lVar5 = *in_R9;
    piVar3 = local_50 + uVar12;
    if (((int *)(lVar5 + (longlong)iVar9 * 4) < piVar3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("It + NumShaderWords <= OldEntryData.end()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x21d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    local_48 = lVar5;
    if (((local_50 == (int *)0x0) && (uVar12 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    piVar2 = &(this->EntryData).ArrayMax;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar12,&pTVar15->AllocatorInstance,piVar1,piVar2);
    if (uVar12 != 0) {
      memcpy((pTVar15->AllocatorInstance).Data + (longlong)iVar11 * 4,local_50,
             (longlong)(int)uVar12 << 2);
    }
    if (((ulonglong)param_2 >> 0x1f & 1) != 0) {
      uVar14 = (ulonglong)(*piVar3 + 1);
    }
    if (((int *)(local_48 + (longlong)iVar9 * 4) < piVar3 + uVar14) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("It + NumSoftRefWords <= OldEntryData.end()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x223,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    iVar9 = (int)uVar14;
    if (((piVar3 == (int *)0x0) && (iVar9 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEntryHandle)(*pcVar6)();
      return FVar8;
    }
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar9,&pTVar15->AllocatorInstance,piVar1,piVar2);
    if (iVar9 != 0) {
      memcpy((pTVar15->AllocatorInstance).Data + (longlong)iVar11 * 4,piVar3,(longlong)iVar9 << 2);
    }
  }
  if (((uint)*piVar1 <= (*(uint *)CONCAT44(in_register_00000014,param_1) & 0x1fffffff)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)EntryData.Num() > Out.Offset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x227,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar8 = (FEntryHandle)(*pcVar6)();
    return FVar8;
  }
  return param_1;
}

// BeginRead @ 142a5ffe0

void __thiscall FFilePackageStoreBackend::BeginRead(FFilePackageStoreBackend *this)

{
  AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
  if (this->bNeedsContainerUpdate != false) {
    Update(this);
    return;
  }
  return;
}

// EndRead @ 142a6bdf0

void __thiscall FFilePackageStoreBackend::EndRead(FFilePackageStoreBackend *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a6bdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  return;
}

// GetImportedPackages @ 142a75140

TArrayView<FPackageId_const_,int> * __thiscall
FFilePackageStoreBackend::GetImportedPackages
          (FFilePackageStoreBackend *this,TArrayView<FPackageId_const_,int> *__return_storage_ptr__,
          FEntryHandle param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  TArrayView<unsigned_int_const_,int> *pTVar6;
  TArrayView<FPackageId_const_,int> *pTVar7;
  uint uVar8;
  int iStack_20;
  TArrayView<unsigned_int_const_,int> local_18;
  
  if (param_1.HasPackageIds == 0) {
    __return_storage_ptr__->DataPtr = (FPackageId *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  pTVar6 = TArrayView<unsigned_int_const_,int>::
           TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                     (&local_18,&this->EntryData);
  uVar8 = param_1.Offset;
  pFVar3 = (FScriptContainerElement *)pTVar6->DataPtr;
  uVar4 = *(undefined8 *)&pTVar6->ArrayNum;
  if (((this->EntryData).ArrayNum <= (int)uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
    return pTVar7;
  }
  pFVar1 = (this->EntryData).AllocatorInstance.Data + (ulonglong)uVar8 * 4;
  if ((pFVar1 < pFVar3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumHeader >= Bounds.GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x22e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
    return pTVar7;
  }
  uVar8 = *(uint *)pFVar1;
  __return_storage_ptr__->DataPtr = (FPackageId *)(pFVar1 + 4);
  __return_storage_ptr__->ArrayNum = uVar8;
  if (((int)uVar8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
    return pTVar7;
  }
  if ((__return_storage_ptr__->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Out.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x230,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
    return pTVar7;
  }
  iStack_20 = (int)uVar4;
  if ((pFVar3 + (longlong)iStack_20 * 4 <
       (FScriptContainerElement *)
       (__return_storage_ptr__->DataPtr + __return_storage_ptr__->ArrayNum)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x231,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TArrayView<FPackageId_const_,int> *)(*pcVar2)();
    return pTVar7;
  }
  return __return_storage_ptr__;
}

// GetPackageRedirectInfo @ 142a760f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FFilePackageStoreBackend::GetPackageRedirectInfo
          (FFilePackageStoreBackend *this,FPackageId param_1,FName *param_2,FPackageId *param_3)

{
  longlong lVar1;
  int iVar2;
  FPackageLocalizationManager *this_00;
  FEntryHandle *pFVar3;
  ulong64 *puVar4;
  ForAnyElementType FVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  longlong local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (*(int *)&(this->RedirectsPackageMap).field_0x8 !=
      *(int *)&(this->RedirectsPackageMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->RedirectsPackageMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RedirectsPackageMap).field_0x38;
    }
    iVar2 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->RedirectsPackageMap).field_0x48 - 1) &
                              param_1.Id & 0xffffffff) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (ulong64 *)((longlong)iVar2 * 0x20 + *(longlong *)&this->RedirectsPackageMap);
        if (*puVar4 == param_1.Id) {
          pFVar6 = (FName *)(puVar4 + 1);
          if (puVar4 == (ulong64 *)0x0) {
            pFVar6 = (FName *)0x0;
          }
          if (pFVar6 != (FName *)0x0) {
            *param_2 = *pFVar6;
            param_3->Id = (ulong64)pFVar6[1];
            if ((byte)LogFilePackageStore._0_1_ < 6) {
              return true;
            }
            ::LexToString(&local_28,param_3);
            ::FName::ToString(param_2,&local_38);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogFilePackageStore);
            FVar5.Data = local_28.Data.AllocatorInstance.Data;
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
              FVar5.Data = local_28.Data.AllocatorInstance.Data;
            }
            goto LAB_142a7634b;
          }
          break;
        }
        iVar2 = (int)puVar4[3];
      } while (iVar2 != -1);
    }
  }
  if (*(int *)&(this->LocalizedPackages).field_0x8 != *(int *)&(this->LocalizedPackages).field_0x34)
  {
    puVar7 = *(undefined1 **)&(this->LocalizedPackages).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->LocalizedPackages).field_0x38;
    }
    iVar2 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->LocalizedPackages).field_0x48 - 1) &
                              param_1.Id & 0xffffffff) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->LocalizedPackages + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->LocalizedPackages + (longlong)iVar2 * 0x18) ==
            param_1.Id) {
          pFVar6 = (FName *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar6 = (FName *)0x0;
          }
          if (pFVar6 == (FName *)0x0) {
            return false;
          }
          this_00 = FPackageLocalizationManager::Get();
          FPackageLocalizationManager::FindLocalizedPackageName(this_00,(FName)&local_res8);
          if (local_res8 == 0) {
            return false;
          }
          FPackageId::FromName(&local_res10);
          pFVar3 = UE::FilePackageStorePrivate::FPackageIdMap::Find
                             (&this->PackageEntries,(FPackageId)local_res10);
          if (pFVar3 == (FEntryHandle *)0x0) {
            return false;
          }
          *param_2 = *pFVar6;
          param_3->Id = (ulong64)local_res10;
          if (5 < (byte)LogFilePackageStore._0_1_) {
            ::LexToString(&local_38,param_3);
            ::FName::ToString(param_2,&local_28);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogFilePackageStore);
            FVar5.Data = local_38.Data.AllocatorInstance.Data;
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
              FVar5.Data = local_38.Data.AllocatorInstance.Data;
            }
LAB_142a7634b:
            if (FVar5.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar5.Data);
            }
          }
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// GetPackageStoreEntry @ 142a76370

EPackageStoreEntryStatus __thiscall
FFilePackageStoreBackend::GetPackageStoreEntry
          (FFilePackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FEntryHandle FVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  EPackageStoreEntryStatus EVar9;
  FEntryHandle *pFVar10;
  TArrayView<unsigned_int_const_,int> *pTVar11;
  TArrayView<FSHAHash_const_,int> *pTVar12;
  uint uVar13;
  FScriptContainerElement *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  int iStack_30;
  TArrayView<unsigned_int_const_,int> local_28;
  TArrayView<FSHAHash_const_,int> local_18;
  
  pFVar10 = UE::FilePackageStorePrivate::FPackageIdMap::Find(&this->PackageEntries,param_1);
  if (pFVar10 == (FEntryHandle *)0x0) {
    return Missing;
  }
  uVar13 = pFVar10->HasPackageIds;
  if (pFVar10->HasShaderMaps + uVar13 == (int)*pFVar10 >> 0x1f) {
    return Ok;
  }
  if (uVar13 == 0) {
    local_48 = (FScriptContainerElement *)0x0;
    uStack_40 = 0;
    goto LAB_142a76531;
  }
  pTVar11 = TArrayView<unsigned_int_const_,int>::
            TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                      (&local_28,&this->EntryData);
  uVar13 = pFVar10->Offset;
  pFVar3 = (FScriptContainerElement *)pTVar11->DataPtr;
  uVar4 = *(undefined8 *)&pTVar11->ArrayNum;
  if (((this->EntryData).ArrayNum <= (int)uVar13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    EVar9 = (*pcVar2)();
    return EVar9;
  }
  pFVar1 = (this->EntryData).AllocatorInstance.Data + (ulonglong)uVar13 * 4;
  if ((pFVar1 < pFVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumHeader >= Bounds.GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x22e,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    EVar9 = (*pcVar2)();
    return EVar9;
  }
  local_48 = pFVar1 + 4;
  uStack_40 = *(uint *)pFVar1;
  if ((int)uStack_40 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      EVar9 = (*pcVar2)();
      return EVar9;
    }
LAB_142a764b5:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Out.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x230,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      EVar9 = (*pcVar2)();
      return EVar9;
    }
  }
  else if ((int)uStack_40 < 1) goto LAB_142a764b5;
  iStack_30 = (int)uVar4;
  if ((pFVar3 + (longlong)iStack_30 * 4 < local_48 + (longlong)(int)uStack_40 * 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x231,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    EVar9 = (*pcVar2)();
    return EVar9;
  }
LAB_142a76531:
  (param_3->ImportedPackageIds).DataPtr = (FPackageId *)local_48;
  *(ulonglong *)&(param_3->ImportedPackageIds).ArrayNum = CONCAT44(uStack_3c,uStack_40);
  pTVar12 = GetShaderHashes(this,&local_18,*pFVar10);
  iVar6 = pTVar12->ArrayNum;
  uVar7 = *(undefined4 *)&pTVar12->field_0xc;
  (param_3->ShaderMapHashes).DataPtr = pTVar12->DataPtr;
  (param_3->ShaderMapHashes).ArrayNum = iVar6;
  *(undefined4 *)&(param_3->ShaderMapHashes).field_0xc = uVar7;
  return Ok;
}

// GetShaderHashes @ 142a78c90

TArrayView<FSHAHash_const_,int> * __thiscall
FFilePackageStoreBackend::GetShaderHashes
          (FFilePackageStoreBackend *this,TArrayView<FSHAHash_const_,int> *__return_storage_ptr__,
          FEntryHandle param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  TArrayView<FSHAHash_const_,int> *pTVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  int iStack_20;
  TArrayView<unsigned_int_const_,int> local_18;
  
  if (param_1.HasShaderMaps == 0) {
    __return_storage_ptr__->DataPtr = (FSHAHash *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  uVar9 = param_1.Offset;
  if ((this->EntryData).ArrayNum <= (int)uVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pFVar1 = (this->EntryData).AllocatorInstance.Data + (ulonglong)uVar9 * 4;
  if (param_1.HasPackageIds == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)(*(int *)pFVar1 * 2 + 1);
  }
  pTVar7 = TArrayView<unsigned_int_const_,int>::
           TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                     (&local_18,&this->EntryData);
  pFVar3 = (FScriptContainerElement *)pTVar7->DataPtr;
  uVar4 = *(undefined8 *)&pTVar7->ArrayNum;
  pFVar1 = pFVar1 + uVar8 * 4;
  if (pFVar1 < pFVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumHeader >= Bounds.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x22e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  uVar9 = *(uint *)pFVar1;
  __return_storage_ptr__->DataPtr = (FSHAHash *)(pFVar1 + 4);
  __return_storage_ptr__->ArrayNum = uVar9;
  if ((int)uVar9 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Out.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x230,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iStack_20 = (int)uVar4;
  if (pFVar3 + (longlong)iStack_20 * 4 <
      (FScriptContainerElement *)
      (__return_storage_ptr__->DataPtr + __return_storage_ptr__->ArrayNum)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x231,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FSHAHash_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetSoftReferenceIndices @ 142a794c0

TArrayView<unsigned_int_const_,int> * __thiscall
FFilePackageStoreBackend::GetSoftReferenceIndices
          (FFilePackageStoreBackend *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,FEntryHandle param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  TArrayView<unsigned_int_const_,int> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  int iStack_20;
  TArrayView<unsigned_int_const_,int> local_18;
  
  if (!(BADTYPE)param_1.HasSoftRefs) {
    __return_storage_ptr__->DataPtr = (uint *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  uVar7 = param_1.Offset;
  if ((this->EntryData).ArrayNum <= (int)uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pFVar1 = (this->EntryData).AllocatorInstance.Data + (ulonglong)uVar7 * 4;
  if (param_1.HasPackageIds == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)(*(int *)pFVar1 * 2 + 1);
  }
  if (param_1.HasShaderMaps != 0) {
    uVar8 = (ulonglong)(uint)((int)uVar8 + *(int *)(pFVar1 + uVar8 * 4) * 5 + 1);
  }
  pTVar6 = TArrayView<unsigned_int_const_,int>::
           TArrayView<unsigned_int_const_,int><TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                     (&local_18,&this->EntryData);
  pFVar3 = (FScriptContainerElement *)pTVar6->DataPtr;
  uVar4 = *(undefined8 *)&pTVar6->ArrayNum;
  pFVar1 = pFVar1 + uVar8 * 4;
  if (pFVar1 < pFVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumHeader >= Bounds.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x22e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  uVar7 = *(uint *)pFVar1;
  __return_storage_ptr__->DataPtr = (uint *)(pFVar1 + 4);
  __return_storage_ptr__->ArrayNum = uVar7;
  if ((int)uVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Out.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x230,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iStack_20 = (int)uVar4;
  if (pFVar3 + (longlong)iStack_20 * 4 <
      (FScriptContainerElement *)
      (__return_storage_ptr__->DataPtr + __return_storage_ptr__->ArrayNum)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("reinterpret_cast<const uint32*>(Out.end()) <= Bounds.end()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                       ,0x231,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetSoftReferences @ 142a796a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<unsigned_int_const_,int> * __thiscall
FFilePackageStoreBackend::GetSoftReferences
          (FFilePackageStoreBackend *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,FPackageId param_1,
          TArrayView<FPackageId_const_,int> *param_2)

{
  int iVar1;
  FPackageId *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FEntryHandle *pFVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FPackageId local_res18;
  undefined4 uStack_5c;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res18.Id = param_1.Id;
  pFVar6 = UE::FilePackageStorePrivate::FPackageIdMap::Find(&this->PackageEntries,param_1);
  if ((pFVar6 != (FEntryHandle *)0x0) && ((BADTYPE)pFVar6->HasSoftRefs)) {
    iVar1 = (this->MountedContainers).ArrayNum;
    pFVar8 = (this->MountedContainers).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->MountedContainers).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::FilePackageStorePrivate::FMountedContainer,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar9) goto LAB_142a7981c;
      uVar5 = pFVar6->Offset;
      if ((*(uint *)(pFVar8 + 0x14) <= uVar5) && (uVar5 <= *(uint *)(pFVar8 + 0x18))) break;
      pFVar8 = pFVar8 + 0x20;
    }
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      if ((*(char *)((longlong)&(*(FIoContainerId **)pFVar8)[0x15].Id + 1) == '\0') &&
         (1 < (byte)LogFilePackageStore._0_1_)) {
        ::LexToString(&local_48,*(FIoContainerId **)pFVar8);
        ::LexToString(&local_58,&local_res18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFilePackageStore);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pFVar2 = *(FPackageId **)(*(longlong *)pFVar8 + 0x88);
      iVar1 = *(int *)(*(longlong *)pFVar8 + 0x90);
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
      param_2->DataPtr = pFVar2;
      *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_5c,iVar1);
      GetSoftReferenceIndices(this,__return_storage_ptr__,*pFVar6);
      return __return_storage_ptr__;
    }
LAB_142a7981c:
    if (2 < (byte)LogFilePackageStore._0_1_) {
      ::LexToString(&local_38,&local_res18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFilePackageStore);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// Mount @ 142a84ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFilePackageStoreBackend::Mount
          (FFilePackageStoreBackend *this,FIoContainerHeader *param_1,uint param_2)

{
  TAtomic<unsigned_int> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemScope local_res8;
  FLLMScope local_res18 [2];
  FString local_48;
  FIoContainerHeader *local_38;
  uint uStack_30;
  TAtomic<unsigned_int> TStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FLLMScope::FLLMScope(local_res18,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,AsyncLoading,true);
  AcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  LOCK();
  pTVar1 = &this->NextSequence;
  TStack_2c = *pTVar1;
  *pTVar1 = (TAtomic<unsigned_int>)((int)*pTVar1 + 1);
  UNLOCK();
  pFVar3 = (this->MountedContainers).AllocatorInstance.Data;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar3 + (longlong)(this->MountedContainers).ArrayMax * 0x20)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->MountedContainers).ArrayNum;
  piVar2 = &(this->MountedContainers).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->MountedContainers).AllocatorInstance,piVar2);
  }
  (this->MountedContainers).ArrayNum = iVar7 + 1;
  pFVar4 = (this->MountedContainers).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x20;
  *(FIoContainerHeader **)pFVar3 = local_38;
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(TStack_2c,uStack_30);
  pFVar4 = pFVar4 + (longlong)iVar7 * 0x20 + 0x10;
  *(undefined8 *)pFVar4 = local_28;
  *(ulonglong *)(pFVar4 + 8) = CONCAT44(uStack_1c,uStack_20);
  AlgoImpl::
  StableSortInternal<UE::FilePackageStorePrivate::FMountedContainer,FIdentityFunctor,_FFilePackageStoreBackend::Mount_::__l2::<lambda_1>_>
            ((FMountedContainer *)(this->MountedContainers).AllocatorInstance.Data,
             (this->MountedContainers).ArrayNum,(FIdentityFunctor)local_res18[0].Tracker,
             (<lambda_1>)local_res18[0].Tracker);
  this->bNeedsContainerUpdate = true;
  if (4 < (byte)LogFilePackageStore._0_1_) {
    ::LexToString(&local_48,&param_1->ContainerId);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFilePackageStore);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// OnMounted @ 142a87240

void __thiscall
FFilePackageStoreBackend::OnMounted
          (FFilePackageStoreBackend *this,TSharedRef<FPackageStoreBackendContext_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Unmount @ 142aa8ce0

void __thiscall
FFilePackageStoreBackend::Unmount(FFilePackageStoreBackend *this,FIoContainerHeader *param_1)

{
  TArray<UE::FilePackageStorePrivate::FMountedContainer,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  pTVar1 = &this->MountedContainers;
  AcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  uVar6 = 0;
  while( true ) {
    if (((int)uVar6 < 0) || ((this->MountedContainers).ArrayNum <= (int)uVar6)) goto LAB_142aa8e18;
    if ((int)uVar6 < 0) {
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
    if (*(FIoContainerHeader **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20) ==
        param_1) break;
    uVar6 = uVar6 + 1;
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->MountedContainers).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20;
  iVar5 = (this->MountedContainers).ArrayNum + ~uVar6;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar5 << 5);
  }
  piVar2 = &(this->MountedContainers).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,&pTVar1->AllocatorInstance,(this->MountedContainers).ArrayNum,
             &(this->MountedContainers).ArrayMax);
  this->bNeedsContainerUpdate = true;
LAB_142aa8e18:
                    /* WARNING: Could not recover jumptable at 0x000142aa8e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  return;
}

// Update @ 142aa9bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFilePackageStoreBackend::Update(FFilePackageStoreBackend *this)

{
  TMap<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
  *this_00;
  FPackageIdMap *pFVar1;
  code *pcVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FFilePackageStoreEntry *pFVar7;
  FFilePackageStoreEntrySoftReferences *pFVar8;
  bool bVar9;
  FEntryHandle FVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 extraout_var;
  FName *pFVar14;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TTuple<FName,FPackageId> *pTVar15;
  ForAnyElementType FVar16;
  FPackageIdMap *pFVar17;
  longlong lVar18;
  uint uVar19;
  FPackageId *pFVar20;
  FFilePackageStoreEntryRef *pFVar21;
  FPackageId *pFVar22;
  undefined8 *puVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  FFilePackageStoreEntry *pFVar27;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint *puVar31;
  ForElementType<unsigned_int> FVar32;
  FFilePackageStoreEntrySoftReferences *pFVar33;
  uint uVar34;
  TMap<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
  *this_01;
  FScriptContainerElement *pFVar35;
  bool bVar36;
  undefined1 auStackY_3b8 [32];
  undefined1 local_367;
  undefined1 local_366;
  undefined1 local_365;
  undefined1 local_364;
  undefined1 local_363 [3];
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_360;
  FEntryHandle local_350;
  uint local_34c;
  uint local_348;
  ForAnyElementType local_338;
  undefined8 uStack_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FLLMScope local_318 [2];
  longlong local_310;
  undefined8 local_308;
  uint local_300;
  int local_2fc;
  int local_2f8;
  uint local_2f4;
  FFilePackageStoreBackend *local_2f0;
  uint local_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e0;
  undefined4 local_2d8;
  undefined8 uStack_2d4;
  undefined4 uStack_2cc;
  int local_2c8;
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c0;
  undefined4 local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  FEntryHandle FStack_2a0;
  undefined4 uStack_29c;
  TFilePackageStoreEntryCArrayView<unsigned_int> local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  uint local_270;
  uint uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  TMap<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
  *local_260;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_258;
  undefined4 local_248;
  int local_244;
  undefined1 local_240 [8];
  FScriptContainerElement *local_238;
  LPCRITICAL_SECTION local_230;
  int *local_228;
  FMemScope local_220;
  int local_218;
  undefined1 local_214 [20];
  FScriptContainerElement *local_200;
  FFilePackageStoreEntryRef local_1f8;
  undefined1 local_1e8 [8];
  FEntryHandle *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  uint *local_190;
  FEntryHandle *local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TFilePackageStoreEntryCArrayView<unsigned_int> *local_168;
  undefined8 local_160;
  TFilePackageStoreEntryCArrayView<unsigned_int> **local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  undefined8 uStack_140;
  FFilePackageStoreEntryRef local_138;
  FFilePackageStoreEntryRef local_128;
  FFilePackageStoreEntryRef local_118;
  FPackageIdMap local_108;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForAnyElementType local_a8;
  int local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_2f0 = this;
  FLLMScope::FLLMScope(local_318,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_220,AsyncLoading,true);
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId658,"UpdateFilePackageStore",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
               ,0x292);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId658);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->UpdateLock;
  local_230 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (this->bNeedsContainerUpdate == false) goto LAB_142aaafa6;
  iVar11 = (this->MountedContainers).ArrayNum;
  uVar34 = 0;
  pFVar35 = (this->MountedContainers).AllocatorInstance.Data;
  local_34c = 0;
  pFVar25 = pFVar35 + (longlong)iVar11 * 0x20;
  while( true ) {
    if ((this->MountedContainers).ArrayNum != iVar11) {
      local_367 = 0;
      `TCheckedPointerIterator<UE::FilePackageStorePrivate::FMountedContainer,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_367);
    }
    if (pFVar35 == pFVar25) break;
    local_34c = local_34c + *(int *)(pFVar35 + 0x10);
    uVar34 = uVar34 + *(int *)(*(longlong *)pFVar35 + 0x10);
    pFVar35 = pFVar35 + 0x20;
  }
  local_348 = uVar34;
  UE::FilePackageStorePrivate::ToArray(&local_258,&this->PackageEntries);
  uVar29 = 0;
  local_bc = 0x80;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.ArrayNum = 0;
  local_360.ArrayMax = 0;
  local_b8 = 0xffffffff;
  local_6c = 0x80;
  local_68 = -1;
  UE::FilePackageStorePrivate::SortByEntryOffset(&local_258);
  TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
             *)local_e8,uVar34 >> 1);
  uVar12 = local_34c;
  uVar19 = local_34c >> 1;
  if (uVar19 <= (uint)(local_98._8_4_ - local_64)) goto LAB_142aaa056;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar19);
  if (uVar19 < 4) {
    uVar19 = 1;
  }
  else {
    uVar30 = (ulonglong)((uVar12 >> 2) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_248 = (undefined4)lVar18;
    uVar19 = 1 << ((byte)lVar18 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar19 <= (int)local_50)) goto LAB_142aaa056;
  local_50 = uVar19;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar19 != 0) {
    uVar28 = uVar19;
    if (uVar19 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar28 = 0;
        goto LAB_142aa9e7f;
      }
    }
    else {
LAB_142aa9e7f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar28,4);
    }
    if (0 < (int)uVar19) {
      uVar30 = (ulonglong)uVar19;
      do {
        FVar16.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar13 = uVar29 & (longlong)(int)uVar19 - 1U;
        uVar29 = uVar29 + 1;
        *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_2c8 = 0;
    uStack_2c4 = 1;
    iStack_2b4 = 0;
    iStack_2b0 = 0;
    if (local_70 != 0) {
      FVar32 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar32 = local_78;
      }
      uVar19 = *(uint *)FVar32;
      iStack_2b0 = 0;
      local_2c8 = 0;
      while (uVar19 == 0) {
        iStack_2b0 = iStack_2b0 + 0x20;
        lVar18 = (longlong)local_2c8;
        local_2c8 = local_2c8 + 1;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2c8)
        goto LAB_142aa9f9d;
        uVar19 = ((uint *)((longlong)FVar32 + 4))[lVar18];
      }
      uStack_2c4 = -uVar19 & uVar19;
      uVar29 = (ulonglong)uStack_2c4 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_244 = (int)lVar18;
      iStack_2b4 = local_244 + -1 + iStack_2b0;
      if (local_70 < iStack_2b4) {
LAB_142aa9f9d:
        iStack_2b4 = local_70;
      }
    }
    local_2b8 = 0xffffffff;
    local_1e0 = (FEntryHandle *)local_98;
    local_1d8._padding_ = CONCAT44(uStack_2c4,local_2c8);
    local_1d8.CurrentBitIndex = iStack_2b4;
    local_1d8.UnvisitedBitMask = 0xffffffff;
    local_1d8._28_4_ = uStack_2ac;
    local_1d8.BaseBitIndex = iStack_2b0;
    iVar11 = iStack_2b4;
    local_1d8.Array = pTStack_2c0;
    if (iStack_2b4 < local_70) {
      do {
        puVar31 = (uint *)((longlong)iVar11 * 0x10 + *(longlong *)local_1e0);
        uVar19 = local_50 - 1 & *puVar31;
        puVar31[3] = uVar19;
        FVar16.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar29 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
        puVar31[2] = *(uint *)(FVar16.Data + uVar29 * 4);
        *(int *)(FVar16.Data + uVar29 * 4) = iVar11;
        local_1d8.UnvisitedBitMask = local_1d8.UnvisitedBitMask & ~local_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
        iVar11 = local_1d8.CurrentBitIndex;
      } while (local_1d8.CurrentBitIndex < (local_1d8.Array)->NumBits);
    }
  }
LAB_142aaa056:
  uVar12 = uVar12 + uVar34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (local_360.ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&local_360.AllocatorInstance,local_360.ArrayNum,&local_360.ArrayMax);
  }
  this_01 = &this->LocalizedPackages;
  local_260 = this_01;
  if (*(int *)&(this->LocalizedPackages).field_0x48 < 2) {
    TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
                      *)this_01);
    TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,0);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,0);
    *(undefined4 *)&(this->LocalizedPackages).field_0x48 = 1;
    TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_00 = &this->RedirectsPackageMap;
  local_214._12_8_ = this_00;
  if (*(int *)&(this->RedirectsPackageMap).field_0x48 < 2) {
    TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
                      *)this_00);
    TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0);
    *(undefined4 *)&(this->RedirectsPackageMap).field_0x48 = 1;
    TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_338.Data = (this->EntryData).AllocatorInstance.Data;
  iVar11 = (this->EntryData).ArrayNum;
  uStack_330._0_4_ = (this->EntryData).ArrayNum;
  uStack_330._4_4_ = (this->EntryData).ArrayMax;
  (this->EntryData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryData).ArrayNum = 0;
  (this->EntryData).ArrayMax = 0;
  uVar34 = uVar34 * 0x20 + iVar11;
  if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
  }
  local_228 = &(this->EntryData).ArrayMax;
  if (*local_228 < (int)uVar34) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar34,&(this->EntryData).AllocatorInstance,(this->EntryData).ArrayNum,local_228)
    ;
  }
  local_2f4 = (this->MountedContainers).ArrayNum;
  uVar29 = (ulonglong)(int)local_2f4;
  local_200 = local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 0x10;
  local_298.ArrayNum = 0;
  local_298.OffsetToDataFromThis = 0;
  local_290 = 0;
  pFVar35 = (this->MountedContainers).AllocatorInstance.Data;
  local_238 = pFVar35 + uVar29 * 0x20;
  local_350.HasSoftRefs = 1;
  local_350.HasShaderMaps = 1;
  local_350.HasPackageIds = 1;
  local_350.Offset = 0x1fffffff;
  local_320 = local_258.AllocatorInstance.Data;
LAB_142aaa1bb:
  pFVar6 = local_200;
  pFVar4 = local_238;
  pFVar25 = local_320;
  local_328 = pFVar35;
  if ((this->MountedContainers).ArrayNum != (int)uVar29) {
    local_366 = 0;
    `TCheckedPointerIterator<UE::FilePackageStorePrivate::FMountedContainer,int,0>::operator!='::
    __l2::<lambda_1>::operator()(&local_366);
  }
  if (pFVar35 != pFVar4) {
    lVar18 = *(longlong *)(pFVar35 + 0x14);
    lVar26 = *(longlong *)pFVar35;
    *(int *)(pFVar35 + 0x14) = (this->EntryData).ArrayNum;
    local_310 = lVar26;
    local_308 = lVar18;
    if (*(int *)(pFVar35 + 0x10) == 0) {
      iVar11 = *(int *)(lVar26 + 0x10);
      local_2f8 = iVar11;
      if (iVar11 != 0) {
        TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
                 *)local_e8);
        FVar10 = AddNewEntryData(this,(FFilePackageStoreEntry *)(local_1e8 + 4),
                                 (FFilePackageStoreEntrySoftReferences *)&local_298);
        local_150 = CONCAT44(extraout_var_00,FVar10);
        local_168 = &local_298;
        local_160 = 0;
        local_158 = &local_168;
        TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FFilePackageStoreEntryRef_&&,UE::FilePackageStorePrivate::FEntryHandle_&&>_>
                  ((TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
                    *)local_e8,
                   (TPairInitializer<FFilePackageStoreEntryRef_&&,UE::FilePackageStorePrivate::FEntryHandle_&&>
                    *)local_1e8,(bool *)&local_158);
        lVar18 = 0;
        iVar24 = 0;
        local_308 = 0;
        if (*(char *)(lVar26 + 0xa8) != '\0') {
          lVar18 = *(longlong *)(lVar26 + 0x98);
          iVar24 = *(int *)(lVar26 + 0x10);
          local_308 = lVar18;
          if ((iVar24 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar27 = *(FFilePackageStoreEntry **)(lVar26 + 0x18);
        if ((iVar11 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar34 = 0;
        local_214._4_8_ = pFVar27 + iVar11;
        local_278 = 0;
        if (pFVar27 != (FFilePackageStoreEntry *)local_214._4_8_) {
          do {
            if (iVar24 == 0) {
              pFVar33 = (FFilePackageStoreEntrySoftReferences *)0x0;
            }
            else {
              uVar12 = 0;
              if ((int)uVar34 < iVar24) {
                uVar12 = ~uVar34 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar33 = (FFilePackageStoreEntrySoftReferences *)(lVar18 + (longlong)(int)uVar34 * 8)
              ;
            }
            local_1f8.Entry = pFVar27;
            local_1f8.SoftReferences = pFVar33;
            local_138.Entry = pFVar27;
            local_138.SoftReferences = pFVar33;
            uVar12 = ::GetTypeHash(&local_138);
            uVar5 = local_e8._0_8_;
            pFVar7 = local_128.Entry;
            pFVar8 = local_128.SoftReferences;
            if (local_e8._8_4_ != local_b4) {
              FVar16.Data = (FScriptContainerElement *)local_b0;
              if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar16.Data = local_a8.Data;
              }
              iVar11 = *(int *)((longlong)FVar16.Data + (ulonglong)(local_a0 - 1U & uVar12) * 4);
              local_128.Entry = pFVar27;
              while (local_128.SoftReferences = pFVar33, iVar11 != -1) {
                pFVar21 = (FFilePackageStoreEntryRef *)(uVar5 + (longlong)iVar11 * 0x20);
                bVar9 = FFilePackageStoreEntryRef::operator==(pFVar21,&local_128);
                pFVar7 = local_128.Entry;
                pFVar8 = local_128.SoftReferences;
                if (bVar9) {
                  if (pFVar21 != (FFilePackageStoreEntryRef *)0x0) {
                    pFVar21 = pFVar21 + 1;
                    goto LAB_142aaa7b7;
                  }
                  break;
                }
                pFVar33 = local_128.SoftReferences;
                iVar11 = *(int *)&pFVar21[1].SoftReferences;
              }
            }
            local_128.SoftReferences = pFVar8;
            local_128.Entry = pFVar7;
            pFVar21 = (FFilePackageStoreEntryRef *)
                      TMapBase<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>_>
                      ::
                      EmplaceByHash<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle_const_&>
                                ((TMapBase<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>_>
                                  *)local_e8,uVar12,&local_1f8,&local_350);
LAB_142aaa7b7:
            if (*(FEntryHandle *)&pFVar21->Entry == local_350) {
              FVar10 = AddNewEntryData(local_2f0,(FFilePackageStoreEntry *)local_214,
                                       (FFilePackageStoreEntrySoftReferences *)pFVar27);
              *(undefined4 *)&pFVar21->Entry = *(undefined4 *)CONCAT44(extraout_var_01,FVar10);
            }
            lVar26 = local_278;
            lVar18 = local_310;
            uVar12 = 0;
            if ((int)uVar34 < *(int *)(local_310 + 0x10)) {
              uVar12 = ~uVar34 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_278 = lVar26 + 1;
            uVar34 = uVar34 + 1;
            local_288 = *(undefined8 *)(*(longlong *)(lVar18 + 8) + lVar26 * 8);
            uStack_280 = *(undefined4 *)&pFVar21->Entry;
            if (((local_360.AllocatorInstance.Data <= (FScriptContainerElement *)&local_288) &&
                ((FScriptContainerElement *)&local_288 <
                 local_360.AllocatorInstance.Data + (longlong)local_360.ArrayMax * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar11 = local_360.ArrayNum;
            if (local_360.ArrayNum == local_360.ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_360.AllocatorInstance,&local_360.ArrayMax);
            }
            pFVar27 = pFVar27 + 1;
            local_360.ArrayNum = iVar11 + 1;
            *(undefined8 *)(local_360.AllocatorInstance.Data + (longlong)iVar11 * 0x10) = local_288;
            *(ulonglong *)(local_360.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
                 CONCAT44(uStack_27c,uStack_280);
            lVar18 = local_308;
            this = local_2f0;
            pFVar35 = local_328;
            iVar11 = local_2f8;
          } while (pFVar27 != (FFilePackageStoreEntry *)local_214._4_8_);
        }
        lVar26 = local_310;
        *(int *)(pFVar35 + 0x10) = iVar11;
        *(undefined4 *)(local_310 + 0x10) = 0;
        if (*(int *)(local_310 + 0x14) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)(local_310 + 8),0,(int *)(local_310 + 0x14));
        }
        *(undefined4 *)(lVar26 + 0xa0) = 0;
        if (*(int *)(lVar26 + 0xa4) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,(ForAnyElementType *)(lVar26 + 0x98),0,(int *)(lVar26 + 0xa4));
        }
      }
      goto LAB_142aaa48d;
    }
    TSet<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
             *)local_98);
    while (pFVar25 != pFVar6) {
      if ((uint)lVar18 <= (*(uint *)(pFVar25 + 8) & 0x1fffffff)) {
        uVar34 = local_308._4_4_;
        goto LAB_142aaa250;
      }
      local_320 = pFVar25 + 0x10;
      pFVar25 = local_320;
    }
    goto LAB_142aaa495;
  }
  bVar9 = local_a0 < 2;
  if (bVar9) {
    TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
                      *)local_e8);
  }
  lpCriticalSection = local_230;
  uVar34 = 0;
  iVar11 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (bVar9) goto LAB_142aaad58;
  local_a0 = 1;
  if (((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) &&
     (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4),
     (ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  FVar16.Data = (FScriptContainerElement *)local_b0;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    FVar16.Data = local_a8.Data;
  }
  *(undefined4 *)FVar16.Data = 0xffffffff;
  if (local_a0 == 0) goto LAB_142aaad58;
  pTStack_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_2e8 = 0;
  uStack_2e4 = 1;
  uStack_2d4 = 0;
  if (local_c0 == 0) goto LAB_142aaac87;
  puVar31 = (uint *)(local_e8 + 0x10);
  if (local_c8 != (uint *)0x0) {
    puVar31 = local_c8;
  }
  uVar12 = *puVar31;
  uVar19 = uVar34;
  if (uVar12 != 0) goto LAB_142aaac55;
  goto LAB_142aaac30;
LAB_142aaa250:
  do {
    lVar26 = local_310;
    pFVar35 = local_328;
    if (uVar34 <= (*(uint *)(pFVar25 + 8) & 0x1fffffff)) break;
    if (((*(uint *)(pFVar25 + 8) & 0x1fffffff) < (uint)lVar18) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("OldIt->Value.Offset >= OldMountedEntries.Begin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x2cc,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_300 = *(uint *)(pFVar25 + 8) & 0x1fffffff;
    if (local_98._8_4_ != local_64) {
      FVar16.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_58.Data;
      }
      uVar12 = *(uint *)(FVar16.Data + (ulonglong)(local_50 - 1 & local_300) * 4);
      while (uVar12 != 0xffffffff) {
        pFVar35 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar12 * 0x10);
        if (*(uint *)pFVar35 == local_300) {
          if (pFVar35 != (FScriptContainerElement *)0x0) goto LAB_142aaa345;
          break;
        }
        uVar12 = *(uint *)(pFVar35 + 8);
      }
    }
    local_190 = &local_300;
    local_188 = &local_350;
    TSet<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<unsigned_int_const_&,UE::FilePackageStorePrivate::FEntryHandle_const_&>_>
              ((TSet<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
                *)local_98,(uint)&local_2fc,
               (TPairInitializer<unsigned_int_const_&,UE::FilePackageStorePrivate::FEntryHandle_const_&>
                *)(ulonglong)local_300,(bool *)&local_190);
    pFVar35 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_2fc * 0x10);
LAB_142aaa345:
    FVar10 = *(FEntryHandle *)(pFVar35 + 4);
    if (FVar10 == local_350) {
      iVar11 = (int)uStack_330;
      local_178 = local_338.Data;
      if (((int)uStack_330 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iStack_170 = iVar11;
      uStack_140 = CONCAT44(uStack_16c,iVar11);
      local_148 = local_178;
      FVar10 = AddOldEntryData(this,SUB84(local_240,0),
                               (TArrayView<unsigned_int_const_,int> *)
                               (ulonglong)*(uint *)(pFVar25 + 8));
      FVar10 = *(FEntryHandle *)CONCAT44(extraout_var,FVar10);
      *(FEntryHandle *)(pFVar35 + 4) = FVar10;
    }
    local_2a8 = *(undefined8 *)pFVar25;
    FStack_2a0 = FVar10;
    if (((local_360.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a8) &&
        ((FScriptContainerElement *)&local_2a8 <
         local_360.AllocatorInstance.Data + (longlong)local_360.ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar11 = local_360.ArrayNum;
    if (local_360.ArrayNum == local_360.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_360.AllocatorInstance,&local_360.ArrayMax);
    }
    pFVar25 = pFVar25 + 0x10;
    local_360.ArrayNum = iVar11 + 1;
    *(undefined8 *)(local_360.AllocatorInstance.Data + (longlong)iVar11 * 0x10) = local_2a8;
    *(ulonglong *)(local_360.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
         CONCAT44(uStack_29c,FStack_2a0);
    lVar26 = local_310;
    pFVar35 = local_328;
    local_320 = pFVar25;
  } while (pFVar25 != pFVar6);
LAB_142aaa48d:
  this_01 = &this->LocalizedPackages;
LAB_142aaa495:
  uVar34 = (this->EntryData).ArrayNum;
  *(uint *)(pFVar35 + 0x18) = uVar34;
  if (((uVar34 <= *(uint *)(pFVar35 + 0x14)) && (*(int *)(pFVar35 + 0x10) != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MountedContainer.EntryDataRange.End > MountedContainer.EntryDataRange.Begin || MountedContainer.NumMountedPackages == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                         ,0x2fb,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar11 = *(int *)(lVar26 + 0x60);
  pFVar20 = *(FPackageId **)(lVar26 + 0x58);
  pFVar22 = pFVar20 + (longlong)iVar11 * 2;
  while( true ) {
    if (*(int *)(lVar26 + 0x60) != iVar11) {
      local_365 = 0;
      `TCheckedPointerIterator<FIoContainerHeaderLocalizedPackage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_365);
    }
    uVar5 = local_214._12_8_;
    if (pFVar20 == pFVar22) break;
    pFVar14 = TMapBase<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
              ::FindOrAddImpl<FPackageId_const_&>
                        ((TMapBase<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
                          *)this_01,(uint)pFVar20->Id,pFVar20);
    if (*pFVar14 == (FName)0x0) {
      uVar34 = (uint)pFVar20[1].Id & 0x3fffffff;
      if ((*(int *)(lVar26 + 0x50) <= (int)uVar34) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_270 = *(uint *)(*(longlong *)(lVar26 + 0x48) + (ulonglong)uVar34 * 4);
      uStack_26c = *(uint *)((longlong)&pFVar20[1].Id + 4);
      FVar3.Number = uStack_26c;
      FVar3.ComparisonIndex.Value = local_270;
      *pFVar14 = FVar3;
      this_01 = local_260;
    }
    pFVar20 = pFVar20 + 2;
  }
  iVar11 = *(int *)(lVar26 + 0x70);
  pFVar22 = *(FPackageId **)(lVar26 + 0x68);
  pFVar20 = pFVar22 + (longlong)iVar11 * 3;
  while( true ) {
    if (*(int *)(lVar26 + 0x70) != iVar11) {
      local_364 = 0;
      `TCheckedPointerIterator<FIoContainerHeaderPackageRedirect,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_364);
    }
    if (pFVar22 == pFVar20) break;
    pTVar15 = TMapBase<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
              ::FindOrAddImpl<FPackageId_const_&>
                        ((TMapBase<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
                          *)uVar5,(uint)pFVar22->Id,pFVar22);
    if (*(longlong *)pTVar15 == 0) {
      uVar34 = (uint)pFVar22[2].Id & 0x3fffffff;
      if ((*(int *)(lVar26 + 0x50) <= (int)uVar34) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_268 = *(undefined4 *)(*(longlong *)(lVar26 + 0x48) + (ulonglong)uVar34 * 4);
      uStack_264 = *(undefined4 *)((longlong)&pFVar22[2].Id + 4);
      *(ulonglong *)pTVar15 = CONCAT44(uStack_264,local_268);
      *(ulong64 *)&pTVar15->field_0x8 = pFVar22[1].Id;
    }
    pFVar22 = pFVar22 + 3;
  }
  pFVar35 = local_328 + 0x20;
  uVar29 = (ulonglong)local_2f4;
  this = local_2f0;
  this_01 = local_260;
  goto LAB_142aaa1bb;
  while (uVar12 = (puVar31 + 1)[(int)uVar19], uVar19 = local_2e8, uVar12 == 0) {
LAB_142aaac30:
    uVar34 = uVar34 + 0x20;
    uStack_2d4 = (ulonglong)uVar34 << 0x20;
    local_2e8 = uVar19 + 1;
    if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2e8)
    goto LAB_142aaac80;
  }
LAB_142aaac55:
  uStack_2e4 = -uVar12 & uVar12;
  uVar29 = (ulonglong)uStack_2e4 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar29 != 0) {
    for (; uVar29 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  local_218 = (int)lVar18;
  uVar34 = local_218 + -1 + uVar34;
  uStack_2d4 = CONCAT44(uStack_2d4._4_4_,uVar34);
  if ((int)local_c0 < (int)uVar34) {
LAB_142aaac80:
    uStack_2d4 = CONCAT44(uStack_2d4._4_4_,local_c0);
    uVar34 = local_c0;
  }
LAB_142aaac87:
  local_2d8 = 0xffffffff;
  local_1b8 = (longlong *)local_e8;
  local_1b0._padding_ = CONCAT44(uStack_2e4,local_2e8);
  local_1b0.UnvisitedBitMask = 0xffffffff;
  local_1b0.CurrentBitIndex = (uint)uStack_2d4;
  local_1b0.BaseBitIndex = uStack_2d4._4_4_;
  local_1b0._28_4_ = uStack_2cc;
  local_1b0.Array = pTStack_2e0;
  if ((int)uVar34 < (int)local_c0) {
    do {
      iVar11 = local_a0;
      puVar23 = (undefined8 *)((longlong)(int)uVar34 * 0x20 + *local_1b8);
      local_118.Entry = (FFilePackageStoreEntry *)*puVar23;
      local_118.SoftReferences = (FFilePackageStoreEntrySoftReferences *)puVar23[1];
      uVar12 = ::GetTypeHash(&local_118);
      uVar12 = uVar12 & iVar11 - 1U;
      *(uint *)((longlong)puVar23 + 0x1c) = uVar12;
      FVar16.Data = (FScriptContainerElement *)local_b0;
      if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar16.Data = local_a8.Data;
      }
      uVar29 = (longlong)local_a0 - 1U & (longlong)(int)uVar12;
      *(undefined4 *)(puVar23 + 3) = *(undefined4 *)((longlong)FVar16.Data + uVar29 * 4);
      *(uint *)((longlong)FVar16.Data + uVar29 * 4) = uVar34;
      local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
      uVar34 = local_1b0.CurrentBitIndex;
    } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
  }
LAB_142aaad58:
  FMemory::Free((this->PackageEntries).Slots);
  FMemory::Free((this->PackageEntries).Values);
  uVar29 = uStack_330 >> 0x20;
  uStack_330 = uStack_330 & 0xffffffff00000000;
  (this->PackageEntries).MaxValues = 0;
  (this->PackageEntries).SlotBits = 0;
  (this->PackageEntries).Slots = (uint *)0x0;
  (this->PackageEntries).Values = (ushort *)0x0;
  if ((int)uVar29 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_338,0,(int *)((longlong)&uStack_330 + 4));
  }
  iVar11 = (this->MountedContainers).ArrayNum;
  pFVar35 = (this->MountedContainers).AllocatorInstance.Data;
  pFVar25 = pFVar35 + (longlong)iVar11 * 0x20;
  while( true ) {
    if ((this->MountedContainers).ArrayNum != iVar11) {
      local_363[0] = 0;
      `TCheckedPointerIterator<UE::FilePackageStorePrivate::FMountedContainer,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_363);
    }
    if (pFVar35 == pFVar25) break;
    lVar18 = *(longlong *)pFVar35;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    if (*(int *)(lVar18 + 0x24) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(lVar18 + 0x18),0,(int *)(lVar18 + 0x24));
    }
    if ((((longlong)*(int *)(*(longlong *)pFVar35 + 0x14) & 0x1fffffffffffffffU) != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MountedContainer.ContainerHeader->PackageIds.GetAllocatedSize() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x327,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar35 = pFVar35 + 0x20;
  }
  iVar11 = (this->EntryData).ArrayNum;
  if ((this->EntryData).ArrayMax != iVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar11,&(this->EntryData).AllocatorInstance,iVar11,local_228);
  }
  TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
            *)&this->LocalizedPackages);
  TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
            *)&this->RedirectsPackageMap);
  pFVar17 = UE::FilePackageStorePrivate::FPackageIdMap::FPackageIdMap(&local_108,&local_360);
  pFVar1 = &this->PackageEntries;
  if (pFVar1 != pFVar17) {
    FMemory::Free((this->PackageEntries).Slots);
    FMemory::Free((this->PackageEntries).Values);
    pFVar1->MaxValues = 0;
    pFVar1->SlotBits = 0;
    (this->PackageEntries).Slots = (uint *)0x0;
    (this->PackageEntries).Values = (ushort *)0x0;
    uVar34 = pFVar17->SlotBits;
    puVar31 = pFVar17->Slots;
    pFVar1->MaxValues = pFVar17->MaxValues;
    pFVar1->SlotBits = uVar34;
    (this->PackageEntries).Slots = puVar31;
    (this->PackageEntries).Values = pFVar17->Values;
    pFVar17->MaxValues = 0;
    pFVar17->SlotBits = 0;
    pFVar17->Slots = (uint *)0x0;
    pFVar17->Values = (ushort *)0x0;
  }
  FMemory::Free(local_108.Slots);
  FMemory::Free(local_108.Values);
  this->bNeedsContainerUpdate = false;
  if (4 < (byte)LogFilePackageStore._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFilePackageStore);
  }
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  local_a0 = 0;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFilePackageStoreEntryRef,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
LAB_142aaafa6:
  LeaveCriticalSection(lpCriticalSection);
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_220);
  FLLMScope::~FLLMScope(local_318);
  return;
}

