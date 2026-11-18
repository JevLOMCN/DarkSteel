// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 12

// FAudioOscilloscope @ 14d8b08b0

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioOscilloscope * __thiscall
AudioWidgets::FAudioOscilloscope::FAudioOscilloscope
          (FAudioOscilloscope *this,uint param_1,uint param_2,float param_3,float param_4,
          float param_5,EAudioPanelLayoutType param_6,FAudioOscilloscopePanelStyle *param_7,
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
  FAudioOscilloscopePanelStyle *pFVar8;
  FAudioOscilloscope *pFVar9;
  UObject *pUVar10;
  UAudioBus *pUVar11;
  UAudioBus *pUVar12;
  longlong local_38;
  longlong local_30 [3];
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FAudioOscilloscope_AudioWidgets__6B_;
  FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle(&this->OscilloscopePanelStyle);
  pTVar1 = &this->AudioBus;
  (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
  (this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OscilloscopePanelWidget).Object = (SAudioOscilloscopePanelWidget *)0x0;
  (this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (UObject *)0x0;
  pFVar8 = param_7;
  if (param_7 == (FAudioOscilloscopePanelStyle *)0x0) {
    pFVar6 = FAudioWidgetsStyle::Get();
    pFVar7 = ::FName::FName((FName *)&param_7,"AudioOscilloscope.PanelStyle");
    pFVar8 = (FAudioOscilloscopePanelStyle *)
             (**(code **)(*(longlong *)pFVar6 + 0xa0))
                       (pFVar6,FAudioOscilloscopePanelStyle::TypeName,*pFVar7,0,1);
    if ((pFVar8 == (FAudioOscilloscopePanelStyle *)0x0) &&
       (pFVar8 = &`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                  ::__l2::Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
       ::__l2::_thread_safe_static_guard_0__)) {
      _Init_thread_header(&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
                  (&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                    ::__l2::Default);
        atexit(`FAudioOscilloscopePanelStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
  }
  FAudioOscilloscopePanelStyle::operator=(&this->OscilloscopePanelStyle,pFVar8);
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
          pFVar9 = (FAudioOscilloscope *)(*pcVar2)();
          return pFVar9;
        }
      }
      pTVar1->Object[1].field_0x8 = EVar5;
    }
  }
  else {
    if (*(byte *)(*(longlong *)param_8.field0_0x0 + 0x30) + 1 != param_2) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<989141903255535648>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscope.cpp"
                         ,0x20,"InExternalAudioBus->GetNumChannels() == InNumChannels");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FAudioOscilloscope *)(*pcVar2)();
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
  CreateDataProvider(this,param_1,param_3,param_4,param_5,param_6);
  CreateOscilloscopeWidget(this,param_2,param_6,(FAudioOscilloscopePanelStyle *)0x0);
  return this;
}

