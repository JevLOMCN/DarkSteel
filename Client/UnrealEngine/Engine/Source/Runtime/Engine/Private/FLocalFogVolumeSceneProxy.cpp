// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FLocalFogVolumeSceneProxy @ 147ea5a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLocalFogVolumeSceneProxy * __thiscall
FLocalFogVolumeSceneProxy::FLocalFogVolumeSceneProxy
          (FLocalFogVolumeSceneProxy *this,ULocalFogVolumeComponent *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  __m128 _Var10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  
  _Var10.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  uVar9 = _UNK_15061cc8c;
  uVar8 = _UNK_15061cc88;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar24 = GlobalVectorConstants::Float0001.m128_f32[1];
  (this->FogTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FogTransform).Rotation.XY.m128d_f64[1] = (double)fVar24;
  (this->FogTransform).Rotation.ZW.m128d_f64[0] = (double)_Var10.m128_f32[2];
  (this->FogTransform).Rotation.ZW.m128d_f64[1] = (double)_Var10.m128_f32[3];
  _Var10 = GlobalVectorConstants::FloatZero;
  fVar24 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (this->FogTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FogTransform).Translation.XY.m128d_f64[1] = (double)fVar24;
  (this->FogTransform).Translation.ZW.m128d_f64[0] = (double)_Var10.m128_f32[2];
  (this->FogTransform).Translation.ZW.m128d_f64[1] = (double)_Var10.m128_f32[3];
  _Var10 = GlobalVectorConstants::Float1110;
  fVar24 = GlobalVectorConstants::Float1110.m128_f32[1];
  (this->FogTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FogTransform).Scale3D.XY.m128d_f64[1] = (double)fVar24;
  (this->FogTransform).Scale3D.ZW.m128d_f64[0] = (double)_Var10.m128_f32[2];
  (this->FogTransform).Scale3D.ZW.m128d_f64[1] = (double)_Var10.m128_f32[3];
  this->RadialFogExtinction = param_1->RadialFogExtinction;
  this->HeightFogExtinction = param_1->HeightFogExtinction;
  this->HeightFogFalloff = param_1->HeightFogFalloff;
  this->HeightFogOffset = param_1->HeightFogOffset;
  this->FogUniformScale = 1.0;
  this->FogSortPriority = '\x7f' - (char)param_1->FogSortPriority;
  this->FogPhaseG = param_1->FogPhaseG;
  uVar5 = *(undefined8 *)((longlong)&(param_1->FogAlbedo).field0_0x0 + 8);
  *(undefined8 *)&(this->FogAlbedo).field0_0x0 = *(undefined8 *)&(param_1->FogAlbedo).field0_0x0;
  *(undefined8 *)((longlong)&(this->FogAlbedo).field0_0x0 + 8) = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(param_1->FogEmissive).field0_0x0 + 8);
  *(undefined8 *)&(this->FogEmissive).field0_0x0 = *(undefined8 *)&(param_1->FogEmissive).field0_0x0
  ;
  *(undefined8 *)((longlong)&(this->FogEmissive).field0_0x0 + 8) = uVar5;
  dVar15 = (double)param_1->_padding_;
  (this->FogTransform).Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->FogTransform).Rotation.XY.m128d_f64[1] = dVar15;
  dVar15 = (double)param_1->_padding_;
  (this->FogTransform).Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->FogTransform).Rotation.ZW.m128d_f64[1] = dVar15;
  dVar15 = (double)param_1->_padding_;
  (this->FogTransform).Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->FogTransform).Translation.XY.m128d_f64[1] = dVar15;
  dVar15 = (double)param_1->_padding_;
  (this->FogTransform).Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->FogTransform).Translation.ZW.m128d_f64[1] = dVar15;
  dVar15 = (double)param_1->_padding_;
  (this->FogTransform).Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->FogTransform).Scale3D.XY.m128d_f64[1] = dVar15;
  uVar1 = (uint)param_1->_padding_;
  uVar2 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar3 = (uint)param_1->_padding_;
  uVar4 = *(uint *)((longlong)&param_1->_padding_ + 4);
  *(uint *)(this->FogTransform).Scale3D.ZW.m128d_f64 = uVar1;
  *(uint *)((longlong)(this->FogTransform).Scale3D.ZW.m128d_f64 + 4) = uVar2;
  *(uint *)((this->FogTransform).Scale3D.ZW.m128d_f64 + 1) = uVar3;
  *(uint *)((longlong)(this->FogTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar4;
  uVar20 = uVar6 & *(uint *)(this->FogTransform).Scale3D.XY.m128d_f64;
  uVar21 = uVar7 & *(uint *)((longlong)(this->FogTransform).Scale3D.XY.m128d_f64 + 4);
  uVar22 = uVar8 & *(uint *)((this->FogTransform).Scale3D.XY.m128d_f64 + 1);
  uVar23 = uVar9 & *(uint *)((longlong)(this->FogTransform).Scale3D.XY.m128d_f64 + 0xc);
  auVar19._0_8_ = CONCAT44(uVar7 & uVar2,uVar6 & uVar1);
  auVar19._8_4_ = uVar8 & uVar3;
  auVar19._12_4_ = uVar9 & uVar4;
  auVar12._4_4_ = uVar21;
  auVar12._0_4_ = uVar20;
  auVar12._8_4_ = uVar22;
  auVar12._12_4_ = uVar23;
  auVar16._4_4_ = uVar21;
  auVar16._0_4_ = uVar20;
  auVar16._8_4_ = uVar22;
  auVar16._12_4_ = uVar23;
  auVar18._8_8_ = auVar19._0_8_;
  auVar18._0_8_ = auVar12._8_8_;
  auVar17 = maxpd(auVar16,auVar18);
  auVar13._12_4_ = uVar21;
  auVar13._8_4_ = uVar20;
  auVar13._0_8_ = auVar19._0_8_;
  auVar11._4_4_ = uVar21;
  auVar11._0_4_ = uVar20;
  auVar11._8_4_ = uVar22;
  auVar11._12_4_ = uVar23;
  auVar18 = maxpd(auVar17,auVar13);
  auVar12 = blendpd(auVar11,auVar19,2);
  auVar17._4_4_ = uVar23;
  auVar17._0_4_ = uVar22;
  fVar24 = (float)auVar18._0_8_ * __real_43fa0000;
  auVar14._8_4_ = auVar19._8_4_;
  auVar14._0_8_ = auVar19._0_8_;
  auVar14._12_4_ = auVar19._12_4_;
  auVar12 = maxpd(auVar14,auVar12);
  dVar15 = (double)fVar24;
  auVar17._8_4_ = auVar19._8_4_;
  auVar17._12_4_ = auVar19._12_4_;
  maxpd(auVar12,auVar17);
  (this->FogTransform).Scale3D.XY.m128d_f64[0] = dVar15;
  (this->FogTransform).Scale3D.XY.m128d_f64[1] = dVar15;
  (this->FogTransform).Scale3D.ZW.m128d_f64[0] = dVar15;
  (this->FogTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  this->FogUniformScale = fVar24;
  return this;
}

// ~FLocalFogVolumeSceneProxy @ 147ea9150

void __thiscall
FLocalFogVolumeSceneProxy::~FLocalFogVolumeSceneProxy(FLocalFogVolumeSceneProxy *this)

{
  return;
}

// UpdateComponentTransform @ 147ee4ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FLocalFogVolumeSceneProxy::UpdateComponentTransform
          (FLocalFogVolumeSceneProxy *this,TTransform<double> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  
  uVar8 = _UNK_15061cc8c;
  uVar7 = _UNK_15061cc88;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = (param_1->Rotation).XY.m128d_f64[1];
  (this->FogTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->FogTransform).Rotation.XY.m128d_f64[1] = dVar13;
  dVar13 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->FogTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->FogTransform).Rotation.ZW.m128d_f64[1] = dVar13;
  dVar13 = (param_1->Translation).XY.m128d_f64[1];
  (this->FogTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->FogTransform).Translation.XY.m128d_f64[1] = dVar13;
  dVar13 = (param_1->Translation).ZW.m128d_f64[1];
  (this->FogTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->FogTransform).Translation.ZW.m128d_f64[1] = dVar13;
  dVar13 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->FogTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->FogTransform).Scale3D.XY.m128d_f64[1] = dVar13;
  uVar1 = *(uint *)(param_1->Scale3D).ZW.m128d_f64;
  uVar2 = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4);
  uVar3 = *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1);
  uVar4 = *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
  *(uint *)(this->FogTransform).Scale3D.ZW.m128d_f64 = uVar1;
  *(uint *)((longlong)(this->FogTransform).Scale3D.ZW.m128d_f64 + 4) = uVar2;
  *(uint *)((this->FogTransform).Scale3D.ZW.m128d_f64 + 1) = uVar3;
  *(uint *)((longlong)(this->FogTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar4;
  uVar18 = uVar5 & *(uint *)(this->FogTransform).Scale3D.XY.m128d_f64;
  uVar19 = uVar6 & *(uint *)((longlong)(this->FogTransform).Scale3D.XY.m128d_f64 + 4);
  uVar20 = uVar7 & *(uint *)((this->FogTransform).Scale3D.XY.m128d_f64 + 1);
  uVar21 = uVar8 & *(uint *)((longlong)(this->FogTransform).Scale3D.XY.m128d_f64 + 0xc);
  auVar17._0_8_ = CONCAT44(uVar6 & uVar2,uVar5 & uVar1);
  auVar17._8_4_ = uVar7 & uVar3;
  auVar17._12_4_ = uVar8 & uVar4;
  auVar10._4_4_ = uVar19;
  auVar10._0_4_ = uVar18;
  auVar10._8_4_ = uVar20;
  auVar10._12_4_ = uVar21;
  auVar14._4_4_ = uVar19;
  auVar14._0_4_ = uVar18;
  auVar14._8_4_ = uVar20;
  auVar14._12_4_ = uVar21;
  auVar16._8_8_ = auVar17._0_8_;
  auVar16._0_8_ = auVar10._8_8_;
  auVar15 = maxpd(auVar14,auVar16);
  auVar11._12_4_ = uVar19;
  auVar11._8_4_ = uVar18;
  auVar11._0_8_ = auVar17._0_8_;
  auVar9._4_4_ = uVar19;
  auVar9._0_4_ = uVar18;
  auVar9._8_4_ = uVar20;
  auVar9._12_4_ = uVar21;
  auVar16 = maxpd(auVar15,auVar11);
  auVar10 = blendpd(auVar9,auVar17,2);
  auVar15._4_4_ = uVar21;
  auVar15._0_4_ = uVar20;
  fVar22 = (float)auVar16._0_8_ * __real_43fa0000;
  auVar12._8_4_ = auVar17._8_4_;
  auVar12._0_8_ = auVar17._0_8_;
  auVar12._12_4_ = auVar17._12_4_;
  auVar10 = maxpd(auVar12,auVar10);
  dVar13 = (double)fVar22;
  auVar15._8_4_ = auVar17._8_4_;
  auVar15._12_4_ = auVar17._12_4_;
  maxpd(auVar10,auVar15);
  (this->FogTransform).Scale3D.XY.m128d_f64[0] = dVar13;
  (this->FogTransform).Scale3D.XY.m128d_f64[1] = dVar13;
  (this->FogTransform).Scale3D.ZW.m128d_f64[0] = dVar13;
  (this->FogTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  this->FogUniformScale = fVar22;
  return;
}

