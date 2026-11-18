// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AreScopedEventsEnabled @ 14198e730

bool __cdecl FActiveExternalProfilerBase::AreScopedEventsEnabled(void)

{
  return (bool)bEnableScopedEvents;
}

// EnableScopedEvents @ 1419934e0

void __cdecl FActiveExternalProfilerBase::EnableScopedEvents(bool param_1)

{
  atomic<bool> aVar1;
  
  aVar1 = bEnableScopedEvents;
  LOCK();
  bEnableScopedEvents = (atomic<bool>)param_1;
  UNLOCK();
  if ((aVar1 != (atomic<bool>)param_1) && (ActiveProfiler != (FExternalProfiler *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001419934ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ActiveProfiler + 0x30))(ActiveProfiler,param_1);
    return;
  }
  return;
}

// InitActiveProfiler @ 141996550

FExternalProfiler * __cdecl FActiveExternalProfilerBase::InitActiveProfiler(void)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  FExternalProfiler *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FExternalProfiler **ppFVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  FExternalProfiler *pFVar16;
  undefined1 local_res8 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  uint uStack_dc;
  FExternalProfiler *local_d8;
  FString local_d0;
  FString local_c0;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  TArrayView<FExternalProfiler_*,int> local_58;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  TArrayView<FExternalProfiler_*,int> local_38;
  
  if (((ActiveProfiler == (FExternalProfiler *)0x0) && (!bDidInitialize)) &&
     (bVar5 = FCommandLine::IsInitialized(), bVar5)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
    FVar4 = ProfilerFeatureName;
    pIVar7 = IModularFeatures::Get();
    pFVar16 = (FExternalProfiler *)0x0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = 0;
    uStack_dc = 0;
    iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,FVar4);
    pFVar9 = pFVar16;
    if (0 < iVar6) {
      do {
        lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar4,pFVar9);
        local_d8 = (FExternalProfiler *)(lVar8 + -8);
        if (lVar8 == 0) {
          local_d8 = pFVar16;
        }
        if (((local_e8.Data <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < local_e8.Data + (longlong)(int)uStack_dc * 8))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FExternalProfiler *)(*pcVar3)();
          return pFVar9;
        }
        if (local_e0 == uStack_dc) {
          local_e0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_e8,(int *)&uStack_dc);
        }
        uVar1 = local_e0 + 1;
        uVar14 = (int)pFVar9 + 1;
        *(FExternalProfiler **)(local_e8.Data + (longlong)(int)local_e0 * 8) = local_d8;
        pFVar9 = (FExternalProfiler *)(ulonglong)uVar14;
        local_e0 = uVar1;
      } while ((int)uVar14 < iVar6);
    }
    uVar1 = local_e0;
    uVar13 = (ulonglong)(int)local_e0;
    pFVar2 = local_e8.Data + uVar13 * 8;
    FVar15.Data = local_e8.Data;
    while( true ) {
      if ((uint)uVar13 != uVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FExternalProfiler_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar2) break;
      pFVar9 = *(FExternalProfiler **)FVar15.Data;
      if ((pFVar9 == (FExternalProfiler *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurProfiler != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ExternalProfiler.cpp"
                             ,0x4a,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FExternalProfiler *)(*pcVar3)();
        return pFVar9;
      }
      pwVar10 = (wchar_t *)(**(code **)((longlong)*pFVar9 + 0x28))(pFVar9);
      pwVar11 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar11,pwVar10);
      if (bVar5) {
        ActiveProfiler = pFVar9;
      }
      uVar13 = (ulonglong)local_e0;
      FVar15.Data = FVar15.Data + 8;
    }
    if (ActiveProfiler == (FExternalProfiler *)0x0) {
      FWindowsPlatformMisc::GetEnvironmentVariable(&local_d0,L"UE_EXTERNAL_PROFILER");
      uVar1 = local_e0;
      if (1 < local_d0.Data.ArrayNum) {
        local_a8 = local_d0.Data.AllocatorInstance.Data;
        iStack_a0 = local_d0.Data.ArrayNum + -1;
        if (local_d0.Data.ArrayNum == 0) {
          iStack_a0 = 0;
        }
        local_98 = local_e8.Data;
        if (((int)local_e0 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FExternalProfiler *)(*pcVar3)();
          return pFVar9;
        }
        uStack_60 = CONCAT44(uStack_9c,iStack_a0);
        uStack_90 = uVar1;
        local_58._12_4_ = uStack_8c;
        local_58.ArrayNum = uVar1;
        local_58.DataPtr = (FExternalProfiler **)local_98;
        local_68 = local_a8;
        ppFVar12 = AlgoImpl::
                   FindByPredicate<TArrayView<FExternalProfiler_*,int>_&,_FindProfilerByName_::__l2::<lambda_1>_>
                             (&local_58,(TStringView<wchar_t> *)&local_68);
        ActiveProfiler = pFVar16;
        if (ppFVar12 != (FExternalProfiler **)0x0) {
          ActiveProfiler = *ppFVar12;
        }
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (ActiveProfiler == (FExternalProfiler *)0x0) {
        FConfigCacheIni::GetStr
                  (GConfig,&local_c0,L"Core.ProfilingDebugging",L"ExternalProfiler",&GEngineIni);
        uVar1 = local_e0;
        if (1 < local_c0.Data.ArrayNum) {
          local_88 = local_c0.Data.AllocatorInstance.Data;
          iStack_80 = local_c0.Data.ArrayNum + -1;
          if (local_c0.Data.ArrayNum == 0) {
            iStack_80 = 0;
          }
          local_78 = local_e8.Data;
          if (((int)local_e0 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FExternalProfiler *)(*pcVar3)();
            return pFVar9;
          }
          uStack_40 = CONCAT44(uStack_7c,iStack_80);
          uStack_70 = uVar1;
          local_38._12_4_ = uStack_6c;
          local_38.ArrayNum = uVar1;
          local_38.DataPtr = (FExternalProfiler **)local_78;
          local_48 = local_88;
          ppFVar12 = AlgoImpl::
                     FindByPredicate<TArrayView<FExternalProfiler_*,int>_&,_FindProfilerByName_::__l2::<lambda_1>_>
                               (&local_38,(TStringView<wchar_t> *)&local_48);
          ActiveProfiler = pFVar16;
          if (ppFVar12 != (FExternalProfiler **)0x0) {
            ActiveProfiler = *ppFVar12;
          }
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
    }
    bDidInitialize = true;
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  return ActiveProfiler;
}

// IsActiveProfilerRecording @ 1419a0a70

bool __cdecl FActiveExternalProfilerBase::IsActiveProfilerRecording(void)

{
  return (bool)bIsRecording;
}

// SetActiveProfilerRecording @ 1419aad30

bool __cdecl FActiveExternalProfilerBase::SetActiveProfilerRecording(bool param_1)

{
  atomic<bool> aVar1;
  atomic<bool> aVar2;
  
  aVar1 = bIsRecording;
  LOCK();
  UNLOCK();
  aVar2 = (atomic<bool>)param_1;
  if (ActiveProfiler != (FExternalProfiler *)0x0) {
    if (bIsRecording == (atomic<bool>)0x0) {
      aVar2 = (atomic<bool>)param_1;
      if (param_1) {
        bIsRecording = (atomic<bool>)param_1;
        (**(code **)((longlong)*ActiveProfiler + 0x20))();
        aVar2 = bIsRecording;
      }
    }
    else {
      aVar2 = (atomic<bool>)param_1;
      if (!param_1) {
        bIsRecording = (atomic<bool>)param_1;
        (**(code **)((longlong)*ActiveProfiler + 0x18))();
        return (bool)aVar1;
      }
    }
  }
  bIsRecording = aVar2;
  return (bool)aVar1;
}

