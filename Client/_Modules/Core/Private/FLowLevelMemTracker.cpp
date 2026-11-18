// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 70

// FLowLevelMemTracker @ 141678b10

FLowLevelMemTracker * __thiscall FLowLevelMemTracker::FLowLevelMemTracker(FLowLevelMemTracker *this)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FBin *pFVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_res8 [2];
  _func___cdecl_void_ptr_ulong64 *local_res10;
  _func___cdecl_void_void_ptr_ulong64 *local_res18 [2];
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  uVar6 = 0;
  (this->Allocator).PlatformAlloc = (_func___cdecl_void_ptr_ulong64 *)0x0;
  (this->Allocator).PlatformFree = (_func___cdecl_void_void_ptr_ulong64 *)0x0;
  (this->Allocator).Bins = (FBin *)0x0;
  (this->Allocator).Total = 0;
  (this->Allocator).PageSize = 0;
  (this->Allocator).NumBins = 0;
  this->TagDatas = (FTagDataArray *)0x0;
  this->TagDataNameMap = (FTagDataNameMap *)0x0;
  this->TagDataEnumMap = (FTagData **)0x0;
  (this->TagDataMutex).Mutex.Ptr = (void *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UpdateMutex,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->BootstrapMutex,4000);
  this->ProgramSize = 0;
  this->MemoryUsageCurrentOverhead = 0;
  this->MemoryUsagePlatformTotalUntracked = 0;
  this->bFirstTimeUpdating = true;
  this->bCanEnable = true;
  this->bCsvWriterEnabled = false;
  this->bTraceWriterEnabled = false;
  this->bInitialisedTracking = false;
  this->bIsBootstrapping = false;
  this->bBeganInitialisedTracking = false;
  this->bFullyInitialised = false;
  this->bConfigurationComplete = (atomic<bool>)0x0;
  this->bTagAdded = false;
  this->bAutoPublish = true;
  this->bPublishSingleFrame = false;
  this->bCapturedSizeSnapshot = false;
  local_res10 = (_func___cdecl_void_ptr_ulong64 *)0x0;
  local_res18[0] = (_func___cdecl_void_void_ptr_ulong64 *)0x0;
  local_res8[0] = 0;
  bVar2 = FWindowsPlatformMemory::GetLLMAllocFunctions(&local_res10,local_res18,(int *)local_res8);
  if (bVar2) {
    if ((local_res8[0] & local_res8[0] - 1) != 0) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    (this->Allocator).PlatformAlloc = local_res10;
    (this->Allocator).PlatformFree = local_res18[0];
    (this->Allocator).PageSize = local_res8[0];
    if (local_res10 != (_func___cdecl_void_ptr_ulong64 *)0x0) {
      iVar10 = 0x10;
      iVar5 = 0x10;
      iVar3 = (int)(local_res8[0] + ((int)local_res8[0] >> 0x1f & 3U)) >> 2;
      if (0xf < iVar3) {
        iVar7 = (this->Allocator).NumBins;
        do {
          iVar5 = iVar5 * 2;
          iVar7 = iVar7 + 1;
        } while (iVar5 <= iVar3);
        (this->Allocator).NumBins = iVar7;
      }
      piVar1 = &(this->Allocator).NumBins;
      if (0 < *piVar1) {
        pFVar4 = UE::LLMPrivate::FLLMAllocator::AllocPages(&this->Allocator,(longlong)*piVar1 << 4);
        (this->Allocator).Bins = pFVar4;
        uVar9 = uVar6;
        if (0 < *piVar1) {
          do {
            pFVar4 = (this->Allocator).Bins;
            uVar8 = (int)uVar9 + 1;
            *(int *)((longlong)&pFVar4->BinSize + uVar6) = iVar10;
            iVar10 = iVar10 * 2;
            *(undefined8 *)((longlong)&pFVar4->FreePages + uVar6) = 0;
            *(undefined4 *)((longlong)&pFVar4->UsedCount + uVar6) = 0;
            uVar6 = uVar6 + 0x10;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < *piVar1);
        }
      }
    }
    Allocator = &this->Allocator;
    this->ActiveSets[0] = true;
    this->ActiveSets[1] = false;
    this->ActiveSets[2] = false;
    this->ActiveSets[3] = false;
    return this;
  }
  EnabledState = Disabled;
  bIsDisabled = true;
  this->bCanEnable = false;
  LOCK();
  this->bConfigurationComplete = (atomic<bool>)0x1;
  UNLOCK();
  return this;
}

// ~FLowLevelMemTracker @ 14167be80

