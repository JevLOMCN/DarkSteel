// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 15

// ComputeDesiredSize @ 14d7e7c20

TVector2<double> * __thiscall
SAudioMeterWidget::ComputeDesiredSize
          (SAudioMeterWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *_Src;
  FAudioMeterWidgetStyle *pFVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  int iVar4;
  TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c [9];
  
  if (this->Style == (FAudioMeterWidgetStyle *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)SAudioMeterDesiredSize;
    return __return_storage_ptr__;
  }
  pTVar5 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                     (&this->MeterChannelInfoAttribute);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = pTVar5->ArrayNum;
  lVar6 = (longlong)local_30;
  _Src = (pTVar5->AllocatorInstance).Data;
  if (local_30 == 0) {
    local_2c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_30,0,&local_38,local_30,local_2c);
    memcpy(local_38.Data,_Src,lVar6 * 0xc);
  }
  pFVar1 = this->Style;
  iVar4 = 1;
  if (1 < local_30) {
    iVar4 = local_30;
  }
  dVar8 = (pFVar1->MeterPadding).field0_0x0._s_0.Y;
  dVar3 = (pFVar1->MeterPadding).field0_0x0._s_0.X + (pFVar1->MeterSize).field0_0x0._s_0.X;
  dVar8 = (double)iVar4 * (dVar8 + (pFVar1->MeterSize).field0_0x0._s_0.Y) + dVar8;
  if (pFVar1->bShowScale != false) {
    fVar7 = GetScaleHeight(this);
    dVar8 = dVar8 + (double)fVar7;
  }
  if (this->Orientation == Orient_Vertical) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  }
  else {
    TVar2._8_4_ = SUB84(dVar8,0);
    TVar2._s_0.X = dVar3;
    TVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar2;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// ComputeVolatility @ 14d7e7db0

bool __thiscall SAudioMeterWidget::ComputeVolatility(SAudioMeterWidget *this)

{
  return true;
}

// Construct @ 14d7e7dc0

void __thiscall SAudioMeterWidget::Construct(SAudioMeterWidget *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->_Style == (FAudioMeterWidgetStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgetsCore\\Private\\SAudioMeterWidget.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Orientation = param_1->_Orientation;
  TAttribute<FSlateColor>::operator=(&this->BackgroundColor,&param_1->_BackgroundColor);
  TAttribute<FSlateColor>::operator=(&this->MeterBackgroundColor,&param_1->_MeterBackgroundColor);
  TAttribute<FSlateColor>::operator=(&this->MeterValueColor,&param_1->_MeterValueColor);
  TAttribute<FSlateColor>::operator=(&this->MeterPeakColor,&param_1->_MeterPeakColor);
  TAttribute<FSlateColor>::operator=(&this->MeterScaleColor,&param_1->_MeterScaleColor);
  TAttribute<FSlateColor>::operator=(&this->MeterScaleLabelColor,&param_1->_MeterScaleLabelColor);
  TAttribute<FSlateColor>::operator=(&this->MeterClippingColor,&param_1->_MeterClippingColor);
  this->Style = param_1->_Style;
  TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->MeterChannelInfoAttribute,&param_1->_MeterChannelInfo);
  return;
}

// GetMeterChannelInfo @ 14d7e8120

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
SAudioMeterWidget::GetMeterChannelInfo
          (SAudioMeterWidget *this,
          TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                     (&this->MeterChannelInfoAttribute);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
  return __return_storage_ptr__;
}

// GetScaleHeight @ 14d7e83e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall SAudioMeterWidget::GetScaleHeight(SAudioMeterWidget *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FSlateApplication *pFVar7;
  FDeprecateSlateVector2D FVar8;
  float fVar9;
  float in_XMM3_Da;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TSharedRef<FSlateFontMeasure,1> local_48;
  TObjectPtr<UObject_const_>_u_0 local_38;
  undefined8 uStack_30;
  
  pFVar7 = FSlateApplication::Get();
  lVar4 = *(longlong *)&pFVar7->field_0x60;
  if (*(longlong *)(lVar4 + 8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar4 + 8),&local_48);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_68,-0x3c);
  local_58 = local_68.Data.AllocatorInstance.Data;
  iStack_50 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iStack_50 = 0;
  }
  uStack_30 = CONCAT44(uStack_4c,iStack_50);
  local_38.DebugPtr = (UObject *)local_68.Data.AllocatorInstance.Data;
  FVar8 = FSlateFontMeasure::Measure
                    (local_48.Object,(TStringView<wchar_t> *)&stack0x00000008,
                     (FSlateFontInfo *)&local_38.ObjectPtr,in_XMM3_Da);
  fVar9 = *(float *)FVar8;
  fVar1 = *(float *)((longlong)FVar8 + 4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  fVar2 = this->Style->ScaleHashHeight;
  fVar3 = this->Style->ScaleHashOffset;
  if (this->Orientation != Orient_Vertical) {
    fVar9 = fVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return fVar9 + fVar2 + fVar3;
}

// OnPaint @ 14d7e8780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SAudioMeterWidget::OnPaint
          (SAudioMeterWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TAttribute<FSlateColor> *pTVar1;
  double dVar2;
  double dVar3;
  ESlateColorStylingMode EVar4;
  FAudioMeterWidgetStyle *pFVar5;
  FScriptContainerElement *_Src;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  FName FVar14;
  FName FVar15;
  float afVar16 [2];
  float afVar17 [2];
  FSlateFontMeasure *this_00;
  undefined8 uVar18;
  TVector2<float>_u_0 TVar19;
  float fVar20;
  bool bVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  FGeometry *pFVar26;
  FLinearColor *pFVar27;
  FSlateColor *pFVar28;
  TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar29;
  TAttribute<FSlateColor> *pTVar30;
  FSlateApplication *pFVar31;
  FDeprecateSlateVector2D FVar32;
  TAttribute<FSlateColor> *pTVar33;
  FString *pFVar34;
  FLinearColor_u_0 *pFVar35;
  longlong *plVar36;
  byte bVar37;
  longlong lVar38;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TVector2<float>_u_0 *pTVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  SAudioMeterWidget *pSVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  ulonglong uVar50;
  double dVar51;
  float fVar52;
  undefined1 auStackY_978 [32];
  undefined8 local_938;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  int local_908;
  float local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  float local_8e8;
  float fStack_8e4;
  ForAnyElementType local_8d0;
  int local_8c8;
  int local_8c4;
  float local_8c0;
  float fStack_8bc;
  float local_8b8;
  float fStack_8b4;
  SAudioMeterWidget *local_8b0;
  float local_8a8;
  float fStack_8a4;
  FDeprecateSlateVector2D local_8a0;
  FString local_898;
  FString local_888;
  FString local_878;
  FName local_868;
  float afStack_860 [2];
  TSharedRef<FSlateFontMeasure,1> local_858;
  FSlateLayoutTransform local_848;
  FLinearColor_u_0 local_83c;
  FLinearColor_u_0 local_82c;
  FLinearColor_u_0 local_81c;
  FLinearColor_u_0 local_80c;
  FLinearColor_u_0 local_7fc;
  FLinearColor_u_0 local_7ec;
  FLinearColor_u_0 local_7dc;
  undefined8 local_7c8;
  undefined8 local_7bc;
  undefined8 local_7b0;
  undefined8 local_7a4;
  undefined8 local_798;
  undefined8 local_78c;
  undefined8 local_780;
  undefined8 local_774;
  FText local_768;
  undefined8 local_758;
  float local_750;
  float fStack_74c;
  float local_748;
  TVector2<float>_u_0 local_744;
  TTransform2<float> local_73c;
  byte local_724;
  FScriptContainerElement *local_718;
  int iStack_710;
  undefined4 uStack_70c;
  FScriptContainerElement *local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  wchar_t *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  FScriptContainerElement *local_6e8;
  int iStack_6e0;
  undefined4 uStack_6dc;
  TTransform2<float> local_6d8;
  TTransform2<float> local_6c0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined8 local_694;
  undefined8 uStack_68c;
  undefined4 local_684;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined4 local_670;
  undefined8 local_66c;
  undefined8 uStack_664;
  undefined4 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined8 local_644;
  undefined8 uStack_63c;
  undefined4 local_634;
  undefined1 local_630 [16];
  undefined1 local_620 [8];
  undefined1 local_618 [16];
  undefined1 local_608 [24];
  TTransform2<float> local_5f0;
  undefined1 local_5d8 [8];
  TTransform2<float> local_5d0;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  undefined1 local_588 [24];
  TTransform2<float> local_570;
  TTransform2<float> local_558;
  TTransform2<float> local_540;
  TTransform2<float> local_528;
  TTransform2<float> local_510;
  TTransform2<float> local_4f8;
  TTransform2<float> local_4e0;
  TTransform2<float> local_4c8;
  TTransform2<float> local_4b0;
  undefined8 local_488;
  undefined8 local_470;
  TTransform2<float> local_468;
  TTransform2<float> local_450;
  FReadAccessScope local_438;
  FReadAccessScope local_420;
  FReadAccessScope local_408;
  FReadAccessScope local_3f0;
  FReadAccessScope local_3d8;
  FReadAccessScope local_3c0;
  TTransform2<float> local_3a8;
  FReadAccessScope local_390;
  FReadAccessScope local_378;
  FReadAccessScope local_360;
  FReadAccessScope local_348;
  FReadAccessScope local_330;
  FLinearColor local_318;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  TVector2<float>_u_0 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  undefined4 uStack_2c4;
  undefined1 auStack_2c0 [8];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  TVector2<float>_u_0 local_2a0;
  float local_298;
  undefined8 local_294;
  undefined8 local_28c;
  float local_284 [2];
  FName FStack_27c;
  TVector2<float>_u_0 local_274;
  byte local_26c;
  TVector2<float>_u_0 local_268;
  float local_260;
  undefined8 local_25c;
  undefined8 local_254;
  float local_24c [2];
  float afStack_244 [2];
  TVector2<float>_u_0 local_23c;
  byte local_234;
  TVector2<float>_u_0 local_230;
  float local_228;
  undefined8 local_224;
  undefined8 local_21c;
  float local_214 [2];
  float afStack_20c [2];
  TVector2<float>_u_0 local_204;
  byte local_1fc;
  TVector2<float>_u_0 local_1f8;
  float local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  float local_1dc [2];
  float afStack_1d4 [2];
  TVector2<float>_u_0 local_1cc;
  byte local_1c4;
  TVector2<float>_u_0 local_1c0;
  float local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  float local_1a4 [2];
  float afStack_19c [2];
  TVector2<float>_u_0 local_194;
  byte local_18c;
  TVector2<float>_u_0 local_188;
  float local_180;
  undefined8 local_17c;
  undefined8 local_174;
  float local_16c [2];
  TObjectPtr<UObject>_u_0 TStack_164;
  undefined8 local_15c;
  byte local_154;
  TVector2<float>_u_0 local_150;
  float local_148;
  undefined8 local_144;
  TVector2<float>_u_0 local_13c;
  float local_134 [2];
  float afStack_12c [2];
  TVector2<float>_u_0 local_124;
  byte local_11c;
  FGeometry local_118;
  ulonglong local_e0;
  
  fVar46 = __real_3f800000;
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_978;
  FVar32 = param_2->Size;
  local_8e8 = FVar32._0_4_;
  fStack_8e4 = FVar32._4_4_;
  fVar45 = local_8e8;
  if (this->Orientation == Orient_Horizontal) {
    fVar45 = fStack_8e4;
    fStack_8e4 = local_8e8;
    FVar32 = local_8a0;
  }
  local_8a0 = FVar32;
  local_2d8._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
  uVar13 = *(undefined8 *)&(param_2->AbsolutePosition).field0_0x0._s_0.Y;
  auStack_2c0 = *(undefined1 (*) [8])((longlong)&(param_2->Position).field0_0x0 + 4);
  fStack_2d0 = (float)*(undefined8 *)&param_2->Scale;
  fStack_2cc = (float)((ulonglong)*(undefined8 *)&param_2->Scale >> 0x20);
  local_2b8 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
  uStack_2b0 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
  fStack_2c8 = (float)uVar13;
  uStack_2c4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_2a8 = *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
  ;
  local_8b0 = this;
  if (this->Orientation == Orient_Vertical) {
    local_6d8.M.M[0] = ___xmm_b33bbd2e3f800000bf800000b33bbd2e;
    local_6d8.M.M[1] = _UNK_150971c68;
    local_848._0_8_ = 0x3f800000;
    local_848.Translation.field0_0x0._s_0.Y = 0.0;
    local_6d8.Trans.field0_0x0._s_0.X = (float)((double)fStack_8e4 * ___real_3e6777a5c0000000);
    local_8c0 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    fStack_8bc = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    local_8b8 = fStack_8e4;
    fStack_8b4 = fVar45;
    local_6d8.Trans.field0_0x0._s_0.Y = fStack_8e4;
    pFVar26 = FGeometry::MakeChild
                        (param_2,&local_118,(FDeprecateVector2DParameter *)&local_8b8,&local_848,
                         &local_6d8,(FDeprecateVector2DParameter *)&local_8c0);
    FGeometry::operator=((FGeometry *)&local_2d8._s_0,pFVar26);
  }
  pFVar5 = this->Style;
  local_908 = (int)(pFVar5->ValueRangeDb).field0_0x0._s_0.Y;
  iVar23 = (int)(pFVar5->ValueRangeDb).field0_0x0._s_0.X;
  iVar40 = local_908;
  if (iVar23 < local_908) {
    iVar40 = iVar23;
  }
  local_908 = local_908 - local_908 % pFVar5->DecibelsPerHash;
  iVar40 = iVar40 - iVar40 % pFVar5->DecibelsPerHash;
  local_8a8 = (float)(local_908 - iVar40);
  pFVar27 = FSlateBrush::GetTint(&pFVar5->BackgroundImage,&local_318,param_6);
  pFVar28 = TAttribute<FSlateColor>::Get(&this->BackgroundColor);
  EVar4 = pFVar28->ColorUseRule;
  if (EVar4 != UseColor_Specified) {
    if (EVar4 == UseColor_ColorTable) {
      pFVar28 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar28);
    }
    else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
      pFVar28 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar28 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar52 = fStack_2d0;
  afVar16 = _UNK_15076b188;
  FVar14 = ___xmm_3f80000000000000000000003f800000;
  pFVar5 = this->Style;
  local_83c._s_0.R =
       (pFVar28->SpecifiedColor).field0_0x0._s_0.R * (pFVar27->field0_0x0)._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  bVar37 = local_2a8._4_1_ & 1;
  local_780 = CONCAT44(fStack_2c8,fStack_2cc);
  local_83c._s_0.G =
       (pFVar27->field0_0x0)._s_0.G * (pFVar28->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_83c._s_0.B =
       (pFVar27->field0_0x0)._s_0.B * (pFVar28->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_83c._s_0.A =
       (pFVar27->field0_0x0)._s_0.A * (pFVar28->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  uVar50 = (ulonglong)(uint)local_83c._s_0.A;
  local_588._16_8_ = (TVector2<float>_u_0)0x0;
  fVar44 = fStack_2d0 * 0.0 + fStack_2cc;
  local_928 = (TVector2<float>_u_0)CONCAT44(fVar45,fStack_8e4);
  local_868 = ___xmm_3f80000000000000000000003f800000;
  afStack_860[0] = _UNK_15076b188;
  afStack_860[1] = _UNK_15076b18c;
  local_588._0_4_ = ___xmm_3f80000000000000000000003f800000;
  local_588._4_4_ = _UNK_15076b184;
  local_588._8_4_ = _UNK_15076b188;
  local_588._12_4_ = _UNK_15076b18c;
  fVar45 = fStack_2d0 * 0.0 + fStack_2c8;
  Concatenate<TTransform2<float>_>
            (&local_570,(TTransform2<float> *)local_588,(TTransform2<float> *)(auStack_2c0 + 4));
  local_2a0._s_0.Y = fVar45;
  local_2a0._s_0.X = fVar44;
  local_28c = local_928;
  local_298 = fVar52;
  local_26c = bVar37 * '\x02' | local_26c & 0xfc;
  local_294 = 0;
  local_274 = local_570.Trans.field0_0x0;
  local_284[0] = local_570.M.M[0][0];
  local_284[1] = local_570.M.M[0][1];
  FStack_27c.ComparisonIndex.Value = (uint)local_570.M.M[1][0];
  FStack_27c.Number = (uint)local_570.M.M[1][1];
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_2a0._s_0,&pFVar5->MeterBackgroundImage,None,
             (FLinearColor *)&local_83c._s_0);
  local_900 = 0.0;
  if ((this->Style->bShowScale != false) && (this->Style->bScaleSide != false)) {
    local_900 = GetScaleHeight(this);
  }
  pTVar29 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                      (&this->MeterChannelInfoAttribute);
  local_8d0.Data = (FScriptContainerElement *)0x0;
  local_8c8 = pTVar29->ArrayNum;
  lVar38 = (longlong)local_8c8;
  _Src = (pTVar29->AllocatorInstance).Data;
  if (local_8c8 == 0) {
    local_8c4 = 0;
    iVar23 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_8c8,0,&local_8d0,local_8c8,&local_8c4);
    memcpy(local_8d0.Data,_Src,lVar38 * 0xc);
    iVar23 = local_8c8;
  }
  fVar45 = (float)uVar50;
  iVar41 = 0;
  iVar25 = iVar23;
  if (0 < iVar23) {
    pTVar1 = &this->MeterBackgroundColor;
    do {
      pFVar5 = this->Style;
      pFVar28 = &(pFVar5->MeterBackgroundImage).TintColor;
      EVar4 = (pFVar5->MeterBackgroundImage).TintColor.ColorUseRule;
      dVar2 = (pFVar5->MeterPadding).field0_0x0._s_0.Y;
      dVar3 = (pFVar5->MeterPadding).field0_0x0._s_0.X;
      dVar51 = (pFVar5->MeterSize).field0_0x0._s_0.Y;
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          pFVar28 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar28);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          pFVar28 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar28 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      fVar45 = (pFVar28->SpecifiedColor).field0_0x0._s_0.R;
      fVar52 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 4);
      fVar44 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 8);
      fVar48 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 0xc);
      local_308 = fVar45;
      fStack_304 = fVar52;
      fStack_300 = fVar44;
      fStack_2fc = fVar48;
      bVar21 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                          &(this->MeterBackgroundColor).Getter);
      if (bVar21) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->MeterBackgroundColor).Getter,&local_330);
        if (*(int *)&(this->MeterBackgroundColor).Getter.field_0x10 == 0) {
          plVar36 = (longlong *)0x0;
        }
        else {
          plVar36 = *(longlong **)&(this->MeterBackgroundColor).Getter.field_0x8;
        }
        (**(code **)(*plVar36 + 0x60))(plVar36,&local_658);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_330);
        *(undefined8 *)&(pTVar1->Value).SpecifiedColor.field0_0x0 = local_658;
        *(undefined8 *)((longlong)&(this->MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
             = uStack_650;
        (this->MeterBackgroundColor).Value.ColorUseRule = (undefined1)local_648;
        (this->MeterBackgroundColor).Value.ColorTableId = local_648._1_1_;
        *(undefined2 *)&(this->MeterBackgroundColor).Value.field_0x12 = local_648._2_2_;
      }
      EVar4 = (this->MeterBackgroundColor).Value.ColorUseRule;
      pTVar30 = pTVar1;
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          pTVar30 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&pTVar1->Value);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          pTVar30 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
        }
        else {
          pTVar30 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
        }
      }
      fVar49 = fStack_2d0;
      afVar17 = _UNK_15076b188;
      FVar15 = ___xmm_3f80000000000000000000003f800000;
      pFVar5 = this->Style;
      bVar37 = local_2a8._4_1_ & 1;
      local_82c._s_0.A =
           fVar48 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).A *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_82c._s_0.B =
           fVar44 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).B *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      local_774 = CONCAT44(fStack_2c8,fStack_2cc);
      local_82c._s_0.G =
           fVar52 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).G *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      local_82c._s_0.R =
           fVar45 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).R *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      local_928._4_4_ = (undefined4)((dVar51 + dVar2) * (double)iVar41 + (double)local_900 + dVar2);
      local_928._0_4_ = (float)dVar3;
      local_558.Trans.field0_0x0 = local_928;
      ___xmm_3f80000000000000000000003f800000 = FVar14.ComparisonIndex.Value;
      _UNK_15076b184 = FVar14.Number;
      local_558.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
      local_558.M.M[0][1] = (float)_UNK_15076b184;
      _UNK_15076b188 = afVar16[0];
      _UNK_15076b18c = afVar16[1];
      local_558.M.M[1][0] = _UNK_15076b188;
      local_558.M.M[1][1] = _UNK_15076b18c;
      local_918._4_4_ = (float)local_928._4_4_ * fStack_2d0 + fStack_2c8;
      local_918._0_4_ = (float)dVar3 * fStack_2d0 + fStack_2cc;
      ___xmm_3f80000000000000000000003f800000 = FVar15;
      _UNK_15076b188 = afVar17;
      Concatenate<TTransform2<float>_>
                (&local_540,&local_558,(TTransform2<float> *)(auStack_2c0 + 4));
      local_268 = local_918;
      local_254 = CONCAT44((float)dVar51,(float)((double)fStack_8e4 - (dVar3 + dVar3)));
      local_260 = fVar49;
      local_234 = bVar37 * '\x02' | local_234 & 0xfc;
      local_25c = 0;
      local_23c = local_540.Trans.field0_0x0;
      local_24c[0] = local_540.M.M[0][0];
      local_24c[1] = local_540.M.M[0][1];
      afStack_244[0] = local_540.M.M[1][0];
      afStack_244[1] = local_540.M.M[1][1];
      FSlateDrawElement::MakeBox
                (param_4,param_5 + 1,(FPaintGeometry *)&local_268._s_0,&pFVar5->MeterBackgroundImage
                 ,None,(FLinearColor *)&local_82c._s_0);
      fVar45 = (float)uVar50;
      iVar41 = iVar41 + 1;
      iVar25 = local_8c8;
    } while (iVar41 < iVar23);
  }
  fVar52 = __real_3f800000;
  local_8f0 = (TVector2<float>_u_0)(longlong)iVar23;
  uVar42 = 0;
  if (0 < (longlong)local_8f0) {
    pTVar1 = &this->MeterValueColor;
    local_8f8 = (TVector2<float>_u_0)0x0;
    local_938 = local_8f0;
    do {
      uVar24 = 0;
      if ((int)uVar42 < iVar25) {
        uVar24 = ~uVar42 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        iVar40 = (*pcVar7)();
        return iVar40;
      }
      pFVar5 = this->Style;
      pFVar28 = &(pFVar5->MeterValueImage).TintColor;
      EVar4 = (pFVar5->MeterValueImage).TintColor.ColorUseRule;
      fVar45 = pFVar5->MeterValuePadding;
      dVar2 = (pFVar5->MeterSize).field0_0x0._s_0.Y;
      dVar3 = (pFVar5->MeterPadding).field0_0x0._s_0.Y;
      dVar51 = (pFVar5->MeterPadding).field0_0x0._s_0.X;
      fVar44 = (*(float *)(local_8d0.Data + (longlong)local_8f8) - (float)iVar40) *
               (fVar46 / (float)(local_908 - iVar40));
      if (fVar52 <= fVar44) {
        fVar44 = fVar52;
      }
      if (fVar44 <= __real_00000000) {
        fVar44 = __real_00000000;
      }
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          pFVar28 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar28);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          pFVar28 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar28 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      fVar48 = (pFVar28->SpecifiedColor).field0_0x0._s_0.R;
      fVar49 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 4);
      fVar9 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 8);
      fVar10 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 0xc);
      local_2e8 = fVar48;
      fStack_2e4 = fVar49;
      fStack_2e0 = fVar9;
      fStack_2dc = fVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->MeterValueColor).Getter,&local_438);
      if (((*(int *)&(this->MeterValueColor).Getter.field_0x10 == 0) ||
          (plVar36 = *(longlong **)&(this->MeterValueColor).Getter.field_0x8,
          plVar36 == (longlong *)0x0)) ||
         (cVar22 = (**(code **)(*plVar36 + 0x38))(), cVar22 == '\0')) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_438);
      if (bVar21) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->MeterValueColor).Getter,&local_420);
        if (*(int *)&(this->MeterValueColor).Getter.field_0x10 == 0) {
          plVar36 = (longlong *)0x0;
        }
        else {
          plVar36 = *(longlong **)&(this->MeterValueColor).Getter.field_0x8;
        }
        (**(code **)(*plVar36 + 0x60))(plVar36,&local_644);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_420);
        *(undefined8 *)&(pTVar1->Value).SpecifiedColor.field0_0x0 = local_644;
        *(undefined8 *)((longlong)&(this->MeterValueColor).Value.SpecifiedColor.field0_0x0 + 8) =
             uStack_63c;
        (this->MeterValueColor).Value.ColorUseRule = (undefined1)local_634;
        (this->MeterValueColor).Value.ColorTableId = local_634._1_1_;
        *(undefined2 *)&(this->MeterValueColor).Value.field_0x12 = local_634._2_2_;
      }
      EVar4 = (this->MeterValueColor).Value.ColorUseRule;
      pTVar30 = pTVar1;
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          pTVar30 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&pTVar1->Value);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          pTVar30 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
        }
        else {
          pTVar30 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
        }
      }
      fVar11 = fStack_2d0;
      pFVar5 = this->Style;
      bVar37 = local_2a8._4_1_ & 1;
      local_81c._s_0.A =
           fVar10 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).A *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_81c._s_0.B =
           fVar9 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).B *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      local_7c8 = CONCAT44(fStack_2c8,fStack_2cc);
      local_81c._s_0.G =
           fVar49 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).G *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      local_81c._s_0.R =
           fVar48 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).R *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      fVar48 = (float)((dVar2 + dVar3) * (double)(int)uVar42 + (double)fVar45 +
                      (double)local_900 + dVar3);
      local_528.Trans.field0_0x0._s_0.Y = fVar48;
      local_528.Trans.field0_0x0._s_0.X = (float)dVar51;
      local_928 = (TVector2<float>_u_0)
                  CONCAT44((float)(dVar2 - (double)(fVar45 + fVar45)),
                           (float)(((double)fStack_8e4 - (dVar51 + dVar51)) * (double)fVar44));
      local_920._4_4_ = fVar48 * fStack_2d0 + fStack_2c8;
      local_920._0_4_ = (float)dVar51 * fStack_2d0 + fStack_2cc;
      local_528.M.M[0][0] = (float)local_868.ComparisonIndex.Value;
      local_528.M.M[0][1] = (float)local_868.Number;
      local_528.M.M[1][0] = afStack_860[0];
      local_528.M.M[1][1] = afStack_860[1];
      Concatenate<TTransform2<float>_>
                (&local_510,&local_528,(TTransform2<float> *)(auStack_2c0 + 4));
      local_230 = local_920;
      local_21c = local_928;
      local_228 = fVar11;
      local_1fc = bVar37 * '\x02' | local_1fc & 0xfc;
      local_224 = 0;
      local_204 = local_510.Trans.field0_0x0;
      local_214[0] = local_510.M.M[0][0];
      local_214[1] = local_510.M.M[0][1];
      afStack_20c[0] = local_510.M.M[1][0];
      afStack_20c[1] = local_510.M.M[1][1];
      FSlateDrawElement::MakeBox
                (param_4,param_5 + 2,(FPaintGeometry *)&local_230._s_0,&pFVar5->MeterValueImage,None
                 ,(FLinearColor *)&local_81c._s_0);
      fVar44 = __real_3f000000;
      uVar42 = uVar42 + 1;
      local_8f8 = local_8f8 + 0xc;
      local_938 = local_938 + -1;
      iVar25 = local_8c8;
    } while (local_938 != (TVector2<float>_u_0)0x0);
    pTVar1 = &this->MeterPeakColor;
    uVar42 = 0;
    fVar52 = __real_3f800000 / local_8a8;
    local_920 = (TVector2<float>_u_0)0x0;
    do {
      fVar45 = __real_3f800000;
      plVar36 = (longlong *)0x0;
      uVar24 = 0;
      if ((int)uVar42 < local_8c8) {
        uVar24 = ~uVar42 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        iVar40 = (*pcVar7)();
        return iVar40;
      }
      pFVar5 = this->Style;
      dVar2 = (pFVar5->MeterPadding).field0_0x0._s_0.X;
      pFVar28 = &(pFVar5->MeterPeakImage).TintColor;
      fVar46 = pFVar5->PeakValueWidth;
      dVar3 = (pFVar5->MeterSize).field0_0x0._s_0.Y;
      EVar4 = (pFVar5->MeterPeakImage).TintColor.ColorUseRule;
      fVar48 = (*(float *)(local_8d0.Data + (longlong)local_920 + 4) - (float)iVar40) * fVar52;
      if (fVar45 <= fVar48) {
        fVar48 = fVar45;
      }
      if (fVar48 <= __real_00000000) {
        fVar48 = __real_00000000;
      }
      dVar51 = (pFVar5->MeterPadding).field0_0x0._s_0.Y;
      fVar49 = pFVar5->MeterValuePadding;
      fVar45 = fVar49 + fVar49;
      dVar47 = (double)fVar45;
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          pFVar28 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar28);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          pFVar28 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar28 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      fVar9 = (pFVar28->SpecifiedColor).field0_0x0._s_0.R;
      fVar10 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 4);
      fVar11 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 8);
      fVar12 = *(float *)((longlong)&(pFVar28->SpecifiedColor).field0_0x0 + 0xc);
      local_2f8 = fVar9;
      fStack_2f4 = fVar10;
      fStack_2f0 = fVar11;
      fStack_2ec = fVar12;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->MeterPeakColor).Getter,&local_408);
      if (((*(int *)&(this->MeterPeakColor).Getter.field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(this->MeterPeakColor).Getter.field_0x8,
          plVar6 == (longlong *)0x0)) || (cVar22 = (**(code **)(*plVar6 + 0x38))(), cVar22 == '\0'))
      {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_408);
      if (bVar21) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->MeterPeakColor).Getter,&local_3f0);
        if (*(int *)&(this->MeterPeakColor).Getter.field_0x10 != 0) {
          plVar36 = *(longlong **)&(this->MeterPeakColor).Getter.field_0x8;
        }
        (**(code **)(*plVar36 + 0x60))(plVar36,&local_694);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_3f0);
        *(undefined8 *)&(pTVar1->Value).SpecifiedColor.field0_0x0 = local_694;
        *(undefined8 *)((longlong)&(this->MeterPeakColor).Value.SpecifiedColor.field0_0x0 + 8) =
             uStack_68c;
        (this->MeterPeakColor).Value.ColorUseRule = (undefined1)local_684;
        (this->MeterPeakColor).Value.ColorTableId = local_684._1_1_;
        *(undefined2 *)&(this->MeterPeakColor).Value.field_0x12 = local_684._2_2_;
      }
      EVar4 = (this->MeterPeakColor).Value.ColorUseRule;
      pTVar30 = pTVar1;
      if (EVar4 != UseColor_Specified) {
        if (EVar4 == UseColor_ColorTable) {
          pTVar30 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&pTVar1->Value);
        }
        else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
          pTVar30 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
        }
        else {
          pTVar30 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
        }
      }
      fVar20 = fStack_2d0;
      pFVar5 = this->Style;
      bVar37 = local_2a8._4_1_ & 1;
      local_80c._s_0.A =
           fVar12 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).A *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_80c._s_0.B =
           fVar11 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).B *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      local_7bc = CONCAT44(fStack_2c8,fStack_2cc);
      local_80c._s_0.G =
           fVar10 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).G *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      local_80c._s_0.R =
           fVar9 * (((FLinearColor_u_0 *)&pTVar30->Value)->_s_0).R *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      local_938._0_4_ =
           (undefined4)
           (((double)(float)(((double)fStack_8e4 - (dVar2 + dVar2)) * (double)fVar48) + dVar2) -
           (double)(fVar46 * fVar44));
      local_938._4_4_ =
           (undefined4)
           ((dVar3 + dVar51) * (double)(int)uVar42 + (double)fVar49 + dVar51 + (double)local_900);
      local_4f8.Trans.field0_0x0 = local_938;
      fVar48 = (float)(undefined4)local_938 * fStack_2d0 + fStack_2cc;
      local_918 = (TVector2<float>_u_0)CONCAT44((float)(dVar3 - dVar47),fVar46);
      fVar46 = (float)local_938._4_4_ * fStack_2d0 + fStack_2c8;
      local_4f8.M.M[0][0] = (float)local_868.ComparisonIndex.Value;
      local_4f8.M.M[0][1] = (float)local_868.Number;
      local_4f8.M.M[1][0] = afStack_860[0];
      local_4f8.M.M[1][1] = afStack_860[1];
      Concatenate<TTransform2<float>_>
                (&local_4e0,&local_4f8,(TTransform2<float> *)(auStack_2c0 + 4));
      local_1f8._s_0.Y = fVar46;
      local_1f8._s_0.X = fVar48;
      local_1e4 = local_918;
      local_1f0 = fVar20;
      local_1c4 = bVar37 * '\x02' | local_1c4 & 0xfc;
      local_1ec = 0;
      local_1cc = local_4e0.Trans.field0_0x0;
      local_1dc[0] = local_4e0.M.M[0][0];
      local_1dc[1] = local_4e0.M.M[0][1];
      afStack_1d4[0] = local_4e0.M.M[1][0];
      afStack_1d4[1] = local_4e0.M.M[1][1];
      FSlateDrawElement::MakeBox
                (param_4,param_5 + 3,(FPaintGeometry *)&local_1f8._s_0,&pFVar5->MeterPeakImage,None,
                 (FLinearColor *)&local_80c._s_0);
      uVar42 = uVar42 + 1;
      local_920 = local_920 + 0xc;
      local_8f0 = local_8f0 + -1;
      fVar46 = __real_3f800000;
    } while (local_8f0 != (TVector2<float>_u_0)0x0);
  }
  pFVar5 = this->Style;
  uVar42 = param_5 + 4;
  if (pFVar5->bShowScale != false) {
    uVar13._0_4_ = pFVar5->ScaleHashWidth;
    uVar13._4_4_ = pFVar5->ScaleHashHeight;
    fVar52 = pFVar5->ScaleHashWidth * __real_3f000000;
    pFVar31 = FSlateApplication::Get();
    lVar38 = *(longlong *)&pFVar31->field_0x60;
    if ((*(longlong *)(lVar38 + 8) == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      iVar40 = (*pcVar7)();
      return iVar40;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar38 + 8),&local_858);
    this_00 = local_858.Object;
    local_878.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_878.Data.ArrayNum = 0;
    local_878.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_878,iVar40);
    local_6e8 = local_878.Data.AllocatorInstance.Data;
    iStack_6e0 = local_878.Data.ArrayNum + -1;
    if (local_878.Data.ArrayNum == 0) {
      iStack_6e0 = 0;
    }
    local_618._12_4_ = uStack_6dc;
    local_618._8_4_ = iStack_6e0;
    local_618._0_8_ = local_878.Data.AllocatorInstance.Data;
    FVar32 = FSlateFontMeasure::Measure
                       (this_00,(TStringView<wchar_t> *)local_5d8,(FSlateFontInfo *)local_618,fVar45
                       );
    fVar44 = *(float *)FVar32;
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
    uVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    if (this->Orientation == Orient_Horizontal) {
      local_6f8 = L"-";
      uStack_6f0 = 1;
      local_5b8._12_4_ = uStack_6ec;
      local_5b8._8_4_ = 1;
      local_5b8._0_8_ = L"-";
      FVar32 = FSlateFontMeasure::Measure
                         (local_858.Object,(TStringView<wchar_t> *)local_630,
                          (FSlateFontInfo *)local_5b8,fVar45);
      uVar8 = (undefined8)*(float *)FVar32;
    }
    dVar3 = __real_4000000000000000;
    dVar2 = __real_3fe0000000000000;
    iVar25 = local_908 - iVar40;
    if (iVar40 <= local_908) {
      pTVar1 = &this->MeterScaleLabelColor;
      pTVar30 = &this->MeterScaleColor;
      pSVar43 = this;
      do {
        this_01 = &(this->MeterScaleColor).Getter;
        pFVar5 = pSVar43->Style;
        dVar51 = (pFVar5->MeterPadding).field0_0x0._s_0.X;
        fVar45 = ((float)local_908 - (float)iVar40) * (fVar46 / (float)iVar25);
        if (__real_3f800000 <= fVar45) {
          fVar45 = __real_3f800000;
        }
        if (fVar45 <= __real_00000000) {
          fVar45 = __real_00000000;
        }
        dVar47 = (pFVar5->MeterPadding).field0_0x0._s_0.Y;
        fVar45 = (float)(((double)fStack_8e4 - (dVar51 + dVar51)) * (double)fVar45);
        if (pFVar5->bScaleSide == false) {
          dVar47 = (dVar47 + (pFVar5->MeterSize).field0_0x0._s_0.Y) * (double)iVar23 +
                   (double)pFVar5->ScaleHashOffset;
        }
        else {
          dVar47 = (((double)local_900 + dVar47) - (double)pFVar5->ScaleHashOffset) -
                   (double)pFVar5->ScaleHashHeight;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_3d8);
        if (((*(int *)&(this->MeterScaleColor).Getter.field_0x10 == 0) ||
            (plVar36 = *(longlong **)&(this->MeterScaleColor).Getter.field_0x8,
            plVar36 == (longlong *)0x0)) ||
           (cVar22 = (**(code **)(*plVar36 + 0x38))(), cVar22 == '\0')) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_3d8);
        if (bVar21) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_3c0);
          if (*(int *)&(this->MeterScaleColor).Getter.field_0x10 == 0) {
            plVar36 = (longlong *)0x0;
          }
          else {
            plVar36 = *(longlong **)&(this->MeterScaleColor).Getter.field_0x8;
          }
          (**(code **)(*plVar36 + 0x60))(plVar36,&local_680);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_3c0);
          *(undefined8 *)&(pTVar30->Value).SpecifiedColor.field0_0x0 = local_680;
          *(undefined8 *)((longlong)&(this->MeterScaleColor).Value.SpecifiedColor.field0_0x0 + 8) =
               uStack_678;
          (this->MeterScaleColor).Value.ColorUseRule = (undefined1)local_670;
          (this->MeterScaleColor).Value.ColorTableId = local_670._1_1_;
          *(undefined2 *)&(this->MeterScaleColor).Value.field_0x12 = local_670._2_2_;
        }
        EVar4 = (this->MeterScaleColor).Value.ColorUseRule;
        pTVar33 = pTVar30;
        if (EVar4 != UseColor_Specified) {
          if (EVar4 == UseColor_ColorTable) {
            pTVar33 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&pTVar30->Value);
          }
          else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
            pTVar33 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
          }
          else {
            pTVar33 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
          }
        }
        fVar48 = fStack_2d0;
        local_7fc._s_0.R =
             (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).R *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
        bVar37 = local_2a8._4_1_ & 1;
        local_7fc._s_0.G =
             (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).G *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
        local_7b0 = CONCAT44(fStack_2c8,fStack_2cc);
        fVar49 = (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).A *
                 (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
        pFVar5 = pSVar43->Style;
        local_7fc._s_0.B =
             (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).B *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
        local_8f0._0_4_ = (undefined4)(((double)fVar45 + dVar51) - (double)fVar52);
        local_8f0._4_4_ = (float)dVar47;
        local_4c8.Trans.field0_0x0 = local_8f0;
        local_8f8._4_4_ = (float)dVar47 * fStack_2d0 + fStack_2c8;
        local_8f8._0_4_ = (float)(undefined4)local_8f0 * fStack_2d0 + fStack_2cc;
        local_4c8.M.M[0][0] = (float)local_868.ComparisonIndex.Value;
        local_4c8.M.M[0][1] = (float)local_868.Number;
        local_4c8.M.M[1][0] = afStack_860[0];
        local_4c8.M.M[1][1] = afStack_860[1];
        local_7fc._s_0.A = fVar49;
        Concatenate<TTransform2<float>_>
                  (&local_4b0,&local_4c8,(TTransform2<float> *)(auStack_2c0 + 4));
        local_1c0 = local_8f8;
        local_1b8 = fVar48;
        local_18c = bVar37 * '\x02' | local_18c & 0xfc;
        local_1b4 = 0;
        local_1a4[0] = local_4b0.M.M[0][0];
        local_1a4[1] = local_4b0.M.M[0][1];
        afStack_19c[0] = local_4b0.M.M[1][0];
        afStack_19c[1] = local_4b0.M.M[1][1];
        local_194 = local_4b0.Trans.field0_0x0;
        local_1ac = uVar13;
        FSlateDrawElement::MakeBox
                  (param_4,uVar42,(FPaintGeometry *)&local_1c0._s_0,&pFVar5->MeterPeakImage,None,
                   (FLinearColor *)&local_7fc._s_0);
        local_898.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_898.Data.ArrayNum = 0;
        local_898.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_898,local_908);
        if ((pSVar43->Orientation == Orient_Horizontal) && (local_908 < 0)) {
          local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_888.Data.ArrayNum = 0;
          local_888.Data.ArrayMax = 0;
          iVar41 = -local_908;
          if (-local_908 < 0) {
            iVar41 = local_908;
          }
          ::FString::AppendInt(&local_888,iVar41);
          local_708 = local_888.Data.AllocatorInstance.Data;
          iStack_700 = local_888.Data.ArrayNum + -1;
          if (local_888.Data.ArrayNum == 0) {
            iStack_700 = 0;
          }
          local_598._8_8_ = CONCAT44(uStack_6fc,iStack_700);
          local_598._0_8_ = local_888.Data.AllocatorInstance.Data;
          FVar32 = FSlateFontMeasure::Measure
                             (local_858.Object,(TStringView<wchar_t> *)(local_630 + 8),
                              (FSlateFontInfo *)local_598,fVar49);
          fVar48 = *(float *)FVar32;
          fVar49 = *(float *)((longlong)FVar32 + 4);
          if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_888.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_718 = local_898.Data.AllocatorInstance.Data;
          iStack_710 = local_898.Data.ArrayNum + -1;
          if (local_898.Data.ArrayNum == 0) {
            iStack_710 = 0;
          }
          local_5a8._12_4_ = uStack_70c;
          local_5a8._8_4_ = iStack_710;
          local_5a8._0_8_ = local_898.Data.AllocatorInstance.Data;
          FVar32 = FSlateFontMeasure::Measure
                             (local_858.Object,(TStringView<wchar_t> *)local_620,
                              (FSlateFontInfo *)local_5a8,fVar49);
          fVar48 = *(float *)FVar32;
          fVar49 = *(float *)((longlong)FVar32 + 4);
        }
        FText::FromString(&local_768,&local_898);
        fVar9 = fStack_2d0;
        afVar16 = afStack_860;
        FVar14 = local_868;
        pFVar5 = pSVar43->Style;
        dVar51 = (double)fVar45 + (pFVar5->MeterPadding).field0_0x0._s_0.X;
        if (pSVar43->Orientation == Orient_Vertical) {
          dVar47 = (pFVar5->MeterPadding).field0_0x0._s_0.Y;
          if (pFVar5->bScaleSide == false) {
            dVar47 = (dVar47 + (pFVar5->MeterSize).field0_0x0._s_0.Y) * (double)iVar23 +
                     (double)pFVar5->ScaleHashOffset + (double)pFVar5->ScaleHashHeight + dVar3;
          }
          else {
            dVar47 = (((double)fVar44 - (double)fVar48) + dVar47) - dVar3;
          }
          local_8a0 = (FDeprecateSlateVector2D)0x0;
          local_488 = 0;
          local_7a4 = CONCAT44(fStack_2c8,fStack_2cc);
          local_750 = 1.0;
          fStack_74c = 0.0;
          local_748 = 0.0;
          local_918._0_4_ = (undefined4)((double)fVar49 * dVar2 + dVar51);
          local_918._4_4_ = (float)dVar47;
          local_468.Trans.field0_0x0 = local_918;
          local_758 = CONCAT44(fVar49,fVar48);
          local_744 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_470 = 0;
          local_6c0.M.M[0][0] = ___xmm_b33bbd2ebf8000003f800000b33bbd2e;
          local_6c0.M.M[0][1] = _UNK_152bee944;
          local_6c0.M.M[1][0] = _UNK_152bee948;
          local_6c0.M.M[1][1] = _UNK_152bee94c;
          local_6c0.Trans.field0_0x0._s_0.X = 0.0;
          local_6c0.Trans.field0_0x0._s_0.Y = 0.0;
          local_468.M.M[0][0] = (float)local_868.ComparisonIndex.Value;
          local_468.M.M[0][1] = (float)local_868.Number;
          local_468.M.M[1][0] = afStack_860[0];
          local_468.M.M[1][1] = afStack_860[1];
          Concatenate<TTransform2<float>_>(&local_3a8,&local_6c0,&local_468);
          Concatenate<TTransform2<float>_>
                    (&local_73c,&local_3a8,(TTransform2<float> *)(auStack_2c0 + 4));
          local_724 = local_724 | 1;
          local_744 = local_918;
          fVar45 = (float)(undefined4)local_918 * fVar9 + (float)local_7a4;
          local_750 = fVar9;
          fVar48 = (float)dVar47 * fVar9 + local_7a4._4_4_;
          local_920 = (TVector2<float>_u_0)CONCAT44(fVar48,fVar45);
          fStack_74c = fVar45;
          local_748 = fVar48;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->MeterScaleLabelColor).Getter,&local_390);
          if (((*(int *)&(this->MeterScaleLabelColor).Getter.field_0x10 == 0) ||
              (plVar36 = *(longlong **)&(this->MeterScaleLabelColor).Getter.field_0x8,
              plVar36 == (longlong *)0x0)) ||
             (cVar22 = (**(code **)(*plVar36 + 0x38))(), cVar22 == '\0')) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_390);
          if (bVar21) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(this->MeterScaleLabelColor).Getter,&local_378);
            if (*(int *)&(this->MeterScaleLabelColor).Getter.field_0x10 == 0) {
              plVar36 = (longlong *)0x0;
            }
            else {
              plVar36 = *(longlong **)&(this->MeterScaleLabelColor).Getter.field_0x8;
            }
            (**(code **)(*plVar36 + 0x60))(plVar36,&local_66c);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_378);
            *(undefined8 *)&(pTVar1->Value).SpecifiedColor.field0_0x0 = local_66c;
            *(undefined8 *)
             ((longlong)&(this->MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 + 8) =
                 uStack_664;
            (this->MeterScaleLabelColor).Value.ColorUseRule = (undefined1)local_65c;
            (this->MeterScaleLabelColor).Value.ColorTableId = local_65c._1_1_;
            *(undefined2 *)&(this->MeterScaleLabelColor).Value.field_0x12 = local_65c._2_2_;
          }
          EVar4 = (this->MeterScaleLabelColor).Value.ColorUseRule;
          pTVar33 = pTVar1;
          if (EVar4 != UseColor_Specified) {
            if (EVar4 == UseColor_ColorTable) {
              pTVar33 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&pTVar1->Value);
            }
            else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
              pTVar33 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
            }
            else {
              pTVar33 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
            }
          }
          uVar18 = local_758;
          afVar17 = afStack_860;
          FVar15 = local_868;
          local_7ec._s_0.G =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).G *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
          local_7ec._s_0.R =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).R *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
          local_7ec._s_0.A =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).A *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
          pFVar5 = local_8b0->Style;
          local_7ec._s_0.B =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).B *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
          local_798 = local_920;
          local_450.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
          local_8b8 = fVar9 * 0.0 + fVar45;
          fStack_8b4 = fVar9 * 0.0 + fVar48;
          local_868.ComparisonIndex = FVar14.ComparisonIndex.Value;
          local_868.Number = FVar14.Number;
          local_450.M.M[0][0] = (float)local_868.ComparisonIndex.Value;
          local_450.M.M[0][1] = (float)local_868.Number;
          afStack_860[0] = afVar16[0];
          afStack_860[1] = afVar16[1];
          local_450.M.M[1][0] = afStack_860[0];
          local_450.M.M[1][1] = afStack_860[1];
          local_868 = FVar15;
          afStack_860 = afVar17;
          Concatenate<TTransform2<float>_>((TTransform2<float> *)local_608,&local_450,&local_73c);
          local_188._s_0.Y = fStack_8b4;
          local_188._s_0.X = local_8b8;
          local_154 = local_154 & 0xfe | 2;
          local_180 = fVar9;
          local_17c = 0;
          local_174 = uVar18;
          local_16c[0] = (float)local_608._0_4_;
          local_16c[1] = (float)local_608._4_4_;
          TStack_164 = (TObjectPtr<UObject>_u_0)local_608._8_8_;
          local_15c = local_608._16_8_;
          pFVar34 = FText::ToString(&local_768);
          pTVar39 = &local_188;
          pFVar35 = &local_7ec;
        }
        else {
          dVar51 = dVar51 - (double)fVar48 * dVar2;
          if (local_908 < 0) {
            dVar51 = dVar51 - (double)uVar8;
          }
          dVar47 = (pFVar5->MeterPadding).field0_0x0._s_0.Y;
          if (pFVar5->bScaleSide == false) {
            dVar47 = (dVar47 + (pFVar5->MeterSize).field0_0x0._s_0.Y) * (double)iVar23 +
                     (double)pFVar5->ScaleHashOffset + (double)pFVar5->ScaleHashHeight + dVar3;
          }
          else {
            dVar47 = ((((double)local_900 + dVar47) - (double)fVar49) -
                     (double)pFVar5->ScaleHashOffset) - (double)pFVar5->ScaleHashHeight;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(this->MeterScaleLabelColor).Getter,&local_360);
          if (((*(int *)&(this->MeterScaleLabelColor).Getter.field_0x10 == 0) ||
              (plVar36 = *(longlong **)&(this->MeterScaleLabelColor).Getter.field_0x8,
              plVar36 == (longlong *)0x0)) ||
             (cVar22 = (**(code **)(*plVar36 + 0x38))(), cVar22 == '\0')) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_360);
          if (bVar21) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(this->MeterScaleLabelColor).Getter,&local_348);
            if (*(int *)&(this->MeterScaleLabelColor).Getter.field_0x10 == 0) {
              plVar36 = (longlong *)0x0;
            }
            else {
              plVar36 = *(longlong **)&(this->MeterScaleLabelColor).Getter.field_0x8;
            }
            (**(code **)(*plVar36 + 0x60))(plVar36,&local_6a8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_348);
            *(undefined8 *)&(pTVar1->Value).SpecifiedColor.field0_0x0 = local_6a8;
            *(undefined8 *)
             ((longlong)&(this->MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 + 8) =
                 uStack_6a0;
            (this->MeterScaleLabelColor).Value.ColorUseRule = (undefined1)local_698;
            (this->MeterScaleLabelColor).Value.ColorTableId = local_698._1_1_;
            *(undefined2 *)&(this->MeterScaleLabelColor).Value.field_0x12 = local_698._2_2_;
          }
          EVar4 = (this->MeterScaleLabelColor).Value.ColorUseRule;
          pTVar33 = pTVar1;
          if (EVar4 != UseColor_Specified) {
            if (EVar4 == UseColor_ColorTable) {
              pTVar33 = (TAttribute<FSlateColor> *)FSlateColor::GetColorFromTable(&pTVar1->Value);
            }
            else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
              pTVar33 = (TAttribute<FSlateColor> *)&param_6->ForegroundColor;
            }
            else {
              pTVar33 = (TAttribute<FSlateColor> *)&param_6->SubduedForeground;
            }
          }
          fVar45 = fStack_2d0;
          TVar19 = local_2d8;
          local_7dc._s_0.R =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).R *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
          pFVar5 = pSVar43->Style;
          local_7dc._s_0.G =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).G *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
          local_78c = CONCAT44(fStack_2c8,fStack_2cc);
          local_7dc._s_0.A =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).A *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
          local_7dc._s_0.B =
               (((FLinearColor_u_0 *)&pTVar33->Value)->_s_0).B *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
          bVar37 = local_2a8._4_1_ & 1;
          local_8c0 = (float)dVar51;
          fStack_8bc = (float)dVar47;
          local_5f0.Trans.field0_0x0 = (TVector2<float>_u_0)CONCAT44(fStack_8bc,local_8c0);
          local_8a8 = local_8c0 * fStack_2d0 + fStack_2cc;
          fStack_8a4 = fStack_8bc * fStack_2d0 + fStack_2c8;
          local_5f0.M.M[0][0] = (float)local_868.ComparisonIndex.Value;
          local_5f0.M.M[0][1] = (float)local_868.Number;
          local_5f0.M.M[1][0] = afStack_860[0];
          local_5f0.M.M[1][1] = afStack_860[1];
          Concatenate<TTransform2<float>_>
                    (&local_5d0,&local_5f0,(TTransform2<float> *)(auStack_2c0 + 4));
          local_150._s_0.Y = fStack_8a4;
          local_150._s_0.X = local_8a8;
          local_148 = fVar45;
          local_11c = bVar37 * '\x02' | local_11c & 0xfc;
          local_144 = 0;
          local_13c = TVar19;
          local_134[0] = local_5d0.M.M[0][0];
          local_134[1] = local_5d0.M.M[0][1];
          afStack_12c[0] = local_5d0.M.M[1][0];
          afStack_12c[1] = local_5d0.M.M[1][1];
          local_124 = local_5d0.Trans.field0_0x0;
          pFVar34 = FText::ToString(&local_768);
          pTVar39 = &local_150;
          pFVar35 = &local_7dc;
        }
        FSlateDrawElement::MakeText
                  (param_4,uVar42,(FPaintGeometry *)&pTVar39->_s_0,pFVar34,&pFVar5->Font,None,
                   (FLinearColor *)&pFVar35->_s_0);
        pSVar43 = local_8b0;
        local_908 = local_908 - local_8b0->Style->DecibelsPerHash;
        if (local_768.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_768.TextData.Reference + 0x10))();
        }
        if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_898.Data.AllocatorInstance.Data);
        }
      } while (iVar40 <= local_908);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_858.SharedReferenceCount.ReferenceController);
  }
  if (local_8d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data);
  }
  return uVar42;
}

