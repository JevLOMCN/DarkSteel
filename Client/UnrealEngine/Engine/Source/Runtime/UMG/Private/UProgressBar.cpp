// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 41

// GetWidgetStyle_WrapperImpl @ 14696d610

void __cdecl UProgressBar::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  undefined **local_238 [2];
  FSlateBrush local_228;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  bool local_18;
  
  local_238[0] = &___7FProgressBarStyle__6B_;
  FSlateBrush::FSlateBrush(&local_228,(FSlateBrush *)((longlong)param_1 + 0x1c0));
  FSlateBrush::FSlateBrush(&local_178,(FSlateBrush *)((longlong)param_1 + 0x270));
  FSlateBrush::FSlateBrush(&local_c8,(FSlateBrush *)((longlong)param_1 + 800));
  local_18 = *(bool *)((longlong)param_1 + 0x3d0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_2 + 0x10),&local_228);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_2 + 0xc0),&local_178);
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_2 + 0x170),&local_c8);
  *(bool *)((longlong)param_2 + 0x220) = local_18;
  FProgressBarStyle::~FProgressBarStyle((FProgressBarStyle *)local_238);
  return;
}

// SetWidgetStyle_WrapperImpl @ 14696d6e0

void __cdecl UProgressBar::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x1c0),(FSlateBrush *)((longlong)param_2 + 0x10));
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x270),(FSlateBrush *)((longlong)param_2 + 0xc0));
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 800),(FSlateBrush *)((longlong)param_2 + 0x170));
  *(undefined1 *)((longlong)param_1 + 0x3d0) = *(undefined1 *)((longlong)param_2 + 0x220);
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    SProgressBar::SetStyle
              (*(SProgressBar **)((longlong)param_1 + 0x438),
               (FProgressBarStyle *)((longlong)param_1 + 0x1b0));
  }
  return;
}

// GetPercent_WrapperImpl @ 14696d7b0

void __cdecl UProgressBar::GetPercent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x3e0);
  return;
}

// SetPercent_WrapperImpl @ 14696d7c0

void __cdecl UProgressBar::SetPercent_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<TOptional<float>_> local_38;
  
  local_38.Value.TypedValue = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x3e0) = local_38.Value.TypedValue;
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.Value.bIsSet = true;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SProgressBar::SetPercent(*(SProgressBar **)((longlong)param_1 + 0x438),&local_38);
  }
  return;
}

// GetBarFillType_WrapperImpl @ 14696d860

void __cdecl UProgressBar::GetBarFillType_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x3e4);
  return;
}

// SetBarFillType_WrapperImpl @ 14696d880

void __cdecl UProgressBar::SetBarFillType_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x3e4) = bVar1;
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    SProgressBar::SetBarFillType(*(SProgressBar **)((longlong)param_1 + 0x438),(uint)bVar1);
    return;
  }
  return;
}

// GetBarFillStyle_WrapperImpl @ 14696d8b0

void __cdecl UProgressBar::GetBarFillStyle_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x3e5);
  return;
}

// SetBarFillStyle_WrapperImpl @ 14696d8c0

void __cdecl UProgressBar::SetBarFillStyle_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x3e5) = bVar1;
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    SProgressBar::SetBarFillStyle(*(SProgressBar **)((longlong)param_1 + 0x438),(uint)bVar1);
    return;
  }
  return;
}

// GetbIsMarquee_WrapperImpl @ 14696d8f0

void __cdecl UProgressBar::GetbIsMarquee_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x3e6);
  return;
}

// SetbIsMarquee_WrapperImpl @ 14696d900

void __cdecl UProgressBar::SetbIsMarquee_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  TAttribute<TOptional<float>_> local_38;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x3e6) = cVar1;
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    local_38.Value.bIsSet = cVar1 == '\0';
    if (local_38.Value.bIsSet) {
      local_38.Value.TypedValue = *(float *)((longlong)param_1 + 0x3e0);
    }
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SProgressBar::SetPercent(*(SProgressBar **)((longlong)param_1 + 0x438),&local_38);
  }
  return;
}

