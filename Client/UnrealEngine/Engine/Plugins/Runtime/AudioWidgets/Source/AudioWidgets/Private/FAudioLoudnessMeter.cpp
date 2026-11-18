// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 18

// FAudioLoudnessMeter @ 14d8af800

FAudioLoudnessMeter * __thiscall
AudioWidgets::FAudioLoudnessMeter::FAudioLoudnessMeter
          (FAudioLoudnessMeter *this,FAudioLoudnessMeterParams *param_1)

{
  UAudioBus *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAudioLoudnessMeter_AudioWidgets__6B_;
  MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (&(this->LoudnessMeterWidgetView).LoudnessMetrics);
  MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (&(this->LoudnessMeterWidgetView).NumericValues);
  MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (&(this->LoudnessMeterWidgetView).MeterValues);
  (this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.Value.Ticks = 0;
  (this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.bIsSet = true;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.Getter.field_0x10 =
       0;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.Getter = 0;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.Getter.field_0x8 = 0
  ;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.OnResetButtonClicked = 0;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.OnResetButtonClicked.field_0x8 =
       0;
  *(undefined4 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.OnResetButtonClicked.field_0x10 =
       0;
  (this->LoudnessMeterWidgetView).TimerPanelParams.bIsVisible.Value = false;
  (this->LoudnessMeterWidgetView).TimerPanelParams.bIsVisible.bIsSet = true;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.bIsVisible.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.bIsVisible.Getter = 0;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.bIsVisible.Getter.field_0x8 = 0;
  *(undefined8 *)&(this->LoudnessMeterWidgetView).TimerPanelParams.OnVisibilityToggleRequested = 0;
  *(undefined8 *)
   &(this->LoudnessMeterWidgetView).TimerPanelParams.OnVisibilityToggleRequested.field_0x8 = 0;
  *(undefined4 *)
   &(this->LoudnessMeterWidgetView).TimerPanelParams.OnVisibilityToggleRequested.field_0x10 = 0;
  (this->LKFSAnalyzer).Object = (UObject *)0x0;
  (this->LKFSSettings).Object = (UObject *)0x0;
  (this->LatestOverallLKFSResultsDelegateHandle).ID = 0;
  (this->LatestLoudnessResults).bIsSet = false;
  this->AudioDeviceId = 0xffffffff;
  (this->WidgetRefreshTicker).Object = (FElement *)0x0;
  (this->WidgetRefreshTicker).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBus).Object = (UObject *)0x0;
  this->bUseExternalAudioBus = false;
  local_res8 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  Init(this,param_1->NumChannels,param_1->AudioDeviceId,(TObjectPtr<UAudioBus>)&local_res8);
  return this;
}

// ~FAudioLoudnessMeter @ 14d8bdf00

void __thiscall AudioWidgets::FAudioLoudnessMeter::~FAudioLoudnessMeter(FAudioLoudnessMeter *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  TWeakPtr<FTSTicker::FElement,1> *pTVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  UObject *pUVar7;
  longlong *plVar8;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar3 = &this->WidgetRefreshTicker;
  this->_padding_ = (longlong)&___7FAudioLoudnessMeter_AudioWidgets__6B_;
  if (((pTVar3->Object != (FElement *)0x0) &&
      (pTVar6 = (this->WidgetRefreshTicker).WeakReferenceCount.ReferenceController,
      pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
    local_28.Object = pTVar3->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->WidgetRefreshTicker).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar3 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar6 = (this->WidgetRefreshTicker).WeakReferenceCount.ReferenceController;
      pTVar3->Object = (FElement *)0x0;
      (this->WidgetRefreshTicker).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
  }
  Teardown(this);
  pUVar7 = (this->AudioBus).Object;
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  pTVar6 = (this->WidgetRefreshTicker).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pUVar7 = (this->LKFSSettings).Object;
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    (this->LKFSSettings).Object = (UObject *)0x0;
  }
  pUVar7 = (this->LKFSAnalyzer).Object;
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    (this->LKFSAnalyzer).Object = (UObject *)0x0;
  }
  FLoudnessMeterWidgetView::~FLoudnessMeterWidgetView(&this->LoudnessMeterWidgetView);
  this->_padding_ = (longlong)&___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// operator() @ 14d8cf2b0

void __thiscall
`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>::operator()
          (void *this)

{
  UClass *pUVar1;
  char *pcVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pcVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *pcVar2 = *pcVar2 == '\0';
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8cf350

bool __thiscall
`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *this_00;
  void *pvVar5;
  
  lVar1 = *(longlong *)this;
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 8));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 8),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  if (*(int *)(lVar1 + 0x30) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (pvVar5 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)((longlong)*(int *)(lVar1 + 0x44) + (longlong)pvVar5);
}

// operator() @ 14d8cf420

