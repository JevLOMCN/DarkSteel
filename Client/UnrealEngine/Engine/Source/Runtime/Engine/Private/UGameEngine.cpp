// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// StaticClass @ 147ba3d00

UClass * __cdecl UGameEngine::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameEngine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UEngine::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameEngine",
               &Z_Registration_Info_UClass_UGameEngine.InnerSingleton,
               StaticRegisterNativesUGameEngine,0x13a8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Engine",InternalConstructor<UGameEngine>,
               InternalVTableHelperCtorCaller<UGameEngine>,local_res8,UEngine::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameEngine.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 147baa080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UGameEngine::Tick'::__l212::<lambda_1>::<lambda_invoker_cdecl>(FRHICommandListImmediate *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER LStackX_10;
  FName FStackX_18;
  FStatMessage FStack_28;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&LStackX_10.s,"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush"
                           );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                ::__l2::StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush,*pFVar5,
               L"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush;
  if (_StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(&FStackX_18,"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(void)___ptr64'
                         ::__l2::StatPtr_STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush,*pFVar5,
                        L"STAT_RHIMETHOD_SubmitAndBlockUntilGPUIdle_Flush","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_10.s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_10.s.LowPart = FVar8.Value;
        LStackX_10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_10.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                   ,0x133e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_10.s.LowPart = FVar8.Value;
      LStackX_10.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_144836045;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_144836045:
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
  (**(code **)(GDynamicRHI->_padding_ + 0x340))();
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      FStack_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&LStackX_10);
      FStack_28.StatData.Pad[4] = '\0';
      FStack_28.StatData.Pad[5] = '\0';
      FStack_28.StatData.Pad[6] = '\0';
      FStack_28.StatData.Pad[7] = '\0';
      FStack_28.StatData.Pad[0] = LStackX_10.s.LowPart._0_1_;
      FStack_28.StatData.Pad[1] = LStackX_10.s.LowPart._1_1_;
      FStack_28.StatData.Pad[2] = LStackX_10.s.LowPart._2_1_;
      FStack_28.StatData.Pad[3] = LStackX_10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_28);
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
  return;
}

// UGameEngine @ 147bbc990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameEngine * __thiscall UGameEngine::UGameEngine(UGameEngine *this,FVTableHelper *param_1)

{
  UEngine::UEngine((UEngine *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->GameInstance).field0_0x0.DebugPtr = (UGameInstance *)0x0;
  (this->GameViewportWindow).Object = (SWindow *)0x0;
  (this->GameViewportWindow).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneViewport).Object = (FSceneViewport *)0x0;
  (this->SceneViewport).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameViewportWidget).Object = (SViewport *)0x0;
  (this->GameViewportWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StartupMovieCaptureHandle).ID = 0;
  (this->CmdExec).Ptr = (FEngineConsoleCommandExecutor *)0x0;
  return this;
}

// UGameEngine @ 147bbca10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameEngine * __thiscall UGameEngine::UGameEngine(UGameEngine *this,FObjectInitializer *param_1)

{
  UEngine::UEngine((UEngine *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->GameInstance).field0_0x0.DebugPtr = (UGameInstance *)0x0;
  (this->GameViewportWindow).Object = (SWindow *)0x0;
  (this->GameViewportWindow).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneViewport).Object = (FSceneViewport *)0x0;
  (this->SceneViewport).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GameViewportWidget).Object = (SViewport *)0x0;
  (this->GameViewportWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StartupMovieCaptureHandle).ID = 0;
  (this->CmdExec).Ptr = (FEngineConsoleCommandExecutor *)0x0;
  return this;
}

// ~UGameEngine @ 147bbf470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::~UGameEngine(UGameEngine *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FEngineConsoleCommandExecutor *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pFVar3 = (this->CmdExec).Ptr;
  if (pFVar3 != (FEngineConsoleCommandExecutor *)0x0) {
    (*(code *)pFVar3[-1]._padding_)(pFVar3 + -1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameViewportWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneViewport).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  UEngine::~UEngine((UEngine *)this);
  return;
}

// ConditionallyOverrideSettings @ 147bce300

