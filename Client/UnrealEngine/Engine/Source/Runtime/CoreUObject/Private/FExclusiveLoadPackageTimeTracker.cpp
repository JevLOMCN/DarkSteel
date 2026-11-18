// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// FExclusiveLoadPackageTimeTracker @ 141e84340

FExclusiveLoadPackageTimeTracker * __thiscall
FExclusiveLoadPackageTimeTracker::FExclusiveLoadPackageTimeTracker
          (FExclusiveLoadPackageTimeTracker *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FText *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FText local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  (this->TimeStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeStack).ArrayNum = 0;
  (this->TimeStack).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TimesCritical,4000);
  *(undefined8 *)&(this->LoadTimes).field_0x8 = 0;
  *(undefined8 *)&this->LoadTimes = 0;
  *(undefined8 *)&(this->LoadTimes).field_0x20 = 0;
  *(undefined4 *)&(this->LoadTimes).field_0x28 = 0;
  *(undefined4 *)&(this->LoadTimes).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadTimes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadTimes).field_0x34 = 0;
  *(undefined8 *)&(this->LoadTimes).field_0x40 = 0;
  *(undefined4 *)&(this->LoadTimes).field_0x48 = 0;
  this->TrackerOverhead = 0.0;
  ::FName::FName(&this->EndLoadName,L"EndLoad");
  ::FName::FName(&this->UnknownAssetName,L"Unknown");
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = DumpReportCommandHandler;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFExclusiveLoadPackageTimeTracker____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"ExclusiveLoadPackageTimeTracker",L"CommandText_DumpReport",
                      L"Dumps a report about the amount of time spent loading assets");
  pFVar4 = FText::ToString(pFVar3);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DumpReportCommand,L"LoadTimes.DumpReport",pwVar6,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_58,0);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = ResetReportCommandHandler;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFExclusiveLoadPackageTimeTracker____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"ExclusiveLoadPackageTimeTracker",L"CommandText_ResetReport",
                      L"Resets accumulated report data");
  pFVar4 = FText::ToString(pFVar3);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->ResetReportCommand,L"LoadTimes.Reset",pwVar5,
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_58,0);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return this;
}

// Construct @ 141e92fe0

