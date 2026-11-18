// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 19

// FCas @ 1445a22c0

FCas * __thiscall UE::IoStore::FCas::FCas(FCas *this,FOnDemandInstallCacheConfig *param_1)

{
  undefined1 extraout_XMM0 [16];
  undefined1 auVar1 [16];
  double dVar2;
  
  (this->RootDirectory).DataPtr = (wchar_t *)0x0;
  (this->RootDirectory).Size = 0;
  *(undefined8 *)&this->Lookup = 0;
  *(undefined8 *)&(this->Lookup).field_0x8 = 0;
  *(undefined8 *)&(this->Lookup).field_0x20 = 0;
  *(undefined4 *)&(this->Lookup).field_0x28 = 0;
  *(undefined4 *)&(this->Lookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->Lookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Lookup).field_0x34 = 0;
  *(undefined8 *)&(this->Lookup).field_0x40 = 0;
  *(undefined4 *)&(this->Lookup).field_0x48 = 0;
  *(undefined8 *)&this->BlockIds = 0;
  *(undefined8 *)&(this->BlockIds).field_0x8 = 0;
  *(undefined8 *)&(this->BlockIds).field_0x20 = 0;
  *(undefined4 *)&(this->BlockIds).field_0x28 = 0;
  *(undefined4 *)&(this->BlockIds).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlockIds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlockIds).field_0x34 = 0;
  *(undefined8 *)&(this->BlockIds).field_0x40 = 0;
  *(undefined4 *)&(this->BlockIds).field_0x48 = 0;
  *(undefined8 *)&this->LastAccess = 0;
  *(undefined8 *)&(this->LastAccess).field_0x8 = 0;
  *(undefined8 *)&(this->LastAccess).field_0x20 = 0;
  *(undefined4 *)&(this->LastAccess).field_0x28 = 0;
  *(undefined4 *)&(this->LastAccess).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastAccess).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastAccess).field_0x34 = 0;
  *(undefined8 *)&(this->LastAccess).field_0x40 = 0;
  *(undefined4 *)&(this->LastAccess).field_0x48 = 0;
  *(undefined8 *)&this->ReadHandles = 0;
  *(undefined8 *)&(this->ReadHandles).field_0x8 = 0;
  *(undefined8 *)&(this->ReadHandles).field_0x20 = 0;
  *(undefined4 *)&(this->ReadHandles).field_0x28 = 0;
  *(undefined4 *)&(this->ReadHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->ReadHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReadHandles).field_0x34 = 0;
  *(undefined8 *)&(this->ReadHandles).field_0x40 = 0;
  *(undefined4 *)&(this->ReadHandles).field_0x48 = 0;
  FEventRef::FEventRef(&this->BlockReadsDoneEvent,AutoReset);
  dVar2 = param_1->LastAccessGranularitySeconds * __real_416312d000000000;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar2 + __real_3fe0000000000000;
  auVar1 = roundpd(extraout_XMM0,auVar1,1);
  this->LastAccessGranularityTicks = (longlong)auVar1._0_8_;
  return this;
}

// ~FCas @ 1445a8230

void __thiscall UE::IoStore::FCas::~FCas(FCas *this)

{
  void *pvVar1;
  
  FEventRef::~FEventRef(&this->BlockReadsDoneEvent);
  *(undefined4 *)&(this->ReadHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReadHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReadHandles);
  *(undefined4 *)&(this->LastAccess).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LastAccess).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LastAccess);
  *(undefined4 *)&(this->BlockIds).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlockIds).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BlockIds);
  *(undefined4 *)&(this->Lookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Lookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Lookup);
  return;
}

// Compact @ 1445b8d50

void __thiscall UE::IoStore::FCas::Compact(FCas *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  bool bVar2;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar2 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar2) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    FMutex::LockSlow(this_00);
  }
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
             *)&this->Lookup);
  TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
             *)&this->BlockIds);
  TSet<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
             *)&this->ReadHandles);
  TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
             *)&this->LastAccess);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// CreateBlock @ 1445bead0

/* WARNING: Enum "Type": Some values do not have unique names */

FCasBlockId __thiscall UE::IoStore::FCas::CreateBlock(FCas *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  undefined1 *puVar2;
  ForAnyElementType FVar3;
  char cVar4;
  int iVar5;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar6;
  uint *in_RDX;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  FCasBlockId FVar9;
  bool bVar10;
  uint local_res8 [2];
  undefined4 local_res10 [4];
  FString local_58;
  uint *local_48;
  undefined4 *local_40;
  
  this_01 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(this_01);
  this_00 = &this->Mutex;
  *in_RDX = 0;
  FVar9.Id = 1;
  LOCK();
  bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    FMutex::LockSlow(this_00);
  }
  do {
    if (*in_RDX != 0) break;
    local_res8[0] = FVar9.Id;
    if (*(int *)&(this->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
      puVar2 = *(undefined1 **)&(this->BlockIds).field_0x40;
      puVar7 = &(this->BlockIds).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar7 = puVar2;
      }
      iVar5 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & FVar9.Id) *
                                4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->BlockIds + (longlong)iVar5 * 0x10) == FVar9.Id)
          goto LAB_1445bec43;
          iVar5 = *(int *)(*(longlong *)&this->BlockIds + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    GetBlockFilename(this,&local_58,FVar9);
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,FVar8.Data);
    if (cVar4 == '\0') {
      local_48 = local_res8;
      local_res10[0] = 0;
      local_40 = local_res10;
      TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                  *)&this->BlockIds,
                 (TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> *)(local_res10 + 2),
                 (bool *)&local_48);
      *in_RDX = local_res8[0];
    }
    else if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
LAB_1445bec43:
    FVar9.Id = FVar9.Id + 1;
  } while (FVar9.Id != 0xffffffff);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return (FCasBlockId)(uint)in_RDX;
}

// DeleteBlock @ 1445c6760

/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FCas::DeleteBlock
          (FCas *this,TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          FCasBlockId param_1,TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *pTVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  FEvent *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  DWORD DVar11;
  int iVar12;
  FPlatformFileManager *this_01;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FCasBlockId local_res18 [2];
  FString local_120;
  longlong *local_108;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  *pTStack_e0;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  *local_d8;
  undefined2 local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  IPlatformFile *local_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_90 [32];
  longlong local_70;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  *pTStack_68;
  
  local_res18[0].Id = param_1.Id;
  this_01 = FPlatformFileManager::Get();
  local_b8 = FPlatformFileManager::GetPlatformFile(this_01);
  GetBlockFilename(this,&local_120,param_1);
  this_00 = &this->Mutex;
  QueryPerformanceCounter(&local_c8);
  fVar8 = __real_461c4000;
  dVar7 = __real_408f400000000000;
  while( true ) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\UniqueLock.h"
                           ,0x6a,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
      return pTVar13;
    }
    LOCK();
    bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
      FMutex::LockSlow(this_00);
    }
    FVar20.Data = local_120.Data.AllocatorInstance.Data;
    if (*(int *)&(this->BlockIds).field_0x8 == *(int *)&(this->BlockIds).field_0x34) break;
    puVar18 = *(undefined1 **)&(this->BlockIds).field_0x40;
    puVar16 = &(this->BlockIds).field_0x38;
    if (puVar18 != (undefined1 *)0x0) {
      puVar16 = puVar18;
    }
    uVar21 = *(uint *)(puVar16 +
                      (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & param_1.Id) * 4);
    if (uVar21 == 0xffffffff) break;
    while (puVar14 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)&this->BlockIds),
          *puVar14 != param_1.Id) {
      uVar21 = puVar14[2];
      if (uVar21 == 0xffffffff) goto LAB_1445c688a;
    }
    if ((puVar14 == (uint *)0x0) || (puVar14[1] == 0)) break;
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    QueryPerformanceCounter(&local_c0);
    if (fVar8 < (float)((double)(local_c0.s.LowPart - local_c8._0_4_) *
                       FGenericPlatformTime::SecondsPerCycle * dVar7)) {
      DVar11 = FWindowsPlatformMisc::GetLastError();
      ::FString::PrintfImpl
                (&local_b0,L"Timed out waiting for pending read(s) when deleting CAS block %u");
      UnifiedError::IoStoreOnDemand::MakeCasError<void>
                (__return_storage_ptr__,DeleteBlockFailed,Timeout,&local_b0,DVar11);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    pFVar3 = (this->BlockReadsDoneEvent).Event;
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,1000,0);
  }