// SetBackgroundColor @ 14d7ea570

void __thiscall SAudioMeterWidget::SetBackgroundColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->BackgroundColor,(TAttribute<FSlateColor> *)&local_40._s_0,Paint)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetMeterBackgroundColor @ 14d7ea950

void __thiscall
SAudioMeterWidget::SetMeterBackgroundColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->MeterBackgroundColor,(TAttribute<FSlateColor> *)&local_40._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetMeterChannelInfo @ 14d7eaa20

void __thiscall
SAudioMeterWidget::SetMeterChannelInfo
          (SAudioMeterWidget *this,
          TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IdenticalTo
                    (&this->MeterChannelInfoAttribute,param_1);
  if (!bVar1) {
    bVar1 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
                      (&this->MeterChannelInfoAttribute);
    bVar2 = TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
                      (param_1);
    TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=
              (&this->MeterChannelInfoAttribute,param_1);
    SWidget::Invalidate((SWidget *)this,(bVar2 != bVar1) * '\x04' + Paint);
  }
  return;
}

// SetMeterClippingColor @ 14d7eaab0

void __thiscall
SAudioMeterWidget::SetMeterClippingColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->MeterClippingColor,(TAttribute<FSlateColor> *)&local_40._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetMeterPeakColor @ 14d7eab80

void __thiscall SAudioMeterWidget::SetMeterPeakColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->MeterPeakColor,(TAttribute<FSlateColor> *)&local_40._s_0,Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetMeterScaleColor @ 14d7eac50

void __thiscall SAudioMeterWidget::SetMeterScaleColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->MeterScaleColor,(TAttribute<FSlateColor> *)&local_40._s_0,Paint)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetMeterScaleLabelColor @ 14d7ead20

void __thiscall
SAudioMeterWidget::SetMeterScaleLabelColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->MeterScaleLabelColor,(TAttribute<FSlateColor> *)&local_40._s_0,
             Paint);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetMeterValueColor @ 14d7eadf0

void __thiscall SAudioMeterWidget::SetMeterValueColor(SAudioMeterWidget *this,FSlateColor *param_1)

{
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_2c = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SWidget::SetAttribute<FSlateColor,FSlateColor>
            ((SWidget *)this,&this->MeterValueColor,(TAttribute<FSlateColor> *)&local_40._s_0,Paint)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetOrientation @ 14d7eaec0

void __thiscall SAudioMeterWidget::SetOrientation(SAudioMeterWidget *this,EOrientation param_1)

{
  if (this->Orientation != param_1) {
    this->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

