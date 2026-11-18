// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 7

// ~SSplineWithHandles @ 143062240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSplineWithHandles::~SSplineWithHandles(SSplineWithHandles *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = (this->GradientStops).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SplineThickness).Getter);
  pvVar2 = *(void **)&(this->SplineThickness).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SplineThickness).Getter);
  pTVar3 = *(TReferenceControllerBase<1> **)&(this->WhiteBox).field_0xa0;
  *(undefined ***)&this->WhiteBox = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TSharedPtr<SSpinBox<float>,1>::~TSharedPtr<SSpinBox<float>,1>(&this->ThicknessSpinBox);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14309f340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSplineWithHandles::Construct(SSplineWithHandles *this,FArguments *param_1)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  
  TVar1 = (param_1->_P3).field0_0x0;
  TVar2 = (param_1->_P2).field0_0x0;
  TVar3 = (param_1->_P1).field0_0x0;
  this->BezierPoints[0].field0_0x0 = (param_1->_P0).field0_0x0;
  this->BezierPoints[1].field0_0x0 = TVar3;
  this->BezierPoints[2].field0_0x0 = TVar2;
  this->BezierPoints[3].field0_0x0 = TVar1;
  TAttribute<float>::operator=(&this->SplineThickness,&param_1->_SplineThickness);
  return;
}

// OnMouseButtonDown @ 1430de7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplineWithHandles::OnMouseButtonDown
          (SSplineWithHandles *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  int iVar1;
  FKey *pFVar2;
  FDeprecateSlateVector2D *pFVar3;
  FDeprecateVector2DParameter *pFVar4;
  TTransform2<float> *pTVar5;
  TVector2<float> TVar6;
  TVector2<float>_u_0_s_0 *pTVar7;
  FReply *pFVar8;
  undefined1 auStack_1b8 [32];
  char local_198;
  FStaticCastTag local_197;
  FDeprecateVector2DParameter *local_190;
  FDeprecateVector2DParameter local_188;
  TVector2<float> *local_180;
  TTransform2<float> *local_178;
  FDeprecateSlateVector2D local_170;
  TVector2<float>_u_0 local_168;
  undefined1 *local_160;
  TSharedRef<SWidget,1> *local_158;
  TSharedRef<SWidget,1> *local_150;
  TSharedRef<SWidget,1> *local_148;
  FReply *local_140;
  TSharedRef<SSplineWithHandles,1> local_138;
  FDeprecateVector2DParameter local_128;
  TTransform2<float> local_120;
  FKey local_108;
  TSharedRef<SWidget,1> local_f0;
  FReply local_e0;
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar2 = FPointerEvent::GetEffectingButton(param_2,&local_108);
  local_198 = ::operator==(pFVar2,&EKeys::LeftMouseButton);
  FKey::~FKey(&local_108);
  if (local_198 != '\0') {
    local_190 = &local_128;
    pFVar3 = FPointerEvent::GetScreenSpacePosition(param_2);
    pFVar4 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(local_190,pFVar3);
    local_188 = *pFVar4;
    local_180 = UE::Slate::CastToVector2f(&local_188);
    pTVar5 = FGeometry::GetAccumulatedRenderTransform(param_1);
    local_178 = Inverse<TTransform2<float>_>(&local_28,pTVar5);
    TVar6 = TransformPoint<TTransform2<float>,UE::Math::TVector2<float>_>
                      (&local_120,(TVector2<float> *)local_178);
    FDeprecateSlateVector2D::FDeprecateSlateVector2D
              (&local_170,(TVector2<float>)*(TVector2<float>_u_0 *)TVar6.field0_0x0);
    pTVar7 = (TVector2<float>_u_0_s_0 *)UE::Slate::CastToVector2f(&local_170);
    local_168._s_0 = *pTVar7;
    iVar1 = PointIndexFromCursorPos
                      (this->BezierPoints,(TVector2<float>)local_168,
                       __real_40000000 * (this->BezierPointRadius).field0_0x0._s_0.X *
                       __real_40000000 * (this->BezierPointRadius).field0_0x0._s_0.X);
    this->PointBeingDragged = iVar1;
    if (this->PointBeingDragged != -1) {
      local_140 = FReply::Handled(&local_e0);
      local_150 = &local_f0;
      local_160 = &this->field_0x8;
      local_158 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)local_160,
                             (TSharedRef<SWidget,1> *)(local_120.M.M + 1));
      TSharedRef<SSplineWithHandles,1>::TSharedRef<SSplineWithHandles,1><SWidget>
                (&local_138,local_158,local_197);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>((TSharedRef<SWidget,1> *)(local_120.M.M + 1));
      local_148 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineWithHandles>
                            (local_150,&local_138);
      pFVar8 = FReply::CaptureMouse(local_140,local_148);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_138.SharedReferenceCount);
      FReply::~FReply(&local_e0);
      return __return_storage_ptr__;
    }
  }
  FReply::Unhandled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1430dfa30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplineWithHandles::OnMouseButtonUp
          (SSplineWithHandles *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  bool bVar2;
  FKey *pFVar3;
  FReply *pFVar4;
  FKey local_d8;
  FReply local_c0;
  
  bVar1 = false;
  if (this->PointBeingDragged != -1) {
    bVar1 = true;
    pFVar3 = FPointerEvent::GetEffectingButton(param_2,&local_d8);
    bVar2 = ::operator==(pFVar3,&EKeys::LeftMouseButton);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1430dfaa3;
    }
  }
  bVar2 = false;
