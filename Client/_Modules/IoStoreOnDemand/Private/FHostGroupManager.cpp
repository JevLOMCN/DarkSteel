// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 8

// DisconnectAll @ 1445c88b0

void __thiscall UE::IoStore::FHostGroupManager::DisconnectAll(FHostGroupManager *this)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  
  SRWLock = &this->Mutex;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar1 = (this->HostGroups).ArrayNum;
  this_00 = (this->HostGroups).AllocatorInstance.Data;
  pFVar4 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HostGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    FIASHostGroup::Disconnect((FIASHostGroup *)this_00);
    this_00 = this_00 + 0x10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// Find @ 1445cd4d0

FIASHostGroup * __thiscall
UE::IoStore::FHostGroupManager::Find
          (FHostGroupManager *this,FIASHostGroup *__return_storage_ptr__,FName param_1)

{
  FPlatformRWLock *SRWLock;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FIASHostGroup *pFVar4;
  
  SRWLock = &this->Mutex;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FIASHostGroup *)(*pcVar2)();
      return pFVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar4 = AlgoImpl::
           FindByPredicate<TArray<UE::IoStore::FIASHostGroup,TSizedDefaultAllocator<32>_>_&,_UE::IoStore::FHostGroupManager::Find_::__l2::<lambda_1>_>
                     (&this->HostGroups,(<lambda_1>)param_1);
  if (pFVar4 == (FIASHostGroup *)0x0) {
    FIASHostGroup::FIASHostGroup(__return_storage_ptr__);
  }
  else {
    (__return_storage_ptr__->Impl).Object = (pFVar4->Impl).Object;
    pTVar1 = (pFVar4->Impl).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->Impl).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// ForEachHostGroup @ 1445cf810

