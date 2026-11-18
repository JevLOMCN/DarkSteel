// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// ~FDS_ChatUserCache @ 14b9d95d0

void __thiscall FDS_ChatUserCache::~FDS_ChatUserCache(FDS_ChatUserCache *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->AccessOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RecentWhispers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NicknameToUID).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NicknameToUID).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NicknameToUID);
  *(undefined4 *)&(this->ChatUserInfoCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChatUserInfoCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChatUserInfoCache);
  return;
}

// AddOrUpdate @ 14b9dfd10

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
FDS_ChatUserCache::AddOrUpdate
          (FDS_ChatUserCache *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          FDS_ChatUserInfo *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  FDS_ChatUserInfo *pFVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_> *pTVar14;
  TArray<__int64,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar15;
  int local_res18 [4];
  long64 local_b8;
  TSharedPtr<FDS_ChatUserInfo,1> local_b0;
  undefined8 local_a0;
  FSharedReferencer<1> local_98;
  FSparseArrayAllocationInfo local_90;
  FString *local_80;
  long64 *local_78;
  FDS_ChatUserInfo local_70;
  
  if (param_1->PlayerUID < 1) {
    __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FindByPlayerUID(this,&local_b0,param_1->PlayerUID);
  pTVar14 = (TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_> *)0x0;
  if (local_b0.Object == (FDS_ChatUserInfo *)0x0) {
    puVar1 = &(this->ChatUserInfoCache).field_0x8;
    if (this->MaxCacheSize <=
        *(int *)&(this->ChatUserInfoCache).field_0x8 - *(int *)&(this->ChatUserInfoCache).field_0x34
       ) {
      do {
        if ((this->AccessOrder).ArrayNum < 1) break;
        Remove(this,&local_70,*(long64 *)(this->AccessOrder).AllocatorInstance.Data);
        if (local_70.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Nickname.Data.AllocatorInstance.Data);
        }
        if (local_70.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.UserID.Data.AllocatorInstance.Data);
        }
      } while (this->MaxCacheSize <= *(int *)puVar1 - *(int *)&(this->ChatUserInfoCache).field_0x34)
      ;
    }
    pTVar13 = ::operator_new(0x40);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      local_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_b0.Object = (FDS_ChatUserInfo *)&DAT_00000010;
    }
    else {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFDS_ChatUserInfo___00_SharedPointerInternals__6B_;
      ::FString::FString((FString *)(pTVar13 + 1),&param_1->UserID);
      pTVar13[2]._padding_ = param_1->PlayerUID;
      ::FString::FString((FString *)&pTVar13[2].SharedReferenceCount,&param_1->Nickname);
      pTVar13[3].SharedReferenceCount = (atomic<int>)param_1->CharID;
      local_b0.Object = (FDS_ChatUserInfo *)(pTVar13 + 1);
      pTVar13[3].WeakReferenceCount = (atomic<int>)param_1->CharLevel;
      if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
        return pTVar12;
      }
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      local_98.ReferenceController = pTVar13;
    }
    FVar8.ReferenceController = local_98.ReferenceController;
    local_a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_b0.SharedReferenceCount,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
      return pTVar12;
    }
    pFVar7 = local_b0.Object;
    iVar11 = *(int *)&(this->ChatUserInfoCache).field_0x34;
    if (iVar11 == 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,1,(ForAnyElementType *)&this->ChatUserInfoCache,(int *)puVar1,
                          (int *)&(this->ChatUserInfoCache).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChatUserInfoCache).field_0x10,false
                );
    }
    else {
      iVar10 = *(int *)&(this->ChatUserInfoCache).field_0x30;
      lVar5 = *(longlong *)&this->ChatUserInfoCache;
      iVar4 = *(int *)((longlong)iVar10 * 0x20 + 4 + lVar5);
      iVar11 = iVar11 + -1;
      *(int *)&(this->ChatUserInfoCache).field_0x30 = iVar4;
      *(int *)&(this->ChatUserInfoCache).field_0x34 = iVar11;
      if (iVar11 != 0) {
        *(undefined4 *)((longlong)iVar4 * 0x20 + lVar5) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ChatUserInfoCache,&local_90,iVar10);
    if (local_90.Pointer !=
        (TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_> *)0x0) {
      *(long64 *)local_90.Pointer = pFVar7->PlayerUID;
      *(FDS_ChatUserInfo **)((longlong)local_90.Pointer + 8) = local_b0.Object;
      *(TReferenceControllerBase<1> **)((longlong)local_90.Pointer + 0x10) =
           local_b0.SharedReferenceCount.ReferenceController;
      if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined4 *)((longlong)local_90.Pointer + 0x18) = 0xffffffff;
      pTVar14 = local_90.Pointer;
    }
    local_res18[0] = local_90.Index;
    uVar15 = (int)((ulonglong)*(undefined8 *)pTVar14 >> 0x20) * 0x17 + (int)*(undefined8 *)pTVar14;
    bVar9 = TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                        *)&this->ChatUserInfoCache,uVar15,pTVar14,local_res18,(bool *)0x0);
    if (!bVar9) {
      TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ChatUserInfoCache,uVar15,pTVar14,local_res18[0]);
    }
    goto LAB_14b9e0145;
  }
  if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
    return pTVar12;
  }
  pFVar7 = local_b0.Object;
  iVar11 = ((local_b0.Object)->Nickname).Data.ArrayNum;
  if (1 < iVar11) {
    iVar10 = ((local_b0.Object)->UserID).Data.ArrayNum;
    if (iVar11 == iVar10) {
      iVar11 = wcscmp((wchar_t *)((local_b0.Object)->Nickname).Data.AllocatorInstance.Data,
                      (wchar_t *)((local_b0.Object)->UserID).Data.AllocatorInstance.Data);
      bVar9 = iVar11 == 0;
    }
    else {
      bVar9 = iVar11 + iVar10 == 1;
    }
    if (!bVar9) {
      iVar11 = (param_1->Nickname).Data.ArrayNum;
      iVar10 = (pFVar7->Nickname).Data.ArrayNum;
      if (iVar10 == iVar11) {
        if (iVar10 < 2) goto LAB_14b9dfe49;
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar7->Nickname).Data.AllocatorInstance.Data,
                            (wchar_t *)(param_1->Nickname).Data.AllocatorInstance.Data);
        bVar9 = iVar11 == 0;
      }
      else {
        bVar9 = iVar10 + iVar11 == 1;
      }
      if (!bVar9) {
        if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
          return pTVar12;
        }
        TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
        ::Remove((TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
                  *)&this->NicknameToUID,&(local_b0.Object)->Nickname);
      }
    }
  }
