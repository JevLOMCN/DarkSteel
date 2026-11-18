// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 20

// FEasyParticleState @ 14ac8ed30

/* WARNING: Type propagation algorithm not settling */

FEasyParticleState * __thiscall FEasyParticleState::FEasyParticleState(FEasyParticleState *this)

{
  int *piVar1;
  TArray<FEasyParticleChildEmitterArray,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  this->WholeScale = 1.0;
  pTVar2 = &this->ChildrenParticleArray;
  *(undefined8 *)&(this->PaintGeometryCache).DrawScale = 0x3f800000;
  (this->PaintGeometryCache).DrawPosition.field0_0x0 = (TVector2<float>_u_0)0x0;
  piVar3 = &(this->ScalarParameterLerpKeys).ArrayMax;
  *(undefined8 *)((longlong)&(this->PaintGeometryCache).DrawSize.field0_0x0 + 4) = 0;
  piVar4 = &(this->ScalarParameterWhenStartLerpKeys).ArrayMax;
  (this->PaintGeometryCache).LocalSize.field0_0x0._s_0.Y = 0.0;
  this->_padding_ = (longlong)&___7FEasyParticleState__6B_;
  piVar1 = &(this->ChildrenParticleArray).ArrayMax;
  (this->PaintGeometryCache).AccumulatedRenderTransform.M.M[0] = (float  [2])0x3f800000;
  (this->PaintGeometryCache).AccumulatedRenderTransform.M.M[1][0] = 0.0;
  (this->PaintGeometryCache).AccumulatedRenderTransform.M.M[1][1] = 1.0;
  (this->PaintGeometryCache).AccumulatedRenderTransform.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  puVar6 = &(this->PaintGeometryCache).field_0x34;
  (this->PaintGeometryCache).bUsingLegacyConstructor = '\x01';
  (this->PaintGeometryCache).bHasRenderTransform = '\0';
  (this->TrailData).TransformCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ChildrenParticleArray).ArrayNum = 0;
  *piVar1 = 0;
  (this->TrailData).TransformCache.IndexMask = 0xffffffff;
  (this->TrailData).TransformCache.Front = 0;
  (this->TrailData).TransformCache.AfterBack = 0;
  (this->TrailData).VertexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).VertexData.ArrayNum = 0;
  (this->TrailData).VertexData.ArrayMax = 0;
  (this->TrailData).IndexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailData).IndexData.ArrayNum = 0;
  (this->TrailData).IndexData.ArrayMax = 0;
  (this->TrailData).MaxCount = 0;
  (this->ScalarParameterLerpKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterLerpKeys).ArrayNum = 0;
  (this->ScalarParameterWhenStartLerpKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameterWhenStartLerpKeys).ArrayNum = 0;
  *piVar3 = 0;
  *piVar4 = 0;
  FSlateBrush::FSlateBrush(&this->ImageBrush);
  FSlateBrush::FSlateBrush(&this->TrailBrush);
  (this->ParticleResource).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->RootAsset).field0_0x0.DebugPtr = (UUIParticleEmitterAsset *)0x0;
  (this->SelfAsset).field0_0x0.DebugPtr = (UUIParticleEmitterAsset *)0x0;
  this->SpawnParticleDeltaTime = 0.0;
  this->CurLifetime = 0.0;
  this->CurPercent = 0.0;
  this->CurSize = 0.0;
  this->CurSizeX = 0.0;
  this->CurSizeY = 0.0;
  this->CurRotation = 0.0;
  this->CurAngle = 0.0;
  (this->CurSpeed).field0_0x0._s_0.X = 0.0;
  (this->CurSpeed).field0_0x0._s_0.Y = 0.0;
  (this->CurPos).field0_0x0._s_0.X = 0.0;
  (this->CurPos).field0_0x0._s_0.Y = 0.0;
  (this->CurPivot).field0_0x0._s_0.X = 0.0;
  (this->CurPivot).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->CurColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->CurColor).field0_0x0 + 8) = 0;
  this->CurDelay = 0.0;
  this->RootSpanTime = 0.0;
  this->WholeScale = 1.0;
  this->ScaleFollowSpeedDirection = 0.0;
  this->ScaleFollowSpeedVertical = 0.0;
  (this->CurWidgetPosition).field0_0x0._s_0.X = 0.0;
  (this->CurWidgetPosition).field0_0x0._s_0.Y = 0.0;
  this->CurWidgetRotation = 0.0;
  DestructItems<FEasyParticleChildEmitterArray,int>
            ((FEasyParticleChildEmitterArray *)(pTVar2->AllocatorInstance).Data,
             (this->ChildrenParticleArray).ArrayNum);
  (this->ChildrenParticleArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  this->IsFirstTick = true;
  this->IsNeedPaint = false;
  this->Deadtime = 0.0;
  this->ParticleEmitAngle = 0.0;
  this->RotationStart = 0.0;
  this->DirectionScale = 0.0;
  this->VerticalDirectionScale = 0.0;
  this->EmitterType = Curve;
  this->PositionType = UIPARTICLE_POSITIONTYPE_FREE;
  this->DrawEffect = None;
  (this->StartSpeed).field0_0x0._s_0.X = 0.0;
  (this->StartSpeed).field0_0x0._s_0.Y = 0.0;
  this->FollowParentPosition = false;
  this->FollowParentSpeedPercent = 0.0;
  this->SizeLerpKey = 0.0;
  (this->SizeXLerpKey).X = 0.0;
  (this->SizeXLerpKey).Y = 0.0;
  (this->SizeYLerpKey).X = 0.0;
  (this->SizeYLerpKey).Y = 0.0;
  this->RotationStartLerpKey = 0.0;
  this->RotationSpeedLerpKey = 0.0;
  (this->ColorLerpKey).R = 0.0;
  (this->ColorLerpKey).G = 0.0;
  (this->ColorLerpKey).B = 0.0;
  (this->ColorLerpKey).A = 0.0;
  (this->PivotLerpKey).X = 0.0;
  (this->PivotLerpKey).Y = 0.0;
  this->PositionXLerpKey = 0.0;
  this->PositionYLerpKey = 0.0;
  this->ParticleLifeSpanLerpKey = 0.0;
  (this->GravityLerpKey).X = 0.0;
  *(undefined8 *)&(this->GravityLerpKey).Y = 0;
  this->AirResistanceLerpKey = 0.0;
  this->RadialAccelerationLerpKey = 0.0;
  this->TangentialAccelerationLerpKey = 0.0;
  this->ScaleFollowSpeedDirectionLerpKey = 0.0;
  this->ScaleFollowSpeedVerticalLerpKey = 0.0;
  this->VerticalDirectionScaleLerpKey = 0.0;
  this->DirectionScaleLerpKey = 0.0;
  this->SineDirectionStartLerpKey = 0.0;
  this->SineDirectionSpeedLerpKey = 0.0;
  this->SineDirectionRangePercent = 0.0;
  this->SpawnParticlePerSecondLerpKey = 0.0;
  this->MaxParticleCountLerpKey = 0.0;
  this->ParticleEmitAngleLerpKey = 0.0;
  (this->ScalarParameterLerpKeys).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ScalarParameterLerpKeys).AllocatorInstance,0,piVar3);
  }
  (this->ScalarParameterWhenStartLerpKeys).ArrayNum = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ScalarParameterWhenStartLerpKeys).AllocatorInstance,0,piVar4);
  }
  this->EmitPositionLerpKey = 0.0;
  this->EmitPosRangeLerpKey = 0.0;
  (this->Gravity).field0_0x0._s_0.X = 0.0;
  (this->Gravity).field0_0x0._s_0.Y = 0.0;
  (this->SourcePos).field0_0x0._s_0.X = 0.0;
  (this->SourcePos).field0_0x0._s_0.Y = 0.0;
  this->RadialAcceleration = 0.0;
  this->TangentialAcceleration = 0.0;
  this->SineDirectionStart = 0.0;
  this->SineDirectionSpeed = 0.0;
  this->AirResistance = 0.0;
  this->TotalDelay = 0.0;
  this->LayerOrder = 0;
  this->ZOrder = 0;
  this->Radius = 0.0;
  this->DegreePerSecond = 0.0;
  this->RadiusPercent = 0.0;
  this->DegreePerSecondPercent = 0.0;
  (this->ImageBrush).DrawAs.Value = '\0';
  (this->ParticleResource).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->RootAsset).field0_0x0.DebugPtr = (UUIParticleEmitterAsset *)0x0;
  (this->SelfAsset).field0_0x0.DebugPtr = (UUIParticleEmitterAsset *)0x0;
  this->IsRoot = false;
  this->bStopEmit = false;
  this->InPool = false;
  (this->StartPositionLocal).field0_0x0._s_0.X = 0.0;
  (this->StartPositionLocal).field0_0x0._s_0.Y = 0.0;
  (this->StartWidgetPositionWorld).field0_0x0._s_0.X = 0.0;
  (this->StartWidgetPositionWorld).field0_0x0._s_0.Y = 0.0;
  this->ParentParticle = (FEasyParticleState *)0x0;
  this->RootParticle = (FEasyParticleRootState *)0x0;
  return this;
}

// ~FEasyParticleState @ 14ac90c00

void __thiscall FEasyParticleState::~FEasyParticleState(FEasyParticleState *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FEasyParticleState__6B_;
  (this->TrailBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TrailBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->ImageBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->ImageBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = (this->ScalarParameterWhenStartLerpKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScalarParameterLerpKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrailData).IndexData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrailData).VertexData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>(&(this->TrailData).TransformCache);
  DestructItems<FEasyParticleChildEmitterArray,int>
            ((FEasyParticleChildEmitterArray *)(this->ChildrenParticleArray).AllocatorInstance.Data,
             (this->ChildrenParticleArray).ArrayNum);
  pFVar2 = (this->ChildrenParticleArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CaculatePaintParams @ 14ac92b30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FEasyParticleState::CaculatePaintParams
          (FEasyParticleState *this,FPaintArgs *param_1,FGeometry *param_2,FWidgetStyle *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ESlateColorStylingMode EVar4;
  TVector2<float>_u_0_s_0 TVar5;
  float fVar6;
  TVector2<float>_u_0 TVar7;
  bool bVar8;
  int iVar9;
  FSlateColor *this_00;
  TTransform2<float> *pTVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_1a8 [8];
  float afStack_1a0 [2];
  TVector2<float>_u_0 local_198;
  undefined8 local_190;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  undefined4 local_124;
  TTransform2<float> local_120;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  TVector2<float>_u_0 local_f4;
  TTransform2<float> local_ec;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  this->IsNeedPaint = false;
  if (this->InPool != false) {
    return;
  }
  if (this->IsRoot != false) {
    return;
  }
  if ((this->ImageBrush).DrawAs.Value == '\0') {
    return;
  }
  if ((this->ImageBrush).ResourceObject.field0_0x0.DebugPtr == (UObject *)0x0) {
    return;
  }
  this_00 = &(this->ImageBrush).TintColor;
  fVar16 = (this->CurColor).field0_0x0._s_0.R;
  fVar14 = (param_3->ColorAndOpacityTint).field0_0x0._s_0.R;
  fVar1 = (this->CurColor).field0_0x0._s_0.G;
  fVar11 = (param_3->ColorAndOpacityTint).field0_0x0._s_0.G;
  fVar12 = (this->CurColor).field0_0x0._s_0.B;
  fVar13 = (param_3->ColorAndOpacityTint).field0_0x0._s_0.B;
  fVar2 = (this->CurColor).field0_0x0._s_0.A;
  EVar4 = (this->ImageBrush).TintColor.ColorUseRule;
  fVar3 = (param_3->ColorAndOpacityTint).field0_0x0._s_0.A;
  if (EVar4 != UseColor_Specified) {
    if (EVar4 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar4 == UseColor_Foreground) || (EVar4 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&param_3->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&param_3->SubduedForeground;
    }
  }
  fStack_c4 = *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4);
  fStack_b4 = *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8);
  fVar6 = *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc);
  local_178 = (this_00->SpecifiedColor).field0_0x0._s_0.R * fVar16 * fVar14;
  local_c8 = fStack_c4 * fVar1 * fVar11;
  local_b8 = fStack_b4 * fVar12 * fVar13;
  _local_1a8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (this->PositionType == UIPARTICLE_POSITIONTYPE_RELATIVE) {
    local_1a8 = (undefined1  [8])(this->CurWidgetPosition).field0_0x0._s_0.X;
    afStack_1a0 = (float  [2])(this->CurWidgetPosition).field0_0x0._s_0.Y;
  }
  else {
    if (this->PositionType != UIPARTICLE_POSITIONTYPE_FREE) goto LAB_14ac92c9a;
    local_1a8 = (undefined1  [8])(this->StartWidgetPositionWorld).field0_0x0._s_0.X;
    afStack_1a0 = (float  [2])(this->StartWidgetPositionWorld).field0_0x0._s_0.Y;
  }
