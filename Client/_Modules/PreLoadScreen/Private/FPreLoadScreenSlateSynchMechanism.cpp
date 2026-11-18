// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 7

// FPreLoadScreenSlateSynchMechanism @ 145abf490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FPreLoadScreenSlateSynchMechanism * __thiscall
FPreLoadScreenSlateSynchMechanism::FPreLoadScreenSlateSynchMechanism
          (FPreLoadScreenSlateSynchMechanism *this,
          TSharedPtr<FPreLoadSlateWidgetRenderer,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->bIsRunningSlateMainLoop = (TAtomic<bool>)0x0;
  this->SlateLoadingThread = (FRunnableThread *)0x0;
  this->SlateRunnableTask = (FRunnable *)0x0;
  this->SleepEvent = (FEvent *)0x0;
  (this->WidgetRenderer).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FPreLoadScreenSlateSynchMechanism @ 145abfb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenSlateSynchMechanism::~FPreLoadScreenSlateSynchMechanism
          (FPreLoadScreenSlateSynchMechanism *this)

{
  FSlateApplication *pFVar1;
  
  DestroySlateThread(this);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar1 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar1->WindowBeingDestroyedEvent,this);
    pFVar1 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->PreShutdownEvent,this)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  return;
}

// DestroySlateThread @ 145ac75b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenSlateSynchMechanism::DestroySlateThread(FPreLoadScreenSlateSynchMechanism *this)

{
  FRunnableThread *pFVar1;
  FRunnable *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                       ,0xa3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bIsRunningSlateMainLoop != (TAtomic<bool>)0x0) {
    if (this->SlateLoadingThread == (FRunnableThread *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateLoadingThread != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                         ,0xa7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    this->bIsRunningSlateMainLoop = (TAtomic<bool>)0x0;
    UNLOCK();
    (**(code **)(this->SleepEvent->_padding_ + 0x10))();
    (**(code **)(this->SlateLoadingThread->_padding_ + 0x20))();
    FGenericPlatformProcess::ReturnSynchEventToPool(this->SleepEvent);
    pFVar1 = this->SlateLoadingThread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    pFVar2 = this->SlateRunnableTask;
    if (pFVar2 != (FRunnable *)0x0) {
      (**(code **)((longlong)*pFVar2 + 0x28))(pFVar2,1);
    }
    this->SlateLoadingThread = (FRunnableThread *)0x0;
    this->SlateRunnableTask = (FRunnable *)0x0;
  }
  return;
}

// HandleWindowBeingDestroyed @ 145acb0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenSlateSynchMechanism::HandleWindowBeingDestroyed
          (FPreLoadScreenSlateSynchMechanism *this,SWindow *param_1)

{
  FPreLoadSlateWidgetRenderer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                       ,0xb6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->WidgetRenderer).Object;
  if ((pFVar1 != (FPreLoadSlateWidgetRenderer *)0x0) && (pFVar1->MainWindow == param_1)) {
    DestroySlateThread(this);
  }
  return;
}

// Initialize @ 145acc5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenSlateSynchMechanism::Initialize(FPreLoadScreenSlateSynchMechanism *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  void *pvVar4;
  FEvent *pFVar5;
  FRunnable *pFVar6;
  FRunnableThread *pFVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [16];
  TStringBuilderBase<wchar_t> local_78;
  FRunnableThread local_58;
  SWindow *local_18;
  
  local_18 = (SWindow *)(__security_cookie.value ^ (ulonglong)auStackY_b8);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) ||
     (this->bIsRunningSlateMainLoop != (TAtomic<bool>)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8163699829931769715>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                       ,0x8d,"FSlateApplication::IsInitialized() && bIsRunningSlateMainLoop == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FPreLoadScreenSlateSynchMechanism>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar3->PreShutdownEvent,(FPreLoadScreenSlateSynchMechanism *)local_88,
               (pmf_bfba7e28)this);
    pFVar3 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>::
    AddRaw<FPreLoadScreenSlateSynchMechanism>
              ((TMulticastDelegateRegistration<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
                *)&pFVar3->WindowBeingDestroyedEvent,
               (FPreLoadScreenSlateSynchMechanism *)(local_88 + 8),(pmf_8716bba2)this);
    LOCK();
    this->bIsRunningSlateMainLoop = (TAtomic<bool>)0x1;
    UNLOCK();
    if (this->SlateLoadingThread != (FRunnableThread *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateLoadingThread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                         ,0x94,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78.Base = (wchar_t *)&local_58;
    local_78.bIsDynamic = false;
    local_78.bIsExternal = false;
    local_78.CurPos = (wchar_t *)&local_58;
    local_78.End = (wchar_t *)&stack0xffffffffffffffe8;
    pvVar4 = FGenericPlatformString::Memcpy(&local_58,L"SlateLoadingThread",0x24);
    local_78.CurPos = (wchar_t *)((longlong)pvVar4 + 0x24);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%d");
    LOCK();
    LoadingThreadInstanceCounter = (TAtomic<int>)((int)LoadingThreadInstanceCounter + 1);
    UNLOCK();
    pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    this->SleepEvent = pFVar5;
    pFVar6 = ::operator_new(0x10);
    if (pFVar6 != (FRunnable *)0x0) {
      pFVar6[1] = (FRunnable)this;
      *pFVar6 = (FRunnable)&___7FPreLoadScreenSlateThreadTask__6B_;
    }
    this->SlateRunnableTask = pFVar6;
    pFVar7 = FRunnableThread::Create(pFVar6,local_78.Base,0,TPri_Normal,0xffffffffffffffff,None);
    this->SlateLoadingThread = pFVar7;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
  }
  return;
}

