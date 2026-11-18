// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FLoadTimeTracker @ 141986800

FLoadTimeTracker * __thiscall FLoadTimeTracker::FLoadTimeTracker(FLoadTimeTracker *this)

{
  *(undefined8 *)&this->TimeInfo = 0;
  *(undefined8 *)&(this->TimeInfo).field_0x8 = 0;
  *(undefined8 *)&(this->TimeInfo).field_0x20 = 0;
  *(undefined4 *)&(this->TimeInfo).field_0x28 = 0;
  *(undefined4 *)&(this->TimeInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeInfo).field_0x34 = 0;
  *(undefined4 *)&(this->TimeInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimeInfo).field_0x40 = 0;
  *(undefined4 *)&(this->TimeInfo).field_0x48 = 0;
  *(undefined8 *)&this->AccumulatedTimeInfo = 0;
  *(undefined8 *)&(this->AccumulatedTimeInfo).field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTimeInfo).field_0x20 = 0;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AccumulatedTimeInfo).field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x48 = 0;
  this->bAccumulating = false;
  return this;
}

// DumpHighLevelLoadTimes @ 1419917e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLoadTimeTracker::DumpHighLevelLoadTimes(FLoadTimeTracker *this)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  FLoadTimeTracker *pFVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  FString local_d8;
  FLoadTimeTracker *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  FLoadTimeTracker *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> aTStack_90 [2];
  
  if (4 < (byte)LogLoad._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
  }
  iVar2 = *(int *)&(this->TimeInfo).field_0x28;
  local_b8 = &(this->TimeInfo).field_0x10;
  iStack_c0 = 0;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->TimeInfo).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_b8;
    }
    uVar8 = *puVar9;
    while (uVar8 == 0) {
      lVar7 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1419918ae;
      uVar8 = puVar9[lVar7 + 1];
    }
    uStack_bc = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_bc * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_ac = local_a8 + -1 + (int)lVar7;
    if (iVar2 < iStack_ac) {
      iStack_ac = iVar2;
    }
  }
LAB_1419918ae:
  uStack_b0 = 0xffffffff;
  aTStack_90[0]._padding_ = CONCAT44(uStack_bc,iStack_c0);
  aTStack_90[0].UnvisitedBitMask = 0xffffffff;
  aTStack_90[0]._28_4_ = iStack_ac;
  aTStack_90[0].BaseBitIndex = local_a8;
  local_c8 = this;
  iStack_a4 = iStack_ac;
  local_98 = this;
  aTStack_90[0].Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  aTStack_90[0].CurrentBitIndex = iStack_ac;
  if (iStack_ac < iVar2) {
    do {
      pFVar4 = local_98;
      lVar10 = (longlong)aTStack_90[0].CurrentBitIndex * 0x20;
      ::FName::ToString((FName *)(*(longlong *)&local_98->TimeInfo + lVar10),&local_d8);
      lVar7 = *(longlong *)&pFVar4->TimeInfo;
      iVar2 = *(int *)(lVar10 + 0x10 + lVar7);
      if (iVar2 == 1) {
        if (4 < (byte)LogLoad._0_1_) {
          if ((*(int *)((longlong)aTStack_90[0].CurrentBitIndex * 0x20 + 0x10 + lVar7) < 1) &&
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
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
        }
      }
      else {
        uVar8 = 0;
        if (0 < iVar2) {
          do {
            uVar6 = 0;
            if ((int)uVar8 <
                *(int *)((longlong)aTStack_90[0].CurrentBitIndex * 0x20 + 0x10 +
                        *(longlong *)&pFVar4->TimeInfo)) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            if (4 < (byte)LogLoad._0_1_) {
              uVar6 = 0;
              if ((int)uVar8 < *(int *)(lVar10 + 0x10 + lVar7)) {
                uVar6 = ~uVar8 >> 0x1f;
              }
              if ((uVar6 == 0) &&
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
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < *(int *)(lVar10 + 0x10 + lVar7));
        }
        if (4 < (byte)LogLoad._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
        }
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      aTStack_90[0].UnvisitedBitMask =
           aTStack_90[0].UnvisitedBitMask & ~aTStack_90[0]._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(aTStack_90);
    } while (aTStack_90[0].CurrentBitIndex < (aTStack_90[0].Array)->NumBits);
  }
  if ((4 < (byte)LogLoad._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad),
     4 < (byte)LogLoad._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
  }
  return;
}

// DumpHighLevelLoadTimesStatic @ 141991c00

void __cdecl FLoadTimeTracker::DumpHighLevelLoadTimesStatic(void)

{
  FLoadTimeTracker *this;
  
  this = Get();
  DumpHighLevelLoadTimes(this);
  return;
}

// DumpRawLoadTimes @ 141991c20

void __thiscall FLoadTimeTracker::DumpRawLoadTimes(FLoadTimeTracker *this)

{
  return;
}

// DumpRawLoadTimesStatic @ 141991c30

void __cdecl FLoadTimeTracker::DumpRawLoadTimesStatic(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FLoadTimeTracker::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return;
    }
  }
  return;
}

// Get @ 141994770

FLoadTimeTracker * __cdecl FLoadTimeTracker::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FLoadTimeTracker::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetScopeTimeAccumulator @ 141995640

double * __thiscall
FLoadTimeTracker::GetScopeTimeAccumulator(FLoadTimeTracker *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  double *pdVar5;
  TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
  *this_00;
  FTimeAndCount *pFVar6;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\LoadTimeTracker.cpp"
                       ,0x2a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pdVar5 = (double *)(*pcVar2)();
      return pdVar5;
    }
  }
  FVar1 = *param_1;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = (TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
             *)TMapBase<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
                           *)&this->AccumulatedTimeInfo,uVar4 + FVar1.Number,param_1);
  FVar1 = *param_2;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar6 = TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
           ::FindOrAddImpl<FName_const_&>(this_00,uVar4 + FVar1.Number,param_2);
  pFVar6->Count = pFVar6->Count + 1;
  return &pFVar6->Time;
}

