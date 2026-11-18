// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 45

// GetMobileFontSizeMultiplier_WrapperImpl @ 14a780ef0

void __cdecl UCommonTextBlock::GetMobileFontSizeMultiplier_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x390);
  return;
}

// SetMobileFontSizeMultiplier_WrapperImpl @ 14a780f00

void __cdecl UCommonTextBlock::SetMobileFontSizeMultiplier_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 0x390)) {
    *(float *)((longlong)param_1 + 0x390) = *(float *)param_2;
    iVar1 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
    if (iVar1 == 1) {
      ApplyFontSizeMultiplier(param_1);
      return;
    }
  }
  return;
}

// StaticClass @ 14a780f50

UClass * __cdecl UCommonTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTextBlock",
               &Z_Registration_Info_UClass_UCommonTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonTextBlock,0x3c0,0x10,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"CommonUI",InternalConstructor<UCommonTextBlock>,
               InternalVTableHelperCtorCaller<UCommonTextBlock>,local_res8,UTextBlock::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTextBlock.InnerSingleton;
}

// UCommonTextBlock @ 14a7aec10

UCommonTextBlock * __thiscall
UCommonTextBlock::UCommonTextBlock(UCommonTextBlock *this,FVTableHelper *param_1)

{
  UTextBlock::UTextBlock((UTextBlock *)this,param_1);
  this->MobileFontSizeMultiplier = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Style).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScrollStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScrollOrientation).Value = '\0';
  (this->TextScroller).Object = (STextScroller *)0x0;
  (this->TextScroller).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bIsScrollingEnabled = true;
  this->bDisplayAllCaps_DEPRECATED = false;
  this->bAutoCollapseWithEmptyText = false;
  return this;
}

// UCommonTextBlock @ 14a7aec80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonTextBlock * __thiscall
UCommonTextBlock::UCommonTextBlock(UCommonTextBlock *this,FObjectInitializer *param_1)

{
  UTextBlock::UTextBlock((UTextBlock *)this,param_1);
  this->MobileFontSizeMultiplier = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->bIsScrollingEnabled = true;
  this->bDisplayAllCaps_DEPRECATED = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->bAutoCollapseWithEmptyText = false;
  (this->Style).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScrollStyle).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ScrollOrientation).Value = '\0';
  (this->TextScroller).Object = (STextScroller *)0x0;
  (this->TextScroller).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  UWidget::SetClipping((UWidget *)this,Inherit);
  return this;
}

// ~UCommonTextBlock @ 14a7b3490

void __thiscall UCommonTextBlock::~UCommonTextBlock(UCommonTextBlock *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextScroller).SharedReferenceCount.ReferenceController);
  UTextBlock::~UTextBlock((UTextBlock *)this);
  return;
}

// ApplyFontSizeMultiplier @ 14a7beef0

void __thiscall UCommonTextBlock::ApplyFontSizeMultiplier(UCommonTextBlock *this)

{
  STextBlock *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateFontInfo *pFVar3;
  TAttribute<FSlateFontInfo> local_e8;
  FSlateFontInfo local_68;
  
  if (this->_padding_ != 0) {
    pFVar3 = UTextBlock::GetFont((UTextBlock *)this);
    FSlateFontInfo::FSlateFontInfo(&local_68,pFVar3);
    local_68.Size = local_68.Size * this->MobileFontSizeMultiplier;
    if (this->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (STextBlock *)this->_padding_;
    FSlateFontInfo::FSlateFontInfo(&local_e8.Value,&local_68);
    local_e8.bIsSet = true;
    local_e8.Getter._16_8_ = 0;
    local_e8.Getter._0_8_ = 0;
    local_e8.Getter._8_8_ = 0;
    STextBlock::SetFont(this_00,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetMargin @ 14a7e33f0

FMargin * __thiscall UCommonTextBlock::GetMargin(UCommonTextBlock *this)

{
  return (FMargin *)((longlong)&this->_padding_ + 4);
}

// GetMobileFontSizeMultiplier @ 14a7e3440

float __thiscall UCommonTextBlock::GetMobileFontSizeMultiplier(UCommonTextBlock *this)

{
  return this->MobileFontSizeMultiplier;
}

// GetPrivateStaticClass @ 14a7e61c0

UClass * __cdecl UCommonTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTextBlock",
               &Z_Registration_Info_UClass_UCommonTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonTextBlock,0x3c0,0x10,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"CommonUI",InternalConstructor<UCommonTextBlock>,
               InternalVTableHelperCtorCaller<UCommonTextBlock>,local_res8,UTextBlock::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTextBlock.InnerSingleton;
}

// GetScrollStyleCDO @ 14a7e7570

UCommonTextScrollStyle * __thiscall UCommonTextBlock::GetScrollStyleCDO(UCommonTextBlock *this)

{
  int iVar1;
  UCommonTextScrollStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->ScrollStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextScrollStyle *)0x0;
  }
  pUVar4 = UCommonTextScrollStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextScrollStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextScrollStyle *)0x0;
  }
  pUVar5 = (this->ScrollStyle).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextScrollStyle *)0x0;
  }
  pUVar4 = UCommonTextScrollStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->ScrollStyle).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e7608;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e7608:
  pUVar2 = (UCommonTextScrollStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextScrollStyle *)0x0) {
    pUVar5 = UCommonTextScrollStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextScrollStyle *)0x0;
}