LAB_14ac92c9a:
  fVar1 = (param_2->AccumulatedRenderTransform).M.M[0][0];
  fVar11 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  fVar12 = (param_2->AccumulatedRenderTransform).M.M[1][0];
  fVar13 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  local_188 = 0.0;
  fStack_184 = 0.0;
  local_120.Trans.field0_0x0 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  fStack_c0 = fStack_c4;
  fStack_bc = fStack_c4;
  fStack_b0 = fStack_b4;
  fStack_ac = fStack_b4;
  FGenericPlatformMath::Atan2(fVar11,fVar1);
  __libm_sse2_sincosf_();
  local_160._0_4_ = local_188;
  local_160._4_4_ = fStack_184;
  local_170._4_4_ = this->DirectionScale * extraout_XMM0_Da;
  local_170._0_4_ = this->DirectionScale * extraout_XMM0_Db;
  local_170._8_4_ =
       (uint)(this->VerticalDirectionScale * extraout_XMM0_Da) ^
       __xmm_80000000800000008000000080000000;
  local_170._12_4_ = this->VerticalDirectionScale * extraout_XMM0_Db;
  fVar13 = fVar13 * fVar13;
  fVar16 = this->CurSizeY;
  fVar14 = this->CurSizeX;
  local_108._0_4_ = this->CurSizeX;
  local_108._4_4_ = this->CurSizeY;
  iVar9 = -1;
  if (0.0 < fVar11) {
    iVar9 = 1;
  }
  fVar17 = fVar1 / SQRT(fVar11 * fVar11 + fVar13);
  fVar15 = SQRT(__real_3f800000 - fVar17 * fVar17) * (float)iVar9;
  local_188 = SQRT(fVar1 * fVar1 + fVar11 * fVar11);
  fStack_184 = SQRT(fVar12 * fVar12 + fVar13);
  local_190 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_1->WindowOffset).field0_0x0._s_0;
  local_1a8._0_4_ =
       (undefined4)
       ((((this->CurPos).field0_0x0._s_0.X -
         (double)((fVar14 * fVar17 - fVar16 * fVar15) * __real_3f000000)) * (double)local_188 +
        (double)local_1a8) - (double)(float)(undefined4)local_190);
  local_1a8._4_4_ =
       (undefined4)
       ((((this->CurPos).field0_0x0._s_0.Y -
         (double)((fVar14 * fVar15 + fVar16 * fVar17) * __real_3f000000)) * (double)fStack_184 +
        (double)afStack_1a0) - (double)(float)local_190._4_4_);
  pTVar10 = Inverse<TTransform2<float>_>(&local_120,&param_2->AccumulatedRenderTransform);
  fVar1 = param_2->Scale;
  local_100 = 0x3f800000;
  local_f8 = 0;
  fVar11 = (float)local_1a8._4_4_ * (pTVar10->M).M[1][0] +
           (float)local_1a8._0_4_ * (pTVar10->M).M[0][0] + (pTVar10->Trans).field0_0x0._s_0.X;
  fVar14 = (float)(this->CurPivot).field0_0x0._s_0.X * fVar14;
  fVar13 = (float)local_1a8._0_4_ * (pTVar10->M).M[0][1] +
           (float)local_1a8._4_4_ * (pTVar10->M).M[1][1] + (pTVar10->Trans).field0_0x0._s_0.Y;
  fVar12 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
  fVar16 = (float)(this->CurPivot).field0_0x0._s_0.Y * fVar16;
  fVar15 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
  TVar5 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_190._4_4_ = fVar13;
  local_190._0_4_ = fVar11;
  TVar7 = local_190;
  fStack_184 = TVar5.X;
  local_180 = TVar5.Y;
  local_f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_198 = local_190;
  local_1a8._0_4_ = ___xmm_3f80000000000000000000003f800000;
  local_1a8._4_4_ = _UNK_15076b184;
  afStack_1a0[0] = _UNK_15076b188;
  afStack_1a0[1] = _UNK_15076b18c;
  local_160._4_4_ =
       fVar15 * (float)local_170._12_4_ + fVar12 * (float)local_170._4_4_ + (float)local_160._4_4_ +
       fVar16;
  local_160._0_4_ =
       (float)local_170._8_4_ * fVar15 + fVar12 * (float)local_170._0_4_ +
       (float)(undefined4)local_160 + fVar14;
  Concatenate<TTransform2<float>_>
            (&local_120,(TTransform2<float> *)local_170,(TTransform2<float> *)local_1a8);
  Concatenate<TTransform2<float>_>(&local_ec,&local_120,&param_2->AccumulatedRenderTransform);
  local_1a8 = (undefined1  [8])TVar7;
  local_190._0_4_ = fVar1 * fVar11 + fStack_184;
  local_190._4_4_ = fVar1 * fVar13 + local_180;
  bVar8 = IsParticleEnd(this);
  if (!bVar8) {
    fStack_13c = local_ec.M.M[0][0];
    fStack_138 = local_ec.M.M[0][1];
    fStack_134 = local_ec.M.M[1][0];
    fStack_130 = local_ec.M.M[1][1];
    uStack_140 = (undefined4)((ulonglong)local_108 >> 0x20);
    local_12c = local_ec.Trans.field0_0x0._0_4_;
    fStack_128 = local_ec.Trans.field0_0x0._4_4_;
    this->IsNeedPaint = true;
    (this->PaintGeometryCache).DrawPosition.field0_0x0._s_0.X = (float)(undefined4)local_190;
    (this->PaintGeometryCache).DrawPosition.field0_0x0._s_0.Y = (float)local_190._4_4_;
    (this->PaintGeometryCache).DrawScale = fVar1;
    (this->PaintGeometryCache).DrawSize.field0_0x0._s_0.X = 0.0;
    *(longlong *)((longlong)&(this->PaintGeometryCache).DrawSize.field0_0x0 + 4) = local_108 << 0x20
    ;
    *(ulonglong *)((longlong)&(this->PaintGeometryCache).LocalSize.field0_0x0 + 4) =
         CONCAT44(fStack_13c,uStack_140);
    *(ulonglong *)((this->PaintGeometryCache).AccumulatedRenderTransform.M.M[0] + 1) =
         CONCAT44(fStack_134,fStack_138);
    *(ulonglong *)((this->PaintGeometryCache).AccumulatedRenderTransform.M.M[1] + 1) =
         CONCAT44(local_12c,fStack_130);
    *(ulonglong *)
     ((longlong)&(this->PaintGeometryCache).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
         CONCAT44(local_124,fStack_128) & 0xfffffffeffffffff | 0x200000000;
    (this->PaintColorCache).field0_0x0._s_0.R = local_178;
    (this->PaintColorCache).field0_0x0._s_0.G = local_c8;
    (this->PaintColorCache).field0_0x0._s_0.B = local_b8;
    (this->PaintColorCache).field0_0x0._s_0.A = fVar6 * fVar2 * fVar3;
  }
  return;
}

// CaculateSpawnParticleCount @ 14ac931a0

void __thiscall FEasyParticleState::CaculateSpawnParticleCount(FEasyParticleState *this)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  UUIParticleEmitterAsset *pUVar12;
  FDateTime FVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res8;
  
  bVar10 = IsEmitterEnd(this);
  fVar8 = __real_bf800000;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar6 = __real_3e7ad7f29abcaf49;
  fVar5 = __real_322bcc77;
  uVar18 = 0;
  uVar17 = 0;
  if ((bVar10) || (3 < this->LayerOrder)) {
    this->SpawnParticleDeltaTime = 0.0;
    return;
  }
  uVar16 = uVar18;
  uVar23 = uVar18;
  if ((this->ChildrenParticleArray).ArrayNum < 1) {
    this->SpawnParticleDeltaTime = 0.0;
    return;
  }
  do {
    if (this->Deadtime == 0.0) break;
    uVar19 = (uint)uVar16;
    uVar22 = ~uVar19 >> 0x1f;
    uVar11 = uVar17;
    if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
      uVar11 = uVar22;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(float *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23 + 0x34) <=
        this->CurLifetime / this->Deadtime) {
      uVar11 = uVar17;
      if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
        uVar11 = uVar22;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = UUIParticleUtility::LevelOfDetail;
      if (*(longlong *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23) != 0) {
        uVar11 = uVar17;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar11 = uVar22;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar12 = UUIParticleEmitterAsset::GetLODAsset
                            (*(UUIParticleEmitterAsset **)
                              ((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23),iVar9)
        ;
        uVar14 = 0;
        uVar11 = uVar14;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar11 = uVar22;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = 0;
        if ((this->ChildrenParticleArray).AllocatorInstance.Data[uVar23 + 0x40] ==
            (FScriptContainerElement)0x0) {
          FVar13 = FDateTime::Now();
          uVar1 = *(undefined8 *)FVar13.Ticks;
          uVar15 = uVar14;
          if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined8 *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23 + 8) = uVar1
          ;
          uVar15 = uVar11;
          if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->ChildrenParticleArray).AllocatorInstance.Data[uVar23 + 0x40] =
               (FScriptContainerElement)0x1;
        }
        uVar15 = uVar11;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar15 = uVar22;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->ChildrenParticleArray).AllocatorInstance.Data[uVar23 + 0x40] !=
            (FScriptContainerElement)0x0) {
          FVar13 = FDateTime::Now();
          uVar15 = uVar11;
          if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
            uVar15 = uVar22;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((fVar5 < (float)((uint)(pUVar12->EmitSeconds - fVar8) & uVar7)) &&
             (pUVar12->EmitSeconds <=
              (float)((double)(*(longlong *)FVar13.Ticks -
                              *(longlong *)
                               ((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23 + 8))
                     * dVar6))) break;
        }
        fVar24 = FUIParticleProperty::GetValue_Float
                           (&pUVar12->MaxParticleCount,this->CurPercent,this->CurLifetime,
                            this->RootSpanTime,this->MaxParticleCountLerpKey);
        uVar15 = uVar11;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar15 = uVar22;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        local_res8 = 0;
        uVar16 = uVar18;
        uVar20 = uVar18;
        uVar21 = uVar18;
        if (0 < *(int *)(pFVar2 + uVar23 + 0x18)) {
          do {
            uVar15 = (uint)uVar16;
            uVar14 = uVar11;
            if ((int)uVar15 < *(int *)(pFVar2 + uVar23 + 0x18)) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar20 = (ulonglong)local_res8;
            }
            lVar3 = *(longlong *)(uVar21 + *(longlong *)(pFVar2 + uVar23 + 0x10));
            if ((*(char *)(lVar3 + 0x3d8) != '\0') ||
               (((*(char *)(lVar3 + 0x3da) == '\0' &&
                 (fVar25 = *(float *)(lVar3 + 0x138),
                 *(float *)(lVar3 + 0x14) <= fVar25 && fVar25 != *(float *)(lVar3 + 0x14))) &&
                (0.0 < fVar25)))) {
              local_res8 = (int)uVar20 + 1;
              uVar20 = (ulonglong)local_res8;
            }
            uVar14 = (uint)uVar20;
            uVar16 = (ulonglong)(uVar15 + 1);
            uVar21 = uVar21 + 8;
          } while ((int)(uVar15 + 1) < *(int *)(pFVar2 + uVar23 + 0x18));
        }
        fVar25 = FUIParticleProperty::GetValue_Float
                           (&pUVar12->SpawnParticlePerSecond,this->CurPercent,this->CurLifetime,
                            this->RootSpanTime,this->SpawnParticlePerSecondLerpKey);
        fVar25 = fVar25 * this->SpawnParticleDeltaTime;
        uVar15 = uVar11;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar15 = uVar22;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar26 = (float)(int)(fVar25 + *(float *)((this->ChildrenParticleArray).AllocatorInstance.
                                                  Data + uVar23 + 0x44));
        uVar15 = uVar11;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar15 = uVar22;
        }
        if (fVar24 - (float)(int)uVar14 <= fVar26) {
          fVar26 = fVar24 - (float)(int)uVar14;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar24 = *(float *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23 + 0x44);
        uVar14 = uVar11;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar14 = uVar22;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(float *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23 + 0x44) =
             (fVar25 + fVar24) - (float)(int)fVar26;
        if ((int)uVar19 < (this->ChildrenParticleArray).ArrayNum) {
          uVar11 = uVar22;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar23 + 0x48) = (int)fVar26
        ;
      }
    }
    uVar16 = (ulonglong)(uVar19 + 1);
    uVar23 = uVar23 + 0x50;
  } while ((int)(uVar19 + 1) < (this->ChildrenParticleArray).ArrayNum);
  this->SpawnParticleDeltaTime = 0.0;
  return;
}

