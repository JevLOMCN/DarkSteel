// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FLLMCsvWriter @ 141677ad0

FLLMCsvWriter * __thiscall UE::LLMPrivate::FLLMCsvWriter::FLLMCsvWriter(FLLMCsvWriter *this)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  *(undefined8 *)&this->Columns = 0;
  *(undefined8 *)&(this->Columns).field_0x8 = 0;
  *(undefined8 *)&(this->Columns).field_0x10 = 0;
  *(undefined8 *)&this->ExistingColumns = 0;
  *(undefined8 *)&(this->ExistingColumns).field_0x8 = 0;
  *(undefined8 *)&(this->ExistingColumns).field_0x10 = 0;
  *(undefined8 *)&(this->ExistingColumns).field_0x28 = 0;
  *(undefined8 *)&(this->ExistingColumns).field_0x30 = 0;
  *(undefined4 *)&(this->ExistingColumns).field_0x38 = 0;
  *(undefined4 *)&(this->ExistingColumns).field_0x3c = 0x80;
  *(undefined4 *)&(this->ExistingColumns).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->ExistingColumns).field_0x44 = 0;
  *(undefined8 *)&(this->ExistingColumns).field_0x50 = 0;
  *(undefined8 *)&(this->ExistingColumns).field_0x58 = 0;
  *(undefined4 *)&(this->ExistingColumns).field_0x60 = 0;
  this->Archive = (FArchive *)0x0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->WriteCount = 0;
  this->bRegisteredFlushDelegate = false;
  this->LastWriteTime = dVar1 + __real_4170000000000000;
  return this;
}

// ~FLLMCsvWriter @ 14167b970

void __thiscall UE::LLMPrivate::FLLMCsvWriter::~FLLMCsvWriter(FLLMCsvWriter *this)

{
  FArchive *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->Archive;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  *(undefined4 *)&(this->ExistingColumns).field_0x60 = 0;
  pvVar2 = *(void **)&(this->ExistingColumns).field_0x50;
  if (pvVar2 != (void *)0x0) {
    FLLMAllocator::Free(Allocator,pvVar2,*(ulong64 *)&(this->ExistingColumns).field_0x58);
  }
  TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
  ::
  ~TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
            ((TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,FDefaultSparseArrayLLMAllocator>
              *)&this->ExistingColumns);
  if (*(void **)&this->Columns != (void *)0x0) {
    FLLMAllocator::Free(Allocator,*(void **)&this->Columns,*(ulong64 *)&(this->Columns).field_0x8);
  }
  return;
}

// operator() @ 14167caa0

