// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 81

// GetText_WrapperImpl @ 146968030

void __cdecl UTextBlock::GetText_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *pSVar1;
  undefined1 local_res8 [8];
  FText local_18;
  
  pSVar1 = *(SWidget **)((longlong)param_1 + 0x380);
  if (pSVar1 == (SWidget *)0x0) {
    local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x1d0);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)((longlong)param_1 + 0x1d8);
  }
  else {
    if ((pSVar1[2].Tag.Number & 1) != 0) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)(pSVar1 + 1),pSVar1,Member);
    }
    local_18.TextData.Reference = (ITextData *)pSVar1[1]._padding_;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = (uint)pSVar1[1]._padding_;
  }
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetText_WrapperImpl @ 1469680e0

void __cdecl UTextBlock::SetText_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  undefined1 local_res8 [8];
  longlong *local_18;
  undefined4 local_10;
  
  local_18 = *(longlong **)param_2;
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x358);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 8))(local_18,local_res8);
  }
  local_10 = *(undefined4 *)((longlong)param_2 + 8);
  (*pcVar1)(param_1,&local_18);
  return;
}

// GetColorAndOpacity_WrapperImpl @ 146968140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UTextBlock::GetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x210));
  if (bVar1) {
    local_18 = local_18 & 0xffffff00;
    local_28 = ___xmm_3f8000003f800000000000003f800000;
    uStack_20 = _UNK_15090c6d8;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x210),&local_28)
    ;
  }
  else {
    local_28 = *(undefined8 *)((longlong)param_1 + 0x1f8);
    uStack_20 = *(undefined8 *)((longlong)param_1 + 0x200);
    local_18 = *(uint *)((longlong)param_1 + 0x208);
  }
  *(undefined8 *)param_2 = local_28;
  *(undefined8 *)((longlong)param_2 + 8) = uStack_20;
  *(uint *)((longlong)param_2 + 0x10) = local_18;
  return;
}

// SetColorAndOpacity_WrapperImpl @ 1469681c0

void __cdecl UTextBlock::SetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  local_28 = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x1f8) = local_38._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x200) = local_38._8_8_;
  *(undefined4 *)((longlong)param_1 + 0x208) = *(undefined4 *)((longlong)param_2 + 0x10);
  if (*(STextBlock **)((longlong)param_1 + 0x380) != (STextBlock *)0x0) {
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_24 = 1;
    STextBlock::SetColorAndOpacity
              (*(STextBlock **)((longlong)param_1 + 0x380),(TAttribute<FSlateColor> *)&local_38._s_0
              );
  }
  return;
}

// GetMinDesiredWidth_WrapperImpl @ 146968220

void __cdecl UTextBlock::GetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x228);
  return;
}

// SetMinDesiredWidth_WrapperImpl @ 146968230

void __cdecl UTextBlock::SetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<float> local_28;
  
  local_28.Value = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x228) = local_28.Value;
  if (*(STextBlock **)((longlong)param_1 + 0x380) != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STextBlock::SetMinDesiredWidth(*(STextBlock **)((longlong)param_1 + 0x380),&local_28);
  }
  return;
}

// GetFont_WrapperImpl @ 146968280

void __cdecl UTextBlock::GetFont_WrapperImpl(void *param_1,void *param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)((longlong)param_1 + 0x230));
  FSlateFontInfo::operator=(param_2,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// SetFont_WrapperImpl @ 1469682d0

void __cdecl UTextBlock::SetFont_WrapperImpl(void *param_1,void *param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_2);
  SetFont(param_1,pFVar1);
  return;
}

// GetStrikeBrush_WrapperImpl @ 146968300

void __cdecl UTextBlock::GetStrikeBrush_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush *pFVar1;
  FSlateBrush local_b8;
  
  pFVar1 = FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)((longlong)param_1 + 0x290));
  FSlateBrush::operator=(param_2,pFVar1);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetStrikeBrush_WrapperImpl @ 146968390

void __cdecl UTextBlock::SetStrikeBrush_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush *pFVar1;
  FSlateBrush local_b8;
  
  pFVar1 = FSlateBrush::FSlateBrush(&local_b8,param_2);
  SetStrikeBrush(param_1,pFVar1);
  return;
}

// GetShadowOffset_WrapperImpl @ 1469683c0

void __cdecl UTextBlock::GetShadowOffset_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x348);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x340);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetShadowOffset_WrapperImpl @ 1469683e0

void __cdecl UTextBlock::SetShadowOffset_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x340) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x348) = uVar1;
  if (*(STextBlock **)((longlong)param_1 + 0x380) != (STextBlock *)0x0) {
    local_38._s_0.X = (double)*(undefined8 *)param_2;
    local_38._s_0.Y = *(double *)((longlong)param_2 + 8);
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetShadowOffset
              (*(STextBlock **)((longlong)param_1 + 0x380),
               (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// GetShadowColorAndOpacity_WrapperImpl @ 146968430

void __cdecl UTextBlock::GetShadowColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x360));
  if (bVar2) {
    local_18 = 0;
    uStack_10 = 0;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x360),&local_18)
    ;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)((longlong)param_2 + 8) = uStack_10;
    return;
  }
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x358);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x350);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetShadowColorAndOpacity_WrapperImpl @ 1469684b0

void __cdecl UTextBlock::SetShadowColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x350) = local_38._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x358) = local_38._8_8_;
  if (*(STextBlock **)((longlong)param_1 + 0x380) != (STextBlock *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetShadowColorAndOpacity
              (*(STextBlock **)((longlong)param_1 + 0x380),
               (TAttribute<FLinearColor> *)&local_38._s_0);
  }
  return;
}

// GetTextTransformPolicy_WrapperImpl @ 146968500

void __cdecl UTextBlock::GetTextTransformPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x379);
  return;
}

// SetTextTransformPolicy_WrapperImpl @ 146968510

void __cdecl UTextBlock::SetTextTransformPolicy_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<ETextTransformPolicy> local_28;
  
  local_28.Value = *(ETextTransformPolicy *)param_2;
  *(ETextTransformPolicy *)((longlong)param_1 + 0x379) = local_28.Value;
  if (*(STextBlock **)((longlong)param_1 + 0x380) != (STextBlock *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STextBlock::SetTransformPolicy(*(STextBlock **)((longlong)param_1 + 0x380),&local_28);
  }
  return;
}

// GetTextOverflowPolicy_WrapperImpl @ 146968560

void __cdecl UTextBlock::GetTextOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x37a);
  return;
}

// SetTextOverflowPolicy_WrapperImpl @ 146968570