void __thiscall FLowLevelMemTracker::~FLowLevelMemTracker(FLowLevelMemTracker *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  EnabledState = Disabled;
  bIsDisabled = true;
  Clear(this);
  Allocator = (FLLMAllocator *)0x0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BootstrapMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  }
  UE::LLMPrivate::FLLMAllocator::Clear(&this->Allocator);
                    /* WARNING: Could not recover jumptable at 0x00014167bf1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// BootstrapInitialise @ 141682400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLowLevelMemTracker::BootstrapInitialise(FLowLevelMemTracker *this)

{
  FLLMTracker *pFVar1;
  FTagData *pFVar2;
  FTagData *pFVar3;
  FLLMThreadState *pFVar4;
  ulong64 uVar5;
  FPlatformMemoryStats local_98;
  
  if (this->bInitialisedTracking == false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->BootstrapMutex);
    if (this->bInitialisedTracking == false) {
      if (this->bBeganInitialisedTracking != false) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      this->bBeganInitialisedTracking = true;
      pFVar1 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x7eb0);
      UE::LLMPrivate::FLLMTracker::FLLMTracker(pFVar1,this);
      this->Trackers[0] = pFVar1;
      pFVar1->Tracker = Platform;
      (pFVar1->CsvWriter).Tracker = Platform;
      (pFVar1->TraceWriter).Tracker = Platform;
      (pFVar1->CsvProfilerWriter).Tracker = Platform;
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      SetAllocator(&pFVar1->AllocationMap,&this->Allocator,0x100000);
      pFVar1 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x7eb0);
      UE::LLMPrivate::FLLMTracker::FLLMTracker(pFVar1,this);
      this->Trackers[1] = pFVar1;
      pFVar1->Tracker = Default;
      (pFVar1->CsvWriter).Tracker = Default;
      (pFVar1->TraceWriter).Tracker = Default;
      (pFVar1->CsvProfilerWriter).Tracker = Default;
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      SetAllocator(&pFVar1->AllocationMap,&this->Allocator,0x100000);
      BootstrapTagDatas(this);
      pFVar1 = this->Trackers[0];
      pFVar2 = FindOrAddTagData(this,PlatformTrackedTotal,FunctionAPI);
      pFVar3 = FindOrAddTagData(this,PlatformUntaggedTotal,FunctionAPI);
      pFVar1->OverrideUntaggedTagData = pFVar3;
      pFVar1->OverrideTrackedTotalTagData = pFVar2;
      pFVar1 = this->Trackers[1];
      pFVar2 = FindOrAddTagData(this,TrackedTotal,FunctionAPI);
      pFVar3 = FindOrAddTagData(this,UntaggedTotal,FunctionAPI);
      pFVar1->OverrideUntaggedTagData = pFVar3;
      pFVar1->OverrideTrackedTotalTagData = pFVar2;
      if (this->ProgramSize == 0) {
        FWindowsPlatformMemory::GetStats(&local_98);
        uVar5 = local_98._padding_ - local_98._padding_;
        this->ProgramSize = uVar5;
        pFVar1 = this->Trackers[0];
        pFVar2 = FindOrAddTagData(pFVar1->LLMRef,ProgramSizePlatform,FunctionAPI);
        pFVar4 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
        LOCK();
        pFVar1->TrackedTotal = pFVar1->TrackedTotal + uVar5;
        UNLOCK();
        UE::LLMPrivate::FLLMThreadState::TrackMemory(pFVar4,uVar5,pFVar1->Tracker,System,pFVar2);
        pFVar1 = this->Trackers[1];
        uVar5 = this->ProgramSize;
        pFVar2 = FindOrAddTagData(pFVar1->LLMRef,ProgramSize,FunctionAPI);
        pFVar4 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
        LOCK();
        pFVar1->TrackedTotal = pFVar1->TrackedTotal + uVar5;
        UNLOCK();
        UE::LLMPrivate::FLLMThreadState::TrackMemory(pFVar4,uVar5,pFVar1->Tracker,System,pFVar2);
      }
      this->bInitialisedTracking = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->BootstrapMutex);
  }
  return;
}

// BootstrapTagDatas @ 141682690

void __thiscall FLowLevelMemTracker::BootstrapTagDatas(FLowLevelMemTracker *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTagDataArray *pFVar4;
  FTagDataNameMap *pFVar5;
  FTagData **_Dst;
  ELLMTag local_res10 [8];
  ELLMTag local_res18 [8];
  ELLMTag local_res20 [8];
  ELLMTag local_5f8 [96];
  FTagData *local_598;
  FTagData *local_590;
  FTagData *local_588;
  FTagData *local_580;
  FTagData *local_578;
  FTagData *local_570;
  FTagData *local_568;
  FTagData *local_560;
  FTagData *local_558;
  FTagData *local_550;
  FTagData *local_548;
  FTagData *local_540;
  FTagData *local_538;
  FTagData *local_530;
  FTagData *local_528;
  FTagData *local_520;
  FTagData *local_518;
  FTagData *local_510;
  FTagData *local_508;
  FTagData *local_500;
  FTagData *local_4f8;
  FTagData *local_4f0;
  FTagData *local_4e8;
  FTagData *local_4e0;
  FTagData *local_4d8;
  FTagData *local_4d0;
  FTagData *local_4c8;
  FTagData *local_4c0;
  FTagData *local_4b8;
  FTagData *local_4b0;
  FTagData *local_4a8;
  FTagData *local_4a0;
  FTagData *local_498;
  FTagData *local_490;
  FTagData *local_488;
  FTagData *local_480;
  FTagData *local_478;
  FTagData *local_470;
  FTagData *local_468;
  FTagData *local_460;
  FTagData *local_458;
  FTagData *local_450;
  FTagData *local_448;
  FTagData *local_440;
  FTagData *local_438;
  FTagData *local_430;
  FTagData *local_428;
  FTagData *local_420;
  FTagData *local_418;
  FTagData *local_410;
  FTagData *local_408;
  FTagData *local_400;
  FTagData *local_3f8;
  FTagData *local_3f0;
  FTagData *local_3e8;
  FTagData *local_3e0;
  FTagData *local_3d8;
  FTagData *local_3d0;
  FTagData *local_3c8;
  FTagData *local_3c0;
  FTagData *local_3b8;
  FTagData *local_3b0;
  FTagData *local_3a8;
  FTagData *local_3a0;
  FTagData *local_398;
  FTagData *local_390;
  FTagData *local_388;
  FTagData *local_380;
  FTagData *local_378;
  FTagData *local_370;
  FTagData *local_368;
  FTagData *local_360;
  FTagData *local_358;
  FTagData *local_350;
  FTagData *local_348;
  FTagData *local_340;
  FTagData *local_338;
  FTagData *local_330;
  FTagData *local_328;
  FTagData *local_320;
  FTagData *local_318;
  FTagData *local_310;
  FTagData *local_308;
  FTagData *local_300;
  FTagData *local_2f8;
  FTagData *local_2f0;
  FTagData *local_2e8;
  FTagData *local_2e0;
  FTagData *local_2d8;
  FTagData *local_2d0;
  FTagData *local_2c8;
  FTagData *local_2c0;
  FTagData *local_2b8;
  FTagData *local_2b0;
  FTagData *local_2a8;
  FTagData *local_2a0;
  FTagData *local_298;
  FTagData *local_290;
  FTagData *local_288;
  FTagData *local_280;
  FTagData *local_278;
  FTagData *local_270;
  FTagData *local_268;
  FTagData *local_260;
  FTagData *local_258;
  FTagData *local_250;
  FTagData *local_248;
  FTagData *local_240;
  FTagData *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  this->bIsBootstrapping = true;
  pFVar4 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x18);
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)&pFVar4->field_0x8 = 0;
  *(undefined8 *)&pFVar4->field_0x10 = 0;
  this->TagDatas = pFVar4;
  pFVar5 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x68);
  *(undefined8 *)&pFVar5->field_0x18 = 0;
  *(undefined8 *)&pFVar5->field_0x20 = 0;
  *(undefined8 *)&pFVar5->field_0x48 = 0;
  *(undefined8 *)&pFVar5->field_0x60 = 0;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)&pFVar5->field_0x8 = 0;
  *(undefined8 *)&pFVar5->field_0x10 = 0;
  *(undefined8 *)&pFVar5->field_0x28 = 0;
  *(undefined8 *)&pFVar5->field_0x30 = 0;
  *(undefined4 *)&pFVar5->field_0x38 = 0;
  *(undefined4 *)&pFVar5->field_0x3c = 0x80;
  *(undefined4 *)&pFVar5->field_0x40 = 0xffffffff;
  *(undefined4 *)&pFVar5->field_0x44 = 0;
  *(undefined8 *)&pFVar5->field_0x50 = 0;
  *(undefined8 *)&pFVar5->field_0x58 = 0;
  this->TagDataNameMap = pFVar5;
  _Dst = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x800);
  this->TagDataEnumMap = _Dst;
  memset(_Dst,0,0x800);
  local_598 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  (local_598->Name).ComparisonIndex = 0;
  (local_598->Name).Number = 0;
  (local_598->DisplayName).ComparisonIndex = 0;
  (local_598->DisplayName).Number = 0;
  (local_598->field2_0x10).Parent = (FTagData *)0x0;
  (local_598->StatName).ComparisonIndex = 0;
  (local_598->StatName).Number = 0;
  (local_598->SummaryStatName).ComparisonIndex = 0;
  (local_598->SummaryStatName).Number = 0;
  local_598->EnumTag = Untagged;
  local_598->ReferenceSource = EnumTag;
  local_598->TagSet = None;
  local_598->bIsFinishConstructed = false;
  local_598->bParentIsName = true;
  local_598->bHasEnumTag = true;
  local_598->bIsReportable = true;
  local_228 = 0;
  local_230 = 0;
  local_598->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_598) &&
     (&local_598 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_598;
  if (*this->TagDataEnumMap != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  *this->TagDataEnumMap = local_598;
  local_590 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  (local_590->Name).ComparisonIndex = 0;
  (local_590->Name).Number = 0;
  (local_590->DisplayName).ComparisonIndex = 0;
  (local_590->DisplayName).Number = 0;
  (local_590->field2_0x10).Parent = (FTagData *)0x0;
  (local_590->StatName).ComparisonIndex = 0;
  (local_590->StatName).Number = 0;
  (local_590->SummaryStatName).ComparisonIndex = 0;
  (local_590->SummaryStatName).Number = 0;
  local_590->EnumTag = Paused;
  local_590->ReferenceSource = EnumTag;
  local_590->TagSet = None;
  local_590->bIsFinishConstructed = false;
  local_590->bParentIsName = true;
  local_590->bHasEnumTag = true;
  local_590->bIsReportable = true;
  local_200 = 0;
  local_208 = 0;
  local_590->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_590) &&
     (&local_590 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_590;
  if (this->TagDataEnumMap[1] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[1] = local_590;
  local_588 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  (local_588->Name).ComparisonIndex = 0;
  (local_588->Name).Number = 0;
  (local_588->DisplayName).ComparisonIndex = 0;
  (local_588->DisplayName).Number = 0;
  (local_588->field2_0x10).Parent = (FTagData *)0x0;
  (local_588->StatName).ComparisonIndex = 0;
  (local_588->StatName).Number = 0;
  (local_588->SummaryStatName).ComparisonIndex = 0;
  (local_588->SummaryStatName).Number = 0;
  local_588->EnumTag = Total;
  local_588->ReferenceSource = EnumTag;
  local_588->TagSet = None;
  local_588->bIsFinishConstructed = false;
  local_588->bParentIsName = true;
  local_588->bHasEnumTag = true;
  local_588->bIsReportable = true;
  local_1d8 = 0;
  local_1e0 = 0;
  local_588->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_588) &&
     (&local_588 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_588;
  if (this->TagDataEnumMap[2] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[2] = local_588;
  local_580 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  (local_580->Name).ComparisonIndex = 0;
  (local_580->Name).Number = 0;
  (local_580->DisplayName).ComparisonIndex = 0;
  (local_580->DisplayName).Number = 0;
  (local_580->field2_0x10).Parent = (FTagData *)0x0;
  (local_580->StatName).ComparisonIndex = 0;
  (local_580->StatName).Number = 0;
  (local_580->SummaryStatName).ComparisonIndex = 0;
  (local_580->SummaryStatName).Number = 0;
  local_580->EnumTag = Untracked;
  local_580->ReferenceSource = EnumTag;
  local_580->TagSet = None;
  local_580->bIsFinishConstructed = false;
  local_580->bParentIsName = true;
  local_580->bHasEnumTag = true;
  local_580->bIsReportable = true;
  local_1b0 = 0;
  local_1b8 = 0;
  local_580->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_580) &&
     (&local_580 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_580;
  if (this->TagDataEnumMap[3] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[3] = local_580;
  local_578 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  (local_578->Name).ComparisonIndex = 0;
  (local_578->Name).Number = 0;
  (local_578->DisplayName).ComparisonIndex = 0;
  (local_578->DisplayName).Number = 0;
  (local_578->field2_0x10).Parent = (FTagData *)0x0;
  (local_578->StatName).ComparisonIndex = 0;
  (local_578->StatName).Number = 0;
  (local_578->SummaryStatName).ComparisonIndex = 0;
  (local_578->SummaryStatName).Number = 0;
  local_578->EnumTag = PlatformTotal;
  local_578->ReferenceSource = EnumTag;
  local_578->TagSet = None;
  local_578->bIsFinishConstructed = false;
  local_578->bParentIsName = true;
  local_578->bHasEnumTag = true;
  local_578->bIsReportable = true;
  local_188 = 0;
  local_190 = 0;
  local_578->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_578) &&
     (&local_578 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_578;
  if (this->TagDataEnumMap[4] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[4] = local_578;
  local_570 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  (local_570->Name).ComparisonIndex = 0;
  (local_570->Name).Number = 0;
  (local_570->DisplayName).ComparisonIndex = 0;
  (local_570->DisplayName).Number = 0;
  (local_570->field2_0x10).Parent = (FTagData *)0x0;
  (local_570->StatName).ComparisonIndex = 0;
  (local_570->StatName).Number = 0;
  (local_570->SummaryStatName).ComparisonIndex = 0;
  (local_570->SummaryStatName).Number = 0;
  local_570->EnumTag = TrackedTotal;
  local_570->ReferenceSource = EnumTag;
  local_570->TagSet = None;
  local_570->bIsFinishConstructed = false;
  local_570->bParentIsName = true;
  local_570->bHasEnumTag = true;
  local_570->bIsReportable = true;
  local_160 = 0;
  local_168 = 0;
  local_570->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_570) &&
     (&local_570 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_570;
  if (this->TagDataEnumMap[5] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[5] = local_570;
  local_568 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  (local_568->Name).ComparisonIndex = 0;
  (local_568->Name).Number = 0;
  (local_568->DisplayName).ComparisonIndex = 0;
  (local_568->DisplayName).Number = 0;
  (local_568->field2_0x10).Parent = (FTagData *)0x0;
  (local_568->StatName).ComparisonIndex = 0;
  (local_568->StatName).Number = 0;
  (local_568->SummaryStatName).ComparisonIndex = 0;
  (local_568->SummaryStatName).Number = 0;
  local_568->EnumTag = UntaggedTotal;
  local_568->ReferenceSource = EnumTag;
  local_568->TagSet = None;
  local_568->bIsFinishConstructed = false;
  local_568->bParentIsName = true;
  local_568->bHasEnumTag = true;
  local_568->bIsReportable = true;
  local_138 = 0;
  local_140 = 0;
  local_568->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_568) &&
     (&local_568 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_568;
  if (this->TagDataEnumMap[6] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[6] = local_568;
  local_560 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  (local_560->Name).ComparisonIndex = 0;
  (local_560->Name).Number = 0;
  (local_560->DisplayName).ComparisonIndex = 0;
  (local_560->DisplayName).Number = 0;
  (local_560->field2_0x10).Parent = (FTagData *)0x0;
  (local_560->StatName).ComparisonIndex = 0;
  (local_560->StatName).Number = 0;
  (local_560->SummaryStatName).ComparisonIndex = 0;
  (local_560->SummaryStatName).Number = 0;
  local_560->EnumTag = WorkingSetSize;
  local_560->ReferenceSource = EnumTag;
  local_560->TagSet = None;
  local_560->bIsFinishConstructed = false;
  local_560->bParentIsName = true;
  local_560->bHasEnumTag = true;
  local_560->bIsReportable = true;
  local_110 = 0;
  local_118 = 0;
  local_560->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_560) &&
     (&local_560 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_560;
  if (this->TagDataEnumMap[7] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[7] = local_560;
  local_558 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  (local_558->Name).ComparisonIndex = 0;
  (local_558->Name).Number = 0;
  (local_558->DisplayName).ComparisonIndex = 0;
  (local_558->DisplayName).Number = 0;
  (local_558->field2_0x10).Parent = (FTagData *)0x0;
  (local_558->StatName).ComparisonIndex = 0;
  (local_558->StatName).Number = 0;
  (local_558->SummaryStatName).ComparisonIndex = 0;
  (local_558->SummaryStatName).Number = 0;
  local_558->EnumTag = PagefileUsed;
  local_558->ReferenceSource = EnumTag;
  local_558->TagSet = None;
  local_558->bIsFinishConstructed = false;
  local_558->bParentIsName = true;
  local_558->bHasEnumTag = true;
  local_558->bIsReportable = true;
  local_e8 = 0;
  local_f0 = 0;
  local_558->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_558) &&
     (&local_558 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_558;
  if (this->TagDataEnumMap[8] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[8] = local_558;
  local_550 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  (local_550->Name).ComparisonIndex = 0;
  (local_550->Name).Number = 0;
  (local_550->DisplayName).ComparisonIndex = 0;
  (local_550->DisplayName).Number = 0;
  (local_550->field2_0x10).Parent = (FTagData *)0x0;
  (local_550->StatName).ComparisonIndex = 0;
  (local_550->StatName).Number = 0;
  (local_550->SummaryStatName).ComparisonIndex = 0;
  (local_550->SummaryStatName).Number = 0;
  local_550->EnumTag = PlatformTrackedTotal;
  local_550->ReferenceSource = EnumTag;
  local_550->TagSet = None;
  local_550->bIsFinishConstructed = false;
  local_550->bParentIsName = true;
  local_550->bHasEnumTag = true;
  local_550->bIsReportable = true;
  local_c0 = 0;
  local_c8 = 0;
  local_550->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_550) &&
     (&local_550 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_550;
  if (this->TagDataEnumMap[9] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[9] = local_550;
  local_548 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  (local_548->Name).ComparisonIndex = 0;
  (local_548->Name).Number = 0;
  (local_548->DisplayName).ComparisonIndex = 0;
  (local_548->DisplayName).Number = 0;
  (local_548->field2_0x10).Parent = (FTagData *)0x0;
  (local_548->StatName).ComparisonIndex = 0;
  (local_548->StatName).Number = 0;
  (local_548->SummaryStatName).ComparisonIndex = 0;
  (local_548->SummaryStatName).Number = 0;
  local_548->EnumTag = PlatformUntaggedTotal;
  local_548->ReferenceSource = EnumTag;
  local_548->TagSet = None;
  local_548->bIsFinishConstructed = false;
  local_548->bParentIsName = true;
  local_548->bHasEnumTag = true;
  local_548->bIsReportable = true;
  local_98 = 0;
  local_a0 = 0;
  local_548->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_548) &&
     (&local_548 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_548;
  if (this->TagDataEnumMap[10] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[10] = local_548;
  local_540 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  (local_540->Name).ComparisonIndex = 0;
  (local_540->Name).Number = 0;
  (local_540->DisplayName).ComparisonIndex = 0;
  (local_540->DisplayName).Number = 0;
  (local_540->field2_0x10).Parent = (FTagData *)0x0;
  (local_540->StatName).ComparisonIndex = 0;
  (local_540->StatName).Number = 0;
  (local_540->SummaryStatName).ComparisonIndex = 0;
  (local_540->SummaryStatName).Number = 0;
  local_540->EnumTag = PlatformUntracked;
  local_540->ReferenceSource = EnumTag;
  local_540->TagSet = None;
  local_540->bIsFinishConstructed = false;
  local_540->bParentIsName = true;
  local_540->bHasEnumTag = true;
  local_540->bIsReportable = true;
  local_70 = 0;
  local_78 = 0;
  local_540->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_540) &&
     (&local_540 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_540;
  if (this->TagDataEnumMap[0xb] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[0xb] = local_540;
  local_538 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  (local_538->Name).ComparisonIndex = 0;
  (local_538->Name).Number = 0;
  (local_538->DisplayName).ComparisonIndex = 0;
  (local_538->DisplayName).Number = 0;
  (local_538->field2_0x10).Parent = (FTagData *)0x0;
  (local_538->StatName).ComparisonIndex = 0;
  (local_538->StatName).Number = 0;
  (local_538->SummaryStatName).ComparisonIndex = 0;
  (local_538->SummaryStatName).Number = 0;
  local_538->EnumTag = PlatformOverhead;
  local_538->ReferenceSource = EnumTag;
  local_538->TagSet = None;
  local_538->bIsFinishConstructed = false;
  local_538->bParentIsName = true;
  local_538->bHasEnumTag = true;
  local_538->bIsReportable = true;
  local_48 = 0;
  local_50 = 0;
  local_538->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_538) &&
     (&local_538 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_538;
  if (this->TagDataEnumMap[0xc] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_res10[0] = PlatformOSAvailable;
  this->TagDataEnumMap[0xc] = local_538;
  local_530 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_res10);
  local_530->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_530) &&
     (&local_530 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_530;
  if (this->TagDataEnumMap[0xd] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_res18[0] = FMalloc;
  this->TagDataEnumMap[0xd] = local_530;
  local_528 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_res18);
  local_528->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_528) &&
     (&local_528 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_528;
  if (this->TagDataEnumMap[0xe] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_res20[0] = FMallocUnused;
  this->TagDataEnumMap[0xe] = local_528;
  local_520 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_res20);
  local_520->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_520) &&
     (&local_520 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_520;
  if (this->TagDataEnumMap[0xf] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0] = RHIUnused;
  this->TagDataEnumMap[0xf] = local_520;
  local_518 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8);
  local_518->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_518) &&
     (&local_518 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_518;
  if (this->TagDataEnumMap[0x10] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[1] = 0x11;
  this->TagDataEnumMap[0x10] = local_518;
  local_510 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 1);
  local_510->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_510) &&
     (&local_510 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_510;
  if (this->TagDataEnumMap[0x11] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[2] = 0x12;
  this->TagDataEnumMap[0x11] = local_510;
  local_508 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 2);
  local_508->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_508) &&
     (&local_508 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_508;
  if (this->TagDataEnumMap[0x12] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[3] = 0x13;
  this->TagDataEnumMap[0x12] = local_508;
  local_500 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 3);
  local_500->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_500) &&
     (&local_500 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_500;
  if (this->TagDataEnumMap[0x13] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[4] = 0x14;
  this->TagDataEnumMap[0x13] = local_500;
  local_4f8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 4);
  local_4f8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4f8) &&
     (&local_4f8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4f8;
  if (this->TagDataEnumMap[0x14] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[5] = 0x15;
  this->TagDataEnumMap[0x14] = local_4f8;
  local_4f0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 5);
  local_4f0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4f0) &&
     (&local_4f0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4f0;
  if (this->TagDataEnumMap[0x15] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[6] = 0x16;
  this->TagDataEnumMap[0x15] = local_4f0;
  local_4e8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 6);
  local_4e8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4e8) &&
     (&local_4e8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4e8;
  if (this->TagDataEnumMap[0x16] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[7] = 0x17;
  this->TagDataEnumMap[0x16] = local_4e8;
  local_4e0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 7);
  local_4e0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4e0) &&
     (&local_4e0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4e0;
  if (this->TagDataEnumMap[0x17] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[8] = 0x18;
  this->TagDataEnumMap[0x17] = local_4e0;
  local_4d8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 8);
  local_4d8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4d8) &&
     (&local_4d8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4d8;
  if (this->TagDataEnumMap[0x18] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[9] = 0x19;
  this->TagDataEnumMap[0x18] = local_4d8;
  local_4d0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 9);
  local_4d0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4d0) &&
     (&local_4d0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4d0;
  if (this->TagDataEnumMap[0x19] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[10] = 0x1a;
  this->TagDataEnumMap[0x19] = local_4d0;
  local_4c8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 10);
  local_4c8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4c8) &&
     (&local_4c8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4c8;
  if (this->TagDataEnumMap[0x1a] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0xb] = 0x1b;
  this->TagDataEnumMap[0x1a] = local_4c8;
  local_4c0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0xb);
  local_4c0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4c0) &&
     (&local_4c0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4c0;
  if (this->TagDataEnumMap[0x1b] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0xc] = 0x1c;
  this->TagDataEnumMap[0x1b] = local_4c0;
  local_4b8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0xc);
  local_4b8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4b8) &&
     (&local_4b8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4b8;
  if (this->TagDataEnumMap[0x1c] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0xd] = 0x1d;
  this->TagDataEnumMap[0x1c] = local_4b8;
  local_4b0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0xd);
  local_4b0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4b0) &&
     (&local_4b0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4b0;
  if (this->TagDataEnumMap[0x1d] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0xe] = 0x1e;
  this->TagDataEnumMap[0x1d] = local_4b0;
  local_4a8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0xe);
  local_4a8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4a8) &&
     (&local_4a8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4a8;
  if (this->TagDataEnumMap[0x1e] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0xf] = 0x1f;
  this->TagDataEnumMap[0x1e] = local_4a8;
  local_4a0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0xf);
  local_4a0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_4a0) &&
     (&local_4a0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_4a0;
  if (this->TagDataEnumMap[0x1f] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x10] = 0x20;
  this->TagDataEnumMap[0x1f] = local_4a0;
  local_498 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x10);
  local_498->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_498) &&
     (&local_498 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_498;
  if (this->TagDataEnumMap[0x20] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x11] = 0x21;
  this->TagDataEnumMap[0x20] = local_498;
  local_490 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x11);
  local_490->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_490) &&
     (&local_490 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_490;
  if (this->TagDataEnumMap[0x21] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x12] = 0x22;
  this->TagDataEnumMap[0x21] = local_490;
  local_488 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x12);
  local_488->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_488) &&
     (&local_488 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_488;
  if (this->TagDataEnumMap[0x22] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x13] = 0x23;
  this->TagDataEnumMap[0x22] = local_488;
  local_480 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x13);
  local_480->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_480) &&
     (&local_480 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_480;
  if (this->TagDataEnumMap[0x23] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x14] = 0x24;
  this->TagDataEnumMap[0x23] = local_480;
  local_478 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x14);
  local_478->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_478) &&
     (&local_478 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_478;
  if (this->TagDataEnumMap[0x24] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x15] = 0x25;
  this->TagDataEnumMap[0x24] = local_478;
  local_470 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x15);
  local_470->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_470) &&
     (&local_470 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_470;
  if (this->TagDataEnumMap[0x25] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x16] = 0x26;
  this->TagDataEnumMap[0x25] = local_470;
  local_468 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x16);
  local_468->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_468) &&
     (&local_468 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_468;
  if (this->TagDataEnumMap[0x26] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x17] = 0x27;
  this->TagDataEnumMap[0x26] = local_468;
  local_460 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x17);
  local_460->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_460) &&
     (&local_460 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_460;
  if (this->TagDataEnumMap[0x27] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x18] = 0x28;
  this->TagDataEnumMap[0x27] = local_460;
  local_458 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x18);
  local_458->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_458) &&
     (&local_458 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_458;
  if (this->TagDataEnumMap[0x28] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x19] = 0x29;
  this->TagDataEnumMap[0x28] = local_458;
  local_450 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x19);
  local_450->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_450) &&
     (&local_450 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_450;
  if (this->TagDataEnumMap[0x29] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x1a] = 0x2a;
  this->TagDataEnumMap[0x29] = local_450;
  local_448 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x1a);
  local_448->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_448) &&
     (&local_448 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_448;
  if (this->TagDataEnumMap[0x2a] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x1b] = 0x2b;
  this->TagDataEnumMap[0x2a] = local_448;
  local_440 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x1b);
  local_440->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_440) &&
     (&local_440 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_440;
  if (this->TagDataEnumMap[0x2b] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x1c] = 0x2c;
  this->TagDataEnumMap[0x2b] = local_440;
  local_438 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x1c);
  local_438->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_438) &&
     (&local_438 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_438;
  if (this->TagDataEnumMap[0x2c] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x1d] = 0x2d;
  this->TagDataEnumMap[0x2c] = local_438;
  local_430 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x1d);
  local_430->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_430) &&
     (&local_430 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_430;
  if (this->TagDataEnumMap[0x2d] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x1e] = 0x2e;
  this->TagDataEnumMap[0x2d] = local_430;
  local_428 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x1e);
  local_428->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_428) &&
     (&local_428 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_428;
  if (this->TagDataEnumMap[0x2e] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x1f] = 0x2f;
  this->TagDataEnumMap[0x2e] = local_428;
  local_420 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x1f);
  local_420->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_420) &&
     (&local_420 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_420;
  if (this->TagDataEnumMap[0x2f] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x20] = 0x30;
  this->TagDataEnumMap[0x2f] = local_420;
  local_418 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x20);
  local_418->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_418) &&
     (&local_418 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_418;
  if (this->TagDataEnumMap[0x30] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x21] = 0x31;
  this->TagDataEnumMap[0x30] = local_418;
  local_410 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x21);
  local_410->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_410) &&
     (&local_410 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_410;
  if (this->TagDataEnumMap[0x31] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x22] = 0x32;
  this->TagDataEnumMap[0x31] = local_410;
  local_408 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x22);
  local_408->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_408) &&
     (&local_408 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_408;
  if (this->TagDataEnumMap[0x32] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x23] = 0x33;
  this->TagDataEnumMap[0x32] = local_408;
  local_400 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x23);
  local_400->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_400) &&
     (&local_400 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_400;
  if (this->TagDataEnumMap[0x33] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x24] = 0x34;
  this->TagDataEnumMap[0x33] = local_400;
  local_3f8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x24);
  local_3f8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3f8) &&
     (&local_3f8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3f8;
  if (this->TagDataEnumMap[0x34] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x25] = 0x35;
  this->TagDataEnumMap[0x34] = local_3f8;
  local_3f0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x25);
  local_3f0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3f0) &&
     (&local_3f0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3f0;
  if (this->TagDataEnumMap[0x35] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x26] = 0x36;
  this->TagDataEnumMap[0x35] = local_3f0;
  local_3e8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x26);
  local_3e8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3e8) &&
     (&local_3e8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3e8;
  if (this->TagDataEnumMap[0x36] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x27] = 0x37;
  this->TagDataEnumMap[0x36] = local_3e8;
  local_3e0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x27);
  local_3e0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3e0) &&
     (&local_3e0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3e0;
  if (this->TagDataEnumMap[0x37] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x28] = 0x38;
  this->TagDataEnumMap[0x37] = local_3e0;
  local_3d8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x28);
  local_3d8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3d8) &&
     (&local_3d8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3d8;
  if (this->TagDataEnumMap[0x38] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x29] = 0x39;
  this->TagDataEnumMap[0x38] = local_3d8;
  local_3d0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x29);
  local_3d0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3d0) &&
     (&local_3d0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3d0;
  if (this->TagDataEnumMap[0x39] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x2a] = 0x3a;
  this->TagDataEnumMap[0x39] = local_3d0;
  local_3c8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x2a);
  local_3c8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3c8) &&
     (&local_3c8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3c8;
  if (this->TagDataEnumMap[0x3a] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x2b] = 0x3b;
  this->TagDataEnumMap[0x3a] = local_3c8;
  local_3c0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x2b);
  local_3c0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3c0) &&
     (&local_3c0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3c0;
  if (this->TagDataEnumMap[0x3b] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x2c] = 0x3c;
  this->TagDataEnumMap[0x3b] = local_3c0;
  local_3b8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x2c);
  local_3b8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3b8) &&
     (&local_3b8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3b8;
  if (this->TagDataEnumMap[0x3c] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x2d] = 0x3d;
  this->TagDataEnumMap[0x3c] = local_3b8;
  local_3b0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x2d);
  local_3b0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3b0) &&
     (&local_3b0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3b0;
  if (this->TagDataEnumMap[0x3d] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x2e] = 0x3e;
  this->TagDataEnumMap[0x3d] = local_3b0;
  local_3a8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x2e);
  local_3a8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3a8) &&
     (&local_3a8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3a8;
  if (this->TagDataEnumMap[0x3e] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x2f] = 0x3f;
  this->TagDataEnumMap[0x3e] = local_3a8;
  local_3a0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x2f);
  local_3a0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_3a0) &&
     (&local_3a0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_3a0;
  if (this->TagDataEnumMap[0x3f] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x30] = 0x40;
  this->TagDataEnumMap[0x3f] = local_3a0;
  local_398 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x30);
  local_398->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_398) &&
     (&local_398 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_398;
  if (this->TagDataEnumMap[0x40] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x31] = 0x41;
  this->TagDataEnumMap[0x40] = local_398;
  local_390 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x31);
  local_390->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_390) &&
     (&local_390 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_390;
  if (this->TagDataEnumMap[0x41] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x32] = 0x42;
  this->TagDataEnumMap[0x41] = local_390;
  local_388 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x32);
  local_388->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_388) &&
     (&local_388 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_388;
  if (this->TagDataEnumMap[0x42] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x33] = 0x43;
  this->TagDataEnumMap[0x42] = local_388;
  local_380 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x33);
  local_380->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_380) &&
     (&local_380 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_380;
  if (this->TagDataEnumMap[0x43] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x34] = 0x44;
  this->TagDataEnumMap[0x43] = local_380;
  local_378 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x34);
  local_378->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_378) &&
     (&local_378 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_378;
  if (this->TagDataEnumMap[0x44] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x35] = 0x45;
  this->TagDataEnumMap[0x44] = local_378;
  local_370 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x35);
  local_370->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_370) &&
     (&local_370 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_370;
  if (this->TagDataEnumMap[0x45] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x36] = 0x46;
  this->TagDataEnumMap[0x45] = local_370;
  local_368 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x36);
  local_368->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_368) &&
     (&local_368 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_368;
  if (this->TagDataEnumMap[0x46] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x37] = 0x47;
  this->TagDataEnumMap[0x46] = local_368;
  local_360 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x37);
  local_360->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_360) &&
     (&local_360 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_360;
  if (this->TagDataEnumMap[0x47] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x38] = 0x48;
  this->TagDataEnumMap[0x47] = local_360;
  local_358 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x38);
  local_358->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_358) &&
     (&local_358 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_358;
  if (this->TagDataEnumMap[0x48] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x39] = 0x49;
  this->TagDataEnumMap[0x48] = local_358;
  local_350 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x39);
  local_350->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_350) &&
     (&local_350 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_350;
  if (this->TagDataEnumMap[0x49] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x3a] = 0x4a;
  this->TagDataEnumMap[0x49] = local_350;
  local_348 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x3a);
  local_348->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_348) &&
     (&local_348 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_348;
  if (this->TagDataEnumMap[0x4a] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x3b] = 0x4b;
  this->TagDataEnumMap[0x4a] = local_348;
  local_340 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x3b);
  local_340->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_340) &&
     (&local_340 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_340;
  if (this->TagDataEnumMap[0x4b] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x3c] = 0x4c;
  this->TagDataEnumMap[0x4b] = local_340;
  local_338 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x3c);
  local_338->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_338) &&
     (&local_338 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_338;
  if (this->TagDataEnumMap[0x4c] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x3d] = 0x4d;
  this->TagDataEnumMap[0x4c] = local_338;
  local_330 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x3d);
  local_330->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_330) &&
     (&local_330 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_330;
  if (this->TagDataEnumMap[0x4d] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x3e] = 0x4e;
  this->TagDataEnumMap[0x4d] = local_330;
  local_328 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x3e);
  local_328->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_328) &&
     (&local_328 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_328;
  if (this->TagDataEnumMap[0x4e] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x3f] = 0x4f;
  this->TagDataEnumMap[0x4e] = local_328;
  local_320 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x3f);
  local_320->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_320) &&
     (&local_320 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_320;
  if (this->TagDataEnumMap[0x4f] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x40] = 0x50;
  this->TagDataEnumMap[0x4f] = local_320;
  local_318 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x40);
  local_318->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_318) &&
     (&local_318 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_318;
  if (this->TagDataEnumMap[0x50] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x41] = 0x51;
  this->TagDataEnumMap[0x50] = local_318;
  local_310 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x41);
  local_310->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_310) &&
     (&local_310 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_310;
  if (this->TagDataEnumMap[0x51] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x42] = 0x52;
  this->TagDataEnumMap[0x51] = local_310;
  local_308 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x42);
  local_308->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_308) &&
     (&local_308 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_308;
  if (this->TagDataEnumMap[0x52] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x43] = 0x53;
  this->TagDataEnumMap[0x52] = local_308;
  local_300 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x43);
  local_300->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_300) &&
     (&local_300 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_300;
  if (this->TagDataEnumMap[0x53] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x44] = 0x54;
  this->TagDataEnumMap[0x53] = local_300;
  local_2f8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x44);
  local_2f8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2f8) &&
     (&local_2f8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2f8;
  if (this->TagDataEnumMap[0x54] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x45] = 0x55;
  this->TagDataEnumMap[0x54] = local_2f8;
  local_2f0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x45);
  local_2f0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2f0) &&
     (&local_2f0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2f0;
  if (this->TagDataEnumMap[0x55] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x46] = 0x56;
  this->TagDataEnumMap[0x55] = local_2f0;
  local_2e8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x46);
  local_2e8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2e8) &&
     (&local_2e8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2e8;
  if (this->TagDataEnumMap[0x56] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x47] = 0x57;
  this->TagDataEnumMap[0x56] = local_2e8;
  local_2e0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x47);
  local_2e0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2e0) &&
     (&local_2e0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2e0;
  if (this->TagDataEnumMap[0x57] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x48] = 0x58;
  this->TagDataEnumMap[0x57] = local_2e0;
  local_2d8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x48);
  local_2d8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2d8) &&
     (&local_2d8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2d8;
  if (this->TagDataEnumMap[0x58] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x49] = 0x59;
  this->TagDataEnumMap[0x58] = local_2d8;
  local_2d0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x49);
  local_2d0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2d0) &&
     (&local_2d0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2d0;
  if (this->TagDataEnumMap[0x59] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x4a] = 0x5a;
  this->TagDataEnumMap[0x59] = local_2d0;
  local_2c8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x4a);
  local_2c8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2c8) &&
     (&local_2c8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2c8;
  if (this->TagDataEnumMap[0x5a] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x4b] = 0x5b;
  this->TagDataEnumMap[0x5a] = local_2c8;
  local_2c0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x4b);
  local_2c0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2c0) &&
     (&local_2c0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2c0;
  if (this->TagDataEnumMap[0x5b] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x4c] = 0x5c;
  this->TagDataEnumMap[0x5b] = local_2c0;
  local_2b8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x4c);
  local_2b8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2b8) &&
     (&local_2b8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2b8;
  if (this->TagDataEnumMap[0x5c] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x4d] = 0x5d;
  this->TagDataEnumMap[0x5c] = local_2b8;
  local_2b0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x4d);
  local_2b0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2b0) &&
     (&local_2b0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2b0;
  if (this->TagDataEnumMap[0x5d] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x4e] = 0x5e;
  this->TagDataEnumMap[0x5d] = local_2b0;
  local_2a8 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x4e);
  local_2a8->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2a8) &&
     (&local_2a8 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2a8;
  if (this->TagDataEnumMap[0x5e] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x4f] = 0x5f;
  this->TagDataEnumMap[0x5e] = local_2a8;
  local_2a0 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x4f);
  local_2a0->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_2a0) &&
     (&local_2a0 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_2a0;
  if (this->TagDataEnumMap[0x5f] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x50] = 0x60;
  this->TagDataEnumMap[0x5f] = local_2a0;
  local_298 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x50);
  local_298->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_298) &&
     (&local_298 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_298;
  if (this->TagDataEnumMap[0x60] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x51] = 0x61;
  this->TagDataEnumMap[0x60] = local_298;
  local_290 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x51);
  local_290->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_290) &&
     (&local_290 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_290;
  if (this->TagDataEnumMap[0x61] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x52] = 0x62;
  this->TagDataEnumMap[0x61] = local_290;
  local_288 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x52);
  local_288->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_288) &&
     (&local_288 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_288;
  if (this->TagDataEnumMap[0x62] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x53] = 99;
  this->TagDataEnumMap[0x62] = local_288;
  local_280 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x53);
  local_280->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_280) &&
     (&local_280 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_280;
  if (this->TagDataEnumMap[99] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x54] = 100;
  this->TagDataEnumMap[99] = local_280;
  local_278 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x54);
  local_278->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_278) &&
     (&local_278 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_278;
  if (this->TagDataEnumMap[100] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x55] = 0x65;
  this->TagDataEnumMap[100] = local_278;
  local_270 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x55);
  local_270->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_270) &&
     (&local_270 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_270;
  if (this->TagDataEnumMap[0x65] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x56] = 0x66;
  this->TagDataEnumMap[0x65] = local_270;
  local_268 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x56);
  local_268->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_268) &&
     (&local_268 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_268;
  if (this->TagDataEnumMap[0x66] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x57] = 0x67;
  this->TagDataEnumMap[0x66] = local_268;
  local_260 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x57);
  local_260->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_260) &&
     (&local_260 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_260;
  if (this->TagDataEnumMap[0x67] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x58] = 0x68;
  this->TagDataEnumMap[0x67] = local_260;
  local_258 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x58);
  local_258->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_258) &&
     (&local_258 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_258;
  if (this->TagDataEnumMap[0x68] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x59] = 0x69;
  this->TagDataEnumMap[0x68] = local_258;
  local_250 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x59);
  local_250->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_250) &&
     (&local_250 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_250;
  if (this->TagDataEnumMap[0x69] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x5a] = 0x6a;
  this->TagDataEnumMap[0x69] = local_250;
  local_248 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x5a);
  local_248->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_248) &&
     (&local_248 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_248;
  if (this->TagDataEnumMap[0x6a] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x5b] = 0x6b;
  this->TagDataEnumMap[0x6a] = local_248;
  local_240 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x5b);
  local_240->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_240) &&
     (&local_240 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_240;
  if (this->TagDataEnumMap[0x6b] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_5f8[0x5c] = 0x6c;
  this->TagDataEnumMap[0x6b] = local_240;
  local_238 = UE::LLMPrivate::FLLMAllocator::New<UE::LLMPrivate::FTagData,enum_ELLMTag_&>
                        (&this->Allocator,local_5f8 + 0x5c);
  local_238->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar4 = this->TagDatas;
  if ((*(FTagData ***)pFVar4 <= &local_238) &&
     (&local_238 < *(FTagData ***)pFVar4 + *(int *)&pFVar4->field_0x14)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4->field_0x10;
  if (iVar3 == *(int *)&pFVar4->field_0x14) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)&pFVar4->field_0x14);
  }
  *(int *)&pFVar4->field_0x10 = iVar3 + 1;
  *(FTagData **)(*(longlong *)pFVar4 + (longlong)iVar3 * 8) = local_238;
  if (this->TagDataEnumMap[0x6c] != (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->TagDataEnumMap[0x6c] = local_238;
  this->TagDataEnumMap[0x6c]->bIsReportable = false;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  return;
}

// Clear @ 14168afa0

void __thiscall FLowLevelMemTracker::Clear(FLowLevelMemTracker *this)

{
  FLLMTracker *pFVar1;
  
  if (this->bInitialisedTracking != false) {
    if (EnabledState != Disabled) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    UE::LLMPrivate::FLLMTracker::Clear(this->Trackers[0]);
    pFVar1 = this->Trackers[0];
    if (pFVar1 != (FLLMTracker *)0x0) {
      UE::LLMPrivate::FLLMTracker::_scalar_deleting_destructor_(pFVar1,0);
      UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,pFVar1,0x7eb0);
    }
    this->Trackers[0] = (FLLMTracker *)0x0;
    UE::LLMPrivate::FLLMTracker::Clear(this->Trackers[1]);
    pFVar1 = this->Trackers[1];
    if (pFVar1 != (FLLMTracker *)0x0) {
      UE::LLMPrivate::FLLMTracker::_scalar_deleting_destructor_(pFVar1,0);
      UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,pFVar1,0x7eb0);
    }
    this->Trackers[1] = (FLLMTracker *)0x0;
    ClearTagDatas(this);
    UE::LLMPrivate::FLLMAllocator::Clear(&this->Allocator);
    this->bFullyInitialised = false;
    this->bInitialisedTracking = false;
  }
  return;
}

// ClearTagDatas @ 14168b930

void __thiscall FLowLevelMemTracker::ClearTagDatas(FLowLevelMemTracker *this)

{
  undefined8 *puVar1;
  int iVar2;
  FTagDataNameMap *this_00;
  FTagDataArray *pFVar3;
  void *pvVar4;
  TArray<void_(__cdecl*)(FLLMTagDeclaration_&),TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  pTVar5 = UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  pTVar5->ArrayNum = 0;
  if (pTVar5->ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>_>
              (8,8,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
  }
  UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,this->TagDataEnumMap,0x800);
  this_00 = this->TagDataNameMap;
  this->TagDataEnumMap = (FTagData **)0x0;
  if (this_00 != (FTagDataNameMap *)0x0) {
    *(undefined4 *)&this_00->field_0x60 = 0;
    if (*(void **)&this_00->field_0x50 != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free
                (Allocator,*(void **)&this_00->field_0x50,*(ulong64 *)&this_00->field_0x58);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>_>,FDefaultSparseArrayLLMAllocator>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>_>,FDefaultSparseArrayLLMAllocator>
              ((TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>_>,FDefaultSparseArrayLLMAllocator>
                *)this_00);
    UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,this_00,0x68);
  }
  pFVar3 = this->TagDatas;
  this->TagDataNameMap = (FTagDataNameMap *)0x0;
  puVar6 = *(undefined8 **)pFVar3;
  iVar2 = *(int *)&pFVar3->field_0x10;
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)&pFVar3->field_0x10 != iVar2) {
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar6 == puVar1) break;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      if (*(char *)((longlong)pvVar4 + 0x36) != '\0') {
        *(undefined1 *)((longlong)pvVar4 + 0x36) = 0;
      }
      UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,pvVar4,0x40);
    }
    puVar6 = puVar6 + 1;
  }
  pFVar3 = this->TagDatas;
  if (pFVar3 != (FTagDataArray *)0x0) {
    if (*(void **)pFVar3 != (void *)0x0) {
      UE::LLMPrivate::FLLMAllocator::Free(Allocator,*(void **)pFVar3,*(ulong64 *)&pFVar3->field_0x8)
      ;
    }
    UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,pFVar3,0x18);
  }
  this->TagDatas = (FTagDataArray *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014168ba7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  return;
}

// Construct @ 14168c2f0

FLowLevelMemTracker * __cdecl FLowLevelMemTracker::Construct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FLowLevelMemTracker(&Tracker);
      atexit(`FLowLevelMemTracker::Construct'::__l2::_dynamic_atexit_destructor_for__Tracker__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TrackerInstance = &Tracker;
  return &Tracker;
}

// DumpTag @ 1416914f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
FLowLevelMemTracker::DumpTag
          (FLowLevelMemTracker *this,ELLMTracker param_1,char *param_2,int param_3)

{
  ELLMTag EVar1;
  FLLMThreadState *this_00;
  FTagData *this_01;
  size_t sVar2;
  undefined1 auStack_1a8 [32];
  int local_188;
  FName local_178;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178 = (FName)((ulonglong)local_178 & 0xffffffff00000000);
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    if (EnabledState != Disabled) {
      BootstrapInitialise(this);
      this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this->Trackers[param_1]);
      this_01 = UE::LLMPrivate::FLLMThreadState::GetTopTag(this_00,None);
      if (this_01 != (FTagData *)0x0) {
        if (param_2 != (char *)0x0) {
          local_158._padding_ = 0;
          sVar2 = strlen(param_2);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,param_2,(int)sVar2,Yes);
        }
        UE::LLMPrivate::FTagData::GetContainingEnum(this_01);
        local_178 = this_01->DisplayName;
        ::FName::ToString(&local_178,&local_170);
        local_188 = param_3;
        FGenericPlatformMisc::LowLevelOutputDebugStringf(L"LLM TAG: %s (%lld) @ %s:%d\n");
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if ((param_2 != (char *)0x0) && ((void *)local_158._padding_ != (void *)0x0)) {
          FMemory::Free((void *)local_158._padding_);
        }
        EVar1 = UE::LLMPrivate::FTagData::GetContainingEnum(this_01);
        return (ulonglong)EVar1;
      }
    }
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"LLM TAG: No Active Tag");
  }
  return 0;
}

// DumpToLog @ 141691660

/* WARNING: Removing unreachable block (ram,0x000141691c2c) */
/* WARNING: Removing unreachable block (ram,0x000141691c3a) */
/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall
FLowLevelMemTracker::DumpToLog
          (FLowLevelMemTracker *this,EDumpFormat param_1,FOutputDevice *param_2,ESizeParams param_3,
          ELLMTagSet param_4)

