// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StudioTelemetry
// Functions: 21

// FStudioTelemetry @ 14ea19d60

FStudioTelemetry * __thiscall FStudioTelemetry::FStudioTelemetry(FStudioTelemetry *this)

{
  *(undefined ***)this = &___7FStudioTelemetry__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Config).bSendTelemetry = true;
  (this->Config).bSendUserData = false;
  (this->Config).bSendHardwareData = false;
  (this->Config).bSendOSData = false;
  (this->AnalyticsProvider).Object = (FAnalyticsProviderBroadcast *)0x0;
  (this->AnalyticsProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalyticsTracer).Object = (IAnalyticsTracer *)0x0;
  (this->AnalyticsTracer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->RecordEventCallback = 0;
  *(undefined8 *)&(this->RecordEventCallback).field_0x28 = 0;
  (this->SessionGUID).A = 0;
  (this->SessionGUID).B = 0;
  (this->SessionGUID).C = 0;
  (this->SessionGUID).D = 0;
  *(undefined8 *)&this->OnStartSession = 0;
  *(undefined8 *)&(this->OnStartSession).field_0x8 = 0;
  *(undefined8 *)&(this->OnStartSession).field_0x10 = 0;
  *(undefined8 *)&this->OnEndSession = 0;
  *(undefined8 *)&(this->OnEndSession).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndSession).field_0x10 = 0;
  *(undefined8 *)&this->OnRecordEvent = 0;
  *(undefined8 *)&(this->OnRecordEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRecordEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnStartSession).field_0x18 = 2;
  *(undefined8 *)&(this->OnEndSession).field_0x18 = 2;
  *(undefined8 *)&(this->OnRecordEvent).field_0x18 = 2;
  return this;
}

// ~FStudioTelemetry @ 14ea19f80

void __thiscall FStudioTelemetry::~FStudioTelemetry(FStudioTelemetry *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRecordEvent).field_0x8,*(int *)&(this->OnRecordEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnRecordEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRecordEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndSession).field_0x8,*(int *)&(this->OnEndSession).field_0x10);
  pvVar1 = *(void **)&(this->OnEndSession).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndSession);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStartSession).field_0x8,*(int *)&(this->OnStartSession).field_0x10);
  pvVar1 = *(void **)&(this->OnStartSession).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStartSession);
  if (*(longlong *)&this->RecordEventCallback != 0) {
    plVar2 = *(longlong **)&(this->RecordEventCallback).field_0x28;
    plVar3 = (longlong *)&(this->RecordEventCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsTracer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsProvider).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined ***)this = IModuleInterface::vftable;
  return;
}

// EndSession @ 14ea1ac90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStudioTelemetry::EndSession(FStudioTelemetry *this)