void __thiscall
UE::IoStore::FHostGroupManager::ForEachHostGroup
          (FHostGroupManager *this,
          TFunctionRef<void___cdecl(UE::IoStore::FIASHostGroup_const_&)> *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  SRWLock = &this->Mutex;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar1 = (this->HostGroups).ArrayNum;
  pFVar5 = (this->HostGroups).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HostGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar5);
    pFVar5 = pFVar5 + 0x10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// Get @ 1445d0710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FHostGroupManager * __cdecl UE::IoStore::FHostGroupManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Instance.HostGroupDisconnectedDelegate,4000);
      ::Instance.HostGroupDisconnectedDelegate._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Instance.HostGroupDisconnectedDelegate._56_8_ = _UNK_150631d48;
      ::Instance.Mutex.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      ::Instance.HostGroupDisconnectedDelegate._40_8_ = 0;
      atexit(`UE::IoStore::FHostGroupManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__
            );
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetNumDisconnctedHosts @ 1445d6710

uint __thiscall UE::IoStore::FHostGroupManager::GetNumDisconnctedHosts(FHostGroupManager *this)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  SRWLock = &this->Mutex;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar1 = (this->HostGroups).ArrayNum;
  pFVar7 = (this->HostGroups).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HostGroups).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    if (*(longlong *)pFVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    iVar5 = FOnDemandHostGroup::PrimaryHostIndex(*(FOnDemandHostGroup **)pFVar7);
    uVar4 = uVar4 + (iVar5 == -1);
    pFVar7 = pFVar7 + 0x10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return uVar4;
}

// Register @ 1445f1310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445f13ba) */

TIoStatusOr<UE::IoStore::FIASHostGroup> * __thiscall
UE::IoStore::FHostGroupManager::Register
          (FHostGroupManager *this,TIoStatusOr<UE::IoStore::FIASHostGroup> *__return_storage_ptr__,
          FName param_1,TArrayView<FAnsiString_const_,int> *param_2)

{
  FPlatformRWLock *SRWLock;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TIoStatusOr<UE::IoStore::FIASHostGroup> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TTypeCompatibleBytes<UE::IoStore::FIASHostGroup> *pTVar8;
  undefined1 auStack_e8 [32];
  TTypeCompatibleBytes<UE::IoStore::FIASHostGroup> *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FIoStatus local_98;
  FOnDemandHostGroup local_88;
  FIASHostGroup local_78;
  TArrayView<FAnsiString_const_,int> local_68;
  undefined1 local_58 [16];
  FOnDemandHostGroup local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_68.DataPtr = param_2->DataPtr;
  local_68.ArrayNum = param_2->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FOnDemandHostGroup::Create((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_58,&local_68);
  if (local_58._8_4_ == Ok) {
    FIoStatus::operator=((FIoStatus *)local_58,&FIoStatus::Unknown);
    local_88.Impl.Object = local_48.Impl.Object;
    local_88.Impl.SharedReferenceCount.ReferenceController =
         local_48.Impl.SharedReferenceCount.ReferenceController;
    if (local_48.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_48.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FIASHostGroup::FIASHostGroup(&local_78,param_1,&local_88);
    FOnDemandHostGroup::~FOnDemandHostGroup(&local_88);
    if ((local_78.Impl.Object == (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar2)();
      return pTVar5;
    }
    FBitWindow::Reset(&(local_78.Impl.Object)->HttpErrorHistory,GIasHttpErrorSampleCount);
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(FImpl **)(__return_storage_ptr__->Value).Pad = local_78.Impl.Object;
    *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) =
         local_78.Impl.SharedReferenceCount.ReferenceController;
    if (local_78.Impl.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (local_78.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Impl.SharedReferenceCount.ReferenceController);
    FIoStatus::operator=((FIoStatus *)local_58,Unknown);
    if (local_58._8_4_ == Ok) {
      FOnDemandHostGroup::~FOnDemandHostGroup(&local_48);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_58);
  }
  else {
    local_98.ErrorMessage.Chars = (wchar_t *)local_58._0_8_;
    if ((wchar_t *)local_58._0_8_ != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_58._0_8_ + -8) = *(int *)(local_58._0_8_ + -8) + 1;
      UNLOCK();
    }
    local_98.ErrorCode = local_58._8_4_;
    local_98.SystemErrorCode = local_58._12_4_;
    TIoStatusOr<UE::IoStore::FIASHostGroup>::TIoStatusOr<UE::IoStore::FIASHostGroup>
              (__return_storage_ptr__,&local_98);
    FIoStatus::operator=((FIoStatus *)local_58,Unknown);
    if (local_58._8_4_ == Ok) {
      FOnDemandHostGroup::~FOnDemandHostGroup(&local_48);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_58);
  }
  pTVar8 = &__return_storage_ptr__->Value;
  if ((__return_storage_ptr__->StatusValue).ErrorCode == Ok) {
    SRWLock = &this->Mutex;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar2)();
      return pTVar5;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if ((__return_storage_ptr__->StatusValue).ErrorCode != Ok) {
      StatusOrCrash(&__return_storage_ptr__->StatusValue);
    }
    pFVar7 = (this->HostGroups).AllocatorInstance.Data;
    if ((pFVar7 <= pTVar8) &&
       (lVar6 = (longlong)(this->HostGroups).ArrayMax, pTVar8 < pFVar7 + lVar6 * 0x10)) {
      local_b0 = (longlong)(this->HostGroups).ArrayNum;
      local_a8 = 0x10;
      local_c8 = pTVar8;
      local_c0 = pFVar7;
      local_b8 = lVar6;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = (this->HostGroups).ArrayNum;
    piVar1 = &(this->HostGroups).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->HostGroups).ArrayNum = iVar4 + 1;
    pFVar7 = (this->HostGroups).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar7 = *(undefined8 *)pTVar8->Pad;
    lVar6 = *(longlong *)((__return_storage_ptr__->Value).Pad + 8);
    *(longlong *)(pFVar7 + 8) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return __return_storage_ptr__;
}

// Register @ 1445f15d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TIoStatusOr<UE::IoStore::FIASHostGroup> * __thiscall
UE::IoStore::FHostGroupManager::Register
          (FHostGroupManager *this,TIoStatusOr<UE::IoStore::FIASHostGroup> *__return_storage_ptr__,
          FName param_1,TStringView<char> *param_2)

{
  atomic<int> *paVar1;
  FPlatformRWLock *SRWLock;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FAnsiString *pFVar9;
  TIoStatusOr<UE::IoStore::FIASHostGroup> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FAnsiString local_58;
  char *local_48;
  undefined8 uStack_40;
  
  pTVar8 = ::operator_new(0x68);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    local_68 = ___xmm_00000000000000000000000000000010;
    pTStack_60 = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImpl_FIASHostGroup_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    FOnDemandHostGroup::FOnDemandHostGroup((FOnDemandHostGroup *)(pTVar8 + 1));
    local_48 = param_2->DataPtr;
    uStack_40 = *(undefined8 *)&param_2->Size;
    uVar3 = *(undefined8 *)&param_2->Size;
    paVar1 = &pTVar8[4].SharedReferenceCount;
    pcVar4 = param_2->DataPtr;
    pTVar8[3]._padding_ = 0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar8[3].WeakReferenceCount = 0x80;
    *(undefined4 *)((longlong)&pTVar8[4]._padding_ + 4) = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    pFVar9 = FAnsiString::ConstructFromPtrSize(&local_58,pcVar4,(int)uVar3);
    if (paVar1 != (atomic<int> *)pFVar9) {
      if (*(void **)paVar1 != (void *)0x0) {
        FMemory::Free(*(void **)paVar1);
      }
      *(FScriptContainerElement **)paVar1 = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar8[5]._padding_ = (pFVar9->Data).ArrayNum;
      *(int *)((longlong)&pTVar8[5]._padding_ + 4) = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pTVar8[5].SharedReferenceCount = (atomic<int>)param_1.ComparisonIndex.Value;
    pTVar8[5].WeakReferenceCount = (atomic<int>)param_1.Number;
    *(undefined1 *)&pTVar8[6]._padding_ = 1;
    if (pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar5)();
        return pTVar10;
      }
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_68 = pTVar8 + 1;
    pTStack_60 = pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SRWLock = &this->Mutex;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar5)();
      return pTVar10;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar11 = (this->HostGroups).AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar11 + (longlong)(this->HostGroups).ArrayMax * 0x10)
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TIoStatusOr<UE::IoStore::FIASHostGroup> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar7 = (this->HostGroups).ArrayNum;
  piVar2 = &(this->HostGroups).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar2);
  }
  (this->HostGroups).ArrayNum = iVar7 + 1;
  pFVar11 = (this->HostGroups).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar11 = local_68;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTStack_60;
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
  *(TReferenceControllerBase<1> **)(__return_storage_ptr__->Value).Pad = local_68;
  *(TReferenceControllerBase<1> **)((__return_storage_ptr__->Value).Pad + 8) = pTStack_60;
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return __return_storage_ptr__;
}

// Tick @ 144601550

void __thiscall
UE::IoStore::FHostGroupManager::Tick(FHostGroupManager *this,uint param_1,atomic<bool> *param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EReconnectionResult EVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *this_00;
  bool bVar7;
  undefined1 local_res8 [8];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId368,"FHostGroupManager::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\IasHostGroup.cpp"
               ,0x170);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId368);
  }
  SRWLock = &this->Mutex;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar1 = (this->HostGroups).ArrayNum;
  this_00 = (this->HostGroups).AllocatorInstance.Data;
  pFVar6 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HostGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    EVar4 = FIASHostGroup::AttemptReconnection((FIASHostGroup *)this_00,param_1,param_2);
    if ((EVar4 == Reconnected) &&
       (GHttpConnectCount.Value = GHttpConnectCount.Value + 1, -1 < CountersChannel->Enabled)) {
      if (GHttpConnectCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (GHttpConnectCount.CounterName,TraceCounterType_Int,
                           GHttpConnectCount.CounterFlags & 0xf);
        LOCK();
        if (GHttpConnectCount.CounterId == (atomic<unsigned_int>)0x0) {
          GHttpConnectCount.CounterId._2_2_ = 0;
          GHttpConnectCount.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(GHttpConnectCount.CounterId._0_2_,GHttpConnectCount.Value);
    }
    this_00 = this_00 + 0x10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

