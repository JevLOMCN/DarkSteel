// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 12

// FAudioVectorscope @ 14d8b4380

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioVectorscope * __thiscall
AudioWidgets::FAudioVectorscope::FAudioVectorscope
          (FAudioVectorscope *this,uint param_1,uint param_2,float param_3,float param_4,
          float param_5,EAudioPanelLayoutType param_6,FAudioVectorscopePanelStyle *param_7,
          TObjectPtr<UAudioBus> param_8)

{
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  code *pcVar2;
  TObjectPtr<UAudioBus> TVar3;
  bool bVar4;
  EAudioBusChannels EVar5;
  FAudioWidgetsStyle *pFVar6;
  FName *pFVar7;
  FAudioVectorscopePanelStyle *pFVar8;
  FAudioVectorscope *pFVar9;
  UObject *pUVar10;
  UAudioBus *pUVar11;
  UAudioBus *pUVar12;
  longlong local_38;
  longlong local_30 [3];
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FAudioVectorscope_AudioWidgets__6B_;
  FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle(&this->VectorscopePanelStyle);
  pTVar1 = &this->AudioBus;
  (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
  (this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorscopePanelWidget).Object = (SAudioVectorscopePanelWidget *)0x0;
  (this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (UObject *)0x0;
  pFVar8 = param_7;
  if (param_7 == (FAudioVectorscopePanelStyle *)0x0) {
    pFVar6 = FAudioWidgetsStyle::Get();
    pFVar7 = ::FName::FName((FName *)&param_7,"AudioVectorscope.PanelStyle");
    pFVar8 = (FAudioVectorscopePanelStyle *)
             (**(code **)(*(longlong *)pFVar6 + 0xa0))
                       (pFVar6,FAudioVectorscopePanelStyle::TypeName,*pFVar7,0,1);
    if ((pFVar8 == (FAudioVectorscopePanelStyle *)0x0) &&
       (pFVar8 = &`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                  ::__l2::Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
       ::__l2::_thread_safe_static_guard_0__)) {
      _Init_thread_header(&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
                  (&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                    ::__l2::Default);
        atexit(`FAudioVectorscopePanelStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
  }
  FAudioVectorscopePanelStyle::operator=(&this->VectorscopePanelStyle,pFVar8);
  TVar3 = param_8;
  if (*(longlong *)param_8.field0_0x0 == 0) {
    if (param_2 != 0) {
      pUVar10 = GetTransientPackageAsObject();
      pUVar11 = NewObject<UAudioBus>(pUVar10);
      pUVar12 = (UAudioBus *)0x0;
      if (pUVar11 != (UAudioBus *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pUVar11);
        pUVar12 = pUVar11;
      }
      if (pTVar1 == (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                     *)local_30) {
        if (pUVar12 != (UAudioBus *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar12);
        }
      }
      else {
        if (pTVar1->Object != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        }
        pTVar1->Object = (UObject *)pUVar12;
      }
      EVar5 = AudioBusUtils::ConvertIntToEAudioBusChannels(param_2);
      if (pTVar1->Object == (UObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FAudioVectorscope *)(*pcVar2)();
          return pFVar9;
        }
      }
      pTVar1->Object[1].field_0x8 = EVar5;
    }
  }
  else {
    if (*(byte *)(*(longlong *)param_8.field0_0x0 + 0x30) + 1 != param_2) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4689419085329465311>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscope.cpp"
                         ,0x21,"InExternalAudioBus->GetNumChannels() == InNumChannels");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FAudioVectorscope *)(*pcVar2)();
        return pFVar9;
      }
    }
    pUVar12 = *(UAudioBus **)TVar3.field0_0x0;
    pUVar11 = (UAudioBus *)0x0;
    if (pUVar12 != (UAudioBus *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar12);
      pUVar11 = pUVar12;
    }
    if (pTVar1 == (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)&local_38) {
      if (pUVar11 != (UAudioBus *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar11);
      }
    }
    else {
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
      }
      pTVar1->Object = (UObject *)pUVar11;
    }
  }
  CreateDataProvider(this,param_1,param_3,param_4,param_5);
  CreateVectorscopeWidget(this,param_6,(FAudioVectorscopePanelStyle *)0x0);
  return this;
}

