// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 82

// FeatureName'' @ 1410accb0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// MoviePlayer'' @ 1410accd0

void __cdecl `dynamic_initializer_for_'FDefaultGameMoviePlayer::MoviePlayer__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FDefaultGameMoviePlayer::MoviePlayer__);
  return;
}

// MoviePlayer'' @ 1410accf0

void __cdecl `dynamic_initializer_for_'FNullGameMoviePlayer::MoviePlayer__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNullGameMoviePlayer::MoviePlayer__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 1410acd10

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 1410acd40

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogMoviePlayer'' @ 1410acd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMoviePlayer__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMoviePlayer,L"LogMoviePlayer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMoviePlayer__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMoviePlayer'' @ 1410acda0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMoviePlayer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MoviePlayer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MoviePlayer",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 1410acdf0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 1410ace10

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h__Script_MoviePlayer_2519785094'' @ 1410ace30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h__Script_MoviePlayer_2519785094__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MoviePlayer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h__Script_MoviePlayer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h__Script_MoviePlayer_3062517015'' @ 1410ace70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h__Script_MoviePlayer_3062517015__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MoviePlayer",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h__Script_MoviePlayer_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MoviePlayer'' @ 1410acec0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MoviePlayer__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x2f4f103;
  local_res8[0].DeclarationsHash = 0xb8d5eca7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MoviePlayer,L"/Script/MoviePlayer",
             &Z_Registration_Info_UPackage__Script_MoviePlayer,local_res8);
  return;
}

// Z_Construct_UPackage__Script_MoviePlayer @ 146c73f80

UPackage * __cdecl Z_Construct_UPackage__Script_MoviePlayer(void)

{
  if (Z_Registration_Info_UPackage__Script_MoviePlayer.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MoviePlayer.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_MoviePlayer.OuterSingleton;
}

// EMoviePlaybackType_StaticEnum @ 146c74070

UEnum * __cdecl EMoviePlaybackType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MoviePlayer();
    Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType,(UObject *)pUVar1,
                       L"EMoviePlaybackType");
  }
  return Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton;
}

// Z_Construct_UClass_UMoviePlayerSettings @ 146c740b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMoviePlayerSettings(void)

{
  if (Z_Registration_Info_UClass_UMoviePlayerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMoviePlayerSettings.OuterSingleton,
               &Z_Construct_UClass_UMoviePlayerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMoviePlayerSettings.OuterSingleton;
}

// NewProp_bWaitForMoviesToComplete_SetBit @ 146c740f0

void __cdecl
Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bMoviesAreSkippable_SetBit @ 146c74100

void __cdecl
Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// DestructItems<TSharedPtr<IMovieStreamer,1>,int> @ 146c752f0

void __cdecl
DestructItems<TSharedPtr<IMovieStreamer,1>,int>(TSharedPtr<IMovieStreamer,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c75330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::WaitForMovieToFinish_::__l28::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_BeginLoadingMovieFrameAndTickMovieStreamer539>
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
      if (bVar8) goto LAB_146c75481;
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
    goto LAB_146c75675;
  }
LAB_146c75481:
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
LAB_146c7555f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c7555f;
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
LAB_146c75675:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_FinishLoadingMovieFrame557>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c756b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::WaitForMovieToFinish_::__l28::TSTR_FinishLoadingMovieFrame557>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::TSTR_FinishLoadingMovieFrame557>
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
      if (bVar8) goto LAB_146c75801;
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
    goto LAB_146c759f5;
  }
LAB_146c75801:
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
LAB_146c758df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c758df;
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
LAB_146c759f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultGameMoviePlayer::Initialize'::__l2::TSTR_RegisterMoviePlayerTickable172>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c75a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::Initialize_::__l2::TSTR_RegisterMoviePlayerTickable172>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDefaultGameMoviePlayer::Initialize'::__l2::TSTR_RegisterMoviePlayerTickable172>
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
      if (bVar8) goto LAB_146c75b81;
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
    goto LAB_146c75d75;
  }
LAB_146c75b81:
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
LAB_146c75c5f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c75c5f;
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
LAB_146c75d75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::TSTR_UnregisterMoviePlayerTickable140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c75db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer_::__l9::TSTR_UnregisterMoviePlayerTickable140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::TSTR_UnregisterMoviePlayerTickable140>
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
      if (bVar8) goto LAB_146c75f01;
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
    goto LAB_146c760f5;
  }
