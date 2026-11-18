// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 48

// FPreLoadScreenManager @ 145abf400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FPreLoadScreenManager * __thiscall
FPreLoadScreenManager::FPreLoadScreenManager(FPreLoadScreenManager *this)

{
  *(undefined8 *)&(this->OnPreLoadScreenManagerCleanUp).field_0x18 = 2;
  *(undefined8 *)&this->OnPreLoadScreenManagerCleanUp = 0;
  *(undefined8 *)&(this->OnPreLoadScreenManagerCleanUp).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreLoadScreenManagerCleanUp).field_0x10 = 0;
  *(undefined8 *)&this->IsResponsibleForRenderingDelegate = 0;
  *(undefined8 *)&(this->IsResponsibleForRenderingDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IsResponsibleForRenderingDelegate).field_0x10 = 0;
  (this->PreLoadScreens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreLoadScreens).ArrayNum = 0;
  (this->PreLoadScreens).ArrayMax = 0;
  this->LastTickTime = 0.0;
  (this->WidgetRenderer).Object = (FPreLoadSlateWidgetRenderer *)0x0;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MainWindow).Object = (SWindow *)0x0;
  (this->MainWindow).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VirtualRenderWindow).Object = (SVirtualWindow *)0x0;
  (this->VirtualRenderWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bInitialized = false;
  this->SyncMechanism = (FPreLoadScreenSlateSynchMechanism *)0x0;
  this->bIsResponsibleForRendering = false;
  this->bHasRenderPreLoadScreenFrame_RenderThread = false;
  this->LastRenderTickTime = 0.0;
  this->OriginalSlateSleepVariableValue = 0.0;
  this->bIsEngineLoadingComplete = false;
  *(undefined8 *)&(this->IsResponsibleForRenderingDelegate).field_0x18 = 2;
  this->ActivePreLoadScreenIndex = -1;
  return this;
}

// operator() @ 145ac0340

void __thiscall
`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  IPreLoadScreen *pIVar5;
  IPreLoadScreen *pIVar6;
  bool bVar7;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FPreLoadScreenManager::ActivePreloadScreenCriticalSection);
  FVar2 = FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount;
  pIVar5 = (IPreLoadScreen *)0x0;
  FVar4 = FVar2;
  pIVar6 = pIVar5;
  if (FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pIVar5;
      pIVar6 = pIVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4 = FVar2;
      pIVar6 = FPreLoadScreenManager::ActivePreloadScreen.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  if (((FPreLoadScreenManager::bRenderingEnabled != (atomic<bool>)0x0) &&
      (pIVar6 != (IPreLoadScreen *)0x0)) && (*(char *)(*(longlong *)this + 0xa1) == '\0')) {
    GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
    *(undefined1 *)(*(longlong *)this + 0xa1) = 1;
    (**(code **)(*(longlong *)pIVar6 + 0x28))(pIVar6,param_1,*(undefined4 *)((longlong)this + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000145ac03ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FPreLoadScreenManager::ActivePreloadScreenCriticalSection);
  return;
}

// ArePreLoadScreensEnabled @ 145ac1050

bool __cdecl FPreLoadScreenManager::ArePreLoadScreensEnabled(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  byte bVar3;
  
  if ((PRIVATE_GIsRunningCommandlet) || (!GUseThreadedRendering)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"NoLoadingScreen");
  return (bool)(!bVar1 & bVar3);
}

// CleanUpResources @ 145ac4460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::CleanUpResources(FPreLoadScreenManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  FPreLoadScreenSlateSynchMechanism *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FSlateApplication *pFVar10;
  FPreLoadSettingsContainerBase *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  FDestructionSentinel local_48;
  
  bVar6 = HasValidActivePreLoadScreen(this);
  if (bVar6) {
    local_res8[0] = 0;
    `FPreLoadScreenManager::CleanUpResources'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (this->SyncMechanism != (FPreLoadScreenSlateSynchMechanism *)0x0) {
    FPreLoadScreenSlateSynchMechanism::DestroySlateThread(this->SyncMechanism);
    this_00 = this->SyncMechanism;
    if (this_00 != (FPreLoadScreenSlateSynchMechanism *)0x0) {
      FPreLoadScreenSlateSynchMechanism::DestroySlateThread(this_00);
      if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
        pFVar10 = FSlateApplication::Get();
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar10->WindowBeingDestroyedEvent,this_00);
        pFVar10 = FSlateApplication::Get();
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar10->PreShutdownEvent,
                   this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this_00->WidgetRenderer).SharedReferenceCount.ReferenceController);
      ::operator_delete(this_00,0x30);
    }
    this->SyncMechanism = (FPreLoadScreenSlateSynchMechanism *)0x0;
  }
  iVar2 = (this->PreLoadScreens).ArrayNum;
  pFVar13 = (this->PreLoadScreens).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->PreLoadScreens).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IPreLoadScreen,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar14) break;
    if (*(longlong **)pFVar13 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar13 + 0x48))();
    }
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pFVar13 != (FScriptContainerElement *)&local_58) {
      *(longlong *)pFVar13 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar13 + 8),&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    pFVar13 = pFVar13 + 0x10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnPreLoadScreenManagerCleanUp).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar12 = *(int *)&(this->OnPreLoadScreenManagerCleanUp).field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar15 = (longlong)(int)uVar12 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar12 < *(int *)&(this->OnPreLoadScreenManagerCleanUp).field_0x10) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)&(this->OnPreLoadScreenManagerCleanUp).field_0x8;
      if ((*(int *)(lVar15 + 8 + lVar3) == 0) ||
         (plVar4 = *(longlong **)(lVar15 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_145ac4615:
        bVar6 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar4 + 0x68))();
        if (cVar8 == '\0') goto LAB_145ac4615;
      }
      lVar15 = lVar15 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  puVar1 = &(this->OnPreLoadScreenManagerCleanUp).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar11 = FPreLoadSettingsContainerBase::Get();
  BeginCleanup((FDeferredCleanupInterface *)pFVar11);
  return;
}

// Create @ 145ac6080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FPreLoadScreenManager::Create(void)

{
  code *pcVar1;
  TUniquePtr<FPreLoadScreenManager,FPreLoadScreenManager::FPreLoadScreenManagerDelete> TVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FPreLoadScreenManager *pFVar5;
  FPreLoadScreenManager *pFVar6;
  byte bVar7;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                         ,0x2d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (Instance.Ptr == (FPreLoadScreenManager *)0x0) {
    if ((PRIVATE_GIsRunningCommandlet == false) && (GUseThreadedRendering != false)) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar4,L"NoLoadingScreen");
    if ((bool)(bVar7 & !bVar3)) {
      pFVar5 = ::operator_new(0xb8);
      pFVar6 = (FPreLoadScreenManager *)0x0;
      if (pFVar5 != (FPreLoadScreenManager *)0x0) {
        *(undefined8 *)&pFVar5->OnPreLoadScreenManagerCleanUp = 0;
        *(undefined8 *)&(pFVar5->OnPreLoadScreenManagerCleanUp).field_0x8 = 0;
        *(undefined8 *)&(pFVar5->OnPreLoadScreenManagerCleanUp).field_0x10 = 0;
        *(undefined8 *)&(pFVar5->OnPreLoadScreenManagerCleanUp).field_0x18 = 2;
        *(undefined8 *)&pFVar5->IsResponsibleForRenderingDelegate = 0;
        *(undefined8 *)&(pFVar5->IsResponsibleForRenderingDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar5->IsResponsibleForRenderingDelegate).field_0x10 = 0;
        *(undefined8 *)&(pFVar5->IsResponsibleForRenderingDelegate).field_0x18 = 2;
        (pFVar5->PreLoadScreens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->PreLoadScreens).ArrayNum = 0;
        (pFVar5->PreLoadScreens).ArrayMax = 0;
        pFVar5->ActivePreLoadScreenIndex = -1;
        pFVar5->LastTickTime = 0.0;
        (pFVar5->WidgetRenderer).Object = (FPreLoadSlateWidgetRenderer *)0x0;
        (pFVar5->WidgetRenderer).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar5->MainWindow).Object = (SWindow *)0x0;
        (pFVar5->MainWindow).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar5->VirtualRenderWindow).Object = (SVirtualWindow *)0x0;
        (pFVar5->VirtualRenderWindow).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar5->bInitialized = false;
        pFVar5->SyncMechanism = (FPreLoadScreenSlateSynchMechanism *)0x0;
        pFVar5->bIsResponsibleForRendering = false;
        pFVar5->bHasRenderPreLoadScreenFrame_RenderThread = false;
        pFVar5->LastRenderTickTime = 0.0;
        pFVar5->OriginalSlateSleepVariableValue = 0.0;
        pFVar5->bIsEngineLoadingComplete = false;
        pFVar6 = pFVar5;
      }
      TVar2.Ptr = Instance.Ptr;
      Instance.Ptr = pFVar6;
      FPreLoadScreenManagerDelete::operator()((FPreLoadScreenManagerDelete *)&Instance,TVar2.Ptr);
      return;
    }
  }
  return;
}