{
  FTagLine *pFVar1;
  byte bVar2;
  FTagData *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long64 lVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  int iVar17;
  undefined1 local_126;
  undefined1 local_125;
  undefined2 local_124;
  byte local_122 [2];
  ForAnyElementType local_120;
  undefined8 local_118;
  ForAnyElementType local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  FString local_f8;
  FTagLine local_e8;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> local_c0;
  FString local_b0;
  FString local_a0;
  wchar_t *local_90;
  byte *local_88;
  FName local_80;
  FScriptContainerElement *local_78;
  FString local_70;
  FString local_60 [2];
  
  if (EnabledState != Disabled) {
    if (param_2 == (FOutputDevice *)0x0) {
      param_2 = (FOutputDevice *)GetGlobalLogSingleton();
    }
    if (param_1 == CSV) {
      FOutputDevice::Log(param_2,L",TagName,SizeMB,PeakMB,Tracker,PathName");
    }
    else {
      FOutputDevice::LogfImpl(param_2,L"%40s %12s %12s  Tracker PathName");
    }
    local_88 = (byte *)&local_124;
    local_124 = 1;
    do {
      FVar12.Data = (FScriptContainerElement *)0x0;
      bVar2 = *local_88;
      local_90 = L"Platform";
      local_110.Data = (FScriptContainerElement *)0x0;
      if (bVar2 == 1) {
        local_90 = L"Default";
      }
      local_108 = 0;
      if (EnabledState == Disabled) {
        local_120.Data = (FScriptContainerElement *)0x0;
        local_118 = 0;
      }
      else {
        BootstrapInitialise(this);
        EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
        ::GetKeys<TSizedDefaultAllocator<32>_>
                  ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                    *)&this->Trackers[bVar2]->TagSizes,&local_c0);
        local_120.Data = (FScriptContainerElement *)0x0;
        local_118 = 0;
        pFVar14 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 8;
        pFVar15 = FVar12.Data;
        for (FVar16.Data = local_c0.AllocatorInstance.Data; FVar16.Data != pFVar14;
            FVar16.Data = FVar16.Data + 8) {
          if ((*(longlong *)FVar16.Data != 0) &&
             (*(ELLMTagSet *)(*(longlong *)FVar16.Data + 0x34) == param_4)) {
            iVar8 = (int)pFVar15;
            if ((FVar12.Data <= FVar16.Data) &&
               (local_118._4_4_ = (int)(local_118 >> 0x20), lVar11 = (longlong)local_118._4_4_,
               FVar16.Data < FVar12.Data + lVar11 * 8)) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar12.Data = local_120.Data;
              iVar8 = (int)local_118;
            }
            if (iVar8 == local_118._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_120,(int *)((longlong)&local_118 + 4));
              FVar12.Data = local_120.Data;
            }
            local_118 = CONCAT44(local_118._4_4_,iVar8 + 1U);
            *(longlong *)(FVar12.Data + (longlong)iVar8 * 8) = *(longlong *)FVar16.Data;
            pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1U);
            FVar12.Data = local_120.Data;
          }
        }
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
        FVar12.Data = (FScriptContainerElement *)(local_118 & 0xffffffff);
      }
      iVar8 = (int)FVar12.Data;
      local_78 = local_120.Data + (longlong)iVar8 * 8;
      FVar16.Data = local_120.Data;
      while( true ) {
        pFVar14 = local_78;
        lVar10 = 0;
        if ((int)FVar12.Data != iVar8) {
          local_126 = 0;
          `TCheckedPointerIterator<UE::LLMPrivate::FTagData_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_126);
        }
        if (FVar16.Data == pFVar14) break;
        pFVar3 = *(FTagData **)FVar16.Data;
        if (EnabledState != Disabled) {
          BootstrapInitialise(this);
          if (pFVar3 != (FTagData *)0x0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
            lVar10 = UE::LLMPrivate::FLLMTracker::GetTagAmount(this->Trackers[bVar2],pFVar3,param_3)
            ;
            LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
          }
          if ((EnabledState != Disabled) && (BootstrapInitialise(this), pFVar3 != (FTagData *)0x0))
          {
            EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
            UE::LLMPrivate::FLLMTracker::GetTagAmount
                      (this->Trackers[bVar2],pFVar3,param_3 | ReportPeak);
            LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
          }
        }
        local_80 = pFVar3->Name;
        ::FName::ToString(&local_80,&local_f8);
        if (param_1 == CSV) {
          GetTagDisplayPathName(this,&local_70,pFVar3);
          ::FString::PrintfImpl(&local_b0,L",%s,%.3f,%.3f,%s,%s");
          FVar12.Data = local_b0.Data.AllocatorInstance.Data;
          iVar17 = local_b0.Data.ArrayMax;
          local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = local_b0.Data.ArrayNum;
          local_b0.Data.ArrayNum = 0;
          local_b0.Data.ArrayMax = 0;
          FVar13.Data = local_70.Data.AllocatorInstance.Data;
        }
        else {
          GetTagDisplayPathName(this,local_60,pFVar3);
          ::FString::PrintfImpl(&local_a0,L"%40s %12.3f %12.3f %8s %s");
          FVar12.Data = local_a0.Data.AllocatorInstance.Data;
          iVar17 = local_a0.Data.ArrayMax;
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = local_a0.Data.ArrayNum;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          FVar13.Data = local_60[0].Data.AllocatorInstance.Data;
        }
        if (FVar13.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar13.Data);
        }
        local_e8.TagName.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
        uVar5._0_4_ = local_f8.Data.ArrayNum;
        uVar5._4_4_ = local_f8.Data.ArrayMax;
        local_e8.TagName.Data.ArrayNum = local_f8.Data.ArrayNum;
        local_e8.TagName.Data.ArrayMax = local_f8.Data.ArrayMax;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        local_e8.Line.Data.ArrayMax = iVar17;
        local_e8.Line.Data.ArrayNum = iVar9;
        uVar6 = uVar5;
        local_e8.Line.Data.AllocatorInstance.Data = FVar12.Data;
        local_e8.Size = lVar10;
        if (((local_110.Data <= &local_e8) &&
            (uVar6 = local_e8.TagName.Data._8_8_,
            &local_e8 < (FTagLine *)(local_110.Data + (longlong)local_108._4_4_ * 0x28))) &&
           (local_e8.TagName.Data._8_8_ = uVar5,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar6 = local_e8.TagName.Data._8_8_, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_e8.TagName.Data._8_8_ = uVar6;
        iVar9 = (int)local_108;
        if ((int)local_108 == local_108._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_110,(int *)((longlong)&local_108 + 4));
        }
        local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
        lVar11 = (longlong)iVar9;
        *(undefined8 *)&local_110.Data[lVar11 * 0x28].field_0x0 = 0;
        *(FScriptContainerElement **)&local_110.Data[lVar11 * 0x28].field_0x0 =
             local_e8.TagName.Data.AllocatorInstance.Data;
        *(int *)(local_110.Data + lVar11 * 0x28 + 8) = local_e8.TagName.Data.ArrayNum;
        *(int *)(local_110.Data + lVar11 * 0x28 + 0xc) = local_e8.TagName.Data.ArrayMax;
        *(undefined8 *)(local_110.Data + lVar11 * 0x28 + 0x10) = 0;
        *(FScriptContainerElement **)(local_110.Data + lVar11 * 0x28 + 0x10) =
             local_e8.Line.Data.AllocatorInstance.Data;
        *(int *)(local_110.Data + lVar11 * 0x28 + 0x18) = local_e8.Line.Data.ArrayNum;
        *(int *)(local_110.Data + lVar11 * 0x28 + 0x1c) = local_e8.Line.Data.ArrayMax;
        *(long64 *)(local_110.Data + lVar11 * 0x28 + 0x20) = local_e8.Size;
        local_e8.Line.Data.ArrayNum = 0;
        local_e8.Line.Data.ArrayMax = 0;
        local_e8.Line.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.TagName.Data.ArrayNum = 0;
        local_e8.TagName.Data.ArrayMax = 0;
        local_e8.TagName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        FVar12.Data = (FScriptContainerElement *)(local_118 & 0xffffffff);
        FVar16.Data = FVar16.Data + 8;
      }
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      AlgoImpl::
      IntroSortInternal<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int,FIdentityFunctor,TDereferenceWrapper<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,_FLowLevelMemTracker::DumpToLog_::__l14::<lambda_1>_>_>
                ((FTagLine *)local_110.Data,(int)local_108,(FIdentityFunctor)(param_3 | ReportPeak),
                 (<lambda_1> *)local_100);
      iVar8 = (int)local_108;
      pFVar14 = local_110.Data + 0x10;
      pFVar1 = (FTagLine *)(local_110.Data + (longlong)(int)local_108 * 0x28);
      while( true ) {
        if ((int)local_108 != iVar8) {
          local_125 = 0;
          `TCheckedPointerIterator<`FLowLevelMemTracker::DumpToLog'::__l14::FTagLine,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_125);
        }
        if ((FTagLine *)(pFVar14 + -0x10) == pFVar1) break;
        FOutputDevice::LogfImpl(param_2,L"%s");
        pFVar14 = pFVar14 + 0x28;
      }
      DestructItems<_FLowLevelMemTracker::DumpToLog_::__l14::FTagLine,int>
                ((FTagLine *)local_110.Data,(int)local_108);
      if ((FTagLine *)local_110.Data != (FTagLine *)0x0) {
        FMemory::Free(local_110.Data);
      }
      local_88 = local_88 + 1;
    } while (local_88 != local_122);
  }
  return;
}

// Exec @ 141691e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLowLevelMemTracker::Exec(FLowLevelMemTracker *this,wchar_t *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStackY_20a8 [32];
  ForAnyElementType local_2058;
  int local_2050;
  int iStack_204c;
  wchar_t *local_2048;
  void *local_2040;
  uchar local_2038 [4096];
  uchar local_1038 [4096];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_20a8;
  if ((EnabledState == Disabled) ||
     (local_2048 = param_1, bVar2 = FParse::Command(&local_2048,L"LLMEM",true), !bVar2)) {
    bVar2 = false;
  }
  else {
    BootstrapInitialise(this);
    bVar2 = FParse::Command(&local_2048,L"SPAMALLOC",true);
    if (bVar2) {
      iVar4 = _wtoi(local_2048);
      lVar11 = (longlong)iVar4;
      if (lVar11 == 0) {
        lVar11 = 0x20000;
      }
      UpdateStatsPerFrame(this,L"Before spam");
      lVar9 = 0x80;
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"----> Spamming %d allocations, from %d..%d bytes\n");
      uVar7 = 0;
      local_2058.Data = (FScriptContainerElement *)0x0;
      local_2050 = 0;
      iStack_204c = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x80,&local_2058,0,&iStack_204c);
      do {
        iVar4 = rand();
        lVar5 = (longlong)iVar4 % lVar11;
        if (lVar5 < 0) {
          lVar5 = lVar5 + 1;
        }
        local_2040 = FMemory::Malloc((lVar5 >> 1) + lVar11 / 2,0);
        if (((local_2058.Data <= (FScriptContainerElement *)&local_2040) &&
            ((FScriptContainerElement *)&local_2040 < local_2058.Data + (longlong)iStack_204c * 8))
           && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (local_2050 == iStack_204c) {
          local_2050 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_2058,&iStack_204c);
        }
        iVar4 = local_2050 + 1;
        *(void **)(local_2058.Data + (longlong)local_2050 * 8) = local_2040;
        lVar9 = lVar9 + -1;
        local_2050 = iVar4;
      } while (lVar9 != 0);
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"----> Allocated %d total bytes\n");
      UpdateStatsPerFrame(this,L"After spam");
      uVar10 = uVar7;
      if (0 < local_2050) {
        do {
          uVar6 = (uint)uVar7;
          uVar8 = 0;
          if ((int)uVar6 < local_2050) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          FMemory::Free(*(void **)(local_2058.Data + uVar10));
          uVar7 = (ulonglong)(uVar6 + 1);
          uVar10 = uVar10 + 8;
        } while ((int)(uVar6 + 1) < local_2050);
      }
      UpdateStatsPerFrame(this,L"After cleanup");
      if (local_2058.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2058.Data);
      }
    }
    else {
      bVar2 = FParse::Command(&local_2048,L"DUMPPRIVATESHARED",true);
      if (bVar2) {
        uVar7 = 0;
        do {
          bVar2 = UE::LLMPrivate::FLLMTracker::DumpForkedAllocationInfo
                            (this->Trackers[uVar7 & 0xff]);
          if (!bVar2) {
            FGenericPlatformMisc::LowLevelOutputDebugString
                      (L"Failed to dumping forked allocation info (check platform supports it?)\n");
            break;
          }
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < 2);
      }
      else {
        bVar2 = FParse::Command(&local_2048,L"REMEMBER",true);
        if (bVar2) {
          FCsvProfiler::RecordEventfInternal(0,L"LLM_REMEMBER");
          if (-1 < BookmarkChannel->Enabled) {
            if (__BookmarkPoint2610 == false) {
              FMiscTrace::OutputBookmarkSpec
                        (&__BookmarkPoint2610,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                         ,0xa32,L"LLM_REMEMBER");
              __BookmarkPoint2610 = true;
            }
            uVar8 = CallstackTrace_GetCurrentId();
            local_2038[0] = '\0';
            FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint2610,uVar8,1,local_2038);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
          uVar7 = 0;
          do {
            UE::LLMPrivate::FLLMTracker::CaptureTagSnapshot(this->Trackers[uVar7 & 0xff]);
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
          } while ((int)uVar8 < 2);
          this->bCapturedSizeSnapshot = true;
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
        }
        else {
          bVar2 = FParse::Command(&local_2048,L"FORGET",true);
          if (bVar2) {
            FCsvProfiler::RecordEventfInternal(0,L"LLM_FORGET");
            if (-1 < BookmarkChannel->Enabled) {
              if (__BookmarkPoint2622 == false) {
                FMiscTrace::OutputBookmarkSpec
                          (&__BookmarkPoint2622,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                           ,0xa3e,L"LLM_FORGET");
                __BookmarkPoint2622 = true;
              }
              uVar8 = CallstackTrace_GetCurrentId();
              local_1038[0] = '\0';
              FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint2622,uVar8,1,local_1038);
            }
            EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
            uVar7 = 0;
            do {
              UE::LLMPrivate::FLLMTracker::ClearTagSnapshot(this->Trackers[uVar7 & 0xff]);
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
            } while ((int)uVar8 < 2);
            this->bCapturedSizeSnapshot = false;
            LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
          }
        }
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

// FindOrAddTagData @ 141693c30

FTagData * __thiscall
FLowLevelMemTracker::FindOrAddTagData
          (FLowLevelMemTracker *this,FName param_1,ELLMTagSet param_2,FName param_3,
          ETagReferenceSource param_4)

{
  bool bVar1;
  FTagData **ppFVar2;
  FTagData *pFVar3;
  FTagDataNameKey local_28;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  local_28.Name = param_1;
  local_28.TagSet = param_2;
  ppFVar2 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                    *)this->TagDataNameMap,&local_28);
  do {
    if (ppFVar2 != (FTagData **)0x0) {
      pFVar3 = *ppFVar2;
LAB_141693cc3:
      FinishConstruct(this,pFVar3,param_4);
      ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      return pFVar3;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    if (this->bFullyInitialised != false) {
      if (this->bIsBootstrapping != false) {
        UE::LLMPrivate::HandleAssert
                  (true,
                   L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Invalid use of FName tag when initialising tags.\r\n"
                  );
        FWindowsPlatformMisc::RaiseException(1);
      }
      if ((param_3 == (FName)0x0) || (param_3 != param_1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_28.Name.ComparisonIndex.Value = 0;
      local_28.Name.Number = 0;
      pFVar3 = RegisterTagData(this,param_1,(FName)0x0,(FName)0x0,param_3,(FName)0x0,false,
                               CustomName,bVar1,param_4,param_2);
      AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      goto LAB_141693cc3;
    }
    FinishInitialise(this);
    AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    local_28.Name = param_1;
    local_28.TagSet = param_2;
    ppFVar2 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
              ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                      *)this->TagDataNameMap,&local_28);
  } while( true );
}

// FindOrAddTagData @ 141693db0

FTagData * __thiscall
FLowLevelMemTracker::FindOrAddTagData
          (FLowLevelMemTracker *this,FName param_1,ELLMTagSet param_2,bool param_3,
          ETagReferenceSource param_4)

{
  FTagData *pFVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  FVar2 = param_1;
  if (!param_3) {
    FVar2 = FVar3;
  }
  pFVar1 = FindOrAddTagData(this,param_1,param_2,FVar2,param_4);
  return pFVar1;
}

// FindOrAddTagData @ 141693dd0

FTagData * __thiscall
FLowLevelMemTracker::FindOrAddTagData
          (FLowLevelMemTracker *this,ELLMTag param_1,ETagReferenceSource param_2)

{
  FTagData *pFVar1;
  FName local_38;
  
  do {
    AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    pFVar1 = this->TagDataEnumMap[param_1];
    if (pFVar1 != (FTagData *)0x0) {
LAB_141693ed1:
      FinishConstruct(this,pFVar1,param_2);
      ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      return pFVar1;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    if (this->bFullyInitialised != false) {
      if (this->bIsBootstrapping != false) {
        UE::LLMPrivate::HandleAssert
                  (true,
                   L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Invalid use of custom ELLMTag when initialising tags.\r\n"
                  );
        FWindowsPlatformMisc::RaiseException(1);
      }
      LLMGetTagUniqueName(~UObject);
      pFVar1 = RegisterTagData(this,local_38,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,true,
                               param_1,false,param_2,None);
      AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      goto LAB_141693ed1;
    }
    FinishInitialise(this);
  } while( true );
}

// FindPtrDisplayName @ 1416940d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall FLowLevelMemTracker::FindPtrDisplayName(FLowLevelMemTracker *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  ForElementType<UE::LLMPrivate::FTagData_const_*> FVar4;
  undefined8 uVar5;
  void *in_R8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((EnabledState == Disabled) || (this->bFullyInitialised == false)) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar5 = 0;
    local_48.ArrayMax = 4;
    local_48.AllocatorInstance.SecondaryData = (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0
    ;
    local_48.ArrayNum = 0;
    UE::LLMPrivate::FLLMTracker::FindTagsForPtr(this->Trackers[1],in_R8,&local_48);
    if (local_48.ArrayNum != 0) {
      if (local_48.ArrayNum < 1) {
        local_58 = 0;
        local_50 = (longlong)local_48.ArrayNum;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar3 = (FName)(*pcVar1)();
          return FVar3;
        }
      }
      FVar4 = (ForElementType<UE::LLMPrivate::FTagData_const_*>)&local_48;
      if (local_48.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
        FVar4 = local_48.AllocatorInstance.SecondaryData;
      }
      uVar5 = *(undefined8 *)(*(longlong *)FVar4 + 8);
    }
    *(undefined8 *)param_1 = uVar5;
    if (local_48.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::LLMPrivate::FTagData_const_*>)0x0) {
      FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
    }
  }
  return (FName)param_1;
}

// FindTagByName @ 1416941c0

bool __thiscall
FLowLevelMemTracker::FindTagByName
          (FLowLevelMemTracker *this,wchar_t *param_1,ulong64 *param_2,ELLMTagSet param_3)

{
  ELLMTag EVar1;
  int iVar2;
  FTagData **ppFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FTagData *this_00;
  ulonglong uVar6;
  uint uVar7;
  FName local_58;
  FTagDataNameKey local_50;
  FString local_40;
  ulonglong uVar8;
  
  if (EnabledState != Disabled) {
    if (this->bFullyInitialised == false) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if (param_1 != (wchar_t *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      ::FName::FName(&local_58,param_1);
      local_50.Name = local_58;
      local_50.TagSet = param_3;
      ppFVar3 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)this->TagDataNameMap,&local_50);
      if (ppFVar3 != (FTagData **)0x0) {
        this_00 = *ppFVar3;
LAB_141694275:
        EVar1 = UE::LLMPrivate::FTagData::GetContainingEnum(this_00);
        *param_2 = (ulonglong)EVar1;
        ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
        return true;
      }
      uVar6 = 0;
      uVar8 = uVar6;
      do {
        this_00 = *(FTagData **)(uVar6 + (longlong)this->TagDataEnumMap);
        if (this_00 != (FTagData *)0x0) {
          local_50.Name = this_00->DisplayName;
          pFVar4 = ::FName::ToString(&local_50.Name,&local_40);
          if ((pFVar4->Data).ArrayNum == 0) {
            pwVar5 = L"";
          }
          else {
            pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
          }
          iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,param_1);
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
          if (iVar2 != 0) goto LAB_141694275;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar6 = uVar6 + 8;
      } while (uVar7 < 0x100);
      ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    }
  }
  return false;
}

// FindTagData @ 141694340

FTagData * __thiscall
FLowLevelMemTracker::FindTagData
          (FLowLevelMemTracker *this,FName param_1,ELLMTagSet param_2,ETagReferenceSource param_3)

{
  FTagData **ppFVar1;
  FTagData *pFVar2;
  FTagDataNameKey local_18;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  local_18.Name = param_1;
  local_18.TagSet = param_2;
  ppFVar1 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                    *)this->TagDataNameMap,&local_18);
  if (ppFVar1 == (FTagData **)0x0) {
    pFVar2 = (FTagData *)0x0;
  }
  else {
    pFVar2 = *ppFVar1;
    FinishConstruct(this,pFVar2,param_3);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  return pFVar2;
}

// FindTagData @ 1416943e0

FTagData * __thiscall
FLowLevelMemTracker::FindTagData
          (FLowLevelMemTracker *this,ELLMTag param_1,ETagReferenceSource param_2)

{
  FTagData *pFVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  pFVar1 = this->TagDataEnumMap[param_1];
  if (pFVar1 != (FTagData *)0x0) {
    FinishConstruct(this,pFVar1,param_2);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  return pFVar1;
}

// FindTagDisplayName @ 141694450

FName __thiscall FLowLevelMemTracker::FindTagDisplayName(FLowLevelMemTracker *this,ulong64 param_1)

{
  FName FVar1;
  uint in_R8D;
  
  if (EnabledState != Disabled) {
    if (this->bInitialisedTracking == false) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if (((-1 < (int)in_R8D) && (in_R8D < 0x100)) &&
       (this->TagDataEnumMap[(int)in_R8D] != (FTagData *)0x0)) {
      FVar1 = this->TagDataEnumMap[(int)in_R8D]->DisplayName;
      goto LAB_1416944cf;
    }
  }
  FVar1.ComparisonIndex.Value = 0;
  FVar1.Number = 0;
LAB_1416944cf:
  *(FName *)param_1 = FVar1;
  return (FName)param_1;
}

// FindTagName @ 1416944f0

wchar_t * __thiscall FLowLevelMemTracker::FindTagName(FLowLevelMemTracker *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  FString *pFVar3;
  ulong64 *puVar4;
  uint uVar5;
  longlong lVar6;
  ulong64 local_res10;
  TKeyInitializer<unsigned___int64_const_&> local_res18;
  FName local_res20;
  FString local_28;
  
  if (EnabledState == Disabled) {
    return (wchar_t *)0x0;
  }
  local_res10 = param_1;
  if (this->bInitialisedTracking == false) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FLowLevelMemTracker::FindTagName'::__l2::_dynamic_atexit_destructor_for__FoundTags__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar5 = (uint)local_res10;
  if (FoundTags._8_4_ != FoundTags._52_4_) {
    lVar6 = 0x154b77038;
    if (FoundTags._64_8_ != 0) {
      lVar6 = FoundTags._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)
                             (FoundTags._72_4_ - 1 & (int)(local_res10 >> 0x20) * 0x17 + uVar5) * 4)
    ;
    while (iVar1 != -1) {
      puVar4 = (ulong64 *)((longlong)iVar1 * 0x20 + FoundTags._0_8_);
      if (*puVar4 == local_res10) {
        puVar2 = puVar4 + 1;
        if (puVar4 == (ulong64 *)0x0) {
          puVar2 = (ulong64 *)0x0;
        }
        if (puVar2 != (ulong64 *)0x0) {
          if ((int)puVar2[1] != 0) {
            return (wchar_t *)*puVar2;
          }
          goto LAB_141694675;
        }
        break;
      }
      iVar1 = (int)puVar4[3];
    }
  }
  if (EnabledState != Disabled) {
    if (this->bInitialisedTracking == false) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if (((-1 < (int)uVar5) && (uVar5 < 0x100)) &&
       (this->TagDataEnumMap[(int)uVar5] != (FTagData *)0x0)) {
      local_res20 = this->TagDataEnumMap[(int)uVar5]->DisplayName;
      goto LAB_14169468c;
    }
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_14169468c:
  if (local_res20 == (FName)0x0) {
    return (wchar_t *)0x0;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_res10;
  TSet<TTuple<unsigned___int64,FString>,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FString>,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>,FDefaultSetAllocator>
              *)&FoundTags,&local_res18,(bool *)&local_28);
  lVar6 = (longlong)(int)local_res18.Key * 0x20 + FoundTags._0_8_;
  pFVar3 = ::FName::ToString(&local_res20,&local_28);
  ::FString::operator=((FString *)(lVar6 + 8),pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (*(int *)(lVar6 + 0x10) != 0) {
    return *(wchar_t **)(lVar6 + 8);
  }
LAB_141694675:
  return L"";
}

// FinishConstruct @ 141694ba0

void __thiscall
FLowLevelMemTracker::FinishConstruct
          (FLowLevelMemTracker *this,FTagData *param_1,ETagReferenceSource param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FTagData **ppFVar4;
  FTagData *pFVar5;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar6;
  ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
  FVar7;
  undefined1 local_58 [8];
  FTagDataNameKey local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_1 == (FTagData *)0x0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if (param_1->bIsFinishConstructed != false) {
    return;
  }
  if (this->bIsBootstrapping != false) {
    return;
  }
  if (param_1->bParentIsName == false) goto LAB_141694d40;
  FVar3 = (param_1->field2_0x10).ParentName;
  if (FVar3 == (FName)0x0) {
    pFVar5 = (FTagData *)0x0;
LAB_141694d38:
    param_1->bParentIsName = false;
  }
  else {
    local_50.TagSet = param_1->TagSet;
    local_50.Name = FVar3;
    ppFVar4 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
              ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                      *)this->TagDataNameMap,&local_50);
    if (ppFVar4 == (FTagData **)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      local_30 = 0;
      local_50.Name.ComparisonIndex.Value = 0;
      local_50.Name.Number = 0;
      local_40 = 0;
      local_38 = 0;
      RegisterTagData(this,FVar3,(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,false,CustomName,false,
                      ImplicitParent,param_1->TagSet);
      AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
      if (param_1->bIsFinishConstructed != false) {
        return;
      }
      local_50.TagSet = param_1->TagSet;
      local_50.Name = FVar3;
      ppFVar4 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)this->TagDataNameMap,&local_50);
      if (ppFVar4 == (FTagData **)0x0) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
    }
    pFVar5 = *ppFVar4;
    if (param_1->bParentIsName != false) goto LAB_141694d38;
  }
  (param_1->field2_0x10).Parent = pFVar5;
LAB_141694d40:
  pFVar5 = UE::LLMPrivate::FTagData::GetParent(param_1);
  if (pFVar5 != (FTagData *)0x0) {
    FinishConstruct(this,pFVar5,param_2);
  }
  param_1->bIsFinishConstructed = true;
  if ((param_1->bHasEnumTag == false) || (CustomName < param_1->EnumTag)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    FVar6 = (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
             )UE::LLMPrivate::GetTagCreationCallbacks();
    iVar2 = *(int *)((longlong)FVar6 + 0x18);
    piVar1 = (int *)((longlong)FVar6 + 0x18);
    if (*(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
          *)((longlong)FVar6 + 0x10) !=
        (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
         )0x0) {
      FVar6 = *(ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
                *)((longlong)FVar6 + 0x10);
    }
    FVar7 = (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
             )((longlong)iVar2 * 0x10 + (longlong)FVar6);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_58);
      }
      if (FVar6 == FVar7) break;
      (**(code **)FVar6)(param_1,*(undefined8 *)((longlong)FVar6 + 8));
      FVar6 = (ForElementType<TTuple<void_(__cdecl*)(UE::LLMPrivate::FTagData_const_*,unsigned___int64),unsigned___int64>_>
               )((longlong)FVar6 + 0x10);
    }
    AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  }
  return;
}

// FinishInitialise @ 141694e10

void __thiscall FLowLevelMemTracker::FinishInitialise(FLowLevelMemTracker *this)

{
  FLLMTagDeclaration *pFVar1;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar6;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar7;
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar8;
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar9;
  ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> FVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  code *local_38 [2];
  
  if (this->bFullyInitialised == false) {
    BootstrapInitialise(this);
    this->bFullyInitialised = true;
    LLMGetTagUniqueName((ELLMTag)local_res10);
    InitialiseTagDatas_SetLLMTagNames(this);
    InitialiseTagDatas_FinishRegister(this);
    for (pFVar1 = List; pFVar1 != (FLLMTagDeclaration *)0x0; pFVar1 = pFVar1->Next) {
      RegisterTagDeclaration(this,pFVar1);
    }
    local_38[0] = GlobalRegisterTagDeclaration;
    FVar6 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
            UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
    if (*(int *)((longlong)FVar6 + 0x10) < *(int *)((longlong)FVar6 + 0x14)) {
      FVar2 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8);
      FVar7 = FVar6;
      if (FVar2 != (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
        FVar7 = FVar2;
      }
      if ((ulonglong)FVar7 <= local_38) {
        FVar7 = FVar6;
        if (FVar2 != (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
          FVar7 = FVar2;
        }
        if ((local_38 < (code **)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar6 + 0x14) * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = *(int *)((longlong)FVar6 + 0x10);
      if (iVar5 == *(int *)((longlong)FVar6 + 0x14)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>_>
                          (0x808,(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)FVar6,
                           (int *)((longlong)FVar6 + 0x14));
      }
      *(int *)((longlong)FVar6 + 0x10) = iVar5 + 1;
      if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8) !=
          (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
        FVar6 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8);
      }
      *(code **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_38[0];
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                         ,0xfc7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->bTagAdded = true;
    UpdateTags(this);
    FVar8 = (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)
            UE::LLMPrivate::GetInitialisedCallbacks();
    iVar5 = *(int *)((longlong)FVar8 + 0x18);
    FVar9 = FVar8;
    if (*(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> *)
         ((longlong)FVar8 + 0x10) !=
        (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)0x0) {
      FVar9 = *(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_> *)
               ((longlong)FVar8 + 0x10);
    }
    FVar10 = (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)
             ((longlong)iVar5 * 0x10 + (longlong)FVar9);
    while( true ) {
      if (*(int *)((longlong)FVar8 + 0x18) != iVar5) {
        `TCheckedPointerIterator<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar9 == FVar10) break;
      (**(code **)FVar9)();
      FVar9 = (ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>)
              ((longlong)FVar9 + 0x10);
    }
    *(undefined4 *)((longlong)FVar8 + 0x18) = 0;
    if (*(int *)((longlong)FVar8 + 0x1c) != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>_>
                (0x10,8,0,(ForElementType<TTuple<void_(__cdecl*)(unsigned___int64),unsigned___int64>_>
                           *)FVar8,0,(int *)((longlong)FVar8 + 0x1c));
    }
  }
  return;
}

// Get @ 141698260

FLowLevelMemTracker * __cdecl FLowLevelMemTracker::Get(void)

