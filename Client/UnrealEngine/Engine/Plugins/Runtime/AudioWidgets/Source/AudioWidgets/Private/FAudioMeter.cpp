// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 13

// FAudioMeter @ 14d8afd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioMeter * __thiscall
AudioWidgets::FAudioMeter::FAudioMeter
          (FAudioMeter *this,int param_1,UWorld *param_2,TObjectPtr<UAudioBus> param_3)

{
  uint uVar1;
  FAudioDeviceHandle *this_00;
  UObject *local_res8;
  FAudioDeviceHandle local_28;
  
  local_res8 = *(UObject **)param_3.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  this_00 = UWorld::GetAudioDevice(param_2,&local_28);
  uVar1 = FAudioDeviceHandle::GetDeviceID(this_00);
  FAudioMeter(this,param_1,uVar1,(TObjectPtr<UAudioBus>)&local_res8,
              (FAudioMeterDefaultColorStyle *)0x0);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  this->_padding_ = (longlong)&___7FAudioMeter_AudioWidgets__6B_;
  return this;
}

// FAudioMeter @ 14d8afdd0

FAudioMeter * __thiscall
AudioWidgets::FAudioMeter::FAudioMeter
          (FAudioMeter *this,int param_1,uint param_2,FAudioMaterialMeterStyle *param_3,
          TObjectPtr<UAudioBus> param_4)

{
  TSharedPtr<SAudioMeterBase,1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SAudioMaterialMeter,1> *pTVar3;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  SAudioMaterialMeter *local_2c8;
  FSharedReferencer<1> local_2c0;
  FName local_2b8;
  FMemScope local_2b0;
  TSharedRef<SAudioMaterialMeter,1> local_2a8;
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> local_298;
  undefined1 local_280 [552];
  undefined1 local_58 [32];
  
  pTVar1 = &this->Widget;
  pTVar1->Object = (SAudioMeterBase *)0x0;
  (this->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Analyzer).Object = (UObject *)0x0;
  (this->AudioBus).Object = (UObject *)0x0;
  (this->ChannelInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelInfo).ArrayNum = 0;
  (this->ChannelInfo).ArrayMax = 0;
  (this->ResultsDelegateHandle).ID = 0;
  (this->Settings).Object = (UObject *)0x0;
  this->bUseExternalAudioBus = false;
  this->_padding_ = (longlong)&___7FAudioMeter_AudioWidgets__6B_;
  pFVar2 = SAudioMaterialMeter::FArguments::FArguments((FArguments *)local_280);
  pFVar2->_AudioMaterialMeterStyle = param_3;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b0,&local_2b8,true);
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>
            (&local_298,"SAudioMaterialMeter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMeter.cpp"
             ,0xcb,local_res8);
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(local_res20);
  pTVar3 = TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_298,&local_2a8,pFVar2);
  local_2c0.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  local_2c8 = pTVar3->Object;
  if (local_2c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<SAudioMeterBase,1> *)&local_2c8) {
    pTVar1->Object = (SAudioMeterBase *)local_2c8;
    local_2c8 = (SAudioMaterialMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Widget).SharedReferenceCount,&local_2c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  if ((FScriptContainerElement *)local_280._528_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._528_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_280);
  param_4.field0_0x0 = *(TObjectPtr<UAudioBus>_u_0 *)param_4.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4.field0_0x0.DebugPtr != (TObjectPtr<UAudioBus>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4.field0_0x0);
  }
  Init(this,param_1,param_2,(TObjectPtr<UAudioBus>)&param_4);
  return this;
}

// FAudioMeter @ 14d8affe0

FAudioMeter * __thiscall
AudioWidgets::FAudioMeter::FAudioMeter
          (FAudioMeter *this,int param_1,uint param_2,TObjectPtr<UAudioBus> param_3,
          FAudioMeterDefaultColorStyle *param_4)

