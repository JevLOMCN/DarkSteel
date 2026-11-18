// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 19

// StaticClass @ 14d892fe0

UClass * __cdecl UAudioOscilloscope::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioOscilloscope",
               &Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton,
               StaticRegisterNativesUAudioOscilloscope,0x670,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioOscilloscope>,
               InternalVTableHelperCtorCaller<UAudioOscilloscope>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton;
}

// UAudioOscilloscope @ 14d8b97d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioOscilloscope * __thiscall
UAudioOscilloscope::UAudioOscilloscope(UAudioOscilloscope *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle(&this->OscilloscopeStyle);
  this->MaxTimeWindowMs = 5000.0;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  this->AmplitudeGridLabelsUnit = Linear;
  this->TriggerMode = None;
  this->TriggerThreshold = 0.0;
  this->PanelLayoutType = Basic;
  (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
  (this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OscilloscopePanelWidget).Object = (SAudioOscilloscopePanelWidget *)0x0;
  (this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DummyAudioSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyAudioSamples).ArrayNum = 0;
  (this->DummyAudioSamples).ArrayMax = 0;
  (this->DummyDataView).SampleData.DataPtr = (float *)0x0;
  (this->DummyDataView).SampleData.ArrayNum = 0;
  (this->DummyDataView).NumDimensions = 0;
  (this->DummyDataView).SampleRate = 0;
  this->TimeWindowMs = 10.0;
  this->AnalysisPeriodMs = 10.0;
  this->bShowTimeGrid = true;
  this->TimeGridLabelsUnit = Samples;
  this->bShowAmplitudeGrid = true;
  this->bShowAmplitudeLabels = true;
  this->ChannelToAnalyze = 1;
  this->NumChannels = 1;
  return this;
}

// UAudioOscilloscope @ 14d8b98b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioOscilloscope * __thiscall
UAudioOscilloscope::UAudioOscilloscope(UAudioOscilloscope *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAudioWidgetsStyle *pFVar7;
  FName *pFVar8;
  FAudioOscilloscopePanelStyle *pFVar9;
  UAudioOscilloscope *pUVar10;
  longlong lVar11;
  FName local_res8;
  undefined4 local_28 [5];
  undefined4 uStack_14;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar7 = FAudioWidgetsStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"AudioOscilloscope.PanelStyle");
  pFVar9 = (FAudioOscilloscopePanelStyle *)
           (**(code **)(*(longlong *)pFVar7 + 0xa0))
                     (pFVar7,FAudioOscilloscopePanelStyle::TypeName,*pFVar8,0,1);
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
  FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle(&this->OscilloscopeStyle,pFVar9);
  this->MaxTimeWindowMs = 5000.0;
  pTVar2 = &this->DummyAudioSamples;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  piVar1 = &(this->DummyAudioSamples).ArrayMax;
  this->TimeWindowMs = 10.0;
  *piVar1 = 0;
  this->AnalysisPeriodMs = 10.0;
  this->bShowTimeGrid = true;
  this->TimeGridLabelsUnit = Samples;
  this->bShowAmplitudeGrid = true;
  this->bShowAmplitudeLabels = true;
  this->AmplitudeGridLabelsUnit = Linear;
  this->TriggerMode = None;
  this->TriggerThreshold = 0.0;
  this->PanelLayoutType = Basic;
  this->ChannelToAnalyze = 1;
  (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
  (this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OscilloscopePanelWidget).Object = (SAudioOscilloscopePanelWidget *)0x0;
  (this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NumChannels = 1;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DummyAudioSamples).ArrayNum = 0;
  (this->DummyDataView).SampleData.DataPtr = (float *)0x0;
  (this->DummyDataView).SampleData.ArrayNum = 0;
  (this->DummyDataView).NumDimensions = 0;
  (this->DummyDataView).SampleRate = 0;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    lVar11 = 240000;
    local_28[0] = 0;
    (this->DummyAudioSamples).ArrayNum = 0;
    if (*piVar1 != 240000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,240000,&pTVar2->AllocatorInstance,0,piVar1);
    }
    do {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pUVar10 = (UAudioOscilloscope *)(*pcVar4)();
          return pUVar10;
        }
      }
      iVar6 = (this->DummyAudioSamples).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DummyAudioSamples).ArrayNum = iVar6 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28[0];
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    iVar6 = (this->DummyAudioSamples).ArrayNum;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar10 = (UAudioOscilloscope *)(*pcVar4)();
        return pUVar10;
      }
    }
    (this->DummyDataView).SampleData.DataPtr = (float *)pFVar3;
    *(ulonglong *)&(this->DummyDataView).SampleData.ArrayNum = CONCAT44(uStack_14,iVar6);
    (this->DummyDataView).NumDimensions = 1;
    (this->DummyDataView).SampleRate = 48000;
  }
  return this;
}