{
  if (TrackerInstance == (FLowLevelMemTracker *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FLowLevelMemTracker(&Tracker);
        atexit(`FLowLevelMemTracker::Construct'::__l2::_dynamic_atexit_destructor_for__Tracker__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    TrackerInstance = &Tracker;
  }
  return TrackerInstance;
}

// GetActiveTagData @ 141698530

FTagData * __thiscall
FLowLevelMemTracker::GetActiveTagData
          (FLowLevelMemTracker *this,ELLMTracker param_1,ELLMTagSet param_2)

{
  FLLMThreadState *this_00;
  FTagData *pFVar1;
  
  if (EnabledState == Disabled) {
    return (FTagData *)0x0;
  }
  BootstrapInitialise(this);
  this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this->Trackers[param_1]);
  pFVar1 = UE::LLMPrivate::FLLMThreadState::GetTopTag(this_00,param_2);
  return pFVar1;
}

// GetTagAmountForTracker @ 1416a0530

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

long64 __thiscall
FLowLevelMemTracker::GetTagAmountForTracker
          (FLowLevelMemTracker *this,ELLMTracker param_1,FTagData *param_2,ESizeParams param_3)

{
  long64 lVar1;
  
  if ((EnabledState != Disabled) && (BootstrapInitialise(this), param_2 != (FTagData *)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    lVar1 = UE::LLMPrivate::FLLMTracker::GetTagAmount(this->Trackers[param_1],param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    return lVar1;
  }
  return 0;
}

// GetTagAmountForTracker @ 1416a05c0

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

long64 __thiscall
FLowLevelMemTracker::GetTagAmountForTracker
          (FLowLevelMemTracker *this,ELLMTracker param_1,FName param_2,ELLMTagSet param_3,
          ESizeParams param_4)

{
  FTagData *pFVar1;
  long64 lVar2;
  
  if (EnabledState == Disabled) {
    lVar2 = 0;
  }
  else {
    BootstrapInitialise(this);
    pFVar1 = FindTagData(this,param_2,param_3,FunctionAPI);
    if ((EnabledState == Disabled) || (BootstrapInitialise(this), pFVar1 == (FTagData *)0x0)) {
      lVar2 = 0;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
      lVar2 = UE::LLMPrivate::FLLMTracker::GetTagAmount(this->Trackers[param_1],pFVar1,param_4);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    }
  }
  return lVar2;
}

// GetTagAmountForTracker @ 1416a0680

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

long64 __thiscall
FLowLevelMemTracker::GetTagAmountForTracker
          (FLowLevelMemTracker *this,ELLMTracker param_1,ELLMTag param_2,ESizeParams param_3)

{
  FTagData *pFVar1;
  FTagData *pFVar2;
  
  if (EnabledState == Disabled) {
    return 0;
  }
  BootstrapInitialise(this);
  AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  pFVar2 = this->TagDataEnumMap[param_2];
  pFVar1 = (FTagData *)0x0;
  if (pFVar2 == (FTagData *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    pFVar2 = pFVar1;
  }
  else {
    FinishConstruct(this,pFVar2,FunctionAPI);
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  }
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    if (pFVar2 != (FTagData *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
      pFVar1 = (FTagData *)
               UE::LLMPrivate::FLLMTracker::GetTagAmount(this->Trackers[param_1],pFVar2,param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    }
  }
  return (long64)pFVar1;
}

// GetTagClosestEnumTag @ 1416a0770

ELLMTag __thiscall
FLowLevelMemTracker::GetTagClosestEnumTag(FLowLevelMemTracker *this,FTagData *param_1)

{
  return param_1->EnumTag;
}

// GetTagDisplayName @ 1416a0940

FName __thiscall FLowLevelMemTracker::GetTagDisplayName(FLowLevelMemTracker *this,FTagData *param_1)

{
  longlong in_R8;
  
  param_1->Name = *(FName *)(in_R8 + 8);
  return (FName)param_1;
}

// GetTagDisplayPathName @ 1416a0960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FLowLevelMemTracker::GetTagDisplayPathName
          (FLowLevelMemTracker *this,FString *__return_storage_ptr__,FTagData *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_888 [32];
  FString local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.Base = local_838;
  local_858.End = local_22;
  local_858.CurPos = local_838;
  UE::LLMPrivate::FTagData::AppendDisplayPath(param_1,&local_858,-1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_868,local_858.Base,
                      (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

// GetTagDisplayPathName @ 1416a0a60

void __thiscall
FLowLevelMemTracker::GetTagDisplayPathName
          (FLowLevelMemTracker *this,FTagData *param_1,TStringBuilderBase<wchar_t> *param_2,
          int param_3)

{
  param_2->CurPos = param_2->Base;
  UE::LLMPrivate::FTagData::AppendDisplayPath(param_1,param_2,param_3);
  return;
}

// GetTagIsEnumTag @ 1416a0a90

bool __thiscall FLowLevelMemTracker::GetTagIsEnumTag(FLowLevelMemTracker *this,FTagData *param_1)

{
  return param_1->bHasEnumTag;
}

// GetTagParent @ 1416a0b20

FTagData * __thiscall FLowLevelMemTracker::GetTagParent(FLowLevelMemTracker *this,FTagData *param_1)

{
  FTagData *pFVar1;
  
  pFVar1 = UE::LLMPrivate::FTagData::GetParent(param_1);
  return pFVar1;
}

// GetTagUniqueName @ 1416a0b40

FName __thiscall FLowLevelMemTracker::GetTagUniqueName(FLowLevelMemTracker *this,FTagData *param_1)

{
  FName *in_R8;
  
  param_1->Name = *in_R8;
  return (FName)param_1;
}

// GetTotalTrackedMemory @ 1416a17c0

ulong64 __thiscall
FLowLevelMemTracker::GetTotalTrackedMemory(FLowLevelMemTracker *this,ELLMTracker param_1)

{
  if (EnabledState == Disabled) {
    return 0;
  }
  BootstrapInitialise(this);
  return this->Trackers[param_1]->TrackedTotal;
}

// GetTrackedTags @ 1416a1810

TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FLowLevelMemTracker::GetTrackedTags
          (FLowLevelMemTracker *this,
          TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ELLMTagSet param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType local_18;
  uint local_10;
  uint local_c;
  
  if (EnabledState == Disabled) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    BootstrapInitialise(this);
    AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    pFVar6 = (FScriptContainerElement *)0x0;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    local_c = 0;
    pFVar7 = *(FScriptContainerElement **)this->TagDatas;
    pFVar1 = pFVar7 + (longlong)*(int *)&this->TagDatas->field_0x10 * 8;
    FVar8.Data = pFVar6;
    for (; uVar4 = (uint)pFVar6, pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      if ((*(longlong *)pFVar7 != 0) && (*(ELLMTagSet *)(*(longlong *)pFVar7 + 0x34) == param_1)) {
        if ((FVar8.Data <= pFVar7) &&
           ((pFVar7 < FVar8.Data + (longlong)(int)local_c * 8 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), FVar8.Data = local_18.Data, uVar4 = local_10, bVar3)))) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar5;
        }
        if (uVar4 == local_c) {
          uVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_18,(int *)&local_c);
          FVar8.Data = local_18.Data;
        }
        local_10 = uVar4 + 1;
        *(longlong *)(FVar8.Data + (longlong)(int)uVar4 * 8) = *(longlong *)pFVar7;
        pFVar6 = (FScriptContainerElement *)(ulonglong)local_10;
        FVar8.Data = local_18.Data;
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = FVar8.Data;
    __return_storage_ptr__->ArrayNum = uVar4;
    __return_storage_ptr__->ArrayMax = local_c;
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
  }
  return __return_storage_ptr__;
}

// GetTrackedTags @ 1416a1990

TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FLowLevelMemTracker::GetTrackedTags
          (FLowLevelMemTracker *this,
          TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ELLMTracker param_1,ELLMTagSet param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  if (EnabledState == Disabled) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    BootstrapInitialise(this);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                *)&this->Trackers[param_1]->TagSizes,&local_28);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    for (FVar7.Data = local_28.AllocatorInstance.Data; FVar7.Data != pFVar1;
        FVar7.Data = FVar7.Data + 8) {
      if ((*(longlong *)FVar7.Data != 0) &&
         (*(ELLMTagSet *)(*(longlong *)FVar7.Data + 0x34) == param_2)) {
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
          pTVar6 = (TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar6;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             *(longlong *)FVar7.Data;
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  }
  return __return_storage_ptr__;
}

// GetTrackedTagsNamesWithAmount @ 1416a1b30

void __thiscall
FLowLevelMemTracker::GetTrackedTagsNamesWithAmount
          (FLowLevelMemTracker *this,
          TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
          *param_1,ELLMTracker param_2,ELLMTagSet param_3)

{
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    UE::LLMPrivate::FLLMTracker::GetTagsNamesWithAmount(this->Trackers[param_2],param_1,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  }
  return;
}

// GetTrackedTagsNamesWithAmountFiltered @ 1416a1bc0

void __thiscall
FLowLevelMemTracker::GetTrackedTagsNamesWithAmountFiltered
          (FLowLevelMemTracker *this,
          TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
          *param_1,ELLMTracker param_2,ELLMTagSet param_3,
          TArray<FLLMTagSetAllocationFilter,TSizedDefaultAllocator<32>_> *param_4)

{
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    UE::LLMPrivate::FLLMTracker::GetTagsNamesWithAmountFiltered
              (this->Trackers[param_2],param_1,param_3,param_4);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  }
  return;
}

// GetTracker @ 1416a1c50

FLLMTracker * __thiscall
FLowLevelMemTracker::GetTracker(FLowLevelMemTracker *this,ELLMTracker param_1)

{
  return this->Trackers[param_1];
}

// GetTracker @ 1416a1c60

FLLMTracker * __thiscall
FLowLevelMemTracker::GetTracker(FLowLevelMemTracker *this,ELLMTracker param_1)

{
  return this->Trackers[param_1];
}

// InitialiseProgramSize @ 1416a5820

void __thiscall FLowLevelMemTracker::InitialiseProgramSize(FLowLevelMemTracker *this)

{
  FLLMTracker *pFVar1;
  FTagData *pFVar2;
  FLLMThreadState *pFVar3;
  ulong64 uVar4;
  FPlatformMemoryStats local_98;
  
  if (this->ProgramSize == 0) {
    FWindowsPlatformMemory::GetStats(&local_98);
    uVar4 = local_98._padding_ - local_98._padding_;
    this->ProgramSize = uVar4;
    pFVar1 = this->Trackers[0];
    pFVar2 = FindOrAddTagData(pFVar1->LLMRef,ProgramSizePlatform,FunctionAPI);
    pFVar3 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    LOCK();
    pFVar1->TrackedTotal = pFVar1->TrackedTotal + uVar4;
    UNLOCK();
    UE::LLMPrivate::FLLMThreadState::TrackMemory(pFVar3,uVar4,pFVar1->Tracker,System,pFVar2);
    pFVar1 = this->Trackers[1];
    uVar4 = this->ProgramSize;
    pFVar2 = FindOrAddTagData(pFVar1->LLMRef,ProgramSize,FunctionAPI);
    pFVar3 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    LOCK();
    pFVar1->TrackedTotal = pFVar1->TrackedTotal + uVar4;
    UNLOCK();
    UE::LLMPrivate::FLLMThreadState::TrackMemory(pFVar3,uVar4,pFVar1->Tracker,System,pFVar2);
  }
  return;
}

// InitialiseTagDatas @ 1416a5920

void __thiscall FLowLevelMemTracker::InitialiseTagDatas(FLowLevelMemTracker *this)

{
  FLLMTagDeclaration *pFVar1;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar6;
  ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> FVar7;
  code *local_18 [2];
  
  InitialiseTagDatas_SetLLMTagNames(this);
  InitialiseTagDatas_FinishRegister(this);
  for (pFVar1 = List; pFVar1 != (FLLMTagDeclaration *)0x0; pFVar1 = pFVar1->Next) {
    RegisterTagDeclaration(this,pFVar1);
  }
  local_18[0] = GlobalRegisterTagDeclaration;
  FVar6 = (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)
          UE::LLMPrivate::LLMTagDeclarationInternal::GetCreationCallbacks();
  if (*(int *)((longlong)FVar6 + 0x10) < *(int *)((longlong)FVar6 + 0x14)) {
    FVar2 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8);
    FVar7 = FVar6;
    if (FVar2 != (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
      FVar7 = FVar2;
    }
    if ((ulonglong)FVar7 <= local_18) {
      FVar7 = FVar6;
      if (FVar2 != (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
        FVar7 = FVar2;
      }
      if ((local_18 < (code **)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar6 + 0x14) * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)((longlong)FVar6 + 0x10);
    if (iVar5 == *(int *)((longlong)FVar6 + 0x14)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>_>
                        (0x808,(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)FVar6,
                         (int *)((longlong)FVar6 + 0x14));
    }
    *(int *)((longlong)FVar6 + 0x10) = iVar5 + 1;
    if (*(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8) !=
        (ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)>)0x0) {
      FVar6 = *(ForElementType<void_(__cdecl*)(FLLMTagDeclaration_&)> *)((longlong)FVar6 + 8);
    }
    *(code **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_18[0];
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                       ,0xfc7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->bTagAdded = true;
  UpdateTags(this);
  return;
}

// InitialiseTagDatas_FinishRegister @ 1416a5a90

void __thiscall FLowLevelMemTracker::InitialiseTagDatas_FinishRegister(FLowLevelMemTracker *this)

{
  FTagDataNameMap *pFVar1;
  FTagData *pFVar2;
  FName FVar3;
  uint uVar4;
  FTagData **ppFVar5;
  FTagData *local_res8;
  FTagDataNameKey local_38;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = *this->TagDataEnumMap;
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[1];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[2];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[3];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[4];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[5];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[6];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[7];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[8];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[9];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[10];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0xb];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0xc];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0xd];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0xe];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0xf];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x10];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x11];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x12];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x13];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x14];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x15];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x16];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x17];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x18];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x19];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x1a];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x1b];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x1c];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x1d];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x1e];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x1f];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x20];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x21];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x22];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x23];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x24];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x25];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x26];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x27];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x28];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x29];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x2a];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x2b];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x2c];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x2d];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x2e];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x2f];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x30];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x31];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x32];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x33];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x34];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x35];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x36];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x37];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x38];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x39];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x3a];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x3b];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x3c];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x3d];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x3e];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x3f];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x40];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x41];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x42];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x43];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x44];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x45];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x46];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x47];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x48];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x49];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x4a];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x4b];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x4c];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x4d];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x4e];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x4f];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x50];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x51];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x52];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x53];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x54];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x55];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x56];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x57];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x58];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x59];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x5a];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x5b];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x5c];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x5d];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x5e];
  local_38.Name = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  uVar4 = UE::LLMPrivate::GetTypeHash(&local_38);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,uVar4,&local_38,&local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x5f];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x60];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x61];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x62];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[99];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[100];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x65];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x66];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x67];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x68];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x69];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x6a];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x6b];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  pFVar1 = this->TagDataNameMap;
  local_res8 = (FTagData *)0x0;
  pFVar2 = this->TagDataEnumMap[0x6c];
  FVar3 = pFVar2->Name;
  local_38.TagSet = pFVar2->TagSet;
  local_38.Name = FVar3;
  uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  ppFVar5 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
            ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                      ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                        *)pFVar1,(uint)local_38.TagSet * 0x65 + uVar4 + FVar3.Number,&local_38,
                       &local_res8);
  if (*ppFVar5 != (FTagData *)0x0) {
    ReportDuplicateTagName(this,*ppFVar5,EnumTag);
  }
  *ppFVar5 = pFVar2;
  this->bIsBootstrapping = false;
                    /* WARNING: Could not recover jumptable at 0x0001416a85b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  return;
}

// InitialiseTagDatas_SetLLMTagNames @ 1416a85c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLowLevelMemTracker::InitialiseTagDatas_SetLLMTagNames(FLowLevelMemTracker *this)

{
  FTagData *pFVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_TotalLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_TrackedTotalSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_UntrackedLLM> FVar6;
  TStatId TVar7;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshLLM> FVar8;
  FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM> FVar9;
  undefined1 auStackY_1bd8 [32];
  TStringView<wchar_t> local_1b78;
  undefined8 local_1b68;
  undefined8 local_1b60;
  undefined8 local_1b58;
  undefined8 local_1b50;
  undefined8 local_1b48;
  undefined8 local_1b40;
  undefined8 local_1b38;
  undefined8 local_1b30;
  undefined8 local_1b28;
  undefined8 local_1b20;
  undefined8 local_1b18;
  undefined8 local_1b10;
  undefined8 local_1b08;
  undefined8 local_1b00;
  undefined8 local_1af8;
  undefined8 local_1af0;
  undefined8 local_1ae8;
  undefined8 local_1ae0;
  undefined8 local_1ad8;
  undefined8 local_1ad0;
  undefined8 local_1ac8;
  FName local_1ac0;
  FName local_1ab8;
  FName local_1ab0;
  FName local_1aa8;
  FName local_1aa0;
  FName local_1a98;
  FName local_1a90;
  FName local_1a88;
  FName local_1a80;
  FName local_1a78;
  FName local_1a70;
  FName local_1a68;
  FName local_1a60;
  FName local_1a58;
  FName local_1a50;
  FName local_1a48;
  FName local_1a40;
  FName local_1a38;
  FName local_1a30;
  FName local_1a28;
  FName local_1a20;
  FName local_1a18;
  FName local_1a10;
  FName local_1a08;
  FName local_1a00;
  FName local_19f8;
  FName local_19f0;
  FName local_19e8;
  FName local_19e0;
  FName local_19d8;
  FName local_19d0;
  FName local_19c8;
  FName local_19c0;
  FName local_19b8;
  FName local_19b0;
  FName local_19a8;
  FName local_19a0;
  FName local_1998;
  FName local_1990;
  FName local_1988;
  FName local_1980;
  FName local_1978;
  FName local_1970;
  FName local_1968;
  FName local_1960;
  FName local_1958;
  FName local_1950;
  FName local_1948;
  FName local_1940;
  FName local_1938;
  FName local_1930;
  FName local_1928;
  FName local_1920;
  FName local_1918;
  FName local_1910;
  FName local_1908;
  FName local_1900;
  FName local_18f8;
  FName local_18f0;
  FName local_18e8;
  FName local_18e0;
  FName local_18d8;
  FName local_18d0;
  FName local_18c8;
  FName local_18c0;
  FName local_18b8;
  FName local_18b0;
  FName local_18a8;
  FName local_18a0;
  FName local_1898;
  FName local_1890;
  FName local_1888;
  FName local_1880;
  FName local_1878;
  FName local_1870;
  FName local_1868;
  FName local_1860;
  FName local_1858;
  FName local_1850;
  FName local_1848;
  FName local_1840;
  FName local_1838;
  FName local_1830;
  FName local_1828;
  FName local_1820;
  FName local_1818;
  FName local_1810;
  FName local_1808;
  FName local_1800;
  FName local_17f8;
  FName local_17f0;
  FName local_17e8;
  FName local_17e0;
  FName local_17d8;
  FName local_17d0;
  FName local_17c8;
  FName local_17c0;
  FName local_17b8;
  FName local_17b0;
  FName local_17a8;
  FName local_17a0;
  FName local_1798;
  FName local_1790;
  FName local_1788;
  FName local_1780;
  FName local_1778;
  FName local_1770;
  FName local_1768;
  FName local_1760;
  wchar_t *local_1758;
  int iStack_1750;
  undefined4 uStack_174c;
  wchar_t *local_1748;
  int iStack_1740;
  undefined4 uStack_173c;
  wchar_t *local_1738;
  int iStack_1730;
  undefined4 uStack_172c;
  wchar_t *local_1728;
  int iStack_1720;
  undefined4 uStack_171c;
  wchar_t *local_1718;
  int iStack_1710;
  undefined4 uStack_170c;
  wchar_t *local_1708;
  int iStack_1700;
  undefined4 uStack_16fc;
  wchar_t *local_16f8;
  int iStack_16f0;
  undefined4 uStack_16ec;
  wchar_t *local_16e8;
  int iStack_16e0;
  undefined4 uStack_16dc;
  wchar_t *local_16d8;
  int iStack_16d0;
  undefined4 uStack_16cc;
  wchar_t *local_16c8;
  int iStack_16c0;
  undefined4 uStack_16bc;
  wchar_t *local_16b8;
  int iStack_16b0;
  undefined4 uStack_16ac;
  wchar_t *local_16a8;
  int iStack_16a0;
  undefined4 uStack_169c;
  wchar_t *local_1698;
  int iStack_1690;
  undefined4 uStack_168c;
  wchar_t *local_1688;
  int iStack_1680;
  undefined4 uStack_167c;
  wchar_t *local_1678;
  int iStack_1670;
  undefined4 uStack_166c;
  wchar_t *local_1668;
  int iStack_1660;
  undefined4 uStack_165c;
  wchar_t *local_1658;
  int iStack_1650;
  undefined4 uStack_164c;
  wchar_t *local_1648;
  int iStack_1640;
  undefined4 uStack_163c;
  wchar_t *local_1638;
  int iStack_1630;
  undefined4 uStack_162c;
  wchar_t *local_1628;
  int iStack_1620;
  undefined4 uStack_161c;
  wchar_t *local_1618;
  int iStack_1610;
  undefined4 uStack_160c;
  wchar_t *local_1608;
  int iStack_1600;
  undefined4 uStack_15fc;
  wchar_t *local_15f8;
  int iStack_15f0;
  undefined4 uStack_15ec;
  wchar_t *local_15e8;
  int iStack_15e0;
  undefined4 uStack_15dc;
  wchar_t *local_15d8;
  int iStack_15d0;
  undefined4 uStack_15cc;
  wchar_t *local_15c8;
  int iStack_15c0;
  undefined4 uStack_15bc;
  wchar_t *local_15b8;
  int iStack_15b0;
  undefined4 uStack_15ac;
  wchar_t *local_15a8;
  int iStack_15a0;
  undefined4 uStack_159c;
  wchar_t *local_1598;
  int iStack_1590;
  undefined4 uStack_158c;
  wchar_t *local_1588;
  int iStack_1580;
  undefined4 uStack_157c;
  wchar_t *local_1578;
  int iStack_1570;
  undefined4 uStack_156c;
  wchar_t *local_1568;
  int iStack_1560;
  undefined4 uStack_155c;
  wchar_t *local_1558;
  int iStack_1550;
  undefined4 uStack_154c;
  wchar_t *local_1548;
  int iStack_1540;
  undefined4 uStack_153c;
  wchar_t *local_1538;
  int iStack_1530;
  undefined4 uStack_152c;
  wchar_t *local_1528;
  int iStack_1520;
  undefined4 uStack_151c;
  wchar_t *local_1518;
  int iStack_1510;
  undefined4 uStack_150c;
  wchar_t *local_1508;
  int iStack_1500;
  undefined4 uStack_14fc;
  wchar_t *local_14f8;
  int iStack_14f0;
  undefined4 uStack_14ec;
  wchar_t *local_14e8;
  int iStack_14e0;
  undefined4 uStack_14dc;
  wchar_t *local_14d8;
  int iStack_14d0;
  undefined4 uStack_14cc;
  wchar_t *local_14c8;
  int iStack_14c0;
  undefined4 uStack_14bc;
  wchar_t *local_14b8;
  int iStack_14b0;
  undefined4 uStack_14ac;
  wchar_t *local_14a8;
  int iStack_14a0;
  undefined4 uStack_149c;
  wchar_t *local_1498;
  int iStack_1490;
  undefined4 uStack_148c;
  wchar_t *local_1488;
  int iStack_1480;
  undefined4 uStack_147c;
  wchar_t *local_1478;
  int iStack_1470;
  undefined4 uStack_146c;
  wchar_t *local_1468;
  int iStack_1460;
  undefined4 uStack_145c;
  wchar_t *local_1458;
  int iStack_1450;
  undefined4 uStack_144c;
  wchar_t *local_1448;
  int iStack_1440;
  undefined4 uStack_143c;
  wchar_t *local_1438;
  int iStack_1430;
  undefined4 uStack_142c;
  wchar_t *local_1428;
  int iStack_1420;
  undefined4 uStack_141c;
  wchar_t *local_1418;
  int iStack_1410;
  undefined4 uStack_140c;
  wchar_t *local_1408;
  int iStack_1400;
  undefined4 uStack_13fc;
  wchar_t *local_13f8;
  int iStack_13f0;
  undefined4 uStack_13ec;
  wchar_t *local_13e8;
  int iStack_13e0;
  undefined4 uStack_13dc;
  wchar_t *local_13d8;
  int iStack_13d0;
  undefined4 uStack_13cc;
  wchar_t *local_13c8;
  int iStack_13c0;
  undefined4 uStack_13bc;
  wchar_t *local_13b8;
  int iStack_13b0;
  undefined4 uStack_13ac;
  wchar_t *local_13a8;
  int iStack_13a0;
  undefined4 uStack_139c;
  wchar_t *local_1398;
  int iStack_1390;
  undefined4 uStack_138c;
  wchar_t *local_1388;
  int iStack_1380;
  undefined4 uStack_137c;
  wchar_t *local_1378;
  int iStack_1370;
  undefined4 uStack_136c;
  wchar_t *local_1368;
  int iStack_1360;
  undefined4 uStack_135c;
  wchar_t *local_1358;
  int iStack_1350;
  undefined4 uStack_134c;
  wchar_t *local_1348;
  int iStack_1340;
  undefined4 uStack_133c;
  wchar_t *local_1338;
  int iStack_1330;
  undefined4 uStack_132c;
  wchar_t *local_1328;
  int iStack_1320;
  undefined4 uStack_131c;
  wchar_t *local_1318;
  int iStack_1310;
  undefined4 uStack_130c;
  wchar_t *local_1308;
  int iStack_1300;
  undefined4 uStack_12fc;
  wchar_t *local_12f8;
  int iStack_12f0;
  undefined4 uStack_12ec;
  wchar_t *local_12e8;
  int iStack_12e0;
  undefined4 uStack_12dc;
  wchar_t *local_12d8;
  int iStack_12d0;
  undefined4 uStack_12cc;
  wchar_t *local_12c8;
  int iStack_12c0;
  undefined4 uStack_12bc;
  wchar_t *local_12b8;
  int iStack_12b0;
  undefined4 uStack_12ac;
  wchar_t *local_12a8;
  int iStack_12a0;
  undefined4 uStack_129c;
  wchar_t *local_1298;
  int iStack_1290;
  undefined4 uStack_128c;
  wchar_t *local_1288;
  int iStack_1280;
  undefined4 uStack_127c;
  wchar_t *local_1278;
  int iStack_1270;
  undefined4 uStack_126c;
  wchar_t *local_1268;
  int iStack_1260;
  undefined4 uStack_125c;
  wchar_t *local_1258;
  int iStack_1250;
  undefined4 uStack_124c;
  wchar_t *local_1248;
  int iStack_1240;
  undefined4 uStack_123c;
  wchar_t *local_1238;
  int iStack_1230;
  undefined4 uStack_122c;
  wchar_t *local_1228;
  int iStack_1220;
  undefined4 uStack_121c;
  wchar_t *local_1218;
  int iStack_1210;
  undefined4 uStack_120c;
  wchar_t *local_1208;
  int iStack_1200;
  undefined4 uStack_11fc;
  wchar_t *local_11f8;
  int iStack_11f0;
  undefined4 uStack_11ec;
  wchar_t *local_11e8;
  int iStack_11e0;
  undefined4 uStack_11dc;
  wchar_t *local_11d8;
  int iStack_11d0;
  undefined4 uStack_11cc;
  wchar_t *local_11c8;
  int iStack_11c0;
  undefined4 uStack_11bc;
  wchar_t *local_11b8;
  int iStack_11b0;
  undefined4 uStack_11ac;
  wchar_t *local_11a8;
  int iStack_11a0;
  undefined4 uStack_119c;
  wchar_t *local_1198;
  int iStack_1190;
  undefined4 uStack_118c;
  wchar_t *local_1188;
  int iStack_1180;
  undefined4 uStack_117c;
  wchar_t *local_1178;
  int iStack_1170;
  undefined4 uStack_116c;
  wchar_t *local_1168;
  int iStack_1160;
  undefined4 uStack_115c;
  wchar_t *local_1158;
  int iStack_1150;
  undefined4 uStack_114c;
  wchar_t *local_1148;
  int iStack_1140;
  undefined4 uStack_113c;
  wchar_t *local_1138;
  int iStack_1130;
  undefined4 uStack_112c;
  wchar_t *local_1128;
  int iStack_1120;
  undefined4 uStack_111c;
  wchar_t *local_1118;
  int iStack_1110;
  undefined4 uStack_110c;
  wchar_t *local_1108;
  int iStack_1100;
  undefined4 uStack_10fc;
  wchar_t *local_10f8;
  int iStack_10f0;
  undefined4 uStack_10ec;
  wchar_t *local_10e8;
  int iStack_10e0;
  undefined4 uStack_10dc;
  wchar_t *local_10d8;
  int iStack_10d0;
  undefined4 uStack_10cc;
  wchar_t *local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  wchar_t *local_10b8;
  int iStack_10b0;
  undefined4 uStack_10ac;
  wchar_t *local_10a8;
  int iStack_10a0;
  undefined4 uStack_109c;
  wchar_t *local_1098;
  int iStack_1090;
  undefined4 uStack_108c;
  undefined1 local_1088 [8];
  undefined1 local_1080 [8];
  FName local_1078 [3];
  undefined1 local_1060 [8];
  undefined1 local_1058 [8];
  FName local_1050 [3];
  undefined1 local_1038 [8];
  undefined1 local_1030 [8];
  FName local_1028 [3];
  undefined1 local_1010 [8];
  undefined1 local_1008 [8];
  FName local_1000 [3];
  undefined1 local_fe8 [8];
  undefined1 local_fe0 [8];
  FName local_fd8 [3];
  undefined1 local_fc0 [8];
  undefined1 local_fb8 [8];
  FName local_fb0 [3];
  undefined1 local_f98 [8];
  undefined1 local_f90 [8];
  FName local_f88 [3];
  undefined1 local_f70 [8];
  undefined1 local_f68 [8];
  FName local_f60 [3];
  undefined1 local_f48 [8];
  undefined1 local_f40 [8];
  FName local_f38 [3];
  undefined1 local_f20 [8];
  undefined1 local_f18 [8];
  FName local_f10 [3];
  undefined1 local_ef8 [8];
  undefined1 local_ef0 [8];
  FName local_ee8 [2];
  undefined1 local_ed8 [8];
  FName local_ed0 [3];
  undefined1 local_eb8 [8];
  FName local_eb0 [3];
  undefined1 local_e98 [8];
  FName local_e90 [3];
  undefined1 local_e78 [8];
  FName local_e70 [3];
  undefined1 local_e58 [8];
  FName local_e50 [3];
  undefined1 local_e38 [8];
  FName local_e30 [3];
  undefined1 local_e18 [8];
  FName local_e10 [3];
  undefined1 local_df8 [8];
  FName local_df0 [3];
  undefined1 local_dd8 [8];
  FName local_dd0 [3];
  undefined1 local_db8 [8];
  FName local_db0 [3];
  undefined1 local_d98 [8];
  FName local_d90 [3];
  undefined1 local_d78 [8];
  FName local_d70 [3];
  undefined1 local_d58 [8];
  FName local_d50 [3];
  undefined1 local_d38 [8];
  FName local_d30 [3];
  undefined1 local_d18 [8];
  FName local_d10 [3];
  undefined1 local_cf8 [8];
  FName local_cf0 [3];
  undefined1 local_cd8 [8];
  undefined1 local_cd0 [8];
  FName local_cc8 [3];
  undefined1 local_cb0 [8];
  FName local_ca8 [3];
  undefined1 local_c90 [8];
  FName local_c88 [3];
  undefined1 local_c70 [8];
  FName local_c68 [3];
  undefined1 local_c50 [8];
  FName local_c48 [3];
  undefined1 local_c30 [8];
  FName local_c28 [3];
  undefined1 local_c10 [8];
  FName local_c08 [3];
  undefined1 local_bf0 [8];
  FName local_be8 [3];
  undefined1 local_bd0 [8];
  FName local_bc8 [3];
  undefined1 local_bb0 [8];
  undefined1 local_ba8 [8];
  FName local_ba0 [3];
  undefined1 local_b88 [8];
  undefined1 local_b80 [8];
  FName local_b78 [3];
  undefined1 local_b60 [8];
  undefined1 local_b58 [8];
  FName local_b50 [3];
  undefined1 local_b38 [8];
  undefined1 local_b30 [8];
  FName local_b28 [3];
  undefined1 local_b10 [8];
  undefined1 local_b08 [8];
  FName local_b00 [3];
  undefined1 local_ae8 [8];
  undefined1 local_ae0 [8];
  FName local_ad8 [3];
  undefined1 local_ac0 [8];
  undefined1 local_ab8 [8];
  FName local_ab0 [3];
  undefined1 local_a98 [8];
  undefined1 local_a90 [8];
  FName local_a88 [3];
  undefined1 local_a70 [8];
  undefined1 local_a68 [8];
  FName local_a60 [3];
  undefined1 local_a48 [8];
  undefined1 local_a40 [8];
  FName local_a38 [3];
  undefined1 local_a20 [8];
  undefined1 local_a18 [8];
  FName local_a10 [3];
  undefined1 local_9f8 [8];
  undefined1 local_9f0 [8];
  FName local_9e8 [3];
  undefined1 local_9d0 [8];
  undefined1 local_9c8 [8];
  FName local_9c0 [3];
  undefined1 local_9a8 [8];
  undefined1 local_9a0 [8];
  FName local_998 [3];
  undefined1 local_980 [8];
  undefined1 local_978 [8];
  FName local_970 [3];
  undefined1 local_958 [8];
  undefined1 local_950 [8];
  FName local_948 [3];
  undefined1 local_930 [8];
  undefined1 local_928 [8];
  FName local_920 [3];
  undefined1 local_908 [16];
  FName local_8f8 [3];
  undefined1 local_8e0 [8];
  undefined1 local_8d8 [8];
  FName local_8d0 [3];
  undefined1 local_8b8 [8];
  FName local_8b0 [3];
  undefined1 local_898 [8];
  FName local_890 [3];
  undefined1 local_878 [8];
  FName local_870 [3];
  undefined1 local_858 [8];
  FName local_850 [3];
  undefined1 local_838 [8];
  FName local_830 [2];
  undefined1 local_820 [8];
  FName local_818 [4];
  FName local_7f8 [3];
  undefined1 local_7e0 [8];
  FName local_7d8 [3];
  undefined1 local_7c0 [8];
  FName local_7b8 [3];
  undefined1 local_7a0 [8];
  FName local_798 [3];
  undefined1 local_780 [8];
  FName local_778 [3];
  undefined1 local_760 [8];
  FName local_758 [3];
  undefined1 local_740 [8];
  undefined1 local_738 [8];
  FName local_730 [3];
  undefined1 local_718 [8];
  FName local_710;
  FName local_708;
  FName local_700;
  undefined1 local_6f8 [8];
  undefined1 local_6f0 [8];
  FName local_6e8 [3];
  undefined1 local_6d0 [8];
  undefined1 local_6c8 [8];
  FName local_6c0 [3];
  undefined1 local_6a8 [8];
  undefined1 local_6a0 [8];
  FName local_698 [3];
  undefined1 local_680 [8];
  FName local_678 [3];
  undefined1 local_660 [8];
  FName local_658 [3];
  undefined1 local_640 [8];
  undefined1 local_638 [8];
  FName local_630 [3];
  undefined1 local_618 [8];
  undefined1 local_610 [8];
  FName local_608 [2];
  undefined1 local_5f8 [8];
  FName local_5f0 [2];
  undefined1 local_5e0 [8];
  FName local_5d8 [2];
  FName local_5c8;
  undefined1 local_5c0 [8];
  FName local_5b8;
  undefined1 local_5b0 [8];
  FName local_5a8;
  FName local_5a0;
  FName local_598;
  undefined1 local_590 [8];
  FName local_588;
  FName local_580;
  FName local_578;
  undefined1 local_570 [8];
  FName local_568 [2];
  undefined1 local_558 [8];
  FName local_550 [3];
  undefined1 local_538 [8];
  FName local_530 [2];
  undefined1 local_520 [8];
  FName local_518;
  undefined1 local_510 [24];
  undefined1 local_4f8 [8];
  FName local_4f0 [3];
  undefined1 local_4d8 [8];
  FName local_4d0 [2];
  undefined1 local_4c0 [8];
  FName local_4b8 [2];
  undefined1 local_4a8 [8];
  FName local_4a0 [2];
  undefined1 local_490 [8];
  FName local_488 [2];
  undefined1 local_478 [8];
  FName local_470 [2];
  undefined1 local_460 [8];
  FName local_458 [2];
  undefined1 local_448 [8];
  FName local_440 [3];
  undefined1 local_428 [8];
  FName local_420 [3];
  undefined1 local_408 [8];
  FName local_400 [3];
  undefined1 local_3e8 [8];
  FName local_3e0 [2];
  undefined1 local_3d0 [8];
  FName local_3c8 [2];
  undefined1 local_3b8 [8];
  FName local_3b0 [3];
  undefined1 local_398 [8];
  FName local_390 [2];
  undefined1 local_380 [8];
  FName local_378 [3];
  undefined1 local_360 [8];
  FName local_358 [3];
  undefined1 local_340 [8];
  FName local_338 [3];
  undefined1 local_320 [8];
  FName local_318 [4];
  FName local_2f8 [3];
  undefined1 local_2e0 [8];
  FName local_2d8 [2];
  undefined1 local_2c8 [8];
  FName local_2c0 [3];
  undefined1 local_2a8 [8];
  FName local_2a0 [3];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  FName local_278 [4];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[1] = 0x1416a85e4;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1bd8;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pFVar1 = *this->TagDataEnumMap;
  LLMGetTagUniqueName((ELLMTag)&local_1ac0);
  ::FName::ToString(&local_1ac0,&local_258);
  local_1748 = local_258.Base;
  iStack_1740 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_173c;
  local_1b78.Size = iStack_1740;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_7c0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(&local_5c8,"Untagged");
  local_1b68 = 0;
  local_1b60 = 0;
  pFVar1->DisplayName = *pFVar3;
  (pFVar1->StatName).ComparisonIndex = 0;
  (pFVar1->StatName).Number = 0;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  if (pFVar1->bParentIsName == false) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  (pFVar1->field2_0x10).Parent = (FTagData *)0x0;
  pFVar1 = this->TagDataEnumMap[1];
  LLMGetTagUniqueName((ELLMTag)&local_1ab8);
  ::FName::ToString(&local_1ab8,&local_258);
  local_1738 = local_258.Base;
  iStack_1730 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_172c;
  local_1b78.Size = iStack_1730;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_5c0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(&local_5b8,"Paused");
  local_1b58 = 0;
  local_1b50 = 0;
  pFVar1->DisplayName = *pFVar3;
  (pFVar1->StatName).ComparisonIndex = 0;
  (pFVar1->StatName).Number = 0;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  if (pFVar1->bParentIsName == false) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  (pFVar1->field2_0x10).Parent = (FTagData *)0x0;
  pFVar1 = this->TagDataEnumMap[2];
  LLMGetTagUniqueName((ELLMTag)&local_1ab0);
  ::FName::ToString(&local_1ab0,&local_258);
  local_1728 = local_258.Base;
  iStack_1720 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_171c;
  local_1b78.Size = iStack_1720;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_5b0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(&local_5a8,"Total");
  pFVar1->DisplayName = *pFVar3;
  FVar4 = StatPtr_STAT_TotalLLM;
  if (StatPtr_STAT_TotalLLM == (FThreadSafeStaticStat<FStat_STAT_TotalLLM>)0x0) {
    pFVar3 = ::FName::FName(&local_5a0,"STAT_TotalLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_TotalLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalLLM,*pFVar3,L"Total",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_1b78.DataPtr = *(wchar_t **)FVar4;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  FVar5 = StatPtr_STAT_TrackedTotalSummaryLLM;
  if (StatPtr_STAT_TrackedTotalSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_TrackedTotalSummaryLLM>)0x0) {
    pFVar3 = ::FName::FName(&local_598,"STAT_TrackedTotalSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_TrackedTotalSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrackedTotalSummaryLLM,*pFVar3,
                       L"Total","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_1b78.DataPtr = *(wchar_t **)FVar5;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  if (pFVar1->bParentIsName == false) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  (pFVar1->field2_0x10).Parent = (FTagData *)0x0;
  pFVar1 = this->TagDataEnumMap[3];
  LLMGetTagUniqueName((ELLMTag)&local_1aa8);
  ::FName::ToString(&local_1aa8,&local_258);
  local_1718 = local_258.Base;
  iStack_1710 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_170c;
  local_1b78.Size = iStack_1710;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_590);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(&local_588,"Untracked");
  pFVar1->DisplayName = *pFVar3;
  FVar6 = StatPtr_STAT_UntrackedLLM;
  if (StatPtr_STAT_UntrackedLLM == (FThreadSafeStaticStat<FStat_STAT_UntrackedLLM>)0x0) {
    pFVar3 = ::FName::FName(&local_580,"STAT_UntrackedLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_UntrackedLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UntrackedLLM,*pFVar3,L"Untracked",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_1b78.DataPtr = *(wchar_t **)FVar6;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  FVar5 = StatPtr_STAT_TrackedTotalSummaryLLM;
  if (StatPtr_STAT_TrackedTotalSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_TrackedTotalSummaryLLM>)0x0) {
    pFVar3 = ::FName::FName(&local_578,"STAT_TrackedTotalSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_TrackedTotalSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrackedTotalSummaryLLM,*pFVar3,
                       L"Total","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_1b78.DataPtr = *(wchar_t **)FVar5;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[4];
  LLMGetTagUniqueName((ELLMTag)&local_1aa0);
  ::FName::ToString(&local_1aa0,&local_258);
  local_1708 = local_258.Base;
  iStack_1700 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_16fc;
  local_1b78.Size = iStack_1700;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_570);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_568,"Total");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformTotalLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformTotalLLM,1> *)
                     &StatPtr_STAT_PlatformTotalLLM);
  local_1b48 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[5];
  LLMGetTagUniqueName((ELLMTag)&local_1a98);
  ::FName::ToString(&local_1a98,&local_258);
  local_16f8 = local_258.Base;
  iStack_16f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_16ec;
  local_1b78.Size = iStack_16f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_558);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_550,"TrackedTotal");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalLLM,1> *)
                     &StatPtr_STAT_TrackedTotalLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalSummaryLLM,1> *)
                     &StatPtr_STAT_TrackedTotalSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[6];
  LLMGetTagUniqueName((ELLMTag)&local_1a90);
  ::FName::ToString(&local_1a90,&local_258);
  local_16e8 = local_258.Base;
  iStack_16e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_16dc;
  local_1b78.Size = iStack_16e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_538);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_530,"Untagged");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_UntaggedTotalLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_UntaggedTotalLLM,1> *)
                     &StatPtr_STAT_UntaggedTotalLLM);
  local_1b40 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[7];
  LLMGetTagUniqueName((ELLMTag)&local_1a88);
  ::FName::ToString(&local_1a88,&local_258);
  local_16d8 = local_258.Base;
  iStack_16d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_16cc;
  local_1b78.Size = iStack_16d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_520);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(&local_518,"WorkingSetSize");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_WorkingSetSizeLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_WorkingSetSizeLLM,1> *)
                     &StatPtr_STAT_WorkingSetSizeLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalSummaryLLM,1> *)
                     &StatPtr_STAT_TrackedTotalSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[8];
  LLMGetTagUniqueName((ELLMTag)&local_1a80);
  ::FName::ToString(&local_1a80,&local_258);
  local_16c8 = local_258.Base;
  iStack_16c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_16bc;
  local_1b78.Size = iStack_16c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_4f8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_4f0,"PagefileUsed");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PagefileUsedLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PagefileUsedLLM,1> *)
                     &StatPtr_STAT_PagefileUsedLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TrackedTotalSummaryLLM,1> *)
                     &StatPtr_STAT_TrackedTotalSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[9];
  LLMGetTagUniqueName((ELLMTag)&local_1a78);
  ::FName::ToString(&local_1a78,&local_258);
  local_16b8 = local_258.Base;
  iStack_16b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_16ac;
  local_1b78.Size = iStack_16b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_4d8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_4d0,"TrackedTotal");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformTrackedTotalLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformTrackedTotalLLM,1> *)
                     &StatPtr_STAT_PlatformTrackedTotalLLM);
  local_1b38 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[10];
  LLMGetTagUniqueName((ELLMTag)&local_1a70);
  ::FName::ToString(&local_1a70,&local_258);
  local_16a8 = local_258.Base;
  iStack_16a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_169c;
  local_1b78.Size = iStack_16a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_4c0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_4b8,"Untagged");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformUntaggedTotalLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformUntaggedTotalLLM,1> *)
                     &StatPtr_STAT_PlatformUntaggedTotalLLM);
  local_1b30 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0xb];
  LLMGetTagUniqueName((ELLMTag)&local_1a68);
  ::FName::ToString(&local_1a68,&local_258);
  local_1698 = local_258.Base;
  iStack_1690 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_168c;
  local_1b78.Size = iStack_1690;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_4a8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_4a0,"Untracked");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformUntrackedLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformUntrackedLLM,1> *)
                     &StatPtr_STAT_PlatformUntrackedLLM);
  local_1b28 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0xc];
  LLMGetTagUniqueName((ELLMTag)&local_1a60);
  ::FName::ToString(&local_1a60,&local_258);
  local_1688 = local_258.Base;
  iStack_1680 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_167c;
  local_1b78.Size = iStack_1680;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_490);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_488,"LLMOverhead");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformOverheadLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformOverheadLLM,1> *)
                     &StatPtr_STAT_PlatformOverheadLLM);
  local_1b20 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0xd];
  LLMGetTagUniqueName((ELLMTag)&local_1a58);
  ::FName::ToString(&local_1a58,&local_258);
  local_1678 = local_258.Base;
  iStack_1670 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_166c;
  local_1b78.Size = iStack_1670;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_478);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_470,"OSAvailable");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformOSAvailableLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformOSAvailableLLM,1> *)
                     &StatPtr_STAT_PlatformOSAvailableLLM);
  local_1b18 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0xe];
  LLMGetTagUniqueName((ELLMTag)&local_1a50);
  ::FName::ToString(&local_1a50,&local_258);
  local_1668 = local_258.Base;
  iStack_1660 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_165c;
  local_1b78.Size = iStack_1660;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_460);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_458,"FMalloc");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_FMallocLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_FMallocLLM,1> *)&StatPtr_STAT_FMallocLLM
                    );
  local_1b10 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0xf];
  LLMGetTagUniqueName((ELLMTag)&local_1a48);
  ::FName::ToString(&local_1a48,&local_258);
  local_1658 = local_258.Base;
  iStack_1650 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_164c;
  local_1b78.Size = iStack_1650;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_448);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_440,"FMallocUnused");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_FMallocUnusedLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_FMallocUnusedLLM,1> *)
                     &StatPtr_STAT_FMallocUnusedLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x10];
  LLMGetTagUniqueName((ELLMTag)&local_1a40);
  ::FName::ToString(&local_1a40,&local_258);
  local_1648 = local_258.Base;
  iStack_1640 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_163c;
  local_1b78.Size = iStack_1640;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_428);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_420,"RHIUnused");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_RHIUnusedLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_RHIUnusedLLM,1> *)
                     &StatPtr_STAT_RHIUnusedLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x11];
  LLMGetTagUniqueName((ELLMTag)&local_1a38);
  ::FName::ToString(&local_1a38,&local_258);
  local_1638 = local_258.Base;
  iStack_1630 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_162c;
  local_1b78.Size = iStack_1630;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_408);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_400,"ThreadStack");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ThreadStackLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ThreadStackLLM,1> *)
                     &StatPtr_STAT_ThreadStackLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x12];
  LLMGetTagUniqueName((ELLMTag)&local_1a30);
  ::FName::ToString(&local_1a30,&local_258);
  local_1628 = local_258.Base;
  iStack_1620 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_161c;
  local_1b78.Size = iStack_1620;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_3e8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_3e0,"ThreadStack");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ThreadStackPlatformLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ThreadStackPlatformLLM,1> *)
                     &StatPtr_STAT_ThreadStackPlatformLLM);
  local_1b08 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x13];
  LLMGetTagUniqueName((ELLMTag)&local_1a28);
  ::FName::ToString(&local_1a28,&local_258);
  local_1618 = local_258.Base;
  iStack_1610 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_160c;
  local_1b78.Size = iStack_1610;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_3d0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_3c8,"ProgramSize");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ProgramSizePlatformLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ProgramSizePlatformLLM,1> *)
                     &StatPtr_STAT_ProgramSizePlatformLLM);
  local_1b00 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x14];
  LLMGetTagUniqueName((ELLMTag)&local_1a20);
  ::FName::ToString(&local_1a20,&local_258);
  local_1608 = local_258.Base;
  iStack_1600 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_15fc;
  local_1b78.Size = iStack_1600;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_3b8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_3b0,"ProgramSize");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ProgramSizeLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ProgramSizeLLM,1> *)
                     &StatPtr_STAT_ProgramSizeLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x15];
  LLMGetTagUniqueName((ELLMTag)&local_1a18);
  ::FName::ToString(&local_1a18,&local_258);
  local_15f8 = local_258.Base;
  iStack_15f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_15ec;
  local_1b78.Size = iStack_15f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_398);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_390,"OOMBackupPool");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_OOMBackupPoolPlatformLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_OOMBackupPoolPlatformLLM,1> *)
                     &StatPtr_STAT_OOMBackupPoolPlatformLLM);
  local_1af8 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x16];
  LLMGetTagUniqueName((ELLMTag)&local_1a10);
  ::FName::ToString(&local_1a10,&local_258);
  local_15e8 = local_258.Base;
  iStack_15e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_15dc;
  local_1b78.Size = iStack_15e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_380);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_378,"OOMBackupPool");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_OOMBackupPoolLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_OOMBackupPoolLLM,1> *)
                     &StatPtr_STAT_OOMBackupPoolLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x17];
  LLMGetTagUniqueName((ELLMTag)&local_1a08);
  ::FName::ToString(&local_1a08,&local_258);
  local_1758 = local_258.Base;
  iStack_1750 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_174c;
  local_1b78.Size = iStack_1750;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_360);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_358,"GenericPlatformMallocCrash");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_GenericPlatformMallocCrashLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_GenericPlatformMallocCrashLLM,1> *)
                     &StatPtr_STAT_GenericPlatformMallocCrashLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x18];
  LLMGetTagUniqueName(Untagged);
  ::FName::ToString(&local_1a00,&local_258);
  local_15d8 = local_258.Base;
  iStack_15d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_15cc;
  local_1b78.Size = iStack_15d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_340);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_338,"GenericPlatformMallocCrash");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_GenericPlatformMallocCrashPlatformLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_GenericPlatformMallocCrashPlatformLLM,1>
                      *)&StatPtr_STAT_GenericPlatformMallocCrashPlatformLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x19];
  LLMGetTagUniqueName((ELLMTag)&local_19f8);
  ::FName::ToString(&local_19f8,&local_258);
  local_15c8 = local_258.Base;
  iStack_15c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_15bc;
  local_1b78.Size = iStack_15c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_320);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_318,"EngineMisc");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineMiscLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineMiscLLM,1> *)
                     &StatPtr_STAT_EngineMiscLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x1a];
  LLMGetTagUniqueName((ELLMTag)&local_19f0);
  ::FName::ToString(&local_19f0,&local_258);
  local_15b8 = local_258.Base;
  iStack_15b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_15ac;
  local_1b78.Size = iStack_15b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName(Untagged);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_2f8,"TaskGraphMiscTasks");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TaskGraphTasksMiscLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TaskGraphTasksMiscLLM,1> *)
                     &StatPtr_STAT_TaskGraphTasksMiscLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x1b];
  LLMGetTagUniqueName((ELLMTag)&local_19e8);
  ::FName::ToString(&local_19e8,&local_258);
  local_15a8 = local_258.Base;
  iStack_15a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_159c;
  local_1b78.Size = iStack_15a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_2e0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_2d8,"LinearAllocator");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_LinearAllocatorLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_LinearAllocatorLLM,1> *)
                     &StatPtr_STAT_LinearAllocatorLLM);
  local_1af0 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x1c];
  LLMGetTagUniqueName((ELLMTag)&local_19e0);
  ::FName::ToString(&local_19e0,&local_258);
  local_1598 = local_258.Base;
  iStack_1590 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_158c;
  local_1b78.Size = iStack_1590;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_2c8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_2c0,"Audio");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioLLM,1> *)&StatPtr_STAT_AudioLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x1d];
  LLMGetTagUniqueName((ELLMTag)&local_19d8);
  ::FName::ToString(&local_19d8,&local_258);
  local_1588 = local_258.Base;
  iStack_1580 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_157c;
  local_1b78.Size = iStack_1580;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_2a8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_2a0,"AudioMisc");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioMiscLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioMiscLLM,1> *)
                     &StatPtr_STAT_AudioMiscLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_288);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x1e];
  LLMGetTagUniqueName((ELLMTag)&local_19d0);
  ::FName::ToString(&local_19d0,&local_258);
  local_1578 = local_258.Base;
  iStack_1570 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_156c;
  local_1b78.Size = iStack_1570;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_280);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_278,"AudioSoundWaves");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSoundWavesLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSoundWavesLLM,1> *)
                     &StatPtr_STAT_AudioSoundWavesLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1088);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x1f];
  LLMGetTagUniqueName((ELLMTag)&local_19c8);
  ::FName::ToString(&local_19c8,&local_258);
  local_1568 = local_258.Base;
  iStack_1560 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_155c;
  local_1b78.Size = iStack_1560;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1080);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_1078,"AudioSoundWaveProxies");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSoundWaveProxiesLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSoundWaveProxiesLLM,1> *)
                     &StatPtr_STAT_AudioSoundWaveProxiesLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1060);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x20];
  LLMGetTagUniqueName((ELLMTag)&local_19c0);
  ::FName::ToString(&local_19c0,&local_258);
  local_1558 = local_258.Base;
  iStack_1550 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_154c;
  local_1b78.Size = iStack_1550;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1058);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_1050,"AudioMixer");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioMixerLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioMixerLLM,1> *)
                     &StatPtr_STAT_AudioMixerLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1038);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x21];
  LLMGetTagUniqueName((ELLMTag)&local_19b8);
  ::FName::ToString(&local_19b8,&local_258);
  local_1548 = local_258.Base;
  iStack_1540 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_153c;
  local_1b78.Size = iStack_1540;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1030);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_1028,"AudioMixerPlugins");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioMixerPluginsLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioMixerPluginsLLM,1> *)
                     &StatPtr_STAT_AudioMixerPluginsLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1010);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x22];
  LLMGetTagUniqueName((ELLMTag)&local_19b0);
  ::FName::ToString(&local_19b0,&local_258);
  local_1538 = local_258.Base;
  iStack_1530 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_152c;
  local_1b78.Size = iStack_1530;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_1008);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_1000,"AudioPrecache");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioPrecacheLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioPrecacheLLM,1> *)
                     &StatPtr_STAT_AudioPrecacheLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_fe8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x23];
  LLMGetTagUniqueName((ELLMTag)&local_19a8);
  ::FName::ToString(&local_19a8,&local_258);
  local_1528 = local_258.Base;
  iStack_1520 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_151c;
  local_1b78.Size = iStack_1520;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_fe0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_fd8,"AudioDecompress");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioDecompressLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioDecompressLLM,1> *)
                     &StatPtr_STAT_AudioDecompressLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_fc0);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x24];
  LLMGetTagUniqueName((ELLMTag)&local_19a0);
  ::FName::ToString(&local_19a0,&local_258);
  local_1518 = local_258.Base;
  iStack_1510 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_150c;
  local_1b78.Size = iStack_1510;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_fb8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_fb0,"AudioRealtimePrecache");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioRealtimePrecacheLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioRealtimePrecacheLLM,1> *)
                     &StatPtr_STAT_AudioRealtimePrecacheLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f98);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x25];
  LLMGetTagUniqueName((ELLMTag)&local_1998);
  ::FName::ToString(&local_1998,&local_258);
  local_1508 = local_258.Base;
  iStack_1500 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_14fc;
  local_1b78.Size = iStack_1500;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f90);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_f88,"AudioFullDecompress");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioFullDecompressLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioFullDecompressLLM,1> *)
                     &StatPtr_STAT_AudioFullDecompressLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f70);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x26];
  LLMGetTagUniqueName((ELLMTag)&local_1990);
  ::FName::ToString(&local_1990,&local_258);
  local_14f8 = local_258.Base;
  iStack_14f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_14ec;
  local_1b78.Size = iStack_14f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f68);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_f60,"AudioStreamCache");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioStreamCacheLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioStreamCacheLLM,1> *)
                     &StatPtr_STAT_AudioStreamCacheLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f48);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x27];
  LLMGetTagUniqueName((ELLMTag)&local_1988);
  ::FName::ToString(&local_1988,&local_258);
  local_14e8 = local_258.Base;
  iStack_14e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_14dc;
  local_1b78.Size = iStack_14e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f40);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_f38,"AudioStreamCacheCompressedData");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioStreamCacheCompressedDataLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioStreamCacheCompressedDataLLM,1> *)
                     &StatPtr_STAT_AudioStreamCacheCompressedDataLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f20);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x28];
  LLMGetTagUniqueName((ELLMTag)&local_1980);
  ::FName::ToString(&local_1980,&local_258);
  local_14d8 = local_258.Base;
  iStack_14d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_14cc;
  local_1b78.Size = iStack_14d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_f18);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_f10,"AudioSynthesis");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSynthesisLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSynthesisLLM,1> *)
                     &StatPtr_STAT_AudioSynthesisLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AudioSummaryLLM,1> *)
                     &StatPtr_STAT_AudioSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ef8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x29];
  LLMGetTagUniqueName((ELLMTag)&local_1978);
  ::FName::ToString(&local_1978,&local_258);
  local_14c8 = local_258.Base;
  iStack_14c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_14bc;
  local_1b78.Size = iStack_14c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ef0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_ee8,"RealTimeCommunications");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_RealTimeCommunicationsLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_RealTimeCommunicationsLLM,1> *)
                     &StatPtr_STAT_RealTimeCommunicationsLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  local_1ae8 = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x2a];
  LLMGetTagUniqueName((ELLMTag)&local_1970);
  ::FName::ToString(&local_1970,&local_258);
  local_14b8 = local_258.Base;
  iStack_14b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_14ac;
  local_1b78.Size = iStack_14b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ed8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_ed0,"FName");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_FNameLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_FNameLLM,1> *)&StatPtr_STAT_FNameLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x2b];
  LLMGetTagUniqueName((ELLMTag)&local_1968);
  ::FName::ToString(&local_1968,&local_258);
  local_14a8 = local_258.Base;
  iStack_14a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_149c;
  local_1b78.Size = iStack_14a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_eb8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_eb0,"Networking");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NetworkingLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NetworkingLLM,1> *)
                     &StatPtr_STAT_NetworkingLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NetworkingSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NetworkingSummaryLLM,1> *)
                     &StatPtr_STAT_NetworkingSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x2c];
  LLMGetTagUniqueName((ELLMTag)&local_1960);
  ::FName::ToString(&local_1960,&local_258);
  local_1498 = local_258.Base;
  iStack_1490 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_148c;
  local_1b78.Size = iStack_1490;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_e98);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_e90,"Meshes");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MeshesLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MeshesLLM,1> *)&StatPtr_STAT_MeshesLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MeshesSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MeshesSummaryLLM,1> *)
                     &StatPtr_STAT_MeshesSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x2d];
  LLMGetTagUniqueName((ELLMTag)&local_1958);
  ::FName::ToString(&local_1958,&local_258);
  local_1488 = local_258.Base;
  iStack_1480 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_147c;
  local_1b78.Size = iStack_1480;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_e78);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_e70,"Stats");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_StatsLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_StatsLLM,1> *)&StatPtr_STAT_StatsLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x2e];
  LLMGetTagUniqueName((ELLMTag)&local_1950);
  ::FName::ToString(&local_1950,&local_258);
  local_1478 = local_258.Base;
  iStack_1470 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_146c;
  local_1b78.Size = iStack_1470;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_e58);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_e50,"Shaders");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ShadersLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ShadersLLM,1> *)&StatPtr_STAT_ShadersLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x2f];
  LLMGetTagUniqueName((ELLMTag)&local_1948);
  ::FName::ToString(&local_1948,&local_258);
  local_1468 = local_258.Base;
  iStack_1460 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_145c;
  local_1b78.Size = iStack_1460;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_e38);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_e30,"PSO");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PSOLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PSOLLM,1> *)&StatPtr_STAT_PSOLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x30];
  LLMGetTagUniqueName((ELLMTag)&local_1940);
  ::FName::ToString(&local_1940,&local_258);
  local_1458 = local_258.Base;
  iStack_1450 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_144c;
  local_1b78.Size = iStack_1450;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_e18);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_e10,"Textures");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TexturesLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TexturesLLM,1> *)
                     &StatPtr_STAT_TexturesLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TexturesSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TexturesSummaryLLM,1> *)
                     &StatPtr_STAT_TexturesSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x31];
  LLMGetTagUniqueName((ELLMTag)&local_1938);
  ::FName::ToString(&local_1938,&local_258);
  local_1448 = local_258.Base;
  iStack_1440 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_143c;
  local_1b78.Size = iStack_1440;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_df8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_df0,"TextureMetaData");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TextureMetaDataLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TextureMetaDataLLM,1> *)
                     &StatPtr_STAT_TextureMetaDataLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TexturesSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TexturesSummaryLLM,1> *)
                     &StatPtr_STAT_TexturesSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x32];
  LLMGetTagUniqueName((ELLMTag)&local_1930);
  ::FName::ToString(&local_1930,&local_258);
  local_1438 = local_258.Base;
  iStack_1430 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_142c;
  local_1b78.Size = iStack_1430;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_dd8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_dd0,"VirtualTextureSystem");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_VirtualTextureSystemLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_VirtualTextureSystemLLM,1> *)
                     &StatPtr_STAT_VirtualTextureSystemLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_TexturesSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_TexturesSummaryLLM,1> *)
                     &StatPtr_STAT_TexturesSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x33];
  LLMGetTagUniqueName((ELLMTag)&local_1928);
  ::FName::ToString(&local_1928,&local_258);
  local_1428 = local_258.Base;
  iStack_1420 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_141c;
  local_1b78.Size = iStack_1420;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_db8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_db0,"RenderTargets");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_RenderTargetsLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_RenderTargetsLLM,1> *)
                     &StatPtr_STAT_RenderTargetsLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x34];
  LLMGetTagUniqueName((ELLMTag)&local_1920);
  ::FName::ToString(&local_1920,&local_258);
  local_1418 = local_258.Base;
  iStack_1410 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_140c;
  local_1b78.Size = iStack_1410;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_d98);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_d90,"SceneRender");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_SceneRenderLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_SceneRenderLLM,1> *)
                     &StatPtr_STAT_SceneRenderLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x35];
  LLMGetTagUniqueName((ELLMTag)&local_1918);
  ::FName::ToString(&local_1918,&local_258);
  local_1408 = local_258.Base;
  iStack_1400 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_13fc;
  local_1b78.Size = iStack_1400;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_d78);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_d70,"RHIMisc");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_RHIMiscLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_RHIMiscLLM,1> *)&StatPtr_STAT_RHIMiscLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x36];
  LLMGetTagUniqueName((ELLMTag)&local_1910);
  ::FName::ToString(&local_1910,&local_258);
  local_13f8 = local_258.Base;
  iStack_13f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_13ec;
  local_1b78.Size = iStack_13f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_d58);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_d50,"AsyncLoading");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AsyncLoadingLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AsyncLoadingLLM,1> *)
                     &StatPtr_STAT_AsyncLoadingLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x37];
  LLMGetTagUniqueName((ELLMTag)&local_1908);
  ::FName::ToString(&local_1908,&local_258);
  local_13e8 = local_258.Base;
  iStack_13e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_13dc;
  local_1b78.Size = iStack_13e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_d38);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_d30,"UObject");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_UObjectLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_UObjectLLM,1> *)&StatPtr_STAT_UObjectLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_UObjectSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_UObjectSummaryLLM,1> *)
                     &StatPtr_STAT_UObjectSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x38];
  LLMGetTagUniqueName(Untagged);
  ::FName::ToString(&local_1900,&local_258);
  local_13d8 = local_258.Base;
  iStack_13d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_13cc;
  local_1b78.Size = iStack_13d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_d18);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_d10,"Animation");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AnimationLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AnimationLLM,1> *)
                     &StatPtr_STAT_AnimationLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AnimationSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AnimationSummaryLLM,1> *)
                     &StatPtr_STAT_AnimationSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x39];
  LLMGetTagUniqueName((ELLMTag)&local_18f8);
  ::FName::ToString(&local_18f8,&local_258);
  local_13c8 = local_258.Base;
  iStack_13c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_13bc;
  local_1b78.Size = iStack_13c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_cf8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_cf0,"StaticMesh");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_StaticMeshLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_StaticMeshLLM,1> *)
                     &StatPtr_STAT_StaticMeshLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_StaticMeshSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_StaticMeshSummaryLLM,1> *)
                     &StatPtr_STAT_StaticMeshSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_cd8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x3a];
  LLMGetTagUniqueName((ELLMTag)&local_18f0);
  ::FName::ToString(&local_18f0,&local_258);
  local_13b8 = local_258.Base;
  iStack_13b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_13ac;
  local_1b78.Size = iStack_13b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_cd0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_cc8,"Materials");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MaterialsLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MaterialsLLM,1> *)
                     &StatPtr_STAT_MaterialsLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MaterialsSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MaterialsSummaryLLM,1> *)
                     &StatPtr_STAT_MaterialsSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x3b];
  LLMGetTagUniqueName((ELLMTag)&local_18e8);
  ::FName::ToString(&local_18e8,&local_258);
  local_13a8 = local_258.Base;
  iStack_13a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_139c;
  local_1b78.Size = iStack_13a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_cb0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_ca8,"Particles");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ParticlesLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ParticlesLLM,1> *)
                     &StatPtr_STAT_ParticlesLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ParticlesSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ParticlesSummaryLLM,1> *)
                     &StatPtr_STAT_ParticlesSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x3c];
  LLMGetTagUniqueName((ELLMTag)&local_18e0);
  ::FName::ToString(&local_18e0,&local_258);
  local_1398 = local_258.Base;
  iStack_1390 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_138c;
  local_1b78.Size = iStack_1390;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_c90);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_c88,"Niagara");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraLLM,1> *)&StatPtr_STAT_NiagaraLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraSummaryLLM,1> *)
                     &StatPtr_STAT_NiagaraSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x3d];
  LLMGetTagUniqueName((ELLMTag)&local_18d8);
  ::FName::ToString(&local_18d8,&local_258);
  local_1388 = local_258.Base;
  iStack_1380 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_137c;
  local_1b78.Size = iStack_1380;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_c70);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_c68,"GPUSort");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_GPUSortLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_GPUSortLLM,1> *)&StatPtr_STAT_GPUSortLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x3e];
  LLMGetTagUniqueName((ELLMTag)&local_18d0);
  ::FName::ToString(&local_18d0,&local_258);
  local_1378 = local_258.Base;
  iStack_1370 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_136c;
  local_1b78.Size = iStack_1370;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_c50);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_c48,"GC");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_GCLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_GCLLM,1> *)&StatPtr_STAT_GCLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x3f];
  LLMGetTagUniqueName((ELLMTag)&local_18c8);
  ::FName::ToString(&local_18c8,&local_258);
  local_1368 = local_258.Base;
  iStack_1360 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_135c;
  local_1b78.Size = iStack_1360;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_c30);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_c28,"UI");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_UILLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_UILLM,1> *)&StatPtr_STAT_UILLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_UISummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_UISummaryLLM,1> *)
                     &StatPtr_STAT_UISummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x40];
  LLMGetTagUniqueName((ELLMTag)&local_18c0);
  ::FName::ToString(&local_18c0,&local_258);
  local_1358 = local_258.Base;
  iStack_1350 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_134c;
  local_1b78.Size = iStack_1350;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_c10);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_c08,"NavigationRecast");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NavigationRecastLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NavigationRecastLLM,1> *)
                     &StatPtr_STAT_NavigationRecastLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NavigationSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NavigationSummaryLLM,1> *)
                     &StatPtr_STAT_NavigationSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x41];
  LLMGetTagUniqueName((ELLMTag)&local_18b8);
  ::FName::ToString(&local_18b8,&local_258);
  local_1348 = local_258.Base;
  iStack_1340 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_133c;
  local_1b78.Size = iStack_1340;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_bf0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_be8,"Physics");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysicsLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysicsLLM,1> *)&StatPtr_STAT_PhysicsLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysicsSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysicsSummaryLLM,1> *)
                     &StatPtr_STAT_PhysicsSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x42];
  LLMGetTagUniqueName((ELLMTag)&local_18b0);
  ::FName::ToString(&local_18b0,&local_258);
  local_1338 = local_258.Base;
  iStack_1330 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_132c;
  local_1b78.Size = iStack_1330;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_bd0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_bc8,"PhysX");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXLLM,1> *)&StatPtr_STAT_PhysXLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1> *)
                     &StatPtr_STAT_PhysXSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_bb0);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x43];
  LLMGetTagUniqueName((ELLMTag)&local_18a8);
  ::FName::ToString(&local_18a8,&local_258);
  local_1328 = local_258.Base;
  iStack_1320 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_131c;
  local_1b78.Size = iStack_1320;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ba8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_ba0,"PhysXGeometry");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXGeometryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXGeometryLLM,1> *)
                     &StatPtr_STAT_PhysXGeometryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1> *)
                     &StatPtr_STAT_PhysXSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b88);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x44];
  LLMGetTagUniqueName((ELLMTag)&local_18a0);
  ::FName::ToString(&local_18a0,&local_258);
  local_1318 = local_258.Base;
  iStack_1310 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_130c;
  local_1b78.Size = iStack_1310;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b80);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_b78,"PhysXTrimesh");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXTrimeshLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXTrimeshLLM,1> *)
                     &StatPtr_STAT_PhysXTrimeshLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1> *)
                     &StatPtr_STAT_PhysXSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b60);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x45];
  LLMGetTagUniqueName((ELLMTag)&local_1898);
  ::FName::ToString(&local_1898,&local_258);
  local_1308 = local_258.Base;
  iStack_1300 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_12fc;
  local_1b78.Size = iStack_1300;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b58);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_b50,"PhysXConvex");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXConvexLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXConvexLLM,1> *)
                     &StatPtr_STAT_PhysXConvexLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1> *)
                     &StatPtr_STAT_PhysXSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b38);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x46];
  LLMGetTagUniqueName((ELLMTag)&local_1890);
  ::FName::ToString(&local_1890,&local_258);
  local_12f8 = local_258.Base;
  iStack_12f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_12ec;
  local_1b78.Size = iStack_12f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b30);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_b28,"PhysXAllocator");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXAllocatorLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXAllocatorLLM,1> *)
                     &StatPtr_STAT_PhysXAllocatorLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1> *)
                     &StatPtr_STAT_PhysXSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b10);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x47];
  LLMGetTagUniqueName((ELLMTag)&local_1888);
  ::FName::ToString(&local_1888,&local_258);
  local_12e8 = local_258.Base;
  iStack_12e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_12dc;
  local_1b78.Size = iStack_12e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_b08);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_b00,"PhysXLandscape");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXLandscapeLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXLandscapeLLM,1> *)
                     &StatPtr_STAT_PhysXLandscapeLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PhysXSummaryLLM,1> *)
                     &StatPtr_STAT_PhysXSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ae8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x48];
  LLMGetTagUniqueName((ELLMTag)&local_1880);
  ::FName::ToString(&local_1880,&local_258);
  local_12d8 = local_258.Base;
  iStack_12d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_12cc;
  local_1b78.Size = iStack_12d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ae0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_ad8,"Chaos");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosLLM,1> *)&StatPtr_STAT_ChaosLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ac0);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x49];
  LLMGetTagUniqueName((ELLMTag)&local_1878);
  ::FName::ToString(&local_1878,&local_258);
  local_12c8 = local_258.Base;
  iStack_12c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_12bc;
  local_1b78.Size = iStack_12c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_ab8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_ab0,"ChaosGeometry");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosGeometryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosGeometryLLM,1> *)
                     &StatPtr_STAT_ChaosGeometryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a98);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x4a];
  LLMGetTagUniqueName((ELLMTag)&local_1870);
  ::FName::ToString(&local_1870,&local_258);
  local_12b8 = local_258.Base;
  iStack_12b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_12ac;
  local_1b78.Size = iStack_12b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a90);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_a88,"ChaosAcceleration");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosAccelerationLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosAccelerationLLM,1> *)
                     &StatPtr_STAT_ChaosAccelerationLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a70);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x4b];
  LLMGetTagUniqueName((ELLMTag)&local_1868);
  ::FName::ToString(&local_1868,&local_258);
  local_12a8 = local_258.Base;
  iStack_12a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_129c;
  local_1b78.Size = iStack_12a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a68);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_a60,"ChaosParticles");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosParticlesLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosParticlesLLM,1> *)
                     &StatPtr_STAT_ChaosParticlesLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a48);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x4c];
  LLMGetTagUniqueName((ELLMTag)&local_1860);
  ::FName::ToString(&local_1860,&local_258);
  local_1298 = local_258.Base;
  iStack_1290 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_128c;
  local_1b78.Size = iStack_1290;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a40);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_a38,"ChaosLandscape");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosLandscapeLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosLandscapeLLM,1> *)
                     &StatPtr_STAT_ChaosLandscapeLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a20);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x4d];
  LLMGetTagUniqueName((ELLMTag)&local_1858);
  ::FName::ToString(&local_1858,&local_258);
  local_1288 = local_258.Base;
  iStack_1280 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_127c;
  local_1b78.Size = iStack_1280;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_a18);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_a10,"ChaosTrimesh");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosTrimeshLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosTrimeshLLM,1> *)
                     &StatPtr_STAT_ChaosTrimeshLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_9f8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x4e];
  LLMGetTagUniqueName((ELLMTag)&local_1850);
  ::FName::ToString(&local_1850,&local_258);
  local_1278 = local_258.Base;
  iStack_1270 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_126c;
  local_1b78.Size = iStack_1270;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_9f0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_9e8,"ChaosConvex");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosConvexLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosConvexLLM,1> *)
                     &StatPtr_STAT_ChaosConvexLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_9d0);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x4f];
  LLMGetTagUniqueName((ELLMTag)&local_1848);
  ::FName::ToString(&local_1848,&local_258);
  local_1268 = local_258.Base;
  iStack_1260 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_125c;
  local_1b78.Size = iStack_1260;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_9c8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_9c0,"ChaosScene");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSceneLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSceneLLM,1> *)
                     &StatPtr_STAT_ChaosSceneLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_9a8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x50];
  LLMGetTagUniqueName((ELLMTag)&local_1840);
  ::FName::ToString(&local_1840,&local_258);
  local_1258 = local_258.Base;
  iStack_1250 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_124c;
  local_1b78.Size = iStack_1250;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_9a0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_998,"ChaosUpdate");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosUpdateLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosUpdateLLM,1> *)
                     &StatPtr_STAT_ChaosUpdateLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_980);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x51];
  LLMGetTagUniqueName((ELLMTag)&local_1838);
  ::FName::ToString(&local_1838,&local_258);
  local_1248 = local_258.Base;
  iStack_1240 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_123c;
  local_1b78.Size = iStack_1240;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_978);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_970,"ChaosActor");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosActorLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosActorLLM,1> *)
                     &StatPtr_STAT_ChaosActorLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_958);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x52];
  LLMGetTagUniqueName((ELLMTag)&local_1830);
  ::FName::ToString(&local_1830,&local_258);
  local_1238 = local_258.Base;
  iStack_1230 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_122c;
  local_1b78.Size = iStack_1230;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_950);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_948,"ChaosBody");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosBodyLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosBodyLLM,1> *)
                     &StatPtr_STAT_ChaosBodyLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_930);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x53];
  LLMGetTagUniqueName((ELLMTag)&local_1828);
  ::FName::ToString(&local_1828,&local_258);
  local_1228 = local_258.Base;
  iStack_1220 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_121c;
  local_1b78.Size = iStack_1220;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_928);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_920,"ChaosConstraint");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosConstraintLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosConstraintLLM,1> *)
                     &StatPtr_STAT_ChaosConstraintLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_908);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x54];
  LLMGetTagUniqueName((ELLMTag)&local_1820);
  ::FName::ToString(&local_1820,&local_258);
  local_1218 = local_258.Base;
  iStack_1210 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_120c;
  local_1b78.Size = iStack_1210;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName(Untagged);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_8f8,"ChaosMaterial");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosMaterialLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosMaterialLLM,1> *)
                     &StatPtr_STAT_ChaosMaterialLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ChaosSummaryLLM,1> *)
                     &StatPtr_STAT_ChaosSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_8e0);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x55];
  LLMGetTagUniqueName((ELLMTag)&local_1818);
  ::FName::ToString(&local_1818,&local_258);
  local_1208 = local_258.Base;
  iStack_1200 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_11fc;
  local_1b78.Size = iStack_1200;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_8d8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_8d0,"EnginePreInit");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EnginePreInitLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EnginePreInitLLM,1> *)
                     &StatPtr_STAT_EnginePreInitLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x56];
  LLMGetTagUniqueName((ELLMTag)&local_1810);
  ::FName::ToString(&local_1810,&local_258);
  local_11f8 = local_258.Base;
  iStack_11f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_11ec;
  local_1b78.Size = iStack_11f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_8b8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_8b0,"EngineInit");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineInitLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineInitLLM,1> *)
                     &StatPtr_STAT_EngineInitLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x57];
  LLMGetTagUniqueName((ELLMTag)&local_1808);
  ::FName::ToString(&local_1808,&local_258);
  local_11e8 = local_258.Base;
  iStack_11e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_11dc;
  local_1b78.Size = iStack_11e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_898);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_890,"RenderingThread");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_RenderingThreadLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_RenderingThreadLLM,1> *)
                     &StatPtr_STAT_RenderingThreadLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x58];
  LLMGetTagUniqueName(Untagged);
  ::FName::ToString(&local_1800,&local_258);
  local_11d8 = local_258.Base;
  iStack_11d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_11cc;
  local_1b78.Size = iStack_11d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_878);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_870,"LoadMapMisc");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_LoadMapMiscLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_LoadMapMiscLLM,1> *)
                     &StatPtr_STAT_LoadMapMiscLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x59];
  LLMGetTagUniqueName((ELLMTag)&local_17f8);
  ::FName::ToString(&local_17f8,&local_258);
  local_11c8 = local_258.Base;
  iStack_11c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_11bc;
  local_1b78.Size = iStack_11c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_858);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_850,"StreamingManager");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_StreamingManagerLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_StreamingManagerLLM,1> *)
                     &StatPtr_STAT_StreamingManagerLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x5a];
  LLMGetTagUniqueName((ELLMTag)&local_17f0);
  ::FName::ToString(&local_17f0,&local_258);
  local_11b8 = local_258.Base;
  iStack_11b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_11ac;
  local_1b78.Size = iStack_11b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_838);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_830,"Graphics");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_GraphicsPlatformLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_GraphicsPlatformLLM,1> *)
                     &StatPtr_STAT_GraphicsPlatformLLM);
  local_1ae0 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x5b];
  LLMGetTagUniqueName((ELLMTag)&local_17e8);
  ::FName::ToString(&local_17e8,&local_258);
  local_11a8 = local_258.Base;
  iStack_11a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_119c;
  local_1b78.Size = iStack_11a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_820);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_818,"FileSystem");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_FileSystemLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_FileSystemLLM,1> *)
                     &StatPtr_STAT_FileSystemLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x5c];
  LLMGetTagUniqueName((ELLMTag)&local_17e0);
  ::FName::ToString(&local_17e0,&local_258);
  local_1198 = local_258.Base;
  iStack_1190 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_118c;
  local_1b78.Size = iStack_1190;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName(Untagged);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_7f8,"Localization");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_LocalizationLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_LocalizationLLM,1> *)
                     &StatPtr_STAT_LocalizationLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x5d];
  LLMGetTagUniqueName((ELLMTag)&local_17d8);
  ::FName::ToString(&local_17d8,&local_258);
  local_1188 = local_258.Base;
  iStack_1180 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_117c;
  local_1b78.Size = iStack_1180;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_7e0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_7d8,"AssetRegistry");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_AssetRegistryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_AssetRegistryLLM,1> *)
                     &StatPtr_STAT_AssetRegistryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x5e];
  LLMGetTagUniqueName((ELLMTag)&local_17d0);
  ::FName::ToString(&local_17d0,&local_258);
  local_1178 = local_258.Base;
  iStack_1170 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_116c;
  local_1b78.Size = iStack_1170;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_510);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_7b8,"ConfigSystem");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ConfigSystemLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ConfigSystemLLM,1> *)
                     &StatPtr_STAT_ConfigSystemLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x5f];
  LLMGetTagUniqueName((ELLMTag)&local_17c8);
  ::FName::ToString(&local_17c8,&local_258);
  local_1168 = local_258.Base;
  iStack_1160 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_115c;
  local_1b78.Size = iStack_1160;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_7a0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_798,"InitUObject");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_InitUObjectLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_InitUObjectLLM,1> *)
                     &StatPtr_STAT_InitUObjectLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x60];
  LLMGetTagUniqueName((ELLMTag)&local_17c0);
  ::FName::ToString(&local_17c0,&local_258);
  local_1158 = local_258.Base;
  iStack_1150 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_114c;
  local_1b78.Size = iStack_1150;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_780);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_778,"VideoRecording");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_VideoRecordingLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_VideoRecordingLLM,1> *)
                     &StatPtr_STAT_VideoRecordingLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x61];
  LLMGetTagUniqueName((ELLMTag)&local_17b8);
  ::FName::ToString(&local_17b8,&local_258);
  local_1148 = local_258.Base;
  iStack_1140 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_113c;
  local_1b78.Size = iStack_1140;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_760);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_758,"Replays");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ReplaysLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ReplaysLLM,1> *)&StatPtr_STAT_ReplaysLLM
                    );
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_NetworkingSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_NetworkingSummaryLLM,1> *)
                     &StatPtr_STAT_NetworkingSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_740);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x62];
  LLMGetTagUniqueName((ELLMTag)&local_17b0);
  ::FName::ToString(&local_17b0,&local_258);
  local_1138 = local_258.Base;
  iStack_1130 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_112c;
  local_1b78.Size = iStack_1130;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_738);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_730,"MaterialInstance");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MaterialInstanceLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MaterialInstanceLLM,1> *)
                     &StatPtr_STAT_MaterialInstanceLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[99];
  LLMGetTagUniqueName((ELLMTag)&local_17a8);
  ::FName::ToString(&local_17a8,&local_258);
  local_1128 = local_258.Base;
  iStack_1120 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_111c;
  local_1b78.Size = iStack_1120;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_718);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(&local_710,"SkeletalMesh");
  pFVar1->DisplayName = *pFVar3;
  FVar8 = StatPtr_STAT_SkeletalMeshLLM;
  if (StatPtr_STAT_SkeletalMeshLLM == (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshLLM>)0x0) {
    pFVar3 = ::FName::FName(&local_708,"STAT_SkeletalMeshLLM");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshLLM,*pFVar3,
                       L"SkeletalMesh","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
                       ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_1b78.DataPtr = *(wchar_t **)FVar8;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  FVar9 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar3 = ::FName::FName(&local_700,"STAT_EngineSummaryLLM");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar3,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_1b78.DataPtr = *(wchar_t **)FVar9;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_6f8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[100];
  LLMGetTagUniqueName((ELLMTag)&local_17a0);
  ::FName::ToString(&local_17a0,&local_258);
  local_1118 = local_258.Base;
  iStack_1110 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_110c;
  local_1b78.Size = iStack_1110;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_6f0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_6e8,"InstancedMesh");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_InstancedMeshLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_InstancedMeshLLM,1> *)
                     &StatPtr_STAT_InstancedMeshLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_6d0);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x65];
  LLMGetTagUniqueName((ELLMTag)&local_1798);
  ::FName::ToString(&local_1798,&local_258);
  local_1108 = local_258.Base;
  iStack_1100 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_10fc;
  local_1b78.Size = iStack_1100;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_6c8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_6c0,"Landscape");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_LandscapeLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_LandscapeLLM,1> *)
                     &StatPtr_STAT_LandscapeLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_6a8);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x66];
  LLMGetTagUniqueName((ELLMTag)&local_1790);
  ::FName::ToString(&local_1790,&local_258);
  local_10f8 = local_258.Base;
  iStack_10f0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_10ec;
  local_1b78.Size = iStack_10f0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_6a0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_698,"CsvProfiler");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_CsvProfilerLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_CsvProfilerLLM,1> *)
                     &StatPtr_STAT_CsvProfilerLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_EngineSummaryLLM,1> *)
                     &StatPtr_STAT_EngineSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x67];
  LLMGetTagUniqueName((ELLMTag)&local_1788);
  ::FName::ToString(&local_1788,&local_258);
  local_10e8 = local_258.Base;
  iStack_10e0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_10dc;
  local_1b78.Size = iStack_10e0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_680);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_678,"MediaStreaming");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingLLM,1> *)
                     &StatPtr_STAT_MediaStreamingLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingSummaryLLM,1> *)
                     &StatPtr_STAT_MediaStreamingSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x68];
  LLMGetTagUniqueName((ELLMTag)&local_1780);
  ::FName::ToString(&local_1780,&local_258);
  local_10d8 = local_258.Base;
  iStack_10d0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_10cc;
  local_1b78.Size = iStack_10d0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_660);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_658,"ElectraPlayer");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_ElectraPlayerLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ElectraPlayerLLM,1> *)
                     &StatPtr_STAT_ElectraPlayerLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingSummaryLLM,1> *)
                     &StatPtr_STAT_MediaStreamingSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_640);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x69];
  LLMGetTagUniqueName((ELLMTag)&local_1778);
  ::FName::ToString(&local_1778,&local_258);
  local_10c8 = local_258.Base;
  iStack_10c0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_10bc;
  local_1b78.Size = iStack_10c0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_638);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_630,"WMFPlayer");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_WMFPlayerLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_WMFPlayerLLM,1> *)
                     &StatPtr_STAT_WMFPlayerLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingSummaryLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_MediaStreamingSummaryLLM,1> *)
                     &StatPtr_STAT_MediaStreamingSummaryLLM);
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->SummaryStatName = (FName)local_1b78.DataPtr;
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_618);
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,*(FName *)FVar2);
  pFVar1 = this->TagDataEnumMap[0x6a];
  LLMGetTagUniqueName((ELLMTag)&local_1770);
  ::FName::ToString(&local_1770,&local_258);
  local_10b8 = local_258.Base;
  iStack_10b0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_10ac;
  local_1b78.Size = iStack_10b0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_610);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_608,"MMIO");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformMMIOLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformMMIOLLM,1> *)
                     &StatPtr_STAT_PlatformMMIOLLM);
  local_1ad8 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x6b];
  LLMGetTagUniqueName((ELLMTag)&local_1768);
  ::FName::ToString(&local_1768,&local_258);
  local_10a8 = local_258.Base;
  iStack_10a0 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_109c;
  local_1b78.Size = iStack_10a0;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_5f8);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_5f0,"Virtual Memory");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_PlatformVMLLM,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PlatformVMLLM,1> *)
                     &StatPtr_STAT_PlatformVMLLM);
  local_1ad0 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  pFVar1 = this->TagDataEnumMap[0x6c];
  LLMGetTagUniqueName((ELLMTag)&local_1760);
  ::FName::ToString(&local_1760,&local_258);
  local_1098 = local_258.Base;
  iStack_1090 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  local_1b78._12_4_ = uStack_108c;
  local_1b78.Size = iStack_1090;
  local_1b78.DataPtr = local_258.Base;
  UE::LLMPrivate::ValidateUniqueName(&local_1b78);
  FVar2 = LLMGetTagUniqueName((ELLMTag)local_5e0);
  pFVar1->Name = *(FName *)FVar2;
  pFVar3 = ::FName::FName(local_5d8,"CustomName");
  pFVar1->DisplayName = *pFVar3;
  TVar7 = FThreadSafeStaticStatInner<FStat_STAT_CustomName,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_CustomName,1> *)&StatPtr_STAT_CustomName
                    );
  local_1ac8 = 0;
  local_1b78.DataPtr = *(wchar_t **)(TVar7.StatIdPtr)->Name;
  pFVar1->StatName = (FName)local_1b78.DataPtr;
  (pFVar1->SummaryStatName).ComparisonIndex = 0;
  (pFVar1->SummaryStatName).Number = 0;
  UE::LLMPrivate::FTagData::SetParentName(pFVar1,(FName)0x0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// IsTagSetActive @ 1416b0d10

bool __thiscall FLowLevelMemTracker::IsTagSetActive(FLowLevelMemTracker *this,ELLMTagSet param_1)

{
  if (EnabledState == Disabled) {
    return false;
  }
  BootstrapInitialise(this);
  return this->ActiveSets[param_1];
}

// OnLowLevelAlloc @ 1416b4fc0

void __thiscall
FLowLevelMemTracker::OnLowLevelAlloc
          (FLowLevelMemTracker *this,ELLMTracker param_1,void *param_2,ulong64 param_3,FName param_4
          ,ELLMAllocType param_5,bool param_6)

{
  FLLMTracker *this_00;
  FLLMThreadState *this_01;
  FTagData *pFVar1;
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    this_00 = this->Trackers[param_1];
    this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    pFVar1 = UE::LLMPrivate::FLLMThreadState::GetTopTag(this_01,None);
    if (pFVar1 == (FTagData *)0x0) {
      pFVar1 = FindOrAddTagData(this_00->LLMRef,param_4,None,(FName)0x0,FunctionAPI);
    }
    UE::LLMPrivate::FLLMTracker::TrackAllocation
              (this_00,param_2,param_3,pFVar1,param_5,this_01,param_6);
  }
  return;
}

// OnLowLevelAlloc @ 1416b5070

void __thiscall
FLowLevelMemTracker::OnLowLevelAlloc
          (FLowLevelMemTracker *this,ELLMTracker param_1,void *param_2,ulong64 param_3,
          ELLMTag param_4,ELLMAllocType param_5,bool param_6)

{
  FLLMTracker *this_00;
  FLLMThreadState *this_01;
  FTagData *pFVar1;
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    this_00 = this->Trackers[param_1];
    this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    pFVar1 = UE::LLMPrivate::FLLMThreadState::GetTopTag(this_01,None);
    if (pFVar1 == (FTagData *)0x0) {
      pFVar1 = FindOrAddTagData(this_00->LLMRef,param_4,FunctionAPI);
    }
    UE::LLMPrivate::FLLMTracker::TrackAllocation
              (this_00,param_2,param_3,pFVar1,param_5,this_01,param_6);
  }
  return;
}

// OnLowLevelAllocMoved @ 1416b5120

void __thiscall
FLowLevelMemTracker::OnLowLevelAllocMoved
          (FLowLevelMemTracker *this,ELLMTracker param_1,void *param_2,void *param_3,
          ELLMAllocType param_4)

{
  FLLMTracker *this_00;
  bool bVar1;
  bool bVar2;
  FLLMThreadState *pFVar3;
  FTagData *this_01;
  PointerKey local_38;
  Values local_30;
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    bVar1 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
            ::__l2::bValue;
    this_00 = this->Trackers[param_1];
    local_38.Pointer = (longlong)param_3 << 0x10;
    local_30.Key.Pointer = 0;
    local_30.Value2.Tag[0] = -1;
    local_30.Value2.Tag[1] = -1;
    if (0xfffffffffffe < (longlong)param_3 - 1U) {
      `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
      ::__l2::bValue = false;
      UE::LLMPrivate::HandleAssert(bVar1,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
    }
    bVar2 = LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>
            ::Remove(&this_00->AllocationMap,&local_38,&local_30);
    bVar1 = `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
            ::__l2::bValue;
    if (bVar2) {
      local_38.Pointer = local_30.Key.Pointer & 0xffff | (longlong)param_2 << 0x10;
      if (0xfffffffffffe < (longlong)param_2 - 1U) {
        `bool___cdecl_UE::LLMPrivate::TrueOnFirstCallOnly<`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_>(`public:___cdecl_PointerKey::PointerKey(void_const*___ptr64,unsigned_short)___ptr64'::`2'::<lambda_1>_const&___ptr64)'
        ::__l2::bValue = false;
        UE::LLMPrivate::HandleAssert(bVar1,L"LLM ensure failed: %s [File:%s] [Line: %d]\r\n");
      }
      LLMMap<PointerKey,unsigned_int,UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo,unsigned_int>::
      Add(&this_00->AllocationMap,&local_38,&local_30.Value1,&local_30.Value2);
      pFVar3 = UE::LLMPrivate::FLLMTracker::GetState(this_00);
      if ((GIsRequestingExit == false) &&
         ((pFVar3 == (FLLMThreadState *)0x0 ||
          ((pFVar3->PausedCounter[0] < '\x01' && (pFVar3->PausedCounter[(int)param_4] < '\x01'))))))
      {
        this_01 = UE::LLMPrivate::FLLMTracker::FLowLevelAllocInfo::GetTag
                            (&local_30.Value2,this_00->LLMRef,None);
        UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
        if (this_01 != (FTagData *)0x0) {
          UE::LLMPrivate::FTagData::GetContainingEnum(this_01);
        }
      }
    }
  }
  return;
}