LAB_1445c688a:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar17.Data = FVar20.Data;
  }
  cVar10 = (**(code **)((longlong)*local_b8 + 0x88))(local_b8,FVar17.Data);
  if (cVar10 == '\0') {
    DVar11 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_a0,L"Failed to delete CAS block %u");
    UnifiedError::IoStoreOnDemand::MakeCasError<void>
              (__return_storage_ptr__,DeleteBlockFailed,DeleteError,&local_a0,DVar11);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (*(int *)&(this->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
      puVar18 = *(undefined1 **)&(this->BlockIds).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->BlockIds).field_0x38;
      }
      iVar12 = *(int *)(puVar18 +
                       ((longlong)*(int *)&(this->BlockIds).field_0x48 - 1U &
                       (longlong)(int)param_1.Id) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->BlockIds + (longlong)iVar12 * 0x10) == param_1.Id) {
            TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                             *)&this->BlockIds,iVar12);
            break;
          }
          iVar12 = *(int *)(*(longlong *)&this->BlockIds + 8 + (longlong)iVar12 * 0x10);
        } while (iVar12 != -1);
      }
    }
    if (*(int *)&(this->ReadHandles).field_0x8 != *(int *)&(this->ReadHandles).field_0x34) {
      TSet<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::IoStore::FCasBlockId>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
                  *)&this->ReadHandles,param_1.Id,local_res18);
    }
    if (*(int *)&(this->LastAccess).field_0x8 != *(int *)&(this->LastAccess).field_0x34) {
      TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::IoStore::FCasBlockId>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                  *)&this->LastAccess,param_1.Id,local_res18);
    }
    pTVar1 = &this->Lookup;
    TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_90,
               (TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_d0 = 0;
    stack0xffffffffffffff08 = local_90._16_16_;
    local_108 = (longlong *)local_90._0_8_;
    auStack_100._0_8_ = local_90._8_8_;
    local_e8 = local_70;
    pTStack_e0 = pTStack_68;
    uVar15 = local_90._24_8_ >> 0x20;
    uVar21 = local_90._28_4_;
    local_d8 = (TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
                *)pTVar1;
    if ((int)uVar21 < *(int *)(local_90._16_8_ + 0x18)) {
      do {
        if (*(uint *)((longlong)(int)uVar15 * 0x1c + 0xc + *local_108) == param_1.Id) {
          pFVar4 = (param_2->AllocatorInstance).Data;
          pFVar19 = (FScriptContainerElement *)((longlong)(int)uVar21 * 0x1c + *local_108);
          if (((pFVar4 <= pFVar19) && (pFVar19 < pFVar4 + (longlong)param_2->ArrayMax * 0xc)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
            return pTVar13;
          }
          iVar12 = param_2->ArrayNum;
          if (iVar12 == param_2->ArrayMax) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar12 + 1;
          pFVar4 = (param_2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar4 + (longlong)iVar12 * 0xc) = *(undefined8 *)pFVar19;
          *(undefined4 *)(pFVar4 + (longlong)iVar12 * 0xc + 8) = *(undefined4 *)(pFVar19 + 8);
          TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_e0,uVar21);
          local_d0 = CONCAT11(local_d0._1_1_,1);
        }
        uStack_f0 = uStack_f0 & ~auStack_100._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_100);
        uVar15 = (ulonglong)uStack_ec;
        uVar21 = uStack_ec;
      } while ((int)uStack_ec < *(int *)(auStack_100._8_8_ + 0x18));
      FVar20.Data = local_120.Data.AllocatorInstance.Data;
      if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
        uVar21 = *(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34;
        if (uVar21 < 4) {
          iVar12 = 1;
        }
        else {
          uVar15 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar12 = 1 << ((byte)lVar5 & 0x1f);
        }
        if (((0 < (int)uVar21) && (local_d8->HashSize < iVar12)) || (iVar12 < local_d8->HashSize)) {
          local_d8->HashSize = iVar12;
          TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
          ::Rehash(local_d8);
          FVar20.Data = local_120.Data.AllocatorInstance.Data;
        }
      }
    }
    (__return_storage_ptr__->Error).bIsSet = false;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  return __return_storage_ptr__;
}

// FindChunk @ 1445cd6b0

FCasLocation __thiscall UE::IoStore::FCas::FindChunk(FCas *this,FIoHash *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  uint uVar2;
  FCasLocation *pFVar3;
  THash<96> *in_R8;
  bool bVar4;
  
  uVar2 = *(uint *)in_R8->Hash;
  this_00 = &this->Mutex;
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    FMutex::LockSlow(this_00);
  }
  pFVar3 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
           ::FindByHash<UE::THash<96>_>
                     ((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                       *)&this->Lookup,uVar2,in_R8);
  if (pFVar3 == (FCasLocation *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    param_1->Hash[0] = '\0';
    param_1->Hash[1] = '\0';
    param_1->Hash[2] = '\0';
    param_1->Hash[3] = '\0';
    param_1->Hash[4] = 0xff;
    param_1->Hash[5] = 0xff;
    param_1->Hash[6] = 0xff;
    param_1->Hash[7] = 0xff;
  }
  else {
    *(FCasLocation *)param_1->Hash = *pFVar3;
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  return (FCasLocation)param_1;
}

// GetAndClearDirtyLastAccess @ 1445d13b0

TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
* __thiscall
UE::IoStore::FCas::GetAndClearDirtyLastAccess
          (FCas *this,
          TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
          *__return_storage_ptr__)

{
  ulonglong *puVar1;
  FMutex *this_00;
  ulonglong uVar2;
  undefined1 *puVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  code *pcVar6;
  long64 *plVar7;
  uint uVar8;
  TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
  *pTVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  int local_res10;
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> local_res18;
  longlong local_b8;
  ulonglong *local_b0;
  TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this_00 = &this->Mutex;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar11 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  uVar8 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  LOCK();
  bVar17 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar17) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar17) {
    FMutex::LockSlow(this_00);
  }
  puVar3 = &(this->LastAccess).field_0x10;
  iVar5 = *(int *)&(this->LastAccess).field_0x28;
  local_res18.Value = (long64 *)&this->LastAccess;
  local_88 = 0;
  iStack_8c = iVar11;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(this->LastAccess).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar3;
    }
    uVar15 = *puVar14;
    local_88 = 0;
    iVar11 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      local_88 = local_88 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_8c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1445d149e;
      uVar15 = puVar14[lVar10 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_8c = local_res10 + -1 + local_88;
    if (iVar5 < iStack_8c) {
      iStack_8c = iVar5;
    }
  }
LAB_1445d149e:
  iStack_80 = *(int *)&(this->LastAccess).field_0x8 - *(int *)&(this->LastAccess).field_0x34;
  uVar15 = *(uint *)&(this->LastAccess).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar8,iVar11);
  uStack_90 = 0xffffffff;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
              *)local_res18.Value;
  iStack_a0 = iVar11;
  uStack_9c = uVar8;
  local_98 = puVar3;
  iStack_84 = iStack_8c;
  local_78 = (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
              *)local_res18.Value;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
              *)(*pcVar6)();
    return pTVar9;
  }
  plVar7 = local_res18.Value;
  uVar8 = *(uint *)&(this->LastAccess).field_0x28;
  if (uVar15 != uVar8) {
    puVar13 = *(undefined1 **)&(this->LastAccess).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar3;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1445d15c0;
      uVar15 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_1445d15c0:
  while( true ) {
    pTVar9 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar9 == (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
                   *)plVar7)) break;
    lVar10 = *(longlong *)pTVar9 + (longlong)TStack_70.CurrentBitIndex * 0x18;
    puVar1 = (ulonglong *)(lVar10 + 8);
    if (*(longlong *)(lVar10 + 8) < 0) {
      local_b8 = lVar10;
      local_b0 = puVar1;
      TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res18,(bool *)&local_b8);
      *puVar1 = *puVar1 & 0x7fffffffffffffff;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  LOCK();
  aVar4 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return __return_storage_ptr__;
}

