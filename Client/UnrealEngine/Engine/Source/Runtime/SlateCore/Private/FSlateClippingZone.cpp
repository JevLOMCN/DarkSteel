// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// FSlateClippingZone @ 1424ea440

FSlateClippingZone * __thiscall
FSlateClippingZone::FSlateClippingZone
          (FSlateClippingZone *this,FDeprecateVector2DParameter *param_1,
          FDeprecateVector2DParameter *param_2,FDeprecateVector2DParameter *param_3,
          FDeprecateVector2DParameter *param_4)

{
  this->bIntersect = '\x01';
  this->bAlwaysClip = '\0';
  InitializeFromArbitraryPoints(this,param_1,param_2,param_3,param_4);
  return this;
}

// FSlateClippingZone @ 1424ea480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateClippingZone * __thiscall
FSlateClippingZone::FSlateClippingZone(FSlateClippingZone *this,FGeometry *param_1)

{
  undefined1 *puVar1;
  TVector2<float> *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  TVector2<float>_u_0 TVar7;
  float fVar8;
  TVector2<float>_u_0 TVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_res8;
  float fStackX_14;
  
  fVar8 = __real_3dcccccd;
  puVar1 = &this->field_0x20;
  bVar5 = *puVar1;
  auVar17 = ZEXT416((uint)__real_3dcccccd);
  this->bIntersect = '\x01';
  this->bAlwaysClip = '\0';
  bVar6 = bVar5 & 0xfa;
  bVar10 = bVar6 | 2;
  fVar11 = (param_1->AccumulatedRenderTransform).M.M[1][0];
  fVar16 = (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  fVar12 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  fStackX_14 = SUB84(param_1->Size,4);
  local_res8._0_4_ = SUB84(param_1->Size,0);
  fVar21 = (param_1->AccumulatedRenderTransform).M.M[0][0];
  pTVar2 = &(param_1->AccumulatedRenderTransform).Trans;
  fVar14 = (pTVar2->field0_0x0)._s_0.X;
  TVar7 = pTVar2->field0_0x0;
  fVar4 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar18 = fVar11 * fStackX_14 + fVar14;
  fVar22 = fVar21 * (float)(undefined4)local_res8;
  puVar3 = &this->field_0x20;
  this->bIsAxisAligned = '\0';
  auVar15 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  this->bAlwaysClip = '\0';
  this->bIntersect = '\x01';
  fVar23 = fVar4 * (float)(undefined4)local_res8;
  fVar11 = fVar11 * fStackX_14 + fVar21 * (float)(undefined4)local_res8 + fVar14;
  fVar21 = fVar12 * fStackX_14 + fVar16;
  fVar12 = fVar12 * fStackX_14 + fVar4 * (float)(undefined4)local_res8 + fVar16;
  local_res8._4_4_ = fVar12;
  local_res8._0_4_ = fVar11;
  TVar9 = local_res8;
  local_res8._4_4_ = fVar21;
  local_res8._0_4_ = fVar18;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (fVar8 < (float)((uint)(fVar14 - fVar18) & uVar13)) {
    bVar10 = 0;
    if (((float)((uint)(fVar16 - fVar21) & uVar13) <= fVar8) &&
       ((float)((uint)(fVar18 - fVar11) & uVar13) <= fVar8)) {
      bVar10 = bVar6 | 3;
      this->field_0x20 = bVar10;
    }
  }
  else if ((float)((uint)(fVar21 - fVar12) & uVar13) <= fVar8) {
    bVar10 = bVar6 | 3;
    this->field_0x20 = bVar10;
  }
  if ((bVar10 & 1) == 0) {
    (this->TopLeft).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar7;
    TVar7._s_0.Y = fVar23 + fVar16;
    TVar7._s_0.X = fVar22 + fVar14;
    (this->TopRight).field0_0x0 = TVar7;
    (this->BottomLeft).field0_0x0 = local_res8;
  }
  else {
    auVar20 = roundps(ZEXT416((uint)fVar16),ZEXT416((uint)(fVar12 + __real_3f000000)),1);
    auVar19 = roundps(ZEXT416((uint)(fVar12 + __real_3f000000)),
                      ZEXT416((uint)(fVar16 + __real_3f000000)),1);
    auVar17 = roundps(auVar17,ZEXT416((uint)(fVar14 + __real_3f000000)),1);
    fVar12 = auVar19._0_4_;
    fVar16 = auVar17._0_4_;
    auVar15 = roundps(auVar15,ZEXT416((uint)(fVar11 + __real_3f000000)),1);
    fVar11 = auVar20._0_4_;
    local_res8._4_4_ = fVar12;
    if (fVar11 <= fVar12) {
      local_res8._4_4_ = fVar11;
    }
    fVar14 = auVar15._0_4_;
    fVar21 = fVar16;
    if (fVar14 <= fVar16) {
      fVar21 = fVar14;
    }
    if (fVar16 <= fVar14) {
      auVar17._0_4_ = fVar14;
    }
    if (fVar12 <= fVar11) {
      auVar19._0_4_ = fVar11;
    }
    local_res8._0_4_ = fVar21;
    TVar7 = local_res8;
    local_res8._0_4_ = auVar17._0_4_;
    TVar9 = local_res8;
    (this->TopLeft).field0_0x0 = TVar7;
    local_res8._4_4_ = auVar19._0_4_;
    local_res8._0_4_ = fVar21;
    TVar7 = local_res8;
    (this->TopRight).field0_0x0 = TVar9;
    local_res8._0_4_ = auVar17._0_4_;
    (this->BottomLeft).field0_0x0 = TVar7;
    TVar9 = local_res8;
  }
  (this->BottomRight).field0_0x0 = TVar9;
  return this;
}

// FSlateClippingZone @ 1424ea700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateClippingZone * __thiscall
FSlateClippingZone::FSlateClippingZone(FSlateClippingZone *this,FPaintGeometry *param_1)

{
  undefined1 *puVar1;
  TVector2<float> *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  byte bVar5;
  TVector2<float>_u_0_s_0 TVar6;
  byte bVar7;
  TVector2<float>_u_0 TVar8;
  float fVar9;
  TVector2<float>_u_0 TVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_res8;
  float fStackX_14;
  
  fVar9 = __real_3dcccccd;
  puVar1 = &this->field_0x20;
  bVar5 = *puVar1;
  auVar18 = ZEXT416((uint)__real_3dcccccd);
  this->bIntersect = '\x01';
  this->bAlwaysClip = '\0';
  bVar7 = bVar5 & 0xfa;
  bVar11 = bVar7 | 2;
  TVar6 = (param_1->LocalSize).field0_0x0._s_0;
  fVar12 = (param_1->AccumulatedRenderTransform).M.M[1][0];
  fVar17 = (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  fVar13 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  fStackX_14 = TVar6.Y;
  local_res8._0_4_ = TVar6.X;
  fVar22 = (param_1->AccumulatedRenderTransform).M.M[0][0];
  pTVar2 = &(param_1->AccumulatedRenderTransform).Trans;
  fVar15 = (pTVar2->field0_0x0)._s_0.X;
  TVar8 = pTVar2->field0_0x0;
  fVar4 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar19 = fVar12 * fStackX_14 + fVar15;
  fVar23 = fVar22 * (float)(undefined4)local_res8;
  puVar3 = &this->field_0x20;
  this->bIsAxisAligned = '\0';
  auVar16 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  this->bAlwaysClip = '\0';
  this->bIntersect = '\x01';
  fVar24 = fVar4 * (float)(undefined4)local_res8;
  fVar12 = fVar12 * fStackX_14 + fVar22 * (float)(undefined4)local_res8 + fVar15;
  fVar22 = fVar13 * fStackX_14 + fVar17;
  fVar13 = fVar13 * fStackX_14 + fVar4 * (float)(undefined4)local_res8 + fVar17;
  local_res8._4_4_ = fVar13;
  local_res8._0_4_ = fVar12;
  TVar10 = local_res8;
  local_res8._4_4_ = fVar22;
  local_res8._0_4_ = fVar19;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (fVar9 < (float)((uint)(fVar15 - fVar19) & uVar14)) {
    bVar11 = 0;
    if (((float)((uint)(fVar17 - fVar22) & uVar14) <= fVar9) &&
       ((float)((uint)(fVar19 - fVar12) & uVar14) <= fVar9)) {
      bVar11 = bVar7 | 3;
      this->field_0x20 = bVar11;
    }
  }
  else if ((float)((uint)(fVar22 - fVar13) & uVar14) <= fVar9) {
    bVar11 = bVar7 | 3;
    this->field_0x20 = bVar11;
  }
  if ((bVar11 & 1) == 0) {
    (this->TopLeft).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar8;
    TVar8._s_0.Y = fVar24 + fVar17;
    TVar8._s_0.X = fVar23 + fVar15;
    (this->TopRight).field0_0x0 = TVar8;
    (this->BottomLeft).field0_0x0 = local_res8;
  }
  else {
    auVar21 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)(fVar13 + __real_3f000000)),1);
    auVar20 = roundps(ZEXT416((uint)(fVar13 + __real_3f000000)),
                      ZEXT416((uint)(fVar17 + __real_3f000000)),1);
    auVar18 = roundps(auVar18,ZEXT416((uint)(fVar15 + __real_3f000000)),1);
    fVar13 = auVar20._0_4_;
    fVar17 = auVar18._0_4_;
    auVar16 = roundps(auVar16,ZEXT416((uint)(fVar12 + __real_3f000000)),1);
    fVar12 = auVar21._0_4_;
    local_res8._4_4_ = fVar13;
    if (fVar12 <= fVar13) {
      local_res8._4_4_ = fVar12;
    }
    fVar15 = auVar16._0_4_;
    fVar22 = fVar17;
    if (fVar15 <= fVar17) {
      fVar22 = fVar15;
    }
    if (fVar17 <= fVar15) {
      auVar18._0_4_ = fVar15;
    }
    if (fVar13 <= fVar12) {
      auVar20._0_4_ = fVar12;
    }
    local_res8._0_4_ = fVar22;
    TVar8 = local_res8;
    local_res8._0_4_ = auVar18._0_4_;
    TVar10 = local_res8;
    (this->TopLeft).field0_0x0 = TVar8;
    local_res8._4_4_ = auVar20._0_4_;
    local_res8._0_4_ = fVar22;
    TVar8 = local_res8;
    (this->TopRight).field0_0x0 = TVar10;
    local_res8._0_4_ = auVar18._0_4_;
    (this->BottomLeft).field0_0x0 = TVar8;
    TVar10 = local_res8;
  }
  (this->BottomRight).field0_0x0 = TVar10;
  return this;
}

