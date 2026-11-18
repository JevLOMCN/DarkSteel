// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 17

// FCookOnTheFlyPackageStoreBackend @ 148cb4230

/* WARNING: Enum "Type": Some values do not have unique names */

FCookOnTheFlyPackageStoreBackend * __thiscall
FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend
          (FCookOnTheFlyPackageStoreBackend *this,ICookOnTheFlyServerConnection *param_1)

{
  void *_Src;
  undefined8 uVar1;
  TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_01;
  FCookOnTheFlyResponse *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  size_t _Size;
  LARGE_INTEGER local_res8;
  TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [24];
  undefined8 local_90;
  FCookOnTheFlyMessage local_88;
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> local_60;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> local_50;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  this->CookOnTheFlyServerConnection = param_1;
  this->_padding_ = (longlong)&___7FCookOnTheFlyPackageStoreBackend__6B_;
  (this->Context).Object = (FPackageStoreBackendContext *)0x0;
  (this->Context).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->EntriesLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PackageIdToEntryInfo = 0;
  *(undefined8 *)&(this->PackageIdToEntryInfo).field_0x8 = 0;
  *(undefined8 *)&(this->PackageIdToEntryInfo).field_0x20 = 0;
  *(undefined4 *)&(this->PackageIdToEntryInfo).field_0x28 = 0;
  *(undefined4 *)&(this->PackageIdToEntryInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageIdToEntryInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackageIdToEntryInfo).field_0x34 = 0;
  *(undefined8 *)&(this->PackageIdToEntryInfo).field_0x40 = 0;
  *(undefined4 *)&(this->PackageIdToEntryInfo).field_0x48 = 0;
  TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>
            (&this->PackageEntries,0);
  (this->RequestedPackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedPackageIds).ArrayNum = 0;
  (this->RequestedPackageIds).ArrayMax = 0;
  *(undefined8 *)&(this->AllServerOnDiskPackages).Elements = 0;
  *(undefined8 *)&(this->AllServerOnDiskPackages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllServerOnDiskPackages).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllServerOnDiskPackages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllServerOnDiskPackages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllServerOnDiskPackages).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllServerOnDiskPackages).Elements.field_0x34 = 0;
  (this->AllServerOnDiskPackages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllServerOnDiskPackages).HashSize = 0;
  this->MaxInactivityTime = 20.0;
  (this->PackageStats).Cooked = (TAtomic<unsigned_int>)0x0;
  (this->PackageStats).Failed = (TAtomic<unsigned_int>)0x0;
  this->TimeBetweenWarning = 10.0;
  this->LastClientActivtyTime = 0.0;
  this->LastServerActivtyTime = 0.0;
  this->LastWarningTime = 0.0;
  TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::Add
            (&this->PackageEntries,1);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
             *)(**(code **)((longlong)*this->CookOnTheFlyServerConnection + 0x48))();
  TMulticastDelegateRegistration<void___cdecl(UE::Cook::FCookOnTheFlyMessage_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FCookOnTheFlyPackageStoreBackend>
            (this_00,(FCookOnTheFlyPackageStoreBackend *)&local_res8.s,(pmf_55e8dc21)this);
  local_3c = 1;
  local_30 = 0;
  pvStack_28 = (void *)0x0;
  local_20 = 0;
  local_40 = 0x32;
  this_01 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
            (**(code **)((longlong)*this->CookOnTheFlyServerConnection + 0x40))
                      (this->CookOnTheFlyServerConnection,&local_b8,&local_40);
  pFVar2 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_01);
  local_88.Header.MessageType = *(ECookOnTheFlyMessage *)&pFVar2->field_0x0;
  local_88.Header.MessageStatus = *(ECookOnTheFlyMessageStatus *)&pFVar2->field_0x4;
  local_88.Header.CorrelationId = *(uint *)&pFVar2->field_0x8;
  local_88.Header._12_4_ = *(undefined4 *)&pFVar2->field_0xc;
  local_88.Header.Timestamp = *(long64 *)&pFVar2->field_0x10;
  local_88.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Body.ArrayNum = *(int *)&pFVar2->field_0x20;
  _Size = (size_t)local_88.Body.ArrayNum;
  _Src = *(void **)&pFVar2->field_0x18;
  if (local_88.Body.ArrayNum == 0) {
    local_88.Body.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.Body.ArrayNum,0,&local_88.Body.AllocatorInstance,local_88.Body.ArrayNum,
               &local_88.Body.ArrayMax);
    memcpy(local_88.Body.AllocatorInstance.Data,_Src,_Size);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_b8.ArrayMax,local_b8.ArrayNum));
  if (local_88.Header.MessageStatus == Ok) {
    UE::Cook::FCookOnTheFlyMessage::GetBodyAs<UE::ZenCookOnTheFly::Messaging::FCompletedPackages>
              (&local_88,(FCompletedPackages *)local_a8);
    uVar1 = local_90;
    if (4 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    local_50.ArrayMax = local_90._4_4_;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)local_a8._0_8_;
    local_b8.ArrayMax = local_a8._12_4_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    local_50.ArrayNum = (int)uVar1;
    AddPackages(this,&local_b8,&local_50,&local_60);
    QueryPerformanceCounter(&local_res8);
    this->LastServerActivtyTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    DestructItems<FPackageStoreEntryResource,int>((FPackageStoreEntryResource *)0x0,0);
  }
  else if (2 < (byte)LogCookOnTheFly._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
  }
  if (local_88.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Body.AllocatorInstance.Data);
  }
  if (pvStack_28 != (void *)0x0) {
    FMemory::Free(pvStack_28);
  }
  GetAllAvailablePackagesFromServer(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FPackageName::DoesPackageExistOverrideDelegate,(FWriteAccessScope *)local_a8);
  local_90._0_4_ = 0x55015f68;
  local_90._4_4_ = 1;
  puVar3 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &FPackageName::DoesPackageExistOverrideDelegate.field_0x8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = this;
  }
  if (local_a8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_a8._12_4_,local_a8._8_4_),
               (FDestructionSentinel *)local_a8);
  }
  return this;
}

// ~FCookOnTheFlyPackageStoreBackend @ 148cb6230

void __thiscall
FCookOnTheFlyPackageStoreBackend::~FCookOnTheFlyPackageStoreBackend
          (FCookOnTheFlyPackageStoreBackend *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  (this->AllServerOnDiskPackages).HashSize = 0;
  FVar1 = (this->AllServerOnDiskPackages).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllServerOnDiskPackages).Elements);
  pFVar2 = (this->RequestedPackageIds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->PackageEntries).Chunks,0);
  pFVar2 = (this->PackageEntries).Chunks.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PackageIdToEntryInfo).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PackageIdToEntryInfo).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageIdToEntryInfo);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  return;
}

// operator() @ 148cb7a30

