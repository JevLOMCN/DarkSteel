// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 17

// StaticClass @ 14d893a50

UClass * __cdecl UAudioVectorscope::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVectorscope",
               &Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton,
               StaticRegisterNativesUAudioVectorscope,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioVectorscope>,
               InternalVTableHelperCtorCaller<UAudioVectorscope>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton;
}

// UAudioVectorscope @ 14d8ba2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioVectorscope * __thiscall
UAudioVectorscope::UAudioVectorscope(UAudioVectorscope *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle(&this->VectorscopeStyle);
  this->bShowGrid = true;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  this->PanelLayoutType = Basic;
  (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
  (this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorscopePanelWidget).Object = (SAudioVectorscopePanelWidget *)0x0;
  (this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DummyAudioSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyAudioSamples).ArrayNum = 0;
  (this->DummyAudioSamples).ArrayMax = 0;
  (this->DummyDataView).SampleData.DataPtr = (float *)0x0;
  (this->DummyDataView).SampleData.ArrayNum = 0;
  (this->DummyDataView).NumDimensions = 0;
  (this->DummyDataView).SampleRate = 0;
  this->GridDivisions = 2;
  this->MaxDisplayPersistenceMs = 500.0;
  this->DisplayPersistenceMs = 60.0;
  this->Scale = 1.0;
  return this;
}

// UAudioVectorscope @ 14d8ba360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UAudioVectorscope * __thiscall
UAudioVectorscope::UAudioVectorscope(UAudioVectorscope *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAudioWidgetsStyle *pFVar7;
  FName *pFVar8;
  FAudioVectorscopePanelStyle *pFVar9;
  UAudioVectorscope *pUVar10;
  longlong lVar11;
  FName local_res8;
  undefined4 local_28 [5];
  undefined4 uStack_14;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar7 = FAudioWidgetsStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"AudioVectorscope.PanelStyle");
  pFVar9 = (FAudioVectorscopePanelStyle *)
           (**(code **)(*(longlong *)pFVar7 + 0xa0))
                     (pFVar7,FAudioVectorscopePanelStyle::TypeName,*pFVar8,0,1);
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
  FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle(&this->VectorscopeStyle,pFVar9);
  this->bShowGrid = true;
  pTVar2 = &this->DummyAudioSamples;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  piVar1 = &(this->DummyAudioSamples).ArrayMax;
  this->GridDivisions = 2;
  lVar11 = 100;
  this->MaxDisplayPersistenceMs = 500.0;
  this->DisplayPersistenceMs = 60.0;
  this->Scale = 1.0;
  this->PanelLayoutType = Basic;
  (this->AudioSamplesDataProvider).Object = (FWaveformAudioSamplesDataProvider *)0x0;
  (this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VectorscopePanelWidget).Object = (SAudioVectorscopePanelWidget *)0x0;
  (this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->DummyDataView).SampleData.DataPtr = (float *)0x0;
  (this->DummyDataView).SampleData.ArrayNum = 0;
  (this->DummyDataView).NumDimensions = 0;
  (this->DummyDataView).SampleRate = 0;
  local_28[0] = 0;
  (this->DummyAudioSamples).ArrayNum = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&pTVar2->AllocatorInstance,0,piVar1);
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
        pUVar10 = (UAudioVectorscope *)(*pcVar4)();
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
      pUVar10 = (UAudioVectorscope *)(*pcVar4)();
      return pUVar10;
    }
  }
  (this->DummyDataView).SampleData.DataPtr = (float *)pFVar3;
  *(ulonglong *)&(this->DummyDataView).SampleData.ArrayNum = CONCAT44(uStack_14,iVar6);
  (this->DummyDataView).NumDimensions = 2;
  (this->DummyDataView).SampleRate = 48000;
  return this;
}