bool __thiscall
`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *this_00;
  void *pvVar5;
  
  lVar1 = *(longlong *)this;
  this_00 = FField::GetOwnerClass(*(FField **)((longlong)this + 8));
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pvVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 8),
                      (this_00->ClassDefaultObject).field0_0x0.DebugPtr,0);
  if (*(int *)(lVar1 + 0x30) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (pvVar5 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)((longlong)*(int *)(lVar1 + 0x44) + 1 + (longlong)pvVar5);
}

// operator() @ 14d8cf590

void __thiscall
`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  void *pvVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)this;
  pUVar3 = FField::GetOwnerClass(*(FField **)((longlong)this + 8));
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 8),
                      (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr,0);
  if (*(int *)(lVar5 + 0x30) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pvVar4 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar5 = (longlong)*(int *)(lVar5 + 0x44);
  *(bool *)(lVar5 + (longlong)pvVar4) = *(char *)(lVar5 + (longlong)pvVar4) == '\0';
  pUVar3 = FField::GetOwnerClass(*(FField **)((longlong)this + 8));
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  UObject::SaveConfig((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8cf740

void __thiscall
`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  void *pvVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)this;
  pUVar3 = FField::GetOwnerClass(*(FField **)((longlong)this + 8));
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pvVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((longlong)this + 8),
                      (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr,0);
  if (*(int *)(lVar5 + 0x30) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pvVar4 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar5 = (longlong)*(int *)(lVar5 + 0x44);
  *(bool *)(lVar5 + 1 + (longlong)pvVar4) = *(char *)(lVar5 + 1 + (longlong)pvVar4) == '\0';
  pUVar3 = FField::GetOwnerClass(*(FField **)((longlong)this + 8));
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  UObject::SaveConfig((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// CreateLKFSAnalyzer @ 14d905f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioLoudnessMeter::CreateLKFSAnalyzer(FAudioLoudnessMeter *this)

{
  TStrongObjectPtr<ULKFSAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObjectBase *this_00;
  FDelegateHandle FVar7;
  longlong *plVar8;
  UObjectBase *pUVar9;
  undefined1 auStackY_e8 [32];
  longlong local_a8;
  undefined1 local_a0 [16];
  UObject *local_90;
  FTimespan local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar1 = &this->LKFSAnalyzer;
  if (pTVar1->Object != (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8700838700646399864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioLoudnessMeter.cpp"
                       ,0x88,"!LKFSAnalyzer.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->LatestOverallLKFSResultsDelegateHandle).ID != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8700838700646399863>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioLoudnessMeter.cpp"
                       ,0x89,"!LatestOverallLKFSResultsDelegateHandle.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_ULKFSAnalyzer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_a0 + 8),pUVar6);
  local_90 = pUVar5;
  this_00 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_a0 + 8));
  if (local_58.Ticks != 0) {
    plVar8 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pUVar9 = (UObjectBase *)0x0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    pUVar9 = this_00;
  }
  if (pTVar1 == (TStrongObjectPtr<ULKFSAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_a8) {
    if (pUVar9 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar9);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar9;
  }
  pUVar5 = (this->LKFSSettings).Object;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = pTVar1->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 4) = pUVar5;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = TMulticastDelegateRegistration<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
          ::AddRaw<AudioWidgets::FAudioLoudnessMeter>
                    ((TMulticastDelegateRegistration<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
                      *)&pTVar1->Object[7].field_0x18,(FAudioLoudnessMeter *)local_a0,
                     (pmf_ec901622 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->LatestOverallLKFSResultsDelegateHandle).ID = *FVar7.ID;
  return;
}

// GetAnalysisTime @ 14d92ac50

FTimespan __thiscall AudioWidgets::FAudioLoudnessMeter::GetAnalysisTime(FAudioLoudnessMeter *this)

{
  float fVar1;
  float fVar2;
  UObject *pUVar3;
  longlong *in_RDX;
  undefined1 auVar4 [16];
  
  if (((this->LatestLoudnessResults).bIsSet != false) &&
     (pUVar3 = (this->LKFSSettings).Object, pUVar3 != (UObject *)0x0)) {
    fVar1 = (this->LatestLoudnessResults).TypedValue.Timestamp;
    fVar2 = *(float *)&pUVar3[1].field_0x10;
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
    auVar4._0_8_ = (double)(fVar1 * __real_4b189680 + __real_3f000000);
    auVar4._8_8_ = 0;
    auVar4 = roundpd(auVar4,auVar4,1);
    *in_RDX = (longlong)auVar4._0_8_;
    return (FTimespan)(long64)in_RDX;
  }
  *in_RDX = 0;
  return (FTimespan)(long64)in_RDX;
}

// HandleResetButtonClicked @ 14d938d40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
AudioWidgets::FAudioLoudnessMeter::HandleResetButtonClicked
          (FAudioLoudnessMeter *this,FReply *__return_storage_ptr__)

{
  UAudioAnalyzer *this_00;
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  
  this_00 = (UAudioAnalyzer *)(this->LKFSAnalyzer).Object;
  if (this_00 != (UAudioAnalyzer *)0x0) {
    UAudioAnalyzer::StopAnalyzing(this_00,(UObject *)0x0);
    ReleaseLKFSAnalyzer(this);
  }
  if ((this->LatestLoudnessResults).bIsSet != false) {
    (this->LatestLoudnessResults).bIsSet = false;
  }
  if (this->AudioDeviceId != 0xffffffff) {
    CreateLKFSAnalyzer(this);
    if ((this->LKFSAnalyzer).Object == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReply *)(*pcVar1)();
        return pFVar3;
      }
    }
    UAudioAnalyzer::StartAnalyzing
              ((UAudioAnalyzer *)(this->LKFSAnalyzer).Object,this->AudioDeviceId,
               (UAudioBus *)(this->AudioBus).Object);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// Init @ 14d93b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioLoudnessMeter::Init
          (FAudioLoudnessMeter *this,int param_1,uint param_2,TObjectPtr<UAudioBus> param_3)

{
  TStrongObjectPtr<ULKFSSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UObjectBase *this_00;
  UAudioBus *pUVar9;
  longlong *plVar10;
  UObjectBase *pUVar11;
  UAudioBus **ppUVar12;
  undefined1 auStack_108 [32];
  UAudioBus *local_e8;
  UAudioBus *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8 = 0;
  Teardown(this);
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_ULKFSSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar8);
  local_c8._8_8_ = pUVar7;
  this_00 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar10 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pUVar11 = (UObjectBase *)0x0;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    pUVar11 = this_00;
  }
  pTVar1 = &this->LKFSSettings;
  if (pTVar1 == (TStrongObjectPtr<ULKFSSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_d0) {
    if (pUVar11 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar11);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar11;
  }
  this->AudioDeviceId = param_2;
  if (param_2 != 0xffffffff) {
    if ((param_1 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumChannels > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioLoudnessMeter.cpp"
                           ,0x6d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)param_3.field0_0x0;
    this->bUseExternalAudioBus = lVar3 != 0;
    if (lVar3 == 0) {
      pUVar7 = GetTransientPackageAsObject();
      pUVar9 = NewObject<UAudioBus>(pUVar7);
      local_e8 = (UAudioBus *)0x0;
      if (pUVar9 != (UAudioBus *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pUVar9);
        local_e8 = pUVar9;
      }
      ppUVar12 = &local_e8;
      bVar5 = false;
      bVar6 = true;
      pUVar9 = local_e8;
    }
    else {
      pUVar9 = *(UAudioBus **)param_3.field0_0x0;
      local_e0 = (UAudioBus *)0x0;
      if (pUVar9 == (UAudioBus *)0x0) {
        ppUVar12 = &local_e0;
        bVar5 = true;
        bVar6 = false;
      }
      else {
        UObjectBase::AddRef((UObjectBase *)pUVar9);
        ppUVar12 = &local_e0;
        bVar5 = true;
        bVar6 = false;
        local_e0 = pUVar9;
      }
    }
    pTVar2 = &this->AudioBus;
    if (pTVar2 != (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)ppUVar12) {
      if (pTVar2->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
      }
      pTVar2->Object = (UObject *)pUVar9;
      *ppUVar12 = (UAudioBus *)0x0;
    }
    pUVar9 = local_e0;
    if ((bVar6) && (local_e8 != (UAudioBus *)0x0)) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_e8);
      local_e8 = (UAudioBus *)0x0;
    }
    if ((bVar5) && (pUVar9 != (UAudioBus *)0x0)) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar9);
      local_e0 = (UAudioBus *)0x0;
    }
    if ((pTVar2->Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar2->Object[1].field_0x8 = (char)param_1 + -1;
    CreateLKFSAnalyzer(this);
    if (((this->LKFSAnalyzer).Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UAudioAnalyzer::StartAnalyzing
              ((UAudioAnalyzer *)(this->LKFSAnalyzer).Object,param_2,
               (UAudioBus *)(this->AudioBus).Object);
  }
  return;
}

// InitLoudnessMeterWidgetView @ 14d93c100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView
          (FAudioLoudnessMeter *this,FAudioAnalyzerRackUnitConstructParams *param_1)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  uint *puVar4;
  atomic<int> aVar5;
  int iVar6;
  IAudioAnalyzerRackUnit *pIVar7;
  UClass *this_00;
  FName FVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *pTVar14;
  undefined8 *puVar15;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar16;
  ulong64 uVar17;
  FName *pFVar18;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar19;
  FProperty *pFVar20;
  UPackage *pUVar21;
  FProperty *pFVar22;
  FTSTicker *this_01;
  TWeakPtr<FTSTicker::FElement,1> *pTVar23;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> *pTVar24;
  bool *pbVar25;
  undefined ***pppuVar26;
  FAudioLoudnessMeter *pFVar27;
  FLoudnessMetric *pFVar28;
  undefined1 auStackY_3a8 [32];
  FDestructionSentinel local_378;
  float *local_360;
  FAudioLoudnessMeter *local_358;
  FMRSWRecursiveAccessDetector *pFStack_350;
  bool local_348;
  FWeakReferencer<1> *local_340;
  FDestructionSentinel local_338;
  FDelegateAllocation *local_320;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> local_318;
  long64 local_308;
  bool local_300;
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [8];
  FDelegateAllocation local_2d8;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  FDelegateAllocation FStack_2b8;
  undefined1 local_2a8 [8];
  FDelegateAllocation FStack_2a0;
  undefined1 local_288 [16];
  undefined **local_278;
  FAudioLoudnessMeter *local_270;
  undefined ***local_260;
  undefined1 local_258 [40];
  undefined1 local_230 [24];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  void *pvStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  void *pvStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  void *pvStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined1 auStack_1b8 [64];
  FSharedReferencer<1> local_178;
  undefined2 local_168;
  undefined1 local_160 [8];
  void *pvStack_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  void *pvStack_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  void *pvStack_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  void *pvStack_108;
  undefined8 local_100;
  FName local_f8;
  FText local_f0;
  undefined1 local_dc;
  undefined1 local_d8;
  undefined1 local_d0 [24];
  undefined2 local_b8;
  undefined1 local_b0 [8];
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_90 [8];
  void *pvStack_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  void *pvStack_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  void *pvStack_58;
  undefined8 local_50;
  FName local_48;
  
  local_48 = (FName)(__security_cookie.value ^ (ulonglong)auStackY_3a8);
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  pFStack_350 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_350 & 0xffffffff00000000);
  local_358 = (FAudioLoudnessMeter *)GetAnalysisTime;
  local_318.Object = (FLoudnessMetric *)this;
  pTVar14 = TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<AudioWidgets::FAudioLoudnessMeter>
                      ((TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *)&local_378,
                       this,(pmf_f40d4be0 *)&local_358);
  local_308 = 0;
  local_300 = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar14);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_378,
             (FWriteAccessScope *)&local_358);
  puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  if ((local_378._16_4_ != 0) && (puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_378.Accessor,0,0,0x10);
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
    local_378._16_4_ = 0;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_350,(FDestructionSentinel *)&local_358)
    ;
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  }
  if (puVar15 != (undefined8 *)0x0) {
    FMemory::Free(puVar15);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_378);
  local_2e0 = (undefined1  [8])0x0;
  local_2d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
             (FWriteAccessScope *)&local_338);
  local_320 = &local_2d8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_2d8);
  pFVar27 = (FAudioLoudnessMeter *)local_318.Object;
  if (puVar15 != (undefined8 *)0x0) {
    local_358 = (FAudioLoudnessMeter *)HandleResetButtonClicked;
    pFStack_350 = (FMRSWRecursiveAccessDetector *)((ulonglong)local_378.Accessor._4_4_ << 0x20);
    pTVar16 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsShared
                        ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)&this->_padding_
                         ,(TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)&local_378);
    pFVar27 = (FAudioLoudnessMeter *)(pTVar16->SharedReferenceCount).ReferenceController;
    pIVar7 = pTVar16->Object;
    if (pFVar27 != (FAudioLoudnessMeter *)0x0) {
      LOCK();
      *(int *)&(((FText *)&pFVar27->_padding_)->TextData).Reference =
           *(int *)&(((FText *)&pFVar27->_padding_)->TextData).Reference + 1;
      UNLOCK();
      LOCK();
      *(int *)&(((FText *)&pFVar27->_padding_)->TextData).Reference =
           *(int *)&(((FText *)&pFVar27->_padding_)->TextData).Reference + 1;
      UNLOCK();
    }
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFAudioLoudnessMeter_AudioWidgets___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pIVar7;
    puVar15[4] = pFVar27;
    if (pFVar27 != (FAudioLoudnessMeter *)0x0) {
      LOCK();
      puVar1 = (undefined1 *)((longlong)&(((FText *)&pFVar27->_padding_)->TextData).Reference + 4);
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *(FAudioLoudnessMeter **)(puVar15 + 5) = local_358;
    puVar15[6] = pFStack_350;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar27);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar27);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_));
  }
  if (local_338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
  }
  local_2c8[0] = true;
  local_2c8[1] = true;
  FStack_2b8.DelegateSize = 0;
  FStack_2b8._12_4_ = 0;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_2a0.DelegateSize = 0;
  FStack_2a0._12_4_ = 0;
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pFVar18 = ::FName::FName((FName *)&local_358,0x10,L"LongTermLoudness",FNAME_Add);
  local_258._0_8_ = *pFVar18;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_258 + 8),L"FAudioLoudnessMeter",L"LongTermLoudnessDisplayName",
             L"Long Term");
  local_358 = this;
  pTVar19 = TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l2::<lambda_1>_>
                      ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
                       &local_378,this,(<lambda_1> *)&local_358);
  local_258[0x1c] = false;
  local_258[0x20] = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_230,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar19);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_378,
             (FWriteAccessScope *)&local_358);
  puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  if ((local_378._16_4_ != 0) && (puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_378.Accessor,0,0,0x10);
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
    local_378._16_4_ = 0;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_350,(FDestructionSentinel *)&local_358)
    ;
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  }
  if (puVar15 != (undefined8 *)0x0) {
    FMemory::Free(puVar15);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_378);
  local_218[0] = true;
  local_218[1] = true;
  local_200 = 0;
  local_1e0 = 0;
  local_1d8 = (undefined1  [8])0x0;
  pvStack_1d0 = (void *)0x0;
  local_1c8 = 0;
  local_1c0 = (undefined1  [8])0x0;
  auStack_1b8._0_8_ = (void *)0x0;
  auStack_1b8._8_8_ = 0;
  local_210 = (undefined1  [8])0x0;
  pvStack_208 = (void *)0x0;
  local_1f8[0] = false;
  local_1f8[1] = true;
  local_1f0 = (undefined1  [8])0x0;
  pvStack_1e8 = (void *)0x0;
  pFVar18 = ::FName::FName((FName *)&local_358,0x11,L"ShortTermLoudness",FNAME_Add);
  auStack_1b8._16_8_ = *pFVar18;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(auStack_1b8 + 0x18),L"FAudioLoudnessMeter",L"ShortTermLoudnessDisplayName",
             L"Short Term");
  local_358 = this;
  pTVar19 = TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l2::<lambda_2>_>
                      ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
                       &local_378,this,(<lambda_2> *)&local_358);
  auStack_1b8[0x2c] = 0;
  auStack_1b8[0x30] = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(auStack_1b8 + 0x38),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar19);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_378,
             (FWriteAccessScope *)&local_358);
  puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  if ((local_378._16_4_ != 0) && (puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_378.Accessor,0,0,0x10);
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
    local_378._16_4_ = 0;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_350,(FDestructionSentinel *)&local_358)
    ;
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  }
  if (puVar15 != (undefined8 *)0x0) {
    FMemory::Free(puVar15);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_378);
  local_168._0_1_ = false;
  local_168._1_1_ = 1;
  local_150 = 0;
  local_130[0] = false;
  local_130[1] = false;
  local_130._2_2_ = 0;
  local_130._4_4_ = 0;
  local_128 = (undefined1  [8])0x0;
  pvStack_120 = (void *)0x0;
  local_118 = 0;
  local_110 = (undefined1  [8])0x0;
  pvStack_108 = (void *)0x0;
  local_100 = 0;
  local_160 = (undefined1  [8])0x0;
  pvStack_158 = (void *)0x0;
  local_148._0_2_ = 0x101;
  local_140 = (undefined1  [8])0x0;
  pvStack_138 = (void *)0x0;
  pFVar18 = ::FName::FName((FName *)&local_358,0x11,L"MomentaryLoudness",FNAME_Add);
  local_f8 = *pFVar18;
  FText::AsLocalizable_Advanced_LocText
            (&local_f0,L"FAudioLoudnessMeter",L"MomentaryLoudnessDisplayName",L"Momentary");
  local_358 = this;
  pTVar19 = TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l2::<lambda_3>_>
                      ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
                       &local_378,this,(<lambda_3> *)&local_358);
  local_dc = 0;
  local_d8 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar19);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_378,
             (FWriteAccessScope *)&local_358);
  puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  if ((local_378._16_4_ != 0) && (puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_378.Accessor,0,0,0x10);
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
    local_378._16_4_ = 0;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_350,(FDestructionSentinel *)&local_358)
    ;
    puVar15 = (undefined8 *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
  }
  if (puVar15 != (undefined8 *)0x0) {
    FMemory::Free(puVar15);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_378);
  this_00 = param_1->EditorSettingsClass;
  local_a0 = 0;
  local_80 = 0;
  local_68 = 0;
  local_50 = 0;
  local_b8 = 0x100;
  local_98 = 0x101;
  local_78 = (undefined1  [8])0x0;
  pvStack_70 = (void *)0x0;
  local_60 = (undefined1  [8])0x0;
  pvStack_58 = (void *)0x0;
  local_b0 = (undefined1  [8])0x0;
  TStack_a8.Object = (UObject *)0x0;
  local_90 = (undefined1  [8])0x0;
  pvStack_88 = (void *)0x0;
  if (this_00 != (UClass *)0x0) {
    pFVar18 = ::FName::FName((FName *)&local_358,"LoudnessMeterSettings");
    pFVar20 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar18);
    if (pFVar20 != (FProperty *)0x0) {
      local_2c8[1] = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
                 (FWriteAccessScope *)&local_338);
      local_320 = &FStack_2b8;
      puVar15 = UE::Core::Private::DelegateAllocate(0x20,&FStack_2b8);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_4>_>
                    ::_vftable_;
        puVar15[3] = pFVar20;
      }
      if (local_338.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
                 (FWriteAccessScope *)&local_338);
      local_320 = &FStack_2a0;
      puVar15 = UE::Core::Private::DelegateAllocate(0x20,&FStack_2a0);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_5>_>
                    ::_vftable_;
        puVar15[3] = pFVar20;
      }
      if (local_338.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
      }
      pFVar27 = (FAudioLoudnessMeter *)auStack_1b8;
      do {
        if (Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar21 = Z_Construct_UPackage__Script_AudioWidgets();
          Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FLoudnessMeterRackUnitSettings,
                               (UObject *)pUVar21,L"LoudnessMeterRackUnitSettings");
        }
        FVar8.ComparisonIndex.Value =
             *(uint *)&pFVar27[-1].LoudnessMeterWidgetView.TimerPanelParams.OnResetButtonClicked.
                       field_0x10;
        FVar8.Number = *(uint *)&pFVar27[-1].LoudnessMeterWidgetView.TimerPanelParams.
                                 OnResetButtonClicked.field_0x14;
        pFVar22 = UStruct::FindPropertyByName
                            ((UStruct *)
                             Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.
                             OuterSingleton,FVar8);
        if (pFVar22 != (FProperty *)0x0) {
          *(undefined1 *)((longlong)&pFVar27[-1].LKFSAnalyzer.Object + 1) = 1;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pFVar27[-1].LKFSSettings,(FWriteAccessScope *)&local_338);
          local_320 = (FDelegateAllocation *)&pFVar27[-1].LatestOverallLKFSResultsDelegateHandle;
          puVar15 = UE::Core::Private::DelegateAllocate(0x28,local_320);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar17 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar17;
            *puVar15 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_6>_>
                        ::_vftable_;
            puVar15[3] = pFVar22;
            puVar15[4] = pFVar20;
          }
          if (local_338.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
          }
          *(undefined1 *)((longlong)&pFVar27[-1].LatestLoudnessResults.TypedValue.Energy + 1) = 1;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pFVar27[-1].LatestLoudnessResults.TypedValue.ShortTermLoudness,
                     (FWriteAccessScope *)&local_378);
          local_360 = &pFVar27[-1].LatestLoudnessResults.TypedValue.GatedLoudness;
          puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_360);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar17 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar17;
            *puVar15 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_7>_>
                        ::_vftable_;
            puVar15[3] = pFVar22;
            puVar15[4] = pFVar20;
          }
          if (local_378.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)
                       CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_),&local_378);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pFVar27[-1].WidgetRefreshTicker,(FWriteAccessScope *)&local_358);
          local_340 = &pFVar27[-1].WidgetRefreshTicker.WeakReferenceCount;
          puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_340);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar17 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar17;
            *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_8>_>
                        ::_vftable_;
            puVar15[3] = pFVar22;
            puVar15[4] = pFVar20;
          }
          if (local_348 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      (pFStack_350,(FDestructionSentinel *)&local_358);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pFVar27[-1].bUseExternalAudioBus,(FWriteAccessScope *)local_288);
          local_270 = pFVar27;
          puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)pFVar27);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar17 = FDelegateHandle::GenerateNewID();
            puVar15[2] = uVar17;
            *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`15'::<lambda_9>_>
                        ::_vftable_;
            puVar15[3] = pFVar22;
            puVar15[4] = pFVar20;
          }
          if (local_278._0_1_ == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_288._8_8_,
                       (FDestructionSentinel *)local_288);
          }
        }
        puVar4 = (uint *)&pFVar27->_padding_;
        pFVar27 = (FAudioLoudnessMeter *)
                  &(pFVar27->LoudnessMeterWidgetView).TimerPanelParams.OnVisibilityToggleRequested.
                   field_0x8;
      } while ((FName *)puVar4 != &stack0xffffffffffffffb8);
      this_01 = FTSTicker::GetCoreTicker();
      this = (FAudioLoudnessMeter *)local_318.Object;
      local_278 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_10>,1,0>
                   ::_vftable_;
      local_270 = (FAudioLoudnessMeter *)local_318.Object;
      local_288._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,bool,float>
           ::Call;
      local_260 = (undefined ***)0x0;
      pTVar23 = FTSTicker::AddTicker
                          (this_01,(TWeakPtr<FTSTicker::FElement,1> *)&local_378,
                           L"FAudioLoudnessMeter::WidgetRefreshTicker",0.0,
                           (TUniqueFunction<bool___cdecl(float)> *)local_288);
      if ((TWeakPtr<FTSTicker::FElement,1> *)((longlong)this + 0x100) != pTVar23) {
        ((TWeakPtr<FTSTicker::FElement,1> *)((longlong)this + 0x100))->Object = pTVar23->Object;
        pTVar23->Object = (FElement *)0x0;
        pTVar9 = (((TWeakPtr<FTSTicker::FElement,1> *)((longlong)this + 0x100))->WeakReferenceCount)
                 .ReferenceController;
        (((TWeakPtr<FTSTicker::FElement,1> *)((longlong)this + 0x100))->WeakReferenceCount).
        ReferenceController = (pTVar23->WeakReferenceCount).ReferenceController;
        (pTVar23->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar9->WeakReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
          }
        }
      }
      plVar10 = (longlong *)CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      if ((code *)local_288._0_8_ != (code *)0x0) {
        pppuVar26 = &local_278;
        if (local_260 != (undefined ***)0x0) {
          pppuVar26 = local_260;
        }
        (*(code *)(*pppuVar26)[2])();
      }
    }
  }
  (this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.Value.Ticks = local_308;
  (this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.bIsSet = local_300;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LoudnessMeterWidgetView).TimerPanelParams.AnalysisTime.Getter,
             (TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *)local_2f8);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LoudnessMeterWidgetView).TimerPanelParams.OnResetButtonClicked,
             (TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)local_2e0);
  TAttribute<bool>::operator=
            (&(this->LoudnessMeterWidgetView).TimerPanelParams.bIsVisible,
             (TAttribute<bool> *)local_2c8);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LoudnessMeterWidgetView).TimerPanelParams.OnVisibilityToggleRequested,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2a8);
  pFVar28 = (FLoudnessMetric *)local_258;
  do {
    pTVar24 = MakeShared<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1,AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_&>
                        ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> *)
                         &local_378,pFVar28);
    local_318.Object = pTVar24->Object;
    local_318.SharedReferenceCount.ReferenceController =
         (pTVar24->SharedReferenceCount).ReferenceController;
    if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_378.Accessor._4_4_,local_378.Accessor._0_4_));
    UE::Slate::Containers::
    TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
    ::Add((this->LoudnessMeterWidgetView).LoudnessMetrics.Object,&local_318);
    pbVar25 = TAttribute<bool>::Get(&pFVar28->bShowValue);
    if (*pbVar25 != false) {
      UE::Slate::Containers::
      TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
      ::Add(*(TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              **)&((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
                  &(this->LoudnessMeterWidgetView).NumericValues)->field_0x0,&local_318);
    }
    pbVar25 = TAttribute<bool>::Get(&pFVar28->bShowMeter);
    if (*pbVar25 != false) {
      UE::Slate::Containers::
      TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
      ::Add((this->LoudnessMeterWidgetView).MeterValues.Object,&local_318);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_318.SharedReferenceCount.ReferenceController);
    pFVar28 = pFVar28 + 1;
  } while (pFVar28 != (FLoudnessMetric *)&stack0xffffffffffffffb8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if (pvStack_58 != (void *)0x0) {
    FMemory::Free(pvStack_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if (pvStack_70 != (void *)0x0) {
    FMemory::Free(pvStack_70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if (TStack_a8.Object != (UObject *)0x0) {
    FMemory::Free(TStack_a8.Object);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  if ((void *)local_d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  if ((UObject *)local_f0.TextData.Reference != (UObject *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110);
  if (pvStack_108 != (void *)0x0) {
    FMemory::Free(pvStack_108);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_110);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
  if (pvStack_120 != (void *)0x0) {
    FMemory::Free(pvStack_120);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_128);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_140);
  if (pvStack_138 != (void *)0x0) {
    FMemory::Free(pvStack_138);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_140);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
  if (pvStack_158 != (void *)0x0) {
    FMemory::Free(pvStack_158);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_160);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(auStack_1b8 + 0x38));
  if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_178.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(auStack_1b8 + 0x38));
  if ((TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
       *)auStack_1b8._24_8_ !=
      (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
       *)0x0) {
    (**(code **)((((TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
                    *)auStack_1b8._24_8_)->AllocatorInstance).Data + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
  if ((void *)auStack_1b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_1b8._0_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d8);
  if (pvStack_1d0 != (void *)0x0) {
    FMemory::Free(pvStack_1d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
  if (pvStack_1e8 != (void *)0x0) {
    FMemory::Free(pvStack_1e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
  if (pvStack_208 != (void *)0x0) {
    FMemory::Free(pvStack_208);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_210);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
  if ((void *)local_230._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_230._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_230);
  if ((ITextData *)local_258._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_258._8_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a8);
  if (FStack_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_2a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c0);
  if (FStack_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_2b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  if (local_2d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2d8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8);
  if ((void *)local_2f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f8);
  return;
}

// MakeRackUnit @ 14d9433b0

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __cdecl
AudioWidgets::FAudioLoudnessMeter::MakeRackUnit
          (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,
          FAudioAnalyzerRackUnitConstructParams *param_1)

{
  int *piVar1;
  uint uVar2;
  UAudioBus *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar8;
  FAudioLoudnessMeter *this;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  UAudioBus *local_res10;
  
  pUVar3 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  iVar9 = 0;
  if (pUVar3 != (UAudioBus *)0x0) {
    iVar9 = pUVar3->AudioBusChannels + 1;
  }
  uVar2 = (param_1->AudioBusInfo).AudioDeviceId;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pTVar7 = ::operator_new(0x130);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    this = (FAudioLoudnessMeter *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioLoudnessMeter_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)&___7FAudioLoudnessMeter_AudioWidgets__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
              ((TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)&pTVar7[2].SharedReferenceCount);
    MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
              ((TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)&pTVar7[3].SharedReferenceCount);
    MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
              ((TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                *)&pTVar7[4].SharedReferenceCount);
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar7[6]._padding_ = 1;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[7]._padding_ = 0;
    pTVar7[8]._padding_ = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar7[9]._padding_ = 0;
    *(undefined2 *)&pTVar7[9].SharedReferenceCount = 0x100;
    pTVar7[0xb]._padding_ = 0;
    pTVar7[10]._padding_ = 0;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xc]._padding_ = 0;
    pTVar7[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd]._padding_ = 0;
    pTVar7[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar7[0x10]._padding_ + 4) = 0;
    pTVar7[0x10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar7[0x11]._padding_ = 0;
    pTVar7[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x11].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x12]._padding_ = 0;
    *(undefined1 *)&pTVar7[0x12].SharedReferenceCount = 0;
    local_res10 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    Init((FAudioLoudnessMeter *)(pTVar7 + 1),iVar9,uVar2,(TObjectPtr<UAudioBus>)&local_res10);
    this = (FAudioLoudnessMeter *)(pTVar7 + 1);
    pTVar10 = pTVar7;
    if (this == (FAudioLoudnessMeter *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14d9435de;
    }
  }
  if (((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = (longlong)this;
    if (pTVar10 != (TReferenceControllerBase<1> *)this->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)this->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      this->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14d9435de:
  InitLoudnessMeterWidgetView(this,param_1);
  __return_storage_ptr__->Object = (IAudioAnalyzerRackUnit *)this;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// OnLoudnessOutput @ 14d94d760

void __thiscall
AudioWidgets::FAudioLoudnessMeter::OnLoudnessOutput
          (FAudioLoudnessMeter *this,ULKFSAnalyzer *param_1,FLKFSResults *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TOptional<FLKFSResults> *pTVar4;
  
  if ((param_1 == (ULKFSAnalyzer *)(this->LKFSAnalyzer).Object) &&
     (pTVar4 = &this->LatestLoudnessResults, (TOptional<FLKFSResults> *)param_2 != pTVar4)) {
    fVar1 = param_2->Timestamp;
    fVar2 = param_2->Energy;
    fVar3 = param_2->Loudness;
    (pTVar4->TypedValue).Channel = param_2->Channel;
    (pTVar4->TypedValue).Timestamp = fVar1;
    (this->LatestLoudnessResults).TypedValue.Energy = fVar2;
    (this->LatestLoudnessResults).TypedValue.Loudness = fVar3;
    fVar1 = param_2->IntegratedLoudness;
    (this->LatestLoudnessResults).TypedValue.ShortTermLoudness = param_2->ShortTermLoudness;
    (this->LatestLoudnessResults).TypedValue.IntegratedLoudness = fVar1;
    (this->LatestLoudnessResults).TypedValue.GatedLoudness = param_2->GatedLoudness;
    (this->LatestLoudnessResults).bIsSet = true;
  }
  return;
}

// ReleaseLKFSAnalyzer @ 14d9637f0

void __thiscall AudioWidgets::FAudioLoudnessMeter::ReleaseLKFSAnalyzer(FAudioLoudnessMeter *this)

{
  UObject *pUVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = (this->LKFSAnalyzer).Object;
  if ((pUVar1 == (UObject *)0x0) ||
     (FVar2.ID = (this->LatestOverallLKFSResultsDelegateHandle).ID, FVar2.ID == 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8700838700646399854>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioLoudnessMeter.cpp"
                       ,0x92,
                       "LKFSAnalyzer.IsValid() && LatestOverallLKFSResultsDelegateHandle.IsValid()")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[7].field_0x18,FVar2);
  }
  (this->LatestOverallLKFSResultsDelegateHandle).ID = 0;
  pUVar1 = (this->LKFSAnalyzer).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->LKFSAnalyzer).Object = (UObject *)0x0;
  }
  return;
}

// SetAudioBusInfo @ 14d967f70

void __thiscall
AudioWidgets::FAudioLoudnessMeter::SetAudioBusInfo(FAudioLoudnessMeter *this,FAudioBusInfo *param_1)

{
  UAudioBus *local_res10 [3];
  
  local_res10[0] = (param_1->AudioBus).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  Init(this,((param_1->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels + 1,param_1->AudioDeviceId,
       (TObjectPtr<UAudioBus>)local_res10);
  return;
}

// SpawnTab @ 14d970350

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
AudioWidgets::FAudioLoudnessMeter::SpawnTab
          (FAudioLoudnessMeter *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [5];
  FName local_res20;
  FText local_4b8;
  bool local_4a8;
  undefined1 local_4a0 [8];
  ForAnyElementType FStack_498;
  ulonglong local_490;
  FDestructionSentinel local_488;
  FMemScope local_470;
  TSharedRef<SWidget,1> local_468;
  FArguments local_458;
  
  pFVar4 = SDockTab::FArguments::FArguments(&local_458);
  *(undefined1 *)((longlong)&pFVar4->_padding_ + 2) = 1;
  local_4b8.TextData.Reference = RackUnitTypeInfo.DisplayName.TextData.Reference;
  if (RackUnitTypeInfo.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*RackUnitTypeInfo.DisplayName.TextData.Reference + 8))
              (RackUnitTypeInfo.DisplayName.TextData.Reference,local_res10);
  }
  local_4b8.Flags = RackUnitTypeInfo.DisplayName.Flags;
  local_4a8 = true;
  local_490 = 0;
  local_4a0 = (undefined1  [8])0x0;
  FStack_498.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Label).Value,&local_4b8);
  (pFVar4->_Label).bIsSet = local_4a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
             (FWriteAccessScope *)&local_488);
  if (((int)local_490 != 0) && (FStack_498.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_498.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_498,0,0,0x10);
    local_490 = local_490 & 0xffffffff00000000;
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  if (FStack_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  if (local_4b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
  }
  pTVar5 = FLoudnessMeterWidgetView::MakeWidget(&this->LoudnessMeterWidgetView,&local_468);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_470,&local_res20,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *)&local_488,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioLoudnessMeter.cpp"
             ,0x4b,local_res8);
  FMemScope::~FMemScope(&local_470);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            ((TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *)&local_488,__return_storage_ptr__,
             pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_488.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_458);
  return __return_storage_ptr__;
}

// Teardown @ 14d975af0

void __thiscall AudioWidgets::FAudioLoudnessMeter::Teardown(FAudioLoudnessMeter *this)

{
  UObjectBase *this_00;
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = (UObjectBase *)(this->LKFSAnalyzer).Object;
  if (this_00 != (UObjectBase *)0x0) {
    bVar3 = UObjectBase::IsValidLowLevel(this_00);
    if (bVar3) {
      if ((this->LKFSAnalyzer).Object == (UObject *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UAudioAnalyzer::StopAnalyzing((UAudioAnalyzer *)(this->LKFSAnalyzer).Object,(UObject *)0x0);
      ReleaseLKFSAnalyzer(this);
    }
  }
  pUVar1 = (this->AudioBus).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  pUVar1 = (this->LKFSSettings).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->LKFSSettings).Object = (UObject *)0x0;
  }
  this->bUseExternalAudioBus = false;
  return;
}

