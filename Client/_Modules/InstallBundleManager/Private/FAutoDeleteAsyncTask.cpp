// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 3

// Abandon @ 148bc5c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork>::Abandon
          (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *this)

{
  int *piVar1;
  TAtomic<FMinimalName> TVar2;
  FName FVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TStatId TVar11;
  undefined8 uVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar13;
  FName FVar14;
  FNameEntryId FVar15;
  FNameEntryId FVar16;
  undefined1 auStack_88 [32];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FStatMessage FStack_50;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  TVar11 = InstallBundleUtil::FInstallBundleWork::GetStatId(&this->Task);
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  TVar2 = (TVar11.StatIdPtr)->Name;
  FVar3 = *(FName *)TVar2;
  FVar16 = FVar3.ComparisonIndex.Value;
  FVar15.Value = 0;
  uVar10 = FVar3.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_68.s,(char *)*(FName *)((longlong)TVar2 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_68.s.LowPart = FVar16.Value;
        LStack_68.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_68.s,(wchar_t *)*(FName *)((longlong)TVar2 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar7 = true;
        bVar9 = true;
      }
    }
    bVar8 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) ||
       (FVar14 = FStack_60, FThreadStats::bPrimaryEnable != false)) {
      LStack_68.s.LowPart = FVar16.Value;
      LStack_68.s.HighPart = uVar10;
      FStack_60 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar8 = true;
      FVar14 = FVar3;
      FVar15.Value = FStack_60.ComparisonIndex.Value;
    }
  }
  pvVar4 = *(void **)&(this->Task).WorkFunc;
  if (pvVar4 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar4);
    plVar5 = *(longlong **)&(this->Task).WorkFunc.field_0x28;
    pcVar6 = *(code **)&(this->Task).WorkFunc;
    plVar13 = (longlong *)&(this->Task).WorkFunc.field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12);
  }
  if (this != (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_50.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      FStack_50.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&LStack_68);
      FStack_50.StatData.Pad[4] = '\0';
      FStack_50.StatData.Pad[5] = '\0';
      FStack_50.StatData.Pad[6] = '\0';
      FStack_50.StatData.Pad[7] = '\0';
      FStack_50.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_50.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_50.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_50.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoThreadedWork @ 148bc7fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork>::DoThreadedWork
          (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *this)

{
  int *piVar1;
  TAtomic<FMinimalName> TVar2;
  FName FVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TStatId TVar11;
  undefined8 uVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar13;
  FName FVar14;
  FNameEntryId FVar15;
  FNameEntryId FVar16;
  undefined1 auStack_88 [32];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FStatMessage FStack_50;
  FInheritedContextScope FStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&FStack_40);
  TVar11 = InstallBundleUtil::FInstallBundleWork::GetStatId(&this->Task);
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  FStack_60.ComparisonIndex.Value = 0;
  FStack_60.Number = 0;
  TVar2 = (TVar11.StatIdPtr)->Name;
  FVar3 = *(FName *)TVar2;
  FVar16 = FVar3.ComparisonIndex.Value;
  FVar15.Value = 0;
  uVar10 = FVar3.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStack_68.s,(char *)*(FName *)((longlong)TVar2 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_68.s.LowPart = FVar16.Value;
        LStack_68.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_68.s,(wchar_t *)*(FName *)((longlong)TVar2 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar7 = true;
        bVar9 = true;
      }
    }
    bVar8 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) ||
       (FVar14 = FStack_60, FThreadStats::bPrimaryEnable != false)) {
      LStack_68.s.LowPart = FVar16.Value;
      LStack_68.s.HighPart = uVar10;
      FStack_60 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar8 = true;
      FVar14 = FVar3;
      FVar15.Value = FStack_60.ComparisonIndex.Value;
    }
  }
  pvVar4 = *(void **)&(this->Task).WorkFunc;
  if (pvVar4 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar4);
    plVar5 = *(longlong **)&(this->Task).WorkFunc.field_0x28;
    pcVar6 = *(code **)&(this->Task).WorkFunc;
    plVar13 = (longlong *)&(this->Task).WorkFunc.field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12);
  }
  if (this != (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_50.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      FStack_50.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&LStack_68);
      FStack_50.StatData.Pad[4] = '\0';
      FStack_50.StatData.Pad[5] = '\0';
      FStack_50.StatData.Pad[6] = '\0';
      FStack_50.StatData.Pad[7] = '\0';
      FStack_50.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_50.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_50.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_50.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&FStack_40.MetaScope);
  FMemScope::~FMemScope(&FStack_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&FStack_40,FStack_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// DoWork @ 148bc7fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork>::DoWork
          (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *this)

{
  int *piVar1;
  TAtomic<FMinimalName> TVar2;
  FName FVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TStatId TVar11;
  undefined8 uVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar13;
  FName FVar14;
  FNameEntryId FVar15;
  FNameEntryId FVar16;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  FName local_60;
  FStatMessage local_50;
  FInheritedContextScope local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_40);
  TVar11 = InstallBundleUtil::FInstallBundleWork::GetStatId(&this->Task);
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  TVar2 = (TVar11.StatIdPtr)->Name;
  FVar3 = *(FName *)TVar2;
  FVar16 = FVar3.ComparisonIndex.Value;
  FVar15.Value = 0;
  uVar10 = FVar3.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_68.s,(char *)*(FName *)((longlong)TVar2 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.s.LowPart = FVar16.Value;
        local_68.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_68.s,(wchar_t *)*(FName *)((longlong)TVar2 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x60);
        bVar7 = true;
        bVar9 = true;
      }
    }
    bVar8 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) ||
       (FVar14 = local_60, FThreadStats::bPrimaryEnable != false)) {
      local_68.s.LowPart = FVar16.Value;
      local_68.s.HighPart = uVar10;
      local_60 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar8 = true;
      FVar14 = FVar3;
      FVar15.Value = local_60.ComparisonIndex.Value;
    }
  }
  pvVar4 = *(void **)&(this->Task).WorkFunc;
  if (pvVar4 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar4);
    plVar5 = *(longlong **)&(this->Task).WorkFunc.field_0x28;
    pcVar6 = *(code **)&(this->Task).WorkFunc;
    plVar13 = (longlong *)&(this->Task).WorkFunc.field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12);
  }
  if (this != (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_68);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_40.MetaScope);
  FMemScope::~FMemScope(&local_40.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_40,local_40.LLMScopes.LLMScopes.ArrayNum);
  return;
}