// Destroy @ 145ac70e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FPreLoadScreenManager::Destroy(void)

{
  code *pcVar1;
  TUniquePtr<FPreLoadScreenManager,FPreLoadScreenManager::FPreLoadScreenManagerDelete> TVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                       ,0x37,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (Instance.Ptr != (FPreLoadScreenManager *)0x0) {
    CleanUpResources(Instance.Ptr);
    TVar2 = Instance;
    if (Instance.Ptr != (FPreLoadScreenManager *)0x0) {
      Instance.Ptr = (FPreLoadScreenManager *)0x0;
      FPreLoadScreenManagerDelete::operator()((FPreLoadScreenManagerDelete *)&Instance,TVar2.Ptr);
      return;
    }
  }
  return;
}

// EarlyPlayFrameTick @ 145ac7c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::EarlyPlayFrameTick(FPreLoadScreenManager *this)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  bVar1 = HasActivePreLoadScreenType(this,EarlyStartupScreen);
  if (!bVar1) {
    bVar1 = HasActivePreLoadScreenType(this,CustomSplashScreen);
    if (!bVar1) {
      bVar1 = `FPreLoadScreenManager::EarlyPlayFrameTick'::__l3::<lambda_1>::operator()(local_res10)
      ;
      if (!bVar1) {
        return;
      }
    }
  }
  GameLogicFrameTick(this);
  EarlyPlayRenderFrameTick(this);
  return;
}

// EarlyPlayRenderFrameTick @ 145ac7c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::EarlyPlayRenderFrameTick(FPreLoadScreenManager *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FSlateApplication *this_00;
  FRenderCommandList *pFVar8;
  FCommandList *pFVar9;
  FRenderCommandTag *pFVar10;
  undefined ***pppuVar11;
  ulonglong uVar12;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined1 local_138 [32];
  code *local_118 [2];
  undefined **local_108;
  FPreLoadScreenManager *pFStack_100;
  float local_f8;
  undefined4 uStack_f4;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FPreLoadScreenManager *pFStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FPreLoadScreenManager *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  FPreLoadScreenManager *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((bRenderingEnabled == (atomic<bool>)0x0) ||
     (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0)) {
    FWindowsPlatformProcess::Sleep(0.0);
  }
  else {
    iVar1 = (this->PreLoadScreens).ArrayNum;
    uVar2 = this->ActivePreLoadScreenIndex;
    uVar7 = 0;
    if ((int)uVar2 < iVar1) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_148 = (longlong)(int)uVar2, local_140 = (longlong)iVar1,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)
              ((this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10);
    if (plVar3 == (longlong *)0x0) {
      local_138[0] = 0;
      bVar5 = `FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l6::<lambda_1>::operator()
                        (local_138);
      if (!bVar5) {
        return;
      }
    }
    cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
    bVar5 = cVar6 != '\0';
    if (bVar5 != this->bIsResponsibleForRendering) {
      this->bIsResponsibleForRendering = bVar5;
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&this->IsResponsibleForRenderingDelegate,bVar5);
    }
    if (cVar6 != '\0') {
      this_00 = FSlateApplication::Get();
      local_f0 = (undefined ***)0x0;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::`17'::<lambda_2>,1,0>
                   ::_vftable_;
      uStack_f4 = local_138._20_4_;
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_f8 = (float)(this_00->CurrentTime - this_00->LastTickTime);
      pFStack_100 = this;
      pFVar8 = FRenderCommandList::GetInstanceTLS();
      if (pFVar8 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FPreLoadScreenManager::EarlyPlayRenderFrameTick_::__l17::TSTR_BeginPreLoadScreenFrame560>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
        local_98._4_4_ = uStack_f4;
        local_98._0_4_ = local_f8;
        local_b8._0_8_ = local_118[0];
        local_90 = local_f0;
        local_a8 = local_108;
        pFStack_a0 = pFStack_100;
        local_118[0] = (code *)0x0;
        local_88 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_BeginPreLoadScreenFrame560>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_b8,pFVar10);
        uVar12 = (ulonglong)local_88;
        if ((2 < uVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_b8._0_8_ != (code *)0x0) {
            pppuVar11 = (undefined ***)(local_b8 + 0x10);
            if (local_90 != (undefined ***)0x0) {
              pppuVar11 = local_90;
            }
            (*(code *)(*pppuVar11)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12])(local_b8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        pppuVar11 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar11 = local_f0;
        }
        (*(code *)(*pppuVar11)[2])();
      }
      FSlateApplication::Tick(this_00,All);
      (**(code **)(**(longlong **)&this_00->field_0x60 + 200))();
      local_c0 = (undefined ***)0x0;
      local_d8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::`17'::<lambda_3>,1,0>
                  ::_vftable_;
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_d0 = this;
      pFVar8 = FRenderCommandList::GetInstanceTLS();
      if (pFVar8 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FPreLoadScreenManager::EarlyPlayRenderFrameTick_::__l17::TSTR_FinishPreLoadScreenFrame581>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
      }
      else {
        pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
        local_78._0_8_ = local_e8[0];
        local_50 = local_c0;
        local_68 = local_d8;
        pFStack_60 = pFStack_d0;
        local_58 = local_c8;
        local_e8[0] = (code *)0x0;
        local_48 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::TSTR_FinishPreLoadScreenFrame581>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_78,pFVar10);
        uVar12 = (ulonglong)local_48;
        if ((2 < uVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            pppuVar11 = (undefined ***)(local_78 + 0x10);
            if (local_50 != (undefined ***)0x0) {
              pppuVar11 = local_50;
            }
            (*(code *)(*pppuVar11)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12])(local_78);
        }
      }
      if (local_e8[0] != (code *)0x0) {
        pppuVar11 = &local_d8;
        if (local_c0 != (undefined ***)0x0) {
          pppuVar11 = local_c0;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
  }
  return;
}

// EnableRendering @ 145ac8020

void __cdecl FPreLoadScreenManager::EnableRendering(bool param_1)

{
  LOCK();
  bRenderingEnabled = (atomic<bool>)param_1;
  UNLOCK();
  return;
}

// GameLogicFrameTick @ 145ac88c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::GameLogicFrameTick(FPreLoadScreenManager *this)