// CreateParticle @ 14ac94160

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FEasyParticleState * __thiscall
FEasyParticleState::CreateParticle(FEasyParticleState *this,FGeometry *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement FVar8;
  undefined1 uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  UUIParticleEmitterAsset *pUVar12;
  UObject *pUVar13;
  FSlateSharedHandleData *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  UMaterialInterface *pUVar16;
  UMaterialInterface *pUVar17;
  code *pcVar18;
  TVector2<double>_u_0 TVar19;
  TVector2<double>_u_0 TVar20;
  TVector2<double>_u_0 TVar21;
  undefined8 uVar22;
  TVector2<float>_u_0 TVar23;
  FScriptContainerElement *pFVar24;
  EStyleColor EVar25;
  undefined2 uVar26;
  TEnumAsByte<ESlateBrushRoundingType::Type> TVar27;
  undefined6 uVar28;
  undefined3 uVar29;
  FEasyParticleState *pFVar30;
  bool bVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  FEasyParticleState *pFVar35;
  UUIParticleEmitterAsset *pUVar36;
  FUIParticleFactory *this_00;
  FUIParticleFactory *pFVar37;
  TVector2<double> *pTVar38;
  FSlateBrush *pFVar39;
  UClass *pUVar40;
  UMaterialInstanceDynamic *pUVar41;
  byte bVar42;
  uint uVar43;
  FScriptContainerElement *pFVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong lVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar53;
  FEasyParticleState *local_1d8;
  uint local_1d0;
  undefined8 local_1cc;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FSlateSharedHandleData *local_1a8;
  TReferenceControllerBase<1> *pTStack_1a0;
  TVector2<double> local_198;
  TVector2<double> local_188;
  TVector2<double> local_178;
  FSlateBrush local_168;
  
  uVar33 = 0;
  if (param_2 < (this->ChildrenParticleArray).ArrayNum) {
    uVar33 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar18 = (code *)swi(3);
    pFVar35 = (FEasyParticleState *)(*pcVar18)();
    return pFVar35;
  }
  pFVar11 = (this->ChildrenParticleArray).AllocatorInstance.Data;
  lVar48 = (longlong)param_2 * 0x50;
  FVar8 = pFVar11[lVar48 + 0x38];
  fVar1 = *(float *)(pFVar11 + lVar48 + 0x3c);
  iVar10 = *(int *)(pFVar11 + lVar48 + 0x30);
  pUVar36 = UUIParticleEmitterAsset::GetLODAsset
                      (*(UUIParticleEmitterAsset **)(pFVar11 + lVar48),
                       UUIParticleUtility::LevelOfDetail);
  local_1d8 = (FEasyParticleState *)0x0;
  if (*(int *)(pFVar11 + lVar48 + 0x28) < 1) {
LAB_14ac9455c:
    pFVar37 = FUIParticleFactory::m_Instance;
    if ((FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) &&
       (this_00 = ::operator_new(0x30), pFVar37 = (FUIParticleFactory *)0x0,
       this_00 != (FUIParticleFactory *)0x0)) {
      pFVar37 = FUIParticleFactory::FUIParticleFactory(this_00);
    }
    FUIParticleFactory::m_Instance = pFVar37;
    local_1d8 = FUIParticleFactory::CreateParticle
                          (FUIParticleFactory::m_Instance,this->RootParticle,this->LayerOrder);
    if (local_1d8 == (FEasyParticleState *)0x0) {
      return (FEasyParticleState *)0x0;
    }
    if (((*(FEasyParticleState ***)(pFVar11 + lVar48 + 0x10) <= &local_1d8) &&
        (&local_1d8 <
         *(FEasyParticleState ***)(pFVar11 + lVar48 + 0x10) + *(int *)(pFVar11 + lVar48 + 0x1c))) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar31)) {
      pcVar18 = (code *)swi(3);
      pFVar35 = (FEasyParticleState *)(*pcVar18)();
      return pFVar35;
    }
    iVar32 = *(int *)(pFVar11 + lVar48 + 0x18);
    if (iVar32 == *(int *)(pFVar11 + lVar48 + 0x1c)) {
      iVar32 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(pFVar11 + lVar48 + 0x10),
                          (int *)(pFVar11 + lVar48 + 0x1c));
    }
    *(int *)(pFVar11 + lVar48 + 0x18) = iVar32 + 1;
    *(FEasyParticleState **)(*(longlong *)(pFVar11 + lVar48 + 0x10) + (longlong)iVar32 * 8) =
         local_1d8;
  }
  else {
    pFVar44 = pFVar11 + lVar48 + 0x20;
    if ((*(int *)&pFVar44[8].field_0x0 < 1) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar18 = (code *)swi(3);
      pFVar35 = (FEasyParticleState *)(*pcVar18)();
      return pFVar35;
    }
    pFVar24 = pFVar44 + 0xc;
    uVar33 = *(uint *)(*(longlong *)&pFVar44->field_0x0 +
                      (longlong)*(int *)&pFVar44[8].field_0x0 * 4 + -4);
    *(int *)&pFVar44[8].field_0x0 = *(int *)&pFVar44[8].field_0x0 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)pFVar44,*(int *)&pFVar44[8].field_0x0,(int *)pFVar24);
    if ((int)uVar33 < *(int *)(pFVar11 + lVar48 + 0x18)) {
      uVar34 = 0;
      if ((int)uVar33 < *(int *)(pFVar11 + lVar48 + 0x18)) {
        uVar34 = ~uVar33 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar18 = (code *)swi(3);
        pFVar35 = (FEasyParticleState *)(*pcVar18)();
        return pFVar35;
      }
      local_1d8 = *(FEasyParticleState **)
                   (*(longlong *)(pFVar11 + lVar48 + 0x10) + (longlong)(int)uVar33 * 8);
      if ((local_1d8 == (FEasyParticleState *)0x0) || (local_1d8->InPool == false)) {
        iVar32 = *(int *)pFVar24;
        *(undefined4 *)&pFVar44[8].field_0x0 = 0;
        if (iVar32 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar44,0,(int *)pFVar24);
        }
        local_1d0 = 0;
        if (0 < *(int *)(pFVar11 + lVar48 + 0x18)) {
          do {
            uVar33 = local_1d0;
            uVar34 = 0;
            if ((int)local_1d0 < *(int *)(pFVar11 + lVar48 + 0x18)) {
              uVar34 = ~local_1d0 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar18 = (code *)swi(3);
              pFVar35 = (FEasyParticleState *)(*pcVar18)();
              return pFVar35;
            }
            if (*(char *)(*(longlong *)
                           (*(longlong *)(pFVar11 + lVar48 + 0x10) + (longlong)(int)uVar33 * 8) +
                         0x3da) != '\0') {
              if (((*(uint **)&pFVar44->field_0x0 <= &local_1d0) &&
                  (&local_1d0 < *(uint **)&pFVar44->field_0x0 + *(int *)pFVar24)) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar31)) {
                pcVar18 = (code *)swi(3);
                pFVar35 = (FEasyParticleState *)(*pcVar18)();
                return pFVar35;
              }
              iVar32 = *(int *)&pFVar44[8].field_0x0;
              if (iVar32 == *(int *)pFVar24) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar44,(int *)pFVar24);
              }
              *(int *)&pFVar44[8].field_0x0 = iVar32 + 1;
              *(uint *)(*(longlong *)&pFVar44->field_0x0 + (longlong)iVar32 * 4) = local_1d0;
            }
            local_1d0 = local_1d0 + 1;
          } while ((int)local_1d0 < *(int *)(pFVar11 + lVar48 + 0x18));
        }
        if (0 < *(int *)(pFVar11 + lVar48 + 0x28)) {
          if ((*(int *)&pFVar44[8].field_0x0 < 1) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar18 = (code *)swi(3);
            pFVar35 = (FEasyParticleState *)(*pcVar18)();
            return pFVar35;
          }
          uVar33 = *(uint *)(*(longlong *)&pFVar44->field_0x0 +
                            (longlong)*(int *)&pFVar44[8].field_0x0 * 4 + -4);
          *(int *)&pFVar44[8].field_0x0 = *(int *)&pFVar44[8].field_0x0 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar44,*(int *)&pFVar44[8].field_0x0,(int *)pFVar24);
          uVar34 = 0;
          if ((int)uVar33 < *(int *)(pFVar11 + lVar48 + 0x18)) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar18 = (code *)swi(3);
            pFVar35 = (FEasyParticleState *)(*pcVar18)();
            return pFVar35;
          }
          local_1d8 = *(FEasyParticleState **)
                       (*(longlong *)(pFVar11 + lVar48 + 0x10) + (longlong)(int)uVar33 * 8);
        }
      }
    }
    if (local_1d8 == (FEasyParticleState *)0x0) goto LAB_14ac9455c;
  }
  uVar46 = 0;
  local_1d8->InPool = false;
  local_1d8->EmitterType = pUVar36->EmitterType;
  local_1d8->PositionType = pUVar36->PositionType;
  local_1d8->DrawEffect = pUVar36->DrawEffect;
  uVar33 = rand();
  pFVar35 = local_1d8;
  fVar50 = __real_38000100;
  local_1d8->SizeLerpKey = (float)(uVar33 & 0x7fff) * __real_38000100;
  uVar33 = rand();
  (pFVar35->SizeXLerpKey).X = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  pFVar30 = local_1d8;
  (pFVar35->SizeXLerpKey).Y = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  (pFVar30->SizeYLerpKey).X = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  (pFVar30->SizeYLerpKey).Y = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->PositionXLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->PositionYLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->RotationSpeedLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  FLerpKeyColor::Random(&local_1d8->ColorLerpKey);
  pFVar35 = local_1d8;
  uVar33 = rand();
  (pFVar35->PivotLerpKey).X = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  (pFVar35->PivotLerpKey).Y = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->ParticleLifeSpanLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  pFVar35 = local_1d8;
  local_1d8->RotationStartLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  (pFVar35->GravityLerpKey).X = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  (pFVar35->GravityLerpKey).Y = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->StartSpeedLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->AirResistanceLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->RadialAccelerationLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->TangentialAccelerationLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->RadiusPercent = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->DegreePerSecondPercent = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->ScaleFollowSpeedVerticalLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->ScaleFollowSpeedDirectionLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->VerticalDirectionScaleLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->DirectionScaleLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->SineDirectionStartLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->SineDirectionSpeedLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->SpawnParticlePerSecondLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->MaxParticleCountLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->ParticleEmitAngleLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->EmitPositionLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  uVar33 = rand();
  local_1d8->EmitPosRangeLerpKey = (float)(uVar33 & 0x7fff) * fVar50;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&local_1d8->ScalarParameterWhenStartLerpKeys,(pUVar36->ScalarParamsWhenStart).ArrayNum,
             Default);
  uVar45 = uVar46;
  uVar47 = uVar46;
  if (0 < (local_1d8->ScalarParameterWhenStartLerpKeys).ArrayNum) {
    do {
      uVar34 = rand();
      pFVar35 = local_1d8;
      uVar43 = (uint)uVar45;
      uVar33 = 0;
      if ((int)uVar43 < (local_1d8->ScalarParameterWhenStartLerpKeys).ArrayNum) {
        uVar33 = ~uVar43 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar18 = (code *)swi(3);
        pFVar35 = (FEasyParticleState *)(*pcVar18)();
        return pFVar35;
      }
      *(float *)((pFVar35->ScalarParameterWhenStartLerpKeys).AllocatorInstance.Data + uVar47) =
           (float)(uVar34 & 0x7fff) * fVar50;
      uVar45 = (ulonglong)(uVar43 + 1);
      uVar47 = uVar47 + 4;
    } while ((int)(uVar43 + 1) < (local_1d8->ScalarParameterWhenStartLerpKeys).ArrayNum);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&local_1d8->ScalarParameterLerpKeys,(pUVar36->ScalarParams).ArrayNum,Default);
  uVar45 = uVar46;
  if (0 < (local_1d8->ScalarParameterLerpKeys).ArrayNum) {
    do {
      uVar34 = rand();
      pFVar35 = local_1d8;
      uVar43 = (uint)uVar46;
      uVar33 = 0;
      if ((int)uVar43 < (local_1d8->ScalarParameterLerpKeys).ArrayNum) {
        uVar33 = ~uVar43 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar18 = (code *)swi(3);
        pFVar35 = (FEasyParticleState *)(*pcVar18)();
        return pFVar35;
      }
      uVar46 = (ulonglong)(uVar43 + 1);
      *(float *)((pFVar35->ScalarParameterLerpKeys).AllocatorInstance.Data + uVar45) =
           (float)(uVar34 & 0x7fff) * fVar50;
      uVar45 = uVar45 + 4;
    } while ((int)(uVar43 + 1) < (local_1d8->ScalarParameterLerpKeys).ArrayNum);
  }
  fVar49 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->LifeSpan,0.0,0.0,this->RootSpanTime,
                      local_1d8->ParticleLifeSpanLerpKey);
  local_1d8->Deadtime = fVar49;
  fVar49 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->RotationStart,0.0,0.0,this->RootSpanTime,
                      local_1d8->RotationStartLerpKey);
  local_1d8->RotationStart = fVar49;
  fVar49 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->RadialAcceleration,0.0,0.0,this->RootSpanTime,
                      local_1d8->RadialAccelerationLerpKey);
  local_1d8->RadialAcceleration = fVar49;
  fVar49 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->TangentialAcceleration,0.0,0.0,this->RootSpanTime,
                      local_1d8->TangentialAccelerationLerpKey);
  local_1d8->TangentialAcceleration = fVar49;
  fVar49 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->SineDirectionStart,0.0,0.0,this->RootSpanTime,
                      this->SineDirectionStartLerpKey);
  local_1d8->SineDirectionStart = fVar49;
  uVar33 = rand();
  local_1d8->SineDirectionRangePercent = (float)(uVar33 & 0x7fff) * fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->SineDirectionSpeed,0.0,0.0,this->RootSpanTime,
                      this->SineDirectionSpeedLerpKey);
  local_1d8->SineDirectionSpeed = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->AirResistance,0.0,0.0,this->RootSpanTime,
                      local_1d8->AirResistanceLerpKey);
  local_1d8->AirResistance = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->DirectionScale,0.0,0.0,this->RootSpanTime,
                      local_1d8->DirectionScaleLerpKey);
  local_1d8->DirectionScale = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->VerticalDirectionScale,0.0,0.0,this->RootSpanTime,
                      local_1d8->VerticalDirectionScaleLerpKey);
  local_1d8->VerticalDirectionScale = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->ScaleFollowSpeedVertical,0.0,0.0,this->RootSpanTime,
                      local_1d8->ScaleFollowSpeedVerticalLerpKey);
  local_1d8->ScaleFollowSpeedVertical = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->ScaleFollowSpeedDirection,0.0,0.0,this->RootSpanTime,
                      local_1d8->ScaleFollowSpeedDirectionLerpKey);
  local_1d8->ScaleFollowSpeedDirection = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->DegreePerSecond,0.0,0.0,this->RootSpanTime,
                      local_1d8->DegreePerSecondPercent);
  local_1d8->DegreePerSecond = fVar50;
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->ParticleEmitAngle,0.0,0.0,this->RootSpanTime,
                      local_1d8->ParticleEmitAngleLerpKey);
  local_1d8->ParticleEmitAngle = fVar50;
  if (((this->IsRoot != false) &&
      (pUVar12 = (this->RootAsset).field0_0x0.DebugPtr, pUVar12 != (UUIParticleEmitterAsset *)0x0))
     && (pUVar12->EmitAngleByWidgetAngle != false)) {
    local_1d8->ParticleEmitAngle =
         this->CurWidgetRotation * __real_42652ee0 + local_1d8->ParticleEmitAngle;
  }
  fVar50 = FUIParticleProperty::GetValue_Float
                     (&pUVar36->StartSpeed,0.0,0.0,this->RootSpanTime,local_1d8->StartSpeedLerpKey);
  pTVar38 = FUIParticleProperty::GetValue_Vector2D
                      (&pUVar36->Gravity,&local_198,0.0,0.0,this->RootSpanTime,
                       local_1d8->GravityLerpKey);
  dVar52 = (pTVar38->field0_0x0)._s_0.Y;
  (local_1d8->Gravity).field0_0x0._s_0.X = (pTVar38->field0_0x0)._s_0.X;
  (local_1d8->Gravity).field0_0x0._s_0.Y = dVar52;
  local_1cc = param_1->Size;
  local_1c0 = (float)local_1cc * __real_3f000000;
  fStack_1bc = local_1cc._4_4_ * __real_3f000000;
  local_1b8 = CONCAT44(fStack_1bc,local_1c0);
  dVar52 = (double)(local_1c0 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
                    fStack_1bc * (param_1->AccumulatedRenderTransform).M.M[1][1] +
                   (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
  TVar19._8_4_ = SUB84(dVar52,0);
  TVar19._s_0.X =
       (double)(fStack_1bc * (param_1->AccumulatedRenderTransform).M.M[1][0] +
                local_1c0 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  TVar19._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  (local_1d8->StartWidgetPositionWorld).field0_0x0 = TVar19;
  if (this->PositionType == UIPARTICLE_POSITIONTYPE_FREE) {
    fVar49 = this->RootSpanTime;
    dVar52 = (this->StartWidgetPositionWorld).field0_0x0._s_0.X;
    dVar3 = (local_1d8->StartWidgetPositionWorld).field0_0x0._s_0.X;
    fVar2 = local_1d8->EmitPositionLerpKey;
    dVar4 = (this->StartWidgetPositionWorld).field0_0x0._s_0.Y;
    dVar5 = (local_1d8->StartWidgetPositionWorld).field0_0x0._s_0.Y;
    dVar53 = __real_3ff0000000000000 / (double)param_1->Scale;
    dVar6 = (this->CurPos).field0_0x0._s_0.Y;
    dVar7 = (this->CurPos).field0_0x0._s_0.X;
    fVar51 = FUIParticleProperty::GetValue_Float(&(pUVar36->EmitPosition).X,0.0,0.0,fVar49,fVar2);
    fVar49 = FUIParticleProperty::GetValue_Float(&(pUVar36->EmitPosition).Y,0.0,0.0,fVar49,fVar2);
    dVar3 = (double)fVar51 * (double)this->WholeScale + (dVar52 - dVar3) * dVar53 + dVar7;
    dVar52 = (double)fVar49 * (double)this->WholeScale + (dVar4 - dVar5) * dVar53 + dVar6;
LAB_14ac9520a:
    TVar21._8_4_ = SUB84(dVar52,0);
    TVar21._s_0.X = dVar3;
    TVar21._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    (local_1d8->StartPositionLocal).field0_0x0 = TVar21;
  }
  else if (this->PositionType == UIPARTICLE_POSITIONTYPE_RELATIVE) {
    fVar49 = this->RootSpanTime;
    fVar2 = local_1d8->EmitPositionLerpKey;
    fVar51 = FUIParticleProperty::GetValue_Float(&(pUVar36->EmitPosition).X,0.0,0.0,fVar49,fVar2);
    fVar49 = FUIParticleProperty::GetValue_Float(&(pUVar36->EmitPosition).Y,0.0,0.0,fVar49,fVar2);
    dVar3 = (double)fVar51 * (double)this->WholeScale + (this->CurPos).field0_0x0._s_0.X;
    dVar52 = (double)fVar49 * (double)this->WholeScale + (this->CurPos).field0_0x0._s_0.Y;
    goto LAB_14ac9520a;
  }
  pFVar35 = local_1d8;
  __libm_sse2_sincos_();
  dVar52 = extraout_XMM0_Qa * (double)fVar50;
  TVar20._8_4_ = SUB84(dVar52,0);
  TVar20._s_0.X = extraout_XMM0_Qb * (double)fVar50;
  TVar20._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  (pFVar35->StartSpeed).field0_0x0 = TVar20;
  pFVar39 = FSlateBrush::FSlateBrush(&local_168);
  pFVar35 = local_1d8;
  uVar22 = *(undefined8 *)((longlong)&(pFVar39->TintColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(local_1d8->ImageBrush).TintColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar39->TintColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(local_1d8->ImageBrush).TintColor.SpecifiedColor.field0_0x0 + 8) =
       uVar22;
  EVar25 = (pFVar39->TintColor).ColorTableId;
  uVar26 = *(undefined2 *)&(pFVar39->TintColor).field_0x12;
  (pFVar35->ImageBrush).TintColor.ColorUseRule = (pFVar39->TintColor).ColorUseRule;
  (pFVar35->ImageBrush).TintColor.ColorTableId = EVar25;
  *(undefined2 *)&(pFVar35->ImageBrush).TintColor.field_0x12 = uVar26;
  (local_1d8->ImageBrush).DrawAs.Value = (pFVar39->DrawAs).Value;
  (local_1d8->ImageBrush).Tiling.Value = (pFVar39->Tiling).Value;
  (local_1d8->ImageBrush).Mirroring.Value = (pFVar39->Mirroring).Value;
  (local_1d8->ImageBrush).ImageType.Value = (pFVar39->ImageType).Value;
  (local_1d8->ImageBrush).ImageSize = pFVar39->ImageSize;
  fVar50 = (pFVar39->Margin).Top;
  fVar49 = (pFVar39->Margin).Right;
  fVar2 = (pFVar39->Margin).Bottom;
  (pFVar35->ImageBrush).Margin.Left = (pFVar39->Margin).Left;
  (pFVar35->ImageBrush).Margin.Top = fVar50;
  (pFVar35->ImageBrush).Margin.Right = fVar49;
  (pFVar35->ImageBrush).Margin.Bottom = fVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 = (pFVar39->ResourceObject).field0_0x0.DebugPtr, pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  (pFVar35->ImageBrush).ResourceObject.field0_0x0 = (pFVar39->ResourceObject).field0_0x0;
  dVar52 = (pFVar39->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
  (pFVar35->ImageBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.X =
       (pFVar39->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
  (pFVar35->ImageBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Y = dVar52;
  dVar52 = (pFVar39->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
  (pFVar35->ImageBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.Z =
       (pFVar39->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
  (pFVar35->ImageBrush).OutlineSettings.CornerRadii.field0_0x0._s_0.W = dVar52;
  uVar22 = *(undefined8 *)
            ((longlong)&(pFVar39->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar35->ImageBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar39->OutlineSettings).Color.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(pFVar35->ImageBrush).OutlineSettings.Color.SpecifiedColor.field0_0x0 + 8) = uVar22;
  TVar27.Value = (pFVar39->OutlineSettings).RoundingType.Value;
  bVar31 = (pFVar39->OutlineSettings).bUseBrushTransparency;
  uVar28 = *(undefined6 *)&(pFVar39->OutlineSettings).field_0x3a;
  *(undefined8 *)&(pFVar35->ImageBrush).OutlineSettings.Color.ColorUseRule =
       *(undefined8 *)&(pFVar39->OutlineSettings).Color.ColorUseRule;
  (pFVar35->ImageBrush).OutlineSettings.RoundingType =
       (TEnumAsByte<ESlateBrushRoundingType::Type>)TVar27.Value;
  (pFVar35->ImageBrush).OutlineSettings.bUseBrushTransparency = bVar31;
  *(undefined6 *)&(pFVar35->ImageBrush).OutlineSettings.field_0x3a = uVar28;
  TVar23 = (pFVar39->UVRegion).Max.field0_0x0;
  (pFVar35->ImageBrush).UVRegion.Min.field0_0x0 = (pFVar39->UVRegion).Min.field0_0x0;
  (pFVar35->ImageBrush).UVRegion.Max.field0_0x0 = TVar23;
  uVar29 = *(undefined3 *)&(pFVar39->UVRegion).field_0x11;
  (pFVar35->ImageBrush).UVRegion.bIsValid = (pFVar39->UVRegion).bIsValid;
  *(undefined3 *)&(pFVar35->ImageBrush).UVRegion.field_0x11 = uVar29;
  uVar9 = (pFVar35->ImageBrush).field_0x94;
  bVar42 = ((pFVar35->ImageBrush).bIsDynamicallyLoaded ^ pFVar39->bIsDynamicallyLoaded) & 1 ^ uVar9;
  (pFVar35->ImageBrush).field_0x94 = bVar42;
  bVar42 = (bVar42 ^ pFVar39->field_0x94) & 2 ^ bVar42;
  (pFVar35->ImageBrush).field_0x94 = bVar42;
  (pFVar35->ImageBrush).field_0x94 = (bVar42 ^ pFVar39->field_0x94) & 4 ^ bVar42;
  pFVar14 = (pFVar39->ResourceHandle).Data.Object;
  pTVar15 = (pFVar39->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a8 = (pFVar35->ImageBrush).ResourceHandle.Data.Object;
  pTStack_1a0 = (pFVar35->ImageBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (pFVar35->ImageBrush).ResourceHandle.Data.Object = pFVar14;
  (pFVar35->ImageBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController = pTVar15;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1a0);
  (pFVar35->ImageBrush).ResourceName = pFVar39->ResourceName;
  local_168._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  (local_1d8->ImageBrush).DrawAs.Value = '\x03';
  if ((((pUVar36->ScalarParams).ArrayNum < 1) && ((pUVar36->ScalarParamsWhenStart).ArrayNum < 1)) ||
     (pUVar16 = (UMaterialInterface *)pUVar36->ResourceObject, pUVar16 == (UMaterialInterface *)0x0)
     ) {
LAB_14ac954b4:
    pUVar41 = (UMaterialInstanceDynamic *)pUVar36->ResourceObject;
LAB_14ac954bb:
    pFVar35 = local_1d8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar41 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar41);
    }
    (pFVar35->ParticleResource).field0_0x0.DebugPtr = (UObject *)pUVar41;
  }
  else {
    pUVar40 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    pFVar35 = local_1d8;
    iVar32 = (int)pUVar40->_padding_;
    if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar32) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar32 * 8) !=
        &pUVar40->_padding_)) goto LAB_14ac954b4;
    if ((local_1d8->ParticleResource).field0_0x0.DebugPtr == (UObject *)0x0) {
LAB_14ac95497:
      local_1b0 = 0;
      pUVar41 = UMaterialInstanceDynamic::Create(pUVar16,(UObject *)0x0,(FName)0x0);
      goto LAB_14ac954bb;
    }
    pUVar40 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    bVar31 = FObjectPtr::IsA((FObjectPtr *)&pFVar35->ParticleResource,pUVar40);
    if ((!bVar31) ||
       (pUVar13 = (pFVar35->ParticleResource).field0_0x0.DebugPtr, pUVar13 == (UObject *)0x0))
    goto LAB_14ac95497;
    pUVar17 = *(UMaterialInterface **)&pUVar13[7].field_0x18;
    if (pUVar17 == (UMaterialInterface *)0x0) {
      bVar31 = pUVar16 == (UMaterialInterface *)0x0;
    }
    else {
      bVar31 = pUVar17 == pUVar16;
    }
    if (!bVar31) goto LAB_14ac95497;
  }
  FSlateBrush::SetResourceObject
            (&local_1d8->ImageBrush,(local_1d8->ParticleResource).field0_0x0.DebugPtr);
  if (local_1d8->EmitterType == Gravity) {
    pTVar38 = &local_188;
  }
  else {
    if (this->EmitterType == Radial) {
      dVar52 = (pUVar36->EmitPosRange).Min.field0_0x0._s_0.Y;
      (local_1d8->SourcePos).field0_0x0._s_0.X = (pUVar36->EmitPosRange).Min.field0_0x0._s_0.X;
      (local_1d8->SourcePos).field0_0x0._s_0.Y = dVar52;
      fVar50 = FUIParticleProperty::GetValue_Float
                         (&pUVar36->Radius,0.0,0.0,this->RootSpanTime,local_1d8->RadiusPercent);
      local_1d8->Radius = fVar50;
      goto LAB_14ac95584;
    }
    if (this->EmitterType != Curve) goto LAB_14ac95584;
    pTVar38 = &local_178;
  }
  pTVar38 = FRange_Vector2D::GetValue(&pUVar36->EmitPosRange,pTVar38);
  dVar52 = (pTVar38->field0_0x0)._s_0.Y;
  (local_1d8->SourcePos).field0_0x0._s_0.X = (pTVar38->field0_0x0)._s_0.X;
  (local_1d8->SourcePos).field0_0x0._s_0.Y = dVar52;
LAB_14ac95584:
  local_1d8->FollowParentPosition = (bool)FVar8;
  local_1d8->FollowParentSpeedPercent = fVar1;
  InitWithAsset(local_1d8,pUVar36);
  pFVar35 = local_1d8;
  if (((local_1d8->TrailData).TransformCache.IndexMask + 1 <
       (local_1d8->TrailData).TransformCache.AfterBack - (local_1d8->TrailData).TransformCache.Front
      ) && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x37f,L""), bVar31)) {
    pcVar18 = (code *)swi(3);
    pFVar35 = (FEasyParticleState *)(*pcVar18)();
    return pFVar35;
  }
  (pFVar35->TrailData).TransformCache.Front = 0;
  (pFVar35->TrailData).TransformCache.AfterBack = 0;
  TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::Reallocate
            (&(pFVar35->TrailData).TransformCache,0);
  pFVar35 = local_1d8;
  if (pUVar36->Trail != false) {
    uVar33 = pUVar36->TrailSampleCount;
    (local_1d8->TrailData).MaxCount = uVar33;
    uVar33 = TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                       (&(local_1d8->TrailData).TransformCache,uVar33);
    if ((pFVar35->TrailData).TransformCache.IndexMask + 1 < uVar33) {
      TRingBuffer<FUIParticleTransform,TSizedDefaultAllocator<32>_>::Reallocate
                (&(pFVar35->TrailData).TransformCache,uVar33);
    }
    FSlateBrush::SetResourceObject(&local_1d8->TrailBrush,pUVar36->TrailResourceObject);
  }
  local_1d8->ParentParticle = this;
  local_1d8->RootParticle = this->RootParticle;
  local_1d8->RootSpanTime = this->RootSpanTime;
  ResetStateProperty(local_1d8);
  local_1d8->IsRoot = false;
  local_1d8->RootSpanTime = this->RootSpanTime;
  local_1d8->LayerOrder = this->LayerOrder + 1;
  local_1d8->ZOrder = iVar10 + this->ZOrder;
  local_1d8->IsFirstTick = true;
  return local_1d8;
}

// GetChildrenParticleCount @ 14ac97fa0

int __thiscall FEasyParticleState::GetChildrenParticleCount(FEasyParticleState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_res8;
  
  uVar8 = 0;
  if (this->IsRoot == false) {
    uVar8 = (uint)(this->InPool == false);
  }
  uVar7 = 0;
  if (0 < (this->ChildrenParticleArray).ArrayNum) {
    local_res8 = 0;
    do {
      uVar6 = 0;
      lVar9 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < (this->ChildrenParticleArray).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + local_res8 + 0x18) <=
            (int)uVar6) break;
        uVar4 = 0;
        if ((int)uVar7 < (this->ChildrenParticleArray).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pFVar1 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar4 = 0;
        if ((int)uVar6 < *(int *)(pFVar1 + (longlong)(int)uVar7 * 0x50 + 0x18)) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = GetChildrenParticleCount
                          (*(FEasyParticleState **)
                            (lVar9 + *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x50 + 0x10)));
        uVar8 = uVar8 + iVar5;
        uVar6 = uVar6 + 1;
        lVar9 = lVar9 + 8;
      }
      local_res8 = local_res8 + 0x50;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->ChildrenParticleArray).ArrayNum);
  }
  return uVar8;
}