// GetBlockFilename @ 1445d1670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::IoStore::FCas::GetBlockFilename(FCas *this,FString *__return_storage_ptr__,FCasBlockId param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  void *pvVar5;
  int iVar6;
  undefined1 auStack_298 [32];
  uint local_278 [2];
  FString local_270;
  FString local_260;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  if (param_1.Id == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x198,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  local_278[0] = param_1.Id >> 0x18 | (param_1.Id & 0xff0000) >> 8 | (param_1.Id & 0xff00) << 8 |
                 param_1.Id << 0x18;
  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Data.ArrayNum = 0;
  local_270.Data.ArrayMax = 0;
  BytesToHexLower((uchar *)local_278,4,&local_270);
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_248,(this->RootDirectory).DataPtr,
             (int)*(undefined8 *)&(this->RootDirectory).Size);
  if ((((int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1) != 0) &&
      (local_248.CurPos[-1] != L'/')) && (local_248.CurPos[-1] != L'\\')) {
    if (local_248.End < local_248.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,1);
    }
    *local_248.CurPos = L'/';
    local_248.CurPos = local_248.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_248,L"blocks",6);
  if ((((int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1) != 0) &&
      (local_248.CurPos[-1] != L'/')) && (local_248.CurPos[-1] != L'\\')) {
    if (local_248.End < local_248.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_248,1);
    }
    *local_248.CurPos = L'/';
    local_248.CurPos = local_248.CurPos + 1;
  }
  iVar6 = local_270.Data.ArrayNum + -1;
  if (local_270.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_248,(wchar_t *)local_270.Data.AllocatorInstance.Data,iVar6);
  if (local_248.End < local_248.CurPos + 5) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,5);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_248.CurPos,L".ucas",10);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_248.CurPos = (wchar_t *)((longlong)pvVar5 + 10);
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_260,local_248.Base,
                      (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
  if (__return_storage_ptr__ != pFVar4) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBlockInfo @ 1445d18e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
UE::IoStore::FCas::GetBlockInfo
          (FCas *this,
          TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
          *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  code *pcVar3;
  ulong64 uVar4;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar5;
  uint uVar6;
  ForAnyElementType _Dst;
  undefined1 *puVar7;
  void *pvVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStackY_368 [32];
  longlong local_330;
  undefined1 local_328 [32];
  undefined1 *local_308;
  int local_300;
  uint local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  FScriptContainerElement local_2f0 [8];
  ForAnyElementType local_2e8;
  uint local_2e0;
  undefined **local_2d8;
  undefined1 local_2d0;
  IPlatformFile *local_2c8;
  TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
  *local_2c0;
  undefined1 local_2b8 [32];
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  undefined4 local_284;
  ForElementType<FSetElementId> local_278;
  int local_270;
  longlong local_268;
  ulong64 local_260;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_258,(this->RootDirectory).DataPtr,
             (int)*(undefined8 *)&(this->RootDirectory).Size);
  if ((((int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1) != 0) &&
      (local_258.CurPos[-1] != L'/')) && (local_258.CurPos[-1] != L'\\')) {
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'/';
    local_258.CurPos = local_258.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_258,L"blocks",6);
  local_2fc = 0x80;
  local_328._0_8_ = (FScriptContainerElement *)0x0;
  this_00 = &this->Mutex;
  local_328._8_8_ = 0;
  local_308 = (undefined1 *)0x0;
  local_300 = 0;
  local_2f4 = 0;
  local_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0 = 0;
  local_2f8 = 0xffffffff;
  LOCK();
  bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    FMutex::LockSlow(this_00);
  }
  if ((TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
       *)local_328 == &this->LastAccess) goto LAB_1445d1b6c;
  uVar6 = *(uint *)&(this->LastAccess).field_0x48;
  uVar9 = uVar6;
  if (uVar6 < 2) {
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      uVar9 = 0;
      goto LAB_1445d1a3c;
    }
  }
  else {
LAB_1445d1a3c:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2e8,0,uVar9,4);
  }
  pvVar8 = *(void **)&(this->LastAccess).field_0x40;
  if (pvVar8 == (void *)0x0) {
    pvVar8 = &(this->LastAccess).field_0x38;
  }
  _Dst.Data = local_2f0;
  if (local_2e8.Data != (FScriptContainerElement *)0x0) {
    _Dst.Data = local_2e8.Data;
  }
  if (uVar6 != 0) {
    memcpy(_Dst.Data,pvVar8,(longlong)(int)uVar6 << 2);
  }
  iVar2 = *(int *)&(this->LastAccess).field_0x8;
  local_2e0 = uVar6;
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_328,iVar2);
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,(ForAnyElementType *)local_328,(int *)(local_328 + 8),
             (int *)(local_328 + 0xc));
  local_2f8 = *(undefined4 *)&(this->LastAccess).field_0x30;
  puVar7 = &(this->LastAccess).field_0x10;
  local_2f4 = *(undefined4 *)&(this->LastAccess).field_0x34;
  if (local_328 + 0x10 != puVar7) {
    uVar6 = *(int *)&(this->LastAccess).field_0x28 + 0x1fU & 0xffffffe0;
    local_300 = 0;
    if (((int)local_2fc < (int)uVar6) || (0x80 < (int)local_2fc)) {
      local_2fc = 0x80;
      if (0x80 < (int)uVar6) {
        local_2fc = uVar6;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_328 + 0x10),0);
    }
    local_300 = *(int *)&(this->LastAccess).field_0x28;
    if (local_300 != 0) {
      pvVar8 = *(void **)&(this->LastAccess).field_0x20;
      if (pvVar8 == (void *)0x0) {
        pvVar8 = puVar7;
      }
      puVar7 = local_328 + 0x10;
      if (local_308 != (undefined1 *)0x0) {
        puVar7 = local_308;
      }
      memcpy(puVar7,pvVar8,(ulonglong)(local_300 + 0x1fU >> 5) << 2);
    }
  }
  if (iVar2 != 0) {
    memcpy((void *)local_328._0_8_,*(void **)&this->LastAccess,(longlong)iVar2 * 0x18);
  }
LAB_1445d1b6c:
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  this_01 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this_01);
  local_2d0 = 0;
  local_2d8 = &`UE::IoStore::FCas::GetBlockInfo'::`2'::FDirectoryVisitor::_vftable_;
  local_2b8._0_8_ = (FScriptContainerElement *)0x0;
  local_2b8._8_8_ = 0;
  local_298 = (void *)0x0;
  local_290 = 0;
  local_28c = 0x80;
  local_288 = 0xffffffff;
  local_284 = 0;
  local_278 = (ForElementType<FSetElementId>)0x0;
  local_270 = 0;
  local_2c8 = pIVar5;
  local_2c0 = param_1;
  TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
              *)local_2b8,
             (TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
              *)local_328);
  FDateTime::UtcNow();
  auVar11._8_8_ = 0;
  auVar11._0_8_ = __real_42b600a391000080;
  auVar11 = roundpd(auVar11,auVar11,1);
  local_260 = 0;
  local_268 = local_330 - (longlong)auVar11._0_8_;
  pcVar3 = *(code **)((longlong)*pIVar5 + 0x140);
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  (*pcVar3)(pIVar5);
  uVar4 = local_260;
  local_270 = 0;
  if (local_278 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278);
  }
  iVar2 = SUB84(local_2b8._8_8_,4);
  local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
  }
  local_288 = 0xffffffff;
  local_284 = 0;
  local_290 = 0;
  if (0x80 < local_28c) {
    local_28c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
  }
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
  }
  if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  local_2d8 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  local_2e0 = 0;
  if (local_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data);
  }
  iVar2 = SUB84(local_328._8_8_,4);
  local_328._8_8_ = local_328._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_328,0,(int *)(local_328 + 0xc));
  }
  local_2f4 = 0;
  local_300 = 0;
  local_2f8 = 0xffffffff;
  if (0x80 < local_2fc) {
    local_2fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_328 + 0x10),0);
  }
  if (local_308 != (undefined1 *)0x0) {
    FMemory::Free(local_308);
  }
  if ((FScriptContainerElement *)local_328._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_328._0_8_);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return uVar4;
}

// GetTimestampForMissingLastAccess @ 1445d8e60

long64 __cdecl UE::IoStore::FCas::GetTimestampForMissingLastAccess(void)

{
  undefined1 auVar1 [16];
  undefined8 local_res8;
  
  FDateTime::UtcNow();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_42b600a391000080;
  auVar1 = roundpd(auVar1,auVar1,1);
  return local_res8 - (longlong)auVar1._0_8_;
}

// Initialize @ 1445d9e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FCas::Initialize
          (FCas *this,TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,bool param_2)

{
  undefined1 *puVar1;
  TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  DWORD DVar7;
  IFileManager *pIVar8;
  EIoErrorCode EVar9;
  undefined1 auStackY_298 [32];
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar2 = param_1->Size;
  uVar5 = *(undefined4 *)&param_1->field_0xc;
  (this->RootDirectory).DataPtr = param_1->DataPtr;
  (this->RootDirectory).Size = iVar2;
  *(undefined4 *)&(this->RootDirectory).field_0xc = uVar5;
  bVar4 = 1 < *(int *)&(this->Lookup).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
                      *)&this->Lookup);
  }
  puVar1 = &(this->Lookup).field_0xc;
  *(undefined4 *)&(this->Lookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)&this->Lookup,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Lookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Lookup).field_0x34 = 0;
  iVar2 = *(int *)&(this->Lookup).field_0x2c;
  *(undefined4 *)&(this->Lookup).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Lookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Lookup).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->Lookup).field_0x48 = 1;
    TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
              *)&this->Lookup);
  }
  bVar4 = 1 < *(int *)&(this->BlockIds).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                      *)&this->BlockIds);
  }
  puVar1 = &(this->BlockIds).field_0xc;
  *(undefined4 *)&(this->BlockIds).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->BlockIds,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BlockIds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlockIds).field_0x34 = 0;
  iVar2 = *(int *)&(this->BlockIds).field_0x2c;
  *(undefined4 *)&(this->BlockIds).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->BlockIds).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BlockIds).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->BlockIds).field_0x48 = 1;
    TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
              *)&this->BlockIds);
  }
  this_00 = &this->LastAccess;
  bVar4 = 1 < *(int *)&(this->LastAccess).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->LastAccess).field_0xc;
  *(undefined4 *)&(this->LastAccess).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->LastAccess).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastAccess).field_0x34 = 0;
  iVar2 = *(int *)&(this->LastAccess).field_0x2c;
  *(undefined4 *)&(this->LastAccess).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->LastAccess).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LastAccess).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->LastAccess).field_0x48 = 1;
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_258,(this->RootDirectory).DataPtr,
             (int)*(undefined8 *)&(this->RootDirectory).Size);
  if ((((int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1) != 0) &&
      (local_258.CurPos[-1] != L'/')) && (local_258.CurPos[-1] != L'\\')) {
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'/';
    local_258.CurPos = local_258.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_258,L"blocks",6);
  pIVar8 = IFileManager::Get();
  if (param_2) {
    pcVar3 = *(code **)((longlong)*pIVar8 + 0x68);
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    cVar6 = (*pcVar3)(pIVar8,local_258.Base,0,1);
    if (cVar6 != '\0') goto LAB_1445da18c;
    DVar7 = FWindowsPlatformMisc::GetLastError();
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    ::FString::PrintfImpl(&local_268,L"Failed to delete CAS blocks directory \'%s\'");
    EVar9 = DeleteError;
LAB_1445da15e:
    UnifiedError::IoStoreOnDemand::MakeCasError<void>
              (__return_storage_ptr__,InitializeFailed,EVar9,&local_268,DVar7);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_1445da18c:
    pcVar3 = *(code **)((longlong)*pIVar8 + 0x58);
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    cVar6 = (*pcVar3)(pIVar8,local_258.Base);
    if (cVar6 == '\0') {
      pcVar3 = *(code **)((longlong)*pIVar8 + 0x60);
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      *local_258.CurPos = L'\0';
      cVar6 = (*pcVar3)(pIVar8,local_258.Base,1);
      if (cVar6 == '\0') {
        DVar7 = FWindowsPlatformMisc::GetLastError();
        if (local_258.End < local_258.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,1);
        }
        *local_258.CurPos = L'\0';
        ::FString::PrintfImpl(&local_268,L"Failed to create CAS blocks directory \'%s\'");
        EVar9 = WriteError;
        goto LAB_1445da15e;
      }
    }
    (__return_storage_ptr__->Error).bIsSet = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return __return_storage_ptr__;
}