// ~UAudioVectorscope @ 14d8c17b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioVectorscope::~UAudioVectorscope(UAudioVectorscope *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->DummyAudioSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController);
  FAudioVectorscopePanelStyle::~FAudioVectorscopePanelStyle(&this->VectorscopeStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// CreateDataProvider @ 14d904be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAudioVectorscope::CreateDataProvider(UAudioVectorscope *this)

{
  int *piVar1;
  int iVar2;
  EAudioBusChannels EVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  UWorld *this_00;
  TReferenceControllerBase<1> *pTVar9;
  FWaveformAudioSamplesDataProvider *pFVar10;
  FWaveformAudioSamplesDataProvider *local_38;
  FSharedReferencer<1> local_30;
  FAudioDeviceHandle local_28;
  
  this_00 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    return;
  }
  UWorld::GetAudioDevice(this_00,&local_28);
  bVar7 = FAudioDeviceHandle::IsValid(&local_28);
  if (!bVar7) goto LAB_14d904dce;
  EVar3 = ((this->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels;
  uVar8 = FAudioDeviceHandle::GetDeviceID(&local_28);
  pTVar9 = ::operator_new(0x100);
  fVar6 = __real_41200000;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = (FWaveformAudioSamplesDataProvider *)&DAT_00000010;
LAB_14d904cfe:
    if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
       (*(int *)(pFVar10->_padding_ + 8) < 1)) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10->_padding_ = (longlong)pFVar10;
      if (pTVar9 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = (longlong *)pFVar10->_padding_;
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
        pFVar10->_padding_ = (longlong)pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveformAudioSamplesDataProvider_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    AudioWidgets::FWaveformAudioSamplesDataProvider::FWaveformAudioSamplesDataProvider
              ((FWaveformAudioSamplesDataProvider *)(pTVar9 + 1),uVar8,
               (this->AudioBus).field0_0x0.DebugPtr,EVar3 + 1,this->DisplayPersistenceMs,
               this->MaxDisplayPersistenceMs,fVar6);
    pFVar10 = (FWaveformAudioSamplesDataProvider *)(pTVar9 + 1);
    if (pFVar10 != (FWaveformAudioSamplesDataProvider *)0x0) goto LAB_14d904cfe;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar10;
  local_30.ReferenceController = pTVar9;
  if (&this->AudioSamplesDataProvider !=
      (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_38) {
    (this->AudioSamplesDataProvider).Object = pFVar10;
    local_38 = (FWaveformAudioSamplesDataProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioSamplesDataProvider).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_14d904dce:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return;
}

// CreateDummyVectorscopeWidget @ 14d9054a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVectorscope::CreateDummyVectorscopeWidget(UAudioVectorscope *this)

{
  FArguments *pFVar1;
  TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
  *this_00;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar2;
  T1RequiredArgs<FFixedSampledSequenceView_&> local_res8;
  SAudioVectorscopePanelWidget *local_278;
  FSharedReferencer<1> local_270;
  TSharedRef<SAudioVectorscopePanelWidget,1> local_268;
  TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
  local_258;
  undefined1 local_240 [528];
  undefined1 local_30 [40];
  
  pFVar1 = SAudioVectorscopePanelWidget::FArguments::FArguments((FArguments *)local_240);
  pFVar1->_PanelLayoutType = this->PanelLayoutType;
  pFVar1->_PanelStyle = &this->VectorscopeStyle;
  local_res8.Arg0 = &this->DummyDataView;
  this_00 = MakeTDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
                      (&local_258,"SAudioVectorscopePanelWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscopeUMG.cpp"
                       ,0x1d,&local_res8);
  pTVar2 = TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
           ::operator<<=(this_00,&local_268,pFVar1);
  local_270.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_278 = pTVar2->Object;
  if (local_270.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_270.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_270.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->VectorscopePanelWidget != (TSharedPtr<SAudioVectorscopePanelWidget,1> *)&local_278) {
    (this->VectorscopePanelWidget).Object = local_278;
    local_278 = (SAudioVectorscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VectorscopePanelWidget).SharedReferenceCount,&local_270);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  if ((void *)local_30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_240._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_240);
  return;
}

// CreateVectorscopeWidget @ 14d90cce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVectorscope::CreateVectorscopeWidget(UAudioVectorscope *this)

{
  byte *pbVar1;
  TSharedPtr<SAudioVectorscopePanelWidget,1> *pTVar2;
  FWaveformAudioSamplesDataProvider *pFVar3;
  SAudioVectorscopePanelWidget *this_00;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar10;
  FLLMScope local_res8 [2];
  FName local_res10;
  float **local_res18;
  FMemScope local_res20;
  FSharedReferencer<1> local_300;
  longlong **local_2f8;
  code *local_2e8;
  ulonglong uStack_2e0;
  SAudioVectorscopePanelWidget *local_2d8;
  FSharedReferencer<1> local_2d0;
  undefined8 local_2c8;
  FSharedReferencer<1> local_2c0;
  undefined1 local_2b8 [16];
  TSharedRef<SAudioVectorscopePanelWidget,1> local_2a8;
  code *local_298;
  ulonglong uStack_290;
  float *local_288;
  longlong lStack_280;
  longlong local_278;
  undefined1 local_270 [528];
  undefined1 local_60 [40];
  
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioSamplesDataProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscopeUMG.cpp"
                       ,0x35,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
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
  pFVar3 = (this->AudioSamplesDataProvider).Object;
  local_288 = (pFVar3->DataView).SampleData.DataPtr;
  lStack_280 = *(longlong *)&(pFVar3->DataView).SampleData.ArrayNum;
  local_278._0_4_ = (pFVar3->DataView).NumDimensions;
  local_278._4_4_ = (pFVar3->DataView).SampleRate;
  pFVar9 = SAudioVectorscopePanelWidget::FArguments::FArguments((FArguments *)local_270);
  pFVar9->_PanelLayoutType = this->PanelLayoutType;
  pFVar9->_PanelStyle = &this->VectorscopeStyle;
  local_res18 = &local_288;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  local_2f8 = (longlong **)&local_res18;
  local_300.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = MakeShared<SAudioVectorscopePanelWidget,1>(&local_2a8);
  local_2c0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  this_00 = pTVar10->Object;
  if (local_2c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_300,&local_2c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  if (this_00 == (SAudioVectorscopePanelWidget *)0x0) {
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
  SWidget::SetDebugInfo
            ((SWidget *)this_00,"SAudioVectorscopePanelWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioVectorscopeUMG.cpp"
             ,0x3b,0x380);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (this_00 == (SAudioVectorscopePanelWidget *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar9);
  SAudioVectorscopePanelWidget::Construct(this_00,pFVar9,(FFixedSampledSequenceView *)*local_2f8);
  if (this_00 == (SAudioVectorscopePanelWidget *)0x0) {
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
  if ((this_00->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d90cf5b;
  }
  bVar8 = 0x20;
LAB_14d90cf5b:
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar8;
  if (this_00 == (SAudioVectorscopePanelWidget *)0x0) {
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
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (this_00 == (SAudioVectorscopePanelWidget *)0x0) {
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
  FVar5.ReferenceController = local_300.ReferenceController;
  local_300.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this_00 == (SAudioVectorscopePanelWidget *)0x0) {
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
  local_2d0.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->VectorscopePanelWidget;
  local_2d8 = this_00;
  if (pTVar2 != (TSharedPtr<SAudioVectorscopePanelWidget,1> *)&local_2d8) {
    pTVar2->Object = this_00;
    local_2d8 = (SAudioVectorscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VectorscopePanelWidget).SharedReferenceCount,&local_2d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
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
  if ((this->AudioSamplesDataProvider).Object == (FWaveformAudioSamplesDataProvider *)0x0) {
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
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2a8);
  local_2e8 = SAudioVectorscopePanelWidget::_vcall__8__flat______;
  TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
  ::AddSP<SAudioVectorscopePanelWidget>
            ((TMulticastDelegateRegistration<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
              *)&((this->AudioSamplesDataProvider).Object)->OnDataViewGenerated,
             (SAudioVectorscopePanelWidget *)local_2b8,(pmf_8a709b24 *)pTVar2->Object);
  if (this->PanelLayoutType == Advanced) {
    if (pTVar2->Object == (SAudioVectorscopePanelWidget *)0x0) {
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
    local_2e8 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetTimeWindow;
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    local_298 = AudioWidgets::FWaveformAudioSamplesDataProvider::SetTimeWindow;
    uStack_290 = uStack_2e0;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddSP<AudioWidgets::FWaveformAudioSamplesDataProvider>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pTVar2->Object->OnDisplayPersistenceValueChanged,
               (FWaveformAudioSamplesDataProvider *)(local_2b8 + 8),
               (pmf_294a830d *)(this->AudioSamplesDataProvider).Object);
  }
  return;
}

// FGetVectorscopeAudioSamples_DelegateWrapper @ 14d924cf0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UAudioVectorscope::FGetVectorscopeAudioSamples_DelegateWrapper
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

// GetPrivateStaticClass @ 14d933f60

UClass * __cdecl UAudioVectorscope::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVectorscope",
               &Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton,
               StaticRegisterNativesUAudioVectorscope,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioVectorscope>,
               InternalVTableHelperCtorCaller<UAudioVectorscope>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton;
}

// RebuildWidget @ 14d961660

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UAudioVectorscope::RebuildWidget
          (UAudioVectorscope *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  UAudioBus *pUVar1;
  SAudioVectorscopePanelWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  float fVar7;
  
  pUVar1 = (this->AudioBus).field0_0x0.DebugPtr;
  fVar7 = this->MaxDisplayPersistenceMs;
  if (this->DisplayPersistenceMs <= this->MaxDisplayPersistenceMs) {
    fVar7 = this->DisplayPersistenceMs;
  }
  if (fVar7 <= __real_41200000) {
    fVar7 = __real_41200000;
  }
  this->DisplayPersistenceMs = fVar7;
  if (pUVar1 == (UAudioBus *)0x0) {
    CreateDummyVectorscopeWidget(this);
  }
  else {
    CreateDataProvider(this);
    CreateVectorscopeWidget(this);
  }
  if ((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) {
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
  pSVar2 = (this->VectorscopePanelWidget).Object;
  pTVar3 = (this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SAudioVectorscopePanelWidget *)0x0) {
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

// ReleaseSlateResources @ 14d963bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVectorscope::ReleaseSlateResources(UAudioVectorscope *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VectorscopePanelWidget != (TSharedPtr<SAudioVectorscopePanelWidget,1> *)&local_18) {
    (this->VectorscopePanelWidget).Object = (SAudioVectorscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VectorscopePanelWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StartProcessing @ 14d971b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVectorscope::StartProcessing(UAudioVectorscope *this)

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

// StaticRegisterNativesUAudioVectorscope @ 14d971dd0

void __cdecl UAudioVectorscope::StaticRegisterNativesUAudioVectorscope(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioVectorscope_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopProcessing @ 14d972440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioVectorscope::StopProcessing(UAudioVectorscope *this)

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

// SynchronizeProperties @ 14d9751b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UAudioVectorscope::SynchronizeProperties(UAudioVectorscope *this)

{
  TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar1;
  double dVar2;
  UAudioBus *pUVar3;
  FWaveformAudioSamplesDataProvider *pFVar4;
  SAudioVectorscopePanelWidget *pSVar5;
  SSampledSequenceValueGridOverlay *pSVar6;
  SFixedSampledSequenceVectorViewer *pSVar7;
  SAudioRadialSlider *pSVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  FSampledSequenceValueGridOverlayStyle *this_00;
  FSampledSequenceValueGridOverlayStyle *pFVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  longlong local_4d8;
  FSharedReferencer<1> FStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  double dStack_4b0;
  FLinearColor_u_0 local_4a8;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined1 local_478;
  undefined7 uStack_477;
  undefined1 local_468;
  undefined7 uStack_467;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  double dStack_430;
  FSlateWidgetStyle local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  FSlateBrush local_408;
  undefined8 local_358;
  undefined8 uStack_350;
  float local_348;
  undefined1 local_338 [32];
  FSlateWidgetStyle local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  FSlateBrush local_2f8;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  FSampledSequenceValueGridOverlayStyle local_228;
  FSampledSequenceValueGridOverlayStyle local_188;
  FSampledSequenceValueGridOverlayStyle local_e8;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pTVar1 = &this->AudioSamplesDataProvider;
  fVar15 = this->MaxDisplayPersistenceMs;
  if (this->DisplayPersistenceMs <= this->MaxDisplayPersistenceMs) {
    fVar15 = this->DisplayPersistenceMs;
  }
  pUVar3 = (this->AudioBus).field0_0x0.DebugPtr;
  pFVar4 = pTVar1->Object;
  if (fVar15 <= __real_41200000) {
    fVar15 = __real_41200000;
  }
  this->DisplayPersistenceMs = fVar15;
  if (pUVar3 == (UAudioBus *)0x0) {
    if (pFVar4 != (FWaveformAudioSamplesDataProvider *)0x0) {
      local_4d8 = 0;
      FStack_4d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)&local_4d8) {
        pTVar1->Object = (FWaveformAudioSamplesDataProvider *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AudioSamplesDataProvider).SharedReferenceCount,&FStack_4d0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_4d0.ReferenceController);
      CreateDummyVectorscopeWidget(this);
    }
  }
  else if ((pFVar4 == (FWaveformAudioSamplesDataProvider *)0x0) || (pUVar3 != pFVar4->AudioBus)) {
    CreateDataProvider(this);
    CreateVectorscopeWidget(this);
  }
  dVar10 = __real_3ff0000000000000;
  pFVar4 = pTVar1->Object;
  if (pFVar4 != (FWaveformAudioSamplesDataProvider *)0x0) {
    if (pFVar4->MaxTimeWindowMs != this->MaxDisplayPersistenceMs) {
      pFVar4->MaxTimeWindowMs = this->MaxDisplayPersistenceMs;
      AudioWidgets::FWaveformAudioSamplesDataProvider::ResetAudioBuffers(pFVar4);
    }
    if ((pTVar1->Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    AudioWidgets::FWaveformAudioSamplesDataProvider::SetTimeWindow
              (pTVar1->Object,this->DisplayPersistenceMs);
    if ((pTVar1->Object == (FWaveformAudioSamplesDataProvider *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_478 = 1;
    local_4c8 = CONCAT71(uStack_477,1);
    local_468 = 1;
    local_4b8._0_4_ = (undefined4)CONCAT71(uStack_467,1);
    local_4b8._4_4_ = (undefined4)((uint7)uStack_467 >> 0x18);
    dStack_4b0 = dVar10;
    local_438 = (undefined4)local_4b8;
    uStack_434 = local_4b8._4_4_;
    dStack_430 = dVar10;
    uStack_4c0 = 0;
    uStack_440 = 0;
    local_448 = local_4c8;
    (**(code **)(pTVar1->Object->_padding_ + 8))(pTVar1->Object,local_338,&local_448);
  }
  pSVar5 = (this->VectorscopePanelWidget).Object;
  if (pSVar5 != (SAudioVectorscopePanelWidget *)0x0) {
    if ((this->PanelLayoutType != pSVar5->PanelLayoutType) &&
       (pTVar1->Object != (FWaveformAudioSamplesDataProvider *)0x0)) {
      CreateVectorscopeWidget(this);
    }
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar5 = (this->VectorscopePanelWidget).Object;
    this_00 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                        (&local_228,&(this->VectorscopeStyle).ValueGridStyle);
    if (((pSVar5->ValueGridOverlayXAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar6 = (pSVar5->ValueGridOverlayXAxis).Object;
    pFVar14 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                        (&local_188,this_00);
    SSampledSequenceValueGridOverlay::OnStyleUpdated(pSVar6,pFVar14);
    if (((pSVar5->ValueGridOverlayYAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar6 = (pSVar5->ValueGridOverlayYAxis).Object;
    pFVar14 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                        (&local_e8,this_00);
    SSampledSequenceValueGridOverlay::OnStyleUpdated(pSVar6,pFVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this_00);
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar5 = (this->VectorscopePanelWidget).Object;
    uVar16 = this->GridDivisions;
    if (((pSVar5->ValueGridOverlayXAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar6 = (pSVar5->ValueGridOverlayXAxis).Object;
    pSVar6->MaxDivisionParameter = uVar16;
    pSVar6->bForceRedraw = true;
    if (((pSVar5->ValueGridOverlayYAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar6 = (pSVar5->ValueGridOverlayYAxis).Object;
    pSVar6->MaxDivisionParameter = uVar16;
    pSVar6->bForceRedraw = true;
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_420 = *(undefined8 *)
                 &(this->VectorscopeStyle).VectorViewerStyle.BackgroundColor.SpecifiedColor.
                  field0_0x0;
    uStack_418 = *(undefined8 *)
                  ((longlong)
                   &(this->VectorscopeStyle).VectorViewerStyle.BackgroundColor.SpecifiedColor.
                    field0_0x0 + 8);
    local_410._0_1_ = (this->VectorscopeStyle).VectorViewerStyle.BackgroundColor.ColorUseRule;
    local_410._1_1_ = (this->VectorscopeStyle).VectorViewerStyle.BackgroundColor.ColorTableId;
    local_410._2_2_ =
         *(undefined2 *)&(this->VectorscopeStyle).VectorViewerStyle.BackgroundColor.field_0x12;
    pSVar5 = (this->VectorscopePanelWidget).Object;
    local_428 = (FSlateWidgetStyle)&___7FSampledSequenceVectorViewerStyle__6B_;
    FSlateBrush::FSlateBrush(&local_408,&(this->VectorscopeStyle).VectorViewerStyle.BackgroundBrush)
    ;
    local_358 = *(undefined8 *)&(this->VectorscopeStyle).VectorViewerStyle.LineColor.field0_0x0;
    uStack_350 = *(undefined8 *)
                  ((longlong)&(this->VectorscopeStyle).VectorViewerStyle.LineColor.field0_0x0 + 8);
    local_348 = (this->VectorscopeStyle).VectorViewerStyle.LineThickness;
    if (((pSVar5->SequenceVectorViewer).Object == (SFixedSampledSequenceVectorViewer *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar7 = (pSVar5->SequenceVectorViewer).Object;
    local_310 = local_420;
    uStack_308 = uStack_418;
    local_318 = (FSlateWidgetStyle)&___7FSampledSequenceVectorViewerStyle__6B_;
    local_300 = local_410;
    FSlateBrush::FSlateBrush(&local_2f8,&local_408);
    local_238 = local_348;
    local_248 = local_358;
    uStack_240 = uStack_350;
    *(undefined8 *)&(pSVar7->LineColor).field0_0x0 = local_358;
    *(undefined8 *)((longlong)&(pSVar7->LineColor).field0_0x0 + 8) = uStack_350;
    pSVar7->LineThickness = local_348;
    local_2f8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle(&local_318);
    if (((pSVar5->BackgroundBorder).Object == (SBorder *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_498 = local_410;
    local_494 = 1;
    local_480 = 0;
    local_4a8._0_8_ = local_420;
    local_4a8._8_8_ = uStack_418;
    local_490 = 0;
    uStack_488 = 0;
    SBorder::SetBorderBackgroundColor
              ((pSVar5->BackgroundBorder).Object,(TAttribute<FSlateColor> *)&local_4a8._s_0);
    local_408._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle(&local_428);
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar5 = (this->VectorscopePanelWidget).Object;
    pSVar8 = (pSVar5->DisplayPersistenceKnob).Object;
    (pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0._s_0.Y =
         (double)this->MaxDisplayPersistenceMs;
    if (pSVar8 != (SAudioRadialSlider *)0x0) {
      local_458 = *(undefined4 *)&(pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0;
      uStack_454 = *(undefined4 *)
                    ((longlong)&(pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0 + 4);
      uStack_450 = *(undefined4 *)
                    ((longlong)&(pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0 + 8);
      uStack_44c = *(undefined4 *)
                    ((longlong)&(pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0 + 0xc);
      (**(code **)(pSVar8->_padding_ + 0x260))(pSVar8,&local_458);
    }
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dVar11 = __real_3e45798ee2308c3a;
    pSVar5 = (this->VectorscopePanelWidget).Object;
    pSVar8 = (pSVar5->DisplayPersistenceKnob).Object;
    if (pSVar8 != (SAudioRadialSlider *)0x0) {
      dVar2 = (pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0._s_0.Y;
      dVar19 = (pSVar5->DisplayPersistenceKnobOutputRange).field0_0x0._s_0.X;
      dVar18 = dVar2 - dVar19;
      uVar16 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar17 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar17,uVar16) &&
          (double)CONCAT44(uVar17,uVar16) != __real_3e45798ee2308c3a) {
        dVar19 = ((double)this->DisplayPersistenceMs - dVar19) / dVar18;
      }
      else {
        dVar19 = dVar10;
        if ((double)this->DisplayPersistenceMs < dVar2) {
          dVar19 = 0.0;
        }
      }
      (**(code **)(pSVar8->_padding_ + 600))(pSVar8,(float)dVar19);
    }
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar5 = (this->VectorscopePanelWidget).Object;
    fVar15 = this->Scale;
    if (((pSVar5->SequenceVectorViewer).Object == (SFixedSampledSequenceVectorViewer *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    ((pSVar5->SequenceVectorViewer).Object)->ScaleFactor = fVar15;
    pSVar8 = (pSVar5->ScaleKnob).Object;
    if (pSVar8 != (SAudioRadialSlider *)0x0) {
      dVar2 = SAudioVectorscopePanelWidget::ScaleFactorOutputKnobRange.field0_0x0._s_0.Y -
              SAudioVectorscopePanelWidget::ScaleFactorOutputKnobRange.field0_0x0._s_0.X;
      dVar19 = (double)fVar15;
      uVar16 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar17 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (dVar11 <= (double)CONCAT44(uVar17,uVar16) && (double)CONCAT44(uVar17,uVar16) != dVar11) {
        dVar10 = (dVar19 - SAudioVectorscopePanelWidget::ScaleFactorOutputKnobRange.field0_0x0._s_0.
                           X) / dVar2;
      }
      else if (dVar19 < SAudioVectorscopePanelWidget::ScaleFactorOutputKnobRange.field0_0x0._s_0.Y)
      {
        dVar10 = 0.0;
      }
      (**(code **)(pSVar8->_padding_ + 600))(pSVar8,(float)dVar10);
    }
    if (((this->VectorscopePanelWidget).Object == (SAudioVectorscopePanelWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar5 = (this->VectorscopePanelWidget).Object;
    bVar12 = this->bShowGrid;
    if (((pSVar5->ValueGridOverlayXAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar6 = (pSVar5->ValueGridOverlayXAxis).Object;
    bVar12 = bVar12 == false;
    pSVar6->bHideGrid = bVar12;
    pSVar6->bForceRedraw = true;
    if (((pSVar5->ValueGridOverlayYAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar6 = (pSVar5->ValueGridOverlayYAxis).Object;
    pSVar6->bHideGrid = bVar12;
    pSVar6->bForceRedraw = true;
  }
  return;
}

// execStartProcessing @ 14d9812d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioVectorscope::execStartProcessing(UObject *param_1,FFrame *param_2,void *param_3)

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
  this = *(FWaveformAudioSamplesDataProvider **)(param_1 + 0x16);
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

// execStopProcessing @ 14d981380

void __cdecl UAudioVectorscope::execStopProcessing(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)(param_1 + 0x16);
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