void __thiscall
`UE::LLMPrivate::FLLMCsvWriter::AddRow'::__l2::<lambda_1>::operator()(void *this,long64 param_1)

{
  TStringView<wchar_t> local_18;
  
  (*(undefined8 **)((longlong)this + 8))[1] = **(undefined8 **)((longlong)this + 8);
  TStringBuilderBase<wchar_t>::AppendfImpl
            (*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),L"%0.2f,");
  local_18.DataPtr = (wchar_t *)**(longlong **)((longlong)this + 8);
  local_18.Size = (int)((*(longlong **)((longlong)this + 8))[1] - (longlong)local_18.DataPtr >> 1);
  UE::LLMPrivate::FLLMCsvWriter::Write(*(FLLMCsvWriter **)this,&local_18);
  return;
}

// AddRow @ 14167f530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESizeParams": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::LLMPrivate::FLLMCsvWriter::AddRow
          (FLLMCsvWriter *this,FLowLevelMemTracker *param_1,
          TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *param_2,
          FTagData *param_3,FTagData *param_4,long64 param_5,ESizeParams param_6)

{
  undefined8 *puVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FTagData *pFVar5;
  FTrackerTagSizeData *pFVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_01;
  longlong lVar7;
  long64 lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined1 local_298 [8];
  undefined1 local_290 [24];
  TStringView<wchar_t> local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_290._8_8_ = &local_268;
  local_290._0_8_ = this;
  if (param_3 != (FTagData *)0x0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L"%0.2f,");
    local_278.Size = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
    local_278.DataPtr = local_268.Base;
    Write(this,&local_278);
  }
  if (param_4 != (FTagData *)0x0) {
    pFVar5 = FLowLevelMemTracker::FindTagData(param_1,TagName_Untagged,None,FunctionAPI);
    if ((pFVar5 == (FTagData *)0x0) ||
       (pFVar6 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                 ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                         *)param_2,pFVar5), pFVar6 == (FTrackerTagSizeData *)0x0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = pFVar6->Size;
      if ((param_6 & ReportPeak) != Default) {
        lVar8 = pFVar6->PeakSize;
      }
      if ((param_6 & RelativeToSnapshot) != Default) {
        lVar7 = lVar8 - pFVar6->SizeInSnapshot;
        lVar10 = 0x7fffffffffffffff;
        if (lVar7 < 0x7fffffffffffffff) {
          lVar10 = lVar7;
        }
        lVar8 = 0;
        if (0 < lVar10) {
          lVar8 = lVar10;
        }
      }
    }
    `UE::LLMPrivate::FLLMCsvWriter::AddRow'::__l2::<lambda_1>::operator()(local_290,lVar8);
  }
  puVar9 = *(undefined8 **)&this->Columns;
  iVar2 = *(int *)&(this->Columns).field_0x10;
  puVar1 = puVar9 + iVar2;
  while( true ) {
    if (*(int *)&(this->Columns).field_0x10 != iVar2) {
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_298);
    }
    if (puVar9 == puVar1) break;
    if ((FTagData *)*puVar9 == (FTagData *)0x0) {
      `UE::LLMPrivate::FLLMCsvWriter::AddRow'::__l2::<lambda_1>::operator()(local_290,0);
      puVar9 = puVar9 + 1;
    }
    else {
      pFVar6 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
               ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                       *)param_2,(FTagData *)*puVar9);
      if (pFVar6 == (FTrackerTagSizeData *)0x0) {
        `UE::LLMPrivate::FLLMCsvWriter::AddRow'::__l2::<lambda_1>::operator()(local_290,0);
        puVar9 = puVar9 + 1;
      }
      else {
        lVar8 = pFVar6->Size;
        if ((param_6 & ReportPeak) != Default) {
          lVar8 = pFVar6->PeakSize;
        }
        if ((param_6 & RelativeToSnapshot) != Default) {
          lVar7 = lVar8 - pFVar6->SizeInSnapshot;
          lVar10 = 0x7fffffffffffffff;
          if (lVar7 < 0x7fffffffffffffff) {
            lVar10 = lVar7;
          }
          lVar8 = 0;
          if (0 < lVar10) {
            lVar8 = lVar10;
          }
        }
        `UE::LLMPrivate::FLLMCsvWriter::AddRow'::__l2::<lambda_1>::operator()(local_290,lVar8);
        puVar9 = puVar9 + 1;
      }
    }
  }
  local_278.Size = 1;
  local_278.DataPtr = L"\n";
  Write(this,&local_278);
  this->WriteCount = this->WriteCount + 1;
  pTVar3 = CVarLLMWriteInterval.Ref;
  bVar4 = IsInParallelGameThread();
  lVar10 = 4;
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  if ((*(int *)((longlong)pTVar3->ShadowedValue + lVar7) != 0) && (4 < (byte)LogHAL._0_1_)) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  pTVar3 = CVarLLMCsvFlushEveryRow.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar10 = 0;
  }
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar10) == 0) {
    if (this->bRegisteredFlushDelegate == false) {
      local_2a8 = local_298;
      local_298[0] = 1;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<UE::LLMPrivate::FLLMCsvWriter,bool>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnHandleSystemError,(FLLMCsvWriter *)local_290,(pmf_6a4f051c)this,
                 (bool *)Flush);
      this_00 = FCoreDelegates::GetOutOfMemoryDelegate();
      local_2a8 = local_298;
      local_298[0] = 1;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<UE::LLMPrivate::FLLMCsvWriter,bool>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 this_00,(FLLMCsvWriter *)local_290,(pmf_6a4f051c)this,(bool *)Flush);
      local_2a8 = local_298;
      local_298[0] = 0;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<UE::LLMPrivate::FLLMCsvWriter,bool>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,(FLLMCsvWriter *)local_290,
                 (pmf_6a4f051c)this,(bool *)Flush);
      this_01 = FCoreDelegates::GetApplicationWillTerminateDelegate();
      local_2a8 = local_298;
      local_298[0] = 0;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
      AddRaw<UE::LLMPrivate::FLLMCsvWriter,bool>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                 this_01,(FLLMCsvWriter *)local_290,(pmf_6a4f051c)this,(bool *)Flush);
      this->bRegisteredFlushDelegate = true;
    }
  }
  else {
    (**(code **)(*(longlong *)this->Archive + 0x208))();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return;
}

// Clear @ 14168a860

void __thiscall UE::LLMPrivate::FLLMCsvWriter::Clear(FLLMCsvWriter *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TLLMSet<UE::LLMPrivate::FTagData_const_*> *this_00;
  
  puVar1 = &(this->Columns).field_0x14;
  *(undefined4 *)&(this->Columns).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  this_00 = &this->ExistingColumns;
  bVar3 = 1 < *(int *)&(this->ExistingColumns).field_0x60;
  if (!bVar3) {
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ExistingColumns).field_0x14;
  *(undefined4 *)&(this->ExistingColumns).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ExistingColumns).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->ExistingColumns).field_0x44 = 0;
  iVar2 = *(int *)&(this->ExistingColumns).field_0x3c;
  *(undefined4 *)&(this->ExistingColumns).field_0x38 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ExistingColumns).field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)&(this->ExistingColumns).field_0x18,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ExistingColumns).field_0x60 = 1;
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
              *)this_00);
  }
  return;
}

// CreateArchive @ 14168cd20

bool __thiscall UE::LLMPrivate::FLLMCsvWriter::CreateArchive(FLLMCsvWriter *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FDateTime local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if (this->Archive != (FArchive *)0x0) {
    return false;
  }
  pFVar4 = FPaths::ProfilingDir((FString *)&local_48);
  ::FString::ConcatFC(&local_68,pFVar4,L"LLM/");
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pIVar5 = IFileManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,FVar7.Data,1);
  if ((this->Tracker != Platform) && (this->Tracker != Default)) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  FDateTime::Now();
  ::FString::FString(&local_78,"Windows");
  iVar3 = iswalpha(0x20);
  if (iVar3 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(&local_78,L' ',L'_');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(&local_78,L' ',L'_');
  }
  pFVar4 = FPaths::MakeValidFileName((FString *)&local_48,&local_78,L'\0');
  if (&local_78 != pFVar4) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  FDateTime::ToString(&local_res8,(FString *)&local_48);
  FWindowsPlatformProcess::GetCurrentProcessId();
  ::FString::PrintfImpl(&local_58,L"%s/%s_Pid%d_%s_%s.csv");
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pIVar5 = IFileManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
  }
  pFVar6 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,FVar7.Data,0x11);
  this->Archive = pFVar6;
  if (pFVar6 == (FArchive *)0x0) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  pTVar1 = CVarLLMHeaderMaxSize.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar8 = 4;
    if (!bVar2) goto LAB_14168cfb1;
  }
  lVar8 = 0;
LAB_14168cfb1:
  pFVar4 = ::FString::ChrN((FString *)&local_38,*(int *)((longlong)pTVar1->ShadowedValue + lVar8),
                           L' ');
  local_48.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar3 = (pFVar4->Data).ArrayNum;
  local_48.Size = iVar3 + -1;
  if (iVar3 == 0) {
    local_48.Size = 0;
  }
  Write(this,&local_48);
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  local_48.Size = 1;
  local_48.DataPtr = L"\n";
  local_38.DataPtr = L"\n";
  local_38.Size = 1;
  local_38._12_4_ = local_48._12_4_;
  Write(this,&local_38);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return true;
}

// Flush @ 1416950a0

void __thiscall UE::LLMPrivate::FLLMCsvWriter::Flush(FLLMCsvWriter *this,bool param_1)

{
  if (this->Archive != (FArchive *)0x0) {
    if (param_1) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Flushing LLM CSV on crash\n");
    }
                    /* WARNING: Could not recover jumptable at 0x0001416950d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->Archive + 0x208))();
    return;
  }
  return;
}

// GetTrackerCsvName @ 1416a1c70

wchar_t * __cdecl UE::LLMPrivate::FLLMCsvWriter::GetTrackerCsvName(ELLMTracker param_1)

{
  if (param_1 == Platform) {
    return L"LLMPlatform";
  }
  if (param_1 != Default) {
    HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
    return L"";
  }
  return L"LLM";
}

// OnPreFork @ 1416b5490

void __thiscall UE::LLMPrivate::FLLMCsvWriter::OnPreFork(FLLMCsvWriter *this)

{
  FArchive *pFVar1;
  
  if (this->Archive != (FArchive *)0x0) {
    (**(code **)(*(longlong *)this->Archive + 0x208))();
    pFVar1 = this->Archive;
    if (pFVar1 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    this->Archive = (FArchive *)0x0;
  }
  return;
}

// Publish @ 1416b76b0

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall
UE::LLMPrivate::FLLMCsvWriter::Publish
          (FLLMCsvWriter *this,FLowLevelMemTracker *param_1,
          TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *param_2,
          FTagData *param_3,FTagData *param_4,long64 param_5,ESizeParams param_6)

{
  double dVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  bool bVar4;
  FLowLevelMemTracker *pFVar5;
  longlong lVar6;
  LARGE_INTEGER local_38 [4];
  
  QueryPerformanceCounter(local_38);
  dVar1 = (double)local_38[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  pFVar5 = FLowLevelMemTracker::Get();
  pTVar2 = CVarLLMWriteInterval.Ref;
  if (pFVar5->bPublishSingleFrame == false) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 4;
    }
    if (dVar1 - this->LastWriteTime < (double)*(int *)((longlong)pTVar2->ShadowedValue + lVar6)) {
      return;
    }
  }
  this->LastWriteTime = dVar1;
  bVar3 = CreateArchive(this);
  bVar4 = UpdateColumns(this,param_2);
  if ((bVar3) || (bVar4)) {
    WriteHeader(this,param_3,param_4);
  }
  AddRow(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// SetTracker @ 1416c12a0

void __thiscall UE::LLMPrivate::FLLMCsvWriter::SetTracker(FLLMCsvWriter *this,ELLMTracker param_1)

{
  this->Tracker = param_1;
  return;
}

// UpdateColumns @ 1416c5550

bool __thiscall
UE::LLMPrivate::FLLMCsvWriter::UpdateColumns
          (FLLMCsvWriter *this,
          TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  FName *local_a8;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_6c [12];
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = *(int *)&param_1->field_0x38;
  puVar1 = &param_1->field_0x18;
  iStack_98 = 0;
  bVar8 = false;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&param_1->field_0x28;
    if (*(uint **)&param_1->field_0x28 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iStack_98) goto LAB_1416c55fe;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_84 = local_80 + -1 + local_res20;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_1416c55fe:
  uVar13 = *(uint *)&param_1->field_0x38;
  iStack_78 = *(int *)&param_1->field_0x10 - *(int *)&param_1->field_0x44;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_6c._4_8_ = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar3 = *(uint *)&param_1->field_0x38;
  if (uVar13 != uVar3) {
    puVar11 = *(undefined1 **)&param_1->field_0x28;
    if (*(undefined1 **)&param_1->field_0x28 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14) goto LAB_1416c5710;
      uVar13 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_70 = (int)lVar10;
    uVar13 = local_70 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_1416c5710:
  do {
    uVar5 = local_6c._4_8_;
    if (*(int *)(local_6c._4_8_ + 0x10) - *(int *)(local_6c._4_8_ + 0x44) != (int)uStack_40) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1)) &&
       ((TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *)uVar5 ==
        param_1)) {
      return bVar8;
    }
    local_a8 = *(FName **)((longlong)TStack_60.CurrentBitIndex * 0x38 + *(longlong *)uVar5);
    if ((((char)local_a8[7].ComparisonIndex.Value != '\0') && ((char)local_a8[6].Number == '\0')) &&
       (*local_a8 != TagName_Untagged)) {
      uVar16 = ((uint)((ulonglong)local_a8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a8 >> 4)) *
               -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      if (*(int *)&(this->ExistingColumns).field_0x10 != *(int *)&(this->ExistingColumns).field_0x44
         ) {
        puVar11 = *(undefined1 **)&(this->ExistingColumns).field_0x50;
        puVar12 = &(this->ExistingColumns).field_0x48;
        if (puVar11 != (undefined1 *)0x0) {
          puVar12 = puVar11;
        }
        iVar9 = *(int *)(puVar12 +
                        (ulonglong)
                        (*(int *)&(this->ExistingColumns).field_0x60 - 1U &
                        (uVar16 >> 0x10 ^ uVar16)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(FName **)(*(longlong *)&this->ExistingColumns + (longlong)iVar9 * 0x10) ==
                local_a8) goto LAB_1416c58a8;
            iVar9 = *(int *)(*(longlong *)&this->ExistingColumns + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
      ::Emplace<UE::LLMPrivate::FTagData_const_*_const_&>
                ((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
                  *)&this->ExistingColumns,(FTagData **)local_6c,(bool *)&local_a8);
      if (((*(FName ***)&this->Columns <= &local_a8) &&
          (&local_a8 < *(FName ***)&this->Columns + *(int *)&(this->Columns).field_0x14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar9 = *(int *)&(this->Columns).field_0x10;
      puVar11 = &(this->Columns).field_0x14;
      if (iVar9 == *(int *)puVar11) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,(int *)puVar11);
      }
      lVar10 = *(longlong *)&this->Columns;
      bVar8 = true;
      *(int *)&(this->Columns).field_0x10 = iVar9 + 1;
      *(FName **)(lVar10 + (longlong)iVar9 * 8) = local_a8;
    }
LAB_1416c58a8:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// Write @ 1416c81d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::LLMPrivate::FLLMCsvWriter::Write(FLLMCsvWriter *this,TStringView<wchar_t> *param_1)

{
  FArchive *pFVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  ENullTerminatedString EVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = this->Archive;
  iVar6 = param_1->Size;
  lVar5 = (longlong)iVar6;
  pwVar2 = param_1->DataPtr;
  EVar4 = No;
  local_b8._padding_ = 0;
  pcVar3 = *(code **)(*(longlong *)pFVar1 + 0x188);
  if (pwVar2 == (wchar_t *)0x0) {
    local_b8.Ptr = (char *)0x0;
    local_b8.StringLength = 0;
  }
  else {
    if ((0 < iVar6) && (pwVar2[lVar5 + -1] == L'\0')) {
      EVar4 = Yes;
      iVar6 = iVar6 + -1;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_b8,pwVar2,iVar6,EVar4);
  }
  (*pcVar3)(pFVar1,local_b8.Ptr,lVar5);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return;
}

// WriteHeader @ 1416c83d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::LLMPrivate::FLLMCsvWriter::WriteHeader(FLLMCsvWriter *this,FTagData *param_1,FTagData *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [16];
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  uVar5 = (**(code **)(*(longlong *)this->Archive + 0x28))();
  (**(code **)(*(longlong *)this->Archive + 0x1b8))(this->Archive,0);
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  if (param_1 != (FTagData *)0x0) {
    FTagData::AppendDisplayPath(param_1,&local_258,-1);
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_258.CurPos,L",",2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
    local_278.Size = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
    local_278.DataPtr = local_258.Base;
    Write(this,&local_278);
  }
  if (param_2 != (FTagData *)0x0) {
    local_258.CurPos = local_258.Base;
    FTagData::AppendDisplayPath(param_2,&local_258,-1);
    if (local_258.End < local_258.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_258.CurPos,L",",2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
    local_278.Size = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
    local_278.DataPtr = local_258.Base;
    Write(this,&local_278);
  }
  puVar9 = *(undefined8 **)&this->Columns;
  iVar2 = *(int *)&(this->Columns).field_0x10;
  puVar1 = puVar9 + iVar2;
  while( true ) {
    if (*(int *)&(this->Columns).field_0x10 != iVar2) {
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_288);
    }
    if (puVar9 == puVar1) break;
    if ((FTagData *)*puVar9 != (FTagData *)0x0) {
      local_258.CurPos = local_258.Base;
      FTagData::AppendDisplayPath((FTagData *)*puVar9,&local_258,-1);
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      pvVar6 = FGenericPlatformString::Memcpy(local_258.CurPos,L",",2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
      local_268.Size = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
      local_278.Size = local_268.Size;
      local_278.DataPtr = local_258.Base;
      local_268.DataPtr = local_258.Base;
      local_268._12_4_ = local_278._12_4_;
      Write(this,&local_268);
    }
    puVar9 = puVar9 + 1;
  }
  lVar7 = (**(code **)(*(longlong *)this->Archive + 0x28))();
  pTVar3 = CVarLLMHeaderMaxSize.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      lVar8 = 4;
      goto LAB_1416c8655;
    }
  }
  lVar8 = 0;
LAB_1416c8655:
  if ((*(int *)((longlong)pTVar3->ShadowedValue + lVar8) <= lVar7) && (1 < (byte)LogHAL._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  (**(code **)(*(longlong *)this->Archive + 0x1b8))(this->Archive,uVar5);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

