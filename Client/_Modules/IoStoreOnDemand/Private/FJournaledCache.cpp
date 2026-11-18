// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 13

// FJournaledCache @ 1445a39f0

FJournaledCache * __thiscall
UE::IoStore::FJournaledCache::FJournaledCache(FJournaledCache *this,FDiskCacheGovernor *param_1)

{
  this->DiskCacheGovernor = param_1;
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IIasCache__;
  this->_padding_ =
       (longlong)&_vftable__for__UE__IoStore__JournaledCache__FServiceThread__FReadSink__;
  this->Cache = (FCache *)0x0;
  Tasks::FPipe::FPipe(&this->GetPipe,L"IasCacheGetPipe");
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Lock,4000);
  *(undefined8 *)&this->PendingMaterializes = 0;
  *(undefined8 *)&(this->PendingMaterializes).field_0x8 = 0;
  *(undefined8 *)&(this->PendingMaterializes).field_0x20 = 0;
  *(undefined4 *)&(this->PendingMaterializes).field_0x28 = 0;
  *(undefined4 *)&(this->PendingMaterializes).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingMaterializes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingMaterializes).field_0x34 = 0;
  *(undefined8 *)&(this->PendingMaterializes).field_0x40 = 0;
  *(undefined4 *)&(this->PendingMaterializes).field_0x48 = 0;
  return this;
}

// ~FJournaledCache @ 1445a8810

