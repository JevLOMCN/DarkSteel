// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 9

// StaticClass @ 14d891150

UClass * __cdecl UAudioMaterialEnvelope::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialEnvelope",
               &Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton,
               StaticRegisterNativesUAudioMaterialEnvelope,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialEnvelope>,
               InternalVTableHelperCtorCaller<UAudioMaterialEnvelope>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton;
}

// UAudioMaterialEnvelope @ 14d8b8980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialEnvelope * __thiscall
UAudioMaterialEnvelope::UAudioMaterialEnvelope(UAudioMaterialEnvelope *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialEnvelopeStyle::FAudioMaterialEnvelopeStyle(&this->WidgetStyle);
  (this->EnvelopeSettings).EnvelopeType = ADSR;
  (this->EnvelopeCurve).Object = (SAudioMaterialEnvelope *)0x0;
  (this->EnvelopeCurve).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EnvelopeSettings).AttackCurve = 1.0;
  (this->EnvelopeSettings).AttackValue = 1.0;
  (this->EnvelopeSettings).AttackTime = 1.0;
  (this->EnvelopeSettings).DecayCurve = 1.0;
  (this->EnvelopeSettings).DecayTime = 1.0;
  (this->EnvelopeSettings).SustainValue = 1.0;
  (this->EnvelopeSettings).ReleaseCurve = 1.0;
  (this->EnvelopeSettings).ReleaseTime = 1.0;
  return this;
}

// UAudioMaterialEnvelope @ 14d8b8a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioMaterialEnvelope * __thiscall
UAudioMaterialEnvelope::UAudioMaterialEnvelope(UAudioMaterialEnvelope *this)