// GetChildrenParticleCountInPool @ 14ac98160

int __thiscall FEasyParticleState::GetChildrenParticleCountInPool(FEasyParticleState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_res8;
  
  uVar8 = 0;
  if (this->IsRoot == false) {
    uVar8 = (uint)(this->InPool != false);
  }
  uVar7 = 0;
  if (0 < (this->ChildrenParticleArray).ArrayNum) {
    local_res8 = 0;
    do {
      uVar6 = 0;
      lVar9 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < (this->ChildrenParticleArray).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + local_res8 + 0x18) <=
            (int)uVar6) break;
        uVar4 = 0;
        if ((int)uVar7 < (this->ChildrenParticleArray).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pFVar1 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar4 = 0;
        if ((int)uVar6 < *(int *)(pFVar1 + (longlong)(int)uVar7 * 0x50 + 0x18)) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = GetChildrenParticleCountInPool
                          (*(FEasyParticleState **)
                            (lVar9 + *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x50 + 0x10)));
        uVar8 = uVar8 + iVar5;
        uVar6 = uVar6 + 1;
        lVar9 = lVar9 + 8;
      }
      local_res8 = local_res8 + 0x50;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->ChildrenParticleArray).ArrayNum);
  }
  return uVar8;
}

// InitWithAsset @ 14ac9a6e0

void __thiscall
FEasyParticleState::InitWithAsset(FEasyParticleState *this,UUIParticleEmitterAsset *param_1)

