// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 15

// FChunkCacheWorker @ 142a51150

/* WARNING: Enum "EVersion": Some values do not have unique names */

FChunkCacheWorker * __thiscall
FChunkCacheWorker::FChunkCacheWorker
          (FChunkCacheWorker *this,TUniquePtr<FArchive,TDefaultDelete<FArchive>_> param_1,
          wchar_t *param_2)

{
  TSharedPtr<FPakSignatureFile_const_,1> *pTVar1;
  undefined8 *puVar2;
  bool bVar3;
  uchar *puVar4;
  TSharedPtr<FPakSignatureFile_const_,1> *pTVar5;
  FEvent *pFVar6;
  FRunnableThread *pFVar7;
  TSharedPtr<FPakSignatureFile_const_,1> local_28;
  
  pTVar1 = &this->Signatures;
  pTVar1->Object = (FPakSignatureFile *)0x0;
  (this->Signatures).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Thread = (FRunnableThread *)0x0;
  this->_padding_ = (longlong)&___7FChunkCacheWorker__6B_;
                    /* WARNING: Load size is inaccurate */
  (this->Reader).Ptr = *param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  this->CachedChunks[0].Data = (uchar *)0x0;
  this->CachedChunks[0].LockCount = 0;
  this->CachedChunks[0].ChunkIndex = -1;
  this->CachedChunks[0].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[0].Data = puVar4;
  this->CachedChunks[1].Data = (uchar *)0x0;
  this->CachedChunks[1].LockCount = 0;
  this->CachedChunks[1].ChunkIndex = -1;
  this->CachedChunks[1].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[1].Data = puVar4;
  this->CachedChunks[2].Data = (uchar *)0x0;
  this->CachedChunks[2].LockCount = 0;
  this->CachedChunks[2].ChunkIndex = -1;
  this->CachedChunks[2].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[2].Data = puVar4;
  this->CachedChunks[3].Data = (uchar *)0x0;
  this->CachedChunks[3].LockCount = 0;
  this->CachedChunks[3].ChunkIndex = -1;
  this->CachedChunks[3].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[3].Data = puVar4;
  this->CachedChunks[4].Data = (uchar *)0x0;
  this->CachedChunks[4].LockCount = 0;
  this->CachedChunks[4].ChunkIndex = -1;
  this->CachedChunks[4].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[4].Data = puVar4;
  this->CachedChunks[5].Data = (uchar *)0x0;
  this->CachedChunks[5].LockCount = 0;
  this->CachedChunks[5].ChunkIndex = -1;
  this->CachedChunks[5].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[5].Data = puVar4;
  this->CachedChunks[6].Data = (uchar *)0x0;
  this->CachedChunks[6].LockCount = 0;
  this->CachedChunks[6].ChunkIndex = -1;
  this->CachedChunks[6].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[6].Data = puVar4;
  this->CachedChunks[7].Data = (uchar *)0x0;
  this->CachedChunks[7].LockCount = 0;
  this->CachedChunks[7].ChunkIndex = -1;
  this->CachedChunks[7].LastAccessTime = 0.0;
  puVar4 = FMemory::Malloc(0x10000,0);
  this->CachedChunks[7].Data = puVar4;
  (this->RequestQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).ArrayNum = 0;
  (this->RequestQueue).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueueLock,4000);
  (this->PendingQueueCounter).Counter = 0;
  this->QueuedRequestsEvent = (FEvent *)0x0;
  (this->ActiveRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRequests).ArrayNum = 0;
  (this->ActiveRequests).ArrayMax = 0;
  (this->StopTaskCounter).Counter = 0;
  *(undefined8 *)&this->FreeChunkRequests = 0;
  *(undefined8 *)&this->FreeChunkRequests = 0;
  *(undefined8 *)&this->EventsToRelease = 0;
  *(undefined8 *)&this->EventsToRelease = 0;
  pTVar5 = FPakPlatformFile::GetPakSignatureFile(&local_28,param_2);
  if (pTVar1 != pTVar5) {
    pTVar1->Object = pTVar5->Object;
    pTVar5->Object = (FPakSignatureFile *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Signatures).SharedReferenceCount,&pTVar5->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar1->Object != (FPakSignatureFile *)0x0) {
    bVar3 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar3) {
      pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      this->QueuedRequestsEvent = pFVar6;
      pFVar7 = FRunnableThread::Create
                         ((FRunnable *)this,L"FChunkCacheWorker",0,TPri_BelowNormal,
                          0xffffffffffffffff,None);
      this->Thread = pFVar7;
    }
  }
  puVar2 = *(undefined8 **)param_1.Ptr;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~FChunkCacheWorker @ 142a55cb0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FChunkCacheWorker::~FChunkCacheWorker(FChunkCacheWorker *this)