// OnLowLevelChangeInMemoryUse @ 1416b52b0

void __thiscall
FLowLevelMemTracker::OnLowLevelChangeInMemoryUse
          (FLowLevelMemTracker *this,ELLMTracker param_1,long64 param_2,FName param_3,
          ELLMAllocType param_4)

{
  FLLMTracker *this_00;
  FLLMThreadState *this_01;
  FTagData *pFVar1;
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    this_00 = this->Trackers[param_1];
    this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    pFVar1 = UE::LLMPrivate::FLLMThreadState::GetTopTag(this_01,None);
    if (pFVar1 == (FTagData *)0x0) {
      pFVar1 = FindOrAddTagData(this_00->LLMRef,param_3,None,(FName)0x0,FunctionAPI);
    }
    UE::LLMPrivate::FLLMTracker::TrackMemoryOfActiveTag(this_00,param_2,pFVar1,param_4,this_01);
  }
  return;
}

// OnLowLevelChangeInMemoryUse @ 1416b5350

void __thiscall
FLowLevelMemTracker::OnLowLevelChangeInMemoryUse
          (FLowLevelMemTracker *this,ELLMTracker param_1,long64 param_2,ELLMTag param_3,
          ELLMAllocType param_4)

{
  FLLMTracker *this_00;
  FLLMThreadState *this_01;
  FTagData *pFVar1;
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    this_00 = this->Trackers[param_1];
    this_01 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_00);
    pFVar1 = UE::LLMPrivate::FLLMThreadState::GetTopTag(this_01,None);
    if (pFVar1 == (FTagData *)0x0) {
      pFVar1 = FindOrAddTagData(this_00->LLMRef,param_3,FunctionAPI);
    }
    UE::LLMPrivate::FLLMTracker::TrackMemoryOfActiveTag(this_00,param_2,pFVar1,param_4,this_01);
  }
  return;
}