void __cdecl UTextBlock::SetTextOverflowPolicy_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x37a) = *(undefined1 *)param_2;
                    /* WARNING: Could not recover jumptable at 0x00014696857c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

// StaticClass @ 146968590

UClass * __cdecl UTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextBlock",&Z_Registration_Info_UClass_UTextBlock.InnerSingleton,
               StaticRegisterNativesUTextBlock,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextBlock>,InternalVTableHelperCtorCaller<UTextBlock>,local_res8
               ,UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBlock.InnerSingleton;
}

// UTextBlock @ 14698e030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTextBlock * __thiscall UTextBlock::UTextBlock(UTextBlock *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  FText::FText(&this->Text);
  *(undefined8 *)&this->TextDelegate = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ColorAndOpacity).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->ColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x10 = 0;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  FSlateBrush::FSlateBrush(&this->StrikeBrush);
  *(undefined8 *)&this->ShadowColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->ShadowColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ShadowColorAndOpacityDelegate).field_0x10 = 0;
  (this->MyTextBlock).Object = (STextBlock *)0x0;
  (this->MyTextBlock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UTextBlock @ 14698e130

UTextBlock * __thiscall UTextBlock::UTextBlock(UTextBlock *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  FLinearColor FVar4;
  FName *pFVar5;
  FSlateFontInfo *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FName local_res8;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  UTextLayoutWidget::UTextLayoutWidget((UTextLayoutWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->Text);
  *(undefined8 *)&this->TextDelegate = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ColorAndOpacity).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->ColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x10 = 0;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  FSlateBrush::FSlateBrush(&this->StrikeBrush);
  *(undefined8 *)&this->ShadowColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->ShadowColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ShadowColorAndOpacityDelegate).field_0x10 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  (this->MyTextBlock).Object = (STextBlock *)0x0;
  (this->MyTextBlock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bWrapWithInvalidationPanel = false;
  (this->ShadowOffset).field0_0x0._s_0.X = 1.0;
  (this->ShadowOffset).field0_0x0._s_0.Y = 1.0;
  uVar7 = (ulonglong)_tls_index;
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_88.OutlineColor.field0_0x0._1_15_;
  local_88.OutlineColor.field0_0x0 = (FLinearColor_u_0)(auVar3 << 8);
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(float *)&(this->ColorAndOpacity).ColorUseRule = local_88.OutlineColor.field0_0x0._s_0.R;
  pvVar2 = ThreadLocalStoragePointer;
  FVar4 = FLinearColor::Transparent;
  this->TextTransformPolicy = None;
  this->TextOverflowPolicy = Clip;
  (this->ShadowColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar7 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString((FString *)&local_88,L"/Engine/EngineFonts/Roboto");
      FConfigCacheIni::GetString
                (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)&local_88,&GEngineIni);
      pwVar8 = L"";
      if (local_88.OutlineMaterial.field0_0x0._0_4_ != 0) {
        pwVar8 = (wchar_t *)
                 CONCAT17(local_88._padding_,
                          CONCAT16(local_88.bApplyOutlineToDropShadows,
                                   CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      }
      ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>(&RobotoFontObj,pwVar8,0);
      pvVar2 = (void *)CONCAT17(local_88._padding_,
                                CONCAT16(local_88.bApplyOutlineToDropShadows,
                                         CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      atexit(`UTextBlock::UTextBlock'::__l5::_dynamic_atexit_destructor_for__RobotoFontObj__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar5 = ::FName::FName(&local_res8,"Bold");
  pFVar6 = FSlateFontInfo::FSlateFontInfo
                     (&local_68,(UObject *)RobotoFontObj.Object.field0_0x0,__real_41c00000,pFVar5,
                      &local_88);
  FSlateFontInfo::operator=(&this->Font,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// ~UTextBlock @ 1469945c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTextBlock::~UTextBlock(UTextBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTextBlock).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ShadowColorAndOpacityDelegate);
  pTVar1 = (this->StrikeBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->StrikeBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ColorAndOpacityDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TextDelegate);
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&UTextLayoutWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UTextLayoutWidget::_vftable__for__INotifyFieldValueChanged__;
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetAccessibleWidget @ 1469cce50

TSharedPtr<SWidget,1> * __thiscall
UTextBlock::GetAccessibleWidget(UTextBlock *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyTextBlock).Object;
  pTVar1 = (this->MyTextBlock).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetColorAndOpacity @ 1469ce5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
UTextBlock::GetColorAndOpacity(UTextBlock *this,FSlateColor *__return_storage_ptr__)

{
  bool bVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ColorAndOpacityDelegate);
  if (bVar1) {
    local_18 = local_18 & 0xffffff00;
    local_28 = ___xmm_3f8000003f800000000000003f800000;
    uStack_20 = _UNK_15090c6d8;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ColorAndOpacityDelegate,
               &local_28);
  }
  else {
    local_28 = *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0;
    uStack_20 = *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
    local_18._0_1_ = (this->ColorAndOpacity).ColorUseRule;
    local_18._1_1_ = (this->ColorAndOpacity).ColorTableId;
    local_18._2_2_ = *(undefined2 *)&(this->ColorAndOpacity).field_0x12;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = local_28;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uStack_20;
  __return_storage_ptr__->ColorUseRule = (char)local_18;
  __return_storage_ptr__->ColorTableId = (char)(local_18 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)(local_18 >> 0x10);
  return __return_storage_ptr__;
}

// GetDisplayText @ 1469cfcc0

TAttribute<FText> * __thiscall
UTextBlock::GetDisplayText(UTextBlock *this,TAttribute<FText> *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  UObject *pUVar3;
  TAttribute<FText> *pTVar4;
  FName local_res8;
  FDestructionSentinel local_88;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->TextDelegate);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TextDelegate,
               (FReadAccessScope *)&local_88);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->TextDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->TextDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TextDelegate,
               (FWriteAccessScope *)&local_88);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->TextDelegate).field_0x8);
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    pTVar4 = TAttribute<FText>::Create<UObject>((TAttribute<FText> *)local_40,pUVar3,&local_res8);
    bVar1 = true;
    bVar2 = false;
  }
  else {
    local_70._0_8_ = (this->Text).TextData.Reference;
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 8))(local_70._0_8_,&local_res8);
    }
    local_70._8_4_ = (this->Text).Flags;
    pTVar4 = (TAttribute<FText> *)local_70;
    local_70[0x10] = true;
    bVar1 = false;
    bVar2 = true;
    local_48 = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
  }
  FText::FText(&__return_storage_ptr__->Value,&pTVar4->Value);
  __return_storage_ptr__->bIsSet = pTVar4->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar4->Getter);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_88);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
  }
  if (bVar1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetDynamicFontMaterial @ 1469cfec0

UMaterialInstanceDynamic * __thiscall UTextBlock::GetDynamicFontMaterial(UTextBlock *this)

{
  TObjectPtr<UObject> *this_00;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FSlateFontInfo *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_88;
  FString local_78;
  FSlateFontInfo local_68;
  
  this_00 = &(this->Font).FontMaterial;
  if ((this_00->field0_0x0).DebugPtr == (UObject *)0x0) {
    return (UMaterialInstanceDynamic *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
  if ((bVar2) &&
     (pUVar4 = (UMaterialInstanceDynamic *)(this_00->field0_0x0).DebugPtr,
     pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar4 = UMaterialInstanceDynamic::Create
                         ((UMaterialInterface *)pUVar4,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->Font).FontMaterial.field0_0x0.DebugPtr = (UObject *)pUVar4;
      pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_68,&this->Font);
      SetFont(this,pFVar5);
    }
    return pUVar4;
  }
  pFVar6 = GetTypeName<UMaterialInterface>(&local_88);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_78,(this_00->field0_0x0).DebugPtr);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// GetDynamicOutlineMaterial @ 1469d00c0

UMaterialInstanceDynamic * __thiscall UTextBlock::GetDynamicOutlineMaterial(UTextBlock *this)

{
  TObjectPtr<UObject> *this_00;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FSlateFontInfo *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_88;
  FString local_78;
  FSlateFontInfo local_68;
  
  this_00 = &(this->Font).OutlineSettings.OutlineMaterial;
  if ((this_00->field0_0x0).DebugPtr == (UObject *)0x0) {
    return (UMaterialInstanceDynamic *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
  if ((bVar2) &&
     (pUVar4 = (UMaterialInstanceDynamic *)(this_00->field0_0x0).DebugPtr,
     pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar4 = UMaterialInstanceDynamic::Create
                         ((UMaterialInterface *)pUVar4,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->Font).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr = (UObject *)pUVar4;
      pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_68,&this->Font);
      SetFont(this,pFVar5);
    }
    return pUVar4;
  }
  pFVar6 = GetTypeName<UMaterialInterface>(&local_88);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_78,(this_00->field0_0x0).DebugPtr);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// GetFont @ 1469d0940

FSlateFontInfo * __thiscall UTextBlock::GetFont(UTextBlock *this)

{
  return &this->Font;
}

// GetMinDesiredWidth @ 1469d1e40

float __thiscall UTextBlock::GetMinDesiredWidth(UTextBlock *this)

{
  return this->MinDesiredWidth;
}

// GetPrivateStaticClass @ 1469d61d0

UClass * __cdecl UTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextBlock",&Z_Registration_Info_UClass_UTextBlock.InnerSingleton,
               StaticRegisterNativesUTextBlock,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextBlock>,InternalVTableHelperCtorCaller<UTextBlock>,local_res8
               ,UTextLayoutWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBlock.InnerSingleton;
}

// GetShadowColorAndOpacity @ 1469d8540

FLinearColor * __thiscall
UTextBlock::GetShadowColorAndOpacity(UTextBlock *this,FLinearColor *__return_storage_ptr__)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->ShadowColorAndOpacityDelegate);
  if (bVar1) {
    local_18 = 0;
    uStack_10 = 0;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ShadowColorAndOpacityDelegate,
               &local_18);
  }
  else {
    local_18._0_4_ = (this->ShadowColorAndOpacity).field0_0x0._s_0.R;
    local_18._4_4_ = (this->ShadowColorAndOpacity).field0_0x0._s_0.G;
    uStack_10._0_4_ = (this->ShadowColorAndOpacity).field0_0x0._s_0.B;
    uStack_10._4_4_ = (this->ShadowColorAndOpacity).field0_0x0._s_0.A;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = (float)local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.G = local_18._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (float)uStack_10;
  (__return_storage_ptr__->field0_0x0)._s_0.A = uStack_10._4_4_;
  return __return_storage_ptr__;
}

// GetShadowOffset @ 1469d85b0

TVector2<double> * __thiscall
UTextBlock::GetShadowOffset(UTextBlock *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->ShadowOffset).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetStrikeBrush @ 1469d8a70

FSlateBrush * __thiscall UTextBlock::GetStrikeBrush(UTextBlock *this)

{
  return &this->StrikeBrush;
}

// GetText @ 1469d8dc0

FText * __thiscall UTextBlock::GetText(UTextBlock *this,FText *__return_storage_ptr__)

{
  STextBlock *pSVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->MyTextBlock).Object;
  if (pSVar1 != (STextBlock *)0x0) {
    if ((*(byte *)&pSVar1->field91_0x60c & 1) != 0) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&pSVar1->BoundText,(SWidget *)pSVar1,Member);
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = *(ITextData **)&(pSVar1->BoundText).field_0x0;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = *(uint *)&(pSVar1->BoundText).field_0x8;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (this->Text).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Text).Flags;
  return __return_storage_ptr__;
}

// GetTextOverflowPolicy @ 1469d8e90

ETextOverflowPolicy __thiscall UTextBlock::GetTextOverflowPolicy(UTextBlock *this)

{
  return this->TextOverflowPolicy;
}

// GetTextTransformPolicy @ 1469d8ec0

ETextTransformPolicy __thiscall UTextBlock::GetTextTransformPolicy(UTextBlock *this)

{
  return this->TextTransformPolicy;
}

// GetTextWarningImageVisibility @ 1469d8ed0

EVisibility __thiscall UTextBlock::GetTextWarningImageVisibility(UTextBlock *this)

{
  bool bVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  bVar1 = FText::IsCultureInvariant(&this->Text);
  EVar2 = EVisibility::Collapsed;
  if (bVar1) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnApplyLineHeightToBottomLineChanged @ 1469e5330

void __thiscall UTextBlock::OnApplyLineHeightToBottomLineChanged(UTextBlock *this,bool param_1)

{
  STextBlock *this_00;
  TAttribute<bool> local_28;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    STextBlock::SetApplyLineHeightToBottomLine(this_00,&local_28);
  }
  return;
}

// OnAutoWrapTextChanged @ 1469e55d0

void __thiscall UTextBlock::OnAutoWrapTextChanged(UTextBlock *this,bool param_1)

{
  STextBlock *this_00;
  TAttribute<bool> local_28;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    STextBlock::SetAutoWrapText(this_00,&local_28);
  }
  return;
}

// OnBindingChanged @ 1469e5630

void __thiscall UTextBlock::OnBindingChanged(UTextBlock *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<FSlateColor> *pTVar5;
  STextBlock *pSVar6;
  TAttribute<FLinearColor> *pTVar7;
  FMRSWRecursiveAccessDetector *pFVar8;
  int *piVar9;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  undefined1 local_250 [8];
  ForAnyElementType FStack_248;
  ulonglong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined1 local_220 [8];
  ForAnyElementType FStack_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f0 [24];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0 [24];
  ITextData *local_1a8;
  uint local_1a0;
  undefined1 local_198;
  undefined1 local_190 [24];
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  TAttribute<FText> local_148;
  FLinearColor_u_0 local_118;
  undefined4 local_108;
  undefined1 local_104;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_100;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  FLinearColor_u_0 local_58;
  undefined1 local_48;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> local_40;
  
  if ((this->MyTextBlock).Object != (STextBlock *)0x0) {
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&TextProperty,L"TextDelegate");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar9 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&ColorAndOpacityProperty,L"ColorAndOpacityDelegate");
      _Init_thread_footer(&::_TSS1);
    }
    if ((*piVar9 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&ShadowColorAndOpacityProperty,L"ShadowColorAndOpacityDelegate");
      _Init_thread_footer(&::_TSS2);
    }
    FVar1 = *param_1;
    if (FVar1 == TextProperty) {
      (**(code **)(this->_padding_ + 0x370))(this,&local_1a8);
      if (((this->MyTextBlock).Object == (STextBlock *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar6 = (this->MyTextBlock).Object;
      local_148.Value.TextData.Reference = local_1a8;
      if (local_1a8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8 + 8))(local_1a8,local_res8);
      }
      local_148.Value.Flags = local_1a0;
      local_148.bIsSet = (bool)local_198;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_148.Getter,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_190);
      STextBlock::SetText(pSVar6,&local_148);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
      if ((void *)local_190._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_190._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_190);
      if (local_1a8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8 + 0x10))();
      }
    }
    else {
      if (FVar1 == ColorAndOpacityProperty) {
        bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                           &this->ColorAndOpacityDelegate);
        if (bVar3) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->ColorAndOpacityDelegate,&local_e8);
          local_res18.ComparisonIndex.Value = *(uint *)&(this->ColorAndOpacityDelegate).field_0x10;
          local_res18.Number = *(uint *)&(this->ColorAndOpacityDelegate).field_0x14;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_e8);
          pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &this->ColorAndOpacityDelegate);
          pTVar5 = TAttribute<FSlateColor>::Create<UObject>
                             ((TAttribute<FSlateColor> *)local_b8,pUVar4,&local_res18);
          local_208 = *(undefined8 *)&(pTVar5->Value).SpecifiedColor.field0_0x0;
          uStack_200 = *(undefined8 *)((longlong)&(pTVar5->Value).SpecifiedColor.field0_0x0 + 8);
          local_1f8._0_1_ = (pTVar5->Value).ColorUseRule;
          local_1f8._1_1_ = (pTVar5->Value).ColorTableId;
          local_1f8._2_2_ = *(undefined2 *)&(pTVar5->Value).field_0x12;
          local_1f4 = pTVar5->bIsSet;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
          if ((void *)local_a0._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_a0._8_8_);
          }
          pFVar8 = (FMRSWRecursiveAccessDetector *)local_a0;
        }
        else {
          local_1f8._0_1_ = (this->ColorAndOpacity).ColorUseRule;
          local_1f8._1_1_ = (this->ColorAndOpacity).ColorTableId;
          local_1f8._2_2_ = *(undefined2 *)&(this->ColorAndOpacity).field_0x12;
          local_208 = *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0;
          uStack_200 = *(undefined8 *)
                        ((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
          local_240 = 0;
          local_250 = (undefined1  [8])0x0;
          FStack_248.Data = (FScriptContainerElement *)0x0;
          local_1f4 = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_250);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
                     (FWriteAccessScope *)&local_178);
          if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_248.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_248,0,0,0x10);
            local_240 = local_240 & 0xffffffff00000000;
          }
          if (local_178.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
          }
          if (FStack_248.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_248.Data);
          }
          pFVar8 = (FMRSWRecursiveAccessDetector *)local_250;
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar8);
        pSVar6 = TSharedPtr<STextBlock,1>::operator->(&this->MyTextBlock);
        local_108 = local_1f8;
        local_104 = local_1f4;
        local_118._0_8_ = local_208;
        local_118._8_8_ = uStack_200;
        TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  (&local_100,
                   (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f0);
        STextBlock::SetColorAndOpacity(pSVar6,(TAttribute<FSlateColor> *)&local_118._s_0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
        if ((void *)local_1f0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1f0._8_8_);
        }
        pFVar8 = (FMRSWRecursiveAccessDetector *)local_1f0;
      }
      else {
        if (FVar1 != ShadowColorAndOpacityProperty) {
          return;
        }
        bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                           &this->ShadowColorAndOpacityDelegate);
        if (bVar3) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->ShadowColorAndOpacityDelegate,&local_d0);
          local_res20.ComparisonIndex.Value =
               *(uint *)&(this->ShadowColorAndOpacityDelegate).field_0x10;
          local_res20.Number = *(uint *)&(this->ShadowColorAndOpacityDelegate).field_0x14;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_d0);
          pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &this->ShadowColorAndOpacityDelegate);
          pTVar7 = TAttribute<FLinearColor>::Create<UObject>
                             ((TAttribute<FLinearColor> *)local_88,pUVar4,&local_res20);
          local_1d8 = *(undefined8 *)&(pTVar7->Value).field0_0x0;
          uStack_1d0 = *(undefined8 *)((longlong)&(pTVar7->Value).field0_0x0 + 8);
          local_1c8 = pTVar7->bIsSet;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar7->Getter);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
          if ((void *)local_70._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_70._8_8_);
          }
          pFVar8 = (FMRSWRecursiveAccessDetector *)local_70;
        }
        else {
          local_238 = *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0;
          uStack_230 = *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8);
          local_228 = 1;
          local_210 = 0;
          local_220 = (undefined1  [8])0x0;
          FStack_218.Data = (FScriptContainerElement *)0x0;
          local_1c8 = 1;
          local_1d8 = local_238;
          uStack_1d0 = uStack_230;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                     (FWriteAccessScope *)&local_160);
          if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_218.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_218,0,0,0x10);
            local_210 = local_210 & 0xffffffff00000000;
          }
          if (local_160.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
          }
          if (FStack_218.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_218.Data);
          }
          pFVar8 = (FMRSWRecursiveAccessDetector *)local_220;
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar8);
        pSVar6 = TSharedPtr<STextBlock,1>::operator->(&this->MyTextBlock);
        local_48 = local_1c8;
        local_58._0_8_ = local_1d8;
        local_58._8_8_ = uStack_1d0;
        TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                  (&local_40,
                   (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c0);
        STextBlock::SetShadowColorAndOpacity(pSVar6,(TAttribute<FLinearColor> *)&local_58._s_0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
        if ((void *)local_1c0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1c0._8_8_);
        }
        pFVar8 = (FMRSWRecursiveAccessDetector *)local_1c0;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar8);
    }
  }
  return;
}

// OnFontChanged @ 1469e7e80

void __thiscall UTextBlock::OnFontChanged(UTextBlock *this)

{
  return;
}

// OnJustificationChanged @ 1469e9690

void __thiscall UTextBlock::OnJustificationChanged(UTextBlock *this,Type param_1)

{
  STextBlock *this_00;
  TAttribute<ETextJustify::Type> local_28;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    STextBlock::SetJustification(this_00,&local_28);
  }
  return;
}

// OnLineHeightPercentageChanged @ 1469eb840

void __thiscall UTextBlock::OnLineHeightPercentageChanged(UTextBlock *this,float param_1)

{
  STextBlock *this_00;
  TAttribute<float> local_28;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    STextBlock::SetLineHeightPercentage(this_00,&local_28);
  }
  return;
}

// OnMarginChanged @ 1469ebc80

void __thiscall UTextBlock::OnMarginChanged(UTextBlock *this,FMargin *param_1)

{
  STextBlock *this_00;
  TAttribute<FMargin> local_38;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_38.Value.Left = param_1->Left;
    local_38.Value.Top = param_1->Top;
    local_38.Value.Right = param_1->Right;
    local_38.Value.Bottom = param_1->Bottom;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    STextBlock::SetMargin(this_00,&local_38);
  }
  return;
}

// OnShapedTextOptionsChanged @ 1469f0500

void __thiscall UTextBlock::OnShapedTextOptionsChanged(UTextBlock *this,FShapedTextOptions param_1)

{
  STextBlock *pSVar1;
  undefined5 in_register_00000013;
  
  pSVar1 = (this->MyTextBlock).Object;
  if (pSVar1 != (STextBlock *)0x0) {
    FShapedTextOptions::SynchronizeShapedTextProperties<STextBlock>
              ((FShapedTextOptions *)CONCAT53(in_register_00000013,param_1),pSVar1);
  }
  return;
}

// OnTextChanged @ 1469f1bd0

void __thiscall UTextBlock::OnTextChanged(UTextBlock *this)

{
  return;
}

// OnWrapTextAtChanged @ 1469f2aa0

void __thiscall UTextBlock::OnWrapTextAtChanged(UTextBlock *this,float param_1)

{
  STextBlock *this_00;
  TAttribute<float> local_28;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    STextBlock::SetWrapTextAt(this_00,&local_28);
  }
  return;
}

// OnWrappingPolicyChanged @ 1469f2d40

void __thiscall UTextBlock::OnWrappingPolicyChanged(UTextBlock *this,ETextWrappingPolicy param_1)

{
  STextBlock *this_00;
  TAttribute<ETextWrappingPolicy> local_28;
  
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    STextBlock::SetWrappingPolicy(this_00,&local_28);
  }
  return;
}

// RebuildWidget @ 146a076c0

TSharedRef<SWidget,1> * __thiscall
UTextBlock::RebuildWidget(UTextBlock *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<STextBlock,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  STextBlock *pSVar3;
  SInvalidationPanel *pSVar4;
  code *pcVar5;
  bool bVar6;
  FArguments *pFVar7;
  FArguments *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  TSharedRef<SInvalidationPanel,1> *pTVar10;
  TSharedRef<SWidget,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  T0RequiredArgs local_res8 [16];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_dd8;
  FLLMScope local_dd4;
  FLLMScope local_dd0 [2];
  SWidget *local_dc8;
  TReferenceControllerBase<1> *pTStack_dc0;
  STextBlock *local_db8;
  FSharedReferencer<1> local_db0;
  FName local_da8;
  FMemScope local_da0;
  FName local_d98;
  FMemScope local_d90;
  FName local_d88;
  FMemScope local_d80;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_d78;
  STextBlock *local_d60;
  TReferenceControllerBase<1> *pTStack_d58;
  TSharedRef<SInvalidationPanel,1> local_d50;
  TSharedRef<STextBlock,1> local_d40;
  TSharedRef<STextBlock,1> local_d30;
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> local_d20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_d08;
  FArguments local_cf0;
  FArguments local_ad8;
  FArguments local_580;
  
  if (this->bWrapWithInvalidationPanel == false) {
    pFVar8 = STextBlock::FArguments::FArguments(&local_580);
    pFVar8->_SimpleTextMode = this->bSimpleTextMode;
    FLLMScope::FLLMScope(local_dd0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_d88 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_d80,&local_d88,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_d08,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TextBlock.cpp"
               ,0x152,local_res20);
    FMemScope::~FMemScope(&local_d80);
    FLLMScope::~FLLMScope(local_dd0);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_d08,&local_d30,pFVar8);
    local_db0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_db8 = pTVar9->Object;
    if (local_db0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_db0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_db0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->MyTextBlock;
    if (pTVar1 != (TSharedPtr<STextBlock,1> *)&local_db8) {
      pTVar1->Object = local_db8;
      local_db8 = (STextBlock *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyTextBlock).SharedReferenceCount,&local_db0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_db0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d30.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d08._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_580);
    if (pTVar1->Object == (STextBlock *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
    pSVar3 = pTVar1->Object;
    pTVar12 = (this->MyTextBlock).SharedReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (STextBlock *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
    __return_storage_ptr__->Object = (SWidget *)pSVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    pFVar7 = SInvalidationPanel::FArguments::FArguments(&local_cf0);
    pFVar8 = STextBlock::FArguments::FArguments(&local_ad8);
    pFVar8->_SimpleTextMode = this->bSimpleTextMode;
    FLLMScope::FLLMScope(&local_dd8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_da8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_da0,&local_da8,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_d78,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TextBlock.cpp"
               ,0x14a,local_res8);
    FMemScope::~FMemScope(&local_da0);
    FLLMScope::~FLLMScope(&local_dd8);
    if (local_d78._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_d60 = (this->MyTextBlock).Object;
    pTStack_d58 = (this->MyTextBlock).SharedReferenceCount.ReferenceController;
    (this->MyTextBlock).Object = local_d78._Widget.Object;
    (this->MyTextBlock).SharedReferenceCount.ReferenceController =
         local_d78._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d58)
    ;
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_d78,&local_d40,pFVar8);
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar9->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_dc8 = (pFVar7->_Content).Widget.Object;
    pTStack_dc0 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar7->_Content).Widget.Object = (SWidget *)pSVar3;
    (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_dc0)
    ;
    FLLMScope::FLLMScope(&local_dd4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_d98 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_d90,&local_d98,true);
    TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
              (&local_d20,"SInvalidationPanel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TextBlock.cpp"
               ,0x148,local_res18);
    FMemScope::~FMemScope(&local_d90);
    FLLMScope::~FLLMScope(&local_dd4);
    pTVar10 = TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_d20,&local_d50,pFVar7);
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar10->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d20._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d78._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_ad8);
    if (local_cf0._DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cf0._DebugName.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cf0._Content.Widget.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_cf0);
    if (pSVar4 == (SInvalidationPanel *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
    __return_storage_ptr__->Object = (SWidget *)pSVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__->Object == (SWidget *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b630

void __thiscall UTextBlock::ReleaseSlateResources(UTextBlock *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyTextBlock != (TSharedPtr<STextBlock,1> *)&local_18) {
    (this->MyTextBlock).Object = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyTextBlock).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetAutoWrapText @ 146a11130

void __thiscall UTextBlock::SetAutoWrapText(UTextBlock *this,bool param_1)

{
  byte *pbVar1;
  STextBlock *this_00;
  TAttribute<bool> local_28;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | param_1;
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    STextBlock::SetAutoWrapText(this_00,&local_28);
  }
  return;
}

// SetColorAndOpacity @ 146a12460

void __thiscall UTextBlock::SetColorAndOpacity(UTextBlock *this,FSlateColor *param_1)

{
  STextBlock *this_00;
  FLinearColor_u_0 local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_28._0_1_ = param_1->ColorUseRule;
  local_28._1_1_ = param_1->ColorTableId;
  local_28._2_2_ = *(undefined2 *)&param_1->field_0x12;
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = local_38._8_8_
  ;
  (this->ColorAndOpacity).ColorUseRule = (undefined1)local_28;
  (this->ColorAndOpacity).ColorTableId = local_28._1_1_;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = local_28._2_2_;
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_24 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetColorAndOpacity(this_00,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// SetFont @ 146a140f0

void __thiscall UTextBlock::SetFont(UTextBlock *this,FSlateFontInfo *param_1)

{
  STextBlock *this_00;
  TAttribute<FSlateFontInfo> local_88;
  
  FSlateFontInfo::operator=(&this->Font,param_1);
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    FSlateFontInfo::FSlateFontInfo(&local_88.Value,&this->Font);
    local_88.bIsSet = true;
    local_88.Getter._16_8_ = 0;
    local_88.Getter._0_8_ = 0;
    local_88.Getter._8_8_ = 0;
    STextBlock::SetFont(this_00,&local_88);
  }
  (**(code **)(this->_padding_ + 0x368))(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return;
}

// SetFontMaterial @ 146a14260

void __thiscall UTextBlock::SetFontMaterial(UTextBlock *this,UMaterialInterface *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Font).FontMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,&this->Font);
  SetFont(this,pFVar1);
  return;
}

// SetFontOutlineMaterial @ 146a14390

void __thiscall UTextBlock::SetFontOutlineMaterial(UTextBlock *this,UMaterialInterface *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Font).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr = (UObject *)param_1;
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,&this->Font);
  SetFont(this,pFVar1);
  return;
}

// SetMinDesiredWidth @ 146a17810

void __thiscall UTextBlock::SetMinDesiredWidth(UTextBlock *this,float param_1)

{
  STextBlock *this_00;
  TAttribute<float> local_28;
  
  this->MinDesiredWidth = param_1;
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    STextBlock::SetMinDesiredWidth(this_00,&local_28);
  }
  return;
}

// SetOpacity @ 146a183b0

void __thiscall UTextBlock::SetOpacity(UTextBlock *this,float param_1)

{
  STextBlock *this_00;
  FLinearColor *pFVar1;
  uint local_58;
  FLinearColor_u_0 local_50;
  uint local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((this->ColorAndOpacity).ColorUseRule == UseColor_ColorTable) {
    pFVar1 = FSlateColor::GetColorFromTable(&this->ColorAndOpacity);
    local_50._s_0.R = (pFVar1->field0_0x0)._s_0.R;
    local_50._s_0.G = (pFVar1->field0_0x0)._s_0.G;
    local_50._s_0.B = (pFVar1->field0_0x0)._s_0.B;
  }
  else {
    local_50._s_0.R = (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R;
    local_50._s_0.G = (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G;
    local_50._s_0.B = (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B;
  }
  this_00 = (this->MyTextBlock).Object;
  local_58 = local_58 & 0xffffff00;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R = local_50._s_0.R;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = local_50._s_0.G;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = local_50._s_0.B;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = param_1;
  (this->ColorAndOpacity).ColorUseRule = (undefined1)local_58;
  (this->ColorAndOpacity).ColorTableId = local_58._1_1_;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = local_58._2_2_;
  if (this_00 != (STextBlock *)0x0) {
    local_40 = local_58;
    local_3c = 1;
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_50._s_0.A = param_1;
    STextBlock::SetColorAndOpacity(this_00,(TAttribute<FSlateColor> *)&local_50._s_0);
  }
  return;
}

// SetShadowColorAndOpacity @ 146a1ad40

void __thiscall UTextBlock::SetShadowColorAndOpacity(UTextBlock *this,FLinearColor *param_1)

{
  STextBlock *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8) = local_38._8_8_;
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetShadowColorAndOpacity(this_00,(TAttribute<FLinearColor> *)&local_38._s_0);
  }
  return;
}

// SetShadowOffset @ 146a1ad90

void __thiscall UTextBlock::SetShadowOffset(UTextBlock *this,TVector2<double> *param_1)

{
  STextBlock *this_00;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->ShadowOffset).field0_0x0._s_0.X = local_38._s_0.X;
  (this->ShadowOffset).field0_0x0._s_0.Y = local_38._s_0.Y;
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetShadowOffset(this_00,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// SetStrikeBrush @ 146a1bae0

void __thiscall UTextBlock::SetStrikeBrush(UTextBlock *this,FSlateBrush *param_1)

{
  STextBlock *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TAttribute<FSlateBrush_const_*> local_38;
  
  FSlateBrush::operator=(&this->StrikeBrush,param_1);
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = &this->StrikeBrush;
    STextBlock::SetStrikeBrush(this_00,&local_38);
  }
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetText @ 146a1c2a0

void __thiscall UTextBlock::SetText(UTextBlock *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  STextBlock *this_00;
  TAttribute<FText> *pTVar3;
  undefined8 local_res8;
  FDestructionSentinel local_38 [2];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Text).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Text).Flags = param_1->Flags;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TextDelegate,
             (FWriteAccessScope *)local_38);
  local_res8 = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->TextDelegate).field_0x8,(FObjectPtr)&local_res8);
  local_res8 = 0;
  *(undefined8 *)&(this->TextDelegate).field_0x10 = 0;
  if (local_38[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38[0].Accessor,local_38);
  }
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    pTVar3 = (TAttribute<FText> *)(**(code **)(this->_padding_ + 0x370))(this,local_38);
    STextBlock::SetText(this_00,pTVar3);
  }
  (**(code **)(this->_padding_ + 0x360))(this);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetTextOverflowPolicy @ 146a1c6d0

void __thiscall UTextBlock::SetTextOverflowPolicy(UTextBlock *this,ETextOverflowPolicy param_1)

{
  this->TextOverflowPolicy = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a1c6d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))();
  return;
}

// SetTextTransformPolicy @ 146a1c910

void __thiscall UTextBlock::SetTextTransformPolicy(UTextBlock *this,ETextTransformPolicy param_1)

{
  STextBlock *this_00;
  TAttribute<ETextTransformPolicy> local_28;
  
  this->TextTransformPolicy = param_1;
  this_00 = (this->MyTextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    STextBlock::SetTransformPolicy(this_00,&local_28);
  }
  return;
}

// StaticRegisterNativesUTextBlock @ 146a1f120

void __cdecl UTextBlock::StaticRegisterNativesUTextBlock(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UTextBlock_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a26920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTextBlock::SynchronizeProperties(UTextBlock *this)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<FSlateColor> *pTVar5;
  TAttribute<FLinearColor> *pTVar6;
  FMRSWRecursiveAccessDetector *pFVar7;
  ETextOverflowPolicy local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  undefined1 local_3a0 [8];
  ForAnyElementType FStack_398;
  ulonglong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined1 local_370 [8];
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined1 local_344;
  undefined1 local_340 [24];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined1 local_310 [24];
  TAttribute<float> local_2f8;
  TAttribute<ETextTransformPolicy> local_2d8;
  ITextData *local_2b8;
  uint local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a0 [24];
  TAttribute<FSlateBrush_const_*> local_288;
  FDestructionSentinel local_260;
  FDestructionSentinel local_248;
  FDestructionSentinel local_230;
  FDestructionSentinel local_218;
  TVector2<double>_u_0 local_200;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  TAttribute<FText> local_1d0;
  FLinearColor_u_0 local_1a0;
  undefined4 local_190;
  undefined1 local_18c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_188;
  FReadAccessScope local_170;
  FReadAccessScope local_158;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  FLinearColor_u_0 local_e0;
  undefined1 local_d0;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> local_c8;
  TAttribute<FSlateFontInfo> local_b0;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  (**(code **)(this->_padding_ + 0x370))(this,&local_2b8);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ColorAndOpacityDelegate);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ColorAndOpacityDelegate,&local_170);
    local_res18.ComparisonIndex.Value = *(uint *)&(this->ColorAndOpacityDelegate).field_0x10;
    local_res18.Number = *(uint *)&(this->ColorAndOpacityDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ColorAndOpacityDelegate,(FWriteAccessScope *)&local_260);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ColorAndOpacityDelegate).field_0x8);
    if (local_260.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
    }
    pTVar5 = TAttribute<FSlateColor>::Create<UObject>
                       ((TAttribute<FSlateColor> *)local_140,pUVar4,&local_res18);
    local_358 = *(undefined8 *)&(pTVar5->Value).SpecifiedColor.field0_0x0;
    uStack_350 = *(undefined8 *)((longlong)&(pTVar5->Value).SpecifiedColor.field0_0x0 + 8);
    local_348._0_1_ = (pTVar5->Value).ColorUseRule;
    local_348._1_1_ = (pTVar5->Value).ColorTableId;
    local_348._2_2_ = *(undefined2 *)&(pTVar5->Value).field_0x12;
    local_344 = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_340,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
    if ((void *)local_128._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_128._8_8_);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)local_128;
  }
  else {
    local_348._0_1_ = (this->ColorAndOpacity).ColorUseRule;
    local_348._1_1_ = (this->ColorAndOpacity).ColorTableId;
    local_348._2_2_ = *(undefined2 *)&(this->ColorAndOpacity).field_0x12;
    local_358 = *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0;
    uStack_350 = *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
    local_390 = 0;
    local_3a0 = (undefined1  [8])0x0;
    FStack_398.Data = (FScriptContainerElement *)0x0;
    local_344 = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_340,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a0,
               (FWriteAccessScope *)&local_248);
    if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_398.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
      local_390 = local_390 & 0xffffffff00000000;
    }
    if (local_248.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
    }
    if (FStack_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_398.Data);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)local_3a0;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar7);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->ShadowColorAndOpacityDelegate);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ShadowColorAndOpacityDelegate,&local_158);
    local_res20.ComparisonIndex.Value = *(uint *)&(this->ShadowColorAndOpacityDelegate).field_0x10;
    local_res20.Number = *(uint *)&(this->ShadowColorAndOpacityDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_158);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ShadowColorAndOpacityDelegate,(FWriteAccessScope *)&local_230);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ShadowColorAndOpacityDelegate).field_0x8)
    ;
    if (local_230.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
    }
    pTVar6 = TAttribute<FLinearColor>::Create<UObject>
                       ((TAttribute<FLinearColor> *)local_110,pUVar4,&local_res20);
    local_328 = *(undefined8 *)&(pTVar6->Value).field0_0x0;
    uStack_320 = *(undefined8 *)((longlong)&(pTVar6->Value).field0_0x0 + 8);
    local_318 = pTVar6->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    if ((void *)local_f8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._8_8_);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  else {
    local_388 = *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0;
    uStack_380 = *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8);
    local_378 = 1;
    local_360 = 0;
    local_370 = (undefined1  [8])0x0;
    FStack_368.Data = (FScriptContainerElement *)0x0;
    local_318 = 1;
    local_328 = local_388;
    uStack_320 = uStack_380;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
               (FWriteAccessScope *)&local_218);
    if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_368.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
      local_360 = local_360 & 0xffffffff00000000;
    }
    if (local_218.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
    }
    if (FStack_368.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_368.Data);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)local_370;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar7);
  pSVar1 = (this->MyTextBlock).Object;
  if (pSVar1 != (STextBlock *)0x0) {
    local_1d0.Value.TextData.Reference = local_2b8;
    if (local_2b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8 + 8))(local_2b8,local_res10);
    }
    local_1d0.Value.Flags = local_2b0;
    local_1d0.bIsSet = (bool)local_2a8;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_1d0.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_2a0);
    STextBlock::SetText(pSVar1,&local_1d0);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MyTextBlock).Object;
    FSlateFontInfo::FSlateFontInfo(&local_b0.Value,&this->Font);
    local_b0.bIsSet = true;
    local_b0.Getter._16_8_ = 0;
    local_b0.Getter._0_8_ = 0;
    local_b0.Getter._8_8_ = 0;
    STextBlock::SetFont(pSVar1,&local_b0);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_288.Value = &this->StrikeBrush;
    local_288.bIsSet = true;
    local_288.Getter._16_8_ = 0;
    local_288.Getter._0_8_ = 0;
    local_288.Getter._8_8_ = 0;
    STextBlock::SetStrikeBrush((this->MyTextBlock).Object,&local_288);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MyTextBlock).Object;
    local_190 = local_348;
    local_1a0._0_8_ = local_358;
    local_1a0._8_8_ = uStack_350;
    local_18c = local_344;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_188,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_340);
    STextBlock::SetColorAndOpacity(pSVar1,(TAttribute<FSlateColor> *)&local_1a0._s_0);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_200._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X;
    local_200._s_0.Y = (this->ShadowOffset).field0_0x0._s_0.Y;
    local_1f0 = 1;
    local_1d8 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    STextBlock::SetShadowOffset
              ((this->MyTextBlock).Object,(TAttribute<UE::Math::TVector2<double>_> *)&local_200._s_0
              );
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MyTextBlock).Object;
    local_e0._0_8_ = local_328;
    local_e0._8_8_ = uStack_320;
    local_d0 = local_318;
    TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_c8,
               (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_310);
    STextBlock::SetShadowColorAndOpacity(pSVar1,(TAttribute<FLinearColor> *)&local_e0._s_0);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_2f8.Value = this->MinDesiredWidth;
    local_2f8.Getter._0_8_ = 0;
    local_2f8.Getter._8_8_ = 0;
    local_2f8.bIsSet = true;
    local_2f8.Getter._16_8_ = 0;
    STextBlock::SetMinDesiredWidth((this->MyTextBlock).Object,&local_2f8);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_2d8.Value = this->TextTransformPolicy;
    local_2d8.Getter._16_8_ = 0;
    local_2d8.bIsSet = true;
    local_2d8.Getter._0_8_ = 0;
    local_2d8.Getter._8_8_ = 0;
    STextBlock::SetTransformPolicy((this->MyTextBlock).Object,&local_2d8);
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res8[0] = this->TextOverflowPolicy;
    local_res8[1] = 1;
    STextBlock::SetOverflowPolicy((this->MyTextBlock).Object,SUB82(local_res8,0));
    if ((this->MyTextBlock).Object == (STextBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UTextLayoutWidget::SynchronizeTextLayoutProperties<STextBlock>
              ((UTextLayoutWidget *)this,(this->MyTextBlock).Object);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if ((void *)local_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_340);
  if ((void *)local_340._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_340._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_340);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a0);
  if ((void *)local_2a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  if (local_2b8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b8 + 0x10))();
  }
  return;
}

// execGetDynamicFontMaterial @ 146a34e00

void __cdecl UTextBlock::execGetDynamicFontMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FSlateFontInfo *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_88;
  FString local_78;
  FSlateFontInfo local_68;
  
  this = &param_1[0xe].field_0x8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)this == 0) {
    pUVar4 = (UMaterialInstanceDynamic *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if ((!bVar2) ||
       (pUVar4 = *(UMaterialInstanceDynamic **)this, pUVar4 == (UMaterialInstanceDynamic *)0x0)) {
      pFVar6 = GetTypeName<UMaterialInterface>(&local_88);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject>(&local_78,*(UObject **)this);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar4 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar4,param_1,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      *(UMaterialInstanceDynamic **)&param_1[0xe].field_0x8 = pUVar4;
      pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)(param_1 + 0xe));
      SetFont((UTextBlock *)param_1,pFVar5);
    }
  }
  *(UMaterialInstanceDynamic **)param_3 = pUVar4;
  return;
}

// execGetDynamicOutlineMaterial @ 146a35040

void __cdecl
UTextBlock::execGetDynamicOutlineMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FSlateFontInfo *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_88;
  FString local_78;
  FSlateFontInfo local_68;
  
  this = &param_1[0xe].field_0x18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)this == 0) {
    pUVar4 = (UMaterialInstanceDynamic *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if ((!bVar2) ||
       (pUVar4 = *(UMaterialInstanceDynamic **)this, pUVar4 == (UMaterialInstanceDynamic *)0x0)) {
      pFVar6 = GetTypeName<UMaterialInterface>(&local_88);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject>(&local_78,*(UObject **)this);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar4 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar4,param_1,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      *(UMaterialInstanceDynamic **)&param_1[0xe].field_0x18 = pUVar4;
      pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)(param_1 + 0xe));
      SetFont((UTextBlock *)param_1,pFVar5);
    }
  }
  *(UMaterialInstanceDynamic **)param_3 = pUVar4;
  return;
}

// execGetText @ 146a36520

void __cdecl UTextBlock::execGetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWidget *pSVar1;
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pSVar1 = *(SWidget **)&param_1[0x16].field_0x10;
  if (pSVar1 == (SWidget *)0x0) {
    local_18.TextData.Reference = *(ITextData **)&param_1[0xb].field_0x18;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)&param_1[0xb].field_0x20;
  }
  else {
    if ((pSVar1[2].Tag.Number & 1) != 0) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)(pSVar1 + 1),pSVar1,Member);
    }
    local_18.TextData.Reference = (ITextData *)pSVar1[1]._padding_;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = (uint)pSVar1[1]._padding_;
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetAutoWrapText @ 146a3a2e0

void __cdecl UTextBlock::execSetAutoWrapText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STextBlock *this;
  int local_res8 [2];
  TAttribute<bool> local_28;
  
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
  local_28.Value = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STextBlock **)&param_1[0x16].field_0x10;
  param_1[10].field_0x25 = param_1[10].field_0x25 & 0xfe;
  param_1[10].field_0x25 = param_1[10].field_0x25 | local_28.Value;
  if (this != (STextBlock *)0x0) {
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STextBlock::SetAutoWrapText(this,&local_28);
  }
  return;
}

// execSetColorAndOpacity @ 146a3b030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UTextBlock::execSetColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STextBlock *this;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  FLinearColor_u_0 local_40;
  uint local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_58 = ___xmm_3f8000003f800000000000003f800000;
  uStack_50 = _UNK_15090c6d8;
  local_48 = local_48 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(STextBlock **)&param_1[0x16].field_0x10;
  *(undefined8 *)&param_1[0xc].field_0x18 = local_58;
  *(undefined8 *)&param_1[0xc].field_0x20 = uStack_50;
  *(uint *)(param_1 + 0xd) = local_48;
  if (this != (STextBlock *)0x0) {
    local_30 = local_48;
    local_2c = 1;
    local_18 = 0;
    local_40._0_8_ = local_58;
    local_40._8_8_ = uStack_50;
    local_28 = 0;
    uStack_20 = 0;
    STextBlock::SetColorAndOpacity(this,(TAttribute<FSlateColor> *)&local_40._s_0);
  }
  return;
}

// execSetFont @ 146a3ca60

void __cdecl UTextBlock::execSetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateFontInfo *pFVar2;
  FSlateFontInfo local_c8;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSlateFontInfo::FSlateFontInfo(&local_68,&local_c8);
  SetFont((UTextBlock *)param_1,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execSetFontMaterial @ 146a3cc90

void __cdecl UTextBlock::execSetFontMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FSlateFontInfo *pFVar3;
  UObject *local_res8;
  FSlateFontInfo local_68;
  
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xe].field_0x8 = pUVar2;
  pFVar3 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)(param_1 + 0xe));
  SetFont((UTextBlock *)param_1,pFVar3);
  return;
}

// execSetFontOutlineMaterial @ 146a3cee0

void __cdecl UTextBlock::execSetFontOutlineMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FSlateFontInfo *pFVar3;
  UObject *local_res8;
  FSlateFontInfo local_68;
  
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xe].field_0x18 = pUVar2;
  pFVar3 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)(param_1 + 0xe));
  SetFont((UTextBlock *)param_1,pFVar3);
  return;
}

// execSetMinDesiredWidth @ 146a3f6c0

void __cdecl UTextBlock::execSetMinDesiredWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STextBlock *this;
  float local_res8 [2];
  TAttribute<float> local_28;
  
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
  this = *(STextBlock **)&param_1[0x16].field_0x10;
  *(float *)&param_1[0xd].field_0x20 = local_res8[0];
  if (this != (STextBlock *)0x0) {
    local_28.Value = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STextBlock::SetMinDesiredWidth(this,&local_28);
  }
  return;
}

// execSetOpacity @ 146a40590

void __cdecl UTextBlock::execSetOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STextBlock *this;
  float fVar2;
  FLinearColor *pFVar3;
  float local_res8 [2];
  uint local_58;
  FLinearColor_u_0 local_50;
  uint local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
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
  fVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 0xd) == '\x01') {
    pFVar3 = FSlateColor::GetColorFromTable((FSlateColor *)&param_1[0xc].field_0x18);
    local_50._s_0.R = (pFVar3->field0_0x0)._s_0.R;
    local_50._s_0.G = (pFVar3->field0_0x0)._s_0.G;
    local_50._s_0.B = (pFVar3->field0_0x0)._s_0.B;
  }
  else {
    local_50._s_0.R = (float)*(undefined4 *)&param_1[0xc].field_0x18;
    local_50._s_0.G = (float)*(undefined4 *)&param_1[0xc].field_0x1c;
    local_50._s_0.B = (float)*(undefined4 *)&param_1[0xc].field_0x20;
  }
  this = *(STextBlock **)&param_1[0x16].field_0x10;
  local_58 = local_58 & 0xffffff00;
  *(undefined4 *)&param_1[0xc].field_0x18 = local_50._s_0.R;
  *(undefined4 *)&param_1[0xc].field_0x1c = local_50._s_0.G;
  *(undefined4 *)&param_1[0xc].field_0x20 = local_50._s_0.B;
  *(float *)&param_1[0xc].field_0x24 = fVar2;
  *(uint *)(param_1 + 0xd) = local_58;
  if (this != (STextBlock *)0x0) {
    local_40 = local_58;
    local_3c = 1;
    local_28 = 0;
    local_50._s_0.A = fVar2;
    local_38 = 0;
    uStack_30 = 0;
    STextBlock::SetColorAndOpacity(this,(TAttribute<FSlateColor> *)&local_50._s_0);
  }
  return;
}

// execSetShadowColorAndOpacity @ 146a42410

void __cdecl
UTextBlock::execSetShadowColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STextBlock *this;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
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
  this = *(STextBlock **)&param_1[0x16].field_0x10;
  *(undefined8 *)&param_1[0x15].field_0x8 = local_48;
  *(undefined8 *)&param_1[0x15].field_0x10 = uStack_40;
  if (this != (STextBlock *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_38._0_8_ = local_48;
    local_38._8_8_ = uStack_40;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetShadowColorAndOpacity(this,(TAttribute<FLinearColor> *)&local_38._s_0);
  }
  return;
}

// execSetShadowOffset @ 146a424c0

void __cdecl UTextBlock::execSetShadowOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STextBlock *this;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
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
  this = *(STextBlock **)&param_1[0x16].field_0x10;
  *(double *)&param_1[0x14].field_0x20 = local_48;
  *(double *)(param_1 + 0x15) = dStack_40;
  if (this != (STextBlock *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_38._s_0.X = local_48;
    local_38._s_0.Y = dStack_40;
    local_20 = 0;
    uStack_18 = 0;
    STextBlock::SetShadowOffset(this,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// execSetStrikeBrush @ 146a430e0

void __cdecl UTextBlock::execSetStrikeBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  FSlateBrush local_168;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_168);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FSlateBrush::FSlateBrush(&local_b8,&local_168);
  SetStrikeBrush((UTextBlock *)param_1,pFVar2);
  local_168._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetText @ 146a43560

void __cdecl UTextBlock::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 local_res8 [8];
  FText local_28;
  ITextData *local_18;
  uint local_10;
  
  FText::FText(&local_28);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_28.TextData.Reference;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x358);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_10 = local_28.Flags;
  (*pcVar2)(param_1,&local_18);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTextOverflowPolicy @ 146a438d0

void __cdecl UTextBlock::execSetTextOverflowPolicy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x16].field_0xa = local_res8[0];
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
  return;
}

// execSetTextTransformPolicy @ 146a43bf0

void __cdecl UTextBlock::execSetTextTransformPolicy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ETextTransformPolicy local_res8 [8];
  TAttribute<ETextTransformPolicy> local_28;
  
  local_res8[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x16].field_0x9 = local_res8[0];
  if (*(STextBlock **)&param_1[0x16].field_0x10 != (STextBlock *)0x0) {
    local_28.Value = local_res8[0];
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    STextBlock::SetTransformPolicy(*(STextBlock **)&param_1[0x16].field_0x10,&local_28);
  }
  return;
}

