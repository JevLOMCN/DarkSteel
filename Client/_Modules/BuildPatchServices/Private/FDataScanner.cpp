// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FDataScanner @ 143221610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDataScanner * __thiscall
BuildPatchServices::FDataScanner::FDataScanner
          (FDataScanner *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,ICloudEnumeration *param_3,
          FStatsCollector *param_4)

{
  TFuture<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  int iVar6;
  FStatsCollector *pFVar7;
  code *pcVar8;
  int iVar9;
  TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar10;
  TMap<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_> *pTVar11;
  TMap<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar12;
  long64 *plVar13;
  TFuture<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *pTVar14;
  undefined ***pppuVar15;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [16];
  TUniqueFunction<void___cdecl(void)> local_98;
  code *local_68 [2];
  undefined **local_58;
  FDataScanner *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this->ChunkWindowSizes = param_1;
  this->_padding_ = (longlong)&___7FDataScanner_BuildPatchServices__6B_;
  this->StatsCollector = param_4;
  this->Data = param_2;
  this->CloudEnumeration = param_3;
  pTVar10 = (TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
             *)(**(code **)((longlong)*param_3 + 0x18))(param_3);
  this->ChunkInventory = pTVar10;
  pTVar11 = (TMap<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
             *)(**(code **)((longlong)*this->CloudEnumeration + 0x28))();
  this->ChunkShaHashes = pTVar11;
  pTVar12 = (TMap<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
             *)(**(code **)((longlong)*this->CloudEnumeration + 0x50))();
  this->IdenticalChunks = pTVar12;
  pTVar1 = &this->FutureResult;
  this->bIsComplete = (FThreadSafeBool)0x0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->FutureResult).field_0x8 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ScanTimer,4000);
  pTVar4 = &this->MatchHistory;
  (this->ScanTimer).StartCycles = 0;
  piVar2 = &(this->MatchHistory).ArrayNum;
  (this->ScanTimer).Cycles = 0;
  piVar3 = &(this->MatchHistory).ArrayMax;
  (this->ScanTimer).bIsRunning = false;
  (this->ScanTimer).bIsPaused = false;
  this->MatchHistorySize = 100;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  uVar5 = this->MatchHistorySize;
  this->MatchHistoryNextIdx = 0;
  this->MatchHistoryNextOffset = 0;
  this->CurrentRepeatRunLength = 0;
  this->CurrentRepeatIdx = 0;
  if (-1 < (int)uVar5) {
    if (0 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar5,&pTVar4->AllocatorInstance,0,piVar3);
    }
    iVar6 = this->MatchHistorySize;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar6,&pTVar4->AllocatorInstance,piVar2,piVar3);
    DefaultConstructItems<FGuid,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 0x10,iVar6);
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Created Scanners");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,4,0);
    this->StatCreatedScanners = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Running Scanners");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,4,0);
    this->StatRunningScanners = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Complete Scanners");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,4,0);
    this->StatCompleteScanners = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: CPU Time");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,0,0);
    this->StatCpuTime = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Real Time");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,0,0);
    this->StatRealTime = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Hash Collisions");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,4,0);
    this->StatHashCollisions = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Total Data");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,1,0);
    this->StatTotalData = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Skipped Data");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,1,0);
    this->StatSkippedData = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    pFVar7 = this->StatsCollector;
    pcVar8 = *(code **)((longlong)*pFVar7 + 8);
    ::FString::FString((FString *)local_a8,L"Scanner: Processing Speed");
    plVar13 = (long64 *)(*pcVar8)(pFVar7,local_a8,2,0);
    this->StatProcessingSpeed = plVar13;
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    LOCK();
    *this->StatCreatedScanners = *this->StatCreatedScanners + 1;
    UNLOCK();
    LOCK();
    NumIncompleteScanners.Counter = NumIncompleteScanners.Counter + 1;
    UNLOCK();
    local_40 = (undefined ***)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`BuildPatchServices::FDataScanner::FDataScanner'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_98._0_8_ = 0;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`BuildPatchServices::FDataScanner::FDataScanner'::__l2::<lambda_1>,TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
                  ::Call;
    local_98._40_8_ = 0;
    local_50 = this;
    pTVar14 = Async<TFunction<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
                        ((TFuture<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
                          *)local_a8,ThreadPool,
                         (TFunction<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>___cdecl(void)>
                          *)local_68,&local_98);
    if (pTVar1 != pTVar14) {
      *(undefined8 *)pTVar1 = *(undefined8 *)pTVar14;
      *(undefined8 *)pTVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->FutureResult).field_0x8,
                 (FSharedReferencer<1> *)&pTVar14->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._8_8_);
    if (local_68[0] != (code *)0x0) {
      pppuVar15 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar15 = local_40;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// ~FDataScanner @ 143228100

void __thiscall BuildPatchServices::FDataScanner::~FDataScanner(FDataScanner *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  
  this->_padding_ = (longlong)&___7FDataScanner_BuildPatchServices__6B_;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar3 == '\0');
  }
  pFVar2 = (this->MatchHistory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureResult).field_0x8);
  this->_padding_ = (longlong)&___7IDataScanner_BuildPatchServices__6B_;
  return;
}