{
  UUIParticleEmitterAsset *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  TArray<FEasyParticleChildEmitterArray,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  longlong local_res8;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  FScriptContainerElement local_50;
  undefined4 local_4c;
  FScriptContainerElement local_48;
  undefined8 local_44;
  
  pUVar1 = (this->SelfAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UUIParticleEmitterAsset *)0x0) {
    bVar19 = param_1 == (UUIParticleEmitterAsset *)0x0;
  }
  else {
    bVar19 = pUVar1 == param_1;
  }
  if ((bVar19) &&
     (iVar7 = (param_1->ChildrenEmitters).ArrayNum, iVar7 == (this->ChildrenParticleArray).ArrayNum)
     ) {
    uVar8 = 0;
    uVar9 = 0;
    uVar12 = uVar8;
    uVar18 = uVar8;
    if (0 < iVar7) {
      do {
        uVar16 = (uint)uVar8;
        uVar15 = ~uVar16 >> 0x1f;
        uVar5 = uVar9;
        if ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum) {
          uVar5 = uVar15;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar5 = uVar9;
        if ((int)uVar16 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar15;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(pFVar2 + uVar18 + 0x34) =
             *(undefined4 *)((param_1->ChildrenEmitters).AllocatorInstance.Data + uVar12);
        uVar5 = uVar9;
        if ((int)uVar16 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar15;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)(pFVar2 + uVar18) =
             *(undefined8 *)((param_1->ChildrenEmitters).AllocatorInstance.Data + uVar12 + 0x10);
        pFVar2[uVar18 + 0x40] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar2 + uVar18 + 0x44) = 0;
        uVar6 = 0;
        uVar5 = uVar6;
        if ((int)uVar16 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar15;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(pFVar2 + uVar18 + 0x30) =
             *(undefined4 *)((param_1->ChildrenEmitters).AllocatorInstance.Data + uVar12 + 0xc);
        uVar5 = uVar6;
        if ((int)uVar16 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar15;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2[uVar18 + 0x38] = (param_1->ChildrenEmitters).AllocatorInstance.Data[uVar12 + 4];
        if ((int)uVar16 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar6 = uVar15;
        }
        if ((uVar6 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = (ulonglong)(uVar16 + 1);
        *(undefined4 *)(pFVar2 + uVar18 + 0x3c) =
             *(undefined4 *)((param_1->ChildrenEmitters).AllocatorInstance.Data + uVar12 + 8);
        uVar12 = uVar12 + 0x18;
        uVar18 = uVar18 + 0x50;
      } while ((int)(uVar16 + 1) < (param_1->ChildrenEmitters).ArrayNum);
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UUIParticleEmitterAsset *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SelfAsset).field0_0x0.DebugPtr = param_1;
    pTVar10 = &this->ChildrenParticleArray;
    DestructItems<FEasyParticleChildEmitterArray,int>
              ((FEasyParticleChildEmitterArray *)(pTVar10->AllocatorInstance).Data,
               (this->ChildrenParticleArray).ArrayNum);
    uVar9 = 0;
    piVar13 = &(this->ChildrenParticleArray).ArrayMax;
    (this->ChildrenParticleArray).ArrayNum = 0;
    if (*piVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&pTVar10->AllocatorInstance,0,piVar13);
    }
    if (0 < (param_1->ChildrenEmitters).ArrayNum) {
      local_res8 = 0;
      do {
        piVar13 = &(this->ChildrenParticleArray).ArrayMax;
        local_80 = 0;
        uVar16 = ~uVar9 >> 0x1f;
        local_78 = (void *)0x0;
        local_70 = 0;
        uVar5 = 0;
        if ((int)uVar9 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar16;
        }
        local_68 = (void *)0x0;
        local_60 = 0;
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_54 = *(undefined4 *)((param_1->ChildrenEmitters).AllocatorInstance.Data + local_res8);
        uVar5 = 0;
        if ((int)uVar9 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar16;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_88 = *(undefined8 *)
                    ((param_1->ChildrenEmitters).AllocatorInstance.Data + local_res8 + 0x10);
        local_48 = (FScriptContainerElement)0x0;
        local_44 = 0;
        uVar15 = 0;
        uVar5 = uVar15;
        if ((int)uVar9 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = uVar16;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_58 = *(undefined4 *)
                    ((param_1->ChildrenEmitters).AllocatorInstance.Data + local_res8 + 0xc);
        uVar5 = uVar15;
        if ((int)uVar9 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_50 = (param_1->ChildrenEmitters).AllocatorInstance.Data[local_res8 + 4];
        if ((int)uVar9 < (param_1->ChildrenEmitters).ArrayNum) {
          uVar15 = ~uVar9 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (pTVar10->AllocatorInstance).Data;
        local_4c = *(undefined4 *)
                    ((param_1->ChildrenEmitters).AllocatorInstance.Data + local_res8 + 8);
        if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar13 * 0x50)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->ChildrenParticleArray).ArrayNum;
        if (iVar7 == *piVar13) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&pTVar10->AllocatorInstance,piVar13);
        }
        pvVar4 = local_78;
        pFVar2 = (pTVar10->AllocatorInstance).Data;
        (this->ChildrenParticleArray).ArrayNum = iVar7 + 1;
        lVar17 = (longlong)iVar7 * 0x50;
        pFVar14 = pFVar2 + lVar17 + 0x10;
        *(undefined8 *)(pFVar2 + lVar17) = local_88;
        *(undefined8 *)(pFVar2 + lVar17 + 8) = local_80;
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        lVar11 = (longlong)(int)local_70;
        *(int *)&pFVar14[8].field_0x0 = (int)local_70;
        if ((int)local_70 == 0) {
          *(int *)(pFVar2 + lVar17 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_70,0,(ForAnyElementType *)pFVar14,(int)local_70,
                     (int *)(pFVar2 + lVar17 + 0x1c));
          memcpy(*(void **)&pFVar14->field_0x0,pvVar4,lVar11 << 3);
        }
        pvVar4 = local_68;
        pFVar14 = pFVar2 + lVar17 + 0x20;
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        lVar11 = (longlong)(int)local_60;
        *(int *)&pFVar14[8].field_0x0 = (int)local_60;
        if ((int)local_60 == 0) {
          *(int *)(pFVar2 + lVar17 + 0x2c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_60,0,(ForAnyElementType *)pFVar14,(int)local_60,
                     (int *)(pFVar2 + lVar17 + 0x2c));
          memcpy(*(void **)&pFVar14->field_0x0,pvVar4,lVar11 << 2);
        }
        *(undefined4 *)(pFVar2 + lVar17 + 0x30) = local_58;
        *(undefined4 *)(pFVar2 + lVar17 + 0x34) = local_54;
        pFVar2[lVar17 + 0x38] = local_50;
        *(undefined4 *)(pFVar2 + lVar17 + 0x3c) = local_4c;
        pFVar2[lVar17 + 0x40] = local_48;
        *(undefined4 *)(pFVar2 + lVar17 + 0x44) = (undefined4)local_44;
        *(undefined4 *)(pFVar2 + lVar17 + 0x48) = local_44._4_4_;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        uVar9 = uVar9 + 1;
        local_res8 = local_res8 + 0x18;
      } while ((int)uVar9 < (param_1->ChildrenEmitters).ArrayNum);
    }
  }
  return;
}

// IsAllChildrenEnd @ 14ac9b040

bool __thiscall FEasyParticleState::IsAllChildrenEnd(FEasyParticleState *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_res8;
  
  if ((((this->IsRoot != false) || (this->InPool != false)) ||
      (fVar1 = this->Deadtime, fVar1 < this->CurLifetime || fVar1 == this->CurLifetime)) ||
     (fVar1 <= 0.0)) {
    uVar8 = 0;
    if (0 < (this->ChildrenParticleArray).ArrayNum) {
      local_res8 = 0;
      do {
        uVar7 = 0;
        lVar9 = 0;
        while( true ) {
          uVar6 = 0;
          if ((int)uVar8 < (this->ChildrenParticleArray).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          if (*(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + local_res8 + 0x18) <=
              (int)uVar7) break;
          uVar6 = 0;
          if ((int)uVar8 < (this->ChildrenParticleArray).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          pFVar2 = (this->ChildrenParticleArray).AllocatorInstance.Data;
          uVar6 = 0;
          if ((int)uVar7 < *(int *)(pFVar2 + (longlong)(int)uVar8 * 0x50 + 0x18)) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
          }
          bVar4 = IsAllChildrenEnd(*(FEasyParticleState **)
                                    (lVar9 + *(longlong *)
                                              (pFVar2 + (longlong)(int)uVar8 * 0x50 + 0x10)));
          if (!bVar4) goto LAB_14ac9b20e;
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 8;
        }
        local_res8 = local_res8 + 0x50;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->ChildrenParticleArray).ArrayNum);
    }
    bVar4 = true;
  }
  else {
LAB_14ac9b20e:
    bVar4 = false;
  }
  return bVar4;
}

// IsEmitterEnd @ 14ac9b260

bool __thiscall FEasyParticleState::IsEmitterEnd(FEasyParticleState *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  double dVar7;
  uint uVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  FDateTime FVar13;
  UUIParticleEmitterAsset *pUVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  fVar9 = __real_bf800000;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar7 = __real_3e7ad7f29abcaf49;
  fVar6 = __real_322bcc77;
  iVar2 = (this->ChildrenParticleArray).ArrayNum;
  if ((((iVar2 != 0) && (this->bStopEmit == false)) &&
      ((this->IsRoot != false ||
       (((this->InPool == false &&
         (fVar1 = this->Deadtime, this->CurLifetime <= fVar1 && fVar1 != this->CurLifetime)) &&
        (0.0 < fVar1)))))) && (uVar16 = 0, 0 < iVar2)) {
    lVar17 = 0;
    do {
      uVar15 = ~uVar16 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      if ((this->ChildrenParticleArray).AllocatorInstance.Data[lVar17 + 0x40] ==
          (FScriptContainerElement)0x0) {
        return false;
      }
      FVar13 = FDateTime::Now();
      uVar12 = 0;
      if ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      iVar2 = UUIParticleUtility::LevelOfDetail;
      lVar3 = *(longlong *)FVar13.Ticks;
      lVar4 = *(longlong *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar17 + 8);
      uVar12 = 0;
      if ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pUVar14 = UUIParticleEmitterAsset::GetLODAsset
                          (*(UUIParticleEmitterAsset **)
                            ((this->ChildrenParticleArray).AllocatorInstance.Data + lVar17),iVar2);
      if ((float)((double)(lVar3 - lVar4) * dVar7) < pUVar14->EmitSeconds) {
        return false;
      }
      if ((float)((uint)(pUVar14->EmitSeconds - fVar9) & uVar8) <= fVar6) {
        return false;
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x50;
    } while ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum);
  }
  return true;
}

// IsInPool @ 14ac9b6d0

bool __thiscall FEasyParticleState::IsInPool(FEasyParticleState *this)

{
  return this->InPool;
}

// IsParticleEnd @ 14ac9b6e0

bool __thiscall FEasyParticleState::IsParticleEnd(FEasyParticleState *this)

{
  float fVar1;
  
  if (this->IsRoot != false) {
    return false;
  }
  if ((this->InPool == false) &&
     (fVar1 = this->Deadtime, this->CurLifetime <= fVar1 && fVar1 != this->CurLifetime)) {
    return fVar1 <= 0.0;
  }
  return true;
}

// OnPaint @ 14ac9b910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEasyParticleState::OnPaint
          (FEasyParticleState *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  UMaterialInstanceDynamic *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TVector2<float>_u_0 TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  UClass *pUVar15;
  uint uVar16;
  uint uVar17;
  UUIParticleEmitterAsset *pUVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  FColor local_res8;
  FSlateResourceHandle local_f8;
  TVector2<double>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<float>_u_0 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  if (this->IsNeedPaint != false) {
    pUVar18 = (this->SelfAsset).field0_0x0.DebugPtr;
    if ((0 < (pUVar18->ScalarParams).ArrayNum) &&
       (this_00 = (UMaterialInstanceDynamic *)(this->ImageBrush).ResourceObject.field0_0x0.DebugPtr,
       this_00 != (UMaterialInstanceDynamic *)0x0)) {
      pUVar15 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar4 = (int)pUVar15->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar15->_padding_)) {
        pUVar18 = (this->SelfAsset).field0_0x0.DebugPtr;
      }
      else {
        pUVar18 = (this->SelfAsset).field0_0x0.DebugPtr;
        uVar16 = 0;
        if (0 < (pUVar18->ScalarParams).ArrayNum) {
          lVar20 = 0;
          lVar19 = 0;
          do {
            uVar17 = 0;
            if ((int)uVar16 < (pUVar18->ScalarParams).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (pUVar18->ScalarParams).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar5 + lVar19) != 0) &&
               ((int)uVar16 < (this->ScalarParameterLerpKeys).ArrayNum)) {
              uVar17 = 0;
              if ((int)uVar16 < (this->ScalarParameterLerpKeys).ArrayNum) {
                uVar17 = ~uVar16 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar21 = FUIParticleProperty::GetValue_Float
                                 ((FUIParticleProperty *)(pFVar5 + lVar19 + 8),this->CurPercent,
                                  this->CurLifetime,this->RootSpanTime,
                                  *(float *)((this->ScalarParameterLerpKeys).AllocatorInstance.Data
                                            + lVar20));
              UMaterialInstanceDynamic::SetScalarParameterValue
                        (this_00,*(FName *)(pFVar5 + lVar19),fVar21);
            }
            pUVar18 = (this->SelfAsset).field0_0x0.DebugPtr;
            uVar16 = uVar16 + 1;
            lVar19 = lVar19 + 0x808;
            lVar20 = lVar20 + 4;
          } while ((int)uVar16 < (pUVar18->ScalarParams).ArrayNum);
        }
      }
    }
    if (pUVar18->Trail != false) {
      uVar2 = *(undefined8 *)
               ((longlong)&(this->PaintGeometryCache).AccumulatedRenderTransform.Trans.field0_0x0 +
               4);
      TVar7 = (this->PaintGeometryCache).DrawPosition.field0_0x0;
      uVar8 = *(undefined8 *)&(this->PaintGeometryCache).DrawScale;
      uVar9 = *(undefined8 *)((longlong)&(this->PaintGeometryCache).DrawSize.field0_0x0 + 4);
      uVar10 = *(undefined8 *)((longlong)&(this->PaintGeometryCache).LocalSize.field0_0x0 + 4);
      uVar11 = *(undefined8 *)((this->PaintGeometryCache).AccumulatedRenderTransform.M.M[0] + 1);
      uVar12 = *(undefined8 *)((this->PaintGeometryCache).AccumulatedRenderTransform.M.M[1] + 1);
      FLinearColor::ToFColorSRGB(&this->PaintColorCache);
      uVar1 = this->CurSizeX;
      uVar3 = this->CurSizeY;
      local_d8._s_0.X = (this->CurPos).field0_0x0._s_0.X;
      local_d8._s_0.Y = (this->CurPos).field0_0x0._s_0.Y;
      local_e8._8_4_ = SUB84((double)(float)uVar3,0);
      local_e8._s_0.X = (double)(float)uVar1;
      local_e8._12_4_ = (int)((ulonglong)(double)(float)uVar3 >> 0x20);
      local_c8 = TVar7;
      uStack_c0 = uVar8;
      local_b8 = uVar9;
      uStack_b0 = uVar10;
      local_a8 = uVar11;
      uStack_a0 = uVar12;
      local_98 = uVar2;
      FUIParticleTrail::Enqueue
                (&this->TrailData,(TVector2<double> *)&local_d8._s_0,
                 (TVector2<double> *)&local_e8._s_0,local_res8,(FPaintGeometry *)&local_c8._s_0);
      FUIParticleTrail::GenerateVertexAndIndex(&this->TrailData);
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentApplication.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                              ,0x141,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar13 = IsInGameThread();
      if ((((!bVar13) && (bVar13 = IsInSlateThread(), !bVar13)) &&
          (bVar13 = (*IsInAsyncLoadingThread)(), !bVar13)) &&
         ((bVar13 = IsInParallelLoadingThread(), !bVar13 &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L""), bVar13)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(**(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60 + 0x80
                  ))(*(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60,
                     &local_f8,&this->TrailBrush);
      bVar13 = FSlateResourceHandle::IsValid(&local_f8);
      if (((bVar13) && (0 < (this->TrailData).VertexData.ArrayNum)) &&
         (0 < (this->TrailData).IndexData.ArrayNum)) {
        FSlateDrawElement::MakeCustomVerts
                  (param_4,param_5 + -1 + this->ZOrder,&local_f8,&(this->TrailData).VertexData,
                   &(this->TrailData).IndexData,(ISlateUpdatableInstanceBuffer *)0x0,0,0,
                   this->DrawEffect);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.Data.SharedReferenceCount.ReferenceController);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.Data.SharedReferenceCount.ReferenceController);
      }
    }
    FSlateDrawElement::MakeBox
              (param_4,this->ZOrder + param_5,&this->PaintGeometryCache,&this->ImageBrush,
               this->DrawEffect,&this->PaintColorCache);
  }
  uVar16 = 0;
  if (0 < (this->ChildrenParticleArray).ArrayNum) {
    lVar19 = 0;
    do {
      uVar17 = 0;
      lVar20 = 0;
      while( true ) {
        uVar14 = 0;
        if ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar19 + 0x18) <=
            (int)uVar17) break;
        uVar14 = 0;
        if ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)uVar17 < *(int *)(pFVar5 + lVar19 + 0x18)) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        OnPaint(*(FEasyParticleState **)(*(longlong *)(pFVar5 + lVar19 + 0x10) + lVar20),param_1,
                param_2,param_3,param_4,param_5,param_6,param_7);
        uVar17 = uVar17 + 1;
        lVar20 = lVar20 + 8;
      }
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x50;
    } while ((int)uVar16 < (this->ChildrenParticleArray).ArrayNum);
  }
  return;
}

