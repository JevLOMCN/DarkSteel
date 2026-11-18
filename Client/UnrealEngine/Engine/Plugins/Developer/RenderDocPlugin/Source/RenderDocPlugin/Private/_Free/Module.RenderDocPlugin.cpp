// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 64

// `dynamic_initializer_for_'CVarRenderDocAutoAttach'' @ 141418660

void __cdecl _dynamic_initializer_for__CVarRenderDocAutoAttach__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocAutoAttach,L"renderdoc.AutoAttach",local_res8,
             L"RenderDoc will attach on startup.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocAutoAttach__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocBinaryPath'' @ 1414186b0

void __cdecl _dynamic_initializer_for__CVarRenderDocBinaryPath__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarRenderDocBinaryPath,L"renderdoc.BinaryPath",&local_18,
             L"Path to the main RenderDoc executable to use.",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocBinaryPath__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocCaptureAllActivity'' @ 141418720

void __cdecl _dynamic_initializer_for__CVarRenderDocCaptureAllActivity__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocCaptureAllActivity,L"renderdoc.CaptureAllActivity",local_res8,
             L"0 - RenderDoc will only capture data from the current viewport. 1 - RenderDoc will capture all activity, in all viewports and editor windows for the entire frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocCaptureAllActivity__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocCaptureCallstacks'' @ 141418770

void __cdecl _dynamic_initializer_for__CVarRenderDocCaptureCallstacks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocCaptureCallstacks,L"renderdoc.CaptureCallstacks",local_res8,
             L"0 - Callstacks will not be captured by RenderDoc. 1 - Capture callstacks for each API call."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocCaptureCallstacks__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocCaptureDelay'' @ 1414187c0

void __cdecl _dynamic_initializer_for__CVarRenderDocCaptureDelay__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocCaptureDelay,L"renderdoc.CaptureDelay",local_res8,
             L"If > 0, RenderDoc will trigger the capture only after this amount of time (or frames, if CaptureDelayInSeconds is false) has passed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocCaptureDelay__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocCaptureDelayInSeconds'' @ 141418810

void __cdecl _dynamic_initializer_for__CVarRenderDocCaptureDelayInSeconds__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocCaptureDelayInSeconds,L"renderdoc.CaptureDelayInSeconds",local_res8,
             L"0 - Capture delay\'s unit is in frames.1 - Capture delay\'s unit is in seconds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocCaptureDelayInSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocCaptureFrameCount'' @ 141418860

void __cdecl _dynamic_initializer_for__CVarRenderDocCaptureFrameCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocCaptureFrameCount,L"renderdoc.CaptureFrameCount",local_res8,
             L"If > 0, the RenderDoc capture will encompass more than a single frame. Note: this implies that all activity in all viewports and editor windows will be captured (i.e. same as CaptureAllActivity)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocCaptureFrameCount__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocEnableCrashHandler'' @ 1414188b0

void __cdecl _dynamic_initializer_for__CVarRenderDocEnableCrashHandler__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocEnableCrashHandler,L"renderdoc.EnableCrashHandler",local_res8,
             L"0 - Crash handling is completely delegated to the engine. 1 - The RenderDoc crash handler will be used (Only use this if you know the problem is with RenderDoc and you want to notify the RenderDoc developers!)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocEnableCrashHandler__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocReferenceAllResources'' @ 141418900

void __cdecl _dynamic_initializer_for__CVarRenderDocReferenceAllResources__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocReferenceAllResources,L"renderdoc.ReferenceAllResources",local_res8,
             L"0 - Only include resources that are actually used. 1 - Include all rendering resources in the capture, even those that have not been used during the frame. Please note that doing this will significantly increase capture size."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocReferenceAllResources__);
  return;
}

// `dynamic_initializer_for_'CVarRenderDocSaveAllInitials'' @ 141418950

void __cdecl _dynamic_initializer_for__CVarRenderDocSaveAllInitials__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderDocSaveAllInitials,L"renderdoc.SaveAllInitials",local_res8,
             L"0 - Disregard initial states of resources. 1 - Always capture the initial state of all rendering resources. Please note that doing this will significantly increase capture size."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRenderDocSaveAllInitials__);
  return;
}

// `dynamic_initializer_for_'DeveloperSettingsConsoleVariableMetaFName'' @ 1414189a0

void __cdecl _dynamic_initializer_for__DeveloperSettingsConsoleVariableMetaFName__(void)