// FSlateClippingZone @ 1424ea980

FSlateClippingZone * __thiscall
FSlateClippingZone::FSlateClippingZone(FSlateClippingZone *this,FShortRect *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  TVector2<float>_u_0 TVar7;
  TVector2<float>_u_0 TVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  
  puVar2 = &this->field_0x20;
  this->bIsAxisAligned = '\x01';
  this->bAlwaysClip = '\0';
  this->bIntersect = '\x01';
  uVar11 = param_1->Right;
  uVar3 = param_1->Left;
  uVar12 = param_1->Bottom;
  uVar4 = param_1->Top;
  uVar9 = uVar11;
  if (uVar3 < uVar11) {
    uVar9 = uVar3;
  }
  uVar10 = uVar12;
  if (uVar4 < uVar12) {
    uVar10 = uVar4;
  }
  if (uVar11 < uVar3) {
    uVar11 = uVar3;
  }
  if (uVar12 < uVar4) {
    uVar12 = uVar4;
  }
  TVar5._s_0.Y = (float)(int)(short)uVar10;
  TVar5._s_0.X = (float)(int)(short)uVar9;
  (this->TopLeft).field0_0x0 = TVar5;
  TVar6._s_0.Y = (float)(int)(short)uVar10;
  TVar6._s_0.X = (float)(int)(short)uVar11;
  (this->TopRight).field0_0x0 = TVar6;
  TVar7._s_0.Y = (float)(int)(short)uVar12;
  TVar7._s_0.X = (float)(int)(short)uVar9;
  (this->BottomLeft).field0_0x0 = TVar7;
  TVar8._s_0.Y = (float)(int)(short)uVar12;
  TVar8._s_0.X = (float)(int)(short)uVar11;
  (this->BottomRight).field0_0x0 = TVar8;
  return this;
}

