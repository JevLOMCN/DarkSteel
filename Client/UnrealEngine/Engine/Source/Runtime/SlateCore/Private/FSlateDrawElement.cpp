// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 29

// FSlateDrawElement @ 1424eab90

FSlateDrawElement * __thiscall FSlateDrawElement::FSlateDrawElement(FSlateDrawElement *this)

{
  (this->RenderTransform).M.M[0] = (float  [2])0x3f800000;
  (this->RenderTransform).M.M[1][0] = 0.0;
  (this->RenderTransform).M.M[1][1] = 1.0;
  (this->RenderTransform).Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  this->bIsCached = '\0';
  (this->ClipStateHandle).CachedClipState = (FSlateClippingState *)0x0;
  (this->ClipStateHandle).PrecachedClipIndex = -1;
  return this;
}

// ApplyPositionOffset @ 142501cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateDrawElement::ApplyPositionOffset(FSlateDrawElement *this,FDeprecateVector2DParameter param_1)

{
  TVector2<float>_u_0 TVar1;
  float local_res10;
  float fStackX_14;
  undefined1 auStack_68 [32];
  float local_48;
  float fStack_44;
  TTransform2<float> local_40;
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_28.M.M[1] = _UNK_15076b188;
  local_28.M.M[0] = ___xmm_3f80000000000000000000003f800000;
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_res10 = param_1._0_4_;
  local_48 = local_res10 + (this->Position).field0_0x0._s_0.X;
  fStackX_14 = param_1._4_4_;
  fStack_44 = fStackX_14 + (this->Position).field0_0x0._s_0.Y;
  TVar1._s_0.Y = fStack_44;
  TVar1._s_0.X = local_48;
  (this->Position).field0_0x0 = TVar1;
  local_28.Trans.field0_0x0 = (TVector2<float>_u_0)param_1;
  Concatenate<TTransform2<float>_>(&local_40,&this->RenderTransform,&local_28);
  (this->RenderTransform).M.M[0] = local_40.M.M[0];
  (this->RenderTransform).M.M[1] = local_40.M.M[1];
  (this->RenderTransform).Trans.field0_0x0 = local_40.Trans.field0_0x0;
  return;
}

// GetRotationPoint @ 14250f130

TVector2<float> __cdecl
FSlateDrawElement::GetRotationPoint
          (FPaintGeometry *param_1,TOptional<UE::Math::TVector2<float>_> *param_2,
          ERotationSpace param_3)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  TVector2<float>_u_0 *pTVar4;
  TVector2<float> *pTVar5;
  undefined4 in_register_00000084;
  int in_R9D;
  undefined8 local_38;
  TVector2<float>_u_0 local_30;
  TTransform2<float> local_28;
  
  pTVar5 = (TVector2<float> *)CONCAT44(in_register_00000084,param_3);
  (param_1->DrawPosition).field0_0x0 = (TVector2<float>_u_0)0x0;
  if (in_R9D == 0) {
    local_38._0_4_ = (undefined4)*(undefined8 *)&param_2[1].bIsSet;
    pTVar4 = &local_30;
    if (*(char *)&pTVar5[1].field0_0x0 != '\0') {
      pTVar4 = (TVector2<float>_u_0 *)pTVar5;
    }
    local_30._s_0.X = (float)(undefined4)local_38 * __real_3f000000;
    local_38._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&param_2[1].bIsSet >> 0x20);
    local_30._s_0.Y = (float)local_38._4_4_ * __real_3f000000;
    (param_1->DrawPosition).field0_0x0 = *pTVar4;
  }
  else {
    if (in_R9D == 1) {
      TTransform2<float>::Inverse
                ((TTransform2<float> *)((longlong)&param_2[2].TypedValue.field0_0x0 + 4),&local_28);
      if (*(char *)&pTVar5[1].field0_0x0 == '\0') {
        pTVar5 = &UE::Math::TVector2<float>::ZeroVector;
      }
      local_38._4_4_ = (*(TVector2<float>_u_0_s_0 *)pTVar5).Y;
      local_28.M.M[1][0] = local_28.M.M[1][0] * (float)local_38._4_4_;
      local_38._0_4_ = (*(TVector2<float>_u_0_s_0 *)pTVar5).X;
      local_38._4_4_ =
           local_28.M.M[0][1] * (float)(undefined4)local_38 +
           local_28.M.M[1][1] * (float)local_38._4_4_ + local_28.Trans.field0_0x0._s_0.Y;
      local_38._0_4_ =
           local_28.M.M[0][0] * (float)(undefined4)local_38 + local_28.M.M[1][0] +
           local_28.Trans.field0_0x0._s_0.X;
      (param_1->DrawPosition).field0_0x0 = local_38;
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElementTypes.cpp"
                       ,0x349,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar3.field0_0x0;
    }
  }
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Init @ 1425105b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateDrawElement::Init
          (FSlateDrawElement *this,FSlateWindowElementList *param_1,EElementType param_2,
          uint param_3,FPaintGeometry *param_4,ESlateDrawEffect param_5)

