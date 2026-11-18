// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 60

// ActivePreloadScreen'' @ 14104f080

void __cdecl `dynamic_initializer_for_'FPreLoadScreenManager::ActivePreloadScreen__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPreLoadScreenManager::ActivePreloadScreen__);
  return;
}

// ActivePreloadScreenCriticalSection'' @ 14104f0a0

void __cdecl
`dynamic_initializer_for_'FPreLoadScreenManager::ActivePreloadScreenCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FPreLoadScreenManager::ActivePreloadScreenCriticalSection,4000);
  atexit(`dynamic_atexit_destructor_for_'FPreLoadScreenManager::ActivePreloadScreenCriticalSection__
        );
  return;
}

// BackgroundImageCrit'' @ 14104f0d0

void __cdecl `dynamic_initializer_for_'SSimplePreLoadScreenWidget::BackgroundImageCrit__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&SSimplePreLoadScreenWidget::BackgroundImageCrit,4000);
  atexit(`dynamic_atexit_destructor_for_'SSimplePreLoadScreenWidget::BackgroundImageCrit__);
  return;
}

// DefaultInitialLoadingGroupIdentifier'' @ 14104f100

void __cdecl
`dynamic_initializer_for_'FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier__
          (void)

{
  ::FString::FString(&FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier,
                     L"InitialLoad");
  atexit(`dynamic_atexit_destructor_for_'FPreLoadSettingsContainerBase::
         DefaultInitialLoadingGroupIdentifier__);
  return;
}

// Instance'' @ 14104f130

void __cdecl `dynamic_initializer_for_'FPreLoadScreenManager::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPreLoadScreenManager::Instance__);
  return;
}

// UseSystemFontOverride'' @ 14104f150

void __cdecl `dynamic_initializer_for_'FPreLoadSettingsContainerBase::UseSystemFontOverride__(void)

{
  ::FString::FString(&FPreLoadSettingsContainerBase::UseSystemFontOverride,L"SYSTEM");
  atexit(`dynamic_atexit_destructor_for_'FPreLoadSettingsContainerBase::UseSystemFontOverride__);
  return;
}

// `dynamic_initializer_for_'LogPreLoadScreenManager'' @ 14104f180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPreLoadScreenManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPreLoadScreenManager,L"LogPreLoadScreenManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPreLoadScreenManager__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPreLoadScreen'' @ 14104f1c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantPreLoadScreen__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PreLoadScreen";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PreLoadScreen",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// DestructItems<FPreLoadSettingsContainerBase::FCustomBrushDefine,int> @ 145abd3a0

void __cdecl
DestructItems<FPreLoadSettingsContainerBase::FCustomBrushDefine,int>
          (FCustomBrushDefine *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->FilePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->BrushIdentifier).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<IPreLoadScreen,1>,int> @ 145abd3f0

void __cdecl
DestructItems<TSharedPtr<IPreLoadScreen,1>,int>(TSharedPtr<IPreLoadScreen,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_BeginPreLoadScreenFrame560>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145abe120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FPreLoadScreenManager::EarlyPlayRenderFrameTick_::__l17::TSTR_BeginPreLoadScreenFrame560>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_BeginPreLoadScreenFrame560>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145abe271;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145abe465;
  }
LAB_145abe271:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145abe34f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145abe34f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145abe465:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_FinishPreLoadScreenFrame581>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145abe4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FPreLoadScreenManager::EarlyPlayRenderFrameTick_::__l17::TSTR_FinishPreLoadScreenFrame581>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_FinishPreLoadScreenFrame581>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145abe5f1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145abe7e5;
  }
LAB_145abe5f1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145abe6cf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145abe6cf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145abe7e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::TSTR_PreLoadScreenRenderTick242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145abe820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread_::__l26::TSTR_PreLoadScreenRenderTick242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::TSTR_PreLoadScreenRenderTick242>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145abe971;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145abeb65;
  }
LAB_145abe971:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145abea4f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145abea4f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145abeb65:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MakeShared<FPreLoadSlateWidgetRenderer,1,TSharedRef<SWindow,1>_&,TSharedPtr<SVirtualWindow,1>_&,FSlateRenderer_*> @ 145abeba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FPreLoadSlateWidgetRenderer,1> * __cdecl
MakeShared<FPreLoadSlateWidgetRenderer,1,TSharedRef<SWindow,1>_&,TSharedPtr<SVirtualWindow,1>_&,FSlateRenderer_*>
          (TSharedRef<FPreLoadSlateWidgetRenderer,1> *__return_storage_ptr__,
          TSharedRef<SWindow,1> *param_1,TSharedPtr<SVirtualWindow,1> *param_2,
          FSlateRenderer **param_3)