bool __thiscall
`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>::operator()
          (void *this,FName param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  FPackageId FVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  FName local_res8;
  FName local_res10;
  
  lVar1 = *(longlong *)this;
  local_res10 = param_1;
  FVar4 = FPackageId::FromName(&local_res8);
  SRWLock = (PSRWLOCK)(lVar1 + 0x20);
  uVar2 = *(ulonglong *)FVar4.Id;
  AcquireSRWLockShared(SRWLock);
  puVar7 = (ulonglong *)0x0;
  if (*(int *)(lVar1 + 0x30) != *(int *)(lVar1 + 0x5c)) {
    lVar5 = *(longlong *)(lVar1 + 0x68);
    if (*(longlong *)(lVar1 + 0x68) == 0) {
      lVar5 = lVar1 + 0x60;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)(lVar1 + 0x70) - 1) & uVar2 & 0xffffffff) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x28) + (longlong)iVar3 * 0x18;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar3 * 0x18) == uVar2) {
          puVar6 = (ulonglong *)(lVar5 + 8);
          if (lVar5 == 0) {
            puVar6 = puVar7;
          }
          if (puVar6 != (ulonglong *)0x0) {
            uVar2 = *puVar6;
            ReleaseSRWLockShared(SRWLock);
            return (int)uVar2 != 1;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  puVar6 = puVar7;
  if (*(int *)(lVar1 + 0xa8) != *(int *)(lVar1 + 0xd4)) {
    lVar5 = *(longlong *)(lVar1 + 0xe0);
    if (*(longlong *)(lVar1 + 0xe0) == 0) {
      lVar5 = lVar1 + 0xd8;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)(lVar1 + 0xe8) - 1) & uVar2 & 0xffffffff) * 4);
    if (iVar3 != -1) {
      do {
        puVar6 = (ulonglong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 0xa0));
        if (*puVar6 == uVar2) break;
        iVar3 = (int)puVar6[1];
        puVar6 = puVar7;
      } while (iVar3 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  return puVar6 != (ulonglong *)0x0;
}

// AddOnDiskPackages @ 148cbbf50

void __thiscall
FCookOnTheFlyPackageStoreBackend::AddOnDiskPackages
          (FCookOnTheFlyPackageStoreBackend *this,
          TArray<FPackageId,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar13;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *local_res10;
  FScriptContainerElement *local_res18;
  FPlatformRWLock *local_res20;
  FSparseArrayAllocationInfo local_58;
  
  local_res20 = &this->EntriesLock;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)local_res20);
  uVar2 = param_1->ArrayNum;
  this_00 = &this->AllServerOnDiskPackages;
  puVar1 = &(this->AllServerOnDiskPackages).Elements.field_0x8;
  if ((uint)(*(int *)&(this->AllServerOnDiskPackages).Elements.field_0x8 -
            *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x34) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar2);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar2);
    if (uVar2 < 4) {
      iVar8 = 1;
    }
    else {
      uVar10 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar5 & 0x1f);
    }
    iVar9 = (this->AllServerOnDiskPackages).HashSize;
    if ((iVar9 == 0) || (iVar9 < iVar8)) {
      (this->AllServerOnDiskPackages).HashSize = iVar8;
      TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  pTVar6 = local_res10;
  uVar2 = local_res10->ArrayNum;
  uVar10 = (ulonglong)(int)uVar2;
  pFVar13 = (local_res10->AllocatorInstance).Data;
  local_res18 = pFVar13 + uVar10 * 8;
  do {
    pFVar7 = local_res18;
    if (pTVar6->ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FPackageId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar13 == pFVar7) {
                    /* WARNING: Could not recover jumptable at 0x000148cbc212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)local_res20);
      return;
    }
    iVar8 = *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x34;
    if (iVar8 == 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,(ForAnyElementType *)this_00,(int *)puVar1,
                         (int *)&(this->AllServerOnDiskPackages).Elements.field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->AllServerOnDiskPackages).Elements.field_0x10,false);
    }
    else {
      iVar9 = *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x30;
      lVar5 = *(longlong *)&this_00->Elements;
      iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x10);
      iVar8 = iVar8 + -1;
      *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x30 = iVar3;
      *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x34 = iVar8;
      if (iVar8 != 0) {
        *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,&local_58,iVar9);
    if (local_58.Pointer != (uint *)0x0) {
      *(undefined8 *)local_58.Pointer = *(undefined8 *)pFVar13;
      *(uint *)((longlong)local_58.Pointer + 8) = 0xffffffff;
    }
    iVar8 = *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x34;
    if ((*(int *)puVar1 - iVar8 != 1) && (*(int *)puVar1 != iVar8)) {
      FVar4 = (this->AllServerOnDiskPackages).Hash.SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&(this->AllServerOnDiskPackages).Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar4;
      }
      iVar8 = *(int *)((longlong)FVar12 +
                      (ulonglong)
                      ((this->AllServerOnDiskPackages).HashSize - 1U & *(uint *)local_58.Pointer) *
                      4);
      if (iVar8 != -1) {
        lVar5 = *(longlong *)&this_00->Elements;
        do {
          if (*(longlong *)(lVar5 + (longlong)iVar8 * 0x10) == *(longlong *)local_58.Pointer) {
            if (iVar8 != -1) {
              *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = *(longlong *)local_58.Pointer;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this_00,local_58.Index,1);
              goto LAB_148cbc1d5;
            }
            break;
          }
          iVar8 = *(int *)(lVar5 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    uVar11 = *(int *)puVar1 - *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x34;
    if (uVar11 < 4) {
      iVar8 = 1;
    }
    else {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar8 <= (this->AllServerOnDiskPackages).HashSize)) {
      uVar11 = (this->AllServerOnDiskPackages).HashSize - 1U & *(uint *)local_58.Pointer;
      *(uint *)((longlong)local_58.Pointer + 0xc) = uVar11;
      FVar4 = (this->AllServerOnDiskPackages).Hash.SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&(this->AllServerOnDiskPackages).Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar4;
      }
      uVar10 = (longlong)(this->AllServerOnDiskPackages).HashSize - 1U & (longlong)(int)uVar11;
      *(uint *)((longlong)local_58.Pointer + 8) = *(uint *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_58.Index;
LAB_148cbc1d5:
      uVar10 = (ulonglong)uVar2;
      pFVar13 = pFVar13 + 8;
    }
    else {
      (this->AllServerOnDiskPackages).HashSize = iVar8;
      TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Rehash(this_00);
      uVar10 = (ulonglong)uVar2;
      pFVar13 = pFVar13 + 8;
    }
  } while( true );
}

// AddPackages @ 148cbc230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookOnTheFlyPackageStoreBackend::AddPackages
          (FCookOnTheFlyPackageStoreBackend *this,
          TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPackageId,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> *param_3)

{
  TMap<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
  *this_00;
  TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_> *pTVar1;
  TAtomic<unsigned_int> *pTVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  FPackageId SRWLock;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined4 *puVar20;
  undefined1 local_108;
  undefined1 local_107 [7];
  FName local_100;
  void *local_f8;
  FPackageId local_f0;
  int local_e8;
  int local_e4;
  uint local_e0;
  FPackageId local_d8;
  FScriptContainerElement *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  FScriptContainerElement *local_b8;
  FPackageId *local_b0;
  undefined4 *local_a8;
  FPackageId *local_a0;
  undefined4 *local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_f0.Id = (ulong64)&this->EntriesLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_f0.Id);
  pFVar18 = (param_2->AllocatorInstance).Data;
  iVar8 = param_2->ArrayNum;
  pFVar19 = pFVar18 + (longlong)iVar8 * 8;
  do {
    if (param_2->ArrayNum != iVar8) {
      local_108 = 0;
      `TCheckedPointerIterator<FPackageId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_108);
    }
    SRWLock.Id = local_f0.Id;
    if (pFVar18 == pFVar19) {
      local_e0 = param_1->ArrayNum;
      uVar13 = (ulonglong)(int)local_e0;
      pFVar18 = (param_1->AllocatorInstance).Data;
      pFVar19 = pFVar18 + 0x24;
      local_b8 = pFVar18 + uVar13 * 0x58;
      do {
        pFVar12 = local_b8;
        local_d0 = pFVar18;
        if (param_1->ArrayNum != (int)uVar13) {
          local_107[0] = 0;
          `TCheckedPointerIterator<FPackageStoreEntryResource,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_107);
        }
        if (pFVar18 == pFVar12) {
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock.Id);
          DestructItems<FPackageStoreEntryResource,int>
                    ((FPackageStoreEntryResource *)(param_1->AllocatorInstance).Data,
                     param_1->ArrayNum);
          pFVar19 = (param_1->AllocatorInstance).Data;
          if (pFVar19 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar19);
          }
          pFVar19 = (param_2->AllocatorInstance).Data;
          if (pFVar19 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar19);
          }
          pFVar19 = (param_3->AllocatorInstance).Data;
          if (pFVar19 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar19);
          }
          return;
        }
        local_f0.Id = *(ulong64 *)(pFVar19 + -0x14);
        this_00 = &this->PackageIdToEntryInfo;
        local_c0 = 0;
        local_bc = 0xffffffff;
        if (*(int *)&(this->PackageIdToEntryInfo).field_0x8 !=
            *(int *)&(this->PackageIdToEntryInfo).field_0x34) {
          puVar3 = *(undefined1 **)&(this->PackageIdToEntryInfo).field_0x40;
          puVar15 = &(this->PackageIdToEntryInfo).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar15 = puVar3;
          }
          iVar8 = *(int *)(puVar15 +
                          ((ulonglong)(*(int *)&(this->PackageIdToEntryInfo).field_0x48 - 1) &
                          local_f0.Id & 0xffffffff) * 4);
          if (iVar8 != -1) {
            do {
              lVar17 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18;
              if (*(TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>
                    **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) ==
                  (TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>
                   *)local_f0.Id) {
                if (lVar17 != 0) goto LAB_148cbc54b;
                break;
              }
              iVar8 = *(int *)(lVar17 + 0x10);
            } while (iVar8 != -1);
          }
        }
        local_a0 = &local_f0;
        local_98 = &local_c0;
        TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>_>
                  ((TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
                    *)this_00,(uint)&local_e4,
                   (TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>
                    *)local_f0.Id,(bool *)&local_a0);
        lVar17 = *(longlong *)&this_00->field_0x0 + (longlong)local_e4 * 0x18;
LAB_148cbc54b:
        iVar8 = *(int *)(lVar17 + 0xc);
        pTVar1 = &this->PackageEntries;
        *(undefined4 *)(lVar17 + 8) = 4;
        if (iVar8 == -1) {
          iVar8 = (this->PackageEntries).NumElements;
          (this->PackageEntries).NumElements = iVar8 + 1;
          iVar5 = (iVar8 + 0xba) / 0xba;
          iVar9 = (this->PackageEntries).Chunks.Array.ArrayNum;
          if (iVar9 < iVar5) {
            uVar13 = (ulonglong)(uint)(iVar5 - iVar9);
            do {
              local_f8 = ::operator_new(0x3ff0);
              if (local_f8 != (void *)0x0) {
                lVar16 = 0xba;
                puVar20 = (undefined4 *)((longlong)local_f8 + 8);
                do {
                  *(undefined8 *)(puVar20 + -2) = 0;
                  *puVar20 = 0;
                  *(undefined8 *)(puVar20 + 2) = 0;
                  *(undefined8 *)(puVar20 + 4) = 0;
                  *(undefined8 *)(puVar20 + 6) = 0;
                  *(undefined8 *)(puVar20 + 8) = 0;
                  *(undefined8 *)(puVar20 + 10) = 0;
                  *(undefined8 *)(puVar20 + 0xc) = 0;
                  *(undefined8 *)(puVar20 + 0xe) = 0;
                  *(undefined8 *)(puVar20 + 0x10) = 0;
                  *(undefined8 *)(puVar20 + 0x12) = 0;
                  puVar20 = puVar20 + 0x16;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
              pFVar18 = (pTVar1->Chunks).Array.AllocatorInstance.Data;
              if (((pFVar18 <= (FScriptContainerElement *)&local_f8) &&
                  ((FScriptContainerElement *)&local_f8 <
                   pFVar18 + (longlong)(this->PackageEntries).Chunks.Array.ArrayMax * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar9 = (this->PackageEntries).Chunks.Array.ArrayNum;
              if (iVar9 == (this->PackageEntries).Chunks.Array.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)pTVar1,
                                   &(this->PackageEntries).Chunks.Array.ArrayMax);
              }
              (this->PackageEntries).Chunks.Array.ArrayNum = iVar9 + 1;
              *(void **)((pTVar1->Chunks).Array.AllocatorInstance.Data + (longlong)iVar9 * 8) =
                   local_f8;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          *(int *)(lVar17 + 0xc) = iVar8;
        }
        uVar6 = iVar8 / 0xba;
        uVar10 = 0;
        if ((int)uVar6 < (this->PackageEntries).Chunks.Array.ArrayNum) {
          uVar10 = ~uVar6 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = pFVar19 + -0xc;
        puVar20 = (undefined4 *)
                  ((ulonglong)(uint)(iVar8 % 0xba) * 0x58 +
                  *(longlong *)
                   ((pTVar1->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8));
        pFVar18 = (FScriptContainerElement *)(puVar20 + 6);
        *puVar20 = *(undefined4 *)local_d0;
        *(undefined8 *)(puVar20 + 1) = *(undefined8 *)(pFVar19 + -0x20);
        *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(pFVar19 + -0x14);
        if (pFVar18 != pFVar12) {
          if (*(void **)pFVar18 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar18);
          }
          *(undefined8 *)pFVar18 = *(undefined8 *)pFVar12;
          *(undefined8 *)pFVar12 = 0;
          puVar20[8] = *(undefined4 *)(pFVar19 + -4);
          puVar20[9] = *(undefined4 *)pFVar19;
          *(undefined8 *)(pFVar19 + -4) = 0;
        }
        pFVar18 = (FScriptContainerElement *)(puVar20 + 10);
        pFVar12 = pFVar19 + 4;
        if (pFVar18 != pFVar12) {
          if (*(void **)pFVar18 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar18);
          }
          *(undefined8 *)pFVar18 = *(undefined8 *)pFVar12;
          *(undefined8 *)pFVar12 = 0;
          puVar20[0xc] = *(undefined4 *)(pFVar19 + 0xc);
          puVar20[0xd] = *(undefined4 *)(pFVar19 + 0x10);
          *(undefined8 *)(pFVar19 + 0xc) = 0;
        }
        pFVar18 = (FScriptContainerElement *)(puVar20 + 0xe);
        pFVar12 = pFVar19 + 0x14;
        if (pFVar18 != pFVar12) {
          if (*(void **)pFVar18 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar18);
          }
          *(undefined8 *)pFVar18 = *(undefined8 *)pFVar12;
          *(undefined8 *)pFVar12 = 0;
          puVar20[0x10] = *(undefined4 *)(pFVar19 + 0x1c);
          puVar20[0x11] = *(undefined4 *)(pFVar19 + 0x20);
          *(undefined8 *)(pFVar19 + 0x1c) = 0;
        }
        pFVar18 = (FScriptContainerElement *)(puVar20 + 0x12);
        pFVar12 = pFVar19 + 0x24;
        if (pFVar18 != pFVar12) {
          if (*(void **)pFVar18 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar18);
          }
          *(undefined8 *)pFVar18 = *(undefined8 *)pFVar12;
          *(undefined8 *)pFVar12 = 0;
          puVar20[0x14] = *(undefined4 *)(pFVar19 + 0x2c);
          puVar20[0x15] = *(undefined4 *)(pFVar19 + 0x30);
          *(undefined8 *)(pFVar19 + 0x2c) = 0;
        }
        LOCK();
        (this->PackageStats).Cooked = (TAtomic<unsigned_int>)((int)(this->PackageStats).Cooked + 1);
        UNLOCK();
        if (5 < (byte)LogCookOnTheFly._0_1_) {
          iVar8 = *(int *)(lVar17 + 0xc);
          uVar6 = iVar8 / 0xba;
          uVar10 = 0;
          if ((int)uVar6 < (this->PackageEntries).Chunks.Array.ArrayNum) {
            uVar10 = ~uVar6 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ::FName::ToString((FName *)(*(longlong *)
                                       ((this->PackageEntries).Chunks.Array.AllocatorInstance.Data +
                                       (longlong)(int)uVar6 * 8) +
                                     (ulonglong)(uint)(iVar8 % 0xba) * 0x58 + 4),&local_58);
          ::LexToString(&local_68,&local_f0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        pFVar18 = local_d0 + 0x58;
        uVar13 = (ulonglong)local_e0;
        pFVar19 = pFVar19 + 0x58;
      } while( true );
    }
    local_d8.Id = *(ulong64 *)pFVar18;
    local_c8 = 0;
    local_c4 = 0xffffffff;
    if (*(int *)&(this->PackageIdToEntryInfo).field_0x8 !=
        *(int *)&(this->PackageIdToEntryInfo).field_0x34) {
      puVar3 = *(undefined1 **)&(this->PackageIdToEntryInfo).field_0x40;
      puVar15 = &(this->PackageIdToEntryInfo).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar15 = puVar3;
      }
      iVar9 = *(int *)(puVar15 +
                      ((ulonglong)(*(int *)&(this->PackageIdToEntryInfo).field_0x48 - 1) &
                      local_d8.Id & 0xffffffff) * 4);
      if (iVar9 != -1) {
        do {
          lVar17 = *(longlong *)&this->PackageIdToEntryInfo + (longlong)iVar9 * 0x18;
          if (*(ulonglong *)(*(longlong *)&this->PackageIdToEntryInfo + (longlong)iVar9 * 0x18) ==
              local_d8.Id) {
            if (lVar17 != 0) goto LAB_148cbc34f;
            break;
          }
          iVar9 = *(int *)(lVar17 + 0x10);
        } while (iVar9 != -1);
      }
    }
    local_b0 = &local_d8;
    local_a8 = &local_c8;
    TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>_>
              ((TSet<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>,FDefaultSetAllocator>
                *)&this->PackageIdToEntryInfo,(uint)&local_e8,
               (TPairInitializer<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo_&&>
                *)(local_d8.Id & 0xffffffff),(bool *)&local_b0);
    lVar17 = *(longlong *)&this->PackageIdToEntryInfo + (longlong)local_e8 * 0x18;
LAB_148cbc34f:
    if (*(int *)(lVar17 + 8) != 1) {
      pFVar12 = (param_3->AllocatorInstance).Data;
      pFVar14 = pFVar12 + (longlong)param_3->ArrayNum * 0x10;
      for (; pFVar12 != pFVar14; pFVar12 = pFVar12 + 0x10) {
        if (*(ulonglong *)pFVar12 == local_d8.Id) {
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            local_100 = *(FName *)(pFVar12 + 8);
            goto LAB_148cbc39f;
          }
          break;
        }
      }
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
      pFVar11 = ::FName::FName(&local_90,L"<Unknown>");
      local_100 = *pFVar11;
LAB_148cbc39f:
      if (2 < (byte)LogCookOnTheFly._0_1_) {
        ::FName::ToString(&local_100,&local_78);
        ::LexToString(&local_88,&local_d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
    *(undefined4 *)(lVar17 + 8) = 1;
    LOCK();
    pTVar2 = &(this->PackageStats).Failed;
    *pTVar2 = (TAtomic<unsigned_int>)((int)*pTVar2 + 1);
    UNLOCK();
    pFVar18 = pFVar18 + 8;
  } while( true );
}

// BeginRead @ 148cbcf30

void __thiscall FCookOnTheFlyPackageStoreBackend::BeginRead(FCookOnTheFlyPackageStoreBackend *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148cbcf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
  return;
}

// CheckActivity @ 148cbd880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookOnTheFlyPackageStoreBackend::CheckActivity(FCookOnTheFlyPackageStoreBackend *this)

{
  undefined1 *puVar1;
  TMap<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TMap<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  int local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined4 uStack_cc;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  TMap<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88 [4];
  
  QueryPerformanceCounter(&local_res18);
  dVar10 = __real_4170000000000000;
  dVar8 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar4 = this->LastClientActivtyTime;
  QueryPerformanceCounter(&local_res20);
  dVar9 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  dVar5 = this->LastServerActivtyTime;
  QueryPerformanceCounter(&local_c8);
  if (((this->MaxInactivityTime < dVar8 - dVar4) &&
      (this->MaxInactivityTime < (dVar9 + dVar10) - dVar5)) &&
     (dVar4 = ((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10) -
              this->LastWarningTime,
     this->TimeBetweenWarning <= dVar4 && dVar4 != this->TimeBetweenWarning)) {
    QueryPerformanceCounter(&local_c0);
    this->LastWarningTime =
         (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10;
    if ((4 < (byte)LogCookOnTheFly._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly),
       4 < (byte)LogCookOnTheFly._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
    iVar6 = *(int *)&(this->PackageIdToEntryInfo).field_0x28;
    puVar1 = &(this->PackageIdToEntryInfo).field_0x10;
    iVar17 = 0;
    pTVar2 = &this->PackageIdToEntryInfo;
    uVar13 = 1;
    iVar19 = 0;
    iVar14 = 0;
    if (iVar6 != 0) {
      puVar20 = *(uint **)&(this->PackageIdToEntryInfo).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        lVar15 = (longlong)iVar17;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar17 + 1;
        iVar14 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148cbda80;
        uVar16 = puVar20[lVar15 + 1];
      }
      uVar13 = -uVar16 & uVar16;
      uVar3 = (ulonglong)uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res10 = (int)lVar15;
      iVar14 = iVar19 + -1 + local_res10;
      if (iVar6 < iVar14) {
        iVar14 = iVar6;
      }
    }
LAB_148cbda80:
    uVar16 = *(uint *)&(this->PackageIdToEntryInfo).field_0x28;
    uVar21 = uVar16 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uVar13,iVar17);
    TStack_b0.CurrentBitIndex = iVar14;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar16 >> 5;
    TStack_b0._28_4_ = iVar14;
    TStack_b0.BaseBitIndex = iVar19;
    uStack_90 = CONCAT44(uStack_cc,
                         *(int *)&(this->PackageIdToEntryInfo).field_0x8 -
                         *(int *)&(this->PackageIdToEntryInfo).field_0x34);
    local_b8 = pTVar2;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar6 < (int)uVar16)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar13 = *(uint *)&(this->PackageIdToEntryInfo).field_0x28;
    if (uVar16 != uVar13) {
      puVar18 = *(undefined1 **)&(this->PackageIdToEntryInfo).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar15 = (longlong)iVar17;
        uVar21 = uVar21 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_148cbdba0;
        uVar16 = *(uint *)(puVar18 + lVar15 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar16 = (int)lVar15 + -1 + uVar21;
      if ((int)uVar13 < (int)uVar16) {
        uVar16 = uVar13;
      }
    }
LAB_148cbdba0:
    while( true ) {
      pTVar11 = local_b8;
      if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
        `TSparseArray<TSparseSetElement<TTuple<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_b0.CurrentBitIndex == uVar16) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar11 == pTVar2)) break;
      lVar15 = *(longlong *)pTVar11;
      if ((*(int *)(lVar15 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x18) == 3) &&
         (4 < (byte)LogCookOnTheFly._0_1_)) {
        ::LexToString(local_88,(FPackageId *)(lVar15 + (longlong)TStack_b0.CurrentBitIndex * 0x18));
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
        if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
        }
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  }
  return;
}

