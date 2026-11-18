// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 6

// ~FParallelExecutor @ 142adac70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    LaunchTask(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142adacbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 142adacd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    LaunchTask(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142adad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 142ae6130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  longlong lVar21;
  uchar *puVar22;
  uint uVar23;
  int iVar25;
  char cVar26;
  longlong lVar27;
  int iVar28;
  FLinearBlockAllocatorThreadAccessor *pFVar29;
  int iVar30;
  longlong lVar31;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  longlong local_590;
  char local_588;
  char local_587;
  int local_584;
  int local_580;
  ulong64 local_578;
  undefined1 local_570 [4];
  int local_56c;
  int local_568;
  uint local_564;
  int local_560;
  FMemMark local_558;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>(wchar_t_const_*,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<UE::FLinearBlockAllocatorThreadAccessor,int>_const_&)_::_2_::FParallelForData>
  local_530;
  longlong local_528;
  longlong local_520;
  longlong local_518;
  longlong *local_510;
  LARGE_INTEGER local_508;
  longlong *local_500;
  longlong local_4f8;
  FName local_4f0;
  LARGE_INTEGER local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  FSoftObjectPath local_4d0;
  FInheritedContextScope local_4b0;
  TStringBuilderBase<char8_t> local_488;
  uchar local_468 [1024];
  ulonglong local_68 [6];
  int iVar24;
  undefined1 auVar33 [16];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_5b8;
  local_510 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_4b0);
  puVar19 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_4d8 = local_570;
  local_4e0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar20 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_4e0,puVar19);
  local_558.Mem = (FMemStackBase *)(pFVar20 + 2);
  local_558.Top = (local_558.Mem)->Top;
  local_558.SavedChunk = *(FTaggedMemory **)(pFVar20 + 4);
  local_558.bPopped = false;
  local_558.NextTopmostMark = *(FMemMark **)(pFVar20 + 5);
  pFVar20[5] = (FTlsAutoCleanup)&local_558;
  *(int *)(pFVar20 + 6) = *(int *)(pFVar20 + 6) + 1;
  lVar31 = *(longlong *)this;
  if (param_1) {
    local_580 = *(int *)(lVar31 + 0x54);
    local_578 = 0xffffffffffffffff;
  }
  else {
    uVar23 = *(uint *)((longlong)this + 8);
    uVar17 = 0;
    if ((int)uVar23 < *(int *)(lVar31 + 0x80)) {
      uVar17 = ~uVar23 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_598 = (longlong)(int)uVar23, local_590 = (longlong)*(int *)(lVar31 + 0x80),
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar31 + 0x78) + 0x40 + (longlong)(int)uVar23 * 0x48);
    TaskTrace::Started(uVar3);
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_580 = iVar28;
    local_578 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
      lVar31 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar31 + 0x48);
      iVar30 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar31 + 0x80) <= iVar30) {
        iVar30 = -1;
      }
      if (iVar30 != -1) {
        local_530.Reference = *(FParallelForData **)this;
        if (local_530.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_530.Reference)->field_0x8 = *(int *)&(local_530.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_584 = iVar28;
        LaunchTask(&local_530,iVar30,true);
        local_580 = iVar28;
        local_578 = uVar3;
        if (local_530.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_530.Reference)->field_0x8;
          LOCK();
          iVar30 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar30 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_530.Reference != (FParallelForData *)0x0)) {
            local_584 = iVar28;
            (*(code *)**(undefined8 **)local_530.Reference)(local_530.Reference,1);
            local_580 = iVar28;
            local_578 = uVar3;
          }
        }
      }
    }
  }
  iVar28 = local_580;
  bVar14 = CpuChannel->Enabled < 0;
  local_584 = local_580;
  if (bVar14) {
    local_588 = '\0';
  }
  else {
    local_588 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar10 = __real_42e312d000000010;
  dVar9 = __real_416312d000000000;
  cVar26 = !bVar14;
  local_520 = -0x8000000000000000;
  local_518 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_587 = '\0';
  }
  else {
    local_587 = '\x01';
    QueryPerformanceCounter(&local_508);
    auVar32._8_8_ = extraout_XMM0_Qb;
    auVar32._0_8_ = extraout_XMM0_Qa;
    iVar30 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar30 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_508.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar9 +
                   dVar10;
    auVar32 = roundpd(auVar32,auVar6,1);
    local_520 = (longlong)auVar32._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)iVar30 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar32 = roundpd(auVar32,auVar7,1);
    local_518 = (longlong)auVar32._0_8_;
  }
  lVar31 = *(longlong *)this;
  local_56c = *(int *)(lVar31 + 0x4c);
  local_568 = *(int *)(lVar31 + 0x50);
  local_500 = *(longlong **)(lVar31 + 0x58);
  local_4f8 = *(longlong *)(lVar31 + 0x60);
  lVar31 = local_520;
  lVar27 = local_518;
  iVar30 = iVar28;
  iVar25 = local_56c;
  do {
    do {
      lVar13 = local_4f8;
      plVar12 = local_500;
      plVar11 = local_510;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar25) && (iVar30 + -1 <= iVar24)) && (iVar24 = iVar30 + -1, !param_1))
      goto LAB_142ae66ea;
      uVar23 = iVar24 * local_568;
      local_560 = iVar25;
      if ((int)(uVar23 + local_568) < iVar25) {
        local_560 = uVar23 + local_568;
      }
      lVar21 = (longlong)(int)uVar23;
      local_564 = uVar23;
      if (lVar21 < local_560) {
        lVar31 = lVar21 << 5;
        local_528 = local_560 - lVar21;
        do {
          uVar17 = *(uint *)(plVar11 + 1);
          iVar28 = (int)plVar12[1];
          uVar18 = 0;
          if ((int)uVar17 < iVar28) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (local_598 = (longlong)(int)uVar17, local_590 = (longlong)iVar28,
             bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
          plVar4 = *(longlong **)(lVar13 + 8);
          pFVar29 = (FLinearBlockAllocatorThreadAccessor *)((longlong)(int)uVar17 * 0x10 + *plVar12)
          ;
          iVar28 = (int)plVar4[1];
          uVar17 = 0;
          if ((int)uVar23 < iVar28) {
            uVar17 = ~uVar23 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_598 = (longlong)(int)uVar23;
            local_590 = (longlong)iVar28;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
          }
          lVar27 = *plVar4;
          FAssetData::GetSoftObjectPath(*(FAssetData **)(lVar27 + lVar31),&local_4d0);
          local_4f0 = local_4d0.AssetPath.PackageName;
          local_488.Base = local_468;
          local_488.bIsDynamic = false;
          local_488.bIsExternal = false;
          local_488.CurPos = local_468;
          local_488.End = (uchar *)local_68;
          ::FName::AppendString(&local_4f0,&local_488);
          puVar22 = ToLowerStrNDup(pFVar29,local_488.Base,
                                   (int)local_488.CurPos - (int)local_488.Base);
          *(uchar **)(lVar27 + 8 + lVar31) = puVar22;
          *(FName *)(lVar27 + 0x10 + lVar31) = local_4d0.AssetPath.AssetName;
          iVar28 = local_4d0.SubPathString.Data.ArrayNum + -1;
          if (local_4d0.SubPathString.Data.ArrayNum == 0) {
            iVar28 = 0;
          }
          puVar22 = ToLowerStrNDup(pFVar29,(uchar *)local_4d0.SubPathString.Data.AllocatorInstance.
                                                    Data,iVar28);
          *(uchar **)(lVar27 + 0x18 + lVar31) = puVar22;
          TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_488);
          if (local_4d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_4d0.SubPathString.Data.AllocatorInstance.Data);
          }
          uVar23 = uVar23 + 1;
          lVar31 = lVar31 + 0x20;
          local_528 = local_528 + -1;
        } while (local_528 != 0);
        local_528 = 0;
        lVar31 = local_520;
        lVar27 = local_518;
        this = local_510;
        cVar26 = local_588;
        iVar25 = local_56c;
      }
      iVar30 = local_580;
      iVar28 = local_584;
      if ((int)local_564 < iVar25) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar24 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar24 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar14 = true;
          goto LAB_142ae66ec;
        }
      }
      if (iVar25 <= local_560) goto LAB_142ae66ea;
    } while (local_587 == '\0');
    QueryPerformanceCounter(&local_4e8);
    auVar33._8_8_ = extraout_XMM0_Qb_00;
    auVar33._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_4e8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar9 +
                   dVar10;
    auVar32 = roundpd(auVar33,auVar8,1);
    iVar25 = local_56c;
  } while ((longlong)auVar32._0_8_ - lVar31 <= lVar27);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_142ae66ea:
  bVar14 = false;