{
  FName::FName(&DeveloperSettingsConsoleVariableMetaFName,L"ConsoleVariable");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRenderDocPlugin'' @ 1414189c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantRenderDocPlugin__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RenderDocPlugin";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RenderDocPlugin",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FRenderDocPluginModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RenderDocDllName'' @ 141418a10

void __cdecl _dynamic_initializer_for__RenderDocDllName__(void)

{
  FString::FString(&RenderDocDllName,L"renderdoc.dll");
  atexit(_dynamic_atexit_destructor_for__RenderDocDllName__);
  return;
}

// `dynamic_initializer_for_'RenderDocPlugin'' @ 141418a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__RenderDocPlugin__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&RenderDocPlugin,L"RenderDocPlugin",Log,All);
  atexit(_dynamic_atexit_destructor_for__RenderDocPlugin__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h__Script_RenderDocPlugin_2805140859'' @ 141418a80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h__Script_RenderDocPlugin_2805140859__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/RenderDocPlugin",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h__Script_RenderDocPlugin_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_RenderDocPlugin'' @ 141418ac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_RenderDocPlugin__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf1439ae3;
  local_res8[0].DeclarationsHash = 0x2d8cbb17;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_RenderDocPlugin,L"/Script/RenderDocPlugin",
             &Z_Registration_Info_UPackage__Script_RenderDocPlugin,local_res8);
  return;
}

// Z_Construct_UPackage__Script_RenderDocPlugin @ 14e2c69a0

UPackage * __cdecl Z_Construct_UPackage__Script_RenderDocPlugin(void)

{
  if (Z_Registration_Info_UPackage__Script_RenderDocPlugin.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_RenderDocPlugin.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_RenderDocPlugin.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e2c69e0

void * __thiscall
IRenderDocPlugin::_scalar_deleting_destructor_(IRenderDocPlugin *this,uint param_1)

{
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c77b0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void * __thiscall
FRenderDocPluginModule::_scalar_deleting_destructor_(FRenderDocPluginModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CaptureFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UClass_URenderDocPluginSettings @ 14e2c78c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URenderDocPluginSettings(void)

{
  if (Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton,
               &Z_Construct_UClass_URenderDocPluginSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton;
}

// NewProp_bCaptureAllActivity_SetBit @ 14e2c7900

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bCaptureAllCallstacks_SetBit @ 14e2c7910

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 2;
  return;
}

// NewProp_bReferenceAllResources_SetBit @ 14e2c7920

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 4;
  return;
}

// NewProp_bSaveAllInitials_SetBit @ 14e2c7930

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 8;
  return;
}

// NewProp_bCaptureDelayInSeconds_SetBit @ 14e2c7940

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 0x10;
  return;
}

// NewProp_bAutoAttach_SetBit @ 14e2c7950

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 1;
  return;
}

// NewProp_bShowHelpOnStartup_SetBit @ 14e2c7960

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 2;
  return;
}

// NewProp_bEnableRenderDocCrashHandler_SetBit @ 14e2c7970

void __cdecl
Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 4;
  return;
}

// Enqueue<TRenderCommandTag<`FRenderDocPluginModule::EndFrameCapture'::__l2::TSTR_EndRenderDocCapture405>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e2c7d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FRenderDocPluginModule::EndFrameCapture_::__l2::TSTR_EndRenderDocCapture405>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FRenderDocPluginModule::EndFrameCapture'::__l2::TSTR_EndRenderDocCapture405>
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
      if (bVar8) goto LAB_14e2c7e71;
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
    goto LAB_14e2c8065;
  }
LAB_14e2c7e71:
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
LAB_14e2c7f4f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e2c7f4f;
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
LAB_14e2c8065:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FRenderDocPluginModule::BeginFrameCapture'::__l2::TSTR_StartRenderDocCapture370>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14e2c80a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FRenderDocPluginModule::BeginFrameCapture_::__l2::TSTR_StartRenderDocCapture370>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FRenderDocPluginModule::BeginFrameCapture'::__l2::TSTR_StartRenderDocCapture370>
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
      if (bVar8) goto LAB_14e2c81f1;
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
    goto LAB_14e2c83e5;
  }
LAB_14e2c81f1:
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
LAB_14e2c82cf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14e2c82cf;
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
LAB_14e2c83e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FormatOrdered<float_&> @ 14e2c8420

void __cdecl
TextFormatUtil::FormatOrdered<float_&>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,float *param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  fVar1 = *param_2;
  pFVar2 = (param_1->AllocatorInstance).Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(undefined4 *)(pFVar2 + lVar4) = 2;
  *(undefined8 *)(pFVar2 + lVar4 + 0x10) = 0;
  *(undefined4 *)(pFVar2 + lVar4 + 0x18) = 0;
  *(float *)(pFVar2 + lVar4 + 8) = fVar1;
  return;
}

// FormatOrdered<float_&,FText_const_&> @ 14e2c85d0