// ReportScopeTime @ 1419a83a0

void __thiscall
FLoadTimeTracker::ReportScopeTime(FLoadTimeTracker *this,double param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar7;
  double local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\LoadTimeTracker.cpp"
                       ,0x23,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3 = local_res18[0];
  uVar5 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
  pTVar7 = TMapBase<FName,TArray<double,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TArray<double,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar5 + FVar3.Number,local_res18);
  pFVar1 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 < pFVar1 + (longlong)pTVar7->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = pTVar7->ArrayNum;
  if (iVar6 == pTVar7->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar6 + 1;
  *(double *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// ResetHighLevelLoadTimes @ 1419a8b20

void __thiscall FLoadTimeTracker::ResetHighLevelLoadTimes(FLoadTimeTracker *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"NoLoadTrackClear");
      bActuallyReset = !bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bActuallyReset != false) {
    TSet<TTuple<FName,TArray<double,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TArray<double,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)this);
    return;
  }
  return;
}

// ResetRawLoadTimes @ 1419a8bb0

void __thiscall FLoadTimeTracker::ResetRawLoadTimes(FLoadTimeTracker *this)

{
  return;
}

// ResetRawLoadTimesStatic @ 1419a8bc0

void __cdecl FLoadTimeTracker::ResetRawLoadTimesStatic(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FLoadTimeTracker::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return;
    }
  }
  return;
}

// StartAccumulatedLoadTimes @ 1419ab840

void __thiscall FLoadTimeTracker::StartAccumulatedLoadTimes(FLoadTimeTracker *this)

{
  TMap<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->AccumulatedTimeInfo;
  this->bAccumulating = true;
  bVar3 = 1 < *(int *)&(this->AccumulatedTimeInfo).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AccumulatedTimeInfo).field_0x8);
  puVar1 = &(this->AccumulatedTimeInfo).field_0xc;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x34 = 0;
  iVar2 = *(int *)&(this->AccumulatedTimeInfo).field_0x2c;
  *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AccumulatedTimeInfo).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->AccumulatedTimeInfo).field_0x48 = 1;
    TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// StartAccumulatedLoadTimesStatic @ 1419ab900

void __cdecl FLoadTimeTracker::StartAccumulatedLoadTimesStatic(void)