// GetBorderPadding_WrapperImpl @ 14696d970

void __cdecl UProgressBar::GetBorderPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x3f0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 1000);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetBorderPadding_WrapperImpl @ 14696d990

void __cdecl UProgressBar::SetBorderPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 1000) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x3f0) = uVar1;
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    local_38._s_0.X = (double)*(undefined8 *)param_2;
    local_38._s_0.Y = *(double *)((longlong)param_2 + 8);
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SProgressBar::SetBorderPadding
              (*(SProgressBar **)((longlong)param_1 + 0x438),
               (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// GetFillColorAndOpacity_WrapperImpl @ 14696da20

void __cdecl UProgressBar::GetFillColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x418);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x410);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetFillColorAndOpacity_WrapperImpl @ 14696da40

void __cdecl UProgressBar::SetFillColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x410) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x418) = uVar1;
  if (*(SProgressBar **)((longlong)param_1 + 0x438) != (SProgressBar *)0x0) {
    local_38._0_8_ = *(undefined8 *)param_2;
    local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
    local_28 = 0;
    local_24 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SProgressBar::SetFillColorAndOpacity
              (*(SProgressBar **)((longlong)param_1 + 0x438),
               (TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// StaticClass @ 14696daf0

UClass * __cdecl UProgressBar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProgressBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ProgressBar",&Z_Registration_Info_UClass_UProgressBar.InnerSingleton
               ,StaticRegisterNativesUProgressBar,0x450,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProgressBar>,
               InternalVTableHelperCtorCaller<UProgressBar>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProgressBar.InnerSingleton;
}

// UProgressBar @ 14698c7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UProgressBar * __thiscall UProgressBar::UProgressBar(UProgressBar *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FProgressBarStyle::FProgressBarStyle(&this->WidgetStyle);
  *(undefined8 *)&this->PercentDelegate = 0;
  *(undefined8 *)&(this->PercentDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PercentDelegate).field_0x10 = 0;
  *(undefined8 *)&this->FillColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->FillColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->FillColorAndOpacityDelegate).field_0x10 = 0;
  (this->MyProgressBar).Object = (SProgressBar *)0x0;
  (this->MyProgressBar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UProgressBar @ 14698c860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UProgressBar * __thiscall UProgressBar::UProgressBar(UProgressBar *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  uint local_18;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FProgressBarStyle::FProgressBarStyle(&this->WidgetStyle);
  *(undefined8 *)&this->PercentDelegate = 0;
  *(undefined8 *)&(this->PercentDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PercentDelegate).field_0x10 = 0;
  *(undefined8 *)&this->FillColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->FillColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->FillColorAndOpacityDelegate).field_0x10 = 0;
  (this->MyProgressBar).Object = (SProgressBar *)0x0;
  (this->MyProgressBar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=
            (&(this->WidgetStyle).BackgroundImage,
             &(pFVar1->Runtime).ProgressBarStyle.BackgroundImage);
  FSlateBrush::operator=
            (&(this->WidgetStyle).FillImage,&(pFVar1->Runtime).ProgressBarStyle.FillImage);
  FSlateBrush::operator=
            (&(this->WidgetStyle).MarqueeImage,&(pFVar1->Runtime).ProgressBarStyle.MarqueeImage);
  (this->WidgetStyle).EnableFillAnimation = (pFVar1->Runtime).ProgressBarStyle.EnableFillAnimation;
  local_18 = local_18 & 0xffffff00;
  (this->WidgetStyle).FillImage.TintColor.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->WidgetStyle).FillImage.TintColor.ColorUseRule = (undefined1)local_18;
  (this->WidgetStyle).FillImage.TintColor.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->WidgetStyle).FillImage.TintColor.field_0x12 = local_18._2_2_;
  this->BarFillType = '\0';
  this->BarFillStyle = '\0';
  this->bIsMarquee = false;
  this->Percent = 0.0;
  (this->FillColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0
  ;
  (this->BorderPadding).field0_0x0._s_0.X = 0.0;
  (this->BorderPadding).field0_0x0._s_0.Y = 0.0;
  return this;
}

// ~UProgressBar @ 146993c80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UProgressBar::~UProgressBar(UProgressBar *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyProgressBar).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FillColorAndOpacityDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PercentDelegate);
  FProgressBarStyle::~FProgressBarStyle(&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetBarFillStyle @ 1469cd160

Type __thiscall UProgressBar::GetBarFillStyle(UProgressBar *this)

{
  return (Type)(this->BarFillStyle).Value;
}

// GetBarFillType @ 1469cd170

Type __thiscall UProgressBar::GetBarFillType(UProgressBar *this)

{
  return (Type)(this->BarFillType).Value;
}

// GetBorderPadding @ 1469cd980

TVector2<double> * __thiscall
UProgressBar::GetBorderPadding(UProgressBar *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->BorderPadding).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->BorderPadding).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetFieldNotificationDescriptor @ 1469d0780

IClassDescriptor * __thiscall UProgressBar::GetFieldNotificationDescriptor(UProgressBar *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UProgressBar::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetFillColorAndOpacity @ 1469d08d0

FLinearColor * __thiscall
UProgressBar::GetFillColorAndOpacity(UProgressBar *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->FillColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->FillColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetPercent @ 1469d37c0

float __thiscall UProgressBar::GetPercent(UProgressBar *this)

{
  return this->Percent;
}

// GetPrivateStaticClass @ 1469d5170

UClass * __cdecl UProgressBar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProgressBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ProgressBar",&Z_Registration_Info_UClass_UProgressBar.InnerSingleton
               ,StaticRegisterNativesUProgressBar,0x450,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProgressBar>,
               InternalVTableHelperCtorCaller<UProgressBar>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProgressBar.InnerSingleton;
}

// GetWidgetStyle @ 1469da390

FProgressBarStyle * __thiscall UProgressBar::GetWidgetStyle(UProgressBar *this)

{
  return &this->WidgetStyle;
}

// RebuildWidget @ 146a03310

TSharedRef<SWidget,1> * __thiscall
UProgressBar::RebuildWidget(UProgressBar *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SProgressBar *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs> local_318;
  SProgressBar *local_300;
  FSharedReferencer<1> local_2f8;
  undefined1 local_2f0 [536];
  undefined1 local_d8 [48];
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  
  pFVar9 = SProgressBar::FArguments::FArguments((FArguments *)local_2f0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SProgressBar,RequiredArgs::T0RequiredArgs>
            (&local_318,"SProgressBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ProgressBar.cpp"
             ,0x30,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_318._Widget.Object;
  if (local_318._Widget.Object == (SProgressBar *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_318._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SProgressBar::Construct(local_318._Widget.Object,pFVar9);
  if (local_318._Widget.Object == (SProgressBar *)0x0) {
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
  if (((local_318._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_318._Widget.Object)->_padding_ + 0x228))(local_318._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a03459;
  }
  bVar8 = 0x20;
LAB_146a03459:
  *(byte *)&(local_318._Widget.Object)->_padding_ =
       (byte)(local_318._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_318._Widget.Object)->_padding_ =
       (byte)(local_318._Widget.Object)->_padding_ | bVar8;
  if (local_318._Widget.Object == (SProgressBar *)0x0) {
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
  pbVar1 = (byte *)((longlong)&(local_318._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_318._Widget.Object == (SProgressBar *)0x0) {
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
  FVar5.ReferenceController = local_318._Widget.SharedReferenceCount.ReferenceController;
  local_318._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318._Widget.Object = (SProgressBar *)0x0;
  if (pSVar3 == (SProgressBar *)0x0) {
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
  local_300 = pSVar3;
  local_2f8.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyProgressBar != (TSharedPtr<SProgressBar,1> *)&local_300) {
    (this->MyProgressBar).Object = pSVar3;
    local_300 = (SProgressBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyProgressBar).SharedReferenceCount,&local_2f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
  if ((void *)local_d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2f0);
  if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
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
  pTVar2 = (this->MyProgressBar).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyProgressBar).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SProgressBar *)0x0) {
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

// ReleaseSlateResources @ 146a0ae70

void __thiscall UProgressBar::ReleaseSlateResources(UProgressBar *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyProgressBar != (TSharedPtr<SProgressBar,1> *)&local_18) {
    (this->MyProgressBar).Object = (SProgressBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyProgressBar).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetBarFillStyle @ 146a112d0

void __thiscall UProgressBar::SetBarFillStyle(UProgressBar *this,Type param_1)

{
  SProgressBar *this_00;
  
  (this->BarFillStyle).Value = (uchar)param_1;
  this_00 = (this->MyProgressBar).Object;
  if (this_00 != (SProgressBar *)0x0) {
    SProgressBar::SetBarFillStyle(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetBarFillType @ 146a11300

void __thiscall UProgressBar::SetBarFillType(UProgressBar *this,Type param_1)

{
  SProgressBar *this_00;
  
  (this->BarFillType).Value = (uchar)param_1;
  this_00 = (this->MyProgressBar).Object;
  if (this_00 != (SProgressBar *)0x0) {
    SProgressBar::SetBarFillType(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetBorderPadding @ 146a11400

void __thiscall UProgressBar::SetBorderPadding(UProgressBar *this,TVector2<double> *param_1)

{
  SProgressBar *this_00;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->BorderPadding).field0_0x0._s_0.X = local_38._s_0.X;
  (this->BorderPadding).field0_0x0._s_0.Y = local_38._s_0.Y;
  this_00 = (this->MyProgressBar).Object;
  if (this_00 != (SProgressBar *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SProgressBar::SetBorderPadding
              (this_00,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// SetFillColorAndOpacity @ 146a13e80

void __thiscall UProgressBar::SetFillColorAndOpacity(UProgressBar *this,FLinearColor *param_1)

{
  SProgressBar *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->FillColorAndOpacity).field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->FillColorAndOpacity).field0_0x0 + 8) = local_38._8_8_;
  this_00 = (this->MyProgressBar).Object;
  if (this_00 != (SProgressBar *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SProgressBar::SetFillColorAndOpacity(this_00,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// SetIsMarquee @ 146a15e40

void __thiscall UProgressBar::SetIsMarquee(UProgressBar *this,bool param_1)

{
  SProgressBar *this_00;
  TAttribute<TOptional<float>_> local_38;
  
  this_00 = (this->MyProgressBar).Object;
  this->bIsMarquee = param_1;
  if (this_00 != (SProgressBar *)0x0) {
    local_38.Value.bIsSet = !param_1;
    if (local_38.Value.bIsSet) {
      local_38.Value.TypedValue = this->Percent;
    }
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SProgressBar::SetPercent(this_00,&local_38);
  }
  return;
}

// SetPercent @ 146a18ee0

void __thiscall UProgressBar::SetPercent(UProgressBar *this,float param_1)

{
  SProgressBar *this_00;
  TAttribute<TOptional<float>_> local_38;
  
  this->Percent = param_1;
  this_00 = (this->MyProgressBar).Object;
  if (this_00 != (SProgressBar *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value.bIsSet = true;
    local_38.bIsSet = true;
    local_38.Value.TypedValue = param_1;
    SProgressBar::SetPercent(this_00,&local_38);
  }
  return;
}

// SetWidgetStyle @ 146a1de40

void __thiscall UProgressBar::SetWidgetStyle(UProgressBar *this,FProgressBarStyle *param_1)

{
  SProgressBar *this_00;
  
  FSlateBrush::operator=(&(this->WidgetStyle).BackgroundImage,&param_1->BackgroundImage);
  FSlateBrush::operator=(&(this->WidgetStyle).FillImage,&param_1->FillImage);
  FSlateBrush::operator=(&(this->WidgetStyle).MarqueeImage,&param_1->MarqueeImage);
  (this->WidgetStyle).EnableFillAnimation = param_1->EnableFillAnimation;
  this_00 = (this->MyProgressBar).Object;
  if (this_00 != (SProgressBar *)0x0) {
    SProgressBar::SetStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// StaticRegisterNativesUProgressBar @ 146a1ecc0

void __cdecl UProgressBar::StaticRegisterNativesUProgressBar(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UProgressBar_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a23c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UProgressBar::SynchronizeProperties(UProgressBar *this)

{
  SProgressBar *pSVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  TAttribute<float> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  float *pfVar11;
  FLinearColor_u_0 *pFVar12;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar13;
  byte bVar14;
  byte bVar15;
  float fVar16;
  FName local_res8;
  UProgressBar *local_res10;
  FName local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_328;
  FDelegateAllocation local_320;
  float local_310;
  undefined1 local_30c;
  undefined1 local_308;
  undefined1 local_300 [8];
  ForAnyElementType FStack_2f8;
  ulonglong local_2f0;
  code *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  bool local_2d8;
  FLinearColor_u_0 local_2c8;
  undefined1 local_2b8;
  undefined1 local_2b4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  ForAnyElementType FStack_2a8;
  ulonglong local_2a0;
  float local_298;
  char local_294;
  undefined1 local_290;
  undefined1 local_288 [8];
  void *pvStack_280;
  int local_278;
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  void *pvStack_260;
  undefined8 local_258;
  float local_250;
  char local_24c;
  undefined1 local_248;
  undefined1 local_240 [24];
  float local_228;
  undefined1 local_224;
  undefined1 local_220;
  undefined1 local_218 [8];
  void *pvStack_210;
  undefined8 local_208;
  float local_200;
  char local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f0 [24];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c0 [24];
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  TVector2<double>_u_0 local_140;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [24];
  TAttribute<TOptional<float>_> local_f0;
  FLinearColor_u_0 local_c8;
  float local_b8;
  undefined1 local_b4;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  undefined1 local_50 [40];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyProgressBar).Object != (SProgressBar *)0x0) {
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->PercentDelegate);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PercentDelegate,
                 &local_98);
      local_res8.ComparisonIndex.Value = *(uint *)&(this->PercentDelegate).field_0x10;
      local_res8.Number = *(uint *)&(this->PercentDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->PercentDelegate);
      pTVar8 = TAttribute<float>::Create<UObject>((TAttribute<float> *)local_110,pUVar7,&local_res8)
      ;
      uStack_2e0 = 0;
      local_2e8 = UWidget::ConvertFloatToOptionalFloat;
      local_328.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_320.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_328,(FWriteAccessScope *)&local_160);
      local_148 = &local_320;
      puVar9 = UE::Core::Private::DelegateAllocate(0x48,&local_320);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TAttribute_M____6B_
        ;
        *(float *)(puVar9 + 1) = pTVar8->Value;
        *(bool *)((longlong)puVar9 + 0xc) = pTVar8->bIsSet;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar8->Getter);
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[5] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__00__CBVUProgressBar____A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TAttribute_M____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[6] = 0;
        local_res10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 6),(FObjectPtr)&local_res10);
        puVar9[7] = local_2e8;
        puVar9[8] = CONCAT44(uStack_2dc,uStack_2e0);
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      local_294 = '\0';
      local_290 = 1;
      local_288 = (undefined1  [8])0x0;
      pvStack_280 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_328,(FWriteAccessScope *)&local_2e8);
      if (pvStack_280 != (void *)0x0) {
        FMemory::Free(pvStack_280);
      }
      pvStack_280 = (void *)local_320.DelegateAllocator;
      local_278 = local_320.DelegateSize;
      local_320.DelegateSize = 0;
      local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_2d8 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_2dc,uStack_2e0),
                   (FDestructionSentinel *)&local_2e8);
      }
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_288;
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      bVar6 = true;
      fVar16 = local_298;
      local_1fc = local_294;
      local_1f8 = local_290;
    }
    else {
      local_270._0_4_ = this->Percent;
      local_268 = (undefined1  [8])0x0;
      pvStack_260 = (void *)0x0;
      local_270[4] = true;
      local_258 = 0;
      pfVar11 = TAttribute<float>::Get((TAttribute<float> *)local_270);
      fVar16 = *pfVar11;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
      if (pvStack_260 != (void *)0x0) {
        FMemory::Free(pvStack_260);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_268);
      local_1fc = '\x01';
      local_30c = 1;
      local_2f0 = 0;
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_300;
      local_1f8 = 1;
      local_308 = 1;
      local_300 = (undefined1  [8])0x0;
      FStack_2f8.Data = (FScriptContainerElement *)0x0;
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      bVar6 = false;
      local_310 = fVar16;
    }
    if (local_1fc != '\0') {
      local_200 = fVar16;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0,pTVar13);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_300,
                 (FWriteAccessScope *)&local_1a8);
      if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
        local_2f0 = local_2f0 & 0xffffffff00000000;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_300);
    }
    if (bVar4) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_280 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_280);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_288);
    }
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_328,(FWriteAccessScope *)&local_190);
      if ((local_320.DelegateSize != 0) &&
         (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_320.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_320,0,0,0x10);
        local_320.DelegateSize = 0;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_320.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_328.AccessDetector);
    }
    if (bVar6) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
      if ((void *)local_108._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_108);
    }
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &this->FillColorAndOpacityDelegate);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->FillColorAndOpacityDelegate,&local_80);
      local_res18.ComparisonIndex.Value = *(uint *)&(this->FillColorAndOpacityDelegate).field_0x10;
      local_res18.Number = *(uint *)&(this->FillColorAndOpacityDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                          &this->FillColorAndOpacityDelegate);
      pFVar12 = (FLinearColor_u_0 *)
                TAttribute<FSlateColor>::Create<UObject>
                          ((TAttribute<FSlateColor> *)local_68,pUVar7,&local_res18);
      bVar15 = 0x10;
    }
    else {
      local_2b8 = 0;
      local_2c8._0_8_ = *(undefined8 *)&(this->FillColorAndOpacity).field0_0x0;
      local_2c8._8_8_ = *(undefined8 *)((longlong)&(this->FillColorAndOpacity).field0_0x0 + 8);
      local_2b4 = 1;
      pFVar12 = &local_2c8;
      local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2a8.Data = (FScriptContainerElement *)0x0;
      local_2a0 = 0;
      bVar15 = 0x20;
    }
    local_1d8 = *(undefined8 *)&(((FSlateColor *)&(pFVar12->_s_0).R)->SpecifiedColor).field0_0x0;
    uStack_1d0._0_4_ = *(float *)((longlong)pFVar12 + 8);
    uStack_1d0._4_4_ = *(float *)((longlong)pFVar12 + 0xc);
    local_1c8 = (&pFVar12->_s_0)[1].R;
    local_1c4 = *(undefined1 *)(pFVar12->RGBA + 5);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar12->RGBA + 6));
    if ((bVar15 & 0x20) != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b0,(FWriteAccessScope *)&local_178);
      if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
        local_2a0 = local_2a0 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
    }
    if ((bVar15 & 0x10) != 0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
      if ((void *)local_50._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_50._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_50);
    }
    if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SProgressBar::SetStyle((this->MyProgressBar).Object,&this->WidgetStyle);
    if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SProgressBar::SetBarFillType((this->MyProgressBar).Object,(uint)(this->BarFillType).Value);
    if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SProgressBar::SetBarFillStyle((this->MyProgressBar).Object,(uint)(this->BarFillStyle).Value);
    if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MyProgressBar).Object;
    if (this->bIsMarquee == false) {
      local_24c = local_1fc;
      if (local_1fc != '\0') {
        local_250 = local_200;
      }
      local_248 = local_1f8;
      TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)local_240,
                 (TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f0);
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_240;
      bVar14 = 0x80;
      local_228 = local_250;
      local_f0.Value.bIsSet = (bool)local_24c;
      local_f0.bIsSet = (bool)local_248;
    }
    else {
      local_224 = 0;
      local_208 = 0;
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_218;
      local_220 = 1;
      local_218 = (undefined1  [8])0x0;
      pvStack_210 = (void *)0x0;
      bVar14 = 0x40;
      local_f0.Value.bIsSet = (bool)'\0';
      local_f0.bIsSet = (bool)1;
    }
    if (local_f0.Value.bIsSet != false) {
      local_f0.Value.TypedValue = local_228;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f0.Getter,pTVar13);
    SProgressBar::SetPercent(pSVar1,&local_f0);
    if ((char)(bVar14 | bVar15) < '\0') {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
      if ((void *)local_240._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_240._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_240);
    }
    if ((bVar14 & 0x40) != 0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
      if (pvStack_210 != (void *)0x0) {
        FMemory::Free(pvStack_210);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_218);
    }
    if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MyProgressBar).Object;
    local_b8 = local_1c8;
    local_c8._0_8_ = local_1d8;
    local_c8._8_8_ = uStack_1d0;
    local_b4 = local_1c4;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_b0,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c0);
    SProgressBar::SetFillColorAndOpacity(pSVar1,(TAttribute<FSlateColor> *)&local_c8._s_0);
    if ((this->MyProgressBar).Object == (SProgressBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_140._s_0.X = (this->BorderPadding).field0_0x0._s_0.X;
    local_140._s_0.Y = (this->BorderPadding).field0_0x0._s_0.Y;
    local_130 = 1;
    local_118 = 0;
    local_128 = 0;
    uStack_120 = 0;
    SProgressBar::SetBorderPadding
              ((this->MyProgressBar).Object,
               (TAttribute<UE::Math::TVector2<double>_> *)&local_140._s_0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
    if ((void *)local_1c0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
    if ((void *)local_1f0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f0);
  }
  return;
}

// UseMarquee @ 146a2cc90

bool __thiscall UProgressBar::UseMarquee(UProgressBar *this)

{
  return this->bIsMarquee;
}

// execSetFillColorAndOpacity @ 146a3c7a0

void __cdecl
UProgressBar::execSetFillColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SProgressBar *this;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SProgressBar **)(param_1 + 0x1b);
  *(undefined8 *)(param_1 + 0x1a) = local_48;
  *(undefined8 *)&param_1[0x1a].field_0x8 = uStack_40;
  if (this != (SProgressBar *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_38._0_8_ = local_48;
    local_38._8_8_ = uStack_40;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SProgressBar::SetFillColorAndOpacity(this,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// execSetIsMarquee @ 146a3e130

void __cdecl UProgressBar::execSetIsMarquee(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SProgressBar *this;
  int local_res8 [2];
  TAttribute<TOptional<float>_> local_38;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SProgressBar **)(param_1 + 0x1b);
  param_1[0x18].field_0x26 = local_res8[0] != 0;
  if (this != (SProgressBar *)0x0) {
    local_38.Value.bIsSet = local_res8[0] == 0;
    if (local_38.Value.bIsSet) {
      local_38.Value.TypedValue = *(float *)&param_1[0x18].field_0x20;
    }
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SProgressBar::SetPercent(this,&local_38);
  }
  return;
}

// execSetPercent @ 146a40b40

void __cdecl UProgressBar::execSetPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SProgressBar *this;
  float local_res8 [2];
  TAttribute<TOptional<float>_> local_38;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SProgressBar **)(param_1 + 0x1b);
  *(float *)&param_1[0x18].field_0x20 = local_res8[0];
  if (this != (SProgressBar *)0x0) {
    local_38.Value.TypedValue = local_res8[0];
    local_38.Getter._16_8_ = 0;
    local_38.Value.bIsSet = true;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SProgressBar::SetPercent(this,&local_38);
  }
  return;
}