// OnLowLevelFree @ 1416b53f0

void __thiscall
FLowLevelMemTracker::OnLowLevelFree
          (FLowLevelMemTracker *this,ELLMTracker param_1,void *param_2,ELLMAllocType param_3,
          bool param_4)

{
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    if (param_2 != (void *)0x0) {
      UE::LLMPrivate::FLLMTracker::TrackFree(this->Trackers[param_1],param_2,param_3,param_4);
    }
  }
  return;
}

// OnPreFork @ 1416b5530

void __thiscall FLowLevelMemTracker::OnPreFork(FLowLevelMemTracker *this)

{
  FLLMTracker *pFVar1;
  FLLMTracker *pFVar2;
  FArchive *pFVar3;
  
  if (EnabledState != Disabled) {
    pFVar1 = this->Trackers[0];
    pFVar2 = this->Trackers[1];
    pFVar3 = (pFVar2->CsvWriter).Archive;
    if (pFVar3 != (FArchive *)0x0) {
      (**(code **)(*(longlong *)pFVar3 + 0x208))();
      pFVar3 = (pFVar2->CsvWriter).Archive;
      if (pFVar3 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
      (pFVar2->CsvWriter).Archive = (FArchive *)0x0;
    }
    pFVar3 = (pFVar1->CsvWriter).Archive;
    if (pFVar3 != (FArchive *)0x0) {
      (**(code **)(*(longlong *)pFVar3 + 0x208))();
      pFVar3 = (pFVar1->CsvWriter).Archive;
      if (pFVar3 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
      (pFVar1->CsvWriter).Archive = (FArchive *)0x0;
    }
  }
  return;
}

// ProcessCommandLine @ 1416b6a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLowLevelMemTracker::ProcessCommandLine(FLowLevelMemTracker *this,wchar_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  bool bVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  undefined8 local_res8;
  int local_res18 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FCsvProfiler::SetMetadata(L"LLM",L"0");
  bVar4 = FParse::Param(param_1,L"LLM");
  bVar4 = !bVar4;
  bVar5 = FParse::Param(param_1,L"LLMCSV");
  bVar10 = (bool)((byte)((uint)MemTagChannel->Enabled >> 0x1f) ^ 1);
  if (bVar5) {
    if (bVar10 != false) goto LAB_1416b6b05;
  }
  else {
    if (bVar10 == false) goto LAB_1416b6b24;
LAB_1416b6b05:
    if (4 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
  }
  bVar4 = false;
LAB_1416b6b24:
  bVar6 = FParse::Param(param_1,L"LLMDISABLEAUTOPUBLISH");
  this->bAutoPublish = !bVar6;
  if (this->bCanEnable == false) {
    if (EnabledState != Disabled) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if (bIsDisabled == false) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    if ((!bVar4) && (4 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      return;
    }
  }
  else {
    if (bVar4) {
      if (EnabledState != Disabled) {
        EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
        TickInternal(this);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
      }
      EnabledState = Disabled;
      bIsDisabled = true;
      this->bCsvWriterEnabled = false;
      this->bTraceWriterEnabled = false;
      this->bCanEnable = false;
      Clear(this);
    }
    else {
      FCsvProfiler::SetMetadata(L"LLM",L"1");
      EnabledState = Enabled;
      bIsDisabled = false;
      this->bCsvWriterEnabled = bVar5;
      this->bTraceWriterEnabled = bVar10;
      FinishInitialise(this);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      bVar4 = FParse::Value(param_1,L"LLMTAGSETS=",&local_78,false,(wchar_t **)0x0);
      if (bVar4) {
        local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0;
        ::FString::ParseIntoArray(&local_78,&local_88,L",",true);
        iVar3 = local_88.ArrayNum;
        pFVar12 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x10;
        FVar11.Data = local_88.AllocatorInstance.Data;
        while( true ) {
          if (local_88.ArrayNum != iVar3) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (FVar11.Data == pFVar12) break;
          if (*(int *)(FVar11.Data + 8) == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)FVar11.Data;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp(pwVar9,L"UObjectClasses");
          if (iVar7 == 0) {
            this->ActiveSets[3] = true;
          }
          FVar11.Data = FVar11.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
      local_res18[0] = 0;
      bVar4 = FParse::Value(param_1,L"LLMTrackPeaks=",local_res18);
      lVar2 = CVarLLMTrackPeaks._padding_;
      if (bVar4) {
        local_res8 = 0;
        local_50 = 0;
        local_58 = 0xe000000;
        local_54 = 0;
        local_48 = 0;
        local_44 = 0xf000000;
        local_40 = 0x1000000;
        ::FString::PrintfImpl(&local_68,L"%d");
        lVar1 = *(longlong *)lVar2;
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar11.Data = local_68.Data.AllocatorInstance.Data;
        }
        uVar8 = (**(code **)(lVar1 + 0xa8))(lVar2,&local_88,&local_58);
        (**(code **)(lVar1 + 0xb0))(lVar2,FVar11.Data,uVar8);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      if (4 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      bVar4 = FParse::Param(param_1,L"DetectHitchesWithLLM");
      if (!bVar4) {
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddLambda<_FLowLevelMemTracker::ProcessCommandLine_::__l101::<lambda_2>_>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnPostEngineInit,(<lambda_2> *)&local_res8);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    LOCK();
    this->bConfigurationComplete = (atomic<bool>)0x1;
    UNLOCK();
  }
  return;
}

// PublishDataPerFrame @ 1416b8540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall FLowLevelMemTracker::PublishDataPerFrame(FLowLevelMemTracker *this,wchar_t *param_1)

{
  FName FVar1;
  uchar auVar2 [8];
  FLLMTracker *this_00;
  FLLMTracker *this_01;
  ESizeParams EVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_LLMOverheadTotal> FVar7;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FCsvProfiler *this_04;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FName local_res10;
  FStatMessage local_38;
  
  FVar7 = StatPtr_STAT_LLMOverheadTotal;
  if (StatPtr_STAT_LLMOverheadTotal == (FThreadSafeStaticStat<FStat_STAT_LLMOverheadTotal>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_LLMOverheadTotal");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_LLMOverheadTotal>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LLMOverheadTotal,*pFVar6,
                       L"LLM Overhead","STATGROUP_LLMOverhead","STATCAT_Advanced",L"LLM Overhead",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar7;
  auVar2 = (uchar  [8])this->MemoryUsageCurrentOverhead;
  local_res10 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res10 = FVar1;
    local_38.StatData.Pad = auVar2;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_02,&local_38);
    FStatsTrace::Set(&local_res10,(long64)auVar2);
    if (this_02->ScopeCount == 0) {
      FThreadStats::Flush(this_02,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_02,false,false);
    }
  }
  pTVar4 = CVarLLMTrackPeaks.Ref;
  if (EnabledState == Disabled) goto LAB_1416b88a6;
  this_00 = this->Trackers[1];
  this_01 = this->Trackers[0];
  bVar5 = IsInParallelGameThread();
  lVar10 = 0;
  if (bVar5) {
LAB_1416b86e7:
    lVar9 = lVar10;
  }
  else {
    bVar5 = IsInGameThread();
    lVar9 = 4;
    if (bVar5) goto LAB_1416b86e7;
  }
  bVar5 = *(int *)((longlong)pTVar4->ShadowedValue + lVar9) != 0;
  EVar3 = bVar5 | RelativeToSnapshot;
  if (this->bCapturedSizeSnapshot == false) {
    EVar3 = bVar5;
  }
  UE::LLMPrivate::FLLMTracker::PublishStats(this_00,EVar3);
  UE::LLMPrivate::FLLMTracker::PublishStats(this_01,EVar3);
  if (this->bCsvWriterEnabled != false) {
    UE::LLMPrivate::FLLMTracker::PublishCsv(this_00,EVar3);
    UE::LLMPrivate::FLLMTracker::PublishCsv(this_01,EVar3);
  }
  if (this->bTraceWriterEnabled != false) {
    UE::LLMPrivate::FLLMTraceWriter::Publish
              (&this_00->TraceWriter,this_00->LLMRef,&this_00->TagSizes,
               this_00->OverrideTrackedTotalTagData,this_00->OverrideUntaggedTagData,
               this_00->TrackedTotal,EVar3 & ~RelativeToSnapshot);
    UE::LLMPrivate::FLLMTraceWriter::Publish
              (&this_01->TraceWriter,this_01->LLMRef,&this_01->TagSizes,
               this_01->OverrideTrackedTotalTagData,this_01->OverrideUntaggedTagData,
               this_01->TrackedTotal,EVar3 & ~RelativeToSnapshot);
  }
  this_04 = FCsvProfiler::Get();
  bVar5 = FCsvProfiler::IsCapturing(this_04);
  if (bVar5) {
    lVar9 = this_00->TrackedTotal;
    if ((EVar3 & RelativeToSnapshot) != Default) {
      lVar9 = this_00->TrackedTotal - this_00->TrackedTotalInSnapshot;
      lVar8 = 0x7fffffffffffffff;
      if (lVar9 < 0x7fffffffffffffff) {
        lVar8 = lVar9;
      }
      lVar9 = lVar10;
      if (0 < lVar8) {
        lVar9 = lVar8;
      }
    }
    UE::LLMPrivate::FLLMCsvProfilerWriter::Publish
              (&this_00->CsvProfilerWriter,this_00->LLMRef,&this_00->TagSizes,
               this_00->OverrideTrackedTotalTagData,this_00->OverrideUntaggedTagData,lVar9,EVar3);
    lVar9 = this_01->TrackedTotal;
    if ((EVar3 & RelativeToSnapshot) != Default) {
      lVar9 = this_01->TrackedTotal - this_01->TrackedTotalInSnapshot;
      lVar8 = 0x7fffffffffffffff;
      if (lVar9 < 0x7fffffffffffffff) {
        lVar8 = lVar9;
      }
      lVar9 = lVar10;
      if (0 < lVar8) {
        lVar9 = lVar8;
      }
    }
    UE::LLMPrivate::FLLMCsvProfilerWriter::Publish
              (&this_01->CsvProfilerWriter,this_01->LLMRef,&this_01->TagSizes,
               this_01->OverrideTrackedTotalTagData,this_01->OverrideUntaggedTagData,lVar9,EVar3);
  }
LAB_1416b88a6:
  if (param_1 != (wchar_t *)0x0) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"---> Untracked memory at %s = %.2f mb\n");
  }
  return;
}

// PublishDataSingleFrame @ 1416b8910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLowLevelMemTracker::PublishDataSingleFrame(FLowLevelMemTracker *this)

{
  if (this->bAutoPublish == false) {
    this->bPublishSingleFrame = true;
  }
  else if (1 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    return;
  }
  return;
}

// RegisterCustomTagInternal @ 1416bb3d0

void __thiscall
FLowLevelMemTracker::RegisterCustomTagInternal
          (FLowLevelMemTracker *this,int param_1,ELLMTagSet param_2,wchar_t *param_3,FName param_4,
          FName param_5,int param_6)

{
  FName FVar1;
  FName FVar2;
  wchar_t *pwVar3;
  undefined8 local_res20;
  FName local_28 [2];
  
  if (0x90 < param_1 - 0x6fU) {
    UE::LLMPrivate::HandleAssert
              (true,L"LLM check failed: %s [File:%s] [Line: %d]\r\nTag %d out of range\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if (param_3 == (wchar_t *)0x0) {
    UE::LLMPrivate::HandleAssert
              (true,L"LLM check failed: %s [File:%s] [Line: %d]\r\nTag %d has no name\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if ((param_6 != -1) && (0xff < (uint)param_6)) {
    UE::LLMPrivate::HandleAssert
              (true,L"LLM check failed: %s [File:%s] [Line: %d]\r\nParent tag %d out of range\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  pwVar3 = InvalidLLMTagName;
  if (param_3 != (wchar_t *)0x0) {
    pwVar3 = param_3;
  }
  ::FName::FName(local_28,pwVar3);
  if (param_6 < 0) {
    local_res20 = 0;
    FVar1 = (FName)&local_res20;
  }
  else {
    FVar1 = LLMGetTagUniqueName((ELLMTag)&local_res20);
  }
  FVar1 = *(FName *)FVar1;
  FVar2 = LLMGetTagUniqueName((ELLMTag)&local_res20);
  RegisterTagData(this,*(FName *)FVar2,local_28[0],FVar1,param_4,param_5,true,(ELLMTag)param_1,false
                  ,CustomEnumTag,param_2);
  return;
}

// RegisterPlatformTag @ 1416bb570

void __thiscall
FLowLevelMemTracker::RegisterPlatformTag
          (FLowLevelMemTracker *this,int param_1,wchar_t *param_2,FName param_3,FName param_4,
          int param_5)

{
  MemoryTrace_AnnounceCustomTag(param_1,param_5,param_2);
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    if (0x26 < param_1 - 0x6fU) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    RegisterCustomTagInternal(this,param_1,None,param_2,param_3,param_4,param_5);
  }
  return;
}

// RegisterProjectTag @ 1416bb640

void __thiscall
FLowLevelMemTracker::RegisterProjectTag
          (FLowLevelMemTracker *this,int param_1,wchar_t *param_2,FName param_3,FName param_4,
          int param_5)

{
  MemoryTrace_AnnounceCustomTag(param_1,param_5,param_2);
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    if (0x69 < param_1 - 0x96U) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
    }
    RegisterCustomTagInternal(this,param_1,None,param_2,param_3,param_4,param_5);
  }
  return;
}

// RegisterTagData @ 1416bb710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTagData * __thiscall
FLowLevelMemTracker::RegisterTagData
          (FLowLevelMemTracker *this,FName param_1,FName param_2,FName param_3,FName param_4,
          FName param_5,bool param_6,ELLMTag param_7,bool param_8,ETagReferenceSource param_9,
          ELLMTagSet param_10)

{
  FTagDataNameMap *this_00;
  FTagData *pFVar1;
  FTagDataArray *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  FName *pFVar10;
  FName FVar11;
  FTagData **ppFVar12;
  FTagData **ppFVar13;
  FTagData *pFVar14;
  FName local_res10;
  FName local_res20;
  undefined1 auStack_468 [32];
  FTagData **local_448;
  FTagData **local_440;
  FTagData **local_438;
  longlong local_430;
  undefined8 local_428;
  FTagData *local_418;
  FTagDataNameKey local_410;
  FTagData *local_400;
  FTagDataNameKey local_3f8;
  FTagData **local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  FTagData **local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  FName local_3c8 [2];
  FName local_3b8 [2];
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TStringBuilderBase<wchar_t> local_388;
  FTagData *local_368 [64];
  TStringBuilderBase<wchar_t> local_168;
  FTagData *local_148 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_468;
  local_res10 = param_1;
  local_res20 = param_3;
  if (this->bIsBootstrapping != false) {
    local_448 = (FTagData **)CONCAT44(local_448._4_4_,0xb5f);
    UE::LLMPrivate::HandleAssert
              (true,
               L"LLM check failed: %s [File:%s] [Line: %d]\r\nA tag outside of LLM_ENUM_GENERIC_TAGS was requested from LLM_SCOPE or allocation while bootstrapping the names for LLM_ENUM_GENERIC_TAGS, this is not supported.\r\n"
              );
    FWindowsPlatformMisc::RaiseException(1);
  }
  local_388.bIsDynamic = false;
  local_388.bIsExternal = false;
  local_388.End = (wchar_t *)&local_168;
  local_388.Base = (wchar_t *)local_368;
  local_388.CurPos = (wchar_t *)local_368;
  ::FName::ToString(&local_res10,&local_388);
  pFVar14 = (FTagData *)0x0;
  if (param_6) {
    local_3e8 = (FTagData **)local_388.Base;
    iStack_3e0 = (int)((longlong)local_388.CurPos - (longlong)local_388.Base >> 1);
    local_3a8._12_4_ = uStack_3dc;
    local_3a8.Size = iStack_3e0;
    local_3a8.DataPtr = local_388.Base;
    UE::LLMPrivate::ValidateUniqueName(&local_3a8);
    FVar11 = param_2;
    if (param_2 == (FName)0x0) {
      FVar11 = local_res10;
    }
  }
  else {
    FVar11 = local_res10;
    if (param_10 == None) {
      if (param_8) {
        if (param_2 != (FName)0x0) {
          local_448 = (FTagData **)CONCAT44(local_448._4_4_,0xb7c);
          UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        if (local_res20 != (FName)0x0) {
          local_448 = (FTagData **)CONCAT44(local_448._4_4_,0xb7d);
          UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
        }
        FVar11 = local_res10;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::FName::FName(&TagName_CustomName,L"CustomName");
          _Init_thread_footer(&::_TSS0);
          local_res20 = TagName_CustomName;
        }
        else {
          local_res20 = TagName_CustomName;
        }
      }
      else {
        local_3d8 = (FTagData **)local_388.Base;
        iStack_3d0 = (int)((longlong)local_388.CurPos - (longlong)local_388.Base >> 1);
        local_398._12_4_ = uStack_3cc;
        local_398.Size = iStack_3d0;
        local_398.DataPtr = local_388.Base;
        UE::LLMPrivate::ValidateUniqueName(&local_398);
        if (local_388.End < (TStringBuilderBase<wchar_t> *)((longlong)local_388.CurPos + 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_388,1);
        }
        ppFVar12 = (FTagData **)local_388.Base;
        *local_388.CurPos = L'\0';
        pwVar9 = wcsstr(local_388.Base,L"/");
        while (pwVar9 != (wchar_t *)0x0) {
          ppFVar12 = (FTagData **)(pwVar9 + 1);
          pwVar9 = wcsstr((wchar_t *)ppFVar12,L"/");
        }
        if (*(wchar_t *)ppFVar12 == L'\0') {
          if (local_388.End < (TStringBuilderBase<wchar_t> *)((longlong)local_388.CurPos + 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_388,1);
          }
          *local_388.CurPos = L'\0';
          local_440 = (FTagData **)local_388.Base;
          local_448 = (FTagData **)CONCAT44(local_448._4_4_,0xb95);
          UE::LLMPrivate::HandleAssert
                    (true,
                     L"LLM check failed: %s [File:%s] [Line: %d]\r\nInvalid LLM custom name tag \'%s\'. Tag names must not end with /.\r\n"
                    );
          FWindowsPlatformMisc::RaiseException(1);
        }
        if (local_388.End < (TStringBuilderBase<wchar_t> *)((longlong)local_388.CurPos + 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_388,1);
        }
        *local_388.CurPos = L'\0';
        if (ppFVar12 == (FTagData **)local_388.Base) {
          FVar11 = local_res20;
          if (local_res20 == (FName)0x0) {
            FVar11 = GetTagName_CustomName();
            FVar11 = *(FName *)FVar11;
          }
        }
        else {
          if (local_388.End < (TStringBuilderBase<wchar_t> *)((longlong)local_388.CurPos + 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_388,1);
          }
          *local_388.CurPos = L'\0';
          lVar4 = -2 - (longlong)local_388.Base;
          if (local_388.End < (TStringBuilderBase<wchar_t> *)((longlong)local_388.CurPos + 2)) {
            TStringBuilderBase<wchar_t>::Extend(&local_388,1);
          }
          *local_388.CurPos = L'\0';
          pFVar10 = ::FName::FName(local_3c8,(int)((longlong)ppFVar12 + lVar4 >> 1),local_388.Base,
                                   FNAME_Add);
          FVar11 = *pFVar10;
          if ((local_res20 != (FName)0x0) && (local_res20 != FVar11)) {
            local_168.Base = (wchar_t *)local_148;
            local_168.bIsDynamic = false;
            local_168.bIsExternal = false;
            local_168.CurPos = (wchar_t *)local_148;
            local_168.End = (wchar_t *)local_48;
            ::FName::ToString(&local_res20,&local_168);
            if (local_388.End < (TStringBuilderBase<wchar_t> *)((longlong)local_388.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_388,1);
            }
            pwVar9 = local_388.Base;
            *local_388.CurPos = L'\0';
            if (local_168.End < (wchar_t *)((longlong)local_168.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_168,1);
            }
            *local_168.CurPos = 0;
            local_438 = (FTagData **)pwVar9;
            local_440 = (FTagData **)local_168.Base;
            local_448 = (FTagData **)CONCAT44(local_448._4_4_,0xba0);
            UE::LLMPrivate::HandleAssert
                      (true,
                       L"LLM check failed: %s [File:%s] [Line: %d]\r\nInvalid LLM tag: parent supplied in tag declaration is \'%s\', which does not match the parent parsed from the tag unique name \'%s\'\r\n"
                      );
            FWindowsPlatformMisc::RaiseException(1);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
          }
        }
        local_res20 = FVar11;
        FVar11 = param_2;
        if (param_2 == (FName)0x0) {
          pFVar10 = ::FName::FName(local_3b8,(wchar_t *)ppFVar12);
          FVar11 = *pFVar10;
        }
      }
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  FVar5 = local_res10;
  this_00 = this->TagDataNameMap;
  local_410.TagSet = param_10;
  local_400 = (FTagData *)0x0;
  local_410.Name = local_res10;
  uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  ppFVar12 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
             ::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
                       ((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                         *)this_00,(uint)local_410.TagSet * 0x65 + uVar7 + FVar5.Number,&local_410,
                        &local_400);
  pFVar1 = *ppFVar12;
  if (pFVar1 != (FTagData *)0x0) {
    FVar11 = (FName)(pFVar1->field2_0x10).Parent;
    if (pFVar1->bParentIsName == false) {
      if (FVar11 == (FName)0x0) {
        FVar11.ComparisonIndex.Value = 0;
        FVar11.Number = 0;
      }
      else {
        FVar11 = *(FName *)FVar11;
      }
    }
    if ((((((local_res20 != FVar11) || (param_4 != pFVar1->StatName)) ||
          (param_5 != pFVar1->SummaryStatName)) || (param_6 != pFVar1->bHasEnumTag)) ||
        ((param_6 && (param_7 != pFVar1->EnumTag)))) &&
       (((param_9 & ~ImplicitParent) != Scope || (param_9 == Declare)))) {
      ReportDuplicateTagName(this,pFVar1,param_9);
    }
    pFVar14 = *ppFVar12;
    goto LAB_1416bbe93;
  }
  if (local_res20 == (FName)0x0) {
LAB_1416bbd16:
    local_418 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
    local_418->Name = local_res10;
    local_418->StatName = param_4;
    local_418->DisplayName = FVar11;
    local_418->SummaryStatName = param_5;
    local_418->ReferenceSource = param_9;
    local_418->EnumTag = param_7;
    local_418->TagSet = param_10;
    local_418->bIsFinishConstructed = false;
    local_418->bParentIsName = false;
    local_418->bHasEnumTag = param_6;
    local_418->bIsReportable = true;
    (local_418->field2_0x10).Parent = pFVar14;
  }
  else {
    local_3f8.Name = local_res20;
    local_3f8.TagSet = param_10;
    ppFVar13 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
               ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                       *)this->TagDataNameMap,&local_3f8);
    if (ppFVar13 != (FTagData **)0x0) {
      pFVar14 = *ppFVar13;
    }
    if ((local_res20 == (FName)0x0) || (pFVar14 != (FTagData *)0x0)) goto LAB_1416bbd16;
    local_418 = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x40);
    (local_418->field2_0x10).Parent = (FTagData *)local_res20;
    local_418->StatName = param_4;
    local_418->DisplayName = FVar11;
    local_418->SummaryStatName = param_5;
    local_418->ReferenceSource = param_9;
    local_418->Name = local_res10;
    local_418->EnumTag = param_7;
    local_418->TagSet = param_10;
    local_418->bIsFinishConstructed = false;
    local_418->bParentIsName = true;
    local_418->bHasEnumTag = param_6;
    local_418->bIsReportable = true;
  }
  local_418->Index = *(int *)&this->TagDatas->field_0x10;
  pFVar2 = this->TagDatas;
  ppFVar13 = *(FTagData ***)pFVar2;
  if ((ppFVar13 <= &local_418) && (&local_418 < ppFVar13 + *(int *)&pFVar2->field_0x14)) {
    local_430 = (longlong)*(int *)&pFVar2->field_0x10;
    local_428 = 8;
    local_448 = &local_418;
    local_440 = ppFVar13;
    local_438 = (FTagData **)(longlong)*(int *)&pFVar2->field_0x14;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FTagData *)(*pcVar3)();
      return pFVar14;
    }
  }
  iVar8 = *(int *)&pFVar2->field_0x10;
  if (iVar8 == *(int *)&pFVar2->field_0x14) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,(int *)&pFVar2->field_0x14);
  }
  *(int *)&pFVar2->field_0x10 = iVar8 + 1;
  *(FTagData **)(*(longlong *)pFVar2 + (longlong)iVar8 * 8) = local_418;
  *ppFVar12 = local_418;
  if (param_6) {
    ppFVar12 = this->TagDataEnumMap;
    if (ppFVar12[param_7] != (FTagData *)0x0) {
      local_440 = (FTagData **)CONCAT44(local_440._4_4_,(uint)param_7);
      local_448 = (FTagData **)CONCAT44(local_448._4_4_,0xbec);
      UE::LLMPrivate::HandleAssert
                (true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Duplicate copies of enumtag %d\r\n"
                );
      FWindowsPlatformMisc::RaiseException(1);
    }
    ppFVar12[param_7] = local_418;
  }
  this->bTagAdded = true;
  pFVar14 = local_418;
LAB_1416bbe93:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_388);
  return pFVar14;
}