FExclusiveLoadPackageTimeTracker * __cdecl FExclusiveLoadPackageTimeTracker::Construct(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FExclusiveLoadPackageTimeTracker(&Tracker);
      atexit(`FExclusiveLoadPackageTimeTracker::Construct'::__l2::
             _dynamic_atexit_destructor_for__Tracker__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TrackerInstance = &Tracker;
  return &Tracker;
}

// DumpReportCommandHandler @ 141e96c60

void __thiscall
FExclusiveLoadPackageTimeTracker::DumpReportCommandHandler
          (FExclusiveLoadPackageTimeTracker *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FExclusiveLoadPackageTimeTracker *this_00;
  
  this_00 = TrackerInstance;
  if (TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0) {
    this_00 = Construct();
  }
  InternalDumpReport(this_00,param_1);
  return;
}

// InternalDumpReport @ 141ea70e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FExclusiveLoadPackageTimeTracker::InternalDumpReport
          (FExclusiveLoadPackageTimeTracker *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FTimeCount *pFVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FExclusiveLoadPackageTimeTracker *pFVar8;
  TMap<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
  *pTVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
  *pTVar10;
  bool bVar11;
  FString *pFVar12;
  IFileManager *pIVar13;
  FOutputDeviceRedirectorState *pFVar14;
  FOutputDeviceRedirector *pFVar15;
  longlong lVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  undefined1 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FName *pFVar26;
  int iVar27;
  FScriptContainerElement *pFVar28;
  undefined1 *puVar29;
  uint *puVar30;
  undefined1 *puVar31;
  uint uVar32;
  longlong *plVar33;
  int iVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_2e8 [32];
  double local_2c8;
  double local_2c0;
  <lambda_2> local_2b8;
  undefined1 local_2b7;
  FIdentityFunctor local_2b6;
  FIdentityFunctor local_2b5;
  FIdentityFunctor local_2b4;
  FIdentityFunctor local_2b3;
  FIdentityFunctor local_2b2 [2];
  TArray<FExclusiveLoadPackageTimeTracker::FLoadTime,TSizedDefaultAllocator<32>_> local_2b0;
  float local_2a0 [2];
  TArray<_private:_void___cdecl_FExclusiveLoadPackageTimeTracker::InternalDumpReport(TArray<FString,TSizedDefaultAllocator<32>_>_const_&)const_::_2_::FTimeCount,TSizedDefaultAllocator<32>_>
  local_298;
  int local_288 [2];
  FName local_280;
  FOutputDeviceRedirector *local_278;
  FOutputDeviceRedirectorState *local_270;
  FScriptContainerElement *local_268;
  FExclusiveLoadPackageTimeTracker *local_260;
  FOutputDeviceRedirector *local_258;
  TMap<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
  *local_250;
  FString *local_248;
  FString local_240;
  FString local_230;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_220;
  int local_218;
  int local_214;
  longlong *local_210;
  LPCRITICAL_SECTION local_208;
  FString local_200;
  TMap<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
  *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  TMap<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120 [2];
  undefined4 local_f4;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_208 = (LPCRITICAL_SECTION)&this->TimesCritical;
  local_260 = this;
  local_220 = param_1;
  if (local_208 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_208);
  pFVar12 = TArray<FString,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1>)local_2b8);
  local_248 = TArray<FString,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l2::<lambda_2>_>
                        (param_1,local_2b8);
  local_258 = GetGlobalLogSingleton();
  local_270 = (FOutputDeviceRedirectorState *)0x0;
  local_278 = (FOutputDeviceRedirector *)0x0;
  local_268 = (FScriptContainerElement *)0x0;
  if (pFVar12 != (FString *)0x0) {
    pFVar12 = FPaths::ProfilingDir(&local_160);
    ::FString::ConcatFC(&local_200,pFVar12,L"LoadReports/");
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar19.Data = local_200.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_230,(wchar_t *)FVar19.Data);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    pIVar13 = IFileManager::Get();
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_230.Data.ArrayNum != 0) {
      FVar19.Data = local_230.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar13 + 0x60))(pIVar13,FVar19.Data,0);
    ::FString::FString(&local_190,L".loadreport");
    ::FString::FString(&local_170,L"");
    CreateProfileFilename(&local_180,&local_170,&local_190,true);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF(&local_240,&local_230,&local_180);
    iVar34 = local_240.Data.ArrayNum;
    FVar19.Data = local_240.Data.AllocatorInstance.Data;
    local_268 = local_240.Data.AllocatorInstance.Data;
    local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.Data.ArrayNum = 0;
    local_240.Data.ArrayMax = 0;
    pIVar13 = IFileManager::Get();
    FVar20.Data = (FScriptContainerElement *)L"";
    if (iVar34 != 0) {
      FVar20.Data = FVar19.Data;
    }
    pFVar14 = (FOutputDeviceRedirectorState *)
              (**(code **)((longlong)*pIVar13 + 0x28))(pIVar13,FVar20.Data,0);
    local_270 = pFVar14;
    pFVar15 = ::operator_new(0x18);
    if (pFVar15 == (FOutputDeviceRedirector *)0x0) {
      pFVar15 = (FOutputDeviceRedirector *)0x0;
      local_278 = (FOutputDeviceRedirector *)0x0;
    }
    else {
      local_278 = pFVar15;
      FOutputDevice::FOutputDevice((FOutputDevice *)pFVar15);
      (pFVar15->State).Ptr = pFVar14;
      pFVar15->_padding_ = (longlong)&___7FOutputDeviceArchiveWrapper__6B_;
      if ((pFVar14 == (FOutputDeviceRedirectorState *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InArchive",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\OutputDeviceArchiveWrapper.h"
                              ,0x1a,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_258 = pFVar15;
    if (4 < (byte)LogLoad._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
  }
  local_250 = &this->LoadTimes;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  local_1e0 = &(this->LoadTimes).field_0x10;
  local_e8 = 0;
  local_e0 = 0;
  local_1d0 = 0;
  local_c8 = 0;
  dVar7 = 0.0;
  local_c0 = 0;
  uVar35 = 0;
  uVar36 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  iStack_1e8 = 0;
  local_a8 = (undefined1 *)0x0;
  uStack_1e4 = 1;
  local_a0 = 0;
  iVar34 = *(int *)&(this->LoadTimes).field_0x28;
  iStack_1d4 = 0;
  if (iVar34 != 0) {
    puVar30 = *(uint **)&(this->LoadTimes).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)local_1e0;
    }
    uVar24 = *puVar30;
    iStack_1e8 = 0;
    while (uVar24 == 0) {
      lVar16 = (longlong)iStack_1e8;
      local_1d0 = local_1d0 + 0x20;
      iStack_1e8 = iStack_1e8 + 1;
      iStack_1d4 = iVar34;
      if ((int)(iVar34 + -1 + (iVar34 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8) goto LAB_141ea744f;
      uVar24 = puVar30[lVar16 + 1];
    }
    uStack_1e4 = -uVar24 & uVar24;
    uVar23 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_218 = (int)lVar16;
    iStack_1d4 = local_1d0 + -1 + local_218;
    if (iVar34 < iStack_1d4) {
      iStack_1d4 = iVar34;
    }
  }
LAB_141ea744f:
  uStack_1cc = local_f4;
  puVar31 = &(this->LoadTimes).field_0x10;
  iStack_1c8 = *(int *)&(this->LoadTimes).field_0x8 - *(int *)&(this->LoadTimes).field_0x34;
  uVar24 = *(uint *)&(this->LoadTimes).field_0x28;
  uStack_1d8 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = iStack_1d4;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  TStack_1b8._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
  uVar32 = uVar24 & 0xffffffe0;
  iVar27 = (int)uVar24 >> 5;
  TStack_1b8._28_4_ = local_f4;
  TStack_1b8.BaseBitIndex = local_1d0;
  uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
  local_1f0 = local_250;
  local_1c0 = local_250;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1e0;
  if ((((int)uVar24 < 0) || (iVar34 < (int)uVar24)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar9 = local_250;
  pFVar8 = local_260;
  uVar4 = *(uint *)&(this->LoadTimes).field_0x28;
  if (uVar24 != uVar4) {
    puVar21 = *(undefined1 **)&(this->LoadTimes).field_0x20;
    puVar29 = puVar31;
    if (puVar21 != (undefined1 *)0x0) {
      puVar29 = puVar21;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar27 * 4);
    while (uVar24 == 0) {
      lVar16 = (longlong)iVar27;
      uVar32 = uVar32 + 0x20;
      iVar27 = iVar27 + 1;
      uVar24 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_141ea7570;
      uVar24 = *(uint *)(puVar29 + lVar16 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_214 = (int)lVar16;
    uVar24 = (uVar32 - 1) + local_214;
    if ((int)uVar4 < (int)uVar24) {
      uVar24 = uVar4;
    }
  }
LAB_141ea7570:
  while( true ) {
    pTVar10 = local_1c0;
    if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)uStack_198) {
      local_2b7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FExclusiveLoadPackageTimeTracker::FLoadTime>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b7);
    }
    if (((TStack_1b8.CurrentBitIndex == uVar24) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
       (pTVar10 == pTVar9)) break;
    lVar22 = *(longlong *)pTVar10;
    lVar17 = (longlong)TStack_1b8.CurrentBitIndex * 0x40;
    lVar16 = lVar17 + lVar22;
    if (*(FName *)(lVar17 + 8 + lVar22) != pFVar8->EndLoadName) {
      if ((double)CONCAT44(uVar36,uVar35) <= *(double *)(lVar16 + 0x18) &&
          *(double *)(lVar16 + 0x18) != (double)CONCAT44(uVar36,uVar35)) {
        local_280 = *(FName *)(lVar17 + lVar22);
        uVar35 = (undefined4)*(undefined8 *)(lVar16 + 0x18);
        uVar36 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
      }
      plVar33 = (longlong *)(lVar22 + 0x10 + lVar17);
      lVar22 = *plVar33;
      uVar32 = ::GetTypeHash((FNameEntryId)(uint)lVar22);
      uVar32 = uVar32 + (int)((ulonglong)lVar22 >> 0x20);
      if ((int)local_e0 != local_b4) {
        puVar21 = local_b0;
        if (local_a8 != (undefined1 *)0x0) {
          puVar21 = local_a8;
        }
        iVar34 = *(int *)(puVar21 + (ulonglong)(local_a0 - 1U & uVar32) * 4);
        if (iVar34 != -1) {
          do {
            lVar22 = local_e8 + (longlong)iVar34 * 0x28;
            if (*(longlong *)(local_e8 + (longlong)iVar34 * 0x28) == *plVar33) {
              if (lVar22 != 0) goto LAB_141ea76a8;
              break;
            }
            iVar34 = *(int *)(lVar22 + 0x20);
          } while (iVar34 != -1);
        }
      }
      local_2c8 = 0.0;
      local_210 = plVar33;
      TSet<TTuple<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount>,TDefaultMapHashableKeyFuncs<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                (&local_e8,(uint)local_288,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar32,
                 (bool *)&local_210);
      lVar22 = local_e8 + (longlong)local_288[0] * 0x28;
LAB_141ea76a8:
      *(longlong *)(lVar22 + 8) = *plVar33;
      dVar2 = *(double *)(lVar16 + 0x18);
      *(int *)(lVar22 + 0x18) = *(int *)(lVar22 + 0x18) + 1;
      *(double *)(lVar22 + 0x10) = dVar2 + *(double *)(lVar22 + 0x10);
    }
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
  TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
  ::Find((TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
          *)&pFVar8->LoadTimes,pFVar8->EndLoadName);
  pFVar15 = local_258;
  FOutputDevice::LogfImpl((FOutputDevice *)local_258,L"Loaded: %d packages");
  FOutputDevice::LogfImpl((FOutputDevice *)pFVar15,L"Total time loading packages: %.3f seconds");
  FOutputDevice::LogfImpl
            ((FOutputDevice *)pFVar15,L"Time spent loading assets slower than %.1fms: %.3f seconds")
  ;
  ::FName::ToString(&local_280,&local_150);
  dVar2 = __real_408f400000000000;
  FOutputDevice::LogfImpl((FOutputDevice *)pFVar15,L"Slowest asset: %s (%.1fms)");
  lpCriticalSection = local_208;
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  FOutputDevice::LogfImpl((FOutputDevice *)pFVar15,L"Time spent in EndLoad: %.3f seconds");
  FOutputDevice::LogfImpl
            ((FOutputDevice *)pFVar15,
             L"Time spent in overhead tracking asset load times: %.6f seconds");
  FOutputDevice::Log((FOutputDevice *)pFVar15,
                     L"Dumping asset type load times sorted by exclusive time:");
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  TMapBase<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>(&local_e8,&local_298);
  AlgoImpl::
  IntroSortInternal<_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l2::FTimeCount,int,FIdentityFunctor,TDereferenceWrapper<_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l2::FTimeCount,_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l2::<lambda_3>_>_>
            ((FTimeCount *)local_298.AllocatorInstance.Data,local_298.ArrayNum,local_2b6,
             (<lambda_3> *)&local_2b6);
  iVar34 = local_298.ArrayNum;
  uVar23 = (ulonglong)local_298.ArrayNum;
  pFVar1 = (FTimeCount *)(local_298.AllocatorInstance.Data + uVar23 * 0x18);
  pFVar28 = local_298.AllocatorInstance.Data + 8;
  while( true ) {
    if ((int)uVar23 != iVar34) {
      local_2b8 = (<lambda_2>)0x0;
      `TCheckedPointerIterator<`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
    }
    dVar3 = __real_3fa999999999999a;
    if ((FTimeCount *)(pFVar28 + -8) == pFVar1) break;
    iVar27 = *(int *)(pFVar28 + 8);
    dVar3 = *(double *)pFVar28;
    ::FName::ToString((FName *)(pFVar28 + -8),&local_140);
    local_2c8 = (double)CONCAT44(local_2c8._4_4_,iVar27);
    local_2c0 = (dVar3 / (double)iVar27) * dVar2;
    FOutputDevice::LogfImpl
              ((FOutputDevice *)pFVar15,L"    %.3f: %s (%d packages, %.1fms per package)");
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    uVar23 = local_298._8_8_ & 0xffffffff;
    pFVar28 = pFVar28 + 0x18;
  }
  pFVar28 = (local_220->AllocatorInstance).Data;
  pFVar25 = pFVar28 + (longlong)local_220->ArrayNum * 0x10;
  do {
    if (pFVar28 == pFVar25) {
LAB_141ea7979:
      local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b0.ArrayNum = 0;
      local_2b0.ArrayMax = 0;
      TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
                  *)local_250,&local_2b0);
      FOutputDevice::Log((FOutputDevice *)pFVar15,
                         L"Dumping all loaded assets by exclusive load time:");
      if (local_248 == (FString *)0x0) {
        AlgoImpl::
        IntroSortInternal<FExclusiveLoadPackageTimeTracker::FLoadTime,int,FIdentityFunctor,TDereferenceWrapper<FExclusiveLoadPackageTimeTracker::FLoadTime,_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l52::<lambda_6>_>_>
                  ((FLoadTime *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum,local_2b4,
                   (<lambda_6> *)&local_2b4);
      }
      else {
        AlgoImpl::
        IntroSortInternal<FExclusiveLoadPackageTimeTracker::FLoadTime,int,FIdentityFunctor,TDereferenceWrapper<FExclusiveLoadPackageTimeTracker::FLoadTime,_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l50::<lambda_5>_>_>
                  ((FLoadTime *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum,local_2b5,
                   (<lambda_5> *)&local_2b5);
      }
      iVar34 = 0;
      uVar24 = 0;
      dVar6 = 0.0;
      if (0 < local_2b0.ArrayNum) {
        lVar16 = 0;
        do {
          uVar32 = 0;
          if ((int)uVar24 < local_2b0.ArrayNum) {
            uVar32 = ~uVar24 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_2c8 = (double)(longlong)(int)uVar24;
            local_2c0 = (double)(longlong)local_2b0.ArrayNum;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar26 = (FName *)(local_2b0.AllocatorInstance.Data + lVar16);
          if (*pFVar26 != pFVar8->EndLoadName) {
            if ((double)pFVar26[2] <= dVar3) {
              iVar34 = iVar34 + 1;
              dVar6 = dVar6 + (double)pFVar26[2];
            }
            else {
              ::FName::ToString(pFVar26,&local_130);
              FOutputDevice::LogfImpl((FOutputDevice *)pFVar15,L"    %.1fms: %s");
              if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_130.Data.AllocatorInstance.Data);
              }
            }
          }
          uVar24 = uVar24 + 1;
          lVar16 = lVar16 + 0x30;
        } while ((int)uVar24 < local_2b0.ArrayNum);
        if (0 < iVar34) {
          local_2c8 = dVar6 * dVar2;
          FOutputDevice::LogfImpl
                    ((FOutputDevice *)pFVar15,
                     L"    ... skipped %d assets that loaded in less than %.1fms totaling %.1fms");
        }
      }
      FOutputDevice::Log((FOutputDevice *)pFVar15,
                         L"Dumping all loaded assets by inclusive load time:");
      if (local_248 == (FString *)0x0) {
        AlgoImpl::
        IntroSortInternal<FExclusiveLoadPackageTimeTracker::FLoadTime,int,FIdentityFunctor,TDereferenceWrapper<FExclusiveLoadPackageTimeTracker::FLoadTime,_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l71::<lambda_8>_>_>
                  ((FLoadTime *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum,local_2b2[0],
                   (<lambda_8> *)local_2b2);
      }
      else {
        AlgoImpl::
        IntroSortInternal<FExclusiveLoadPackageTimeTracker::FLoadTime,int,FIdentityFunctor,TDereferenceWrapper<FExclusiveLoadPackageTimeTracker::FLoadTime,_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l69::<lambda_7>_>_>
                  ((FLoadTime *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum,local_2b3,
                   (<lambda_7> *)&local_2b3);
      }
      iVar34 = 0;
      uVar24 = 0;
      if (0 < local_2b0.ArrayNum) {
        lVar16 = 0;
        do {
          uVar32 = 0;
          if ((int)uVar24 < local_2b0.ArrayNum) {
            uVar32 = ~uVar24 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_2c8 = (double)(longlong)(int)uVar24;
            local_2c0 = (double)(longlong)local_2b0.ArrayNum;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar26 = (FName *)(local_2b0.AllocatorInstance.Data + lVar16);
          if (*pFVar26 != pFVar8->EndLoadName) {
            if ((double)pFVar26[3] <= dVar3) {
              iVar34 = iVar34 + 1;
              dVar7 = dVar7 + (double)pFVar26[3];
            }
            else {
              ::FName::ToString(pFVar26,local_120);
              FOutputDevice::LogfImpl((FOutputDevice *)pFVar15,L"    %.1fms: %s");
              if (local_120[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120[0].Data.AllocatorInstance.Data);
              }
            }
          }
          uVar24 = uVar24 + 1;
          lVar16 = lVar16 + 0x30;
        } while ((int)uVar24 < local_2b0.ArrayNum);
        if (0 < iVar34) {
          local_2c8 = dVar7 * dVar2;
          FOutputDevice::LogfImpl
                    ((FOutputDevice *)pFVar15,
                     L"    ... skipped %d assets slower than %.1fms totaling %.1fms");
        }
      }
      pFVar15 = local_278;
      if (local_278 != (FOutputDeviceRedirector *)0x0) {
        (**(code **)(local_278->_padding_ + 0x28))(local_278);
        (**(code **)pFVar15->_padding_)(pFVar15,1);
        if (local_270 != (FOutputDeviceRedirectorState *)0x0) {
          (**(code **)(local_270->OutputDevicesLock).Mutex.Mutex.Ptr)(local_270,1);
        }
      }
      if ((FLoadTime *)local_2b0.AllocatorInstance.Data != (FLoadTime *)0x0) {
        FMemory::Free(local_2b0.AllocatorInstance.Data);
      }
      if ((FTimeCount *)local_298.AllocatorInstance.Data != (FTimeCount *)0x0) {
        FMemory::Free(local_298.AllocatorInstance.Data);
      }
      local_a0 = 0;
      if (local_a8 != (undefined1 *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,`FExclusiveLoadPackageTimeTracker::InternalDumpReport'::__l2::FTimeCount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,_FExclusiveLoadPackageTimeTracker::InternalDumpReport_::__l2::FTimeCount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8);
      if (local_268 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268);
      }
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    bVar11 = ::FString::StartsWith((FString *)pFVar28,L"LOWTIME=",8,IgnoreCase);
    if (bVar11) {
      if (pFVar28 != (FScriptContainerElement *)0x0) {
        local_2a0[0] = 0.0;
        if (*(int *)(pFVar28 + 8) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar28->field_0x0)->
                    AllocatorInstance).Data;
        }
        bVar11 = FParse::Value(pwVar18,L"LOWTIME=",local_2a0);
        if (bVar11) {
          dVar3 = (double)local_2a0[0];
        }
      }
      goto LAB_141ea7979;
    }
    pFVar28 = pFVar28 + 0x10;
  } while( true );
}