LAB_14b9dfe49:
  if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
    return pTVar12;
  }
  pFVar7 = local_b0.Object;
  if (1 < (param_1->UserID).Data.ArrayNum) {
    ::FString::operator=(&(local_b0.Object)->UserID,&param_1->UserID);
  }
  if (param_1->PlayerUID != 0) {
    pFVar7->PlayerUID = param_1->PlayerUID;
  }
  iVar11 = (param_1->Nickname).Data.ArrayNum;
  if (1 < iVar11) {
    iVar10 = (param_1->UserID).Data.ArrayNum;
    if (iVar11 == iVar10) {
      iVar11 = wcscmp((wchar_t *)(param_1->Nickname).Data.AllocatorInstance.Data,
                      (wchar_t *)(param_1->UserID).Data.AllocatorInstance.Data);
      bVar9 = iVar11 == 0;
    }
    else {
      bVar9 = iVar11 + iVar10 == 1;
    }
    if (!bVar9) {
      ::FString::operator=(&pFVar7->Nickname,&param_1->Nickname);
    }
  }
  if (0 < param_1->CharID) {
    pFVar7->CharID = param_1->CharID;
  }
  if (0 < param_1->CharLevel) {
    pFVar7->CharLevel = param_1->CharLevel;
  }
LAB_14b9e0145:
  if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
    return pTVar12;
  }
  iVar11 = ((local_b0.Object)->Nickname).Data.ArrayNum;
  if (1 < iVar11) {
    iVar10 = ((local_b0.Object)->UserID).Data.ArrayNum;
    pFVar2 = &(local_b0.Object)->Nickname;
    if (iVar11 == iVar10) {
      iVar11 = wcscmp((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                      (wchar_t *)((local_b0.Object)->UserID).Data.AllocatorInstance.Data);
      bVar9 = iVar11 == 0;
    }
    else {
      bVar9 = iVar11 + iVar10 == 1;
    }
    if (!bVar9) {
      local_78 = &(local_b0.Object)->PlayerUID;
      local_80 = pFVar2;
      TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&,__int64_&>_>
                ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                  *)&this->NicknameToUID,(TPairInitializer<FString_&,__int64_&> *)(local_res18 + 2),
                 (bool *)&local_80);
    }
  }
  if ((local_b0.Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar6)();
    return pTVar12;
  }
  this_00 = &this->AccessOrder;
  local_b8 = (local_b0.Object)->PlayerUID;
  TArray<__int64,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_b8);
  iVar11 = (this->AccessOrder).ArrayNum;
  piVar3 = &(this->AccessOrder).ArrayMax;
  if (iVar11 == *piVar3) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&this_00->AllocatorInstance,piVar3);
  }
  (this->AccessOrder).ArrayNum = iVar11 + 1;
  *(long64 *)((this_00->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_b8;
  __return_storage_ptr__->Object = local_b0.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_b0.SharedReferenceCount.ReferenceController;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.Object = (FDS_ChatUserInfo *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Clear @ 14b9e3080

void __thiscall FDS_ChatUserCache::Clear(FDS_ChatUserCache *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = 1 < *(int *)&(this->ChatUserInfoCache).field_0x48;
  if (!bVar4) {
    TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ChatUserInfoCache);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ChatUserInfoCache,0,*(int *)&(this->ChatUserInfoCache).field_0x8);
  puVar1 = &(this->ChatUserInfoCache).field_0xc;
  *(undefined4 *)&(this->ChatUserInfoCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->ChatUserInfoCache,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChatUserInfoCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChatUserInfoCache).field_0x34 = 0;
  iVar3 = *(int *)&(this->ChatUserInfoCache).field_0x2c;
  *(undefined4 *)&(this->ChatUserInfoCache).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ChatUserInfoCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChatUserInfoCache).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ChatUserInfoCache).field_0x48 = 1;
    TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
              *)&this->ChatUserInfoCache);
  }
  bVar4 = 1 < *(int *)&(this->NicknameToUID).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                      *)&this->NicknameToUID);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->NicknameToUID,0,*(int *)&(this->NicknameToUID).field_0x8);
  puVar1 = &(this->NicknameToUID).field_0xc;
  *(undefined4 *)&(this->NicknameToUID).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->NicknameToUID,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NicknameToUID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NicknameToUID).field_0x34 = 0;
  iVar3 = *(int *)&(this->NicknameToUID).field_0x2c;
  *(undefined4 *)&(this->NicknameToUID).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NicknameToUID).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NicknameToUID).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->NicknameToUID).field_0x48 = 1;
    TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
              *)&this->NicknameToUID);
  }
  piVar2 = &(this->RecentWhispers).ArrayMax;
  (this->RecentWhispers).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RecentWhispers).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->AccessOrder).ArrayMax;
  (this->AccessOrder).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AccessOrder).AllocatorInstance,0,piVar2);
  }
  return;
}