LAB_142ae66ec:
  if (cVar26 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_578);
  }
  if (local_558.bPopped == false) {
    if (((local_558.Mem)->TopMark != &local_558) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    local_558.bPopped = true;
    (local_558.Mem)->NumMarks = (local_558.Mem)->NumMarks + -1;
    if (local_558.SavedChunk != (local_558.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_558.Mem,local_558.SavedChunk);
    }
    (local_558.Mem)->Top = local_558.Top;
    (local_558.Mem)->TopMark = local_558.NextTopmostMark;
    local_558.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_4b0.MetaScope);
  FMemScope::~FMemScope(&local_4b0.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_4b0,local_4b0.LLMScopes.LLMScopes.ArrayNum);
  return bVar14;
}

// operator() @ 142ae67f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *this_00;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  char local_127;
  int local_124;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  FMemMark local_100;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>(wchar_t_const_*,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>_const_&)_::_2_::FParallelForData>
  local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_c0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_110;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  local_100.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar22 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar17 < *(int *)(lVar22 + 0x80)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_138 = (longlong)(int)uVar17, local_130 = (longlong)*(int *)(lVar22 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar17 * 0x48);
    TaskTrace::Started(uVar3);
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar28;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar26) {
        iVar26 = -1;
      }
      if (iVar26 != -1) {
        local_d8.Reference = *(FParallelForData **)this;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d8.Reference)->field_0x8 = *(int *)&(local_d8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_124 = iVar28;
        LaunchTask(&local_d8,iVar26,true);
        local_120 = iVar28;
        local_118 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d8.Reference)->field_0x8;
          LOCK();
          iVar26 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar28;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_120 = iVar28;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar28 = local_120;
  bVar13 = CpuChannel->Enabled < 0;
  local_124 = local_120;
  if (bVar13) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar13;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar17 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar17 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_d0 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar17 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c8 = (longlong)auVar29._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_10c = *(int *)(lVar22 + 0x4c);
  local_108 = *(int *)(lVar22 + 0x50);
  local_b0 = *(longlong **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c8;
  lVar23 = local_d0;
  iVar26 = iVar28;
  iVar20 = local_10c;
  iVar24 = local_108;
  do {
    do {
      this_00 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar20) && (iVar26 + -1 <= iVar25)) && (iVar25 = iVar26 + -1, !param_1))
      goto LAB_142ae6c9b;
      iVar25 = iVar25 * iVar24;
      local_104 = iVar25;
      lVar12 = local_130;
      iVar28 = local_124;
      iVar26 = local_120;
      iVar27 = iVar20;
      if (iVar25 + iVar24 < iVar20) {
        iVar27 = iVar25 + iVar24;
      }
      for (; local_124 = iVar28, local_120 = iVar26, iVar25 < iVar27; iVar25 = iVar25 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar28 = (int)plVar11[1];
        local_130 = (longlong)iVar28;
        uVar16 = 0;
        if ((int)uVar17 < iVar28) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_138 = (longlong)(int)uVar17,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar12 = local_130, bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_130 = lVar12;
        `UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::
        operator()(this_00,(FDirToScanBuffer *)((longlong)(int)uVar17 + *plVar11),iVar25);
        lVar22 = local_c8;
        lVar23 = local_d0;
        this = local_c0;
        cVar21 = local_128;
        lVar12 = local_130;
        iVar28 = local_124;
        iVar26 = local_120;
        iVar20 = local_10c;
        iVar24 = local_108;
      }
      local_130 = lVar12;
      if (local_104 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_142ae6ca2;
        }
      }
      if (iVar20 <= iVar27) goto LAB_142ae6c9b;
    } while (local_127 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar20 = local_10c;
    iVar24 = local_108;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_142ae6c9b:
  bVar13 = false;
LAB_142ae6ca2:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_100.bPopped == false) {
    if (((local_100.Mem)->TopMark != &local_100) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    local_100.bPopped = true;
    (local_100.Mem)->NumMarks = (local_100.Mem)->NumMarks + -1;
    if (local_100.SavedChunk != (local_100.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_100.Mem,local_100.SavedChunk);
    }
    (local_100.Mem)->Top = local_100.Top;
    (local_100.Mem)->TopMark = local_100.NextTopmostMark;
    local_100.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 142b05b00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>(wchar_t_const_*,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<UE::FLinearBlockAllocatorThreadAccessor,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>_>'::`5'::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// LaunchTask @ 142b05d70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>(wchar_t_const_*,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>_>'::`2'::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