// ~FAudioOscilloscope @ 14d8be110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioOscilloscope::~FAudioOscilloscope(FAudioOscilloscope *this)

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
            ((this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController);
  FAudioOscilloscopePanelStyle::~FAudioOscilloscopePanelStyle(&this->OscilloscopePanelStyle);
  *(undefined ***)this = &___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar4 = *(longlong **)&this->field_0x10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8be185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// CreateAudioBus @ 14d8f1780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioOscilloscope::CreateAudioBus(FAudioOscilloscope *this,uint param_1)

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

// CreateDataProvider @ 14d9044a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioOscilloscope::CreateDataProvider
          (FAudioOscilloscope *this,uint param_1,float param_2,float param_3,float param_4,
          EAudioPanelLayoutType param_5)

{
  int *piVar1;
  int iVar2;
  UAudioBus *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
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
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBus",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscope.cpp"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_5 == Advanced) {
    uVar8 = 1;
  }
  else {
    if (((this->AudioBus).Object == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = (byte)(this->AudioBus).Object[1].field_0x8 + 1;
  }
  pUVar3 = (UAudioBus *)(this->AudioBus).Object;
  pTVar7 = ::operator_new(0x100);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FWaveformAudioSamplesDataProvider *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveformAudioSamplesDataProvider_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    FWaveformAudioSamplesDataProvider::FWaveformAudioSamplesDataProvider
              ((FWaveformAudioSamplesDataProvider *)(pTVar7 + 1),param_1,pUVar3,uVar8,param_2,
               param_3,param_4);
    pFVar9 = (FWaveformAudioSamplesDataProvider *)(pTVar7 + 1);
    if (pFVar9 == (FWaveformAudioSamplesDataProvider *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d9046a3;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar9->_padding_;
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
      pFVar9->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d9046a3:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pFVar9;
  local_40.ReferenceController = pTVar7;
  if (&this->AudioSamplesDataProvider !=
      (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_48) {
    (this->AudioSamplesDataProvider).Object = pFVar9;
    local_48 = (FWaveformAudioSamplesDataProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioSamplesDataProvider).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// CreateOscilloscopeWidget @ 14d9087f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioOscilloscope::CreateOscilloscopeWidget
          (FAudioOscilloscope *this,uint param_1,EAudioPanelLayoutType param_2,
          FAudioOscilloscopePanelStyle *param_3)

{
  byte *pbVar1;
  FWaveformAudioSamplesDataProvider *pFVar2;
  SAudioOscilloscopePanelWidget *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedPtr<SAudioOscilloscopePanelWidget,1> *pTVar10;
  TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar11;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  FName local_res20;
  uint uStack_3ec;
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
  local_3e8;
  SAudioOscilloscopePanelWidget *local_3d0;
  FSharedReferencer<1> local_3c8;
  FFixedSampledSequenceView local_3c0;
  FMemScope local_3a8;
  T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&> local_3a0;
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [24];
  code *local_358;
  longlong lStack_350;
  code *local_348;
  FWeakReferencer<1> FStack_340;
  code *local_338;
  FWeakReferencer<1> FStack_330;
  code *local_328;
  UAudioBus *pUStack_320;
  code *local_318;
  FSharedReferencer<1> FStack_310;
  code *local_308;
  FSharedReferencer<1> FStack_300;
  FArguments local_2f8;
  
  local_3c0.SampleData.DataPtr = (float *)0x0;
  local_3c0.SampleData._8_8_ = local_3c0.SampleData._8_8_ & 0xffffffff00000000;
  local_3c0.NumDimensions = 1;
  if (1 < param_1) {
    local_3c0.NumDimensions = param_1;
  }
  local_3c0.SampleRate = 48000;
  pFVar2 = (this->AudioSamplesDataProvider).Object;
  if (pFVar2 != (FWaveformAudioSamplesDataProvider *)0x0) {
    local_3c0.SampleData.DataPtr = (pFVar2->DataView).SampleData.DataPtr;
    local_3c0.SampleData._8_8_ = *(undefined8 *)&(pFVar2->DataView).SampleData.ArrayNum;
    local_3c0.NumDimensions = (pFVar2->DataView).NumDimensions;
    local_3c0.SampleRate = (pFVar2->DataView).SampleRate;
  }
  local_res10[0] = param_1;
  if (param_3 != (FAudioOscilloscopePanelStyle *)0x0) {
    FAudioOscilloscopePanelStyle::operator=(&this->OscilloscopePanelStyle,param_3);
  }
  pSVar3 = (this->OscilloscopePanelWidget).Object;
  if (pSVar3 != (SAudioOscilloscopePanelWidget *)0x0) {
    SAudioOscilloscopePanelWidget::BuildWidget(pSVar3,&local_3c0,local_res10[0],param_2);
    goto LAB_14d908b0e;
  }
  pFVar9 = SAudioOscilloscopePanelWidget::FArguments::FArguments(&local_2f8);
  pFVar9->_PanelLayoutType = param_2;
  pFVar9->_PanelStyle = &this->OscilloscopePanelStyle;
  local_3a0.Arg0 = &local_3c0;
  local_3a0.Arg1 = local_res10;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3a8,&local_res20,true);
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
  ::
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
            (&local_3e8,"SAudioOscilloscopePanelWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscope.cpp"
             ,0x56,&local_3a0);
  FMemScope::~FMemScope(&local_3a8);
  FLLMScope::~FLLMScope(local_res8);
  pSVar3 = local_3e8._Widget.Object;
  if (local_3e8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_3e8._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SAudioOscilloscopePanelWidget::Construct
            (local_3e8._Widget.Object,pFVar9,(local_3e8._RequiredArgs)->Arg0,
             *(local_3e8._RequiredArgs)->Arg1);
  if (local_3e8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_3e8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_3e8._Widget.Object)->_padding_ + 0x228))(local_3e8._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_14d9089db;
  }
  else {
LAB_14d9089db:
    bVar8 = 0x20;
  }
  *(byte *)&(local_3e8._Widget.Object)->_padding_ =
       (byte)(local_3e8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3e8._Widget.Object)->_padding_ =
       (byte)(local_3e8._Widget.Object)->_padding_ | bVar8;
  if (local_3e8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_3e8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_3e8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar5.ReferenceController = local_3e8._Widget.SharedReferenceCount.ReferenceController;
  local_3e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3e8._Widget.Object = (SAudioOscilloscopePanelWidget *)0x0;
  if (pSVar3 == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_3d0 = pSVar3;
  local_3c8.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OscilloscopePanelWidget != (TSharedPtr<SAudioOscilloscopePanelWidget,1> *)&local_3d0) {
    (this->OscilloscopePanelWidget).Object = pSVar3;
    local_3d0 = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OscilloscopePanelWidget).SharedReferenceCount,&local_3c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SAudioOscilloscopePanelWidget::FArguments::~FArguments(&local_2f8);
LAB_14d908b0e:
  pTVar11 = &this->AudioSamplesDataProvider;
  pTVar10 = &this->OscilloscopePanelWidget;
  if (pTVar11->Object != (FWaveformAudioSamplesDataProvider *)0x0) {
    lStack_350 = CONCAT44(uStack_3ec,0x2a8);
    local_358 = SAudioOscilloscopePanelWidget::_vcall__8__flat______;
    TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
    ::AddSP<SAudioOscilloscopePanelWidget>
              ((TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pTVar11->Object->OnDataViewGenerated,(SAudioOscilloscopePanelWidget *)local_390,
               (pmf_7fbefad8 *)pTVar10->Object);
    if (param_2 == Advanced) {
      if (pTVar10->Object == (SAudioOscilloscopePanelWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FStack_340.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)uStack_3ec << 0x20);
      local_348 = FWaveformAudioSamplesDataProvider::SetChannelToAnalyze;
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pTVar10->Object->OnSelectedChannelChanged,
                 (FWaveformAudioSamplesDataProvider *)(local_390 + 8),
                 (pmf_e3a4ffb0 *)pTVar11->Object);
      if (pTVar10->Object == (SAudioOscilloscopePanelWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FStack_330.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)uStack_3ec << 0x20);
      local_338 = FWaveformAudioSamplesDataProvider::SetTriggerMode;
      TMulticastDelegateRegistration<void___cdecl(enum_EAudioOscilloscopeTriggerMode),FDefaultDelegateUserPolicy>
      ::AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
                (&pTVar10->Object->OnTriggerModeChanged,
                 (FWaveformAudioSamplesDataProvider *)local_380,(pmf_823ec71d *)pTVar11->Object);
      if (pTVar10->Object == (SAudioOscilloscopePanelWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pUStack_320 = (UAudioBus *)((ulonglong)uStack_3ec << 0x20);
      local_328 = FWaveformAudioSamplesDataProvider::SetTriggerThreshold;
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &pTVar10->Object->OnTriggerThresholdChanged,
                 (FWaveformAudioSamplesDataProvider *)(local_380 + 8),
                 (pmf_294a830d *)pTVar11->Object);
      if (pTVar10->Object == (SAudioOscilloscopePanelWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FStack_310.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)uStack_3ec << 0x20);
      local_318 = FWaveformAudioSamplesDataProvider::SetTimeWindow;
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &pTVar10->Object->OnTimeWindowValueChanged,
                 (FWaveformAudioSamplesDataProvider *)local_370,(pmf_294a830d *)pTVar11->Object);
      if (pTVar10->Object == (SAudioOscilloscopePanelWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FStack_300.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)uStack_3ec << 0x20);
      local_308 = FWaveformAudioSamplesDataProvider::SetAnalysisPeriod;
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &pTVar10->Object->OnAnalysisPeriodChanged,
                 (FWaveformAudioSamplesDataProvider *)(local_370 + 8),
                 (pmf_294a830d *)pTVar11->Object);
    }
  }
  return;
}

// GetAudioBus @ 14d92acd0

/* WARNING: Enum "Type": Some values do not have unique names */

UAudioBus * __thiscall AudioWidgets::FAudioOscilloscope::GetAudioBus(FAudioOscilloscope *this)

{
  return (UAudioBus *)(this->AudioBus).Object;
}

// GetPanelWidget @ 14d932f80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
AudioWidgets::FAudioOscilloscope::GetPanelWidget
          (FAudioOscilloscope *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SAudioOscilloscopePanelWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
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
  pSVar1 = (this->OscilloscopePanelWidget).Object;
  pTVar2 = (this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SAudioOscilloscopePanelWidget *)0x0) {
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

// MakeRackUnit @ 14d943990

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __cdecl
AudioWidgets::FAudioOscilloscope::MakeRackUnit
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
  FAudioOscilloscopePanelStyle *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  IAudioAnalyzerRackUnit *pIVar14;
  UAudioBus *local_res8;
  FName local_res10;
  
  pIVar3 = param_1->StyleSet;
  pFVar8 = ::FName::FName(&local_res10,"AudioOscilloscope.PanelStyle");
  pFVar9 = (FAudioOscilloscopePanelStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))
                     (pIVar3,FAudioOscilloscopePanelStyle::TypeName,*pFVar8,0,1);
  if ((pFVar9 == (FAudioOscilloscopePanelStyle *)0x0) &&
     (pFVar9 = &`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                ::__l2::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) <
     `public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
     ::__l2::_thread_safe_static_guard_0__)) {
    _Init_thread_header(&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
                (&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
                  ::__l2::Default);
      atexit(`FAudioOscilloscopePanelStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
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
  pTVar10 = ::operator_new(0x4a0);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pIVar14 = (IAudioAnalyzerRackUnit *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioOscilloscope_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    local_res8 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FAudioOscilloscope((FAudioOscilloscope *)(pTVar10 + 1),(param_1->AudioBusInfo).AudioDeviceId,
                       uVar13,__real_41200000,__real_41200000,__real_41200000,Basic,pFVar9,
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
      goto LAB_14d943b56;
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
LAB_14d943b56:
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

// SetAudioBusInfo @ 14d968030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioOscilloscope::SetAudioBusInfo(FAudioOscilloscope *this,FAudioBusInfo *param_1)

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
  CreateDataProvider(this,param_1->AudioDeviceId,__real_41200000,__real_41200000,__real_41200000,
                     Basic);
  CreateOscilloscopeWidget
            (this,((param_1->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels + 1,Basic,
             (FAudioOscilloscopePanelStyle *)0x0);
  return;
}

// SpawnTab @ 14d9709f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
AudioWidgets::FAudioOscilloscope::SpawnTab
          (FAudioOscilloscope *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SAudioOscilloscopePanelWidget *pSVar2;
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
  if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
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
  pTVar1 = (this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->OscilloscopePanelWidget).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SAudioOscilloscopePanelWidget *)0x0) {
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
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscope.cpp"
             ,0x92,local_res8);
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

// StartProcessing @ 14d971810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioOscilloscope::StartProcessing(FAudioOscilloscope *this)

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

// StopProcessing @ 14d972280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AudioWidgets::FAudioOscilloscope::StopProcessing(FAudioOscilloscope *this)

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