// RegisterTagDeclaration @ 1416bbf30

void __thiscall
FLowLevelMemTracker::RegisterTagDeclaration(FLowLevelMemTracker *this,FLLMTagDeclaration *param_1)

{
  int iVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FName local_res10 [3];
  FString local_18;
  
  ::FString::FString(&local_18,param_1->CPPName);
  iVar1 = iswalpha(0x5f);
  if (iVar1 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(&local_18,L'_',L'/');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(&local_18,L'_',L'/');
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(local_res10,(wchar_t *)FVar3.Data);
  param_1->UniqueName = *pFVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  RegisterTagData(this,param_1->UniqueName,param_1->DisplayName,param_1->ParentTagName,
                  param_1->StatName,param_1->SummaryStatName,false,CustomName,false,Declare,
                  param_1->TagSet);
  return;
}

// ReportDuplicateTagName @ 1416bdca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLowLevelMemTracker::ReportDuplicateTagName
          (FLowLevelMemTracker *this,FTagData *param_1,ETagReferenceSource param_2)

{
  ETagReferenceSource EVar1;
  FName FVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  TStringBuilderBase<wchar_t> *this_00;
  undefined1 auStack_10f8 [32];
  undefined4 local_10d8;
  wchar_t *local_10d0;
  wchar_t *local_10c8;
  wchar_t *local_10c0;
  FName local_10b8;
  FName local_10b0;
  TStringBuilderBase<wchar_t> local_10a8;
  wchar_t local_1088 [1035];
  wchar_t local_872 [5];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x1416bdcc0;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10f8;
  if (((param_2 & ~ImplicitParent) == Scope) && (param_2 != Declare)) {
    local_10b0 = param_1->Name;
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    ::FName::AppendString(&local_10b0,&local_868);
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    local_10d0 = local_868.Base;
    local_10d8 = 0xc00;
    UE::LLMPrivate::HandleAssert
              (true,
               L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Unexpected call to RegisterTagData(%s) from LLM_SCOPE or function call when the tag already exists.\r\n"
              );
    this_00 = &local_868;
  }
  else {
    EVar1 = param_1->ReferenceSource;
    if ((EVar1 == FunctionAPI) || (EVar1 == Scope)) {
      pwVar4 = UE::LLMPrivate::ToString(param_2);
      local_10b8 = param_1->Name;
      local_10a8.Base = local_1088;
      local_10a8.bIsDynamic = false;
      local_10a8.bIsExternal = false;
      local_10a8.CurPos = local_1088;
      local_10a8.End = local_872;
      ::FName::AppendString(&local_10b8,&local_10a8);
      if (local_10a8.End < local_10a8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_10a8,1);
      }
      *local_10a8.CurPos = L'\0';
      local_10d0 = local_10a8.Base;
      local_10d8 = 0xc06;
      local_10c8 = pwVar4;
      UE::LLMPrivate::HandleAssert
                (true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Tag %s parsed from %s after it was already used in an LLM_SCOPE or LLM api call.\r\n"
                );
    }
    else {
      FVar2 = param_1->Name;
      if (EVar1 == ImplicitParent) {
        local_10a8.Base = local_1088;
        local_10a8.CurPos = local_1088;
        local_10a8.bIsDynamic = false;
        local_10a8.bIsExternal = false;
        local_10a8.End = local_872;
        local_10b0 = FVar2;
        ::FName::AppendString(&local_10b0,&local_10a8);
        if (local_10a8.End < local_10a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_10a8,1);
        }
        pwVar4 = local_10a8.Base;
        *local_10a8.CurPos = L'\0';
        pwVar3 = UE::LLMPrivate::ToString(param_2);
        local_10b8 = param_1->Name;
        local_868.Base = local_848;
        local_868.bIsDynamic = false;
        local_868.bIsExternal = false;
        local_868.CurPos = local_848;
        local_868.End = local_32;
        ::FName::AppendString(&local_10b8,&local_868);
        if (local_868.End < local_868.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        }
        *local_868.CurPos = L'\0';
        local_10c0 = pwVar4;
        local_10d0 = local_868.Base;
        local_10d8 = 0xc0e;
        local_10c8 = pwVar3;
        UE::LLMPrivate::HandleAssert
                  (true,
                   L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Tag %s parsed from %s after it was already used as an implicit parent in another tag. Add LLM_DEFINE_TAG(% s) in cpp, or move it to the same module as the child tag using it, so that it will be defined before the child tag tries to use it.\r\n"
                  );
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      }
      else {
        pwVar4 = UE::LLMPrivate::ToString(param_2);
        pwVar3 = UE::LLMPrivate::ToString(EVar1);
        local_10a8.Base = local_1088;
        local_10a8.bIsDynamic = false;
        local_10a8.bIsExternal = false;
        local_10a8.CurPos = local_1088;
        local_10a8.End = local_872;
        local_10b8 = FVar2;
        ::FName::AppendString(&local_10b8,&local_10a8);
        if (local_10a8.End < local_10a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_10a8,1);
        }
        *local_10a8.CurPos = L'\0';
        local_10d0 = local_10a8.Base;
        local_10d8 = 0xc15;
        local_10c8 = pwVar3;
        local_10c0 = pwVar4;
        UE::LLMPrivate::HandleAssert
                  (true,
                   L"LLM check failed: %s [File:%s] [Line: %d]\r\nLLM Error: Multiple occurrences of a unique tag name %s in ELLMTag or LLM_DEFINE_TAG. First occurrence : % s.Second occurrence : % s.\r\n"
                  );
      }
    }
    this_00 = &local_10a8;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(this_00);
  FWindowsPlatformMisc::RaiseException(1);
  return;
}