void __cdecl
TextFormatUtil::FormatOrdered<float_&,FText_const_&>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,float *param_2,
          FText *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar3 + 1;
  fVar1 = *param_2;
  lVar4 = (longlong)iVar3 * 0x20;
  *(undefined4 *)(pFVar2 + lVar4) = 2;
  *(undefined8 *)(pFVar2 + lVar4 + 0x10) = 0;
  *(undefined4 *)(pFVar2 + lVar4 + 0x18) = 0;
  *(float *)(pFVar2 + lVar4 + 8) = fVar1;
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  FFormatArgumentValue::FFormatArgumentValue
            ((FFormatArgumentValue *)((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x20),
             param_3);
  return;
}

// FormatOrdered<unsigned___int64> @ 14e2c8770

void __cdecl
TextFormatUtil::FormatOrdered<unsigned___int64>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  uVar1 = *param_2;
  pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x20;
  *(undefined4 *)pFVar3 = 1;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(undefined4 *)(pFVar3 + 0x18) = 0;
  *(ulong64 *)(pFVar3 + 8) = uVar1;
  return;
}

// InternalConstructor<URenderDocPluginSettings> @ 14e2c87d0

void __cdecl InternalConstructor<URenderDocPluginSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7URenderDocPluginSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<URenderDocPluginSettings> @ 14e2c8810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URenderDocPluginSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URenderDocPluginSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7URenderDocPluginSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// ~TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,1,1> @ 14e2c8950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FRenderDocPluginModule::BeginFrameCapture_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::`2'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,1,1> @ 14e2c8970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FRenderDocPluginModule::EndFrameCapture_::__l2::<lambda_1>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::`2'::<lambda_1>,1,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,0,1> @ 14e2c8990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FRenderDocFrameCapturer::SaveAndLaunch_::__l75::<lambda_1>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__EL___SaveAndLaunch_FRenderDocFrameCapturer__SAXPEAVFRenderDocPluginModule__IAEBVFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `scalar_deleting_destructor' @ 14e2c8b40

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRenderDocPluginModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FRenderDocPluginModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderDocPluginModule::BeginFrameCapture'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderDocPluginModule::EndFrameCapture'::`2'::<lambda_1>,1,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__EL___SaveAndLaunch_FRenderDocFrameCapturer__SAXPEAVFRenderDocPluginModule__IAEBVFString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8c50

void * __thiscall
TGraphTask<FRenderDocAsyncGraphTask>::_scalar_deleting_destructor_
          (TGraphTask<FRenderDocAsyncGraphTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8cb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IInputDevice,SharedPointerInternals::DefaultDeleter<IInputDevice>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IInputDevice,SharedPointerInternals::DefaultDeleter<IInputDevice>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8cf0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void * __thiscall
FRenderDocDummyInputDevice::_scalar_deleting_destructor_
          (FRenderDocDummyInputDevice *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IInputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c8d30

void * __thiscall
URenderDocPluginSettings::_scalar_deleting_destructor_(URenderDocPluginSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URenderDocPluginSettings__6B_;
  pFVar1 = (this->RenderDocBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeRenderDocPluginSettings @ 14e2c9700

void __cdecl EmptyLinkFunctionForGeneratedCodeRenderDocPluginSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRenderDocPlugin_init @ 14e2c9710

void __cdecl EmptyLinkFunctionForGeneratedCodeRenderDocPlugin_init(void)

{
  return;
}

// LoadAndCheckRenderDocLibrary @ 14e2caff0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl LoadAndCheckRenderDocLibrary(RENDERDOC_API_1_1_0 **param_1,FString *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  HMODULE pHVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  wchar_t *_Str;
  HMODULE pHVar9;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  HMODULE pHVar10;
  
  if ((*param_1 != (RENDERDOC_API_1_1_0 *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("nullptr == RenderDocAPI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\RenderDocPlugin\\Source\\RenderDocPlugin\\Private\\RenderDocPluginLoader.cpp"
                         ,0x35,L""), bVar2)) {
    pcVar7 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar7)();
    return pvVar4;
  }
  if ((param_2->Data).ArrayNum < 2) {
    return (void *)0x0;
  }
  local_48.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  _Str = L"";
  if (RenderDocDllName.Data.ArrayNum != 0) {
    _Str = (wchar_t *)RenderDocDllName.Data.AllocatorInstance.Data;
  }
  pHVar10 = (HMODULE)0x0;
  pHVar9 = (HMODULE)0x0;
  iVar3 = 0;
  local_48.Size = iVar3;
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    sVar5 = wcslen(local_48.DataPtr);
    local_48.Size = (int)sVar5;
  }
  local_38 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar5 = wcslen(_Str);
    iVar3 = (int)sVar5;
  }
  local_30 = iVar3;
  FPaths::CombineInternal(&local_58,&local_48,2);
  bVar2 = FPaths::FileExists(&local_58);
  if (!bVar2) {
    bVar2 = FApp::IsUnattended();
    pHVar6 = pHVar10;
    if (bVar2) {
      if (3 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
    }
    else if (2 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      pHVar6 = pHVar9;
    }
    goto LAB_14e2cb270;
  }
  if (4 < (byte)RenderDocPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  pHVar6 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar8.Data);
  if (pHVar6 == (HMODULE)0x0) {
    pHVar6 = pHVar9;
    if (2 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
    }
    goto LAB_14e2cb270;
  }
  pcVar7 = FWindowsPlatformProcess::GetDllExport(pHVar6,L"RENDERDOC_GetAPI");
  if (pcVar7 == (code *)0x0) {
    if (2 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      FWindowsPlatformProcess::FreeDllHandle(pHVar6);
      pHVar6 = pHVar9;
      goto LAB_14e2cb270;
    }
  }
  else {
    iVar3 = (*pcVar7)(10000,param_1);
    pTVar1 = CVarRenderDocEnableCrashHandler.Ref;
    if (iVar3 != 0) {
      bVar2 = IsInParallelGameThread();
      if (bVar2) {
LAB_14e2cb216:
        pHVar9 = pHVar10;
      }
      else {
        bVar2 = IsInGameThread();
        pHVar9 = (HMODULE)&DAT_00000004;
        if (bVar2) goto LAB_14e2cb216;
      }
      if (*(int *)((longlong)pTVar1->ShadowedValue + (longlong)&pHVar9->unused) == 0) {
        (*(*param_1)->UnloadCrashHandler)();
      }
      local_res18[0] = 0;
      local_res10[0] = 0;
      local_res8[0] = 0;
      (*(*param_1)->GetAPIVersion)(local_res18,local_res10,local_res8);
      if (4 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_RenderDoc_libra_152e44fb8,
                   (FLogCategoryBase *)&RenderDocPlugin);
      }
      goto LAB_14e2cb270;
    }
    if (2 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
    }
  }
  FWindowsPlatformProcess::FreeDllHandle(pHVar6);
  pHVar6 = pHVar9;
LAB_14e2cb270:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return pHVar6;
}

// Z_Construct_UClass_URenderDocPluginSettings_NoRegister @ 14e2cc5c0

UClass * __cdecl Z_Construct_UClass_URenderDocPluginSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RenderDocPlugin",L"RenderDocPluginSettings",
               &Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton,
               URenderDocPluginSettings::StaticRegisterNativesURenderDocPluginSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<URenderDocPluginSettings>,
               InternalVTableHelperCtorCaller<URenderDocPluginSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton;
}

// IMPLEMENT_MODULE_RenderDocPlugin @ 14e2cc680

void __cdecl IMPLEMENT_MODULE_RenderDocPlugin(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CCmdRenderDocCaptureFrame'' @ 150463f50

void __cdecl
`FRenderDocPluginModule::StartupModule'::__l2::
_dynamic_atexit_destructor_for__CCmdRenderDocCaptureFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCmdRenderDocCaptureFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocAutoAttach'' @ 150463f70

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocAutoAttach__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocAutoAttach);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocBinaryPath'' @ 150463f90

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocBinaryPath__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocBinaryPath);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocCaptureAllActivity'' @ 150463fb0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocCaptureAllActivity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocCaptureAllActivity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocCaptureCallstacks'' @ 150463fd0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocCaptureCallstacks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocCaptureCallstacks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocCaptureDelay'' @ 150463ff0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocCaptureDelay__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocCaptureDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocCaptureDelayInSeconds'' @ 150464010

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocCaptureDelayInSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocCaptureDelayInSeconds)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocCaptureFrameCount'' @ 150464030

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocCaptureFrameCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocCaptureFrameCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocEnableCrashHandler'' @ 150464050

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocEnableCrashHandler__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocEnableCrashHandler);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocReferenceAllResources'' @ 150464070

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocReferenceAllResources__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocReferenceAllResources)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderDocSaveAllInitials'' @ 150464090

void __cdecl _dynamic_atexit_destructor_for__CVarRenderDocSaveAllInitials__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRenderDocSaveAllInitials);
  return;
}

// `dynamic_atexit_destructor_for_'RenderDocDllName'' @ 1504640b0

void __cdecl _dynamic_atexit_destructor_for__RenderDocDllName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RenderDocDllName.Data.AllocatorInstance.Data;
  if (RenderDocDllName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RenderDocDllName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RenderDocPlugin'' @ 1504640d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__RenderDocPlugin__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&RenderDocPlugin);
  return;
}

