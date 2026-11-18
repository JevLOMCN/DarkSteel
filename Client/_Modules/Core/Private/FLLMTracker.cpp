// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 49

// FLLMTracker @ 141678640

FLLMTracker * __thiscall
UE::LLMPrivate::FLLMTracker::FLLMTracker(FLLMTracker *this,FLowLevelMemTracker *param_1)

{
  double dVar1;
  DWORD DVar2;
  PointerKey *pPVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint **ppuVar6;
  longlong lVar7;
  LARGE_INTEGER local_res8;
  
  this->LLMRef = param_1;
  (this->ThreadStates).AllocatorInstance.Data = (void *)0x0;
  (this->ThreadStates).AllocatorInstance.Size = 0;
  (this->ThreadStates).ArrayNum = 0;
  (this->ThreadStates).ArrayMax = 0;
  this->Tracker = Max;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard,4000);
  (this->PendingThreadStates).AllocatorInstance.Data = (void *)0x0;
  ppuVar6 = &(this->AllocationMap).MapStripes[0].Map;
  (this->PendingThreadStates).AllocatorInstance.Size = 0;
  lVar7 = 0x10;
  (this->PendingThreadStates).ArrayNum = 0;
  (this->PendingThreadStates).ArrayMax = 0;
  *(undefined8 *)&this->ThreadIdToThreadState = 0;
  *(undefined8 *)&(this->ThreadIdToThreadState).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadIdToThreadState).field_0x10 = 0;
  *(undefined8 *)&(this->ThreadIdToThreadState).field_0x28 = 0;
  *(undefined8 *)&(this->ThreadIdToThreadState).field_0x30 = 0;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x38 = 0;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x3c = 0x80;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x44 = 0;
  *(undefined8 *)&(this->ThreadIdToThreadState).field_0x50 = 0;
  *(undefined8 *)&(this->ThreadIdToThreadState).field_0x58 = 0;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x60 = 0;
  this->TrackedTotal = 0;
  do {
    lVar7 = lVar7 + -1;
    uVar5 = 4000;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(ppuVar6 + -6),4000);
    ppuVar6[-1] = (uint *)0x0;
    ((FLLMArray<PointerKey,unsigned_int> *)(ppuVar6 + 2))->Array = (PointerKey *)(ppuVar6 + 5);
    *ppuVar6 = (uint *)0x0;
    lVar4 = 4;
    ppuVar6[1] = (uint *)0x0;
    *(uint *)(ppuVar6 + 3) = 0;
    *(uint *)((longlong)ppuVar6 + 0x1c) = 0x40;
    ppuVar6[4] = (uint *)0x0;
    pPVar3 = (PointerKey *)(ppuVar6 + 5);
    do {
      pPVar3->Pointer = 0;
      pPVar3[1].Pointer = 0;
      pPVar3[2].Pointer = 0;
      pPVar3[3].Pointer = 0;
      pPVar3[4].Pointer = 0;
      pPVar3[5].Pointer = 0;
      pPVar3[6].Pointer = 0;
      pPVar3[7].Pointer = 0;
      pPVar3[8].Pointer = 0;
      pPVar3[9].Pointer = 0;
      pPVar3[10].Pointer = 0;
      pPVar3[0xb].Pointer = 0;
      pPVar3[0xc].Pointer = 0;
      pPVar3[0xd].Pointer = 0;
      pPVar3[0xe].Pointer = 0;
      pPVar3[0xf].Pointer = 0;
      lVar4 = lVar4 + -1;
      pPVar3 = pPVar3 + 0x10;
    } while (lVar4 != 0);
    *(uint *)(ppuVar6 + 0x46) = 0;
    ((FLLMArray<unsigned_int,unsigned_int> *)(ppuVar6 + 0x45))->Array = (uint *)(ppuVar6 + 0x48);
    *(uint *)((longlong)ppuVar6 + 0x234) = 0x40;
    ((FLLMArray<unsigned_int,unsigned_int> *)(ppuVar6 + 0x68))->Array = (uint *)(ppuVar6 + 0x6b);
    ppuVar6[0x47] = (uint *)0x0;
    *(uint *)(ppuVar6 + 0x69) = 0;
    *(uint *)((longlong)ppuVar6 + 0x34c) = 0x40;
    ppuVar6[0x6a] = (uint *)0x0;
    ((FLLMArray<UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int> *)(ppuVar6 + 0x8b))->
    Array = (FLowLevelAllocInfo *)(ppuVar6 + 0x8e);
    *(uint *)(ppuVar6 + 0x8c) = 0;
    *(uint *)((longlong)ppuVar6 + 0x464) = 0x40;
    ppuVar6[0x8d] = (uint *)0x0;
    memset((FLowLevelAllocInfo *)(ppuVar6 + 0x8e),(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff),
           0x200);
    *(uint *)(ppuVar6 + 0xcf) = 0;
    ((FLLMArray<unsigned_int,unsigned_int> *)(ppuVar6 + 0xce))->Array = (uint *)(ppuVar6 + 0xd1);
    *(uint *)((longlong)ppuVar6 + 0x67c) = 0x40;
    ppuVar6[0xd0] = (uint *)0x0;
    ppuVar6 = ppuVar6 + 0xf7;
  } while (lVar7 != 0);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AllocationMap).AllStripesMutex,4000);
  (this->AllocationMap).bAllStripesLocked = (atomic<bool>)0x0;
  *(undefined8 *)&this->TagSizes = 0;
  *(undefined8 *)&(this->TagSizes).field_0x8 = 0;
  *(undefined8 *)&(this->TagSizes).field_0x10 = 0;
  *(undefined8 *)&(this->TagSizes).field_0x28 = 0;
  *(undefined8 *)&(this->TagSizes).field_0x30 = 0;
  *(undefined4 *)&(this->TagSizes).field_0x38 = 0;
  *(undefined4 *)&(this->TagSizes).field_0x3c = 0x80;
  *(undefined4 *)&(this->TagSizes).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->TagSizes).field_0x44 = 0;
  *(undefined8 *)&(this->TagSizes).field_0x50 = 0;
  *(undefined8 *)&(this->TagSizes).field_0x58 = 0;
  *(undefined4 *)&(this->TagSizes).field_0x60 = 0;
  this->OverrideUntaggedTagData = (FTagData *)0x0;
  this->OverrideTrackedTotalTagData = (FTagData *)0x0;
  *(undefined8 *)&(this->CsvWriter).Columns = 0;
  *(undefined8 *)&(this->CsvWriter).Columns.field_0x8 = 0;
  *(undefined8 *)&(this->CsvWriter).Columns.field_0x10 = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns.field_0x8 = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns.field_0x10 = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns.field_0x28 = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns.field_0x30 = 0;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x38 = 0;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x3c = 0x80;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x44 = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns.field_0x50 = 0;
  *(undefined8 *)&(this->CsvWriter).ExistingColumns.field_0x58 = 0;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x60 = 0;
  (this->CsvWriter).Archive = (FArchive *)0x0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->CsvWriter).WriteCount = 0;
  (this->CsvWriter).bRegisteredFlushDelegate = false;
  (this->CsvWriter).LastWriteTime = dVar1 + __real_4170000000000000;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags = 0;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags.field_0x8 = 0;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags.field_0x10 = 0;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags.field_0x28 = 0;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags.field_0x30 = 0;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x38 = 0;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x3c = 0x80;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x44 = 0;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags.field_0x50 = 0;
  *(undefined8 *)&(this->TraceWriter).DeclaredTags.field_0x58 = 0;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x60 = 0;
  (this->TraceWriter).bTrackerSpecSent = false;
  (this->TraceWriter).bTagSetSpecSent = false;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName = 0;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x8 = 0;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x10 = 0;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x28 = 0;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x30 = 0;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x38 = 0;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x3c = 0x80;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x44 = 0;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x50 = 0;
  *(undefined8 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x58 = 0;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x60 = 0;
  this->LastTrimTime = 0.0;
  DVar2 = TlsAlloc();
  this->TlsSlot = DVar2;
  this->AllocTypeAmounts[0] = 0;
  this->AllocTypeAmounts[1] = 0;
  this->AllocTypeAmounts[2] = 0;
  this->AllocTypeAmounts[3] = 0;
  return this;
}

// ~FLLMTracker @ 14167bba0

void __thiscall UE::LLMPrivate::FLLMTracker::~FLLMTracker(FLLMTracker *this)

{
  void *pvVar1;
  
  Clear(this);
  TlsFree(this->TlsSlot);
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x60 = 0;
  pvVar1 = *(void **)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,
                        *(ulong64 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,FName>_>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,FName>_>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,FName>_>,FDefaultSparseArrayLLMAllocator>
              *)&(this->CsvProfilerWriter).TagDataToCsvStatName);
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x60 = 0;
  pvVar1 = *(void **)&(this->TraceWriter).DeclaredTags.field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,*(ulong64 *)&(this->TraceWriter).DeclaredTags.field_0x58);
  }
  TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
              *)&(this->TraceWriter).DeclaredTags);
  FLLMCsvWriter::~FLLMCsvWriter(&this->CsvWriter);
  *(undefined4 *)&(this->TagSizes).field_0x60 = 0;
  pvVar1 = *(void **)&(this->TagSizes).field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,*(ulong64 *)&(this->TagSizes).field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
              *)&this->TagSizes);
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  ~LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
            (&this->AllocationMap);
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x60 = 0;
  pvVar1 = *(void **)&(this->ThreadIdToThreadState).field_0x50;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,*(ulong64 *)&(this->ThreadIdToThreadState).field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>_>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>_>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>_>,FDefaultSparseArrayLLMAllocator>
              *)&this->ThreadIdToThreadState);
  pvVar1 = (this->PendingThreadStates).AllocatorInstance.Data;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,(this->PendingThreadStates).AllocatorInstance.Size);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
  pvVar1 = (this->ThreadStates).AllocatorInstance.Data;
  if (pvVar1 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar1,(this->ThreadStates).AllocatorInstance.Size);
  }
  return;
}

// CaptureTagSnapshot @ 14168a250