// ~UAudioOscilloscope @ 14d8c1580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioOscilloscope::~UAudioOscilloscope(UAudioOscilloscope *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->DummyAudioSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController);
  FAudioOscilloscopePanelStyle::~FAudioOscilloscopePanelStyle(&this->OscilloscopeStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// CanTriggeringBeSet @ 14d8e5000

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UAudioOscilloscope::CanTriggeringBeSet(UAudioOscilloscope *this)

{
  if ((this->PanelLayoutType != Advanced) &&
     ((this->PanelLayoutType != Basic || (this->NumChannels != 1)))) {
    return false;
  }
  return true;
}

// CreateDataProvider @ 14d9049c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAudioOscilloscope::CreateDataProvider(UAudioOscilloscope *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UWorld *this_00;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  FWaveformAudioSamplesDataProvider *pFVar9;
  FWaveformAudioSamplesDataProvider *local_38;
  FSharedReferencer<1> local_30;
  FAudioDeviceHandle local_28;
  
  this_00 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    return;
  }
  UWorld::GetAudioDevice(this_00,&local_28);
  bVar5 = FAudioDeviceHandle::IsValid(&local_28);
  if (!bVar5) goto LAB_14d904bc1;
  if (this->PanelLayoutType == Advanced) {
    uVar8 = 1;
  }
  else {
    uVar8 = ((this->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels + 1;
  }
  uVar6 = FAudioDeviceHandle::GetDeviceID(&local_28);
  pTVar7 = ::operator_new(0x100);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FWaveformAudioSamplesDataProvider *)&DAT_00000010;
LAB_14d904af1:
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
        plVar3 = (longlong *)pFVar9->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar9->_padding_ = (longlong)pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveformAudioSamplesDataProvider_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    AudioWidgets::FWaveformAudioSamplesDataProvider::FWaveformAudioSamplesDataProvider
              ((FWaveformAudioSamplesDataProvider *)(pTVar7 + 1),uVar6,
               (this->AudioBus).field0_0x0.DebugPtr,uVar8,this->TimeWindowMs,this->MaxTimeWindowMs,
               this->AnalysisPeriodMs);
    pFVar9 = (FWaveformAudioSamplesDataProvider *)(pTVar7 + 1);
    if (pFVar9 != (FWaveformAudioSamplesDataProvider *)0x0) goto LAB_14d904af1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar9;
  local_30.ReferenceController = pTVar7;
  if (&this->AudioSamplesDataProvider !=
      (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_38) {
    (this->AudioSamplesDataProvider).Object = pFVar9;
    local_38 = (FWaveformAudioSamplesDataProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioSamplesDataProvider).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14d904bc1:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return;
}

// CreateDummyOscilloscopeWidget @ 14d9051f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioOscilloscope::CreateDummyOscilloscopeWidget(UAudioOscilloscope *this)

{
  byte *pbVar1;
  code *pcVar2;
  SAudioOscilloscopePanelWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
  local_318;
  SAudioOscilloscopePanelWidget *local_300;
  FSharedReferencer<1> local_2f8;
  T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&> local_2f0;
  FArguments local_2e0;
  
  pFVar8 = SAudioOscilloscopePanelWidget::FArguments::FArguments(&local_2e0);
  pFVar8->_PanelLayoutType = this->PanelLayoutType;
  pFVar8->_PanelStyle = &this->OscilloscopeStyle;
  local_2f0.Arg0 = &this->DummyDataView;
  local_2f0.Arg1 = &DummyNumChannels;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
  ::
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
            (&local_318,"SAudioOscilloscopePanelWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscopeUMG.cpp"
             ,0x22,&local_2f0);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pSVar3 = local_318._Widget.Object;
  if (local_318._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_318._Widget.Object,(FSlateBaseNamedArgs *)pFVar8);
  SAudioOscilloscopePanelWidget::Construct
            (local_318._Widget.Object,pFVar8,(local_318._RequiredArgs)->Arg0,
             *(local_318._RequiredArgs)->Arg1);
  if (local_318._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((local_318._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_318._Widget.Object)->_padding_ + 0x228))(local_318._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d905373;
  }
  bVar7 = 0x20;
LAB_14d905373:
  *(byte *)&(local_318._Widget.Object)->_padding_ =
       (byte)(local_318._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_318._Widget.Object)->_padding_ =
       (byte)(local_318._Widget.Object)->_padding_ | bVar7;
  if (local_318._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_318._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_318._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4.ReferenceController = local_318._Widget.SharedReferenceCount.ReferenceController;
  local_318._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318._Widget.Object = (SAudioOscilloscopePanelWidget *)0x0;
  if (pSVar3 == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_300 = pSVar3;
  local_2f8.ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OscilloscopePanelWidget != (TSharedPtr<SAudioOscilloscopePanelWidget,1> *)&local_300) {
    (this->OscilloscopePanelWidget).Object = pSVar3;
    local_300 = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OscilloscopePanelWidget).SharedReferenceCount,&local_2f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SAudioOscilloscopePanelWidget::FArguments::~FArguments(&local_2e0);
  return;
}

// CreateOscilloscopeWidget @ 14d908da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioOscilloscope::CreateOscilloscopeWidget(UAudioOscilloscope *this)

{
  byte *pbVar1;
  TSharedPtr<SAudioOscilloscopePanelWidget,1> *pTVar2;
  FWaveformAudioSamplesDataProvider *pFVar3;
  code *pcVar4;
  SAudioOscilloscopePanelWidget *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  uint uStack_3dc;
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
  local_3d8;
  SAudioOscilloscopePanelWidget *local_3c0;
  FSharedReferencer<1> local_3b8;
  T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&> local_3b0;
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [24];
  code *local_368;
  longlong lStack_360;
  code *local_358;
  FWeakReferencer<1> FStack_350;
  code *local_348;
  FWeakReferencer<1> FStack_340;
  code *local_338;
  UAudioBus *pUStack_330;
  code *local_328;
  FSharedReferencer<1> FStack_320;
  code *local_318;
  FSharedReferencer<1> FStack_310;
  undefined1 local_308 [24];
  FArguments local_2f0;
  
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioSamplesDataProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscopeUMG.cpp"
                       ,0x3c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->AudioSamplesDataProvider).Object;
  local_308._0_8_ = (pFVar3->DataView).SampleData.DataPtr;
  local_308._8_8_ = *(undefined8 *)&(pFVar3->DataView).SampleData.ArrayNum;
  local_308._16_8_ = *(undefined8 *)&(pFVar3->DataView).NumDimensions;
  pFVar10 = SAudioOscilloscopePanelWidget::FArguments::FArguments(&local_2f0);
  pFVar10->_PanelLayoutType = this->PanelLayoutType;
  pFVar10->_PanelStyle = &this->OscilloscopeStyle;
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_res10[0] = ((this->AudioSamplesDataProvider).Object)->NumChannels;
  local_3b0.Arg0 = (FFixedSampledSequenceView *)local_308;
  local_3b0.Arg1 = local_res10;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
  ::
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
            (&local_3d8,"SAudioOscilloscopePanelWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioOscilloscopeUMG.cpp"
             ,0x42,&local_3b0);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  pSVar5 = local_3d8._Widget.Object;
  if (local_3d8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_3d8._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SAudioOscilloscopePanelWidget::Construct
            (local_3d8._Widget.Object,pFVar10,(local_3d8._RequiredArgs)->Arg0,
             *(local_3d8._RequiredArgs)->Arg1);
  if (local_3d8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_3d8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_3d8._Widget.Object)->_padding_ + 0x228))(local_3d8._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14d908fe1;
  }
  bVar9 = 0x20;
LAB_14d908fe1:
  *(byte *)&(local_3d8._Widget.Object)->_padding_ =
       (byte)(local_3d8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3d8._Widget.Object)->_padding_ =
       (byte)(local_3d8._Widget.Object)->_padding_ | bVar9;
  if (local_3d8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_3d8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_3d8._Widget.Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar6.ReferenceController = local_3d8._Widget.SharedReferenceCount.ReferenceController;
  local_3d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3d8._Widget.Object = (SAudioOscilloscopePanelWidget *)0x0;
  if (pSVar5 == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_3c0 = pSVar5;
  local_3b8.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->OscilloscopePanelWidget;
  if (pTVar2 != (TSharedPtr<SAudioOscilloscopePanelWidget,1> *)&local_3c0) {
    pTVar2->Object = pSVar5;
    local_3c0 = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OscilloscopePanelWidget).SharedReferenceCount,&local_3b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SAudioOscilloscopePanelWidget::FArguments::~FArguments(&local_2f0);
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lStack_360 = CONCAT44(uStack_3dc,0x2a8);
  local_368 = SAudioOscilloscopePanelWidget::_vcall__8__flat______;
  TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
  ::AddSP<SAudioOscilloscopePanelWidget>
            ((TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
              *)&((this->AudioSamplesDataProvider).Object)->OnDataViewGenerated,
             (SAudioOscilloscopePanelWidget *)local_3a0,(pmf_7fbefad8 *)pTVar2->Object);
  if (this->PanelLayoutType == Advanced) {
    if (pTVar2->Object == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FStack_350.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStack_3dc << 0x20);
    local_358 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetChannelToAnalyze;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pTVar2->Object->OnSelectedChannelChanged,
               (FWaveformAudioSamplesDataProvider *)(local_3a0 + 8),
               (pmf_e3a4ffb0 *)(this->AudioSamplesDataProvider).Object);
    if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FStack_340.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStack_3dc << 0x20);
    local_348 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetTriggerMode;
    TMulticastDelegateRegistration<void___cdecl(enum_EAudioOscilloscopeTriggerMode),FDefaultDelegateUserPolicy>
    ::AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
              (&((this->OscilloscopePanelWidget).Object)->OnTriggerModeChanged,
               (FWaveformAudioSamplesDataProvider *)local_390,
               (pmf_823ec71d *)(this->AudioSamplesDataProvider).Object);
    if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pUStack_330 = (UAudioBus *)((ulonglong)uStack_3dc << 0x20);
    local_338 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetTriggerThreshold;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &((this->OscilloscopePanelWidget).Object)->OnTriggerThresholdChanged,
               (FWaveformAudioSamplesDataProvider *)(local_390 + 8),
               (pmf_294a830d *)(this->AudioSamplesDataProvider).Object);
    if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FStack_320.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStack_3dc << 0x20);
    local_328 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetTimeWindow;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &((this->OscilloscopePanelWidget).Object)->OnTimeWindowValueChanged,
               (FWaveformAudioSamplesDataProvider *)local_380,
               (pmf_294a830d *)(this->AudioSamplesDataProvider).Object);
    if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FStack_310.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStack_3dc << 0x20);
    local_318 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetAnalysisPeriod;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &((this->OscilloscopePanelWidget).Object)->OnAnalysisPeriodChanged,
               (FWaveformAudioSamplesDataProvider *)(local_380 + 8),
               (pmf_294a830d *)(this->AudioSamplesDataProvider).Object);
  }
  return;
}