// CreatePackageStoreEntry @ 148cc0650

EPackageStoreEntryStatus __thiscall
FCookOnTheFlyPackageStoreBackend::CreatePackageStoreEntry
          (FCookOnTheFlyPackageStoreBackend *this,FEntryInfo *param_1,FPackageStoreEntry *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EPackageStoreEntryStatus EVar5;
  FPackageStoreEntryResource *pFVar6;
  undefined4 uStack_c;
  
  EVar5 = param_1->Status;
  if (EVar5 == Ok) {
    pFVar6 = TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::operator[]
                       (&this->PackageEntries,param_1->EntryIndex);
    iVar1 = (pFVar6->ImportedPackageIds).ArrayNum;
    pFVar2 = (pFVar6->ImportedPackageIds).AllocatorInstance.Data;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    EVar5 = Ok;
    (param_2->ImportedPackageIds).DataPtr = (FPackageId *)pFVar2;
    *(ulonglong *)&(param_2->ImportedPackageIds).ArrayNum = CONCAT44(uStack_c,iVar1);
  }
  return EVar5;
}

// DoesPackageExist @ 148cc2410

bool __thiscall
FCookOnTheFlyPackageStoreBackend::DoesPackageExist
          (FCookOnTheFlyPackageStoreBackend *this,FPackageId param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 *puVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  ulong64 *puVar6;
  bool bVar7;
  
  AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
  puVar6 = (ulong64 *)0x0;
  if (*(int *)&(this->PackageIdToEntryInfo).field_0x8 !=
      *(int *)&(this->PackageIdToEntryInfo).field_0x34) {
    puVar4 = *(undefined1 **)&(this->PackageIdToEntryInfo).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PackageIdToEntryInfo).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->PackageIdToEntryInfo).field_0x48 - 1) &
                              param_1.Id & 0xffffffff) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->PackageIdToEntryInfo + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->PackageIdToEntryInfo + (longlong)iVar2 * 0x18) ==
            param_1.Id) {
          puVar3 = (ulong64 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = puVar6;
          }
          if (puVar3 != (ulong64 *)0x0) {
            bVar7 = (int)*puVar3 == 1;
            goto LAB_148cc24dd;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  puVar3 = puVar6;
  if (*(int *)&(this->AllServerOnDiskPackages).Elements.field_0x8 !=
      *(int *)&(this->AllServerOnDiskPackages).Elements.field_0x34) {
    FVar5 = (this->AllServerOnDiskPackages).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->AllServerOnDiskPackages).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    ((ulonglong)((this->AllServerOnDiskPackages).HashSize - 1) &
                    param_1.Id & 0xffffffff) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulong64 *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)&(this->AllServerOnDiskPackages).Elements);
        if (*puVar3 == param_1.Id) break;
        iVar2 = (int)puVar3[1];
        puVar3 = puVar6;
      } while (iVar2 != -1);
    }
  }
  bVar7 = puVar3 == (ulong64 *)0x0;