// ConsumeData @ 143246ea0

uint __thiscall
BuildPatchServices::FDataScanner::ConsumeData
          (FDataScanner *this,FRollingHash *param_1,uchar *param_2,uint param_3)

{
  uint local_18 [4];
  
  local_18[0] = FRollingHash::GetNumDataNeeded(param_1);
  if ((local_18[0] != 0) && (local_18[0] <= param_3)) {
    FRollingHash::ConsumeBytes(param_1,param_2,local_18);
    return local_18[0];
  }
  return 0;
}

// FindChunkDataMatch @ 143252150

bool __thiscall
BuildPatchServices::FDataScanner::FindChunkDataMatch
          (FDataScanner *this,FRollingHash *param_1,uint *param_2,FGuid *param_3,FSHAHash *param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
  *pTVar3;
  TSet<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_00;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  FSHAHash *pFVar13;
  ulong64 uVar14;
  TRingBuffer<unsigned_char> *this_01;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  
  uVar16 = this->MatchHistoryNextIdx - 1;
  if (this->MatchHistoryNextIdx < 1) {
    uVar16 = 0;
  }
  uVar19 = 0;
  if (*param_2 == this->MatchHistoryNextOffset) {
    if (((this->MatchHistory).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pFVar18 = (this->MatchHistory).AllocatorInstance.Data;
    if ((((*(int *)(pFVar18 + 0xc) != 0 || *(int *)(pFVar18 + 8) != 0) || *(int *)(pFVar18 + 4) != 0
         ) || *(int *)pFVar18 != 0) && (uVar16 != 0)) {
      uVar11 = 0;
      if ((int)uVar16 < (this->MatchHistory).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar18 = (this->MatchHistory).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
      if (((this->MatchHistory).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar1 = (this->MatchHistory).AllocatorInstance.Data;
      if (((*(int *)(pFVar18 + 0xc) == *(int *)(pFVar1 + 0xc) &&
           *(int *)(pFVar18 + 8) == *(int *)(pFVar1 + 8)) &&
          *(int *)(pFVar18 + 4) == *(int *)(pFVar1 + 4)) && *(int *)pFVar1 == *(int *)pFVar18) {
        if (this->CurrentRepeatRunLength == 0) {
          this->CurrentRepeatRunLength = uVar16;
          this->CurrentRepeatIdx = 1;
        }
        uVar16 = *param_2;
        uVar11 = FRollingHash::GetWindowSize(param_1);
        pTVar2 = this->Data;
        uVar11 = (uVar16 - 1) + uVar11;
        uVar17 = uVar11 - this->CurrentRepeatRunLength;
        uVar16 = uVar19;
        if ((int)uVar17 < pTVar2->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar18 = (pTVar2->AllocatorInstance).Data;
        pTVar2 = this->Data;
        uVar16 = uVar19;
        if ((int)uVar11 < pTVar2->ArrayNum) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        if (pFVar18[(int)uVar17] == (pTVar2->AllocatorInstance).Data[(int)uVar11]) {
          uVar16 = this->CurrentRepeatIdx;
          uVar19 = 0;
          if ((int)uVar16 < (this->MatchHistory).ArrayNum) {
            uVar19 = ~uVar16 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar18 = (this->MatchHistory).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
          uVar7 = *(undefined8 *)pFVar18;
          uVar8 = *(undefined8 *)(pFVar18 + 8);
          param_3->A = (int)uVar7;
          param_3->B = (int)((ulonglong)uVar7 >> 0x20);
          param_3->C = (int)uVar8;
          param_3->D = (int)((ulonglong)uVar8 >> 0x20);
          bVar9 = ((param_3->D != 0 || param_3->C != 0) || param_3->B != 0) || param_3->A != 0;
          if (((param_3->D != 0 || param_3->C != 0) || param_3->B != 0) || param_3->A != 0) {
            pFVar13 = TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                      ::FindChecked((TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                                     *)this->ChunkShaHashes,param_3);
            uVar7 = *(undefined8 *)(pFVar13->Hash + 8);
            *(undefined8 *)param_4->Hash = *(undefined8 *)pFVar13->Hash;
            *(undefined8 *)(param_4->Hash + 8) = uVar7;
            *(undefined4 *)(param_4->Hash + 0x10) = *(undefined4 *)(pFVar13->Hash + 0x10);
          }
          this->CurrentRepeatIdx = this->CurrentRepeatIdx + 1;
          this->MatchHistoryNextOffset = this->MatchHistoryNextOffset + 1;
          if (this->CurrentRepeatIdx <= this->CurrentRepeatRunLength) {
            return bVar9;
          }
          this->CurrentRepeatIdx = 1;
          return bVar9;
        }
        this->MatchHistoryNextOffset = 0;
      }
    }
  }
  if ((*param_2 != this->MatchHistoryNextOffset) ||
     (this->MatchHistorySize <= this->MatchHistoryNextIdx)) {
    if (((this->MatchHistory).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pFVar18 = (this->MatchHistory).AllocatorInstance.Data;
    *(undefined8 *)(pFVar18 + 8) = 0;
    *(undefined8 *)pFVar18 = 0;
    this->MatchHistoryNextIdx = 0;
    this->MatchHistoryNextOffset = 0;
    this->CurrentRepeatRunLength = 0;
    this->CurrentRepeatIdx = 0;
  }
  pTVar3 = this->ChunkInventory;
  uVar14 = FRollingHash::GetWindowHash(param_1);
  if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
    puVar21 = *(undefined1 **)&pTVar3->field_0x40;
    if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
      puVar21 = &pTVar3->field_0x38;
    }
    iVar12 = *(int *)(puVar21 +
                     ((uVar14 >> 0x20) * 0x17 + uVar14 &
                     (ulonglong)(*(int *)&pTVar3->field_0x48 - 1)) * 4);
    if (iVar12 != -1) {
      do {
        if (*(ulong64 *)((longlong)iVar12 * 0x60 + *(longlong *)pTVar3) == uVar14) {
          this_01 = FRollingHash::GetWindowData(param_1);
          TRingBuffer<unsigned_char>::GetShaHash(this_01,param_4);
          this_00 = (TSet<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                     *)this->IdenticalChunks;
          iVar12 = TSet<TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FSHAHash>(this_00,*(uint *)param_4->Hash,param_4);
          if (iVar12 != -1) {
            pTVar15 = TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                      ::FindChecked((TMapBase<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>_>
                                     *)this_00,param_4);
            puVar4 = *(uint **)&pTVar15->Elements;
            uVar19 = *puVar4;
            uVar11 = puVar4[1];
            uVar17 = puVar4[2];
            uVar6 = puVar4[3];
            param_3->A = uVar19;
            param_3->B = uVar11;
            param_3->C = uVar17;
            param_3->D = uVar6;
            uVar16 = this->MatchHistoryNextIdx;
            this->MatchHistoryNextIdx = uVar16 + 1;
            uVar20 = 0;
            if ((int)uVar16 < (this->MatchHistory).ArrayNum) {
              uVar20 = ~uVar16 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            pFVar18 = (this->MatchHistory).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10;
            *(uint *)pFVar18 = uVar19;
            *(uint *)(pFVar18 + 4) = uVar11;
            *(uint *)(pFVar18 + 8) = uVar17;
            *(uint *)(pFVar18 + 0xc) = uVar6;
            this->MatchHistoryNextOffset = *param_2 + 1;
            return true;
          }
          LOCK();
          *this->StatHashCollisions = *this->StatHashCollisions + 1;
          UNLOCK();
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x60 + 0x58 + *(longlong *)pTVar3);
      } while (iVar12 != -1);
    }
  }
  uVar16 = this->MatchHistoryNextIdx;
  if (0 < (int)uVar16) {
    this->MatchHistoryNextIdx = uVar16 + 1;
    if ((int)uVar16 < (this->MatchHistory).ArrayNum) {
      uVar19 = ~uVar16 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    pFVar18 = (this->MatchHistory).AllocatorInstance.Data;
    *(undefined8 *)(pFVar18 + (longlong)(int)uVar16 * 0x10 + 8) = 0;
    *(undefined8 *)(pFVar18 + (longlong)(int)uVar16 * 0x10) = 0;
    this->MatchHistoryNextOffset = this->MatchHistoryNextOffset + 1;
  }
  return false;
}

// Fork @ 1432531f0

FBlockRange * __thiscall
BuildPatchServices::FDataScanner::Fork(FDataScanner *this,FBlockRange *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FBlockRange *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DataScanner.cpp"
                     ,0x92,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBlockRange *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->First = 0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// GetResultWhenComplete @ 1432572a0

TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDataScanner::GetResultWhenComplete
          (FDataScanner *this,
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

// GetTimeRunning @ 143257640

double __thiscall BuildPatchServices::FDataScanner::GetTimeRunning(FDataScanner *this)

{
  double dVar1;
  
  dVar1 = TProcessTimer<BuildPatchServices::FStatsCollector,1>::GetSeconds(&this->ScanTimer);
  return dVar1;
}

// InsertMatch @ 143258300

int __thiscall
BuildPatchServices::FDataScanner::InsertMatch
          (FDataScanner *this,
          TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          ulong64 *param_3,FGuid *param_4,uint *param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar6 = param_1->ArrayNum;
  uVar11 = *param_3 + ((ulonglong)*param_5 - 1);
  if (param_2 < iVar6) {
    lVar12 = (longlong)param_2 << 5;
    uVar8 = param_2;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      uVar1 = *(ulonglong *)((param_1->AllocatorInstance).Data + lVar12);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar12 + 0x18);
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      if (*param_3 < uVar1) {
        if (uVar1 <= uVar11) {
          return param_2;
        }
        if ((*(uint *)((param_1->AllocatorInstance).Data + lVar12 + 0x18) <= *param_5) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DataSize < ThisMatchSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\DataScanner.cpp"
                               ,0x107,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                  (param_1,uVar8,1);
        pFVar10 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x20;
        *(ulong64 *)pFVar10 = *param_3;
        uVar3 = *(undefined8 *)&param_4->C;
        *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)param_4;
        *(undefined8 *)(pFVar10 + 0x10) = uVar3;
        *(uint *)(pFVar10 + 0x18) = *param_5;
        return uVar8;
      }
      if (*param_3 == uVar1) {
        return uVar8;
      }
      if (uVar11 <= ((ulonglong)uVar5 - 1) + uVar1) {
        return uVar8;
      }
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 0x20;
    } while ((int)uVar8 < iVar6);
  }
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
  *(ulong64 *)pFVar10 = *param_3;
  uVar3 = *(undefined8 *)&param_4->C;
  *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)param_4;
  *(undefined8 *)(pFVar10 + 0x10) = uVar3;
  *(uint *)(pFVar10 + 0x18) = *param_5;
  return iVar6;
}

// IsComplete @ 143258c50

bool __thiscall BuildPatchServices::FDataScanner::IsComplete(FDataScanner *this)

{
  return this->bIsComplete != (FThreadSafeBool)0x0;
}

// ScanData @ 143266250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDataScanner::ScanData
          (FDataScanner *this,
          TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  ulong64 *puVar1;
  uint uVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  long64 lVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [4];
  uint local_134;
  uint local_130;
  int local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  FScriptContainerElement *local_118;
  TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *local_110;
  FGuid local_108;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  ulonglong local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  longlong *local_c8;
  LARGE_INTEGER local_c0;
  longlong *local_b8;
  LARGE_INTEGER local_b0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_a8;
  FScriptContainerElement *local_a0;
  LARGE_INTEGER local_98;
  FRollingHash local_90;
  FSHAHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  LOCK();
  NumRunningScanners.Counter = NumRunningScanners.Counter + 1;
  UNLOCK();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_110 = __return_storage_ptr__;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
  if (((this->ScanTimer).bIsRunning == false) &&
     ((this->ScanTimer).bIsRunning = true, (this->ScanTimer).bIsPaused == false)) {
    QueryPerformanceCounter(&local_f8);
    (this->ScanTimer).StartCycles = (ulong64)local_f8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
  local_a8 = this->ChunkWindowSizes;
  local_120 = local_a8->ArrayNum;
  uVar13 = (ulonglong)(int)local_120;
  pFVar17 = (local_a8->AllocatorInstance).Data;
  local_a0 = pFVar17 + uVar13 * 4;
  do {
    pFVar8 = local_a0;
    uVar16 = 0;
    local_118 = pFVar17;
    if (local_a8->ArrayNum != (int)uVar13) {
      local_138[0] = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_138);
    }
    if (pFVar17 == pFVar8) {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
      if (((this->ScanTimer).bIsRunning != false) &&
         ((this->ScanTimer).bIsRunning = false, (this->ScanTimer).bIsPaused == false)) {
        QueryPerformanceCounter(&local_98);
        puVar1 = &(this->ScanTimer).Cycles;
        *puVar1 = *puVar1 + (local_98.QuadPart - (this->ScanTimer).StartCycles);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ScanTimer);
      LOCK();
      NumRunningScanners.Counter = NumRunningScanners.Counter + -1;
      UNLOCK();
      LOCK();
      this->bIsComplete = (FThreadSafeBool)0x1;
      UNLOCK();
      return local_110;
    }
    uVar2 = *(uint *)pFVar17;
    local_134 = uVar2;
    FRollingHash::FRollingHash(&local_90,uVar2);
    pTVar3 = this->Data;
    local_108.A = 0;
    local_108.B = 0;
    local_108.C = 0;
    local_108.D = 0;
    local_58.Hash[0] = '\0';
    local_58.Hash[1] = '\0';
    local_58.Hash[2] = '\0';
    local_58.Hash[3] = '\0';
    local_58.Hash[4] = '\0';
    local_58.Hash[5] = '\0';
    local_58.Hash[6] = '\0';
    local_58.Hash[7] = '\0';
    local_58.Hash[8] = '\0';
    local_58.Hash[9] = '\0';
    local_58.Hash[10] = '\0';
    local_58.Hash[0xb] = '\0';
    local_58.Hash[0xc] = '\0';
    local_58.Hash[0xd] = '\0';
    local_58.Hash[0xe] = '\0';
    local_58.Hash[0xf] = '\0';
    local_58.Hash[0x10] = '\0';
    local_58.Hash[0x11] = '\0';
    local_58.Hash[0x12] = '\0';
    local_58.Hash[0x13] = '\0';
    uVar15 = pTVar3->ArrayNum;
    uVar14 = 0;
    local_12c = 0;
    if (((int)uVar15 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    pFVar17 = (pTVar3->AllocatorInstance).Data;
    local_130 = FRollingHash::GetNumDataNeeded(&local_90);
    if ((local_130 != 0) && (local_130 <= uVar15)) {
      FRollingHash::ConsumeBytes(&local_90,(uchar *)pFVar17,&local_130);
      uVar14 = local_130;
    }
    QueryPerformanceCounter(&local_f0);
    local_c8 = this->StatRunningScanners;
    local_d0 = local_f0;
    local_b8 = this->StatRealTime;
    LOCK();
    lVar12 = *local_c8;
    *local_c8 = *local_c8 + 1;
    UNLOCK();
    if (lVar12 == 0) {
      QueryPerformanceCounter(&local_e8);
      LOCK();
      TempTimerValue = local_e8.QuadPart;
      UNLOCK();
    }
    while (this->bShouldAbort == (FThreadSafeBool)0x0) {
      uVar15 = uVar14 - uVar2;
      uVar13 = uVar2 + uVar16;
      local_124 = uVar15;
      bVar9 = FindChunkDataMatch(this,&local_90,&local_124,&local_108,&local_58);
      if (bVar9) {
        uVar16 = (ulonglong)uVar15;
        local_e0 = (ulonglong)uVar15;
        local_12c = InsertMatch(this,local_110,local_12c,&local_e0,&local_108,&local_134);
        if (uVar15 < uVar13) goto LAB_143266556;
        FRollingHash::Clear(&local_90);
        pTVar3 = this->Data;
        uVar15 = pTVar3->ArrayNum;
        if (uVar15 <= (uVar2 - 1) + uVar14) break;
        uVar10 = 0;
        if ((int)uVar14 < (int)uVar15) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar5)();
          return pTVar11;
        }
        pFVar17 = (pTVar3->AllocatorInstance).Data;
        local_128 = FRollingHash::GetNumDataNeeded(&local_90);
        if ((local_128 == 0) || (uVar15 - uVar14 < local_128)) {
          LOCK();
          *this->StatSkippedData = *this->StatSkippedData;
          UNLOCK();
        }
        else {
          FRollingHash::ConsumeBytes(&local_90,(uchar *)(pFVar17 + (int)uVar14),&local_128);
          LOCK();
          *this->StatSkippedData = *this->StatSkippedData + (ulonglong)local_128;
          UNLOCK();
          uVar14 = uVar14 + local_128;
        }
      }
      else {
LAB_143266556:
        pTVar3 = this->Data;
        uVar15 = pTVar3->ArrayNum;
        if (uVar15 <= uVar14) break;
        lVar12 = (longlong)(int)uVar14;
        uVar10 = 0;
        if ((int)uVar14 < (int)uVar15) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)
                    (*pcVar5)();
          return pTVar11;
        }
        uVar14 = uVar14 + 1;
        FRollingHash::RollForward(&local_90,(uchar *)((pTVar3->AllocatorInstance).Data + lVar12));
      }
    }
    plVar4 = this->StatCpuTime;
    QueryPerformanceCounter(&local_d8);
    plVar7 = local_c8;
    LOCK();
    *plVar4 = *plVar4 + (local_d8.QuadPart - (longlong)local_d0);
    UNLOCK();
    LOCK();
    *this->StatTotalData = *this->StatTotalData + (longlong)this->Data->ArrayNum;
    UNLOCK();
    if (*local_c8 < 1) {
      lVar12 = 0;
    }
    else {
      QueryPerformanceCounter(&local_c0);
      lVar12 = local_c0.QuadPart - TempTimerValue;
    }
    plVar4 = local_b8;
    LOCK();
    *this->StatProcessingSpeed =
         (longlong)
         ((double)*this->StatTotalData /
         ((double)(ulonglong)(lVar12 + *local_b8) * FGenericPlatformTime::SecondsPerCycle64));
    lVar6 = TempTimerValue;
    UNLOCK();
    LOCK();
    lVar12 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar12 == 1) {
      QueryPerformanceCounter(&local_b0);
      LOCK();
      *plVar4 = *plVar4 + (local_b0.QuadPart - lVar6);
      UNLOCK();
    }
    operator_delete__(local_90.WindowData.Data);
    pFVar17 = local_118 + 4;
    uVar13 = (ulonglong)local_120;
  } while( true );
}

// SupportsFork @ 143269ba0

bool __thiscall BuildPatchServices::FDataScanner::SupportsFork(FDataScanner *this)

{
  return false;
}