{
  double dVar1;
  code *pcVar2;
  GenericApplication *pGVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  IPreLoadScreen *pIVar6;
  FTaskGraphInterface *pFVar7;
  FTSTicker *this_00;
  FThreadManager *this_01;
  FSlateApplication *pFVar8;
  double dVar9;
  float fVar10;
  undefined1 local_res10 [8];
  LARGE_INTEGER local_res18 [2];
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  pIVar6 = GetActivePreLoadScreen(this);
  if (pIVar6 == (IPreLoadScreen *)0x0) {
    local_res10[0] = 0;
    bVar5 = `FPreLoadScreenManager::GameLogicFrameTick'::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar5) {
      return;
    }
  }
  else {
    fVar10 = (float)(**(code **)(*(longlong *)pIVar6 + 0x18))(pIVar6);
    if (0.0 < fVar10) {
      FWindowsPlatformProcess::Sleep(fVar10);
    }
  }
  QueryPerformanceCounter(local_res18);
  dVar9 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = this->LastTickTime;
  this->LastTickTime = dVar9;
  fVar10 = (float)(dVar9 - dVar1);
  if (__real_40a00000 <= fVar10) {
    fVar10 = __real_40a00000;
  }
  pFVar7 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar7 + 0x48))(pFVar7,1);
  this_00 = FTSTicker::GetCoreTicker();
  FTSTicker::Tick(this_00,fVar10);
  this_01 = FThreadManager::Get();
  FThreadManager::Tick(this_01);
  (**(code **)(*(longlong *)pIVar6 + 0x10))(pIVar6,fVar10);
  FWindowsPlatformApplicationMisc::PumpMessages(true);
  pFVar8 = FSlateApplication::Get();
  FSlateApplication::PollGameDeviceState(pFVar8);
  pFVar8 = FSlateApplication::Get();
  FSlateApplication::FinishedInputThisFrame(pFVar8);
  FSlateApplication::Get();
  FVar4 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
  pGVar3 = FSlateApplicationBase::PlatformApplication.Object;
  if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)
               ->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pGVar3 == (GenericApplication *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(pGVar3->_padding_ + 0x30))(pGVar3,fVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  GFrameCounter = GFrameCounter + 1;
  local_38 = 0;
  local_48 = (undefined1  [8])0x0;
  local_40.Data = (FScriptContainerElement *)0x0;
  UE::Stats::FStats::AdvanceFrame
            (false,(TDelegate<void___cdecl(bool,__int64,int),FDefaultDelegateUserPolicy> *)local_48)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

// Get @ 145ac8fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FPreLoadScreenManager * __cdecl FPreLoadScreenManager::Get(void)

{
  return Instance.Ptr;
}

// GetActivePreLoadScreen @ 145ac9220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

IPreLoadScreen * __thiscall
FPreLoadScreenManager::GetActivePreLoadScreen(FPreLoadScreenManager *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IPreLoadScreen *pIVar4;
  uint uVar5;
  
  bVar3 = HasValidActivePreLoadScreen(this);
  if (!bVar3) {
    return (IPreLoadScreen *)0x0;
  }
  uVar1 = this->ActivePreLoadScreenIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->PreLoadScreens).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IPreLoadScreen *)(*pcVar2)();
      return pIVar4;
    }
  }
  return *(IPreLoadScreen **)
          ((this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// GetActivePreLoadScreen @ 145ac92b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

IPreLoadScreen * __thiscall
FPreLoadScreenManager::GetActivePreLoadScreen(FPreLoadScreenManager *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IPreLoadScreen *pIVar4;
  uint uVar5;
  
  bVar3 = HasValidActivePreLoadScreen(this);
  if (!bVar3) {
    return (IPreLoadScreen *)0x0;
  }
  uVar1 = this->ActivePreLoadScreenIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->PreLoadScreens).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IPreLoadScreen *)(*pcVar2)();
      return pIVar4;
    }
  }
  return *(IPreLoadScreen **)
          ((this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// GetRenderWindow @ 145ac9d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FPreLoadScreenManager::GetRenderWindow
          (FPreLoadScreenManager *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWindow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SWindow *pSVar5;
  SWindow *pSVar6;
  bool bVar7;
  
  if ((((this->MainWindow).Object == (SWindow *)0x0) ||
      (pTVar1 = (this->MainWindow).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar2 = (SWindow *)(this->MainWindow).WeakReferenceCount.ReferenceController;
  pSVar5 = pSVar2;
  pSVar6 = (SWindow *)0x0;
  if (pSVar2 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar5 = (SWindow *)0x0;
      pSVar6 = (SWindow *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_145ac9d71;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pSVar5 = pSVar2;
    pSVar6 = (this->MainWindow).Object;
  }
LAB_145ac9d71:
  __return_storage_ptr__->Object = pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// HandleCustomSplashScreenPlay @ 145aca5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::HandleCustomSplashScreenPlay(FPreLoadScreenManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  longlong lVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  IPreLoadScreen *pIVar8;
  longlong *plVar9;
  TSharedPtr<SWidget,1> *this_00;
  TSharedRef<SWidget,1> *pTVar10;
  SWindow *this_01;
  SWindow *pSVar11;
  SWindow *pSVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  SWindow *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  TSharedRef<SWidget,1> local_48;
  FScopedBootTiming local_38;
  
  bVar5 = HasActivePreLoadScreenType(this,CustomSplashScreen);
  if ((!bVar5) &&
     (local_res10[0] = bVar5,
     bVar5 = `FPreLoadScreenManager::HandleCustomSplashScreenPlay'::__l3::<lambda_1>::operator()
                       (local_res10), !bVar5)) {
    return;
  }
  pIVar8 = GetActivePreLoadScreen(this);
  if (pIVar8 == (IPreLoadScreen *)0x0) {
    return;
  }
  if ((this->MainWindow).Object == (SWindow *)0x0) {
    return;
  }
  pTVar1 = (this->MainWindow).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId349,"FPreLoadScreenManager::HandleCustomSplashScreenPlay()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
               ,0x15d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId349);
  }
  FScopedBootTiming::FScopedBootTiming
            (&local_38,"FPreLoadScreenManager::HandleCustomSplashScreenPlay()");
  this_01 = (SWindow *)0x0;
  pTStack_70 = (this->MainWindow).WeakReferenceCount.ReferenceController;
  pcVar2 = *(code **)(*(longlong *)pIVar8 + 0x30);
  if (pTStack_70 == (TReferenceControllerBase<1> *)0x0) {
    local_78 = (SWindow *)0x0;
  }
  else {
    aVar4 = pTStack_70->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        local_78 = (SWindow *)0x0;
        pTStack_70 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_145aca6f0;
      }
      LOCK();
      aVar7 = pTStack_70->SharedReferenceCount;
      bVar13 = aVar4 == aVar7;
      if (bVar13) {
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar13);
    local_78 = (this->MainWindow).Object;
    LOCK();
    pTStack_70->WeakReferenceCount = (atomic<int>)((int)pTStack_70->WeakReferenceCount + 1);
    UNLOCK();
  }