void __thiscall UE::LLMPrivate::FLLMTracker::CaptureTagSnapshot(FLLMTracker *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  FLLMThreadState *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_60;
  undefined8 uStack_40;
  
  UpdateThreads(this);
  puVar11 = (this->ThreadStates).AllocatorInstance.Data;
  iVar4 = (this->ThreadStates).ArrayNum;
  puVar2 = puVar11 + iVar4;
  while( true ) {
    if ((this->ThreadStates).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar2) break;
    this_00 = (FLLMThreadState *)*puVar11;
    FLLMThreadState::PropagateChildSizesToParents(this_00);
    FLLMThreadState::FetchAndClearTagSizes(this_00,&this->TagSizes,this->AllocTypeAmounts,false);
    puVar11 = puVar11 + 1;
  }
  iVar4 = *(int *)&(this->TagSizes).field_0x38;
  puVar1 = &(this->TagSizes).field_0x18;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->TagSizes).field_0x28;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14168a33e;
      uVar10 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14168a33e:
  uVar10 = *(uint *)&(this->TagSizes).field_0x38;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44);
  TStack_60.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->TagSizes).field_0x38;
  if (uVar10 != uVar7) {
    puVar13 = *(undefined1 **)&(this->TagSizes).field_0x28;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14168a440;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14168a440:
  while( true ) {
    if (*(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_60.CurrentBitIndex * 0x38 + *(longlong *)&this->TagSizes;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar9 + 8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->TrackedTotalInSnapshot = this->TrackedTotal;
  return;
}

// Clear @ 14168ab00

void __thiscall UE::LLMPrivate::FLLMTracker::Clear(FLLMTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined1 *puVar2;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,FName> *this_00;
  int iVar3;
  void *pvVar4;
  FLowLevelMemTracker *pFVar5;
  bool bVar6;
  longlong lVar7;
  TLLMSet<UE::LLMPrivate::FTagData_const_*> *pTVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  
  lpCriticalSection = &this->PendingThreadStatesGuard;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar10 = (this->PendingThreadStates).AllocatorInstance.Data;
  iVar3 = (this->PendingThreadStates).ArrayNum;
  puVar11 = puVar10 + iVar3;
  local_res18 = puVar11;
  while( true ) {
    if ((this->PendingThreadStates).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (puVar10 == puVar11) break;
    pvVar4 = (void *)*puVar10;
    pFVar5 = this->LLMRef;
    if (pvVar4 != (void *)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar4 + 0x78));
      if (*(void **)((longlong)pvVar4 + 0x60) != (void *)0x0) {
        FLLMAllocator::Free(Allocator,*(void **)((longlong)pvVar4 + 0x60),
                            *(ulong64 *)((longlong)pvVar4 + 0x68));
      }
      lVar9 = 4;
      lVar7 = (longlong)pvVar4 + 0x60;
      do {
        lVar9 = lVar9 + -1;
        if (*(void **)(lVar7 + -0x18) != (void *)0x0) {
          FLLMAllocator::Free(Allocator,*(void **)(lVar7 + -0x18),*(ulong64 *)(lVar7 + -0x10));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar9 != 0);
      FLLMAllocator::Free(&pFVar5->Allocator,pvVar4,200);
      puVar11 = local_res18;
    }
    puVar10 = puVar10 + 1;
  }
  piVar1 = &(this->PendingThreadStates).ArrayMax;
  (this->PendingThreadStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,&(this->PendingThreadStates).AllocatorInstance,0,piVar1);
  }
  bVar6 = 1 < *(int *)&(this->ThreadIdToThreadState).field_0x60;
  if (!bVar6) {
    TSet<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::LLMPrivate::FLLMThreadState_*,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::LLMPrivate::FLLMThreadState_*,0>,FDefaultSetLLMAllocator>
                      *)&this->ThreadIdToThreadState);
  }
  puVar2 = &(this->ThreadIdToThreadState).field_0x14;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x10 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->ThreadIdToThreadState,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x44 = 0;
  iVar3 = *(int *)&(this->ThreadIdToThreadState).field_0x3c;
  *(undefined4 *)&(this->ThreadIdToThreadState).field_0x38 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ThreadIdToThreadState).field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)&(this->ThreadIdToThreadState).field_0x18,
               0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->ThreadIdToThreadState).field_0x60 = 1;
    TSet<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::LLMPrivate::FLLMThreadState_*,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::LLMPrivate::FLLMThreadState_*,0>,FDefaultSetLLMAllocator>
              *)&this->ThreadIdToThreadState);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar10 = (this->ThreadStates).AllocatorInstance.Data;
  iVar3 = (this->ThreadStates).ArrayNum;
  puVar11 = puVar10 + iVar3;
  while( true ) {
    if ((this->ThreadStates).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (puVar10 == puVar11) break;
    pvVar4 = (void *)*puVar10;
    pFVar5 = this->LLMRef;
    if (pvVar4 != (void *)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar4 + 0x78));
      if (*(void **)((longlong)pvVar4 + 0x60) != (void *)0x0) {
        FLLMAllocator::Free(Allocator,*(void **)((longlong)pvVar4 + 0x60),
                            *(ulong64 *)((longlong)pvVar4 + 0x68));
      }
      lVar9 = 4;
      lVar7 = (longlong)pvVar4 + 0x60;
      do {
        lVar9 = lVar9 + -1;
        if (*(void **)(lVar7 + -0x18) != (void *)0x0) {
          FLLMAllocator::Free(Allocator,*(void **)(lVar7 + -0x18),*(ulong64 *)(lVar7 + -0x10));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar9 != 0);
      FLLMAllocator::Free(&pFVar5->Allocator,pvVar4,200);
    }
    puVar10 = puVar10 + 1;
  }
  piVar1 = &(this->ThreadStates).ArrayMax;
  (this->ThreadStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,&(this->ThreadStates).AllocatorInstance,0,piVar1);
  }
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  Clear(&this->AllocationMap);
  puVar2 = &(this->CsvWriter).Columns.field_0x14;
  *(undefined4 *)&(this->CsvWriter).Columns.field_0x10 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->CsvWriter,0,(int *)puVar2);
  }
  pTVar8 = &(this->CsvWriter).ExistingColumns;
  bVar6 = 1 < *(int *)&(this->CsvWriter).ExistingColumns.field_0x60;
  if (!bVar6) {
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
                      *)pTVar8);
  }
  puVar2 = &(this->CsvWriter).ExistingColumns.field_0x14;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x10 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar8,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x44 = 0;
  iVar3 = *(int *)&(this->CsvWriter).ExistingColumns.field_0x3c;
  *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x38 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)
               &(this->CsvWriter).ExistingColumns.field_0x18,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CsvWriter).ExistingColumns.field_0x60 = 1;
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
              *)pTVar8);
  }
  pTVar8 = &(this->TraceWriter).DeclaredTags;
  bVar6 = 1 < *(int *)&(this->TraceWriter).DeclaredTags.field_0x60;
  if (!bVar6) {
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
                      *)pTVar8);
  }
  puVar2 = &(this->TraceWriter).DeclaredTags.field_0x14;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x10 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar8,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x44 = 0;
  iVar3 = *(int *)&(this->TraceWriter).DeclaredTags.field_0x3c;
  *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x38 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)
               &(this->TraceWriter).DeclaredTags.field_0x18,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->TraceWriter).DeclaredTags.field_0x60 = 1;
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
              *)pTVar8);
  }
  this_00 = &(this->CsvProfilerWriter).TagDataToCsvStatName;
  bVar6 = 1 < *(int *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x60;
  if (!bVar6) {
    TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
                      *)this_00);
  }
  puVar2 = &(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x14;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x10 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x44 = 0;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x40 = 0xffffffff;
  iVar3 = *(int *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x3c;
  *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x38 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)
               &(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x18,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->CsvProfilerWriter).TagDataToCsvStatName.field_0x60 = 1;
    TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
              *)this_00);
  }
  return;
}

// ClearTagSnapshot @ 14168ba90

void __thiscall UE::LLMPrivate::FLLMTracker::ClearTagSnapshot(FLLMTracker *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->TagSizes).field_0x18;
  iVar11 = 0;
  iVar3 = *(int *)&(this->TagSizes).field_0x38;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->TagSizes).field_0x28;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14168bb3d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14168bb3d:
  uVar10 = *(uint *)&(this->TagSizes).field_0x38;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44);
  TStack_60.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->TagSizes).field_0x38;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->TagSizes).field_0x28;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14168bc40;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14168bc40:
  while( true ) {
    if (*(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1)) break;
    *(undefined8 *)
     ((longlong)TStack_60.CurrentBitIndex * 0x38 + 0x18 + *(longlong *)&this->TagSizes) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->TrackedTotalInSnapshot = 0;
  return;
}