// LoadSnapshot @ 1445e0590

void __thiscall UE::IoStore::FCas::LoadSnapshot(FCas *this,FCasSnapshot *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  TPairInitializer<UE::THash<96>_&&,UE::IoStore::FCasLocation_&&> local_res10;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(this_00);
  }
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
             *)&this->Lookup,(param_1->ChunkLocations).ArrayNum);
  iVar2 = (param_1->ChunkLocations).ArrayNum;
  pFVar3 = (param_1->ChunkLocations).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x14;
  while( true ) {
    if ((param_1->ChunkLocations).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    local_50 = pFVar3 + 0xc;
    local_58 = pFVar3;
    TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::THash<96>_&&,UE::IoStore::FCasLocation_&&>_>
              ((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
                *)&this->Lookup,&local_res10,(bool *)&local_58);
    pFVar3 = pFVar3 + 0x14;
  }
  TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
             *)&this->BlockIds,(param_1->Blocks).ArrayNum);
  TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
             *)&this->LastAccess,(param_1->Blocks).ArrayNum);
  iVar2 = (param_1->Blocks).ArrayNum;
  pFVar4 = (param_1->Blocks).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_1->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::IoStore::FCasSnapshot::FBlock,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    local_50 = (FScriptContainerElement *)local_res8;
    local_res8[0] = 0;
    local_58 = pFVar4;
    TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                *)&this->BlockIds,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> *)&local_res10,
               (bool *)&local_58);
    local_40 = pFVar4 + 8;
    local_48 = pFVar4;
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)&this->LastAccess,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> *)
               &local_res10.Value,(bool *)&local_48);
    pFVar4 = pFVar4 + 0x10;
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// OnFileHandleDeleted @ 1445e4340

void __thiscall UE::IoStore::FCas::OnFileHandleDeleted(FCas *this,FCasBlockId param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  bool bVar6;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(this_00);
  }
  if (*(int *)&(this->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
    puVar4 = *(undefined1 **)&(this->BlockIds).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->BlockIds).field_0x38;
    }
    uVar3 = *(uint *)(puVar4 + (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & param_1.Id) *
                               4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x10 + *(longlong *)&this->BlockIds);
        if (*puVar5 == param_1.Id) {
          if (puVar5 == (uint *)0x0) goto LAB_1445e43c8;
          goto LAB_1445e43ee;
        }
        uVar3 = puVar5[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  puVar5 = (uint *)0x0;
LAB_1445e43c8:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1445e43ee:
  uVar3 = puVar5[1] - 1;
  puVar5[1] = uVar3;
  if ((int)uVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x1e9,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (uVar3 == 0) {
    (**(code **)(((this->BlockReadsDoneEvent).Event)->_padding_ + 0x10))();
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// OpenAsyncRead @ 1445e7aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> * __thiscall
UE::IoStore::FCas::OpenAsyncRead
          (FCas *this,
          TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *__return_storage_ptr__
          ,FCasBlockId param_1)

{
  int *piVar1;
  FMutex *this_00;
  TMap<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>_>
  *this_01;
  atomic<unsigned_char> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  atomic<int> aVar11;
  FPlatformFileManager *this_02;
  IPlatformFile *pIVar12;
  TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *pTVar13;
  uint uVar14;
  uint *puVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  TReferenceControllerBase<1> *pTVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  FCasBlockId local_res18 [2];
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c4;
  int local_c0 [2];
  longlong local_b8;
  longlong *local_b0;
  FString local_a8;
  undefined1 local_98 [8];
  FCasBlockId *local_90;
  undefined4 *local_88;
  FCas *local_80;
  uint uStack_78;
  undefined4 uStack_74;
  FCasBlockId *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = &this->Mutex;
  LOCK();
  bVar21 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar21) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_res18[0].Id = param_1.Id;
  if (!bVar21) {
    FMutex::LockSlow(this_00);
  }
  this_01 = &this->ReadHandles;
  if (*(int *)&(this->ReadHandles).field_0x8 != *(int *)&(this->ReadHandles).field_0x34) {
    puVar17 = *(undefined1 **)&(this->ReadHandles).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ReadHandles).field_0x38;
    }
    uVar14 = *(uint *)(puVar17 +
                      (ulonglong)(*(int *)&(this->ReadHandles).field_0x48 - 1U & local_res18[0].Id)
                      * 4);
    if (uVar14 != 0xffffffff) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar14 * 0x20 + *(longlong *)&this_01->field_0x0);
        if (*puVar15 == local_res18[0].Id) {
          pTVar19 = (TReferenceControllerBase<1> *)(puVar15 + 2);
          if (puVar15 == (uint *)0x0) {
            pTVar19 = (TReferenceControllerBase<1> *)0x0;
          }
          if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
            pTVar4 = *(TReferenceControllerBase<1> **)&pTVar19->SharedReferenceCount;
            pTVar16 = pTVar4;
            if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_1445e7b85;
            aVar6 = pTVar4->SharedReferenceCount;
            goto joined_r0x0001445e7b67;
          }
          break;
        }
        uVar14 = puVar15[6];
      } while (uVar14 != 0xffffffff);
    }
  }
  goto LAB_1445e7b8d;
  while( true ) {
    LOCK();
    aVar11 = pTVar4->SharedReferenceCount;
    bVar21 = aVar6 == aVar11;
    if (bVar21) {
      pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
      aVar11 = aVar6;
    }
    UNLOCK();
    aVar6 = aVar11;
    if (bVar21) break;
joined_r0x0001445e7b67:
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    if (aVar6 == (atomic<int>)0x0) goto LAB_1445e7b85;
  }
  pTVar16 = pTVar4;
  if (pTVar19->_padding_ != 0) {
    (__return_storage_ptr__->Variant)._padding_ = pTVar19->_padding_;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)pTVar4;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) == 0) {
      return __return_storage_ptr__;
    }
    FMutex::WakeWaitingThread(this_00);
    return __return_storage_ptr__;
  }
LAB_1445e7b85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
LAB_1445e7b8d:
  this_02 = FPlatformFileManager::Get();
  pIVar12 = FPlatformFileManager::GetPlatformFile(this_02);
  GetBlockFilename(this,&local_a8,local_res18[0]);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar20.Data = local_a8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar12 + 0x198))(pIVar12,&local_60,FVar20.Data,1);
  uVar18 = (ulonglong)local_48;
  if ((2 < uVar18) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar21)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *)(*pcVar5)();
    return pTVar13;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,TUniquePtr<class_IAsyncReadFileHandle,struct_TDefaultDelete<class_IAsyncReadFileHandle>_>,TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IAsyncReadFileHandle,struct_TDefaultDelete<class_IAsyncReadFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar18) == '\0') {
    if ((local_48 != 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *)(*pcVar5)();
      return pTVar13;
    }
    lVar8 = local_60;
    uVar9 = (undefined4)local_58;
    uVar10 = local_58._4_4_;
    local_60 = 0;
    local_58 = 0;
    if ((2 < local_48) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *)(*pcVar5)();
      return pTVar13;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IAsyncReadFileHandle,struct_TDefaultDelete<class_IAsyncReadFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48])(&local_60);
    (__return_storage_ptr__->Variant)._padding_ = lVar8;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = uVar9;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = uVar10;
    *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_50;
    local_48 = 2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_c4 = 0;
    if (*(int *)&(this->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
      puVar17 = *(undefined1 **)&(this->BlockIds).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->BlockIds).field_0x38;
      }
      uVar14 = *(uint *)(puVar17 +
                        (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & local_res18[0].Id) *
                        4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar14 * 0x10 + *(longlong *)&this->BlockIds);
          if (*puVar15 == local_res18[0].Id) {
            if (puVar15 != (uint *)0x0) goto LAB_1445e7cff;
            break;
          }
          uVar14 = puVar15[2];
        } while (uVar14 != 0xffffffff);
      }
    }
    local_90 = local_res18;
    local_d8 = 0;
    local_88 = &local_c4;
    TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                *)&this->BlockIds,(uint)local_c0,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> *)
               (ulonglong)local_res18[0].Id,(bool *)&local_90);
    puVar15 = (uint *)((longlong)local_c0[0] * 0x10 + *(longlong *)&this->BlockIds);