// FSlateClippingZone @ 1424eaa50

FSlateClippingZone * __thiscall
FSlateClippingZone::FSlateClippingZone(FSlateClippingZone *this,FSlateRect *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  
  fVar8 = __real_3f000000;
  auVar12 = ZEXT416((uint)__real_3f000000);
  puVar2 = &this->field_0x20;
  this->bIsAxisAligned = '\x01';
  this->bAlwaysClip = '\0';
  this->bIntersect = '\x01';
  auVar14 = roundps(in_XMM5,ZEXT416((uint)(param_1->Bottom + fVar8)),1);
  auVar10 = roundps(in_XMM2,ZEXT416((uint)(param_1->Right + fVar8)),1);
  auVar13 = roundps(in_XMM4,ZEXT416((uint)(param_1->Top + fVar8)),1);
  fVar9 = auVar13._0_4_;
  fVar11 = auVar14._0_4_;
  fVar7 = fVar9;
  if (fVar11 <= fVar9) {
    fVar7 = fVar11;
  }
  if (fVar9 <= fVar11) {
    auVar13._0_4_ = fVar11;
  }
  auVar12 = roundps(auVar12,ZEXT416((uint)(param_1->Left + fVar8)),1);
  fVar11 = auVar12._0_4_;
  fVar9 = auVar10._0_4_;
  fVar8 = fVar11;
  if (fVar9 <= fVar11) {
    fVar8 = fVar9;
  }
  if (fVar11 <= fVar9) {
    auVar12._0_4_ = fVar9;
  }
  TVar3._s_0.Y = fVar7;
  TVar3._s_0.X = fVar8;
  (this->TopLeft).field0_0x0 = TVar3;
  TVar4._s_0.Y = fVar7;
  TVar4._s_0.X = (float)auVar12._0_4_;
  (this->TopRight).field0_0x0 = TVar4;
  TVar5._s_0.Y = (float)auVar13._0_4_;
  TVar5._s_0.X = fVar8;
  (this->BottomLeft).field0_0x0 = TVar5;
  TVar6._s_0.Y = (float)auVar13._0_4_;
  TVar6._s_0.X = (float)auVar12._0_4_;
  (this->BottomRight).field0_0x0 = TVar6;
  return this;
}