LAB_148cc24dd:
  ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  return !bVar7;
}

// EndRead @ 148cc29f0

void __thiscall FCookOnTheFlyPackageStoreBackend::EndRead(FCookOnTheFlyPackageStoreBackend *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar3 = (this->RequestedPackageIds).AllocatorInstance.Data;
  (this->RequestedPackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->RequestedPackageIds).ArrayNum;
  iVar2 = (this->RequestedPackageIds).ArrayMax;
  (this->RequestedPackageIds).ArrayNum = 0;
  (this->RequestedPackageIds).ArrayMax = 0;
  ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  if (iVar1 < 1) {
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    local_18.AllocatorInstance.Data = pFVar3;
    local_18.ArrayNum = iVar1;
    local_18.ArrayMax = iVar2;
    SendCookRequest(this,&local_18);
  }
  return;
}

// GetAllAvailablePackagesFromServer @ 148cc6780

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookOnTheFlyPackageStoreBackend::GetAllAvailablePackagesFromServer
          (FCookOnTheFlyPackageStoreBackend *this)

{
  void *_Src;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_00;
  FCookOnTheFlyResponse *pFVar1;
  size_t _Size;
  FGetAllOnDiskPackagesRequest local_128;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4 [5];
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  FArchiveState local_b8;
  undefined8 local_28;
  ForAnyElementType *local_20;
  undefined8 local_18;
  
  local_e4[2] = 1;
  local_e4[3] = 0;
  local_e4[1] = 0x92;
  local_d0 = 0;
  pvStack_c8 = (void *)0x0;
  local_c0 = 0;
  this_00 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
            (**(code **)((longlong)*this->CookOnTheFlyServerConnection + 0x40))
                      (this->CookOnTheFlyServerConnection,&local_118,local_e4 + 1);
  pFVar1 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_00);
  local_108 = *(undefined8 *)pFVar1;
  uStack_100 = *(undefined8 *)&pFVar1->field_0x8;
  local_f8 = *(undefined8 *)&pFVar1->field_0x10;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = *(int *)&pFVar1->field_0x20;
  _Size = (size_t)local_e8;
  _Src = *(void **)&pFVar1->field_0x18;
  if (local_e8 == 0) {
    local_e4[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e8,0,&local_f0,local_e8,local_e4);
    memcpy(local_f0.Data,_Src,_Size);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_118.ArrayMax,local_118.ArrayNum));
  if (local_108._4_4_ == 1) {
    local_128.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.PackageIds.ArrayNum = 0;
    local_128.PackageIds.ArrayMax = 0;
    local_b8._padding_ = 0;
    local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_b8._40_8_ = 0;
    local_b8.ArSerializingDefaults = 0;
    local_b8.ArPortFlags = 0;
    local_b8.ArMaxSerializeSize = 0;
    local_b8.ArUEVer.FileVersionUE4 = 0;
    local_b8.ArUEVer.FileVersionUE5 = 0;
    local_b8.ArLicenseeUEVer = 0;
    local_b8.ArEngineVer.Major = 0;
    local_b8.ArEngineVer.Minor = 0;
    local_b8.ArEngineVer.Patch = 0;
    local_b8.ArEngineVer._6_2_ = 0;
    local_b8.ArEngineVer.Changelist = 0;
    local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_b8.SerializedProperty = (FProperty *)0x0;
    local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_b8.bCustomVersionsAreReset = false;
    local_b8._129_7_ = 0;
    local_b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_b8);
    local_28 = 0;
    local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_20 = &local_f0;
    local_18 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
    UE::ZenCookOnTheFly::Messaging::operator<<((FArchive *)&local_b8,&local_128);
    local_118.ArrayNum = local_128.PackageIds.ArrayNum;
    local_118.AllocatorInstance.Data = local_128.PackageIds.AllocatorInstance.Data;
    local_118.ArrayMax = local_128.PackageIds.ArrayMax;
    local_128.PackageIds.ArrayNum = 0;
    local_128.PackageIds.ArrayMax = 0;
    local_128.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FArchive::~FArchive((FArchive *)&local_b8);
    if (local_128.PackageIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.PackageIds.AllocatorInstance.Data);
    }
    if (3 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    AddOnDiskPackages(this,&local_118);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  else if (2 < (byte)LogCookOnTheFly._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (pvStack_c8 != (void *)0x0) {
    FMemory::Free(pvStack_c8);
  }
  return;
}

// GetCookedPackagesFromServer @ 148cc6e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookOnTheFlyPackageStoreBackend::GetCookedPackagesFromServer
          (FCookOnTheFlyPackageStoreBackend *this)

{
  void *_Src;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_00;
  FCookOnTheFlyResponse *pFVar1;
  size_t _Size;
  LARGE_INTEGER local_res8;
  TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> local_b8;
  FCookOnTheFlyMessage local_a8;
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> local_80;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> local_70;
  FCompletedPackages local_60;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  local_3c = 1;
  local_40 = 0x32;
  local_30 = 0;
  pvStack_28 = (void *)0x0;
  local_20 = 0;
  this_00 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
            (**(code **)((longlong)*this->CookOnTheFlyServerConnection + 0x40))
                      (this->CookOnTheFlyServerConnection,&local_b8,&local_40);
  pFVar1 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_00);
  local_a8.Header.MessageType = *(ECookOnTheFlyMessage *)&pFVar1->field_0x0;
  local_a8.Header.MessageStatus = *(ECookOnTheFlyMessageStatus *)&pFVar1->field_0x4;
  local_a8.Header.CorrelationId = *(uint *)&pFVar1->field_0x8;
  local_a8.Header._12_4_ = *(undefined4 *)&pFVar1->field_0xc;
  local_a8.Header.Timestamp = *(long64 *)&pFVar1->field_0x10;
  local_a8.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Body.ArrayNum = *(int *)&pFVar1->field_0x20;
  _Size = (size_t)local_a8.Body.ArrayNum;
  _Src = *(void **)&pFVar1->field_0x18;
  if (local_a8.Body.ArrayNum == 0) {
    local_a8.Body.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_a8.Body.ArrayNum,0,&local_a8.Body.AllocatorInstance,local_a8.Body.ArrayNum,
               &local_a8.Body.ArrayMax);
    memcpy(local_a8.Body.AllocatorInstance.Data,_Src,_Size);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_b8.ArrayMax,local_b8.ArrayNum));
  if (local_a8.Header.MessageStatus == Ok) {
    UE::Cook::FCookOnTheFlyMessage::GetBodyAs<UE::ZenCookOnTheFly::Messaging::FCompletedPackages>
              (&local_a8,&local_60);
    if (4 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    local_70.AllocatorInstance.Data = local_60.FailedPackages.AllocatorInstance.Data;
    local_70.ArrayMax = local_60.FailedPackages.ArrayMax;
    local_b8.AllocatorInstance.Data = local_60.CookedPackages.AllocatorInstance.Data;
    local_b8.ArrayMax = local_60.CookedPackages.ArrayMax;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    AddPackages(this,&local_b8,&local_70,&local_80);
    QueryPerformanceCounter(&local_res8);
    this->LastServerActivtyTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    DestructItems<FPackageStoreEntryResource,int>((FPackageStoreEntryResource *)0x0,0);
  }
  else if (2 < (byte)LogCookOnTheFly._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
  }
  if (local_a8.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Body.AllocatorInstance.Data);
  }
  if (pvStack_28 != (void *)0x0) {
    FMemory::Free(pvStack_28);
  }
  return;
}