LAB_1445e7cff:
    puVar15[1] = puVar15[1] + 1;
    uStack_78 = local_res18[0].Id;
    local_80 = this;
    if ((local_48 != 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *)(*pcVar5)();
      return pTVar13;
    }
    lVar8 = local_60;
    local_60 = 0;
    local_b0 = ::operator_new(0x28);
    local_b8 = lVar8;
    if (local_b0 == (longlong *)0x0) {
      local_b0 = (longlong *)0x0;
    }
    else {
      local_b0[2] = (longlong)local_80;
      local_b0[3] = CONCAT44(uStack_74,uStack_78);
      *(undefined4 *)(local_b0 + 1) = 1;
      *(undefined4 *)((longlong)local_b0 + 0xc) = 1;
      *local_b0 = (longlong)
                  &SharedPointerInternals::
                   TReferenceControllerWithDeleter<IAsyncReadFileHandle,`UE::IoStore::FCas::OpenAsyncRead'::`11'::<lambda_1>,1>
                   ::_vftable_;
      local_b0[4] = lVar8;
      LOCK();
      *(int *)((longlong)local_b0 + 0xc) = *(int *)((longlong)local_b0 + 0xc) + 1;
      UNLOCK();
    }
    plVar7 = local_b0;
    if (*(int *)&(this->ReadHandles).field_0x8 != *(int *)&(this->ReadHandles).field_0x34) {
      puVar17 = *(undefined1 **)&(this->ReadHandles).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ReadHandles).field_0x38;
      }
      uVar14 = *(uint *)(puVar17 +
                        (ulonglong)
                        (*(int *)&(this->ReadHandles).field_0x48 - 1U & local_res18[0].Id) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar14 * 0x20 + *(longlong *)&this_01->field_0x0);
          if (*puVar15 == local_res18[0].Id) {
            if (puVar15 != (uint *)0x0) goto LAB_1445e7e03;
            break;
          }
          uVar14 = puVar15[6];
        } while (uVar14 != 0xffffffff);
      }
    }
    local_70 = local_res18;
    local_d8 = 0;
    local_68 = &local_b8;
    TSet<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<UE::IoStore::FCasBlockId_const_&,TWeakPtr<IAsyncReadFileHandle,1>_&&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,TWeakPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
                *)this_01,(uint)local_98,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,TWeakPtr<IAsyncReadFileHandle,1>_&&>
                *)(ulonglong)local_res18[0].Id,(bool *)&local_70);
LAB_1445e7e03:
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
    (__return_storage_ptr__->Variant)._padding_ = lVar8;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar7;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar18 = (ulonglong)local_48;
    if ((2 < local_48) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> *)(*pcVar5)();
      return pTVar13;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IAsyncReadFileHandle,struct_TDefaultDelete<class_IAsyncReadFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar18])(&local_60);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return __return_storage_ptr__;
}

// OpenRead @ 1445e8810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FCas::OpenRead
          (FCas *this,
          TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *__return_storage_ptr__,
          FCasBlockId param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  DWORD DVar5;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar6;
  TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *pTVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  uint local_res18 [2];
  undefined1 auStackY_e8 [32];
  undefined4 local_b4;
  int local_b0 [2];
  FString local_a8;
  uint *local_98;
  undefined4 *local_90;
  FCas *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  FString local_78;
  longlong local_68 [3];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_res18[0] = param_1.Id;
  GetBlockFilename(this,&local_a8,param_1);
  this_01 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(this_01);
  this_00 = &this->Mutex;
  LOCK();
  bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar14) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar14) {
    FMutex::LockSlow(this_00);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar13.Data = local_a8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0xf0))(pIVar6,local_68,FVar13.Data,1);
  uVar12 = (ulonglong)local_50;
  if ((2 < uVar12) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)(*pcVar2)();
    return pTVar7;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12) == '\0') {
    DVar5 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_78,L"Failed to open CAS block \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeCasError<TSharedPtr<IFileHandle,1>_>
              (__return_storage_ptr__,ReadBlockFailed,FileOpenFailed,&local_78,DVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    puVar9 = (undefined8 *)0x0;
    local_b4 = 0;
    if (*(int *)&(this->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
      puVar11 = *(undefined1 **)&(this->BlockIds).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->BlockIds).field_0x38;
      }
      uVar4 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & local_res18[0]) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this->BlockIds);
          if (*puVar10 == local_res18[0]) {
            if (puVar10 != (uint *)0x0) goto LAB_1445e8990;
            break;
          }
          uVar4 = puVar10[2];
        } while (uVar4 != 0xffffffff);
      }
    }
    local_98 = local_res18;
    local_90 = &local_b4;
    TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                *)&this->BlockIds,(uint)local_b0,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> *)
               (ulonglong)local_res18[0],(bool *)&local_98);
    puVar10 = (uint *)((longlong)local_b0[0] * 0x10 + *(longlong *)&this->BlockIds);
LAB_1445e8990:
    puVar10[1] = puVar10[1] + 1;
    uStack_80 = local_res18[0];
    local_88 = this;
    if ((local_50 != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)(*pcVar2)();
      return pTVar7;
    }
    lVar3 = local_68[0];
    local_68[0] = 0;
    puVar8 = ::operator_new(0x28);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[2] = local_88;
      puVar8[3] = CONCAT44(uStack_7c,uStack_80);
      *(undefined4 *)(puVar8 + 1) = 1;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
      *puVar8 = &SharedPointerInternals::
                 TReferenceControllerWithDeleter<IFileHandle,`UE::IoStore::FCas::OpenRead'::`5'::<lambda_1>,1>
                 ::_vftable_;
      puVar8[4] = lVar3;
      puVar9 = puVar8;
    }
    (__return_storage_ptr__->Variant)._padding_ = lVar3;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)puVar9;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if ((2 < local_50) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)(*pcVar2)();
    return pTVar7;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_50])(local_68);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OpenWrite @ 1445e8b10

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError> *
__thiscall
UE::IoStore::FCas::OpenWrite
          (FCas *this,
          TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>
          *__return_storage_ptr__,FCasBlockId param_1,bool param_2)

{
  DWORD DVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  undefined7 in_register_00000089;
  FString local_38;
  FString local_28;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  GetBlockFilename(this,&local_38,param_1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))
                    (pIVar2,FVar4.Data,param_2,CONCAT71(in_register_00000089,1));
  if (lVar3 == 0) {
    DVar1 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_28,L"Failed to open CAS block \'%s\' for writing");
    UnifiedError::IoStoreOnDemand::
    MakeCasError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>_>
              (__return_storage_ptr__,WriteBlockFailed,FileOpenFailed,&local_28,DVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->Variant)._padding_ = lVar3;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TrackAccessIf @ 1446054b0

bool __thiscall
UE::IoStore::FCas::TrackAccessIf
          (FCas *this,ECasTrackAccessType param_1,FCasBlockId param_2,long64 param_3,bool param_4)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  bool bVar2;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar2 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar2) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    FMutex::LockSlow(this_00);
  }
  bVar2 = UnlockedTrackAccessIf(this,param_1,param_2.Id,(FCasBlockId)param_2.Id,param_3,param_4);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return bVar2;
}

// UnlockedTrackAccessIf @ 14460a8d0