LAB_146c75f01:
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
LAB_146c75fdf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c75fdf;
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
LAB_146c760f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FDefaultGameMoviePlayer::Shutdown'::__l2::TSTR_UnregisterMoviePlayerTickable265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c76130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FDefaultGameMoviePlayer::Shutdown_::__l2::TSTR_UnregisterMoviePlayerTickable265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FDefaultGameMoviePlayer::Shutdown'::__l2::TSTR_UnregisterMoviePlayerTickable265>
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
      if (bVar8) goto LAB_146c76281;
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
    goto LAB_146c76475;
  }
LAB_146c76281:
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
LAB_146c7635f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c7635f;
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
LAB_146c76475:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UMoviePlayerSettings> @ 146c764b0

void __cdecl InternalConstructor<UMoviePlayerSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMoviePlayerSettings__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMoviePlayerSettings> @ 146c764f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMoviePlayerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMoviePlayerSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMoviePlayerSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<FMoviePlayerWidgetRenderer,1,TSharedRef<SWindow,1>_const_&,TSharedPtr<SVirtualWindow,1>_&,FSlateRenderer_*> @ 146c765b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FMoviePlayerWidgetRenderer,1> * __cdecl
MakeShared<FMoviePlayerWidgetRenderer,1,TSharedRef<SWindow,1>_const_&,TSharedPtr<SVirtualWindow,1>_&,FSlateRenderer_*>
          (TSharedRef<FMoviePlayerWidgetRenderer,1> *__return_storage_ptr__,
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
  TSharedRef<FMoviePlayerWidgetRenderer,1> *pTVar10;
  FHittestGrid *this;
  FHittestGrid *pFVar11;
  TRawPtrProxy<FHittestGrid> local_res8;
  
  pTVar9 = operator_new(0x50);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FMoviePlayerWidgetRenderer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMoviePlayerWidgetRenderer___00_SharedPointerInternals__6B_
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
        pTVar10 = (TSharedRef<FMoviePlayerWidgetRenderer,1> *)(*pcVar7)();
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
        pTVar10 = (TSharedRef<FMoviePlayerWidgetRenderer,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
    pFVar11 = (FHittestGrid *)0x0;
    *(FSlateRenderer **)&pTVar9[3].SharedReferenceCount = pFVar1;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[4]._padding_ = 0;
    *(undefined1 *)&pTVar9[4].SharedReferenceCount = 1;
    this = operator_new(0xf8);
    if (this != (FHittestGrid *)0x0) {
      pFVar11 = FHittestGrid::FHittestGrid(this);
    }
    local_res8.Object = pFVar11;
    TSharedPtr<FHittestGrid,1>::operator=<FHittestGrid>
              ((TSharedPtr<FHittestGrid,1> *)&pTVar9[2].SharedReferenceCount,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    __return_storage_ptr__->Object = (FMoviePlayerWidgetRenderer *)(pTVar9 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
    if ((FMoviePlayerWidgetRenderer *)(pTVar9 + 1) == (FMoviePlayerWidgetRenderer *)0x0) {
      bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TSharedRef<FMoviePlayerWidgetRenderer,1> *)(*pcVar7)();
        return pTVar10;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs> @ 146c76760

TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDefaultMovieBorder,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs> @ 146c76810

TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLoadingScreenTestWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// StaticEnum<enum_EMoviePlaybackType> @ 146c768c0

UEnum * __cdecl StaticEnum<enum_EMoviePlaybackType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MoviePlayer();
    Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType,(UObject *)pUVar1,
                       L"EMoviePlaybackType");
  }
  return Z_Registration_Info_UEnum_EMoviePlaybackType.OuterSingleton;
}

// ~TFunction_OwnedObject<`FDefaultGameMoviePlayer::Initialize'::__l2::<lambda_1>,1,0> @ 146c77290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::Initialize'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDefaultGameMoviePlayer::Initialize_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::Initialize'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FDefaultGameMoviePlayer::Shutdown'::__l2::<lambda_1>,1,0> @ 146c772b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::Shutdown'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDefaultGameMoviePlayer::Shutdown_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::Shutdown'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::<lambda_1>,1,0> @ 146c772d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer_::__l9::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::`9'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_1>,1,0> @ 146c772f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDefaultGameMoviePlayer::WaitForMovieToFinish_::__l28::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `vcall'{8,{flat}}'_}' @ 146c77930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultGameMoviePlayer::`vcall'{8,{flat}}' }' */

void __thiscall FDefaultGameMoviePlayer::_vcall__8__flat______(FDefaultGameMoviePlayer *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c77933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// `vcall'{0,{flat}}'_}' @ 146c7793c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultGameMoviePlayer::`vcall'{0,{flat}}' }' */

void __thiscall FDefaultGameMoviePlayer::_vcall__0__flat______(FDefaultGameMoviePlayer *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c7793f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)();
  return;
}

// `vcall'{16,{flat}}'_}' @ 146c77948

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultGameMoviePlayer::`vcall'{16,{flat}}' }' */

void __thiscall FDefaultGameMoviePlayer::_vcall__16__flat______(FDefaultGameMoviePlayer *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c7794b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// `vcall'{104,{flat}}'_}' @ 146c77954

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]: __cdecl FDefaultGameMoviePlayer::`vcall'{104,{flat}}' }' */

void __thiscall FDefaultGameMoviePlayer::_vcall__104__flat______(FDefaultGameMoviePlayer *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c77957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x68))();
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 146c77960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FDefaultGameMoviePlayer::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FDefaultGameMoviePlayer::_vector_deleting_destructor__adjustor_16__
          (FDefaultGameMoviePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FDefaultGameMoviePlayer *)&this[-1].LastBlockingTickTime,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c77970

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c779a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c779d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDefaultGameMoviePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 146c77b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,FDefaultGameMoviePlayer_const_,1,FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 146c77b80

void * __thiscall
TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SLoadingScreenTestWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 146c77be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 146c77c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FDefaultGameMoviePlayer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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

// `scalar_deleting_destructor' @ 146c77ca0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::Initialize'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::Initialize'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::Shutdown'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::Shutdown'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::__l9::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::~FDefaultGameMoviePlayer'::`9'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::__l28::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::`28'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77dd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMoviePlayerWidgetRenderer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMoviePlayerWidgetRenderer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77e10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDefaultMovieBorder,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDefaultMovieBorder,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77e50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLoadingScreenTestWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLoadingScreenTestWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FDefaultGameMoviePlayer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDefaultGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FDefaultGameMoviePlayer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77ed0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FNullGameMoviePlayer>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNullGameMoviePlayer,SharedPointerInternals::DefaultDeleter<FNullGameMoviePlayer>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
FDefaultGameMoviePlayer::_scalar_deleting_destructor_(FDefaultGameMoviePlayer *this,uint param_1)