{
  TSharedPtr<FAnalyticsProviderBroadcast,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FAnalyticsProviderBroadcast *pFVar2;
  IAnalyticsTracer *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  FAnalyticsEventAttribute *this_00;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  FString local_28;
  FString local_18;
  
  pTVar1 = &this->AnalyticsProvider;
  pFVar2 = pTVar1->Object;
  if ((pFVar2 != (FAnalyticsProviderBroadcast *)0x0) &&
     (0 < *(int *)&(pFVar2->Providers).field_0x8 - *(int *)&(pFVar2->Providers).field_0x34)) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnEndSession);
    pIVar3 = (this->AnalyticsTracer).Object;
    if (pIVar3 != (IAnalyticsTracer *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->AnalyticsTracer != (TSharedPtr<IAnalyticsTracer,1> *)&local_48) {
        (this->AnalyticsTracer).Object = (IAnalyticsTracer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AnalyticsTracer).SharedReferenceCount,&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
    }
    if (pTVar1->Object != (FAnalyticsProviderBroadcast *)0x0) {
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_58,(int *)((longlong)&local_50 + 4));
      local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
      this_00 = (FAnalyticsEventAttribute *)(local_58.Data + (longlong)iVar7 * 0x30);
      pFVar8 = ::FString::FString(&local_18,L"SchemaVersion");
      pFVar9 = FAnalyticsEventAttribute::CheckName(this_00,pFVar8);
      (this_00->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->AttrName).Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->AttrName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this_00->AttrName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&this_00->AttrValueString,L"%d");
      this_00->AttrValueNumber = 0.0;
      this_00->AttrValueBool = false;
      this_00->AttrType = JsonFragment;
      pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      if (pTVar1->Object == (FAnalyticsProviderBroadcast *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar2 = pTVar1->Object;
      pcVar5 = *(code **)(pFVar2->_padding_ + 0x80);
      ::FString::FString(&local_28,L"StudioTelemetry.SessionEnd");
      (*pcVar5)(pFVar2,&local_28,&local_58);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (pTVar1->Object == (FAnalyticsProviderBroadcast *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)(pTVar1->Object->_padding_ + 0x20))();
      if (pTVar1->Object == (FAnalyticsProviderBroadcast *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)(pTVar1->Object->_padding_ + 8))();
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FAnalyticsProviderBroadcast,1> *)&local_38) {
        pTVar1->Object = (FAnalyticsProviderBroadcast *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AnalyticsProvider).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_58.Data,(int)local_50);
      if ((FAnalyticsEventAttribute *)local_58.Data != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
    if (4 < (byte)LogStudioTelemetry._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStudioTelemetry);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// EndSpan @ 14ea1af50

bool __thiscall
FStudioTelemetry::EndSpan
          (FStudioTelemetry *this,TSharedPtr<IAnalyticsSpan,1> *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  IAnalyticsTracer *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  IAnalyticsSpan *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->AnalyticsTracer).Object;
  if (pIVar1 == (IAnalyticsTracer *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(pIVar1,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar3;
}

// EndSpan @ 14ea1afc0

bool __thiscall
FStudioTelemetry::EndSpan
          (FStudioTelemetry *this,FName param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  IAnalyticsTracer *pIVar1;
  IAnalyticsTracer IVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  pIVar1 = (this->AnalyticsTracer).Object;
  if (pIVar1 != (IAnalyticsTracer *)0x0) {
    IVar2 = *pIVar1;
    uVar3 = (**(code **)((longlong)IVar2 + 0x40))(pIVar1,local_18,param_1);
    bVar4 = (bool)(**(code **)((longlong)IVar2 + 0x28))(pIVar1,uVar3,param_2);
    return bVar4;
  }
  return false;
}

// FlushEvents @ 14ea1b3d0

void __thiscall FStudioTelemetry::FlushEvents(FStudioTelemetry *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAnalyticsProviderBroadcast *pFVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->AnalyticsProvider).Object;
    if (pFVar1 != (FAnalyticsProviderBroadcast *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x20))();
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea1b40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Get @ 14ea1b420

FStudioTelemetry * __cdecl FStudioTelemetry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FStudioTelemetry(&StudioTelemetryInstance);
      atexit(`FStudioTelemetry::Get'::__l2::
             _dynamic_atexit_destructor_for__StudioTelemetryInstance__);
      _Init_thread_footer(&::_TSS0);
      return &StudioTelemetryInstance;
    }
  }
  return &StudioTelemetryInstance;
}

// GetProvider @ 14ea1b810

TWeakPtr<IAnalyticsProvider,1> * __thiscall
FStudioTelemetry::GetProvider
          (FStudioTelemetry *this,TWeakPtr<IAnalyticsProvider,1> *__return_storage_ptr__,
          FString *param_1)

{
  FAnalyticsProviderBroadcast *pFVar1;
  TSharedPtr<IAnalyticsProvider,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar1 = (this->AnalyticsProvider).Object;
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if (pFVar1 != (FAnalyticsProviderBroadcast *)0x0) {
    pTVar2 = TMapBase<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
             ::Find((TMapBase<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
                     *)&pFVar1->Providers,param_1);
    pTVar4 = pTVar3;
    if (pTVar2 != (TSharedPtr<IAnalyticsProvider,1> *)0x0) {
      pTVar4 = (pTVar2->SharedReferenceCount).ReferenceController;
      pTVar3 = (TReferenceControllerBase<1> *)pTVar2->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    __return_storage_ptr__->Object = (IAnalyticsProvider *)pTVar3;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IAnalyticsProvider *)0x0;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetProvider @ 14ea1b8d0

TWeakPtr<IAnalyticsProvider,1> * __thiscall
FStudioTelemetry::GetProvider
          (FStudioTelemetry *this,TWeakPtr<IAnalyticsProvider,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IAnalyticsProvider *)(this->AnalyticsProvider).Object;
  pTVar1 = (this->AnalyticsProvider).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSessionSpan @ 14ea1b930

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FStudioTelemetry::GetSessionSpan
          (FStudioTelemetry *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__)

{
  IAnalyticsTracer *pIVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->AnalyticsTracer).Object;
  if (pIVar1 != (IAnalyticsTracer *)0x0) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,local_18);
    __return_storage_ptr__->Object = (IAnalyticsSpan *)*puVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[1];
    puVar2[1] = 0;
    *puVar2 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IAnalyticsSpan *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSpan @ 14ea1b9b0

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FStudioTelemetry::GetSpan
          (FStudioTelemetry *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__,FName param_1
          )

{
  IAnalyticsTracer *pIVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->AnalyticsTracer).Object;
  if (pIVar1 != (IAnalyticsTracer *)0x0) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_18);
    __return_storage_ptr__->Object = (IAnalyticsSpan *)*puVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[1];
    puVar2[1] = 0;
    *puVar2 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IAnalyticsSpan *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTracer @ 14ea1ba30

TWeakPtr<IAnalyticsTracer,1> * __thiscall
FStudioTelemetry::GetTracer
          (FStudioTelemetry *this,TWeakPtr<IAnalyticsTracer,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->AnalyticsTracer).Object;
  pTVar1 = (this->AnalyticsTracer).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsSessionRunning @ 14ea1bb40

bool __thiscall FStudioTelemetry::IsSessionRunning(FStudioTelemetry *this)

{
  FAnalyticsProviderBroadcast *pFVar1;
  
  pFVar1 = (this->AnalyticsProvider).Object;
  if ((pFVar1 != (FAnalyticsProviderBroadcast *)0x0) &&
     (0 < *(int *)&(pFVar1->Providers).field_0x8 - *(int *)&(pFVar1->Providers).field_0x34)) {
    return true;
  }
  return false;
}

// LoadConfiguration @ 14ea1bb60

void __thiscall FStudioTelemetry::LoadConfiguration(FStudioTelemetry *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  ::FString::FString(&local_38,L"StudioTelemetry.Config");
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetSectionNames(GConfig,&GEngineIni,&local_48);
  if (bVar3) {
    iVar2 = local_48.ArrayNum;
    uVar5 = (ulonglong)local_48.ArrayNum;
    pFVar7 = local_48.AllocatorInstance.Data + uVar5 * 0x10;
    this_00.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00.Data == pFVar7) break;
      iVar4 = local_38.Data.ArrayNum + -1;
      FVar1.Data = local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
        FVar1.Data = (FScriptContainerElement *)L"";
      }
      iVar4 = ::FString::Find((FString *)this_00.Data,(wchar_t *)FVar1.Data,iVar4,IgnoreCase,
                              FromStart,-1);
      if (iVar4 != -1) {
        if (*(int *)(this_00.Data + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)this_00.Data;
        }
        FConfigCacheIni::GetBool
                  (GConfig,pwVar6,L"SendTelemetry=",&(this->Config).bSendTelemetry,&GEngineIni);
        if (*(int *)(this_00.Data + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)this_00.Data;
        }
        FConfigCacheIni::GetBool
                  (GConfig,pwVar6,L"SendUserData=",&(this->Config).bSendUserData,&GEngineIni);
        if (*(int *)(this_00.Data + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)this_00.Data;
        }
        FConfigCacheIni::GetBool
                  (GConfig,pwVar6,L"SendHardwareData=",&(this->Config).bSendHardwareData,&GEngineIni
                  );
        if (*(int *)(this_00.Data + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)this_00.Data;
        }
        FConfigCacheIni::GetBool
                  (GConfig,pwVar6,L"SendOSData=",&(this->Config).bSendOSData,&GEngineIni);
      }
      uVar5 = local_48._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 0x10;
    }
  }
  pwVar6 = FCommandLine::Get();
  FParse::Bool(pwVar6,L"ST_SendTelemetry=",&(this->Config).bSendTelemetry);
  pwVar6 = FCommandLine::Get();
  FParse::Bool(pwVar6,L"ST_SendUserData=",&(this->Config).bSendUserData);
  pwVar6 = FCommandLine::Get();
  FParse::Bool(pwVar6,L"ST_SendHardwareData=",&(this->Config).bSendHardwareData);
  pwVar6 = FCommandLine::Get();
  FParse::Bool(pwVar6,L"ST_SendOSData=",&(this->Config).bSendOSData);
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// RecordEvent @ 14ea1bff0

void __thiscall
FStudioTelemetry::RecordEvent
          (FStudioTelemetry *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAnalyticsProviderBroadcast *pFVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->AnalyticsProvider).Object;
    if (pFVar1 != (FAnalyticsProviderBroadcast *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,param_1,param_2);
      TMulticastDelegate<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnRecordEvent,param_1,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea1c060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RecordEvent @ 14ea1c080

void __thiscall
FStudioTelemetry::RecordEvent
          (FStudioTelemetry *this,FName param_1,FString *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FAnalyticsProviderBroadcast *pFVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->AnalyticsProvider).Object;
    if (pFVar1 != (FAnalyticsProviderBroadcast *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,param_2,param_3);
      TMulticastDelegate<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnRecordEvent,param_2,param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea1c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RecordEventToProvider @ 14ea1c110

void __thiscall
FStudioTelemetry::RecordEventToProvider
          (FStudioTelemetry *this,FString *param_1,FString *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FAnalyticsProviderBroadcast *pFVar3;
  atomic<int> aVar4;
  TSharedPtr<IAnalyticsProvider,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = (this->AnalyticsProvider).Object;
  if (pFVar3 == (FAnalyticsProviderBroadcast *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = TMapBase<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
             ::Find((TMapBase<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
                     *)&pFVar3->Providers,param_1);
    if (pTVar5 == (TSharedPtr<IAnalyticsProvider,1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar7 = pTVar9;
      pTVar8 = pTVar9;
    }
    else {
      pTVar8 = (pTVar5->SharedReferenceCount).ReferenceController;
      pTVar7 = (TReferenceControllerBase<1> *)pTVar5->Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  pTVar6 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar6 = pTVar9;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      pTVar6 = pTVar8;
      aVar2 = aVar4;
    } while (!bVar10);
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = pTVar9;
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      (**(code **)(pTVar7->_padding_ + 0x80))(pTVar7,param_2,param_3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
                    /* WARNING: Could not recover jumptable at 0x00014ea1c23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetRecordEventCallback @ 14ea1c740

void __thiscall
FStudioTelemetry::SetRecordEventCallback
          (FStudioTelemetry *this,
          TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
          *param_1)

{
  FAnalyticsProviderBroadcast *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 local_38 [40];
  longlong *local_10;
  
  TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
  ::operator=(&this->RecordEventCallback,param_1);
  pFVar1 = (this->AnalyticsProvider).Object;
  if (pFVar1 != (FAnalyticsProviderBroadcast *)0x0) {
    local_38._0_8_ = *(undefined8 *)&this->RecordEventCallback;
    local_10 = (longlong *)0x0;
    if (local_38._0_8_ != 0) {
      puVar2 = *(undefined8 **)&(this->RecordEventCallback).field_0x28;
      puVar3 = (undefined8 *)&(this->RecordEventCallback).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)(puVar3,local_38 + 0x10);
    }
    TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
    ::operator=(&pFVar1->RecordEventCallback,
                (TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
                 *)local_38);
    if (local_38._0_8_ != 0) {
      plVar4 = (longlong *)(local_38 + 0x10);
      if (local_10 != (longlong *)0x0) {
        plVar4 = local_10;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// StartSession @ 14ea1cce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FStudioTelemetry::StartSession(FStudioTelemetry *this)

{
  TSharedPtr<FAnalyticsProviderBroadcast,1> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TSharedPtr<IAnalyticsTracer,1> *this_01;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  EBuildConfiguration EVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  FString *pFVar15;
  FDateTime FVar16;
  FDateTime *pFVar17;
  FPlatformMemoryStats *pFVar18;
  FAnalyticsProviderBroadcast *pFVar19;
  FName *pFVar20;
  FModuleManager *this_02;
  IModuleInterface *pIVar21;
  undefined8 *puVar22;
  IAnalyticsTracer *pIVar23;
  pmf_6ef35745 pVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  ForAnyElementType FVar27;
  FSharedReferencer<1> FVar28;
  FAnalyticsEventAttribute *pFVar29;
  longlong lVar30;
  FScriptContainerElement *local_res8;
  FString *local_res10;
  double local_res18;
  wchar_t *local_res20;
  ForAnyElementType local_5e8;
  undefined8 local_5e0;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_5a8;
  FString local_598;
  FString local_588;
  ForAnyElementType local_578;
  undefined8 local_570;
  FGuid local_568;
  FString local_558;
  FAnalyticsEventAttribute *local_548;
  undefined8 local_540;
  FString local_538;
  TSharedPtr<FAnalyticsProviderBroadcast,1> local_528;
  FString local_518;
  FGuid local_508;
  FString local_4f8;
  FString local_4e8;
  ulong64 local_4d8;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FGuid local_430;
  FAnalyticsProviderBroadcast *local_420;
  TReferenceControllerBase<1> *local_418;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  undefined1 local_3c8 [40];
  longlong *local_3a0;
  FDateTime local_398;
  FName local_390;
  undefined1 local_388 [24];
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  undefined1 local_2d0 [8];
  TReferenceControllerBase<1> *local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FPlatformMemoryStats local_d8;
  
  pFVar19 = (this->AnalyticsProvider).Object;
  this_00 = &this->AnalyticsProvider;
  if ((pFVar19 != (FAnalyticsProviderBroadcast *)0x0) &&
     (0 < *(int *)&(pFVar19->Providers).field_0x8 - *(int *)&(pFVar19->Providers).field_0x34)) {
    return true;
  }
  LoadConfiguration(this);
  if ((this->Config).bSendTelemetry == false) {
    return false;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar12 = ::operator_new(0xd0);
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      local_528.Object = ___xmm_00000000000000000000000000000010;
      pFVar19 = (FAnalyticsProviderBroadcast *)&DAT_00000010;
      FVar28.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAnalyticsProviderBroadcast___00_SharedPointerInternals__6B_
      ;
      FAnalyticsProviderBroadcast::FAnalyticsProviderBroadcast
                ((FAnalyticsProviderBroadcast *)(pTVar12 + 1));
      pFVar19 = (FAnalyticsProviderBroadcast *)(pTVar12 + 1);
      if (pFVar19 == (FAnalyticsProviderBroadcast *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      FVar28.ReferenceController = pTVar12;
      local_528.Object = pFVar19;
    }
    local_528.SharedReferenceCount.ReferenceController = FVar28.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if (this_00 != &local_528) {
      this_00->Object = pFVar19;
      local_528.Object = (FAnalyticsProviderBroadcast *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AnalyticsProvider).SharedReferenceCount,&local_528.SharedReferenceCount);
      FVar28.ReferenceController = local_528.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar28.ReferenceController);
    if (this_00->Object == (FAnalyticsProviderBroadcast *)0x0) {
      bVar5 = false;
    }
    else {
      local_5e8.Data = (FScriptContainerElement *)0x0;
      local_5e0 = 0;
      pwVar13 = FWindowsPlatformProcess::UserName(false);
      ::FString::FString(&local_440,pwVar13);
      ::FString::FString(&local_450,GInternalProjectName);
      pwVar13 = FWindowsPlatformProcess::ComputerName();
      ::FString::FString(&local_400,pwVar13);
      local_558.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_558.Data.ArrayNum = 0;
      local_558.Data.ArrayMax = 0;
      FConfigCacheIni::GetString
                (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectID",&local_558,
                 &GGameIni);
      local_568.A = 0;
      local_568.B = 0;
      local_568.C = 0;
      local_568.D = 0;
      if (1 < local_558.Data.ArrayNum) {
        local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5a8.ArrayNum = 0;
        local_5a8.ArrayMax = 0;
        iVar8 = ::FString::ParseIntoArray(&local_558,&local_5a8,L"=",true);
        if (iVar8 == 5) {
          if (local_5a8.ArrayNum < 5) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(local_5a8.AllocatorInstance.Data + 0x48) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)(local_5a8.AllocatorInstance.Data + 0x40);
          }
          uVar9 = _wtoi(pwVar13);
          if (local_5a8.ArrayNum < 4) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(local_5a8.AllocatorInstance.Data + 0x38) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)(local_5a8.AllocatorInstance.Data + 0x30);
          }
          uVar10 = _wtoi(pwVar13);
          if (local_5a8.ArrayNum < 3) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(local_5a8.AllocatorInstance.Data + 0x28) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)(local_5a8.AllocatorInstance.Data + 0x20);
          }
          uVar11 = _wtoi(pwVar13);
          if (local_5a8.ArrayNum < 2) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          if (*(int *)(local_5a8.AllocatorInstance.Data + 0x18) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)(local_5a8.AllocatorInstance.Data + 0x10);
          }
          local_568.A = _wtoi(pwVar13);
          local_568.B = uVar11;
          local_568.D = uVar9;
          local_568.C = uVar10;
        }
        else {
          bVar5 = FGuid::Parse(&local_558,&local_508);
          if (!bVar5) {
            local_508.C = 0;
            local_508.D = 0;
            local_508.A = 0;
            local_508.B = 0;
          }
          local_568.A = local_508.A;
          local_568.B = local_508.B;
          local_568.C = local_508.C;
          local_568.D = local_508.D;
        }
        DestructItems<FString,int>((FString *)local_5a8.AllocatorInstance.Data,local_5a8.ArrayNum);
        if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a8.AllocatorInstance.Data);
        }
      }
      FApp::GetInstanceId(&local_430);
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      local_res10 = ::FString::FString(&local_e8,L"ProjectName");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,local_res10);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar15 = &pFVar29->AttrValueString;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res8 = local_450.Data.AllocatorInstance.Data;
      piVar1 = &(pFVar29->AttrValueString).Data.ArrayMax;
      (pFVar29->AttrValueString).Data.ArrayNum = local_450.Data.ArrayNum;
      if (local_450.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_450.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                   local_450.Data.ArrayNum,piVar1);
        memcpy((pFVar15->Data).AllocatorInstance.Data,local_res8,
               (longlong)local_450.Data.ArrayNum * 2);
      }
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar29->AttrType = String;
      pFVar2 = (local_res10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      pFVar15 = ::FString::FString(&local_2b8,L"ProjectID");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      (pFVar29->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrValueString).Data.ArrayNum = 0;
      (pFVar29->AttrValueString).Data.ArrayMax = 0;
      FGuid::AppendString(&local_568,&pFVar29->AttrValueString,Digits);
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar29->AttrType = String;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_588.Data.ArrayNum = 0;
      local_588.Data.ArrayMax = 0;
      FGuid::AppendString(&local_430,&local_588,DigitsWithHyphensInBraces);
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      pFVar15 = ::FString::FString(&local_2a8,L"Session_ID");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      (pFVar29->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrValueString).Data.AllocatorInstance.Data = local_588.Data.AllocatorInstance.Data
      ;
      local_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrValueString).Data.ArrayNum = local_588.Data.ArrayNum;
      (pFVar29->AttrValueString).Data.ArrayMax = local_588.Data.ArrayMax;
      local_588.Data.ArrayNum = 0;
      local_588.Data.ArrayMax = 0;
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar29->AttrType = String;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
      FVar16 = FDateTime::UtcNow();
      pFVar17 = FDateTime::FDateTime(&local_398,0x7b2,1,1,0,0,0,0);
      local_res18 = (double)(*(longlong *)FVar16.Ticks - pFVar17->Ticks) * __real_3e7ad7f29abcaf48;
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      local_5e0._0_4_ = iVar8 + 1;
      pFVar15 = ::FString::FString(&local_298,L"Session_StartUTC");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<double>(pFVar29,pFVar15,&local_res18);
      local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_538.Data.ArrayNum = 0;
      local_538.Data.ArrayMax = 0;
      pwVar13 = FCommandLine::Get();
      bVar5 = FParse::Value(pwVar13,L"SessionLabel=",&local_538,true,(wchar_t **)0x0);
      if (bVar5) {
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)(int)local_5e0 * 0x30);
        local_5e0._0_4_ = (int)local_5e0 + 1;
        local_res10 = ::FString::FString(&local_288,L"Session_Label");
        pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,local_res10);
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar15 = &pFVar29->AttrValueString;
        (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        lVar30 = (longlong)local_538.Data.ArrayNum;
        local_res8 = local_538.Data.AllocatorInstance.Data;
        piVar1 = &(pFVar29->AttrValueString).Data.ArrayMax;
        (pFVar29->AttrValueString).Data.ArrayNum = local_538.Data.ArrayNum;
        if (local_538.Data.ArrayNum == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_538.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                     local_538.Data.ArrayNum,piVar1);
          memcpy((pFVar15->Data).AllocatorInstance.Data,local_res8,lVar30 * 2);
        }
        pFVar29->AttrValueNumber = 0.0;
        pFVar29->AttrType = String;
        pFVar29->AttrValueBool = false;
        pFVar2 = (local_res10->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      }
      EVar7 = FApp::GetBuildConfiguration();
      pwVar13 = ::LexToString(EVar7);
      if ((int)local_5e0 == local_5e0._4_4_) {
        local_5e0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      lVar30 = (longlong)(int)local_5e0;
      local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
      pFVar15 = ::FString::FString(&local_278,L"Build_Configuration");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      ::FString::FString(&pFVar29->AttrValueString,pwVar13);
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar29->AttrType = String;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar15 = FApp::GetBranchName(&local_370);
      pFVar15 = ::FString::ToLower(pFVar15,(FString *)(local_388 + 8));
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      pFVar14 = ::FString::FString(&local_268,L"Build_BranchName");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar29,pFVar14,pFVar15);
      if ((void *)local_388._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_388._8_8_);
      }
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
      BuildSettings::GetCurrentChangelist();
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      pFVar15 = ::FString::FString(&local_258,L"Build_Changelist");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&pFVar29->AttrValueString,L"%d");
      pFVar29->AttrType = JsonFragment;
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      pFVar15 = ::FString::FString(&local_248,L"Config_IsEditor");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      ::FString::FString(&pFVar29->AttrValueString,L"false");
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar29->AttrType = JsonFragment;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      local_5e0._0_4_ = iVar8 + 1;
      pFVar15 = ::FString::FString(&local_238,L"Config_IsBuildMachine");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_&>(pFVar29,pFVar15,&GIsBuildMachine);
      bVar5 = PRIVATE_GIsRunningCommandlet;
      if ((int)local_5e0 == local_5e0._4_4_) {
        local_5e0._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      lVar30 = (longlong)(int)local_5e0;
      local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
      pFVar15 = ::FString::FString(&local_228,L"Config_IsRunningCommandlet");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      pwVar13 = L"true";
      if (bVar5 == false) {
        pwVar13 = L"false";
      }
      ::FString::FString(&pFVar29->AttrValueString,pwVar13);
      pFVar29->AttrType = JsonFragment;
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((this->Config).bSendUserData == true) {
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        local_5e0._0_4_ = iVar8 + 1;
        pFVar15 = ::FString::FString(&local_218,L"User_ID");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
                  (pFVar29,pFVar15,&local_440);
        local_res20 = FCommandLine::Get();
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        lVar30 = (longlong)(int)local_5e0;
        local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
        pFVar15 = ::FString::FString(&local_208,L"Application_Commandline");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<wchar_t_const_*>
                  (pFVar29,pFVar15,&local_res20);
      }
      pFVar15 = ::FString::FString(&local_360,"Windows");
      iVar8 = (int)local_5e0;
      if ((int)local_5e0 == local_5e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
      }
      local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
      pFVar14 = ::FString::FString(&local_1f8,L"Hardware_Platform");
      FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar29,pFVar14,pFVar15);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      if ((this->Config).bSendHardwareData == true) {
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        local_5e0._0_4_ = iVar8 + 1;
        pFVar15 = ::FString::FString(&local_1e8,L"Hardware_GPU");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_&>
                  (pFVar29,pFVar15,&GRHIGlobals.GpuInfo.AdapterName);
        pFVar15 = FWindowsPlatformMisc::GetCPUBrand(&local_350);
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        lVar30 = (longlong)(int)local_5e0;
        local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
        pFVar14 = ::FString::FString(&local_1d8,L"Hardware_CPU");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar29,pFVar14,pFVar15);
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
        iVar8 = FWindowsPlatformMisc::NumberOfCores();
        local_res8 = (FScriptContainerElement *)CONCAT44(local_res8._4_4_,iVar8);
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        local_5e0._0_4_ = iVar8 + 1;
        pFVar15 = ::FString::FString(&local_1c8,L"Hardware_CPU_Cores_Physical");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<int>(pFVar29,pFVar15,(int *)&local_res8);
        iVar8 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
        local_res10 = (FString *)CONCAT44(local_res10._4_4_,iVar8);
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)(int)local_5e0 * 0x30);
        local_5e0._0_4_ = (int)local_5e0 + 1;
        pFVar15 = ::FString::FString(&local_1b8,L"Hardware_CPU_Cores_Logical");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<int>(pFVar29,pFVar15,(int *)&local_res10)
        ;
        pFVar18 = FWindowsPlatformMemory::GetStats(&local_d8);
        local_4d8 = pFVar18->_padding_;
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)(int)local_5e0 * 0x30);
        local_5e0._0_4_ = (int)local_5e0 + 1;
        pFVar15 = ::FString::FString(&local_1a8,L"Hardware_RAM");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<unsigned___int64>
                  (pFVar29,pFVar15,&local_4d8);
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        lVar30 = (longlong)(int)local_5e0;
        local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
        pFVar15 = ::FString::FString(&local_198,L"Hardware_ComputerName");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_&>(pFVar29,pFVar15,&local_400);
      }
      if ((this->Config).bSendOSData == true) {
        local_518.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_518.Data.ArrayNum = 0;
        local_518.Data.ArrayMax = 0;
        local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4f8.Data.ArrayNum = 0;
        local_4f8.Data.ArrayMax = 0;
        FWindowsPlatformMisc::GetOSVersions(&local_518,&local_4f8);
        pFVar15 = FWindowsPlatformMisc::GetOSVersion(&local_340);
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        pFVar14 = ::FString::FString(&local_188,L"OS_Version");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar29,pFVar14,pFVar15);
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        local_5e0._0_4_ = iVar8 + 1;
        pFVar15 = ::FString::FString(&local_178,L"OS_VersionLabel");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_&>(pFVar29,pFVar15,&local_518);
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)(int)local_5e0 * 0x30);
        local_5e0._0_4_ = (int)local_5e0 + 1;
        pFVar15 = ::FString::FString(&local_168,L"OS_VersionSubLabel");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_&>(pFVar29,pFVar15,&local_4f8);
        pFVar15 = FWindowsPlatformMisc::GetOperatingSystemId(&local_330);
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        lVar30 = (longlong)(int)local_5e0;
        local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
        pFVar14 = ::FString::FString(&local_158,L"OS_ID");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar29,pFVar14,pFVar15);
        if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.Data.AllocatorInstance.Data);
        }
        if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
        }
        if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Data.AllocatorInstance.Data);
        }
      }
      ::FString::FString(&local_4c0,L"UE_HORDE_JOBID");
      ::FString::FString(&local_4d0,L"HordeJobId=");
      local_598.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_4d0.Data.ArrayNum != 0) {
        FVar27.Data = local_4d0.Data.AllocatorInstance.Data;
      }
      local_598.Data.ArrayNum = 0;
      local_598.Data.ArrayMax = 0;
      pwVar13 = FCommandLine::Get();
      bVar5 = FParse::Value(pwVar13,(wchar_t *)FVar27.Data,&local_598,true,(wchar_t **)0x0);
      if (!bVar5) {
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_4c0.Data.ArrayNum != 0) {
          FVar27.Data = local_4c0.Data.AllocatorInstance.Data;
        }
        pFVar15 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_320,(wchar_t *)FVar27.Data);
        if (&local_598 != pFVar15) {
          if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_598.Data.AllocatorInstance.Data);
          }
          local_598.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_598.Data.ArrayNum = (pFVar15->Data).ArrayNum;
          local_598.Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
        }
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
      }
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
      if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
      }
      if (1 < local_598.Data.ArrayNum) {
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        local_5e0._0_4_ = iVar8 + 1;
        pFVar15 = ::FString::FString(&local_148,L"Horde_JobID");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString_const_&>
                  (pFVar29,pFVar15,&local_598);
        ::FString::FString(&local_3e0,L"UE_HORDE_STEPID");
        ::FString::FString(&local_3f0,L"HordeStepId=");
        pFVar15 = GetEnvironmentValriable(&local_310,&local_3f0,&local_3e0);
        if ((int)local_5e0 == local_5e0._4_4_) {
          local_5e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        lVar30 = (longlong)(int)local_5e0;
        local_5e0 = CONCAT44(local_5e0._4_4_,(int)local_5e0 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + lVar30 * 0x30);
        pFVar14 = ::FString::FString(&local_138,L"Horde_StepID");
        FAnalyticsEventAttribute::FAnalyticsEventAttribute<FString>(pFVar29,pFVar14,pFVar15);
        if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
        }
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
        }
        if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_4a0,L"UE_HORDE_STEPNAME");
        ::FString::FString(&local_4b0,L"HordeStepName=");
        local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_4b0.Data.ArrayNum != 0) {
          FVar27.Data = local_4b0.Data.AllocatorInstance.Data;
        }
        local_5d8.Data.ArrayNum = 0;
        local_5d8.Data.ArrayMax = 0;
        pwVar13 = FCommandLine::Get();
        bVar5 = FParse::Value(pwVar13,(wchar_t *)FVar27.Data,&local_5d8,true,(wchar_t **)0x0);
        if (!bVar5) {
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_4a0.Data.ArrayNum != 0) {
            FVar27.Data = local_4a0.Data.AllocatorInstance.Data;
          }
          pFVar15 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_300,(wchar_t *)FVar27.Data);
          if (&local_5d8 != pFVar15) {
            if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
            }
            local_5d8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5d8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_5d8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data.AllocatorInstance.Data);
          }
        }
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        pFVar15 = ::FString::FString(&local_128,L"Horde_StepName");
        pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
        (pFVar29->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrValueString).Data.AllocatorInstance.Data =
             local_5d8.Data.AllocatorInstance.Data;
        local_5d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrValueString).Data.ArrayNum = local_5d8.Data.ArrayNum;
        (pFVar29->AttrValueString).Data.ArrayMax = local_5d8.Data.ArrayMax;
        local_5d8.Data.ArrayNum = 0;
        local_5d8.Data.ArrayMax = 0;
        pFVar29->AttrValueNumber = 0.0;
        pFVar29->AttrValueBool = false;
        pFVar29->AttrType = String;
        pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
        }
        if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
        }
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_480,L"UE_HORDE_URL");
        ::FString::FString(&local_490,L"HordeServerUrl=");
        local_5c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_490.Data.ArrayNum != 0) {
          FVar27.Data = local_490.Data.AllocatorInstance.Data;
        }
        local_5c8.Data.ArrayNum = 0;
        local_5c8.Data.ArrayMax = 0;
        pwVar13 = FCommandLine::Get();
        bVar5 = FParse::Value(pwVar13,(wchar_t *)FVar27.Data,&local_5c8,true,(wchar_t **)0x0);
        if (!bVar5) {
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_480.Data.ArrayNum != 0) {
            FVar27.Data = local_480.Data.AllocatorInstance.Data;
          }
          pFVar15 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_2f0,(wchar_t *)FVar27.Data);
          if (&local_5c8 != pFVar15) {
            if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
            }
            local_5c8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5c8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_5c8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
        }
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        pFVar15 = ::FString::FString(&local_118,L"Horde_ServerURL");
        pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
        (pFVar29->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrValueString).Data.AllocatorInstance.Data =
             local_5c8.Data.AllocatorInstance.Data;
        local_5c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrValueString).Data.ArrayNum = local_5c8.Data.ArrayNum;
        (pFVar29->AttrValueString).Data.ArrayMax = local_5c8.Data.ArrayMax;
        local_5c8.Data.ArrayNum = 0;
        local_5c8.Data.ArrayMax = 0;
        pFVar29->AttrValueNumber = 0.0;
        pFVar29->AttrValueBool = false;
        pFVar29->AttrType = String;
        pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
        }
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_460,L"UE_HORDE_TEMPLATENAME");
        ::FString::FString(&local_470,L"HordeTemplateName=");
        local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar27.Data = (FScriptContainerElement *)L"";
        if (local_470.Data.ArrayNum != 0) {
          FVar27.Data = local_470.Data.AllocatorInstance.Data;
        }
        local_5b8.Data.ArrayNum = 0;
        local_5b8.Data.ArrayMax = 0;
        pwVar13 = FCommandLine::Get();
        bVar5 = FParse::Value(pwVar13,(wchar_t *)FVar27.Data,&local_5b8,true,(wchar_t **)0x0);
        if (!bVar5) {
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_460.Data.ArrayNum != 0) {
            FVar27.Data = local_460.Data.AllocatorInstance.Data;
          }
          pFVar15 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_2e0,(wchar_t *)FVar27.Data);
          if (&local_5b8 != pFVar15) {
            if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
            }
            local_5b8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_5b8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
            local_5b8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
          }
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
        }
        iVar8 = (int)local_5e0;
        if ((int)local_5e0 == local_5e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_5e8,(int *)((longlong)&local_5e0 + 4));
        }
        local_5e0 = CONCAT44(local_5e0._4_4_,iVar8 + 1);
        pFVar29 = (FAnalyticsEventAttribute *)(local_5e8.Data + (longlong)iVar8 * 0x30);
        pFVar15 = ::FString::FString(&local_108,L"Horde_TemplateName");
        pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
        (pFVar29->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrValueString).Data.AllocatorInstance.Data =
             local_5b8.Data.AllocatorInstance.Data;
        local_5b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar29->AttrValueString).Data.ArrayNum = local_5b8.Data.ArrayNum;
        (pFVar29->AttrValueString).Data.ArrayMax = local_5b8.Data.ArrayMax;
        local_5b8.Data.ArrayNum = 0;
        local_5b8.Data.ArrayMax = 0;
        pFVar29->AttrValueNumber = 0.0;
        pFVar29->AttrValueBool = false;
        pFVar29->AttrType = String;
        pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
        }
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
      }
      pFVar19 = TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->(this_00);
      (**(code **)(pFVar19->_padding_ + 0x28))(pFVar19,&local_440);
      pFVar19 = TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->(this_00);
      local_4e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.Data.ArrayNum = 0;
      local_4e8.Data.ArrayMax = 0;
      pcVar4 = *(code **)(pFVar19->_padding_ + 0x18);
      FGuid::AppendString(&local_430,&local_4e8,DigitsWithHyphensInBraces);
      (*pcVar4)(pFVar19,&local_4e8);
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
      pFVar19 = TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->(this_00);
      (**(code **)(pFVar19->_padding_ + 0x38))(pFVar19,&local_5e8);
      pFVar19 = TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->(this_00);
      local_3c8._0_8_ = *(undefined8 *)&this->RecordEventCallback;
      local_3a0 = (longlong *)0x0;
      if (local_3c8._0_8_ != 0) {
        puVar22 = *(undefined8 **)&(this->RecordEventCallback).field_0x28;
        puVar25 = (undefined8 *)&(this->RecordEventCallback).field_0x10;
        if (puVar22 != (undefined8 *)0x0) {
          puVar25 = puVar22;
        }
        (**(code **)*puVar25)(puVar25,local_3c8 + 0x10);
      }
      TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
      ::operator=(&pFVar19->RecordEventCallback,
                  (TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
                   *)local_3c8);
      if (local_3c8._0_8_ != 0) {
        plVar26 = (longlong *)(local_3c8 + 0x10);
        if (local_3a0 != (longlong *)0x0) {
          plVar26 = local_3a0;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      pFVar19 = TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->(this_00);
      local_548 = (FAnalyticsEventAttribute *)0x0;
      local_540 = 0;
      (**(code **)pFVar19->_padding_)(pFVar19,&local_548);
      DestructItems<FAnalyticsEventAttribute,int>(local_548,(int)local_540);
      if (local_548 != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_548);
      }
      pFVar20 = ::FName::FName(&local_390,"Analytics");
      FVar3 = *pFVar20;
      this_02 = FModuleManager::Get();
      pIVar21 = FModuleManager::LoadModuleChecked(this_02,FVar3);
      puVar22 = (undefined8 *)(**(code **)((longlong)*pIVar21 + 0x48))(pIVar21,local_2d0);
      this_01 = &this->AnalyticsTracer;
      if (this_01 != (TSharedPtr<IAnalyticsTracer,1> *)puVar22) {
        this_01->Object = (IAnalyticsTracer *)*puVar22;
        *puVar22 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AnalyticsTracer).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar22 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2c8)
      ;
      pIVar23 = TSharedPtr<IAnalyticsTracer,1>::operator->(this_01);
      local_420 = this_00->Object;
      local_418 = (this->AnalyticsProvider).SharedReferenceCount.ReferenceController;
      pcVar4 = *(code **)((longlong)*pIVar23 + 0x18);
      if (local_418 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_418->SharedReferenceCount = (atomic<int>)((int)local_418->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar4)(pIVar23,&local_420);
      pIVar23 = TSharedPtr<IAnalyticsTracer,1>::operator->(this_01);
      (**(code **)((longlong)*pIVar23 + 8))(pIVar23);
      pVar24 = (pmf_6ef35745)Get();
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FStudioTelemetry>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEnginePreExit,(FStudioTelemetry *)local_388,pVar24);
      local_578.Data = (FScriptContainerElement *)0x0;
      local_570 = 0;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&local_578,(int *)((longlong)&local_570 + 4));
      local_570 = CONCAT44(local_570._4_4_,iVar8 + 1);
      pFVar29 = (FAnalyticsEventAttribute *)(local_578.Data + (longlong)iVar8 * 0x30);
      pFVar15 = ::FString::FString(&local_f8,L"SchemaVersion");
      pFVar14 = FAnalyticsEventAttribute::CheckName(pFVar29,pFVar15);
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar29->AttrName).Data.ArrayNum = (pFVar14->Data).ArrayNum;
      (pFVar29->AttrName).Data.ArrayMax = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&pFVar29->AttrValueString,L"%d");
      pFVar29->AttrValueNumber = 0.0;
      pFVar29->AttrValueBool = false;
      pFVar29->AttrType = JsonFragment;
      pFVar2 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar19 = TSharedPtr<FAnalyticsProviderBroadcast,1>::operator->(this_00);
      pcVar4 = *(code **)(pFVar19->_padding_ + 0x80);
      ::FString::FString(&local_410,L"StudioTelemetry.SessionStart");
      (*pcVar4)(pFVar19,&local_410,&local_578);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnStartSession);
      if (4 < (byte)LogStudioTelemetry._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStudioTelemetry);
      }
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_578.Data,(int)local_570);
      if ((FAnalyticsEventAttribute *)local_578.Data != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_578.Data);
      }
      if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data.AllocatorInstance.Data);
      }
      if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.Data.AllocatorInstance.Data);
      }
      if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_558.Data.AllocatorInstance.Data);
      }
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_5e8.Data,(int)local_5e0);
      if ((FAnalyticsEventAttribute *)local_5e8.Data != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_5e8.Data);
      }
      bVar5 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartSpan @ 14ea1e950

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FStudioTelemetry::StartSpan
          (FStudioTelemetry *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__,FName param_1
          ,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  IAnalyticsTracer *pIVar1;
  IAnalyticsTracer IVar2;
  undefined8 uVar3;
  IAnalyticsSpan *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [16];
  
  pIVar1 = (this->AnalyticsTracer).Object;
  if (pIVar1 == (IAnalyticsTracer *)0x0) {
    __return_storage_ptr__->Object = (IAnalyticsSpan *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    IVar2 = *pIVar1;
    uVar3 = (**(code **)((longlong)IVar2 + 0x30))(pIVar1,local_28);
    (**(code **)((longlong)IVar2 + 0x20))(pIVar1,&local_38,param_1,uVar3,param_2);
    __return_storage_ptr__->Object = local_38;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_30;
    local_30 = (TReferenceControllerBase<1> *)0x0;
    local_38 = (IAnalyticsSpan *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// StartSpan @ 14ea1ea00

TSharedPtr<IAnalyticsSpan,1> * __thiscall
FStudioTelemetry::StartSpan
          (FStudioTelemetry *this,TSharedPtr<IAnalyticsSpan,1> *__return_storage_ptr__,FName param_1
          ,TSharedPtr<IAnalyticsSpan,1> *param_2,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_3)

{
  IAnalyticsTracer *pIVar1;
  code *pcVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  IAnalyticsSpan *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->AnalyticsTracer).Object;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pIVar1 == (IAnalyticsTracer *)0x0) {
    __return_storage_ptr__->Object = (IAnalyticsSpan *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
    local_28 = param_2->Object;
    local_20 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar3 = (undefined8 *)(*pcVar2)(pIVar1,local_18,param_1,&local_28,param_3);
    __return_storage_ptr__->Object = (IAnalyticsSpan *)*puVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)puVar3[1];
    puVar3[1] = 0;
    *puVar3 = 0;
    pTVar4 = local_10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