// OnPaintSelf @ 14ac9c480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEasyParticleState::OnPaintSelf
          (FEasyParticleState *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  UMaterialInstanceDynamic *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UUIParticleEmitterAsset *pUVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  
  if (this->IsNeedPaint == false) {
    return;
  }
  if ((0 < (((this->SelfAsset).field0_0x0.DebugPtr)->ScalarParams).ArrayNum) &&
     (this_00 = (UMaterialInstanceDynamic *)(this->ImageBrush).ResourceObject.field0_0x0.DebugPtr,
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    pUVar6 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pUVar7 = (this->SelfAsset).field0_0x0.DebugPtr;
      uVar8 = 0;
      if (0 < (pUVar7->ScalarParams).ArrayNum) {
        lVar10 = 0;
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (pUVar7->ScalarParams).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (pUVar7->ScalarParams).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar2 + lVar9) != 0) &&
             ((int)uVar8 < (this->ScalarParameterLerpKeys).ArrayNum)) {
            uVar5 = 0;
            if ((int)uVar8 < (this->ScalarParameterLerpKeys).ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar11 = FUIParticleProperty::GetValue_Float
                               ((FUIParticleProperty *)(pFVar2 + lVar9 + 8),this->CurPercent,
                                this->CurLifetime,this->RootSpanTime,
                                *(float *)((this->ScalarParameterLerpKeys).AllocatorInstance.Data +
                                          lVar10));
            UMaterialInstanceDynamic::SetScalarParameterValue
                      (this_00,*(FName *)(pFVar2 + lVar9),fVar11);
          }
          pUVar7 = (this->SelfAsset).field0_0x0.DebugPtr;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x808;
          lVar10 = lVar10 + 4;
        } while ((int)uVar8 < (pUVar7->ScalarParams).ArrayNum);
      }
    }
  }
  FSlateDrawElement::MakeBox
            (param_4,param_5 + this->ZOrder,&this->PaintGeometryCache,&this->ImageBrush,
             this->DrawEffect,&this->PaintColorCache);
  return;
}

// ResetStateProperty @ 14ac9f470

void __thiscall FEasyParticleState::ResetStateProperty(FEasyParticleState *this)

{
  FUIParticleProperty *this_00;
  void *_Dst;
  double dVar1;
  double dVar2;
  float fVar3;
  UMaterialInstanceDynamic *this_01;
  FScriptContainerElement *pFVar4;
  FEasyParticleState *pFVar5;
  code *pcVar6;
  FLerpKeyVector2D FVar7;
  TVector2<double>_u_0 TVar8;
  TVector2<double>_u_0 TVar9;
  TVector2<double>_u_0 TVar10;
  double dVar11;
  double dVar12;
  TVector2<double>_u_0 TVar13;
  TVector2<double>_u_0 TVar14;
  TVector2<double>_u_0 TVar15;
  TVector2<double>_u_0 TVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  TVector2<double> *pTVar22;
  FLinearColor *pFVar23;
  UClass *pUVar24;
  FName *pFVar25;
  UUIParticleEmitterAsset *pUVar26;
  EEmitterType EVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  longlong local_res8;
  FName local_res10;
  FLerpKeyColor local_c8;
  TVector2<double> local_b8;
  TVector2<double> local_a8;
  TVector2<double> local_98;
  FLinearColor local_88 [5];
  
  pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
  this->SpawnParticleDeltaTime = 0.0;
  this->CurLifetime = 0.0;
  this->CurPercent = 0.0;
  this_00 = &pUVar26->Size;
  if (pUVar26->UseSeparateSize == false) {
    fVar35 = this->WholeScale;
    fVar34 = FUIParticleProperty::GetValue_Float
                       (this_00,0.0,0.0,this->RootSpanTime,this->SizeLerpKey);
    fVar34 = fVar34 * fVar35;
    this->CurSizeX = fVar34;
  }
  else {
    pTVar22 = FUIParticleProperty::GetValue_Vector2D
                        (this_00,&local_b8,0.0,0.0,this->RootSpanTime,this->SizeXLerpKey);
    fVar35 = (this->SizeYLerpKey).Y;
    pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
    this->CurSizeX = (float)((double)this->WholeScale * (pTVar22->field0_0x0)._s_0.X);
    FVar7.Y = fVar35;
    FVar7.X = (this->SizeYLerpKey).X;
    pTVar22 = FUIParticleProperty::GetValue_Vector2D
                        (&pUVar26->Size,&local_a8,this->CurPercent,this->CurLifetime,
                         this->RootSpanTime,FVar7);
    fVar34 = (float)((double)this->WholeScale * (pTVar22->field0_0x0)._s_0.Y);
  }
  this->CurSizeY = fVar34;
  pTVar22 = FUIParticleProperty::GetValue_Vector2D
                      (&((this->SelfAsset).field0_0x0.DebugPtr)->Pivot,&local_98,this->CurPercent,
                       this->CurLifetime,this->RootSpanTime,this->PivotLerpKey);
  local_c8.R = (this->ColorLerpKey).R;
  local_c8.G = (this->ColorLerpKey).G;
  local_c8.B = (this->ColorLerpKey).B;
  local_c8.A = (this->ColorLerpKey).A;
  pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
  fVar35 = this->CurLifetime;
  dVar11 = (pTVar22->field0_0x0)._s_0.Y;
  fVar3 = this->RotationStart;
  fVar34 = this->CurPercent;
  (this->CurPivot).field0_0x0._s_0.X = (pTVar22->field0_0x0)._s_0.X;
  (this->CurPivot).field0_0x0._s_0.Y = dVar11;
  this->CurRotation = fVar3;
  dVar11 = (this->StartSpeed).field0_0x0._s_0.Y;
  (this->CurSpeed).field0_0x0._s_0.X = (this->StartSpeed).field0_0x0._s_0.X;
  (this->CurSpeed).field0_0x0._s_0.Y = dVar11;
  pFVar23 = FUIParticleProperty::GetValue_Color
                      (&pUVar26->Color,local_88,fVar34,fVar35,this->RootSpanTime,&local_c8);
  pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
  uVar17 = *(undefined8 *)&pFVar23->field0_0x0;
  uVar18 = *(undefined8 *)((longlong)&pFVar23->field0_0x0 + 8);
  this->CurAngle = this->ParticleEmitAngle;
  *(undefined8 *)&(this->CurColor).field0_0x0 = uVar17;
  *(undefined8 *)((longlong)&(this->CurColor).field0_0x0 + 8) = uVar18;
  this->CurDelay = 0.0;
  this->bStopEmit = false;
  if ((0 < (pUVar26->ScalarParamsWhenStart).ArrayNum) &&
     (this_01 = (UMaterialInstanceDynamic *)(this->ImageBrush).ResourceObject.field0_0x0.DebugPtr,
     this_01 != (UMaterialInstanceDynamic *)0x0)) {
    pUVar24 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar32 = (int)pUVar24->_padding_;
    if ((iVar32 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar32 * 8) ==
        &pUVar24->_padding_)) {
      pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
      uVar28 = 0;
      if (0 < (pUVar26->ScalarParamsWhenStart).ArrayNum) {
        lVar33 = 0;
        lVar31 = 0;
        do {
          uVar30 = 0;
          if ((int)uVar28 < (pUVar26->ScalarParamsWhenStart).ArrayNum) {
            uVar30 = ~uVar28 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (pUVar26->ScalarParamsWhenStart).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar4 + lVar31) != 0) &&
             ((int)uVar28 < (this->ScalarParameterWhenStartLerpKeys).ArrayNum)) {
            uVar30 = 0;
            if ((int)uVar28 < (this->ScalarParameterWhenStartLerpKeys).ArrayNum) {
              uVar30 = ~uVar28 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar35 = FUIParticleProperty::GetValue_Float
                               ((FUIParticleProperty *)(pFVar4 + lVar31 + 8),this->CurPercent,
                                this->CurLifetime,this->RootSpanTime,
                                *(float *)((this->ScalarParameterWhenStartLerpKeys).
                                           AllocatorInstance.Data + lVar33));
            UMaterialInstanceDynamic::SetScalarParameterValue
                      (this_01,*(FName *)(pFVar4 + lVar31),fVar35);
          }
          pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
          uVar28 = uVar28 + 1;
          lVar31 = lVar31 + 0x808;
          lVar33 = lVar33 + 4;
        } while ((int)uVar28 < (pUVar26->ScalarParamsWhenStart).ArrayNum);
      }
      fVar35 = this->Deadtime;
      pFVar25 = ::FName::FName(&local_res10,"LifeSpan");
      UMaterialInstanceDynamic::SetScalarParameterValue(this_01,*pFVar25,fVar35);
    }
    pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
  }
  EVar27 = this->EmitterType;
  if (EVar27 == Gravity) {
    dVar11 = (this->StartPositionLocal).field0_0x0._s_0.Y + (this->SourcePos).field0_0x0._s_0.Y;
    TVar8._8_4_ = SUB84(dVar11,0);
    TVar8._s_0.X = (this->StartPositionLocal).field0_0x0._s_0.X +
                   (this->SourcePos).field0_0x0._s_0.X;
    TVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (this->CurPos).field0_0x0 = TVar8;
  }
  else if (EVar27 == Radial) {
    __libm_sse2_sincos_();
    dVar11 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)this->Radius +
             (this->StartPositionLocal).field0_0x0._s_0.Y;
    TVar14._8_4_ = SUB84(dVar11,0);
    TVar14._s_0.X =
         (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (double)this->Radius +
         (this->StartPositionLocal).field0_0x0._s_0.X;
    TVar14._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (this->CurPos).field0_0x0 = TVar14;
  }
  else if (EVar27 == Curve) {
    dVar11 = (this->StartPositionLocal).field0_0x0._s_0.X;
    dVar12 = (this->StartPositionLocal).field0_0x0._s_0.Y;
    dVar1 = (this->SourcePos).field0_0x0._s_0.X;
    dVar2 = (this->SourcePos).field0_0x0._s_0.Y;
    fVar35 = FUIParticleProperty::GetValue_Float
                       (&pUVar26->PositionY,this->CurPercent,this->CurLifetime,this->RootSpanTime,
                        this->PositionYLerpKey);
    fVar34 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->PositionX,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->PositionXLerpKey);
    EVar27 = this->EmitterType;
    dVar12 = (double)fVar35 * (double)this->WholeScale + dVar12 + dVar2;
    TVar16._8_4_ = SUB84(dVar12,0);
    TVar16._s_0.X = (double)this->WholeScale * (double)fVar34 + dVar11 + dVar1;
    TVar16._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    (this->CurPos).field0_0x0 = TVar16;
  }
  pUVar26 = (this->SelfAsset).field0_0x0.DebugPtr;
  if (pUVar26 != (UUIParticleEmitterAsset *)0x0) {
    if ((this->FollowParentSpeedPercent == 0.0) ||
       (pFVar5 = this->ParentParticle, pFVar5 == (FEasyParticleState *)0x0)) {
      dVar11 = (this->StartSpeed).field0_0x0._s_0.X;
      dVar12 = *(double *)((longlong)&(this->StartSpeed).field0_0x0 + 8);
    }
    else {
      dVar11 = (double)this->FollowParentSpeedPercent;
      dVar12 = dVar11 * (pFVar5->CurSpeed).field0_0x0._s_0.Y + (this->StartSpeed).field0_0x0._s_0.Y;
      dVar11 = dVar11 * (pFVar5->CurSpeed).field0_0x0._s_0.X + (this->StartSpeed).field0_0x0._s_0.X;
    }
    TVar9._8_4_ = SUB84(dVar12,0);
    TVar9._s_0.X = dVar11;
    TVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    (this->CurSpeed).field0_0x0 = TVar9;
  }
  if (EVar27 == Gravity) {
    dVar11 = (this->StartPositionLocal).field0_0x0._s_0.Y + (this->SourcePos).field0_0x0._s_0.Y;
    TVar10._8_4_ = SUB84(dVar11,0);
    TVar10._s_0.X =
         (this->StartPositionLocal).field0_0x0._s_0.X + (this->SourcePos).field0_0x0._s_0.X;
    TVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (this->CurPos).field0_0x0 = TVar10;
  }
  else if (EVar27 == Radial) {
    __libm_sse2_sincos_();
    dVar11 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * (double)this->Radius +
             (this->StartPositionLocal).field0_0x0._s_0.Y;
    TVar13._8_4_ = SUB84(dVar11,0);
    TVar13._s_0.X =
         (double)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) * (double)this->Radius +
         (this->StartPositionLocal).field0_0x0._s_0.X;
    TVar13._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (this->CurPos).field0_0x0 = TVar13;
  }
  else if (EVar27 == Curve) {
    dVar11 = (this->StartPositionLocal).field0_0x0._s_0.X;
    dVar12 = (this->StartPositionLocal).field0_0x0._s_0.Y;
    dVar1 = (this->SourcePos).field0_0x0._s_0.X;
    dVar2 = (this->SourcePos).field0_0x0._s_0.Y;
    fVar35 = FUIParticleProperty::GetValue_Float
                       (&pUVar26->PositionY,this->CurPercent,this->CurLifetime,this->RootSpanTime,
                        this->PositionYLerpKey);
    fVar34 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->PositionX,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->PositionXLerpKey);
    dVar12 = (double)fVar35 * (double)this->WholeScale + dVar12 + dVar2;
    TVar15._8_4_ = SUB84(dVar12,0);
    TVar15._s_0.X = (double)this->WholeScale * (double)fVar34 + dVar11 + dVar1;
    TVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    (this->CurPos).field0_0x0 = TVar15;
  }
  uVar28 = 0;
  if (0 < (this->ChildrenParticleArray).ArrayNum) {
    lVar31 = 0;
    do {
      uVar29 = ~uVar28 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
        uVar30 = uVar29;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->ChildrenParticleArray).AllocatorInstance.Data[lVar31 + 0x40] =
           (FScriptContainerElement)0x0;
      uVar30 = 0;
      if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
        uVar30 = uVar29;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar31 + 0x44) = 0;
      uVar30 = 0;
      if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
        uVar30 = uVar29;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->ChildrenParticleArray).AllocatorInstance.Data;
      uVar30 = 0;
      if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
        uVar30 = ~uVar28 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar30 = *(uint *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar31 + 0x18);
      iVar32 = *(int *)(pFVar4 + lVar31 + 0x28);
      if (iVar32 < (int)uVar30) {
        iVar20 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar30 - iVar32,(ForAnyElementType *)(pFVar4 + lVar31 + 0x20),
                            (int *)(pFVar4 + lVar31 + 0x28),(int *)(pFVar4 + lVar31 + 0x2c));
        memset((void *)(*(longlong *)(pFVar4 + lVar31 + 0x20) + (longlong)iVar20 * 4),0,
               (longlong)(int)(uVar30 - iVar32) << 2);
      }
      else {
        if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
        }
        if ((int)uVar30 < iVar32) {
          iVar32 = iVar32 - uVar30;
          if (iVar32 < 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (iVar32 == 0) goto LAB_14ac9fdae;
          _Dst = (void *)(*(longlong *)(pFVar4 + lVar31 + 0x20) + (longlong)(int)uVar30 * 4);
          iVar20 = (*(int *)(pFVar4 + lVar31 + 0x28) - iVar32) - uVar30;
          if (iVar20 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar32 * 4),(longlong)iVar20 << 2);
          }
          iVar20 = *(int *)(pFVar4 + lVar31 + 0x28);
          *(int *)(pFVar4 + lVar31 + 0x28) = iVar20 - iVar32;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)(pFVar4 + lVar31 + 0x20),iVar20 - iVar32,
                     (int *)(pFVar4 + lVar31 + 0x2c));
        }
      }