// IsSlateMainLoopRunning_AnyThread @ 145acc9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FPreLoadScreenSlateSynchMechanism::IsSlateMainLoopRunning_AnyThread
          (FPreLoadScreenSlateSynchMechanism *this)

{
  if ((this->bIsRunningSlateMainLoop != (TAtomic<bool>)0x0) && (!GIsRequestingExit)) {
    return true;
  }
  return false;
}

// RunMainLoop_SlateThread @ 145ad0020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(FPreLoadScreenSlateSynchMechanism *this)

{
  FEvent *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  FEvent *pFVar10;
  ulonglong uVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_158 [40];
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  code *local_118 [2];
  undefined **local_108;
  FPreLoadScreenSlateSynchMechanism *pFStack_100;
  FEvent *local_f8;
  undefined ***local_f0;
  undefined1 local_e8 [16];
  undefined **local_d8;
  FPreLoadScreenSlateSynchMechanism *pFStack_d0;
  FEvent *local_c8;
  undefined ***local_c0;
  byte local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_158;
  QueryPerformanceCounter(&local_130);
  dVar6 = __real_4170000000000000;
  dVar17 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  pFVar10 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  dVar7 = __real_3f91111111111111;
  dVar5 = __real_416312d000000000;
  dVar4 = __real_3fe0000000000000;
  while( true ) {
    if ((this->bIsRunningSlateMainLoop == (TAtomic<bool>)0x0) || (GIsRequestingExit != false)) {
      FGenericPlatformProcess::ReturnSynchEventToPool(pFVar10);
      return;
    }
    uVar9 = GetCurrentThreadId();
    LOCK();
    bVar15 = uVar9 != GSlateLoadingThreadId;
    if (bVar15) {
      uVar9 = GSlateLoadingThreadId;
    }
    GSlateLoadingThreadId = uVar9;
    UNLOCK();
    if ((bVar15) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("PreviousThreadId == CurrentThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                            ,0xd1,L""), bVar15)) break;
    QueryPerformanceCounter(&local_128);
    dVar16 = (double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
    dVar3 = dVar16 - dVar17;
    if (0.0 < dVar7 - dVar3) {
      pFVar1 = this->SleepEvent;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (dVar7 - dVar3) * dVar5 + dVar4;
      auVar18 = roundpd(auVar18,auVar18,1);
      if (((longlong)auVar18._0_8_ < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("WaitTime.GetTicks() >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                              ,0x58,L""), bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = (longlong)auVar18._0_8_ / 10000;
      uVar11 = 0xffffffff;
      if ((longlong)uVar14 < 0xffffffff) {
        uVar11 = uVar14;
      }
      uVar14 = 0;
      if (0 < (longlong)uVar11) {
        uVar14 = uVar11 & 0xffffffff;
      }
      (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,uVar14,0);
      QueryPerformanceCounter(&local_120);
      dVar16 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
      dVar3 = dVar16 - dVar17;
    }
    dVar17 = dVar16;
    if (((((this->bIsRunningSlateMainLoop != (TAtomic<bool>)0x0) && (GIsRequestingExit == false)) &&
         (GDynamicRHI != (FDynamicRHI *)0x0)) &&
        ((cVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x360))(), cVar8 == '\0' &&
         (this->bIsRunningSlateMainLoop != (TAtomic<bool>)0x0)))) &&
       ((GIsRequestingExit == false &&
        (FPreLoadScreenManager::bRenderingEnabled != (atomic<bool>)0x0)))) {
      if (((this->WidgetRenderer).Object == (FPreLoadSlateWidgetRenderer *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPreLoadSlateWidgetRenderer::DrawWindow((this->WidgetRenderer).Object,(float)dVar3);
      local_f0 = (undefined ***)0x0;
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::`26'::<lambda_1>,1,0>
                   ::_vftable_;
      pFStack_100 = this;
      local_f8 = pFVar10;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread_::__l26::TSTR_PreLoadScreenRenderTick242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_e8._0_8_ = local_118[0];
        local_c0 = local_f0;
        local_f0 = (undefined ***)0x0;
        local_d8 = local_108;
        pFStack_d0 = pFStack_100;
        local_c8 = local_f8;
        local_118[0] = (code *)0x0;
        local_b8 = 2;
        pFVar12 = (FRenderCommandTag *)
                  TRenderCommandTag<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::TSTR_PreLoadScreenRenderTick242>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_e8,pFVar12);
        uVar14 = (ulonglong)local_b8;
        if ((2 < uVar14) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_e8._0_8_ != (code *)0x0) {
            pppuVar13 = (undefined ***)(local_e8 + 0x10);
            if (local_c0 != (undefined ***)0x0) {
              pppuVar13 = local_c0;
            }
            (*(code *)(*pppuVar13)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_e8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        pppuVar13 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar13 = local_f0;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10,0xffffffff);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