// FGetOscilloscopeAudioSamples_DelegateWrapper @ 14d924c30

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UAudioOscilloscope::FGetOscilloscopeAudioSamples_DelegateWrapper
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  _Src = local_18;
  lVar1 = (longlong)(int)local_10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_10,0,&__return_storage_ptr__->AllocatorInstance,(int)local_10,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar1 << 2);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d933c60

UClass * __cdecl UAudioOscilloscope::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioOscilloscope",
               &Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton,
               StaticRegisterNativesUAudioOscilloscope,0x670,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioOscilloscope>,
               InternalVTableHelperCtorCaller<UAudioOscilloscope>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton;
}

// RebuildWidget @ 14d960900

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioOscilloscope::RebuildWidget
          (UAudioOscilloscope *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  UAudioBus *pUVar1;
  SAudioOscilloscopePanelWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  float fVar7;
  
  fVar7 = this->MaxTimeWindowMs;
  if (this->TimeWindowMs <= this->MaxTimeWindowMs) {
    fVar7 = this->TimeWindowMs;
  }
  pUVar1 = (this->AudioBus).field0_0x0.DebugPtr;
  if (fVar7 <= __real_41200000) {
    fVar7 = __real_41200000;
  }
  this->TimeWindowMs = fVar7;
  if (pUVar1 == (UAudioBus *)0x0) {
    this->NumChannels = 1;
    CreateDummyOscilloscopeWidget(this);
  }
  else {
    this->NumChannels = pUVar1->AudioBusChannels + 1;
    CreateDataProvider(this);
    CreateOscilloscopeWidget(this);
  }
  if ((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pSVar2 = (this->OscilloscopePanelWidget).Object;
  pTVar3 = (this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SAudioOscilloscopePanelWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d963aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioOscilloscope::ReleaseSlateResources(UAudioOscilloscope *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OscilloscopePanelWidget != (TSharedPtr<SAudioOscilloscopePanelWidget,1> *)&local_18) {
    (this->OscilloscopePanelWidget).Object = (SAudioOscilloscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OscilloscopePanelWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StartProcessing @ 14d971b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioOscilloscope::StartProcessing(UAudioOscilloscope *this)

{
  uint uVar1;
  int iVar2;
  FMixerDevice *pFVar3;
  FWaveformAudioSamplesDataProvider *this_00;
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
  AudioWidgets::FWaveformAudioSamplesDataProvider::ResetAudioBuffers(this_00);
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

// StaticRegisterNativesUAudioOscilloscope @ 14d971d00

void __cdecl UAudioOscilloscope::StaticRegisterNativesUAudioOscilloscope(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAudioOscilloscope_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopProcessing @ 14d9723d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioOscilloscope::StopProcessing(UAudioOscilloscope *this)

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

// SynchronizeProperties @ 14d9733c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioOscilloscope::SynchronizeProperties(UAudioOscilloscope *this)

{
  TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar1;
  double dVar2;
  EYAxisLabelsUnit EVar3;
  UAudioBus *pUVar4;
  FWaveformAudioSamplesDataProvider *pFVar5;
  SAudioOscilloscopePanelWidget *pSVar6;
  FScriptContainerElement *pFVar7;
  SFixedSampledSequenceRuler *this_00;
  TReferenceControllerBase<1> *pTVar8;
  SSampledSequenceValueGridOverlay *pSVar9;
  SFixedSampledSequenceViewer *this_01;
  undefined8 *puVar10;
  SAudioRadialSlider *pSVar11;
  SComboBox<TSharedPtr<FString,1>_> *this_02;
  code *pcVar12;
  double dVar13;
  TFunction<FText___cdecl(double)> *pTVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FFixedSampleSequenceRulerStyle *this_03;
  FFixedSampleSequenceRulerStyle *pFVar20;
  FSampledSequenceValueGridOverlayStyle *this_04;
  FSampledSequenceValueGridOverlayStyle *pFVar21;
  FSampledSequenceViewerStyle *this_05;
  FSampledSequenceViewerStyle *pFVar22;
  FString *this_06;
  TSharedPtr<FString,1> *pTVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  FString *pFVar26;
  TSharedPtr<SAudioOscilloscopePanelWidget,1> *pTVar27;
  ESampledSequenceDisplayUnit EVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  double dVar32;
  double dVar33;
  TRawPtrProxy<FString> local_res8;
  FScriptContainerElement *local_9b8;
  int iStack_9b0;
  undefined4 uStack_9ac;
  undefined8 local_9a8;
  longlong local_998;
  FSharedReferencer<1> FStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  double dStack_970;
  FLinearColor_u_0 local_968;
  undefined4 local_958;
  undefined1 local_954;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined1 local_938 [40];
  longlong *local_910;
  undefined1 local_908;
  undefined7 uStack_907;
  undefined1 local_8f8;
  undefined7 uStack_8f7;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  double dStack_8c0;
  TSharedPtr<FString,1> local_8b8;
  undefined1 local_8a8 [24];
  FSampledSequenceValueGridOverlayStyle local_890;
  FSampledSequenceValueGridOverlayStyle local_7f0;
  FSampledSequenceViewerStyle local_748;
  FSampledSequenceViewerStyle local_608;
  FFixedSampleSequenceRulerStyle local_4c8;
  FFixedSampleSequenceRulerStyle local_298;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pTVar1 = &this->AudioSamplesDataProvider;
  fVar29 = this->MaxTimeWindowMs;
  if (this->TimeWindowMs <= this->MaxTimeWindowMs) {
    fVar29 = this->TimeWindowMs;
  }
  pUVar4 = (this->AudioBus).field0_0x0.DebugPtr;
  pFVar26 = (FString *)0x0;
  pFVar5 = pTVar1->Object;
  if (fVar29 <= __real_41200000) {
    fVar29 = __real_41200000;
  }
  this->TimeWindowMs = fVar29;
  if (pUVar4 == (UAudioBus *)0x0) {
    this->NumChannels = 1;
    if (pFVar5 != (FWaveformAudioSamplesDataProvider *)0x0) {
      local_998 = 0;
      FStack_990.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_998) {
        pTVar1->Object = (FWaveformAudioSamplesDataProvider *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AudioSamplesDataProvider).SharedReferenceCount,&FStack_990);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_990.ReferenceController);
      CreateDummyOscilloscopeWidget(this);
    }
  }
  else if (((pFVar5 == (FWaveformAudioSamplesDataProvider *)0x0) || (pUVar4 != pFVar5->AudioBus)) ||
          (pUVar4->AudioBusChannels + 1 != this->NumChannels)) {
    this->NumChannels = pUVar4->AudioBusChannels + 1;
    CreateDataProvider(this);
    CreateOscilloscopeWidget(this);
  }
  if (this->PanelLayoutType == Advanced) {
    iVar19 = this->NumChannels;
    if (this->ChannelToAnalyze < this->NumChannels) {
      iVar19 = this->ChannelToAnalyze;
    }
    iVar18 = 1;
    if (1 < iVar19) {
      iVar18 = iVar19;
    }
    this->ChannelToAnalyze = iVar18;
  }
  dVar13 = __real_3ff0000000000000;
  pFVar5 = pTVar1->Object;
  if (pFVar5 != (FWaveformAudioSamplesDataProvider *)0x0) {
    if (pFVar5->MaxTimeWindowMs != this->MaxTimeWindowMs) {
      pFVar5->MaxTimeWindowMs = this->MaxTimeWindowMs;
      AudioWidgets::FWaveformAudioSamplesDataProvider::ResetAudioBuffers(pFVar5);
    }
    if (this->PanelLayoutType == Advanced) {
      if ((pTVar1->Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = pTVar1->Object;
      iVar19 = this->ChannelToAnalyze + -1;
      if (iVar19 != pFVar5->ChannelIndexToAnalyze) {
        pFVar5->ChannelIndexToAnalyze = iVar19;
        AudioWidgets::FWaveformAudioSamplesDataProvider::ResetAudioBuffers(pFVar5);
      }
    }
    if ((this->PanelLayoutType == Advanced) ||
       ((this->PanelLayoutType == Basic && (this->NumChannels == 1)))) {
      if (((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = (this->AudioSamplesDataProvider).Object;
      pFVar5->TriggerMode = this->TriggerMode;
      pFVar5->bHasTriggered = false;
      if (((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = (this->AudioSamplesDataProvider).Object;
      pFVar5->TriggerThreshold = this->TriggerThreshold;
      pFVar5->bHasTriggered = false;
    }
    else {
      if (((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar5 = (this->AudioSamplesDataProvider).Object;
      pFVar5->TriggerMode = None;
      pFVar5->bHasTriggered = false;
    }
    if (((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    AudioWidgets::FWaveformAudioSamplesDataProvider::SetTimeWindow
              ((this->AudioSamplesDataProvider).Object,this->TimeWindowMs);
    if (((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    AudioWidgets::FWaveformAudioSamplesDataProvider::SetAnalysisPeriod
              ((this->AudioSamplesDataProvider).Object,this->AnalysisPeriodMs);
    if (((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar5 = (this->AudioSamplesDataProvider).Object;
    local_908 = 1;
    local_988 = CONCAT71(uStack_907,1);
    local_8f8 = 1;
    local_978._0_4_ = (undefined4)CONCAT71(uStack_8f7,1);
    local_978._4_4_ = (undefined4)((uint7)uStack_8f7 >> 0x18);
    dStack_970 = dVar13;
    local_8c8 = (undefined4)local_978;
    uStack_8c4 = local_978._4_4_;
    dStack_8c0 = dVar13;
    uStack_980 = 0;
    uStack_8d0 = 0;
    local_8d8 = local_988;
    (**(code **)(pFVar5->_padding_ + 8))(pFVar5,local_8a8,&local_8d8);
  }
  pSVar6 = (this->OscilloscopePanelWidget).Object;
  if (pSVar6 != (SAudioOscilloscopePanelWidget *)0x0) {
    if ((this->PanelLayoutType != pSVar6->PanelLayoutType) &&
       ((this->AudioSamplesDataProvider).Object != (FWaveformAudioSamplesDataProvider *)0x0)) {
      CreateOscilloscopeWidget(this);
    }
    pTVar27 = &this->OscilloscopePanelWidget;
    if ((this->AudioBus).field0_0x0.DebugPtr == (UAudioBus *)0x0) {
      pFVar7 = (this->DummyAudioSamples).AllocatorInstance.Data;
      iVar19 = (int)(this->TimeWindowMs * ___real_42400001);
      if ((iVar19 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_9a8 = 0xbb8000000001;
      (this->DummyDataView).SampleData.DataPtr = (float *)pFVar7;
      *(ulonglong *)&(this->DummyDataView).SampleData.ArrayNum = CONCAT44(uStack_9ac,iVar19);
      (this->DummyDataView).NumDimensions = 1;
      (this->DummyDataView).SampleRate = 48000;
      if ((pTVar27->Object == (SAudioOscilloscopePanelWidget *)0x0) &&
         (local_9b8 = pFVar7, iStack_9b0 = iVar19,
         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_9b8 = (FScriptContainerElement *)(this->DummyDataView).SampleData.DataPtr;
      iStack_9b0 = (this->DummyDataView).SampleData.ArrayNum;
      uStack_9ac = *(undefined4 *)&(this->DummyDataView).SampleData.field_0xc;
      plVar25 = &pTVar27->Object->_padding_;
      local_9a8._0_4_ = (this->DummyDataView).NumDimensions;
      local_9a8._4_4_ = (this->DummyDataView).SampleRate;
      (**(code **)(*plVar25 + 8))(plVar25,&local_9b8,0);
    }
    if ((pTVar27->Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = pTVar27->Object;
    this_03 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
                        (&local_4c8,&(this->OscilloscopeStyle).TimeRulerStyle);
    if (((pSVar6->SequenceRuler).Object == (SFixedSampledSequenceRuler *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this_00 = (pSVar6->SequenceRuler).Object;
    pFVar20 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle(&local_298,this_03);
    SFixedSampledSequenceRuler::OnStyleUpdated(this_00,pFVar20);
    pTVar8 = (this_03->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
    ;
    (this_03->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_03->TicksTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
    pTVar8 = (this_03->HandleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
    (this_03->HandleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this_03);
    if ((pTVar27->Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = pTVar27->Object;
    this_04 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                        (&local_890,&(this->OscilloscopeStyle).ValueGridStyle);
    if (((pSVar6->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar9 = (pSVar6->ValueGridOverlay).Object;
    pFVar21 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                        (&local_7f0,this_04);
    SSampledSequenceValueGridOverlay::OnStyleUpdated(pSVar9,pFVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_04->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this_04);
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    this_05 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
                        (&local_748,&(this->OscilloscopeStyle).WaveViewerStyle);
    if (((pSVar6->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this_01 = (pSVar6->SequenceViewer).Object;
    pFVar22 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle(&local_608,this_05);
    SFixedSampledSequenceViewer::OnStyleUpdated(this_01,pFVar22);
    if (((pSVar6->BackgroundBorder).Object == (SBorder *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_958._0_1_ = (this_05->SequenceBackgroundColor).ColorUseRule;
    local_958._1_1_ = (this_05->SequenceBackgroundColor).ColorTableId;
    local_958._2_2_ = *(undefined2 *)&(this_05->SequenceBackgroundColor).field_0x12;
    local_968._0_8_ = *(undefined8 *)&(this_05->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
    local_968._8_8_ =
         *(undefined8 *)
          ((longlong)&(this_05->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
    local_954 = 1;
    local_940 = 0;
    local_950 = 0;
    uStack_948 = 0;
    SBorder::SetBorderBackgroundColor
              ((pSVar6->BackgroundBorder).Object,(TAttribute<FSlateColor> *)&local_968._s_0);
    pTVar8 = (this_05->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
    ;
    (this_05->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this_05);
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    bVar16 = this->bShowTimeGrid;
    if (((pSVar6->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    ((pSVar6->SequenceViewer).Object)->bHideGrid = bVar16 == false;
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    pSVar6->SequenceRulerDisplayUnit = this->TimeGridLabelsUnit;
    if (((pSVar6->SequenceRuler).Object == (SFixedSampledSequenceRuler *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((pSVar6->SequenceRulerDisplayUnit == Samples) ||
       (EVar28 = Seconds, pSVar6->SequenceRulerDisplayUnit != Seconds)) {
      EVar28 = Samples;
    }
    ((pSVar6->SequenceRuler).Object)->DisplayUnit = EVar28;
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    bVar16 = this->bShowAmplitudeGrid;
    if (((pSVar6->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar9 = (pSVar6->ValueGridOverlay).Object;
    pSVar9->bHideGrid = bVar16 == false;
    pSVar9->bForceRedraw = true;
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    bVar16 = this->bShowAmplitudeLabels;
    if (((pSVar6->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar9 = (pSVar6->ValueGridOverlay).Object;
    pSVar9->bHideLabels = bVar16 == false;
    pSVar9->bForceRedraw = true;
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    EVar3 = this->AmplitudeGridLabelsUnit;
    pSVar6->ValueGridOverlayDisplayUnit = EVar3;
    if (((pSVar6->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar9 = (pSVar6->ValueGridOverlay).Object;
    if ((EVar3 == Linear) || (EVar3 != Db)) {
      pTVar14 = &AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorLinear;
      local_938._0_8_ = AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorLinear._0_8_;
    }
    else {
      pTVar14 = &AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorDb;
      local_938._0_8_ = AudioOscilloscopePanelWidgetPrivate::YAxisValueGeneratorDb._0_8_;
    }
    local_910 = (longlong *)0x0;
    if (local_938._0_8_ != 0) {
      puVar10 = *(undefined8 **)(&pTVar14->field_0x10 + 0x18);
      puVar24 = (undefined8 *)&pTVar14->field_0x10;
      if (puVar10 != (undefined8 *)0x0) {
        puVar24 = puVar10;
      }
      (**(code **)*puVar24)(puVar24,local_938 + 0x10);
    }
    TFunction<FText___cdecl(double)>::operator=
              (&pSVar9->OnValueGridLabel,(TFunction<FText___cdecl(double)> *)local_938);
    pSVar9->bForceRedraw = true;
    if (local_938._0_8_ != 0) {
      plVar25 = (longlong *)(local_938 + 0x10);
      if (local_910 != (longlong *)0x0) {
        plVar25 = local_910;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    pSVar11 = (pSVar6->TimeWindowKnob).Object;
    (pSVar6->TimeWindowKnobOutputRange).field0_0x0._s_0.Y = (double)this->MaxTimeWindowMs;
    if (pSVar11 != (SAudioRadialSlider *)0x0) {
      local_8e8 = *(undefined4 *)&(pSVar6->TimeWindowKnobOutputRange).field0_0x0;
      uStack_8e4 = *(undefined4 *)((longlong)&(pSVar6->TimeWindowKnobOutputRange).field0_0x0 + 4);
      uStack_8e0 = *(undefined4 *)((longlong)&(pSVar6->TimeWindowKnobOutputRange).field0_0x0 + 8);
      uStack_8dc = *(undefined4 *)((longlong)&(pSVar6->TimeWindowKnobOutputRange).field0_0x0 + 0xc);
      (**(code **)(pSVar11->_padding_ + 0x260))();
    }
    if (this->PanelLayoutType == Advanced) {
      if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar19 = this->ChannelToAnalyze;
      this_02 = (((this->OscilloscopePanelWidget).Object)->ChannelCombobox).Object;
      if (this_02 != (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
        this_06 = ::operator_new(0x10);
        if (this_06 != (FString *)0x0) {
          (this_06->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_06->Data).ArrayNum = 0;
          (this_06->Data).ArrayMax = 0;
          ::FString::AppendInt(this_06,iVar19);
          pFVar26 = this_06;
        }
        local_res8.Object = pFVar26;
        pTVar23 = TSharedPtr<FString,1>::TSharedPtr<FString,1><FString>(&local_8b8,&local_res8);
        SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(this_02,pTVar23);
      }
    }
    dVar15 = __real_3e45798ee2308c3a;
    if ((this->PanelLayoutType == Advanced) ||
       ((this->PanelLayoutType == Basic && (this->NumChannels == 1)))) {
      if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      SAudioOscilloscopePanelWidget::SetTriggerMode
                ((this->OscilloscopePanelWidget).Object,this->TriggerMode);
      if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pSVar6 = (this->OscilloscopePanelWidget).Object;
      fVar29 = this->TriggerThreshold;
      if (((pSVar6->TriggerThresholdLineWidget).Object == (STriggerThresholdLineWidget *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      ((pSVar6->TriggerThresholdLineWidget).Object)->TriggerThreshold = fVar29;
      pSVar11 = (pSVar6->TriggerThresholdKnob).Object;
      if (pSVar11 != (SAudioRadialSlider *)0x0) {
        dVar32 = SAudioOscilloscopePanelWidget::TriggerThresholdKnobOutputRange.field0_0x0._s_0.Y -
                 SAudioOscilloscopePanelWidget::TriggerThresholdKnobOutputRange.field0_0x0._s_0.X;
        dVar2 = (double)fVar29;
        uVar30 = SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar31 = (uint)((ulonglong)dVar32 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (dVar15 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != dVar15)
        {
          dVar32 = (dVar2 - SAudioOscilloscopePanelWidget::TriggerThresholdKnobOutputRange.
                            field0_0x0._s_0.X) / dVar32;
        }
        else {
          dVar32 = dVar13;
          if (dVar2 < SAudioOscilloscopePanelWidget::TriggerThresholdKnobOutputRange.field0_0x0._s_0
                      .Y) {
            dVar32 = 0.0;
          }
        }
        (**(code **)(pSVar11->_padding_ + 600))(pSVar11,(float)dVar32);
      }
    }
    else {
      if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      SAudioOscilloscopePanelWidget::SetTriggerMode((this->OscilloscopePanelWidget).Object,None);
    }
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar6 = (this->OscilloscopePanelWidget).Object;
    pSVar11 = (pSVar6->TimeWindowKnob).Object;
    if (pSVar11 != (SAudioRadialSlider *)0x0) {
      dVar2 = (pSVar6->TimeWindowKnobOutputRange).field0_0x0._s_0.Y;
      dVar32 = (pSVar6->TimeWindowKnobOutputRange).field0_0x0._s_0.X;
      dVar33 = dVar2 - dVar32;
      uVar30 = SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar31 = (uint)((ulonglong)dVar33 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (dVar15 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != dVar15) {
        dVar32 = ((double)this->TimeWindowMs - dVar32) / dVar33;
      }
      else {
        dVar32 = dVar13;
        if ((double)this->TimeWindowMs < dVar2) {
          dVar32 = 0.0;
        }
      }
      (**(code **)(pSVar11->_padding_ + 600))(pSVar11,(float)dVar32);
    }
    if (((this->OscilloscopePanelWidget).Object == (SAudioOscilloscopePanelWidget *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar11 = (((this->OscilloscopePanelWidget).Object)->AnalysisPeriodKnob).Object;
    if (pSVar11 != (SAudioRadialSlider *)0x0) {
      dVar2 = SAudioOscilloscopePanelWidget::AnalysisPeriodKnobOutputRange.field0_0x0._s_0.Y -
              SAudioOscilloscopePanelWidget::AnalysisPeriodKnobOutputRange.field0_0x0._s_0.X;
      uVar30 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar31 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (dVar15 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != dVar15) {
        dVar13 = ((double)this->AnalysisPeriodMs -
                 SAudioOscilloscopePanelWidget::AnalysisPeriodKnobOutputRange.field0_0x0._s_0.X) /
                 dVar2;
      }
      else if ((double)this->AnalysisPeriodMs <
               SAudioOscilloscopePanelWidget::AnalysisPeriodKnobOutputRange.field0_0x0._s_0.Y) {
        dVar13 = 0.0;
      }
      (**(code **)(pSVar11->_padding_ + 600))(pSVar11,(float)dVar13);
    }
  }
  return;
}

// execCanTriggeringBeSet @ 14d97e130

void __cdecl
UAudioOscilloscope::execCanTriggeringBeSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x26].field_0x20 != '\x01') &&
     ((param_1[0x26].field_0x20 != '\0' || (*(int *)&param_1[0x27].field_0x20 != 1)))) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execStartProcessing @ 14d9812a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioOscilloscope::execStartProcessing(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  FMixerDevice *pFVar3;
  FWaveformAudioSamplesDataProvider *this;
  code *pcVar4;
  FAudioBusKey FVar5;
  FAudioBusKey FVar6;
  bool bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UAudioBusSubsystem *this_00;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar10;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_58;
  FString FStack_48;
  TSharedPtr<Audio::FPatchOutput,1> TStack_38;
  FStringFormatArg FStack_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FWaveformAudioSamplesDataProvider **)(param_1 + 0x27);
  if (this == (FWaveformAudioSamplesDataProvider *)0x0) {
    return;
  }
  if (this->bIsProcessing != false) {
    return;
  }
  if ((this->AudioBus == (UAudioBus *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioBus",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x79,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->MixerDevice == (FMixerDevice *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\WaveformAudioSamplesDataProvider.cpp"
                         ,0x7a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AudioWidgets::FWaveformAudioSamplesDataProvider::ResetAudioBuffers(this);
  pFVar3 = this->MixerDevice;
  uVar1 = *(uint *)((longlong)&this->AudioBus->_padding_ + 4);
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
  this_00 = (UAudioBusSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pFVar3->field_0x228,pUVar8);
  if ((this_00 == (UAudioBusSubsystem *)0x0) &&
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
  UAudioBusSubsystem::StartAudioBus(this_00,FVar5,&FStack_48,this->NumChannels,false);
  FVar6.InstanceId = 0xffffffff;
  FVar6.ObjectId = uVar1;
  pTVar10 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                      (this_00,&TStack_38,FVar6,*(int *)&this->MixerDevice->field_0x8c,
                       this->NumChannels,__real_3f800000);
  if (&this->PatchOutput != pTVar10) {
    (this->PatchOutput).Object = pTVar10->Object;
    pTVar10->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PatchOutput).SharedReferenceCount,&pTVar10->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_38.SharedReferenceCount.ReferenceController);
  this->bIsProcessing = true;
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execStopProcessing @ 14d981300

void __cdecl UAudioOscilloscope::execStopProcessing(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 0x27);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xe4) != '\0')) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)(lVar1 + 0x68) != &local_18) {
      *(undefined8 *)(lVar1 + 0x68) = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar1 + 0x70),&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    *(undefined1 *)(lVar1 + 0xe4) = 0;
  }
  return;
}