bool __thiscall
UE::IoStore::FCas::UnlockedTrackAccessIf
          (FCas *this,ECasTrackAccessType param_1,uint param_2,FCasBlockId param_3,long64 param_4,
          bool param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined1 local_res8 [8];
  uint local_res20 [2];
  uint *local_18;
  long64 *local_10;
  
  local_res20[0] = param_3.Id;
  if ((param_3.Id == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                         ,0x20d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (*(int *)&(this->LastAccess).field_0x8 != *(int *)&(this->LastAccess).field_0x34) {
    puVar7 = *(undefined1 **)&(this->LastAccess).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->LastAccess).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->LastAccess).field_0x48 - 1U & param_2) * 4
                    );
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->LastAccess).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x18) == local_res20[0]) {
          puVar9 = (ulonglong *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar9 = (ulonglong *)0x0;
          }
          if (puVar9 != (ulonglong *)0x0) {
            uVar8 = *puVar9 & 0x7fffffffffffffff;
            if ((param_5 == false) && (-1 < (longlong)*puVar9)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (param_1 == Newer) {
              if ((longlong)uVar8 < param_4) goto LAB_14460aa41;
            }
            else if ((param_1 != Granular) ||
                    (((longlong)uVar8 < param_4 &&
                     (this->LastAccessGranularityTicks < (longlong)(param_4 - uVar8))))) {
LAB_14460aa41:
              if (bVar4) {
                param_4 = param_4 | 0x8000000000000000;
              }
              *puVar9 = param_4;
              return true;
            }
            return false;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  if (param_5 != false) {
    param_4 = param_4 | 0x8000000000000000;
  }
  local_18 = local_res20;
  local_10 = &param_4;
  TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
            ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
              *)&this->LastAccess,(uint)local_res8,
             (TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> *)
             (ulonglong)param_2,(bool *)&local_18);
  return true;
}

// Verify @ 14460d490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FCas::Verify
          (FCas *this,TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
  *pTVar1;
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *pTVar2;
  TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
  *this_00;
  atomic<unsigned_char> aVar3;
  FCasBlockId FVar4;
  FScriptContainerElement *pFVar5;
  IErrorDetails *pIVar6;
  IErrorDetails IVar7;
  code *pcVar8;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar9;
  int iVar10;
  IPlatformFile *pIVar11;
  TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> *pTVar12;
  char cVar13;
  DWORD DVar14;
  int iVar15;
  int iVar16;
  FDateTime FVar17;
  FPlatformFileManager *this_01;
  TOptional<UE::UnifiedError::FError> *pTVar18;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar19;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar20;
  FDynamicErrorDetails *this_02;
  byte bVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 *puVar24;
  ForAnyElementType FVar25;
  undefined1 *puVar26;
  longlong *plVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  undefined8 uVar30;
  atomic<unsigned_char> *this_03;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  FCas *this_04;
  ForAnyElementType FVar34;
  longlong lVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auStackY_4a8 [32];
  undefined1 local_458 [4];
  FCasBlockId local_454;
  undefined8 local_450;
  FError local_448;
  undefined1 local_438 [8];
  longlong local_430;
  TOptional<UE::UnifiedError::FError> *local_428;
  FString local_420;
  TOptional<UE::UnifiedError::FError> local_410;
  longlong *local_3f8;
  undefined8 uStack_3f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3e8;
  uint uStack_3e0;
  uint uStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3d4;
  int local_3d0;
  undefined4 uStack_3cc;
  longlong local_3c8;
  IPlatformFile *local_3c0;
  FDynamicErrorDetails *local_3b8;
  FCas *local_3b0;
  FString local_3a8;
  FString local_398;
  FString local_388;
  longlong *local_378;
  undefined1 auStack_370 [16];
  uint uStack_360;
  uint uStack_35c;
  longlong local_358;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  *pTStack_350;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  *local_348;
  undefined2 local_340;
  longlong *local_338;
  undefined1 auStack_330 [16];
  uint uStack_320;
  uint uStack_31c;
  longlong local_318;
  TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
  *pTStack_310;
  TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
  *local_308;
  undefined2 local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  undefined4 local_2d8;
  int local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [8];
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_&&> local_29c;
  FString local_28c;
  undefined1 local_27c [4];
  undefined1 *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  FCasBlockId *local_218;
  longlong *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FCasBlockId *local_1d8;
  longlong *local_1d0;
  FCasBlockId *local_1c8;
  longlong *local_1c0;
  TOptional<UE::UnifiedError::FError> local_1a8;
  undefined1 local_190 [32];
  longlong local_170;
  TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
  *pTStack_168;
  undefined1 local_160 [32];
  longlong local_140;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  *pTStack_138;
  undefined1 local_120 [44];
  undefined4 local_f4;
  undefined1 local_e8 [32];
  undefined1 *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_428 = &__return_storage_ptr__->Error;
  local_3b0 = this;
  local_2b8 = param_1;
  GetBlockInfo(this,(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                     *)local_e8);
  (__return_storage_ptr__->Error).bIsSet = false;
  FVar17 = FDateTime::UtcNow();
  local_430 = *(longlong *)FVar17.Ticks;
  FDateTime::UtcNow();
  auVar37._8_8_ = 0;
  auVar37._0_8_ = __real_42b600a391000080;
  auVar37 = roundpd(auVar37,auVar37,1);
  local_2c8 = local_2d0 - (longlong)auVar37._0_8_;
  this_01 = FPlatformFileManager::Get();
  local_3c0 = FPlatformFileManager::GetPlatformFile(this_01);
  local_29c._4_8_ = &this->Mutex;
  uVar30 = 1;
  local_450 = 1;
  LOCK();
  bVar36 = ((FMutex *)local_29c._4_8_)->State == (atomic<unsigned_char>)0x0;
  if (bVar36) {
    ((FMutex *)local_29c._4_8_)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar36) {
    FMutex::LockSlow((FMutex *)local_29c._4_8_);
  }
  pTVar1 = &this->BlockIds;
  TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_190,
             (TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
              *)pTVar1);
  pIVar11 = local_3c0;
  local_300 = 0;
  stack0xfffffffffffffcd8 = local_190._16_16_;
  local_338 = (longlong *)local_190._0_8_;
  auStack_330._0_8_ = local_190._8_8_;
  local_318 = local_170;
  pTStack_310 = pTStack_168;
  uVar22 = local_190._24_8_ >> 0x20;
  uVar31 = local_190._28_4_;
  local_308 = (TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
               *)pTVar1;
  if ((int)uVar31 < *(int *)(local_190._16_8_ + 0x18)) {
LAB_14460d621:
    local_454.Id = *(uint *)(*local_338 + (longlong)(int)uVar22 * 0x10);
    if (local_e8._8_4_ != local_b4) {
      puVar24 = local_b0;
      if (local_a8 != (undefined1 *)0x0) {
        puVar24 = local_a8;
      }
      iVar15 = *(int *)(puVar24 + (ulonglong)(local_a0 - 1U & local_454.Id) * 4);
      while (iVar15 != -1) {
        lVar23 = local_e8._0_8_ + (longlong)iVar15 * 0x28;
        if (*(uint *)(local_e8._0_8_ + (longlong)iVar15 * 0x28) == local_454.Id) {
          lVar35 = lVar23 + 8;
          if (lVar23 == 0) {
            lVar35 = 0;
          }
          if (lVar35 != 0) {
            this_00 = &this->LastAccess;
            if (*(int *)&(this->LastAccess).field_0x8 == *(int *)&(this->LastAccess).field_0x34)
            goto LAB_14460d87e;
            puVar24 = *(undefined1 **)&(this->LastAccess).field_0x40;
            puVar26 = &(this->LastAccess).field_0x38;
            if (puVar24 != (undefined1 *)0x0) {
              puVar26 = puVar24;
            }
            iVar15 = *(int *)(puVar26 +
                             (ulonglong)(*(int *)&(this->LastAccess).field_0x48 - 1U & local_454.Id)
                             * 4);
            if (iVar15 == -1) goto LAB_14460d87e;
            goto LAB_14460d862;
          }
          break;
        }
        iVar15 = *(int *)(lVar23 + 0x20);
      }
    }
    GetBlockFilename(this,&local_208,local_454);
    FVar34.Data = local_208.Data.AllocatorInstance.Data;
    ::FString::PrintfImpl(&local_3a8,L"Missing CAS block \'%s\'");
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    if (*(int *)&(this->LastAccess).field_0x8 != *(int *)&(this->LastAccess).field_0x34) {
      TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::IoStore::FCasBlockId>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                  *)&this->LastAccess,local_454.Id,&local_454);
    }
    TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
    ::RemoveByIndex(pTStack_310,uVar31);
    local_300 = CONCAT11(local_300._1_1_,1);
    DVar14 = FWindowsPlatformMisc::GetLastError();
    pTVar18 = &UnifiedError::IoStoreOnDemand::MakeCasError<void>
                         ((TValueOrError<void,UE::UnifiedError::FError> *)&local_1a8,VerifyFailed,
                          NotFound,&local_3a8,DVar14)->Error;
    TOptional<UE::UnifiedError::FError>::operator=(&__return_storage_ptr__->Error,pTVar18);
    TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_1a8);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (FVar34.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar34.Data);
    }
    goto LAB_14460d790;
  }