{
  FChunkBuffer *pFVar1;
  FRunnableThread *pFVar2;
  FScriptContainerElement *pFVar3;
  FArchive *pFVar4;
  FChunkBuffer *pFVar5;
  longlong lVar6;
  
  this->_padding_ = (longlong)&___7FChunkCacheWorker__6B_;
  pFVar2 = this->Thread;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  if (this->QueuedRequestsEvent != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->QueuedRequestsEvent);
    this->QueuedRequestsEvent = (FEvent *)0x0;
  }
  FLockFreePointerListLIFOBase<FEvent,64,1>::~FLockFreePointerListLIFOBase<FEvent,64,1>
            ((FLockFreePointerListLIFOBase<FEvent,64,1> *)&this->EventsToRelease);
  FLockFreePointerListLIFOBase<FChunkRequest,64,1>::
  ~FLockFreePointerListLIFOBase<FChunkRequest,64,1>
            ((FLockFreePointerListLIFOBase<FChunkRequest,64,1> *)&this->FreeChunkRequests);
  pFVar3 = (this->ActiveRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  pFVar5 = (FChunkBuffer *)&this->RequestQueue;
  pFVar3 = (((TArray<FChunkRequest_*,TSizedDefaultAllocator<32>_> *)pFVar5)->AllocatorInstance).Data
  ;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lVar6 = 8;
  do {
    pFVar1 = pFVar5 + -1;
    pFVar5 = pFVar5 + -1;
    FMemory::Free(pFVar1->Data);
    pFVar5->Data = (uchar *)0x0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pFVar4 = (this->Reader).Ptr;
  if (pFVar4 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Signatures).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// AcquireNotificationEvent @ 142a5c350

/* WARNING: Enum "EVersion": Some values do not have unique names */

FEvent * __thiscall FChunkCacheWorker::AcquireNotificationEvent(FChunkCacheWorker *this)

{
  FEvent *pFVar1;
  
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  return pFVar1;
}

// CheckSignature @ 142a62bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FChunkCacheWorker::CheckSignature(FChunkCacheWorker *this,FChunkRequest *param_1)

{
  FPakSignatureFile *pFVar1;
  FArchive *pFVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_HashBuffer> FVar14;
  FString *pFVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStackY_1c8 [32];
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  FPakSignatureFile *local_148;
  FString local_140;
  FString local_130;
  FPakChunkSignatureCheckFailedData local_120;
  FSimpleScopeSecondsStat local_100;
  FSimpleScopeSecondsStat local_e0;
  FSimpleScopeSecondsStat local_c0;
  FName local_a0;
  FName local_98;
  FName local_90;
  void *local_88 [2];
  longlong local_78;
  longlong lStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar18 = 0;
  local_c0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_FChunkCacheWorker_CheckSignature;
  if (StatPtr_STAT_FChunkCacheWorker_CheckSignature ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_CheckSignature>)0x0) {
    pFVar13 = ::FName::FName(&local_a0,"STAT_FChunkCacheWorker_CheckSignature");
    local_c0.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_CheckSignature,
                    *pFVar13,L"FChunkCacheWorker.CheckSignature","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_c0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_160);
  dVar7 = __real_4170000000000000;
  dVar6 = __real_3ff0000000000000;
  bVar10 = false;
  local_c0.Scale = __real_3ff0000000000000;
  local_c0.StartTime =
       (double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (((this->Signatures).Object == (FPakSignatureFile *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Signatures.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x102,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pFVar1 = (this->Signatures).Object;
  if ((pFVar1 == (FPakSignatureFile *)0x0) || ((pFVar1->ChunkHashes).ArrayNum < 1)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_591433832931000059>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                       ,0x105,"IsValid()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    memset(param_1->Buffer->Data,0xcd,param_1->Size);
  }
  else {
    local_100.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_FChunkCacheWorker_Serialize;
    if (StatPtr_STAT_FChunkCacheWorker_Serialize ==
        (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_Serialize>)0x0) {
      pFVar13 = ::FName::FName(&local_98,"STAT_FChunkCacheWorker_Serialize");
      local_100.StatId.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_Serialize,
                      *pFVar13,L"FChunkCacheWorker.Serialize","STATGROUP_PakFile","STATCAT_Advanced"
                      ,L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
    }
    local_100._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
    QueryPerformanceCounter(&local_158);
    pFVar2 = (this->Reader).Ptr;
    local_100.Scale = dVar6;
    local_100.StartTime = (double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7
    ;
    (**(code **)(*(longlong *)pFVar2 + 0x1b8))(pFVar2,param_1->Offset);
    pFVar2 = (this->Reader).Ptr;
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_1->Buffer->Data,param_1->Size);
    FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_100);
    FVar14 = StatPtr_STAT_FChunkCacheWorker_HashBuffer;
    if (StatPtr_STAT_FChunkCacheWorker_HashBuffer ==
        (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_HashBuffer>)0x0) {
      pFVar13 = ::FName::FName(&local_90,"STAT_FChunkCacheWorker_HashBuffer");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_HashBuffer>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_HashBuffer,
                          *pFVar13,L"FChunkCacheWorker.HashBuffer","STATGROUP_PakFile",
                          "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid)
      ;
    }
    local_e0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
    QueryPerformanceCounter(&local_150);
    puVar3 = param_1->Buffer->Data;
    iVar17 = (int)param_1->Size;
    local_e0.Scale = dVar6;
    local_e0.StartTime = (double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
    local_e0.StatId.StatIdPtr = (TStatIdData *)FVar14;
    if ((param_1->Size != (longlong)iVar17) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar10
       )) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar11 = (*FCrc::MemCrc32Func)(puVar3,iVar17,0);
    FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_e0);
    pFVar1 = (this->Signatures).Object;
    if ((pFVar1 != (FPakSignatureFile *)0x0) && (0 < (pFVar1->ChunkHashes).ArrayNum)) {
      uVar16 = param_1->Index;
      uVar12 = uVar18;
      if ((int)uVar16 < (pFVar1->ChunkHashes).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      if (uVar11 == *(uint *)((pFVar1->ChunkHashes).AllocatorInstance.Data +
                             (longlong)(int)uVar16 * 4)) {
        bVar10 = true;
        goto LAB_142a63239;
      }
    }
    bVar10 = false;
    if (2 < (byte)LogPakFile._0_1_) {
      ::FString::PrintfImpl(&local_130,L"%08X");
      local_148 = TSharedPtr<FPakSignatureFile_const_,1>::operator->(&this->Signatures);
      uVar16 = uVar18;
      if (param_1->Index < (local_148->ChunkHashes).ArrayNum) {
        uVar16 = (uint)~param_1->Index >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      ::FString::PrintfImpl(&local_140,L"%08X");
      TSharedPtr<FPakSignatureFile_const_,1>::operator->(&this->Signatures);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    if (((this->Signatures).Object == (FPakSignatureFile *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar1 = (this->Signatures).Object;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    FSHA1::HashBuffer((pFVar1->ChunkHashes).AllocatorInstance.Data,
                      (longlong)(pFVar1->ChunkHashes).ArrayNum << 2,(uchar *)&local_78);
    if (((this->Signatures).Object == (FPakSignatureFile *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar1 = (this->Signatures).Object;
    if ((((*(longlong *)(pFVar1->DecryptedHash).Hash != local_78) ||
         (*(longlong *)((pFVar1->DecryptedHash).Hash + 8) != lStack_70)) ||
        (*(int *)((pFVar1->DecryptedHash).Hash + 0x10) != local_68)) && (2 < (byte)LogPakFile._0_1_)
       ) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    iVar17 = param_1->Index;
    if (((this->Signatures).Object == (FPakSignatureFile *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar16 = param_1->Index;
    pFVar1 = (this->Signatures).Object;
    if ((int)uVar16 < (pFVar1->ChunkHashes).ArrayNum) {
      uVar18 = ~uVar16 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar2 = (this->Reader).Ptr;
    pFVar4 = (pFVar1->ChunkHashes).AllocatorInstance.Data;
    pFVar15 = (FString *)(**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,local_88);
    ::FString::FString(&local_120.PakFilename,pFVar15);
    local_120.ExpectedHash = *(uint *)(pFVar4 + (longlong)(int)uVar16 * 4);
    local_120.ChunkIndex = iVar17;
    local_120.ReceivedHash = uVar11;
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    FPakPlatformFile::BroadcastPakChunkSignatureCheckFailure(&local_120);
    if (local_120.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.PakFilename.Data.AllocatorInstance.Data);
    }
  }
LAB_142a63239:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_c0);
  return bVar10;
}

// GetCachedChunkBuffer @ 142a72680

/* WARNING: Enum "EVersion": Some values do not have unique names */

FChunkBuffer * __thiscall
FChunkCacheWorker::GetCachedChunkBuffer(FChunkCacheWorker *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  LARGE_INTEGER local_res18 [2];
  
  uVar2 = 0;
  piVar1 = &this->CachedChunks[0].ChunkIndex;
  uVar4 = uVar2;
  do {
    iVar3 = (int)uVar4;
    if (*piVar1 == param_1) {
      piVar1 = &this->CachedChunks[iVar3].LockCount;
      *piVar1 = *piVar1 + 1;
      QueryPerformanceCounter(local_res18);
      this->CachedChunks[iVar3].LastAccessTime =
           (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      return this->CachedChunks + iVar3;
    }
    uVar4 = (ulonglong)(iVar3 + 1);
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 6;
  } while ((longlong)uVar2 < 8);
  return (FChunkBuffer *)0x0;
}

// GetFreeBuffer @ 142a74e30

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FChunkBuffer * __thiscall FChunkCacheWorker::GetFreeBuffer(FChunkCacheWorker *this)

{
  FName *pFVar1;
  FChunkBuffer *pFVar2;
  LARGE_INTEGER local_res10;
  FSimpleScopeSecondsStat local_28;
  
  local_28.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer;
  if (StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_GetFreeBuffer>)0x0) {
    pFVar1 = ::FName::FName((FName *)&local_res10.s,"STAT_FChunkCacheWorker_GetFreeBuffer");
    local_28.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_GetFreeBuffer,
                    *pFVar1,L"FChunkCacheWorker.GetFreeBuffer","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_28._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_res10);
  pFVar2 = this->CachedChunks;
  if (this->CachedChunks[0].LockCount != 0) {
    pFVar2 = (FChunkBuffer *)0x0;
  }
  local_28.StartTime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  local_28.Scale = __real_3ff0000000000000;
  if ((this->CachedChunks[1].LockCount == 0) &&
     ((pFVar2 == (FChunkBuffer *)0x0 ||
      (this->CachedChunks[1].LastAccessTime < pFVar2->LastAccessTime)))) {
    pFVar2 = this->CachedChunks + 1;
  }
  if ((this->CachedChunks[2].LockCount == 0) &&
     ((pFVar2 == (FChunkBuffer *)0x0 ||
      (this->CachedChunks[2].LastAccessTime < pFVar2->LastAccessTime)))) {
    pFVar2 = this->CachedChunks + 2;
  }
  if ((this->CachedChunks[3].LockCount == 0) &&
     ((pFVar2 == (FChunkBuffer *)0x0 ||
      (this->CachedChunks[3].LastAccessTime < pFVar2->LastAccessTime)))) {
    pFVar2 = this->CachedChunks + 3;
  }
  if ((this->CachedChunks[4].LockCount == 0) &&
     ((pFVar2 == (FChunkBuffer *)0x0 ||
      (this->CachedChunks[4].LastAccessTime < pFVar2->LastAccessTime)))) {
    pFVar2 = this->CachedChunks + 4;
  }
  if ((this->CachedChunks[5].LockCount == 0) &&
     ((pFVar2 == (FChunkBuffer *)0x0 ||
      (this->CachedChunks[5].LastAccessTime < pFVar2->LastAccessTime)))) {
    pFVar2 = this->CachedChunks + 5;
  }
  if ((this->CachedChunks[6].LockCount == 0) &&
     ((pFVar2 == (FChunkBuffer *)0x0 ||
      (this->CachedChunks[6].LastAccessTime < pFVar2->LastAccessTime)))) {
    pFVar2 = this->CachedChunks + 6;
  }
  if (this->CachedChunks[7].LockCount == 0) {
    if ((pFVar2 == (FChunkBuffer *)0x0) ||
       (this->CachedChunks[7].LastAccessTime < pFVar2->LastAccessTime)) {
      pFVar2 = this->CachedChunks + 7;
      goto LAB_142a74ffd;
    }
  }
  else {
LAB_142a74ffd:
    if (pFVar2 == (FChunkBuffer *)0x0) goto LAB_142a75035;
  }
  pFVar2->LockCount = pFVar2->LockCount + 1;
  QueryPerformanceCounter(&local_res10);
  pFVar2->LastAccessTime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
LAB_142a75035:
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_28);
  return pFVar2;
}

// Init @ 142a7c2e0

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FChunkCacheWorker::Init(FChunkCacheWorker *this)

{
  return true;
}

// IsValid @ 142a7f880

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FChunkCacheWorker::IsValid(FChunkCacheWorker *this)

{
  FPakSignatureFile *pFVar1;
  
  pFVar1 = (this->Signatures).Object;
  if ((pFVar1 != (FPakSignatureFile *)0x0) && (0 < (pFVar1->ChunkHashes).ArrayNum)) {
    return true;
  }
  return false;
}

// ProcessQueue @ 142a8be10

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FChunkCacheWorker::ProcessQueue(FChunkCacheWorker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FChunkRequest_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FChunkRequest_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FName FVar3;
  atomic<void_*> aVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueue> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueueWithWork> FVar17;
  FIndexedLockFreeLink *pFVar18;
  int *piVar19;
  FChunkBuffer *pFVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  LARGE_INTEGER local_108;
  FName local_100;
  LARGE_INTEGER local_f8;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FSimpleScopeSecondsStat local_d0;
  FSimpleScopeSecondsStat local_b0;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78 [7];
  
  local_b0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_FChunkCacheWorker_ProcessQueue;
  if (StatPtr_STAT_FChunkCacheWorker_ProcessQueue ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_ProcessQueue>)0x0) {
    pFVar13 = ::FName::FName(&local_90,"STAT_FChunkCacheWorker_ProcessQueue");
    local_b0.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_ProcessQueue,
                    *pFVar13,L"FChunkCacheWorker.ProcessQueue","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_b0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_res18);
  dVar7 = __real_4170000000000000;
  dVar6 = __real_3ff0000000000000;
  local_b0.Scale = __real_3ff0000000000000;
  local_b0.StartTime =
       (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  FVar14 = StatPtr_STAT_FChunkCacheWorker_NumProcessQueue;
  if (StatPtr_STAT_FChunkCacheWorker_NumProcessQueue ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueue>)0x0) {
    pFVar13 = ::FName::FName(&local_88,"STAT_FChunkCacheWorker_NumProcessQueue");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueue>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_NumProcessQueue
                        ,*pFVar13,L"FChunkCacheWorker.NumProcessQueues","STATGROUP_PakFile",
                        "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar14;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    local_f0.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_f0.StatData.Pad[0] = '\x01';
    local_f0.StatData.Pad[1] = '\0';
    local_f0.StatData.Pad[2] = '\0';
    local_f0.StatData.Pad[3] = '\0';
    local_f0.StatData.Pad[4] = '\0';
    local_f0.StatData.Pad[5] = '\0';
    local_f0.StatData.Pad[6] = '\0';
    local_f0.StatData.Pad[7] = '\0';
    local_res20 = FVar3;
    local_f0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar15,&local_f0);
    FStatsTrace::Add(&local_res20,1);
    if (pFVar15->ScopeCount == 0) {
      FThreadStats::Flush(pFVar15,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar15,false,false);
    }
  }
  if (0 < (this->PendingQueueCounter).Counter) {
    local_d0.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate;
    if (StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate ==
        (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_RequestQueueUpdate>)0x0) {
      pFVar13 = ::FName::FName(&local_80,"STAT_FChunkCacheWorker_RequestQueueUpdate");
      local_d0.StatId.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_FChunkCacheWorker_RequestQueueUpdate,*pFVar13,
                      L"FChunkCacheWorker.RequestQueueUpdate","STATGROUP_PakFile","STATCAT_Advanced"
                      ,L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
    }
    local_d0._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
    QueryPerformanceCounter(&local_108);
    local_d0.Scale = dVar6;
    lpCriticalSection = &this->QueueLock;
    local_d0.StartTime = (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->ActiveRequests;
    pTVar2 = &this->RequestQueue;
    if ((pTVar1 == pTVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    iVar10 = (this->RequestQueue).ArrayNum;
    if (iVar10 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar10,&pTVar1->AllocatorInstance,&(this->ActiveRequests).ArrayNum,
                          &(this->ActiveRequests).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8,
             (pTVar2->AllocatorInstance).Data,(longlong)iVar10 << 3);
    }
    LOCK();
    (this->PendingQueueCounter).Counter =
         (this->PendingQueueCounter).Counter - (this->RequestQueue).ArrayNum;
    UNLOCK();
    piVar19 = &(this->RequestQueue).ArrayMax;
    (this->RequestQueue).ArrayNum = 0;
    if (*piVar19 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar19);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_d0);
  }
  iVar10 = (this->ActiveRequests).ArrayNum;
  if (iVar10 != 0) {
    FVar17 = StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork;
    if (StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork ==
        (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueueWithWork>)0x0) {
      pFVar13 = ::FName::FName(local_78,"STAT_FChunkCacheWorker_NumProcessQueueWithWork");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_NumProcessQueueWithWork>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FChunkCacheWorker_NumProcessQueueWithWork,*pFVar13,
                          L"FChunkCacheWorker.NumProcessQueuesWithWork","STATGROUP_PakFile",
                          "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid
                         );
    }
    FVar3 = *(FName *)FVar17;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_e0.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_e0.StatData.Pad[0] = '\x01';
      local_e0.StatData.Pad[1] = '\0';
      local_e0.StatData.Pad[2] = '\0';
      local_e0.StatData.Pad[3] = '\0';
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_100 = FVar3;
      local_e0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_e0);
      FStatsTrace::Add(&local_100,1);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  bVar8 = false;
  uVar23 = 0;
  if (0 < (this->ActiveRequests).ArrayNum) {
    pTVar1 = &this->ActiveRequests;
    local_res10 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar23 < (this->ActiveRequests).ArrayNum) {
        uVar12 = uVar22;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      aVar4 = *(atomic<void_*> *)((pTVar1->AllocatorInstance).Data + local_res10);
      if (((FThreadSafeCounter *)((longlong)aVar4 + 0x24))->Counter == 0) {
        ReleaseBuffer(this,*(int *)aVar4);
        local_res10 = local_res10 + -8;
        uVar12 = 0;
        if ((int)uVar23 < (this->ActiveRequests).ArrayNum) {
          uVar12 = uVar22;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar23 * 8;
        iVar11 = (this->ActiveRequests).ArrayNum + ~uVar23;
        if (iVar11 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar11 << 3);
        }
        piVar19 = &(this->ActiveRequests).ArrayNum;
        *piVar19 = *piVar19 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,(this->ActiveRequests).ArrayNum,
                   &(this->ActiveRequests).ArrayMax);
        uVar12 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar12 == 0) {
          pFVar18 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar18 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar12 >> 0xe] + (uVar12 & 0x3fff);
        }
        pFVar18->Payload = aVar4;
        FLockFreePointerListLIFORoot<64,1>::Push
                  ((FLockFreePointerListLIFORoot<64,1> *)&this->FreeChunkRequests,uVar12);
        bVar8 = true;
        uVar23 = uVar23 - 1;
      }
      else if (*(FChunkBuffer **)((longlong)aVar4 + 0x18) == (FChunkBuffer *)0x0) {
        piVar19 = &this->CachedChunks[0].ChunkIndex;
        iVar11 = 0;
        lVar21 = 0;
        do {
          if (*piVar19 == *(int *)aVar4) {
            piVar19 = &this->CachedChunks[lVar21].LockCount;
            *piVar19 = *piVar19 + 1;
            QueryPerformanceCounter(&local_f8);
            this->CachedChunks[lVar21].LastAccessTime =
                 (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
            pFVar20 = this->CachedChunks + iVar11;
            if (pFVar20 != (FChunkBuffer *)0x0) {
              *(FChunkBuffer **)((longlong)aVar4 + 0x18) = pFVar20;
              goto LAB_142a8c50a;
            }
            break;
          }
          iVar11 = iVar11 + 1;
          lVar21 = lVar21 + 1;
          piVar19 = piVar19 + 6;
        } while (lVar21 < 8);
        pFVar20 = GetFreeBuffer(this);
        if (pFVar20 != (FChunkBuffer *)0x0) {
          bVar8 = false;
          pFVar20->ChunkIndex = *(int *)aVar4;
          *(FChunkBuffer **)((longlong)aVar4 + 0x18) = pFVar20;
          CheckSignature(this,(FChunkRequest *)aVar4);
LAB_142a8c50a:
          if ((*(FChunkBuffer **)((longlong)aVar4 + 0x18) != pFVar20) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Request.Buffer == CachedBuffer",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                                 ,0xdf,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          LOCK();
          ((FThreadSafeCounter *)((longlong)aVar4 + 0x24))->Counter =
               ((FThreadSafeCounter *)((longlong)aVar4 + 0x24))->Counter + -1;
          UNLOCK();
          LOCK();
          ((FThreadSafeCounter *)((longlong)aVar4 + 0x20))->Counter =
               ((FThreadSafeCounter *)((longlong)aVar4 + 0x20))->Counter + 1;
          UNLOCK();
          if (*(FEvent **)((longlong)aVar4 + 0x28) != (FEvent *)0x0) {
            (**(code **)((*(FEvent **)((longlong)aVar4 + 0x28))->_padding_ + 0x10))();
          }
        }
      }
      uVar23 = uVar23 + 1;
      local_res10 = local_res10 + 8;
    } while ((int)uVar23 < (this->ActiveRequests).ArrayNum);
    if ((bVar8) && (this->QueuedRequestsEvent != (FEvent *)0x0)) {
      (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x10))();
    }
  }
  if ((*(ulonglong *)&this->EventsToRelease & 0x3ffffff) != 0) {
    while (uVar23 = FLockFreePointerListLIFORoot<64,1>::Pop
                              ((FLockFreePointerListLIFORoot<64,1> *)&this->EventsToRelease),
          uVar23 != 0) {
      aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar23 >> 0xe][uVar23 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar23);
      if (aVar4 == (atomic<void_*>)0x0) break;
      FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)aVar4);
    }
  }
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_b0);
  return iVar10;
}

// ReleaseBuffer @ 142a95e50

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChunkCacheWorker::ReleaseBuffer(FChunkCacheWorker *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  LARGE_INTEGER local_res20;
  FName local_38;
  FSimpleScopeSecondsStat local_30;
  
  local_30.StatId.StatIdPtr = (TStatIdData *)StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer;
  if (StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_FChunkCacheWorker_ReleaseBuffer>)0x0) {
    pFVar4 = ::FName::FName(&local_38,"STAT_FChunkCacheWorker_ReleaseBuffer");
    local_30.StatId.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FChunkCacheWorker_ReleaseBuffer,
                    *pFVar4,L"FChunkCacheWorker.ReleaseBuffer","STATGROUP_PakFile",
                    "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,MCR_Invalid);
  }
  local_30._padding_ = (longlong)&___7FSimpleScopeSecondsStat__6B_;
  QueryPerformanceCounter(&local_res20);
  local_30.StartTime =
       (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  local_30.Scale = __real_3ff0000000000000;
  if (this->CachedChunks[0].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[0].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[1].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[1].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[2].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[2].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[3].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[3].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[4].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[4].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[5].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[5].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[6].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[6].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->CachedChunks[7].ChunkIndex == param_1) {
    piVar1 = &this->CachedChunks[7].LockCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedChunks[BufferIndex].LockCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x88,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FSimpleScopeSecondsStat::~FSimpleScopeSecondsStat(&local_30);
  return;
}

// ReleaseChunk @ 142a96100

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FChunkCacheWorker::ReleaseChunk(FChunkCacheWorker *this,FChunkRequest *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  
  LOCK();
  pFVar1 = &param_1->RefCount;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if ((iVar2 == 1) && (this->QueuedRequestsEvent != (FEvent *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142a9611e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// ReleaseNotificationEvent @ 142a96740

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FChunkCacheWorker::ReleaseNotificationEvent(FChunkCacheWorker *this,FEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIndexedLockFreeLink *pFVar4;
  
  if (param_1 == (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar3 == 0) {
    pFVar4 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar3 >> 0xe] + (uVar3 & 0x3fff);
  }
  pFVar4->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)&this->EventsToRelease,uVar3);
  if (this->QueuedRequestsEvent != (FEvent *)0x0) {
    (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x10))();
  }
  return;
}

// RequestChunk @ 142a98dd0

/* WARNING: Enum "EVersion": Some values do not have unique names */

FChunkRequest * __thiscall
FChunkCacheWorker::RequestChunk
          (FChunkCacheWorker *this,int param_1,long64 param_2,long64 param_3,FEvent *param_4)

{
  int *piVar1;
  TArray<FChunkRequest_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<void_*> *paVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  atomic<void_*> aVar8;
  FChunkRequest *pFVar9;
  atomic<void_*> local_28 [2];
  
  uVar6 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)&this->FreeChunkRequests);
  local_28[0] = (atomic<void_*>)0x0;
  if (uVar6 != 0) {
    local_28[0] = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe][uVar6 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
  }
  if ((local_28[0] == (atomic<void_*>)0x0) &&
     (aVar8 = (atomic<void_*>)::operator_new(0x30), local_28[0] = (atomic<void_*>)0x0,
     aVar8 != (atomic<void_*>)0x0)) {
    *(undefined4 *)aVar8 = 0xffffffff;
    *(undefined8 *)((longlong)aVar8 + 8) = 0;
    *(undefined8 *)((longlong)aVar8 + 0x10) = 0;
    *(undefined8 *)((longlong)aVar8 + 0x18) = 0;
    *(undefined4 *)((longlong)aVar8 + 0x20) = 0;
    *(undefined4 *)((longlong)aVar8 + 0x24) = 0;
    *(undefined8 *)((longlong)aVar8 + 0x28) = 0;
    local_28[0] = aVar8;
  }
  *(int *)local_28[0] = param_1;
  *(long64 *)((longlong)local_28[0] + 8) = param_2;
  *(long64 *)((longlong)local_28[0] + 0x10) = param_3;
  *(undefined8 *)((longlong)local_28[0] + 0x18) = 0;
  LOCK();
  *(undefined4 *)((longlong)local_28[0] + 0x20) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)local_28[0] + 0x24) = 2;
  UNLOCK();
  *(FEvent **)((longlong)local_28[0] + 0x28) = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  pTVar2 = &this->RequestQueue;
  paVar3 = (atomic<void_*> *)(pTVar2->AllocatorInstance).Data;
  if (((paVar3 <= local_28) && (local_28 < paVar3 + (this->RequestQueue).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FChunkRequest *)(*pcVar4)();
    return pFVar9;
  }
  iVar7 = (this->RequestQueue).ArrayNum;
  piVar1 = &(this->RequestQueue).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RequestQueue).ArrayNum = iVar7 + 1;
  *(atomic<void_*> *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
  LOCK();
  (this->PendingQueueCounter).Counter = (this->PendingQueueCounter).Counter + 1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  if (this->QueuedRequestsEvent != (FEvent *)0x0) {
    (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x10))();
  }
  return (FChunkRequest *)local_28[0];
}

// Run @ 142a9bf50

/* WARNING: Enum "EVersion": Some values do not have unique names */

uint __thiscall FChunkCacheWorker::Run(FChunkCacheWorker *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  
  if ((this->QueuedRequestsEvent == (FEvent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedRequestsEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\SignedArchiveReader.cpp"
                         ,0x45,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  iVar1 = (this->StopTaskCounter).Counter;
  while (iVar1 == 0) {
    cVar4 = (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x20))
                      (this->QueuedRequestsEvent,0xffffffff,0);
    if (cVar4 != '\0') {
      ProcessQueue(this);
    }
    iVar1 = (this->StopTaskCounter).Counter;
  }
  return 0;
}

// Stop @ 142aa1b50

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FChunkCacheWorker::Stop(FChunkCacheWorker *this)

{
  LOCK();
  (this->StopTaskCounter).Counter = (this->StopTaskCounter).Counter + 1;
  UNLOCK();
  if (this->QueuedRequestsEvent != (FEvent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142aa1b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