LAB_14ac9fdae:
      uVar30 = 0;
      local_res8 = 0;
      uVar29 = ~uVar28 >> 0x1f;
      lVar33 = 0;
      while( true ) {
        uVar21 = 0;
        if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
          uVar21 = uVar29;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar31 + 0x28) <=
            (int)uVar30) break;
        uVar21 = 0;
        if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
          uVar21 = uVar29;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar30 < *(int *)(pFVar4 + lVar31 + 0x28)) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(uint *)(local_res8 + *(longlong *)(pFVar4 + lVar31 + 0x20)) = uVar30;
        uVar21 = 0;
        if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
          uVar21 = uVar29;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar30 < *(int *)(pFVar4 + lVar31 + 0x18)) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)(*(longlong *)(*(longlong *)(pFVar4 + lVar31 + 0x10) + lVar33) + 0x3da) = 1;
        uVar21 = 0;
        if ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum) {
          uVar21 = uVar29;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar30 < *(int *)(pFVar4 + lVar31 + 0x18)) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ResetStateProperty(*(FEasyParticleState **)(*(longlong *)(pFVar4 + lVar31 + 0x10) + lVar33))
        ;
        local_res8 = local_res8 + 4;
        uVar30 = uVar30 + 1;
        lVar33 = lVar33 + 8;
      }
      uVar28 = uVar28 + 1;
      lVar31 = lVar31 + 0x50;
    } while ((int)uVar28 < (this->ChildrenParticleArray).ArrayNum);
  }
  return;
}

// SetInPool @ 14aca00a0

void __thiscall FEasyParticleState::SetInPool(FEasyParticleState *this,bool param_1)

{
  this->InPool = param_1;
  return;
}

// StopEmit @ 14aca07f0

void __thiscall FEasyParticleState::StopEmit(FEasyParticleState *this)

{
  this->bStopEmit = true;
  return;
}

// TickSelf @ 14aca1970

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEasyParticleState::TickSelf
          (FEasyParticleState *this,float param_1,FGeometry *param_2,TVector2<double> *param_3,
          float param_4,float param_5,float param_6)