void __cdecl UGameEngine::ConditionallyOverrideSettings(int *param_1,int *param_2,Type *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  
  if (bGameWindowSettingsOverrideEnabled) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"Windowed");
    if (!bVar2) {
      pwVar4 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar4,L"SimMobile");
      if (!bVar2) {
        pwVar4 = FCommandLine::Get();
        bVar2 = FParse::Param(pwVar4,L"FullScreen");
        if (bVar2) {
          pTVar7 = (TConsoleVariableData<int> *)0x0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            pIVar5 = IConsoleManager::Get();
            plVar6 = (longlong *)
                     (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.FullScreenMode",1);
            if (plVar6 != (longlong *)0x0) {
              pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
            }
            ::CVar = pTVar7;
            _Init_thread_footer(&::_TSS0);
          }
          if ((::CVar == (TConsoleVariableData<int> *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("CVar",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                                 ,0x14b,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = TConsoleVariableData<int>::GetValueOnGameThread(::CVar);
          *param_3 = (uint)(iVar3 != 0);
        }
        goto LAB_147bce3ef;
      }
    }
    *param_3 = Windowed;
  }
LAB_147bce3ef:
  DetermineGameWindowResolution(param_1,param_2,param_3,false);
  return;
}

// CreateGameViewport @ 147bd1400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::CreateGameViewport(UGameEngine *this,UGameViewportClient *param_1)

{
  TSharedPtr<FSceneViewport,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  UGameViewportClient *pUVar6;
  bool bVar7;
  atomic<int> aVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  UGameUserSettings *this_00;
  FSceneViewport *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FViewport *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  SWindow *pSVar17;
  SWindow *pSVar18;
  TReferenceControllerBase<1> *pTVar19;
  SWindow *this_01;
  bool bVar20;
  int local_res8;
  UGameViewportClient *local_res10;
  SViewport *local_res18;
  UGameEngine *local_res20;
  undefined1 local_158 [8];
  FDelegateAllocation local_150;
  undefined1 local_140 [8];
  FDelegateAllocation local_138;
  FSceneViewport *local_128;
  FSharedReferencer<1> local_120;
  TSharedRef<ISlateViewport,1> local_118;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  bool local_f8;
  UGameEngine *local_e8;
  int local_e0;
  undefined4 uStack_dc;
  UGameEngine *pUStack_d8;
  SViewport *local_d0;
  TReferenceControllerBase<1> *local_c8;
  code *local_b8;
  undefined8 uStack_b0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  bVar20 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId257,"CreateGameViewport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
               ,0x101);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId257);
  }
  if (((((this->GameViewportWindow).Object == (SWindow *)0x0) ||
       (pTVar2 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController,
       pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GameViewportWindow.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                         ,0x102,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((this->GameViewportWidget).Object == (SViewport *)0x0) &&
      (CreateGameViewportWidget(this,param_1), (this->GameViewportWidget).Object == (SViewport *)0x0
      )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (this->GameViewportWidget).SharedReferenceCount.ReferenceController;
  local_res18 = (this->GameViewportWidget).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_res18 == (SViewport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar18 = (SWindow *)(this->GameViewportWindow).WeakReferenceCount.ReferenceController;
  pSVar17 = pSVar18;
  this_01 = (SWindow *)0x0;
  if (pSVar18 == (SWindow *)0x0) {
LAB_147bd1576:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar18 = pSVar17;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar18->_padding_;
    do {
      pSVar17 = (SWindow *)0x0;
      this_01 = (SWindow *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_147bd1576;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar18->_padding_;
      bVar7 = aVar5 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pSVar18->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar7);
    this_01 = (this->GameViewportWindow).Object;
    pSVar17 = pSVar18;
    if (this_01 == (SWindow *)0x0) goto LAB_147bd1576;
  }
  uStack_100 = 0;
  local_108 = OnGameWindowClosed;
  uStack_fc = uStack_b0._4_4_;
  local_158 = (undefined1  [8])0x0;
  local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_150.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_150;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_150);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameEngine____A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&stack0x00000020);
    puVar10[4] = local_108;
    puVar10[5] = CONCAT44(uStack_fc,uStack_100);
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  SWindow::SetOnWindowClosed
            (this_01,(TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
                      *)local_158);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_108);
  if ((local_150.DelegateSize != 0) &&
     (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_150,0,0,0x10);
    local_150.DelegateSize = 0;
  }
  if (local_f8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_fc,uStack_100),
               (FDestructionSentinel *)&local_108);
  }
  if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_150.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  pwVar12 = FCommandLine::Get();
  bVar7 = FParse::Value(pwVar12,L"SAVEWINPOS=",&stack0x00000008);
  if ((bVar7) && (0 < local_res8)) {
    this_00 = UEngine::GetGameUserSettings((UEngine *)this);
    iVar9 = UGameUserSettings::GetMaxNumWindowPositionSaveSlots(this_00);
    if (local_res8 + -1 < iVar9) {
      if ((this_01 == (SWindow *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_140 = (undefined1  [8])0x0;
      local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_138.DelegateSize = 0;
      local_e0 = local_res8 + -1;
      pUStack_d8 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
                 (FWriteAccessScope *)&local_70);
      local_58 = &local_138;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_138);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TWeakBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy,`UGameEngine::CreateGameViewport'::`18'::<lambda_1>_>
                    ::_vftable_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_e8);
        puVar10[4] = CONCAT44(uStack_dc,local_e0);
        puVar10[5] = pUStack_d8;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      SWindow::SetOnWindowMoved
                (this_01,(TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
                          *)local_140);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
                 (FWriteAccessScope *)&local_a8);
      if ((local_138.DelegateSize != 0) &&
         (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_138.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_138,0,0,0x10);
        local_138.DelegateSize = 0;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_138.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_140);
    }
    else if (2 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
  }
  pUVar6 = local_res10;
  local_d0 = local_res18;
  lVar3 = local_res10->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = pTVar2;
  pFVar13 = (FSceneViewport *)(**(code **)(lVar3 + 0x2c8))(local_res10);
  pTVar1 = &this->SceneViewport;
  local_128 = pFVar13;
  pTVar14 = ::operator_new(0x18);
  local_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSceneViewport__U__DefaultDeleter_VFSceneViewport___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14[1]._padding_ = (longlong)pFVar13;
    local_120.ReferenceController = pTVar14;
  }
  if (pTVar1 != (TSharedPtr<FSceneViewport,1> *)&local_128) {
    local_128 = (FSceneViewport *)0x0;
    pTVar1->Object = pFVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewport).SharedReferenceCount,&local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.ReferenceController);
  pFVar15 = (FViewport *)&pTVar1->Object->_padding_;
  if (pTVar1->Object == (FSceneViewport *)0x0) {
    pFVar15 = (FViewport *)0x0;
  }
  pUVar6->Viewport = pFVar15;
  if ((pTVar1->Object == (FSceneViewport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar14 = (this->SceneViewport).SharedReferenceCount.ReferenceController;
  pFVar13 = pTVar1->Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar13 == (FSceneViewport *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_118.Object = (ISlateViewport *)&pFVar13->_padding_;
  if (pFVar13 == (FSceneViewport *)0x0) {
    local_118.Object = (ISlateViewport *)0x0;
  }
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118.SharedReferenceCount.ReferenceController = pTVar14;
  SViewport::SetViewportInterface(local_res18,&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar13 = (this->SceneViewport).Object;
  (**(code **)(*(longlong *)this->_padding_ + 0x328))((longlong *)this->_padding_,pFVar13);
  lVar3 = this->_padding_;
  pTVar14 = *(TReferenceControllerBase<1> **)(lVar3 + 0x168);
  pTVar16 = pTVar14;
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_147bd1a85;
      LOCK();
      aVar8 = pTVar14->SharedReferenceCount;
      bVar7 = aVar5 == aVar8;
      if (bVar7) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar7);
    pTVar19 = *(TReferenceControllerBase<1> **)(lVar3 + 0x160);
    pTVar16 = pTVar14;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) goto LAB_147bd1aab;
  }
LAB_147bd1a85:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar14 = pTVar16;
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147bd1aab:
  (**(code **)pTVar19->_padding_)(pTVar19,pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  local_118.Object = (ISlateViewport *)OnViewportResized;
  local_118.SharedReferenceCount.ReferenceController =
       local_118.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_b8 = OnViewportResized;
  uStack_b0 = local_118.SharedReferenceCount.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(FViewport_*,unsigned_int),FDefaultDelegateUserPolicy>
  ::AddUObject<UGameEngine>
            ((TMulticastDelegateRegistration<void___cdecl(FViewport_*,unsigned_int),FDefaultDelegateUserPolicy>
              *)&FViewport::ViewportResizedEvent,(UGameEngine *)&stack0xffffffffffffffb0,
             (pmf_0b36427f *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateGameViewportWidget @ 147bd1b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameEngine::CreateGameViewportWidget(UGameEngine *this,UGameViewportClient *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FName FVar4;
  SOverlay *pSVar5;
  FSharedReferencer<1> FVar6;
  SGameLayerManager *pSVar7;
  FSharedReferencer<1> FVar8;
  SViewport *pSVar9;
  FSharedReferencer<1> FVar10;
  char cVar11;
  bool bVar12;
  byte bVar13;
  bool bVar14;
  atomic<int> aVar15;
  FModuleManager *this_00;
  IModuleInterface *pIVar16;
  FArguments *pFVar17;
  FArguments *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  FArguments *pFVar21;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_818 [4];
  FLLMScope local_814;
  FLLMScope local_810;
  FLLMScope local_80c;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_808;
  TSlateDecl<SGameLayerManager,RequiredArgs::T0RequiredArgs> local_7f0;
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> local_7d8;
  FName local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  SWidget *local_7a8;
  TReferenceControllerBase<1> *pTStack_7a0;
  SViewport *local_798;
  FSharedReferencer<1> local_790;
  TSharedPtr<SWindow,1> local_788;
  FName local_778;
  FMemScope local_770;
  UGameEngine *local_768;
  FMemScope local_760;
  FName local_758;
  FMemScope local_750;
  TSharedRef<SOverlay,1> local_748;
  TSharedPtr<IGameLayerManager,1> local_738;
  SWidget *local_728;
  undefined8 uStack_720;
  FDestructionSentinel local_718;
  undefined1 *local_700;
  undefined1 local_6f8 [528];
  undefined1 local_4e8 [40];
  FSharedReferencer<1> local_4c0;
  undefined1 local_4a0 [24];
  undefined1 local_488 [536];
  undefined1 local_270 [24];
  FArguments local_258;
  
  if ((this->StartupMovieCaptureHandle).ID == 0) {
LAB_147bd1bc3:
    if (GIsDumpingMovie != 0) goto LAB_147bd1bd1;
    bVar14 = true;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_IMovieSceneCaptureModule&___ptr64___cdecl_IMovieSceneCaptureModule::Get(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IMovieSceneCaptureModule&___ptr64___cdecl_IMovieSceneCaptureModule::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IMovieSceneCaptureModule&___ptr64___cdecl_IMovieSceneCaptureModule::Get(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_IMovieSceneCaptureModule&___ptr64___cdecl_IMovieSceneCaptureModule::Get(void)'
                      ::__l2::ModuleName,L"MovieSceneCapture");
      _Init_thread_footer(&`public:_static_class_IMovieSceneCaptureModule&___ptr64___cdecl_IMovieSceneCaptureModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar4 = `public:_static_class_IMovieSceneCaptureModule&___ptr64___cdecl_IMovieSceneCaptureModule::Get(void)'
            ::__l2::ModuleName;
    this_00 = FModuleManager::Get();
    pIVar16 = FModuleManager::LoadModuleChecked(this_00,FVar4);
    cVar11 = (**(code **)((longlong)*pIVar16 + 0x70))(pIVar16);
    if (cVar11 != '\0') goto LAB_147bd1bc3;
LAB_147bd1bd1:
    bVar14 = false;
  }
  pFVar17 = SOverlay::FArguments::FArguments(&local_258);
  FLLMScope::FLLMScope(&local_814,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_778 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_770,&local_778,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_808,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
             ,0xd8,local_res18);
  FMemScope::~FMemScope(&local_770);
  FLLMScope::~FLLMScope(&local_814);
  pSVar5 = local_808._Widget.Object;
  if ((local_808._Widget.Object == (SOverlay *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_808._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SOverlay::Construct(local_808._Widget.Object,pFVar17);
  if ((local_808._Widget.Object == (SOverlay *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_808._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_808._Widget.Object)->_padding_ + 0x228))(local_808._Widget.Object);
    bVar13 = 0;
    if (cVar11 != '\0') goto LAB_147bd1ced;
  }
  else {
LAB_147bd1ced:
    bVar13 = 0x20;
  }
  *(byte *)&(local_808._Widget.Object)->_padding_ =
       (byte)(local_808._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_808._Widget.Object)->_padding_ =
       (byte)(local_808._Widget.Object)->_padding_ | bVar13;
  if ((local_808._Widget.Object == (SOverlay *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_808._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_808._Widget.Object == (SOverlay *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar6.ReferenceController = local_808._Widget.SharedReferenceCount.ReferenceController;
  local_808._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_808._Widget.Object = (SOverlay *)0x0;
  if ((pSVar5 == (SOverlay *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  pFVar18 = SGameLayerManager::FArguments::FArguments((FArguments *)local_488);
  uStack_7b0 = 0;
  (pFVar18->_SceneViewport).bIsSet = true;
  uStack_7ac = uStack_720._4_4_;
  local_7b8 = (FName)GetGameSceneViewport;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar18->_SceneViewport).Getter,(FWriteAccessScope *)&local_718);
  local_700 = &(pFVar18->_SceneViewport).Getter.field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_700);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6APEAVFSceneViewport__XZUFDefaultDelegateUserPolicy__PEAVUGameViewportClient____6B_
    ;
    puVar19[1] = param_1;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUGameEngine____A6APEAVFSceneViewport__XZUFDefaultDelegateUserPolicy__PEAVUGameViewportClient____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar19[3] = 0;
    local_768 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_768);
    *(FName *)(puVar19 + 4) = local_7b8;
    puVar19[5] = CONCAT44(uStack_7ac,uStack_7b0);
  }
  if (local_718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7a8 = (pFVar18->_Content).Widget.Object;
  pTStack_7a0 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7a0);
  FLLMScope::FLLMScope(&local_810,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_760,&local_7b8,true);
  TSlateDecl<SGameLayerManager,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGameLayerManager,RequiredArgs::T0RequiredArgs>
            (&local_7f0,"SGameLayerManager",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
             ,0xda,local_res20);
  FMemScope::~FMemScope(&local_760);
  FLLMScope::~FLLMScope(&local_810);
  pSVar7 = local_7f0._Widget.Object;
  if ((local_7f0._Widget.Object == (SGameLayerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_7f0._Widget.Object,(FSlateBaseNamedArgs *)pFVar18);
  SGameLayerManager::Construct(local_7f0._Widget.Object,pFVar18);
  if ((local_7f0._Widget.Object == (SGameLayerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_7f0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_7f0._Widget.Object)->_padding_ + 0x228))(local_7f0._Widget.Object);
    bVar13 = 0;
    if (cVar11 != '\0') goto LAB_147bd1fe9;
  }
  else {
LAB_147bd1fe9:
    bVar13 = 0x20;
  }
  *(byte *)&(local_7f0._Widget.Object)->_padding_ =
       (byte)(local_7f0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_7f0._Widget.Object)->_padding_ =
       (byte)(local_7f0._Widget.Object)->_padding_ | bVar13;
  if ((local_7f0._Widget.Object == (SGameLayerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_7f0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_7f0._Widget.Object == (SGameLayerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar8.ReferenceController = local_7f0._Widget.SharedReferenceCount.ReferenceController;
  local_7f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7f0._Widget.Object = (SGameLayerManager *)0x0;
  if ((pSVar7 == (SGameLayerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  if ((void *)local_270._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_270._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_488._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_488);
  pFVar21 = SViewport::FArguments::FArguments((FArguments *)local_6f8);
  pFVar21->_RenderDirectlyToWindow = bVar14;
  pFVar21->_EnableGammaCorrection = false;
  pFVar21->_EnableStereoRendering = bVar14;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_728 = (pFVar21->_Content).Widget.Object;
  uStack_720 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar21->_Content).Widget.Object = (SWidget *)pSVar7;
  (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_720);
  FLLMScope::FLLMScope(&local_80c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_758 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_750,&local_758,true);
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>
            (&local_7d8,"SViewport",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
             ,0xee,local_818);
  FMemScope::~FMemScope(&local_750);
  FLLMScope::~FLLMScope(&local_80c);
  pSVar9 = local_7d8._Widget.Object;
  if ((local_7d8._Widget.Object == (SViewport *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_7d8._Widget.Object,(FSlateBaseNamedArgs *)pFVar21);
  SViewport::Construct(local_7d8._Widget.Object,pFVar21);
  if ((local_7d8._Widget.Object == (SViewport *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_7d8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_7d8._Widget.Object)->_padding_ + 0x228))(local_7d8._Widget.Object);
    bVar13 = 0;
    if (cVar11 == '\0') goto LAB_147bd2246;
  }
  bVar13 = 0x20;
LAB_147bd2246:
  *(byte *)&(local_7d8._Widget.Object)->_padding_ =
       (byte)(local_7d8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_7d8._Widget.Object)->_padding_ =
       (byte)(local_7d8._Widget.Object)->_padding_ | bVar13;
  if ((local_7d8._Widget.Object == (SViewport *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_7d8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_7d8._Widget.Object == (SViewport *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar10.ReferenceController = local_7d8._Widget.SharedReferenceCount.ReferenceController;
  local_7d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7d8._Widget.Object = (SViewport *)0x0;
  if ((pSVar9 == (SViewport *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  if ((void *)local_4a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c0.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4e8);
  if ((void *)local_4e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6f8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_6f8);
  local_798 = pSVar9;
  local_790.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->GameViewportWidget != (TSharedPtr<SViewport,1> *)&local_798) {
    (this->GameViewportWidget).Object = pSVar9;
    local_798 = (SViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameViewportWidget).SharedReferenceCount,&local_790);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_790.ReferenceController);
  local_748.Object = pSVar5;
  local_748.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_788.SharedReferenceCount.ReferenceController =
       (this->GameViewportWindow).WeakReferenceCount.ReferenceController;
  local_788.Object = (SWindow *)0x0;
  if (local_788.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (local_788.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_788.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147bd2412;
      }
      LOCK();
      aVar15 = (local_788.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar14 = aVar3 == aVar15;
      if (bVar14) {
        (local_788.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar15 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar15;
    } while (!bVar14);
    if (local_788.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_788.Object = (this->GameViewportWindow).Object;
    }
  }
LAB_147bd2412:
  UGameViewportClient::SetViewportOverlayWidget(param_1,&local_788,&local_748);
  local_738.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  local_738.Object = (IGameLayerManager *)&pSVar7->_padding_;
  if (pSVar7 == (SGameLayerManager *)0x0) {
    local_738.Object = (IGameLayerManager *)0x0;
  }
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UGameViewportClient::SetGameLayerManager(param_1,&local_738);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

// CreateGameWindow @ 147bd24e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
UGameEngine::CreateGameWindow(TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  FSlateRenderer *pFVar2;
  code *pcVar3;
  int iVar4;
  FDeprecateVector2DParameter FVar5;
  FDeprecateVector2DParameter FVar6;
  SWindow *pSVar7;
  bool bVar8;
  EBuildConfiguration EVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  wchar_t *pwVar15;
  TSharedRef<SWindow,1> *pTVar16;
  FText *pFVar17;
  FName FVar18;
  TSharedRef<FGlobalTabmanager,1> *pTVar19;
  FTextFormat *pFVar20;
  FSlateApplication *pFVar21;
  FSlateBrush *pFVar22;
  FArguments *pFVar23;
  ISlateStyle *pIVar24;
  FName *pFVar25;
  FWindowStyle *pFVar26;
  IConsoleManager *pIVar27;
  longlong *plVar28;
  TConsoleVariableData<int> *pTVar29;
  Type TVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  longlong lVar33;
  FWindowStyle *pFVar34;
  EAutoCenter EVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float local_res8 [2];
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_ce8;
  bool local_ce7;
  char local_ce6;
  Type local_ce4;
  bool local_ce0;
  bool local_cdf;
  bool local_cde;
  bool local_cdd;
  int local_cdc;
  int local_cd8;
  int local_cd4;
  int local_cd0;
  T0RequiredArgs local_ccc [4];
  int local_cc8;
  int local_cc4;
  int local_cc0 [2];
  int local_cb8 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_cb0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_ca0
  ;
  FLLMScope local_c90 [2];
  FString local_c88;
  int local_c78;
  int local_c74;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_c70;
  float local_c58;
  float fStack_c54;
  float local_c50;
  float fStack_c4c;
  float local_c48 [2];
  FText local_c40;
  FText local_c30;
  FText local_c20;
  FText local_c10;
  FText local_c00;
  bool local_bf0;
  undefined1 local_be8 [8];
  void *pvStack_be0;
  undefined8 local_bd8;
  undefined1 local_bd0 [4];
  undefined1 local_bcc [4];
  undefined1 local_bc8 [4];
  undefined1 local_bc4 [4];
  undefined1 local_bc0 [4];
  undefined1 local_bbc [4];
  undefined1 local_bb8 [4];
  TVector2<float>_u_0 local_bb4;
  TVector2<float>_u_0 local_bac;
  TVector2<float>_u_0 local_ba4;
  TVector2<float>_u_0 local_b9c;
  TVector2<float>_u_0 local_b94;
  TVector2<float>_u_0 local_b8c;
  TVector2<float>_u_0 local_b84;
  FName local_b7c;
  FMemScope local_b70;
  FText local_b68;
  float local_b58 [2];
  FText local_b50;
  FText local_b40;
  FString local_b30;
  FString local_b20;
  FString local_b10;
  FString local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FString local_ac0;
  FString local_ab0;
  FText local_aa0;
  SWindow *local_a90;
  TReferenceControllerBase<1> *local_a88;
  FText local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FText local_a30;
  FText local_a20;
  FText local_a10;
  SWindow *local_a00;
  TReferenceControllerBase<1> *local_9f8;
  FFormatArgumentValue local_9f0;
  FFormatArgumentValue local_9d0;
  FFormatArgumentValue local_9b0;
  FFormatArgumentValue local_990;
  FDisplayMetrics local_968;
  FText local_8e8;
  FText local_8d8;
  FText local_8c8;
  undefined1 local_8b8 [8];
  TReferenceControllerBase<1> *local_8b0;
  undefined1 local_8a8 [8];
  undefined1 local_8a0 [8];
  undefined1 local_898 [8];
  FText local_890;
  FText local_880;
  FName local_870;
  FText local_868;
  FTextFormat local_858;
  FTextFormat local_848;
  undefined **local_838 [20];
  TReferenceControllerBase<1> *local_798;
  undefined **local_788 [20];
  TReferenceControllerBase<1> *local_6e8;
  undefined **local_6d8 [20];
  TReferenceControllerBase<1> *local_638;
  undefined **local_628 [20];
  TReferenceControllerBase<1> *local_588;
  undefined **local_578 [20];
  TReferenceControllerBase<1> *local_4d8;
  undefined **local_4c8 [20];
  TReferenceControllerBase<1> *local_428;
  undefined **local_418 [20];
  TReferenceControllerBase<1> *local_378;
  undefined1 local_368 [544];
  undefined1 local_148 [160];
  FSharedReferencer<1> local_a8;
  TRefCountPtr<ITextData> local_a0;
  undefined1 local_88 [72];
  
  local_res8[0] = 0.0;
  local_cdc = GSystemResolution.ResX;
  local_cd8 = GSystemResolution.ResY;
  local_ce4 = GSystemResolution.WindowMode;
  if (bGameWindowSettingsOverrideEnabled) {
    pwVar15 = FCommandLine::Get();
    bVar8 = FParse::Param(pwVar15,L"Windowed");
    if (!bVar8) {
      pwVar15 = FCommandLine::Get();
      bVar8 = FParse::Param(pwVar15,L"SimMobile");
      if (!bVar8) {
        pwVar15 = FCommandLine::Get();
        bVar8 = FParse::Param(pwVar15,L"FullScreen");
        if (bVar8) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            pIVar27 = IConsoleManager::Get();
            plVar28 = (longlong *)
                      (**(code **)((longlong)*pIVar27 + 0xc0))(pIVar27,L"r.FullScreenMode",1);
            pTVar29 = (TConsoleVariableData<int> *)0x0;
            if (plVar28 != (longlong *)0x0) {
              pTVar29 = (TConsoleVariableData<int> *)(**(code **)(*plVar28 + 0x68))(plVar28);
            }
            ::CVar = pTVar29;
            _Init_thread_footer(&::_TSS0);
          }
          if ((::CVar == (TConsoleVariableData<int> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CVar",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                                 ,0x14b,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
            return pTVar16;
          }
          iVar13 = TConsoleVariableData<int>::GetValueOnGameThread(::CVar);
          local_ce4 = (Type)(iVar13 != 0);
        }
        goto LAB_147bd2609;
      }
    }
    local_ce4 = Windowed;
  }
LAB_147bd2609:
  DetermineGameWindowResolution(&local_cdc,&local_cd8,&local_ce4,false);
  if (((local_cdc != GSystemResolution.ResX) || (local_cd8 != GSystemResolution.ResY)) ||
     (local_ce4 != GSystemResolution.WindowMode)) {
    FSystemResolution::RequestResolutionChange(local_cdc,local_cd8,local_ce4);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
      return pTVar16;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  }
  FText::FText(&local_c30);
  FConfigCacheIni::GetText
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectDisplayedTitle",
             &local_c30,&GGameIni);
  bVar8 = FText::IsEmpty(&local_c30);
  if (bVar8) {
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_890,L"UnrealEd",L"GameWindowTitle",L"{GameName}");
    FText::FText(&local_c20,pFVar17);
  }
  else {
    local_b50.TextData.Reference = local_c30.TextData.Reference;
    if (local_c30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c30.TextData.Reference + 8))
                (local_c30.TextData.Reference,local_bd0);
    }
    local_b50.Flags = local_c30.Flags;
    FText::FText(&local_c20,&local_b50);
    local_890.TextData.Reference = local_b50.TextData.Reference;
  }
  if (local_890.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_890.TextData.Reference + 0x10))();
  }
  FText::FText(&local_c10);
  FText::FText(&local_c40);
  FConfigCacheIni::GetText
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectDebugTitleInfo",
             &local_c40,&GGameIni);
  bVar8 = FText::IsEmpty(&local_c40);
  if (bVar8) {
    bVar10 = true;
    bVar8 = false;
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_880,L"UnrealEd",L"GameWindowTitleDebugInfo",
                         L"({PlatformArchitecture}-bit {BuildConfiguration} {RHIName})");
  }
  else {
    bVar10 = false;
    bVar8 = true;
    local_b40.TextData.Reference = local_c40.TextData.Reference;
    if (local_c40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c40.TextData.Reference + 8))
                (local_c40.TextData.Reference,local_bcc);
    }
    local_b40.Flags = local_c40.Flags;
    pFVar17 = &local_b40;
  }
  FText::operator=(&local_c10,pFVar17);
  if ((bVar8) && (local_b40.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_b40.TextData.Reference + 0x10))();
  }
  if ((bVar10) && (local_880.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_880.TextData.Reference + 0x10))();
  }
  FText::FromString(&local_b68,L"64");
  local_ca0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ca0.Pairs.ArrayNum = 0;
  local_ca0.Pairs.ArrayMax = 0;
  pFVar17 = FText::FromString(&local_868,GInternalProjectName);
  local_9d0.Type = Text;
  FText::FText((FText *)&local_9d0.TextValue,pFVar17);
  if ((local_9d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  ::FString::FString(&local_a70,L"GameName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_ca0,&local_a70,&local_9d0);
  if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a70.Data.AllocatorInstance.Data);
  }
  if (local_9d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_9d0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_868.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_868.TextData.Reference + 0x10))();
  }
  local_9f0.Type = Text;
  local_9f0.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_b68.TextData.Reference;
  if (local_b68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b68.TextData.Reference + 8))
              (local_b68.TextData.Reference,local_bc8);
  }
  local_9f0.TextValue.field0_0x0.TypedValue.Flags = local_b68.Flags;
  if ((local_9f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  ::FString::FString(&local_a60,L"PlatformArchitecture");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_ca0,&local_a60,&local_9f0);
  if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a60.Data.AllocatorInstance.Data);
  }
  if (local_9f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_9f0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  FVar18 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_8a0);
  pFVar17 = FText::FromName(&local_8e8,(FName *)FVar18);
  local_9b0.Type = Text;
  FText::FText((FText *)&local_9b0.TextValue,pFVar17);
  if ((local_9b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  ::FString::FString(&local_a50,L"RHIName");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_ca0,&local_a50,&local_9b0);
  if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a50.Data.AllocatorInstance.Data);
  }
  if (local_9b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_9b0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_8e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e8.TextData.Reference + 0x10))();
  }
  EVar9 = FApp::GetBuildConfiguration();
  pwVar15 = ::LexToString(EVar9);
  pFVar17 = FText::FromString(&local_8d8,pwVar15);
  local_990.Type = Text;
  FText::FText((FText *)&local_990.TextValue,pFVar17);
  if ((local_990.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  ::FString::FString(&local_a40,L"BuildConfiguration");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_ca0,&local_a40,&local_990);
  if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a40.Data.AllocatorInstance.Data);
  }
  if (local_990.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_990.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_8d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8d8.TextData.Reference + 0x10))();
  }
  pTVar19 = FGlobalTabmanager::Get();
  pFVar17 = FGlobalTabmanager::GetApplicationTitle(pTVar19->Object);
  local_a30.TextData.Reference = (pFVar17->TextData).Reference;
  if (local_a30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a30.TextData.Reference + 8))
              (local_a30.TextData.Reference,local_bc4);
  }
  local_a30.Flags = pFVar17->Flags;
  local_a20.TextData.Reference = local_c10.TextData.Reference;
  if (local_c10.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c10.TextData.Reference + 8))
              (local_c10.TextData.Reference,local_bc0);
  }
  local_a20.Flags = local_c10.Flags;
  local_a10.TextData.Reference = local_c20.TextData.Reference;
  if (local_c20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c20.TextData.Reference + 8))
              (local_c20.TextData.Reference,local_bbc);
  }
  local_a10.Flags = local_c20.Flags;
  pFVar17 = FText::FromString(&local_8c8,L"{0} {1} {2}");
  pFVar20 = FTextFormat::FTextFormat(&local_848,pFVar17,Default);
  FText::Format<FText,FText,FText>(&local_a80,pFVar20,&local_a10,&local_a20,&local_a30);
  if (local_8c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8c8.TextData.Reference + 0x10))();
  }
  pFVar20 = FTextFormat::FTextFormat(&local_858,&local_a80,Default);
  FText::Format(&local_aa0,pFVar20,&local_ca0);
  ::FString::FString(&local_b30,L"bShouldWindowPreserveAspectRatio");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_b30.Data.ArrayNum != 0) {
    FVar31.Data = local_b30.Data.AllocatorInstance.Data;
  }
  local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             (bool *)local_res8,&GGameIni);
  local_ce0 = (bool)local_res8[0]._0_1_;
  if (local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b30.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b20,L"bUseBorderlessWindow");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_b20.Data.ArrayNum != 0) {
    FVar31.Data = local_b20.Data.AllocatorInstance.Data;
  }
  local_res10[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             local_res10,&GGameIni);
  bVar8 = local_res10[0] == false;
  if (local_b20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b20.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b10,L"bAllowWindowResize");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_b10.Data.ArrayNum != 0) {
    FVar31.Data = local_b10.Data.AllocatorInstance.Data;
  }
  local_res18[0] = true;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             local_res18,&GGameIni);
  local_ce6 = local_res18[0];
  if (local_b10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b10.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b00,L"bAllowClose");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_b00.Data.ArrayNum != 0) {
    FVar31.Data = local_b00.Data.AllocatorInstance.Data;
  }
  local_res20[0] = true;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             local_res20,&GGameIni);
  local_cdf = local_res20[0];
  if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b00.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_af0,L"bAllowMaximize");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_af0.Data.ArrayNum != 0) {
    FVar31.Data = local_af0.Data.AllocatorInstance.Data;
  }
  local_ce8 = true;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             &local_ce8,&GGameIni);
  local_cdd = local_ce8;
  if (local_af0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ae0,L"bAllowMinimize");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_ae0.Data.ArrayNum != 0) {
    FVar31.Data = local_ae0.Data.AllocatorInstance.Data;
  }
  local_ce7 = true;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             &local_ce7,&GGameIni);
  local_cde = local_ce7;
  if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ad0,L"MinWindowWidth");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_ad0.Data.ArrayNum != 0) {
    FVar31.Data = local_ad0.Data.AllocatorInstance.Data;
  }
  local_cc4 = 0x280;
  FConfigCacheIni::GetInt
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             &local_cc4,&GGameIni);
  local_c78 = local_cc4;
  if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_ac0,L"MinWindowHeight");
  FVar31.Data = (FScriptContainerElement *)L"";
  if (local_ac0.Data.ArrayNum != 0) {
    FVar31.Data = local_ac0.Data.AllocatorInstance.Data;
  }
  local_cc0[0] = 0x1e0;
  FConfigCacheIni::GetInt
            (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",(wchar_t *)FVar31.Data,
             local_cc0,&GGameIni);
  local_c74 = local_cc0[0];
  if (local_ac0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac0.Data.AllocatorInstance.Data);
  }
  local_cd4 = 0;
  local_cd0 = 0;
  pwVar15 = FCommandLine::Get();
  bVar10 = FParse::Value(pwVar15,L"WinX=",&local_cd4);
  pTVar29 = (TConsoleVariableData<int> *)&DAT_00000001;
  if (bVar10) {
    pwVar15 = FCommandLine::Get();
    bVar10 = FParse::Value(pwVar15,L"WinY=",&local_cd0);
    pTVar29 = (TConsoleVariableData<int> *)&DAT_00000001;
    if (bVar10) {
      pTVar29 = (TConsoleVariableData<int> *)0x0;
    }
  }
  EVar35 = (EAutoCenter)pTVar29;
  pwVar15 = FCommandLine::Get();
  bVar10 = FParse::Value(pwVar15,L"SAVEWINPOS=",&local_cc8);
  if ((bVar10) && (0 < local_cc8)) {
    ::FString::FString(&local_ab0,L"/Script/Engine.Engine");
    ::FString::FString(&local_c88,L"/Script/Engine.GameUserSettings");
    FVar31.Data = (FScriptContainerElement *)L"";
    if (local_ab0.Data.ArrayNum != 0) {
      FVar31.Data = local_ab0.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::GetString
              (GConfig,(wchar_t *)FVar31.Data,L"GameUserSettingsClassName",&local_c88,&GEngineIni);
    FVar31.Data = (FScriptContainerElement *)L"";
    if (local_c88.Data.ArrayNum != 0) {
      FVar31.Data = local_c88.Data.AllocatorInstance.Data;
    }
    bVar10 = FConfigCacheIni::GetInt
                       (GConfig,(wchar_t *)FVar31.Data,L"WindowPosX",&local_cd4,
                        &GGameUserSettingsIni);
    if (bVar10) {
      FVar31.Data = (FScriptContainerElement *)L"";
      if (local_c88.Data.ArrayNum != 0) {
        FVar31.Data = local_c88.Data.AllocatorInstance.Data;
      }
      bVar10 = FConfigCacheIni::GetInt
                         (GConfig,(wchar_t *)FVar31.Data,L"WindowPosY",&local_cd0,
                          &GGameUserSettingsIni);
      if (!bVar10) goto LAB_147bd30bf;
      EVar35 = None;
    }
    else {
LAB_147bd30bf:
      FVar31.Data = (FScriptContainerElement *)L"";
      if (local_c88.Data.ArrayNum != 0) {
        FVar31.Data = local_c88.Data.AllocatorInstance.Data;
      }
      local_cb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_cb0.ArrayNum = 0;
      local_cb0.ArrayMax = 0;
      FConfigCacheIni::GetArray
                (GConfig,(wchar_t *)FVar31.Data,L"WindowPositions",&local_cb0,&GGameUserSettingsIni)
      ;
      uVar32 = local_cc8 - 1;
      if ((int)uVar32 < 0) {
LAB_147bd31ea:
      }
      else if ((int)uVar32 < local_cb0.ArrayNum) {
        uVar14 = 0;
        if ((int)uVar32 < local_cb0.ArrayNum) {
          uVar14 = ~uVar32 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
          return pTVar16;
        }
        FVar31.Data = local_cb0.AllocatorInstance.Data;
        lVar33 = (longlong)(int)uVar32;
        local_cb8[0] = 0;
        local_cb8[1] = 0;
        if (*(int *)(local_cb0.AllocatorInstance.Data + lVar33 * 0x10 + 8) == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = *(wchar_t **)(local_cb0.AllocatorInstance.Data + lVar33 * 0x10);
        }
        bVar10 = FParse::Value(pwVar15,L"X=",local_cb8);
        if (bVar10) {
          if (*(int *)(FVar31.Data + lVar33 * 0x10 + 8) == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = *(wchar_t **)(FVar31.Data + lVar33 * 0x10);
          }
          bVar10 = FParse::Value(pwVar15,L"Y=",local_cb8 + 1);
          if (bVar10) {
            EVar35 = None;
            local_cd4 = local_cb8[0];
            local_cd0 = local_cb8[1];
            goto LAB_147bd31ea;
          }
        }
        if (2 < (byte)LogEngine._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
        }
        goto LAB_147bd31ea;
      }
      DestructItems<FString,int>((FString *)local_cb0.AllocatorInstance.Data,local_cb0.ArrayNum);
      if (local_cb0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cb0.AllocatorInstance.Data);
      }
    }
    if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c88.Data.AllocatorInstance.Data);
    }
    if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = false;
  fVar38 = local_res8[0];
  fVar39 = local_res8[0];
  if (local_ce4 == Windowed) {
    local_968.MonitorInfo.ArrayNum = 0;
    local_968.MonitorInfo.ArrayMax = 0;
    local_968.PrimaryDisplayWorkAreaRect.Left = 0;
    local_968.PrimaryDisplayWorkAreaRect.Top = 0;
    local_968.PrimaryDisplayWorkAreaRect.Right = 0;
    local_968.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_968.VirtualDisplayRect.Left = 0;
    local_968.VirtualDisplayRect.Top = 0;
    local_968.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_968.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_968.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_968.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_968.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_968.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_968.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_968.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_968.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_968.VirtualDisplayRect.Right = 0;
    local_968.VirtualDisplayRect.Bottom = 0;
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      FDisplayMetrics::RebuildDisplayMetrics(&local_968);
    }
    else {
      pFVar21 = FSlateApplication::Get();
      (**(code **)(*(longlong *)pFVar21 + 0x1d0))(pFVar21,&local_968);
    }
    iVar13 = local_cdc;
    if (local_cdc < local_968.VirtualDisplayRect.Right - local_968.VirtualDisplayRect.Left) {
      iVar13 = local_968.VirtualDisplayRect.Right - local_968.VirtualDisplayRect.Left;
    }
    iVar4 = local_cd8;
    if (local_cd8 < local_968.VirtualDisplayRect.Bottom - local_968.VirtualDisplayRect.Top) {
      iVar4 = local_968.VirtualDisplayRect.Bottom - local_968.VirtualDisplayRect.Top;
    }
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_968.MonitorInfo.AllocatorInstance.Data,
               local_968.MonitorInfo.ArrayNum);
    bVar10 = true;
    fVar38 = (float)iVar4;
    fVar39 = (float)iVar13;
    if ((FMonitorInfo *)local_968.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_968.MonitorInfo.AllocatorInstance.Data);
    }
  }
  pFVar34 = &BorderlessStyle;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar26 = FWindowStyle::GetDefault();
    FWindowStyle::FWindowStyle(&BorderlessStyle,pFVar26);
    atexit(`UGameEngine::CreateGameWindow'::__l2::_dynamic_atexit_destructor_for__BorderlessStyle__)
    ;
    _Init_thread_footer(&::_TSS0);
  }
  local_bb4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_418,(FDeprecateVector2DParameter *)&local_bb4._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.ActiveTitleBrush,pFVar22);
  local_bac = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_4c8,(FDeprecateVector2DParameter *)&local_bac._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.InactiveTitleBrush,pFVar22);
  local_ba4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_578,(FDeprecateVector2DParameter *)&local_ba4._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.FlashTitleBrush,pFVar22);
  local_b9c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_628,(FDeprecateVector2DParameter *)&local_b9c._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.OutlineBrush,pFVar22);
  local_b94 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_6d8,(FDeprecateVector2DParameter *)&local_b94._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.BorderBrush,pFVar22);
  local_b8c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_788,(FDeprecateVector2DParameter *)&local_b8c._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.BackgroundBrush,pFVar22);
  local_b84 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_838,(FDeprecateVector2DParameter *)&local_b84._s_0)
  ;
  FSlateBrush::operator=(&BorderlessStyle.ChildBackgroundBrush,pFVar22);
  local_838[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_798);
  local_788[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6e8);
  local_6d8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_638);
  local_628[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_588);
  local_578[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4d8);
  local_4c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_428);
  local_418[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
  pFVar23 = SWindow::FArguments::FArguments((FArguments *)local_368);
  pFVar23->_Type = GameWindow;
  if (bVar8) {
    pIVar24 = FAppStyle::Get();
    pFVar25 = ::FName::FName(&local_870,"Window");
    pFVar34 = (FWindowStyle *)
              (**(code **)((longlong)*pIVar24 + 0xa0))(pIVar24,FWindowStyle::TypeName,*pFVar25,0,1);
    if (pFVar34 == (FWindowStyle *)0x0) {
      pFVar34 = FWindowStyle::GetDefault();
    }
  }
  pFVar23->_Style = pFVar34;
  local_c58 = (float)local_cdc;
  fStack_c54 = (float)local_cd8;
  FVar5._4_4_ = fStack_c54;
  FVar5._0_4_ = local_c58;
  pFVar23->_ClientSize = FVar5;
  pFVar23->_AdjustInitialSizeAndPositionForDPIScale = false;
  local_c00.TextData.Reference = local_aa0.TextData.Reference;
  if (local_aa0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_aa0.TextData.Reference + 8))
              (local_aa0.TextData.Reference,local_bb8);
  }
  local_c00.Flags = local_aa0.Flags;
  local_bf0 = true;
  local_bd8 = 0;
  local_be8 = (undefined1  [8])0x0;
  pvStack_be0 = (void *)0x0;
  FText::operator=(&(pFVar23->_Title).Value,&local_c00);
  (pFVar23->_Title).bIsSet = local_bf0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Title).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8);
  if (pvStack_be0 != (void *)0x0) {
    FMemory::Free(pvStack_be0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_be8);
  if (local_c00.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c00.TextData.Reference + 0x10))();
  }
  pFVar23->_AutoCenter = EVar35;
  local_c50 = (float)local_cd4;
  fStack_c4c = (float)local_cd0;
  FVar6._4_4_ = fStack_c4c;
  FVar6._0_4_ = local_c50;
  pFVar23->_ScreenPosition = FVar6;
  if ((TOptional<float> *)local_8a8 != &pFVar23->_MinWidth) {
    (pFVar23->_MinWidth).TypedValue = (float)local_c78;
    (pFVar23->_MinWidth).bIsSet = true;
  }
  if ((TOptional<float> *)local_898 != &pFVar23->_MinHeight) {
    (pFVar23->_MinHeight).TypedValue = (float)local_c74;
    (pFVar23->_MinHeight).bIsSet = true;
  }
  if (!bVar10) {
    fVar39 = local_b58[0];
  }
  if ((TOptional<float> *)local_b58 == &pFVar23->_MaxWidth) {
    if (!bVar10) goto LAB_147bd36fe;
  }
  else if (bVar10) {
    (pFVar23->_MaxWidth).TypedValue = fVar39;
    (pFVar23->_MaxWidth).bIsSet = true;
  }
  else {
    if ((pFVar23->_MaxWidth).bIsSet != false) {
      (pFVar23->_MaxWidth).bIsSet = false;
    }
LAB_147bd36fe:
    fVar38 = local_c48[0];
  }
  if ((TOptional<float> *)local_c48 != &pFVar23->_MaxHeight) {
    if (bVar10) {
      (pFVar23->_MaxHeight).TypedValue = fVar38;
      (pFVar23->_MaxHeight).bIsSet = true;
    }
    else if ((pFVar23->_MaxHeight).bIsSet != false) {
      (pFVar23->_MaxHeight).bIsSet = false;
    }
  }
  pFVar23->_SaneWindowPlacement = EVar35 == None;
  pFVar23->_FocusWhenFirstShown = true;
  pFVar23->_UseOSWindowBorder = bVar8;
  pFVar23->_CreateTitleBar = bVar8;
  pFVar23->_ShouldPreserveAspectRatio = local_ce0;
  uVar36 = ___xmm_40a0000040a0000040a0000040a00000;
  uVar37 = _UNK_150925428;
  if (!bVar8) {
    uVar36 = 0;
    uVar37 = 0;
  }
  bVar8 = local_ce6 != '\0';
  local_ce6 = -local_ce6;
  (pFVar23->_LayoutBorder).Left = (float)(int)uVar36;
  (pFVar23->_LayoutBorder).Top = (float)(int)((ulonglong)uVar36 >> 0x20);
  (pFVar23->_LayoutBorder).Right = (float)(int)uVar37;
  (pFVar23->_LayoutBorder).Bottom = (float)(int)((ulonglong)uVar37 >> 0x20);
  pFVar23->_SizingRule = -bVar8 & UserSized;
  pFVar23->_HasCloseButton = local_cdf;
  pFVar23->_SupportsMinimize = local_cde;
  pFVar23->_SupportsMaximize = local_cdd;
  FLLMScope::FLLMScope(local_c90,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b7c = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_b70,&local_b7c,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_c70,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
             ,0x281,local_ccc);
  FMemScope::~FMemScope(&local_b70);
  FLLMScope::~FLLMScope(local_c90);
  pSVar7 = local_c70._Widget.Object;
  if ((local_c70._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  SWidget::SWidgetConstruct((SWidget *)local_c70._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
  SWindow::Construct(local_c70._Widget.Object,pFVar23);
  if ((local_c70._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  if (((local_c70._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_c70._Widget.Object)->_padding_ + 0x228))(local_c70._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_147bd38dc;
  }
  bVar12 = 0x20;
LAB_147bd38dc:
  *(byte *)&(local_c70._Widget.Object)->_padding_ =
       (byte)(local_c70._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_c70._Widget.Object)->_padding_ =
       (byte)(local_c70._Widget.Object)->_padding_ | bVar12;
  if ((local_c70._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  pbVar1 = (byte *)((longlong)&(local_c70._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_c70._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  __return_storage_ptr__->Object = local_c70._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_c70._Widget.SharedReferenceCount.ReferenceController;
  local_c70._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c70._Widget.Object = (SWindow *)0x0;
  if ((pSVar7 == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
    return pTVar16;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  if (local_a0.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
  if ((void *)local_148._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_148._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  if ((ITextData *)local_368._520_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_368._520_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_368);
  SWindow::SetAllowFastUpdate(__return_storage_ptr__->Object,true);
  pFVar21 = FSlateApplication::Get();
  pcVar3 = *(code **)(*(longlong *)pFVar21 + 0x10);
  local_a00 = __return_storage_ptr__->Object;
  local_9f8 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_9f8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_9f8->SharedReferenceCount = (atomic<int>)((int)local_9f8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(pFVar21,local_8b8,&local_a00,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8b0);
  TVar30 = WindowedFullscreen;
  if (local_ce4 != Fullscreen) {
    TVar30 = local_ce4;
  }
  SWindow::SetWindowMode(__return_storage_ptr__->Object,TVar30);
  pFVar21 = FSlateApplication::Get();
  if ((pFVar21->bRenderOffScreen == false) ||
     (bVar8 = FNullPlatformApplicationMisc::IsUsingNullApplication(), bVar8)) {
    SWindow::ShowWindow(__return_storage_ptr__->Object);
  }
  else {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
        return pTVar16;
      }
      if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar16 = (TSharedRef<SWindow,1> *)(*pcVar3)();
        return pTVar16;
      }
    }
    pFVar2 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x30);
    local_a90 = __return_storage_ptr__->Object;
    local_a88 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_a88 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a88->SharedReferenceCount = (atomic<int>)((int)local_a88->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(pFVar2,&local_a90);
  }
  pFVar21 = FSlateApplication::Get();
  FSlateApplication::Tick(pFVar21,All);
  if (local_aa0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_aa0.TextData.Reference + 0x10))();
  }
  if (local_a80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a80.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_ca0.Pairs.AllocatorInstance.Data,
             local_ca0.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_ca0.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_ca0.Pairs.AllocatorInstance.Data);
  }
  if (local_b68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b68.TextData.Reference + 0x10))();
  }
  if (local_c40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c40.TextData.Reference + 0x10))();
  }
  if (local_c10.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c10.TextData.Reference + 0x10))();
  }
  if (local_c20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c20.TextData.Reference + 0x10))();
  }
  if (local_c30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c30.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// DetermineGameWindowResolution @ 147bd7870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGameEngine::DetermineGameWindowResolution(int *param_1,int *param_2,Type *param_3,bool param_4)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  Type TVar6;
  wchar_t *pwVar7;
  FSlateApplication *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  Type TVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  Type TVar16;
  int iVar17;
  longlong lVar18;
  FMonitorInfo *pFVar19;
  undefined1 local_res20 [8];
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_118;
  uint local_108;
  uint local_104;
  int local_100 [2];
  FString local_f8;
  FDisplayMetrics local_e8;
  
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  TVar6 = Fullscreen;
  if (!bGameWindowSettingsOverrideEnabled) goto LAB_147bd7981;
  pwVar7 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar7,L"Res=",&local_f8,true,(wchar_t **)0x0);
  if (bVar4) {
    local_108 = 0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar9.Data = local_f8.Data.AllocatorInstance.Data;
    }
    local_104 = 0;
    local_100[0] = 2;
    bVar4 = ParseResolution((wchar_t *)FVar9.Data,&local_108,&local_104,local_100);
    if (bVar4) {
      *param_1 = local_108;
      *param_2 = local_104;
      TVar11 = TVar6;
      if ((local_100[0] == 0) || (TVar11 = Windowed, local_100[0] != 1)) {
        *param_3 = TVar11;
      }
      else {
        *param_3 = WindowedFullscreen;
      }
    }
  }
  else {
    if (bGameWindowSettingsOverrideEnabled == false) {
LAB_147bd7981:
      bVar4 = false;
    }
    else {
      pwVar7 = FCommandLine::Get();
      bVar4 = FParse::Value(pwVar7,L"ResX=",param_1);
      if (!bVar4) goto LAB_147bd7981;
      bVar4 = true;
    }
    if (bGameWindowSettingsOverrideEnabled == false) {
LAB_147bd79ab:
      bVar5 = false;
    }
    else {
      pwVar7 = FCommandLine::Get();
      bVar5 = FParse::Value(pwVar7,L"ResY=",param_2);
      if (!bVar5) goto LAB_147bd79ab;
      bVar5 = true;
    }
    if (bVar4) {
      if (!bVar5) {
        *param_2 = (int)((float)*param_1 * __real_3f100000);
      }
    }
    else if (bVar5) {
      *param_1 = (int)((float)*param_2 * __real_3fe38e39);
    }
  }
  local_e8.MonitorInfo.ArrayNum = 0;
  local_e8.MonitorInfo.ArrayMax = 0;
  local_e8.PrimaryDisplayWorkAreaRect.Left = 0;
  local_e8.PrimaryDisplayWorkAreaRect.Top = 0;
  local_e8.PrimaryDisplayWorkAreaRect.Right = 0;
  local_e8.PrimaryDisplayWorkAreaRect.Bottom = 0;
  local_e8.VirtualDisplayRect.Left = 0;
  local_e8.VirtualDisplayRect.Top = 0;
  local_e8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_e8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_e8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_e8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_e8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_e8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_e8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_e8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_e8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.VirtualDisplayRect.Right = 0;
  local_e8.VirtualDisplayRect.Bottom = 0;
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    FDisplayMetrics::RebuildDisplayMetrics(&local_e8);
  }
  else {
    pFVar8 = FSlateApplication::Get();
    (**(code **)(*(longlong *)pFVar8 + 0x1d0))(pFVar8,&local_e8);
  }
  TVar11 = *param_3;
  if ((param_4) && (TVar11 == Windowed)) {
    iVar15 = local_e8.PrimaryDisplayWorkAreaRect.Right - local_e8.PrimaryDisplayWorkAreaRect.Left;
    iVar17 = local_e8.PrimaryDisplayWorkAreaRect.Bottom - local_e8.PrimaryDisplayWorkAreaRect.Top;
  }
  else {
    iVar15 = local_e8.PrimaryDisplayWidth;
    if ((param_4) && (TVar11 == Windowed)) {
      iVar17 = local_e8.PrimaryDisplayWorkAreaRect.Bottom - local_e8.PrimaryDisplayWorkAreaRect.Top;
    }
    else {
      iVar17 = local_e8.PrimaryDisplayHeight;
      if ((TVar11 == Fullscreen) &&
         (iVar3 = local_e8.MonitorInfo.ArrayNum, 0 < local_e8.MonitorInfo.ArrayNum)) {
        iVar15 = *(int *)(local_e8.MonitorInfo.AllocatorInstance.Data + 0x20);
        iVar17 = *(int *)(local_e8.MonitorInfo.AllocatorInstance.Data + 0x24);
        pFVar19 = (FMonitorInfo *)
                  (local_e8.MonitorInfo.AllocatorInstance.Data +
                  (longlong)local_e8.MonitorInfo.ArrayNum * 0x58);
        FVar9.Data = local_e8.MonitorInfo.AllocatorInstance.Data;
        while( true ) {
          if (local_e8.MonitorInfo.ArrayNum != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FMonitorInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if ((FMonitorInfo *)FVar9.Data == pFVar19) goto LAB_147bd7af7;
          if (((FMonitorInfo *)FVar9.Data)->bIsPrimary != false) break;
          FVar9.Data = FVar9.Data + 0x58;
        }
        iVar15 = (((FMonitorInfo *)FVar9.Data)->MaxResolution).field0_0x0._s_0.X;
        iVar17 = (((FMonitorInfo *)FVar9.Data)->MaxResolution).field0_0x0._s_0.Y;
        if ((iVar15 == 0) || (iVar17 == 0)) {
          iVar15 = ((FMonitorInfo *)FVar9.Data)->NativeWidth;
          iVar17 = ((FMonitorInfo *)FVar9.Data)->NativeHeight;
        }
      }
    }
  }
LAB_147bd7af7:
  if (bGameWindowSettingsOverrideEnabled != false) {
    pwVar7 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar7,L"ForceRes");
    if (bVar4) goto LAB_147bd7e11;
  }
  if ((((*param_1 < 1) || (iVar15 < *param_1)) || (*param_2 < 1)) || (iVar17 < *param_2)) {
    *param_1 = iVar15;
    *param_2 = iVar17;
    if (*param_3 == Windowed) {
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      GenerateConvenientWindowedResolutions(&local_e8,&local_118);
      uVar10 = (ulonglong)local_118.ArrayNum;
      if (0 < local_118.ArrayNum) {
        uVar12 = local_118.ArrayNum - 1;
        TVar11 = TVar6;
        if ((int)uVar12 < local_118.ArrayNum) {
          TVar11 = ~uVar12 >> 0x1f;
        }
        if (TVar11 == Fullscreen) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar10 = local_118._8_8_ & 0xffffffff;
        }
        uVar13 = (int)uVar10 - 1;
        *param_1 = *(int *)(local_118.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        TVar11 = TVar6;
        if ((int)uVar13 < (int)uVar10) {
          TVar11 = ~uVar13 >> 0x1f;
        }
        if (TVar11 == Fullscreen) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar10 = local_118._8_8_ & 0xffffffff;
        }
        uVar14 = (int)uVar10 - 1;
        *param_2 = *(int *)(local_118.AllocatorInstance.Data + (longlong)(int)uVar13 * 8 + 4);
        uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar2 = __real_38d1b717;
        if (-1 < (int)uVar14) {
          lVar18 = (longlong)(int)uVar14;
          do {
            TVar16 = ~uVar14 >> 0x1f;
            TVar11 = TVar6;
            if ((int)uVar14 < (int)uVar10) {
              TVar11 = TVar16;
            }
            if (TVar11 == Fullscreen) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar10 = local_118._8_8_ & 0xffffffff;
            }
            FVar9.Data = local_118.AllocatorInstance.Data;
            TVar11 = TVar6;
            if ((int)uVar14 < (int)uVar10) {
              TVar11 = TVar16;
            }
            if (TVar11 == Fullscreen) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar10 = local_118._8_8_ & 0xffffffff;
            }
            if ((float)((uint)((float)*(int *)(FVar9.Data + lVar18 * 8) /
                               (float)*(int *)(local_118.AllocatorInstance.Data + lVar18 * 8 + 4) -
                              (float)local_e8.PrimaryDisplayWidth /
                              (float)local_e8.PrimaryDisplayHeight) & uVar12) < fVar2) {
              if ((int)uVar14 < (int)uVar10) {
                TVar6 = TVar16;
              }
              iVar15 = (int)uVar10;
              if (TVar6 == Fullscreen) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar15 = local_118.ArrayNum;
              }
              TVar6 = Fullscreen;
              if ((int)uVar14 < iVar15) {
                TVar6 = TVar16;
              }
              *param_1 = *(int *)(local_118.AllocatorInstance.Data + (ulonglong)uVar14 * 8);
              if ((TVar6 == Fullscreen) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              *param_2 = *(int *)(local_118.AllocatorInstance.Data + (ulonglong)uVar14 * 8 + 4);
              break;
            }
            lVar18 = lVar18 + -1;
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
    }
  }
LAB_147bd7e11:
  if (bGameWindowSettingsOverrideEnabled != false) {
    pwVar7 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar7,L"Portrait");
    if (bVar4) {
      iVar15 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar15;
    }
  }
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)local_e8.MonitorInfo.AllocatorInstance.Data,
             local_e8.MonitorInfo.ArrayNum);
  if ((FMonitorInfo *)local_e8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
    FMemory::Free(local_e8.MonitorInfo.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return;
}

// EnableGameWindowSettingsOverride @ 147bd8ac0

void __cdecl UGameEngine::EnableGameWindowSettingsOverride(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bGameWindowSettingsOverrideEnabled = param_1;
  return;
}

// Exec @ 147bd9620

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::Exec(UGameEngine *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  AGameModeBase *pAVar2;
  UEngine *pUVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FWorldContext *pFVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  FOutputDeviceRedirector *pFVar11;
  UGameUserSettings *pUVar12;
  FGameDelegates *this_00;
  ForAnyElementType FVar13;
  wchar_t *local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = param_2;
  bVar4 = FParse::Command(local_res18,L"REATTACHCOMPONENTS",true);
  if ((bVar4) || (bVar4 = FParse::Command(local_res18,L"REREGISTERCOMPONENTS",true), bVar4)) {
    if ((byte)LogConsoleResponse._0_1_ < 3) {
      return true;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return true;
  }
  bVar4 = FParse::Command(local_res18,L"EXIT",true);
  if ((bVar4) || (bVar4 = FParse::Command(local_res18,L"QUIT",true), bVar4)) {
    FParse::Token(&local_58,local_res18,false);
    if (1 < local_58.Data.ArrayNum) {
      FGenericPlatformStricmp::Stricmp
                ((wchar_t *)local_58.Data.AllocatorInstance.Data,L"background");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar13.Data = local_58.Data.AllocatorInstance.Data;
      }
      FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"force");
    }
    FOutputDevice::Log(param_3,L"Closing by request");
    this_00 = FGameDelegates::Get();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this_00->ExitCommandDelegate);
    FWindowsPlatformMisc::RequestExit(false,L"UGameEngine::HandleExitCommand");
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return true;
    }
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return true;
  }
  bVar4 = FParse::Command(local_res18,L"GETMAXTICKRATE",true);
  if (bVar4) {
    (*(code *)this[-1].GameViewportWidget.Object[1]._padding_)(&this[-1].GameViewportWidget,0,0);
    FOutputDevice::LogfImpl(param_3,L"%f");
    return true;
  }
  bVar4 = FParse::Command(local_res18,L"CANCEL",true);
  if (bVar4) {
    pcVar1 = (code *)this[-1].GameViewportWidget.Object[1]._padding_;
    pFVar8 = UEngine::GetWorldContextFromWorldChecked
                       ((UEngine *)&this[-1].GameViewportWidget,param_1);
    (*pcVar1)(&this[-1].GameViewportWidget,pFVar8);
    return true;
  }
  bVar4 = FParse::Command(local_res18,L"TOGGLECVAR",true);
  if (!bVar4) {
    bVar4 = FParse::Command(local_res18,L"ApplyUserSettings",true);
    if (bVar4) {
      pUVar12 = UEngine::GetGameUserSettings((UEngine *)&this[-1].GameViewportWidget);
      (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12,0);
      return true;
    }
    if (param_1 != (UWorld *)0x0) {
      bVar4 = UWorld::Exec(param_1,param_1,local_res18[0],param_3);
      if (bVar4) {
        return true;
      }
      pAVar2 = (param_1->AuthorityGameMode).field0_0x0.DebugPtr;
      if ((pAVar2 != (AGameModeBase *)0x0) &&
         (cVar6 = (**(code **)(pAVar2->_padding_ + 0x278))(pAVar2,local_res18[0],param_3,0),
         cVar6 != '\0')) {
        return true;
      }
    }
    bVar4 = UEngine::Exec((UEngine *)this,param_1,local_res18[0],param_3);
    if (bVar4) {
      return true;
    }
    bVar4 = UPlatformInterfaceBase::StaticExec(local_res18[0],param_3);
    if (bVar4) {
      return true;
    }
    return false;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FParse::Token(local_res18,&local_78,false,L'\0');
  bVar4 = false;
  iVar7 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    pIVar9 = IConsoleManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar13.Data = local_78.Data.AllocatorInstance.Data;
    }
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,FVar13.Data);
    if (plVar10 != (longlong *)0x0) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      bVar5 = FParse::Token(local_res18,&local_68,false,L'\0');
      if ((bVar5) && (bVar5 = FParse::Token(local_res18,&local_58,false,L'\0'), bVar5)) {
        bVar4 = true;
        (**(code **)(*plVar10 + 0xd8))(plVar10,&local_38);
        if ((local_38.Data.ArrayNum == local_68.Data.ArrayNum) && (1 < local_38.Data.ArrayNum)) {
          FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                     (wchar_t *)local_68.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_48,L"%s %s");
        pUVar3 = GEngine;
        pcVar1 = *(code **)(GEngine->_padding_ + 8);
        pFVar11 = GetGlobalLogSingleton();
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar13.Data = local_48.Data.AllocatorInstance.Data;
        }
        (*pcVar1)(&pUVar3->_padding_,param_1,FVar13.Data,pFVar11);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        FOutputDevice::Log(param_3,L"Usage: TOGGLECVAR CVarName Value1 Value2");
      }
      goto LAB_147bd9935;
    }
  }
  ::FString::PrintfImpl(&local_38,L"TOGGLECVAR: cvar \'%s\' was not found");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar13.Data = local_38.Data.AllocatorInstance.Data;
  }
  FOutputDevice::Log(param_3,(wchar_t *)FVar13.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_147bd9935:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return true;
}

// FinishDestroy @ 147bdd510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::FinishDestroy(UGameEngine *this)

{
  FEngineConsoleCommandExecutor *pFVar1;
  
  if (((this->_padding_ & 0x10) == 0) && (4 < (byte)LogExit._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExit);
  }
  UEngine::FinishDestroy((UEngine *)this);
  pFVar1 = (this->CmdExec).Ptr;
  if (pFVar1 != (FEngineConsoleCommandExecutor *)0x0) {
    (this->CmdExec).Ptr = (FEngineConsoleCommandExecutor *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000147bdd567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pFVar1[-1]._padding_)();
    return;
  }
  return;
}

// GetGameSceneViewport @ 147be0640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneViewport * __thiscall
UGameEngine::GetGameSceneViewport(UGameEngine *this,UGameViewportClient *param_1)

{
  FSceneViewport *pFVar1;
  
  pFVar1 = UGameViewportClient::GetGameViewport(param_1);
  return pFVar1;
}

// GetGameViewportWidget @ 147be06a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<SViewport,1> * __thiscall
UGameEngine::GetGameViewportWidget
          (UGameEngine *this,TSharedPtr<SViewport,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->GameViewportWidget).Object;
  pTVar1 = (this->GameViewportWidget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetGameWorld @ 147be06d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UGameEngine::GetGameWorld(UGameEngine *this)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    if ((iVar5 < 0) || ((int)this->_padding_ <= iVar5)) {
      return (UWorld *)0x0;
    }
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pcVar1 = *(char **)(this->_padding_ + (longlong)iVar5 * 8);
    if ((*pcVar1 == '\x01') && (pUVar4 = *(UWorld **)(pcVar1 + 0x2c0), pUVar4 != (UWorld *)0x0)) {
      return pUVar4;
    }
    iVar5 = iVar5 + 1;
  }
  pcVar2 = (code *)swi(3);
  pUVar4 = (UWorld *)(*pcVar2)();
  return pUVar4;
}

// GetMaxTickRate @ 147be2fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall UGameEngine::GetMaxTickRate(UGameEngine *this,float param_1,bool param_2)

{
  UNetDriver *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ENetMode EVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  uVar7 = 0;
  fVar9 = 0.0;
  if (0 < (int)this->_padding_) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar9 = (float)(*pcVar1)();
        return fVar9;
      }
      fVar9 = fVar10;
      if (**(char **)(lVar8 + this->_padding_) == '\x01') {
        uVar3 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          fVar9 = (float)(*pcVar1)();
          return fVar9;
        }
        lVar8 = *(longlong *)(*(longlong *)(this->_padding_ + (longlong)(int)uVar7 * 8) + 0x2c0);
        if (((lVar8 != 0) &&
            (this_00 = *(UNetDriver **)(lVar8 + 0x38), this_00 != (UNetDriver *)0x0)) &&
           ((EVar4 = UNetDriver::GetNetMode(this_00), EVar4 == NM_DedicatedServer ||
            ((EVar4 = UNetDriver::GetNetMode(this_00), EVar4 == NM_ListenServer &&
             (this_00->bClampListenServerTickRate != 0)))))) {
          iVar6 = 1000;
          if (this_00->NetServerMaxTickRate < 1000) {
            iVar6 = this_00->NetServerMaxTickRate;
          }
          iVar5 = 1;
          if (1 < iVar6) {
            iVar5 = iVar6;
          }
          fVar9 = (float)iVar5;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (int)this->_padding_);
  }
  fVar10 = UEngine::GetMaxTickRate((UEngine *)this,param_1,param_2);
  if (fVar10 == 0.0) {
    fVar10 = fVar9;
  }
  return fVar10;
}

// GetPrivateStaticClass @ 147be5210

UClass * __cdecl UGameEngine::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameEngine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UEngine::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameEngine",
               &Z_Registration_Info_UClass_UGameEngine.InnerSingleton,
               StaticRegisterNativesUGameEngine,0x13a8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Engine",InternalConstructor<UGameEngine>,
               InternalVTableHelperCtorCaller<UGameEngine>,local_res8,UEngine::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameEngine.InnerSingleton;
}

// HandleApplyUserSettingsCommand @ 147becf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::HandleApplyUserSettingsCommand
          (UGameEngine *this,wchar_t *param_1,FOutputDevice *param_2)

{
  UGameUserSettings *pUVar1;
  
  pUVar1 = UEngine::GetGameUserSettings((UEngine *)this);
  (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,0);
  return true;
}

// HandleBrowseToDefaultMapFailure @ 147becfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameEngine::HandleBrowseToDefaultMapFailure
          (UGameEngine *this,FWorldContext *param_1,FString *param_2,FString *param_3)

{
  UEngine::HandleBrowseToDefaultMapFailure((UEngine *)this,param_1,param_2,param_3);
  FWindowsPlatformMisc::RequestExit(false,L"UGameEngine::HandleBrowseToDefaultMapFailure");
  return;
}

// HandleCancelCommand @ 147bed010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::HandleCancelCommand
          (UGameEngine *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  FWorldContext *pFVar2;
  
  pcVar1 = *(code **)(this->_padding_ + 0x510);
  pFVar2 = UEngine::GetWorldContextFromWorldChecked((UEngine *)this,param_3);
  (*pcVar1)(this,pFVar2);
  return true;
}

// HandleExitCommand @ 147bed130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::HandleExitCommand(UGameEngine *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FGameDelegates *this_00;
  
  FOutputDevice::Log(param_2,L"Closing by request");
  this_00 = FGameDelegates::Get();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this_00->ExitCommandDelegate);
  FWindowsPlatformMisc::RequestExit(false,L"UGameEngine::HandleExitCommand");
  return true;
}

// HandleGetMaxTickRateCommand @ 147bed180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::HandleGetMaxTickRateCommand(UGameEngine *this,wchar_t *param_1,FOutputDevice *param_2)

{
  (**(code **)(this->_padding_ + 0x310))(this,0,0);
  FOutputDevice::LogfImpl(param_2,L"%f");
  return true;
}

// HandleMinimizeCommand @ 147bed710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::HandleMinimizeCommand(UGameEngine *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FOutputDevice::Log(param_2,L"Minimize by request");
  FWindowsPlatformApplicationMisc::RequestMinimize();
  return true;
}

// HandleNetworkFailure_NotifyGameInstance @ 147bed900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameEngine::HandleNetworkFailure_NotifyGameInstance
          (UGameEngine *this,UWorld *param_1,UNetDriver *param_2,Type param_3)

{
  UGameInstance *this_00;
  ENetMode EVar1;
  UFunction *pUVar2;
  undefined1 local_res8;
  undefined1 local_res9;
  
  if ((this->GameInstance).field0_0x0.DebugPtr != (UGameInstance *)0x0) {
    local_res9 = true;
    if (param_2 != (UNetDriver *)0x0) {
      EVar1 = UNetDriver::GetNetMode(param_2);
      local_res9 = EVar1 != NM_Client;
    }
    this_00 = (this->GameInstance).field0_0x0.DebugPtr;
    local_res8 = (char)param_3;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this_00,NAME_UGameInstance_HandleNetworkError);
    (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar2,&local_res8);
  }
  return;
}

// HandleTravelFailure_NotifyGameInstance @ 147bee2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameEngine::HandleTravelFailure_NotifyGameInstance(UGameEngine *this,UWorld *param_1,Type param_2)

{
  UGameInstance *this_00;
  UFunction *pUVar1;
  undefined1 local_res8 [32];
  
  this_00 = (this->GameInstance).field0_0x0.DebugPtr;
  if (this_00 != (UGameInstance *)0x0) {
    local_res8[0] = (undefined1)param_2;
    pUVar1 = UObject::FindFunctionChecked((UObject *)this_00,NAME_UGameInstance_HandleTravelError);
    (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar1,local_res8);
  }
  return;
}

// Init @ 147bee7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UGameEngine::Init(UGameEngine *this,IEngineLoop *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TPimplPtr<FEngineConsoleCommandExecutor,0> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  FEngineConsoleCommandExecutor *pFVar6;
  UObject *pUVar7;
  void *_Src;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Init(IEngineLoop_*)_::_2_::FStat_STAT_GameEngineStartup>
  FVar15;
  FEngineConsoleCommandExecutor *pFVar16;
  IModularFeatures *pIVar17;
  code *pcVar18;
  wchar_t *pwVar19;
  UGameUserSettings *pUVar20;
  UClass *pUVar21;
  _struct_19 *p_Var22;
  UClass *pUVar23;
  UGameInstance *pUVar24;
  UEngine *this_00;
  FWorldContext *pFVar25;
  UWorld *pUVar26;
  UGameViewportClient *pUVar27;
  TSharedRef<SWindow,1> *pTVar28;
  longlong lVar29;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong *plVar30;
  size_t sVar31;
  FName FVar32;
  undefined4 uVar33;
  UGameEngine **ppUVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auStackY_1c8 [32];
  FName local_158 [2];
  undefined1 local_148 [8];
  FStatNameAndInfo FStack_140;
  LARGE_INTEGER local_138;
  TReferenceControllerBase<1> *pTStack_130;
  FSoftObjectPath local_128;
  FName local_108;
  FString local_f8;
  FString local_e8;
  longlong local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar35 = -1 < CpuChannel->Enabled;
  local_138 = (LARGE_INTEGER)param_1;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1207,"UGameEngine::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
               ,0x4b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1207);
  }
  local_e8.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)
        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_e8.Data.AllocatorInstance.Data + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GameEngineStartup ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Init(IEngineLoop_*)_::_2_::FStat_STAT_GameEngineStartup>
         )0x0) {
      pFVar14 = ::FName::FName(local_158,"STAT_GameEngineStartup");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameEngineStartup,*pFVar14,
                 L"UGameEngine Init","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_GameEngineStartup;
  if (StatPtr_STAT_GameEngineStartup ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Init(IEngineLoop_*)_::_2_::FStat_STAT_GameEngineStartup>
       )0x0) {
    pFVar14 = ::FName::FName((FName *)local_148,"STAT_GameEngineStartup");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Init(IEngineLoop_*)_::_2_::FStat_STAT_GameEngineStartup>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameEngineStartup,*pFVar14,
                          L"UGameEngine Init","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar32 = *(FName *)FVar15;
  bVar12 = false;
  bVar36 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_147bee9c8:
    bVar11 = bVar36;
    bVar10 = bVar12;
    bVar12 = false;
    FVar32 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158[0] = (FName)((ulonglong)local_158[0] & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_158,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar12 = false;
      bVar36 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158[0] = FVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_158,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                   ,0x4b8);
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
        bVar36 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147bee9c8;
    local_158[0] = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar12 = true;
  }
  pFVar16 = ::operator_new(0x20);
  if (pFVar16 == (FEngineConsoleCommandExecutor *)0x0) {
    pFVar16 = (FEngineConsoleCommandExecutor *)0x0;
  }
  else {
    pFVar16->_padding_ =
         (longlong)UE::Core::Private::PimplPtr::DeleterFunc<FEngineConsoleCommandExecutor>;
    pFVar16[1].GameEngine = this;
    pFVar16->GameEngine = (UGameEngine *)0x0;
    ppUVar34 = &pFVar16[1].GameEngine;
    pFVar16[1]._padding_ = (longlong)&___7FEngineConsoleCommandExecutor__6B_;
    pIVar17 = IModularFeatures::Get();
    if (pFVar16 + 1 == (FEngineConsoleCommandExecutor *)0x0) {
      ppUVar34 = (UGameEngine **)0x0;
    }
    local_158[0] = *(FName *)((longlong)*pIVar17 + 0x28);
    if ((*(int *)(local_e8.Data.AllocatorInstance.Data + 0x9d4c) <
         `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                      ::__l2::Name,L"ConsoleCommandExecutor");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*(code *)local_158[0])
              (pIVar17,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                       ::__l2::Name,ppUVar34);
    param_1 = (IEngineLoop *)local_138;
  }
  bVar36 = false;
  pTVar3 = &this->CmdExec;
  if ((TPimplPtr<FEngineConsoleCommandExecutor,0> *)local_d8 == pTVar3) {
    if (pFVar16 + 1 != (FEngineConsoleCommandExecutor *)0x0) {
      pcVar18 = (code *)pFVar16->_padding_;
      goto LAB_147beea8e;
    }
  }
  else {
    pFVar6 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar16 + 1;
    if (pFVar6 != (FEngineConsoleCommandExecutor *)0x0) {
      pcVar18 = (code *)pFVar6[-1]._padding_;
      pFVar16 = pFVar6 + -1;
LAB_147beea8e:
      (*pcVar18)(pFVar16);
    }
  }
  UEngine::Init((UEngine *)this,param_1);
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  pwVar19 = FCommandLine::Get();
  bVar13 = FParse::Value(pwVar19,L"NETWORKPROFILER=",&local_f8,true,(wchar_t **)0x0);
  if (bVar13) {
    FNetworkProfiler::EnableTracking(&GNetworkProfiler,true);
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1228,"InitGameUserSettings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
               ,0x4cc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1228);
  }
  FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext
            ((FGlobalComponentRecreateRenderStateContext *)local_c8);
  pUVar20 = UEngine::GetGameUserSettings((UEngine *)this);
  (**(code **)(pUVar20->_padding_ + 0x2f0))(pUVar20,0);
  pUVar20 = UEngine::GetGameUserSettings((UEngine *)this);
  (**(code **)(pUVar20->_padding_ + 0x2b8))(pUVar20);
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
            ((FGlobalComponentRecreateRenderStateContext *)local_c8);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1239,"InitGameInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
               ,0x4d7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1239);
  }
  pUVar21 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
  if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar21);
  }
  pUVar7 = (pUVar21->ClassDefaultObject).field0_0x0.DebugPtr;
  local_128.AssetPath.PackageName.ComparisonIndex.Value = *(uint *)&pUVar7[2].field_0x10;
  local_128.AssetPath.PackageName.Number = *(uint *)&pUVar7[2].field_0x14;
  local_128.AssetPath.AssetName.ComparisonIndex.Value = *(uint *)&pUVar7[2].field_0x18;
  local_128.AssetPath.AssetName.Number = *(uint *)&pUVar7[2].field_0x1c;
  local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubPathString.Data.ArrayNum = *(int *)(pUVar7 + 3);
  sVar31 = (size_t)local_128.SubPathString.Data.ArrayNum;
  _Src = *(void **)&pUVar7[2].field_0x20;
  if (local_128.SubPathString.Data.ArrayNum == 0) {
    local_128.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_128.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_128.SubPathString,local_128.SubPathString.Data.ArrayNum,
               &local_128.SubPathString.Data.ArrayMax);
    memcpy(local_128.SubPathString.Data.AllocatorInstance.Data,_Src,sVar31);
  }
  if (local_128.AssetPath.PackageName == (FName)0x0) {
    pUVar21 = UGameInstance::StaticClass();
    goto LAB_147beecc7;
  }
  FStack_140.Index.Value = 0;
  FStack_140.Number = 0;
  local_148._0_4_ = 0;
  local_148._4_4_ = 0;
  p_Var22 = (_struct_19 *)FSoftObjectPath::ToString(&local_128,&local_e8);
  uVar33 = 0;
  if (p_Var22[1].LowPart == 0) {
    local_138.QuadPart = 0x15060d16c;
LAB_147beec75:
    sVar31 = wcslen((wchar_t *)local_138);
    uVar33 = (undefined4)sVar31;
  }
  else {
    local_138.s = *p_Var22;
    if ((IEngineLoop *)local_138.QuadPart != (IEngineLoop *)0x0) goto LAB_147beec75;
  }
  pTStack_130 = (TReferenceControllerBase<1> *)CONCAT44(pTStack_130._4_4_,uVar33);
  pUVar21 = Z_Construct_UClass_UClass_NoRegister();
  pUVar21 = (UClass *)
            StaticLoadObject(pUVar21,(UObject *)0x0,(TStringView<wchar_t> *)&local_138.s,
                             (TStringView<wchar_t> *)local_148,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  bVar36 = true;
LAB_147beecc7:
  if ((bVar36) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (pUVar21 == (UClass *)0x0) {
    if (1 < (byte)LogEngine._0_1_) {
      FSoftObjectPath::ToString(&local_128,(FString *)local_148);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
      if ((FName)local_148 != (FName)0x0) {
        FMemory::Free((void *)local_148);
      }
    }
    pUVar21 = UGameInstance::StaticClass();
  }
  pUVar27 = (UGameViewportClient *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = UGameInstance::StaticClass();
  CheckIsClassChildOf_Internal(pUVar23,pUVar21);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar21);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = this;
  pUVar24 = (UGameInstance *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar30 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar30 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar30 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (this->GameInstance).field0_0x0.DebugPtr = pUVar24;
  this_00 = UGameInstance::GetEngine(pUVar24);
  pFVar25 = UEngine::CreateNewWorldContext(this_00,Game);
  pUVar24->WorldContext = pFVar25;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (pFVar25->OwningGameInstance).field0_0x0.DebugPtr = pUVar24;
  pUVar26 = UWorld::CreateWorld(Game,false,(FName)0x0,(UPackage *)0x0,true,Num,
                                (FWorldInitializationValues *)0x0,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (pUVar26->OwningGameInstance).field0_0x0.DebugPtr = pUVar24;
  FWorldContext::SetCurrentWorld(pUVar24->WorldContext,pUVar26);
  (**(code **)(pUVar24->_padding_ + 0x2d0))(pUVar24);
  if (local_128.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (GIsClient != false) {
    bVar36 = -1 < CpuChannel->Enabled;
    if (bVar36) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1273,"InitGameViewPortClient",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                 ,0x4f9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1273);
    }
    lVar29 = this->_padding_;
    if ((lVar29 != 0) &&
       (pUVar21 = Z_Construct_UClass_UGameViewportClient_NoRegister(), pUVar21 != (UClass *)0x0)) {
      iVar5 = (int)pUVar21->_padding_;
      if ((*(int *)(lVar29 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar29 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar21->_padding_)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      pUVar27 = (UGameViewportClient *)0x0;
      if (bVar13) {
        pUVar27 = (UGameViewportClient *)this->_padding_;
      }
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar21 = Z_Construct_UClass_UGameViewportClient_NoRegister();
    CheckIsClassChildOf_Internal(pUVar21,(UClass *)pUVar27);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,(UClass *)pUVar27);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    pUVar27 = (UGameViewportClient *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar30 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar30 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    pUVar24 = (this->GameInstance).field0_0x0.DebugPtr;
    (**(code **)(pUVar27->_padding_ + 0x2d0))(pUVar27,pUVar24->WorldContext,pUVar24,1);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar27);
    }
    this->_padding_ = (longlong)pUVar27;
    pFVar25 = ((this->GameInstance).field0_0x0.DebugPtr)->WorldContext;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar27);
    }
    (pFVar25->GameViewport).field0_0x0.DebugPtr = pUVar27;
    if (bVar36) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  QueryPerformanceCounter(&local_138);
  this->LastTimeLogsFlushed =
       (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (pUVar27 != (UGameViewportClient *)0x0) {
    bVar36 = -1 < CpuChannel->Enabled;
    if (bVar36) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1285,"AttachGameViewport",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                 ,0x505);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1285);
    }
    if ((((this->GameViewportWindow).Object == (SWindow *)0x0) ||
        (pTVar8 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController,
        pTVar8 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar8->SharedReferenceCount < 1)) {
      if (4 < (byte)LogEngine._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
      }
      pTVar28 = CreateGameWindow((TSharedRef<SWindow,1> *)&local_138.s);
      (this->GameViewportWindow).Object = pTVar28->Object;
      pTVar8 = (pTVar28->SharedReferenceCount).ReferenceController;
      if (pTVar8 != (this->GameViewportWindow).WeakReferenceCount.ReferenceController) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar9 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar9->WeakReferenceCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
          }
        }
        (this->GameViewportWindow).WeakReferenceCount.ReferenceController = pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_130);
      CreateGameViewport(this,pUVar27);
      SwitchGameWindowToUseGameViewport(this);
    }
    else {
      CreateGameViewport(this,pUVar27);
    }
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    FStack_140.Index.Value = 0;
    FStack_140.Number = 0;
    lVar29 = (**(code **)(pUVar27->_padding_ + 0x350))(pUVar27,local_148);
    if (lVar29 == 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
    }
    if (CpuChannel->Enabled < 0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&UGameViewportClient::CreatedDelegate);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1307,"BroadcastOnViewPortCreated",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                 ,0x51b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1307);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&UGameViewportClient::CreatedDelegate);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((FName)local_148 != (FName)0x0) {
      FMemory::Free((void *)local_148);
    }
    if (bVar36) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (3 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  *(undefined1 *)&this->_padding_ = 1;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (FVar32 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_140 = (FStatNameAndInfo)((ulonglong)FVar32 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_138);
      local_148 = (undefined1  [8])(local_138.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)local_148);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// NetworkRemapPath @ 147bf48b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameEngine::NetworkRemapPath
          (UGameEngine *this,UNetConnection *param_1,FString *param_2,bool param_3)

{
  uint uVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UWorld *this_01;
  FString *pFVar8;
  UPackage *pUVar9;
  FWorldContext *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  UNetDriver *pUVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176 [2];
  uint local_174;
  FScriptContainerElement *local_170;
  FName local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  int local_130;
  int local_12c;
  UNetDriver *local_128;
  FScriptContainerElement *local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  FScriptContainerElement *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  FScriptContainerElement *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  if (param_1 == (UNetConnection *)0x0) {
    return false;
  }
  this_01 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (this_01 == (UWorld *)0x0) {
    return false;
  }
  if (!param_3) {
    return false;
  }
  pUVar17 = (param_1->Driver).field0_0x0.DebugPtr;
  local_128 = pUVar17;
  if ((pUVar17 != (UNetDriver *)0x0) && (pUVar17->DuplicateLevelID != -1)) {
    pFVar8 = UWorld::ConvertToPIEPackageName(&local_80,param_2,pUVar17->DuplicateLevelID);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_168,pwVar13);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    local_174 = (this_01->LevelCollections).ArrayNum;
    uVar11 = (ulonglong)(int)local_174;
    pFVar15 = (this_01->LevelCollections).AllocatorInstance.Data;
    pFVar18 = pFVar15 + 0x48;
    pFVar20 = pFVar15 + uVar11 * 0x78;
    local_120 = pFVar20;
    while( true ) {
      local_170 = pFVar15;
      if ((this_01->LevelCollections).ArrayNum != (int)uVar11) {
        local_178 = 0;
        `TCheckedPointerIterator<FLevelCollection_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_178);
      }
      if (pFVar15 == pFVar20) break;
      if ((*(UNetDriver **)(pFVar18 + -0x38) == pUVar17) ||
         (*(UNetDriver **)(pFVar18 + -0x30) == pUVar17)) {
        uVar16 = *(uint *)(pFVar18 + 8);
        iStack_e8 = 0;
        local_d0 = 0;
        uStack_e4 = 1;
        uStack_d4 = 0;
        if (uVar16 != 0) {
          pFVar15 = *(FScriptContainerElement **)pFVar18;
          if (pFVar15 == (FScriptContainerElement *)0x0) {
            pFVar15 = pFVar18 + -0x10;
          }
          uVar19 = *(uint *)pFVar15;
          while (uVar19 == 0) {
            lVar12 = (longlong)iStack_e8;
            local_d0 = local_d0 + 0x20;
            iStack_e8 = iStack_e8 + 1;
            uStack_d4 = uVar16;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
            goto LAB_147bf4a3e;
            uVar19 = *(uint *)(pFVar15 + (lVar12 + 1) * 4);
          }
          uStack_e4 = -uVar19 & uVar19;
          uVar11 = (ulonglong)uStack_e4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_130 = (int)lVar12;
          uStack_d4 = local_d0 + -1 + local_130;
          if ((int)uVar16 < (int)uStack_d4) {
            uStack_d4 = uVar16;
          }
        }
LAB_147bf4a3e:
        local_f0 = pFVar18 + -0x20;
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar18 + -0x10);
        uStack_cc = local_44;
        iStack_c8 = *(int *)(pFVar18 + -0x18) - *(int *)(pFVar18 + 0x14);
        uVar19 = uVar16 & 0xffffffe0;
        TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
        uStack_d8 = 0xffffffff;
        TStack_b8.CurrentBitIndex = uStack_d4;
        TStack_b8.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar16 >> 5;
        TStack_b8._28_4_ = local_44;
        TStack_b8.BaseBitIndex = local_d0;
        uStack_98 = CONCAT44(uStack_c4,iStack_c8);
        local_e0 = pTVar21;
        local_c0 = local_f0;
        TStack_b8.Array = pTVar21;
        if (((int)uVar16 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        uVar1 = *(uint *)(pFVar18 + 8);
        if (uVar16 != uVar1) {
          if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar18 !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar18;
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) &
                   *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
          while (uVar16 == 0) {
            lVar12 = (longlong)iVar14;
            uVar19 = uVar19 + 0x20;
            iVar14 = iVar14 + 1;
            uVar16 = uVar1;
            if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_147bf4b40;
            uVar16 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar12 * 4 + 4);
          }
          uVar11 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_12c = (int)lVar12;
          uVar16 = local_12c + -1 + uVar19;
          if ((int)uVar1 < (int)uVar16) {
            uVar16 = uVar1;
          }
        }
LAB_147bf4b40:
        do {
          pFVar4 = local_c0;
          if (*(int *)(local_c0 + 8) - *(int *)(local_c0 + 0x34) != (int)uStack_98) {
            local_177 = 0;
            `TSparseArray<TSparseSetElement<TObjectPtr<ULevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_177);
          }
          if (((TStack_b8.CurrentBitIndex == uVar16) &&
              (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar18 + -0x10))) &&
             (pFVar15 = local_170, pUVar17 = local_128, pFVar20 = local_120,
             pFVar4 == pFVar18 + -0x20)) break;
          this_00 = *(UObjectBaseUtility **)
                     (*(longlong *)pFVar4 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
          if (((this_00 != (UObjectBaseUtility *)0x0) &&
              (pUVar9 = UObjectBaseUtility::GetOutermost(this_00), pUVar9 != (UPackage *)0x0)) &&
             ((FName)pUVar9->_padding_ == local_168)) {
            pFVar8 = ::FName::ToString(&local_168,local_70);
            ::FString::operator=(param_2,pFVar8);
            goto LAB_147bf4ca1;
          }
          TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        } while( true );
      }
      uVar11 = (ulonglong)local_174;
      pFVar15 = pFVar15 + 0x78;
      pFVar18 = pFVar18 + 0x78;
    }
  }
  if ((param_1->bInternalAck != 0) &&
     (bVar5 = UWorld::RemapCompiledScriptActor(this_01,param_2), bVar5)) {
    return true;
  }
  pFVar10 = UEngine::GetWorldContextFromWorldChecked((UEngine *)this,this_01);
  if (pFVar10->PIEInstance == -1) {
    if ((int)this->_padding_ < 2) {
      return false;
    }
    UWorld::RemovePIEPrefix(&local_150,param_2,(int *)0x0);
    FVar3.Data = local_150.Data.AllocatorInstance.Data;
    iVar14 = (param_2->Data).ArrayNum;
    if (local_150.Data.ArrayNum == iVar14) {
      if (local_150.Data.ArrayNum < 2) goto LAB_147bf4caf;
      iVar14 = wcscmp((wchar_t *)local_150.Data.AllocatorInstance.Data,
                      (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar5 = iVar14 == 0;
    }
    else {
      bVar5 = local_150.Data.ArrayNum + iVar14 == 1;
    }
    if (!bVar5) {
      ::FString::operator=(param_2,&local_150);
      local_70[0].Data.AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
LAB_147bf4ca1:
      if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
      return true;
    }
LAB_147bf4caf:
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    return false;
  }
  ::FString::FString(&local_140,param_2);
  FPackageName::TryConvertFilenameToLongPackageName(&local_140,&local_140,(FString *)0x0,None);
  UWorld::ConvertToPIEPackageName(&local_100,param_2,pFVar10->PIEInstance);
  UWorld::ConvertToPIEPackageName(&local_160,&local_140,pFVar10->PIEInstance);
  pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
  local_118 = (FName)pUVar9->_padding_;
  ::FName::ToString(&local_118,&local_110);
  if (local_110.Data.ArrayNum == local_160.Data.ArrayNum) {
    if (1 < local_110.Data.ArrayNum) {
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)local_110.Data.AllocatorInstance.Data,
                          (wchar_t *)local_160.Data.AllocatorInstance.Data);
      bVar5 = iVar14 == 0;
      goto LAB_147bf4d6e;
    }
  }
  else {
    bVar5 = local_110.Data.ArrayNum + local_160.Data.ArrayNum == 1;
LAB_147bf4d6e:
    if (!bVar5) {
      pFVar15 = (this_01->StreamingLevels).AllocatorInstance.Data;
      iVar14 = (this_01->StreamingLevels).ArrayNum;
      pFVar18 = pFVar15 + (longlong)iVar14 * 8;
      while( true ) {
        if ((this_01->StreamingLevels).ArrayNum != iVar14) {
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_176);
        }
        if (pFVar15 == pFVar18) break;
        if (*(longlong *)pFVar15 != 0) {
          FSoftObjectPath::GetLongPackageName
                    ((FSoftObjectPath *)(*(longlong *)pFVar15 + 0x30),&local_90);
          FVar3.Data = local_90.Data.AllocatorInstance.Data;
          iVar7 = local_90.Data.ArrayNum;
          if (iVar7 == local_160.Data.ArrayNum) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_90.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_160.Data.AllocatorInstance.Data);
              bVar5 = iVar7 == 0;
              goto LAB_147bf4de9;
            }
          }
          else {
            bVar5 = iVar7 + local_160.Data.ArrayNum == 1;
LAB_147bf4de9:
            if (!bVar5) {
              if (FVar3.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar3.Data);
              }
              goto LAB_147bf4dfd;
            }
          }
          ::FString::operator=(param_2,&local_100);
          if (FVar3.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar3.Data);
          }
          goto LAB_147bf4e2e;
        }