LAB_14460dadf:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  local_2f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  local_2f8.UnvisitedBitMask = 0xffffffff;
  local_2f8._padding_._0_4_ = 0;
  local_2f8._padding_._4_4_ = (undefined4)uVar30;
  local_2f8.CurrentBitIndex = 0;
  local_2f8.BaseBitIndex = 0;
  if (local_c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f8);
  }
  uVar29 = local_c0;
  uStack_3f0 = CONCAT44(local_2f8._padding_._4_4_,(undefined4)local_2f8._padding_);
  local_3f8 = (longlong *)local_e8;
  uStack_3dc = local_2f8.CurrentBitIndex;
  uStack_3e0 = local_2f8.UnvisitedBitMask;
  uStack_3d4 = local_2f8._28_4_;
  iStack_3d8 = local_2f8.BaseBitIndex;
  local_3d0 = local_e8._8_4_ - local_b4;
  pTStack_3e8 = local_2f8.Array;
  uVar31 = local_c0 & 0xffffffe0;
  iVar15 = (int)local_c0 >> 5;
  bVar21 = (byte)local_c0;
  uStack_220 = CONCAT44(uStack_3cc,local_3d0);
  TStack_240.Array = local_2f8.Array;
  local_248 = local_3f8;
  TStack_240._padding_ = uStack_3f0;
  TStack_240._16_8_ = _uStack_3e0;
  TStack_240._24_8_ = _iStack_3d8;
  if (((int)local_c0 < 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar36)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar8)();
    return pTVar19;
  }
  pIVar11 = local_3c0;
  if (uVar29 != local_c0) {
    puVar24 = local_e8 + 0x10;
    if (local_c8 != (undefined1 *)0x0) {
      puVar24 = local_c8;
    }
    uVar29 = -1 << (bVar21 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar15 * 4);
    while (uVar29 == 0) {
      lVar23 = (longlong)iVar15;
      uVar31 = uVar31 + 0x20;
      iVar15 = iVar15 + 1;
      uVar29 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14460dca4;
      uVar29 = *(uint *)(puVar24 + lVar23 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_29c.Value._4_4_ = (int)lVar23;
    uVar29 = (uVar31 - 1) + local_29c.Value._4_4_;
    if ((int)local_c0 < (int)uVar29) {
      uVar29 = local_c0;
    }
  }
LAB_14460dca4:
  while( true ) {
    plVar27 = local_248;
    if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
      local_458[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_458);
    }
    if (((TStack_240.CurrentBitIndex == uVar29) &&
        (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar27 == (longlong *)local_e8)) break;
    FVar4.Id = *(uint *)(*plVar27 + (longlong)TStack_240.CurrentBitIndex * 0x28);
    if (*(int *)&(this->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
      puVar24 = *(undefined1 **)&(this->BlockIds).field_0x40;
      puVar26 = &(this->BlockIds).field_0x38;
      if (puVar24 != (undefined1 *)0x0) {
        puVar26 = puVar24;
      }
      iVar15 = *(int *)(puVar26 +
                       (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & FVar4.Id) * 4);
      if (iVar15 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->BlockIds + (longlong)iVar15 * 0x10) == FVar4.Id)
          goto LAB_14460ddc8;
          iVar15 = *(int *)(*(longlong *)&this->BlockIds + 8 + (longlong)iVar15 * 0x10);
        } while (iVar15 != -1);
      }
    }
    GetBlockFilename(this,&local_1f8,FVar4);
    FVar34.Data = local_1f8.Data.AllocatorInstance.Data;
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_1f8.Data.ArrayNum != 0) {
      FVar25.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    cVar13 = (**(code **)((longlong)*pIVar11 + 0x88))(pIVar11,FVar25.Data);
    if ((cVar13 != '\0') && (2 < (byte)LogIoStoreOnDemand._0_1_)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    if (FVar34.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar34.Data);
    }
LAB_14460ddc8:
    TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
  }
  local_6c = 0x80;
  pTVar2 = &this->Lookup;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_160,
             (TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_340 = 0;
  stack0xfffffffffffffc98 = local_160._16_16_;
  local_378 = (longlong *)local_160._0_8_;
  auStack_370._0_8_ = local_160._8_8_;
  local_358 = local_140;
  pTStack_350 = pTStack_138;
  uVar22 = local_160._24_8_ >> 0x20;
  this_03 = &(this->Mutex).State;
  local_348 = (TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
               *)pTVar2;
  if ((int)local_160._28_4_ < *(int *)(local_160._16_8_ + 0x18)) {
    this_04 = this;
    uVar31 = local_160._28_4_;
    do {
      plVar27 = local_378;
      uVar29 = *(uint *)((longlong)(int)uVar22 * 0x1c + 0xc + *local_378);
      if (*(int *)&(this_04->BlockIds).field_0x8 != *(int *)&(this->BlockIds).field_0x34) {
        puVar24 = *(undefined1 **)&(this->BlockIds).field_0x40;
        puVar26 = &(this->BlockIds).field_0x38;
        if (puVar24 != (undefined1 *)0x0) {
          puVar26 = puVar24;
        }
        iVar15 = *(int *)(puVar26 +
                         (ulonglong)(*(int *)&(this->BlockIds).field_0x48 - 1U & uVar29) * 4);
        if (iVar15 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this->BlockIds + (longlong)iVar15 * 0x10) == uVar29)
            goto LAB_14460e217;
            iVar15 = *(int *)(*(longlong *)&this->BlockIds + 8 + (longlong)iVar15 * 0x10);
          } while (iVar15 != -1);
        }
      }
      GetBlockFilename(this_04,&local_388,
                       (FCasBlockId)*(uint *)((longlong)(int)uVar31 * 0x1c + 0xc + *local_378));
      ::FString::PrintfImpl(&local_420,L"Missing CAS block \'%s\'");
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                 &local_28c,(bool *)&local_388);
      pTVar12 = local_2b8;
      pFVar28 = (FScriptContainerElement *)((longlong)(int)uVar31 * 0x1c + *plVar27);
      pFVar5 = (local_2b8->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar28) && (pFVar28 < pFVar5 + (longlong)local_2b8->ArrayMax * 0xc)) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar36)) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar8)();
        return pTVar19;
      }
      iVar15 = pTVar12->ArrayNum;
      if (iVar15 == pTVar12->ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
      }
      pTVar12->ArrayNum = iVar15 + 1;
      pFVar5 = (pTVar12->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar15 * 0xc) = *(undefined8 *)pFVar28;
      *(undefined4 *)(pFVar5 + (longlong)iVar15 * 0xc + 8) = *(undefined4 *)(pFVar28 + 8);
      TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_350,uVar31);
      local_340 = CONCAT11(local_340._1_1_,1);
      DVar14 = FWindowsPlatformMisc::GetLastError();
      FVar34.Data = local_420.Data.AllocatorInstance.Data;
      iVar15 = local_420.Data.ArrayNum;
      iVar10 = local_420.Data.ArrayMax;
      local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_420.Data.ArrayNum = 0;
      local_420.Data.ArrayMax = 0;
      TVar20 = UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorDetails();
      pIVar6 = (IErrorDetails *)(TVar20.Reference)->_padding_;
      if (pIVar6 == (IErrorDetails *)0x0) {
        iVar16 = UnifiedError::IoStoreOnDemand::CasError::GetErrorCodeId();
        local_448.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
        local_448.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_448.ErrorCode = iVar16;
      }
      else {
        (**(code **)((longlong)*pIVar6 + 8))
                  (pIVar6,(undefined1 *)((longlong)&local_28c.Data.AllocatorInstance.Data + 4));
        iVar16 = UnifiedError::IoStoreOnDemand::CasError::GetErrorCodeId();
        local_448.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
        local_448.ErrorCode = iVar16;
        local_448.ErrorDetails.Reference = pIVar6;
        (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_28c.Data.ArrayNum);
        (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
      }
      this_02 = ::operator_new(0x48);
      if (this_02 == (FDynamicErrorDetails *)0x0) {
        local_3b8 = (FDynamicErrorDetails *)0x0;
      }
      else {
        local_2b0 = 0;
        UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                  (this_02,(IErrorDetails *)&local_2b0);
        this_02->_padding_ =
             (longlong)
             &UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
              _vftable__for__UE__UnifiedError__IErrorDetails__;
        this_02[1]._padding_ = 0;
        this_02->_padding_ =
             (longlong)
             &UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
              _vftable__for__FRefCountBase__;
        this_02[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
        *(undefined1 *)&this_02[2]._padding_ = 5;
        *(undefined4 *)&this_02[1]._padding_ = 2;
        *(undefined4 *)((longlong)&this_02[1]._padding_ + 4) = 8;
        *(DWORD *)&this_02[1]._padding_ = DVar14;
        if (&this_02[1]._padding_ != (longlong *)local_120) {
          this_02[1]._padding_ = (longlong)FVar34.Data;
          *(int *)&this_02[1].InnerErrorDetails.Reference = iVar15;
          *(int *)((longlong)&this_02[1].InnerErrorDetails.Reference + 4) = iVar10;
          FVar34.Data = (FScriptContainerElement *)0x0;
        }
        *(undefined1 *)&this_02[2]._padding_ = 0xff;
        local_3b8 = this_02;
        (**(code **)(this_02->_padding_ + 8))(this_02,&local_28c.Data.ArrayMax);
      }
      UnifiedError::FError::PushErrorDetails(&local_448,(IErrorDetails *)&local_3b8);
      local_410.TypedValue.ErrorCode = local_448.ErrorCode;
      local_410.TypedValue.ModuleId = local_448.ModuleId;
      local_410.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_448.ErrorCode = 0;
      local_448.ModuleId = 0;
      if (local_448.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_410.TypedValue.ErrorDetails.Reference = local_448.ErrorDetails.Reference;
        (**(code **)((longlong)*local_448.ErrorDetails.Reference + 8))
                  (local_448.ErrorDetails.Reference,local_27c);
        TVar9.Reference = local_448.ErrorDetails.Reference;
        if (local_448.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_448.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar9.Reference + 0x10))();
        }
      }
      TVar9.Reference = local_448.ErrorDetails.Reference;
      local_410.bIsSet = true;
      local_448.ErrorCode = 0;
      local_448.ModuleId = 0;
      if (local_448.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_448.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar9.Reference + 0x10))();
        if (local_448.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_448.ErrorDetails.Reference + 0x10))();
        }
      }
      if (FVar34.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar34.Data);
      }
      TOptional<UE::UnifiedError::FError>::operator=(local_428,&local_410);
      if ((local_410.bIsSet != false) &&
         (local_410.TypedValue.ErrorCode = 0, local_410.TypedValue.ModuleId = 0,
         local_410.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        IVar7 = *local_410.TypedValue.ErrorDetails.Reference;
        local_410.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)IVar7 + 0x10))();
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
      this_04 = local_3b0;
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
        this_04 = local_3b0;
      }