// GetStyleCDO @ 14a7e8a90

UCommonTextStyle * __thiscall UCommonTextBlock::GetStyleCDO(UCommonTextBlock *this)

{
  int iVar1;
  UCommonTextStyle *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return (UCommonTextStyle *)0x0;
  }
  pUVar4 = UCommonTextStyle::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
      goto LAB_14a7e8b28;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14a7e8b28:
  pUVar2 = (UCommonTextStyle *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UCommonTextStyle *)0x0) {
    pUVar5 = UCommonTextStyle::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UCommonTextStyle *)0x0;
}

// OnFontChanged @ 14a7fc960

void __thiscall UCommonTextBlock::OnFontChanged(UCommonTextBlock *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
  if (iVar1 == 1) {
    ApplyFontSizeMultiplier(this);
    return;
  }
  return;
}

// OnTextChanged @ 14a7ff6f0

void __thiscall UCommonTextBlock::OnTextChanged(UCommonTextBlock *this)

{
  longlong lVar1;
  bool bVar2;
  FText *this_00;
  undefined8 uVar3;
  FText local_18;
  
  if (this->bAutoCollapseWithEmptyText != false) {
    lVar1 = this->_padding_;
    this_00 = UTextBlock::GetText((UTextBlock *)this,&local_18);
    bVar2 = FText::IsEmpty(this_00);
    uVar3 = 4;
    if (bVar2) {
      uVar3 = 1;
    }
    (**(code **)(lVar1 + 0x2c0))(this,uVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// PostInitProperties @ 14a802240

void __thiscall UCommonTextBlock::PostInitProperties(UCommonTextBlock *this)

{
  UObject::PostInitProperties((UObject *)this);
  UpdateFromStyle(this);
  return;
}

// PostLoad @ 14a802980

void __thiscall UCommonTextBlock::PostLoad(UCommonTextBlock *this)

{
  UObject::PostLoad((UObject *)this);
  UpdateFromStyle(this);
  return;
}

// RebuildWidget @ 14a80b4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonTextBlock::RebuildWidget
          (UCommonTextBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<STextScroller,1> *pTVar1;
  float fVar2;
  int iVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  UObject *pUVar6;
  longlong lVar7;
  STextScroller *pSVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  FArguments *pFVar17;
  TSharedRef<SWidget,1> *pTVar18;
  TSharedRef<STextScroller,1> *pTVar19;
  UObject *pUVar20;
  TObjectPtr<UClass>_u_0 TVar21;
  TObjectPtr<UClass>_u_0 TVar22;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  STextScroller *local_310;
  FSharedReferencer<1> local_308;
  TSharedRef<ISlateMetaData,1> local_300;
  FMemScope local_2f0;
  UObject *local_2e8;
  UCommonTextBlock *local_2e0;
  UObject *local_2d8;
  SWidget *local_2d0;
  TAttribute<EVisibility> local_2c8;
  TSharedRef<STextScroller,1> local_2a8;
  TSharedRef<SWidget,1> local_298;
  TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs> local_288;
  FArguments local_270;
  
  pUVar16 = (this->ScrollStyle).Class.field0_0x0.DebugPtr;
  local_res10 = __return_storage_ptr__;
  if ((pUVar16 == (UClass *)0x0) ||
     (pUVar15 = UCommonTextScrollStyle::StaticClass(), pUVar15 == (UClass *)0x0))
  goto LAB_14a80ba51;
  iVar3 = (int)pUVar15->_padding_;
  if (((int)pUVar16->_padding_ < iVar3) ||
     ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar3 * 8) != &pUVar15->_padding_)
     ) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((!bVar14) ||
     (pUVar16 = (this->ScrollStyle).Class.field0_0x0.DebugPtr, pUVar16 == (UClass *)0x0))
  goto LAB_14a80ba51;
  pUVar15 = UCommonTextScrollStyle::StaticClass();
  TVar22.DebugPtr = (UClass *)0x0;
  TVar21.DebugPtr = TVar22.DebugPtr;
  if (pUVar15 != (UClass *)0x0) {
    iVar3 = (int)pUVar15->_padding_;
    if (((int)pUVar16->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar15->_padding_)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (bVar14) {
      TVar21 = (this->ScrollStyle).Class.field0_0x0;
    }
  }
  TVar21 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)((longlong)TVar21 + 0x110))->DebugPtr;
  if (TVar21.DebugPtr == (UClass *)0x0) {
LAB_14a80b5c1:
    TVar21.DebugPtr = TVar22.DebugPtr;
  }
  else {
    pUVar16 = UCommonTextScrollStyle::StaticClass();
    iVar3 = (int)pUVar16->_padding_;
    if ((*(int *)((TVar21.DebugPtr)->_padding_ + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar21.DebugPtr)->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar16->_padding_)) goto LAB_14a80b5c1;
  }
  if (TVar21.DebugPtr != (UClass *)0x0) {
    UWidget::SetClipping
              ((UWidget *)this,*(EWidgetClipping *)((longlong)&(TVar21.DebugPtr)->_padding_ + 4));
    pFVar17 = STextScroller::FArguments::FArguments(&local_270);
    uVar11 = *(undefined4 *)((longlong)((longlong)TVar21 + 0x28) + 4);
    uVar12 = *(undefined4 *)((longlong)TVar21 + 0x30);
    uVar13 = *(undefined4 *)((longlong)((longlong)TVar21 + 0x30) + 4);
    fVar2 = *(float *)&(TVar21.DebugPtr)->_padding_;
    (pFVar17->_ScrollOptions).Speed = (float)*(undefined4 *)((longlong)TVar21 + 0x28);
    (pFVar17->_ScrollOptions).StartDelay = (float)uVar11;
    (pFVar17->_ScrollOptions).EndDelay = (float)uVar12;
    (pFVar17->_ScrollOptions).FadeInDelay = (float)uVar13;
    (pFVar17->_ScrollOptions).FadeOutDelay = fVar2;
    pFVar17->_ScrollOrientation = (uint)(this->ScrollOrientation).Value;
    pTVar18 = UTextBlock::RebuildWidget((UTextBlock *)this,&local_298);
    pSVar4 = pTVar18->Object;
    pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar17->_Content).Widget.Object = pSVar4;
    (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_2f0,&local_res20,true);
    TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs>
              (&local_288,"STextScroller",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTextBlock.cpp"
               ,0x25c,local_res8);
    FMemScope::~FMemScope(&local_2f0);
    FLLMScope::~FLLMScope(local_res18);
    pTVar19 = TSlateDecl<STextScroller,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_288,&local_2a8,pFVar17);
    local_308.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
    local_310 = pTVar19->Object;
    if (local_308.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_308.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->TextScroller;
    if (pTVar1 != (TSharedPtr<STextScroller,1> *)&local_310) {
      pTVar1->Object = local_310;
      local_310 = (STextScroller *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TextScroller).SharedReferenceCount,&local_308);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270._Content.Widget.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_270);
    if ((this->_padding_ == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar18;
    }
    local_2c8.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_2c8.Getter._16_8_ = 0;
    local_2c8.bIsSet = true;
    local_2c8.Getter._0_8_ = 0;
    local_2c8.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility((SLeafWidget *)this->_padding_,&local_2c8);
    if ((this->_padding_ == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar18;
    }
    local_2d0 = (SWidget *)this->_padding_;
    pUVar20 = UWidget::GetSourceAssetOrClass((UWidget *)this);
    pUVar6 = (UObject *)this->_padding_;
    lVar7 = this->_padding_;
    TVar21.DebugPtr = ::operator_new(0x38);
    if (TVar21.DebugPtr == (UClass *)0x0) {
      local_300.Object = ___xmm_00000000000000000000000000000010;
      local_300.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&(TVar21.DebugPtr)->_padding_ = 1;
      *(undefined4 *)((longlong)&(TVar21.DebugPtr)->_padding_ + 4) = 1;
      (TVar21.DebugPtr)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFReflectionMetaData___00_SharedPointerInternals__6B_
      ;
      (TVar21.DebugPtr)->_padding_ = (longlong)&___7FReflectionMetaData__6B_;
      (TVar21.DebugPtr)->_padding_ = lVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      (TVar21.DebugPtr)->_padding_ = 0;
      local_2e8 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&(TVar21.DebugPtr)->_padding_,(FObjectPtr)&local_2e8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      (TVar21.DebugPtr)->_padding_ = 0;
      local_2e0 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&(TVar21.DebugPtr)->_padding_,(FObjectPtr)&local_2e0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      (TVar21.DebugPtr)->_padding_ = 0;
      local_2d8 = pUVar20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&(TVar21.DebugPtr)->_padding_,(FObjectPtr)&local_2d8);
      local_300.Object = (ISlateMetaData *)&(TVar21.DebugPtr)->_padding_;
      if ((local_300.Object == (ISlateMetaData *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar18;
      }
      LOCK();
      *(int *)&(TVar21.DebugPtr)->_padding_ = (int)(TVar21.DebugPtr)->_padding_ + 1;
      UNLOCK();
      TVar22.DebugPtr = TVar21.DebugPtr;
      local_300.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)TVar21.DebugPtr;
    }
    SWidget::AddMetadataInternal(local_2d0,&local_300);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_300.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar22.DebugPtr);
    if ((pTVar1->Object == (STextScroller *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar18;
    }
    pTVar5 = (this->TextScroller).SharedReferenceCount.ReferenceController;
    pSVar8 = pTVar1->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar8 == (STextScroller *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar9)();
      return pTVar18;
    }
    pTVar18 = local_res10;
    local_res10->Object = (SWidget *)pSVar8;
    (local_res10->SharedReferenceCount).ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    return pTVar18;
  }
LAB_14a80ba51:
  UTextBlock::RebuildWidget((UTextBlock *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a811ff0

void __thiscall UCommonTextBlock::ReleaseSlateResources(UCommonTextBlock *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UTextBlock::ReleaseSlateResources((UTextBlock *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TextScroller != (TSharedPtr<STextScroller,1> *)&local_18) {
    (this->TextScroller).Object = (STextScroller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TextScroller).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ResetScrollState @ 14a814ec0

void __thiscall UCommonTextBlock::ResetScrollState(UCommonTextBlock *this)

{
  STextScroller *this_00;
  
  this_00 = (this->TextScroller).Object;
  if (this_00 == (STextScroller *)0x0) {
    return;
  }
  this_00->FontAlpha = 1.0;
  this_00->TimeElapsed = 0.0;
  this_00->ScrollOffset = 0.0;
  if (this_00->ActiveState != Suspend) {
    this_00->ActiveState = Start;
  }
  if (__real_3f800000 != *(float *)((longlong)&this_00->_padding_ + 4)) {
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0x3f800000;
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

// Serialize @ 14a815ac0

void __thiscall UCommonTextBlock::Serialize(UCommonTextBlock *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (this->bDisplayAllCaps_DEPRECATED != false)) {
    UTextBlock::SetTextTransformPolicy((UTextBlock *)this,ToUpper);
    this->bDisplayAllCaps_DEPRECATED = false;
  }
  return;
}

// Serialize @ 14a815b10

void __thiscall UCommonTextBlock::Serialize(UCommonTextBlock *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && (this->bDisplayAllCaps_DEPRECATED != false)) {
    UTextBlock::SetTextTransformPolicy((UTextBlock *)this,ToUpper);
    this->bDisplayAllCaps_DEPRECATED = false;
  }
  return;
}

// SetApplyLineHeightToBottomLine @ 14a816fd0

void __thiscall
UCommonTextBlock::SetApplyLineHeightToBottomLine(UCommonTextBlock *this,bool param_1)

{
  longlong lVar1;
  
  if ((bool)*(char *)((longlong)&this->_padding_ + 6) != param_1) {
    lVar1 = this->_padding_;
    *(bool *)((longlong)&this->_padding_ + 6) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a11011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x348))();
    return;
  }
  return;
}

// SetLineHeightPercentage @ 14a8199c0

void __thiscall UCommonTextBlock::SetLineHeightPercentage(UCommonTextBlock *this,float param_1)

{
  longlong lVar1;
  
  if (param_1 != *(float *)((longlong)&this->_padding_ + 4)) {
    lVar1 = this->_padding_;
    *(float *)((longlong)&this->_padding_ + 4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a16974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x340))();
    return;
  }
  return;
}

// SetMargin @ 14a81a280

void __thiscall UCommonTextBlock::SetMargin(UCommonTextBlock *this,FMargin *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((((param_1->Left == *(float *)((longlong)&this->_padding_ + 4)) &&
       (param_1->Right == *(float *)((longlong)&this->_padding_ + 4))) &&
      (param_1->Top == *(float *)&this->_padding_)) &&
     (param_1->Bottom == *(float *)&this->_padding_)) {
    return;
  }
  fVar2 = param_1->Left;
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  lVar1 = this->_padding_;
  *(float *)((longlong)&this->_padding_ + 4) = fVar2;
  *(float *)&this->_padding_ = fVar3;
  *(float *)((longlong)&this->_padding_ + 4) = fVar4;
  *(float *)&this->_padding_ = fVar5;
                    /* WARNING: Could not recover jumptable at 0x000146a16acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x350))(fVar2,(undefined1 *)((longlong)&this->_padding_ + 4));
  return;
}

// SetMobileFontSizeMultiplier @ 14a81a4c0

void __thiscall UCommonTextBlock::SetMobileFontSizeMultiplier(UCommonTextBlock *this,float param_1)

{
  int iVar1;
  
  if (param_1 != this->MobileFontSizeMultiplier) {
    this->MobileFontSizeMultiplier = param_1;
    iVar1 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
    if (iVar1 == 1) {
      ApplyFontSizeMultiplier(this);
      return;
    }
  }
  return;
}

// SetScrollOrientation @ 14a81aeb0

void __thiscall
UCommonTextBlock::SetScrollOrientation(UCommonTextBlock *this,TEnumAsByte<EOrientation> param_1)

{
  (this->ScrollOrientation).Value = param_1.Value;
                    /* WARNING: Could not recover jumptable at 0x00014a81aeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// SetScrollingEnabled @ 14a81aef0

void __thiscall UCommonTextBlock::SetScrollingEnabled(UCommonTextBlock *this,bool param_1)

{
  this->bIsScrollingEnabled = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014a81aef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// SetStyle @ 14a81bc90

void __thiscall
UCommonTextBlock::SetStyle(UCommonTextBlock *this,TSubclassOf<UCommonTextStyle> param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->Style).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
                    /* WARNING: Could not recover jumptable at 0x00014a81bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this);
  return;
}

// SetTextCase @ 14a81c740

void __thiscall UCommonTextBlock::SetTextCase(UCommonTextBlock *this,bool param_1)

{
  UTextBlock::SetTextTransformPolicy((UTextBlock *)this,param_1 * '\x02');
                    /* WARNING: Could not recover jumptable at 0x00014a81c75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this);
  return;
}

// SetWrapTextWidth @ 14a81d340

void __thiscall UCommonTextBlock::SetWrapTextWidth(UCommonTextBlock *this,int param_1)

{
  UTextLayoutWidget::SetWrapTextAt((UTextLayoutWidget *)this,(float)param_1);
  return;
}

// StaticRegisterNativesUCommonTextBlock @ 14a81e840

void __cdecl UCommonTextBlock::StaticRegisterNativesUCommonTextBlock(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UCommonTextBlock_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820a30

void __thiscall UCommonTextBlock::SynchronizeProperties(UCommonTextBlock *this)

{
  longlong lVar1;
  STextScroller *this_00;
  bool bVar2;
  int iVar3;
  FText *this_01;
  undefined8 uVar4;
  undefined2 local_res8 [4];
  FText local_18;
  
  UpdateFromStyle(this);
  UTextBlock::SynchronizeProperties((UTextBlock *)this);
  if (this->bAutoCollapseWithEmptyText != false) {
    lVar1 = this->_padding_;
    this_01 = UTextBlock::GetText((UTextBlock *)this,&local_18);
    bVar2 = FText::IsEmpty(this_01);
    uVar4 = 4;
    if (bVar2) {
      uVar4 = 1;
    }
    (**(code **)(lVar1 + 0x2c0))(this,uVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  iVar3 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
  if (iVar3 == 1) {
    ApplyFontSizeMultiplier(this);
  }
  this_00 = (this->TextScroller).Object;
  if (this_00 != (STextScroller *)0x0) {
    if (this->bIsScrollingEnabled == false) {
      STextScroller::SuspendScrolling(this_00);
      return;
    }
    STextScroller::StartScrolling(this_00);
    if ((STextBlock *)this->_padding_ != (STextBlock *)0x0) {
      local_res8[0] = 0x100;
      STextBlock::SetOverflowPolicy((STextBlock *)this->_padding_,SUB82(local_res8,0));
      return;
    }
  }
  return;
}

// UpdateFromStyle @ 14a826610

void __thiscall UCommonTextBlock::UpdateFromStyle(UCommonTextBlock *this)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FSlateFontInfo *pFVar6;
  FSlateBrush *pFVar7;
  TObjectPtr<UClass>_u_0 TVar8;
  longlong lVar9;
  FLinearColor_u_0 local_f8;
  uint local_e8;
  uint local_c8;
  FSlateBrush local_b8;
  
  pUVar5 = (this->Style).Class.field0_0x0.DebugPtr;
  if (pUVar5 != (UClass *)0x0) {
    pUVar4 = UCommonTextStyle::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (pUVar5 = (this->Style).Class.field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
        pUVar4 = UCommonTextStyle::StaticClass();
        if (pUVar4 == (UClass *)0x0) {
LAB_14a8266a5:
          TVar8.DebugPtr = (UClass *)0x0;
        }
        else {
          iVar1 = (int)pUVar4->_padding_;
          if (((int)pUVar5->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14a8266a5;
          TVar8 = (this->Style).Class.field0_0x0;
        }
        lVar9 = *(longlong *)((longlong)TVar8 + 0x110);
        if (lVar9 != 0) {
          pUVar5 = UCommonTextStyle::StaticClass();
          iVar1 = (int)pUVar5->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar5->_padding_)) goto LAB_14a8266d8;
        }
      }
    }
  }
  lVar9 = 0;
LAB_14a8266d8:
  if (lVar9 != 0) {
    pFVar6 = FSlateFontInfo::FSlateFontInfo
                       ((FSlateFontInfo *)&local_b8,(FSlateFontInfo *)(lVar9 + 0x28));
    UTextBlock::SetFont((UTextBlock *)this,pFVar6);
    pFVar7 = FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)(lVar9 + 0xd0));
    UTextBlock::SetStrikeBrush((UTextBlock *)this,pFVar7);
    uVar2 = *(undefined8 *)(lVar9 + 200);
    local_c8 = local_c8 & 0xffffff00;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)(lVar9 + 0xc0);
    *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)(lVar9 + 0x180);
    *(undefined1 *)((longlong)&this->_padding_ + 6) = *(undefined1 *)(lVar9 + 0x184);
    local_f8._0_8_ = *(undefined8 *)(lVar9 + 0x88);
    local_f8._8_8_ = *(undefined8 *)(lVar9 + 0x90);
    local_e8 = local_c8;
    UTextBlock::SetColorAndOpacity((UTextBlock *)this,(FSlateColor *)&local_f8._s_0);
    if (*(char *)(lVar9 + 0x98) == '\0') {
      local_f8._s_0 = (FLinearColor_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      UTextBlock::SetShadowOffset((UTextBlock *)this,(TVector2<double> *)&local_f8._s_0);
      local_f8._s_0.R = (float)FLinearColor::Transparent.field0_0x0._0_4_;
      local_f8._s_0.G = (float)FLinearColor::Transparent.field0_0x0._4_4_;
      local_f8._s_0.B = (float)FLinearColor::Transparent.field0_0x0._8_4_;
      local_f8._s_0.A = (float)FLinearColor::Transparent.field0_0x0._12_4_;
    }
    else {
      local_f8 = *(FLinearColor_u_0 *)(lVar9 + 0xa0);
      UTextBlock::SetShadowOffset((UTextBlock *)this,(TVector2<double> *)&local_f8._s_0);
      local_f8._s_0.R = (float)*(undefined4 *)(lVar9 + 0xb0);
      local_f8._s_0.G = (float)*(undefined4 *)(lVar9 + 0xb4);
      local_f8._s_0.B = (float)*(undefined4 *)(lVar9 + 0xb8);
      local_f8._s_0.A = (float)*(undefined4 *)(lVar9 + 0xbc);
    }
    UTextBlock::SetShadowColorAndOpacity((UTextBlock *)this,(FLinearColor *)&local_f8._s_0);
  }
  return;
}

// execGetMargin @ 14a82e710

void __cdecl UCommonTextBlock::execGetMargin(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0xb].field_0xc;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetMobileFontSizeMultiplier @ 14a82e8a0

void __cdecl
UCommonTextBlock::execGetMobileFontSizeMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x16].field_0x20;
  return;
}

// execResetScrollState @ 14a831940

void __cdecl UCommonTextBlock::execResetScrollState(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWidget *this;
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWidget **)&param_1[0x17].field_0x18;
  if (this == (SWidget *)0x0) {
    return;
  }
  *(undefined4 *)&this[1].PersistentState.InitialClipState.field_0x4c = 0x3f800000;
  iVar1 = this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame;
  *(undefined8 *)&this[1].PersistentState.InitialClipState.TypedValue.field_0x44 = 0;
  if ((char)iVar1 != '\a') {
    *(undefined1 *)
     &this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame = 1;
  }
  if (__real_3f800000 != this->RenderOpacity) {
    this->RenderOpacity = 1.0;
    SWidget::Invalidate(this,Paint);
    return;
  }
  return;
}

// execSetApplyLineHeightToBottomLine @ 14a8321c0

void __cdecl
UCommonTextBlock::execSetApplyLineHeightToBottomLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UTextLayoutWidget::SetApplyLineHeightToBottomLine
            ((UTextLayoutWidget *)param_1,local_res10[0] != 0);
  return;
}

// execSetLineHeightPercentage @ 14a8343b0

void __cdecl
UCommonTextBlock::execSetLineHeightPercentage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UTextLayoutWidget::SetLineHeightPercentage((UTextLayoutWidget *)param_1,local_res10[0]);
  return;
}

// execSetMargin @ 14a8349f0

void __cdecl UCommonTextBlock::execSetMargin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin *pFVar2;
  FMargin local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FMargin *)param_2->MostRecentPropertyAddress != (FMargin *)0x0) {
    pFVar2 = (FMargin *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UTextLayoutWidget::SetMargin((UTextLayoutWidget *)param_1,pFVar2);
  return;
}

// execSetMobileFontSizeMultiplier @ 14a834d10

void __cdecl
UCommonTextBlock::execSetMobileFontSizeMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  float local_res8 [2];
  
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
  if (local_res8[0] != *(float *)&param_1[0x16].field_0x20) {
    *(float *)&param_1[0x16].field_0x20 = local_res8[0];
    iVar2 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
    if (iVar2 == 1) {
      ApplyFontSizeMultiplier((UCommonTextBlock *)param_1);
    }
  }
  return;
}

// execSetScrollOrientation @ 14a835200

void __cdecl
UCommonTextBlock::execSetScrollOrientation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x17].field_0x10 = local_res8[0];
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

// execSetScrollingEnabled @ 14a835330

void __cdecl
UCommonTextBlock::execSetScrollingEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  param_1[0x16].field_0x24 = local_res8[0] != 0;
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

// execSetStyle @ 14a835e20

void __cdecl UCommonTextBlock::execSetStyle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res8 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  *(UObject **)(param_1 + 0x17) = pUVar2;
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

// execSetTextCase @ 14a836180

void __cdecl UCommonTextBlock::execSetTextCase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  UTextBlock::SetTextTransformPolicy((UTextBlock *)param_1,-(local_res8[0] != 0) & ToUpper);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

// execSetWrapTextWidth @ 14a836990

void __cdecl UCommonTextBlock::execSetWrapTextWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UTextLayoutWidget::SetWrapTextAt((UTextLayoutWidget *)param_1,(float)local_res10[0]);
  return;
}