LAB_147bf4dfd:
        pFVar15 = pFVar15 + 8;
      }
      bVar5 = false;
      goto LAB_147bf4e30;
    }
  }
  ::FString::operator=(param_2,&local_100);
LAB_147bf4e2e:
  bVar5 = true;
LAB_147bf4e30:
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
    return bVar5;
  }
  return bVar5;
}

// OnGPUCrash @ 147bf5540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::OnGPUCrash(UGameEngine *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWindow *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  FSharedReferencer<1> FVar4;
  char cVar5;
  atomic<int> aVar6;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  IFileManager *pIVar9;
  IConsoleManager *pIVar10;
  ForAnyElementType FVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  uint local_res10 [2];
  uint local_res18 [4];
  TSharedPtr<FGenericWindow,1> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FImageView local_d8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_c0;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined4 local_70;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar10 = IConsoleManager::Get();
    ScreenshotOnCrash =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar10 + 0xc0))
                   (pIVar10,L"WindowsPlatformCrashContext.ScreenshotOnGPUCrash",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((ScreenshotOnCrash != (IConsoleVariable *)0x0) &&
     (cVar5 = (**(code **)(*(longlong *)ScreenshotOnCrash + 0xc0))(), cVar5 != '\0')) {
    pTVar1 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    iVar13 = 0;
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    local_res10[0] = 0;
    local_res18[0] = 0;
    pTVar12 = pTVar1;
    pTVar16 = pTVar14;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar1->SharedReferenceCount;
      do {
        pTVar12 = pTVar14;
        pTVar16 = pTVar15;
        if (aVar3 == (atomic<int>)0x0) goto LAB_147bf55f1;
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar17 = aVar3 == aVar6;
        if (bVar17) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar17);
      this_00 = (this->GameViewportWindow).Object;
      pTVar12 = pTVar1;
      if (this_00 != (SWindow *)0x0) {
        SWindow::GetNativeWindow(this_00,&local_118);
        pTVar16 = pTVar14;
        if ((FWindowsWindow *)local_118.Object != (FWindowsWindow *)0x0) {
          if (((FWindowsWindow *)local_118.Object == (FWindowsWindow *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          cVar5 = (**(code **)((local_118.Object)->_padding_ + 0xe8))();
          FVar4.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
          pTVar16 = pTVar15;
          if (cVar5 != '\0') {
            if (local_118.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if (((FWindowsWindow *)local_118.Object == (FWindowsWindow *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar7 = FWindowsWindow::GetWindowPixels
                               ((FWindowsWindow *)local_118.Object,&local_68,local_res10,local_res18
                               );
            iVar13 = 0;
            if (&local_48 != pTVar7) {
              pTVar14 = (TReferenceControllerBase<1> *)(pTVar7->AllocatorInstance).Data;
              (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              iVar13 = pTVar7->ArrayNum;
              pTVar7->ArrayNum = 0;
              pTVar7->ArrayMax = 0;
            }
            if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar4.ReferenceController);
            pTVar16 = pTVar14;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        if (iVar13 != 0) {
          if (((local_res10[0] == 0) || (local_res18[0] == 0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Width > 0 && Height > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                                  ,0x347,L""), bVar17)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_d8._padding_._0_4_ = local_res10[0];
          local_d8._padding_._4_4_ = local_res18[0];
          local_c0.ArrayMax = 0;
          local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c0.ArrayNum = 0;
          local_d8._padding_._0_4_ = 1;
          local_d8._padding_._4_2_ = 0x201;
          local_d8.RawData = pTVar16;
          FImageUtils::CompressImage(&local_c0,L"jpg",&local_d8,0x46);
          pFVar8 = FPaths::ProjectLogDir(&local_58);
          local_70 = 0x10;
          local_88.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          iVar13 = (pFVar8->Data).ArrayNum;
          local_88.Size = iVar13 + -1;
          if (iVar13 == 0) {
            local_88.Size = 0;
          }
          local_78 = L"CrashCapture.jpg";
          FPaths::CombineInternal(&local_108,&local_88,2);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          pIVar9 = IFileManager::Get();
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_108.Data.ArrayNum != 0) {
            FVar11.Data = local_108.Data.AllocatorInstance.Data;
          }
          bVar17 = FFileHelper::SaveArrayToFile(&local_c0,(wchar_t *)FVar11.Data,pIVar9,0);
          if (bVar17) {
            local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Data.ArrayNum = 0;
            local_f8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_f8,local_res10[0]);
            ::FString::FString(&local_a8,L"CrashScreenshotWidth");
            FGenericCrashContext::SetEngineData(&local_a8,&local_f8);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_e8,local_res18[0]);
            ::FString::FString(&local_98,L"CrashScreenshotHeight");
            FGenericCrashContext::SetEngineData(&local_98,&local_e8);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            FWindowsPlatformCrashContext::AddOptionalAttachment(&local_108);
          }
          else if (2 < (byte)LogEngine._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.AllocatorInstance.Data);
          }
        }
      }
    }
LAB_147bf55f1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTVar16);
    }
  }
  return;
}

// OnGameWindowClosed @ 147bf59a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::OnGameWindowClosed(UGameEngine *this,TSharedRef<SWindow,1> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *this_00;
  undefined8 uVar4;
  TSharedPtr<FSceneViewport,1> *pTVar5;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::UnregisterGameViewport(this_00);
  lVar1 = this->_padding_;
  pTVar5 = &this->SceneViewport;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x30) + 0x118);
  if (pTVar5->Object == (FSceneViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = (**(code **)pTVar5->Object->_padding_)();
  (*pcVar2)(lVar1 + 0x30,uVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 != (TSharedPtr<FSceneViewport,1> *)&local_18) {
    pTVar5->Object = (FSceneViewport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewport).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// OnGameWindowMoved @ 147bf5a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::OnGameWindowMoved(UGameEngine *this,TSharedRef<SWindow,1> *param_1)

{
  OnGameWindowMoved_SavePosition(this,param_1,0);
  return;
}

// OnGameWindowMoved_SavePosition @ 147bf5a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameEngine::OnGameWindowMoved_SavePosition
          (UGameEngine *this,TSharedRef<SWindow,1> *param_1,int param_2)

{
  UGameUserSettings *pUVar1;
  FSlateRect local_18;
  
  SWindow::GetRectInScreen(param_1->Object,&local_18);
  pUVar1 = UEngine::GetGameUserSettings((UEngine *)this);
  UGameUserSettings::ReloadWindowPositions(pUVar1);
  pUVar1 = UEngine::GetGameUserSettings((UEngine *)this);
  (**(code **)(pUVar1->_padding_ + 0x308))(pUVar1,(int)local_18.Left,(int)local_18.Top,param_2);
  pUVar1 = UEngine::GetGameUserSettings((UEngine *)this);
  UObject::SaveConfig((UObject *)pUVar1,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// OnViewportResized @ 147bf6170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::OnViewportResized(UGameEngine *this,FViewport *param_1,uint param_2)

{
  TSharedPtr<FGenericWindow,1> *pTVar1;
  FSceneViewport *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TIntPoint<int> TVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  UGameUserSettings *this_00;
  SWindow *pSVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  bool bVar12;
  int local_res10;
  uint uStackX_14;
  
  pSVar9 = (SWindow *)0x0;
  local_res10 = 0;
  if (param_1 == (FViewport *)0x0) {
LAB_147bf6281:
    pSVar11 = (SWindow *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    pFVar2 = (this->SceneViewport).Object;
    pSVar11 = (SWindow *)&pFVar2->_padding_;
    if (pFVar2 == (FSceneViewport *)0x0) {
      pSVar11 = pSVar9;
    }
    if (((((SWindow *)param_1 != pSVar11) || ((this->GameViewportWindow).Object == (SWindow *)0x0))
        || (pTVar3 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController,
           pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)
       ) goto LAB_147bf6281;
    pSVar11 = (SWindow *)(this->GameViewportWindow).WeakReferenceCount.ReferenceController;
    pSVar10 = pSVar11;
    if (pSVar11 == (SWindow *)0x0) {
LAB_147bf6201:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar11 = pSVar10;
      if (bVar12) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      aVar6 = *(atomic<int> *)&pSVar11->_padding_;
      do {
        pSVar10 = pSVar9;
        if (aVar6 == (atomic<int>)0x0) goto LAB_147bf6201;
        LOCK();
        aVar7 = *(atomic<int> *)&pSVar11->_padding_;
        bVar12 = aVar6 == aVar7;
        if (bVar12) {
          *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar6 + 1);
          aVar7 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar7;
      } while (!bVar12);
      pSVar9 = (this->GameViewportWindow).Object;
      pSVar10 = pSVar11;
      if (pSVar9 == (SWindow *)0x0) goto LAB_147bf6201;
    }
    if (((pSVar9->NativeWindow).Object == (FGenericWindow *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = &pSVar9->NativeWindow;
    pSVar9 = (SWindow *)&DAT_00000001;
    iVar8 = (**(code **)(pTVar1->Object->_padding_ + 0x68))();
    if (iVar8 == 2) {
      bVar12 = true;
      goto LAB_147bf6289;
    }
  }
  bVar12 = false;
LAB_147bf6289:
  if (pSVar9 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  if (((bVar12) && ((**(code **)(param_1->_padding_ + 0x28))(param_1,&local_res10), 0 < local_res10)
      ) && (0 < (int)uStackX_14)) {
    GSystemResolution.ResX = local_res10;
    GSystemResolution.ResY = uStackX_14;
    FSystemResolution::RequestResolutionChange(local_res10,uStackX_14,Windowed);
    this_00 = UEngine::GetGameUserSettings((UEngine *)this);
    TVar5.field0_0x0._s_0.Y = uStackX_14;
    TVar5.field0_0x0._s_0.X = local_res10;
    UGameUserSettings::SetScreenResolution(this_00,TVar5);
    (**(code **)(this_00->_padding_ + 0x2c8))(this_00);
    FOnGameUserSettingsUINeedsUpdate_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this_00->OnGameUserSettingsUINeedsUpdate);
  }
  return;
}

// PreExit @ 147bf72a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UGameEngine::PreExit(UGameEngine *this)

{
  UWorld *this_00;
  UGameInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UGameUserSettings *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  if (3 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  pUVar5 = UEngine::GetGameUserSettings((UEngine *)this);
  (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5);
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat1332 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat1332 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::EnableTracking(&GNetworkProfiler,false);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  (**(code **)(this->_padding_ + 0x500))(this);
  uVar6 = 0;
  if (0 < (int)this->_padding_) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UWorld **)(*(longlong *)(lVar7 + this->_padding_) + 0x2c0);
      if (this_00 != (UWorld *)0x0) {
        UWorld::BeginTearingDown(this_00);
        (**(code **)(this->_padding_ + 0x518))(this,this_00,0);
        UEngine::ShutdownWorldNetDriver((UEngine *)this,this_00);
        this_00->bIsLevelStreamingFrozen = '\0';
        UWorld::SetShouldForceUnloadStreamingLevels(this_00,true);
        UWorld::FlushLevelStreaming(this_00,Visibility);
        UWorld::EndPlay(this_00,Quit);
        pUVar1 = (this_00->OwningGameInstance).field0_0x0.DebugPtr;
        if (pUVar1 != (UGameInstance *)0x0) {
          (**(code **)(pUVar1->_padding_ + 0x2d8))();
        }
        UWorld::CleanupWorld(this_00,true,true,(UWorld *)0x0);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (int)this->_padding_);
  }
  UEngine::PreExit((UEngine *)this);
  return;
}

// ProcessToggleFreezeCommand @ 147bf8c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::ProcessToggleFreezeCommand(UGameEngine *this,UWorld *param_1)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bf8c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(this->_padding_ + 0x128) + 0x50))();
    return;
  }
  return;
}

// ProcessToggleFreezeStreamingCommand @ 147bf8c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::ProcessToggleFreezeStreamingCommand(UGameEngine *this,UWorld *param_1)

{
  if (!(bool)param_1->bIsLevelStreamingFrozen) {
    FlushAsyncLoading(-1);
    param_1->field_0x18b = param_1->field_0x18b ^ 0x80;
    return;
  }
  param_1->field_0x18b = param_1->field_0x18b ^ 0x80;
  return;
}

// RedrawViewports @ 147bfaa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::RedrawViewports(UGameEngine *this,bool param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RedrawViewports> FVar6;
  FSlateApplication *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar6 = StatPtr_STAT_RedrawViewports;
  if (StatPtr_STAT_RedrawViewports == (FThreadSafeStaticStat<FStat_STAT_RedrawViewports>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_RedrawViewports");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RedrawViewports>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RedrawViewports,*pFVar5,
                       L"RedrawViewports","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                   ,0x309);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      goto LAB_147bfabeb;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_147bfabeb:
  if (__CsvProfilerStat778 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ViewportMisc");
    __CsvProfilerStat778 = true;
  }
  FCsvProfiler::BeginExclusiveStat("ViewportMisc","CSV_ViewportMisc");
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x360))();
    if (*(longlong *)(this->_padding_ + 0x128) != 0) {
      pFVar7 = FSlateApplication::Get();
      lpCriticalSection =
           (LPCRITICAL_SECTION)(**(code **)(**(longlong **)&pFVar7->field_0x60 + 0x160))();
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      FViewport::Draw(*(FViewport **)(this->_padding_ + 0x128),param_1);
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  FCsvProfiler::EndExclusiveStat("ViewportMisc");
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  return;
}

// ShouldDoAsyncEndOfFrameTasks @ 147c01f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameEngine::ShouldDoAsyncEndOfFrameTasks(UGameEngine *this)

{
  bool bVar1;
  
  bVar1 = FApp::ShouldUseThreadingForPerformance();
  if (((bVar1) &&
      (ENamedThreads::FRenderThreadStatics::RenderThread != (TAtomic<ENamedThreads::Type>)0x1)) &&
     (GDoAsyncEndOfFrameTasks != 0)) {
    return true;
  }
  return false;
}

// Start @ 147c02440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::Start(UGameEngine *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1319,"UGameEngine::Start",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
               ,0x527);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1319);
  }
  if (3 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  (**(code **)(((this->GameInstance).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StaticRegisterNativesUGameEngine @ 147c035f0

void __cdecl UGameEngine::StaticRegisterNativesUGameEngine(void)

{
  return;
}

// SwitchGameWindowToUseGameViewport @ 147c039d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameEngine::SwitchGameWindowToUseGameViewport(UGameEngine *this)

{
  TSharedPtr<SViewport,1> *this_00;
  SWindow *this_01;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SViewport,1> *pTVar4;
  FSlateApplication *pFVar5;
  TSharedPtr<FGenericWindow,1> *this_02;
  FGenericWindow *pFVar6;
  FSceneViewport *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SViewport,1> local_28 [2];
  
  pTVar8 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar8->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_147c03a10;
      }
      LOCK();
      aVar2 = pTVar8->SharedReferenceCount;
      bVar9 = aVar1 == aVar2;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar9);
    this_01 = (this->GameViewportWindow).Object;
    if (this_01 != (SWindow *)0x0) {
      pTVar3 = SWindow::GetContent(this_01,&local_38);
      this_00 = &this->GameViewportWidget;
      if ((this_00->Object == (SViewport *)0x0) || (this_00->Object != (SViewport *)pTVar3->Object))
      {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (((this_00->Object == (SViewport *)0x0) &&
            (CreateGameViewport(this,(UGameViewportClient *)this->_padding_),
            this_00->Object == (SViewport *)0x0)) ||
           (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0)) {
          if (1 < (byte)LogEngine._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
          }
        }
        else {
          pTVar4 = TSharedPtr<SViewport,1>::ToSharedRef(this_00,local_28);
          local_38.Object = (SWidget *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SWindow::SetContent(this_01,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28[0].SharedReferenceCount.ReferenceController);
          pFVar5 = FSlateApplication::Get();
          this_02 = SWindow::GetNativeWindow(this_01,(TSharedPtr<FGenericWindow,1> *)local_28);
          pFVar6 = TSharedPtr<FGenericWindow,1>::operator->(this_02);
          fVar10 = (float)(**(code **)(pFVar6->_padding_ + 0xf8))(pFVar6);
          fVar11 = (float)(**(code **)(*(longlong *)pFVar5 + 0x58))(pFVar5);
          SWidget::SlatePrepass((SWidget *)this_01,fVar11 * fVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28[0].SharedReferenceCount.ReferenceController);
        }
        if (((this->SceneViewport).Object != (FSceneViewport *)0x0) &&
           (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
          pFVar7 = TSharedPtr<FSceneViewport,1>::operator->(&this->SceneViewport);
          (**(code **)(pFVar7->_padding_ + 8))
                    (pFVar7,GSystemResolution.ResX,GSystemResolution.ResY,
                     GSystemResolution.WindowMode);
          if (this_00->Object != (SViewport *)0x0) {
            pFVar5 = FSlateApplication::Get();
            pTVar4 = TSharedPtr<SViewport,1>::ToSharedRef(this_00,local_28);
            FSlateApplication::RegisterGameViewport(pFVar5,pTVar4);
          }
          pFVar5 = FSlateApplication::Get();
          FSlateApplication::SetAllUserFocusToGameViewport(pFVar5,SetDirectly);
        }
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
    }
  }
LAB_147c03a10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Tick @ 147c055c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147c06051) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UGameEngine::Tick(UGameEngine *this,float param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  UGameInstance *pUVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  atomic<int> aVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  atomic<int> aVar15;
  FName *pFVar16;
  TStatId TVar17;
  wchar_t *pwVar18;
  FModuleManager *this_00;
  IModuleInterface *pIVar19;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_119_::FStat_STAT_UGameEngine_Tick_TickWorldTravel>
  FVar20;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_125_::FStat_STAT_UGameEngine_Tick_CheckCaptures>
  FVar21;
  FString *pFVar22;
  undefined8 uVar23;
  FThreadSafeStaticStat<FStat_STAT_UpdateLevelStreaming> FVar24;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_115_::FStat_STAT_UGameEngine_Tick_ConditionalCommitMapChange>
  FVar25;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_165_::FStat_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked>
  FVar28;
  FWorldContext *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_GameViewportTick> FVar30;
  FSlateApplication *pFVar31;
  TSharedRef<SViewport,1> *pTVar32;
  FRenderCommandList *pFVar33;
  FCommandList *pFVar34;
  FRenderCommandTag *pFVar35;
  UWorld *pUVar36;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_230_::FStat_STAT_UGameEngine_Tick_IStreamingManager>
  FVar37;
  FStreamingManagerCollection *pFVar38;
  FAudioDeviceManager *this_01;
  IRendererModule *pIVar39;
  undefined ***pppuVar40;
  uint uVar41;
  FNameEntryId FVar42;
  ulonglong uVar43;
  FName FVar44;
  FName FVar45;
  TReferenceControllerBase<1> *pTVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  uint uVar49;
  SWindow *this_02;
  UGameEngine *pUVar50;
  longlong *plVar51;
  uint uVar52;
  UObject *pUVar53;
  longlong lVar54;
  longlong lVar55;
  undefined4 in_XMM1_Db;
  undefined1 auStackY_4a8 [32];
  undefined1 local_447;
  undefined1 local_446 [6];
  longlong local_440;
  FName local_438;
  uint local_430;
  UGameEngine *local_420;
  FColor_u_0 local_418;
  FColor_u_0 local_414;
  FColor_u_0 local_410;
  FColor_u_0 local_40c;
  FColor_u_0 local_408;
  FColor_u_0 local_404;
  FColor_u_0 local_400 [2];
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  byte local_3e0;
  FName local_3d8;
  byte local_3d0;
  longlong *local_3c8;
  longlong *plStack_3c0;
  int local_3b8;
  undefined4 uStack_3b4;
  FName local_3b0;
  uint local_3a8;
  uint uStack_3a4;
  FName local_3a0;
  uint local_398;
  uint uStack_394;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  undefined4 local_370;
  float fStack_36c;
  uint local_368;
  uint uStack_364;
  FName local_360;
  uint local_358;
  uint uStack_354;
  FName local_350;
  FName local_340;
  FName local_330;
  FName local_320;
  FName local_310;
  FName local_300;
  FName local_2f0;
  IModuleInterface *local_2e0;
  LARGE_INTEGER local_2d8;
  longlong *local_2d0;
  longlong *plStack_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  FString local_2b0;
  FStatMessage local_2a0;
  FStatMessage local_290;
  longlong *local_280;
  longlong *plStack_278;
  undefined8 local_270;
  LARGE_INTEGER local_268 [2];
  FSourceLocation local_258;
  FSourceLocation local_238 [2];
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FString local_1b8;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  TOptional<UE::FTimeout_const_> local_190;
  TOptional<UE::FTimeout_const_> local_178;
  TSharedRef<SViewport,1> local_160;
  code *local_148 [2];
  undefined **local_138;
  code *pcStack_130;
  undefined8 local_128;
  undefined ***local_120;
  code *local_118 [2];
  undefined **local_108 [3];
  undefined ***local_f0;
  undefined1 local_e8 [16];
  undefined **local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  byte local_b8;
  undefined1 local_a8 [16];
  undefined **local_98 [3];
  undefined ***local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_420 = this;
  if (!__CsvProfilerStat1742) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EngineTickMisc");
    __CsvProfilerStat1742 = true;
  }
  FCsvProfiler::BeginExclusiveStat("EngineTickMisc","CSV_EngineTickMisc");
  uVar47 = 0;
  uVar52 = 0;
  TVar17.StatIdPtr = (TStatIdData *)StatPtr_STAT_GameEngineTick;
  if (StatPtr_STAT_GameEngineTick == (FThreadSafeStaticStat<FStat_STAT_GameEngineTick>)0x0) {
    pFVar16 = ::FName::FName(&local_208,"STAT_GameEngineTick");
    TVar17.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameEngineTick,*pFVar16,
                    L"GameEngine Tick","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  local_258.Impl._Line = 0x6d0;
  local_258.Impl._Column = 2;
  local_258.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp";
  local_258.Impl._Function = "void __cdecl UGameEngine::Tick(float,bool)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_3e8,TVar17,CycleStat|ClearEveryFrame,false,&local_258);
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat1745 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat1745 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::TrackFrameBegin(&GNetworkProfiler);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  if (param_1 < 0.0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (((0.0 < GSlowFrameLoggingThreshold) && (GSlowFrameLoggingThreshold < param_1)) &&
     (4 < (byte)LogEngine._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
  }
  if (PRIVATE_GIsRunningCommandlet == false) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar18 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar18,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false))
      goto LAB_147c05857;
    }
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false) {
      UEngine::CleanupGameViewport((UEngine *)this);
    }
  }
LAB_147c05857:
  if ((GIsClient != false) && (this->_padding_ == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar18 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar18,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      if (4 < (byte)LogEngine._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
      }
      FWindowsPlatformMisc::RequestExit(false,L"UGameEngine::Tick.ViewportClosed");
      goto LAB_147c074ed;
    }
  }
  lVar55 = 0x9d4c;
  local_440 = 0x9d4c;
  if (this->_padding_ != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_UGameEngine_Tick_SetDropDetail =
           (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_90_::FStat_STAT_UGameEngine_Tick_SetDropDetail>
            )0x0;
      FThreadSafeStaticStatInner<`UGameEngine::Tick'::__l90::FStat_STAT_UGameEngine_Tick_SetDropDetail,1>
      ::GetStatId(&StatPtr_STAT_UGameEngine_Tick_SetDropDetail);
      _Init_thread_footer(&::_TSS0);
    }
    TVar17 = FThreadSafeStaticStatInner<`UGameEngine::Tick'::__l90::FStat_STAT_UGameEngine_Tick_SetDropDetail,1>
             ::GetStatId(&StatPtr_STAT_UGameEngine_Tick_SetDropDetail);
    local_238[0].Impl._Line = 0x704;
    local_238[0].Impl._Column = 3;
    local_238[0].Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp";
    local_238[0].Impl._Function = "void __cdecl UGameEngine::Tick(float,bool)";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_3d8,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,local_238);
    (**(code **)(*(longlong *)this->_padding_ + 0x338))
              ((longlong *)this->_padding_,CONCAT44(in_XMM1_Db,param_1));
    if ((local_3d0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_3d0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_3d0 & 4) != 0) {
      FThreadStats::AddMessage(local_3d8,CycleScopeEnd);
    }
    local_3d0 = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&MediaModuleName,L"Media");
    _Init_thread_footer(&::_TSS1);
  }
  FVar44 = MediaModuleName;
  this_00 = FModuleManager::Get();
  pIVar19 = FModuleManager::LoadModule(this_00,FVar44,None);
  local_2e0 = pIVar19;
  if (pIVar19 != (IModuleInterface *)0x0) {
    if ((!param_2) && (uVar43 = uVar47, uVar48 = uVar47, 0 < (int)this->_padding_)) {
      do {
        uVar41 = (uint)uVar43;
        uVar49 = uVar52;
        if ((int)uVar41 < (int)this->_padding_) {
          uVar49 = ~uVar41 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar36 = *(UWorld **)(*(longlong *)(this->_padding_ + uVar48) + 0x2c0);
        if (((pUVar36 != (UWorld *)0x0) && (pUVar36->bShouldTick != '\0')) &&
           (bVar12 = UWorld::IsMovieSceneSequenceTickHandlerBound(pUVar36), bVar12))
        goto LAB_147c05b55;
        uVar43 = (ulonglong)(uVar41 + 1);
        uVar48 = uVar48 + 8;
      } while ((int)(uVar41 + 1) < (int)this->_padding_);
    }
    (**(code **)((longlong)*pIVar19 + 0xf0))(pIVar19);
  }
LAB_147c05b55:
  if (GUseUnifiedTimeBudgetForStreaming == 0) {
    StaticTick(param_1,GAsyncLoadingUseFullTimeLimit != 0,GAsyncLoadingTimeLimit * __real_3a83126f);
  }
  FEngineAnalytics::Tick(param_1);
  FConfigCacheIni::Tick(GConfig,param_1);
  local_430 = local_430 & 0xffffff00;
  local_3f8.ComparisonIndex.Value = 0;
  local_3f8.Number = 0;
  uVar43 = uVar47;
  uVar48 = uVar47;
  local_3f0 = local_3f8;
  if (0 < (int)this->_padding_) {
    do {
      uVar41 = (uint)uVar43;
      uVar49 = uVar52;
      if ((int)uVar41 < (int)this->_padding_) {
        uVar49 = ~uVar41 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(UWorld **)(*(longlong *)(uVar48 + this->_padding_) + 0x2c0) == GWorld.World) {
        if ((int)uVar41 < (int)this->_padding_) {
          uVar52 = ~uVar41 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_3f0 = *(FName *)(*(longlong *)(this->_padding_ + (longlong)(int)uVar41 * 8) + 0xa0);
        break;
      }
      uVar43 = (ulonglong)(uVar41 + 1);
      uVar48 = uVar48 + 8;
      local_3f0 = local_3f8;
    } while ((int)(uVar41 + 1) < (int)this->_padding_);
  }
  if (0 < (int)this->_padding_) {
    local_438.ComparisonIndex.Value = 0;
    local_438.Number = 0;
    do {
      FVar44 = local_438;
      uVar49 = (uint)uVar47;
      uVar52 = 0;
      if ((int)uVar49 < (int)this->_padding_) {
        uVar52 = ~uVar49 >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar29 = *(FWorldContext **)((longlong)FVar44 + this->_padding_);
      pUVar36 = (UWorld *)(pFVar29->ThisCurrentWorld).field0_0x0.ObjectPtr.field0_0x0.Handle;
      if ((pUVar36 != (UWorld *)0x0) && (pUVar36->bShouldTick != '\0')) {
        lVar54 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        GWorld.World = pUVar36;
        local_2b8 = lVar54;
        if ((*(int *)(lVar54 + lVar55) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1))
        {
          StatPtr_STAT_UGameEngine_Tick_TickWorldTravel =
               (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_119_::FStat_STAT_UGameEngine_Tick_TickWorldTravel>
                )0x0;
          pFVar16 = ::FName::FName(&local_1a0,"STAT_UGameEngine_Tick_TickWorldTravel");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UGameEngine_Tick_TickWorldTravel,
                     *pFVar16,L"STAT_UGameEngine_Tick_TickWorldTravel","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS2);
        }
        FVar20 = StatPtr_STAT_UGameEngine_Tick_TickWorldTravel;
        if (StatPtr_STAT_UGameEngine_Tick_TickWorldTravel ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_119_::FStat_STAT_UGameEngine_Tick_TickWorldTravel>
             )0x0) {
          pFVar16 = ::FName::FName(&local_200,"STAT_UGameEngine_Tick_TickWorldTravel");
          FVar20 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_119_::FStat_STAT_UGameEngine_Tick_TickWorldTravel>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_UGameEngine_Tick_TickWorldTravel,*pFVar16,
                                L"STAT_UGameEngine_Tick_TickWorldTravel","STATGROUP_Quick",
                                "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                                MCR_Invalid);
        }
        FVar44 = *(FName *)FVar20;
        bVar9 = false;
        bVar12 = false;
        local_350.ComparisonIndex.Value = 0;
        local_350.Number = 0;
        FVar42 = FVar44.ComparisonIndex.Value;
        uVar52 = FVar44.Number;
        if ((FVar42.Value == 0) && (uVar52 == 0)) {
LAB_147c05f31:
          bVar10 = false;
          FVar44 = local_350;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_418.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_418._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
            bVar9 = false;
            bVar12 = true;
            if (-1 < CpuChannel->Enabled) {
              local_360.ComparisonIndex.Value = FVar42.Value;
              local_360.Number = uVar52;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_360,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                         ,0x74f);
              bVar9 = true;
              bVar12 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_147c05f31;
          local_368 = FVar42.Value;
          uStack_364 = uVar52;
          local_350 = FVar44;
          FThreadStats::AddMessage(FVar44,CycleScopeStart);
          bVar9 = false;
          bVar10 = true;
        }
        (**(code **)(this->_padding_ + 0x4d8))(this,pFVar29,param_1);
        if (bVar12) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar10) {
          FThreadStats::AddMessage(FVar44,CycleScopeEnd);
        }
        if (!param_2) {
          UWorld::Tick((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr,LEVELTICK_All,param_1);
        }
        if (PRIVATE_GIsRunningCommandlet == false) {
          if ((*(int *)(lVar54 + local_440) < ::_TSS3) &&
             (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            StatPtr_STAT_UGameEngine_Tick_CheckCaptures =
                 (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_125_::FStat_STAT_UGameEngine_Tick_CheckCaptures>
                  )0x0;
            pFVar16 = ::FName::FName(&local_1f8,"STAT_UGameEngine_Tick_CheckCaptures");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UGameEngine_Tick_CheckCaptures,
                       *pFVar16,L"STAT_UGameEngine_Tick_CheckCaptures","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
            _Init_thread_footer(&::_TSS3);
          }
          FVar21 = StatPtr_STAT_UGameEngine_Tick_CheckCaptures;
          if (StatPtr_STAT_UGameEngine_Tick_CheckCaptures ==
              (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_125_::FStat_STAT_UGameEngine_Tick_CheckCaptures>
               )0x0) {
            pFVar16 = ::FName::FName(&local_1f0,"STAT_UGameEngine_Tick_CheckCaptures");
            FVar21 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_125_::FStat_STAT_UGameEngine_Tick_CheckCaptures>
                      )FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_UGameEngine_Tick_CheckCaptures,*pFVar16,
                                  L"STAT_UGameEngine_Tick_CheckCaptures","STATGROUP_Quick",
                                  "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                                  MCR_Invalid);
          }
          FVar44 = *(FName *)FVar21;
          bVar9 = false;
          bVar12 = false;
          local_340.ComparisonIndex.Value = 0;
          local_340.Number = 0;
          FVar42 = FVar44.ComparisonIndex.Value;
          uVar52 = FVar44.Number;
          if ((FVar42.Value == 0) && (uVar52 == 0)) {
LAB_147c06189:
            bVar10 = false;
            FVar44 = local_340;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_414.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_414._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
              bVar9 = false;
              bVar12 = true;
              if (-1 < CpuChannel->Enabled) {
                local_390.ComparisonIndex.Value = FVar42.Value;
                local_390.Number = uVar52;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_390,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                           ,0x75d);
                bVar9 = true;
                bVar12 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_147c06189;
            local_358 = FVar42.Value;
            uStack_354 = uVar52;
            local_340 = FVar44;
            FThreadStats::AddMessage(FVar44,CycleScopeStart);
            bVar9 = false;
            bVar10 = true;
          }
          bVar13 = UWorld::AreAlwaysLoadedLevelsLoaded
                             ((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr);
          if (bVar13) {
            USkyLightComponent::UpdateSkyCaptureContents
                      ((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr);
            UReflectionCaptureComponent::UpdateReflectionCaptureContents
                      ((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr,(wchar_t *)0x0,false,false,
                       true);
          }
          if (bVar12) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar9) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar10) {
            FThreadStats::AddMessage(FVar44,CycleScopeEnd);
          }
        }
        pUVar36 = (pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr;
        uVar4 = pUVar36->field_0x18b;
        if (pUVar36->bWorldWasLoadedThisTick != 0) {
          pUVar36->field_0x18b = uVar4 & 0xfe;
          pwVar18 = FURL::GetOption(&pFVar29->LastURL,L"causeevent=",(wchar_t *)0x0);
          pUVar6 = (pFVar29->OwningGameInstance).field0_0x0.DebugPtr;
          if ((pUVar6 == (UGameInstance *)0x0) || ((pUVar6->LocalPlayers).ArrayNum < 1)) {
            pUVar53 = (UObject *)0x0;
          }
          else {
            pUVar53 = *(UObject **)(pUVar6->LocalPlayers).AllocatorInstance.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar53 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar53);
            }
          }
          if ((pwVar18 != (wchar_t *)0x0) && (pUVar53 != (UObject *)0x0)) {
            if (4 < (byte)LogEngine._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u_Issuing_initial_15189b3e8,
                         (FLogCategoryBase *)&LogEngine);
            }
            pcVar8 = *(code **)(*(longlong *)(pUVar53 + 1) + 8);
            GetGlobalLogSingleton();
            pFVar22 = ::FString::FString(&local_1b8,"CAUSEEVENT ");
            ::FString::ConcatFC(&local_2b0,pFVar22,pwVar18);
            uVar23 = (**(code **)(*(longlong *)pUVar53 + 0x180))(pUVar53);
            (*pcVar8)(pUVar53 + 1,uVar23);
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
          }
          ((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr)->bTriggerPostLoadMap = '\x01';
          lVar54 = local_2b8;
        }
        UEngine::UpdateTransitionType
                  ((UEngine *)this,(pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr);
        pUVar36 = (pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr;
        if ((bool)pUVar36->bRequestedBlockOnAsyncLoading) {
          UEngine::BlockTillLevelStreamingCompleted((UEngine *)this,pUVar36);
          ((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr)->bRequestedBlockOnAsyncLoading = '\0';
        }
        if ((GIsServer == true) && (GUseUnifiedTimeBudgetForStreaming == 0)) {
          FVar24 = StatPtr_STAT_UpdateLevelStreaming;
          if (StatPtr_STAT_UpdateLevelStreaming ==
              (FThreadSafeStaticStat<FStat_STAT_UpdateLevelStreaming>)0x0) {
            pFVar16 = ::FName::FName(&local_1e8,"STAT_UpdateLevelStreaming");
            FVar24 = (FThreadSafeStaticStat<FStat_STAT_UpdateLevelStreaming>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateLevelStreaming,
                                *pFVar16,L"Update Level Streaming","STATGROUP_Engine",
                                "STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          FVar44 = *(FName *)FVar24;
          local_330.ComparisonIndex.Value = 0;
          local_330.Number = 0;
          bVar9 = false;
          bVar12 = false;
          FVar42 = FVar44.ComparisonIndex.Value;
          uVar52 = FVar44.Number;
          if ((FVar42.Value == 0) && (uVar52 == 0)) {
LAB_147c06495:
            bVar10 = false;
            FVar44 = local_330;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_410.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_410._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
              bVar9 = false;
              bVar12 = true;
              if (-1 < CpuChannel->Enabled) {
                local_3b0.ComparisonIndex.Value = FVar42.Value;
                local_3b0.Number = uVar52;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_3b0,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                           ,0x788);
                bVar9 = true;
                bVar12 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_147c06495;
            local_3a8 = FVar42.Value;
            uStack_3a4 = uVar52;
            local_330 = FVar44;
            FThreadStats::AddMessage(FVar44,CycleScopeStart);
            bVar9 = false;
            bVar10 = true;
          }
          local_190.bIsSet = false;
          UWorld::UpdateLevelStreaming((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr,&local_190);
          if (bVar12) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar9) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar10) {
            FThreadStats::AddMessage(FVar44,CycleScopeEnd);
          }
        }
        if ((*(int *)(lVar54 + local_440) < ::_TSS4) &&
           (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
          StatPtr_STAT_UGameEngine_Tick_ConditionalCommitMapChange =
               (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_115_::FStat_STAT_UGameEngine_Tick_ConditionalCommitMapChange>
                )0x0;
          pFVar16 = ::FName::FName(&local_1e0,"STAT_UGameEngine_Tick_ConditionalCommitMapChange");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_UGameEngine_Tick_ConditionalCommitMapChange,*pFVar16,
                     L"STAT_UGameEngine_Tick_ConditionalCommitMapChange","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS4);
        }
        FVar25 = StatPtr_STAT_UGameEngine_Tick_ConditionalCommitMapChange;
        if (StatPtr_STAT_UGameEngine_Tick_ConditionalCommitMapChange ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_115_::FStat_STAT_UGameEngine_Tick_ConditionalCommitMapChange>
             )0x0) {
          pFVar16 = ::FName::FName(&local_1d8,"STAT_UGameEngine_Tick_ConditionalCommitMapChange");
          FVar25 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_115_::FStat_STAT_UGameEngine_Tick_ConditionalCommitMapChange>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_UGameEngine_Tick_ConditionalCommitMapChange,*pFVar16,
                                L"STAT_UGameEngine_Tick_ConditionalCommitMapChange",
                                "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,
                                true,false,MCR_Invalid);
        }
        FVar44 = *(FName *)FVar25;
        bVar12 = false;
        bVar9 = false;
        local_320.ComparisonIndex.Value = 0;
        local_320.Number = 0;
        FVar42 = FVar44.ComparisonIndex.Value;
        uVar52 = FVar44.Number;
        if ((FVar42.Value == 0) && (uVar52 == 0)) {
LAB_147c066bf:
          bVar10 = false;
          FVar44 = local_320;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_40c.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_40c._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
            bVar12 = false;
            bVar9 = true;
            if (-1 < CpuChannel->Enabled) {
              local_3a0.ComparisonIndex.Value = FVar42.Value;
              local_3a0.Number = uVar52;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_3a0,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                         ,0x78d);
              bVar12 = true;
              bVar9 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_147c066bf;
          local_398 = FVar42.Value;
          uStack_394 = uVar52;
          local_320 = FVar44;
          FThreadStats::AddMessage(FVar44,CycleScopeStart);
          bVar10 = true;
        }
        UEngine::ConditionalCommitMapChange((UEngine *)this,pFVar29);
        if ((pFVar29->WorldType).Value != '\x04') {
          bVar13 = UWorld::IsPaused((pFVar29->ThisCurrentWorld).field0_0x0.DebugPtr);
          local_430 = local_430 & 0xff;
          if (!bVar13) {
            local_430 = 1;
          }
        }
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        lVar55 = local_440;
        if ((((bVar10) && (FVar44 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar26 == (FThreadStats *)0x0) {
            pFVar27 = FThreadStatsPool::Get();
            pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
          }
          lVar55 = local_440;
          if (pFVar26->bWaitForExplicitFlush < pFVar26->ScopeCount) {
            local_2a0.NameAndInfo.Index = FVar44.ComparisonIndex.Value;
            local_2a0.NameAndInfo.Number = FVar44.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(local_268);
            local_2a0.StatData.Pad[4] = '\0';
            local_2a0.StatData.Pad[5] = '\0';
            local_2a0.StatData.Pad[6] = '\0';
            local_2a0.StatData.Pad[7] = '\0';
            local_2a0.StatData.Pad[0] = local_268[0]._0_1_;
            local_2a0.StatData.Pad[1] = local_268[0]._1_1_;
            local_2a0.StatData.Pad[2] = local_268[0]._2_1_;
            local_2a0.StatData.Pad[3] = local_268[0]._3_1_;
            FThreadStats::AddStatMessage(pFVar26,&local_2a0);
            piVar1 = &pFVar26->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar26,false,false);
              lVar55 = local_440;
            }
            else {
              lVar55 = local_440;
              if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar26,false,false);
                lVar55 = local_440;
              }
            }
          }
        }
      }
      uVar47 = (ulonglong)(uVar49 + 1);
      local_438 = (FName)((longlong)local_438 + 8);
      pIVar19 = local_2e0;
    } while ((int)(uVar49 + 1) < (int)this->_padding_);
  }
  FVar44 = local_3f0;
  FTickableGameObject::TickObjects((UWorld *)0x0,LEVELTICK_All,false,param_1);
  if (FVar44 != (FName)0x0) {
    if ((*(int *)(lVar55 + *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
         ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      StatPtr_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked =
           (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_165_::FStat_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked>
            )0x0;
      pFVar16 = ::FName::FName(&local_1d0,"STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked,*pFVar16,
                 L"STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS5);
    }
    FVar28 = StatPtr_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked;
    if (StatPtr_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_165_::FStat_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked>
         )0x0) {
      pFVar16 = ::FName::FName(&local_1c8,"STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked");
      FVar28 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_165_::FStat_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked,*pFVar16
                            ,L"STAT_UGameEngine_Tick_GetWorldContextFromHandleChecked",
                            "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                            false,MCR_Invalid);
    }
    FVar45 = *(FName *)FVar28;
    bVar12 = false;
    bVar9 = false;
    local_310.ComparisonIndex.Value = 0;
    local_310.Number = 0;
    if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_147c06a09:
      bVar10 = false;
      FVar45 = local_310;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_408.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_408._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
        bVar12 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_388.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
          local_388.Number = FVar45.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_388,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                     ,0x7a1);
          bVar12 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147c06a09;
      local_438 = FVar45;
      FThreadStats::AddMessage(FVar45,CycleScopeStart);
      bVar10 = true;
    }
    pFVar29 = UEngine::GetWorldContextFromHandleChecked((UEngine *)this,FVar44);
    GWorld.World = *(UWorld **)&(pFVar29->ThisCurrentWorld).field0_0x0.ObjectPtr.field0_0x0;
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar10) && (FVar45 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar26 == (FThreadStats *)0x0) {
        pFVar27 = FThreadStatsPool::Get();
        pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
      }
      if (pFVar26->bWaitForExplicitFlush < pFVar26->ScopeCount) {
        local_290.NameAndInfo.Index = FVar45.ComparisonIndex.Value;
        local_290.NameAndInfo.Number = FVar45.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_2d8);
        local_290.StatData.Pad[4] = '\0';
        local_290.StatData.Pad[5] = '\0';
        local_290.StatData.Pad[6] = '\0';
        local_290.StatData.Pad[7] = '\0';
        local_290.StatData.Pad[0] = local_2d8.s.LowPart._0_1_;
        local_290.StatData.Pad[1] = local_2d8.s.LowPart._1_1_;
        local_290.StatData.Pad[2] = local_2d8.s.LowPart._2_1_;
        local_290.StatData.Pad[3] = local_2d8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar26,&local_290);
        piVar1 = &pFVar26->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar26,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar26,false,false);
        }
      }
    }
  }
  if (pIVar19 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar19 + 0xe0))(pIVar19);
  }
  plVar51 = (longlong *)this->_padding_;
  plVar7 = &this->_padding_;
  iVar5 = (int)*plVar7;
  local_270 = CONCAT44(uStack_3b4,iVar5);
  plVar3 = plVar51 + iVar5;
  local_3c8 = plVar51;
  plStack_3c0 = plVar7;
  local_3b8 = iVar5;
  local_280 = plVar51;
  plStack_278 = plVar7;
  while( true ) {
    if ((int)*plVar7 != iVar5) {
      local_447 = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_447);
    }
    if (plVar51 == plVar3) break;
    if (*(UWorld **)(*plVar51 + 0x2c0) != (UWorld *)0x0) {
      UWorld::StartAsyncSendAllEndOfFrameUpdates(*(UWorld **)(*plVar51 + 0x2c0));
    }
    plVar51 = plVar51 + 1;
  }
  local_280 = plVar51;
  if ((this->_padding_ != 0) && (!param_2)) {
    FVar30 = StatPtr_STAT_GameViewportTick;
    if (StatPtr_STAT_GameViewportTick == (FThreadSafeStaticStat<FStat_STAT_GameViewportTick>)0x0) {
      pFVar16 = ::FName::FName(&local_1c0,"STAT_GameViewportTick");
      FVar30 = (FThreadSafeStaticStat<FStat_STAT_GameViewportTick>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GameViewportTick,*pFVar16,
                          L"GameViewport Tick","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    FVar44 = *(FName *)FVar30;
    bVar9 = false;
    bVar12 = false;
    local_300.ComparisonIndex.Value = 0;
    local_300.Number = 0;
    if ((FVar44.ComparisonIndex.Value.Value == 0) && (FVar44.Number == 0)) {
LAB_147c06ce2:
      bVar10 = false;
      FVar44 = local_300;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_404.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_404._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
        bVar9 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_380.ComparisonIndex.Value = FVar44.ComparisonIndex.Value.Value;
          local_380.Number = FVar44.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_380,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                     ,0x7b8);
          bVar9 = true;
          bVar12 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147c06ce2;
      local_438 = FVar44;
      FThreadStats::AddMessage(FVar44,CycleScopeStart);
      bVar10 = true;
    }
    (**(code **)(*(longlong *)this->_padding_ + 800))
              ((longlong *)this->_padding_,CONCAT44(in_XMM1_Db,param_1));
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar10) {
      FThreadStats::AddMessage(FVar44,CycleScopeEnd);
    }
  }
  FMoviePlayerProxy::BlockingForceFinished();
  if (bFirstTime != false) {
    bFirstTime = false;
    FWindowsPlatformSplash::Hide();
    if ((((this->GameViewportWindow).Object != (SWindow *)0x0) &&
        (pTVar46 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController,
        pTVar46 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar46->SharedReferenceCount))
    {
      pFVar31 = FSlateApplication::Get();
      if (pFVar31->bRenderOffScreen == false) {
        pTVar46 = (this->GameViewportWindow).WeakReferenceCount.ReferenceController;
        this_02 = (SWindow *)0x0;
        if (pTVar46 == (TReferenceControllerBase<1> *)0x0) {
LAB_147c06db4:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          aVar11 = pTVar46->SharedReferenceCount;
          do {
            if (aVar11 == (atomic<int>)0x0) {
              pTVar46 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_147c06db4;
            }
            LOCK();
            aVar15 = pTVar46->SharedReferenceCount;
            bVar12 = aVar11 == aVar15;
            if (bVar12) {
              pTVar46->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
              aVar15 = aVar11;
            }
            UNLOCK();
            aVar11 = aVar15;
          } while (!bVar12);
          this_02 = (this->GameViewportWindow).Object;
          if (this_02 == (SWindow *)0x0) goto LAB_147c06db4;
        }
        SWindow::ShowWindow(this_02);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46)
        ;
      }
      pFVar31 = FSlateApplication::Get();
      pTVar32 = TSharedPtr<SViewport,1>::ToSharedRef(&this->GameViewportWidget,&local_160);
      FSlateApplication::RegisterGameViewport(pFVar31,pTVar32);
    }
  }
  cVar14 = (**(code **)(this->_padding_ + 0x338))(this);
  if (((param_2) || (PRIVATE_GIsRunningCommandlet != false)) ||
     (bVar12 = FEmbeddedCommunication::IsAwakeForRendering(), pUVar50 = local_420, !bVar12)) {
    bVar12 = false;
    pUVar50 = local_420;
  }
  else {
    bVar12 = true;
    if (cVar14 == '\0') {
      (**(code **)(local_420->_padding_ + 0x4e8))(local_420,1);
    }
  }
  plVar51 = (longlong *)pUVar50->_padding_;
  plVar7 = &pUVar50->_padding_;
  iVar5 = (int)*plVar7;
  local_2c0 = CONCAT44(uStack_3b4,iVar5);
  plVar3 = plVar51 + iVar5;
  local_3c8 = plVar51;
  plStack_3c0 = plVar7;
  local_3b8 = iVar5;
  local_2d0 = plVar51;
  plStack_2c8 = plVar7;
  while( true ) {
    if ((int)*plVar7 != iVar5) {
      local_446[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_446);
    }
    pUVar50 = local_420;
    if (plVar51 == plVar3) break;
    if (*(UWorld **)(*plVar51 + 0x2c0) != (UWorld *)0x0) {
      UWorld::FinishAsyncSendAllEndOfFrameUpdates(*(UWorld **)(*plVar51 + 0x2c0));
    }
    plVar51 = plVar51 + 1;
  }
  local_2d0 = plVar51;
  if (GUseUnifiedTimeBudgetForStreaming != 0) {
    (**(code **)(local_420->_padding_ + 0x388))(local_420,CONCAT44(in_XMM1_Db,param_1));
  }
  if (bVar12) {
    if (cVar14 == '\0') {
      if ((GMinimizedSyncDrawToGPU == 0) ||
         (bVar12 = UEngine::AreAllWindowsHidden((UEngine *)pUVar50), !bVar12)) {
        pIVar39 = GetRendererModule();
        (**(code **)((longlong)*pIVar39 + 0x128))(pIVar39);
      }
      else {
        local_138 = &
                    ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        pcStack_130 = `UGameEngine::Tick'::__l212::<lambda_1>::<lambda_invoker_cdecl>;
        local_148[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                       ::Call;
        local_120 = (undefined ***)0x0;
        pFVar33 = FRenderCommandList::GetInstanceTLS();
        if (pFVar33 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UGameEngine::Tick_::__l212::TSTR_SubmitAndBlockUntilGPUIdle_MinimizedRealtime2031>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
        }
        else {
          pFVar34 = FRenderCommandList::GetRenderThread(pFVar33);
          local_e8._0_8_ = local_148[0];
          local_c0 = local_120;
          local_d8 = local_138;
          pcStack_d0 = pcStack_130;
          local_c8 = local_128;
          local_148[0] = (code *)0x0;
          local_b8 = 2;
          pFVar35 = (FRenderCommandTag *)
                    TRenderCommandTag<`UGameEngine::Tick'::__l212::TSTR_SubmitAndBlockUntilGPUIdle_MinimizedRealtime2031>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar34,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_e8,pFVar35);
          uVar47 = (ulonglong)local_b8;
          if ((2 < uVar47) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar47] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_e8._0_8_ != (code *)0x0) {
              pppuVar40 = (undefined ***)(local_e8 + 0x10);
              if (local_c0 != (undefined ***)0x0) {
                pppuVar40 = local_c0;
              }
              (*(code *)(*pppuVar40)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar47])(local_e8);
          }
        }
        if (local_148[0] != (code *)0x0) {
          pppuVar40 = &local_138;
          if (local_120 != (undefined ***)0x0) {
            pppuVar40 = local_120;
          }
          (*(code *)(*pppuVar40)[2])();
        }
      }
    }
    else if (((GUseUnifiedTimeBudgetForStreaming == 0) && (lVar55 = pUVar50->_padding_, lVar55 != 0)
             ) && ((lVar55 = *(longlong *)(lVar55 + 0x128), lVar55 != 0 &&
                   ((plVar7 = *(longlong **)(lVar55 + 0x40), plVar7 != (longlong *)0x0 &&
                    (pUVar36 = (UWorld *)(**(code **)(*plVar7 + 0x30))(), pUVar36 != (UWorld *)0x0))
                   )))) {
      local_178.bIsSet = false;
      UWorld::UpdateLevelStreaming(pUVar36,&local_178);
    }
  }
  if (GIsClient != false) {
    if ((*(int *)(local_440 +
                 *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
         ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
      StatPtr_STAT_UGameEngine_Tick_IStreamingManager =
           (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_230_::FStat_STAT_UGameEngine_Tick_IStreamingManager>
            )0x0;
      pFVar16 = ::FName::FName(&local_1a8,"STAT_UGameEngine_Tick_IStreamingManager");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UGameEngine_Tick_IStreamingManager,
                 *pFVar16,L"STAT_UGameEngine_Tick_IStreamingManager","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS8);
    }
    FVar37 = StatPtr_STAT_UGameEngine_Tick_IStreamingManager;
    if (StatPtr_STAT_UGameEngine_Tick_IStreamingManager ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_230_::FStat_STAT_UGameEngine_Tick_IStreamingManager>
         )0x0) {
      pFVar16 = ::FName::FName(&local_198,"STAT_UGameEngine_Tick_IStreamingManager");
      FVar37 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameEngine::Tick(float,bool)_::_230_::FStat_STAT_UGameEngine_Tick_IStreamingManager>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_UGameEngine_Tick_IStreamingManager,*pFVar16,
                            L"STAT_UGameEngine_Tick_IStreamingManager","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar44 = *(FName *)FVar37;
    bVar12 = false;
    bVar9 = false;
    local_2f0.ComparisonIndex.Value = 0;
    local_2f0.Number = 0;
    if ((FVar44.ComparisonIndex.Value.Value == 0) && (FVar44.Number == 0)) {
LAB_147c0730c:
      bVar10 = false;
      FVar44 = local_2f0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_400[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_400[0]._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
        bVar12 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_378.ComparisonIndex.Value = FVar44.ComparisonIndex.Value.Value;
          local_378.Number = FVar44.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_378,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp"
                     ,0x80e);
          bVar12 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147c0730c;
      local_438 = FVar44;
      FThreadStats::AddMessage(FVar44,CycleScopeStart);
      bVar10 = true;
    }
    pFVar38 = IStreamingManager::Get();
    (**(code **)(pFVar38->_padding_ + 8))(pFVar38,CONCAT44(in_XMM1_Db,param_1),0);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar10) {
      FThreadStats::AddMessage(FVar44,CycleScopeEnd);
    }
  }
  this_01 = UEngine::GetAudioDeviceManager(GEngine);
  if (this_01 != (FAudioDeviceManager *)0x0) {
    FAudioDeviceManager::UpdateActiveAudioDevices(this_01,local_430._0_1_);
  }
  local_370 = CONCAT31(local_370._1_3_,GPauseRenderingRealtimeClock);
  local_108[0] = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UGameEngine::Tick'::`234'::<lambda_2>,1,0>::_vftable_;
  local_108[1]._4_4_ = param_1;
  local_108[1]._0_4_ = local_370;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGameEngine::Tick'::__l234::<lambda_2>,void,FRHICommandListImmediate_&>
                 ::Call;
  local_f0 = (undefined ***)0x0;
  fStack_36c = param_1;
  pFVar33 = FRenderCommandList::GetInstanceTLS();
  if (pFVar33 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UGameEngine::Tick_::__l234::TSTR_TickRenderingTimer2077>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    pFVar34 = FRenderCommandList::GetRenderThread(pFVar33);
    local_a8._0_8_ = local_118[0];
    local_80 = local_f0;
    local_98[0] = local_108[0];
    local_98[1] = local_108[1];
    local_98[2] = local_108[2];
    local_118[0] = (code *)0x0;
    local_78 = 2;
    pFVar35 = (FRenderCommandTag *)
              TRenderCommandTag<`UGameEngine::Tick'::__l234::TSTR_TickRenderingTimer2077>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar34,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_a8,pFVar35);
    uVar47 = (ulonglong)local_78;
    if ((2 < uVar47) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar47] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_a8._0_8_ != (code *)0x0) {
        pppuVar40 = (undefined ***)(local_a8 + 0x10);
        if (local_80 != (undefined ***)0x0) {
          pppuVar40 = local_80;
        }
        (*(code *)(*pppuVar40)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar47])(local_a8);
    }
  }
  if (local_118[0] != (code *)0x0) {
    pppuVar40 = local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar40 = local_f0;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  if (cVar14 != '\0') {
    pIVar39 = GetRendererModule();
    (**(code **)((longlong)*pIVar39 + 0x130))(pIVar39);
  }
LAB_147c074ed:
  if ((local_3e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_3e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_3e0 & 4) != 0) {
    FThreadStats::AddMessage(local_3e8,CycleScopeEnd);
  }
  local_3e0 = 0;
  FCsvProfiler::EndExclusiveStat("EngineTickMisc");
  return;
}