{
  ~FDefaultGameMoviePlayer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c77f50

void * __thiscall
FNullGameMoviePlayer::_scalar_deleting_destructor_(FNullGameMoviePlayer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMovieClipFinishedDelegate).field_0x8,
             *(int *)&(this->OnMovieClipFinishedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnMovieClipFinishedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMovieClipFinishedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePlaybackFinishedDelegate).field_0x8,
             *(int *)&(this->OnMoviePlaybackFinishedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnMoviePlaybackFinishedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePlaybackFinishedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePlaybackTickDelegate).field_0x8,
             *(int *)&(this->OnMoviePlaybackTickDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnMoviePlaybackTickDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePlaybackTickDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoviePlaybackStartedDelegate).field_0x8,
             *(int *)&(this->OnMoviePlaybackStartedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnMoviePlaybackStartedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoviePlaybackStartedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPrepareLoadingScreenDelegate).field_0x8,
             *(int *)&(this->OnPrepareLoadingScreenDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnPrepareLoadingScreenDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPrepareLoadingScreenDelegate);
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
  this->_padding_ = (longlong)&___7IGameMoviePlayer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c78090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
FSlateLoadingThreadTask::_scalar_deleting_destructor_(FSlateLoadingThreadTask *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c780d0

void * __thiscall
IGameMoviePlayer::_scalar_deleting_destructor_(IGameMoviePlayer *this,uint param_1)

{
  *this = (IGameMoviePlayer)&___7IGameMoviePlayer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c78110

void * __thiscall
SDefaultMovieBorder::_scalar_deleting_destructor_(SDefaultMovieBorder *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler);
  pvVar1 = *(void **)&(this->OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyDownHandler);
  SBorder::~SBorder((SBorder *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c781a0

void * __thiscall
SLoadingScreenTestWidget::_scalar_deleting_destructor_(SLoadingScreenTestWidget *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c78200

void * __thiscall
UMoviePlayerSettings::_scalar_deleting_destructor_(UMoviePlayerSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePlayerSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->StartupMovies).AllocatorInstance.Data,(this->StartupMovies).ArrayNum)
  ;
  pFVar1 = (this->StartupMovies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// CreateMoviePlayer @ 146c7aa70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl CreateMoviePlayer(void)

{
  code *pcVar1;
  bool bVar2;
  FDefaultGameMoviePlayer *pFVar3;
  FDefaultGameMoviePlayer *pFVar4;
  TRawPtrProxy<FDefaultGameMoviePlayer> local_res8;
  TRawPtrProxy<FNullGameMoviePlayer> local_res10 [3];
  
  bVar2 = FCommandLine::IsInitialized();
  pFVar4 = (FDefaultGameMoviePlayer *)0x0;
  pFVar3 = (FDefaultGameMoviePlayer *)FNullGameMoviePlayer::MoviePlayer.Object;
  if ((((bVar2) &&
       (bVar2 = IsMoviePlayerEnabled(),
       pFVar3 = (FDefaultGameMoviePlayer *)FNullGameMoviePlayer::MoviePlayer.Object, bVar2)) &&
      (GRHIGlobals.UsingNullRHI == false)) &&
     (pFVar3 = (FDefaultGameMoviePlayer *)&(FDefaultGameMoviePlayer::MoviePlayer.Object)->_padding_,
     FDefaultGameMoviePlayer::MoviePlayer.Object == (FDefaultGameMoviePlayer *)0x0)) {
    pFVar3 = pFVar4;
  }
  if (pFVar3 == (FDefaultGameMoviePlayer *)0x0) {
    bVar2 = IsMoviePlayerEnabled();
    if ((bVar2) && (GRHIGlobals.UsingNullRHI == false)) {
      bVar2 = IsInGameThread();
      if (((!bVar2) || (bVar2 = IsInSlateThread(), bVar2)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() && !IsInSlateThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.h"
                             ,0x3e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((FDefaultGameMoviePlayer::MoviePlayer.Object != (FDefaultGameMoviePlayer *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("!MoviePlayer.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.h"
                             ,0x3f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = operator_new(0x1f8);
      if ((((pFVar3 != (FDefaultGameMoviePlayer *)0x0) &&
           (pFVar4 = FDefaultGameMoviePlayer::FDefaultGameMoviePlayer(pFVar3),
           pFVar4 != (FDefaultGameMoviePlayer *)0x0)) && (pFVar4->_padding_ != 0)) &&
         (((pFVar4->_padding_ != 0 && (0 < *(int *)(pFVar4->_padding_ + 8))) &&
          (bVar2 = FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res8.Object = pFVar4;
      TSharedPtr<FDefaultGameMoviePlayer,1>::operator=<FDefaultGameMoviePlayer>
                (&FDefaultGameMoviePlayer::MoviePlayer,&local_res8);
      return;
    }
    bVar2 = IsInGameThread();
    if (((!bVar2) || (bVar2 = IsInSlateThread(), bVar2)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() && !IsInSlateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\NullMoviePlayer.h"
                           ,0xf,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((FNullGameMoviePlayer::MoviePlayer.Object != (FNullGameMoviePlayer *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!MoviePlayer.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\NullMoviePlayer.h"
                           ,0x10,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = operator_new(0xb8);
    if (pFVar3 != (FDefaultGameMoviePlayer *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = (longlong)&___7FNullGameMoviePlayer__6B_;
      pFVar3->_padding_ = 0;
      *(longlong *)&pFVar3->_padding_ = 0;
      (((TArray<TSharedPtr<IMovieStreamer,1>,TSizedDefaultAllocator<32>_> *)&pFVar3->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar3->_padding_ = 0;
      (pFVar3->MovieStreamers).AllocatorInstance.Data = (FScriptContainerElement *)0x2;
      ((FSharedReferencer<1> *)&(pFVar3->MovieStreamers).ArrayNum)->ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar3->ActiveMovieStreamer).Object = (IMovieStreamer *)0x0;
      ((FWeakReferencer<1> *)&(pFVar3->ActiveMovieStreamer).SharedReferenceCount)->
      ReferenceController = (TReferenceControllerBase<1> *)0x0;
      ((TSharedPtr<SWidget,1> *)&pFVar3->MainWindow)->Object = (SWidget *)0x2;
      (((TSharedPtr<SWidget,1> *)&pFVar3->MainWindow)->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      ((TSharedPtr<SBorder,1> *)&pFVar3->LoadingScreenContents)->Object = (SBorder *)0x0;
      (((TSharedPtr<SBorder,1> *)&pFVar3->LoadingScreenContents)->SharedReferenceCount).
      ReferenceController = (TReferenceControllerBase<1> *)0x0;
      ((TSharedPtr<SVirtualWindow,1> *)&pFVar3->UserWidgetHolder)->Object = (SVirtualWindow *)0x2;
      (((TSharedPtr<SVirtualWindow,1> *)&pFVar3->UserWidgetHolder)->SharedReferenceCount).
      ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar3->VirtualRenderWindow).Object = (SVirtualWindow *)0x0;
      ((FWeakReferencer<1> *)&(pFVar3->VirtualRenderWindow).SharedReferenceCount)->
      ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (pFVar3->MovieViewportWeakPtr).Object = (SViewport *)&DAT_00000002;
      (pFVar3->MovieViewportWeakPtr).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar3->SyncMechanism = (FSlateLoadingSynchronizationMechanism *)0x0;
      (((FLoadingScreenAttributes *)&pFVar3->MovieStreamingIsDone)->WidgetLoadingScreen).Object =
           (SWidget *)0x0;
      ((FSharedReferencer<1> *)&pFVar3->IsMoviePlaying)->ReferenceController =
           (TReferenceControllerBase<1> *)&DAT_00000002;
      pFVar4 = pFVar3;
    }
    local_res10[0].Object = (FNullGameMoviePlayer *)pFVar4;
    TSharedPtr<FNullGameMoviePlayer,1>::operator=<FNullGameMoviePlayer>
              (&FNullGameMoviePlayer::MoviePlayer,local_res10);
  }
  return;
}

// DestroyMoviePlayer @ 146c7ad20

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl DestroyMoviePlayer(void)

{
  code *pcVar1;
  bool bVar2;
  FNullGameMoviePlayer *pFVar3;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  bVar2 = FCommandLine::IsInitialized();
  pFVar3 = FNullGameMoviePlayer::MoviePlayer.Object;
  if ((((bVar2) &&
       (bVar2 = IsMoviePlayerEnabled(), pFVar3 = FNullGameMoviePlayer::MoviePlayer.Object, bVar2))
      && (GRHIGlobals.UsingNullRHI == false)) &&
     (pFVar3 = (FNullGameMoviePlayer *)&(FDefaultGameMoviePlayer::MoviePlayer.Object)->_padding_,
     FDefaultGameMoviePlayer::MoviePlayer.Object == (FDefaultGameMoviePlayer *)0x0)) {
    pFVar3 = (FNullGameMoviePlayer *)0x0;
  }
  if (pFVar3 == (FNullGameMoviePlayer *)0x0) {
    return;
  }
  bVar2 = IsMoviePlayerEnabled();
  if ((bVar2) && (GRHIGlobals.UsingNullRHI == false)) {
    bVar2 = IsInGameThread();
    if (((!bVar2) || (bVar2 = IsInSlateThread(), bVar2)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() && !IsInSlateThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.h"
                           ,0x46,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FDefaultGameMoviePlayer::MoviePlayer.Object = (FDefaultGameMoviePlayer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FDefaultGameMoviePlayer::MoviePlayer.SharedReferenceCount,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    return;
  }
  bVar2 = IsInGameThread();
  if (((!bVar2) || (bVar2 = IsInSlateThread(), bVar2)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() && !IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\NullMoviePlayer.h"
                         ,0x17,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FNullGameMoviePlayer::MoviePlayer.Object = (FNullGameMoviePlayer *)0x0;
  local_18 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FNullGameMoviePlayer::MoviePlayer.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePlayer @ 146c7b560

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePlayerSettings @ 146c7b570

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePlayerSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMoviePlayer_init @ 146c7b580

void __cdecl EmptyLinkFunctionForGeneratedCodeMoviePlayer_init(void)

{
  return;
}

// GetMoviePlayer @ 146c7cbb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

IGameMoviePlayer * __cdecl GetMoviePlayer(void)

{
  bool bVar1;
  IGameMoviePlayer *pIVar2;
  
  bVar1 = FCommandLine::IsInitialized();
  if (bVar1) {
    bVar1 = IsMoviePlayerEnabled();
    if ((bVar1) && (GRHIGlobals.UsingNullRHI == false)) {
      pIVar2 = (IGameMoviePlayer *)&(FDefaultGameMoviePlayer::MoviePlayer.Object)->_padding_;
      if (FDefaultGameMoviePlayer::MoviePlayer.Object == (FDefaultGameMoviePlayer *)0x0) {
        pIVar2 = (IGameMoviePlayer *)0x0;
      }
      return pIVar2;
    }
  }
  return (IGameMoviePlayer *)FNullGameMoviePlayer::MoviePlayer.Object;
}

// GetMoviePlayerRef @ 146c7cc00

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

IGameMoviePlayer * __cdecl GetMoviePlayerRef(void)

{
  bool bVar1;
  IGameMoviePlayer *pIVar2;
  
  bVar1 = FCommandLine::IsInitialized();
  if (bVar1) {
    bVar1 = IsMoviePlayerEnabled();
    if ((bVar1) && (GRHIGlobals.UsingNullRHI == false)) {
      pIVar2 = (IGameMoviePlayer *)&(FDefaultGameMoviePlayer::MoviePlayer.Object)->_padding_;
      if (FDefaultGameMoviePlayer::MoviePlayer.Object == (FDefaultGameMoviePlayer *)0x0) {
        pIVar2 = (IGameMoviePlayer *)0x0;
      }
      return pIVar2;
    }
  }
  return (IGameMoviePlayer *)FNullGameMoviePlayer::MoviePlayer.Object;
}

// IsMoviePlayerEnabled @ 146c7eff0

bool __cdecl IsMoviePlayerEnabled(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  bool bVar3;
  
  if ((PRIVATE_GIsRunningCommandlet) || (!GUseThreadedRendering)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bNoLoadingScreen = FParse::Param(pwVar2,L"NoLoadingScreen");
      _Init_thread_footer(&_TSS0);
    }
  }
  bVar1 = false;
  if (bNoLoadingScreen == false) {
    bVar1 = bVar3;
  }
  return bVar1;
}

// Z_Construct_UClass_UMoviePlayerSettings_NoRegister @ 146c820d0

UClass * __cdecl Z_Construct_UClass_UMoviePlayerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MoviePlayer",L"MoviePlayerSettings",
               &Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton,
               UMoviePlayerSettings::StaticRegisterNativesUMoviePlayerSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UMoviePlayerSettings>,
               InternalVTableHelperCtorCaller<UMoviePlayerSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton;
}

// Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType @ 146c82180

UEnum * __cdecl Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType(void)

{
  if (Z_Registration_Info_UEnum_EMoviePlaybackType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMoviePlaybackType.InnerSingleton,
               &Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMoviePlaybackType.InnerSingleton;
}

// IMPLEMENT_MODULE_MoviePlayer @ 146c821c0

void __cdecl IMPLEMENT_MODULE_MoviePlayer(void)

{
  return;
}

// MoviePlayer'' @ 1503dfd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FDefaultGameMoviePlayer::MoviePlayer__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FDefaultGameMoviePlayer::MoviePlayer.SharedReferenceCount.ReferenceController);
  return;
}

// MoviePlayer'' @ 1503dfd90

void __cdecl `dynamic_atexit_destructor_for_'FNullGameMoviePlayer::MoviePlayer__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FNullGameMoviePlayer::MoviePlayer.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 1503dfdb0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogMoviePlayer'' @ 1503dfdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMoviePlayer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMoviePlayer);
  return;
}