// SetProgramSize @ 1416c0820

void __thiscall FLowLevelMemTracker::SetProgramSize(FLowLevelMemTracker *this,ulong64 param_1)

{
  FLLMTracker *pFVar1;
  FTagData *pFVar2;
  FLLMThreadState *pFVar3;
  longlong lVar4;
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    lVar4 = param_1 - this->ProgramSize;
    this->ProgramSize = param_1;
    pFVar1 = this->Trackers[0];
    pFVar2 = FindOrAddTagData(pFVar1->LLMRef,ProgramSizePlatform,FunctionAPI);
    pFVar3 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    LOCK();
    pFVar1->TrackedTotal = pFVar1->TrackedTotal + lVar4;
    UNLOCK();
    UE::LLMPrivate::FLLMThreadState::TrackMemory(pFVar3,lVar4,pFVar1->Tracker,System,pFVar2);
    pFVar1 = this->Trackers[1];
    pFVar2 = FindOrAddTagData(pFVar1->LLMRef,ProgramSize,FunctionAPI);
    pFVar3 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar1);
    LOCK();
    pFVar1->TrackedTotal = pFVar1->TrackedTotal + lVar4;
    UNLOCK();
    UE::LLMPrivate::FLLMThreadState::TrackMemory(pFVar3,lVar4,pFVar1->Tracker,System,pFVar2);
  }
  return;
}

// SetTagAmountForTracker @ 1416c0f50

void __thiscall
FLowLevelMemTracker::SetTagAmountForTracker
          (FLowLevelMemTracker *this,ELLMTracker param_1,FName param_2,ELLMTagSet param_3,
          long64 param_4,bool param_5)

{
  uint uVar1;
  FTagData *pFVar2;
  FTrackerTagSizeData *pFVar3;
  FTagData *local_18 [2];
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    pFVar2 = FindOrAddTagData(this,param_2,param_3,(FName)0x0,FunctionAPI);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    uVar1 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_18[0] = pFVar2;
    pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
             ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                       ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                         *)&this->Trackers[param_1]->TagSizes,uVar1 >> 0x10 ^ uVar1,local_18);
    pFVar3->bExternalAddToTotal = param_5;
    pFVar3->ExternalAmount = param_4;
    pFVar3->bExternalValid = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  }
  return;
}

// SetTagAmountForTracker @ 1416c1030

void __thiscall
FLowLevelMemTracker::SetTagAmountForTracker
          (FLowLevelMemTracker *this,ELLMTracker param_1,ELLMTag param_2,long64 param_3,bool param_4
          )

{
  uint uVar1;
  FTagData *pFVar2;
  FTrackerTagSizeData *pFVar3;
  FTagData *local_18 [2];
  
  if (EnabledState != Disabled) {
    BootstrapInitialise(this);
    pFVar2 = FindOrAddTagData(this,param_2,FunctionAPI);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    uVar1 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_18[0] = pFVar2;
    pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
             ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                       ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                         *)&this->Trackers[param_1]->TagSizes,uVar1 >> 0x10 ^ uVar1,local_18);
    pFVar3->bExternalValid = true;
    pFVar3->bExternalAddToTotal = param_4;
    pFVar3->ExternalAmount = param_3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  }
  return;
}

// ShouldReduceThreads @ 1416c1400

bool __thiscall FLowLevelMemTracker::ShouldReduceThreads(FLowLevelMemTracker *this)

{
  return false;
}

// SortTags @ 1416c1860

void __thiscall FLowLevelMemTracker::SortTags(FLowLevelMemTracker *this,FTagDataArray **param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FTagDataArray *pFVar4;
  FTagData **ppFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  <lambda_1> <Var10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 local_res8 [8];
  FTagData *local_38 [2];
  ulonglong uVar15;
  
  *param_1 = this->TagDatas;
  <Var10.LocalTagDatas = UE::LLMPrivate::FLLMAllocator::Alloc(&this->Allocator,0x18);
  uVar12 = 0;
  *(undefined4 *)&(<Var10.LocalTagDatas)->field_0x14 = 0;
  *(undefined8 *)<Var10.LocalTagDatas = 0;
  puVar1 = &(<Var10.LocalTagDatas)->field_0x14;
  *(undefined8 *)&(<Var10.LocalTagDatas)->field_0x8 = 0;
  *(undefined4 *)&(<Var10.LocalTagDatas)->field_0x10 = 0;
  this->TagDatas = <Var10.LocalTagDatas;
  uVar9 = *(uint *)&(*param_1)->field_0x10;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*(int *)puVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,uVar9,(ForAnyElementType *)<Var10.LocalTagDatas,
               *(int *)&(<Var10.LocalTagDatas)->field_0x10,(int *)puVar1);
  }
  pFVar4 = *param_1;
  puVar14 = *(undefined8 **)pFVar4;
  iVar11 = *(int *)&pFVar4->field_0x10;
  puVar2 = puVar14 + iVar11;
  while( true ) {
    if (*(int *)&pFVar4->field_0x10 != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    ppFVar5 = *(FTagData ***)<Var10.LocalTagDatas;
    if (puVar14 == puVar2) break;
    local_38[0] = (FTagData *)*puVar14;
    if (((ppFVar5 <= local_38) && (local_38 < ppFVar5 + *(int *)puVar1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = *(int *)&(<Var10.LocalTagDatas)->field_0x10;
    if (iVar8 == *(int *)puVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)<Var10.LocalTagDatas,(int *)puVar1);
    }
    puVar14 = puVar14 + 1;
    *(int *)&(<Var10.LocalTagDatas)->field_0x10 = iVar8 + 1;
    *(FTagData **)(*(longlong *)<Var10.LocalTagDatas + (longlong)iVar8 * 8) = local_38[0];
  }
  LLMAlgoImpl::
  TopologicalSort<UE::LLMPrivate::FTagData_*,_FLowLevelMemTracker::SortTags_::__l2::<lambda_1>,int>
            (ppFVar5,*(int *)&(<Var10.LocalTagDatas)->field_0x10,<Var10,LeafToRoot);
  iVar11 = *(int *)&(<Var10.LocalTagDatas)->field_0x10;
  uVar15 = uVar12;
  if (0 < iVar11) {
    do {
      uVar13 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar13 < iVar11) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar3 = (longlong *)(uVar12 + *(longlong *)<Var10.LocalTagDatas);
      uVar12 = uVar12 + 8;
      *(uint *)(*plVar3 + 0x28) = uVar13;
      iVar11 = *(int *)&(<Var10.LocalTagDatas)->field_0x10;
      uVar15 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < iVar11);
  }
  return;
}

// Tick @ 1416c1c10

void __thiscall FLowLevelMemTracker::Tick(FLowLevelMemTracker *this)

{
  if (EnabledState != Disabled) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    TickInternal(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
  }
  return;
}

// TickInternal @ 1416c1c60

void __thiscall FLowLevelMemTracker::TickInternal(FLowLevelMemTracker *this)

{
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *this_00;
  FLLMTracker *pFVar1;
  FLLMTracker *pFVar2;
  FTrackerTagSizeData *pFVar3;
  FTagData *pFVar4;
  FTagData *pFVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FTagData *local_res8;
  long64 local_res10;
  long64 local_res18;
  FPlatformMemoryStats local_c8;
  
  pFVar5 = (FTagData *)0x0;
  if (this->bFullyInitialised != false) {
    UpdateTags(this);
    pFVar4 = pFVar5;
    do {
      UE::LLMPrivate::FLLMTracker::Update(this->Trackers[(ulonglong)pFVar4 & 0xff]);
      uVar6 = (int)pFVar4 + 1;
      pFVar4 = (FTagData *)(ulonglong)uVar6;
    } while ((int)uVar6 < 2);
  }
  pFVar1 = this->Trackers[1];
  pFVar2 = this->Trackers[0];
  local_res18 = pFVar1->TrackedTotal;
  FWindowsPlatformMemory::GetStats(&local_c8);
  lVar8 = local_c8._padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  lVar7 = (this->Allocator).Total;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  this->MemoryUsageCurrentOverhead = lVar7;
  local_res8 = FindOrAddTagData(this,PlatformOverhead,FunctionAPI);
  this_00 = &pFVar2->TagSizes;
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)this_00,uVar6 >> 0x10 ^ uVar6,&local_res8);
  LOCK();
  pFVar2->TrackedTotal = pFVar2->TrackedTotal + (lVar7 - pFVar3->Size);
  UNLOCK();
  pFVar3->Size = lVar7;
  if (lVar7 < pFVar3->PeakSize) {
    lVar7 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar7;
  local_res10 = pFVar1->AllocTypeAmounts[1];
  pFVar4 = FindOrAddTagData(this,FMalloc,FunctionAPI);
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                   *)this_00,pFVar4);
  pFVar4 = pFVar5;
  if (pFVar3 != (FTrackerTagSizeData *)0x0) {
    pFVar4 = (FTagData *)pFVar3->Size;
  }
  local_res8 = pFVar4;
  if (UE::Private::GMalloc != (FMalloc *)0x0) {
    pFVar5 = (FTagData *)(**(code **)((longlong)*UE::Private::GMalloc + 0xf0))();
  }
  lVar7 = 0;
  if (local_res8 != (FTagData *)0x0) {
    lVar7 = (longlong)pFVar4 + (-local_res10 - (longlong)pFVar5);
  }
  local_res8 = FindOrAddTagData(this,FMallocUnused,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&pFVar1->TagSizes,uVar6 >> 0x10 ^ uVar6,&local_res8);
  LOCK();
  pFVar1->TrackedTotal = pFVar1->TrackedTotal + (lVar7 - pFVar3->Size);
  UNLOCK();
  pFVar3->Size = lVar7;
  if (lVar7 < pFVar3->PeakSize) {
    lVar7 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar7;
  lVar7 = pFVar2->AllocTypeAmounts[3] - pFVar1->AllocTypeAmounts[3];
  local_res8 = FindOrAddTagData(this,RHIUnused,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&pFVar1->TagSizes,uVar6 >> 0x10 ^ uVar6,&local_res8);
  LOCK();
  pFVar1->TrackedTotal = pFVar1->TrackedTotal + (lVar7 - pFVar3->Size);
  UNLOCK();
  pFVar3->Size = lVar7;
  if (lVar7 < pFVar3->PeakSize) {
    lVar7 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar7;
  lVar7 = lVar8 - pFVar2->TrackedTotal;
  if (lVar7 < 0) {
    lVar7 = 0;
  }
  this->MemoryUsagePlatformTotalUntracked = lVar7;
  local_res8 = FindOrAddTagData(this,PlatformTotal,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)this_00,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = lVar8;
  lVar7 = lVar8;
  if (lVar8 < pFVar3->PeakSize) {
    lVar7 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar7;
  lVar7 = this->MemoryUsagePlatformTotalUntracked;
  local_res8 = FindOrAddTagData(this,PlatformUntracked,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)this_00,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = lVar7;
  if (lVar7 < pFVar3->PeakSize) {
    lVar7 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar7;
  local_res8 = FindOrAddTagData(this,PlatformOSAvailable,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)this_00,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = local_c8._padding_;
  if (local_c8._padding_ < pFVar3->PeakSize) {
    local_c8._padding_ = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = local_c8._padding_;
  lVar8 = lVar8 - this->MemoryUsageCurrentOverhead;
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)((longlong)*UE::Private::GMalloc + 0xe8))();
  }
  lVar7 = ((lVar7 - local_res18) - (longlong)pFVar5) + lVar8;
  if (lVar7 < 0) {
    lVar7 = 0;
  }
  local_res8 = FindOrAddTagData(this,Total,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&pFVar1->TagSizes,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = lVar8;
  if (lVar8 < pFVar3->PeakSize) {
    lVar8 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar8;
  local_res8 = FindOrAddTagData(this,Untracked,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&pFVar1->TagSizes,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = lVar7;
  if (lVar7 < pFVar3->PeakSize) {
    lVar7 = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = lVar7;
  local_res8 = FindOrAddTagData(this,WorkingSetSize,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&pFVar1->TagSizes,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = local_c8._padding_;
  if (local_c8._padding_ < pFVar3->PeakSize) {
    local_c8._padding_ = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = local_c8._padding_;
  local_res8 = FindOrAddTagData(this,PagefileUsed,FunctionAPI);
  uVar6 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  pFVar3 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           ::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
                     ((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)&pFVar1->TagSizes,uVar6 >> 0x10 ^ uVar6,&local_res8);
  pFVar3->Size = local_c8._padding_;
  if (local_c8._padding_ < pFVar3->PeakSize) {
    local_c8._padding_ = pFVar3->PeakSize;
  }
  pFVar3->PeakSize = local_c8._padding_;
  return;
}

// UpdateStatsPerFrame @ 1416c7250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLowLevelMemTracker::UpdateStatsPerFrame(FLowLevelMemTracker *this,wchar_t *param_1)

{
  if (!__CsvProfilerStat1977) {
    FCsvProfilerTrace::OutputInlineStatExclusive("LLM");
    __CsvProfilerStat1977 = true;
  }
  FCsvProfiler::BeginExclusiveStat("LLM","CSV_LLM");
  if (EnabledState == Disabled) {
    if (this->bFirstTimeUpdating == false) goto LAB_1416c7352;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    if (this->bFirstTimeUpdating != false) {
      this->bFirstTimeUpdating = false;
      PublishDataPerFrame(this,param_1);
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
    BootstrapInitialise(this);
    if (this->bFirstTimeUpdating != false) {
      if (4 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      this->bFirstTimeUpdating = false;
    }
    TickInternal(this);
    if ((this->bAutoPublish != false) || (this->bPublishSingleFrame != false)) {
      PublishDataPerFrame(this,param_1);
      this->bPublishSingleFrame = false;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->UpdateMutex);
LAB_1416c7352:
  FCsvProfiler::EndExclusiveStat("LLM");
  return;
}

// UpdateTags @ 1416c7380

void __thiscall FLowLevelMemTracker::UpdateTags(FLowLevelMemTracker *this)

{
  longlong *plVar1;
  int iVar2;
  FTagData *this_00;
  FLLMTracker *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FTagData *pFVar9;
  FTagDataArray *pFVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FTagDataArray *local_res18;
  
  if (this->bTagAdded != false) {
    bVar6 = false;
    bVar5 = false;
    this->bTagAdded = false;
    AcquireSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    pFVar10 = this->TagDatas;
    uVar14 = 0;
    uVar11 = 0;
    if (0 < *(int *)&pFVar10->field_0x10) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&pFVar10->field_0x10) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(FTagData **)(lVar13 + *(longlong *)pFVar10);
        FinishConstruct(this,this_00,FunctionAPI);
        pFVar9 = UE::LLMPrivate::FTagData::GetParent(this_00);
        if ((pFVar9 != (FTagData *)0x0) && (bVar5 = bVar6, this_00->Index < pFVar9->Index)) {
          bVar6 = true;
          bVar5 = true;
        }
        pFVar10 = this->TagDatas;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar11 < *(int *)&pFVar10->field_0x10);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->TagDataMutex);
    if (bVar5) {
      do {
        pFVar3 = this->Trackers[uVar14 & 0xff];
        UE::LLMPrivate::FLLMTracker::UpdateThreads(pFVar3);
        EnterCriticalSection((LPCRITICAL_SECTION)&pFVar3->PendingThreadStatesGuard);
        plVar12 = (pFVar3->ThreadStates).AllocatorInstance.Data;
        iVar2 = (pFVar3->ThreadStates).ArrayNum;
        plVar1 = plVar12 + iVar2;
        while( true ) {
          if ((pFVar3->ThreadStates).ArrayNum != iVar2) {
            `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (plVar12 == plVar1) break;
          EnterCriticalSection((LPCRITICAL_SECTION)(*plVar12 + 0x78));
          plVar12 = plVar12 + 1;
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < 2);
      AcquireSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
      SortTags(this,&local_res18);
      UE::LLMPrivate::FLLMTracker::OnTagsResorted(this->Trackers[0],local_res18);
      pFVar3 = this->Trackers[0];
      plVar12 = (pFVar3->ThreadStates).AllocatorInstance.Data;
      iVar2 = (pFVar3->ThreadStates).ArrayNum;
      plVar1 = plVar12 + iVar2;
      while( true ) {
        if ((pFVar3->ThreadStates).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (plVar12 == plVar1) break;
        LeaveCriticalSection((LPCRITICAL_SECTION)(*plVar12 + 0x78));
        plVar12 = plVar12 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->PendingThreadStatesGuard);
      UE::LLMPrivate::FLLMTracker::OnTagsResorted(this->Trackers[1],local_res18);
      pFVar3 = this->Trackers[1];
      plVar12 = (pFVar3->ThreadStates).AllocatorInstance.Data;
      iVar2 = (pFVar3->ThreadStates).ArrayNum;
      plVar1 = plVar12 + iVar2;
      while( true ) {
        if ((pFVar3->ThreadStates).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::LLMPrivate::FLLMThreadState_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (plVar12 == plVar1) break;
        LeaveCriticalSection((LPCRITICAL_SECTION)(*plVar12 + 0x78));
        plVar12 = plVar12 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->PendingThreadStatesGuard);
      if (local_res18 != (FTagDataArray *)0x0) {
        if (*(void **)local_res18 != (void *)0x0) {
          UE::LLMPrivate::FLLMAllocator::Free
                    (Allocator,*(void **)local_res18,*(ulong64 *)&local_res18->field_0x8);
        }
        UE::LLMPrivate::FLLMAllocator::Free(&this->Allocator,local_res18,0x18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->TagDataMutex);
    }
  }
  return;
}