LAB_1430dfaa3:
  if (bVar1) {
    FKey::~FKey(&local_d8);
  }
  if (bVar2) {
    this->PointBeingDragged = -1;
    pFVar4 = FReply::Handled(&local_c0);
    pFVar4 = FReply::ReleaseMouseCapture(pFVar4);
    FReply::FReply(__return_storage_ptr__,pFVar4);
    FReply::~FReply(&local_c0);
  }
  else {
    FReply::Unhandled(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 1430dfb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplineWithHandles::OnMouseMove
          (SSplineWithHandles *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FDeprecateSlateVector2D *pFVar1;
  FDeprecateVector2DParameter *pFVar2;
  TTransform2<float> *pTVar3;
  TVector2<float> TVar4;
  TVector2<float>_u_0_s_0 *pTVar5;
  undefined1 auStack_88 [32];
  FDeprecateVector2DParameter *local_68;
  FDeprecateVector2DParameter local_60;
  TVector2<float> *local_58;
  TTransform2<float> *local_50;
  FDeprecateSlateVector2D local_48;
  TVector2<float>_u_0_s_0 local_40;
  FDeprecateVector2DParameter local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->PointBeingDragged == -1) {
    FReply::Unhandled(__return_storage_ptr__);
  }
  else {
    local_68 = &local_38;
    pFVar1 = FPointerEvent::GetScreenSpacePosition(param_2);
    pFVar2 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(local_68,pFVar1);
    local_60 = *pFVar2;
    local_58 = UE::Slate::CastToVector2f(&local_60);
    pTVar3 = FGeometry::GetAccumulatedRenderTransform(param_1);
    local_50 = Inverse<TTransform2<float>_>((TTransform2<float> *)(local_30 + 8),pTVar3);
    TVar4 = TransformPoint<TTransform2<float>,UE::Math::TVector2<float>_>
                      ((TTransform2<float> *)local_30,(TVector2<float> *)local_50);
    FDeprecateSlateVector2D::FDeprecateSlateVector2D
              (&local_48,(TVector2<float>)*(TVector2<float>_u_0 *)TVar4.field0_0x0);
    pTVar5 = (TVector2<float>_u_0_s_0 *)UE::Slate::CastToVector2f(&local_48);
    local_40 = *pTVar5;
    this->BezierPoints[this->PointBeingDragged].field0_0x0._s_0 = local_40;
    FReply::Handled(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// OnPaint @ 1430e0f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSplineWithHandles::OnPaint
          (SSplineWithHandles *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  TVector2<float>_u_0_s_0 TVar4;
  bool bVar5;
  int iVar6;
  TVector2<double> *pTVar7;
  FSlateLayoutTransform *pFVar8;
  TVector2<float> *pTVar9;
  TTransform2<float> *pTVar10;
  float *pfVar11;
  FDeprecateVector2DParameter *pFVar12;
  longlong lVar13;
  FLinearColor *pFVar14;
  FLinearColor *pFVar15;
  undefined1 auStackY_368 [32];
  ESlateDrawEffect local_318;
  ESlateDrawEffect local_316;
  int local_314;
  float local_308;
  float fStack_304;
  TVector2<float>_u_0 local_2c0;
  TVector2<float>_u_0 *local_2b8;
  FLinearColor *local_2b0;
  TVector2<float> *local_2a8;
  TVector2<float>_u_0 local_2a0;
  TVector2<float>_u_0 local_298;
  FSlateLayoutTransform *local_290;
  FLinearColor_u_0 local_288;
  FLinearColor_u_0 local_278;
  FLinearColor *local_268;
  FLinearColor_u_0 *local_260;
  FDeprecateVector2DParameter local_258;
  FDeprecateVector2DParameter local_250;
  FDeprecateVector2DParameter local_248;
  TTransform2<float> *local_240;
  FLinearColor *local_238;
  FPaintGeometry *local_230;
  FDeprecateVector2DParameter *local_228;
  FDeprecateVector2DParameter local_220;
  FDeprecateVector2DParameter local_218;
  FDeprecateVector2DParameter local_210;
  FDeprecateVector2DParameter local_208;
  FDeprecateVector2DParameter *local_200;
  FDeprecateVector2DParameter local_1f8;
  FDeprecateVector2DParameter local_1f0;
  FDeprecateVector2DParameter local_1e8;
  FDeprecateVector2DParameter local_1e0;
  FDeprecateVector2DParameter *local_1d8;
  FDeprecateVector2DParameter local_1d0;
  FDeprecateVector2DParameter local_1c8;
  FDeprecateVector2DParameter local_1c0;
  FDeprecateVector2DParameter local_1b8;
  FDeprecateVector2DParameter *local_1b0;
  FDeprecateVector2DParameter local_1a8;
  FDeprecateVector2DParameter local_1a0;
  FDeprecateVector2DParameter local_198;
  FDeprecateVector2DParameter local_190;
  TVector2<float>_u_0 local_188;
  FDeprecateVector2DParameter local_180;
  TTransform2<float> *local_178;
  FSlateLayoutTransform *local_170;
  FDeprecateVector2DParameter local_168;
  FDeprecateVector2DParameter local_160;
  FDeprecateVector2DParameter local_158;
  FDeprecateVector2DParameter local_150;
  FPaintGeometry *local_148;
  TVector2<float>_u_0 local_140;
  TVector2<float>_u_0 *local_138;
  FSlateLayoutTransform local_130;
  FDeprecateVector2DParameter local_120;
  FDeprecateVector2DParameter local_118;
  FDeprecateVector2DParameter local_110;
  FDeprecateVector2DParameter local_108;
  FLinearColor local_100;
  FSlateLayoutTransform local_f0;
  FSlateLayoutTransform local_e4;
  FSlateLayoutTransform local_d8;
  FLinearColor local_cc;
  TVector2<double> local_b8;
  TTransform2<float> local_a8;
  FPaintGeometry local_90;
  FPaintGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_368;
  bVar5 = SWidget::ShouldBeEnabled((SWidget *)this,param_7);
  for (local_314 = 0; local_314 < 4; local_314 = local_314 + 1) {
    if ((local_314 == 0) || (local_314 == 3)) {
      local_140 = (this->BezierPointRadius).field0_0x0;
      local_2b8 = &local_140;
    }
    else {
      local_2c0._s_0.Y = (this->BezierPointRadius).field0_0x0._s_0.Y * __real_3f000000;
      local_2c0._s_0.X = (this->BezierPointRadius).field0_0x0._s_0.X * __real_3f000000;
      local_2b8 = &local_2c0;
    }
    local_138 = local_2b8;
    TVar4 = local_2b8->_s_0;
    if ((local_314 == 0) || (local_314 == 1)) {
      local_2b0 = &FLinearColor::Green;
    }
    else {
      local_2b0 = &FLinearColor::Blue;
    }
    local_268 = local_2b0;
    pFVar14 = local_2b0;
    pFVar15 = &local_100;
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *(undefined1 *)&pFVar15->field0_0x0 = *(undefined1 *)&pFVar14->field0_0x0;
      pFVar14 = (FLinearColor *)((longlong)&pFVar14->field0_0x0 + 1);
      pFVar15 = (FLinearColor *)((longlong)&pFVar15->field0_0x0 + 1);
    }
    local_288._s_0.R = __real_3f800000;
    local_288._s_0.G = __real_3f800000;
    local_288._s_0.B = __real_3f800000;
    local_288._s_0.A = __real_3e800000;
    local_260 = &local_288;
    local_238 = FLinearColor::operator*(&local_100,&local_cc,(FLinearColor *)&local_260->_s_0);
    if (bVar5) {
      local_318 = None;
    }
    else {
      local_318 = DisabledEffect;
    }
    local_2a8 = this->BezierPoints + local_314;
    fStack_304 = TVar4.Y;
    local_2a0._s_0.Y = (local_2a8->field0_0x0)._s_0.Y - fStack_304;
    local_308 = TVar4.X;
    local_2a0._s_0.X = (local_2a8->field0_0x0)._s_0.X - local_308;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_258,(TVector2<float> *)&local_2a0._s_0);
    local_290 = FSlateLayoutTransform::FSlateLayoutTransform(&local_f0,&local_258);
    local_298._s_0.Y = fStack_304 * __real_40000000;
    local_298._s_0.X = local_308 * __real_40000000;
    pTVar7 = UE::Math::TVector2<double>::TVector2<double><float>
                       (&local_b8,(TVector2<float> *)&local_298._s_0);
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_250,pTVar7);
    pFVar8 = FGeometry::GetAccumulatedLayoutTransform(param_2,&local_e4);
    Concatenate<FSlateLayoutTransform>(&local_130,local_290,pFVar8);
    pTVar9 = UE::Slate::CastToVector2f(&local_250);
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_248,pTVar9);
    pTVar10 = FGeometry::GetAccumulatedRenderTransform(param_2);
    local_240 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>(&local_a8,local_290,pTVar10);
    FPaintGeometry::FPaintGeometry
              (&local_90,&local_130,local_240,&local_248,param_2->bHasRenderTransform);
    local_230 = &local_90;
    FSlateDrawElement::MakeBox
              (param_4,param_5,local_230,(FSlateBrush *)&this->WhiteBox,local_318,local_238);
  }
  local_278._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_278._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_278._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_278._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (bVar5) {
    local_316 = None;
  }
  else {
    local_316 = DisabledEffect;
  }
  pfVar11 = TAttribute<float>::Get(&this->SplineThickness);
  fVar1 = *pfVar11;
  fVar2 = param_2->Scale;
  local_228 = &local_110;
  pFVar12 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                      (local_228,this->BezierPoints + 3);
  local_220 = *pFVar12;
  local_200 = &local_108;
  local_218 = local_220;
  local_210 = local_220;
  local_208 = local_220;
  local_168 = local_220;
  pFVar12 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                      (local_200,this->BezierPoints + 2);
  local_1f8 = *pFVar12;
  local_1d8 = &local_120;
  local_1f0 = local_1f8;
  local_1e8 = local_1f8;
  local_1e0 = local_1f8;
  local_160 = local_1f8;
  pFVar12 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                      (local_1d8,this->BezierPoints + 1);
  local_1d0 = *pFVar12;
  local_1b0 = &local_118;
  local_1c8 = local_1d0;
  local_1c0 = local_1d0;
  local_1b8 = local_1d0;
  local_158 = local_1d0;
  pFVar12 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                      (local_1b0,this->BezierPoints);
  local_1a8 = *pFVar12;
  local_188._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
  local_1a0 = local_1a8;
  local_198 = local_1a8;
  local_190 = local_1a8;
  local_150 = local_1a8;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_180,(TVector2<float> *)&local_188._s_0);
  local_178 = FGeometry::GetAccumulatedRenderTransform(param_2);
  local_170 = FGeometry::GetAccumulatedLayoutTransform(param_2,&local_d8);
  FPaintGeometry::FPaintGeometry
            (&local_58,local_170,local_178,&local_180,param_2->bHasRenderTransform);
  local_148 = &local_58;
  FSlateDrawElement::MakeCubicBezierSpline
            (param_4,param_5 + 1U,local_148,local_150,local_158,local_160,local_168,fVar1 * fVar2,
             local_316,(FLinearColor *)&local_278._s_0);
  iVar6 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5 + 1U,param_6,
                     param_7);
  return iVar6;
}

// PointIndexFromCursorPos @ 1430e4800

int __cdecl
SSplineWithHandles::PointIndexFromCursorPos
          (TVector2<float> *param_1,TVector2<float> param_2,float param_3)

{
  float local_res10;
  float fStackX_14;
  int local_38;
  
  local_38 = 0;
  while( true ) {
    if (3 < local_38) {
      return -1;
    }
    fStackX_14 = param_2.field0_0x0._4_4_;
    fStackX_14 = param_1[local_38].field0_0x0._s_0.Y - fStackX_14;
    local_res10 = param_2.field0_0x0._0_4_;
    local_res10 = param_1[local_38].field0_0x0._s_0.X - local_res10;
    if (local_res10 * local_res10 + fStackX_14 * fStackX_14 < param_3) break;
    local_38 = local_38 + 1;
  }
  return local_38;
}