{
  code *pcVar1;
  float afVar2 [2];
  bool bVar3;
  uint uVar4;
  int iVar5;
  FSlateApplicationBase *pFVar6;
  ForElementType<EWidgetPixelSnapping> FVar7;
  char cVar8;
  ESlateDrawEffect EVar9;
  
  EVar9 = param_5;
  if ((param_1->bIsInGameLayer != false) && (!bApplyDisabledEffectOnWidgets)) {
    EVar9 = param_5 & (ReverseGamma|IgnoreTextureAlpha|NoPixelSnapping|InvertAlpha|NoGamma|
                       PreMultipliedAlpha|NoBlending);
  }
  iVar5 = (param_1->PixelSnappingMethodStack).ArrayNum;
  if (iVar5 < 1) {
    cVar8 = '\0';
  }
  else {
    uVar4 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar4 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar7 = (param_1->PixelSnappingMethodStack).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<EWidgetPixelSnapping>)0x0) {
      FVar7 = (ForElementType<EWidgetPixelSnapping>)&param_1->PixelSnappingMethodStack;
    }
    cVar8 = ((undefined1 *)((longlong)FVar7 + -1))[(param_1->PixelSnappingMethodStack).ArrayNum];
  }
  if (cVar8 == '\x01') {
    EVar9 = EVar9 | NoPixelSnapping;
  }
  afVar2 = (param_4->AccumulatedRenderTransform).M.M[1];
  (this->RenderTransform).M.M[0] = (param_4->AccumulatedRenderTransform).M.M[0];
  (this->RenderTransform).M.M[1] = afVar2;
  (this->RenderTransform).Trans.field0_0x0 = (param_4->AccumulatedRenderTransform).Trans.field0_0x0;
  (this->Position).field0_0x0 = (param_4->DrawPosition).field0_0x0;
  this->Scale = param_4->DrawScale;
  (this->LocalSize).field0_0x0 = (param_4->LocalSize).field0_0x0;
  iVar5 = FSlateClippingManager::GetClippingIndex(&param_1->ClippingManager);
  (this->ClipStateHandle).PrecachedClipIndex = iVar5;
  this->LayerId = param_3;
  this->ElementType = param_2;
  this->DrawEffects = EVar9;
  pFVar6 = FSlateApplicationBase::Get();
  iVar5 = (**(code **)(((pFVar6->Renderer).Object)->_padding_ + 0x170))();
  if (0x7f < iVar5) {
    `FSlateDrawElement::Init'::__l8::<lambda_1>::operator()(&param_5);
  }
  this->SceneIndex = (schar)iVar5;
  this->BatchFlags = (ushort)(EVar9 & (InvertAlpha|NoGamma|PreMultipliedAlpha|NoBlending));
  if ((char)EVar9 < '\0') {
    this->BatchFlags = EVar9 & (InvertAlpha|NoGamma|PreMultipliedAlpha|NoBlending) | ReverseGamma;
  }
  return;
}

// MakeBox @ 1425124a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeBox
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FSlateBrush *param_4,ESlateDrawEffect param_5,FLinearColor *param_6)

{
  bool bVar1;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar1 = ShouldCull(param_1,param_3,param_4,param_6);
  if (!bVar1) {
    MakeBoxInternal(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// MakeBoxInternal @ 142512530

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDrawElement * __cdecl
FSlateDrawElement::MakeBoxInternal
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FSlateBrush *param_4,ESlateDrawEffect param_5,FLinearColor *param_6)

{
  uchar uVar1;
  undefined8 uVar2;
  longlong lVar3;
  FSlateRoundedBoxElement *this;
  FLinearColor *pFVar4;
  FSlateBoxElement *this_00;
  EElementType EVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_24;
  
  uVar1 = (param_4->DrawAs).Value;
  if (uVar1 == '\x02') {
    this_00 = FSlateWindowElementList::AddUninitialized<8>(param_1);
    lVar3 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
    this_00->_padding_ = *(longlong *)&param_6->field0_0x0;
    this_00->_padding_ = lVar3;
    FSlateBoxElement::SetBrush
              (this_00,param_4,(FDeprecateVector2DParameter)(param_3->LocalSize).field0_0x0._s_0,
               param_3->DrawScale);
    EVar5 = ET_Border;
  }
  else {
    if (uVar1 == '\x04') {
      this = FSlateWindowElementList::AddUninitialized<12>(param_1);
      fStackX_24 = (float)(param_4->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
      fVar10 = (float)(param_4->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
      fVar6 = (float)(param_4->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
      fVar7 = (float)(param_4->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
      if ((param_4->OutlineSettings).RoundingType.Value == '\x01') {
        fStackX_24 = (param_3->LocalSize).field0_0x0._s_0.Y;
        fStackX_24 = fStackX_24 * __real_3f000000;
        fVar10 = fStackX_24;
        fVar6 = fStackX_24;
        fVar7 = fStackX_24;
      }
      (this->Radius).field0_0x0._s_0.X = fStackX_24;
      (this->Radius).field0_0x0._s_0.Y = fVar10;
      (this->Radius).field0_0x0._s_0.Z = fVar6;
      (this->Radius).field0_0x0._s_0.W = fVar7;
      if ((param_4->OutlineSettings).bUseBrushTransparency == false) {
        fVar10 = (param_4->OutlineSettings).Width;
        if ((param_4->OutlineSettings).Color.ColorUseRule == UseColor_ColorTable) {
          pFVar4 = FSlateColor::GetColorFromTable(&(param_4->OutlineSettings).Color);
          fVar6 = (pFVar4->field0_0x0)._s_0.R;
          fVar7 = (pFVar4->field0_0x0)._s_0.G;
          fVar8 = (pFVar4->field0_0x0)._s_0.B;
          fVar9 = (pFVar4->field0_0x0)._s_0.A;
        }
        else {
          fVar6 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R;
          fVar7 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G;
          fVar8 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B;
          fVar9 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A;
        }
        (this->OutlineColor).field0_0x0._s_0.R = fVar6;
        (this->OutlineColor).field0_0x0._s_0.G = fVar7;
        (this->OutlineColor).field0_0x0._s_0.B = fVar8;
        (this->OutlineColor).field0_0x0._s_0.A = fVar9;
      }
      else {
        if ((param_4->OutlineSettings).Color.ColorUseRule == UseColor_ColorTable) {
          pFVar4 = FSlateColor::GetColorFromTable(&(param_4->OutlineSettings).Color);
          fVar6 = (pFVar4->field0_0x0)._s_0.R;
          fVar7 = (pFVar4->field0_0x0)._s_0.G;
          fVar8 = (pFVar4->field0_0x0)._s_0.B;
        }
        else {
          fVar6 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R;
          fVar7 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G;
          fVar8 = (param_4->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B;
        }
        fVar9 = (param_6->field0_0x0)._s_0.A;
        fVar10 = (param_4->OutlineSettings).Width;
        (this->OutlineColor).field0_0x0._s_0.R = fVar6;
        (this->OutlineColor).field0_0x0._s_0.G = fVar7;
        (this->OutlineColor).field0_0x0._s_0.B = fVar8;
        (this->OutlineColor).field0_0x0._s_0.A = fVar9;
      }
      this->OutlineWeight = fVar10;
      uVar2 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
      *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_6->field0_0x0;
      *(undefined8 *)&this->field_0x50 = uVar2;
      FSlateBoxElement::SetBrush
                ((FSlateBoxElement *)this,param_4,
                 (FDeprecateVector2DParameter)(param_3->LocalSize).field0_0x0._s_0,
                 param_3->DrawScale);
      Init((FSlateDrawElement *)this,param_1,ET_RoundedBox,param_2,param_3,param_5);
      return (FSlateDrawElement *)this;
    }
    this_00 = FSlateWindowElementList::AddUninitialized<0>(param_1);
    lVar3 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
    this_00->_padding_ = *(longlong *)&param_6->field0_0x0;
    this_00->_padding_ = lVar3;
    FSlateBoxElement::SetBrush
              (this_00,param_4,(FDeprecateVector2DParameter)(param_3->LocalSize).field0_0x0._s_0,
               param_3->DrawScale);
    EVar5 = ET_Box;
  }
  Init((FSlateDrawElement *)this_00,param_1,EVar5,param_2,param_3,param_5);
  return (FSlateDrawElement *)this_00;
}

// MakeCubicBezierSpline @ 142512900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeCubicBezierSpline
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FDeprecateVector2DParameter param_4,FDeprecateVector2DParameter param_5,
          FDeprecateVector2DParameter param_6,FDeprecateVector2DParameter param_7,float param_8,
          ESlateDrawEffect param_9,FLinearColor *param_10)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  FSlateSplineElement *this;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar3 = ShouldCull(param_1);
  if (!bVar3) {
    this = FSlateWindowElementList::AddUninitialized<4>(param_1);
    lVar1 = *(longlong *)&param_10->field0_0x0;
    lVar2 = *(longlong *)((longlong)&param_10->field0_0x0 + 8);
    (this->P1).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_5;
    (this->P2).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_6;
    (this->P3).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_7;
    this->_padding_ = lVar1;
    this->_padding_ = lVar2;
    (this->P0).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_4;
    this->Thickness = param_8;
    Init((FSlateDrawElement *)this,param_1,ET_Spline,param_2,param_3,param_9);
  }
  return;
}

// MakeCustom @ 1425129c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeCustom
          (FSlateWindowElementList *param_1,uint param_2,TSharedPtr<ICustomSlateElement,1> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSlateCustomDrawerElement *this;
  TVector2<float>_u_0 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  byte local_1c;
  
  bVar5 = ShouldCull(param_1);
  if (!bVar5) {
    this = FSlateWindowElementList::AddUninitialized<9>(param_1);
    (this->CustomDrawer).Object = param_3->Object;
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->CustomDrawer).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->CustomDrawer).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->CustomDrawer).WeakReferenceCount.ReferenceController = pTVar3;
    }
    local_50 = ___xmm_000000003f8000000000000000000000;
    uStack_48 = _UNK_150689538;
    local_24 = 0;
    local_1c = local_1c & 0xfd | 1;
    local_40 = 0;
    local_38 = 0;
    local_34 = ___xmm_3f80000000000000000000003f800000;
    uStack_2c = _UNK_15076b188;
    Init((FSlateDrawElement *)this,param_1,ET_Custom,param_2,(FPaintGeometry *)&local_50._s_0,None);
    this->_padding_ = 0x3f800000;
    *(undefined4 *)&this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
    this->_padding_ = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// MakeCustomVerts @ 142512b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeCustomVerts
          (FSlateWindowElementList *param_1,uint param_2,FSlateResourceHandle *param_3,
          TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5,
          ISlateUpdatableInstanceBuffer *param_6,uint param_7,uint param_8,ESlateDrawEffect param_9)

{
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  FSlateSharedHandleData *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeCustomVertsTime> FVar12;
  FSlateCustomVertsElement *this;
  ISlateUpdatableInstanceBufferRenderProxy *pIVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FSlateShaderResourceProxy *pFVar17;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FName local_c0;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *local_b8;
  FColor_u_0 local_b0 [2];
  LARGE_INTEGER local_a8;
  FName local_a0;
  FStatMessage local_90;
  TVector2<float>_u_0 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  byte local_4c;
  FName local_48 [2];
  
  local_c8 = CONCAT44(local_c8._4_4_,param_2);
  FVar12 = StatPtr_STAT_SlateDrawElementMakeCustomVertsTime;
  local_b8 = param_4;
  local_a8 = (LARGE_INTEGER)param_1;
  if (StatPtr_STAT_SlateDrawElementMakeCustomVertsTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeCustomVertsTime>)0x0) {
    pFVar11 = ::FName::FName(local_48,"STAT_SlateDrawElementMakeCustomVertsTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeCustomVertsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SlateDrawElementMakeCustomVertsTime,*pFVar11,
                        L"FSlateDrawElement::MakeCustomVerts Time","STATGROUP_Slate",
                        "STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar7 = false;
  bVar9 = false;
  FVar16 = *(FName *)FVar12;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b0[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar15.Value;
        local_c0.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElementTypes.cpp"
                   ,0x304);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0.ComparisonIndex.Value = FVar15.Value;
      local_c0.Number = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_142512c50;
    }
  }
  bVar8 = false;
  FVar16 = local_a0;
LAB_142512c50:
  bVar10 = ShouldCull(param_1);
  if (!bVar10) {
    this = FSlateWindowElementList::AddUninitialized<10>(param_1);
    pFVar5 = (param_3->Data).Object;
    if (pFVar5 == (FSlateSharedHandleData *)0x0) {
      pFVar17 = (FSlateShaderResourceProxy *)0x0;
    }
    else {
      pFVar17 = pFVar5->Proxy;
    }
    if (param_6 == (ISlateUpdatableInstanceBuffer *)0x0) {
      pIVar13 = (ISlateUpdatableInstanceBufferRenderProxy *)0x0;
    }
    else {
      pIVar13 = (ISlateUpdatableInstanceBufferRenderProxy *)
                (**(code **)((longlong)*param_6 + 0x10))();
    }
    iVar4 = param_5->ArrayNum;
    pFVar6 = (param_5->AllocatorInstance).Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = CONCAT44(local_d0._4_4_,iVar4);
    if (iVar4 == 0) {
      local_d0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,0,&local_d8,iVar4,(int *)((longlong)&local_d0 + 4));
      memcpy(local_d8.Data,pFVar6,(longlong)iVar4 << 2);
    }
    local_e8.Data = (FScriptContainerElement *)0x0;
    iVar4 = local_b8->ArrayNum;
    pFVar6 = (local_b8->AllocatorInstance).Data;
    local_e0 = CONCAT44(local_e0._4_4_,iVar4);
    if (iVar4 == 0) {
      local_e0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2c,4,iVar4,0,&local_e8,iVar4,(int *)((longlong)&local_e0 + 4));
      memcpy(local_e8.Data,pFVar6,(longlong)iVar4 * 0x2c);
    }
    pTVar1 = &this->Vertices;
    this->ResourceProxy = pFVar17;
    if (pTVar1 != (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)&local_e8) {
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar1->AllocatorInstance).Data = local_e8.Data;
      (this->Vertices).ArrayNum = (int)local_e0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      (this->Vertices).ArrayMax = local_e0._4_4_;
      local_e0 = 0;
    }
    pTVar2 = &this->Indices;
    if (pTVar2 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_d8) {
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar2->AllocatorInstance).Data = local_d8.Data;
      (this->Indices).ArrayNum = (int)local_d0;
      (this->Indices).ArrayMax = local_d0._4_4_;
      local_d0 = 0;
      local_d8.Data = (FScriptContainerElement *)0x0;
    }
    this->InstanceOffset = param_7;
    this->NumInstances = param_8;
    this->InstanceData = pIVar13;
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    local_80 = ___xmm_000000003f8000000000000000000000;
    uStack_78 = _UNK_150689538;
    local_b8 = (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *)0x0;
    local_54 = 0;
    local_70 = 0;
    local_4c = local_4c & 0xfd | 1;
    local_68 = 0;
    local_64 = ___xmm_3f80000000000000000000003f800000;
    uStack_5c = _UNK_15076b188;
    Init((FSlateDrawElement *)this,(FSlateWindowElementList *)local_a8,ET_CustomVerts,(uint)local_c8
         ,(FPaintGeometry *)&local_80._s_0,param_9);
    this->_padding_ = 0x3f800000;
    *(undefined4 *)&this->_padding_ = 0;
    local_c8 = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
    this->_padding_ = 0;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_90.StatData.Pad = (uchar  [8])(local_a8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_90);
      piVar3 = &this_00->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// MakeDashedLines @ 142512fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeDashedLines
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_5,ESlateDrawEffect param_6,
          FLinearColor *param_7,float param_8,float param_9,float param_10)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  bool bVar9;
  FSlateLineElement *this;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar9 = ShouldCull(param_1);
  if ((!bVar9) && (1 < param_4->ArrayNum)) {
    this = FSlateWindowElementList::AddUninitialized<5>(param_1);
    lVar8 = *(longlong *)((longlong)&param_7->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_7->field0_0x0;
    this->_padding_ = lVar8;
    this->Thickness = param_8;
    pFVar7 = (param_5->AllocatorInstance).Data;
    (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar3 = param_5->ArrayNum;
    iVar4 = param_5->ArrayMax;
    param_5->ArrayNum = 0;
    param_5->ArrayMax = 0;
    pFVar11 = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = param_4->ArrayNum;
    iVar6 = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    pTVar1 = &this->Points;
    this->bAntialias = true;
    pFVar10 = pFVar11;
    if (pTVar1 != (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)local_48) {
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (FScriptContainerElement *)0x0;
      (pTVar1->AllocatorInstance).Data = pFVar11;
      (this->Points).ArrayNum = iVar5;
      (this->Points).ArrayMax = iVar6;
    }
    pTVar2 = &this->PointColors;
    pFVar11 = pFVar7;
    if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)local_38) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (FScriptContainerElement *)0x0;
      (pTVar2->AllocatorInstance).Data = pFVar7;
      (this->PointColors).ArrayNum = iVar3;
      (this->PointColors).ArrayMax = iVar4;
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    this->DashLength = param_9;
    this->DashOffset = param_10;
    Init((FSlateDrawElement *)this,param_1,ET_Line,param_2,param_3,param_6 | NoPixelSnapping);
  }
  return;
}

// MakeDashedLines @ 142513150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeDashedLines
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4,
          ESlateDrawEffect param_5,FLinearColor *param_6,float param_7,float param_8,float param_9)

{
  longlong lVar1;
  bool bVar2;
  FSlateLineElement *this;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_18;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar2 = ShouldCull(param_1);
  if ((!bVar2) && (1 < param_4->ArrayNum)) {
    this = FSlateWindowElementList::AddUninitialized<5>(param_1);
    lVar1 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_6->field0_0x0;
    this->_padding_ = lVar1;
    this->Thickness = param_7;
    local_18.AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18.ArrayMax = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    FSlateLineElement::SetLines(this,&local_18,true);
    this->DashLength = param_8;
    this->DashOffset = param_9;
    Init((FSlateDrawElement *)this,param_1,ET_Line,param_2,param_3,param_5 | NoPixelSnapping);
  }
  return;
}

// MakeDebugQuad @ 142513250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeDebugQuad
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FLinearColor *param_4)

{
  longlong lVar1;
  bool bVar2;
  FSlateBoxElement *this;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar2 = ShouldCull(param_1);
  if (!bVar2) {
    this = FSlateWindowElementList::AddUninitialized<1>(param_1);
    lVar1 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_4->field0_0x0;
    this->_padding_ = lVar1;
    Init((FSlateDrawElement *)this,param_1,ET_DebugQuad,param_2,param_3,None);
  }
  return;
}

// MakeDrawSpaceSpline @ 1425132d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeDrawSpaceSpline
          (FSlateWindowElementList *param_1,uint param_2,FDeprecateVector2DParameter param_3,
          FDeprecateVector2DParameter param_4,FDeprecateVector2DParameter param_5,
          FDeprecateVector2DParameter param_6,float param_7,ESlateDrawEffect param_8,
          FLinearColor *param_9)

{
  longlong lVar1;
  longlong lVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  float fVar5;
  bool bVar6;
  FSlateSplineElement *this;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  TVector2<float>_u_0 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined8 local_14;
  byte local_c;
  
  local_40 = ___xmm_000000003f8000000000000000000000;
  uStack_38 = _UNK_150689538;
  local_30 = 0;
  local_24 = ___xmm_3f80000000000000000000003f800000;
  uStack_1c = _UNK_15076b188;
  local_28 = 0;
  local_14 = 0;
  local_c = local_c & 0xfd | 1;
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor((FPaintGeometry *)&local_40._s_0);
  bVar6 = ShouldCull(param_1);
  if (!bVar6) {
    this = FSlateWindowElementList::AddUninitialized<4>(param_1);
    fVar5 = __real_3eaaaaab;
    lVar1 = *(longlong *)&param_9->field0_0x0;
    lVar2 = *(longlong *)((longlong)&param_9->field0_0x0 + 8);
    (this->P0).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_3;
    fStack_4c = param_6._4_4_;
    this->_padding_ = lVar1;
    this->_padding_ = lVar2;
    local_68 = param_4._0_4_;
    fStack_64 = param_4._4_4_;
    (this->P3).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_5;
    fStack_54 = param_3._4_4_;
    local_58 = param_3._0_4_;
    local_48 = param_5._0_4_;
    TVar3._s_0.Y = fStack_64 * fVar5 + fStack_54;
    TVar3._s_0.X = local_68 * fVar5 + local_58;
    local_50 = param_6._0_4_;
    (this->P1).field0_0x0 = TVar3;
    fStack_44 = param_5._4_4_;
    TVar4._s_0.Y = fStack_44 - fStack_4c * fVar5;
    TVar4._s_0.X = local_48 - local_50 * fVar5;
    (this->P2).field0_0x0 = TVar4;
    this->Thickness = param_7;
    Init((FSlateDrawElement *)this,param_1,ET_Spline,param_2,(FPaintGeometry *)&local_40._s_0,
         param_8);
  }
  return;
}

// MakeGeometryOutline @ 142513900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeGeometryOutline
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FLinearColor *param_4,ESlateDrawEffect param_5,bool param_6,float param_7)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FSlateLineElement *this;
  ESlateDrawEffect EVar7;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TVector2<float>_u_0_s_0 local_a8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_a0;
  undefined8 local_90;
  float fStack_84;
  float fStack_78;
  TVector2<float>_u_0 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  local_a8 = (param_3->LocalSize).field0_0x0._s_0;
  fVar4 = local_a8.X;
  fVar5 = local_a8.Y;
  local_90 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_70 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fStack_84 = 0.0;
  fStack_78 = 0.0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,0,&local_b8,5,(int *)((longlong)&local_b0 + 4));
  iVar3 = (int)local_b0;
  FVar2.Data = local_b8.Data;
  *(float *)local_b8.Data = (float)local_90;
  *(float *)(local_b8.Data + 4) = local_90._4_4_;
  *(float *)(local_b8.Data + 8) = fVar4;
  *(float *)(local_b8.Data + 0xc) = fStack_84;
  *(float *)(local_b8.Data + 0x10) = fVar4;
  *(float *)(local_b8.Data + 0x14) = fVar5;
  *(float *)(local_b8.Data + 0x18) = fStack_78;
  *(float *)(local_b8.Data + 0x1c) = fVar5;
  ((TVector2<float>_u_0 *)(local_b8.Data + 0x20))->_s_0 = (TVector2<float>_u_0_s_0)local_70;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_a8.X = (float)local_b0._4_4_;
  local_b0 = 0;
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar6 = ShouldCull(param_1);
  if ((bVar6) || (iVar3 < 2)) {
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
  }
  else {
    this = FSlateWindowElementList::AddUninitialized<5>(param_1);
    lVar1 = *(longlong *)((longlong)&param_4->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_4->field0_0x0;
    this->_padding_ = lVar1;
    local_a0.AllocatorInstance.Data = FVar2.Data;
    this->Thickness = param_7;
    local_a0.ArrayMax = (int)local_a8.X;
    local_a0.ArrayNum = iVar3;
    FSlateLineElement::SetLines(this,&local_a0,param_6);
    EVar7 = param_5 | NoPixelSnapping;
    if (!param_6) {
      EVar7 = param_5;
    }
    Init((FSlateDrawElement *)this,param_1,ET_Line,param_2,param_3,EVar7);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// MakeGradient @ 142513af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeGradient
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *param_4,EOrientation param_5,
          ESlateDrawEffect param_6,TVector4<float> *param_7)

{
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  TVector2<float>_u_0_s_0 TVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  FSlateGradientElement *this;
  FScriptContainerElement *pFVar8;
  float local_res18;
  float fStackX_1c;
  undefined8 local_48 [2];
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  TVar4 = (param_3->LocalSize).field0_0x0._s_0;
  local_res18 = TVar4.X;
  fStackX_1c = TVar4.Y;
  if ((0.0 < param_3->DrawScale * local_res18) && (0.0 < param_3->DrawScale * fStackX_1c)) {
    bVar7 = ShouldCull(param_1);
    if (!bVar7) {
      this = FSlateWindowElementList::AddUninitialized<6>(param_1);
      pFVar8 = (param_4->AllocatorInstance).Data;
      (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar2 = param_4->ArrayNum;
      iVar3 = param_4->ArrayMax;
      pTVar1 = &this->GradientStops;
      param_4->ArrayNum = 0;
      param_4->ArrayMax = 0;
      if (pTVar1 != (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *)local_48) {
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pTVar1->AllocatorInstance).Data = pFVar8;
        pFVar8 = (FScriptContainerElement *)0x0;
        (this->GradientStops).ArrayNum = iVar2;
        (this->GradientStops).ArrayMax = iVar3;
      }
      this->GradientType = param_5;
      uVar6 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
      *(undefined8 *)&(this->CornerRadius).field0_0x0 = *(undefined8 *)&param_7->field0_0x0;
      *(undefined8 *)((longlong)&(this->CornerRadius).field0_0x0 + 8) = uVar6;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      Init((FSlateDrawElement *)this,param_1,ET_Gradient,param_2,param_3,param_6);
    }
  }
  pFVar8 = (param_4->AllocatorInstance).Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// MakeLines @ 142513c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeLines
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_5,ESlateDrawEffect param_6,
          FLinearColor *param_7,bool param_8,float param_9)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_68 [4];
  float local_64;
  float fStack_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_38;
  
  bVar3 = ShouldCull(param_1);
  if ((!bVar3) && (1 < param_4->ArrayNum)) {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_4->ArrayNum,&local_58,0,(int *)((longlong)&local_50 + 4));
    iVar1 = param_4->ArrayNum;
    pFVar5 = (param_4->AllocatorInstance).Data;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_4->ArrayNum != iVar1) {
        local_68[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_68);
      }
      if (pFVar5 == pFVar7) break;
      local_64 = (float)*(double *)pFVar5;
      fStack_60 = (float)*(double *)(pFVar5 + 8);
      if (((local_58.Data <= (FScriptContainerElement *)&local_64) &&
          ((FScriptContainerElement *)&local_64 < local_58.Data + (longlong)local_50._4_4_ * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_58,(int *)((longlong)&local_50 + 4));
      }
      pFVar5 = pFVar5 + 0x10;
      local_50 = CONCAT44(local_50._4_4_,iVar4 + 1);
      *(ulonglong *)(local_58.Data + (longlong)iVar4 * 8) = CONCAT44(fStack_60,local_64);
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = param_5->ArrayNum;
    lVar6 = (longlong)local_48.ArrayNum;
    pFVar5 = (param_5->AllocatorInstance).Data;
    if (local_48.ArrayNum == 0) {
      local_48.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
                 &local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data,pFVar5,lVar6 << 4);
    }
    local_38.AllocatorInstance.Data = local_58.Data;
    local_38.ArrayNum = (int)local_50;
    local_38.ArrayMax = local_50._4_4_;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    MakeLines(param_1,param_2,param_3,&local_38,&local_48,param_6,param_7,param_8,param_9);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// MakeLines @ 142513ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeLines
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          ESlateDrawEffect param_5,FLinearColor *param_6,bool param_7,float param_8)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FSlateLineElement *this;
  ESlateDrawEffect EVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_58 [4];
  float local_54;
  float fStack_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_38;
  
  bVar6 = ShouldCull(param_1);
  if ((!bVar6) && (1 < param_4->ArrayNum)) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_4->ArrayNum,&local_48,0,(int *)((longlong)&local_40 + 4));
    iVar1 = param_4->ArrayNum;
    pFVar9 = (param_4->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_4->ArrayNum != iVar1) {
        local_58[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_58);
      }
      FVar4.Data = local_48.Data;
      iVar7 = (int)local_40;
      iVar5 = local_40._4_4_;
      if (pFVar9 == pFVar10) break;
      local_54 = (float)*(double *)pFVar9;
      fStack_50 = (float)*(double *)(pFVar9 + 8);
      if (((local_48.Data <= (FScriptContainerElement *)&local_54) &&
          ((FScriptContainerElement *)&local_54 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_48,(int *)((longlong)&local_40 + 4));
      }
      pFVar9 = pFVar9 + 0x10;
      local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
      *(ulonglong *)(local_48.Data + (longlong)iVar7 * 8) = CONCAT44(fStack_50,local_54);
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
    bVar6 = ShouldCull(param_1);
    if ((bVar6) || (iVar7 < 2)) {
      if (FVar4.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar4.Data);
      }
    }
    else {
      this = FSlateWindowElementList::AddUninitialized<5>(param_1);
      local_38.AllocatorInstance.Data = FVar4.Data;
      lVar3 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
      local_38.ArrayNum = iVar7;
      local_38.ArrayMax = iVar5;
      this->_padding_ = *(longlong *)&param_6->field0_0x0;
      this->_padding_ = lVar3;
      this->Thickness = param_8;
      FSlateLineElement::SetLines(this,&local_38,param_7);
      EVar8 = param_5 | NoPixelSnapping;
      if (!param_7) {
        EVar8 = param_5;
      }
      Init((FSlateDrawElement *)this,param_1,ET_Line,param_2,param_3,EVar8);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// MakeLines @ 142514120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeLines
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_5,ESlateDrawEffect param_6,
          FLinearColor *param_7,bool param_8,float param_9)

{
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  bool bVar9;
  FSlateLineElement *this;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar9 = ShouldCull(param_1);
  if ((bVar9) || (param_4->ArrayNum < 2)) {
    pFVar10 = (param_4->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    pFVar10 = (param_5->AllocatorInstance).Data;
  }
  else {
    this = FSlateWindowElementList::AddUninitialized<5>(param_1);
    pTVar1 = &this->Points;
    lVar8 = *(longlong *)((longlong)&param_7->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_7->field0_0x0;
    this->_padding_ = lVar8;
    this->Thickness = param_9;
    pFVar10 = (param_5->AllocatorInstance).Data;
    (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar3 = param_5->ArrayNum;
    iVar4 = param_5->ArrayMax;
    param_5->ArrayNum = 0;
    param_5->ArrayMax = 0;
    pFVar11 = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = param_4->ArrayNum;
    iVar6 = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    this->bAntialias = param_8;
    if (pTVar1 != (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)local_48) {
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->AllocatorInstance).Data = pFVar11;
      pFVar11 = (FScriptContainerElement *)0x0;
      (this->Points).ArrayNum = iVar5;
      (this->Points).ArrayMax = iVar6;
    }
    pTVar2 = &this->PointColors;
    if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)local_38) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->AllocatorInstance).Data = pFVar10;
      pFVar10 = (FScriptContainerElement *)0x0;
      (this->PointColors).ArrayNum = iVar3;
      (this->PointColors).ArrayMax = iVar4;
    }
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    Init((FSlateDrawElement *)this,param_1,ET_Line,param_2,param_3,param_6);
    pFVar10 = (param_4->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    pFVar10 = (param_5->AllocatorInstance).Data;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

// MakeLines @ 142514300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeLines
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4,
          ESlateDrawEffect param_5,FLinearColor *param_6,bool param_7,float param_8)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  FSlateLineElement *this;
  ESlateDrawEffect EVar4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_18;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar3 = ShouldCull(param_1);
  if ((!bVar3) && (1 < param_4->ArrayNum)) {
    this = FSlateWindowElementList::AddUninitialized<5>(param_1);
    lVar2 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_6->field0_0x0;
    this->_padding_ = lVar2;
    this->Thickness = param_8;
    local_18.AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18.ArrayMax = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    FSlateLineElement::SetLines(this,&local_18,param_7);
    EVar4 = param_5 | NoPixelSnapping;
    if (!param_7) {
      EVar4 = param_5;
    }
    Init((FSlateDrawElement *)this,param_1,ET_Line,param_2,param_3,EVar4);
  }
  pFVar1 = (param_4->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// MakePostProcessBlur @ 142514410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakePostProcessBlur
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TVector4<float> *param_4,int param_5,TVector4<float> *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  FSlatePostProcessElement *this;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar2 = ShouldCull(param_1);
  if (!bVar2) {
    this = FSlateWindowElementList::AddUninitialized<11>(param_1);
    this->DownsampleAmount = param_5;
    uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessData).field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessData).field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    *(undefined8 *)&(this->CornerRadius).field0_0x0 = *(undefined8 *)&param_6->field0_0x0;
    *(undefined8 *)((longlong)&(this->CornerRadius).field0_0x0 + 8) = uVar1;
    Init((FSlateDrawElement *)this,param_1,ET_PostProcessPass,param_2,param_3,None);
  }
  return;
}

// MakePostProcessPass @ 1425144a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakePostProcessPass
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TVector4<float> *param_4,int param_5,TVector4<float> *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  FSlatePostProcessElement *this;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar2 = ShouldCull(param_1);
  if (!bVar2) {
    this = FSlateWindowElementList::AddUninitialized<11>(param_1);
    this->DownsampleAmount = param_5;
    uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessData).field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessData).field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    *(undefined8 *)&(this->CornerRadius).field0_0x0 = *(undefined8 *)&param_6->field0_0x0;
    *(undefined8 *)((longlong)&(this->CornerRadius).field0_0x0 + 8) = uVar1;
    Init((FSlateDrawElement *)this,param_1,ET_PostProcessPass,param_2,param_3,None);
  }
  return;
}

// MakeRotatedBox @ 142514530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeRotatedBox
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FSlateBrush *param_4,ESlateDrawEffect param_5,float param_6,
          FDeprecateOptionalVector2DParameter *param_7,ERotationSpace param_8,FLinearColor *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FSlateDrawElement *pFVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float extraout_XMM0_Db;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  TVector2<float>_u_0 local_b0 [16];
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar5 = ShouldCull(param_1,param_3,param_4,param_9);
  if ((!bVar5) &&
     (pFVar6 = MakeBoxInternal(param_1,param_2,param_3,param_4,param_5,param_9), param_6 != 0.0)) {
    GetRotationPoint((FPaintGeometry *)&local_b0[0]._s_0,
                     (TOptional<UE::Math::TVector2<float>_> *)param_3,(ERotationSpace)param_7);
    __libm_sse2_sincosf_();
    fVar1 = (pFVar6->RenderTransform).M.M[0][1];
    fVar2 = (pFVar6->RenderTransform).M.M[1][1];
    fVar9 = (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
    fVar3 = (pFVar6->RenderTransform).M.M[1][0];
    fVar4 = (pFVar6->RenderTransform).M.M[0][0];
    fVar7 = (extraout_XMM0_Db * (float)(local_b0[0]._s_0.X ^ __xmm_80000000800000008000000080000000)
            - extraout_XMM0_Da *
              (float)(local_b0[0]._s_0.Y ^ __xmm_80000000800000008000000080000000)) +
            (float)local_b0[0]._0_4_;
    fVar8 = extraout_XMM0_Db * (float)(local_b0[0]._s_0.Y ^ __xmm_80000000800000008000000080000000)
            + extraout_XMM0_Da *
              (float)(local_b0[0]._s_0.X ^ __xmm_80000000800000008000000080000000) +
            (float)local_b0[0]._4_4_;
    local_b8._4_4_ =
         fVar2 * fVar8 + fVar1 * fVar7 + (pFVar6->RenderTransform).Trans.field0_0x0._s_0.Y;
    local_b8._0_4_ =
         fVar4 * fVar7 + fVar3 * fVar8 + (pFVar6->RenderTransform).Trans.field0_0x0._s_0.X;
    (pFVar6->RenderTransform).M.M[0][0] = extraout_XMM0_Db * fVar4 + extraout_XMM0_Da * fVar3;
    (pFVar6->RenderTransform).M.M[0][1] = extraout_XMM0_Da * fVar2 + extraout_XMM0_Db * fVar1;
    (pFVar6->RenderTransform).M.M[1][0] = fVar9 * fVar4 + extraout_XMM0_Db * fVar3;
    (pFVar6->RenderTransform).M.M[1][1] = fVar9 * fVar1 + extraout_XMM0_Db * fVar2;
    (pFVar6->RenderTransform).Trans.field0_0x0 = local_b8;
  }
  return;
}

// MakeRotatedShapedText @ 142514880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeRotatedShapedText
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TSharedRef<FShapedGlyphSequence_const_,1> *param_4,ESlateDrawEffect param_5,
          FLinearColor *param_6,FLinearColor *param_7,float param_8,
          FDeprecateOptionalVector2DParameter *param_9,ERotationSpace param_10,
          FTextOverflowArgs *param_11)

{
  int *piVar1;
  float afVar2 [2];
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime> FVar11;
  FSlateShapedTextElement *this;
  TTransform2<float> *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar13;
  FNameEntryId FVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  FName local_b8;
  TVector2<float>_u_0 local_b0;
  TTransform2<float> local_a8;
  LARGE_INTEGER local_90;
  FName local_88;
  FTextOverflowArgs *local_78;
  TTransform2<float> local_70 [2];
  
  local_78 = param_11;
  local_b0._s_0.X = (float)param_2;
  FVar14.Value = 0;
  FVar11 = StatPtr_STAT_SlateDrawElementMakeTime;
  local_90 = (LARGE_INTEGER)param_1;
  if (StatPtr_STAT_SlateDrawElementMakeTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_a8,"STAT_SlateDrawElementMakeTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawElementMakeTime,*pFVar10
                        ,L"FSlateDrawElement::Make Time","STATGROUP_SlateVerbose","STATCAT_Advanced"
                        ,L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8 = (FName)((ulonglong)local_b8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8 = FVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElementTypes.cpp"
                   ,0x201);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8 = FVar13;
      local_88 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      FVar14.Value = local_88.ComparisonIndex.Value;
      goto LAB_1425149e8;
    }
  }
  bVar7 = false;
  FVar13 = local_88;
LAB_1425149e8:
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  if ((param_4->Object->GlyphsToRender).ArrayNum != 0) {
    local_b8.ComparisonIndex.Value = (uint)*(float *)&(param_3->LocalSize).field0_0x0;
    local_b8.Number = *(uint *)((longlong)&(param_3->LocalSize).field0_0x0 + 4);
    if ((((0.0 < (float)local_b8.ComparisonIndex.Value * param_3->DrawScale) &&
         (0.0 < (float)local_b8.Number * param_3->DrawScale)) &&
        (bVar9 = ShouldCull(param_1), !bVar9)) &&
       (((param_6->field0_0x0)._s_0.A != 0.0 ||
        (((param_4->Object->OutlineSettings).OutlineSize != 0 &&
         ((param_7->field0_0x0)._s_0.A != 0.0)))))) {
      SlateDrawElement::CheckInvalidUMaterial
                ((param_4->Object->FontMaterial).field0_0x0.DebugPtr,L"Font Material");
      SlateDrawElement::CheckInvalidUMaterial
                ((param_4->Object->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr,
                 L"Outline Material");
      this = FSlateWindowElementList::AddUninitialized<3>(param_1);
      lVar4 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
      this->_padding_ = *(longlong *)&param_6->field0_0x0;
      this->_padding_ = lVar4;
      afVar2 = (float  [2])(param_4->SharedReferenceCount).ReferenceController;
      local_a8.M.M[0] = (float  [2])param_4->Object;
      if (afVar2 != (float  [2])0x0) {
        LOCK();
        *(atomic<int> *)((longlong)afVar2 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)afVar2 + 8) + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)((longlong)afVar2 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)afVar2 + 8) + 1);
        UNLOCK();
      }
      pTVar3 = (this->ShapedGlyphSequence).SharedReferenceCount.ReferenceController;
      (this->ShapedGlyphSequence).Object = (FShapedGlyphSequence *)local_a8.M.M[0];
      (this->ShapedGlyphSequence).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)afVar2;
      local_a8.M.M[1] = afVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar5 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
      *(undefined8 *)&(this->OutlineTint).field0_0x0 = *(undefined8 *)&param_7->field0_0x0;
      *(undefined8 *)((longlong)&(this->OutlineTint).field0_0x0 + 8) = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)afVar2);
      FSlateShapedTextElement::SetOverflowArgs(this,local_78);
      Init((FSlateDrawElement *)this,(FSlateWindowElementList *)local_90,ET_ShapedText,
           (uint)local_b0._s_0.X,param_3,param_5);
      if (param_8 != 0.0) {
        GetRotationPoint((FPaintGeometry *)&local_b0._s_0,
                         (TOptional<UE::Math::TVector2<float>_> *)param_3,(ERotationSpace)param_9);
        __libm_sse2_sincosf_();
        local_b8.ComparisonIndex.Value =
             (uint)(extraout_XMM0_Db *
                    (float)((uint)local_b0._s_0.X ^ __xmm_80000000800000008000000080000000) -
                   extraout_XMM0_Da *
                   (float)((uint)local_b0._s_0.Y ^ __xmm_80000000800000008000000080000000));
        local_b8.Number =
             (uint)(extraout_XMM0_Db *
                    (float)((uint)local_b0._s_0.Y ^ __xmm_80000000800000008000000080000000) +
                   extraout_XMM0_Da *
                   (float)((uint)local_b0._s_0.X ^ __xmm_80000000800000008000000080000000));
        local_70[0].M.M[1][0] =
             (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
        local_a8.Trans.field0_0x0 = (TVector2<float>_u_0)local_b8;
        local_a8.M.M[0][1] = extraout_XMM0_Da;
        local_a8.M.M[0][0] = extraout_XMM0_Db;
        local_a8.M.M[1][1] = extraout_XMM0_Db;
        local_a8.M.M[1][0] = local_70[0].M.M[1][0];
        local_70[0].Trans.field0_0x0._4_4_ = (float)local_b8.Number + local_b0._s_0.Y;
        local_70[0].Trans.field0_0x0._0_4_ = (float)local_b8.ComparisonIndex.Value + local_b0._s_0.X
        ;
        pTVar12 = Concatenate<TTransform2<float>_>(&local_a8,local_70,(TTransform2<float> *)this);
        afVar2 = (pTVar12->M).M[1];
        this->_padding_ = (longlong)(pTVar12->M).M[0];
        this->_padding_ = (longlong)afVar2;
        this->_padding_ = (longlong)(pTVar12->Trans).field0_0x0;
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.M.M[1] =
           (float  [2])(CONCAT44(FVar13.Number,FVar14.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_90);
      local_a8.M.M[0] = (float  [2])(local_90.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// MakeShapedText @ 142514d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeShapedText
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TSharedRef<FShapedGlyphSequence_const_,1> *param_4,ESlateDrawEffect param_5,
          FLinearColor *param_6,FLinearColor *param_7,FTextOverflowArgs *param_8)

{
  float *pfVar1;
  int *piVar2;
  FStatNameAndInfo FVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  LARGE_INTEGER this;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar12;
  undefined4 uVar13;
  LARGE_INTEGER local_res20;
  FStatMessage local_58;
  LARGE_INTEGER local_48;
  
  uVar13 = 0;
  FVar11 = StatPtr_STAT_SlateDrawElementMakeTime;
  if (StatPtr_STAT_SlateDrawElementMakeTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_58,"STAT_SlateDrawElementMakeTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawElementMakeTime,*pFVar10
                        ,L"FSlateDrawElement::Make Time","STATGROUP_SlateVerbose","STATCAT_Advanced"
                        ,L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.QuadPart = local_res20.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElementTypes.cpp"
                   ,0x1d2);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = LVar12;
      local_48 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar7 = true;
      uVar13 = local_48._0_4_;
      goto LAB_142514eaa;
    }
  }
  bVar7 = false;
  LVar12 = local_48;
LAB_142514eaa:
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  if ((param_4->Object->GlyphsToRender).ArrayNum != 0) {
    local_res20 = (LARGE_INTEGER)*(LARGE_INTEGER *)&(param_3->LocalSize).field0_0x0._s_0;
    if ((((0.0 < param_3->DrawScale * (float)local_res20.s.LowPart) &&
         (0.0 < param_3->DrawScale * (float)local_res20.s.HighPart)) &&
        (bVar9 = ShouldCull(param_1), !bVar9)) &&
       ((pfVar1 = &(param_6->field0_0x0)._s_0.A,
        __real_38d1b717 < *pfVar1 || __real_38d1b717 == *pfVar1 ||
        (((param_4->Object->OutlineSettings).OutlineSize != 0 &&
         (pfVar1 = &(param_7->field0_0x0)._s_0.A,
         __real_38d1b717 < *pfVar1 || __real_38d1b717 == *pfVar1)))))) {
      SlateDrawElement::CheckInvalidUMaterial
                ((param_4->Object->FontMaterial).field0_0x0.DebugPtr,L"Font Material");
      SlateDrawElement::CheckInvalidUMaterial
                ((param_4->Object->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr,
                 L"Outline Material");
      local_res20 = (LARGE_INTEGER)FSlateWindowElementList::AddUninitialized<3>(param_1);
      uVar5 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
      *(undefined8 *)(local_res20.QuadPart + 0x48) = *(undefined8 *)&param_6->field0_0x0;
      *(undefined8 *)(local_res20.QuadPart + 0x50) = uVar5;
      FVar3 = (FStatNameAndInfo)(param_4->SharedReferenceCount).ReferenceController;
      local_58.StatData.Pad = (uchar  [8])param_4->Object;
      if (FVar3 != (FStatNameAndInfo)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar3 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)((longlong)FVar3 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
        UNLOCK();
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(local_res20.QuadPart + 0x60);
      *(uchar (*) [8])(local_res20.QuadPart + 0x58) = local_58.StatData.Pad;
      *(FStatNameAndInfo *)(local_res20.QuadPart + 0x60) = FVar3;
      local_58.NameAndInfo = FVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      this = local_res20;
      uVar5 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8);
      *(undefined8 *)(local_res20.QuadPart + 0x68) = *(undefined8 *)&param_7->field0_0x0;
      *(undefined8 *)(local_res20.QuadPart + 0x70) = uVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar3);
      FSlateShapedTextElement::SetOverflowArgs((FSlateShapedTextElement *)this,param_8);
      Init((FSlateDrawElement *)this,param_1,ET_ShapedText,param_2,param_3,param_5);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(LVar12.s.HighPart,uVar13) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res20);
      local_58.StatData.Pad = (uchar  [8])(local_res20.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_8->OverflowTextPtr).SharedReferenceCount.ReferenceController);
  return;
}

// MakeSpline @ 142515270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeSpline
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          FDeprecateVector2DParameter param_4,FDeprecateVector2DParameter param_5,
          FDeprecateVector2DParameter param_6,FDeprecateVector2DParameter param_7,float param_8,
          ESlateDrawEffect param_9,FLinearColor *param_10)

{
  longlong lVar1;
  longlong lVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  float fVar5;
  bool bVar6;
  FSlateSplineElement *this;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar6 = ShouldCull(param_1);
  if (!bVar6) {
    this = FSlateWindowElementList::AddUninitialized<4>(param_1);
    fVar5 = __real_3eaaaaab;
    local_38 = param_5._0_4_;
    local_38 = local_38 * __real_3eaaaaab;
    fStack_1c = param_7._4_4_;
    lVar1 = *(longlong *)&param_10->field0_0x0;
    lVar2 = *(longlong *)((longlong)&param_10->field0_0x0 + 8);
    (this->P0).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_4;
    this->_padding_ = lVar1;
    this->_padding_ = lVar2;
    local_30 = param_4._0_4_;
    fStack_34 = param_5._4_4_;
    (this->P3).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_6;
    fStack_2c = param_4._4_4_;
    local_20 = param_7._0_4_;
    TVar3._s_0.Y = fStack_34 * fVar5 + fStack_2c;
    TVar3._s_0.X = local_38 + local_30;
    local_18 = param_6._0_4_;
    (this->P1).field0_0x0 = TVar3;
    fStack_14 = param_6._4_4_;
    TVar4._s_0.Y = fStack_14 - fStack_1c * fVar5;
    TVar4._s_0.X = local_18 - local_20 * fVar5;
    (this->P2).field0_0x0 = TVar4;
    this->Thickness = param_8;
    Init((FSlateDrawElement *)this,param_1,ET_Spline,param_2,param_3,param_9);
  }
  return;
}

// MakeText @ 142515750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeText
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,FString *param_4,
          FSlateFontInfo *param_5,ESlateDrawEffect param_6,FLinearColor *param_7)

{
  float *pfVar1;
  int *piVar2;
  FString *pFVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FLinearColor *pFVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime> FVar12;
  FSlateTextElement *this;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  int iVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FColor_u_0 local_58;
  uint uStack_54;
  FStatMessage local_50;
  FName local_40;
  
  FVar12 = StatPtr_STAT_SlateDrawElementMakeTime;
  if (StatPtr_STAT_SlateDrawElementMakeTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_50,"STAT_SlateDrawElementMakeTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_SlateDrawElementMakeTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateDrawElementMakeTime,*pFVar11
                        ,L"FSlateDrawElement::Make Time","STATGROUP_SlateVerbose","STATCAT_Advanced"
                        ,L"SlateVerbose",false,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.Bits = FVar15.Bits;
        uStack_54 = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElementTypes.cpp"
                   ,0x195);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58.Bits = FVar15.Bits;
      uStack_54 = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_14251589d;
    }
  }
  bVar7 = false;
  FVar16 = local_40;
LAB_14251589d:
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  pFVar9 = param_7;
  pfVar1 = &(param_7->field0_0x0)._s_0.A;
  if (__real_38d1b717 < *pfVar1 || __real_38d1b717 == *pfVar1) {
    iVar4 = (param_4->Data).ArrayNum;
    iVar14 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar14 = 0;
    }
    if (iVar14 != 0) {
      param_7 = *(FLinearColor **)&(param_3->LocalSize).field0_0x0._s_0;
      if (((0.0 < param_7._0_4_ * param_3->DrawScale) && (0.0 < param_7._4_4_ * param_3->DrawScale))
         && (bVar10 = ShouldCull(param_1), !bVar10)) {
        if ((UE::Slate::Private::GLogPaintedText != false) && (4 < (byte)LogSlate._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        this = FSlateWindowElementList::AddUninitialized<2>(param_1);
        lVar5 = *(longlong *)((longlong)&pFVar9->field0_0x0 + 8);
        this->_padding_ = *(longlong *)&pFVar9->field0_0x0;
        this->_padding_ = lVar5;
        FSlateFontInfo::operator=(&this->FontInfo,param_5);
        pFVar3 = &this->ImmutableText;
        if (pFVar3 != param_4) {
          iVar4 = (param_4->Data).ArrayNum;
          piVar2 = &(this->ImmutableText).Data.ArrayMax;
          _Src = (param_4->Data).AllocatorInstance.Data;
          iVar14 = *piVar2;
          (this->ImmutableText).Data.ArrayNum = iVar4;
          if ((iVar4 == 0) && (iVar14 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar4,iVar14,(ForAnyElementType *)pFVar3,iVar4,piVar2);
            if (iVar4 != 0) {
              memcpy((pFVar3->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
            }
          }
        }
        Init((FSlateDrawElement *)this,param_1,ET_Text,param_2,param_3,param_6);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_7);
      local_50.StatData.Pad = (uchar  [8])((ulonglong)param_7 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// MakeText @ 142515b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeText
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,FString *param_4,
          int param_5,int param_6,FSlateFontInfo *param_7,ESlateDrawEffect param_8,
          FLinearColor *param_9)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_18;
  
  iVar2 = (param_4->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar2 = iVar4;
  if (param_5 < iVar4) {
    iVar2 = param_5;
  }
  if (param_6 < iVar4) {
    iVar4 = param_6;
  }
  iVar3 = iVar4 - iVar2;
  if (iVar4 <= iVar2) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    pFVar1 = ::FString::Mid(param_4,&local_18,iVar2,iVar3);
    MakeText(param_1,param_2,param_3,pFVar1,param_7,param_8,param_9);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// MakeViewport @ 142515c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDrawElement::MakeViewport
          (FSlateWindowElementList *param_1,uint param_2,FPaintGeometry *param_3,
          TSharedPtr<ISlateViewport_const_,1> *param_4,ESlateDrawEffect param_5,
          FLinearColor *param_6)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  FSlateViewportElement *this;
  FSlateShaderResource *pFVar6;
  
  FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(param_3);
  bVar3 = ShouldCull(param_1);
  if (!bVar3) {
    this = FSlateWindowElementList::AddUninitialized<7>(param_1);
    lVar2 = *(longlong *)((longlong)&param_6->field0_0x0 + 8);
    this->_padding_ = *(longlong *)&param_6->field0_0x0;
    this->_padding_ = lVar2;
    if ((param_4->Object == (ISlateViewport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = (FSlateShaderResource *)(**(code **)((longlong)*param_4->Object + 0x18))();
    this->RenderTargetResource = pFVar6;
    if ((param_4->Object == (ISlateViewport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = (**(code **)((longlong)*param_4->Object + 0x58))();
    this->field_0x60 = this->field_0x60 ^ (this->bAllowViewportScaling ^ bVar4) & 1;
    if ((param_4->Object == (ISlateViewport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar5 = (**(code **)((longlong)*param_4->Object + 0x28))();
    this->field_0x60 = this->field_0x60 ^ (cVar5 * '\x02' ^ this->field_0x60) & 2U;
    if ((param_4->Object == (ISlateViewport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar5 = (**(code **)((longlong)*param_4->Object + 0x50))();
    this->field_0x60 = this->field_0x60 ^ (cVar5 << 2 ^ this->field_0x60) & 4U;
    if (((this->RenderTargetResource != (FSlateShaderResource *)0x0) &&
        (this->RenderTargetResource->DestroyState != '!')) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element.RenderTargetResource == nullptr || !Element.RenderTargetResource->Debug_IsDestroyed()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElementTypes.cpp"
                           ,0x2e7,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Init((FSlateDrawElement *)this,param_1,ET_Viewport,param_2,param_3,param_5);
    if ((param_4->Object == (ISlateViewport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar5 = (**(code **)((longlong)*param_4->Object + 0x40))();
    if (cVar5 == '\x01') {
      *(ushort *)&this->_padding_ = (ushort)this->_padding_ | 0x100;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 15048f970

bool __thiscall `FSlateDrawElement::Init'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_150596886431006515>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_150596886431006515>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