LAB_145aca6f0:
  pTVar1 = pTStack_70;
  (*pcVar2)(pIVar8,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar8 + 0x68))(pIVar8,local_68);
  lVar3 = *plVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  if (lVar3 == 0) goto LAB_145aca7b3;
  pSVar12 = (SWindow *)(this->MainWindow).WeakReferenceCount.ReferenceController;
  pSVar11 = pSVar12;
  if (pSVar12 == (SWindow *)0x0) {
LAB_145aca755:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar12 = pSVar11;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pSVar12->_padding_;
    do {
      pSVar11 = this_01;
      if (aVar4 == (atomic<int>)0x0) goto LAB_145aca755;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar12->_padding_;
      bVar13 = aVar4 == aVar7;
      if (bVar13) {
        *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar13);
    this_01 = (this->MainWindow).Object;
    pSVar11 = pSVar12;
    if (this_01 == (SWindow *)0x0) goto LAB_145aca755;
  }
  this_00 = (TSharedPtr<SWidget,1> *)(**(code **)(*(longlong *)pIVar8 + 0x68))(pIVar8,local_58);
  pTVar10 = TSharedPtr<SWidget,1>::ToSharedRef(this_00,&local_48);
  SWindow::SetContent(this_01,pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
LAB_145aca7b3:
  cVar6 = (**(code **)(*(longlong *)pIVar8 + 0x40))(pIVar8);
  while (cVar6 == '\0') {
    bVar13 = HasActivePreLoadScreenType(this,EarlyStartupScreen);
    if (((bVar13) || (bVar13 = HasActivePreLoadScreenType(this,CustomSplashScreen), bVar13)) ||
       (bVar13 = `FPreLoadScreenManager::EarlyPlayFrameTick'::__l3::<lambda_1>::operator()
                           (local_res18), bVar13)) {
      GameLogicFrameTick(this);
      EarlyPlayRenderFrameTick(this);
    }
    cVar6 = (**(code **)(*(longlong *)pIVar8 + 0x40))(pIVar8);
  }
  StopPreLoadScreen(this);
  FScopedBootTiming::~FScopedBootTiming(&local_38);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HandleEarlyStartupPlay @ 145aca870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::HandleEarlyStartupPlay(FPreLoadScreenManager *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  atomic<int> aVar6;
  IPreLoadScreen *pIVar7;
  TSharedPtr<SWidget,1> *this_00;
  TSharedRef<SWidget,1> *pTVar8;
  longlong *plVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  SWindow *this_01;
  SWindow *pSVar12;
  bool bVar13;
  uint local_res10 [2];
  undefined1 local_res18 [16];
  SWindow *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TSharedRef<SWidget,1> local_78;
  FScopedBootTiming local_68;
  FScopedBootTiming local_50;
  
  pSVar12 = (SWindow *)0x0;
  local_res10[0] = 0;
  bVar3 = HasActivePreLoadScreenType(this,EarlyStartupScreen);
  if (!bVar3) {
    local_res10[0] = local_res10[0] & 0xffffff00;
    bVar3 = `FPreLoadScreenManager::HandleEarlyStartupPlay'::__l3::<lambda_1>::operator()
                      (local_res10);
    if (!bVar3) {
      return;
    }
  }
  pIVar7 = GetActivePreLoadScreen(this);
  if (pIVar7 == (IPreLoadScreen *)0x0) {
    return;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId249,"FPreLoadScreenManager::HandleEarlyStartupPlay()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
               ,0xf9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId249);
  }
  FScopedBootTiming::FScopedBootTiming(&local_50,"FPreLoadScreenManager::HandleEarlyStartupPlay()");
  pcVar1 = *(code **)(*(longlong *)pIVar7 + 0x30);
  local_a8 = (this->MainWindow).Object;
  local_a0 = (this->MainWindow).WeakReferenceCount.ReferenceController;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->WeakReferenceCount = (atomic<int>)((int)local_a0->WeakReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pIVar7,&local_a8);
  pSVar11 = (SWindow *)(this->MainWindow).WeakReferenceCount.ReferenceController;
  pSVar10 = pSVar11;
  this_01 = pSVar12;
  if (pSVar11 != (SWindow *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar10 = pSVar12;
      if (aVar2 == (atomic<int>)0x0) goto LAB_145aca9a5;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar11->_padding_;
      bVar13 = aVar2 == aVar6;
      if (bVar13) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar13);
    this_01 = (this->MainWindow).Object;
    pSVar10 = pSVar11;
    if (this_01 != (SWindow *)0x0) {
      pSVar12 = (SWindow *)&DAT_00000001;
      plVar9 = (longlong *)(**(code **)(*(longlong *)pIVar7 + 0x68))(pIVar7,local_98);
      if (*plVar9 != 0) {
        bVar13 = true;
        goto LAB_145aca9a8;
      }
    }
  }
LAB_145aca9a5:
  bVar13 = false;
  pSVar11 = pSVar10;
LAB_145aca9a8:
  if (pSVar12 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  if (bVar13) {
    if ((this_01 == (SWindow *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (TSharedPtr<SWidget,1> *)(**(code **)(*(longlong *)pIVar7 + 0x68))(pIVar7,local_88);
    pTVar8 = TSharedPtr<SWidget,1>::ToSharedRef(this_00,&local_78);
    SWindow::SetContent(this_01,pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId270,"FPreLoadScreenManager::EarlyPlayFrameTick()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
               ,0x10e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId270);
  }
  FScopedBootTiming::FScopedBootTiming(&local_68,"FPreLoadScreenManager::EarlyPlayFrameTick()");
  cVar4 = (**(code **)(*(longlong *)pIVar7 + 0x40))(pIVar7);
  while (cVar4 == '\0') {
    bVar5 = HasActivePreLoadScreenType(this,EarlyStartupScreen);
    if (((bVar5) || (bVar5 = HasActivePreLoadScreenType(this,CustomSplashScreen), bVar5)) ||
       (bVar5 = `FPreLoadScreenManager::EarlyPlayFrameTick'::__l3::<lambda_1>::operator()
                          (local_res18), bVar5)) {
      GameLogicFrameTick(this);
      EarlyPlayRenderFrameTick(this);
    }
    cVar4 = (**(code **)(*(longlong *)pIVar7 + 0x40))(pIVar7);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_68);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  StopPreLoadScreen(this);
  FScopedBootTiming::~FScopedBootTiming(&local_50);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// HandleEngineLoadingPlay @ 145acab80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::HandleEngineLoadingPlay(FPreLoadScreenManager *this)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPreLoadSlateWidgetRenderer *pFVar3;
  FDeprecateVector2DParameter FVar4;
  atomic<int> aVar5;
  SWindow *this_00;
  bool bVar6;
  char cVar7;
  atomic<int> aVar8;
  IPreLoadScreen *pIVar9;
  longlong lVar10;
  longlong *plVar11;
  SVirtualWindow *pSVar12;
  TSharedPtr<SWidget,1> *this_01;
  TSharedRef<SWidget,1> *pTVar13;
  FDeprecateSlateVector2D FVar14;
  FSlateApplication *pFVar15;
  FPreLoadScreenSlateSynchMechanism *pFVar16;
  atomic<int> *paVar17;
  FPreLoadScreenSlateSynchMechanism *this_02;
  undefined1 local_res18 [8];
  float local_res20;
  float fStackX_24;
  undefined8 local_a0;
  SWindow *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  SWindow *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TSharedRef<SWidget,1> local_50;
  
  bVar6 = HasActivePreLoadScreenType(this,EngineLoadingScreen);
  if (!bVar6) {
    local_res18[0] = 0;
    bVar6 = `FPreLoadScreenManager::HandleEngineLoadingPlay'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar6) {
      return;
    }
  }
  pIVar9 = GetActivePreLoadScreen(this);
  if (pIVar9 != (IPreLoadScreen *)0x0) {
    pTStack_88 = (this->MainWindow).WeakReferenceCount.ReferenceController;
    if (pTStack_88 == (TReferenceControllerBase<1> *)0x0) {
      lVar10 = *(longlong *)pIVar9;
      local_90 = (SWindow *)0x0;
    }
    else {
      aVar5 = pTStack_88->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          lVar10 = *(longlong *)pIVar9;
          local_90 = (SWindow *)0x0;
          pTStack_88 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_145acac44;
        }
        LOCK();
        aVar8 = pTStack_88->SharedReferenceCount;
        bVar6 = aVar5 == aVar8;
        if (bVar6) {
          pTStack_88->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar6);
      local_90 = (this->MainWindow).Object;
      lVar10 = *(longlong *)pIVar9;
      LOCK();
      pTStack_88->WeakReferenceCount = (atomic<int>)((int)pTStack_88->WeakReferenceCount + 1);
      UNLOCK();
    }
LAB_145acac44:
    pTVar2 = pTStack_88;
    this_00 = local_90;
    (**(code **)(lVar10 + 0x30))(pIVar9,&local_90);
    bVar6 = false;
    plVar11 = (longlong *)(**(code **)(*(longlong *)pIVar9 + 0x68))(pIVar9,local_70);
    if ((*plVar11 == 0) || ((this->VirtualRenderWindow).Object == (SVirtualWindow *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      pSVar12 = TSharedPtr<SVirtualWindow,1>::operator->(&this->VirtualRenderWindow);
      this_01 = (TSharedPtr<SWidget,1> *)(**(code **)(*(longlong *)pIVar9 + 0x68))(pIVar9,local_60);
      pTVar13 = TSharedPtr<SWidget,1>::ToSharedRef(this_01,&local_50);
      SWindow::SetContent((SWindow *)pSVar12,pTVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      if (this_00 != (SWindow *)0x0) {
        SWindow::GetClientSizeInScreen(this_00);
        pSVar12 = TSharedPtr<SVirtualWindow,1>::operator->(&this->VirtualRenderWindow);
        FVar14 = SWindow::GetClientSizeInScreen((SWindow *)pSVar12);
        if ((local_res20 != *(float *)FVar14) || (fStackX_24 != *(float *)((longlong)FVar14 + 4))) {
          local_a0 = CONCAT44(fStackX_24,local_res20);
          bVar6 = true;
          pSVar12 = TSharedPtr<SVirtualWindow,1>::operator->(&this->VirtualRenderWindow);
          FVar4._4_4_ = fStackX_24;
          FVar4._0_4_ = local_res20;
          SWindow::SetCachedSize((SWindow *)pSVar12,FVar4);
        }
      }
    }
    if ((this->bIsResponsibleForRendering == false) &&
       (cVar7 = (**(code **)(*(longlong *)pIVar9 + 0x20))(pIVar9), cVar7 != '\0')) {
      this->bIsResponsibleForRendering = true;
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&this->IsResponsibleForRenderingDelegate,true);
      if ((bVar6) &&
         ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0 &&
          (this_00 != (SWindow *)0x0)))) {
        pFVar15 = FSlateApplication::Get();
        plVar11 = *(longlong **)&pFVar15->field_0x60;
        pcVar1 = *(code **)(*plVar11 + 0x40);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_80 = this_00;
        local_78 = pTVar2;
        if ((this_00 == (SWindow *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(plVar11,&local_80,(longlong)(float)local_a0,(longlong)local_a0._4_4_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  this_02 = (FPreLoadScreenSlateSynchMechanism *)0x0;
  if (((this->WidgetRenderer).Object != (FPreLoadSlateWidgetRenderer *)0x0) &&
     (this->SyncMechanism == (FPreLoadScreenSlateSynchMechanism *)0x0)) {
    pFVar16 = ::operator_new(0x30);
    if (pFVar16 != (FPreLoadScreenSlateSynchMechanism *)0x0) {
      pTVar2 = (this->WidgetRenderer).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->WidgetRenderer).Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        paVar17 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar17 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar17 = (atomic<int>)((int)*paVar17 + 1);
        UNLOCK();
      }
      pFVar16->bIsRunningSlateMainLoop = (TAtomic<bool>)0x0;
      pFVar16->SlateLoadingThread = (FRunnableThread *)0x0;
      pFVar16->SlateRunnableTask = (FRunnable *)0x0;
      pFVar16->SleepEvent = (FEvent *)0x0;
      (pFVar16->WidgetRenderer).Object = pFVar3;
      (pFVar16->WidgetRenderer).SharedReferenceCount.ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar17 = (atomic<int>)((int)*paVar17 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      this_02 = pFVar16;
    }
    this->SyncMechanism = this_02;
    FPreLoadScreenSlateSynchMechanism::Initialize(this_02);
  }
  return;
}

// HandleStopPreLoadScreen @ 145acaea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::HandleStopPreLoadScreen(FPreLoadScreenManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  SVirtualWindow *this_00;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  SWindow *this_01;
  FScriptContainerElement *pFVar12;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = HasValidActivePreLoadScreen(this);
  this_01 = (SWindow *)0x0;
  if (bVar7) {
    uVar3 = this->ActivePreLoadScreenIndex;
    uVar8 = 0;
    if ((int)uVar3 < (this->PreLoadScreens).ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar12 = (this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    if ((*(longlong *)pFVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(**(longlong **)pFVar12 + 0x38))();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
  FVar6 = ActivePreloadScreen.WeakReferenceCount;
  ActivePreloadScreen.Object = (IPreLoadScreen *)0x0;
  ActivePreloadScreen.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
  this->ActivePreLoadScreenIndex = -1;
  if ((((this->MainWindow).Object == (SWindow *)0x0) ||
      (pTVar4 = (this->MainWindow).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
  goto LAB_145acb061;
  pSVar11 = (SWindow *)(this->MainWindow).WeakReferenceCount.ReferenceController;
  pSVar10 = pSVar11;
  if (pSVar11 == (SWindow *)0x0) {
LAB_145acb005:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar11 = pSVar10;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar10 = this_01;
      if (aVar2 == (atomic<int>)0x0) goto LAB_145acb005;
      LOCK();
      aVar9 = *(atomic<int> *)&pSVar11->_padding_;
      bVar7 = aVar2 == aVar9;
      if (bVar7) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar7);
    this_01 = (this->MainWindow).Object;
    pSVar10 = pSVar11;
    if (this_01 == (SWindow *)0x0) goto LAB_145acb005;
  }
  local_28.Object = SNullWidget::NullWidget.Object;
  local_28.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(this_01,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
LAB_145acb061:
  this_00 = (this->VirtualRenderWindow).Object;
  if (this_00 != (SVirtualWindow *)0x0) {
    local_18.Object = SNullWidget::NullWidget.Object;
    local_18.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SWindow::SetContent((SWindow *)this_00,&local_18);
  }
  return;
}

// HasActivePreLoadScreenType @ 145acb140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FPreLoadScreenManager::HasActivePreLoadScreenType
          (FPreLoadScreenManager *this,EPreLoadScreenTypes param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EPreLoadScreenTypes EVar5;
  uint uVar6;
  longlong *plVar7;
  
  bVar3 = HasValidActivePreLoadScreen(this);
  if (bVar3) {
    bVar3 = HasValidActivePreLoadScreen(this);
    plVar7 = (longlong *)0x0;
    if (bVar3) {
      uVar1 = this->ActivePreLoadScreenIndex;
      uVar6 = 0;
      if ((int)uVar1 < (this->PreLoadScreens).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      plVar7 = *(longlong **)
                ((this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    }
    EVar5 = (**(code **)(*plVar7 + 0x50))();
    if (EVar5 == param_1) {
      return true;
    }
  }
  return false;
}

// HasActivePreLoadScreenTypeForEarlyStartup @ 145acb200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FPreLoadScreenManager::HasActivePreLoadScreenTypeForEarlyStartup(FPreLoadScreenManager *this)

{
  bool bVar1;
  
  bVar1 = HasActivePreLoadScreenType(this,EarlyStartupScreen);
  if (!bVar1) {
    bVar1 = HasActivePreLoadScreenType(this,CustomSplashScreen);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// HasRegisteredPreLoadScreenType @ 145acb240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FPreLoadScreenManager::HasRegisteredPreLoadScreenType
          (FPreLoadScreenManager *this,EPreLoadScreenTypes param_1)

{
  int iVar1;
  EPreLoadScreenTypes EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PreLoadScreens).ArrayNum;
  bVar5 = false;
  bVar6 = false;
  pFVar3 = (this->PreLoadScreens).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PreLoadScreens).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<IPreLoadScreen,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      EVar2 = (**(code **)(**(longlong **)pFVar3 + 0x50))();
      bVar6 = bVar5;
      if (EVar2 == param_1) {
        bVar5 = true;
        bVar6 = true;
      }
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return bVar6;
}

// HasValidActivePreLoadScreen @ 145acb480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FPreLoadScreenManager::HasValidActivePreLoadScreen(FPreLoadScreenManager *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = this->ActivePreLoadScreenIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->PreLoadScreens).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (this->PreLoadScreens).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)((this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10)
        != 0) {
      return true;
    }
  }
  return false;
}

// Initialize @ 145acbeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::Initialize(FPreLoadScreenManager *this,FSlateRenderer *param_1)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPreLoadSlateWidgetRenderer *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  UEngine *pUVar11;
  void *pvVar12;
  SVirtualWindow *pSVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  atomic<int> aVar19;
  wchar_t *pwVar20;
  UClass *pUVar21;
  TSharedRef<SWindow,1> *pTVar22;
  FArguments *pFVar23;
  FDeprecateSlateVector2D FVar24;
  TSharedRef<FPreLoadSlateWidgetRenderer,1> *pTVar25;
  FSlateApplication *this_00;
  undefined8 *puVar26;
  ulong64 uVar27;
  ulonglong uVar28;
  SWindow *pSVar29;
  TReferenceControllerBase<1> *pTVar30;
  SWindow *pSVar31;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res18 [2];
  FName local_res20;
  undefined1 local_338 [8];
  FDelegateAllocation local_330;
  TSharedRef<SWindow,1> local_320;
  TSharedRef<SWindow,1> local_310;
  SVirtualWindow *local_300;
  FSharedReferencer<1> local_2f8;
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs> local_2f0;
  undefined8 local_2d8;
  FSharedReferencer<1> local_2d0;
  FMemScope local_2c8;
  FSlateRenderer *local_2c0;
  LARGE_INTEGER local_2b8;
  LARGE_INTEGER local_2b0;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  TSharedRef<SWindow,1> local_268;
  TSharedRef<FPreLoadSlateWidgetRenderer,1> local_258;
  FArguments local_248;
  
  pSVar29 = (SWindow *)0x0;
  local_res8 = 0;
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                          ,0x56,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (this->bInitialized != false) {
    return;
  }
  if ((PRIVATE_GIsRunningCommandlet == false) && (GUseThreadedRendering != false)) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  pwVar20 = FCommandLine::Get();
  bVar15 = FParse::Param(pwVar20,L"NoLoadingScreen");
  pvVar12 = ThreadLocalStoragePointer;
  if (!(bool)(bVar18 & !bVar15)) {
    return;
  }
  uVar28 = (ulonglong)_tls_index;
  this->bInitialized = true;
  if ((*(int *)(*(longlong *)((longlong)pvVar12 + uVar28 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar20 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar20,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  pUVar11 = GEngine;
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) goto LAB_145acc3f9;
  if (GEngine == (UEngine *)0x0) {
LAB_145acc0e0:
    bVar10 = false;
    bVar9 = false;
    bVar15 = true;
    pTVar22 = UGameEngine::CreateGameWindow(&local_268);
    pTVar30 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pUVar21 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar5 = (int)pUVar21->_padding_;
    if (((*(int *)(pUVar11->_padding_ + 0x38) < iVar5) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
         &pUVar21->_padding_)) ||
       ((pUVar11[1]._padding_ == 0 ||
        ((pUVar11[1]._padding_ == 0 || (*(int *)(pUVar11[1]._padding_ + 8) < 1))))))
    goto LAB_145acc0e0;
    local_310.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pUVar11[1]._padding_;
    pSVar31 = pSVar29;
    if ((SWindow *)local_310.SharedReferenceCount.ReferenceController != (SWindow *)0x0) {
      aVar3 = *(atomic<int> *)
               &((SWindow *)local_310.SharedReferenceCount.ReferenceController)->_padding_;
      do {
        if (aVar3 == (atomic<int>)0x0) goto LAB_145acc066;
        LOCK();
        aVar19 = *(atomic<int> *)
                  &((SWindow *)local_310.SharedReferenceCount.ReferenceController)->_padding_;
        bVar15 = aVar3 == aVar19;
        if (bVar15) {
          *(atomic<int> *)
           &((SWindow *)local_310.SharedReferenceCount.ReferenceController)->_padding_ =
               (atomic<int>)((int)aVar3 + 1);
          aVar19 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar19;
      } while (!bVar15);
      pSVar31 = (SWindow *)pUVar11[1]._padding_;
    }
    pSVar29 = (SWindow *)local_310.SharedReferenceCount.ReferenceController;
    if (pSVar31 == (SWindow *)0x0) {
LAB_145acc066:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      local_310.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar29;
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    bVar10 = true;
    bVar9 = true;
    bVar15 = false;
    pTVar30 = (TReferenceControllerBase<1> *)0x0;
    local_310.Object = pSVar31;
    if ((pSVar31 == (SWindow *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar22 = &local_310;
  }
  pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_320.Object = pTVar22->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_320.SharedReferenceCount.ReferenceController = pTVar6;
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_310.SharedReferenceCount.ReferenceController);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  pFVar23 = SVirtualWindow::FArguments::FArguments(&local_248);
  FVar24 = SWindow::GetClientSizeInScreen(local_320.Object);
  uVar4 = *(undefined8 *)FVar24;
  (pFVar23->_Size).field0_0x0._s_0.X = (double)(float)uVar4;
  (pFVar23->_Size).field0_0x0._s_0.Y = (double)(float)((ulonglong)uVar4 >> 0x20);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2c8,&local_res20,true);
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVirtualWindow,RequiredArgs::T0RequiredArgs>
            (&local_2f0,"SVirtualWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
             ,0x6e,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_2c8);
  FLLMScope::~FLLMScope(local_res18);
  pSVar13 = local_2f0._Widget.Object;
  if ((local_2f0._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2f0._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
  SVirtualWindow::Construct(local_2f0._Widget.Object,pFVar23);
  if ((local_2f0._Widget.Object == (SVirtualWindow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_2f0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar17 = (**(code **)((local_2f0._Widget.Object)->_padding_ + 0x228))(local_2f0._Widget.Object);
    bVar18 = 0;
    if (cVar17 != '\0') goto LAB_145acc281;
  }
  else {
LAB_145acc281:
    bVar18 = 0x20;
  }
  FVar14.ReferenceController = local_2f0._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_2f0._Widget.Object)->_padding_ =
       (byte)(local_2f0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2f0._Widget.Object)->_padding_ =
       (byte)(local_2f0._Widget.Object)->_padding_ | bVar18;
  pbVar1 = (byte *)((longlong)&(local_2f0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_2f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f0._Widget.Object = (SVirtualWindow *)0x0;
  if ((pSVar13 == (SVirtualWindow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_300 = pSVar13;
  local_2f8.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->VirtualRenderWindow != (TSharedPtr<SVirtualWindow,1> *)&local_300) {
    (this->VirtualRenderWindow).Object = pSVar13;
    local_300 = (SVirtualWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VirtualRenderWindow).SharedReferenceCount,&local_2f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  (this->MainWindow).Object = local_320.Object;
  if (pTVar6 != (this->MainWindow).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar30 = (this->MainWindow).WeakReferenceCount.ReferenceController;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar30->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar30->_padding_ + 8))(pTVar30,1);
      }
    }
    (this->MainWindow).WeakReferenceCount.ReferenceController = pTVar6;
  }
  local_2c0 = param_1;
  pTVar25 = MakeShared<FPreLoadSlateWidgetRenderer,1,TSharedRef<SWindow,1>_&,TSharedPtr<SVirtualWindow,1>_&,FSlateRenderer_*>
                      (&local_258,&local_320,&this->VirtualRenderWindow,&local_2c0);
  local_2d0.ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
  pFVar7 = pTVar25->Object;
  if (local_2d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->WidgetRenderer != (TSharedPtr<FPreLoadSlateWidgetRenderer,1> *)&local_2d8) {
    (this->WidgetRenderer).Object = pFVar7;
    local_2d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WidgetRenderer).SharedReferenceCount,&local_2d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_145acc3f9:
  QueryPerformanceCounter(&local_2b8);
  this->LastRenderTickTime =
       (double)local_2b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  QueryPerformanceCounter(&local_2b0);
  this->LastTickTime =
       (double)local_2b0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  this_00 = FSlateApplication::Get();
  local_338 = (undefined1  [8])0x0;
  local_330.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_330.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_290);
  local_278 = &local_330;
  puVar26 = UE::Core::Private::DelegateAllocate(0x20,&local_330);
  if (puVar26 != (undefined8 *)0x0) {
    *puVar26 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar27;
    *puVar26 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar26[3] = OnRequestExit;
  }
  if (local_290.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
  }
  FSlateApplication::SetExitRequestedHandler
            (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_2a8);
  if ((local_330.DelegateSize != 0) &&
     (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_330.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_330,0,0,0x10);
    local_330.DelegateSize = 0;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_330.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_338);
  return;
}

// IsUsingMainWindow @ 145acc9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FPreLoadScreenManager::IsUsingMainWindow(FPreLoadScreenManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->MainWindow).Object != (SWindow *)0x0) &&
      (pTVar1 = (this->MainWindow).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// OnRequestExit @ 145accc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FPreLoadScreenManager::OnRequestExit(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  byte bVar3;
  
  if (Instance.Ptr != (FPreLoadScreenManager *)0x0) {
    if ((PRIVATE_GIsRunningCommandlet) || (!GUseThreadedRendering)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"NoLoadingScreen");
    if ((bool)(bVar3 & !bVar1)) {
      RequestEngineExit(L"Window closed during preload");
      return;
    }
  }
  return;
}

// PassPreLoadScreenWindowBackToGame @ 145aced00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::PassPreLoadScreenWindowBackToGame(FPreLoadScreenManager *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UClass *pUVar3;
  UEngine *pUVar4;
  
  pUVar4 = GEngine;
  if ((this->MainWindow).Object == (SWindow *)0x0) {
    return;
  }
  pTVar2 = (this->MainWindow).WeakReferenceCount.ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar2->SharedReferenceCount < 1) {
    return;
  }
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_145aced63;
  }
  pUVar4 = (UEngine *)0x0;
LAB_145aced63:
  if (((((this->MainWindow).Object != (SWindow *)0x0) &&
       (pTVar2 = (this->MainWindow).WeakReferenceCount.ReferenceController,
       pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) &&
     (pUVar4 != (UEngine *)0x0)) {
    TWeakPtr<SWindow,1>::operator=((TWeakPtr<SWindow,1> *)&pUVar4[1]._padding_,&this->MainWindow);
    return;
  }
  if (2 < (byte)LogPreLoadScreenManager._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPreLoadScreenManager);
  }
  return;
}

// PlatformSpecificGameLogicFrameTick @ 145acef90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::PlatformSpecificGameLogicFrameTick(FPreLoadScreenManager *this)

{
  return;
}

// PlayFirstPreLoadScreen @ 145acefa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FPreLoadScreenManager::PlayFirstPreLoadScreen
          (FPreLoadScreenManager *this,EPreLoadScreenTypes param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EPreLoadScreenTypes EVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->PreLoadScreens).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->PreLoadScreens).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->PreLoadScreens).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      EVar5 = (**(code **)(**(longlong **)(pFVar1 + lVar8) + 0x50))();
      if (EVar5 == param_1) {
        PlayPreLoadScreenAtIndex(this,uVar7);
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->PreLoadScreens).ArrayNum);
  }
  return false;
}

// PlayPreLoadScreenAtIndex @ 145acf0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::PlayPreLoadScreenAtIndex(FPreLoadScreenManager *this,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  wchar_t *pwVar11;
  IPreLoadScreen *pIVar12;
  FScriptContainerElement *pFVar13;
  byte bVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                         ,0xb0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (GIsRequestingExit == false) {
    if ((PRIVATE_GIsRunningCommandlet == false) && (GUseThreadedRendering != false)) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    pwVar11 = FCommandLine::Get();
    bVar8 = FParse::Param(pwVar11,L"NoLoadingScreen");
    if ((bool)(bVar14 & !bVar8)) {
      bVar8 = HasValidActivePreLoadScreen(this);
      if (bVar8) {
        local_res18[0] = 0;
        bVar8 = `FPreLoadScreenManager::PlayPreLoadScreenAtIndex'::__l16::<lambda_1>::operator()
                          (local_res18);
        if (!bVar8) {
          return;
        }
      }
      this->ActivePreLoadScreenIndex = param_1;
      bVar8 = HasValidActivePreLoadScreen(this);
      if (bVar8) {
        EnterCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
        uVar3 = this->ActivePreLoadScreenIndex;
        uVar10 = 0;
        if ((int)uVar3 < (this->PreLoadScreens).ArrayNum) {
          uVar10 = ~uVar3 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (this->PreLoadScreens).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
        ActivePreloadScreen.Object = *(IPreLoadScreen **)pFVar13;
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
        FVar7.ReferenceController = ActivePreloadScreen.WeakReferenceCount.ReferenceController;
        if (pTVar4 != ActivePreloadScreen.WeakReferenceCount.ReferenceController) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
            UNLOCK();
          }
          FVar6.ReferenceController = ActivePreloadScreen.WeakReferenceCount.ReferenceController;
          FVar7.ReferenceController = pTVar4;
          if (ActivePreloadScreen.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(ActivePreloadScreen.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1)
              ;
            }
          }
        }
        ActivePreloadScreen.WeakReferenceCount.ReferenceController = FVar7.ReferenceController;
        LeaveCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
      }
      bVar8 = HasValidActivePreLoadScreen(this);
      if ((!bVar8) &&
         (bVar8 = `FPreLoadScreenManager::PlayPreLoadScreenAtIndex'::__l22::<lambda_2>::operator()
                            (local_res20), !bVar8)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
        FVar7 = ActivePreloadScreen.WeakReferenceCount;
        ActivePreloadScreen.Object = (IPreLoadScreen *)0x0;
        ActivePreloadScreen.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
        this->ActivePreLoadScreenIndex = -1;
        return;
      }
      pIVar12 = GetActivePreLoadScreen(this);
      cVar9 = (**(code **)(*(longlong *)pIVar12 + 0x50))(pIVar12);
      if (cVar9 == '\x01') {
        HandleEarlyStartupPlay(this);
        return;
      }
      cVar9 = (**(code **)(*(longlong *)pIVar12 + 0x50))(pIVar12);
      if (cVar9 == '\x02') {
        HandleEngineLoadingPlay(this);
        return;
      }
      cVar9 = (**(code **)(*(longlong *)pIVar12 + 0x50))(pIVar12);
      if (cVar9 == '\0') {
        HandleCustomSplashScreenPlay(this);
        return;
      }
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogPreLoadScreenManager);
    }
  }
  return;
}

// PlayPreLoadScreenWithTag @ 145acf350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FPreLoadScreenManager::PlayPreLoadScreenWithTag(FPreLoadScreenManager *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  uVar8 = 0;
  if (0 < (this->PreLoadScreens).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->PreLoadScreens).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->PreLoadScreens).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar2 = *(longlong **)(pFVar1 + lVar9);
      pFVar7 = (FName *)(**(code **)(*plVar2 + 0x58))(plVar2,local_res8);
      if (*pFVar7 == param_1) {
        PlayPreLoadScreenAtIndex(this,uVar8);
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < (this->PreLoadScreens).ArrayNum);
  }
  return false;
}

// RegisterPreLoadScreen @ 145acf450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::RegisterPreLoadScreen
          (FPreLoadScreenManager *this,TSharedPtr<IPreLoadScreen,1> *param_1)

{
  int *piVar1;
  TSharedPtr<IPreLoadScreen,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                       ,0x7f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (TSharedPtr<IPreLoadScreen,1> *)(this->PreLoadScreens).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->PreLoadScreens).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PreLoadScreens).ArrayNum;
  piVar1 = &(this->PreLoadScreens).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->PreLoadScreens).AllocatorInstance,piVar1);
  }
  (this->PreLoadScreens).ArrayNum = iVar6 + 1;
  pFVar7 = (this->PreLoadScreens).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(IPreLoadScreen **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// RenderTick_RenderThread @ 145acfe00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::RenderTick_RenderThread
          (FPreLoadScreenManager *this,FRHICommandListImmediate *param_1)

{
  double dVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  IPreLoadScreen *pIVar4;
  char cVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar9 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = this->LastRenderTickTime;
  this->LastRenderTickTime = dVar9;
  EnterCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
  FVar7 = ActivePreloadScreen.WeakReferenceCount;
  if (ActivePreloadScreen.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (ActivePreloadScreen.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_145acfe90;
      }
      LOCK();
      aVar6 = (FVar7.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar3 == aVar6;
      if (bVar8) {
        (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      pIVar4 = ActivePreloadScreen.Object;
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar8);
    if ((((ActivePreloadScreen.Object != (IPreLoadScreen *)0x0) &&
         (bRenderingEnabled != (atomic<bool>)0x0)) && ((this->MainWindow).Object != (SWindow *)0x0))
       && (((pTVar2 = (this->MainWindow).WeakReferenceCount.ReferenceController,
            pTVar2 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar2->SharedReferenceCount))
           && (((this->VirtualRenderWindow).Object != (SVirtualWindow *)0x0 &&
               (cVar5 = (**(code **)(*(longlong *)ActivePreloadScreen.Object + 0x40))
                                  (ActivePreloadScreen.Object), cVar5 == '\0')))))) {
      GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
      (**(code **)(*(longlong *)pIVar4 + 0x28))(pIVar4,param_1,(float)(dVar9 - dVar1));
      FRHICommandListImmediate::EndFrame(param_1);
      FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
    }
  }
LAB_145acfe90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000145acfeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
  return;
}

// SetEngineLoadingComplete @ 145ad0470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::SetEngineLoadingComplete(FPreLoadScreenManager *this,bool param_1)

{
  IPreLoadScreen *pIVar1;
  
  this->bIsEngineLoadingComplete = param_1;
  pIVar1 = GetActivePreLoadScreen(this);
  if (pIVar1 != (IPreLoadScreen *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ad049b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pIVar1 + 0x60))(pIVar1,param_1,*(code **)(*(longlong *)pIVar1 + 0x60))
    ;
    return;
  }
  return;
}

// StaticRenderTick_RenderThread @ 145ad07b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FPreLoadScreenManager::StaticRenderTick_RenderThread(FRHICommandListImmediate *param_1)

{
  double dVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  IPreLoadScreen *pIVar5;
  TUniquePtr<FPreLoadScreenManager,FPreLoadScreenManager::FPreLoadScreenManagerDelete> TVar6;
  bool bVar7;
  char cVar8;
  atomic<int> aVar9;
  FWeakReferencer<1> FVar10;
  double dVar11;
  FLLMScope local_res10 [2];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,RenderingThreadMemory,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,RenderingThreadMemory,true);
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                         ,0x181,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar6.Ptr = Instance.Ptr;
  if (Instance.Ptr == (FPreLoadScreenManager *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_889000033465138813>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                       ,0x183,"FPreLoadScreenManager::Get()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    QueryPerformanceCounter(&local_res18);
    dVar11 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    dVar1 = (TVar6.Ptr)->LastRenderTickTime;
    (TVar6.Ptr)->LastRenderTickTime = dVar11;
    EnterCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
    FVar10 = ActivePreloadScreen.WeakReferenceCount;
    if (ActivePreloadScreen.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (ActivePreloadScreen.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_145ad08d1;
        }
        LOCK();
        aVar9 = (FVar10.ReferenceController)->SharedReferenceCount;
        bVar7 = aVar4 == aVar9;
        if (bVar7) {
          (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar9 = aVar4;
        }
        pIVar5 = ActivePreloadScreen.Object;
        UNLOCK();
        aVar4 = aVar9;
      } while (!bVar7);
      if ((((ActivePreloadScreen.Object != (IPreLoadScreen *)0x0) &&
           (bRenderingEnabled != (atomic<bool>)0x0)) &&
          (((TVar6.Ptr)->MainWindow).Object != (SWindow *)0x0)) &&
         (((pTVar2 = ((TVar6.Ptr)->MainWindow).WeakReferenceCount.ReferenceController,
           pTVar2 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar2->SharedReferenceCount))
          && ((((TVar6.Ptr)->VirtualRenderWindow).Object != (SVirtualWindow *)0x0 &&
              (cVar8 = (**(code **)(*(longlong *)ActivePreloadScreen.Object + 0x40))
                                 (ActivePreloadScreen.Object), cVar8 == '\0')))))) {
        GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
        (**(code **)(*(longlong *)pIVar5 + 0x28))(pIVar5,param_1,(float)(dVar11 - dVar1));
        FRHICommandListImmediate::EndFrame(param_1);
        FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
      }
    }
LAB_145ad08d1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)&ActivePreloadScreenCriticalSection);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// StopPreLoadScreen @ 145ad09a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenManager::StopPreLoadScreen(FPreLoadScreenManager *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res10 [24];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                       ,0x253,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = HasValidActivePreLoadScreen(this);
  if (!bVar2) {
    return;
  }
  bVar2 = HasActivePreLoadScreenType(this,EarlyStartupScreen);
  if (!bVar2) {
    bVar2 = HasActivePreLoadScreenType(this,CustomSplashScreen);
    if (!bVar2) {
      bVar2 = `FPreLoadScreenManager::StopPreLoadScreen'::__l13::<lambda_1>::operator()(local_res10)
      ;
      if (!bVar2) goto LAB_145ad0a16;
    }
  }
  HandleStopPreLoadScreen(this);
LAB_145ad0a16:
  FlushRenderingCommands();
  return;
}

// UnRegisterPreLoadScreen @ 145ad0f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::UnRegisterPreLoadScreen
          (FPreLoadScreenManager *this,TSharedPtr<IPreLoadScreen,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IPreLoadScreen *pIVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  undefined1 local_res10 [8];
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                         ,0x86,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->Object == (IPreLoadScreen *)0x0) {
    return;
  }
  pFVar1 = (this->PreLoadScreens).AllocatorInstance.Data;
  iVar4 = (this->PreLoadScreens).ArrayNum;
  pFVar7 = pFVar1;
  while( true ) {
    if (pFVar7 == pFVar1 + (longlong)iVar4 * 0x10) {
      return;
    }
    if (*(IPreLoadScreen **)pFVar7 == param_1->Object) break;
    pFVar7 = pFVar7 + 0x10;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 4);
  if ((int)uVar6 < 0) {
    return;
  }
  if (iVar4 <= (int)uVar6) {
    return;
  }
  uVar10 = this->ActivePreLoadScreenIndex;
  if (uVar6 == uVar10) {
    `FPreLoadScreenManager::UnRegisterPreLoadScreen'::__l18::<lambda_1>::operator()(local_res10);
    return;
  }
  pTVar9 = pTVar8;
  if ((-1 < (int)uVar10) && ((int)uVar10 < iVar4)) {
    if (((int)uVar10 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->PreLoadScreens).AllocatorInstance.Data;
    pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar10 * 0x10 + 8);
    pTVar9 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar10 * 0x10);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pIVar5 = TSharedPtr<IPreLoadScreen,1>::operator->(param_1);
  (**(code **)(*(longlong *)pIVar5 + 0x48))(pIVar5);
  uVar10 = 0;
  if ((int)uVar6 < (this->PreLoadScreens).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<TSharedPtr<IPreLoadScreen,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->PreLoadScreens,uVar6);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->PreLoadScreens).AllocatorInstance,(this->PreLoadScreens).ArrayNum,
             &(this->PreLoadScreens).ArrayMax);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    pFVar1 = (this->PreLoadScreens).AllocatorInstance.Data;
    for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(this->PreLoadScreens).ArrayNum * 0x10;
        pFVar7 = pFVar7 + 0x10) {
      if (*(TReferenceControllerBase<1> **)pFVar7 == pTVar9) {
        iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 4);
        goto LAB_145ad1163;
      }
    }
    iVar4 = -1;
LAB_145ad1163:
    this->ActivePreLoadScreenIndex = iVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// WaitForEngineLoadingScreenToFinish @ 145ad1bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::WaitForEngineLoadingScreenToFinish(FPreLoadScreenManager *this)

{
  FPreLoadScreenSlateSynchMechanism *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IPreLoadScreen *pIVar4;
  FSlateApplication *pFVar5;
  TSharedPtr<SWidget,1> local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadScreenManager.cpp"
                       ,0x297,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = HasActivePreLoadScreenType(this,EngineLoadingScreen);
  if (bVar2) {
    pIVar4 = GetActivePreLoadScreen(this);
    if (pIVar4 != (IPreLoadScreen *)0x0) {
      (**(code **)(*(longlong *)pIVar4 + 0x68))(pIVar4,&local_18);
      if (local_18.Object != (SWidget *)0x0) {
        pFVar5 = FSlateApplication::Get();
        FSlateApplication::SetAllUserFocus(pFVar5,&local_18,SetDirectly);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      while( true ) {
        cVar3 = (**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4);
        if (cVar3 != '\0') break;
        GameLogicFrameTick(this);
      }
    }
  }
  if (this->SyncMechanism != (FPreLoadScreenSlateSynchMechanism *)0x0) {
    FPreLoadScreenSlateSynchMechanism::DestroySlateThread(this->SyncMechanism);
    this_00 = this->SyncMechanism;
    if (this_00 != (FPreLoadScreenSlateSynchMechanism *)0x0) {
      FPreLoadScreenSlateSynchMechanism::DestroySlateThread(this_00);
      if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
        pFVar5 = FSlateApplication::Get();
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar5->WindowBeingDestroyedEvent,this_00);
        pFVar5 = FSlateApplication::Get();
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar5->PreShutdownEvent,
                   this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this_00->WidgetRenderer).SharedReferenceCount.ReferenceController);
      ::operator_delete(this_00,0x30);
    }
    this->SyncMechanism = (FPreLoadScreenSlateSynchMechanism *)0x0;
  }
  HandleStopPreLoadScreen(this);
  return;
}

// operator() @ 1504d7150

bool __thiscall `FPreLoadScreenManager::CleanUpResources'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_889000033465138473>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138473>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7230

bool __thiscall
`FPreLoadScreenManager::EarlyPlayFrameTick'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465138742>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138742>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7270

bool __thiscall
`FPreLoadScreenManager::GameLogicFrameTick'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465138732>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138732>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d72b0

bool __thiscall
`FPreLoadScreenManager::HandleCustomSplashScreenPlay'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465138856>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138856>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d72f0

bool __thiscall
`FPreLoadScreenManager::HandleEarlyStartupPlay'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465138956>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138956>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7330

bool __thiscall
`FPreLoadScreenManager::HandleEngineLoadingPlay'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465138909>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138909>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d75b0

bool __thiscall
`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465138660>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138660>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7690

bool __thiscall
`FPreLoadScreenManager::PlayPreLoadScreenAtIndex'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465139013>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465139013>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d76d0

bool __thiscall
`FPreLoadScreenManager::UnRegisterPreLoadScreen'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_889000033465139057>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465139057>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7770

bool __thiscall
`FPreLoadScreenManager::StopPreLoadScreen'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_889000033465138601>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465138601>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7810

bool __thiscall
`FPreLoadScreenManager::PlayPreLoadScreenAtIndex'::__l22::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_889000033465139004>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_889000033465139004>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