{
  int iVar1;
  FName FVar2;
  UUIParticleEmitterAsset *pUVar3;
  FScriptContainerElement *pFVar4;
  FEasyParticleState *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UIParticleCount> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float local_res8;
  float fStackX_c;
  uint local_98 [2];
  FName local_90;
  FName local_88;
  FStatMessage local_80;
  TVector2<double>_u_0 local_68 [4];
  
  if (FThreadStats::bPrimaryEnable) {
    FVar10 = StatPtr_STAT_UIParticleCount;
    if (StatPtr_STAT_UIParticleCount == (FThreadSafeStaticStat<FStat_STAT_UIParticleCount>)0x0) {
      pFVar9 = ::FName::FName(&local_88,"STAT_UIParticleCount");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_UIParticleCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleCount,*pFVar9,
                          L"UIParticle Count","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                          true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar10;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_80.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_80.StatData.Pad[0] = '\x01';
      local_80.StatData.Pad[1] = '\0';
      local_80.StatData.Pad[2] = '\0';
      local_80.StatData.Pad[3] = '\0';
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_90 = FVar2;
      local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_80);
      FStatsTrace::Add(&local_90,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  fVar17 = __real_3f800000;
  if (this->IsFirstTick != false) {
    local_68[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
    local_68[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
    this->IsFirstTick = false;
    TickSelf(this,0.0,param_2,(TVector2<double> *)&local_68[0]._s_0,param_4,fVar17,0.0);
  }
  if (this->TotalDelay <= this->CurDelay) {
    if (this->InPool == false) {
      bVar6 = this->IsRoot;
      dVar15 = (param_3->field0_0x0)._s_0.X;
      dVar16 = (param_3->field0_0x0)._s_0.Y;
      this->CurWidgetRotation = param_4;
      (this->CurWidgetPosition).field0_0x0._s_0.X = dVar15;
      (this->CurWidgetPosition).field0_0x0._s_0.Y = dVar16;
      if (bVar6 == false) {
        this->WholeScale = param_5;
      }
      else {
        pUVar3 = (this->RootAsset).field0_0x0.DebugPtr;
        local_res8 = SUB84(param_2->Size,0);
        fStackX_c = SUB84(param_2->Size,4);
        (this->StartWidgetPositionWorld).field0_0x0._s_0.X = dVar15;
        (this->StartWidgetPositionWorld).field0_0x0._s_0.Y = dVar16;
        if ((pUVar3 != (UUIParticleEmitterAsset *)0x0) && (pUVar3->AutoEmitPosRange != false)) {
          dVar16 = (double)local_res8 * __real_3fe0000000000000;
          dVar15 = (double)fStackX_c * __real_3fe0000000000000;
          uVar11 = (uint)__xmm_80000000000000008000000000000000;
          uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          (pUVar3->EmitPosRange).Min.field0_0x0._s_0.X =
               (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar14,SUB84(dVar16,0) ^ uVar11)
          ;
          (pUVar3->EmitPosRange).Min.field0_0x0._s_0.Y =
               (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar14,SUB84(dVar15,0) ^ uVar11)
          ;
          pUVar3 = (this->RootAsset).field0_0x0.DebugPtr;
          *(double *)&(pUVar3->EmitPosRange).Max.field0_0x0 = dVar16;
          *(double *)((longlong)&(pUVar3->EmitPosRange).Max.field0_0x0 + 8) = dVar15;
        }
        pUVar3 = (this->RootAsset).field0_0x0.DebugPtr;
        if ((pUVar3 != (UUIParticleEmitterAsset *)0x0) && (pUVar3->AutoScale != false)) {
          if (pUVar3->ScaleByX == false) {
            dVar15 = (double)fStackX_c / (pUVar3->DesignSize).field0_0x0._s_0.Y;
          }
          else {
            dVar15 = (double)local_res8 / (pUVar3->DesignSize).field0_0x0._s_0.X;
          }
          fVar17 = (float)dVar15;
        }
        this->WholeScale = fVar17;
        param_6 = param_1 + this->RootSpanTime;
      }
      this->RootSpanTime = param_6;
      UpdateParticle(this,param_1,param_2);
      uVar11 = 0;
      if (0 < (this->ChildrenParticleArray).ArrayNum) {
        lVar13 = 0;
        do {
          uVar12 = ~uVar11 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar11 < (this->ChildrenParticleArray).ArrayNum) {
            uVar14 = uVar12;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_98[0] = 0;
          iVar1 = *(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar13 + 0x18);
          if (0 < iVar1) {
            do {
              uVar14 = 0;
              if ((int)uVar11 < (this->ChildrenParticleArray).ArrayNum) {
                uVar14 = uVar12;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar14 = local_98[0];
              pFVar4 = (this->ChildrenParticleArray).AllocatorInstance.Data;
              uVar7 = 0;
              if ((int)local_98[0] < *(int *)(pFVar4 + lVar13 + 0x18)) {
                uVar7 = ~local_98[0] >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              this_00 = *(FEasyParticleState **)
                         (*(longlong *)(pFVar4 + lVar13 + 0x10) + (longlong)(int)uVar14 * 8);
              bVar6 = IsAllChildrenEnd(this_00);
              if (((bVar6) && (bVar6 = IsEmitterEnd(this_00), bVar6)) && (this_00->InPool == false))
              {
                this_00->InPool = true;
                uVar14 = 0;
                if ((int)uVar11 < (this->ChildrenParticleArray).ArrayNum) {
                  uVar14 = uVar12;
                }
                if ((uVar14 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = (this->ChildrenParticleArray).AllocatorInstance.Data;
                if (((*(uint **)(pFVar4 + lVar13 + 0x20) <= local_98) &&
                    (local_98 <
                     *(uint **)(pFVar4 + lVar13 + 0x20) + *(int *)(pFVar4 + lVar13 + 0x2c))) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar8 = *(int *)(pFVar4 + lVar13 + 0x28);
                if (iVar8 == *(int *)(pFVar4 + lVar13 + 0x2c)) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,(ForAnyElementType *)(pFVar4 + lVar13 + 0x20),
                                     (int *)(pFVar4 + lVar13 + 0x2c));
                }
                *(int *)(pFVar4 + lVar13 + 0x28) = iVar8 + 1;
                *(uint *)(*(longlong *)(pFVar4 + lVar13 + 0x20) + (longlong)iVar8 * 4) = local_98[0]
                ;
              }
              local_98[0] = local_98[0] + 1;
            } while ((int)local_98[0] < iVar1);
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x50;
        } while ((int)uVar11 < (this->ChildrenParticleArray).ArrayNum);
      }
      this->SpawnParticleDeltaTime = param_1 + this->SpawnParticleDeltaTime;
      CaculateSpawnParticleCount(this);
    }
  }
  else {
    this->CurDelay = this->CurDelay + param_1;
  }
  return;
}

// TrySpawnParticle @ 14aca2120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FEasyParticleState::TrySpawnParticle(FEasyParticleState *this,FGeometry *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_UIParticleSpawnParticle> FVar9;
  FUIParticleFactory *this_00;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  longlong local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_UIParticleSpawnParticle;
  if (StatPtr_STAT_UIParticleSpawnParticle ==
      (FThreadSafeStaticStat<FStat_STAT_UIParticleSpawnParticle>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_UIParticleSpawnParticle");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_UIParticleSpawnParticle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UIParticleSpawnParticle,*pFVar8,
                       L"UIParticle SpawnParticle","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_70 = *(FName *)FVar9;
  bVar4 = false;
  bVar3 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar6 = false;
  bVar5 = false;
  if ((local_70.ComparisonIndex.Value.Value != 0) || (local_70.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar3 = true;
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = local_70.ComparisonIndex.Value.Value;
        local_res20.Number = local_70.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\UIParticle\\Source\\UIParticle\\Private\\Particle\\EasyParticleState.cpp"
                   ,0x4a);
        bVar4 = true;
        bVar3 = true;
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_70,CycleScopeStart);
      bVar5 = true;
      goto LAB_14aca22b4;
    }
  }
  bVar4 = bVar6;
  bVar3 = bVar5;
  bVar5 = false;
  local_70 = local_60;
LAB_14aca22b4:
  if (0 < (this->ChildrenParticleArray).ArrayNum) {
    lVar10 = 0;
    do {
      uVar11 = 0;
      local_78 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar14 < (this->ChildrenParticleArray).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this->ChildrenParticleArray).AllocatorInstance.Data + lVar10 + 0x18) <=
            (int)uVar11) break;
        uVar7 = 0;
        if ((int)uVar14 < (this->ChildrenParticleArray).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->ChildrenParticleArray).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar11 < *(int *)(pFVar1 + (longlong)(int)uVar14 * 0x50 + 0x18)) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TrySpawnParticle(*(FEasyParticleState **)
                          (local_78 + *(longlong *)(pFVar1 + (longlong)(int)uVar14 * 0x50 + 0x10)),
                         param_1);
        uVar11 = uVar11 + 1;
        local_78 = local_78 + 8;
      }
      uVar14 = uVar14 + 1;
      lVar10 = lVar10 + 0x50;
    } while ((int)uVar14 < (this->ChildrenParticleArray).ArrayNum);
  }
  uVar13 = 0;
  piVar12 = &(this->ChildrenParticleArray).ArrayNum;
  bVar6 = IsEmitterEnd(this);
  if (((!bVar6) && (this->LayerOrder < 4)) && (uVar15 = uVar13, 0 < *piVar12)) {
    do {
      uVar11 = (uint)uVar13;
      uVar14 = 0;
      if ((int)uVar11 < (this->ChildrenParticleArray).ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = *(uint *)((this->ChildrenParticleArray).AllocatorInstance.Data + uVar15 + 0x48);
      uVar13 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        if (FUIParticleFactory::m_Instance == (FUIParticleFactory *)0x0) {
          this_00 = ::operator_new(0x30);
          if (this_00 == (FUIParticleFactory *)0x0) {
            FUIParticleFactory::m_Instance = (FUIParticleFactory *)0x0;
          }
          else {
            FUIParticleFactory::m_Instance = FUIParticleFactory::FUIParticleFactory(this_00);
          }
        }
        FUIParticleFactory::CreatePool
                  (FUIParticleFactory::m_Instance,this->RootParticle,uVar14,this->LayerOrder);
        do {
          CreateParticle(this,param_1,uVar11);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar15 = uVar15 + 0x50;
    } while ((int)(uVar11 + 1) < *piVar12);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(local_70,CycleScopeEnd);
  }
  return;
}

// UpdateParticle @ 14aca25e0

void __thiscall
FEasyParticleState::UpdateParticle(FEasyParticleState *this,float param_1,FGeometry *param_2)

{
  FUIParticleProperty *this_00;
  EEmitterType EVar1;
  UUIParticleEmitterAsset *pUVar2;
  FEasyParticleState *pFVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  FLinearColor *pFVar8;
  TVector2<double> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  FLerpKeyVector2D FVar13;
  FLerpKeyVector2D FVar14;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar15;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_res8;
  FLerpKeyColor local_b8;
  FLinearColor local_a8 [10];
  
  pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
  if ((pUVar2 == (UUIParticleEmitterAsset *)0x0) ||
     (bVar7 = UObjectBase::IsValidLowLevel((UObjectBase *)pUVar2), !bVar7)) {
    this->bStopEmit = true;
    return;
  }
  if ((this->IsRoot == false) &&
     ((((this->InPool != false ||
        (fVar12 = this->Deadtime, fVar12 < this->CurLifetime || fVar12 == this->CurLifetime)) ||
       (fVar12 <= 0.0)) && (bVar7 = IsEmitterEnd(this), bVar7)))) {
    return;
  }
  if ((this->IsRoot != false) && (this->Deadtime < this->CurLifetime)) {
    this->CurLifetime = 0.0;
  }
  local_b8.R = (this->ColorLerpKey).R;
  local_b8.G = (this->ColorLerpKey).G;
  local_b8.B = (this->ColorLerpKey).B;
  local_b8.A = (this->ColorLerpKey).A;
  pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
  fVar20 = param_1 + this->CurLifetime;
  fVar12 = this->RootSpanTime;
  (this->ImageBrush).DrawAs.Value = '\x03';
  this->CurLifetime = fVar20;
  fVar19 = fVar20 / this->Deadtime;
  this->CurPercent = fVar19;
  pFVar8 = FUIParticleProperty::GetValue_Color
                     (&pUVar2->Color,local_a8,fVar19,fVar20,fVar12,&local_b8);
  fVar12 = this->RootSpanTime;
  fVar19 = this->CurLifetime;
  fVar20 = this->CurPercent;
  uVar6 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
  pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
  *(undefined8 *)&(this->CurColor).field0_0x0 = *(undefined8 *)&pFVar8->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurColor).field0_0x0 + 8) = uVar6;
  this_00 = &pUVar2->Size;
  if (pUVar2->UseSeparateSize == false) {
    fVar12 = FUIParticleProperty::GetValue_Float(this_00,fVar20,fVar19,fVar12,this->SizeLerpKey);
    fVar12 = fVar12 * this->WholeScale;
    this->CurSizeX = fVar12;
  }
  else {
    pTVar9 = FUIParticleProperty::GetValue_Vector2D
                       (this_00,(TVector2<double> *)local_a8,fVar20,fVar19,fVar12,this->SizeXLerpKey
                       );
    fVar12 = (this->SizeYLerpKey).Y;
    pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
    this->CurSizeX = (float)((double)this->WholeScale * (pTVar9->field0_0x0)._s_0.X);
    FVar13.Y = fVar12;
    FVar13.X = (this->SizeYLerpKey).X;
    pTVar9 = FUIParticleProperty::GetValue_Vector2D
                       (&pUVar2->Size,(TVector2<double> *)local_a8,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,FVar13);
    fVar12 = (float)((double)this->WholeScale * (pTVar9->field0_0x0)._s_0.Y);
  }
  this->CurSizeY = fVar12;
  pTVar9 = FUIParticleProperty::GetValue_Vector2D
                     (&((this->SelfAsset).field0_0x0.DebugPtr)->Pivot,(TVector2<double> *)local_a8,
                      this->CurPercent,this->CurLifetime,this->RootSpanTime,this->PivotLerpKey);
  dVar15 = (pTVar9->field0_0x0)._s_0.Y;
  EVar1 = this->EmitterType;
  (this->CurPivot).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
  (this->CurPivot).field0_0x0._s_0.Y = dVar15;
  if (EVar1 == Gravity) {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->RadialAcceleration,
                        this->CurPercent,this->CurLifetime,this->RootSpanTime,
                        this->RadialAccelerationLerpKey);
    pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
    this->RadialAcceleration = fVar12;
    fVar19 = FUIParticleProperty::GetValue_Float
                       (&pUVar2->TangentialAcceleration,this->CurPercent,this->CurLifetime,
                        this->RootSpanTime,this->TangentialAccelerationLerpKey);
    fVar12 = (this->GravityLerpKey).Y;
    pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
    this->TangentialAcceleration = fVar19;
    FVar14.Y = fVar12;
    FVar14.X = (this->GravityLerpKey).X;
    pTVar9 = FUIParticleProperty::GetValue_Vector2D
                       (&pUVar2->Gravity,(TVector2<double> *)local_a8,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,FVar14);
    dVar23 = __real_3e45798ee0000000;
    dVar22 = __real_3ff0000000000000;
    dVar15 = 0.0;
    dVar21 = (pTVar9->field0_0x0)._s_0.Y;
    (this->Gravity).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
    (this->Gravity).field0_0x0._s_0.Y = dVar21;
    dVar21 = ((this->CurPos).field0_0x0._s_0.X - (this->SourcePos).field0_0x0._s_0.X) -
             (this->StartPositionLocal).field0_0x0._s_0.X;
    dVar24 = ((this->CurPos).field0_0x0._s_0.Y - (this->SourcePos).field0_0x0._s_0.Y) -
             (this->StartPositionLocal).field0_0x0._s_0.Y;
    dVar16 = dVar24 * dVar24 + dVar21 * dVar21;
    if (dVar16 <= dVar23) {
      dVar21 = 0.0;
      dVar24 = 0.0;
    }
    else {
      local_res8 = dVar22 / SQRT(dVar16);
      dVar21 = local_res8 * dVar21;
      dVar24 = local_res8 * dVar24;
    }
    fVar12 = this->RadialAcceleration;
    fVar19 = this->TangentialAcceleration;
    dVar5 = (double)param_1;
    dVar16 = (this->Gravity).field0_0x0._s_0.Y;
    dVar26 = (this->CurSpeed).field0_0x0._s_0.Y;
    (this->CurSpeed).field0_0x0._s_0.X =
         ((double)fVar12 * dVar21 * dVar5 +
         dVar5 * (this->Gravity).field0_0x0._s_0.X + (this->CurSpeed).field0_0x0._s_0.X) -
         (double)fVar19 * dVar24 * dVar5;
    (this->CurSpeed).field0_0x0._s_0.Y =
         ((double)fVar19 * dVar21 + (double)fVar12 * dVar24) * dVar5 + dVar5 * dVar16 + dVar26;
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->AirResistance,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->AirResistanceLerpKey);
    this->AirResistance = fVar12;
    if (fVar12 != 0.0) {
      dVar21 = (this->CurSpeed).field0_0x0._s_0.X;
      dVar16 = (this->CurSpeed).field0_0x0._s_0.Y;
      dVar26 = dVar16 - (double)fVar12 * dVar16 * dVar5;
      dVar24 = dVar21 - (double)fVar12 * dVar21 * dVar5;
      if (dVar24 * dVar21 <= 0.0) {
        dVar24 = 0.0;
      }
      (this->CurSpeed).field0_0x0._s_0.X = dVar24;
      if (0.0 < dVar16 * dVar26) {
        (this->CurSpeed).field0_0x0._s_0.Y = dVar26;
      }
      else {
        (this->CurSpeed).field0_0x0._s_0.Y = 0.0;
      }
    }
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->SineDirectionSpeed,
                        this->CurPercent,this->CurLifetime,this->RootSpanTime,
                        this->SineDirectionSpeedLerpKey);
    this->SineDirectionSpeed = fVar12;
    FDateTime::Now();
    lVar10 = (longlong)local_res8 +
             SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816((longlong)local_res8),8);
    lVar11 = (lVar10 >> 0x17) - (lVar10 >> 0x3f);
    lVar10 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar11),8) + lVar11;
    fVar20 = ((float)(((int)lVar11 + ((int)(lVar10 >> 5) - (int)(lVar10 >> 0x3f)) * -0x3c) * 1000) +
             (float)((int)((longlong)local_res8 / 10000) +
                    (int)(((longlong)local_res8 / 10000) / 1000) * -1000)) *
             this->SineDirectionSpeed * __real_3a83126f;
    fVar12 = this->SineDirectionStart;
    fVar19 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->SineDirectionRange,
                        this->CurPercent,this->CurLifetime,this->RootSpanTime,
                        this->SineDirectionRangePercent);
    fVar12 = sinf(fVar20 + fVar12);
    dVar21 = (this->CurSpeed).field0_0x0._s_0.Y;
    dVar16 = (this->CurSpeed).field0_0x0._s_0.X;
    dVar26 = dVar21 * __real_3c91a62633145c07 + dVar16;
    dVar25 = dVar16 * __real_3c91a62633145c07 - dVar21;
    dVar24 = dVar26 * dVar26 + dVar25 * dVar25;
    if (dVar24 <= dVar23) {
      dVar26 = 0.0;
    }
    else {
      dVar22 = dVar22 / SQRT(dVar24);
      dVar26 = dVar22 * dVar26;
      dVar15 = dVar22 * dVar25;
    }
    dVar21 = (double)(fVar19 * fVar12) * dVar26 + dVar21;
    dVar16 = (double)(fVar19 * fVar12) * dVar15 + dVar16;
    (this->CurSpeed).field0_0x0._s_0.X = dVar16;
    (this->CurSpeed).field0_0x0._s_0.Y = dVar21;
    fVar12 = this->WholeScale;
    dVar15 = (this->CurPos).field0_0x0._s_0.Y;
    (this->CurPos).field0_0x0._s_0.X =
         dVar16 * dVar5 * (double)fVar12 + (this->CurPos).field0_0x0._s_0.X;
    (this->CurPos).field0_0x0._s_0.Y = dVar21 * dVar5 * (double)fVar12 + dVar15;
  }
  else if (EVar1 == Radial) {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->Radius,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->RadiusPercent);
    fVar19 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->DegreePerSecond,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->DegreePerSecondPercent);
    dVar15 = (this->CurPos).field0_0x0._s_0.X;
    dVar21 = (this->CurPos).field0_0x0._s_0.Y;
    this->CurAngle = fVar19 * param_1 + this->CurAngle;
    __libm_sse2_sincos_();
    dVar23 = extraout_XMM0_Qa * (double)fVar12 * (double)this->WholeScale +
             (this->StartPositionLocal).field0_0x0._s_0.Y;
    (this->CurPos).field0_0x0._s_0.X =
         extraout_XMM0_Qb * (double)fVar12 * (double)this->WholeScale +
         (this->StartPositionLocal).field0_0x0._s_0.X;
    (this->CurPos).field0_0x0._s_0.Y = dVar23;
    dVar22 = __real_3ff0000000000000 / (double)param_1;
    (this->CurSpeed).field0_0x0._s_0.X = ((this->CurPos).field0_0x0._s_0.X - dVar15) * dVar22;
    (this->CurSpeed).field0_0x0._s_0.Y = (dVar23 - dVar21) * dVar22;
  }
  else if (EVar1 == Curve) {
    dVar15 = (this->CurPos).field0_0x0._s_0.X;
    dVar21 = (this->CurPos).field0_0x0._s_0.Y;
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->PositionY,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->PositionYLerpKey);
    fVar19 = FUIParticleProperty::GetValue_Float
                       (&((this->SelfAsset).field0_0x0.DebugPtr)->PositionX,this->CurPercent,
                        this->CurLifetime,this->RootSpanTime,this->PositionXLerpKey);
    dVar23 = (double)fVar12 * (double)this->WholeScale;
    (this->CurPos).field0_0x0._s_0.X = (double)this->WholeScale * (double)fVar19;
    (this->CurPos).field0_0x0._s_0.Y = dVar23;
    dVar22 = __real_3ff0000000000000 / (double)param_1;
    (this->CurSpeed).field0_0x0._s_0.X = ((this->CurPos).field0_0x0._s_0.X - dVar15) * dVar22;
    (this->CurSpeed).field0_0x0._s_0.Y = (dVar23 - dVar21) * dVar22;
  }
  if (((this->PositionType == UIPARTICLE_POSITIONTYPE_FREE) ||
      (this->PositionType != UIPARTICLE_POSITIONTYPE_RELATIVE)) ||
     (((this->SelfAsset).field0_0x0.DebugPtr == (UUIParticleEmitterAsset *)0x0 ||
      ((this->FollowParentPosition == false ||
       (pFVar3 = this->ParentParticle, pFVar3 == (FEasyParticleState *)0x0)))))) goto LAB_14aca2fa6;
  EVar1 = this->EmitterType;
  if (EVar1 != Gravity) {
    if (EVar1 == Radial) {
      __libm_sse2_sincos_();
      fVar12 = this->Radius;
      dVar15 = (pFVar3->CurPos).field0_0x0._s_0.Y;
      (this->CurPos).field0_0x0._s_0.X =
           extraout_XMM0_Qb_00 * (double)fVar12 * (double)param_1 +
           (pFVar3->CurPos).field0_0x0._s_0.X;
      (this->CurPos).field0_0x0._s_0.Y =
           extraout_XMM0_Qa_00 * (double)fVar12 * (double)param_1 + dVar15;
      goto LAB_14aca2fa6;
    }
    if (EVar1 != Curve) goto LAB_14aca2fa6;
  }
  dVar15 = (pFVar3->CurSpeed).field0_0x0._s_0.X;
  dVar21 = (this->CurPos).field0_0x0._s_0.X;
  (this->CurPos).field0_0x0._s_0.Y =
       (double)param_1 * (pFVar3->CurSpeed).field0_0x0._s_0.Y + (this->CurPos).field0_0x0._s_0.Y;
  (this->CurPos).field0_0x0._s_0.X = (double)param_1 * dVar15 + dVar21;
LAB_14aca2fa6:
  pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
  if (pUVar2->RotationFollowSpeed == false) {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&pUVar2->RotationSpeed,this->CurPercent,this->CurLifetime,this->RootSpanTime
                        ,this->RotationSpeedLerpKey);
    this->CurRotation = fVar12 * param_1 + this->CurRotation;
  }
  else {
    dVar15 = FGenericPlatformMath::Atan2
                       ((this->CurSpeed).field0_0x0._s_0.Y,(this->CurSpeed).field0_0x0._s_0.X);
    this->CurRotation = (float)dVar15 * __real_42652ee0;
  }
  dVar15 = __real_3f847ae147ae147b;
  pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
  if (pUVar2->UseScaleFollowSpeedVertical == false) {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&pUVar2->VerticalDirectionScale,this->CurPercent,this->CurLifetime,
                        this->RootSpanTime,this->VerticalDirectionScaleLerpKey);
  }
  else {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&pUVar2->ScaleFollowSpeedVertical,this->CurPercent,this->CurLifetime,
                        this->RootSpanTime,this->ScaleFollowSpeedVerticalLerpKey);
    this->ScaleFollowSpeedVertical = fVar12;
    dVar21 = (this->CurSpeed).field0_0x0._s_0.Y;
    dVar22 = (this->CurSpeed).field0_0x0._s_0.X;
    auVar17._0_8_ = dVar21 * dVar21 + dVar22 * dVar22;
    auVar17._8_8_ = 0;
    auVar17 = sqrtpd(auVar17,auVar17);
    fVar12 = (float)(auVar17._0_8_ * (double)fVar12 * dVar15);
  }
  this->VerticalDirectionScale = fVar12;
  pUVar2 = (this->SelfAsset).field0_0x0.DebugPtr;
  if (pUVar2->UseScaleFollowSpeedDirection == false) {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&pUVar2->DirectionScale,this->CurPercent,this->CurLifetime,
                        this->RootSpanTime,this->DirectionScaleLerpKey);
  }
  else {
    fVar12 = FUIParticleProperty::GetValue_Float
                       (&pUVar2->ScaleFollowSpeedDirection,this->CurPercent,this->CurLifetime,
                        this->RootSpanTime,this->ScaleFollowSpeedDirectionLerpKey);
    this->ScaleFollowSpeedDirection = fVar12;
    dVar21 = (this->CurSpeed).field0_0x0._s_0.X;
    dVar22 = (this->CurSpeed).field0_0x0._s_0.Y;
    auVar18._0_8_ = dVar21 * dVar21;
    auVar18._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar22 * dVar22 + auVar18._0_8_;
    auVar17 = sqrtpd(auVar18,auVar4);
    fVar12 = (float)(auVar17._0_8_ * (double)fVar12 * dVar15);
  }
  this->DirectionScale = fVar12;
  return;
}

