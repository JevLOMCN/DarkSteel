// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FDeltaScanner @ 1432225b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDeltaScanner * __thiscall
BuildPatchServices::FDeltaScanner::FDeltaScanner
          (FDeltaScanner *this,uint param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TDoubleLinkedList<TTuple<BuildPatchServices::FBlockRange,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
          *param_3,IDeltaChunkEnumeration *param_4,FStatsCollector *param_5)

{
  TFuture<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FStatsCollector *pFVar2;
  code *pcVar3;
  TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar4;
  TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
  *pTVar5;
  TMap<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar6;
  TMap<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
  *pTVar7;
  long64 *plVar8;
  TFuture<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *pTVar9;
  undefined ***pppuVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  TUniqueFunction<void___cdecl(void)> local_98;
  code *local_68 [2];
  undefined **local_58;
  FDeltaScanner *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this->_padding_ = (longlong)&___7FDeltaScanner_BuildPatchServices__6B_;
  this->WindowSize = param_1;
  this->Data = param_2;
  this->FilesList = param_3;
  this->CloudEnumeration = param_4;
  pTVar4 = (TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
            *)(**(code **)((longlong)*param_4 + 0x18))(param_4);
  this->ChunkInventory = pTVar4;
  pTVar5 = (TMap<FGuid,FSetElementId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSetElementId,0>_>
            *)(**(code **)((longlong)*param_4 + 0x20))(param_4);
  this->ChunkShaHashes = pTVar5;
  pTVar6 = (TMap<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
            *)(**(code **)((longlong)*param_4 + 0x30))(param_4);
  this->IdenticalChunks = pTVar6;
  pTVar7 = (TMap<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
            *)(**(code **)((longlong)*param_4 + 0x28))(param_4);
  this->ChunkBuildReference = pTVar7;
  pTVar1 = &this->FutureResult;
  this->StatsCollector = param_5;
  this->FilesListNode = this->FilesList->HeadNode;
  this->bIsComplete = (FThreadSafeBool)0x0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  (this->BytesProcessed).Counter = 0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->FutureResult).field_0x8 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ScanTimer,4000);
  (this->ScanTimer).StartCycles = 0;
  (this->ScanTimer).Cycles = 0;
  (this->ScanTimer).bIsRunning = false;
  (this->ScanTimer).bIsPaused = false;
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Created Scanners");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,4,0);
  this->StatCreatedScanners = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Running Scanners");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,4,0);
  this->StatRunningScanners = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Complete Scanners");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,4,0);
  this->StatCompleteScanners = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: CPU Time");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,0,0);
  this->StatCpuTime = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Real Time");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,0,0);
  this->StatRealTime = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Hash Collisions");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,4,0);
  this->StatHashCollisions = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Total Data");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,1,0);
  this->StatTotalData = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Skipped Data");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,1,0);
  this->StatSkippedData = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  pFVar2 = this->StatsCollector;
  pcVar3 = *(code **)((longlong)*pFVar2 + 8);
  ::FString::FString((FString *)local_a8,L"Scanner: Processing Speed");
  plVar8 = (long64 *)(*pcVar3)(pFVar2,local_a8,2,0);
  this->StatProcessingSpeed = plVar8;
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  LOCK();
  *this->StatCreatedScanners = *this->StatCreatedScanners + 1;
  UNLOCK();
  LOCK();
  FDataScanner::NumIncompleteScanners.Counter = FDataScanner::NumIncompleteScanners.Counter + 1;
  UNLOCK();
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`BuildPatchServices::FDeltaScanner::FDeltaScanner'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FDeltaScanner::FDeltaScanner'::__l2::<lambda_1>,TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
                ::Call;
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  local_50 = this;
  pTVar9 = Async<TFunction<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
                     ((TFuture<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
                       *)local_a8,ThreadPool,
                      (TFunction<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>___cdecl(void)>
                       *)local_68,&local_98);
  if (pTVar1 != pTVar9) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar9;
    *(undefined8 *)pTVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->FutureResult).field_0x8,
               (FSharedReferencer<1> *)&pTVar9->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  if (local_68[0] != (code *)0x0) {
    pppuVar10 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar10 = local_40;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  return this;
}

// ~FDeltaScanner @ 143228310

void __thiscall BuildPatchServices::FDeltaScanner::~FDeltaScanner(FDeltaScanner *this)

{
  longlong *plVar1;
  char cVar2;
  
  this->_padding_ = (longlong)&___7FDeltaScanner_BuildPatchServices__6B_;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureResult).field_0x8);
  this->_padding_ = (longlong)&___7IDataScanner_BuildPatchServices__6B_;
  return;
}

// ConsumeData @ 143246f10

uint __thiscall
BuildPatchServices::FDeltaScanner::ConsumeData
          (FDeltaScanner *this,FRollingHash *param_1,uchar *param_2,uint param_3)

{
  uint local_18 [4];
  
  local_18[0] = FRollingHash::GetNumDataNeeded(param_1);
  if ((local_18[0] != 0) && (local_18[0] <= param_3)) {
    FRollingHash::ConsumeBytes(param_1,param_2,local_18);
    return local_18[0];
  }
  return 0;
}

// FindChunkDataMatches @ 1432526d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FDeltaScanner::FindChunkDataMatches
          (FDeltaScanner *this,FRollingHash *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **param_2,FSetElementId *param_3
          )

{
  TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar1;
  int iVar2;
  ulong64 uVar3;
  TRingBuffer<unsigned_char> *this_00;
  int *piVar4;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar5;
  undefined1 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  FSHAHash local_44;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  *param_2 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0;
  pTVar1 = this->ChunkInventory;
  uVar3 = FRollingHash::GetWindowHash(param_1);
  if (*(int *)&pTVar1->field_0x8 != *(int *)&pTVar1->field_0x34) {
    puVar6 = *(undefined1 **)&pTVar1->field_0x40;
    if (*(undefined1 **)&pTVar1->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &pTVar1->field_0x38;
    }
    iVar2 = *(int *)(puVar6 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                              (ulonglong)(*(int *)&pTVar1->field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulong64 *)((longlong)iVar2 * 0x60 + *(longlong *)pTVar1) == uVar3) {
          if (iVar2 == -1) {
            return;
          }
          local_44.Hash[0x10] = '\0';
          local_44.Hash[0x11] = '\0';
          local_44.Hash[0x12] = '\0';
          local_44.Hash[0x13] = '\0';
          local_44.Hash[0] = '\0';
          local_44.Hash[1] = '\0';
          local_44.Hash[2] = '\0';
          local_44.Hash[3] = '\0';
          local_44.Hash[4] = '\0';
          local_44.Hash[5] = '\0';
          local_44.Hash[6] = '\0';
          local_44.Hash[7] = '\0';
          local_44.Hash[8] = '\0';
          local_44.Hash[9] = '\0';
          local_44.Hash[10] = '\0';
          local_44.Hash[0xb] = '\0';
          local_44.Hash[0xc] = '\0';
          local_44.Hash[0xd] = '\0';
          local_44.Hash[0xe] = '\0';
          local_44.Hash[0xf] = '\0';
          this_00 = FRollingHash::GetWindowData(param_1);
          TRingBuffer<unsigned_char>::GetShaHash(this_00,&local_44);
          piVar4 = (int *)(**(code **)((longlong)*this->CloudEnumeration + 0x60))
                                    (this->CloudEnumeration,local_48,&local_44);
          iVar2 = *piVar4;
          param_3->Index = iVar2;
          if (iVar2 != -1) {
            pTVar5 = TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                     ::FindChecked((TMapBase<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                                    *)this->IdenticalChunks,param_3);
            *param_2 = pTVar5;
            return;
          }
          LOCK();
          *this->StatHashCollisions = *this->StatHashCollisions + 1;
          UNLOCK();
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + *(longlong *)pTVar1);
      } while (iVar2 != -1);
    }
  }
  return;
}

// Fork @ 143253240

FBlockRange * __thiscall
BuildPatchServices::FDeltaScanner::Fork(FDeltaScanner *this,FBlockRange *__return_storage_ptr__)

{
  longlong *plVar1;
  char cVar2;
  
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  FBlockRange::FromFirstAndLast
            (__return_storage_ptr__,(longlong)(this->BytesProcessed).Counter,
             (longlong)(this->Data->ArrayNum + -1));
  return __return_storage_ptr__;
}

// GetResultWhenComplete @ 143257340

TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDeltaScanner::GetResultWhenComplete
          (FDeltaScanner *this,
          TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = TFutureBase<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::Get
                     ((TFutureBase<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
                       *)&this->FutureResult);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 5);
  return __return_storage_ptr__;
}

// GetTimeRunning @ 143257650

double __thiscall BuildPatchServices::FDeltaScanner::GetTimeRunning(FDeltaScanner *this)

{
  double dVar1;
  
  dVar1 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds(&this->ScanTimer);
  return dVar1;
}

// IsComplete @ 143258c70

bool __thiscall BuildPatchServices::FDeltaScanner::IsComplete(FDeltaScanner *this)

{
  return this->bIsComplete != (FThreadSafeBool)0x0;
}

// ProcessMatch @ 14325e3a0

bool __thiscall
BuildPatchServices::FDeltaScanner::ProcessMatch
          (FDeltaScanner *this,FGuid *param_1,FBlockRange *param_2,bool *param_3,ulong64 *param_4)

{
  TDoubleLinkedListNode *pTVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
  *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  
  if ((((param_1->A == 1) && (param_1->B == 0)) && (param_1->C == 0)) && (param_1->D < 0x100)) {
    *param_3 = true;
    *param_4 = 0;
    return true;
  }
  do {
    pTVar1 = this->FilesListNode;
    if (((*(longlong *)&(pTVar1->Value).field_0x8 != 0) && (param_2->Size != 0)) &&
       (*(ulonglong *)&pTVar1->Value <= (param_2->Size - 1) + param_2->First)) {
      lVar2 = *(longlong *)&(pTVar1->Value).field_0x8;
      lVar3 = *(longlong *)&pTVar1->Value;
      if ((param_2->Size == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (param_2->First <= (ulonglong)(lVar2 + -1 + lVar3)) {
        pTVar9 = TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
                 ::FindChecked((TMapBase<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>,0>_>
                                *)this->ChunkBuildReference,param_1);
        pTVar1 = this->FilesListNode;
        if ((param_2->Size == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar11 = param_2->First;
        if ((*(longlong *)&(pTVar1->Value).field_0x8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((uVar11 < *(ulonglong *)&pTVar1->Value) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ScanLocation.GetFirst() >= FileScannerRange.GetFirst()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DeltaScanner.cpp"
                               ,0x16d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((param_2->Size == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar12 = param_2->First;
        if ((*(longlong *)&(pTVar1->Value).field_0x8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar11 = (*(longlong *)&(pTVar1->Value).field_0x68 - *(longlong *)&pTVar1->Value) + uVar12;
        *param_3 = false;
        if ((*(int *)&pTVar9->field_0x20 == *(int *)&pTVar9->field_0x4c) ||
           (bVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               &pTVar9->field_0x18,
                               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                               &(pTVar1->Value).field_0x18), bVar6 = false, bVar8)) {
          bVar6 = *(int *)&pTVar9->field_0x10 == *(int *)&(pTVar1->Value).field_0x10;
          *param_3 = bVar6;
          if (bVar6) {
            uVar4 = *(ulonglong *)&pTVar9->field_0x68;
            uVar10 = uVar11;
            if (uVar4 < uVar11) {
              uVar10 = uVar4;
            }
            if (uVar11 < uVar4) {
              uVar11 = uVar4;
            }
            uVar12 = uVar11 - uVar10;
          }
          else {
            uVar12 = 0xffffffffffffffff;
          }
          *param_4 = uVar12;
          bVar6 = true;
        }
        return bVar6;
      }
    }
    this->FilesListNode = this->FilesListNode->NextNode;
  } while( true );
}

// ScanData @ 143266760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDeltaScanner::ScanData
          (FDeltaScanner *this,
          TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FGuid *pFVar2;
  ulong64 *puVar3;
  uint uVar4;
  FThreadSafeBool FVar5;
  uint uVar6;
  IDeltaChunkEnumeration *pIVar7;
  code *pcVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar10;
  TMap<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  long64 lVar15;
  ulong64 uVar16;
  longlong *plVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *pTVar21;
  ulong64 uVar22;
  TRingBuffer<unsigned_char> *this_00;
  uint *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint uVar29;
  uint *puVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  ulonglong uVar35;
  TBitArray<FDefaultBitArrayAllocator> *pTVar36;
  ForElementType<unsigned_int> FVar37;
  ulonglong uVar38;
  uint uVar39;
  undefined1 auStackY_3f8 [32];
  bool local_3a8;
  bool local_3a7;
  char local_3a6;
  uint local_3a4;
  uint local_3a0;
  char local_39c;
  FScriptContainerElement local_39b;
  uint local_398;
  uint local_394;
  undefined1 local_390;
  undefined1 local_38f;
  FScriptContainerElement local_38e;
  undefined1 local_38d [5];
  ForAnyElementType local_388;
  undefined8 local_380;
  FThreadSafeBool local_378;
  ulonglong local_370;
  uint local_368;
  uint local_364;
  uint local_360;
  int local_35c;
  FDeltaScanner *local_358;
  ForElementType<unsigned_int> local_350;
  uint local_348;
  uint local_344;
  ulong64 local_340;
  ulonglong local_338;
  uint *local_330;
  int iStack_328;
  uint uStack_324;
  ForElementType<unsigned_int> local_320;
  undefined4 uStack_318;
  uint uStack_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  FDeltaMatchProcessor local_2f0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_2d8;
  FBlockRange local_2c8;
  FBlockRange local_2b8;
  LARGE_INTEGER local_2a8;
  LARGE_INTEGER local_2a0;
  uint *local_298;
  FScriptContainerElement *local_290;
  longlong local_288;
  FScriptContainerElement *local_280;
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  longlong *local_268;
  LARGE_INTEGER local_260;
  longlong *local_258;
  LARGE_INTEGER local_250;
  TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *local_248;
  LARGE_INTEGER local_240;
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  LARGE_INTEGER local_220;
  uint *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  uint *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FRollingHash local_1b8;
  FChunkMatchMeta local_180;
  FChunkMatchMeta local_140;
  undefined4 local_e4;
  undefined4 local_c4;
  undefined4 local_a4;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  FSHAHash local_6c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  LOCK();
  FDataScanner::NumRunningScanners.Counter = FDataScanner::NumRunningScanners.Counter + 1;
  UNLOCK();
  pIVar7 = this->CloudEnumeration;
  uVar4 = this->WindowSize;
  uVar24 = 0;
  local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.ArrayNum = 0;
  local_2d8.ArrayMax = 0;
  local_80 = 0;
  uStack_78 = 0;
  pcVar8 = *(code **)((longlong)*pIVar7 + 0x60);
  local_70 = 0;
  local_358 = this;
  local_248 = __return_storage_ptr__;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_2d8,uVar4,Default);
  FSHA1::HashBuffer(local_2d8.AllocatorInstance.Data,(ulonglong)uVar4,(uchar *)&local_80);
  if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
  (*pcVar8)(pIVar7,local_238,&local_80);
  local_3a8 = false;
  local_340 = 0xffffffffffffffff;
  local_388.Data = (FScriptContainerElement *)0x0;
  local_380 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,100,&local_388,0,(int *)((longlong)&local_380 + 4));
  iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,100,&local_388,(int *)&local_380,(int *)((longlong)&local_380 + 4));
  memset(local_388.Data + (longlong)iVar19 * 8,0,800);
  local_398 = 0;
  local_3a0 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
  if (((this->ScanTimer).bIsRunning == false) &&
     ((this->ScanTimer).bIsRunning = true, (this->ScanTimer).bIsPaused == false)) {
    QueryPerformanceCounter(&local_220);
    (this->ScanTimer).StartCycles = (ulong64)local_220;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
  local_2f0.Matches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Matches.ArrayNum = 0;
  local_2f0.Matches.ArrayMax = 0;
  local_2f0.LastAcceptedIdx = -1;
  FRollingHash::FRollingHash(&local_1b8,this->WindowSize);
  pTVar9 = this->Data;
  uVar4 = pTVar9->ArrayNum;
  if (((int)uVar4 < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar8 = (code *)swi(3);
    pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar21;
  }
  pFVar33 = (pTVar9->AllocatorInstance).Data;
  local_348 = FRollingHash::GetNumDataNeeded(&local_1b8);
  if ((local_348 == 0) || (uVar4 < local_348)) {
    uVar4 = 0;
  }
  else {
    FRollingHash::ConsumeBytes(&local_1b8,(uchar *)pFVar33,&local_348);
    uVar4 = local_348;
  }
  local_39c = '\x01';
  local_394 = uVar4;
  QueryPerformanceCounter(&local_2a8);
  local_268 = this->StatRunningScanners;
  local_270 = local_2a8;
  local_258 = this->StatRealTime;
  LOCK();
  lVar25 = *local_268;
  *local_268 = *local_268 + 1;
  UNLOCK();
  if (lVar25 == 0) {
    QueryPerformanceCounter(&local_2a0);
    LOCK();
    TempTimerValue = local_2a0.QuadPart;
    UNLOCK();
  }
  local_370 = 0;
  uVar35 = uVar24;
LAB_1432669f0:
  uVar29 = (uint)uVar24;
  FVar5 = this->bShouldAbort;
  if (FVar5 == (FThreadSafeBool)0x0) {
    uVar26 = this->WindowSize;
    local_2c8.Size = (ulong64)uVar26;
    local_3a4 = uVar4 - uVar26;
    uVar24 = (ulonglong)local_3a4;
    uVar38 = (ulonglong)local_3a4;
    local_378 = FVar5;
    local_2c8.First = uVar24;
    if (uVar26 != 0) {
      lVar25 = local_2c8.Size - 1;
      if ((local_2c8.Size == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar18)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
        ;
        return pTVar21;
      }
      if ((lVar25 + uVar24 < uVar24) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x2f,L"Byte range has uint64 overflow."), bVar18)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
        ;
        return pTVar21;
      }
    }
    this = local_358;
    puVar30 = (uint *)0x0;
    pTVar10 = local_358->ChunkInventory;
    uVar22 = FRollingHash::GetWindowHash(&local_1b8);
    if (*(int *)&pTVar10->field_0x8 == *(int *)&pTVar10->field_0x34) goto LAB_143266bea;
    puVar28 = &pTVar10->field_0x38;
    if (*(undefined1 **)&pTVar10->field_0x40 != (undefined1 *)0x0) {
      puVar28 = *(undefined1 **)&pTVar10->field_0x40;
    }
    iVar19 = *(int *)(puVar28 +
                     ((uVar22 >> 0x20) * 0x17 + uVar22 &
                     (ulonglong)(*(int *)&pTVar10->field_0x48 - 1)) * 4);
    if (iVar19 == -1) {
LAB_143266ea5:
      local_3a7 = false;
    }
    else {
      do {
        if (*(ulong64 *)((longlong)iVar19 * 0x60 + *(longlong *)pTVar10) == uVar22) {
          if (iVar19 == -1) goto LAB_143266bea;
          local_6c.Hash[0] = '\0';
          local_6c.Hash[1] = '\0';
          local_6c.Hash[2] = '\0';
          local_6c.Hash[3] = '\0';
          local_6c.Hash[4] = '\0';
          local_6c.Hash[5] = '\0';
          local_6c.Hash[6] = '\0';
          local_6c.Hash[7] = '\0';
          local_6c.Hash[8] = '\0';
          local_6c.Hash[9] = '\0';
          local_6c.Hash[10] = '\0';
          local_6c.Hash[0xb] = '\0';
          local_6c.Hash[0xc] = '\0';
          local_6c.Hash[0xd] = '\0';
          local_6c.Hash[0xe] = '\0';
          local_6c.Hash[0xf] = '\0';
          local_6c.Hash[0x10] = '\0';
          local_6c.Hash[0x11] = '\0';
          local_6c.Hash[0x12] = '\0';
          local_6c.Hash[0x13] = '\0';
          this_00 = FRollingHash::GetWindowData(&local_1b8);
          TRingBuffer<unsigned_char>::GetShaHash(this_00,&local_6c);
          puVar23 = (uint *)(**(code **)((longlong)*this->CloudEnumeration + 0x60))
                                      (this->CloudEnumeration,local_234);
          uVar26 = *puVar23;
          if (uVar26 == 0xffffffff) {
            LOCK();
            *this->StatHashCollisions = *this->StatHashCollisions + 1;
            UNLOCK();
            goto LAB_143266ea5;
          }
          pTVar11 = this->IdenticalChunks;
          if (*(int *)&pTVar11->field_0x8 == *(int *)&pTVar11->field_0x34) goto LAB_143266bbe;
          puVar28 = &pTVar11->field_0x38;
          if (*(undefined1 **)&pTVar11->field_0x40 != (undefined1 *)0x0) {
            puVar28 = *(undefined1 **)&pTVar11->field_0x40;
          }
          uVar27 = *(uint *)(puVar28 + (ulonglong)(*(int *)&pTVar11->field_0x48 - 1U & uVar26) * 4);
          if (uVar27 == 0xffffffff) goto LAB_143266bbe;
          goto LAB_143266ba0;
        }
        iVar19 = *(int *)((longlong)iVar19 * 0x60 + 0x58 + *(longlong *)pTVar10);
      } while (iVar19 != -1);
      local_3a7 = false;
    }
    goto LAB_143266eb9;
  }
  goto LAB_143267a5e;
  while (uVar27 = puVar30[0x16], uVar27 != 0xffffffff) {
LAB_143266ba0:
    puVar30 = (uint *)((longlong)(int)uVar27 * 0x60 + *(longlong *)pTVar11);
    if (*puVar30 == uVar26) {
      if (puVar30 == (uint *)0x0) goto LAB_143266bc0;
      goto LAB_143266be6;
    }
  }
LAB_143266bbe:
  puVar30 = (uint *)0x0;
LAB_143266bc0:
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x27b,L"");
  if (bVar18) {
    pcVar8 = (code *)swi(3);
    pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar21;
  }
LAB_143266be6:
  puVar30 = puVar30 + 2;
LAB_143266bea:
  local_3a7 = false;
  if (puVar30 != (uint *)0x0) {
    uVar4 = puVar30[10];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar30 + 4);
    iStack_328 = 0;
    local_310 = 0;
    uStack_324 = 1;
    uStack_314 = 0;
    if (uVar4 != 0) {
      pTVar36 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar30 + 8) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar36 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar30 + 8);
      }
      uVar29 = *(uint *)(pTVar36->AllocatorInstance).InlineData;
      while (uVar29 == 0) {
        lVar25 = (longlong)iStack_328;
        local_310 = local_310 + 0x20;
        iStack_328 = iStack_328 + 1;
        uStack_314 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_328)
        goto LAB_143266c80;
        uVar29 = *(uint *)((pTVar36->AllocatorInstance).InlineData + lVar25 * 4 + 4);
      }
      uStack_324 = -uVar29 & uVar29;
      uVar24 = (ulonglong)uStack_324 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_230 = (int)lVar25;
      uStack_314 = local_310 + -1 + local_230;
      if ((int)uVar4 < (int)uStack_314) {
        uStack_314 = uVar4;
      }
    }
LAB_143266c80:
    uVar26 = puVar30[10];
    uStack_30c = local_e4;
    uVar29 = uVar26 & 0xffffffe0;
    iStack_308 = puVar30[2] - puVar30[0xd];
    TStack_210._padding_ = CONCAT44(uStack_324,iStack_328);
    uStack_318 = 0xffffffff;
    TStack_210.CurrentBitIndex = uStack_314;
    TStack_210.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar26 >> 5;
    TStack_210._28_4_ = local_e4;
    TStack_210.BaseBitIndex = local_310;
    uStack_1f0 = CONCAT44(uStack_304,iStack_308);
    local_330 = puVar30;
    local_320 = (ForElementType<unsigned_int>)pTVar1;
    local_218 = puVar30;
    TStack_210.Array = pTVar1;
    if ((((int)uVar26 < 0) || ((int)uVar4 < (int)uVar26)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar21;
    }
    uVar16 = local_2c8.Size;
    uVar22 = local_2c8.First;
    this = local_358;
    uVar4 = puVar30[10];
    if (uVar26 != uVar4) {
      pTVar36 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar30 + 8) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar36 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar30 + 8);
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) &
               *(uint *)((pTVar36->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar26 == 0) {
        lVar25 = (longlong)iVar19;
        uVar29 = uVar29 + 0x20;
        iVar19 = iVar19 + 1;
        uVar26 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_143266da0;
        uVar26 = *(uint *)((pTVar36->AllocatorInstance).InlineData + lVar25 * 4 + 4);
      }
      uVar24 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_22c = (int)lVar25;
      uVar26 = (uVar29 - 1) + local_22c;
      if ((int)uVar4 < (int)uVar26) {
        uVar26 = uVar4;
      }
    }
LAB_143266da0:
    do {
      puVar23 = local_218;
      if (local_218[2] - local_218[0xd] != (int)uStack_1f0) {
        local_390 = 0;
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_390);
      }
      if (((TStack_210.CurrentBitIndex == uVar26) && (TStack_210.Array == pTVar1)) &&
         (uVar35 = local_370, uVar4 = local_394, uVar29 = local_398, puVar23 == puVar30)) break;
      pFVar2 = (FGuid *)(*(longlong *)puVar23 + (longlong)TStack_210.CurrentBitIndex * 0x18);
      bVar18 = ProcessMatch(this,pFVar2,&local_2c8,&local_3a7,&local_340);
      if (bVar18) {
        local_140.Match.WindowSize = this->WindowSize;
        local_140.Match.ChunkGuid.A = pFVar2->A;
        local_140.Match.ChunkGuid.B = pFVar2->B;
        local_140.Match.ChunkGuid.C = pFVar2->C;
        local_140.Match.ChunkGuid.D = pFVar2->D;
        local_140.Match._28_4_ = local_84;
        local_140.bSameFile = local_3a7;
        local_140.FileLocOffset = local_340;
        local_140.Range.First = uVar22;
        local_140.Range.Size = uVar16;
        local_140.Match.DataOffset = uVar38;
        FDeltaMatchProcessor::AddMatch(&local_2f0,&local_140,&local_3a8);
      }
      uVar35 = local_370;
      uVar4 = local_394;
      uVar29 = local_398;
      if (local_3a8 != false) break;
      TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
    } while( true );
  }
LAB_143266eb9:
  uVar26 = local_3a4;
  if (local_3a8 != false) {
    local_3a8 = false;
    FRollingHash::Clear(&local_1b8);
    pTVar9 = this->Data;
    local_398 = 0;
    local_370 = 0;
    uVar29 = pTVar9->ArrayNum;
    if ((this->WindowSize - 1) + uVar4 < uVar29) {
      uVar26 = 0;
      if ((int)uVar4 < (int)uVar29) {
        uVar26 = ~uVar4 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
        ;
        return pTVar21;
      }
      pFVar33 = (pTVar9->AllocatorInstance).Data;
      local_344 = FRollingHash::GetNumDataNeeded(&local_1b8);
      if ((local_344 == 0) || (uVar29 - uVar4 < local_344)) {
        uVar29 = 0;
      }
      else {
        FRollingHash::ConsumeBytes(&local_1b8,(uchar *)(pFVar33 + (int)uVar4),&local_344);
        uVar29 = local_344;
      }
      LOCK();
      *this->StatSkippedData = *this->StatSkippedData + (ulonglong)uVar29;
      UNLOCK();
      uVar4 = uVar4 + uVar29;
      local_394 = uVar4;
    }
    else {
      local_39c = '\0';
    }
LAB_143266f94:
    uVar35 = 0;
    uVar26 = local_3a4;
    goto LAB_143266f98;
  }
  if ((uint)this->Data->ArrayNum <= uVar4) {
    LOCK();
    (this->BytesProcessed).Counter = local_3a4;
    UNLOCK();
    goto LAB_143267a5e;
  }
  if (puVar30 == (uint *)0x0) {
    if (uVar29 - 1 < 99) {
      if ((int)local_380 < 1) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar8)();
          return pTVar21;
        }
      }
      if (*(longlong *)local_388.Data != 0) {
        uVar26 = 0;
        if ((int)uVar29 < (int)local_380) {
          uVar26 = ~uVar29 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar8)();
          return pTVar21;
        }
        local_398 = uVar29 + 1;
        *(undefined8 *)(local_388.Data + uVar35 * 8) = 0;
        local_370 = uVar35 + 1;
        local_3a0 = local_3a0 + 1;
        uVar26 = local_3a4;
        goto LAB_1432679e3;
      }
    }
    local_398 = 0;
    local_370 = 0;
    uVar26 = local_3a4;
  }
  else if (uVar29 == 0) {
    if (((int)local_380 < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar21;
    }
    local_398 = 1;
    local_370 = 1;
    local_3a0 = local_3a4 + 1;
    *(uint **)local_388.Data = puVar30;
    uVar26 = local_3a4;
  }
  else if ((local_3a0 == local_3a4) && ((int)uVar29 < 100)) {
    iVar19 = (int)local_380;
    if ((int)local_380 < 1) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
        ;
        return pTVar21;
      }
      iVar19 = (int)local_380;
    }
    if (*(longlong *)local_388.Data != 0) {
      if (iVar19 < 1) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar8)();
          return pTVar21;
        }
        iVar19 = (int)local_380;
      }
      if (*(uint **)local_388.Data == puVar30) {
        pTVar9 = this->Data;
        local_370 = CONCAT44(local_370._4_4_,uVar29);
        uVar29 = uVar4 - uVar29;
        uVar26 = 0;
        if ((int)uVar29 < pTVar9->ArrayNum) {
          uVar26 = ~uVar29 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar8)();
          return pTVar21;
        }
        pFVar33 = (pTVar9->AllocatorInstance).Data + (int)uVar29;
        pTVar9 = this->Data;
        uVar29 = 0;
        if ((int)uVar4 < pTVar9->ArrayNum) {
          uVar29 = ~uVar4 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar8)();
          return pTVar21;
        }
        pFVar34 = (pTVar9->AllocatorInstance).Data + (int)uVar4;
        pTVar9 = this->Data;
        uVar26 = pTVar9->ArrayNum - 1;
        uVar29 = 0;
        if ((int)uVar26 < pTVar9->ArrayNum) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar8)();
          return pTVar21;
        }
        uVar29 = 0;
        local_368 = 0;
        local_39b = *pFVar33;
        local_280 = (pTVar9->AllocatorInstance).Data + (pTVar9->ArrayNum + -1);
        local_38e = *pFVar34;
        uVar26 = local_394;
        if (this->bShouldAbort == (FThreadSafeBool)0x0) {
          iVar19 = local_3a4 - uVar4;
          local_288 = (longlong)pFVar33 - (longlong)pFVar34;
          local_35c = iVar19;
          do {
            uVar26 = local_394;
            if ((local_280 < pFVar34) || (local_290 = pFVar34 + 1, pFVar34[local_288] != *pFVar34))
            break;
            local_398 = local_398 + 1;
            local_3a0 = local_3a0 + 1;
            uVar27 = local_398 % (uint)local_370;
            uVar26 = 0;
            if ((int)uVar27 < (int)local_380) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar21;
            }
            uVar24 = (ulonglong)local_3a0;
            puVar30 = *(uint **)(local_388.Data + (longlong)(int)uVar27 * 8);
            uVar26 = uVar4;
            local_298 = puVar30;
            if (uVar29 == 0) {
              if (puVar30 != (uint *)0x0) {
                local_2b8.Size = (ulong64)this->WindowSize;
                local_2b8.First = uVar24;
                if (local_2b8.Size != 0) {
                  uVar35 = (uVar24 - 1) + local_2b8.Size;
                  if ((local_2b8.Size == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Size > 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                          ,0x11,L"Using GetFirst for a 0 size range is invalid."),
                     bVar18)) {
                    pcVar8 = (code *)swi(3);
                    pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *
                              )(*pcVar8)();
                    return pTVar21;
                  }
                  if ((uVar35 < uVar24) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                          ,0x2f,L"Byte range has uint64 overflow."), bVar18)) {
                    pcVar8 = (code *)swi(3);
                    pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *
                              )(*pcVar8)();
                    return pTVar21;
                  }
                }
                uVar4 = puVar30[10];
                local_350 = (ForElementType<unsigned_int>)(puVar30 + 4);
                local_338 = 0xffffffffffffffff;
                uVar27 = 0;
                local_360 = 0;
                uVar39 = 0;
                local_300 = 0;
                iStack_328 = 0;
                local_364 = 0;
                uStack_2f8 = 0;
                local_310 = 0;
                local_3a6 = '\0';
                uStack_324 = 1;
                uStack_314 = 0;
                if (uVar4 != 0) {
                  FVar37 = local_350;
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar30 + 8) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    FVar37 = (ForElementType<unsigned_int>)
                             *(TBitArray<FDefaultBitArrayAllocator> **)(puVar30 + 8);
                  }
                  uVar29 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar37)->
                                    AllocatorInstance).InlineData;
                  while (uVar29 == 0) {
                    lVar25 = (longlong)iStack_328;
                    local_310 = local_310 + 0x20;
                    iStack_328 = iStack_328 + 1;
                    uStack_314 = uVar4;
                    if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_328)
                    goto LAB_143267405;
                    uVar29 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar37)->
                                       AllocatorInstance).InlineData + lVar25 * 4 + 4);
                  }
                  uStack_324 = -uVar29 & uVar29;
                  uVar24 = (ulonglong)uStack_324 * 2 + 1;
                  lVar25 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                    }
                  }
                  local_228 = (int)lVar25;
                  uStack_314 = local_310 + -1 + local_228;
                  if ((int)uVar4 < (int)uStack_314) {
                    uStack_314 = uVar4;
                  }
                }
LAB_143267405:
                uVar29 = puVar30[10];
                uStack_30c = local_c4;
                iStack_308 = puVar30[2] - puVar30[0xd];
                uVar26 = uVar29 & 0xffffffe0;
                TStack_1e0._padding_ = CONCAT44(uStack_324,iStack_328);
                uStack_318 = 0xffffffff;
                TStack_1e0.CurrentBitIndex = uStack_314;
                TStack_1e0.UnvisitedBitMask = 0xffffffff;
                iVar19 = (int)uVar29 >> 5;
                TStack_1e0._28_4_ = local_c4;
                TStack_1e0.BaseBitIndex = local_310;
                uStack_1c0 = CONCAT44(uStack_304,iStack_308);
                local_330 = puVar30;
                local_320 = local_350;
                local_1e8 = puVar30;
                TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_350;
                if ((((int)uVar29 < 0) || ((int)uVar4 < (int)uVar29)) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                            (*pcVar8)();
                  return pTVar21;
                }
                uVar6 = *(int *)((longlong)local_350 + 0x18);
                uVar4 = local_364;
                uVar32 = local_360;
                if (uVar29 != uVar6) {
                  FVar37 = local_350;
                  if (*(ForElementType<unsigned_int> *)((longlong)local_350 + 0x10) !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar37 = *(ForElementType<unsigned_int> *)((longlong)local_350 + 0x10);
                  }
                  uVar29 = -1 << ((byte)uVar29 & 0x1f) &
                           *(uint *)((longlong)FVar37 + (longlong)iVar19 * 4);
                  while (uVar29 == 0) {
                    lVar25 = (longlong)iVar19;
                    uVar26 = uVar26 + 0x20;
                    iVar19 = iVar19 + 1;
                    uVar29 = uVar6;
                    if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
                    goto LAB_143267520;
                    uVar29 = ((uint *)((longlong)FVar37 + 4))[lVar25];
                  }
                  uVar24 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
                  lVar25 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                    }
                  }
                  local_224 = (int)lVar25;
                  uVar29 = local_224 + -1 + uVar26;
                  if ((int)uVar6 < (int)uVar29) {
                    uVar29 = uVar6;
                  }
                }
LAB_143267520:
                while( true ) {
                  puVar30 = local_1e8;
                  if (local_1e8[2] - local_1e8[0xd] != (int)uStack_1c0) {
                    local_38f = 0;
                    `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_38f)
                    ;
                  }
                  if (((TStack_1e0.CurrentBitIndex == uVar29) &&
                      ((ForElementType<unsigned_int>)TStack_1e0.Array == local_350)) &&
                     (puVar30 == local_298)) break;
                  pFVar2 = (FGuid *)(*(longlong *)puVar30 +
                                    (longlong)TStack_1e0.CurrentBitIndex * 0x18);
                  bVar18 = ProcessMatch(this,pFVar2,&local_2b8,&local_3a7,&local_340);
                  if (bVar18) {
                    if ((local_3a6 == '\0') && (local_3a7 != false)) {
                      bVar18 = true;
                    }
                    else {
                      bVar18 = false;
                    }
                    if (((((uVar39 == 0 && uVar4 == 0) && uVar32 == 0) && uVar27 == 0) || (bVar18))
                       || (local_340 < local_338)) {
                      uVar27 = pFVar2->A;
                      uVar32 = pFVar2->B;
                      local_300._0_4_ = pFVar2->A;
                      local_300._4_4_ = pFVar2->B;
                      uVar39 = pFVar2->D;
                      uStack_2f8._0_4_ = pFVar2->C;
                      uStack_2f8._4_4_ = pFVar2->D;
                      local_3a6 = local_3a7;
                      uVar4 = pFVar2->C;
                      local_338 = local_340;
                      local_364 = uVar4;
                      local_360 = uVar32;
                    }
                  }
                  TStack_1e0.UnvisitedBitMask =
                       TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
                }
                uVar29 = local_368;
                uVar26 = local_394;
                iVar19 = local_35c;
                if (((uVar39 != 0 || uVar4 != 0) || uVar32 != 0) || uVar27 != 0) {
                  local_180.Match.WindowSize = this->WindowSize;
                  local_180.Match.DataOffset = (ulong64)local_3a0;
                  local_180.Match.ChunkGuid.B = (uint)((ulonglong)local_300 >> 0x20);
                  local_180.Match.ChunkGuid.D = (uint)((ulonglong)uStack_2f8 >> 0x20);
                  local_180.Match._28_4_ = local_a4;
                  local_180.bSameFile = (bool)local_3a6;
                  local_180.FileLocOffset = local_338;
                  local_180.Range.First = local_2b8.First;
                  local_180.Range.Size = local_2b8.Size;
                  local_180.Match.ChunkGuid.A = uVar27;
                  local_180.Match.ChunkGuid.C = uVar4;
                  FDeltaMatchProcessor::AddMatch(&local_2f0,&local_180,&local_3a8);
                  uVar29 = local_368;
                  uVar26 = local_394;
                  iVar19 = local_35c;
                  if (local_3a8 != false) {
                    local_368 = this->WindowSize;
                    local_3a8 = false;
                    uVar29 = local_368;
                  }
                }
              }
            }
            else {
              local_368 = uVar29 - 1;
              uVar29 = local_368;
            }
            pTVar9 = this->Data;
            uVar4 = 0;
            if ((int)uVar26 < pTVar9->ArrayNum) {
              uVar4 = ~uVar26 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar21;
            }
            uVar4 = uVar26 + 1;
            local_394 = uVar4;
            FRollingHash::RollForward
                      (&local_1b8,(uchar *)((pTVar9->AllocatorInstance).Data + (int)uVar26));
            local_378 = (FThreadSafeBool)((int)local_378 + 1);
            LOCK();
            (this->BytesProcessed).Counter = uVar4 + iVar19;
            UNLOCK();
            pFVar34 = local_290;
            uVar26 = local_394;
          } while (this->bShouldAbort == (FThreadSafeBool)0x0);
          do {
            if (uVar29 == 0) break;
            pTVar9 = this->Data;
            uVar27 = pTVar9->ArrayNum;
            uVar26 = uVar4;
            if (uVar27 <= uVar4) break;
            lVar25 = (longlong)(int)uVar4;
            uVar29 = uVar29 - 1;
            uVar26 = 0;
            if ((int)uVar4 < (int)uVar27) {
              uVar26 = ~uVar4 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar21;
            }
            uVar4 = uVar4 + 1;
            FRollingHash::RollForward
                      (&local_1b8,(uchar *)((pTVar9->AllocatorInstance).Data + lVar25));
            local_378 = (FThreadSafeBool)((int)local_378 + 1);
            LOCK();
            (this->BytesProcessed).Counter = local_3a4 + (int)local_378;
            UNLOCK();
            uVar26 = uVar4;
          } while( true );
        }
        local_394 = uVar26;
        local_398 = 0;
        local_370 = 0;
        uVar26 = local_3a4;
        if (local_39b == local_38e) goto LAB_143266f94;
        goto LAB_1432679e3;
      }
    }
    uVar27 = 0;
    if ((int)uVar29 < iVar19) {
      uVar27 = ~uVar29 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar21;
    }
    local_398 = uVar29 + 1;
    *(uint **)(local_388.Data + uVar35 * 8) = puVar30;
    local_370 = uVar35 + 1;
    local_3a0 = local_3a0 + 1;
  }
  else {
    if (((int)local_380 < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar21;
    }
    local_398 = 1;
    local_370 = 1;
    *(uint **)local_388.Data = puVar30;
    local_3a0 = uVar26 + 1;
  }
LAB_1432679e3:
  uVar35 = local_370;
  pTVar9 = this->Data;
  lVar25 = (longlong)(int)uVar4;
  uVar29 = 0;
  if ((int)uVar4 < pTVar9->ArrayNum) {
    uVar29 = ~uVar4 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar8 = (code *)swi(3);
    pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
    return pTVar21;
  }
  uVar4 = uVar4 + 1;
  local_394 = uVar4;
  FRollingHash::RollForward(&local_1b8,(uchar *)((pTVar9->AllocatorInstance).Data + lVar25));
LAB_143266f98:
  uVar24 = (ulonglong)local_398;
  LOCK();
  (this->BytesProcessed).Counter = (int)local_378 + uVar26;
  UNLOCK();
  if (local_39c == '\0') {
LAB_143267a5e:
    plVar12 = this->StatCpuTime;
    QueryPerformanceCounter(&local_278);
    plVar17 = local_268;
    LOCK();
    *plVar12 = *plVar12 + (local_278.QuadPart - (longlong)local_270);
    UNLOCK();
    LOCK();
    *this->StatTotalData = *this->StatTotalData + (longlong)this->Data->ArrayNum;
    UNLOCK();
    if (*local_268 < 1) {
      lVar25 = 0;
    }
    else {
      QueryPerformanceCounter(&local_260);
      lVar25 = local_260.QuadPart - TempTimerValue;
    }
    plVar12 = local_258;
    LOCK();
    *this->StatProcessingSpeed =
         (longlong)
         ((double)*this->StatTotalData /
         ((double)(ulonglong)(lVar25 + *local_258) * FGenericPlatformTime::SecondsPerCycle64));
    lVar15 = TempTimerValue;
    UNLOCK();
    LOCK();
    lVar25 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar25 == 1) {
      QueryPerformanceCounter(&local_250);
      LOCK();
      *plVar12 = *plVar12 + (local_250.QuadPart - lVar15);
      UNLOCK();
    }
    pTVar21 = local_248;
    (local_248->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_248->ArrayNum = 0;
    local_248->ArrayMax = 0;
    iVar19 = local_2f0.Matches.ArrayNum;
    uVar24 = (ulonglong)local_2f0.Matches.ArrayNum;
    pFVar33 = local_2f0.Matches.AllocatorInstance.Data + uVar24 * 0x40;
    FVar31.Data = local_2f0.Matches.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar24 != iVar19) {
        local_38d[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkMatchMeta_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_38d);
      }
      if (FVar31.Data == pFVar33) break;
      pFVar34 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar34 <= FVar31.Data) && (FVar31.Data < pFVar34 + (longlong)pTVar21->ArrayMax * 0x20))
         && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar18)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
        ;
        return pTVar21;
      }
      iVar20 = pTVar21->ArrayNum;
      if (iVar20 == pTVar21->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
      }
      pTVar21->ArrayNum = iVar20 + 1;
      uVar14 = *(undefined8 *)(FVar31.Data + 8);
      pFVar13 = (pTVar21->AllocatorInstance).Data;
      pFVar34 = pFVar13 + (longlong)iVar20 * 0x20;
      *(undefined8 *)pFVar34 = *(undefined8 *)FVar31.Data;
      *(undefined8 *)(pFVar34 + 8) = uVar14;
      pFVar34 = FVar31.Data + 0x10;
      uVar14 = *(undefined8 *)(FVar31.Data + 0x18);
      FVar31.Data = FVar31.Data + 0x40;
      pFVar13 = pFVar13 + (longlong)iVar20 * 0x20 + 0x10;
      *(undefined8 *)pFVar13 = *(undefined8 *)pFVar34;
      *(undefined8 *)(pFVar13 + 8) = uVar14;
      uVar24 = local_2f0.Matches._8_8_ & 0xffffffff;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
    if (((this->ScanTimer).bIsRunning != false) &&
       ((this->ScanTimer).bIsRunning = false, (this->ScanTimer).bIsPaused == false)) {
      QueryPerformanceCounter(&local_240);
      puVar3 = &(this->ScanTimer).Cycles;
      *puVar3 = *puVar3 + (local_240.QuadPart - (this->ScanTimer).StartCycles);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
    LOCK();
    FDataScanner::NumRunningScanners.Counter = FDataScanner::NumRunningScanners.Counter + -1;
    UNLOCK();
    LOCK();
    this->bIsComplete = (FThreadSafeBool)0x1;
    UNLOCK();
    operator_delete__(local_1b8.WindowData.Data);
    if (local_2f0.Matches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Matches.AllocatorInstance.Data);
    }
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
    return pTVar21;
  }
  goto LAB_1432669f0;
}

// SupportsFork @ 143269bb0

bool __thiscall BuildPatchServices::FDeltaScanner::SupportsFork(FDeltaScanner *this)

{
  int iVar1;
  
  iVar1 = (this->BytesProcessed).Counter;
  if (((this->bIsComplete == (FThreadSafeBool)0x0) && (iVar1 != 0)) &&
     (this->WindowSize * 3 < (uint)(this->Data->ArrayNum - iVar1))) {
    return true;
  }
  return false;
}

