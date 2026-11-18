// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// Construct @ 1429d4990

void __thiscall
SNotificationBackground::Construct(SNotificationBackground *this,FArguments *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  ISlateStyle *pIVar6;
  FName *pFVar7;
  FSlateBrush *pFVar8;
  FLinearColor_u_0_s_0 *pFVar9;
  FArguments *pFVar10;
  FLinearColor_u_0 FVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FName local_res8;
  FDestructionSentinel local_4f8;
  FSlateBrush *local_4e0;
  undefined1 local_4d8;
  undefined1 local_4d0 [8];
  ForAnyElementType FStack_4c8;
  ulonglong local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  bool local_4a4;
  undefined1 local_4a0 [8];
  ForAnyElementType FStack_498;
  int local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  bool local_478;
  undefined1 local_470 [8];
  ForAnyElementType FStack_468;
  int local_460;
  double local_458;
  double dStack_450;
  bool local_448;
  undefined1 local_440 [8];
  ForAnyElementType FStack_438;
  int local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  bool local_418;
  undefined1 local_410 [24];
  FArguments local_3f8;
  
  pIVar6 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar6 + 0x50);
  pFVar7 = ::FName::FName(&local_res8,"NotificationList.Watermark");
  pFVar8 = (FSlateBrush *)(*pcVar1)(pIVar6,*pFVar7,0,0);
  this->WatermarkBrush = pFVar8;
  pIVar6 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar6 + 0x50);
  pFVar7 = ::FName::FName(&local_res8,"NotificationList.ItemBackground_Border");
  pFVar8 = (FSlateBrush *)(*pcVar1)(pIVar6,*pFVar7,0,0);
  this->BorderBrush = pFVar8;
  SWidget::SetClipping((SWidget *)this,ClipToBounds);
  if (FStyleColors::Notifications.ColorUseRule == UseColor_ColorTable) {
    pFVar9 = (FLinearColor_u_0_s_0 *)FSlateColor::GetColorFromTable(&FStyleColors::Notifications);
    FVar11._s_0 = *pFVar9;
    fVar13 = FVar11._s_0.G;
    fVar12 = FVar11._s_0.B;
    fVar14 = FVar11._s_0.A;
  }
  else {
    fVar13 = FStyleColors::Notifications.SpecifiedColor.field0_0x0._4_4_;
    fVar12 = FStyleColors::Notifications.SpecifiedColor.field0_0x0._8_4_;
    fVar14 = FStyleColors::Notifications.SpecifiedColor.field0_0x0._12_4_;
    FVar11 = FStyleColors::Notifications.SpecifiedColor.field0_0x0;
  }
  fVar5 = __real_3f933333;
  fVar12 = fVar12 * __real_3f933333;
  (this->WatermarkTint).field0_0x0._s_0.R = FVar11._s_0.R * __real_3f933333;
  (this->WatermarkTint).field0_0x0._s_0.G = fVar13 * fVar5;
  (this->WatermarkTint).field0_0x0._s_0.B = fVar12;
  (this->WatermarkTint).field0_0x0._s_0.A = fVar14;
  pFVar10 = SBorder::FArguments::FArguments(&local_3f8);
  local_4e0 = FStyleDefaults::GetNoBrush();
  local_4d8 = 1;
  local_4d0 = (undefined1  [8])0x0;
  FStack_4c8.Data = (FScriptContainerElement *)0x0;
  local_4c0 = 0;
  (pFVar10->_BorderImage).Value = local_4e0;
  (pFVar10->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
             (FWriteAccessScope *)&local_4f8);
  if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c8,0,0,0x10);
    local_4c0 = local_4c0 & 0xffffffff00000000;
  }
  if (local_4f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
  }
  if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  local_488._0_4_ = (param_1->_Padding).Value.Left;
  local_488._4_4_ = (param_1->_Padding).Value.Top;
  uStack_480._0_4_ = (param_1->_Padding).Value.Right;
  uStack_480._4_4_ = (param_1->_Padding).Value.Bottom;
  local_478 = (param_1->_Padding).bIsSet;
  local_460 = 0;
  local_470 = (undefined1  [8])0x0;
  FStack_468.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_470,
             &(param_1->_Padding).Getter);
  (pFVar10->_Padding).Value.Left = (float)(undefined4)local_488;
  (pFVar10->_Padding).Value.Top = (float)local_488._4_4_;
  (pFVar10->_Padding).Value.Right = (float)(undefined4)uStack_480;
  (pFVar10->_Padding).Value.Bottom = (float)uStack_480._4_4_;
  (pFVar10->_Padding).bIsSet = local_478;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
             (FWriteAccessScope *)&local_4f8);
  if ((local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_468.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_468,0,0,0x10);
    local_460 = 0;
  }
  if (local_4f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
  }
  if (FStack_468.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  local_4b8 = *(undefined8 *)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_4b0 = *(undefined8 *)
                ((longlong)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_4a8._0_1_ = (param_1->_BorderBackgroundColor).Value.ColorUseRule;
  local_4a8._1_1_ = (param_1->_BorderBackgroundColor).Value.ColorTableId;
  local_4a8._2_2_ = *(undefined2 *)&(param_1->_BorderBackgroundColor).Value.field_0x12;
  local_4a4 = (param_1->_BorderBackgroundColor).bIsSet;
  local_490 = 0;
  local_4a0 = (undefined1  [8])0x0;
  FStack_498.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_4a0,
             &(param_1->_BorderBackgroundColor).Getter);
  *(undefined8 *)&(pFVar10->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_4b8;
  *(undefined8 *)((longlong)&(pFVar10->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uStack_4b0;
  (pFVar10->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_4a8;
  (pFVar10->_BorderBackgroundColor).Value.ColorTableId = local_4a8._1_1_;
  *(undefined2 *)&(pFVar10->_BorderBackgroundColor).Value.field_0x12 = local_4a8._2_2_;
  (pFVar10->_BorderBackgroundColor).bIsSet = local_4a4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
             (FWriteAccessScope *)&local_4f8);
  if ((local_490 != 0) && (FStack_498.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_498.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_498,0,0,0x10);
    local_490 = 0;
  }
  if (local_4f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
  }
  if (FStack_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  local_428 = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.field0_0x0;
  uStack_420 = *(undefined8 *)((longlong)&(param_1->_ColorAndOpacity).Value.field0_0x0 + 8);
  local_418 = (param_1->_ColorAndOpacity).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_410,
             &(param_1->_ColorAndOpacity).Getter);
  *(undefined8 *)&(pFVar10->_ColorAndOpacity).Value.field0_0x0 = local_428;
  *(undefined8 *)((longlong)&(pFVar10->_ColorAndOpacity).Value.field0_0x0 + 8) = uStack_420;
  (pFVar10->_ColorAndOpacity).bIsSet = local_418;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_410);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_410);
  if ((void *)local_410._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_410._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_410);
  local_458 = (param_1->_DesiredSizeScale).Value.field0_0x0._s_0.X;
  dStack_450 = (param_1->_DesiredSizeScale).Value.field0_0x0._s_0.Y;
  local_448 = (param_1->_DesiredSizeScale).bIsSet;
  local_430 = 0;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_440,&(param_1->_DesiredSizeScale).Getter);
  (pFVar10->_DesiredSizeScale).Value.field0_0x0._s_0.X = local_458;
  (pFVar10->_DesiredSizeScale).Value.field0_0x0._s_0.Y = dStack_450;
  (pFVar10->_DesiredSizeScale).bIsSet = local_448;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_DesiredSizeScale).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
             (FWriteAccessScope *)&local_4f8);
  if ((local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = 0;
  }
  if (local_4f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_Content).Widget.Object = pSVar3;
  (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SBorder::Construct((SBorder *)this,pFVar10);
  SBorder::FArguments::~FArguments(&local_3f8);
  return;
}

// OnPaint @ 1429fe530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SNotificationBackground::OnPaint
          (SNotificationBackground *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ESlateColorStylingMode EVar9;
  undefined1 uVar10;
  TVector2<float>_u_0_s_0 TVar11;
  FSlateBrush *pFVar12;
  int iVar13;
  FSlateColor *this_00;
  FSlateClippingZone *pFVar14;
  FLinearColor_u_0 *pFVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStackY_1b8 [32];
  FLinearColor_u_0 local_170;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  FLinearColor_u_0 local_148;
  FSlateRect *local_138;
  FPaintArgs *local_130;
  FLinearColor_u_0 local_128;
  uint local_118;
  TVector2<float>_u_0 local_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float local_f4 [2];
  float afStack_ec [2];
  TVector2<float>_u_0 local_e4;
  byte local_dc;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  TVector2<float>_u_0 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_138 = param_3;
  local_130 = param_1;
  if ((this->WatermarkBrush != (FSlateBrush *)0x0) && ((this->WatermarkBrush->DrawAs).Value != '\0')
     ) {
    local_158 = param_2->Size;
    EVar9 = (this->BorderBrush->TintColor).ColorUseRule;
    this_00 = &this->BorderBrush->TintColor;
    fVar17 = local_158._4_4_ * __real_40200000;
    if (__real_435c0000 <= local_158._4_4_ * __real_40200000) {
      fVar17 = __real_435c0000;
    }
    if (fVar17 <= __real_43020000) {
      fVar17 = __real_43020000;
    }
    if (EVar9 != UseColor_Specified) {
      if (EVar9 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar9 == UseColor_Foreground) || (EVar9 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_110 = (param_2->AbsolutePosition).field0_0x0;
    local_170._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_170._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    uStack_fc = SUB84(param_2->Size,0);
    uStack_f8 = SUB84(param_2->Size,4);
    local_170._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_dc = param_2->bHasRenderTransform * '\x02' | local_dc & 0xfc;
    local_170._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    fStack_108 = param_2->Scale;
    local_f4 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_ec = (param_2->AccumulatedRenderTransform).M.M[1];
    uStack_104 = 0;
    uStack_100 = 0;
    local_e4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_110._s_0,this->BorderBrush,None,
               (FLinearColor *)&local_170._s_0);
    local_170._s_0.R = param_3->Left + __real_40000000;
    local_170._s_0.B = param_3->Right - __real_40000000;
    local_170._s_0.G = param_3->Top + __real_40000000;
    local_170._s_0.A = param_3->Bottom - __real_40000000;
    pFVar14 = FSlateClippingZone::FSlateClippingZone
                        ((FSlateClippingZone *)&local_110._s_0,(FSlateRect *)&local_170._s_0);
    FSlateWindowElementList::PushClip(param_4,pFVar14);
    local_118 = (uint)this->_padding_;
    fVar1 = (this->WatermarkTint).field0_0x0._s_0.R;
    fVar2 = (this->WatermarkTint).field0_0x0._s_0.G;
    fVar3 = (this->WatermarkTint).field0_0x0._s_0.B;
    fVar4 = (this->WatermarkTint).field0_0x0._s_0.A;
    fVar5 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    fVar6 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    uVar16 = local_118 & 0xff;
    fVar7 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar8 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_128._0_8_ = this->_padding_;
    local_128._8_8_ = this->_padding_;
    if ((char)local_118 == '\0') {
      pFVar15 = &local_128;
    }
    else if (uVar16 == 1) {
      pFVar15 = &FSlateColor::GetColorFromTable((FSlateColor *)&local_128._s_0)->field0_0x0;
    }
    else if ((uVar16 == 2) || (uVar16 != 3)) {
      pFVar15 = &(param_6->ForegroundColor).field0_0x0;
    }
    else {
      pFVar15 = &(param_6->SubduedForeground).field0_0x0;
    }
    local_148._s_0.R = fVar1 * fVar5 * (((FLinearColor_u_0 *)&(pFVar15->_s_0).R)->_s_0).R;
    TVar11 = (param_2->AbsolutePosition).field0_0x0._s_0;
    pFVar12 = this->WatermarkBrush;
    local_148._s_0.G = (pFVar15->_s_0).G * fVar2 * fVar6;
    local_170._s_0.G = TVar11.X;
    local_170._s_0.B = TVar11.Y;
    local_148._s_0.B = (pFVar15->_s_0).B * fVar3 * fVar7;
    local_158 = (FDeprecateSlateVector2D)CONCAT44(fVar17,fVar17);
    fVar17 = param_2->Scale;
    local_148._s_0.A = (pFVar15->_s_0).A * fVar4 * fVar8;
    local_160 = 0x4080000040800000;
    local_150 = fVar17 * 4.0 + local_170._s_0.G;
    fStack_14c = fVar17 * 4.0 + local_170._s_0.B;
    local_170._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
    local_170._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_170._s_0.B = (float)_UNK_15076b188;
    local_170._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>
              ((TTransform2<float> *)&local_110._s_0,(TTransform2<float> *)&local_170._s_0,
               &param_2->AccumulatedRenderTransform);
    local_d8._s_0.Y = fStack_14c;
    local_d8._s_0.X = local_150;
    uStack_b4 = CONCAT44(uStack_104,fStack_108);
    local_ac = CONCAT44(uStack_fc,uStack_100);
    local_c4 = local_158;
    local_a4 = param_2->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
    local_cc = 0;
    local_bc = local_110;
    local_d0 = fVar17;
    FSlateDrawElement::MakeBox
              (param_4,param_5 + 1,(FPaintGeometry *)&local_d8._s_0,pFVar12,None,
               (FLinearColor *)&local_148._s_0);
    FSlateWindowElementList::PopClip(param_4);
  }
  iVar13 = SBorder::OnPaint((SBorder *)this,local_130,param_2,local_138,param_4,param_5 + 2,param_6,
                            param_7);
  return iVar13;
}