{
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  FAudioWidgetsStyle *pFVar3;
  FName *pFVar4;
  FAudioMaterialEnvelopeStyle *pFVar5;
  FName local_res10;
  
  pFVar2 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialEnvelopeStyle::FAudioMaterialEnvelopeStyle(&this->WidgetStyle);
  (this->EnvelopeSettings).EnvelopeType = ADSR;
  (this->EnvelopeSettings).AttackCurve = 1.0;
  (this->EnvelopeSettings).AttackValue = 1.0;
  (this->EnvelopeSettings).AttackTime = 1.0;
  (this->EnvelopeSettings).DecayCurve = 1.0;
  (this->EnvelopeSettings).DecayTime = 1.0;
  (this->EnvelopeSettings).SustainValue = 1.0;
  (this->EnvelopeSettings).ReleaseCurve = 1.0;
  (this->EnvelopeSettings).ReleaseTime = 1.0;
  (this->EnvelopeCurve).Object = (SAudioMaterialEnvelope *)0x0;
  (this->EnvelopeCurve).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FAudioWidgetsStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"AudioMaterialEnvelope.Style");
  pFVar5 = (FAudioMaterialEnvelopeStyle *)
           (**(code **)(*(longlong *)pFVar3 + 0xa0))
                     (pFVar3,FAudioMaterialEnvelopeStyle::TypeName,*pFVar4,0,1);
  if ((pFVar5 == (FAudioMaterialEnvelopeStyle *)0x0) &&
     (pFVar5 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FAudioMaterialEnvelopeStyle__6B_;
      ::Default.CurveColor = FLinearColor::White;
      ::Default._padding_ = 0x4380000043800000;
      ::Default._padding_ = 0;
      ::Default.OutlineColor = FLinearColor::Gray;
      ::Default.BackgroundColor = FLinearColor::Black;
      atexit(`FAudioMaterialEnvelopeStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)pFVar5->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar5->_padding_);
  }
  (this->WidgetStyle)._padding_ = pFVar5->_padding_;
  (this->WidgetStyle)._padding_ = pFVar5->_padding_;
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->CurveColor).field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).CurveColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->CurveColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).CurveColor.field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).BackgroundColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).BackgroundColor.field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->OutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).OutlineColor.field0_0x0 =
       *(undefined8 *)&(pFVar5->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).OutlineColor.field0_0x0 + 8) = uVar1;
  return this;
}

// ~UAudioMaterialEnvelope @ 14d8c1170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialEnvelope::~UAudioMaterialEnvelope(UAudioMaterialEnvelope *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EnvelopeCurve).SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14d933660

UClass * __cdecl UAudioMaterialEnvelope::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialEnvelope",
               &Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton,
               StaticRegisterNativesUAudioMaterialEnvelope,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioMaterialEnvelope>,
               InternalVTableHelperCtorCaller<UAudioMaterialEnvelope>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton;
}

// RebuildWidget @ 14d95f1f0

TSharedRef<SWidget,1> * __thiscall
UAudioMaterialEnvelope::RebuildWidget
          (UAudioMaterialEnvelope *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SAudioMaterialEnvelope *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  TSharedPtr<SAudioMaterialEnvelope,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FWeakObjectPtr local_res18;
  UAudioMaterialEnvelope *local_res20;
  TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> local_288;
  SAudioMaterialEnvelope *local_270;
  FSharedReferencer<1> local_268;
  FName local_260;
  FMemScope local_258;
  FArguments local_250;
  
  pFVar9 = SAudioMaterialEnvelope::FArguments::FArguments(&local_250);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UAudioMaterialEnvelope *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UAudioMaterialEnvelope *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  (pFVar9->_Owner).WeakPtr = local_res18;
  pFVar9->_AudioMaterialEnvelopeStyle = &this->WidgetStyle;
  pFVar9->_EnvelopeSettings = &this->EnvelopeSettings;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_260 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_258,&local_260,true);
  TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>
            (&local_288,"SAudioMaterialEnvelope",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioMaterialSlate\\AudioMaterialEnvelope.cpp"
             ,0x2f,local_res8);
  FMemScope::~FMemScope(&local_258);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_288._Widget.Object;
  if (local_288._Widget.Object == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SAudioMaterialEnvelope::Construct(local_288._Widget.Object,pFVar9);
  if (local_288._Widget.Object == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  if (((local_288._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_288._Widget.Object)->_padding_ + 0x228))(local_288._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d95f3af;
  }
  bVar8 = 0x20;
LAB_14d95f3af:
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar8;
  if (local_288._Widget.Object == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_288._Widget.Object == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  FVar5.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SAudioMaterialEnvelope *)0x0;
  if (pSVar3 == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  local_270 = pSVar3;
  local_268.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = &this->EnvelopeCurve;
  if (pTVar11 != (TSharedPtr<SAudioMaterialEnvelope,1> *)&local_270) {
    pTVar11->Object = pSVar3;
    local_270 = (SAudioMaterialEnvelope *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EnvelopeCurve).SharedReferenceCount,&local_268);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  if (pTVar11->Object == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pTVar2 = (this->EnvelopeCurve).SharedReferenceCount.ReferenceController;
  pSVar3 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SAudioMaterialEnvelope *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d9638f0

void __thiscall
UAudioMaterialEnvelope::ReleaseSlateResources(UAudioMaterialEnvelope *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->EnvelopeCurve != (TSharedPtr<SAudioMaterialEnvelope,1> *)&local_18) {
    (this->EnvelopeCurve).Object = (SAudioMaterialEnvelope *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EnvelopeCurve).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// StaticRegisterNativesUAudioMaterialEnvelope @ 14d971bc0

void __cdecl UAudioMaterialEnvelope::StaticRegisterNativesUAudioMaterialEnvelope(void)

{
  return;
}

// SynchronizeProperties @ 14d9725e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioMaterialEnvelope::SynchronizeProperties(UAudioMaterialEnvelope *this)

{
  SAudioMaterialEnvelope *this_00;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->EnvelopeCurve).Object;
  if (this_00 != (SAudioMaterialEnvelope *)0x0) {
    SAudioMaterialEnvelope::ApplyNewMaterial(this_00);
    return;
  }
  return;
}