// ~FAudioVectorscope @ 14d8bf0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioVectorscope::~FAudioVectorscope(FAudioVectorscope *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  longlong *plVar4;
  
  pUVar3 = (this->AudioBus).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController);
  FAudioVectorscopePanelStyle::~FAudioVectorscopePanelStyle(&this->VectorscopePanelStyle);
  *(undefined ***)this = &___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar4 = *(longlong **)&this->field_0x10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8bf135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// CreateAudioBus @ 14d8f1850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioVectorscope::CreateAudioBus(FAudioVectorscope *this,uint param_1)

{
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  code *pcVar2;
  EAudioBusChannels EVar3;
  bool bVar4;
  UObject *pUVar5;
  UAudioBus *this_00;
  UAudioBus *pUVar6;
  longlong local_18 [2];
  
  pUVar5 = GetTransientPackageAsObject();
  this_00 = NewObject<UAudioBus>(pUVar5);
  pUVar6 = (UAudioBus *)0x0;
  if (this_00 != (UAudioBus *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    pUVar6 = this_00;
  }
  pTVar1 = &this->AudioBus;
  if (pTVar1 == (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_18) {
    if (pUVar6 != (UAudioBus *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar6);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar6;
  }
  EVar3 = AudioBusUtils::ConvertIntToEAudioBusChannels(param_1);
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1->Object[1].field_0x8 = EVar3;
  return;
}

// CreateDataProvider @ 14d904740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioVectorscope::CreateDataProvider
          (FAudioVectorscope *this,uint param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  EAudioBusChannels EVar3;
  UAudioBus *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  FWaveformAudioSamplesDataProvider *pFVar9;
  FWaveformAudioSamplesDataProvider *local_48;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> aFStack_30 [5];
  
  if (param_1 == 0xffffffff) {
    local_38 = 0;
    aFStack_30[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->AudioSamplesDataProvider !=
        (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_38) {
      (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AudioSamplesDataProvider).SharedReferenceCount,aFStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_30[0].ReferenceController);
    return;
  }
  if (((this->AudioBus).Object == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBus",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscope.cpp"
                         ,0x3c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->AudioBus).Object == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar4 = (UAudioBus *)(this->AudioBus).Object;
  EVar3 = pUVar4->AudioBusChannels;
  pTVar8 = ::operator_new(0x100);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FWaveformAudioSamplesDataProvider *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveformAudioSamplesDataProvider_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    FWaveformAudioSamplesDataProvider::FWaveformAudioSamplesDataProvider
              ((FWaveformAudioSamplesDataProvider *)(pTVar8 + 1),param_1,pUVar4,EVar3 + 1,param_2,
               param_3,param_4);
    pFVar9 = (FWaveformAudioSamplesDataProvider *)(pTVar8 + 1);
    if (pFVar9 == (FWaveformAudioSamplesDataProvider *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14d90492b;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar9->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14d90492b:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pFVar9;
  local_40.ReferenceController = pTVar8;
  if (&this->AudioSamplesDataProvider !=
      (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_48) {
    (this->AudioSamplesDataProvider).Object = pFVar9;
    local_48 = (FWaveformAudioSamplesDataProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioSamplesDataProvider).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// CreateVectorscopeWidget @ 14d90ca60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioVectorscope::CreateVectorscopeWidget
          (FAudioVectorscope *this,EAudioPanelLayoutType param_1,
          FAudioVectorscopePanelStyle *param_2)

{
  TSharedPtr<SAudioVectorscopePanelWidget,1> *pTVar1;
  FWaveformAudioSamplesDataProvider *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
  *this_00;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar6;
  T1RequiredArgs<FFixedSampledSequenceView_&> local_res8 [4];
  ulonglong uStack_2e0;
  SAudioVectorscopePanelWidget *local_2d8;
  FSharedReferencer<1> local_2d0;
  FFixedSampledSequenceView local_2c8;
  TSharedRef<SAudioVectorscopePanelWidget,1> local_2b0;
  code *local_298;
  ulonglong uStack_290;
  TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
  local_288;
  undefined1 local_270 [528];
  undefined1 local_60 [40];
  
  pFVar2 = (this->AudioSamplesDataProvider).Object;
  local_2c8.SampleData.DataPtr = (float *)0x0;
  local_2c8.SampleData._8_8_ = local_2c8.SampleData._8_8_ & 0xffffffff00000000;
  local_2c8.NumDimensions = 2;
  local_2c8.SampleRate = 48000;
  if (pFVar2 != (FWaveformAudioSamplesDataProvider *)0x0) {
    local_2c8.SampleData.DataPtr = (pFVar2->DataView).SampleData.DataPtr;
    local_2c8.SampleData._8_8_ = *(undefined8 *)&(pFVar2->DataView).SampleData.ArrayNum;
    local_2c8.NumDimensions = (pFVar2->DataView).NumDimensions;
    local_2c8.SampleRate = (pFVar2->DataView).SampleRate;
  }
  if (param_2 != (FAudioVectorscopePanelStyle *)0x0) {
    FAudioVectorscopePanelStyle::operator=(&this->VectorscopePanelStyle,param_2);
  }
  pTVar1 = &this->VectorscopePanelWidget;
  if (pTVar1->Object == (SAudioVectorscopePanelWidget *)0x0) {
    pFVar5 = SAudioVectorscopePanelWidget::FArguments::FArguments((FArguments *)local_270);
    pFVar5->_PanelLayoutType = param_1;
    pFVar5->_PanelStyle = &this->VectorscopePanelStyle;
    local_res8[0].Arg0 = &local_2c8;
    this_00 = MakeTDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
                        (&local_288,"SAudioVectorscopePanelWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscope.cpp"
                         ,0x52,local_res8);
    pTVar6 = TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
             ::operator<<=(this_00,&local_2b0,pFVar5);
    local_2d0.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_2d8 = pTVar6->Object;
    if (local_2d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<SAudioVectorscopePanelWidget,1> *)&local_2d8) {
      pTVar1->Object = local_2d8;
      local_2d8 = (SAudioVectorscopePanelWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VectorscopePanelWidget).SharedReferenceCount,&local_2d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    if ((void *)local_60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_270._512_8_);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_270);
  }
  else {
    SAudioVectorscopePanelWidget::BuildWidget(pTVar1->Object,&local_2c8,param_1);
  }
  pFVar2 = (this->AudioSamplesDataProvider).Object;
  if (pFVar2 != (FWaveformAudioSamplesDataProvider *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
    ::AddSP<SAudioVectorscopePanelWidget>
              ((TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pFVar2->OnDataViewGenerated,(SAudioVectorscopePanelWidget *)(local_res8 + 2),
               (pmf_8a709b24 *)pTVar1->Object);
    if (param_1 == Advanced) {
      if (pTVar1->Object == (SAudioVectorscopePanelWidget *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
      local_298 = FWaveformAudioSamplesDataProvider::SetTimeWindow;
      uStack_290 = uStack_2e0;
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &pTVar1->Object->OnDisplayPersistenceValueChanged,
                 (FWaveformAudioSamplesDataProvider *)(local_res8 + 3),
                 (pmf_294a830d *)(this->AudioSamplesDataProvider).Object);
    }
  }
  return;
}

// GetAudioBus @ 14d92ad00

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioBus * __thiscall AudioWidgets::FAudioVectorscope::GetAudioBus(FAudioVectorscope *this)

{
  return (UAudioBus *)(this->AudioBus).Object;
}

// GetPanelWidget @ 14d933040

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
AudioWidgets::FAudioVectorscope::GetPanelWidget
          (FAudioVectorscope *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SAudioVectorscopePanelWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  if ((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pSVar1 = (this->VectorscopePanelWidget).Object;
  pTVar2 = (this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// MakeRackUnit @ 14d944e40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __cdecl
AudioWidgets::FAudioVectorscope::MakeRackUnit
          (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,
          FAudioAnalyzerRackUnitConstructParams *param_1)

{
  int *piVar1;
  int iVar2;
  ISlateStyle *pIVar3;
  UAudioBus *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FAudioVectorscopePanelStyle *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  IAudioAnalyzerRackUnit *pIVar14;
  UAudioBus *local_res8;
  FName local_res10;
  
  pIVar3 = param_1->StyleSet;
  pFVar8 = ::FName::FName(&local_res10,"AudioVectorscope.PanelStyle");
  pFVar9 = (FAudioVectorscopePanelStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))
                     (pIVar3,FAudioVectorscopePanelStyle::TypeName,*pFVar8,0,1);
  if ((pFVar9 == (FAudioVectorscopePanelStyle *)0x0) &&
     (pFVar9 = &`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                ::__l2::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) <
     `public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
     ::__l2::_thread_safe_static_guard_0__)) {
    _Init_thread_header(&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
                (&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                  ::__l2::Default);
      atexit(`FAudioVectorscopePanelStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pUVar4 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (pUVar4 == (UAudioBus *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = pUVar4->AudioBusChannels + 1;
  }
  pTVar10 = ::operator_new(0x200);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pIVar14 = (IAudioAnalyzerRackUnit *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioVectorscope_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    local_res8 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FAudioVectorscope((FAudioVectorscope *)(pTVar10 + 1),(param_1->AudioBusInfo).AudioDeviceId,
                      uVar13,__real_41f00000,__real_41f00000,__real_41200000,Basic,pFVar9,
                      (TObjectPtr<UAudioBus>)&local_res8);
    pIVar14 = (IAudioAnalyzerRackUnit *)(pTVar10 + 1);
    pTVar12 = pTVar10;
    if (pIVar14 == (IAudioAnalyzerRackUnit *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar6)();
        return pTVar11;
      }
      goto LAB_14d94500e;
    }
  }
  if (((*(longlong *)&pIVar14->field_0x8 == 0) || (*(longlong *)&pIVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IAudioAnalyzerRackUnit **)&pIVar14->field_0x8 = pIVar14;
    if (pTVar12 != *(TReferenceControllerBase<1> **)&pIVar14->field_0x10) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pIVar14->field_0x10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar14->field_0x10 = pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14d94500e:
  __return_storage_ptr__->Object = pIVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// SetAudioBusInfo @ 14d9681b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioVectorscope::SetAudioBusInfo(FAudioVectorscope *this,FAudioBusInfo *param_1)

{
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  UAudioBus *this_00;
  UAudioBus *pUVar2;
  TObjectPtr<UAudioBus>_u_0 local_18 [2];
  
  this_00 = (param_1->AudioBus).field0_0x0.DebugPtr;
  pUVar2 = (UAudioBus *)0x0;
  if (this_00 != (UAudioBus *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    pUVar2 = this_00;
  }
  pTVar1 = &this->AudioBus;
  if ((TObjectPtr<UAudioBus>_u_0 *)pTVar1 == local_18) {
    if (pUVar2 != (UAudioBus *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar2);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar2;
  }
  CreateDataProvider(this,param_1->AudioDeviceId,__real_41f00000,__real_41f00000,__real_41200000);
  CreateVectorscopeWidget(this,Basic,(FAudioVectorscopePanelStyle *)0x0);
  return;
}

// SpawnTab @ 14d971160

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
AudioWidgets::FAudioVectorscope::SpawnTab
          (FAudioVectorscope *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SAudioVectorscopePanelWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  TSharedRef<SDockTab,1> *pTVar6;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined1 local_res20 [8];
  FText local_4d8;
  bool local_4c8;
  undefined1 local_4c0 [8];
  ForAnyElementType FStack_4b8;
  ulonglong local_4b0;
  FName local_4a8;
  FMemScope local_4a0;
  FDestructionSentinel local_498;
  SWidget *local_480;
  TReferenceControllerBase<1> *pTStack_478;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_470;
  FArguments local_458;
  
  pFVar5 = SDockTab::FArguments::FArguments(&local_458);
  *(undefined1 *)((longlong)&pFVar5->_padding_ + 2) = 1;
  local_4d8.TextData.Reference = RackUnitTypeInfo.DisplayName.TextData.Reference;
  if (RackUnitTypeInfo.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*RackUnitTypeInfo.DisplayName.TextData.Reference + 8))
              (RackUnitTypeInfo.DisplayName.TextData.Reference,local_res20);
  }
  local_4d8.Flags = RackUnitTypeInfo.DisplayName.Flags;
  local_4c8 = true;
  local_4b0 = 0;
  local_4c0 = (undefined1  [8])0x0;
  FStack_4b8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar5->_Label).Value,&local_4d8);
  (pFVar5->_Label).bIsSet = local_4c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c0,
             (FWriteAccessScope *)&local_498);
  if (((int)local_4b0 != 0) && (FStack_4b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4b8,0,0,0x10);
    local_4b0 = local_4b0 & 0xffffffff00000000;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_4b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c0);
  if (local_4d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
  }
  if ((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pTVar1 = (this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->VectorscopePanelWidget).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SAudioVectorscopePanelWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SDockTab,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_480 = (pFVar5->_Content).Widget.Object;
  pTStack_478 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar5->_Content).Widget.Object = (SWidget *)pSVar2;
  (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_478);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4a0,&local_4a8,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_470,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscope.cpp"
             ,0x8a,local_res8);
  FMemScope::~FMemScope(&local_4a0);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_470,__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SDockTab::FArguments::~FArguments(&local_458);
  return __return_storage_ptr__;
}

// StartProcessing @ 14d971830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioVectorscope::StartProcessing(FAudioVectorscope *this)

{
  uint uVar1;
  int iVar2;
  FWaveformAudioSamplesDataProvider *this_00;
  FMixerDevice *pFVar3;
  code *pcVar4;
  FAudioBusKey FVar5;
  FAudioBusKey FVar6;
  bool bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UAudioBusSubsystem *this_01;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_58;
  FString FStack_48;
  TSharedPtr<Audio::FPatchOutput,1> TStack_38;
  FStringFormatArg FStack_28;
  
  this_00 = (this->AudioSamplesDataProvider).Object;
  if (this_00 == (FWaveformAudioSamplesDataProvider *)0x0) {
    return;
  }
  if (this_00->bIsProcessing != false) {
    return;
  }
  if ((this_00->AudioBus == (UAudioBus *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBus",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x79,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this_00->MixerDevice == (FMixerDevice *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x7a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FWaveformAudioSamplesDataProvider::ResetAudioBuffers(this_00);
  pFVar3 = this_00->MixerDevice;
  uVar1 = *(uint *)((longlong)&this_00->AudioBus->_padding_ + 4);
  pUVar8 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 != (UClass *)0x0) goto LAB_14d971909;
  }
  else if (pUVar8 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14d971909:
    pUVar9 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar2 = (int)pUVar9->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) goto LAB_14d971939;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_14d971939:
  this_01 = (UAudioBusSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pFVar3->field_0x228,pUVar8);
  if ((this_01 == (UAudioBusSubsystem *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBusSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x82,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FStringFormatArg::FStringFormatArg(&FStack_28,uVar1);
  TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_58.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&TStack_58.AllocatorInstance,1,&TStack_58.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (TStack_58.AllocatorInstance.Data,&FStack_28,1);
  ::FString::FormatImpl(&FStack_48,L"_WaveformAudioSamplesDataProvider_AudioBusId_{0}",&TStack_58);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)TStack_58.AllocatorInstance.Data,TStack_58.ArrayNum);
  if ((FStringFormatArg *)TStack_58.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(TStack_58.AllocatorInstance.Data);
  }
  if (FStack_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.StringValue.Data.AllocatorInstance.Data);
  }
  FVar5.InstanceId = 0xffffffff;
  FVar5.ObjectId = uVar1;
  UAudioBusSubsystem::StartAudioBus(this_01,FVar5,&FStack_48,this_00->NumChannels,false);
  FVar6.InstanceId = 0xffffffff;
  FVar6.ObjectId = uVar1;
  pTVar10 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                      (this_01,&TStack_38,FVar6,*(int *)&this_00->MixerDevice->field_0x8c,
                       this_00->NumChannels,__real_3f800000);
  if (&this_00->PatchOutput != pTVar10) {
    (this_00->PatchOutput).Object = pTVar10->Object;
    pTVar10->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this_00->PatchOutput).SharedReferenceCount,&pTVar10->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_38.SharedReferenceCount.ReferenceController);
  this_00->bIsProcessing = true;
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return;
}

// StopProcessing @ 14d9722f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioVectorscope::StopProcessing(FAudioVectorscope *this)

{
  FWaveformAudioSamplesDataProvider *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar1 = (this->AudioSamplesDataProvider).Object;
  if ((pFVar1 != (FWaveformAudioSamplesDataProvider *)0x0) && (pFVar1->bIsProcessing != false)) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pFVar1->PatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_18) {
      (pFVar1->PatchOutput).Object = (FPatchOutput *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar1->PatchOutput).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    pFVar1->bIsProcessing = false;
  }
  return;
}