// operator== @ 1424edd10

bool __thiscall FSlateClippingZone::operator==(FSlateClippingZone *this,FSlateClippingZone *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = this->field_0x20;
  uVar2 = param_1->field_0x20;
  if ((((((((this->bIsAxisAligned ^ param_1->bIsAxisAligned) & 1) == 0) &&
         (((uVar2 ^ uVar1) & 2) == 0)) && (((uVar2 ^ uVar1) & 4) == 0)) &&
       (((param_1->TopLeft).field0_0x0._s_0.X == (this->TopLeft).field0_0x0._s_0.X &&
        ((param_1->TopLeft).field0_0x0._s_0.Y == (this->TopLeft).field0_0x0._s_0.Y)))) &&
      (((param_1->TopRight).field0_0x0._s_0.X == (this->TopRight).field0_0x0._s_0.X &&
       (((param_1->TopRight).field0_0x0._s_0.Y == (this->TopRight).field0_0x0._s_0.Y &&
        ((param_1->BottomLeft).field0_0x0._s_0.X == (this->BottomLeft).field0_0x0._s_0.X)))))) &&
     (((param_1->BottomLeft).field0_0x0._s_0.Y == (this->BottomLeft).field0_0x0._s_0.Y &&
      (((param_1->BottomRight).field0_0x0._s_0.X == (this->BottomRight).field0_0x0._s_0.X &&
       ((param_1->BottomRight).field0_0x0._s_0.Y == (this->BottomRight).field0_0x0._s_0.Y)))))) {
    return true;
  }
  return false;
}