{
  TMap<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
  *this;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  FLoadTimeTracker *pFVar4;
  
  pFVar4 = Get();
  this = &pFVar4->AccumulatedTimeInfo;
  pFVar4->bAccumulating = true;
  bVar3 = 1 < *(int *)&(pFVar4->AccumulatedTimeInfo).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(pFVar4->AccumulatedTimeInfo).field_0x8);
  puVar1 = &(pFVar4->AccumulatedTimeInfo).field_0xc;
  *(undefined4 *)&(pFVar4->AccumulatedTimeInfo).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar4->AccumulatedTimeInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar4->AccumulatedTimeInfo).field_0x34 = 0;
  iVar2 = *(int *)&(pFVar4->AccumulatedTimeInfo).field_0x2c;
  *(undefined4 *)&(pFVar4->AccumulatedTimeInfo).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pFVar4->AccumulatedTimeInfo).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar4->AccumulatedTimeInfo).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(pFVar4->AccumulatedTimeInfo).field_0x48 = 1;
    TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// StopAccumulatedLoadTimes @ 1419ac600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLoadTimeTracker::StopAccumulatedLoadTimes(FLoadTimeTracker *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TMap<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
  *pTVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  longlong *plVar10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  FString local_b8;
  TMap<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  TBitArray<FDefaultBitArrayAllocator> *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  FString local_50;
  undefined4 local_34;
  
  this->bAccumulating = false;
  if (4 < (byte)LogLoad._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
  }
  local_a8 = &this->AccumulatedTimeInfo;
  iVar7 = 0;
  iVar2 = *(int *)&(this->AccumulatedTimeInfo).field_0x28;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AccumulatedTimeInfo).field_0x10;
  TStack_e0.BaseBitIndex = 0;
  uVar5 = 1;
  TStack_e0.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->AccumulatedTimeInfo).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_e0.Array;
    }
    uVar3 = *puVar8;
    while (uVar3 == 0) {
      lVar6 = (longlong)iVar7;
      TStack_e0.BaseBitIndex = TStack_e0.BaseBitIndex + 0x20;
      iVar7 = iVar7 + 1;
      TStack_e0.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_1419ac6ba;
      uVar3 = puVar8[lVar6 + 1];
    }
    uVar5 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    TStack_e0.CurrentBitIndex = TStack_e0.BaseBitIndex + -1 + (int)lVar6;
    if (iVar2 < TStack_e0.CurrentBitIndex) {
      TStack_e0.CurrentBitIndex = iVar2;
    }
  }
LAB_1419ac6ba:
  TStack_e0._padding_ = CONCAT44(uVar5,iVar7);
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = local_34;
  TStack_a0._padding_ = TStack_e0._padding_;
  TStack_a0.BaseBitIndex = TStack_e0.BaseBitIndex;
  TStack_a0._28_4_ = local_34;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0.Array = TStack_e0.Array;
  TStack_a0.CurrentBitIndex = TStack_e0.CurrentBitIndex;
  if (TStack_e0.CurrentBitIndex < iVar2) {
    do {
      pTVar4 = local_a8;
      lVar6 = (longlong)TStack_a0.CurrentBitIndex;
      ::FName::ToString((FName *)(*(longlong *)local_a8 + lVar6 * 0x60),&local_b8);
      if ((4 < (byte)LogLoad._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad),
         4 < (byte)LogLoad._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
      iStack_78 = 0;
      plVar10 = (longlong *)(*(longlong *)pTVar4 + 8 + lVar6 * 0x60);
      local_60 = 0;
      iVar2 = (int)plVar10[5];
      uStack_74 = 1;
      TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar10 + 2);
      iStack_64 = 0;
      if (iVar2 != 0) {
        pTVar9 = TStack_e0.Array;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar10[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)plVar10[4];
        }
        uVar5 = *(uint *)(pTVar9->AllocatorInstance).InlineData;
        while (uVar5 == 0) {
          lVar6 = (longlong)iStack_78;
          local_60 = local_60 + 0x20;
          iStack_78 = iStack_78 + 1;
          iStack_64 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_1419ac81b;
          uVar5 = *(uint *)((pTVar9->AllocatorInstance).InlineData + lVar6 * 4 + 4);
        }
        uStack_74 = -uVar5 & uVar5;
        uVar1 = (ulonglong)uStack_74 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iStack_64 = local_60 + -1 + (int)lVar6;
        if (iVar2 < iStack_64) {
          iStack_64 = iVar2;
        }
      }
LAB_1419ac81b:
      uStack_68 = 0xffffffff;
      uStack_5c = local_34;
      TStack_e0._padding_ = CONCAT44(uStack_74,iStack_78);
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      TStack_e0._28_4_ = local_34;
      TStack_e0.BaseBitIndex = local_60;
      local_80 = plVar10;
      local_70 = TStack_e0.Array;
      TStack_e0.CurrentBitIndex = iStack_64;
      if (iStack_64 < iVar2) {
        do {
          ::FName::ToString((FName *)(*plVar10 + (longlong)TStack_e0.CurrentBitIndex * 0x20),
                            &local_50);
          if (4 < (byte)LogLoad._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
        } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
      }
      if ((4 < (byte)LogLoad._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad),
         4 < (byte)LogLoad._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    } while (TStack_a0.CurrentBitIndex < (TStack_a0.Array)->NumBits);
  }
  return;
}

// StopAccumulatedLoadTimesStatic @ 1419ac9c0

void __cdecl FLoadTimeTracker::StopAccumulatedLoadTimesStatic(void)

{
  FLoadTimeTracker *this;
  
  this = Get();
  StopAccumulatedLoadTimes(this);
  return;
}