void __thiscall UE::IoStore::FJournaledCache::~FJournaledCache(FJournaledCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FCache *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FServiceThread *pFVar7;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined2 local_28;
  
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IIasCache__;
  this->_padding_ =
       (longlong)&_vftable__for__UE__IoStore__JournaledCache__FServiceThread__FReadSink__;
  if (this->Cache != (FCache *)0x0) {
    pFVar7 = JournaledCache::FServiceThread::Get();
    pFVar2 = this->Cache;
    uStack_36 = SUB82(pFVar2,0);
    uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x10);
    uStack_30 = (undefined2)((ulonglong)pFVar2 >> 0x30);
    lpCriticalSection = &pFVar7->Lock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(pFVar7->PendingWork).AllocatorInstance,
                       &(pFVar7->PendingWork).ArrayNum,&(pFVar7->PendingWork).ArrayMax);
    pFVar1 = (pFVar7->PendingWork).AllocatorInstance.Data + (longlong)iVar6 * 0x12;
    *(uint *)pFVar1 = CONCAT22(uStack_36,1);
    *(undefined4 *)(pFVar1 + 4) = uStack_34;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_2e,uStack_30);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
    *(undefined2 *)(pFVar1 + 0x10) = local_28;
    LOCK();
    pFVar7->PendingCount = (atomic<int>)((int)pFVar7->PendingCount + 1);
    UNLOCK();
    (**(code **)(((pFVar7->WakeEvent).Event)->_padding_ + 0x10))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    pFVar7->RunCount = (atomic<int>)((int)pFVar7->RunCount + -1);
    UNLOCK();
  }
  pFVar7 = JournaledCache::FServiceThread::Get();
  JournaledCache::FServiceThread::SetGovernor(pFVar7,(FDiskCacheGovernor *)0x0);
  *(undefined4 *)&(this->PendingMaterializes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PendingMaterializes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingMaterializes);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Lock);
  if ((this->GetPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GetPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  return;
}

// Abandon @ 1445b2600

void __thiscall UE::IoStore::FJournaledCache::Abandon(FJournaledCache *this)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  JournaledCache::FCache::Drop(this->Cache);
  _scalar_deleting_destructor_(this,1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Cancel @ 1445b6450

void __thiscall UE::IoStore::FJournaledCache::Cancel(FJournaledCache *this,FIoBuffer *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FServiceThread *pFVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  
  pFVar3 = JournaledCache::FServiceThread::Get();
  uStack_1e = SUB82(param_1,0);
  uStack_1c = (undefined4)((ulonglong)param_1 >> 0x10);
  uStack_18 = (undefined2)((ulonglong)param_1 >> 0x30);
  local_28 = CONCAT22(local_28._2_2_,4);
  lpCriticalSection = &pFVar3->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(pFVar3->PendingWork).AllocatorInstance,
                       &(pFVar3->PendingWork).ArrayNum,&(pFVar3->PendingWork).ArrayMax);
    pFVar1 = (pFVar3->PendingWork).AllocatorInstance.Data + (longlong)iVar2 * 0x12;
    *(undefined4 *)pFVar1 = local_28;
    *(undefined4 *)(pFVar1 + 4) = uStack_24;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_1e,uStack_20);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_1c;
    *(undefined2 *)(pFVar1 + 0x10) = uStack_18;
    LOCK();
    pFVar3->PendingCount = (atomic<int>)((int)pFVar3->PendingCount + 1);
    UNLOCK();
    (**(code **)(((pFVar3->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001445b64f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ContainsChunk @ 1445bde40

bool __thiscall UE::IoStore::FJournaledCache::ContainsChunk(FJournaledCache *this,FIoHash *param_1)

{
  FCache *SRWLock;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMapEntry *pFVar4;
  FIoBuffer *pFVar5;
  ulonglong uVar6;
  
  SRWLock = this->Cache;
  uVar6 = (ulonglong)*(uint *)(param_1->Hash + 0x10) + *(longlong *)param_1->Hash ^
          *(ulonglong *)(param_1->Hash + 8);
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Key",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x586,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&SRWLock->DiskCache);
  pFVar4 = TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
           ::Find((TMapBase<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::IoStore::JournaledCache::FDiskCache::FMapEntry,0>_>
                   *)&(SRWLock->DiskCache).DataMap,uVar6);
  ReleaseSRWLockShared((PSRWLOCK)&SRWLock->DiskCache);
  if (pFVar4 == (FMapEntry *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar5 = JournaledCache::FMemCache::Get(&SRWLock->MemCache,uVar6);
    if ((pFVar5 == (FIoBuffer *)0x0) && ((SRWLock->Partial).Key != uVar6)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// Drop @ 1445c9350

void __thiscall UE::IoStore::FJournaledCache::Drop(FJournaledCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FServiceThread *pFVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  
  pFVar3 = JournaledCache::FServiceThread::Get();
  local_28 = CONCAT22(local_28._2_2_,5);
  lpCriticalSection = &pFVar3->Lock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(pFVar3->PendingWork).AllocatorInstance,
                       &(pFVar3->PendingWork).ArrayNum,&(pFVar3->PendingWork).ArrayMax);
    pFVar1 = (pFVar3->PendingWork).AllocatorInstance.Data + (longlong)iVar2 * 0x12;
    *(undefined4 *)pFVar1 = local_28;
    *(undefined4 *)(pFVar1 + 4) = uStack_24;
    *(undefined4 *)(pFVar1 + 8) = uStack_20;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_1c;
    *(undefined2 *)(pFVar1 + 0x10) = local_18;
    LOCK();
    pFVar3->PendingCount = (atomic<int>)((int)pFVar3->PendingCount + 1);
    UNLOCK();
    (**(code **)(((pFVar3->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001445c93f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Evict @ 1445cada0

FIoStatus * __thiscall
UE::IoStore::FJournaledCache::Evict
          (FJournaledCache *this,FIoStatus *__return_storage_ptr__,FIoHash *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  FIoStatus *pFVar4;
  FIoStatus local_38;
  FIoStatus local_28;
  ulonglong local_18;
  
  bVar2 = false;
  local_18 = (ulonglong)*(uint *)(param_1->Hash + 0x10);
  local_28.ErrorMessage.Chars = (wchar_t *)0x0;
  local_28.ErrorCode = Ok;
  local_28.SystemErrorCode = 0;
  bVar3 = JournaledCache::FCache::Evict
                    (this->Cache,
                     *(longlong *)param_1->Hash + local_18 ^ *(ulonglong *)(param_1->Hash + 8));
  if (bVar3) {
    local_38.ErrorMessage.Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    pFVar4 = &local_38;
    local_38.ErrorCode = FIoStatus::Ok.ErrorCode;
    bVar3 = true;
    local_38.SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  }
  else {
    pFVar4 = FIoStatus::FIoStatus(&local_28,Unknown);
    bVar3 = false;
    bVar2 = true;
  }
  pwVar1 = (pFVar4->ErrorMessage).Chars;
  (__return_storage_ptr__->ErrorMessage).Chars = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar1 + -4) = *(int *)(pwVar1 + -4) + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = pFVar4->ErrorCode;
  __return_storage_ptr__->SystemErrorCode = pFVar4->SystemErrorCode;
  if (bVar2) {
    FIoStatus::~FIoStatus(&local_28);
  }
  if (bVar3) {
    FIoStatus::~FIoStatus(&local_38);
  }
  return __return_storage_ptr__;
}

// Get @ 1445d07c0

EIoErrorCode __thiscall
UE::IoStore::FJournaledCache::Get(FJournaledCache *this,FIoHash *param_1,FIoBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  EIoErrorCode EVar3;
  ulong64 uVar4;
  ulonglong local_18;
  
  if (((param_2->CorePtr).Reference)->DataPtr != (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutData.GetData() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x8db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  local_18 = (ulonglong)*(uint *)(param_1->Hash + 0x10);
  uVar4 = JournaledCache::FCache::Get
                    (this->Cache,
                     *(longlong *)param_1->Hash + local_18 ^ *(ulonglong *)(param_1->Hash + 8),
                     param_2);
  if (((param_2->CorePtr).Reference)->DataPtr != (uchar *)0x0) {
    return Ok;
  }
  EVar3 = FileNotOpen;
  if (uVar4 == 0) {
    EVar3 = NotFound;
  }
  return EVar3;
}

// Initialize @ 1445da380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::IoStore::FJournaledCache::Initialize
          (FJournaledCache *this,wchar_t *param_1,FIasCacheConfig *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  size_t sVar5;
  void *pvVar6;
  TStringView<wchar_t> *pTVar7;
  IFileManager *pIVar8;
  FCache *pFVar9;
  FServiceThread *this_00;
  int iVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  FCache *pFVar13;
  byte bVar14;
  undefined1 auStack_338 [32];
  FConfig local_318;
  FCache *local_300;
  wchar_t *local_2f8;
  undefined8 uStack_2f0;
  ulong64 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  FString local_2c0;
  TStringView<wchar_t> local_2a8;
  TDefaultDelete<UE::IoStore::JournaledCache::FCache> local_298 [8];
  TStringView<wchar_t> local_290;
  TStringView<wchar_t> local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_2a8.DataPtr = (param_2->Name).DataPtr;
  local_2a8.Size = (param_2->Name).Size;
  local_2a8._12_4_ = *(undefined4 *)&(param_2->Name).field_0xc;
  iVar10 = (int)*(undefined8 *)&(param_2->Name).Size;
  if (((iVar10 < 1) || (local_2a8.DataPtr[iVar10 + -1] == L'/')) ||
     ((0 < iVar10 && (local_2a8.DataPtr[iVar10 + -1] == L'\\')))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Name.Len() > 0 && !Name.EndsWith(\'/\') && !Name.EndsWith(\'\\\\\')",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x88c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  pFVar13 = (FCache *)0x0;
  local_268.End = (wchar_t *)local_48;
  iVar10 = 0;
  local_268.CurPos = local_248;
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    iVar10 = (int)sVar5;
  }
  uVar11 = (ulong64)iVar10;
  pwVar12 = local_248;
  if (local_48 < local_248 + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar11);
    pwVar12 = local_268.CurPos;
  }
  if (iVar10 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar12,param_1,uVar11 * 2);
    pwVar12 = (wchar_t *)((longlong)pvVar6 + uVar11 * 2);
    local_268.CurPos = pwVar12;
  }
  if ((((int)((longlong)pwVar12 - (longlong)local_268.Base >> 1) != 0) && (pwVar12[-1] != L'/')) &&
     (pwVar12[-1] != L'\\')) {
    if (local_268.End < pwVar12 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      pwVar12 = local_268.CurPos;
    }
    *pwVar12 = L'/';
    local_268.CurPos = local_268.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_268,L"ias",3);
  pTVar7 = FPathViews::GetPath(&local_290,&local_2a8);
  if ((((int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1) != 0) &&
      (local_268.CurPos[-1] != L'/')) && (local_268.CurPos[-1] != L'\\')) {
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'/';
    local_268.CurPos = local_268.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_268,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
  pIVar8 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x60);
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  cVar4 = (*pcVar1)(pIVar8,local_268.Base,1);
  if (cVar4 == '\0') {
    if (1 < (byte)LogIas._0_1_) {
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'\0';
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    bVar2 = false;
  }
  else {
    pTVar7 = FPathViews::GetBaseFilename(&local_280,&local_2a8);
    if ((((int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1) != 0) &&
        (local_268.CurPos[-1] != L'/')) && (local_268.CurPos[-1] != L'\\')) {
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      *local_268.CurPos = L'/';
      local_268.CurPos = local_268.CurPos + 1;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_268,pTVar7->DataPtr,(int)*(undefined8 *)&pTVar7->Size);
    if (local_268.End < local_268.CurPos + 8) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,8);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L".cache.0",0x10);
    local_2f8 = (param_2->Name).DataPtr;
    uStack_2f0 = *(undefined8 *)&(param_2->Name).Size;
    local_2e8 = param_2->DiskQuota;
    uStack_2e0._0_4_ = param_2->MemoryQuota;
    uStack_2e0._4_4_ = param_2->JournalQuota;
    local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 0x10);
    local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8._0_4_ = param_2->JournalMagic;
    local_2d8._4_4_ = (param_2->WriteRate).Allowance;
    uStack_2d0._0_4_ = (param_2->WriteRate).Ops;
    uStack_2d0._4_4_ = (param_2->WriteRate).Seconds;
    local_2c8._0_1_ = (param_2->Demand).Threshold;
    local_2c8._1_1_ = (param_2->Demand).Boost;
    local_2c8._2_1_ = (param_2->Demand).SuperBoost;
    local_2c8._3_1_ = param_2->DropCache;
    local_2c8._4_4_ = *(undefined4 *)&param_2->field_0x34;
    local_2c0.Data.ArrayNum = 0;
    local_2c0.Data.ArrayMax = 0;
    ::FString::AssignRange
              (&local_2c0,local_268.Base,
               (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
    local_318.Allowance.Bytes = (param_2->WriteRate).Allowance;
    local_318.Allowance.Ops = (param_2->WriteRate).Ops;
    local_318.Allowance.Seconds = (param_2->WriteRate).Seconds;
    local_318.Demand.Threshold = (param_2->Demand).Threshold;
    local_318.Demand.Boost = (param_2->Demand).Boost;
    local_318.Demand.SuperBoost = (param_2->Demand).SuperBoost;
    local_318.CommitBufferSize = 0;
    FDiskCacheGovernor::Configure(&this->DiskCacheGovernor->StreamingCacheState,&local_318);
    pFVar9 = ::operator_new(0x108);
    if (pFVar9 == (FCache *)0x0) {
      pFVar9 = (FCache *)0x0;
    }
    else {
      (pFVar9->MemLock).Mutex.Mutex.Ptr = (void *)0x0;
      (pFVar9->MemCache).MaxSize = (uint)uStack_2e0;
      (pFVar9->MemCache).UsedSize = 0;
      (pFVar9->MemCache).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->MemCache).Items.ArrayNum = 0;
      (pFVar9->MemCache).Items.ArrayMax = 0;
      JournaledCache::FDiskCache::FDiskCache
                (&pFVar9->DiskCache,&local_2c0,local_2e8,uStack_2e0._4_4_);
      pFVar9->Demand = (atomic<int>)0x0;
      (pFVar9->Partial).Key = 0;
      FIoBuffer::FIoBuffer(&(pFVar9->Partial).Data);
      if (local_2c8._3_1_ != '\0') {
        JournaledCache::FDiskCache::Drop(&pFVar9->DiskCache);
      }
    }
    bVar2 = (pFVar9->DiskCache).Journal.JrnHandle.Ptr == (IFileHandle *)0x0;
    bVar14 = bVar2 | 2;
    if ((pFVar9->DiskCache).DataHandle.Ptr != (IFileHandle *)0x0) {
      bVar14 = bVar2;
    }
    if (bVar14 == 0) {
      this->Cache = pFVar9;
      this_00 = JournaledCache::FServiceThread::Get();
      JournaledCache::FServiceThread::SetGovernor(this_00,this->DiskCacheGovernor);
      local_300 = pFVar9;
      JournaledCache::FServiceThread::RegisterCache(this_00,(FCache *)&local_300);
      bVar2 = true;
    }
    else {
      if (1 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      bVar2 = false;
      pFVar13 = pFVar9;
    }
    TDefaultDelete<UE::IoStore::JournaledCache::FCache>::operator()(local_298,pFVar13);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return bVar2;
}

// Materialize @ 1445e22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::IoStore::FJournaledCache::Materialize
          (FJournaledCache *this,FIoHash *param_1,FIoBuffer *param_2,EIoErrorCode *param_3,
          FTaskEvent param_4)

{
  FWindowsRecursiveMutex *pFVar1;
  FMaterialOp *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FCache *pFVar6;
  undefined8 *puVar7;
  int iVar8;
  FServiceThread *pFVar9;
  ulonglong uVar10;
  undefined1 auStackY_d8 [32];
  uint local_a8 [2];
  uint *local_a0;
  FMaterialOp **local_98;
  ulonglong local_90;
  TPairInitializer<int_&&,UE::IoStore::FJournaledCache::FMaterialOp_&&> local_88;
  EIoErrorCode *local_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = JournaledCache::FServiceThread::Get();
  pFVar1 = &this->Lock;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar9->ReadIdCounter = pFVar9->ReadIdCounter + 1;
    uVar5 = pFVar9->ReadIdCounter;
    local_88.Value = *(FMaterialOp **)param_4;
    *(undefined8 *)param_4 = 0;
    local_a0 = local_a8;
    local_a8[0] = uVar5 & 0xffff;
    local_98 = &local_88.Value;
    local_78 = param_3;
    TSet<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>,TDefaultMapHashableKeyFuncs<int,UE::IoStore::FJournaledCache::FMaterialOp,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&&,UE::IoStore::FJournaledCache::FMaterialOp_&&>_>
              ((TSet<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>,TDefaultMapHashableKeyFuncs<int,UE::IoStore::FJournaledCache::FMaterialOp,0>,FDefaultSetAllocator>
                *)&this->PendingMaterializes,&local_88,(bool *)&local_a0);
    if (local_88.Value != (FMaterialOp *)0x0) {
      LOCK();
      pFVar2 = local_88.Value + 3;
      iVar8 = *(int *)&pFVar2->DoneEvent;
      *(int *)&pFVar2->DoneEvent = *(int *)&pFVar2->DoneEvent + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(local_88.Value)->DoneEvent)(local_88.Value,1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    uStack_5e = (undefined2)uVar5;
    pFVar1 = &pFVar9->Lock;
    local_90 = (ulonglong)*(uint *)(param_1->Hash + 0x10);
    pFVar6 = this->Cache;
    uStack_6e = SUB82(pFVar6,0);
    uStack_6c = (undefined4)((ulonglong)pFVar6 >> 0x10);
    uStack_68 = (undefined2)((ulonglong)pFVar6 >> 0x30);
    local_70 = 3;
    uVar10 = *(longlong *)param_1->Hash + local_90 ^ *(ulonglong *)(param_1->Hash + 8);
    uStack_66 = (undefined2)uVar10;
    uStack_64 = (undefined4)(uVar10 >> 0x10);
    uStack_60 = (undefined2)(uVar10 >> 0x30);
    uStack_5c = &this->_padding_;
    if (this == (FJournaledCache *)0x0) {
      uStack_5c = (longlong *)0x0;
    }
    uStack_54 = param_2;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x12,2,2,&(pFVar9->PendingWork).AllocatorInstance,
                         &(pFVar9->PendingWork).ArrayNum,&(pFVar9->PendingWork).ArrayMax);
      pFVar4 = (pFVar9->PendingWork).AllocatorInstance.Data + (longlong)iVar8 * 0x12;
      *(uint *)pFVar4 = CONCAT22(uStack_6e,local_70);
      *(undefined4 *)(pFVar4 + 4) = uStack_6c;
      *(uint *)(pFVar4 + 8) = CONCAT22(uStack_66,uStack_68);
      *(undefined4 *)(pFVar4 + 0xc) = uStack_64;
      *(uint *)(pFVar4 + 0x10) = CONCAT22(uStack_5e,uStack_60);
      *(undefined4 *)(pFVar4 + 0x14) = (undefined4)uStack_5c;
      *(undefined4 *)(pFVar4 + 0x18) = uStack_5c._4_4_;
      *(undefined4 *)(pFVar4 + 0x1c) = (undefined4)uStack_54;
      *(undefined4 *)(pFVar4 + 0x20) = uStack_54._4_4_;
      LOCK();
      pFVar9->PendingCount = (atomic<int>)((int)pFVar9->PendingCount + 1);
      UNLOCK();
      (**(code **)(((pFVar9->WakeEvent).Event)->_padding_ + 0x10))();
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      puVar7 = *(undefined8 **)param_4;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(puVar7 + 6);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// OnRead @ 1445e6670

void __thiscall
UE::IoStore::FJournaledCache::OnRead(FJournaledCache *this,FReadResult *param_1,int param_2)

{
  wchar_t **lpCriticalSection;
  atomic<bool> aVar1;
  undefined1 *puVar2;
  FTaskBase *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_res8 [2];
  
  lpCriticalSection = &(this->GetPipe).DebugName;
  if (lpCriticalSection == (wchar_t **)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (0 < param_2) {
    puVar9 = (uint *)0x0;
    do {
      param_2 = param_2 + -1;
      puVar8 = puVar9;
      if (*(int *)&this->PendingMaterializes != *(int *)&(this->PendingMaterializes).field_0x2c) {
        puVar2 = *(undefined1 **)&(this->PendingMaterializes).field_0x38;
        puVar7 = &(this->PendingMaterializes).field_0x30;
        if (puVar2 != (undefined1 *)0x0) {
          puVar7 = puVar2;
        }
        uVar5 = *(uint *)(puVar7 + ((ulonglong)(*(int *)&(this->PendingMaterializes).field_0x40 - 1)
                                   & (ulonglong)param_1->ReadId) * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar6 = (uint *)((longlong)(int)uVar5 * 0x20 +
                             (longlong)(this->Lock).CriticalSection.Opaque3[2]);
            if (*puVar6 == (uint)param_1->ReadId) {
              puVar8 = puVar6 + 2;
              if (puVar6 == (uint *)0x0) {
                puVar8 = puVar9;
              }
              if (puVar8 != (uint *)0x0) goto LAB_1445e6743;
              break;
            }
            uVar5 = puVar6[6];
          } while (uVar5 != 0xffffffff);
        }
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pend != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                         ,0x914,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_1445e6743:
      **(uint **)(puVar8 + 2) = (uint)param_1->Status;
      if ((*(longlong *)puVar8 != 0) && (*(char *)(*(longlong *)puVar8 + 0xd0) == '\0')) {
        this_00 = *(FTaskBase **)puVar8;
        LOCK();
        aVar1 = this_00->TaskTriggered;
        this_00->TaskTriggered = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar1 == (atomic<bool>)0x0) {
          LOCK();
          this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
          UNLOCK();
          Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
        }
      }
      local_res8[0] = (uint)param_1->ReadId;
      if (*(int *)&this->PendingMaterializes != *(int *)&(this->PendingMaterializes).field_0x2c) {
        TSet<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>,TDefaultMapHashableKeyFuncs<int,UE::IoStore::FJournaledCache::FMaterialOp,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>,TDefaultMapHashableKeyFuncs<int,UE::IoStore::FJournaledCache::FMaterialOp,0>,FDefaultSetAllocator>
                           *)((this->Lock).CriticalSection.Opaque3 + 2),local_res8[0],
                          (int *)local_res8);
      }
      param_1 = param_1 + 1;
    } while (0 < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001445e67c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Put @ 1445efeb0

FIoStatus * __thiscall
UE::IoStore::FJournaledCache::Put
          (FJournaledCache *this,FIoStatus *__return_storage_ptr__,FIoHash *param_1,
          FIoBuffer *param_2)

{
  int *piVar1;
  int iVar2;
  FCache *SRWLock;
  ulonglong uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FIoBuffer this_00;
  bool bVar6;
  FIoStatus *pFVar7;
  ulonglong uVar8;
  FIoBuffer local_res8;
  FIoStatus local_48;
  FIoStatus local_38;
  ulonglong local_28;
  
  SRWLock = this->Cache;
  bVar5 = false;
  local_28 = (ulonglong)*(uint *)(param_1->Hash + 0x10);
  uVar8 = *(longlong *)param_1->Hash + local_28;
  local_res8 = (FIoBuffer)(param_2->CorePtr).Reference;
  uVar3 = *(ulonglong *)(param_1->Hash + 8);
  local_38.ErrorMessage.Chars = (wchar_t *)0x0;
  local_38.ErrorCode = Ok;
  local_38.SystemErrorCode = 0;
  if (local_res8.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    ((BufCore *)local_res8.CorePtr.Reference)->NumRefs =
         ((BufCore *)local_res8.CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = JournaledCache::FMemCache::Put(&SRWLock->MemCache,uVar8 ^ uVar3,&local_res8);
  if (bVar6) {
    SRWLock->Demand =
         (atomic<int>)(((SRWLock->MemCache).UsedSize * 100) / (SRWLock->MemCache).MaxSize);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00.CorePtr.Reference = local_res8.CorePtr.Reference;
  if (local_res8.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res8.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
      ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
    }
  }
  if (bVar6) {
    local_48.ErrorMessage.Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    pFVar7 = &local_48;
    local_48.ErrorCode = FIoStatus::Ok.ErrorCode;
    bVar6 = true;
    local_48.SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  }
  else {
    pFVar7 = FIoStatus::FIoStatus(&local_38,Unknown);
    bVar6 = false;
    bVar5 = true;
  }
  pwVar4 = (pFVar7->ErrorMessage).Chars;
  (__return_storage_ptr__->ErrorMessage).Chars = pwVar4;
  if (pwVar4 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar4 + -4) = *(int *)(pwVar4 + -4) + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = pFVar7->ErrorCode;
  __return_storage_ptr__->SystemErrorCode = pFVar7->SystemErrorCode;
  if (bVar5) {
    FIoStatus::~FIoStatus(&local_38);
  }
  if (bVar6) {
    FIoStatus::~FIoStatus(&local_48);
  }
  return __return_storage_ptr__;
}

// ReduceKey @ 1445f12e0

ulong64 __cdecl UE::IoStore::FJournaledCache::ReduceKey(FIoHash *param_1)

{
  ulonglong local_18;
  
  local_18 = (ulonglong)*(uint *)(param_1->Hash + 0x10);
  return *(longlong *)param_1->Hash + local_18 ^ *(ulonglong *)(param_1->Hash + 8);
}