// GetBoundingBox @ 14250bf20

FSlateRect * __thiscall
FSlateClippingZone::GetBoundingBox(FSlateClippingZone *this,FSlateRect *__return_storage_ptr__)

{
  TVector2<float>_u_0_s_0 TVar1;
  TVector2<float>_u_0_s_0 TVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  
  TVar1 = (this->TopLeft).field0_0x0._s_0;
  TVar2 = (this->TopRight).field0_0x0._s_0;
  local_40 = TVar2.X;
  fStack_3c = TVar2.Y;
  TVar2 = (this->BottomLeft).field0_0x0._s_0;
  local_38 = TVar2.X;
  fVar4 = local_40;
  if (local_40 <= local_38) {
    fVar4 = local_38;
  }
  fStack_34 = TVar2.Y;
  fVar3 = fStack_3c;
  if (fStack_3c <= fStack_34) {
    fVar3 = fStack_34;
  }
  if (local_38 <= local_40) {
    local_40 = local_38;
  }
  if (fStack_34 <= fStack_3c) {
    fStack_3c = fStack_34;
  }
  TVar2 = (this->BottomRight).field0_0x0._s_0;
  local_30 = TVar2.X;
  if (fVar4 <= local_30) {
    fVar4 = local_30;
  }
  fStack_2c = TVar2.Y;
  if (fVar3 <= fStack_2c) {
    fVar3 = fStack_2c;
  }
  if (local_30 <= local_40) {
    local_40 = local_30;
  }
  if (fStack_2c <= fStack_3c) {
    fStack_3c = fStack_2c;
  }
  local_48 = TVar1.X;
  if (fVar4 <= local_48) {
    fVar4 = local_48;
  }
  fStack_44 = TVar1.Y;
  if (fVar3 <= fStack_44) {
    fVar3 = fStack_44;
  }
  if (local_48 <= local_40) {
    local_40 = local_48;
  }
  if (fStack_44 <= fStack_3c) {
    fStack_3c = fStack_44;
  }
  __return_storage_ptr__->Right = fVar4;
  __return_storage_ptr__->Bottom = fVar3;
  __return_storage_ptr__->Left = local_40;
  __return_storage_ptr__->Top = fStack_3c;
  return __return_storage_ptr__;
}

