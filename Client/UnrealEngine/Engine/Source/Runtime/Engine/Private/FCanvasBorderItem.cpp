// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Draw @ 148927df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCanvasBorderItem::Draw(FCanvasBorderItem *this,FCanvas *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  HHitProxy *pHVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FBatchedElements *pFVar9;
  FHitProxyId FVar10;
  FName FVar11;
  FTexture *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_Canvas_BorderItemTime> FVar24;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar25;
  TVector2<float>_u_0 TVar26;
  TVector2<float>_u_0 TVar27;
  LARGE_INTEGER LVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  FColor_u_0 FVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_5c8 [32];
  float local_568;
  FColor_u_0 FStack_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined8 local_558;
  FBatchedElements *local_550;
  FHitProxyId local_548;
  FLinearColor_u_0 local_540;
  undefined8 local_530;
  FDepthFieldGlowInfo local_528;
  undefined8 local_4f0;
  float local_4e8;
  FColor_u_0 local_4e4;
  FName local_4e0;
  FTexture *local_4d8;
  FCanvas *local_4d0;
  float local_4c8;
  TVector4<float>_u_0 local_4b8;
  float local_4a8;
  TVector2<float>_u_0 local_4a4;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  FTexture *local_488;
  FName local_480;
  TMatrix<double> local_468;
  TMatrix<double> local_3e8;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  dVar30 = __real_4076800000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_4d0 = param_1;
  dVar29 = FGenericPlatformMath::Fmod((this->Rotation).Pitch,__real_4076800000000000);
  if (dVar29 < 0.0) {
    dVar29 = dVar29 + dVar30;
  }
  if (dVar29 == 0.0) {
    dVar29 = FGenericPlatformMath::Fmod((this->Rotation).Yaw,dVar30);
    if (dVar29 < 0.0) {
      dVar29 = dVar29 + dVar30;
    }
    if (dVar29 != 0.0) goto LAB_148927eb1;
    dVar29 = FGenericPlatformMath::Fmod((this->Rotation).Roll,dVar30);
    if (dVar29 < 0.0) {
      dVar29 = dVar29 + dVar30;
    }
    if (dVar29 != 0.0) goto LAB_148927eb1;
  }
  else {
LAB_148927eb1:
    dVar29 = (this->PivotPoint).field0_0x0._s_0.X * (this->Size).field0_0x0._s_0.X;
    dVar30 = (this->PivotPoint).field0_0x0._s_0.Y * (this->Size).field0_0x0._s_0.Y;
    UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
              ((TRotationMatrix<double> *)&local_1e8,&this->Rotation);
    dVar3 = _UNK_150689518;
    dVar2 = ___xmm_00000000000000003ff0000000000000;
    uVar13 = (uint)__xmm_80000000000000008000000000000000;
    uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_468.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_468.M[1][1] = _UNK_15061cbc8;
    local_468.M[0][2] = 0.0;
    local_468.M[0][3] = 0.0;
    local_468.M[1][2] = 0.0;
    local_468.M[1][3] = 0.0;
    local_468.M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) ^ uVar14,SUB84(dVar29,0) ^ uVar13);
    local_468.M[2][0] = 0.0;
    local_468.M[2][1] = 0.0;
    local_468.M[3][1] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar14,SUB84(dVar30,0) ^ uVar13);
    local_468.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_468.M[0][1] = _UNK_150689518;
    local_468.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_468.M[2][3] = _UNK_150689518;
    local_468.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_468.M[3][3] = _UNK_151be7c48;
    VectorMatrixMultiply(&local_268,&local_468,&local_1e8);
    local_3e8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_3e8.M[1][1] = _UNK_15061cbc8;
    local_3e8.M[0][2] = 0.0;
    local_3e8.M[0][3] = 0.0;
    local_3e8.M[1][2] = 0.0;
    local_3e8.M[1][3] = 0.0;
    local_3e8.M[2][0] = 0.0;
    local_3e8.M[2][1] = 0.0;
    local_3e8.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_3e8.M[3][3] = _UNK_151be7c48;
    local_3e8.M[0][0] = dVar2;
    local_3e8.M[0][1] = dVar3;
    local_3e8.M[2][2] = dVar2;
    local_3e8.M[2][3] = dVar3;
    local_3e8.M[3][0] = dVar29;
    local_3e8.M[3][1] = dVar30;
    VectorMatrixMultiply(&local_368,&local_268,&local_3e8);
    dVar30 = (double)this->_padding_;
    dVar29 = (double)this->_padding_;
    local_2e8.M[0][2] = local_368.M[0][2];
    local_2e8.M[0][3] = local_368.M[0][3];
    local_2e8.M[0][0] = local_368.M[0][0];
    local_2e8.M[0][1] = local_368.M[0][1];
    local_2e8.M[1][2] = local_368.M[1][2];
    local_2e8.M[1][3] = local_368.M[1][3];
    local_2e8.M[1][0] = local_368.M[1][0];
    local_2e8.M[1][1] = local_368.M[1][1];
    local_2e8.M[2][2] = local_368.M[2][2];
    local_2e8.M[2][3] = local_368.M[2][3];
    local_2e8.M[2][0] = local_368.M[2][0];
    local_2e8.M[2][1] = local_368.M[2][1];
    local_2e8.M[3][2] = local_368.M[3][2];
    local_2e8.M[3][3] = local_368.M[3][3];
    local_2e8.M[3][0] = local_368.M[3][0];
    local_2e8.M[3][1] = local_368.M[3][1];
    local_3e8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_3e8.M[1][1] = _UNK_15061cbc8;
    local_3e8.M[0][2] = 0.0;
    local_3e8.M[0][3] = 0.0;
    local_3e8.M[1][2] = 0.0;
    local_3e8.M[1][3] = 0.0;
    local_3e8.M[2][0] = 0.0;
    local_3e8.M[2][1] = 0.0;
    local_3e8.M[3][0] =
         (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar14,SUB84(dVar30,0) ^ uVar13);
    local_3e8.M[3][1] =
         (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) ^ uVar14,SUB84(dVar29,0) ^ uVar13);
    local_3e8.M[0][0] = dVar2;
    local_3e8.M[0][1] = dVar3;
    local_3e8.M[2][2] = dVar2;
    local_3e8.M[2][3] = dVar3;
    local_3e8.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_3e8.M[3][3] = _UNK_151be7c48;
    VectorMatrixMultiply(&local_268,&local_3e8,&local_2e8);
    local_468.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_468.M[1][1] = _UNK_15061cbc8;
    local_468.M[0][2] = 0.0;
    local_468.M[0][3] = 0.0;
    local_468.M[1][2] = 0.0;
    local_468.M[1][3] = 0.0;
    local_468.M[2][0] = 0.0;
    local_468.M[2][1] = 0.0;
    local_468.M[3][2] = ___xmm_3ff00000000000008000000000000000;
    local_468.M[3][3] = _UNK_151be7c48;
    local_468.M[0][0] = dVar2;
    local_468.M[0][1] = dVar3;
    local_468.M[2][2] = dVar2;
    local_468.M[2][3] = dVar3;
    local_468.M[3][0] = dVar30;
    local_468.M[3][1] = dVar29;
    VectorMatrixMultiply(&local_168,&local_268,&local_468);
    FCanvas::PushRelativeTransform(param_1,&local_168);
  }
  if (this->BorderTexture == (FTexture *)0x0) goto LAB_148929a81;
  local_4a8 = 0.0;
  FVar24 = StatPtr_STAT_Canvas_BorderItemTime;
  if (StatPtr_STAT_Canvas_BorderItemTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_BorderItemTime>)0x0) {
    pFVar23 = ::FName::FName((FName *)&local_530,"STAT_Canvas_BorderItemTime");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_Canvas_BorderItemTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_BorderItemTime,*pFVar23,
                        L"CanvasBorderItem Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar24;
  bVar6 = false;
  bVar8 = false;
  local_480.ComparisonIndex.Value = 0;
  local_480.Number = 0;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1489282d9:
    bVar7 = false;
    FVar25 = local_480;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4e4._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4e0 = FVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4e0,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x220);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1489282d9;
    local_4e0 = FVar25;
    local_480 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar7 = true;
    local_4a8 = (float)local_480.ComparisonIndex.Value;
  }
  local_4d8 = this->BorderTexture;
  local_540._s_0.R = (float)*(undefined4 *)&this->_padding_;
  local_540._s_0.G = *(float *)((longlong)&this->_padding_ + 4);
  local_540._s_0.B = (float)*(undefined4 *)&this->_padding_;
  TVar26 = (TVector2<float>_u_0)GWhiteTexture;
  if ((TVector2<float>_u_0)this->BackgroundTexture != (TVector2<float>_u_0)0x0) {
    TVar26 = (TVector2<float>_u_0)this->BackgroundTexture;
  }
  LVar28 = (LARGE_INTEGER)GWhiteTexture;
  if ((FName)this->BorderLeftTexture != (FName)0x0) {
    LVar28 = (LARGE_INTEGER)this->BorderLeftTexture;
  }
  local_540._s_0.A = *(float *)((longlong)&this->_padding_ + 4) * param_1->AlphaModulate;
  local_4e0 = (FName)GWhiteTexture;
  if ((FName)this->BorderRightTexture != (FName)0x0) {
    local_4e0 = (FName)this->BorderRightTexture;
  }
  local_488 = GWhiteTexture;
  if (this->BorderTopTexture != (FTexture *)0x0) {
    local_488 = this->BorderTopTexture;
  }
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT416(0);
  TVar27 = (TVector2<float>_u_0)GWhiteTexture;
  if ((TVector2<float>_u_0)this->BorderBottomTexture != (TVector2<float>_u_0)0x0) {
    TVar27 = (TVector2<float>_u_0)this->BorderBottomTexture;
  }
  local_528.bEnableGlow = 0;
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_558 = TVar26;
  local_530 = LVar28;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)local_528.GlowColor.field0_0x0;
  local_4f0 = TVar27;
  local_550 = FCanvas::GetBatchedElements
                        (param_1,ET_Triangle,(FBatchedElementParameters *)this->_padding_,local_4d8,
                         *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528,
                         true);
  pHVar5 = (param_1->CurrentHitProxy).Reference;
  if (pHVar5 == (HHitProxy *)0x0) {
    local_548.Index = -1;
  }
  else {
    local_548.Index = (pHVar5->Id).Index;
  }
  dVar30 = (double)this->Z;
  FVar33 = (FColor_u_0)(float)(((double)this->_padding_ + (this->Size).field0_0x0._s_0.Y) * dVar30);
  fVar38 = (float)(dVar30 * (double)this->_padding_);
  fVar31 = (float)(((double)this->_padding_ + (this->Size).field0_0x0._s_0.X) * dVar30);
  fVar37 = (float)((double)this->_padding_ * dVar30);
  local_4e8 = fVar31;
  local_4e4 = FVar33;
  local_4c8 = fVar38;
  uVar13 = (**(code **)(*(longlong *)LVar28 + 0x30))(LVar28.QuadPart);
  dVar30 = (this->BorderScale).field0_0x0._s_0.X;
  uVar14 = (**(code **)(*(longlong *)LVar28 + 0x38))(LVar28.QuadPart);
  pFVar12 = local_488;
  local_498 = (float)((double)uVar14 * (this->BorderScale).field0_0x0._s_0.Y);
  uVar14 = (**(code **)(local_488->_padding_ + 0x30))(local_488);
  dVar29 = (this->BorderScale).field0_0x0._s_0.X;
  uVar15 = (**(code **)(pFVar12->_padding_ + 0x38))(pFVar12);
  FVar11 = local_4e0;
  dVar2 = (this->BorderScale).field0_0x0._s_0.Y;
  uVar16 = (**(code **)(*(longlong *)local_4e0 + 0x30))(local_4e0);
  dVar3 = (this->BorderScale).field0_0x0._s_0.X;
  uVar17 = (**(code **)(*(longlong *)FVar11 + 0x38))(FVar11);
  local_490 = (float)((double)uVar17 * (this->BorderScale).field0_0x0._s_0.Y);
  uVar17 = (**(code **)(*(longlong *)TVar27 + 0x30))(TVar27);
  local_49c = (float)((double)uVar17 * (this->BorderScale).field0_0x0._s_0.X);
  uVar17 = (**(code **)(*(longlong *)TVar27 + 0x38))(TVar27);
  dVar4 = (this->BorderScale).field0_0x0._s_0.Y;
  uVar18 = (**(code **)(*(longlong *)TVar26 + 0x30))(TVar26);
  fVar32 = (float)((double)(fVar31 - fVar38) /
                  ((double)uVar18 * (this->BackgroundScale).field0_0x0._s_0.X));
  uVar18 = (**(code **)(*(longlong *)TVar26 + 0x38))(TVar26);
  pFVar9 = local_550;
  fVar31 = (float)((double)((float)FVar33 - fVar37) /
                  ((double)uVar18 * (this->BackgroundScale).field0_0x0._s_0.Y));
  FBatchedElements::ReserveVertices(local_550,0x24);
  FVar10.Index = local_548.Index;
  local_4a4 = (TVector2<float>_u_0)0x0;
  local_4b8._s_0.Z = 0.0;
  local_4b8._s_0.W = this->Z;
  fVar38 = (float)((double)uVar13 * dVar30) + fVar38;
  fVar36 = (float)((double)uVar15 * dVar2) + fVar37;
  local_4b8._s_0.X = fVar38;
  local_4b8._s_0.Y = fVar36;
  local_494 = fVar38;
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_4b8._s_0,(TVector2<float> *)&local_4a4._s_0,
                      (FLinearColor *)&local_540._s_0,local_548);
  local_55c = this->Z;
  fVar39 = local_4e8 - (float)((double)uVar16 * dVar3);
  local_4b8._s_0.Y = 0.0;
  local_560 = 0.0;
  local_4a4._s_0.X = fVar39;
  FStack_564 = (FColor_u_0)fVar36;
  local_568 = fVar39;
  local_4b8._s_0.X = fVar32;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4b8._s_0,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  fVar35 = (float)FVar33 - (float)((double)uVar17 * dVar4);
  local_4b8._s_0.X = 0.0;
  local_560 = 0.0;
  FStack_564 = (FColor_u_0)fVar35;
  local_568 = fVar38;
  local_4b8._s_0.Y = fVar31;
  iVar21 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4b8._s_0,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  local_568 = fVar39;
  local_560 = 0.0;
  local_4b8._s_0.X = fVar32;
  local_4b8._s_0.Y = fVar31;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4b8._s_0,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_558,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_558,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  uVar13 = (**(code **)(this->BorderTexture->_padding_ + 0x30))();
  dVar30 = (this->BorderUV1).field0_0x0._s_0.X;
  dVar2 = (this->BorderUV0).field0_0x0._s_0.X;
  dVar3 = (this->BorderUV0).field0_0x0._s_0.Y;
  uVar15 = (**(code **)(this->BorderTexture->_padding_ + 0x38))();
  fVar32 = local_4c8;
  FVar10.Index = local_548.Index;
  fVar38 = (float)((double)(float)((dVar30 - dVar2) * (double)uVar13) *
                   (this->CornerSize).field0_0x0._s_0.X * (this->BorderScale).field0_0x0._s_0.X);
  local_560 = 0.0;
  FStack_564 = (FColor_u_0)fVar37;
  local_568 = local_4c8;
  local_55c = this->Z;
  fVar39 = (float)((double)(float)(((this->BorderUV1).field0_0x0._s_0.Y - dVar3) * (double)uVar15) *
                   (this->CornerSize).field0_0x0._s_0.Y * (this->BorderScale).field0_0x0._s_0.Y);
  local_558._4_4_ = (float)(this->BorderUV0).field0_0x0._s_0.Y;
  local_558._0_4_ = (float)(this->BorderUV0).field0_0x0._s_0.X;
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,local_548);
  local_560 = 0.0;
  fVar34 = fVar38 + fVar32;
  local_558._4_4_ = (float)(this->BorderUV0).field0_0x0._s_0.Y;
  local_558._0_4_ =
       (float)((this->BorderUV1).field0_0x0._s_0.X * (this->CornerSize).field0_0x0._s_0.X);
  local_55c = this->Z;
  local_568 = fVar34;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_560 = 0.0;
  fVar40 = fVar39 + fVar37;
  FStack_564 = (FColor_u_0)fVar40;
  local_568 = fVar32;
  local_558._4_4_ =
       (float)((this->CornerSize).field0_0x0._s_0.Y * (this->BorderUV1).field0_0x0._s_0.Y);
  local_558._0_4_ = (float)(this->BorderUV0).field0_0x0._s_0.X;
  local_55c = this->Z;
  iVar21 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_560 = 0.0;
  local_568 = fVar34;
  local_558._4_4_ =
       (float)((this->CornerSize).field0_0x0._s_0.Y * (this->BorderUV1).field0_0x0._s_0.Y);
  local_558._0_4_ =
       (float)((this->BorderUV1).field0_0x0._s_0.X * (this->CornerSize).field0_0x0._s_0.X);
  local_55c = this->Z;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  FVar10.Index = local_548.Index;
  dVar30 = (this->BorderUV1).field0_0x0._s_0.X;
  fVar38 = local_4e8 - fVar38;
  local_560 = 0.0;
  FStack_564 = (FColor_u_0)fVar37;
  local_568 = fVar38;
  local_55c = this->Z;
  local_558._4_4_ = (float)(this->BorderUV0).field0_0x0._s_0.Y;
  local_558._0_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.X) *
                        (this->CornerSize).field0_0x0._s_0.X);
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,local_548);
  fVar31 = local_4e8;
  local_560 = 0.0;
  local_558._4_4_ = (float)(this->BorderUV0).field0_0x0._s_0.Y;
  local_558._0_4_ = (float)(this->BorderUV1).field0_0x0._s_0.X;
  local_568 = local_4e8;
  local_55c = this->Z;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  dVar30 = (this->BorderUV1).field0_0x0._s_0.X;
  FStack_564 = (FColor_u_0)fVar40;
  local_568 = fVar38;
  local_560 = 0.0;
  local_558._4_4_ =
       (float)((this->CornerSize).field0_0x0._s_0.Y * (this->BorderUV1).field0_0x0._s_0.Y);
  local_558._0_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.X) *
                        (this->CornerSize).field0_0x0._s_0.X);
  local_55c = this->Z;
  iVar21 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_560 = 0.0;
  local_568 = fVar31;
  local_558._4_4_ =
       (float)((this->CornerSize).field0_0x0._s_0.Y * (this->BorderUV1).field0_0x0._s_0.Y);
  local_558._0_4_ = (float)(this->BorderUV1).field0_0x0._s_0.X;
  local_55c = this->Z;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  FVar33 = local_4e4;
  FVar10.Index = local_548.Index;
  dVar30 = (this->BorderUV1).field0_0x0._s_0.Y;
  local_560 = 0.0;
  fVar39 = (float)local_4e4 - fVar39;
  FStack_564 = (FColor_u_0)fVar39;
  local_568 = fVar32;
  local_558._4_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.Y) *
                        (this->CornerSize).field0_0x0._s_0.Y);
  local_558._0_4_ = (float)(this->BorderUV0).field0_0x0._s_0.X;
  local_55c = this->Z;
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,local_548);
  dVar30 = (this->BorderUV1).field0_0x0._s_0.Y;
  local_568 = fVar34;
  local_560 = 0.0;
  local_558._4_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.Y) *
                        (this->CornerSize).field0_0x0._s_0.Y);
  local_558._0_4_ =
       (float)((this->BorderUV1).field0_0x0._s_0.X * (this->CornerSize).field0_0x0._s_0.X);
  local_55c = this->Z;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_560 = 0.0;
  local_55c = this->Z;
  local_558._4_4_ = (float)(this->BorderUV1).field0_0x0._s_0.Y;
  local_558._0_4_ = (float)(this->BorderUV0).field0_0x0._s_0.X;
  FStack_564.Bits = FVar33.Bits;
  local_568 = local_4c8;
  iVar21 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  local_560 = 0.0;
  local_558._4_4_ = (float)(this->BorderUV1).field0_0x0._s_0.Y;
  local_558._0_4_ =
       (float)((this->BorderUV1).field0_0x0._s_0.X * (this->CornerSize).field0_0x0._s_0.X);
  local_568 = fVar34;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  FVar10.Index = local_548.Index;
  dVar30 = (this->BorderUV1).field0_0x0._s_0.X;
  dVar2 = (this->BorderUV1).field0_0x0._s_0.Y;
  FStack_564 = (FColor_u_0)fVar39;
  local_568 = fVar38;
  local_560 = 0.0;
  local_558._4_4_ =
       (float)(dVar2 - (dVar2 - (this->BorderUV0).field0_0x0._s_0.Y) *
                       (this->CornerSize).field0_0x0._s_0.Y);
  local_558._0_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.X) *
                        (this->CornerSize).field0_0x0._s_0.X);
  local_55c = this->Z;
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,local_548);
  fVar31 = local_4e8;
  dVar30 = (this->BorderUV1).field0_0x0._s_0.Y;
  local_560 = 0.0;
  local_568 = local_4e8;
  local_558._4_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.Y) *
                        (this->CornerSize).field0_0x0._s_0.Y);
  local_558._0_4_ = (float)(this->BorderUV1).field0_0x0._s_0.X;
  local_55c = this->Z;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  dVar30 = (this->BorderUV1).field0_0x0._s_0.X;
  FStack_564.Bits = FVar33.Bits;
  local_568 = fVar38;
  local_560 = 0.0;
  local_55c = this->Z;
  local_558._4_4_ = (float)(this->BorderUV1).field0_0x0._s_0.Y;
  local_558._0_4_ =
       (float)(dVar30 - (dVar30 - (this->BorderUV0).field0_0x0._s_0.X) *
                        (this->CornerSize).field0_0x0._s_0.X);
  iVar21 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_560 = 0.0;
  local_55c = this->Z;
  local_558._4_4_ = (float)(this->BorderUV1).field0_0x0._s_0.Y;
  local_558._0_4_ = (float)(this->BorderUV1).field0_0x0._s_0.X;
  local_568 = fVar31;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,local_4d8,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  FVar10.Index = local_548.Index;
  local_55c = this->Z;
  FStack_564 = (FColor_u_0)fVar37;
  local_568 = fVar34;
  local_558 = (TVector2<float>_u_0)0x0;
  local_560 = 0.0;
  fVar31 = (fVar38 - fVar34) / (float)((double)uVar14 * dVar29);
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,local_548);
  local_560 = 0.0;
  local_55c = this->Z;
  local_558._4_4_ = 0;
  local_558._0_4_ = fVar31;
  local_568 = fVar38;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  FStack_564 = (FColor_u_0)fVar36;
  local_568 = fVar34;
  local_558 = (TVector2<float>_u_0)0x3f80000000000000;
  local_560 = 0.0;
  iVar21 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  local_568 = fVar38;
  local_558._4_4_ = 0x3f800000;
  local_560 = 0.0;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,local_488,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,local_488,
             *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),&local_528);
  FVar10.Index = local_548.Index;
  local_55c = this->Z;
  fVar31 = (fVar38 - fVar34) / local_49c;
  local_558 = (TVector2<float>_u_0)0x0;
  local_560 = 0.0;
  FStack_564 = (FColor_u_0)fVar35;
  local_568 = fVar34;
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,local_548);
  local_55c = this->Z;
  local_568 = fVar38;
  local_558._4_4_ = 0;
  local_558._0_4_ = fVar31;
  local_560 = 0.0;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  FVar33 = local_4e4;
  local_55c = this->Z;
  FStack_564.Bits = local_4e4.Bits;
  local_568 = fVar34;
  local_558 = (TVector2<float>_u_0)0x3f80000000000000;
  local_560 = 0.0;
  iVar21 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  FStack_564.Bits = FVar33.Bits;
  local_568 = fVar38;
  local_558._4_4_ = 0x3f800000;
  local_560 = 0.0;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_558,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_4f0,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_4f0,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  fVar31 = local_4c8;
  FVar10.Index = local_548.Index;
  local_55c = this->Z;
  FStack_564 = (FColor_u_0)fVar40;
  local_568 = local_4c8;
  local_4f0 = (TVector2<float>_u_0)0x0;
  local_560 = 0.0;
  fVar38 = (fVar39 - fVar40) / local_498;
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4f0,
                      (FLinearColor *)&local_540._s_0,local_548);
  fVar32 = local_494;
  local_4f0 = (TVector2<float>_u_0)0x3f800000;
  local_560 = 0.0;
  local_55c = this->Z;
  local_568 = local_494;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4f0,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  FStack_564 = (FColor_u_0)fVar39;
  local_568 = fVar31;
  local_4f0 = (TVector2<float>_u_0)((ulonglong)(uint)fVar38 << 0x20);
  local_560 = 0.0;
  iVar21 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4f0,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  local_568 = fVar32;
  local_4f0._4_4_ = fVar38;
  local_4f0._0_4_ = 0x3f800000;
  local_560 = 0.0;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_4f0,
                      (FLinearColor *)&local_540._s_0,FVar10);
  pFVar9 = local_550;
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_530,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (pFVar9,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_530,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  FVar10.Index = local_548.Index;
  fVar38 = (fVar39 - fVar40) / local_490;
  local_530._0_4_ = 0;
  local_530._4_4_ = 0;
  local_560 = 0.0;
  local_55c = this->Z;
  fVar31 = local_4a4._s_0.X;
  _local_568 = CONCAT44(fVar40,fVar31);
  iVar19 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_530,
                      (FLinearColor *)&local_540._s_0,local_548);
  fVar32 = local_4e8;
  local_55c = this->Z;
  FStack_564 = (FColor_u_0)fVar40;
  local_568 = local_4e8;
  local_530._0_4_ = 0x3f800000;
  local_530._4_4_ = 0;
  local_560 = 0.0;
  iVar20 = FBatchedElements::AddVertexf
                     (pFVar9,(TVector4<float> *)&local_568,(TVector2<float> *)&local_530,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  _local_568 = CONCAT44(fVar39,fVar31);
  local_530 = (ulonglong)(uint)fVar38 << 0x20;
  local_560 = 0.0;
  iVar21 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_530,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_55c = this->Z;
  FStack_564 = (FColor_u_0)fVar39;
  local_568 = fVar32;
  local_530._4_4_ = fVar38;
  local_530._0_4_ = 0x3f800000;
  local_560 = 0.0;
  iVar22 = FBatchedElements::AddVertexf
                     (local_550,(TVector4<float> *)&local_568,(TVector2<float> *)&local_530,
                      (FLinearColor *)&local_540._s_0,FVar10);
  local_528._0_4_ = local_528._0_4_ & 0xfffffffe;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar20,iVar22,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_4e0,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  local_528.bEnableGlow = 0;
  local_528.GlowColor.field0_0x0 = (FLinearColor_u_0)ZEXT816(0);
  local_528.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_528.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_528.GlowInnerRadius.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
  FBatchedElements::AddTriangleExtensive
            (local_550,iVar19,iVar22,iVar21,(FBatchedElementParameters *)this->_padding_,
             (FTexture *)local_4e0,*(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4),
             &local_528);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  param_1 = local_4d0;
  if ((((bVar7) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    param_1 = local_4d0;
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_560 = local_4a8;
      local_55c = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&local_530);
      _local_568 = local_530 & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_568);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        param_1 = local_4d0;
      }
      else {
        param_1 = local_4d0;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
          param_1 = local_4d0;
        }
      }
    }
  }
LAB_148929a81:
  dVar30 = __real_4076800000000000;
  dVar29 = FGenericPlatformMath::Fmod((this->Rotation).Pitch,__real_4076800000000000);
  if (dVar29 < 0.0) {
    dVar29 = dVar29 + dVar30;
  }
  if (dVar29 == 0.0) {
    dVar29 = FGenericPlatformMath::Fmod((this->Rotation).Yaw,dVar30);
    if (dVar29 < 0.0) {
      dVar29 = dVar29 + dVar30;
    }
    if (dVar29 == 0.0) {
      dVar29 = FGenericPlatformMath::Fmod((this->Rotation).Roll,dVar30);
      if (dVar29 < 0.0) {
        dVar29 = dVar29 + dVar30;
      }
      if (dVar29 == 0.0) {
        return;
      }
    }
  }
  FCanvas::PopTransform(param_1);
  return;
}

// SetColor @ 14897e6d0

void __thiscall FCanvasBorderItem::SetColor(FCanvasBorderItem *this,FLinearColor *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)&param_1->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_1->field0_0x0;
  this->_padding_ = lVar1;
  return;
}