// EnsureCacheSpace @ 14b9e8ac0

void __thiscall FDS_ChatUserCache::EnsureCacheSpace(FDS_ChatUserCache *this)

{
  FDS_ChatUserInfo local_38;
  
  if (this->MaxCacheSize <=
      *(int *)&(this->ChatUserInfoCache).field_0x8 - *(int *)&(this->ChatUserInfoCache).field_0x34)
  {
    do {
      if ((this->AccessOrder).ArrayNum < 1) {
        return;
      }
      Remove(this,&local_38,*(long64 *)(this->AccessOrder).AllocatorInstance.Data);
      if (local_38.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Nickname.Data.AllocatorInstance.Data);
      }
      if (local_38.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.UserID.Data.AllocatorInstance.Data);
      }
    } while (this->MaxCacheSize <=
             *(int *)&(this->ChatUserInfoCache).field_0x8 -
             *(int *)&(this->ChatUserInfoCache).field_0x34);
  }
  return;
}

// FindByNickname @ 14b9ea250

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
FDS_ChatUserCache::FindByNickname
          (FDS_ChatUserCache *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  long64 *plVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar2 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                      *)&this->NicknameToUID,uVar1,param_1);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)&this->NicknameToUID;
    plVar6 = (long64 *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      plVar6 = (long64 *)0x0;
    }
    if (plVar6 != (long64 *)0x0) {
      FindByPlayerUID(this,__return_storage_ptr__,*plVar6);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindByPlayerUID @ 14b9ea300

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
FDS_ChatUserCache::FindByPlayerUID
          (FDS_ChatUserCache *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          long64 param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  TArray<__int64,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar6;
  long64 local_res8;
  
  if (*(int *)&(this->ChatUserInfoCache).field_0x8 != *(int *)&(this->ChatUserInfoCache).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->ChatUserInfoCache).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ChatUserInfoCache).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ChatUserInfoCache).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ChatUserInfoCache);
        if (*plVar4 == param_1) {
          plVar6 = plVar4 + 1;
          if (plVar4 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          if (plVar6 != (longlong *)0x0) {
            this_00 = &this->AccessOrder;
            local_res8 = param_1;
            TArray<__int64,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res8);
            iVar3 = (this->AccessOrder).ArrayNum;
            piVar1 = &(this->AccessOrder).ArrayMax;
            if (iVar3 == *piVar1) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&this_00->AllocatorInstance,piVar1);
            }
            (this->AccessOrder).ArrayNum = iVar3 + 1;
            *(long64 *)((this_00->AllocatorInstance).Data + (longlong)iVar3 * 8) = local_res8;
            __return_storage_ptr__->Object = (FDS_ChatUserInfo *)*plVar6;
            pTVar2 = (TReferenceControllerBase<1> *)plVar6[1];
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
            if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = (int)plVar4[3];
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetRecentWhispers @ 14b9f0fe0

TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ChatUserCache::GetRecentWhispers
          (FDS_ChatUserCache *this,
          TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FDS_ChatUserInfo *pFVar6;
  FSharedReferencer<1> FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TSharedPtr<FDS_ChatUserInfo,1> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = this->MaxRecentWhispers;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    pFVar9 = (this->RecentWhispers).AllocatorInstance.Data;
    iVar4 = (this->RecentWhispers).ArrayNum;
    pFVar2 = pFVar9 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->RecentWhispers).ArrayNum != iVar4) {
        `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar2) break;
      FindByPlayerUID(this,&local_38,*(long64 *)pFVar9);
      FVar7.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
      pFVar6 = local_38.Object;
      if (local_38.Object != (FDS_ChatUserInfo *)0x0) {
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        *(FDS_ChatUserInfo **)(pFVar5 + (longlong)iVar8 * 0x10) = pFVar6;
        *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar8 * 0x10 + 8) =
             FVar7.ReferenceController;
        if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar7.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      pFVar9 = pFVar9 + 8;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Init @ 14b9f4000

void __thiscall FDS_ChatUserCache::Init(FDS_ChatUserCache *this,int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  this->MaxRecentWhispers = param_2;
  this->MaxCacheSize = param_1;
  if (param_1 < 1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3672835107011428361>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatUserCache.cpp"
                       ,9,"MaxCacheSize > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->MaxRecentWhispers < 1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3672835107011428362>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatUserCache.cpp"
                       ,10,"MaxRecentWhispers > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
             *)&this->ChatUserInfoCache,this->MaxCacheSize);
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
             *)&this->NicknameToUID,this->MaxCacheSize);
  uVar1 = this->MaxCacheSize;
  if (-1 < (int)uVar1) {
    if ((this->AccessOrder).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&(this->AccessOrder).AllocatorInstance,(this->AccessOrder).ArrayNum,
                 &(this->AccessOrder).ArrayMax);
    }
    if (-1 < param_2) {
      if ((this->RecentWhispers).ArrayMax < param_2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,param_2,&(this->RecentWhispers).AllocatorInstance,
                   (this->RecentWhispers).ArrayNum,&(this->RecentWhispers).ArrayMax);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// MarkAsAccess @ 14b9fc3f0

void __thiscall FDS_ChatUserCache::MarkAsAccess(FDS_ChatUserCache *this,long64 param_1)

{
  int *piVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  long64 local_res10 [3];
  
  this_00 = &this->AccessOrder;
  local_res10[0] = param_1;
  TArray<__int64,TSizedDefaultAllocator<32>_>::Remove(this_00,local_res10);
  iVar2 = (this->AccessOrder).ArrayNum;
  piVar1 = &(this->AccessOrder).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this_00->AllocatorInstance,piVar1);
  }
  (this->AccessOrder).ArrayNum = iVar2 + 1;
  *(long64 *)((this_00->AllocatorInstance).Data + (longlong)iVar2 * 8) = local_res10[0];
  return;
}

// MarkAsRecentWhisper @ 14b9fc450

void __thiscall FDS_ChatUserCache::MarkAsRecentWhisper(FDS_ChatUserCache *this,long64 param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<__int64,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long64 local_res10;
  
  if (0 < param_1) {
    this_00 = &this->RecentWhispers;
    local_res10 = param_1;
    TArray<__int64,TSizedDefaultAllocator<32>_>::Remove(this_00,&local_res10);
    pFVar4 = (this_00->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar4 + (longlong)(this->RecentWhispers).ArrayMax * 8)) &&
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
    iVar7 = (this->RecentWhispers).ArrayNum;
    piVar1 = &(this->RecentWhispers).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this_00->AllocatorInstance,piVar1);
    }
    pFVar4 = (this_00->AllocatorInstance).Data;
    (this->RecentWhispers).ArrayNum = iVar7 + 1;
    memmove(pFVar4 + 8,pFVar4,(longlong)iVar7 << 3);
    *(long64 *)(this_00->AllocatorInstance).Data = local_res10;
    uVar3 = this->MaxRecentWhispers;
    iVar7 = (this->RecentWhispers).ArrayNum;
    if ((int)uVar3 < iVar7) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      uVar8 = iVar7 - uVar3;
      if (((int)(uVar8 | uVar3) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar8 != 0) {
        pFVar4 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar3 * 8;
        iVar7 = ((this->RecentWhispers).ArrayNum - uVar3) - uVar8;
        if (iVar7 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
        }
        piVar2 = &(this->RecentWhispers).ArrayNum;
        *piVar2 = *piVar2 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&this_00->AllocatorInstance,(this->RecentWhispers).ArrayNum,piVar1);
      }
    }
  }
  return;
}

// Remove @ 14ba0e070

FDS_ChatUserInfo * __thiscall
FDS_ChatUserCache::Remove
          (FDS_ChatUserCache *this,FDS_ChatUserInfo *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ChatUserInfo *pFVar3;
  long64 local_res18;
  long64 local_res20;
  TSharedPtr<FDS_ChatUserInfo,1> local_58;
  FString local_48;
  long64 local_38;
  FString local_30;
  int local_20;
  int local_1c;
  
  if ((param_1->Data).ArrayNum < 2) {
    (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UserID).Data.ArrayNum = 0;
    (__return_storage_ptr__->UserID).Data.ArrayMax = 0;
    __return_storage_ptr__->PlayerUID = 0;
    (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Nickname).Data.ArrayNum = 0;
    (__return_storage_ptr__->Nickname).Data.ArrayMax = 0;
    __return_storage_ptr__->CharID = 0;
    __return_storage_ptr__->CharLevel = 0;
  }
  else {
    FindByNickname(this,&local_58,param_1);
    if (local_58.Object == (FDS_ChatUserInfo *)0x0) {
      (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UserID).Data.ArrayNum = 0;
      (__return_storage_ptr__->UserID).Data.ArrayMax = 0;
      __return_storage_ptr__->PlayerUID = 0;
      (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Nickname).Data.ArrayNum = 0;
      (__return_storage_ptr__->Nickname).Data.ArrayMax = 0;
      __return_storage_ptr__->CharID = 0;
      __return_storage_ptr__->CharLevel = 0;
    }
    else {
      if (local_58.Object == (FDS_ChatUserInfo *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FDS_ChatUserInfo *)(*pcVar1)();
          return pFVar3;
        }
      }
      local_res18 = (local_58.Object)->PlayerUID;
      ::FString::FString(&local_48,&(local_58.Object)->UserID);
      local_38 = (local_58.Object)->PlayerUID;
      ::FString::FString(&local_30,&(local_58.Object)->Nickname);
      local_20 = (local_58.Object)->CharID;
      local_1c = (local_58.Object)->CharLevel;
      local_res20 = local_res18;
      if (*(int *)&(this->ChatUserInfoCache).field_0x8 !=
          *(int *)&(this->ChatUserInfoCache).field_0x34) {
        TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<__int64>
                  ((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                    *)&this->ChatUserInfoCache,
                   (int)((ulonglong)local_res18 >> 0x20) * 0x17 + (int)local_res18,&local_res20);
      }
      TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
      ::Remove((TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
                *)&this->NicknameToUID,param_1);
      TArray<__int64,TSizedDefaultAllocator<32>_>::Remove(&this->AccessOrder,&local_res18);
      (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data =
           local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->UserID).Data.ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->UserID).Data.ArrayMax = local_48.Data.ArrayMax;
      __return_storage_ptr__->PlayerUID = local_38;
      (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data =
           local_30.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Nickname).Data.ArrayNum = local_30.Data.ArrayNum;
      (__return_storage_ptr__->Nickname).Data.ArrayMax = local_30.Data.ArrayMax;
      __return_storage_ptr__->CharID = local_20;
      __return_storage_ptr__->CharLevel = local_1c;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.Data.ArrayNum = 0;
      local_30.Data.ArrayMax = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Remove @ 14ba0e210

FDS_ChatUserInfo * __thiscall
FDS_ChatUserCache::Remove
          (FDS_ChatUserCache *this,FDS_ChatUserInfo *__return_storage_ptr__,long64 param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FDS_ChatUserInfo *pFVar7;
  long64 local_res18;
  long64 local_res20;
  TSharedPtr<FDS_ChatUserInfo,1> local_68;
  FString local_58;
  long64 local_48;
  FString local_40;
  int local_30;
  int local_2c;
  
  if (param_1 < 1) {
    (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UserID).Data.ArrayNum = 0;
    (__return_storage_ptr__->UserID).Data.ArrayMax = 0;
    __return_storage_ptr__->PlayerUID = 0;
    (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Nickname).Data.ArrayNum = 0;
    (__return_storage_ptr__->Nickname).Data.ArrayMax = 0;
    __return_storage_ptr__->CharID = 0;
    __return_storage_ptr__->CharLevel = 0;
    return __return_storage_ptr__;
  }
  local_res18 = param_1;
  FindByPlayerUID(this,&local_68,param_1);
  if (local_68.Object == (FDS_ChatUserInfo *)0x0) {
    (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UserID).Data.ArrayNum = 0;
    (__return_storage_ptr__->UserID).Data.ArrayMax = 0;
    __return_storage_ptr__->PlayerUID = 0;
    (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Nickname).Data.ArrayNum = 0;
    (__return_storage_ptr__->Nickname).Data.ArrayMax = 0;
    __return_storage_ptr__->CharID = 0;
    __return_storage_ptr__->CharLevel = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  if ((local_68.Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FDS_ChatUserInfo *)(*pcVar1)();
    return pFVar7;
  }
  ::FString::FString(&local_58,&(local_68.Object)->UserID);
  local_48 = (local_68.Object)->PlayerUID;
  ::FString::FString(&local_40,&(local_68.Object)->Nickname);
  local_30 = (local_68.Object)->CharID;
  local_2c = (local_68.Object)->CharLevel;
  local_res20 = local_res18;
  if (*(int *)&(this->ChatUserInfoCache).field_0x8 != *(int *)&(this->ChatUserInfoCache).field_0x34)
  {
    TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<__int64>
              ((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                *)&this->ChatUserInfoCache,
               (int)((ulonglong)local_res18 >> 0x20) * 0x17 + (int)local_res18,&local_res20);
  }
  iVar3 = local_40.Data.ArrayNum;
  if (1 < local_40.Data.ArrayNum) {
    if (local_40.Data.ArrayNum == local_58.Data.ArrayNum) {
      iVar5 = wcscmp((wchar_t *)local_40.Data.AllocatorInstance.Data,
                     (wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar4 = iVar5 == 0;
    }
    else {
      bVar4 = local_58.Data.ArrayNum + local_40.Data.ArrayNum == 1;
    }
    if ((!bVar4) &&
       (*(int *)&(this->NicknameToUID).field_0x8 != *(int *)&(this->NicknameToUID).field_0x34)) {
      iVar5 = iVar3 + -1;
      FVar2.Data = local_40.Data.AllocatorInstance.Data;
      if (iVar3 == 0) {
        iVar5 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
      TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                  *)&this->NicknameToUID,uVar6,&local_40);
    }
  }
  TArray<__int64,TSizedDefaultAllocator<32>_>::Remove(&this->AccessOrder,&local_res18);
  (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data =
       local_58.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->UserID).Data.ArrayNum = local_58.Data.ArrayNum;
  (__return_storage_ptr__->UserID).Data.ArrayMax = local_58.Data.ArrayMax;
  __return_storage_ptr__->PlayerUID = local_48;
  (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data =
       local_40.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Nickname).Data.ArrayNum = local_40.Data.ArrayNum;
  (__return_storage_ptr__->Nickname).Data.ArrayMax = local_40.Data.ArrayMax;
  __return_storage_ptr__->CharID = local_30;
  __return_storage_ptr__->CharLevel = local_2c;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