// InitializeFromArbitraryPoints @ 142510800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSlateClippingZone::InitializeFromArbitraryPoints
          (FSlateClippingZone *this,FDeprecateVector2DParameter *param_1,
          FDeprecateVector2DParameter *param_2,FDeprecateVector2DParameter *param_3,
          FDeprecateVector2DParameter *param_4)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  
  fVar7 = __real_3dcccccd;
  auVar11 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  bVar5 = this->field_0x20 & 0xfe;
  this->bIsAxisAligned = '\0';
  uVar9 = auVar11._0_4_;
  if (fVar7 < (float)((uint)(*(float *)param_1 - *(float *)param_3) & uVar9)) {
    bVar6 = 0;
    if (((float)((uint)(*(float *)&param_1->field_0x4 - *(float *)&param_3->field_0x4) & uVar9) <=
         fVar7) && ((float)((uint)(*(float *)param_3 - *(float *)param_4) & uVar9) <= fVar7)) {
      this->field_0x20 = bVar5 | 1;
      bVar6 = bVar5 | 1;
    }
  }
  else {
    bVar6 = bVar5;
    if ((float)((uint)(*(float *)&param_3->field_0x4 - *(float *)&param_4->field_0x4) & uVar9) <=
        fVar7) {
      bVar6 = bVar5 | 1;
      this->field_0x20 = bVar6;
    }
  }
  if ((bVar6 & 1) == 0) {
    (this->TopLeft).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_1;
    (this->TopRight).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_2;
    (this->BottomLeft).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_3;
    (this->BottomRight).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_4;
    return;
  }
  auVar14 = roundps(in_XMM5,ZEXT416((uint)(*(float *)&param_4->field_0x4 + __real_3f000000)),1);
  auVar11 = roundps(auVar11,ZEXT416((uint)(*(float *)param_4 + __real_3f000000)),1);
  auVar13 = roundps(in_XMM4,ZEXT416((uint)(*(float *)&param_1->field_0x4 + __real_3f000000)),1);
  fVar8 = auVar13._0_4_;
  fVar10 = auVar14._0_4_;
  fVar7 = fVar8;
  if (fVar10 <= fVar8) {
    fVar7 = fVar10;
  }
  if (fVar8 <= fVar10) {
    auVar13._0_4_ = fVar10;
  }
  auVar14 = roundps(ZEXT416((uint)__real_3f000000),
                    ZEXT416((uint)(*(float *)param_1 + __real_3f000000)),1);
  fVar12 = auVar14._0_4_;
  fVar10 = auVar11._0_4_;
  fVar8 = fVar12;
  if (fVar10 <= fVar12) {
    fVar8 = fVar10;
  }
  if (fVar12 <= fVar10) {
    auVar14._0_4_ = fVar10;
  }
  TVar1._s_0.Y = fVar7;
  TVar1._s_0.X = fVar8;
  (this->TopLeft).field0_0x0 = TVar1;
  TVar2._s_0.Y = fVar7;
  TVar2._s_0.X = (float)auVar14._0_4_;
  (this->TopRight).field0_0x0 = TVar2;
  TVar3._s_0.Y = (float)auVar13._0_4_;
  TVar3._s_0.X = fVar8;
  (this->BottomLeft).field0_0x0 = TVar3;
  TVar4._s_0.Y = (float)auVar13._0_4_;
  TVar4._s_0.X = (float)auVar14._0_4_;
  (this->BottomRight).field0_0x0 = TVar4;
  return;
}

// Intersect @ 142510c90