// DumpForkedAllocationInfo @ 1416900f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141690b75) */
/* WARNING: Removing unreachable block (ram,0x000141691010) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(FLLMTracker *this)

{
  FWindowsSharedMutex *SRWLock;
  FLowLevelMemTracker *pFVar1;
  FTagDataArray *pFVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  FName FVar6;
  ForAnyElementType _Src;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  FString *pFVar16;
  size_t sVar17;
  byte bVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  FLLMTracker *pFVar34;
  undefined1 auStackY_328 [32];
  FIdentityFunctor local_2b8;
  FIdentityFunctor local_2b7 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2b0;
  FIterator local_2a0;
  FString local_290;
  ulonglong local_280;
  undefined4 *local_278;
  undefined2 *local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  int local_258;
  FString local_250;
  int local_240 [2];
  FString local_238;
  ForAnyElementType local_228;
  undefined8 local_220;
  uint local_218 [2];
  FLLMTracker *local_210;
  ulonglong local_208;
  uint *local_200;
  ulonglong local_1f8;
  FName local_1f0;
  FString local_1e8;
  uint local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FString local_198;
  FIdentityFunctor **local_188;
  FIdentityFunctor *local_180;
  uint *local_178;
  int local_170;
  int local_16c;
  int local_168;
  uint local_160;
  undefined4 uStack_15c;
  FString local_158;
  FString local_148;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_e0;
  longlong lStack_d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  FString local_b0;
  FString local_a0;
  TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_210 = this;
  iVar11 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_268,(int *)((longlong)&local_260 + 4));
  lVar14 = (longlong)iVar11;
  local_260 = CONCAT44(local_260._4_4_,iVar11 + 1);
  *(undefined8 *)&local_268.Data[lVar14 * 0x30].field_0x0 = 0;
  *(undefined8 *)(local_268.Data + lVar14 * 0x30 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(local_268.Data + lVar14 * 0x30 + 0x10) = 0x19000;
  *(undefined8 *)(local_268.Data + lVar14 * 0x30 + 0x18) = 0x1b800;
  *(undefined8 *)(local_268.Data + lVar14 * 0x30 + 0x20) = 0x1e000;
  *(undefined8 *)(local_268.Data + lVar14 * 0x30 + 0x28) = 0x20800;
  AlgoImpl::
  IntroSortInternal<FForkedPageAllocation,int,FIdentityFunctor,bool_(__cdecl*)(FForkedPageAllocation_const_&,FForkedPageAllocation_const_&)>
            ((FForkedPageAllocation *)local_268.Data,iVar11 + 1,local_2b8,PageLessThan);
  pFVar1 = this->LLMRef;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->TagDataMutex);
  iVar11 = *(int *)&this->LLMRef->TagDatas->field_0x10;
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->TagDataMutex);
  TSet<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,0>,FDefaultSetAllocator>
  ::Reserve(&local_88,iVar11);
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  LockAll(&this->AllocationMap);
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  begin(&this->AllocationMap,&local_2a0);
  local_258 = 1;
  iVar11 = local_2a0._8_4_;
LAB_141690253:
  pFVar34 = local_210;
  uVar25 = local_2a0._12_4_;
  uVar33 = 0;
  if ((iVar11 != 0x10) || (local_2a0._12_4_ != 0)) {
    lVar14 = (longlong)iVar11 * 0x7b8 + local_2a0._0_8_;
    uVar12 = *(uint *)(*(longlong *)(lVar14 + 0x30) + (ulonglong)(uint)local_2a0._12_4_ * 4);
    uVar33 = (ulonglong)uVar12;
    if (*(uint *)(lVar14 + 0x490) <= uVar12) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    lVar21 = *(longlong *)(lVar14 + 0x488);
    if (*(uint *)(lVar14 + 0x378) <= uVar12) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    local_278 = (undefined4 *)(*(longlong *)(lVar14 + 0x370) + uVar33 * 4);
    if (*(uint *)(lVar14 + 0x48) <= uVar12) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    local_270 = (undefined2 *)(*(longlong *)(lVar14 + 0x40) + uVar33 * 8);
    local_200 = (uint *)(uVar33 * 8 + lVar21);
    uVar33 = *(ulonglong *)(*(longlong *)(lVar14 + 0x40) + uVar33 * 8) >> 0x10;
    uVar23 = 0;
    uVar12 = (uint)local_260;
    if (0 < (int)(uint)local_260) {
      do {
        iVar13 = (uVar12 >> 1) + uVar23;
        if (*(ulonglong *)&local_268.Data[(longlong)iVar13 * 0x30].field_0x0 < uVar33) {
          uVar23 = iVar13 + (uVar12 & 1);
        }
        uVar31 = uVar12 >> 1;
        uVar12 = uVar12 >> 1;
      } while (uVar31 != 0);
    }
    local_208 = uVar33;
    if ((int)uVar23 < (int)(uint)local_260) {
      uVar12 = 0;
      if ((int)uVar23 < (int)(uint)local_260) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      if (*(ulonglong *)&local_268.Data[(longlong)(int)uVar23 * 0x30].field_0x0 != uVar33)
      goto LAB_14169040d;
    }
    else {
LAB_14169040d:
      uVar23 = uVar23 - 1;
    }
    if ((int)uVar23 < 0) {
LAB_141690717:
      if (1 < (byte)LogHAL._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
    }
    else {
      uVar12 = 0;
      if ((int)uVar23 < (int)(uint)local_260) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      uVar29 = local_208;
      puVar5 = local_270;
      puVar4 = local_278;
      uVar12 = 0;
      lVar14 = (longlong)(int)uVar23 * 0x30;
      if (*(ulonglong *)(local_268.Data + lVar14 + 8) <= uVar33) goto LAB_141690717;
      local_270 = (undefined2 *)((ulonglong)local_270 & 0xffffffff00000000);
      local_278 = (undefined4 *)((ulonglong)local_278 & 0xffffffff00000000);
      uVar33 = (ulonglong)CONCAT24(*puVar5,*puVar4);
      local_280 = local_280 & 0xffffffff00000000;
      local_1f8 = uVar33;
      uVar30 = uVar12;
      uVar31 = uVar12;
      uVar32 = uVar12;
      if (uVar33 == 0) {
LAB_14169064f:
        lVar14 = 0x20;
        lVar21 = 0x48;
      }
      else {
        do {
          if ((int)(uint)local_260 <= (int)uVar23) {
            if (1 < (byte)LogHAL._0_1_) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
              uVar12 = (uint)local_280;
              uVar31 = (uint)local_270;
              uVar30 = (uint)local_278;
            }
            uVar25 = local_2a0._12_4_;
            iVar11 = local_2a0._8_4_;
            if (uVar33 != 0) goto LAB_141690736;
            break;
          }
          uVar32 = uVar32 + 1;
          uVar25 = 0;
          if ((int)uVar23 < (int)(uint)local_260) {
            uVar25 = ~uVar23 >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return (bool)uVar9;
            }
            uVar31 = (uint)local_270;
            uVar30 = (uint)local_278;
          }
          pFVar20 = local_268.Data + lVar14;
          uVar15 = *(longlong *)(pFVar20 + 8) - uVar29;
          uVar26 = uVar33;
          if (uVar15 < uVar33) {
            uVar26 = uVar15;
          }
          lVar28 = *(longlong *)(pFVar20 + 0x18) + *(longlong *)(pFVar20 + 0x10);
          lVar21 = *(longlong *)(pFVar20 + 0x20) + *(longlong *)(pFVar20 + 0x28);
          uVar12 = (uint)local_280;
          if ((byte)((((ulonglong)(*(longlong *)(pFVar20 + 8) - *(longlong *)pFVar20) >> 10) -
                      lVar21 != lVar28) + (lVar21 != 0) + (lVar28 != 0)) < 2) {
            if (lVar28 == 0) {
              if (lVar21 == 0) {
                uVar12 = (uint)local_280 + 1;
                local_280 = CONCAT44(local_280._4_4_,uVar12);
              }
              else {
                uVar31 = uVar31 + 1;
                local_270 = (undefined2 *)CONCAT44(local_270._4_4_,uVar31);
              }
            }
            else {
              uVar30 = uVar30 + 1;
              local_278 = (undefined4 *)CONCAT44(local_278._4_4_,uVar30);
            }
          }
          uVar23 = uVar23 + 1;
          lVar14 = lVar14 + 0x30;
          uVar33 = uVar33 - uVar26;
        } while (uVar33 != 0);
        uVar25 = local_2a0._12_4_;
        iVar11 = local_2a0._8_4_;
        if ((byte)((uVar12 != 0) + (uVar31 != 0) + (uVar30 != 0)) < 2) {
          if (uVar30 == 0) {
            if (uVar31 == 0) goto LAB_14169064f;
            lVar14 = 0x28;
            lVar21 = 0x50;
          }
          else {
            lVar14 = 0x30;
            lVar21 = 0x58;
          }
        }
        else {
          lVar14 = 0x18;
          lVar21 = 0x40;
        }
      }
      local_218[0] = *local_200;
      if (local_88.Data.ArrayNum != local_88.NumFreeIndices) {
        FVar19.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_48.Data;
        }
        iVar13 = *(int *)(FVar19.Data + (ulonglong)(local_40 - 1 & local_218[0]) * 4);
        while (iVar13 != -1) {
          pFVar20 = local_88.Data.AllocatorInstance.Data + (longlong)iVar13 * 0x68;
          if (*(uint *)&pFVar20->field_0x0 == local_218[0]) {
            if (pFVar20 != (FScriptContainerElement *)0x0) goto LAB_1416906f7;
            break;
          }
          iVar13 = *(int *)(pFVar20 + 0x60);
        }
      }
      local_178 = local_218;
      TSet<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_&&>_>
                (&local_88,(uint)local_240,(TKeyInitializer<int_&&> *)(ulonglong)local_218[0],
                 (bool *)&local_178);
      pFVar20 = local_88.Data.AllocatorInstance.Data + (longlong)local_240[0] * 0x68;
LAB_1416906f7:
      *(longlong *)(pFVar20 + lVar14) = *(longlong *)(pFVar20 + lVar14) + 1;
      *(ulonglong *)(pFVar20 + lVar21) = *(longlong *)(pFVar20 + lVar21) + local_1f8;
      *(longlong *)(pFVar20 + 8) = *(longlong *)(pFVar20 + 8) + 1;
      *(ulonglong *)(pFVar20 + 0x38) = *(longlong *)(pFVar20 + 0x38) + local_1f8;
      if (1 < uVar32) {
        *(longlong *)(pFVar20 + 0x10) = *(longlong *)(pFVar20 + 0x10) + 1;
      }
    }
LAB_141690736:
    local_2a0._12_4_ = uVar25 + 1;
    while (iVar11 < 0x10) {
      uVar25 = *(uint *)((longlong)iVar11 * 0x7b8 + 0x3c + local_2a0._0_8_);
      if ((uint)local_2a0._12_4_ < uVar25) {
        do {
          if (*(int *)(*(longlong *)((longlong)iVar11 * 0x7b8 + 0x30 + local_2a0._0_8_) +
                      (ulonglong)(uint)local_2a0._12_4_ * 4) != -1) goto LAB_141690253;
          local_2a0._12_4_ = local_2a0._12_4_ + 1;
        } while ((uint)local_2a0._12_4_ < uVar25);
      }
      local_2a0._12_4_ = 0;
      iVar11 = iVar11 + 1;
      local_2a0._8_4_ = iVar11;
    }
    goto LAB_141690253;
  }
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  UnlockAll(&local_210->AllocationMap);
  local_180 = local_2b7;
  local_188 = &local_180;
  if (0 < local_88.Data.ArrayNum - local_88.NumFreeIndices) {
    TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(&local_88);
    FVar19.Data = local_88.Data.AllocatorInstance.Data;
    iVar11 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
    if ((iVar11 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts,0>_>::FValueComparisonClass<_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::<lambda_1>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_> *)FVar19.Data,iVar11,
               local_2b7[0],
               (FElementCompareClass<TSortableMapBase<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::FCounts,0>_>::FValueComparisonClass<_public:_bool___cdecl_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo(void)_::_2_::<lambda_1>_>_>
                *)&local_188);
  }
  uVar25 = local_40;
  uVar29 = (ulonglong)local_40;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar25 != 0) {
    uVar12 = uVar25;
    if (uVar25 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_141690874;
      }
    }
    else {
LAB_141690874:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar12,4);
    }
    if (0 < (int)uVar25) {
      uVar26 = uVar33;
      do {
        FVar19.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_48.Data;
        }
        uVar15 = uVar26 & (longlong)(int)uVar25 - 1U;
        uVar26 = uVar26 + 1;
        *(undefined4 *)(FVar19.Data + uVar15 * 4) = 0xffffffff;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_1d0 = &local_88.AllocationFlags;
    local_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uVar29 = uVar33;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar27 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar25 = *(uint *)FVar27;
      uVar26 = uVar33;
      while (uVar25 == 0) {
        uStack_1c0 = (int)uVar26 + 0x20;
        uVar26 = (ulonglong)uStack_1c0;
        iVar11 = (int)uVar29;
        local_1d8 = iVar11 + 1;
        uVar29 = (ulonglong)local_1d8;
        if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                 ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_1d8) goto LAB_14169098e;
        uVar25 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar11 * 4);
      }
      uStack_1d4 = ~(uVar25 - 1) & uVar25;
      uVar29 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_168 = (int)lVar14;
      uStack_1c4 = local_168 + -1 + uStack_1c0;
      uVar29 = (ulonglong)uStack_1c4;
      if (local_88.AllocationFlags.NumBits < (int)uStack_1c4) {
LAB_14169098e:
        uVar29 = (ulonglong)(uint)local_88.AllocationFlags.NumBits;
        uStack_1c4 = local_88.AllocationFlags.NumBits;
      }
    }
    local_1c8 = 0xffffffff;
    local_138 = &local_88;
    local_130._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_130.CurrentBitIndex = uStack_1c4;
    local_130.UnvisitedBitMask = 0xffffffff;
    local_130._28_4_ = uStack_1bc;
    local_130.BaseBitIndex = uStack_1c0;
    local_130.Array = pTStack_1d0;
    if ((int)uVar29 < local_88.AllocationFlags.NumBits) {
      do {
        pFVar20 = (local_138->Data).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x68;
        uVar25 = local_40 - 1 & *(uint *)pFVar20;
        *(uint *)(pFVar20 + 100) = uVar25;
        FVar19.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar19.Data = local_48.Data;
        }
        uVar26 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar25;
        *(uint *)(pFVar20 + 0x60) = *(uint *)(FVar19.Data + uVar26 * 4);
        *(int *)(FVar19.Data + uVar26 * 4) = (int)uVar29;
        local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
        uVar29 = (ulonglong)(uint)local_130.CurrentBitIndex;
      } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
    }
  }
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  uVar25 = (local_88.Data.ArrayNum - local_88.NumFreeIndices) * 2 + 1;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0 < (int)uVar25) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar25,&local_2b0.AllocatorInstance,0,&local_2b0.ArrayMax);
  }
  ::FString::FString((FString *)&local_228,
                     L"Tag,SharedKib,PrivateKib,SplitKib,UnrefKib,TotalKib,SharedCount,PrivateCount,SplitCount,UnrefCount,TotalCount,CrossCount"
                    );
  if (((local_2b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_228) &&
      ((FScriptContainerElement *)&local_228 <
       local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  iVar11 = local_2b0.ArrayNum;
  if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
  }
  uVar25 = local_88.AllocationFlags.NumBits;
  local_2b0.ArrayNum = iVar11 + 1;
  pFVar20 = local_2b0.AllocatorInstance.Data + (longlong)iVar11 * 0x10;
  *(undefined8 *)pFVar20 = 0;
  *(FScriptContainerElement **)pFVar20 = local_228.Data;
  *(int *)(pFVar20 + 8) = (int)local_220;
  *(int *)(pFVar20 + 0xc) = local_220._4_4_;
  local_220._0_4_ = 0;
  local_220._4_4_ = 0;
  local_228.Data = (FScriptContainerElement *)0x0;
  pTStack_1b0 = &local_88.AllocationFlags;
  local_1b8 = 0;
  uStack_1b4 = 1;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  if (local_88.AllocationFlags.NumBits != 0) {
    FVar27 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
    if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar12 = *(uint *)FVar27;
    uVar29 = uVar33;
    while (uVar12 == 0) {
      uStack_1a0 = (int)uVar29 + 0x20;
      uVar29 = (ulonglong)uStack_1a0;
      iVar11 = (int)uVar33;
      local_1b8 = iVar11 + 1;
      uVar33 = (ulonglong)local_1b8;
      if ((int)((local_88.AllocationFlags.NumBits - 1U) +
               ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < (int)local_1b8
         ) {
        uStack_1a4 = local_88.AllocationFlags.NumBits;
        goto LAB_141690c3b;
      }
      uVar12 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar11 * 4);
    }
    uStack_1b4 = ~(uVar12 - 1) & uVar12;
    uVar33 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_16c = (int)lVar14;
    uStack_1a4 = local_16c + -1 + uStack_1a0;
    if (local_88.AllocationFlags.NumBits < (int)uStack_1a4) {
      uStack_1a4 = local_88.AllocationFlags.NumBits;
    }
  }
LAB_141690c3b:
  local_1a8 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_1b4,local_1b8);
  local_110 = &local_88;
  TStack_108.CurrentBitIndex = uStack_1a4;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._28_4_ = uStack_19c;
  TStack_108.BaseBitIndex = uStack_1a0;
  local_b8 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
  uVar12 = local_88.AllocationFlags.NumBits & 0xffffffe0;
  iVar11 = local_88.AllocationFlags.NumBits >> 5;
  bVar18 = (byte)local_88.AllocationFlags.NumBits;
  uStack_e8 = CONCAT44(uStack_b4,local_b8);
  TStack_108.Array = pTStack_1b0;
  local_e0 = local_110;
  lStack_d8 = TStack_108._padding_;
  pTStack_d0 = pTStack_1b0;
  uStack_c8 = TStack_108._16_8_;
  uStack_c0 = TStack_108._24_8_;
  if ((local_88.AllocationFlags.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  if (uVar25 != local_88.AllocationFlags.NumBits) {
    FVar27 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
    if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar25 = -1 << (bVar18 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar11 * 4);
    while (uVar25 == 0) {
      lVar14 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar25 = local_88.AllocationFlags.NumBits;
      if ((int)((local_88.AllocationFlags.NumBits - 1U) +
               ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_141690d70;
      uVar25 = *(uint *)((uchar *)((longlong)FVar27 + 4) + lVar14 * 4);
    }
    uVar33 = (ulonglong)(~(uVar25 - 1) & uVar25) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_170 = (int)lVar14;
    uVar25 = local_170 + -1 + uVar12;
    if (local_88.AllocationFlags.NumBits < (int)uVar25) {
      uVar25 = local_88.AllocationFlags.NumBits;
    }
  }
LAB_141690d70:
  while( true ) {
    pTVar7 = local_110;
    if ((local_110->Data).ArrayNum - local_110->NumFreeIndices != (int)uStack_e8) {
      local_2b8 = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
    }
    if (((TStack_108.CurrentBitIndex == uVar25) && (TStack_108.Array == &local_88.AllocationFlags))
       && (pTVar7 == &local_88)) break;
    pFVar1 = pFVar34->LLMRef;
    pFVar20 = (pTVar7->Data).AllocatorInstance.Data + (longlong)TStack_108.CurrentBitIndex * 0x68;
    SRWLock = &pFVar1->TagDataMutex;
    uVar12 = *(uint *)pFVar20;
    _local_160 = CONCAT44(0xffffffff,uVar12);
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if ((int)uVar12 < 0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    else {
      pFVar2 = pFVar1->TagDatas;
      uVar23 = 0;
      if ((int)uVar12 < *(int *)&pFVar2->field_0x10) {
        uVar23 = ~uVar12 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      lVar14 = *(longlong *)(*(longlong *)pFVar2 + (longlong)(int)uVar12 * 8);
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      if (lVar14 != 0) {
        local_1f8 = *(ulonglong *)(pFVar20 + 0x10);
        local_200 = *(uint **)(pFVar20 + 8);
        local_208 = *(ulonglong *)(pFVar20 + 0x20);
        local_270 = *(undefined2 **)(pFVar20 + 0x18);
        local_278 = *(undefined4 **)(pFVar20 + 0x28);
        local_280 = *(ulonglong *)(pFVar20 + 0x30);
        local_1f0 = *(FName *)(lVar14 + 8);
        ::FName::ToString(&local_1f0,&local_b0);
        ::FString::PrintfImpl
                  (&local_238,L"%s,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu");
        if (((local_2b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_238) &&
            ((FScriptContainerElement *)&local_238 <
             local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        iVar11 = local_2b0.ArrayNum;
        if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
        }
        local_2b0.ArrayNum = iVar11 + 1;
        pFVar20 = local_2b0.AllocatorInstance.Data + (longlong)iVar11 * 0x10;
        *(undefined8 *)pFVar20 = 0;
        *(FScriptContainerElement **)pFVar20 = local_238.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 8) = local_238.Data.ArrayNum;
        *(int *)(pFVar20 + 0xc) = local_238.Data.ArrayMax;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    pFVar34 = local_210;
  }
  pFVar16 = FPaths::ProjectSavedDir();
  ::operator/(&local_1e8,pFVar16,L"LLM");
  uVar10 = FForkProcessHelper::GetForkedChildProcessIndex();
  if (uVar10 == 0) {
    pFVar16 = ::FString::FString(&local_a0,L"Parent");
    FVar19.Data = (pFVar16->Data).AllocatorInstance.Data;
    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar16->Data).ArrayNum = 0;
    (pFVar16->Data).ArrayMax = 0;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::PrintfImpl(&local_198,L"Child%d");
    FVar19.Data = local_198.Data.AllocatorInstance.Data;
  }
  ::FString::PrintfImpl(&local_158,L"LLM_PrivateShared_Tracker%s_%s.csv");
  FVar22.Data = local_1e8.Data.AllocatorInstance.Data;
  iVar11 = local_158.Data.ArrayNum + -1;
  if (local_158.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  iVar13 = iVar11 + 1;
  iVar24 = local_1e8.Data.ArrayNum;
  local_290.Data.ArrayNum = iVar24;
  if ((iVar24 == 0) && (iVar13 != 0)) {
    iVar13 = iVar11 + 2;
LAB_14169115e:
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar13 == 0) {
      local_290.Data.ArrayMax = 0;
      goto LAB_1416911b3;
    }
  }
  else if (iVar24 == 0) goto LAB_14169115e;
  local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar25 = iVar13 + iVar24;
  if ((int)uVar25 < iVar24) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar25,0,(ForAnyElementType *)&local_290,iVar24,&local_290.Data.ArrayMax);
  if (iVar24 != 0) {
    memcpy(local_290.Data.AllocatorInstance.Data,FVar22.Data,(longlong)iVar24 * 2);
  }
LAB_1416911b3:
  ::FString::PathAppend(&local_290,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar11);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  local_1f0 = *(FName *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    FVar6 = local_1f0;
    if ((*(int *)((longlong)local_1f0 + 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Singleton = (FFileManagerGeneric)&___7FFileManagerGeneric__6B_;
      atexit(`IFileManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_290.Data.ArrayNum != 0) {
      FVar22.Data = local_290.Data.AllocatorInstance.Data;
    }
    lVar14 = (**(code **)((longlong)::Singleton + 0x110))(&::Singleton,FVar22.Data);
    if (lVar14 < 0) {
      if ((*(int *)((longlong)FVar6 + 0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Singleton = (FFileManagerGeneric)&___7FFileManagerGeneric__6B_;
        atexit(`IFileManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
        _Init_thread_footer(&::_TSS0);
      }
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_290.Data.ArrayNum != 0) {
        FVar22.Data = local_290.Data.AllocatorInstance.Data;
      }
      bVar8 = FFileHelper::SaveStringArrayToFile
                        (&local_2b0,(wchar_t *)FVar22.Data,AutoDetect,(IFileManager *)&::Singleton,0
                        );
      if (!bVar8) {
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"Failed to write llm private/shared csv file: %s\n");
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (FVar19.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar19.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum);
      if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.AllocatorInstance.Data);
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,`UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo'::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,_UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo_::__l2::FCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88);
      if ((FForkedPageAllocation *)local_268.Data != (FForkedPageAllocation *)0x0) {
        FMemory::Free(local_268.Data);
      }
      return true;
    }
    ::FString::PrintfImpl(&local_148,L"LLM_PrivateShared_Tracker%s_%s_%d.csv");
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar22.Data = local_148.Data.AllocatorInstance.Data;
    }
    sVar17 = wcslen((wchar_t *)FVar22.Data);
    _Src.Data = local_1e8.Data.AllocatorInstance.Data;
    iVar11 = (int)sVar17;
    iVar13 = iVar11 + 1;
    iVar24 = local_1e8.Data.ArrayNum;
    if ((iVar24 == 0) && (iVar13 != 0)) {
      iVar13 = iVar11 + 2;
LAB_1416912df:
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar13 != 0) goto LAB_1416912ea;
      local_250.Data._8_8_ = local_1e8.Data._8_8_ & 0xffffffff;
    }
    else {
      if (iVar24 == 0) goto LAB_1416912df;
LAB_1416912ea:
      local_250.Data.ArrayNum = iVar24;
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar25 = iVar13 + iVar24;
      if ((int)uVar25 < iVar24) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar25,0,(ForAnyElementType *)&local_250,iVar24,&local_250.Data.ArrayMax);
      if (iVar24 != 0) {
        memcpy(local_250.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar24 * 2);
      }
    }
    ::FString::PathAppend(&local_250,(wchar_t *)FVar22.Data,iVar11);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    local_290.Data.AllocatorInstance.Data = local_250.Data.AllocatorInstance.Data;
    local_290.Data.ArrayNum = local_250.Data.ArrayNum;
    local_290.Data.ArrayMax = local_250.Data.ArrayMax;
    local_250.Data.ArrayNum = 0;
    local_250.Data.ArrayMax = 0;
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    local_258 = local_258 + 1;
  } while( true );
}

// FindTagsForPtr @ 141694750

bool __thiscall
UE::LLMPrivate::FLLMTracker::FindTagsForPtr
          (FLLMTracker *this,void *param_1,
          TArray<UE::LLMPrivate::FTagData_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  FWindowsSharedMutex *SRWLock;
  undefined8 uVar2;
  ulong64 uVar3;
  FLowLevelMemTracker *pFVar4;
  FTagDataArray *pFVar5;
  ForElementType<UE::LLMPrivate::FTagData_const_*> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<UE::LLMPrivate::FTagData_const_*> FVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  StripeData *this_00;
  undefined8 uVar16;
  uint local_48;
  uint uStack_44;
  PointerKey local_40;
  
  bVar8 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
          ::__l2::bValue;
  local_40.Pointer = (longlong)param_1 << 0x10;
  if (0xfffffffffffe < (longlong)param_1 - 1U) {
    `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
    ::__l2::bValue = false;
    HandleAssert(bVar8,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
  }
  uVar11 = (longlong)param_1 * 0x200000 + ~((ulonglong)param_1 & 0xffffffffffff);
  uVar11 = (uVar11 >> 0x18 ^ uVar11) * 0x109;
  uVar11 = (uVar11 >> 0xe ^ uVar11) * 0x15;
  uVar13 = ((uint)(uVar11 >> 0x1c) ^ (uint)uVar11) * -0x7fffffff;
  this_00 = (this->AllocationMap).MapStripes + (uVar13 >> 0x1c);
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  uVar13 = LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
           ::StripeData::GetMapIndex(this_00,&local_40,uVar13);
  uVar13 = this_00->Map[uVar13];
  if (uVar13 == 0xffffffff) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    return false;
  }
  if ((this_00->Values1).Count <= uVar13) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if ((this_00->Values2).Count <= uVar13) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar2 = *(undefined8 *)(this_00->Values2).Array[uVar13].Tag;
  if ((this_00->Keys).Count <= uVar13) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar3 = (this_00->Keys).Array[uVar13].Pointer;
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (uVar3 == 0) {
    return false;
  }
  iVar14 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  if (iVar14 < 4) {
    Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::LLMPrivate::FTagData_const_*>_>
              (8,8,4 - iVar14,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else if (4 < iVar14) {
    iVar14 = iVar14 + -4;
    if (iVar14 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    else if (iVar14 == 0) goto LAB_141694a1b;
    FVar6 = (param_2->AllocatorInstance).SecondaryData;
    FVar12 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)param_2;
    if (FVar6 != (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FVar12 = FVar6;
    }
    iVar10 = (*piVar1 - iVar14) + -4;
    if (iVar10 != 0) {
      memmove((ForElementType<UE::LLMPrivate::FTagData_const_*> *)((longlong)FVar12 + 0x20),
              (ForElementType<UE::LLMPrivate::FTagData_const_*> *)((longlong)FVar12 + 0x20) + iVar14
              ,(longlong)iVar10 << 3);
    }
    *piVar1 = *piVar1 - iVar14;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::LLMPrivate::FTagData_const_*>_>
              (8,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
  }
LAB_141694a1b:
  uVar11 = 0;
  lVar15 = 0;
  do {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar4 = this->LLMRef;
      FLowLevelMemTracker::BootstrapInitialise(pFVar4);
      if (pFVar4->ActiveSets[uVar11 & 0xff] != false) {
        pFVar4 = this->LLMRef;
        SRWLock = &pFVar4->TagDataMutex;
        AcquireSRWLockShared((PSRWLOCK)SRWLock);
        if ((char)uVar11 == '\0') {
LAB_141694aac:
          local_48 = (uint)uVar2;
        }
        else {
          if ((char)uVar11 != '\x03') {
            HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
            FWindowsPlatformMisc::RaiseException(1);
            goto LAB_141694aac;
          }
          uStack_44 = (uint)((ulonglong)uVar2 >> 0x20);
          local_48 = uStack_44;
        }
        if ((int)local_48 < 0) {
          uVar16 = 0;
        }
        else {
          pFVar5 = pFVar4->TagDatas;
          uVar13 = 0;
          if ((int)local_48 < *(int *)&pFVar5->field_0x10) {
            uVar13 = ~local_48 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
          }
          uVar16 = *(undefined8 *)(*(longlong *)pFVar5 + (longlong)(int)local_48 * 8);
        }
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
        if (*piVar1 <= (int)uVar11) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
        }
        FVar6 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)param_2;
        if (FVar6 != (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
          FVar12 = FVar6;
        }
        *(undefined8 *)((longlong)FVar12 + lVar15 * 8) = uVar16;
      }
    }
    uVar13 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar13;
    lVar15 = lVar15 + 1;
    if (3 < (int)uVar13) {
      return true;
    }
  } while( true );
}

// GetActiveTagData @ 141698500

FTagData * __thiscall
UE::LLMPrivate::FLLMTracker::GetActiveTagData(FLLMTracker *this,ELLMTagSet param_1)

{
  FLLMThreadState *this_00;
  FTagData *pFVar1;
  
  this_00 = GetOrCreateState(this);
  pFVar1 = FLLMThreadState::GetTopTag(this_00,param_1);
  return pFVar1;
}

// GetAllocTypeAmount @ 141698600

long64 __thiscall
UE::LLMPrivate::FLLMTracker::GetAllocTypeAmount(FLLMTracker *this,ELLMAllocType param_1)

{
  return this->AllocTypeAmounts[(int)param_1];
}

// GetOrCreateState @ 14169a7b0

FLLMThreadState * __thiscall UE::LLMPrivate::FLLMTracker::GetOrCreateState(FLLMTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FLLMThreadState **ppFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FLLMThreadState *pFVar7;
  DWORD local_res10 [4];
  FLLMThreadState *local_28;
  DWORD *local_20;
  FLLMThreadState **local_18;
  
  local_28 = GetState(this);
  if (local_28 == (FLLMThreadState *)0x0) {
    pFVar7 = FLLMAllocator::Alloc(&this->LLMRef->Allocator,200);
    *(undefined8 *)pFVar7->TagStack = 0;
    *(undefined8 *)&pFVar7->TagStack[0].field_0x8 = 0;
    *(undefined8 *)&pFVar7->TagStack[0].field_0x10 = 0;
    *(undefined8 *)(pFVar7->TagStack + 1) = 0;
    *(undefined8 *)&pFVar7->TagStack[1].field_0x8 = 0;
    *(undefined8 *)&pFVar7->TagStack[1].field_0x10 = 0;
    *(undefined8 *)(pFVar7->TagStack + 2) = 0;
    *(undefined8 *)&pFVar7->TagStack[2].field_0x8 = 0;
    *(undefined8 *)&pFVar7->TagStack[2].field_0x10 = 0;
    *(undefined8 *)(pFVar7->TagStack + 3) = 0;
    *(undefined8 *)&pFVar7->TagStack[3].field_0x8 = 0;
    *(undefined8 *)&pFVar7->TagStack[3].field_0x10 = 0;
    (pFVar7->Allocations).Pairs.AllocatorInstance.Data = (void *)0x0;
    (pFVar7->Allocations).Pairs.AllocatorInstance.Size = 0;
    (pFVar7->Allocations).Pairs.ArrayNum = 0;
    (pFVar7->Allocations).Pairs.ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar7->TagSection,4000);
    pFVar7->PausedCounter[0] = '\0';
    pFVar7->PausedCounter[1] = '\0';
    pFVar7->PausedCounter[2] = '\0';
    pFVar7->PausedCounter[3] = '\0';
    pFVar7->AllocTypeAmounts[0] = 0;
    pFVar7->AllocTypeAmounts[1] = 0;
    pFVar7->AllocTypeAmounts[2] = 0;
    pFVar7->AllocTypeAmounts[3] = 0;
    local_28 = pFVar7;
    local_res10[0] = GetCurrentThreadId();
    lpCriticalSection = &this->PendingThreadStatesGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ppFVar2 = (this->PendingThreadStates).AllocatorInstance.Data;
    if ((ppFVar2 <= &local_28) && (&local_28 < ppFVar2 + (this->PendingThreadStates).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FLLMThreadState *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (this->PendingThreadStates).ArrayNum;
    piVar1 = &(this->PendingThreadStates).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                        (0x808,&(this->PendingThreadStates).AllocatorInstance,piVar1);
    }
    pvVar3 = (this->PendingThreadStates).AllocatorInstance.Data;
    (this->PendingThreadStates).ArrayNum = iVar6 + 1;
    *(FLLMThreadState **)((longlong)pvVar3 + (longlong)iVar6 * 8) = local_28;
    local_20 = local_res10;
    local_18 = &local_28;
    TSet<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::LLMPrivate::FLLMThreadState_*,0>,FDefaultSetLLMAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,UE::LLMPrivate::FLLMThreadState_*_const_&>_>
              ((TSet<TTuple<unsigned_int,UE::LLMPrivate::FLLMThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::LLMPrivate::FLLMThreadState_*,0>,FDefaultSetLLMAllocator>
                *)&this->ThreadIdToThreadState,
               (TPairInitializer<unsigned_int_const_&,UE::LLMPrivate::FLLMThreadState_*_const_&> *)
               (local_res10 + 2),(bool *)&local_20);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TlsSetValue(this->TlsSlot,local_28);
  }
  return local_28;
}

// GetState @ 1416a02c0

FLLMThreadState * __thiscall UE::LLMPrivate::FLLMTracker::GetState(FLLMTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  DWORD DVar2;
  int iVar3;
  FLLMThreadState *pFVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  pFVar4 = TlsGetValue(this->TlsSlot);
  if (pFVar4 == (FLLMThreadState *)0x0) {
    DVar2 = GetCurrentThreadId();
    lpCriticalSection = &this->PendingThreadStatesGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->ThreadIdToThreadState).field_0x10 !=
        *(int *)&(this->ThreadIdToThreadState).field_0x44) {
      puVar6 = *(undefined1 **)&(this->ThreadIdToThreadState).field_0x50;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ThreadIdToThreadState).field_0x48;
      }
      iVar3 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->ThreadIdToThreadState).field_0x60 - 1U & DVar2) * 4
                      );
      if (iVar3 != -1) {
        do {
          lVar1 = *(longlong *)&this->ThreadIdToThreadState + (longlong)iVar3 * 0x18;
          if (*(DWORD *)(*(longlong *)&this->ThreadIdToThreadState + (longlong)iVar3 * 0x18) ==
              DVar2) {
            puVar5 = (undefined8 *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar5 = (undefined8 *)0x0;
            }
            if (puVar5 != (undefined8 *)0x0) {
              pFVar4 = (FLLMThreadState *)*puVar5;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x10);
        } while (iVar3 != -1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar4;
}

// GetTagAmount @ 1416a04d0

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

long64 __thiscall
UE::LLMPrivate::FLLMTracker::GetTagAmount(FLLMTracker *this,FTagData *param_1,ESizeParams param_2)

{
  FTrackerTagSizeData *pFVar1;
  longlong lVar2;
  long64 lVar3;
  longlong lVar4;
  
  pFVar1 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                   *)&this->TagSizes,param_1);
  lVar3 = 0;
  if (pFVar1 != (FTrackerTagSizeData *)0x0) {
    lVar3 = pFVar1->Size;
    if ((param_2 & ReportPeak) != Default) {
      lVar3 = pFVar1->PeakSize;
    }
    if ((param_2 & RelativeToSnapshot) != Default) {
      lVar2 = lVar3 - pFVar1->SizeInSnapshot;
      lVar4 = 0x7fffffffffffffff;
      if (lVar2 < 0x7fffffffffffffff) {
        lVar4 = lVar2;
      }
      lVar3 = 0;
      if (0 < lVar4) {
        lVar3 = lVar4;
      }
      return lVar3;
    }
  }
  return lVar3;
}

// GetTagDatas @ 1416a07f0

TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UE::LLMPrivate::FLLMTracker::GetTagDatas
          (FLLMTracker *this,
          TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ELLMTagSet param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
              *)&this->TagSizes,&local_18);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar7.Data = local_18.AllocatorInstance.Data;
  do {
    if (FVar7.Data == pFVar1) {
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if ((*(longlong *)FVar7.Data != 0) &&
       (*(ELLMTagSet *)(*(longlong *)FVar7.Data + 0x34) == param_1)) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= FVar7.Data) &&
         ((FVar7.Data < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
        ;
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(longlong *)FVar7.Data;
    }
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetTagsNamesWithAmount @ 1416a0b50

void __thiscall
UE::LLMPrivate::FLLMTracker::GetTagsNamesWithAmount
          (FLLMTracker *this,
          TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
          *param_1,ELLMTagSet param_2)

{
  undefined1 *puVar1;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  code *pcVar7;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  ulong64 local_a8;
  FName local_a0;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_68;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  puVar1 = &(this->TagSizes).field_0x18;
  iVar4 = *(int *)&(this->TagSizes).field_0x38;
  pTVar2 = &this->TagSizes;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->TagSizes).field_0x28;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1416a0bfd;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_1416a0bfd:
  iStack_70 = *(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44;
  uVar13 = *(uint *)&(this->TagSizes).field_0x38;
  uStack_80 = 0xffffffff;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->TagSizes).field_0x38;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->TagSizes).field_0x28;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1416a0d00;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1416a0d00:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x10 - *(int *)&local_68->field_0x44 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1)) &&
       (pTVar8 == pTVar2)) break;
    lVar10 = *(longlong *)pTVar8;
    pFVar6 = *(FName **)((longlong)TStack_60.CurrentBitIndex * 0x38 + lVar10);
    if ((ELLMTagSet)pFVar6[6].Number == param_2) {
      local_a8 = *(ulong64 *)((longlong)TStack_60.CurrentBitIndex * 0x38 + 8 + lVar10);
      local_a0 = *pFVar6;
      TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
      ::Emplace<FName,unsigned___int64>
                ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                  *)param_1,&local_a0,&local_a8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTagsNamesWithAmountFiltered @ 1416a0da0

void __thiscall
UE::LLMPrivate::FLLMTracker::GetTagsNamesWithAmountFiltered
          (FLLMTracker *this,
          TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
          *param_1,ELLMTagSet param_2,
          TArray<FLLMTagSetAllocationFilter,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  FTagDataArray *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  FName FVar8;
  FName FVar9;
  code *pcVar10;
  FLLMTracker *pFVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong64 *puVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  longlong *plVar23;
  FName *pFVar24;
  undefined1 local_a8;
  undefined1 local_a7;
  ELLMTagSet local_a6;
  ForAnyElementType local_a0;
  uint local_98;
  uint local_94;
  undefined1 local_90 [8];
  FIterator local_88;
  FName local_78;
  FName FStack_70;
  undefined8 local_68;
  TArray<FLLMTagSetAllocationFilter,TSizedDefaultAllocator<32>_> *local_60;
  FWindowsSharedMutex *local_58;
  FLLMTracker *local_50;
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *local_48;
  ulong64 local_40;
  
  local_58 = &this->LLMRef->TagDataMutex;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_94 = 0;
  local_a6 = param_2;
  local_60 = param_3;
  local_50 = this;
  local_48 = param_1;
  AcquireSRWLockShared((PSRWLOCK)local_58);
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  uVar3 = *(uint *)&this->LLMRef->TagDatas->field_0x10;
  uVar20 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar20);
  }
  local_98 = 0;
  if (local_94 != uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&local_a0,0,(int *)&local_94);
  }
  if (0 < (int)uVar3) {
    do {
      if (((local_a0.Data <= &local_78) &&
          (&local_78 < (FName *)(local_a0.Data + (longlong)(int)local_94 * 0x10))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_98 == local_94) {
        local_98 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_a0,(int *)&local_94);
      }
      lVar17 = (longlong)(int)local_98;
      local_98 = local_98 + 1;
      *(FName *)(local_a0.Data + lVar17 * 0x10) = local_78;
      ((FName *)(local_a0.Data + lVar17 * 0x10))[1] = FStack_70;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  pFVar4 = this->LLMRef->TagDatas;
  plVar23 = *(longlong **)pFVar4;
  iVar15 = *(int *)&pFVar4->field_0x10;
  plVar1 = plVar23 + iVar15;
LAB_1416a0f20:
  do {
    if (*(int *)&pFVar4->field_0x10 != iVar15) {
      local_a8 = 0;
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a8);
    }
    if (plVar23 == plVar1) {
      ReleaseSRWLockShared((PSRWLOCK)local_58);
      pFVar11 = local_50;
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      LockAll(&local_50->AllocationMap);
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      begin(&pFVar11->AllocationMap,&local_88);
      uVar20 = (ulonglong)(uint)local_88._12_4_;
LAB_1416a1034:
      do {
        if ((local_88._8_4_ == 0x10) && ((int)uVar20 == 0)) {
          LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
          ::UnlockAll(&pFVar11->AllocationMap);
          uVar3 = local_98;
          pFVar24 = (FName *)(local_a0.Data + (longlong)(int)local_98 * 0x10);
          FVar22.Data = local_a0.Data;
LAB_1416a1347:
          do {
            if (local_98 != uVar3) {
              `TCheckedPointerIterator<`UE::LLMPrivate::FLLMTracker::GetTagsNamesWithAmountFiltered'::__l2::FLocalTagData,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_90);
            }
            if ((FName *)FVar22.Data == pFVar24) {
              if ((FName *)local_a0.Data != (FName *)0x0) {
                FMemory::Free(local_a0.Data);
              }
              return;
            }
            FVar8 = *(FName *)((longlong)FVar22.Data + 8);
            if (FVar8 != (FName)0x0) {
              FVar9 = *(FName *)FVar22.Data;
              local_40 = 0;
              uVar14 = ::GetTypeHash(FVar9.ComparisonIndex.Value);
              uVar14 = uVar14 + FVar9.Number;
              if (*(int *)&local_48->field_0x8 != *(int *)&local_48->field_0x34) {
                puVar19 = &local_48->field_0x38;
                if (*(undefined1 **)&local_48->field_0x40 != (undefined1 *)0x0) {
                  puVar19 = *(undefined1 **)&local_48->field_0x40;
                }
                iVar15 = *(int *)(puVar19 +
                                 (ulonglong)(*(int *)&local_48->field_0x48 - 1U & uVar14) * 4);
                if (iVar15 != -1) {
                  do {
                    lVar17 = *(longlong *)local_48 + (longlong)iVar15 * 0x18;
                    if (*(FName *)(*(longlong *)local_48 + (longlong)iVar15 * 0x18) ==
                        *(FName *)FVar22.Data) {
                      if (lVar17 != 0) {
                        *(longlong *)(lVar17 + 8) = *(longlong *)(lVar17 + 8) + (longlong)FVar8;
                        FVar22.Data = FVar22.Data + 0x10;
                        goto LAB_1416a1347;
                      }
                      break;
                    }
                    iVar15 = *(int *)(lVar17 + 0x10);
                  } while (iVar15 != -1);
                }
              }
              puVar16 = TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                        ::EmplaceByHash<FName_const_&,unsigned___int64>
                                  ((TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
                                    *)local_48,uVar14,(FName *)FVar22.Data,&local_40);
              *puVar16 = *puVar16 + (longlong)FVar8;
            }
            FVar22.Data = FVar22.Data + 0x10;
          } while( true );
        }
        lVar17 = (longlong)(int)local_88._8_4_ * 0x7b8 + local_88._0_8_;
        uVar3 = *(uint *)(*(longlong *)(lVar17 + 0x30) + uVar20 * 4);
        if (*(uint *)(lVar17 + 0x490) <= uVar3) {
          HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        lVar6 = *(longlong *)(lVar17 + 0x488);
        if (*(uint *)(lVar17 + 0x378) <= uVar3) {
          HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        lVar7 = *(longlong *)(lVar17 + 0x370);
        if (*(uint *)(lVar17 + 0x48) <= uVar3) {
          HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        lVar6 = lVar6 + (ulonglong)uVar3 * 8;
        iVar15 = local_60->ArrayNum;
        pFVar21 = (local_60->AllocatorInstance).Data;
        pFVar18 = pFVar21 + (longlong)iVar15 * 0xc;
        while( true ) {
          if (local_60->ArrayNum != iVar15) {
            local_a7 = 0;
            `TCheckedPointerIterator<FLLMTagSetAllocationFilter,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_a7);
          }
          if (pFVar21 == pFVar18) break;
          cVar2 = (char)*(longlong *)&pFVar21[8].field_0x0;
          if (cVar2 == '\0') {
LAB_1416a1181:
            lVar17 = 0;
          }
          else {
            if (cVar2 != '\x03') {
              HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
              FWindowsPlatformMisc::RaiseException(1);
              goto LAB_1416a1181;
            }
            lVar17 = 4;
          }
          uVar14 = *(uint *)(lVar6 + lVar17);
          if (((int)uVar14 < 0) || ((int)local_98 <= (int)uVar14)) goto LAB_1416a12be;
          uVar13 = 0;
          if ((int)uVar14 < (int)local_98) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((local_a0.Data + (longlong)(int)uVar14 * 0x10 == (FScriptContainerElement *)0x0) ||
             (*(longlong *)(local_a0.Data + (longlong)(int)uVar14 * 0x10) != *(longlong *)pFVar21))
          goto LAB_1416a12be;
          pFVar21 = pFVar21 + 0xc;
        }
        if (local_a6 == None) {
LAB_1416a1255:
          lVar17 = 0;
        }
        else {
          if (local_a6 != UObjectClasses) {
            HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
            FWindowsPlatformMisc::RaiseException(1);
            goto LAB_1416a1255;
          }
          lVar17 = 4;
        }
        uVar14 = *(uint *)(lVar6 + lVar17);
        if ((-1 < (int)uVar14) && ((int)uVar14 < (int)local_98)) {
          uVar13 = 0;
          if ((int)uVar14 < (int)local_98) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar18 = local_a0.Data + (longlong)(int)uVar14 * 0x10;
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            *(ulonglong *)(pFVar18 + 8) =
                 *(longlong *)(pFVar18 + 8) + (ulonglong)*(uint *)(lVar7 + (ulonglong)uVar3 * 4);
          }
        }
LAB_1416a12be:
        uVar20 = (ulonglong)(local_88._12_4_ + 1);
        for (; local_88._12_4_ = SUB84(uVar20,0), (int)local_88._8_4_ < 0x10;
            local_88._8_4_ = local_88._8_4_ + 1) {
          uVar3 = *(uint *)((longlong)(int)local_88._8_4_ * 0x7b8 + 0x3c + local_88._0_8_);
          if ((uint)local_88._12_4_ < uVar3) {
            do {
              if (*(int *)(*(longlong *)
                            ((longlong)(int)local_88._8_4_ * 0x7b8 + 0x30 + local_88._0_8_) +
                          uVar20 * 4) != -1) goto LAB_1416a1034;
              local_88._12_4_ = (int)uVar20 + 1;
              uVar20 = (ulonglong)(uint)local_88._12_4_;
            } while ((uint)local_88._12_4_ < uVar3);
          }
          uVar20 = 0;
        }
      } while( true );
    }
    plVar5 = (longlong *)*plVar23;
    if (plVar5 == (longlong *)0x0) {
      local_68 = 0xffffffffffffffff;
LAB_1416a0fc8:
      bVar12 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5469724465879312815>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                          ,0x1651,"TagDataCached.IsValidIndex(CompressedTagIndex)");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_1416a0fee:
      plVar23 = plVar23 + 1;
      goto LAB_1416a0f20;
    }
    uVar3 = *(uint *)(plVar5 + 5);
    local_68 = CONCAT44(0xffffffff,uVar3);
    if (((int)uVar3 < 0) || ((int)local_98 <= (int)uVar3)) goto LAB_1416a0fc8;
    uVar14 = 0;
    if ((int)uVar3 < (int)local_98) {
      uVar14 = ~uVar3 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (*(longlong *)(local_a0.Data + (longlong)(int)uVar3 * 0x10) != 0) goto LAB_1416a0fee;
    plVar23 = plVar23 + 1;
    *(longlong *)(local_a0.Data + (longlong)(int)uVar3 * 0x10) = *plVar5;
  } while( true );
}

// Initialise @ 1416a5740

void __thiscall
UE::LLMPrivate::FLLMTracker::Initialise
          (FLLMTracker *this,ELLMTracker param_1,FLLMAllocator *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == Max) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTracker != ELLMTracker::Max",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                       ,0x12a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Tracker = param_1;
  (this->CsvWriter).Tracker = param_1;
  (this->TraceWriter).Tracker = param_1;
  if ((param_1 != Platform) && (param_1 != Default)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTracker == ELLMTracker::Platform || InTracker == ELLMTracker::Default",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                       ,0x19a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->CsvProfilerWriter).Tracker = param_1;
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  SetAllocator(&this->AllocationMap,param_2,0x100000);
  return;
}

// IsPaused @ 1416b0bf0

bool __thiscall UE::LLMPrivate::FLLMTracker::IsPaused(FLLMTracker *this,ELLMAllocType param_1)

{
  FLLMThreadState *pFVar1;
  
  pFVar1 = GetState(this);
  if ((GIsRequestingExit == false) &&
     ((pFVar1 == (FLLMThreadState *)0x0 ||
      ((pFVar1->PausedCounter[0] < '\x01' && (pFVar1->PausedCounter[(int)param_1] < '\x01')))))) {
    return false;
  }
  return true;
}

// LockAllThreadTags @ 1416b1e70

void __thiscall UE::LLMPrivate::FLLMTracker::LockAllThreadTags(FLLMTracker *this,bool param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res10 [8];
  
  if (param_1) {
    UpdateThreads(this);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
  }
  plVar3 = (this->ThreadStates).AllocatorInstance.Data;
  iVar2 = (this->ThreadStates).ArrayNum;
  plVar1 = plVar3 + iVar2;
  while( true ) {
    if ((this->ThreadStates).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar3 == plVar1) break;
    if (param_1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*plVar3 + 0x78));
      plVar3 = plVar3 + 1;
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*plVar3 + 0x78));
      plVar3 = plVar3 + 1;
    }
  }
  if (!param_1) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
  }
  return;
}

// OnAllocMoved @ 1416b4e20

void __thiscall
UE::LLMPrivate::FLLMTracker::OnAllocMoved
          (FLLMTracker *this,void *param_1,void *param_2,ELLMAllocType param_3)

{
  bool bVar1;
  bool bVar2;
  FLLMThreadState *pFVar3;
  FTagData *this_00;
  PointerKey local_38;
  Values local_30;
  
  bVar1 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
          ::__l2::bValue;
  local_38.Pointer = (longlong)param_2 << 0x10;
  local_30.Key.Pointer = 0;
  local_30.Value2.Tag[0] = -1;
  local_30.Value2.Tag[1] = -1;
  if (0xfffffffffffe < (longlong)param_2 - 1U) {
    `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
    ::__l2::bValue = false;
    HandleAssert(bVar1,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
  }
  bVar2 = LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
          ::Remove(&this->AllocationMap,&local_38,&local_30);
  bVar1 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
          ::__l2::bValue;
  if (bVar2) {
    local_38.Pointer = local_30.Key.Pointer & 0xffff | (longlong)param_1 << 0x10;
    if (0xfffffffffffe < (longlong)param_1 - 1U) {
      `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
      ::__l2::bValue = false;
      HandleAssert(bVar1,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
    }
    LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
    Add(&this->AllocationMap,&local_38,&local_30.Value1,&local_30.Value2);
    pFVar3 = GetState(this);
    if ((GIsRequestingExit == false) &&
       ((pFVar3 == (FLLMThreadState *)0x0 ||
        ((pFVar3->PausedCounter[0] < '\x01' && (pFVar3->PausedCounter[(int)param_3] < '\x01')))))) {
      this_00 = FLowLevelAllocInfo::GetTag(&local_30.Value2,this->LLMRef,None);
      GetOrCreateState(this);
      if (this_00 != (FTagData *)0x0) {
        FTagData::GetContainingEnum(this_00);
      }
    }
  }
  return;
}

// OnPreFork @ 1416b54e0

void __thiscall UE::LLMPrivate::FLLMTracker::OnPreFork(FLLMTracker *this)

{
  FArchive *pFVar1;
  
  pFVar1 = (this->CsvWriter).Archive;
  if (pFVar1 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x208))();
    pFVar1 = (this->CsvWriter).Archive;
    if (pFVar1 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    (this->CsvWriter).Archive = (FArchive *)0x0;
  }
  return;
}

// OnTagsResorted @ 1416b5860

void __thiscall
UE::LLMPrivate::FLLMTracker::OnTagsResorted(FLLMTracker *this,FTagDataArray *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  FLowLevelMemTracker *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  FIterator local_38;
  
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  LockAll(&this->AllocationMap);
  LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
  begin(&this->AllocationMap,&local_38);
  uVar13 = (ulonglong)(uint)local_38._12_4_;
  iVar12 = local_38._8_4_;
LAB_1416b58b3:
  do {
    if ((iVar12 == 0x10) && ((int)uVar13 == 0)) {
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      UnlockAll(&this->AllocationMap);
      puVar10 = (this->ThreadStates).AllocatorInstance.Data;
      iVar12 = (this->ThreadStates).ArrayNum;
      puVar1 = puVar10 + iVar12;
      while( true ) {
        if ((this->ThreadStates).ArrayNum != iVar12) {
          `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar10 == puVar1) break;
        FLLMThreadState::OnTagsResorted((FLLMThreadState *)*puVar10,param_1);
        puVar10 = puVar10 + 1;
      }
      return;
    }
    lVar9 = (longlong)iVar12 * 0x7b8 + local_38._0_8_;
    uVar2 = *(uint *)(*(longlong *)(lVar9 + 0x30) + uVar13 * 4);
    uVar11 = (ulonglong)uVar2;
    if (*(uint *)(lVar9 + 0x490) <= uVar2) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    lVar4 = *(longlong *)(lVar9 + 0x488);
    if (*(uint *)(lVar9 + 0x378) <= uVar2) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if (*(uint *)(lVar9 + 0x48) <= uVar2) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    pFVar5 = this->LLMRef;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[0] != false)) {
      uVar2 = *(uint *)(lVar4 + uVar11 * 8);
      if (-1 < (int)uVar2) {
        uVar8 = 0;
        if ((int)uVar2 < *(int *)&param_1->field_0x10) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(lVar4 + uVar11 * 8) =
             *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 8) + 0x28);
      }
    }
    pFVar5 = this->LLMRef;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[1] != false)) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
      uVar2 = *(uint *)(lVar4 + uVar11 * 8);
      if (-1 < (int)uVar2) {
        uVar8 = 0;
        if ((int)uVar2 < *(int *)&param_1->field_0x10) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 8) + 0x28);
        HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
        *(undefined4 *)(lVar4 + uVar11 * 8) = uVar3;
      }
    }
    pFVar5 = this->LLMRef;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[2] != false)) {
      HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
      uVar2 = *(uint *)(lVar4 + uVar11 * 8);
      if (-1 < (int)uVar2) {
        uVar8 = 0;
        if ((int)uVar2 < *(int *)&param_1->field_0x10) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 8) + 0x28);
        HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
        *(undefined4 *)(lVar4 + uVar11 * 8) = uVar3;
      }
    }
    pFVar5 = this->LLMRef;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (FLowLevelMemTracker::BootstrapInitialise(pFVar5), pFVar5->ActiveSets[3] != false)) {
      uVar2 = *(uint *)(lVar4 + 4 + uVar11 * 8);
      if (-1 < (int)uVar2) {
        uVar8 = 0;
        if ((int)uVar2 < *(int *)&param_1->field_0x10) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(lVar4 + 4 + uVar11 * 8) =
             *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 8) + 0x28);
      }
    }
    uVar13 = (ulonglong)((int)uVar13 + 1);
    while (local_38._12_4_ = SUB84(uVar13,0), iVar12 < 0x10) {
      uVar2 = *(uint *)((longlong)iVar12 * 0x7b8 + 0x3c + local_38._0_8_);
      if ((uint)local_38._12_4_ < uVar2) {
        do {
          if (*(int *)(*(longlong *)((longlong)iVar12 * 0x7b8 + 0x30 + local_38._0_8_) + uVar13 * 4)
              != -1) goto LAB_1416b58b3;
          local_38._12_4_ = (int)uVar13 + 1;
          uVar13 = (ulonglong)(uint)local_38._12_4_;
        } while ((uint)local_38._12_4_ < uVar2);
      }
      uVar13 = 0;
      iVar12 = iVar12 + 1;
      local_38._8_4_ = iVar12;
    }
  } while( true );
}

// Pause @ 1416b5e00

void __thiscall UE::LLMPrivate::FLLMTracker::Pause(FLLMTracker *this,ELLMAllocType param_1)

{
  FLLMThreadState *pFVar1;
  
  pFVar1 = GetOrCreateState(this);
  pFVar1->PausedCounter[(int)param_1] = pFVar1->PausedCounter[(int)param_1] + '\x01';
  return;
}

// PauseAndTrackMemory @ 1416b5e30

void __thiscall
UE::LLMPrivate::FLLMTracker::PauseAndTrackMemory
          (FLLMTracker *this,FTagData *param_1,long64 param_2,ELLMAllocType param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLLMThreadState *this_00;
  
  this_00 = GetOrCreateState(this);
  LOCK();
  this->TrackedTotal = this->TrackedTotal + param_2;
  UNLOCK();
  FLLMThreadState::TrackMemory(this_00,param_2,this->Tracker,param_3,param_1);
  lpCriticalSection = &this_00->TagSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00->PausedCounter[(int)param_3] = this_00->PausedCounter[(int)param_3] + '\x01';
                    /* WARNING: Could not recover jumptable at 0x0001416b5eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// PauseAndTrackMemory @ 1416b5ed0

void __thiscall
UE::LLMPrivate::FLLMTracker::PauseAndTrackMemory
          (FLLMTracker *this,FName param_1,ELLMTagSet param_2,bool param_3,long64 param_4,
          ELLMAllocType param_5)

{
  FTagData *pFVar1;
  FName FVar2;
  FName FVar3;
  
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
  FVar3 = param_1;
  if (!param_3) {
    FVar3 = FVar2;
  }
  pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_1,param_2,FVar3,FunctionAPI);
  PauseAndTrackMemory(this,pFVar1,param_4,param_5);
  return;
}

// PauseAndTrackMemory @ 1416b5f20

void __thiscall
UE::LLMPrivate::FLLMTracker::PauseAndTrackMemory
          (FLLMTracker *this,ELLMTag param_1,long64 param_2,ELLMAllocType param_3)

{
  FTagData *pFVar1;
  
  pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_1,FunctionAPI);
  PauseAndTrackMemory(this,pFVar1,param_2,param_3);
  return;
}

// PopTag @ 1416b6850

void __thiscall UE::LLMPrivate::FLLMTracker::PopTag(FLLMTracker *this,ELLMTagSet param_1)

{
  uint uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FConstTagDataArray *pFVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  FLLMThreadState *pFVar6;
  
  pFVar6 = GetState(this);
  lpCriticalSection = &pFVar6->TagSection;
  if (pFVar6 == (FLLMThreadState *)0x0) {
    HandleAssert(true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nCalled PopTag but PushTag was never called!\r\n"
                );
    FWindowsPlatformMisc::RaiseException(1);
  }
  else if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = pFVar6->TagStack + param_1;
  if (*(int *)&pFVar6->TagStack[param_1].field_0x10 < 1) {
    HandleAssert(true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nCalled FLLMThreadState::PopTag without a matching Push (stack was empty on pop)\r\n"
                );
    FWindowsPlatformMisc::RaiseException(1);
  }
  if (*(int *)&pFVar3->field_0x10 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(int *)&pFVar3->field_0x10 - 1;
  _Dst = (void *)(*(longlong *)pFVar3 + (longlong)(int)uVar1 * 8);
  iVar2 = ~uVar1 + *(int *)&pFVar3->field_0x10;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar2 << 3);
  }
  *(int *)&pFVar3->field_0x10 = *(int *)&pFVar3->field_0x10 + -1;
                    /* WARNING: Could not recover jumptable at 0x0001416b696e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PublishCsv @ 1416b8350

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall UE::LLMPrivate::FLLMTracker::PublishCsv(FLLMTracker *this,ESizeParams param_1)

{
  FLLMCsvWriter *this_00;
  FLowLevelMemTracker *pFVar1;
  FTagData *pFVar2;
  FTagData *pFVar3;
  double dVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  FLowLevelMemTracker *pFVar9;
  longlong lVar10;
  longlong lVar11;
  LARGE_INTEGER local_res8;
  
  this_00 = &this->CsvWriter;
  lVar10 = 0;
  lVar11 = this->TrackedTotal;
  if ((param_1 & RelativeToSnapshot) != Default) {
    lVar11 = this->TrackedTotal - this->TrackedTotalInSnapshot;
    lVar8 = 0x7fffffffffffffff;
    if (lVar11 < 0x7fffffffffffffff) {
      lVar8 = lVar11;
    }
    lVar11 = lVar10;
    if (0 < lVar8) {
      lVar11 = lVar8;
    }
  }
  pFVar1 = this->LLMRef;
  pFVar2 = this->OverrideUntaggedTagData;
  pFVar3 = this->OverrideTrackedTotalTagData;
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  pFVar9 = FLowLevelMemTracker::Get();
  pTVar5 = CVarLLMWriteInterval.Ref;
  if (pFVar9->bPublishSingleFrame == false) {
    bVar6 = IsInParallelGameThread();
    if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
      lVar10 = 4;
    }
    if (dVar4 - (this->CsvWriter).LastWriteTime <
        (double)*(int *)((longlong)pTVar5->ShadowedValue + lVar10)) {
      return;
    }
  }
  (this->CsvWriter).LastWriteTime = dVar4;
  bVar6 = FLLMCsvWriter::CreateArchive(this_00);
  bVar7 = FLLMCsvWriter::UpdateColumns(this_00,&this->TagSizes);
  if ((bVar6) || (bVar7)) {
    FLLMCsvWriter::WriteHeader(this_00,pFVar3,pFVar2);
  }
  FLLMCsvWriter::AddRow(this_00,pFVar1,&this->TagSizes,pFVar3,pFVar2,lVar11,param_1);
  return;
}

// PublishCsvProfiler @ 1416b84c0

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall
UE::LLMPrivate::FLLMTracker::PublishCsvProfiler(FLLMTracker *this,ESizeParams param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = this->TrackedTotal;
  if ((param_1 & RelativeToSnapshot) != Default) {
    lVar2 = this->TrackedTotal - this->TrackedTotalInSnapshot;
    lVar1 = 0x7fffffffffffffff;
    if (lVar2 < 0x7fffffffffffffff) {
      lVar1 = lVar2;
    }
    lVar2 = 0;
    if (0 < lVar1) {
      lVar2 = lVar1;
    }
  }
  FLLMCsvProfilerWriter::Publish
            (&this->CsvProfilerWriter,this->LLMRef,&this->TagSizes,this->OverrideTrackedTotalTagData
             ,this->OverrideUntaggedTagData,lVar2,param_1);
  return;
}

// PublishStats @ 1416b8950

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall UE::LLMPrivate::FLLMTracker::PublishStats(FLLMTracker *this,ESizeParams param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTagData *pFVar8;
  FTrackerTagSizeData *pFVar9;
  longlong lVar10;
  longlong lVar11;
  long64 lVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->OverrideTrackedTotalTagData != (FTagData *)0x0) {
    SetMemoryStatByFName(this->OverrideTrackedTotalTagData->StatName,this->TrackedTotal);
    SetMemoryStatByFName(this->OverrideTrackedTotalTagData->SummaryStatName,this->TrackedTotal);
  }
  if (this->OverrideUntaggedTagData == (FTagData *)0x0) goto LAB_1416b8a89;
  pFVar8 = FLowLevelMemTracker::FindTagData(this->LLMRef,TagName_Untagged,None,FunctionAPI);
  if (pFVar8 == (FTagData *)0x0) {
    pFVar9 = (FTrackerTagSizeData *)0x0;
LAB_1416b8a35:
    lVar12 = 0;
  }
  else {
    pFVar9 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
             ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                     *)&this->TagSizes,pFVar8);
    if (pFVar9 == (FTrackerTagSizeData *)0x0) goto LAB_1416b8a35;
    lVar12 = pFVar9->Size;
    if ((param_1 & ReportPeak) != Default) {
      lVar12 = pFVar9->PeakSize;
    }
    if ((param_1 & RelativeToSnapshot) != Default) {
      lVar11 = lVar12 - pFVar9->SizeInSnapshot;
      lVar10 = 0x7fffffffffffffff;
      if (lVar11 < 0x7fffffffffffffff) {
        lVar10 = lVar11;
      }
      lVar12 = 0;
      if (0 < lVar10) {
        lVar12 = lVar10;
      }
    }
  }
  SetMemoryStatByFName(this->OverrideUntaggedTagData->StatName,lVar12);
  if (pFVar9 == (FTrackerTagSizeData *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = pFVar9->Size;
    if ((param_1 & ReportPeak) != Default) {
      lVar12 = pFVar9->PeakSize;
    }
    if ((param_1 & RelativeToSnapshot) != Default) {
      lVar11 = lVar12 - pFVar9->SizeInSnapshot;
      lVar10 = 0x7fffffffffffffff;
      if (lVar11 < 0x7fffffffffffffff) {
        lVar10 = lVar11;
      }
      lVar12 = 0;
      if (0 < lVar10) {
        lVar12 = lVar10;
      }
    }
  }
  SetMemoryStatByFName(this->OverrideUntaggedTagData->SummaryStatName,lVar12);
LAB_1416b8a89:
  TStack_60.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)&(this->TagSizes).field_0x18;
  iVar16 = 0;
  iVar14 = *(int *)&(this->TagSizes).field_0x38;
  iVar18 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar14 != 0) {
    puVar19 = *(uint **)&(this->TagSizes).field_0x28;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_60.Array;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1416b8b15;
      uVar15 = puVar19[lVar10 + 1];
    }
    uVar6 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = iVar18 + -1 + (int)lVar10;
    if (iVar14 < iVar7) {
LAB_1416b8b15:
      iVar7 = iVar14;
    }
  }
  puVar21 = &(this->TagSizes).field_0x18;
  uVar15 = *(uint *)&(this->TagSizes).field_0x38;
  uVar20 = uVar15 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar16);
  iVar14 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar18;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44);
  if (((int)uVar15 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->TagSizes).field_0x38;
  if (uVar15 != uVar6) {
    puVar2 = *(undefined1 **)&(this->TagSizes).field_0x28;
    puVar17 = puVar21;
    if (puVar2 != (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1416b8c30;
      uVar15 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_1416b8c30:
  while( true ) {
    if (*(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar21)) break;
    plVar13 = (longlong *)
              ((longlong)TStack_60.CurrentBitIndex * 0x38 + *(longlong *)&this->TagSizes);
    pFVar3 = (FName *)*plVar13;
    if (((char)pFVar3[7].ComparisonIndex.Value != '\0') &&
       ((this->OverrideUntaggedTagData == (FTagData *)0x0 || (*pFVar3 != TagName_Untagged)))) {
      lVar10 = plVar13[1];
      if ((param_1 & ReportPeak) != Default) {
        lVar10 = plVar13[2];
      }
      if ((param_1 & RelativeToSnapshot) != Default) {
        lVar11 = 0x7fffffffffffffff;
        if (lVar10 - plVar13[3] < 0x7fffffffffffffff) {
          lVar11 = lVar10 - plVar13[3];
        }
        lVar10 = 0;
        if (0 < lVar11) {
          lVar10 = lVar11;
        }
      }
      SetMemoryStatByFName(pFVar3[3],lVar10);
      SetMemoryStatByFName(pFVar3[4],lVar10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// PublishTrace @ 1416b8d20

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall UE::LLMPrivate::FLLMTracker::PublishTrace(FLLMTracker *this,ESizeParams param_1)

{
  FLLMTraceWriter::Publish
            (&this->TraceWriter,this->LLMRef,&this->TagSizes,this->OverrideTrackedTotalTagData,
             this->OverrideUntaggedTagData,this->TrackedTotal,param_1 & ~RelativeToSnapshot);
  return;
}

// PushTag @ 1416b9700

void __thiscall
UE::LLMPrivate::FLLMTracker::PushTag(FLLMTracker *this,FTagData *param_1,ELLMTagSet param_2)

{
  FLLMThreadState *this_00;
  
  this_00 = GetOrCreateState(this);
  FLLMThreadState::PushTag(this_00,param_1,param_2);
  return;
}

// PushTag @ 1416b9740

void __thiscall
UE::LLMPrivate::FLLMTracker::PushTag
          (FLLMTracker *this,FName param_1,bool param_2,ELLMTagSet param_3)

{
  FName FVar1;
  FTagData *pFVar2;
  FLLMThreadState *this_00;
  FName FVar3;
  
  FVar1.ComparisonIndex.Value = 0;
  FVar1.Number = 0;
  FVar3 = param_1;
  if (!param_2) {
    FVar3 = FVar1;
  }
  pFVar2 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_1,param_3,FVar3,Scope);
  this_00 = GetOrCreateState(this);
  FLLMThreadState::PushTag(this_00,pFVar2,param_3);
  return;
}

// PushTag @ 1416b97b0

void __thiscall
UE::LLMPrivate::FLLMTracker::PushTag(FLLMTracker *this,ELLMTag param_1,ELLMTagSet param_2)

{
  FTagData *pFVar1;
  FLLMThreadState *this_00;
  
  pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_1,Scope);
  this_00 = GetOrCreateState(this);
  FLLMThreadState::PushTag(this_00,pFVar1,param_2);
  return;
}

// SetTagAmountExternal @ 1416c0ee0

void __thiscall
UE::LLMPrivate::FLLMTracker::SetTagAmountExternal
          (FLLMTracker *this,FTagData *param_1,long64 param_2,bool param_3)

{
  FTrackerTagSizeData *pFVar1;
  uint uVar2;
  FTagData *local_res10 [3];
  
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_res10[0] = param_1;
  pFVar1 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&this->TagSizes,uVar2 >> 0x10 ^ uVar2,local_res10);
  pFVar1->bExternalAddToTotal = param_3;
  pFVar1->bExternalValid = true;
  pFVar1->ExternalAmount = param_2;
  return;
}

// SetTagAmountInUpdate @ 1416c1110

void __thiscall
UE::LLMPrivate::FLLMTracker::SetTagAmountInUpdate
          (FLLMTracker *this,FTagData *param_1,long64 param_2,bool param_3)

{
  FTrackerTagSizeData *pFVar1;
  uint uVar2;
  FTagData *local_res10;
  
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_res10 = param_1;
  pFVar1 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&this->TagSizes,uVar2 >> 0x10 ^ uVar2,&local_res10);
  if (param_3) {
    LOCK();
    this->TrackedTotal = this->TrackedTotal + (param_2 - pFVar1->Size);
    UNLOCK();
  }
  pFVar1->Size = param_2;
  if (param_2 < pFVar1->PeakSize) {
    param_2 = pFVar1->PeakSize;
  }
  pFVar1->PeakSize = param_2;
  return;
}

// SetTotalTags @ 1416c1220

void __thiscall
UE::LLMPrivate::FLLMTracker::SetTotalTags(FLLMTracker *this,FTagData *param_1,FTagData *param_2)

{
  this->OverrideUntaggedTagData = param_1;
  this->OverrideTrackedTotalTagData = param_2;
  return;
}

// TrackAllocation @ 1416c22e0

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackAllocation
          (FLLMTracker *this,void *param_1,long64 param_2,FTagData *param_3,ELLMAllocType param_4,
          FLLMThreadState *param_5,bool param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FLLMThreadState *pFVar2;
  FTagData *pFVar3;
  uint local_58 [2];
  FLowLevelAllocInfo local_50;
  PointerKey local_48 [2];
  
  pFVar2 = GetState(this);
  if ((GIsRequestingExit == false) &&
     ((pFVar2 == (FLLMThreadState *)0x0 ||
      ((pFVar2->PausedCounter[0] < '\x01' && (pFVar2->PausedCounter[(int)param_4] < '\x01')))))) {
    LOCK();
    this->TrackedTotal = this->TrackedTotal + param_2;
    UNLOCK();
    pFVar3 = FLLMThreadState::GetTopTag(param_5,UObjectClasses);
    lpCriticalSection = &param_5->TagSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_5->AllocTypeAmounts[(int)param_4] = param_5->AllocTypeAmounts[(int)param_4] + param_2;
    if (param_3 != (FTagData *)0x0) {
      FLLMThreadState::IncrTag(param_5,param_3,param_2);
    }
    if (pFVar3 != (FTagData *)0x0) {
      FLLMThreadState::IncrTag(param_5,pFVar3,param_2);
    }
    if (param_3 != (FTagData *)0x0) {
      FTagData::GetContainingEnum(param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 != (void *)0x0) {
      local_50.Tag[0] = -1;
      if (param_3 != (FTagData *)0x0) {
        local_50.Tag[0] = param_3->Index;
      }
      local_50.Tag[1] = -1;
      if (pFVar3 != (FTagData *)0x0) {
        local_50.Tag[1] = pFVar3->Index;
      }
      if (0xffffffffffff < param_2) {
        HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
      bVar1 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
              ::__l2::bValue;
      local_58[0] = (uint)param_2;
      local_48[0].Pointer = param_2 >> 0x20 & 0xffffU | (longlong)param_1 << 0x10;
      if ((void *)0xffffffffffff < param_1) {
        `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
        ::__l2::bValue = false;
        HandleAssert(bVar1,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
      }
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      Add(&this->AllocationMap,local_48,local_58,&local_50);
    }
  }
  return;
}

// TrackAllocation @ 1416c24c0

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackAllocation
          (FLLMTracker *this,void *param_1,long64 param_2,FName param_3,ELLMAllocType param_4,
          bool param_5)

{
  FLLMThreadState *this_00;
  FTagData *pFVar1;
  
  this_00 = GetOrCreateState(this);
  pFVar1 = FLLMThreadState::GetTopTag(this_00,None);
  if (pFVar1 == (FTagData *)0x0) {
    pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_3,None,(FName)0x0,FunctionAPI)
    ;
  }
  TrackAllocation(this,param_1,param_2,pFVar1,param_4,this_00,param_5);
  return;
}

// TrackAllocation @ 1416c2560

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackAllocation
          (FLLMTracker *this,void *param_1,long64 param_2,ELLMTag param_3,ELLMAllocType param_4,
          bool param_5)

{
  FLLMThreadState *this_00;
  FTagData *pFVar1;
  
  this_00 = GetOrCreateState(this);
  pFVar1 = FLLMThreadState::GetTopTag(this_00,None);
  if (pFVar1 == (FTagData *)0x0) {
    pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_3,FunctionAPI);
  }
  TrackAllocation(this,param_1,param_2,pFVar1,param_4,this_00,param_5);
  return;
}

// TrackFree @ 1416c26a0

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackFree
          (FLLMTracker *this,void *param_1,ELLMAllocType param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint6 uVar1;
  bool bVar2;
  FLLMThreadState *pFVar3;
  FTagData *this_00;
  FTagData *pFVar4;
  longlong lVar5;
  Values local_48;
  PointerKey local_30;
  
  bVar2 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
          ::__l2::bValue;
  local_30.Pointer = (longlong)param_1 << 0x10;
  local_48.Key.Pointer = 0;
  local_48.Value2.Tag[0] = -1;
  local_48.Value2.Tag[1] = -1;
  if (0xfffffffffffe < (longlong)param_1 - 1U) {
    `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
    ::__l2::bValue = false;
    HandleAssert(bVar2,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
  }
  bVar2 = LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
          ::Remove(&this->AllocationMap,&local_30,&local_48);
  if (((bVar2) && (pFVar3 = GetState(this), GIsRequestingExit == false)) &&
     ((pFVar3 == (FLLMThreadState *)0x0 ||
      ((pFVar3->PausedCounter[0] < '\x01' && (pFVar3->PausedCounter[(int)param_2] < '\x01')))))) {
    uVar1 = CONCAT24((undefined2)local_48.Key.Pointer,local_48.Value1);
    lVar5 = -(ulonglong)uVar1;
    LOCK();
    this->TrackedTotal = this->TrackedTotal + lVar5;
    UNLOCK();
    pFVar3 = GetOrCreateState(this);
    this_00 = FLowLevelAllocInfo::GetTag(&local_48.Value2,this->LLMRef,None);
    pFVar4 = FLowLevelAllocInfo::GetTag(&local_48.Value2,this->LLMRef,UObjectClasses);
    lpCriticalSection = &pFVar3->TagSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3->AllocTypeAmounts[(int)param_2] =
         pFVar3->AllocTypeAmounts[(int)param_2] - (ulonglong)uVar1;
    if (this_00 != (FTagData *)0x0) {
      FLLMThreadState::IncrTag(pFVar3,this_00,lVar5);
    }
    if (pFVar4 != (FTagData *)0x0) {
      FLLMThreadState::IncrTag(pFVar3,pFVar4,lVar5);
    }
    if (this_00 != (FTagData *)0x0) {
      FTagData::GetContainingEnum(this_00);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// TrackMemory @ 1416c2910

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackMemory
          (FLLMTracker *this,FTagData *param_1,long64 param_2,ELLMAllocType param_3)

{
  FLLMThreadState *this_00;
  
  this_00 = GetOrCreateState(this);
  LOCK();
  this->TrackedTotal = this->TrackedTotal + param_2;
  UNLOCK();
  FLLMThreadState::TrackMemory(this_00,param_2,this->Tracker,param_3,param_1);
  return;
}

// TrackMemory @ 1416c2970

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackMemory
          (FLLMTracker *this,FName param_1,ELLMTagSet param_2,long64 param_3,ELLMAllocType param_4)

{
  FTagData *pFVar1;
  FLLMThreadState *this_00;
  
  pFVar1 = FLowLevelMemTracker::FindOrAddTagData
                     (this->LLMRef,param_1,param_2,(FName)0x0,FunctionAPI);
  this_00 = GetOrCreateState(this);
  LOCK();
  this->TrackedTotal = this->TrackedTotal + param_3;
  UNLOCK();
  FLLMThreadState::TrackMemory(this_00,param_3,this->Tracker,param_4,pFVar1);
  return;
}

// TrackMemory @ 1416c29e0

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackMemory
          (FLLMTracker *this,ELLMTag param_1,long64 param_2,ELLMAllocType param_3)

{
  FTagData *pFVar1;
  FLLMThreadState *this_00;
  
  pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_1,FunctionAPI);
  this_00 = GetOrCreateState(this);
  LOCK();
  this->TrackedTotal = this->TrackedTotal + param_2;
  UNLOCK();
  FLLMThreadState::TrackMemory(this_00,param_2,this->Tracker,param_3,pFVar1);
  return;
}

// TrackMemoryOfActiveTag @ 1416c2a60

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackMemoryOfActiveTag
          (FLLMTracker *this,long64 param_1,FTagData *param_2,ELLMAllocType param_3,
          FLLMThreadState *param_4)

{
  FLLMThreadState *pFVar1;
  
  pFVar1 = GetState(this);
  if ((GIsRequestingExit == false) &&
     ((pFVar1 == (FLLMThreadState *)0x0 ||
      ((pFVar1->PausedCounter[0] < '\x01' && (pFVar1->PausedCounter[(int)param_3] < '\x01')))))) {
    LOCK();
    this->TrackedTotal = this->TrackedTotal + param_1;
    UNLOCK();
    FLLMThreadState::TrackMemory(param_4,param_1,this->Tracker,param_3,param_2);
  }
  return;
}

// TrackMemoryOfActiveTag @ 1416c2af0

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackMemoryOfActiveTag
          (FLLMTracker *this,long64 param_1,FName param_2,ELLMAllocType param_3)

{
  FLLMThreadState *this_00;
  FTagData *pFVar1;
  
  this_00 = GetOrCreateState(this);
  pFVar1 = FLLMThreadState::GetTopTag(this_00,None);
  if (pFVar1 == (FTagData *)0x0) {
    pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_2,None,(FName)0x0,FunctionAPI)
    ;
  }
  TrackMemoryOfActiveTag(this,param_1,pFVar1,param_3,this_00);
  return;
}

// TrackMemoryOfActiveTag @ 1416c2b80

void __thiscall
UE::LLMPrivate::FLLMTracker::TrackMemoryOfActiveTag
          (FLLMTracker *this,long64 param_1,ELLMTag param_2,ELLMAllocType param_3)

{
  FLLMThreadState *this_00;
  FTagData *pFVar1;
  
  this_00 = GetOrCreateState(this);
  pFVar1 = FLLMThreadState::GetTopTag(this_00,None);
  if (pFVar1 == (FTagData *)0x0) {
    pFVar1 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,param_2,FunctionAPI);
  }
  TrackMemoryOfActiveTag(this,param_1,pFVar1,param_3,this_00);
  return;
}

// Unpause @ 1416c51c0

void __thiscall UE::LLMPrivate::FLLMTracker::Unpause(FLLMTracker *this,ELLMAllocType param_1)

{
  schar *psVar1;
  FLLMThreadState *pFVar2;
  
  pFVar2 = GetOrCreateState(this);
  psVar1 = pFVar2->PausedCounter + (int)param_1;
  *psVar1 = *psVar1 + -1;
  if (*psVar1 < '\0') {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
    return;
  }
  return;
}

// Update @ 1416c5250

void __thiscall UE::LLMPrivate::FLLMTracker::Update(FLLMTracker *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  FLLMThreadState *this_00;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  LARGE_INTEGER local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_70;
  undefined8 uStack_50;
  
  UpdateThreads(this);
  QueryPerformanceCounter(&local_res20);
  dVar8 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar7 = dVar8 - this->LastTrimTime;
  bVar9 = __real_4024000000000000 < dVar7;
  if (__real_4024000000000000 < dVar7) {
    this->LastTrimTime = dVar8;
    LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
    Trim(&this->AllocationMap);
  }
  puVar16 = (this->ThreadStates).AllocatorInstance.Data;
  iVar4 = (this->ThreadStates).ArrayNum;
  puVar2 = puVar16 + iVar4;
  while( true ) {
    if ((this->ThreadStates).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar16 == puVar2) break;
    this_00 = (FLLMThreadState *)*puVar16;
    FLLMThreadState::PropagateChildSizesToParents(this_00);
    FLLMThreadState::FetchAndClearTagSizes(this_00,&this->TagSizes,this->AllocTypeAmounts,bVar9);
    puVar16 = puVar16 + 1;
  }
  iVar4 = *(int *)&(this->TagSizes).field_0x38;
  puVar1 = &(this->TagSizes).field_0x18;
  iVar17 = 0;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->TagSizes).field_0x28;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1416c539d;
      uVar15 = puVar20[lVar12 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar11 = iVar19 + -1 + local_res18;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_1416c539d:
  uVar15 = *(uint *)&(this->TagSizes).field_0x38;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar10,iVar17);
  TStack_70.CurrentBitIndex = iVar11;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iVar11;
  TStack_70.BaseBitIndex = iVar19;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44);
  TStack_70.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = *(uint *)&(this->TagSizes).field_0x38;
  if (uVar15 != uVar10) {
    puVar5 = *(undefined1 **)&(this->TagSizes).field_0x28;
    puVar18 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar18 = puVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1416c54a0;
      uVar15 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar21;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_1416c54a0:
  while( true ) {
    if (*(int *)&(this->TagSizes).field_0x10 - *(int *)&(this->TagSizes).field_0x44 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1)) break;
    lVar12 = *(longlong *)&this->TagSizes;
    lVar14 = (longlong)TStack_70.CurrentBitIndex * 0x38;
    if (*(char *)(lVar14 + 0x28 + lVar12) != '\0') {
      if (*(char *)(lVar14 + 0x29 + lVar12) != '\0') {
        LOCK();
        this->TrackedTotal =
             this->TrackedTotal +
             (*(longlong *)(lVar14 + lVar12 + 0x20) - *(longlong *)(lVar14 + 8 + lVar12));
        UNLOCK();
      }
      *(undefined8 *)(lVar14 + 8 + lVar12) = *(undefined8 *)(lVar14 + lVar12 + 0x20);
      *(undefined1 *)(lVar14 + 0x28 + lVar12) = 0;
    }
    lVar13 = *(longlong *)(lVar14 + 8 + lVar12);
    if (lVar13 < *(longlong *)(lVar14 + 0x10 + lVar12)) {
      lVar13 = *(longlong *)(lVar14 + 0x10 + lVar12);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    *(longlong *)(lVar14 + 0x10 + lVar12) = lVar13;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// UpdateThreads @ 1416c7620

void __thiscall UE::LLMPrivate::FLLMTracker::UpdateThreads(FLLMTracker *this)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 local_28 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
  uVar7 = (this->PendingThreadStates).ArrayNum;
  uVar6 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
    iVar5 = (this->ThreadStates).ArrayNum;
    uVar7 = iVar5 + uVar7;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &(this->ThreadStates).ArrayMax;
    if (*piVar1 < (int)uVar7) {
      Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
                (8,8,uVar7,&(this->ThreadStates).AllocatorInstance,iVar5,piVar1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
    do {
      if (((this->PendingThreadStates).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->PendingThreadStates).ArrayNum;
      local_28[0] = *(undefined8 *)
                     ((longlong)(this->PendingThreadStates).AllocatorInstance.Data +
                     (longlong)iVar5 * 8 + -8);
      (this->PendingThreadStates).ArrayNum = iVar5 + -1;
      puVar2 = (this->ThreadStates).AllocatorInstance.Data;
      if (((puVar2 <= local_28) && (local_28 < puVar2 + *piVar1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->ThreadStates).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                          (0x808,&(this->ThreadStates).AllocatorInstance,piVar1);
      }
      (this->ThreadStates).ArrayNum = iVar5 + 1;
      *(undefined8 *)((longlong)(this->ThreadStates).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_28[0];
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416c77b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->PendingThreadStatesGuard);
  return;
}