{
  FSlateRenderer *pFVar1;
  SVirtualWindow *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWindow *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<FPreLoadSlateWidgetRenderer,1> *pTVar10;
  FHittestGrid *this;
  FHittestGrid *pFVar11;
  TRawPtrProxy<FHittestGrid> local_res8;
  
  pTVar9 = operator_new(0x48);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPreLoadSlateWidgetRenderer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPreLoadSlateWidgetRenderer___00_SharedPointerInternals__6B_
    ;
    pFVar1 = *param_3;
    pSVar2 = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar4 = param_1->Object;
    pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[1]._padding_ = (longlong)pSVar4;
    if (pSVar2 == (SVirtualWindow *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<FPreLoadSlateWidgetRenderer,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
    *(SVirtualWindow **)&pTVar9[1].SharedReferenceCount = pSVar2;
    pTVar9[2]._padding_ = (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar6._0_4_ = pTVar9[1].SharedReferenceCount;
    lVar6._4_4_ = pTVar9[1].WeakReferenceCount;
    if (lVar6 == 0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<FPreLoadSlateWidgetRenderer,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
    pFVar11 = (FHittestGrid *)0x0;
    *(FSlateRenderer **)&pTVar9[3].SharedReferenceCount = pFVar1;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[4]._padding_ = 0;
    this = operator_new(0xf8);
    if (this != (FHittestGrid *)0x0) {
      pFVar11 = FHittestGrid::FHittestGrid(this);
    }
    local_res8.Object = pFVar11;
    TSharedPtr<FHittestGrid,1>::operator=<FHittestGrid>
              ((TSharedPtr<FHittestGrid,1> *)&pTVar9[2].SharedReferenceCount,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    __return_storage_ptr__->Object = (FPreLoadSlateWidgetRenderer *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if ((FPreLoadSlateWidgetRenderer *)(pTVar9 + 1) == (FPreLoadSlateWidgetRenderer *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<FPreLoadSlateWidgetRenderer,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SScaleBox,RequiredArgs::T0RequiredArgs> @ 145abed40

TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> @ 145abedf0

TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,1,0> @ 145abf5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread_::__l26::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::`26'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,1,0> @ 145abf610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FPreLoadScreenManager::EarlyPlayRenderFrameTick_::__l17::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::`17'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,1,0> @ 145abf630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FPreLoadScreenManager::EarlyPlayRenderFrameTick_::__l17::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::`17'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// `vcall'{24,{flat}}'_}' @ 145ac0644

/* [thunk]: __cdecl FBuildPatchServicesPreLoadManagerBase::`vcall'{24,{flat}}' }' */

void __thiscall
FBuildPatchServicesPreLoadManagerBase::_vcall__24__flat______
          (FBuildPatchServicesPreLoadManagerBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ac0647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// `vcall'{592,{flat}}'_}' @ 145ac0650

/* [thunk]: __cdecl SSimplePreLoadScreenWidget::`vcall'{592,{flat}}' }' */

void __thiscall
SSimplePreLoadScreenWidget::_vcall__592__flat______(SSimplePreLoadScreenWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ac0653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x250))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 145ac0660

/* [thunk]:private: virtual void * __ptr64 __cdecl FPreLoadSettingsContainerBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FPreLoadSettingsContainerBase::_vector_deleting_destructor__adjustor_8__
          (FPreLoadSettingsContainerBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FPreLoadSettingsContainerBase *)&this[-1].CurrentLoadGroup.Number,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 145ac0670

/* [thunk]:public: virtual void * __ptr64 __cdecl SVirtualWindow::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SVirtualWindow::_vector_deleting_destructor__adjustor_680__(SVirtualWindow *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SVirtualWindow *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145ac0690

void * __thiscall
TBaseRawMethodDelegateInstance<0,FBuildPatchServicesPreLoadManagerBase,void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FBuildPatchServicesPreLoadManagerBase,void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac06c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPreLoadScreenSlateSynchMechanism,void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPreLoadScreenSlateSynchMechanism,void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac06f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPreLoadScreenSlateSynchMechanism,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPreLoadScreenSlateSynchMechanism,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0720

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0780

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac07e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0840

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSimplePreLoadScreenWidget_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac08a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::`26'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac08e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::`17'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::`17'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0960

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPreLoadSlateWidgetRenderer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPreLoadSlateWidgetRenderer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac09a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScaleBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SScaleBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac09e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SVirtualWindow,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SVirtualWindow,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x768);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0a20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHittestGrid,SharedPointerInternals::DefaultDeleter<FHittestGrid>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FHittestGrid,SharedPointerInternals::DefaultDeleter<FHittestGrid>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0a60

void * __thiscall
FBuildPatchServicesPreLoadManagerBase::_scalar_deleting_destructor_
          (FBuildPatchServicesPreLoadManagerBase *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FBuildPatchServicesPreLoadManagerBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentBuildInstaller).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBuildPatchCompletedDelegate).field_0x8,
             *(int *)&(this->OnBuildPatchCompletedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnBuildPatchCompletedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBuildPatchCompletedDelegate);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0b00

void * __thiscall FHittestGrid::_scalar_deleting_destructor_(FHittestGrid *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  
  FInstancedStruct::Reset(&(this->LastNavigationMethod).InstancedStruct);
  DestructItems<FHittestGrid::FAppendedGridData,int>
            ((FAppendedGridData *)(this->AppendedGridArray).AllocatorInstance.Data,
             (this->AppendedGridArray).ArrayNum);
  pFVar3 = (this->AppendedGridArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FHittestGrid::FCell,int>
            ((FCell *)(this->Cells).AllocatorInstance.Data,(this->Cells).ArrayNum);
  pFVar3 = (this->Cells).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::DestroyElements
            (&this->WidgetArray,0,*(int *)&(this->WidgetArray).field_0x8);
  puVar1 = &(this->WidgetArray).field_0xc;
  *(undefined4 *)&(this->WidgetArray).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->WidgetArray,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WidgetArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetArray).field_0x34 = 0;
  iVar2 = *(int *)&(this->WidgetArray).field_0x2c;
  *(undefined4 *)&(this->WidgetArray).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->WidgetArray).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetArray).field_0x10,0);
  }
  pvVar4 = *(void **)&(this->WidgetArray).field_0x20;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (*(void **)&this->WidgetArray != (void *)0x0) {
    FMemory::Free(*(void **)&this->WidgetArray);
  }
  *(undefined4 *)&(this->WidgetMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->WidgetMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWidget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
FPreLoadScreenSlateThreadTask::_scalar_deleting_destructor_
          (FPreLoadScreenSlateThreadTask *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0c80

void * __thiscall
FPreLoadSettingsContainerBase::_scalar_deleting_destructor_
          (FPreLoadSettingsContainerBase *this,uint param_1)

{
  ~FPreLoadSettingsContainerBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145ac0cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SVirtualWindow::_scalar_deleting_destructor_(SVirtualWindow *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TooltipPresenter).SharedReferenceCount.ReferenceController);
  SWindow::~SWindow((SWindow *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x758);
  }
  return this;
}

// IMPLEMENT_MODULE_PreLoadScreen @ 145ad1d30

void __cdecl IMPLEMENT_MODULE_PreLoadScreen(void)

{
  return;
}

// ActivePreloadScreen'' @ 1503c8e70

void __cdecl `dynamic_atexit_destructor_for_'FPreLoadScreenManager::ActivePreloadScreen__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController;
  if (FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// ActivePreloadScreenCriticalSection'' @ 1503c8ea0

void __cdecl
`dynamic_atexit_destructor_for_'FPreLoadScreenManager::ActivePreloadScreenCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&FPreLoadScreenManager::ActivePreloadScreenCriticalSection);
  return;
}

// BackgroundImageCrit'' @ 1503c8ec0

void __cdecl `dynamic_atexit_destructor_for_'SSimplePreLoadScreenWidget::BackgroundImageCrit__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&SSimplePreLoadScreenWidget::BackgroundImageCrit);
  return;
}

// DefaultInitialLoadingGroupIdentifier'' @ 1503c8ee0

void __cdecl
`dynamic_atexit_destructor_for_'FPreLoadSettingsContainerBase::
DefaultInitialLoadingGroupIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.
               AllocatorInstance.Data;
  if (FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FPreLoadSettingsContainerBase::DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Instance'' @ 1503c8f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FPreLoadScreenManager::Instance__(void)

{
  FPreLoadScreenManager::FPreLoadScreenManagerDelete::operator()
            ((FPreLoadScreenManagerDelete *)&FPreLoadScreenManager::Instance,
             FPreLoadScreenManager::Instance.Ptr);
  return;
}

// UseSystemFontOverride'' @ 1503c8f20

void __cdecl
`dynamic_atexit_destructor_for_'FPreLoadSettingsContainerBase::UseSystemFontOverride__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPreLoadSettingsContainerBase::UseSystemFontOverride.Data.AllocatorInstance.Data;
  if (FPreLoadSettingsContainerBase::UseSystemFontOverride.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FPreLoadSettingsContainerBase::UseSystemFontOverride.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'BuildVerification'' @ 1503c8f40

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__BuildVerification__(void)

{
  if (BuildVerification.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*BuildVerification.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CleanUp'' @ 1503c8f60

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__CleanUp__(void)

{
  if (::CleanUp.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::CleanUp.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Completed'' @ 1503c8f80

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Completed__(void)

{
  if (Completed.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Completed.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Downloading'' @ 1503c8fa0

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Downloading__(void)

{
  if (Downloading.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Downloading.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Initializing'' @ 1503c8fc0

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Initializing__(void)

{
  if (Initializing.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Initializing.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Installing'' @ 1503c8fe0

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Installing__(void)

{
  if (Installing.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c8fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Installing.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogPreLoadScreenManager'' @ 1503c9000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPreLoadScreenManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPreLoadScreenManager);
  return;
}

// `dynamic_atexit_destructor_for_'Paused'' @ 1503c9020

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Paused__(void)

{
  if (Paused.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c902f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Paused.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'PrerequisitesInstall'' @ 1503c9040

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__PrerequisitesInstall__(void)

{
  if (PrerequisitesInstall.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c904f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*PrerequisitesInstall.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Queued'' @ 1503c9060

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Queued__(void)

{
  if (Queued.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c906f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Queued.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Resuming'' @ 1503c9080

void __cdecl
`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
_dynamic_atexit_destructor_for__Resuming__(void)

{
  if (Resuming.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c908f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Resuming.TextData.Reference + 0x10))();
    return;
  }
  return;
}