FSlateClippingZone * __thiscall
FSlateClippingZone::Intersect
          (FSlateClippingZone *this,FSlateClippingZone *__return_storage_ptr__,
          FSlateClippingZone *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  TVector2<float>_u_0 TVar7;
  TVector2<float>_u_0 TVar8;
  TVector2<float>_u_0 TVar9;
  bool bVar10;
  FSlateClippingZone *pFVar11;
  TVector2<float>_u_0 TVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  float fVar23;
  
  if (this->bIsAxisAligned == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsAxisAligned()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                        ,0x80,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FSlateClippingZone *)(*pcVar3)();
      return pFVar11;
    }
  }
  if (param_1->bIsAxisAligned == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Other.IsAxisAligned()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                        ,0x81,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FSlateClippingZone *)(*pcVar3)();
      return pFVar11;
    }
  }
  fVar21 = __real_3f000000;
  fVar19 = (param_1->BottomRight).field0_0x0._s_0.Y;
  fVar23 = (param_1->TopLeft).field0_0x0._s_0.Y;
  fVar17 = (this->BottomRight).field0_0x0._s_0.Y;
  if (fVar17 <= fVar19) {
    fVar19 = fVar17;
  }
  fVar17 = (this->TopLeft).field0_0x0._s_0.Y;
  if (fVar23 <= fVar17) {
    fVar23 = fVar17;
  }
  fVar14 = (param_1->BottomRight).field0_0x0._s_0.X;
  fVar17 = (param_1->TopLeft).field0_0x0._s_0.X;
  fVar13 = (this->BottomRight).field0_0x0._s_0.X;
  if (fVar13 <= fVar14) {
    fVar14 = fVar13;
  }
  fVar13 = (this->TopLeft).field0_0x0._s_0.X;
  if (fVar17 <= fVar13) {
    fVar17 = fVar13;
  }
  if ((fVar19 < fVar23) || (fVar14 < fVar17)) {
    auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)__real_3f000000),1);
    uVar15 = auVar16._0_4_;
    __return_storage_ptr__->field_0x20 = __return_storage_ptr__->field_0x20 & 0xfb | 3;
    TVar7._4_4_ = uVar15;
    TVar7._0_4_ = uVar15;
    (__return_storage_ptr__->TopLeft).field0_0x0 = TVar7;
    TVar8._4_4_ = uVar15;
    TVar8._0_4_ = uVar15;
    (__return_storage_ptr__->TopRight).field0_0x0 = TVar8;
    TVar9._4_4_ = uVar15;
    TVar9._0_4_ = uVar15;
    (__return_storage_ptr__->BottomLeft).field0_0x0 = TVar9;
    TVar12._4_4_ = uVar15;
    TVar12._0_4_ = uVar15;
  }
  else {
    fVar19 = fVar19 + __real_3f000000;
    fVar17 = fVar17 + __real_3f000000;
    fVar23 = fVar23 + __real_3f000000;
    puVar2 = &__return_storage_ptr__->field_0x20;
    __return_storage_ptr__->bIsAxisAligned = '\x01';
    __return_storage_ptr__->bAlwaysClip = '\0';
    __return_storage_ptr__->bIntersect = '\x01';
    auVar22 = roundps(in_XMM5,ZEXT416((uint)fVar19),1);
    auVar18 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17),1);
    auVar20 = roundps(ZEXT416((uint)fVar19),ZEXT416((uint)fVar23),1);
    fVar17 = auVar20._0_4_;
    fVar23 = auVar18._0_4_;
    auVar16 = roundps(ZEXT416((uint)(fVar14 + fVar21)),ZEXT416((uint)(fVar14 + fVar21)),1);
    fVar21 = auVar22._0_4_;
    fVar19 = fVar17;
    if (fVar21 <= fVar17) {
      fVar19 = fVar21;
    }
    fVar14 = auVar16._0_4_;
    fVar13 = fVar23;
    if (fVar14 <= fVar23) {
      fVar13 = fVar14;
    }
    if (fVar23 <= fVar14) {
      auVar18._0_4_ = fVar14;
    }
    if (fVar17 <= fVar21) {
      auVar20._0_4_ = fVar21;
    }
    TVar4._s_0.Y = fVar19;
    TVar4._s_0.X = fVar13;
    (__return_storage_ptr__->TopLeft).field0_0x0 = TVar4;
    TVar5._s_0.Y = fVar19;
    TVar5._s_0.X = (float)auVar18._0_4_;
    (__return_storage_ptr__->TopRight).field0_0x0 = TVar5;
    TVar6._s_0.Y = (float)auVar20._0_4_;
    TVar6._s_0.X = fVar13;
    (__return_storage_ptr__->BottomLeft).field0_0x0 = TVar6;
    TVar12._s_0.Y = (float)auVar20._0_4_;
    TVar12._s_0.X = (float)auVar18._0_4_;
  }
  (__return_storage_ptr__->BottomRight).field0_0x0 = TVar12;
  return __return_storage_ptr__;
}

// IsPointInside @ 142511790

bool __thiscall
FSlateClippingZone::IsPointInside(FSlateClippingZone *this,FDeprecateVector2DParameter *param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  TVector2<float> *pTVar4;
  
  if (this->bIsAxisAligned == 0) {
    pTVar4 = &this->TopRight;
    bVar3 = IsPointInTriangle((TVector2<float> *)param_1,&this->TopLeft,pTVar4,&this->BottomLeft);
    if (!bVar3) {
      bVar3 = IsPointInTriangle((TVector2<float> *)param_1,&this->BottomLeft,pTVar4,
                                &this->BottomRight);
      return bVar3;
    }
  }
  else {
    fVar2 = *(float *)param_1;
    if ((((fVar2 < (this->TopLeft).field0_0x0._s_0.X) ||
         ((this->TopRight).field0_0x0._s_0.X <= fVar2 && fVar2 != (this->TopRight).field0_0x0._s_0.X
         )) || (fVar2 = *(float *)&param_1->field_0x4, fVar2 < (this->TopLeft).field0_0x0._s_0.Y))
       || (pfVar1 = &(this->BottomLeft).field0_0x0._s_0.Y, *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
      return false;
    }
  }
  return true;
}