{
  TSharedPtr<SAudioMeterBase,1> *pTVar1;
  FAudioWidgetsStyle *pFVar2;
  FName *pFVar3;
  FAudioMeterDefaultColorStyle *pFVar4;
  FArguments *pFVar5;
  TSharedRef<SAudioMeter,1> *pTVar6;
  FName local_res8;
  TObjectPtr<UAudioBus>_u_0 local_res20;
  SAudioMeter *local_578;
  FSharedReferencer<1> local_570;
  FLinearColor_u_0 local_568;
  uint local_558;
  undefined1 local_554;
  undefined1 local_550 [8];
  void *pvStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  uint local_528;
  undefined1 local_524;
  undefined1 local_520 [8];
  void *pvStack_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  uint local_4f8;
  undefined1 local_4f4;
  undefined1 local_4f0 [8];
  void *pvStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  uint local_4c8;
  undefined1 local_4c4;
  undefined1 local_4c0 [8];
  void *pvStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  uint local_498;
  undefined1 local_494;
  undefined1 local_490 [8];
  void *pvStack_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  uint local_468;
  undefined1 local_464;
  undefined1 local_460 [8];
  void *pvStack_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  uint local_438;
  undefined1 local_434;
  undefined1 local_430 [8];
  void *pvStack_428;
  undefined8 local_420;
  FName local_418;
  FMemScope local_410;
  TSharedRef<SAudioMeter,1> local_408;
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> local_3f8;
  FArguments local_3e0;
  
  pTVar1 = &this->Widget;
  pTVar1->Object = (SAudioMeterBase *)0x0;
  (this->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAudioMeter_AudioWidgets__6B_;
  (this->Analyzer).Object = (UObject *)0x0;
  (this->AudioBus).Object = (UObject *)0x0;
  (this->ChannelInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelInfo).ArrayNum = 0;
  (this->ChannelInfo).ArrayMax = 0;
  (this->ResultsDelegateHandle).ID = 0;
  (this->Settings).Object = (UObject *)0x0;
  this->bUseExternalAudioBus = false;
  pFVar4 = param_4;
  local_res20 = param_3.field0_0x0;
  if (param_4 == (FAudioMeterDefaultColorStyle *)0x0) {
    pFVar2 = FAudioWidgetsStyle::Get();
    pFVar3 = ::FName::FName(&local_res8,"AudioMeter.DefaultColorStyle");
    pFVar4 = (FAudioMeterDefaultColorStyle *)
             (**(code **)(*(longlong *)pFVar2 + 0xa0))
                       (pFVar2,FAudioMeterDefaultColorStyle::TypeName,*pFVar3,0,1);
    if ((pFVar4 == (FAudioMeterDefaultColorStyle *)0x0) &&
       (pFVar4 = &::Style,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0)) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FAudioMeterDefaultColorStyle::FAudioMeterDefaultColorStyle(&::Style);
        atexit(`FAudioMeterDefaultColorStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Style__);
        _Init_thread_footer(&::_TSS0);
      }
    }
  }
  pFVar5 = SAudioMeter::FArguments::FArguments(&local_3e0);
  pFVar5->_Orientation = Orient_Vertical;
  local_540 = 0;
  local_558 = local_558 & 0xffffff00;
  local_554 = 1;
  local_568 = FLinearColor::Transparent.field0_0x0;
  local_550 = (undefined1  [8])0x0;
  pvStack_548 = (void *)0x0;
  (pFVar5->_BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (pFVar5->_BackgroundColor).Value.ColorUseRule = (undefined1)local_558;
  (pFVar5->_BackgroundColor).Value.ColorTableId = local_558._1_1_;
  *(undefined2 *)&(pFVar5->_BackgroundColor).Value.field_0x12 = local_558._2_2_;
  (pFVar5->_BackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_BackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_550);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_550);
  if (pvStack_548 != (void *)0x0) {
    FMemory::Free(pvStack_548);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_550);
  local_538 = *(undefined8 *)&pFVar4->field_0x8;
  uStack_530 = *(undefined8 *)&pFVar4->field_0x10;
  local_528 = local_528 & 0xffffff00;
  local_510 = 0;
  local_524 = 1;
  local_520 = (undefined1  [8])0x0;
  pvStack_518 = (void *)0x0;
  *(undefined8 *)&(pFVar5->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_538;
  *(undefined8 *)((longlong)&(pFVar5->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_530;
  (pFVar5->_MeterBackgroundColor).Value.ColorUseRule = (undefined1)local_528;
  (pFVar5->_MeterBackgroundColor).Value.ColorTableId = local_528._1_1_;
  *(undefined2 *)&(pFVar5->_MeterBackgroundColor).Value.field_0x12 = local_528._2_2_;
  (pFVar5->_MeterBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_520);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_520);
  if (pvStack_518 != (void *)0x0) {
    FMemory::Free(pvStack_518);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_520);
  local_508 = *(undefined8 *)&pFVar4->field_0x18;
  uStack_500 = *(undefined8 *)&pFVar4->field_0x20;
  local_4f8 = local_4f8 & 0xffffff00;
  local_4e0 = 0;
  local_4f4 = 1;
  local_4f0 = (undefined1  [8])0x0;
  pvStack_4e8 = (void *)0x0;
  *(undefined8 *)&(pFVar5->_MeterValueColor).Value.SpecifiedColor.field0_0x0 = local_508;
  *(undefined8 *)((longlong)&(pFVar5->_MeterValueColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_500;
  (pFVar5->_MeterValueColor).Value.ColorUseRule = (undefined1)local_4f8;
  (pFVar5->_MeterValueColor).Value.ColorTableId = local_4f8._1_1_;
  *(undefined2 *)&(pFVar5->_MeterValueColor).Value.field_0x12 = local_4f8._2_2_;
  (pFVar5->_MeterValueColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterValueColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
  if (pvStack_4e8 != (void *)0x0) {
    FMemory::Free(pvStack_4e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f0);
  local_4d8 = *(undefined8 *)&pFVar4->field_0x28;
  uStack_4d0 = *(undefined8 *)&pFVar4->field_0x30;
  local_4c8 = local_4c8 & 0xffffff00;
  local_4b0 = 0;
  local_4c4 = 1;
  local_4c0 = (undefined1  [8])0x0;
  pvStack_4b8 = (void *)0x0;
  *(undefined8 *)&(pFVar5->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 = local_4d8;
  *(undefined8 *)((longlong)&(pFVar5->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_4d0;
  (pFVar5->_MeterPeakColor).Value.ColorUseRule = (undefined1)local_4c8;
  (pFVar5->_MeterPeakColor).Value.ColorTableId = local_4c8._1_1_;
  *(undefined2 *)&(pFVar5->_MeterPeakColor).Value.field_0x12 = local_4c8._2_2_;
  (pFVar5->_MeterPeakColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterPeakColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c0);
  if (pvStack_4b8 != (void *)0x0) {
    FMemory::Free(pvStack_4b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c0);
  local_4a8 = *(undefined8 *)&pFVar4->field_0x38;
  uStack_4a0 = *(undefined8 *)&pFVar4->field_0x40;
  local_498 = local_498 & 0xffffff00;
  local_480 = 0;
  local_494 = 1;
  local_490 = (undefined1  [8])0x0;
  pvStack_488 = (void *)0x0;
  *(undefined8 *)&(pFVar5->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 = local_4a8;
  *(undefined8 *)((longlong)&(pFVar5->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_4a0;
  (pFVar5->_MeterClippingColor).Value.ColorUseRule = (undefined1)local_498;
  (pFVar5->_MeterClippingColor).Value.ColorTableId = local_498._1_1_;
  *(undefined2 *)&(pFVar5->_MeterClippingColor).Value.field_0x12 = local_498._2_2_;
  (pFVar5->_MeterClippingColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterClippingColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  if (pvStack_488 != (void *)0x0) {
    FMemory::Free(pvStack_488);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  local_478 = *(undefined8 *)&pFVar4->field_0x48;
  uStack_470 = *(undefined8 *)&pFVar4->field_0x50;
  local_468 = local_468 & 0xffffff00;
  local_450 = 0;
  local_464 = 1;
  local_460 = (undefined1  [8])0x0;
  pvStack_458 = (void *)0x0;
  *(undefined8 *)&(pFVar5->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 = local_478;
  *(undefined8 *)((longlong)&(pFVar5->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_470;
  (pFVar5->_MeterScaleColor).Value.ColorUseRule = (undefined1)local_468;
  (pFVar5->_MeterScaleColor).Value.ColorTableId = local_468._1_1_;
  *(undefined2 *)&(pFVar5->_MeterScaleColor).Value.field_0x12 = local_468._2_2_;
  (pFVar5->_MeterScaleColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterScaleColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_460);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_460);
  if (pvStack_458 != (void *)0x0) {
    FMemory::Free(pvStack_458);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_460);
  local_448 = *(undefined8 *)&pFVar4->field_0x58;
  uStack_440 = *(undefined8 *)&pFVar4->field_0x60;
  local_438 = local_438 & 0xffffff00;
  local_434 = 1;
  local_420 = 0;
  local_430 = (undefined1  [8])0x0;
  pvStack_428 = (void *)0x0;
  *(undefined8 *)&(pFVar5->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 = local_448;
  *(undefined8 *)((longlong)&(pFVar5->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_440;
  (pFVar5->_MeterScaleLabelColor).Value.ColorUseRule = (undefined1)local_438;
  (pFVar5->_MeterScaleLabelColor).Value.ColorTableId = local_438._1_1_;
  *(undefined2 *)&(pFVar5->_MeterScaleLabelColor).Value.field_0x12 = local_438._2_2_;
  (pFVar5->_MeterScaleLabelColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterScaleLabelColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  if (pvStack_428 != (void *)0x0) {
    FMemory::Free(pvStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_418 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_410,&local_418,true);
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>
            (&local_3f8,"SAudioMeter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMeter.cpp"
             ,0xbc,(T0RequiredArgs *)&param_4);
  FMemScope::~FMemScope(&local_410);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar6 = TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_3f8,&local_408,pFVar5);
  local_570.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_578 = pTVar6->Object;
  if (local_570.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_570.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_570.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<SAudioMeterBase,1> *)&local_578) {
    pTVar1->Object = (SAudioMeterBase *)local_578;
    local_578 = (SAudioMeter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Widget).SharedReferenceCount,&local_570);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_570.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8._Widget.SharedReferenceCount.ReferenceController);
  SAudioMeter::FArguments::~FArguments(&local_3e0);
  local_res20 = (TObjectPtr<UAudioBus>_u_0)(local_res20.DebugPtr)->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20.DebugPtr != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
  }
  Init(this,param_1,param_2,(TObjectPtr<UAudioBus>)&local_res20);
  return this;
}

// ~FAudioMeter @ 14d8be060

void __thiscall AudioWidgets::FAudioMeter::~FAudioMeter(FAudioMeter *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FAudioMeter_AudioWidgets__6B_;
  Teardown(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  pUVar3 = (this->Settings).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->Settings).Object = (UObject *)0x0;
  }
  pFVar4 = (this->ChannelInfo).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pUVar3 = (this->AudioBus).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  pUVar3 = (this->Analyzer).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->Analyzer).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8be100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
  }
  return;
}

// GetAudioBus @ 14d92acc0

UAudioBus * __thiscall AudioWidgets::FAudioMeter::GetAudioBus(FAudioMeter *this)

{
  return (UAudioBus *)(this->AudioBus).Object;
}

// GetWidget @ 14d938480

TSharedRef<SAudioMeter,1> * __thiscall
AudioWidgets::FAudioMeter::GetWidget
          (FAudioMeter *this,TSharedRef<SAudioMeter,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SAudioMeter,1> *pTVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<SWidget,1> local_18;
  
  if ((this->Widget).Object == (SAudioMeterBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SAudioMeter,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&((this->Widget).Object)->_padding_,&local_18);
  __return_storage_ptr__->Object = (SAudioMeter *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Init @ 14d93b640

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
AudioWidgets::FAudioMeter::Init
          (FAudioMeter *this,int param_1,UWorld *param_2,TObjectPtr<UAudioBus> param_3)

{
  bool bVar1;
  uint uVar2;
  UObject *local_28;
  FAudioDeviceHandle local_20;
  
  UWorld::GetAudioDevice(param_2,&local_20);
  bVar1 = FAudioDeviceHandle::IsValid(&local_20);
  if (bVar1) {
    local_28 = *(UObject **)param_3.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28);
    }
    uVar2 = FAudioDeviceHandle::GetDeviceID(&local_20);
    Init(this,param_1,uVar2,(TObjectPtr<UAudioBus>)&local_28);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_20);
  return;
}

// Init @ 14d93b6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioMeter::Init
          (FAudioMeter *this,int param_1,uint param_2,TObjectPtr<UAudioBus> param_3)

{
  TStrongObjectPtr<UMeterSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  TStrongObjectPtr<UMeterAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar3;
  int *piVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  SAudioMeterBase *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UAudioBus *pUVar14;
  UAudioBus *pUVar15;
  FDelegateHandle FVar16;
  longlong *plVar17;
  UAudioBus *pUVar18;
  longlong lVar19;
  UAudioBus **ppUVar20;
  ulonglong uVar21;
  undefined1 auStackY_238 [32];
  UAudioBus *local_1e8;
  UAudioBus *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  uint local_1cc;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  undefined1 local_1b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b0;
  ForAnyElementType FStack_1a8;
  ulonglong local_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  FMRSWRecursiveAccessDetector *local_178;
  char local_170;
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pUVar15 = (UAudioBus *)0x0;
  local_188._0_4_ = 0;
  uVar21 = (ulonglong)(uint)param_1;
  local_1cc = param_2;
  Teardown(this);
  pUVar12 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar12,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = Z_Construct_UClass_UMeterSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_158,pUVar13);
  local_158._8_8_ = pUVar12;
  pUVar14 = (UAudioBus *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
  if (local_158._64_8_ != 0) {
    plVar17 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  pUVar18 = pUVar15;
  if (pUVar14 != (UAudioBus *)0x0) {
    UObjectBase::AddRef((UObjectBase *)pUVar14);
    pUVar18 = pUVar14;
  }
  pTVar1 = &this->Settings;
  if (pTVar1 == (TStrongObjectPtr<UMeterSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_168) {
    if (pUVar18 != (UAudioBus *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar18);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar18;
  }
  if ((pTVar1->Object == (UObject *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined4 *)&pTVar1->Object[1].field_0x10 = 4000;
  if (param_2 != 0xffffffff) {
    if ((param_1 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumChannels > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMeter.cpp"
                            ,0xf5,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = Z_Construct_UClass_UMeterAnalyzer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar13);
    local_d8._8_8_ = pUVar12;
    pUVar14 = (UAudioBus *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar17 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    pUVar18 = pUVar15;
    if (pUVar14 != (UAudioBus *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar14);
      pUVar18 = pUVar14;
    }
    pTVar2 = &this->Analyzer;
    if (pTVar2 == (TStrongObjectPtr<UMeterAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)&local_160) {
      if (pUVar18 != (UAudioBus *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar18);
      }
    }
    else {
      if (pTVar2->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
      }
      pTVar2->Object = (UObject *)pUVar18;
    }
    pUVar12 = pTVar1->Object;
    if ((pTVar2->Object == (UObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pUVar5 = pTVar2->Object;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    *(UObject **)(pUVar5 + 4) = pUVar12;
    lVar19 = *(longlong *)param_3.field0_0x0;
    this->bUseExternalAudioBus = lVar19 != 0;
    if (lVar19 == 0) {
      pUVar12 = GetTransientPackageAsObject();
      pUVar15 = NewObject<UAudioBus>(pUVar12);
      local_1e8 = (UAudioBus *)0x0;
      if (pUVar15 != (UAudioBus *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pUVar15);
        local_1e8 = pUVar15;
      }
      ppUVar20 = &local_1e8;
      bVar9 = false;
      bVar10 = true;
      pUVar15 = local_1e8;
    }
    else {
      pUVar14 = *(UAudioBus **)param_3.field0_0x0;
      local_1e0 = (UAudioBus *)0x0;
      if (pUVar14 == (UAudioBus *)0x0) {
        ppUVar20 = &local_1e0;
        bVar9 = true;
        bVar10 = false;
      }
      else {
        UObjectBase::AddRef((UObjectBase *)pUVar14);
        ppUVar20 = &local_1e0;
        bVar9 = true;
        bVar10 = false;
        pUVar15 = pUVar14;
        local_1e0 = pUVar14;
      }
    }
    pTVar3 = &this->AudioBus;
    if (pTVar3 != (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)ppUVar20) {
      if (pTVar3->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar3->Object);
      }
      *ppUVar20 = (UAudioBus *)0x0;
      pTVar3->Object = (UObject *)pUVar15;
    }
    pUVar15 = local_1e0;
    if ((bVar10) && (local_1e8 != (UAudioBus *)0x0)) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_1e8);
      local_1e8 = (UAudioBus *)0x0;
    }
    if ((bVar9) && (pUVar15 != (UAudioBus *)0x0)) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar15);
      local_1e0 = (UAudioBus *)0x0;
    }
    if ((pTVar3->Object == (UObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar3->Object[1].field_0x8 = (char)param_1 + -1;
    if (((this->Analyzer).Object == (UObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uStack_190 = (ulonglong)uStack_190._4_4_ << 0x20;
    local_198 = OnMeterOutput;
    FVar16 = TMulticastDelegateRegistration<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
             ::AddRaw<AudioWidgets::FAudioMeter>
                       ((TMulticastDelegateRegistration<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
                         *)((this->Analyzer).Object + 9),(FAudioMeter *)local_188,
                        (pmf_098f9725 *)this);
                    /* WARNING: Load size is inaccurate */
    (this->ResultsDelegateHandle).ID = *FVar16.ID;
    if (((this->Analyzer).Object == (UObject *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UAudioAnalyzer::StartAnalyzing
              ((UAudioAnalyzer *)(this->Analyzer).Object,local_1cc,
               (UAudioBus *)(this->AudioBus).Object);
  }
  local_1d8 = 0xc3200000;
  uStack_1d4 = 0xc3200000;
  local_1d0 = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar21);
  }
  piVar4 = &(this->ChannelInfo).ArrayMax;
  (this->ChannelInfo).ArrayNum = 0;
  if (*piVar4 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,param_1,&(this->ChannelInfo).AllocatorInstance,0,piVar4);
  }
  if (0 < param_1) {
    do {
      pFVar6 = (this->ChannelInfo).AllocatorInstance.Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 < pFVar6 + (longlong)*piVar4 * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (this->ChannelInfo).ArrayNum;
      if (iVar11 == *piVar4) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(this->ChannelInfo).AllocatorInstance,piVar4);
      }
      (this->ChannelInfo).ArrayNum = iVar11 + 1;
      pFVar6 = (this->ChannelInfo).AllocatorInstance.Data;
      *(ulonglong *)(pFVar6 + (longlong)iVar11 * 0xc) = CONCAT44(uStack_1d4,local_1d8);
      *(undefined4 *)(pFVar6 + (longlong)iVar11 * 0xc + 8) = local_1d0;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  pSVar7 = (this->Widget).Object;
  if (pSVar7 != (SAudioMeterBase *)0x0) {
    local_1c0 = (this->ChannelInfo).ArrayNum;
    lVar19 = (longlong)local_1c0;
    pFVar6 = (this->ChannelInfo).AllocatorInstance.Data;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    pcVar8 = *(code **)(pSVar7->_padding_ + 0x248);
    if (local_1c0 == 0) {
      local_1bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_1c0,0,&local_1c8,local_1c0,&local_1bc);
      memcpy(local_1c8.Data,pFVar6,lVar19 * 0xc);
    }
    local_1b8 = 1;
    local_1a0 = 0;
    local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1a8.Data = (FScriptContainerElement *)0x0;
    (*pcVar8)(pSVar7,&local_1c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1b0,(FWriteAccessScope *)(local_188 + 8));
    if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
      local_1a0 = local_1a0 & 0xffffffff00000000;
    }
    if (local_170 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_178,(FDestructionSentinel *)(local_188 + 8));
    }
    if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  return;
}

// MakeRackUnit @ 14d943620

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __cdecl
AudioWidgets::FAudioMeter::MakeRackUnit
          (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,
          FAudioAnalyzerRackUnitConstructParams *param_1)

{
  int *piVar1;
  ISlateStyle *pIVar2;
  UAudioBus *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FAudioMaterialMeterStyle *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName *pFVar10;
  FAudioMeterDefaultColorStyle *pFVar11;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar12;
  int iVar13;
  IAudioAnalyzerRackUnit *pIVar14;
  FName local_res10;
  UAudioBus *local_res18;
  UAudioBus *local_res20;
  ulonglong in_stack_ffffffffffffffb8;
  FName local_38 [2];
  
  ::FName::FName(&local_res10,"AudioMaterialMeter.Style");
  lVar7 = (**(code **)((longlong)*param_1->StyleSet + 0xa0))
                    (param_1->StyleSet,FAudioMaterialMeterStyle::TypeName,local_res10,0,
                     in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  pIVar2 = param_1->StyleSet;
  if (lVar7 == 0) {
    pFVar10 = ::FName::FName(local_38,"AudioMeter.DefaultColorStyle");
    pFVar11 = (FAudioMeterDefaultColorStyle *)
              (**(code **)((longlong)*pIVar2 + 0xa0))
                        (pIVar2,FAudioMeterDefaultColorStyle::TypeName,*pFVar10,0,1);
    if ((pFVar11 == (FAudioMeterDefaultColorStyle *)0x0) &&
       (pFVar11 = &::Style,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0)) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FAudioMeterDefaultColorStyle::FAudioMeterDefaultColorStyle(&::Style);
        atexit(`FAudioMeterDefaultColorStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Style__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pUVar3 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
    if (pUVar3 == (UAudioBus *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = pUVar3->AudioBusChannels + 1;
    }
    pTVar9 = ::operator_new(0x70);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d94386f;
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioMeter_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    local_res20 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FAudioMeter((FAudioMeter *)(pTVar9 + 1),iVar13,(param_1->AudioBusInfo).AudioDeviceId,
                (TObjectPtr<UAudioBus>)&local_res20,pFVar11);
LAB_14d943834:
    pIVar14 = (IAudioAnalyzerRackUnit *)(pTVar9 + 1);
    if (pIVar14 == (IAudioAnalyzerRackUnit *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar5)();
        return pTVar12;
      }
      goto LAB_14d9438d6;
    }
  }
  else {
    pFVar8 = (FAudioMaterialMeterStyle *)
             (**(code **)((longlong)*pIVar2 + 0xa0))
                       (pIVar2,FAudioMaterialMeterStyle::TypeName,local_res10,0,1);
    if ((pFVar8 == (FAudioMaterialMeterStyle *)0x0) &&
       (pFVar8 = &::Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0)) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&::Default);
        atexit(`FAudioMaterialMeterStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pUVar3 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
    if (pUVar3 == (UAudioBus *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = pUVar3->AudioBusChannels + 1;
    }
    pTVar9 = ::operator_new(0x70);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAudioMeter_AudioWidgets___00_SharedPointerInternals__6B_
      ;
      local_res18 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UAudioBus *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res18);
      }
      FAudioMeter((FAudioMeter *)(pTVar9 + 1),iVar13,(param_1->AudioBusInfo).AudioDeviceId,pFVar8,
                  (TObjectPtr<UAudioBus>)&local_res18);
      goto LAB_14d943834;
    }
LAB_14d94386f:
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pIVar14 = (IAudioAnalyzerRackUnit *)&DAT_00000010;
  }
  if (((*(longlong *)&pIVar14->field_0x8 == 0) || (*(longlong *)&pIVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IAudioAnalyzerRackUnit **)&pIVar14->field_0x8 = pIVar14;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pIVar14->field_0x10) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pIVar14->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar14->field_0x10 = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d9438d6:
  __return_storage_ptr__->Object = pIVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// OnMeterOutput @ 14d94d8f0

void __thiscall
AudioWidgets::FAudioMeter::OnMeterOutput
          (FAudioMeter *this,UMeterAnalyzer *param_1,int param_2,FMeterResults *param_3)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  SAudioMeterBase *pSVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 local_58 [24];
  undefined1 local_40 [56];
  
  lVar7 = (longlong)param_2;
  if (param_1 == (UMeterAnalyzer *)(this->Analyzer).Object) {
    fVar1 = param_3->MeterValue;
    fVar2 = param_3->PeakValue;
    if (param_2 < (this->ChannelInfo).ArrayNum) {
      if ((param_2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->ChannelInfo).AllocatorInstance.Data;
      *(float *)(pFVar3 + lVar7 * 0xc) = fVar1;
      *(float *)(pFVar3 + lVar7 * 0xc + 4) = fVar2;
      *(undefined4 *)(pFVar3 + lVar7 * 0xc + 8) = 0;
    }
    if ((param_2 == (this->ChannelInfo).ArrayNum + -1) &&
       (pSVar4 = (this->Widget).Object, pSVar4 != (SAudioMeterBase *)0x0)) {
      pcVar5 = *(code **)(pSVar4->_padding_ + 0x248);
      TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::
      TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_><TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
                ((TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_58,
                 &this->ChannelInfo);
      (*pcVar5)(pSVar4,local_58);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
      if ((void *)local_40._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_40._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_40);
      if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_58._0_8_);
      }
    }
  }
  return;
}

// SetAudioBusInfo @ 14d967fd0

void __thiscall AudioWidgets::FAudioMeter::SetAudioBusInfo(FAudioMeter *this,FAudioBusInfo *param_1)

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

// SpawnTab @ 14d970580

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
AudioWidgets::FAudioMeter::SpawnTab
          (FAudioMeter *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FArguments *pFVar7;
  FArguments *pFVar8;
  FSlot *this_00;
  FSlot *pFVar9;
  TSharedRef<SDockTab,1> *pTVar10;
  TSharedRef<SWidget,1> *pTVar11;
  TSharedRef<SVerticalBox,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_848 [2];
  FText local_840;
  bool local_830;
  undefined1 local_828 [8];
  ForAnyElementType FStack_820;
  ulonglong local_818;
  undefined8 local_810;
  FSharedReferencer<1> local_808;
  SVerticalBox *local_800;
  TReferenceControllerBase<1> *pTStack_7f8;
  undefined1 local_7f0 [8];
  FSlot *local_7e8;
  FName local_7e0;
  FMemScope local_7d8;
  FName local_7d0;
  FMemScope local_7c8;
  TSharedRef<SWidget,1> local_7c0;
  FDestructionSentinel local_7b0;
  TSharedRef<SVerticalBox,1> local_798;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_788;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_770;
  undefined8 *local_758;
  SWidget *local_750;
  FSharedReferencer<1> local_748 [4];
  undefined1 local_728 [24];
  undefined4 local_710;
  undefined1 local_70c;
  undefined4 local_708;
  undefined1 local_704;
  FSlotArgumentsMixin local_700;
  FArguments local_670;
  FArguments local_468;
  
  pFVar7 = SDockTab::FArguments::FArguments(&local_468);
  *(undefined1 *)((longlong)&pFVar7->_padding_ + 2) = 1;
  local_840.TextData.Reference = RackUnitTypeInfo.DisplayName.TextData.Reference;
  if (RackUnitTypeInfo.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*RackUnitTypeInfo.DisplayName.TextData.Reference + 8))
              (RackUnitTypeInfo.DisplayName.TextData.Reference,local_7f0);
  }
  local_840.Flags = RackUnitTypeInfo.DisplayName.Flags;
  local_830 = true;
  pFVar9 = (FSlot *)0x0;
  local_818 = 0;
  local_828 = (undefined1  [8])0x0;
  FStack_820.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar7->_Label).Value,&local_840);
  (pFVar7->_Label).bIsSet = local_830;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_828);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_828,
             (FWriteAccessScope *)&local_7b0);
  if (((int)local_818 != 0) && (FStack_820.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_820.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_820,0,0,0x10);
    local_818 = local_818 & 0xffffffff00000000;
  }
  if (local_7b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
  }
  if (FStack_820.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_820.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_828);
  if (local_840.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_840.TextData.Reference + 0x10))();
  }
  pFVar8 = SVerticalBox::FArguments::FArguments(&local_670);
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar9 = SVerticalBox::FSlot::FSlot(this_00);
  }
  local_7e8 = pFVar9;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_758,(FSlot *)&local_7e8);
  local_710 = 2;
  local_70c = 1;
  local_708 = 0;
  local_704 = 1;
  if (((this->Widget).Object == (SAudioMeterBase *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar4)();
    return pTVar10;
  }
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&((this->Widget).Object)->_padding_,&local_7c0)
  ;
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar11->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_810 = 0;
  local_808.ReferenceController = pTVar1;
  local_750 = pSVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_748,&local_808);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_808.ReferenceController);
  pFVar8 = SVerticalBox::FArguments::operator+(pFVar8,(FSlotArguments *)&local_758);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7d8,&local_7e0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_770,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMeter.cpp"
             ,0x141,local_res8);
  FMemScope::~FMemScope(&local_7d8);
  FLLMScope::~FLLMScope(local_res20);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_770,&local_798,pFVar8);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_800 = pTVar12->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = (SWidget *)local_800;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  pTStack_7f8 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_848,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_7c8,&local_7d0,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_788,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMeter.cpp"
             ,0x13d,local_res10);
  FMemScope::~FMemScope(&local_7c8);
  FLLMScope::~FLLMScope(local_848);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_788,__return_storage_ptr__,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_788._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_770._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_700);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_728);
  if ((void *)local_728._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_728._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_728);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_748[0].ReferenceController);
  if (local_758 != (undefined8 *)0x0) {
    (**(code **)*local_758)(local_758,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_670._Slots.AllocatorInstance.Data,local_670._Slots.ArrayNum);
  if ((FSlotArguments *)local_670._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_670._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_670);
  SDockTab::FArguments::~FArguments(&local_468);
  return __return_storage_ptr__;
}

// Teardown @ 14d975ba0

void __thiscall AudioWidgets::FAudioMeter::Teardown(FAudioMeter *this)

{
  UObjectBase *this_00;
  FDelegateHandle FVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UMeterAnalyzer *pUVar5;
  
  this_00 = (UObjectBase *)(this->Analyzer).Object;
  if (this_00 != (UObjectBase *)0x0) {
    bVar4 = UObjectBase::IsValidLowLevel(this_00);
    if (bVar4) {
      if ((this->Analyzer).Object == (UObject *)0x0) {
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
      UAudioAnalyzer::StopAnalyzing((UAudioAnalyzer *)(this->Analyzer).Object,(UObject *)0x0);
      if ((this->ResultsDelegateHandle).ID != 0) {
        pUVar5 = TStrongObjectPtr<UMeterAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 ::operator->(&this->Analyzer);
        FVar1.ID = (this->ResultsDelegateHandle).ID;
        if (FVar1.ID != 0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar5->OnLatestPerChannelMeterResultsNative,FVar1);
        }
      }
      pUVar2 = (this->Analyzer).Object;
      if (pUVar2 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
        (this->Analyzer).Object = (UObject *)0x0;
      }
    }
  }
  (this->ResultsDelegateHandle).ID = 0;
  pUVar2 = (this->AudioBus).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  (this->ChannelInfo).ArrayNum = 0;
  if ((this->ChannelInfo).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->ChannelInfo).AllocatorInstance,0,&(this->ChannelInfo).ArrayMax);
  }
  pUVar2 = (this->Settings).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings).Object = (UObject *)0x0;
  }
  this->bUseExternalAudioBus = false;
  return;
}