// GetPackageRedirectInfo @ 148cc78e0

bool __thiscall
FCookOnTheFlyPackageStoreBackend::GetPackageRedirectInfo
          (FCookOnTheFlyPackageStoreBackend *this,FPackageId param_1,FName *param_2,
          FPackageId *param_3)

{
  return false;
}

// GetPackageStoreEntry @ 148cc7900

EPackageStoreEntryStatus __thiscall
FCookOnTheFlyPackageStoreBackend::GetPackageStoreEntry
          (FCookOnTheFlyPackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EPackageStoreEntryStatus EVar5;
  int iVar6;
  FEntryInfo *pFVar7;
  FPackageStoreEntryResource *pFVar8;
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> *pTVar9;
  FEntryInfo local_res8;
  FPackageId local_res10;
  ulong64 local_38;
  FName FStack_30;
  FScriptContainerElement *local_28;
  undefined4 uStack_1c;
  
  local_res8.Status = None;
  local_res8.EntryIndex = -1;
  local_res10.Id = param_1.Id;
  pFVar7 = TMapBase<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
           ::FindOrAddImpl<FPackageId_const_&,FCookOnTheFlyPackageStoreBackend::FEntryInfo>
                     ((TMapBase<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FCookOnTheFlyPackageStoreBackend::FEntryInfo,0>_>
                       *)&this->PackageIdToEntryInfo,(uint)param_1.Id,&local_res10,&local_res8);
  if (pFVar7->Status == Ok) {
    if (pFVar7->EntryIndex == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntryInfo.EntryIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\CookOnTheFlyPackageStore.cpp"
                         ,0x71,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    EVar5 = pFVar7->Status;
    if (EVar5 == Ok) {
      pFVar8 = TChunkedArray<FPackageStoreEntryResource,16384,TSizedDefaultAllocator<32>_>::
               operator[](&this->PackageEntries,pFVar7->EntryIndex);
      local_28 = (pFVar8->ImportedPackageIds).AllocatorInstance.Data;
      iVar6 = (pFVar8->ImportedPackageIds).ArrayNum;
      if (iVar6 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      (param_3->ImportedPackageIds).DataPtr = (FPackageId *)local_28;
      *(ulonglong *)&(param_3->ImportedPackageIds).ArrayNum = CONCAT44(uStack_1c,iVar6);
      return Ok;
    }
  }
  else {
    if (pFVar7->Status == None) {
      pTVar9 = &this->RequestedPackageIds;
      pFVar7->Status = Pending;
      local_38 = local_res10.Id;
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      FStack_30 = param_2;
      if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 <
          pFVar2 + (longlong)(this->RequestedPackageIds).ArrayMax * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      iVar6 = (this->RequestedPackageIds).ArrayNum;
      piVar1 = &(this->RequestedPackageIds).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar9->AllocatorInstance,piVar1);
      }
      (this->RequestedPackageIds).ArrayNum = iVar6 + 1;
      pFVar2 = (pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(ulong64 *)pFVar2 = local_38;
      *(FName *)(pFVar2 + 8) = FStack_30;
    }
    EVar5 = pFVar7->Status;
  }
  return EVar5;
}

// OnCookOnTheFlyMessage @ 148cd0fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookOnTheFlyPackageStoreBackend::OnCookOnTheFlyMessage
          (FCookOnTheFlyPackageStoreBackend *this,FCookOnTheFlyMessage *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  ForAnyElementType FVar12;
  LARGE_INTEGER local_res8;
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> local_98;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> local_78;
  FDestructionSentinel local_68;
  FCompletedPackages local_50;
  
  if ((param_1->Header).MessageType == PackagesCooked) {
    UE::Cook::FCookOnTheFlyMessage::GetBodyAs<UE::ZenCookOnTheFly::Messaging::FCompletedPackages>
              (param_1,&local_50);
    local_88.ArrayNum = local_50.FailedPackages.ArrayNum;
    local_78.ArrayNum = local_50.CookedPackages.ArrayNum;
    if (5 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    FVar10.Data = (FScriptContainerElement *)0x0;
    iVar11 = 0;
    local_88.AllocatorInstance.Data = local_50.FailedPackages.AllocatorInstance.Data;
    local_88.ArrayMax = local_50.FailedPackages.ArrayMax;
    local_78.AllocatorInstance.Data = local_50.CookedPackages.AllocatorInstance.Data;
    local_78.ArrayMax = local_50.CookedPackages.ArrayMax;
    local_50.CookedPackages.ArrayNum = 0;
    local_50.CookedPackages.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_50.FailedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.FailedPackages.ArrayNum = 0;
    local_50.FailedPackages.ArrayMax = 0;
    local_50.CookedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    AddPackages(this,&local_78,&local_88,&local_98);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->Context).Object;
    FVar12.Data = FVar10.Data;
    if (this_00 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_68);
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
      bVar4 = false;
      uVar8 = (this_00->InvocationList).ArrayNum - 1;
      iVar11 = 0;
      if (-1 < (int)uVar8) {
        lVar9 = (longlong)(int)uVar8 << 4;
        bVar4 = false;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
              (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar9 = lVar9 + -0x10;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
        FVar10.Data = local_50.CookedPackages.AllocatorInstance.Data;
        FVar12.Data = local_50.FailedPackages.AllocatorInstance.Data;
        iVar11 = local_50.CookedPackages.ArrayNum;
      }
      this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
    }
    if ((FPackageStoreEntryResource *)FVar12.Data != (FPackageStoreEntryResource *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    DestructItems<FPackageStoreEntryResource,int>((FPackageStoreEntryResource *)FVar10.Data,iVar11);
    if ((FPackageStoreEntryResource *)FVar10.Data != (FPackageStoreEntryResource *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  QueryPerformanceCounter(&local_res8);
  this->LastServerActivtyTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  return;
}

// OnMounted @ 148cd14b0

void __thiscall
FCookOnTheFlyPackageStoreBackend::OnMounted
          (FCookOnTheFlyPackageStoreBackend *this,
          TSharedRef<FPackageStoreBackendContext_const_,1> *param_1)

{
  FPackageStoreBackendContext *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Context != (TSharedPtr<FPackageStoreBackendContext_const_,1> *)&local_18) {
    (this->Context).Object = local_18;
    local_18 = (FPackageStoreBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Context).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SendCookRequest @ 148cdc5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCookOnTheFlyPackageStoreBackend::SendCookRequest
          (FCookOnTheFlyPackageStoreBackend *this,
          TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this_00;
  FCookOnTheFlyResponse *pFVar8;
  undefined1 *puVar9;
  FPackageStoreEntryResource *pFVar10;
  size_t _Size;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  ForAnyElementType local_1e8;
  uint local_1e0;
  uint local_1dc;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FCookPackageRequest local_1c8;
  FCompletedPackages local_1b8;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_188;
  ForAnyElementType FStack_180;
  undefined4 local_178;
  int local_174;
  FCookOnTheFlyMessage local_170;
  LARGE_INTEGER local_148;
  TArray<TTuple<FPackageId,FName>,TSizedDefaultAllocator<32>_> local_140;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> local_130;
  TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> local_120;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  FArchiveState local_f8;
  undefined8 local_68;
  ForAnyElementType *local_60;
  undefined8 local_58;
  
  local_res10 = param_1;
  QueryPerformanceCounter(&local_148);
  FVar11.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_1dc = 0;
  this->LastClientActivtyTime =
       (double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  uVar1 = param_1->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  pFVar10 = (FPackageStoreEntryResource *)FVar11.Data;
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_1e8,0,(int *)&local_1dc);
    pFVar10 = (FPackageStoreEntryResource *)(ulonglong)local_1e0;
  }
  iVar2 = param_1->ArrayNum;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar14 + (longlong)iVar2 * 0x10;
  while( true ) {
    local_1c8.PackageIds.ArrayNum = (uint)pFVar10;
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FPackageId,FName>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      local_1c8.PackageIds.ArrayNum = local_1e0;
    }
    FVar13.Data = local_1e8.Data;
    if (pFVar14 == pFVar12) break;
    if (((local_1e8.Data <= pFVar14) && (pFVar14 < local_1e8.Data + (longlong)(int)local_1dc * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), local_1c8.PackageIds.ArrayNum = local_1e0, bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_1c8.PackageIds.ArrayNum == local_1dc) {
      local_1c8.PackageIds.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_1e8,(int *)&local_1dc);
    }
    local_1e0 = local_1c8.PackageIds.ArrayNum + 1;
    uVar3 = *(undefined8 *)pFVar14;
    pFVar14 = pFVar14 + 0x10;
    *(undefined8 *)(local_1e8.Data + (longlong)local_1c8.PackageIds.ArrayNum * 8) = uVar3;
    pFVar10 = (FPackageStoreEntryResource *)(ulonglong)local_1e0;
  }
  local_194 = 1;
  local_174 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_198 = 0x22;
  local_188 = 0;
  FStack_180.Data = (FScriptContainerElement *)0x0;
  local_1c8.PackageIds.AllocatorInstance.Data = FVar11.Data;
  if (local_1c8.PackageIds.ArrayNum != 0) {
    local_1d0._0_4_ = local_1c8.PackageIds.ArrayNum;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_1c8.PackageIds.ArrayNum,0,&local_1d8,local_1c8.PackageIds.ArrayNum,
               (int *)((longlong)&local_1d0 + 4));
    memcpy(local_1d8.Data,FVar13.Data,(longlong)local_1c8.PackageIds.ArrayNum << 3);
    local_1c8.PackageIds.AllocatorInstance.Data = local_1d8.Data;
    local_1c8.PackageIds.ArrayNum = (uint)local_1d0;
    iVar7 = local_1d0._4_4_;
  }
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_178 = 0;
  local_1c8.PackageIds.ArrayMax = iVar7;
  if (local_174 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&FStack_180,0,&local_174);
  }
  local_res20 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_60 = &FStack_180;
  local_58 = 0;
  FArchiveState::SetIsSaving(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  UE::ZenCookOnTheFly::Messaging::operator<<((FArchive *)&local_f8,&local_1c8);
  FArchive::~FArchive((FArchive *)&local_f8);
  if ((FPackageStoreEntryResource *)local_1c8.PackageIds.AllocatorInstance.Data !=
      (FPackageStoreEntryResource *)0x0) {
    FMemory::Free(local_1c8.PackageIds.AllocatorInstance.Data);
  }
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  this_00 = (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *)
            (**(code **)((longlong)*this->CookOnTheFlyServerConnection + 0x40))
                      (this->CookOnTheFlyServerConnection,local_110,&local_198);
  pFVar8 = TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get(this_00);
  local_170.Header.MessageType = *(ECookOnTheFlyMessage *)&pFVar8->field_0x0;
  local_170.Header.MessageStatus = *(ECookOnTheFlyMessageStatus *)&pFVar8->field_0x4;
  local_170.Header.CorrelationId = *(uint *)&pFVar8->field_0x8;
  local_170.Header._12_4_ = *(undefined4 *)&pFVar8->field_0xc;
  local_170.Header.Timestamp = *(long64 *)&pFVar8->field_0x10;
  local_170.Body.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Body.ArrayNum = *(int *)&pFVar8->field_0x20;
  _Size = (size_t)local_170.Body.ArrayNum;
  _Src = *(void **)&pFVar8->field_0x18;
  if (local_170.Body.ArrayNum == 0) {
    local_170.Body.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_170.Body.ArrayNum,0,&local_170.Body.AllocatorInstance,
               local_170.Body.ArrayNum,&local_170.Body.ArrayMax);
    memcpy(local_170.Body.AllocatorInstance.Data,_Src,_Size);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108);
  UE::Cook::FCookOnTheFlyMessage::GetBodyAs<UE::ZenCookOnTheFly::Messaging::FCompletedPackages>
            (&local_170,&local_1b8);
  if (local_170.Header.MessageStatus == Ok) {
    local_140.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = param_1->ArrayNum;
    local_140.ArrayMax = param_1->ArrayMax;
    local_130.AllocatorInstance.Data = local_1b8.FailedPackages.AllocatorInstance.Data;
    local_130.ArrayNum = local_1b8.FailedPackages.ArrayNum;
    local_130.ArrayMax = local_1b8.FailedPackages.ArrayMax;
    local_120.AllocatorInstance.Data = local_1b8.CookedPackages.AllocatorInstance.Data;
    local_120.ArrayNum = local_1b8.CookedPackages.ArrayNum;
    local_120.ArrayMax = local_1b8.CookedPackages.ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    AddPackages(this,&local_120,&local_130,&local_140);
    local_1b8.FailedPackages.AllocatorInstance.Data = FVar11.Data;
    local_1b8.CookedPackages.ArrayNum = 0;
  }
  else {
    if (2 < (byte)LogCookOnTheFly._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
    uVar1 = local_1e0;
    pFVar14 = local_1e8.Data + (longlong)(int)local_1e0 * 8;
    FVar13.Data = local_1e8.Data;
    while( true ) {
      if (local_1e0 != uVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPackageId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar13.Data == pFVar14) break;
      pFVar10 = (FPackageStoreEntryResource *)FVar11.Data;
      if (*(int *)&(this->PackageIdToEntryInfo).field_0x8 !=
          *(int *)&(this->PackageIdToEntryInfo).field_0x34) {
        puVar4 = *(undefined1 **)&(this->PackageIdToEntryInfo).field_0x40;
        puVar9 = &(this->PackageIdToEntryInfo).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar9 = puVar4;
        }
        iVar7 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->PackageIdToEntryInfo).field_0x48 - 1U &
                                  *(uint *)FVar13.Data) * 4);
        if (iVar7 != -1) {
          do {
            pFVar10 = (FPackageStoreEntryResource *)
                      (*(longlong *)&this->PackageIdToEntryInfo + (longlong)iVar7 * 0x18);
            if (*(longlong *)(*(longlong *)&this->PackageIdToEntryInfo + (longlong)iVar7 * 0x18) ==
                *(longlong *)FVar13.Data) {
              if (pFVar10 != (FPackageStoreEntryResource *)0x0) goto LAB_148cdcae1;
              break;
            }
            iVar7 = (int)(pFVar10->PackageId).Id;
            pFVar10 = (FPackageStoreEntryResource *)FVar11.Data;
          } while (iVar7 != -1);
        }
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_148cdcae1:
      if ((pFVar10->PackageName).Number == 3) {
        (pFVar10->PackageName).Number = 1;
      }
      FVar13.Data = FVar13.Data + 8;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
    FVar11.Data = local_1b8.CookedPackages.AllocatorInstance.Data;
    param_1 = local_res10;
  }
  if ((FPackageStoreEntryResource *)local_1b8.FailedPackages.AllocatorInstance.Data !=
      (FPackageStoreEntryResource *)0x0) {
    FMemory::Free(local_1b8.FailedPackages.AllocatorInstance.Data);
  }
  DestructItems<FPackageStoreEntryResource,int>
            ((FPackageStoreEntryResource *)FVar11.Data,local_1b8.CookedPackages.ArrayNum);
  if ((FPackageStoreEntryResource *)FVar11.Data != (FPackageStoreEntryResource *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (local_170.Body.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Body.AllocatorInstance.Data);
  }
  if (FStack_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