LAB_14460e217:
      uStack_360 = uStack_360 & ~auStack_370._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_370);
      this_03 = (atomic<unsigned_char> *)local_29c._4_8_;
      uVar22 = (ulonglong)uStack_35c;
      uVar31 = uStack_35c;
    } while ((int)uStack_35c < *(int *)(auStack_370._8_8_ + 0x18));
    if (((char)local_340 != '\0') && (local_340._1_1_ != '\0')) {
      uVar32 = *(int *)&(local_348->Elements).field_0x8 - *(int *)&(local_348->Elements).field_0x34;
      uVar31 = (uint)local_450;
      uVar29 = uVar31;
      if (3 < uVar32) {
        uVar22 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_2d8 = (undefined4)lVar23;
        uVar29 = uVar31 << ((byte)lVar23 & 0x1f);
      }
      if (((0 < (int)uVar32) && (local_348->HashSize < (int)uVar29)) ||
         ((int)uVar29 < local_348->HashSize)) {
        local_348->HashSize = uVar29;
        TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
        ::Rehash(local_348);
      }
      goto LAB_14460e2b3;
    }
  }
  uVar31 = (uint)local_450;
LAB_14460e2b3:
  uVar29 = local_70;
  iVar15 = 0;
  iStack_3d8 = 0;
  uStack_3dc = 0;
  if (local_70 != 0) {
    puVar33 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar33 = local_78;
    }
    uVar32 = *puVar33;
    iStack_3d8 = 0;
    while (uVar32 == 0) {
      lVar23 = (longlong)iVar15;
      iStack_3d8 = iStack_3d8 + 0x20;
      iVar15 = iVar15 + 1;
      uStack_3dc = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14460e343;
      uVar32 = puVar33[lVar23 + 1];
    }
    uVar31 = -uVar32 & uVar32;
    uVar22 = (ulonglong)uVar31 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_2d4 = (int)lVar23;
    uStack_3dc = iStack_3d8 + -1 + local_2d4;
    if ((int)local_70 < (int)uStack_3dc) {
      uStack_3dc = local_70;
    }
  }
LAB_14460e343:
  local_3f8 = (longlong *)local_98;
  uVar32 = local_70 & 0xffffffe0;
  pTStack_3e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_3d0 = local_98._8_4_ - local_64;
  uStack_3e0 = 0xffffffff;
  uStack_3f0 = CONCAT44(uVar31,iVar15);
  uStack_3d4 = local_f4;
  TStack_270._padding_ = uStack_3f0;
  iVar15 = (int)local_70 >> 5;
  uStack_250 = CONCAT44(uStack_3cc,local_3d0);
  bVar21 = (byte)local_70;
  TStack_270.UnvisitedBitMask = 0xffffffff;
  TStack_270.CurrentBitIndex = uStack_3dc;
  TStack_270.BaseBitIndex = iStack_3d8;
  TStack_270._28_4_ = local_f4;
  local_278 = (undefined1 *)local_3f8;
  TStack_270.Array = pTStack_3e8;
  if (((int)local_70 < 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar36)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar8)();
    return pTVar19;
  }
  if (uVar29 != local_70) {
    puVar33 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar33 = local_78;
    }
    uVar31 = -1 << (bVar21 & 0x1f) & puVar33[iVar15];
    while (uVar31 == 0) {
      lVar23 = (longlong)iVar15;
      uVar32 = uVar32 + 0x20;
      iVar15 = iVar15 + 1;
      uVar29 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14460e460;
      uVar31 = puVar33[lVar23 + 1];
    }
    uVar22 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar29 = (uVar32 - 1) + (int)lVar23;
    if ((int)local_70 < (int)uVar29) {
      uVar29 = local_70;
    }
  }
LAB_14460e460:
  while( true ) {
    puVar24 = local_278;
    if (*(int *)(local_278 + 8) - *(int *)(local_278 + 0x34) != (int)uStack_250) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_438);
    }
    if (((TStack_270.CurrentBitIndex == uVar29) &&
        (TStack_270.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (puVar24 == local_98)) break;
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  LOCK();
  aVar3 = *this_03;
  *this_03 = (atomic<unsigned_char>)((char)*this_03 + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)this_03);
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return (TValueOrError<void,UE::UnifiedError::FError> *)local_428;
  while (iVar15 = *(int *)(lVar23 + 0x10), iVar15 != -1) {
LAB_14460d862:
    lVar23 = *(longlong *)&this_00->field_0x0 + (longlong)iVar15 * 0x18;
    if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar15 * 0x18) == local_454.Id) {
      plVar27 = (longlong *)(lVar23 + 8);
      if (lVar23 == 0) {
        plVar27 = (longlong *)0x0;
      }
      if (plVar27 != (longlong *)0x0) {
        if (local_430 < *plVar27) {
          GetBlockFilename(this,&local_1e8,local_454);
          FVar34.Data = local_1e8.Data.AllocatorInstance.Data;
          if (2 < (byte)LogIoStoreOnDemand._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
          *plVar27 = local_430;
          if (FVar34.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar34.Data);
          }
        }
        goto LAB_14460d790;
      }
      break;
    }
  }
LAB_14460d87e:
  GetBlockFilename(this,&local_398,local_454);
  FVar34.Data = local_398.Data.AllocatorInstance.Data;
  FVar25.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar25.Data = local_398.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar11 + 0xb0))(pIVar11,&local_3c8,FVar25.Data);
  if (local_3c8 < 1) {
    bVar36 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4406625557953903950>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                        ,0x2b2,"ModTime > FDateTime::MinValue()");
    if (bVar36) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar8)();
      return pTVar19;
    }
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    local_1d8 = &local_454;
    local_1d0 = &local_2c8;
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> *)local_2a4,
               (bool *)&local_1d8);
  }
  else if (local_430 < local_3c8) {
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    local_1c8 = &local_454;
    local_1c0 = &local_430;
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> *)(local_2a4 + 4)
               ,(bool *)&local_1c8);
  }
  else {
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    local_2c0 = local_3c8;
    local_218 = &local_454;
    local_210 = &local_2c0;
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_&&>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)this_00,&local_29c,(bool *)&local_218);
  }
  __return_storage_ptr__ = (TValueOrError<void,UE::UnifiedError::FError> *)local_428;
  if (FVar34.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar34.Data);
    __return_storage_ptr__ = (TValueOrError<void,UE::UnifiedError::FError> *)local_428;
  }
LAB_14460d790:
  uStack_320 = uStack_320 & ~auStack_330._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_330);
  uVar30 = local_450;
  uVar22 = (ulonglong)uStack_31c;
  uVar31 = uStack_31c;
  if (*(int *)(auStack_330._8_8_ + 0x18) <= (int)uStack_31c) goto code_r0x00014460d7bc;
  goto LAB_14460d621;
code_r0x00014460d7bc:
  if (((char)local_300 != '\0') && (local_300._1_1_ != '\0')) {
    uVar31 = *(int *)&(local_308->Elements).field_0x8 - *(int *)&(local_308->Elements).field_0x34;
    iVar15 = (int)local_450;
    if (3 < uVar31) {
      uVar22 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_2a8 = (undefined4)lVar23;
      iVar15 = iVar15 << ((byte)lVar23 & 0x1f);
    }
    if (((0 < (int)uVar31) && (local_308->HashSize < iVar15)) || (iVar15 < local_308->HashSize)) {
      local_308->HashSize = iVar15;
      TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
      ::Rehash(local_308);
    }
  }
  goto LAB_14460dadf;
}