// InternalGetExclusiveLoadTime @ 141ea8160

double __thiscall
FExclusiveLoadPackageTimeTracker::InternalGetExclusiveLoadTime
          (FExclusiveLoadPackageTimeTracker *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLoadTime *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lpCriticalSection = &this->TimesCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
             ::Find((TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
                     *)&this->LoadTimes,param_1);
    if (pFVar1 == (FLoadTime *)0x0) {
      uVar2 = (undefined4)__real_bff0000000000000;
      uVar3 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    else {
      uVar2 = SUB84(pFVar1->ExclusiveTime,0);
      uVar3 = (undefined4)((ulonglong)pFVar1->ExclusiveTime >> 0x20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (double)CONCAT44(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InternalGetInclusiveLoadTime @ 141ea81e0

double __thiscall
FExclusiveLoadPackageTimeTracker::InternalGetInclusiveLoadTime
          (FExclusiveLoadPackageTimeTracker *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLoadTime *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lpCriticalSection = &this->TimesCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
             ::Find((TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
                     *)&this->LoadTimes,param_1);
    if (pFVar1 == (FLoadTime *)0x0) {
      uVar2 = (undefined4)__real_bff0000000000000;
      uVar3 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    else {
      uVar2 = SUB84(pFVar1->InclusiveTime,0);
      uVar3 = (undefined4)((ulonglong)pFVar1->InclusiveTime >> 0x20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (double)CONCAT44(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InternalPopLoadPackage @ 141ea8260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage
          (FExclusiveLoadPackageTimeTracker *this,UPackage *param_1,UObject *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FLoadTime *pFVar9;
  uint uVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FName local_res18;
  FName *local_res20;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  FName *local_98;
  FName local_90;
  undefined8 local_88;
  FName local_80;
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_res18 = this->UnknownAssetName;
  if (param_2 == (UObject *)0x0) {
    if (param_1 != (UPackage *)0x0) {
      local_res20 = &local_res18;
      local_a8 = &local_res20;
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage'::__l9::<lambda_1>,bool,UObject_*>
                 ::Call;
      ForEachObjectWithPackage
                (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_b0,false,RF_NoFlags,
                 Borrowed);
    }
  }
  else {
    local_res18 = *(FName *)(*(longlong *)&param_2->field_0x10 + 0x18);
  }
  lpCriticalSection = &this->TimesCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->TimeStack).ArrayNum < 1) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5348993635268427697>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\ExclusiveLoadPackageTimeTracker.cpp"
                         ,0x4f,"TimeStack.Num() > 0");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      QueryPerformanceCounter(&local_c8);
      dVar7 = __real_4170000000000000;
      iVar12 = (this->TimeStack).ArrayNum;
      uVar11 = iVar12 - 1;
      uVar10 = 0;
      if ((int)uVar11 < iVar12) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      dVar6 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar13 = (FName *)((this->TimeStack).AllocatorInstance.Data +
                         (longlong)(this->TimeStack).ArrayNum * 0x30 + -0x30);
      FVar2 = pFVar13[5];
      pFVar13[2] = (FName)((dVar6 - (double)pFVar13[4]) + (double)pFVar13[2]);
      pFVar9 = TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
               ::Find((TMapBase<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>_>
                       *)&this->LoadTimes,*pFVar13);
      if (pFVar9 == (FLoadTime *)0x0) {
        local_90 = *pFVar13;
        local_80 = pFVar13[2];
        local_98 = &local_90;
        local_88 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_a0 = pFVar13;
        local_78 = dVar6 - (double)FVar2;
        TSet<TTuple<FName,FExclusiveLoadPackageTimeTracker::FLoadTime>,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FExclusiveLoadPackageTimeTracker::FLoadTime_&&>_>
                  ((TSet<TTuple<FName,FExclusiveLoadPackageTimeTracker::FLoadTime>,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>,FDefaultSetAllocator>
                    *)&this->LoadTimes,
                   (TPairInitializer<FName_const_&,FExclusiveLoadPackageTimeTracker::FLoadTime_&&> *
                   )&stack0x00000008,(bool *)&local_a0);
      }
      else {
        pFVar9->AssetClass = local_res18;
        FVar3 = pFVar13[2];
        pFVar9->InclusiveTime = (dVar6 - (double)FVar2) + pFVar9->InclusiveTime;
        pFVar9->ExclusiveTime = (double)FVar3 + pFVar9->ExclusiveTime;
      }
      iVar12 = (this->TimeStack).ArrayNum;
      uVar11 = iVar12 - 1;
      uVar10 = 0;
      if ((int)uVar11 < iVar12) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      _Dst = (this->TimeStack).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x30;
      iVar12 = (this->TimeStack).ArrayNum + ~uVar11;
      if (iVar12 != 0) {
        memmove(_Dst,_Dst + 0x30,(longlong)iVar12 * 0x30);
      }
      piVar1 = &(this->TimeStack).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if (0 < (this->TimeStack).ArrayNum) {
        QueryPerformanceCounter(&local_c0);
        iVar12 = (this->TimeStack).ArrayNum;
        uVar11 = iVar12 - 1;
        dVar5 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
        uVar10 = 0;
        if ((int)uVar11 < iVar12) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(double *)
         ((this->TimeStack).AllocatorInstance.Data +
         (longlong)(this->TimeStack).ArrayNum * 0x30 + -0x10) = dVar5 + dVar7;
      }
      QueryPerformanceCounter(&local_b8);
      this->TrackerOverhead =
           (((double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7) - dVar6) +
           this->TrackerOverhead;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InternalPushLoadPackage @ 141ea8600

void __thiscall
FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage
          (FExclusiveLoadPackageTimeTracker *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  FName local_58;
  FName FStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  lpCriticalSection = &this->TimesCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_res8);
  dVar7 = __real_4170000000000000;
  iVar10 = (this->TimeStack).ArrayNum;
  dVar6 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (0 < iVar10) {
    uVar9 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar9 = ~(iVar10 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar11 = (longlong)(this->TimeStack).ArrayNum;
    pFVar2 = (this->TimeStack).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar11 * 0x30 + -0x20) =
         (dVar6 - *(double *)(pFVar2 + lVar11 * 0x30 + -0x10)) +
         *(double *)(pFVar2 + lVar11 * 0x30 + -0x20);
  }
  pFVar3 = (FName *)(this->TimeStack).AllocatorInstance.Data;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38._8_4_ = SUB84(dVar6,0);
  local_38._0_8_ = dVar6;
  local_38._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_58 = param_1;
  if ((pFVar3 <= &local_58) && (&local_58 < pFVar3 + (longlong)(this->TimeStack).ArrayMax * 6)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = (this->TimeStack).ArrayNum;
  piVar1 = &(this->TimeStack).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,(ForAnyElementType *)this,piVar1);
  }
  lVar11 = (longlong)iVar10;
  (this->TimeStack).ArrayNum = iVar10 + 1;
  pFVar4 = (this->TimeStack).AllocatorInstance.Data;
  *(FName *)(pFVar4 + lVar11 * 0x30) = local_58;
  ((FName *)(pFVar4 + lVar11 * 0x30))[1] = FStack_50;
  pFVar2 = pFVar4 + lVar11 * 0x30 + 0x10;
  *(undefined4 *)pFVar2 = (undefined4)local_48;
  *(undefined4 *)(pFVar2 + 4) = local_48._4_4_;
  *(undefined4 *)(pFVar2 + 8) = (undefined4)uStack_40;
  *(undefined4 *)(pFVar2 + 0xc) = uStack_40._4_4_;
  pFVar4 = pFVar4 + lVar11 * 0x30 + 0x20;
  *(undefined4 *)pFVar4 = local_38._0_4_;
  *(undefined4 *)(pFVar4 + 4) = local_38._4_4_;
  *(undefined4 *)(pFVar4 + 8) = local_38._8_4_;
  *(undefined4 *)(pFVar4 + 0xc) = local_38._12_4_;
  QueryPerformanceCounter(&local_res18);
  this->TrackerOverhead =
       (((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7) - dVar6) +
       this->TrackerOverhead;
                    /* WARNING: Could not recover jumptable at 0x000141ea8817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// InternalResetReport @ 141ea8830

void __thiscall
FExclusiveLoadPackageTimeTracker::InternalResetReport(FExclusiveLoadPackageTimeTracker *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->TimesCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<FName,FExclusiveLoadPackageTimeTracker::FLoadTime>,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FExclusiveLoadPackageTimeTracker::FLoadTime>,TDefaultMapHashableKeyFuncs<FName,FExclusiveLoadPackageTimeTracker::FLoadTime,0>,FDefaultSetAllocator>
             *)&this->LoadTimes);
    (this->TimeStack).ArrayNum = 0;
    if ((this->TimeStack).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)this,0,&(this->TimeStack).ArrayMax);
    }
                    /* WARNING: Could not recover jumptable at 0x000141ea8893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsPackageLoadTime @ 141ea9d10

bool __thiscall
FExclusiveLoadPackageTimeTracker::IsPackageLoadTime
          (FExclusiveLoadPackageTimeTracker *this,FLoadTime *param_1)

{
  return param_1->TimeName != this->EndLoadName;
}

// ResetReportCommandHandler @ 141eb7410

void __thiscall
FExclusiveLoadPackageTimeTracker::ResetReportCommandHandler
          (FExclusiveLoadPackageTimeTracker *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FExclusiveLoadPackageTimeTracker *this_00;
  
  this_00 = TrackerInstance;
  if (TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0) {
    this_00 = Construct();
  }
  InternalResetReport(this_00);
  return;
}

