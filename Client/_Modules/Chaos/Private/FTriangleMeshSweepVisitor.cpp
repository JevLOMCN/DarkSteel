// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 32

// FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short> @ 143eacde0

FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          TBox<double,3> *param_3,TVector<double,3> *param_4,double param_5,
          TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = *(undefined8 *)&(param_3->AABB).MMin;
  local_70.MMin._8_8_ = *(undefined8 *)&(param_3->AABB).MMin.field_0x8;
  local_70.MMin._16_8_ = *(undefined8 *)&(param_3->AABB).MMin.field_0x10;
  local_70.MMax._0_8_ = *(undefined8 *)&(param_3->AABB).MMax;
  local_70.MMax._8_8_ = *(undefined8 *)&(param_3->AABB).MMax.field_0x8;
  local_70.MMax._16_8_ = *(undefined8 *)&(param_3->AABB).MMax.field_0x10;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int> @ 143ead080

FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int>::
FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int>
          (FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,TBox<double,3> *param_3
          ,TVector<double,3> *param_4,double param_5,TRigidTransform<double,3> *param_6,bool param_7
          ,TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = *(undefined8 *)&(param_3->AABB).MMin;
  local_70.MMin._8_8_ = *(undefined8 *)&(param_3->AABB).MMin.field_0x8;
  local_70.MMin._16_8_ = *(undefined8 *)&(param_3->AABB).MMin.field_0x10;
  local_70.MMax._0_8_ = *(undefined8 *)&(param_3->AABB).MMax;
  local_70.MMax._8_8_ = *(undefined8 *)&(param_3->AABB).MMax.field_0x8;
  local_70.MMax._16_8_ = *(undefined8 *)&(param_3->AABB).MMax.field_0x10;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short> @ 143ead320

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short> *
__thiscall
Chaos::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>
           *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_3,TVector<double,3> *param_4,
          double param_5,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,
          double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int> @ 143ead5c0

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>
           *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_3,TVector<double,3> *param_4,
          double param_5,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,
          double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short> @ 143ead860

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short> *
__thiscall
Chaos::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>
           *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_3,TVector<double,3> *param_4,
          double param_5,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,
          double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int> @ 143eadb00

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>
           *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_3,TVector<double,3> *param_4,
          double param_5,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,
          double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short> @ 143eadda0

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short> *
__thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>
           *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_3,TVector<double,3> *param_4,
          double param_5,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,
          double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int> @ 143eae040

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::FCapsule,1> *param_3,TVector<double,3> *param_4,
          double param_5,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,
          double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short> @ 143eae2e0

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short> *
__thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>
           *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_3,TVector<double,3> *param_4,double param_5
          ,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9
          )

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int> @ 143eae580

FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int>::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int>
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TImplicitObjectScaled<Chaos::FConvex,1> *param_3,TVector<double,3> *param_4,double param_5
          ,TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9
          )

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  local_70.MMin._0_8_ = param_3->_padding_;
  local_70.MMin._8_8_ = param_3->_padding_;
  local_70.MMin._16_8_ = param_3->_padding_;
  local_70.MMax._0_8_ = param_3->_padding_;
  local_70.MMax._8_8_ = param_3->_padding_;
  local_70.MMax._16_8_ = param_3->_padding_;
  pTVar16 = TAABB<double,3>::TransformedAABB(&local_70,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short> @ 143eae820

FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          TSphere<double,3> *param_3,TVector<double,3> *param_4,double param_5,
          TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  __m128 _Var10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  TAABB<double,3> *pTVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double dStack_48;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  _Var6 = GlobalVectorConstants::Float0001;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x18 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar27 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar28 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x38 = (double)fVar28;
  _Var6 = GlobalVectorConstants::Float1110;
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x58 = (double)_Var6.m128_f32[3];
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar16 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar16;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar28 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar28;
  _Var6.m128_f32[1] = (float)*(double *)&param_4->field_0x8;
  _Var6.m128_f32[0] = (float)*(double *)param_4;
  _Var6.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var6.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var6;
  (this->VectorCullsBackFaceSweepsCode).m128_u64[0] = CONCAT44((float)param_9,(float)param_9);
  (this->VectorCullsBackFaceSweepsCode).m128_u64[1] = CONCAT44((float)param_9,(float)param_9);
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar11._4_8_ = param_9;
  auVar11._0_4_ = auVar24._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar24._8_4_;
  auVar22._12_4_ = auVar24._12_4_;
  auVar12._4_8_ = auVar24._8_8_;
  auVar12._0_4_ = auVar25._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar25._8_4_;
  auVar23._12_4_ = auVar25._12_4_;
  fVar32 = (float)auVar24._0_8_;
  fVar33 = (float)auVar22._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar28 = (float)auVar23._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar32;
  (this->RotationSimd).m128_f32[1] = fVar33;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar28;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar13._4_8_ = auVar25._8_8_;
  auVar13._0_4_ = auVar24._4_4_;
  auVar25._0_8_ = auVar13._0_8_ << 0x20;
  auVar25._8_4_ = auVar24._8_4_;
  auVar25._12_4_ = auVar24._12_4_;
  _Var7.m128_f32[1] = (float)auVar25._8_8_;
  _Var7.m128_f32[0] = (float)auVar24._0_8_;
  _Var7.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var7.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var7;
  fVar27 = fVar33 * fVar33 + fVar32 * fVar32;
  fVar29 = fVar32 * fVar32 + fVar33 * fVar33;
  fVar30 = fVar28 * fVar28 + fVar26 * fVar26;
  fVar31 = fVar26 * fVar26 + fVar28 * fVar28;
  auVar24._0_4_ = fVar30 + fVar27;
  auVar24._4_4_ = fVar31 + fVar29;
  auVar24._8_4_ = fVar27 + fVar30;
  auVar24._12_4_ = fVar29 + fVar31;
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar24._0_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar24._4_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar24._8_4_);
  uVar21 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar24._12_4_);
  auVar25 = sqrtps(auVar24,auVar24);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar32) & uVar18 |
       ~uVar18 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar33) & uVar19 | ~uVar19 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar20 | ~uVar20 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar28) & uVar21 | ~uVar21 & uVar5;
  _Var8.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var8.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var8;
  fVar26 = *(float *)&param_3->_padding_;
  local_70 = (double)(*(float *)&param_3->Center - fVar26);
  local_68 = (double)(*(float *)&(param_3->Center).field_0x4 - fVar26);
  local_60 = (double)(*(float *)&(param_3->Center).field_0x8 - fVar26);
  local_58 = (double)(*(float *)&param_3->Center + fVar26);
  uVar1 = *(undefined8 *)&(param_3->Center).field_0x4;
  local_50 = (double)(fVar26 + (float)uVar1);
  dStack_48 = (double)(fVar26 + (float)((ulonglong)uVar1 >> 0x20));
  pTVar17 = TAABB<double,3>::TransformedAABB((TAABB<double,3> *)&local_70,&local_40,param_6);
  dVar14 = *(double *)&pTVar17->MMax;
  dVar15 = *(double *)&(pTVar17->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar17->MMax).field_0x10;
  _Var9.m128_f32[1] = (float)*(double *)&(pTVar17->MMin).field_0x8;
  _Var9.m128_f32[0] = (float)*(double *)&pTVar17->MMin;
  _Var9.m128_f32[2] = (float)*(double *)&(pTVar17->MMin).field_0x10;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var9;
  _Var10.m128_f32[1] = (float)dVar15;
  _Var10.m128_f32[0] = (float)dVar14;
  _Var10.m128_f32[2] = (float)dVar2;
  _Var10.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var10;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int> @ 143eaeaf0

FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int>::
FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int>
          (FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,
          TSphere<double,3> *param_3,TVector<double,3> *param_4,double param_5,
          TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  __m128 _Var10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  TAABB<double,3> *pTVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double dStack_48;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  _Var6 = GlobalVectorConstants::Float0001;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x18 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar27 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar28 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x38 = (double)fVar28;
  _Var6 = GlobalVectorConstants::Float1110;
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x58 = (double)_Var6.m128_f32[3];
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar16 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar16;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar28 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar28;
  _Var6.m128_f32[1] = (float)*(double *)&param_4->field_0x8;
  _Var6.m128_f32[0] = (float)*(double *)param_4;
  _Var6.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var6.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var6;
  (this->VectorCullsBackFaceSweepsCode).m128_u64[0] = CONCAT44((float)param_9,(float)param_9);
  (this->VectorCullsBackFaceSweepsCode).m128_u64[1] = CONCAT44((float)param_9,(float)param_9);
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar11._4_8_ = param_9;
  auVar11._0_4_ = auVar24._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar24._8_4_;
  auVar22._12_4_ = auVar24._12_4_;
  auVar12._4_8_ = auVar24._8_8_;
  auVar12._0_4_ = auVar25._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar25._8_4_;
  auVar23._12_4_ = auVar25._12_4_;
  fVar32 = (float)auVar24._0_8_;
  fVar33 = (float)auVar22._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar28 = (float)auVar23._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar32;
  (this->RotationSimd).m128_f32[1] = fVar33;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar28;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar13._4_8_ = auVar25._8_8_;
  auVar13._0_4_ = auVar24._4_4_;
  auVar25._0_8_ = auVar13._0_8_ << 0x20;
  auVar25._8_4_ = auVar24._8_4_;
  auVar25._12_4_ = auVar24._12_4_;
  _Var7.m128_f32[1] = (float)auVar25._8_8_;
  _Var7.m128_f32[0] = (float)auVar24._0_8_;
  _Var7.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var7.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var7;
  fVar27 = fVar33 * fVar33 + fVar32 * fVar32;
  fVar29 = fVar32 * fVar32 + fVar33 * fVar33;
  fVar30 = fVar28 * fVar28 + fVar26 * fVar26;
  fVar31 = fVar26 * fVar26 + fVar28 * fVar28;
  auVar24._0_4_ = fVar30 + fVar27;
  auVar24._4_4_ = fVar31 + fVar29;
  auVar24._8_4_ = fVar27 + fVar30;
  auVar24._12_4_ = fVar29 + fVar31;
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar24._0_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar24._4_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar24._8_4_);
  uVar21 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar24._12_4_);
  auVar25 = sqrtps(auVar24,auVar24);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar32) & uVar18 |
       ~uVar18 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar33) & uVar19 | ~uVar19 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar20 | ~uVar20 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar28) & uVar21 | ~uVar21 & uVar5;
  _Var8.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var8.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var8;
  fVar26 = *(float *)&param_3->_padding_;
  local_70 = (double)(*(float *)&param_3->Center - fVar26);
  local_68 = (double)(*(float *)&(param_3->Center).field_0x4 - fVar26);
  local_60 = (double)(*(float *)&(param_3->Center).field_0x8 - fVar26);
  local_58 = (double)(*(float *)&param_3->Center + fVar26);
  uVar1 = *(undefined8 *)&(param_3->Center).field_0x4;
  local_50 = (double)(fVar26 + (float)uVar1);
  dStack_48 = (double)(fVar26 + (float)((ulonglong)uVar1 >> 0x20));
  pTVar17 = TAABB<double,3>::TransformedAABB((TAABB<double,3> *)&local_70,&local_40,param_6);
  dVar14 = *(double *)&pTVar17->MMax;
  dVar15 = *(double *)&(pTVar17->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar17->MMax).field_0x10;
  _Var9.m128_f32[1] = (float)*(double *)&(pTVar17->MMin).field_0x8;
  _Var9.m128_f32[0] = (float)*(double *)&pTVar17->MMin;
  _Var9.m128_f32[2] = (float)*(double *)&(pTVar17->MMin).field_0x10;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var9;
  _Var10.m128_f32[1] = (float)dVar15;
  _Var10.m128_f32[0] = (float)dVar14;
  _Var10.m128_f32[2] = (float)dVar2;
  _Var10.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var10;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short> @ 143eaedc0

FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          FCapsule *param_3,TVector<double,3> *param_4,double param_5,
          TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->TriMesh = param_1;
  this->Elements = param_2;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  pTVar16 = FCapsule::BoundingBox(param_3,&local_70);
  pTVar16 = TAABB<double,3>::TransformedAABB(pTVar16,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::FCapsule,int> @ 143eaf040

FTriangleMeshSweepVisitor<Chaos::FCapsule,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FCapsule,int>::
FTriangleMeshSweepVisitor<Chaos::FCapsule,int>
          (FTriangleMeshSweepVisitor<Chaos::FCapsule,int> *this,FTriangleMeshImplicitObject *param_1
          ,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,FCapsule *param_3,
          TVector<double,3> *param_4,double param_5,TRigidTransform<double,3> *param_6,bool param_7,
          TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TAABB<double,3> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  __m128 _Var28;
  float fVar29;
  float fVar30;
  TAABB<double,3> local_70;
  TAABB<double,3> local_40;
  
  this->TriMesh = param_1;
  this->Elements = param_2;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x18 = (double)fVar29;
  _Var6 = GlobalVectorConstants::FloatZero;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x38 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar27 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar29 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x58 = (double)fVar29;
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar15 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar15;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar29 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar29;
  _Var28._0_4_ = (float)*(double *)param_4;
  _Var28._4_4_ = (float)*(double *)&param_4->field_0x8;
  _Var28.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var28.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var28;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[0] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[1] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[2] = (float)param_9;
  (this->VectorCullsBackFaceSweepsCode).m128_f32[3] = (float)param_9;
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar10._4_8_ = param_9;
  auVar10._0_4_ = auVar24._4_4_;
  auVar21._0_8_ = auVar10._0_8_ << 0x20;
  auVar21._8_4_ = auVar24._8_4_;
  auVar21._12_4_ = auVar24._12_4_;
  auVar11._4_8_ = auVar24._8_8_;
  auVar11._0_4_ = auVar25._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar25._8_4_;
  auVar22._12_4_ = auVar25._12_4_;
  fVar29 = (float)auVar24._0_8_;
  fVar30 = (float)auVar21._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar27 = (float)auVar22._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar29;
  (this->RotationSimd).m128_f32[1] = fVar30;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar27;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar12._4_8_ = auVar25._8_8_;
  auVar12._0_4_ = auVar24._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar24._8_4_;
  auVar23._12_4_ = auVar24._12_4_;
  _Var6.m128_f32[1] = (float)auVar23._8_8_;
  _Var6.m128_f32[0] = (float)auVar24._0_8_;
  _Var6.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var6.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var6;
  auVar24._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
  auVar24._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar24._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
  auVar24._12_4_ = fVar26 * fVar26 + fVar27 * fVar27;
  auVar25._4_4_ = auVar24._12_4_ + auVar24._4_4_;
  auVar25._0_4_ = auVar24._8_4_ + auVar24._0_4_;
  auVar25._8_4_ = auVar24._0_4_ + auVar24._8_4_;
  auVar25._12_4_ = auVar24._4_4_ + auVar24._12_4_;
  auVar25 = sqrtps(auVar24,auVar25);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                  auVar24._8_4_ + auVar24._0_4_);
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                  auVar24._12_4_ + auVar24._4_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                  auVar24._0_4_ + auVar24._8_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                  auVar24._4_4_ + auVar24._12_4_);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar29) & uVar17 |
       ~uVar17 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar30) & uVar18 | ~uVar18 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar19 | ~uVar19 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar27) & uVar20 | ~uVar20 & uVar5;
  _Var7.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var7.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var7.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var7.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var7;
  pTVar16 = FCapsule::BoundingBox(param_3,&local_70);
  pTVar16 = TAABB<double,3>::TransformedAABB(pTVar16,&local_40,param_6);
  dVar13 = *(double *)&pTVar16->MMax;
  dVar14 = *(double *)&(pTVar16->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar16->MMax).field_0x10;
  _Var8.m128_f32[1] = (float)*(double *)&(pTVar16->MMin).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&pTVar16->MMin;
  _Var8.m128_f32[2] = (float)*(double *)&(pTVar16->MMin).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var8;
  _Var9.m128_f32[1] = (float)dVar14;
  _Var9.m128_f32[0] = (float)dVar13;
  _Var9.m128_f32[2] = (float)dVar2;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var9;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short> @ 143eaf2c0

FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short>::
FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short>
          (FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short> *this,
          FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *param_2,
          FConvex *param_3,TVector<double,3> *param_4,double param_5,
          TRigidTransform<double,3> *param_6,bool param_7,TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  __m128 _Var10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  TAABB<double,3> *pTVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double dStack_48;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  _Var6 = GlobalVectorConstants::Float0001;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x18 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar27 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar28 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x38 = (double)fVar28;
  _Var6 = GlobalVectorConstants::Float1110;
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x58 = (double)_Var6.m128_f32[3];
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar16 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar16;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar28 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar28;
  _Var6.m128_f32[1] = (float)*(double *)&param_4->field_0x8;
  _Var6.m128_f32[0] = (float)*(double *)param_4;
  _Var6.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var6.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var6;
  (this->VectorCullsBackFaceSweepsCode).m128_u64[0] = CONCAT44((float)param_9,(float)param_9);
  (this->VectorCullsBackFaceSweepsCode).m128_u64[1] = CONCAT44((float)param_9,(float)param_9);
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar11._4_8_ = param_9;
  auVar11._0_4_ = auVar24._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar24._8_4_;
  auVar22._12_4_ = auVar24._12_4_;
  auVar12._4_8_ = auVar24._8_8_;
  auVar12._0_4_ = auVar25._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar25._8_4_;
  auVar23._12_4_ = auVar25._12_4_;
  fVar32 = (float)auVar24._0_8_;
  fVar33 = (float)auVar22._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar28 = (float)auVar23._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar32;
  (this->RotationSimd).m128_f32[1] = fVar33;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar28;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar13._4_8_ = auVar25._8_8_;
  auVar13._0_4_ = auVar24._4_4_;
  auVar25._0_8_ = auVar13._0_8_ << 0x20;
  auVar25._8_4_ = auVar24._8_4_;
  auVar25._12_4_ = auVar24._12_4_;
  _Var7.m128_f32[1] = (float)auVar25._8_8_;
  _Var7.m128_f32[0] = (float)auVar24._0_8_;
  _Var7.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var7.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var7;
  fVar27 = fVar33 * fVar33 + fVar32 * fVar32;
  fVar29 = fVar32 * fVar32 + fVar33 * fVar33;
  fVar30 = fVar28 * fVar28 + fVar26 * fVar26;
  fVar31 = fVar26 * fVar26 + fVar28 * fVar28;
  auVar24._0_4_ = fVar30 + fVar27;
  auVar24._4_4_ = fVar31 + fVar29;
  auVar24._8_4_ = fVar27 + fVar30;
  auVar24._12_4_ = fVar29 + fVar31;
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar24._0_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar24._4_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar24._8_4_);
  uVar21 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar24._12_4_);
  auVar25 = sqrtps(auVar24,auVar24);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar32) & uVar18 |
       ~uVar18 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar33) & uVar19 | ~uVar19 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar20 | ~uVar20 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar28) & uVar21 | ~uVar21 & uVar5;
  _Var8.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var8.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var8;
  local_70 = (double)*(float *)&(param_3->LocalBoundingBox).MMin;
  local_68 = (double)*(float *)&(param_3->LocalBoundingBox).MMin.field_0x4;
  local_60 = (double)*(float *)&(param_3->LocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(param_3->LocalBoundingBox).MMax.field_0x4;
  local_50 = (double)(float)uVar1;
  dStack_48 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_58 = (double)*(float *)&(param_3->LocalBoundingBox).MMax;
  pTVar17 = TAABB<double,3>::TransformedAABB((TAABB<double,3> *)&local_70,&local_40,param_6);
  dVar14 = *(double *)&pTVar17->MMax;
  dVar15 = *(double *)&(pTVar17->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar17->MMax).field_0x10;
  _Var9.m128_f32[1] = (float)*(double *)&(pTVar17->MMin).field_0x8;
  _Var9.m128_f32[0] = (float)*(double *)&pTVar17->MMin;
  _Var9.m128_f32[2] = (float)*(double *)&(pTVar17->MMin).field_0x10;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var9;
  _Var10.m128_f32[1] = (float)dVar15;
  _Var10.m128_f32[0] = (float)dVar14;
  _Var10.m128_f32[2] = (float)dVar2;
  _Var10.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var10;
  return this;
}

// FTriangleMeshSweepVisitor<Chaos::FConvex,int> @ 143eaf570

FTriangleMeshSweepVisitor<Chaos::FConvex,int> * __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FConvex,int>::FTriangleMeshSweepVisitor<Chaos::FConvex,int>
          (FTriangleMeshSweepVisitor<Chaos::FConvex,int> *this,FTriangleMeshImplicitObject *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,FConvex *param_3,
          TVector<double,3> *param_4,double param_5,TRigidTransform<double,3> *param_6,bool param_7,
          TVector<double,3> *param_8,double param_9)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  __m128 _Var9;
  __m128 _Var10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  TAABB<double,3> *pTVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double dStack_48;
  TAABB<double,3> local_40;
  
  this->Elements = param_2;
  this->TriMesh = param_1;
  _Var6 = GlobalVectorConstants::Float0001;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[1];
  *(double *)&this->StartTM = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->StartTM).field_0x8 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x10 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x18 = (double)_Var6.m128_f32[3];
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar27 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar28 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->StartTM).field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->StartTM).field_0x28 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x30 = (double)fVar27;
  *(double *)&(this->StartTM).field_0x38 = (double)fVar28;
  _Var6 = GlobalVectorConstants::Float1110;
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[1];
  *(double *)&(this->StartTM).field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->StartTM).field_0x48 = (double)fVar26;
  *(double *)&(this->StartTM).field_0x50 = (double)_Var6.m128_f32[2];
  *(double *)&(this->StartTM).field_0x58 = (double)_Var6.m128_f32[3];
  this->CullsBackFaceSweepsCode = param_9;
  this->bComputeMTD = param_7;
  this->QueryGeom = param_3;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ScaledDirNormalized = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x8 = uVar1;
  *(undefined8 *)&(this->ScaledDirNormalized).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  uVar1 = *(undefined8 *)&param_8->field_0x10;
  this->OutTime = 3.4028235e+38;
  this->OutFaceIndex = -1;
  this->LengthScale = (float)param_5;
  uVar16 = *(undefined8 *)&param_8->field_0x8;
  *(undefined8 *)&this->TriMeshScale = *(undefined8 *)param_8;
  *(undefined8 *)&(this->TriMeshScale).field_0x8 = uVar16;
  *(undefined8 *)&(this->TriMeshScale).field_0x10 = uVar1;
  (this->GeometryAABBTriangleSpace).Min = GlobalVectorConstants::BigNumber;
  fVar26 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar27 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar28 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[0] =
       0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->GeometryAABBTriangleSpace).Max.m128_f32[1] = 0.0 - fVar26;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[2] = 0.0 - fVar27;
  (this->GeometryAABBTriangleSpace).Max.m128_f32[3] = 0.0 - fVar28;
  _Var6.m128_f32[1] = (float)*(double *)&param_4->field_0x8;
  _Var6.m128_f32[0] = (float)*(double *)param_4;
  _Var6.m128_f32[2] = (float)*(double *)&param_4->field_0x10;
  _Var6.m128_f32[3] = 0.0;
  this->VectorScaledDirNormalized = _Var6;
  (this->VectorCullsBackFaceSweepsCode).m128_u64[0] = CONCAT44((float)param_9,(float)param_9);
  (this->VectorCullsBackFaceSweepsCode).m128_u64[1] = CONCAT44((float)param_9,(float)param_9);
  auVar25 = *(undefined1 (*) [16])&param_6->field_0x10;
  auVar24 = *(undefined1 (*) [16])param_6;
  auVar11._4_8_ = param_9;
  auVar11._0_4_ = auVar24._4_4_;
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = auVar24._8_4_;
  auVar22._12_4_ = auVar24._12_4_;
  auVar12._4_8_ = auVar24._8_8_;
  auVar12._0_4_ = auVar25._4_4_;
  auVar23._0_8_ = auVar12._0_8_ << 0x20;
  auVar23._8_4_ = auVar25._8_4_;
  auVar23._12_4_ = auVar25._12_4_;
  fVar32 = (float)auVar24._0_8_;
  fVar33 = (float)auVar22._8_8_;
  fVar26 = (float)auVar25._0_8_;
  fVar28 = (float)auVar23._8_8_;
  (this->RotationSimd).m128_f32[0] = fVar32;
  (this->RotationSimd).m128_f32[1] = fVar33;
  (this->RotationSimd).m128_f32[2] = fVar26;
  (this->RotationSimd).m128_f32[3] = fVar28;
  auVar24 = *(undefined1 (*) [16])&param_6->field_0x20;
  auVar13._4_8_ = auVar25._8_8_;
  auVar13._0_4_ = auVar24._4_4_;
  auVar25._0_8_ = auVar13._0_8_ << 0x20;
  auVar25._8_4_ = auVar24._8_4_;
  auVar25._12_4_ = auVar24._12_4_;
  _Var7.m128_f32[1] = (float)auVar25._8_8_;
  _Var7.m128_f32[0] = (float)auVar24._0_8_;
  _Var7.m128_f32[2] = (float)*(double *)&param_6->field_0x30;
  _Var7.m128_f32[3] = 0.0;
  this->TranslationSimd = _Var7;
  fVar27 = fVar33 * fVar33 + fVar32 * fVar32;
  fVar29 = fVar32 * fVar32 + fVar33 * fVar33;
  fVar30 = fVar28 * fVar28 + fVar26 * fVar26;
  fVar31 = fVar26 * fVar26 + fVar28 * fVar28;
  auVar24._0_4_ = fVar30 + fVar27;
  auVar24._4_4_ = fVar31 + fVar29;
  auVar24._8_4_ = fVar27 + fVar30;
  auVar24._12_4_ = fVar29 + fVar31;
  uVar18 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar24._0_4_);
  uVar19 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar24._4_4_);
  uVar20 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar24._8_4_);
  uVar21 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar24._12_4_);
  auVar25 = sqrtps(auVar24,auVar24);
  auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar25._0_4_ * fVar32) & uVar18 |
       ~uVar18 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar25._4_4_ * fVar33) & uVar19 | ~uVar19 & uVar3;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar25._8_4_ * fVar26) & uVar20 | ~uVar20 & uVar4;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar25._12_4_ * fVar28) & uVar21 | ~uVar21 & uVar5;
  _Var8.m128_f32[1] = (float)*(double *)&(this->ScaledDirNormalized).field_0x8;
  _Var8.m128_f32[0] = (float)*(double *)&this->ScaledDirNormalized;
  _Var8.m128_f32[2] = (float)*(double *)&(this->ScaledDirNormalized).field_0x10;
  _Var8.m128_f32[3] = 0.0;
  this->RayDirSimd = _Var8;
  local_70 = (double)*(float *)&(param_3->LocalBoundingBox).MMin;
  local_68 = (double)*(float *)&(param_3->LocalBoundingBox).MMin.field_0x4;
  local_60 = (double)*(float *)&(param_3->LocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(param_3->LocalBoundingBox).MMax.field_0x4;
  local_50 = (double)(float)uVar1;
  dStack_48 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_58 = (double)*(float *)&(param_3->LocalBoundingBox).MMax;
  pTVar17 = TAABB<double,3>::TransformedAABB((TAABB<double,3> *)&local_70,&local_40,param_6);
  dVar14 = *(double *)&pTVar17->MMax;
  dVar15 = *(double *)&(pTVar17->MMax).field_0x8;
  dVar2 = *(double *)&(pTVar17->MMax).field_0x10;
  _Var9.m128_f32[1] = (float)*(double *)&(pTVar17->MMin).field_0x8;
  _Var9.m128_f32[0] = (float)*(double *)&pTVar17->MMin;
  _Var9.m128_f32[2] = (float)*(double *)&(pTVar17->MMin).field_0x10;
  _Var9.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Min = _Var9;
  _Var10.m128_f32[1] = (float)dVar15;
  _Var10.m128_f32[0] = (float)dVar14;
  _Var10.m128_f32[2] = (float)dVar2;
  _Var10.m128_f32[3] = 0.0;
  (this->GeometryAABBTriangleSpace).Max = _Var10;
  return this;
}

// VisitSweep @ 143ed9890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TBox<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_210->AllocatorInstance).Data + lVar16 * 6)
                        );
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_210->AllocatorInstance).Data + lVar16 * 6 + 2));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_210->AllocatorInstance).Data + lVar16 * 6 + 4));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  fVar20 = this->LengthScale * *param_2;
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar20,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar20,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143ed9ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::TBox<double,3>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TBox<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 4));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 8));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  fVar20 = this->LengthScale * *param_2;
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar20,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar20,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143eda530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>::
VisitSweep(FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_210->AllocatorInstance).Data + lVar16 * 6)
                        );
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_210->AllocatorInstance).Data + lVar16 * 6 + 2));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_210->AllocatorInstance).Data + lVar16 * 6 + 4));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  fVar21 = *param_2 * this->LengthScale;
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
    ;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar21,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
    ;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar21,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edab80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>::
VisitSweep(FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 4));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 8));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  fVar21 = *param_2 * this->LengthScale;
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
    ;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar21,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
    ;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar21,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edb1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::
FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>::
VisitSweep(FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  uint uVar16;
  uint uVar17;
  TParticles<float,3> *this_00;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStackY_288 [32];
  float local_228 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_220;
  TVector<float,3> *local_218;
  TVector<float,3> *local_210;
  float *local_208;
  FGeomGJKHelperSIMD local_200;
  FGeomGJKHelperSIMD local_1e8;
  FGeomGJKHelperSIMD local_1d0;
  FGeomGJKHelperSIMD local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar2 = param_1->Payload;
  lVar18 = (longlong)(int)uVar2;
  pTVar3 = this->Elements;
  this_00 = &this->TriMesh->MParticles;
  fVar39 = (float)*(double *)&this->TriMeshScale;
  fVar41 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  uVar17 = ~uVar2 >> 0x1f;
  fVar22 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  local_208 = param_2;
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_218 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar18 * 6));
  pTVar3 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_210 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar3->AllocatorInstance).Data + lVar18 * 6 + 2));
  local_220 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < local_220->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_220->AllocatorInstance).Data + lVar18 * 6 + 4));
  pfVar10 = local_208;
  bVar11 = false;
  fVar33 = (float)*(undefined8 *)local_218 * fVar39;
  fVar35 = SUB124(*local_218,4) * fVar41;
  local_a8._0_8_ = CONCAT44(fVar35,fVar33);
  local_a8._8_4_ = SUB124(*local_218,8) * fVar22;
  local_a8._12_4_ = 0;
  fVar36 = (float)*(undefined8 *)local_210 * fVar39;
  fVar37 = (float)((ulonglong)*(undefined8 *)local_210 >> 0x20) * fVar41;
  fVar38 = *(float *)&local_210->field_0x8 * fVar22;
  fVar39 = (float)*(undefined8 *)pTVar15 * fVar39;
  fVar41 = (float)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) * fVar41;
  fVar22 = *(float *)&pTVar15->field_0x8 * fVar22;
  local_98._4_4_ = fVar37;
  local_98._0_4_ = fVar36;
  local_98._8_4_ = fVar38;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar41;
  local_88._0_4_ = fVar39;
  local_88._8_4_ = fVar22;
  local_88._12_4_ = 0;
  fVar40 = (fVar41 - fVar35) * (fVar36 - fVar33) - (fVar37 - fVar35) * (fVar39 - fVar33);
  fVar42 = (fVar22 - local_a8._8_4_) * (fVar37 - fVar35) -
           (fVar38 - local_a8._8_4_) * (fVar41 - fVar35);
  fVar43 = (fVar39 - fVar33) * (fVar38 - local_a8._8_4_) -
           (fVar36 - fVar33) * (fVar22 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar23 = fVar43 * fVar43 + fVar42 * fVar42;
    fVar26 = fVar42 * fVar42 + fVar43 * fVar43;
    fVar27 = fVar40 * fVar40 + 0.0;
    fVar28 = fVar40 * fVar40 + 0.0;
    auVar20._0_4_ = fVar27 + fVar23;
    auVar20._4_4_ = fVar28 + fVar26;
    auVar20._8_4_ = fVar23 + fVar27;
    auVar20._12_4_ = fVar26 + fVar28;
    auVar20 = sqrtps(auVar20,auVar20);
    auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar20);
    fVar23 = auVar20._4_4_ * fVar43 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar20._0_4_ * fVar42 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar20._8_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar26 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar27 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar28 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar23 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar31._4_4_ = -(uint)(_UNK_1506895e4 < fVar27);
    auVar31._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar26);
    auVar31._8_4_ = -(uint)(_UNK_1506895e8 < fVar28);
    auVar31._12_4_ = -(uint)(_UNK_1506895ec < fVar23);
    iVar13 = movmskps((int)pTVar15,auVar31);
    if (iVar13 != 0) {
      return true;
    }
    auVar29._4_4_ = -(uint)(fVar27 < _UNK_150b28874);
    auVar29._0_4_ = -(uint)(fVar26 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar29._8_4_ = -(uint)(fVar28 < _UNK_150b28878);
    auVar29._12_4_ = -(uint)(fVar23 < _UNK_150b2887c);
    iVar13 = movmskps(0,auVar29);
    if (iVar13 != 0) {
      bVar19 = true;
    }
    else {
      auVar30._8_4_ = local_a8._8_4_;
      auVar30._0_8_ = local_a8._0_8_;
      auVar30._12_4_ = 0;
      auVar6._4_4_ = fVar37;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar38;
      auVar6._12_4_ = 0;
      auVar20 = maxps(auVar30,auVar6);
      auVar24._8_4_ = local_a8._8_4_;
      auVar24._0_8_ = local_a8._0_8_;
      auVar24._12_4_ = 0;
      auVar8._4_4_ = fVar41;
      auVar8._0_4_ = fVar39;
      auVar8._8_4_ = fVar22;
      auVar8._12_4_ = 0;
      auVar31 = maxps(auVar20,auVar8);
      auVar7._4_4_ = fVar37;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = 0;
      auVar20 = minps(auVar24,auVar7);
      auVar32._4_4_ = -(uint)(auVar31._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar32._0_4_ = -(uint)(auVar31._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar32._8_4_ = -(uint)(auVar31._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar32._12_4_ = -(uint)(auVar31._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar9._4_4_ = fVar41;
      auVar9._0_4_ = fVar39;
      auVar9._8_4_ = fVar22;
      auVar9._12_4_ = 0;
      auVar20 = minps(auVar20,auVar9);
      auVar21._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar20._4_4_);
      auVar21._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar20._0_4_);
      auVar21._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar20._8_4_);
      auVar21._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar20._12_4_);
      iVar14 = movmskps(0,auVar32 | auVar21);
      bVar19 = iVar14 == 0;
    }
    bVar11 = iVar13 == 0;
    if (!bVar19) {
      return true;
    }
  }
  pTVar4 = this->QueryGeom;
  auVar34._0_4_ = (uint)(fVar33 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar34._4_4_ = (uint)(fVar35 - fVar37) & _UNK_15061cc74;
  auVar34._8_4_ = (uint)(local_a8._8_4_ - fVar38) & _UNK_15061cc78;
  auVar34._12_4_ = 0;
  fVar33 = *local_208 * this->LengthScale;
  auVar25._0_4_ = (uint)(fVar36 - fVar39) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar25._4_4_ = (uint)(fVar37 - fVar41) & _UNK_15061cc74;
  auVar25._8_4_ = (uint)(fVar38 - fVar22) & _UNK_15061cc78;
  auVar25._12_4_ = 0;
  auVar20 = maxps(auVar34,auVar25);
  if (auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + auVar20._8_4_ * auVar20._8_4_
      <= __real_501502f9) {
    local_1d0.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_1d0.Radius = 0.0;
    }
    else {
      local_1d0.Radius = *(float *)&pTVar4->_padding_;
    }
    local_1d0.Func =
         FGeomGJKHelperSIMD::
         SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
    local_1b8.Geometry = local_a8;
    local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b8.Margin = 0.0;
    local_1b8.Radius = 0.0;
    local_1d0.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b8,&local_1d0,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar33,local_228,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_200.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_200.Radius = 0.0;
    }
    else {
      local_200.Radius = *(float *)&pTVar4->_padding_;
    }
    local_200.Func =
         FGeomGJKHelperSIMD::
         SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
    local_1e8.Geometry = local_a8;
    local_1e8.Margin = 0.0;
    local_1e8.Radius = 0.0;
    local_1e8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_200.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e8,&local_200,&local_108,&local_128,&local_148,fVar33,local_228,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar19 != false) && ((local_228[0] <= 0.0 || (!bVar11)))) {
    pfVar1 = &this->OutTime;
    if (local_228[0] < this->LengthScale * *pfVar1) {
      local_188 = (double)(this->OutNormalSimd).m128_f32[0];
      local_180 = (double)(this->OutNormalSimd).m128_f32[1];
      local_178 = (double)(this->OutNormalSimd).m128_f32[2];
      local_1a0 = (double)(this->OutPositionSimd).m128_f32[0];
      local_198 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_190 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_188,(TVector<double,3> *)&local_1a0,
                 this->LengthScale,local_228[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar42;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar43;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar40;
      if (0.0 < local_228[0]) {
        *pfVar10 = *pfVar1;
      }
      else {
        *pfVar10 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>::
VisitSweep(FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  uint uVar16;
  uint uVar17;
  TParticles<float,3> *this_00;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStackY_288 [32];
  float local_228 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_220;
  TVector<float,3> *local_218;
  TVector<float,3> *local_210;
  float *local_208;
  FGeomGJKHelperSIMD local_200;
  FGeomGJKHelperSIMD local_1e8;
  FGeomGJKHelperSIMD local_1d0;
  FGeomGJKHelperSIMD local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar2 = param_1->Payload;
  lVar18 = (longlong)(int)uVar2;
  pTVar3 = this->Elements;
  this_00 = &this->TriMesh->MParticles;
  fVar39 = (float)*(double *)&this->TriMeshScale;
  fVar41 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  uVar17 = ~uVar2 >> 0x1f;
  fVar22 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  local_208 = param_2;
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_218 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar18 * 0xc));
  pTVar3 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_210 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar18 * 0xc + 4));
  local_220 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < local_220->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_220->AllocatorInstance).Data + lVar18 * 0xc + 8));
  pfVar10 = local_208;
  bVar11 = false;
  fVar33 = (float)*(undefined8 *)local_218 * fVar39;
  fVar35 = SUB124(*local_218,4) * fVar41;
  local_a8._0_8_ = CONCAT44(fVar35,fVar33);
  local_a8._8_4_ = SUB124(*local_218,8) * fVar22;
  local_a8._12_4_ = 0;
  fVar36 = (float)*(undefined8 *)local_210 * fVar39;
  fVar37 = (float)((ulonglong)*(undefined8 *)local_210 >> 0x20) * fVar41;
  fVar38 = *(float *)&local_210->field_0x8 * fVar22;
  fVar39 = (float)*(undefined8 *)pTVar15 * fVar39;
  fVar41 = (float)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) * fVar41;
  fVar22 = *(float *)&pTVar15->field_0x8 * fVar22;
  local_98._4_4_ = fVar37;
  local_98._0_4_ = fVar36;
  local_98._8_4_ = fVar38;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar41;
  local_88._0_4_ = fVar39;
  local_88._8_4_ = fVar22;
  local_88._12_4_ = 0;
  fVar40 = (fVar41 - fVar35) * (fVar36 - fVar33) - (fVar37 - fVar35) * (fVar39 - fVar33);
  fVar42 = (fVar22 - local_a8._8_4_) * (fVar37 - fVar35) -
           (fVar38 - local_a8._8_4_) * (fVar41 - fVar35);
  fVar43 = (fVar39 - fVar33) * (fVar38 - local_a8._8_4_) -
           (fVar36 - fVar33) * (fVar22 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar23 = fVar43 * fVar43 + fVar42 * fVar42;
    fVar26 = fVar42 * fVar42 + fVar43 * fVar43;
    fVar27 = fVar40 * fVar40 + 0.0;
    fVar28 = fVar40 * fVar40 + 0.0;
    auVar20._0_4_ = fVar27 + fVar23;
    auVar20._4_4_ = fVar28 + fVar26;
    auVar20._8_4_ = fVar23 + fVar27;
    auVar20._12_4_ = fVar26 + fVar28;
    auVar20 = sqrtps(auVar20,auVar20);
    auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar20);
    fVar23 = auVar20._4_4_ * fVar43 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar20._0_4_ * fVar42 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar20._8_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar26 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar27 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar28 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar23 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar31._4_4_ = -(uint)(_UNK_1506895e4 < fVar27);
    auVar31._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar26);
    auVar31._8_4_ = -(uint)(_UNK_1506895e8 < fVar28);
    auVar31._12_4_ = -(uint)(_UNK_1506895ec < fVar23);
    iVar13 = movmskps((int)pTVar15,auVar31);
    if (iVar13 != 0) {
      return true;
    }
    auVar29._4_4_ = -(uint)(fVar27 < _UNK_150b28874);
    auVar29._0_4_ = -(uint)(fVar26 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar29._8_4_ = -(uint)(fVar28 < _UNK_150b28878);
    auVar29._12_4_ = -(uint)(fVar23 < _UNK_150b2887c);
    iVar13 = movmskps(0,auVar29);
    if (iVar13 != 0) {
      bVar19 = true;
    }
    else {
      auVar30._8_4_ = local_a8._8_4_;
      auVar30._0_8_ = local_a8._0_8_;
      auVar30._12_4_ = 0;
      auVar6._4_4_ = fVar37;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar38;
      auVar6._12_4_ = 0;
      auVar20 = maxps(auVar30,auVar6);
      auVar24._8_4_ = local_a8._8_4_;
      auVar24._0_8_ = local_a8._0_8_;
      auVar24._12_4_ = 0;
      auVar8._4_4_ = fVar41;
      auVar8._0_4_ = fVar39;
      auVar8._8_4_ = fVar22;
      auVar8._12_4_ = 0;
      auVar31 = maxps(auVar20,auVar8);
      auVar7._4_4_ = fVar37;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = 0;
      auVar20 = minps(auVar24,auVar7);
      auVar32._4_4_ = -(uint)(auVar31._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar32._0_4_ = -(uint)(auVar31._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar32._8_4_ = -(uint)(auVar31._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar32._12_4_ = -(uint)(auVar31._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar9._4_4_ = fVar41;
      auVar9._0_4_ = fVar39;
      auVar9._8_4_ = fVar22;
      auVar9._12_4_ = 0;
      auVar20 = minps(auVar20,auVar9);
      auVar21._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar20._4_4_);
      auVar21._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar20._0_4_);
      auVar21._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar20._8_4_);
      auVar21._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar20._12_4_);
      iVar14 = movmskps(0,auVar32 | auVar21);
      bVar19 = iVar14 == 0;
    }
    bVar11 = iVar13 == 0;
    if (!bVar19) {
      return true;
    }
  }
  pTVar4 = this->QueryGeom;
  auVar34._0_4_ = (uint)(fVar33 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar34._4_4_ = (uint)(fVar35 - fVar37) & _UNK_15061cc74;
  auVar34._8_4_ = (uint)(local_a8._8_4_ - fVar38) & _UNK_15061cc78;
  auVar34._12_4_ = 0;
  fVar33 = *local_208 * this->LengthScale;
  auVar25._0_4_ = (uint)(fVar36 - fVar39) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar25._4_4_ = (uint)(fVar37 - fVar41) & _UNK_15061cc74;
  auVar25._8_4_ = (uint)(fVar38 - fVar22) & _UNK_15061cc78;
  auVar25._12_4_ = 0;
  auVar20 = maxps(auVar34,auVar25);
  if (auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + auVar20._8_4_ * auVar20._8_4_
      <= __real_501502f9) {
    local_1d0.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_1d0.Radius = 0.0;
    }
    else {
      local_1d0.Radius = *(float *)&pTVar4->_padding_;
    }
    local_1d0.Func =
         FGeomGJKHelperSIMD::
         SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
    local_1b8.Geometry = local_a8;
    local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b8.Margin = 0.0;
    local_1b8.Radius = 0.0;
    local_1d0.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b8,&local_1d0,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar33,local_228,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_200.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_200.Radius = 0.0;
    }
    else {
      local_200.Radius = *(float *)&pTVar4->_padding_;
    }
    local_200.Func =
         FGeomGJKHelperSIMD::
         SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
    local_1e8.Geometry = local_a8;
    local_1e8.Margin = 0.0;
    local_1e8.Radius = 0.0;
    local_1e8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_200.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e8,&local_200,&local_108,&local_128,&local_148,fVar33,local_228,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar19 != false) && ((local_228[0] <= 0.0 || (!bVar11)))) {
    pfVar1 = &this->OutTime;
    if (local_228[0] < this->LengthScale * *pfVar1) {
      local_188 = (double)(this->OutNormalSimd).m128_f32[0];
      local_180 = (double)(this->OutNormalSimd).m128_f32[1];
      local_178 = (double)(this->OutNormalSimd).m128_f32[2];
      local_1a0 = (double)(this->OutPositionSimd).m128_f32[0];
      local_198 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_190 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_188,(TVector<double,3> *)&local_1a0,
                 this->LengthScale,local_228[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar42;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar43;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar40;
      if (0.0 < local_228[0]) {
        *pfVar10 = *pfVar1;
      }
      else {
        *pfVar10 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edbea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>::
VisitSweep(FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  uint uVar16;
  uint uVar17;
  TParticles<float,3> *this_00;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStackY_288 [32];
  float local_228 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_220;
  TVector<float,3> *local_218;
  TVector<float,3> *local_210;
  float *local_208;
  FGeomGJKHelperSIMD local_200;
  FGeomGJKHelperSIMD local_1e8;
  FGeomGJKHelperSIMD local_1d0;
  FGeomGJKHelperSIMD local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar2 = param_1->Payload;
  lVar18 = (longlong)(int)uVar2;
  pTVar3 = this->Elements;
  this_00 = &this->TriMesh->MParticles;
  fVar39 = (float)*(double *)&this->TriMeshScale;
  fVar41 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  uVar17 = ~uVar2 >> 0x1f;
  fVar22 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  local_208 = param_2;
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_218 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar18 * 6));
  pTVar3 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_210 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar3->AllocatorInstance).Data + lVar18 * 6 + 2));
  local_220 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < local_220->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_220->AllocatorInstance).Data + lVar18 * 6 + 4));
  pfVar10 = local_208;
  bVar11 = false;
  fVar33 = (float)*(undefined8 *)local_218 * fVar39;
  fVar35 = SUB124(*local_218,4) * fVar41;
  local_a8._0_8_ = CONCAT44(fVar35,fVar33);
  local_a8._8_4_ = SUB124(*local_218,8) * fVar22;
  local_a8._12_4_ = 0;
  fVar36 = (float)*(undefined8 *)local_210 * fVar39;
  fVar37 = (float)((ulonglong)*(undefined8 *)local_210 >> 0x20) * fVar41;
  fVar38 = *(float *)&local_210->field_0x8 * fVar22;
  fVar39 = (float)*(undefined8 *)pTVar15 * fVar39;
  fVar41 = (float)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) * fVar41;
  fVar22 = *(float *)&pTVar15->field_0x8 * fVar22;
  local_98._4_4_ = fVar37;
  local_98._0_4_ = fVar36;
  local_98._8_4_ = fVar38;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar41;
  local_88._0_4_ = fVar39;
  local_88._8_4_ = fVar22;
  local_88._12_4_ = 0;
  fVar40 = (fVar41 - fVar35) * (fVar36 - fVar33) - (fVar37 - fVar35) * (fVar39 - fVar33);
  fVar42 = (fVar22 - local_a8._8_4_) * (fVar37 - fVar35) -
           (fVar38 - local_a8._8_4_) * (fVar41 - fVar35);
  fVar43 = (fVar39 - fVar33) * (fVar38 - local_a8._8_4_) -
           (fVar36 - fVar33) * (fVar22 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar23 = fVar43 * fVar43 + fVar42 * fVar42;
    fVar26 = fVar42 * fVar42 + fVar43 * fVar43;
    fVar27 = fVar40 * fVar40 + 0.0;
    fVar28 = fVar40 * fVar40 + 0.0;
    auVar20._0_4_ = fVar27 + fVar23;
    auVar20._4_4_ = fVar28 + fVar26;
    auVar20._8_4_ = fVar23 + fVar27;
    auVar20._12_4_ = fVar26 + fVar28;
    auVar20 = sqrtps(auVar20,auVar20);
    auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar20);
    fVar23 = auVar20._4_4_ * fVar43 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar20._0_4_ * fVar42 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar20._8_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar26 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar27 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar28 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar23 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar31._4_4_ = -(uint)(_UNK_1506895e4 < fVar27);
    auVar31._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar26);
    auVar31._8_4_ = -(uint)(_UNK_1506895e8 < fVar28);
    auVar31._12_4_ = -(uint)(_UNK_1506895ec < fVar23);
    iVar13 = movmskps((int)pTVar15,auVar31);
    if (iVar13 != 0) {
      return true;
    }
    auVar29._4_4_ = -(uint)(fVar27 < _UNK_150b28874);
    auVar29._0_4_ = -(uint)(fVar26 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar29._8_4_ = -(uint)(fVar28 < _UNK_150b28878);
    auVar29._12_4_ = -(uint)(fVar23 < _UNK_150b2887c);
    iVar13 = movmskps(0,auVar29);
    if (iVar13 != 0) {
      bVar19 = true;
    }
    else {
      auVar30._8_4_ = local_a8._8_4_;
      auVar30._0_8_ = local_a8._0_8_;
      auVar30._12_4_ = 0;
      auVar6._4_4_ = fVar37;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar38;
      auVar6._12_4_ = 0;
      auVar20 = maxps(auVar30,auVar6);
      auVar24._8_4_ = local_a8._8_4_;
      auVar24._0_8_ = local_a8._0_8_;
      auVar24._12_4_ = 0;
      auVar8._4_4_ = fVar41;
      auVar8._0_4_ = fVar39;
      auVar8._8_4_ = fVar22;
      auVar8._12_4_ = 0;
      auVar31 = maxps(auVar20,auVar8);
      auVar7._4_4_ = fVar37;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = 0;
      auVar20 = minps(auVar24,auVar7);
      auVar32._4_4_ = -(uint)(auVar31._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar32._0_4_ = -(uint)(auVar31._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar32._8_4_ = -(uint)(auVar31._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar32._12_4_ = -(uint)(auVar31._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar9._4_4_ = fVar41;
      auVar9._0_4_ = fVar39;
      auVar9._8_4_ = fVar22;
      auVar9._12_4_ = 0;
      auVar20 = minps(auVar20,auVar9);
      auVar21._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar20._4_4_);
      auVar21._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar20._0_4_);
      auVar21._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar20._8_4_);
      auVar21._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar20._12_4_);
      iVar14 = movmskps(0,auVar32 | auVar21);
      bVar19 = iVar14 == 0;
    }
    bVar11 = iVar13 == 0;
    if (!bVar19) {
      return true;
    }
  }
  pTVar4 = this->QueryGeom;
  auVar34._0_4_ = (uint)(fVar33 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar34._4_4_ = (uint)(fVar35 - fVar37) & _UNK_15061cc74;
  auVar34._8_4_ = (uint)(local_a8._8_4_ - fVar38) & _UNK_15061cc78;
  auVar34._12_4_ = 0;
  fVar33 = *local_208 * this->LengthScale;
  auVar25._0_4_ = (uint)(fVar36 - fVar39) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar25._4_4_ = (uint)(fVar37 - fVar41) & _UNK_15061cc74;
  auVar25._8_4_ = (uint)(fVar38 - fVar22) & _UNK_15061cc78;
  auVar25._12_4_ = 0;
  auVar20 = maxps(auVar34,auVar25);
  if (auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + auVar20._8_4_ * auVar20._8_4_
      <= __real_501502f9) {
    local_1d0.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_1d0.Radius = 0.0;
    }
    else {
      local_1d0.Radius = *(float *)&pTVar4->_padding_;
    }
    local_1d0.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
    local_1b8.Geometry = local_a8;
    local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b8.Margin = 0.0;
    local_1b8.Radius = 0.0;
    local_1d0.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b8,&local_1d0,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar33,local_228,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_200.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_200.Radius = 0.0;
    }
    else {
      local_200.Radius = *(float *)&pTVar4->_padding_;
    }
    local_200.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
    local_1e8.Geometry = local_a8;
    local_1e8.Margin = 0.0;
    local_1e8.Radius = 0.0;
    local_1e8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_200.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e8,&local_200,&local_108,&local_128,&local_148,fVar33,local_228,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar19 != false) && ((local_228[0] <= 0.0 || (!bVar11)))) {
    pfVar1 = &this->OutTime;
    if (local_228[0] < this->LengthScale * *pfVar1) {
      local_188 = (double)(this->OutNormalSimd).m128_f32[0];
      local_180 = (double)(this->OutNormalSimd).m128_f32[1];
      local_178 = (double)(this->OutNormalSimd).m128_f32[2];
      local_1a0 = (double)(this->OutPositionSimd).m128_f32[0];
      local_198 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_190 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_188,(TVector<double,3> *)&local_1a0,
                 this->LengthScale,local_228[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar42;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar43;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar40;
      if (0.0 < local_228[0]) {
        *pfVar10 = *pfVar1;
      }
      else {
        *pfVar10 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edc510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  uint uVar16;
  uint uVar17;
  TParticles<float,3> *this_00;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStackY_288 [32];
  float local_228 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_220;
  TVector<float,3> *local_218;
  TVector<float,3> *local_210;
  float *local_208;
  FGeomGJKHelperSIMD local_200;
  FGeomGJKHelperSIMD local_1e8;
  FGeomGJKHelperSIMD local_1d0;
  FGeomGJKHelperSIMD local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar2 = param_1->Payload;
  lVar18 = (longlong)(int)uVar2;
  pTVar3 = this->Elements;
  this_00 = &this->TriMesh->MParticles;
  fVar39 = (float)*(double *)&this->TriMeshScale;
  fVar41 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  uVar17 = ~uVar2 >> 0x1f;
  fVar22 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  local_208 = param_2;
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_218 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar18 * 0xc));
  pTVar3 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_210 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar18 * 0xc + 4));
  local_220 = this->Elements;
  uVar16 = 0;
  if ((int)uVar2 < local_220->ArrayNum) {
    uVar16 = uVar17;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_220->AllocatorInstance).Data + lVar18 * 0xc + 8));
  pfVar10 = local_208;
  bVar11 = false;
  fVar33 = (float)*(undefined8 *)local_218 * fVar39;
  fVar35 = SUB124(*local_218,4) * fVar41;
  local_a8._0_8_ = CONCAT44(fVar35,fVar33);
  local_a8._8_4_ = SUB124(*local_218,8) * fVar22;
  local_a8._12_4_ = 0;
  fVar36 = (float)*(undefined8 *)local_210 * fVar39;
  fVar37 = (float)((ulonglong)*(undefined8 *)local_210 >> 0x20) * fVar41;
  fVar38 = *(float *)&local_210->field_0x8 * fVar22;
  fVar39 = (float)*(undefined8 *)pTVar15 * fVar39;
  fVar41 = (float)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) * fVar41;
  fVar22 = *(float *)&pTVar15->field_0x8 * fVar22;
  local_98._4_4_ = fVar37;
  local_98._0_4_ = fVar36;
  local_98._8_4_ = fVar38;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar41;
  local_88._0_4_ = fVar39;
  local_88._8_4_ = fVar22;
  local_88._12_4_ = 0;
  fVar40 = (fVar41 - fVar35) * (fVar36 - fVar33) - (fVar37 - fVar35) * (fVar39 - fVar33);
  fVar42 = (fVar22 - local_a8._8_4_) * (fVar37 - fVar35) -
           (fVar38 - local_a8._8_4_) * (fVar41 - fVar35);
  fVar43 = (fVar39 - fVar33) * (fVar38 - local_a8._8_4_) -
           (fVar36 - fVar33) * (fVar22 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar23 = fVar43 * fVar43 + fVar42 * fVar42;
    fVar26 = fVar42 * fVar42 + fVar43 * fVar43;
    fVar27 = fVar40 * fVar40 + 0.0;
    fVar28 = fVar40 * fVar40 + 0.0;
    auVar20._0_4_ = fVar27 + fVar23;
    auVar20._4_4_ = fVar28 + fVar26;
    auVar20._8_4_ = fVar23 + fVar27;
    auVar20._12_4_ = fVar26 + fVar28;
    auVar20 = sqrtps(auVar20,auVar20);
    auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar20);
    fVar23 = auVar20._4_4_ * fVar43 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar20._0_4_ * fVar42 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar20._8_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar26 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar27 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar28 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar23 = fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar31._4_4_ = -(uint)(_UNK_1506895e4 < fVar27);
    auVar31._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar26);
    auVar31._8_4_ = -(uint)(_UNK_1506895e8 < fVar28);
    auVar31._12_4_ = -(uint)(_UNK_1506895ec < fVar23);
    iVar13 = movmskps((int)pTVar15,auVar31);
    if (iVar13 != 0) {
      return true;
    }
    auVar29._4_4_ = -(uint)(fVar27 < _UNK_150b28874);
    auVar29._0_4_ = -(uint)(fVar26 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar29._8_4_ = -(uint)(fVar28 < _UNK_150b28878);
    auVar29._12_4_ = -(uint)(fVar23 < _UNK_150b2887c);
    iVar13 = movmskps(0,auVar29);
    if (iVar13 != 0) {
      bVar19 = true;
    }
    else {
      auVar30._8_4_ = local_a8._8_4_;
      auVar30._0_8_ = local_a8._0_8_;
      auVar30._12_4_ = 0;
      auVar6._4_4_ = fVar37;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar38;
      auVar6._12_4_ = 0;
      auVar20 = maxps(auVar30,auVar6);
      auVar24._8_4_ = local_a8._8_4_;
      auVar24._0_8_ = local_a8._0_8_;
      auVar24._12_4_ = 0;
      auVar8._4_4_ = fVar41;
      auVar8._0_4_ = fVar39;
      auVar8._8_4_ = fVar22;
      auVar8._12_4_ = 0;
      auVar31 = maxps(auVar20,auVar8);
      auVar7._4_4_ = fVar37;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = 0;
      auVar20 = minps(auVar24,auVar7);
      auVar32._4_4_ = -(uint)(auVar31._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar32._0_4_ = -(uint)(auVar31._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar32._8_4_ = -(uint)(auVar31._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar32._12_4_ = -(uint)(auVar31._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar9._4_4_ = fVar41;
      auVar9._0_4_ = fVar39;
      auVar9._8_4_ = fVar22;
      auVar9._12_4_ = 0;
      auVar20 = minps(auVar20,auVar9);
      auVar21._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar20._4_4_);
      auVar21._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar20._0_4_);
      auVar21._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar20._8_4_);
      auVar21._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar20._12_4_);
      iVar14 = movmskps(0,auVar32 | auVar21);
      bVar19 = iVar14 == 0;
    }
    bVar11 = iVar13 == 0;
    if (!bVar19) {
      return true;
    }
  }
  pTVar4 = this->QueryGeom;
  auVar34._0_4_ = (uint)(fVar33 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar34._4_4_ = (uint)(fVar35 - fVar37) & _UNK_15061cc74;
  auVar34._8_4_ = (uint)(local_a8._8_4_ - fVar38) & _UNK_15061cc78;
  auVar34._12_4_ = 0;
  fVar33 = *local_208 * this->LengthScale;
  auVar25._0_4_ = (uint)(fVar36 - fVar39) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar25._4_4_ = (uint)(fVar37 - fVar41) & _UNK_15061cc74;
  auVar25._8_4_ = (uint)(fVar38 - fVar22) & _UNK_15061cc78;
  auVar25._12_4_ = 0;
  auVar20 = maxps(auVar34,auVar25);
  if (auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + auVar20._8_4_ * auVar20._8_4_
      <= __real_501502f9) {
    local_1d0.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_1d0.Radius = 0.0;
    }
    else {
      local_1d0.Radius = *(float *)&pTVar4->_padding_;
    }
    local_1d0.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
    local_1b8.Geometry = local_a8;
    local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b8.Margin = 0.0;
    local_1b8.Radius = 0.0;
    local_1d0.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b8,&local_1d0,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar33,local_228,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_200.Margin = *(float *)&pTVar4->_padding_;
    if (*(float *)&((pTVar4->MObject).Reference)->_padding_ <= 0.0) {
      local_200.Radius = 0.0;
    }
    else {
      local_200.Radius = *(float *)&pTVar4->_padding_;
    }
    local_200.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
    local_1e8.Geometry = local_a8;
    local_1e8.Margin = 0.0;
    local_1e8.Radius = 0.0;
    local_1e8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_200.Geometry = pTVar4;
    bVar19 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e8,&local_200,&local_108,&local_128,&local_148,fVar33,local_228,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar19 != false) && ((local_228[0] <= 0.0 || (!bVar11)))) {
    pfVar1 = &this->OutTime;
    if (local_228[0] < this->LengthScale * *pfVar1) {
      local_188 = (double)(this->OutNormalSimd).m128_f32[0];
      local_180 = (double)(this->OutNormalSimd).m128_f32[1];
      local_178 = (double)(this->OutNormalSimd).m128_f32[2];
      local_1a0 = (double)(this->OutPositionSimd).m128_f32[0];
      local_198 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_190 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_188,(TVector<double,3> *)&local_1a0,
                 this->LengthScale,local_228[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar42;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar43;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar40;
      if (0.0 < local_228[0]) {
        *pfVar10 = *pfVar1;
      }
      else {
        *pfVar10 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edcb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>::
VisitSweep(FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_210->AllocatorInstance).Data + lVar16 * 6)
                        );
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_210->AllocatorInstance).Data + lVar16 * 6 + 2));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_210->AllocatorInstance).Data + lVar16 * 6 + 4));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  fVar21 = *param_2 * this->LengthScale;
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar21,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar21,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edd1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 4));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 8));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  fVar21 = *param_2 * this->LengthScale;
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar21,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Func =
         FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar21,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edd810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TSphere<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_210->AllocatorInstance).Data + lVar16 * 6)
                        );
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_210->AllocatorInstance).Data + lVar16 * 6 + 2));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_210->AllocatorInstance).Data + lVar16 * 6 + 4));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Radius = *(float *)&pTVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,*param_2 * this->LengthScale,local_218,
                        &this->OutPositionSimd,&this->OutNormalSimd,this->bComputeMTD,
                        &GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Radius = *(float *)&pTVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,
                        *param_2 * this->LengthScale,local_218,&local_e8,&local_c8,this->bComputeMTD
                        ,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edde60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::TSphere<double,3>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  TSphere<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 4));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 8));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pTVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pTVar3->_padding_;
    local_1c8.Radius = *(float *)&pTVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,*param_2 * this->LengthScale,local_218,
                        &this->OutPositionSimd,&this->OutNormalSimd,this->bComputeMTD,
                        &GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pTVar3->_padding_;
    local_1f8.Radius = *(float *)&pTVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pTVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,
                        *param_2 * this->LengthScale,local_218,&local_e8,&local_c8,this->bComputeMTD
                        ,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143ede4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::FCapsule,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  FCapsule *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_210->AllocatorInstance).Data + lVar16 * 6)
                        );
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_210->AllocatorInstance).Data + lVar16 * 6 + 2));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_210->AllocatorInstance).Data + lVar16 * 6 + 4));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pFVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pFVar3->_padding_;
    local_1c8.Radius = *(float *)&pFVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,*param_2 * this->LengthScale,local_218,
                        &this->OutPositionSimd,&this->OutNormalSimd,this->bComputeMTD,
                        &GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pFVar3->_padding_;
    local_1f8.Radius = *(float *)&pFVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,
                        *param_2 * this->LengthScale,local_218,&local_e8,&local_c8,this->bComputeMTD
                        ,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edeb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FCapsule,int>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::FCapsule,int> *this,TSpatialVisitorData<int> *param_1,
          float *param_2)

{
  float *pfVar1;
  uint uVar2;
  FCapsule *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 4));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 8));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pFVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pFVar3->_padding_;
    local_1c8.Radius = *(float *)&pFVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,*param_2 * this->LengthScale,local_218,
                        &this->OutPositionSimd,&this->OutNormalSimd,this->bComputeMTD,
                        &GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pFVar3->_padding_;
    local_1f8.Radius = *(float *)&pFVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,
                        *param_2 * this->LengthScale,local_218,&local_e8,&local_c8,this->bComputeMTD
                        ,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edf150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::FConvex,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  FConvex *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_210->AllocatorInstance).Data + lVar16 * 6)
                        );
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_210->AllocatorInstance).Data + lVar16 * 6 + 2));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_210->AllocatorInstance).Data + lVar16 * 6 + 4));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pFVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  fVar20 = this->LengthScale * *param_2;
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pFVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar20,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pFVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar20,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

// VisitSweep @ 143edf7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FTriangleMeshSweepVisitor<Chaos::FConvex,int>::VisitSweep
          (FTriangleMeshSweepVisitor<Chaos::FConvex,int> *this,TSpatialVisitorData<int> *param_1,
          float *param_2)

{
  float *pfVar1;
  uint uVar2;
  FConvex *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_278 [32];
  float local_218 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_210;
  TVector<float,3> *local_208;
  TVector<float,3> *local_200;
  FGeomGJKHelperSIMD local_1f8;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double,3> local_168;
  VectorRegister4Double local_148;
  VectorRegister4Double local_128;
  VectorRegister4Double local_108;
  VectorRegister4Double local_e8;
  VectorRegister4Double local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_210 = this->Elements;
  uVar2 = param_1->Payload;
  lVar16 = (longlong)(int)uVar2;
  fVar37 = (float)*(double *)&this->TriMeshScale;
  fVar39 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_200 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 4));
  local_210 = this->Elements;
  uVar14 = 0;
  if ((int)uVar2 < local_210->ArrayNum) {
    uVar14 = uVar15;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_210->AllocatorInstance).Data + lVar16 * 0xc + 8));
  bVar9 = false;
  fVar31 = (float)*(undefined8 *)local_208 * fVar37;
  fVar33 = SUB124(*local_208,4) * fVar39;
  local_a8._0_8_ = CONCAT44(fVar33,fVar31);
  local_a8._8_4_ = SUB124(*local_208,8) * fVar20;
  local_a8._12_4_ = 0;
  fVar34 = (float)*(undefined8 *)local_200 * fVar37;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_200 >> 0x20) * fVar39;
  fVar36 = *(float *)&local_200->field_0x8 * fVar20;
  fVar37 = (float)*(undefined8 *)pTVar13 * fVar37;
  fVar39 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar39;
  fVar20 = *(float *)&pTVar13->field_0x8 * fVar20;
  local_98._4_4_ = fVar35;
  local_98._0_4_ = fVar34;
  local_98._8_4_ = fVar36;
  local_98._12_4_ = 0;
  local_88._4_4_ = fVar39;
  local_88._0_4_ = fVar37;
  local_88._8_4_ = fVar20;
  local_88._12_4_ = 0;
  fVar38 = (fVar39 - fVar33) * (fVar34 - fVar31) - (fVar35 - fVar33) * (fVar37 - fVar31);
  fVar40 = (fVar20 - local_a8._8_4_) * (fVar35 - fVar33) -
           (fVar36 - local_a8._8_4_) * (fVar39 - fVar33);
  fVar41 = (fVar37 - fVar31) * (fVar36 - local_a8._8_4_) -
           (fVar34 - fVar31) * (fVar20 - local_a8._8_4_);
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar24 = fVar40 * fVar40 + fVar41 * fVar41;
    fVar25 = fVar38 * fVar38 + 0.0;
    fVar26 = fVar38 * fVar38 + 0.0;
    auVar18._0_4_ = fVar25 + fVar21;
    auVar18._4_4_ = fVar26 + fVar24;
    auVar18._8_4_ = fVar21 + fVar25;
    auVar18._12_4_ = fVar24 + fVar26;
    auVar18 = sqrtps(auVar18,auVar18);
    auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
    fVar21 = auVar18._4_4_ * fVar41 * (this->VectorScaledDirNormalized).m128_f32[1] +
             auVar18._0_4_ * fVar40 * (this->VectorScaledDirNormalized).m128_f32[0] +
             auVar18._8_4_ * fVar38 * (this->VectorScaledDirNormalized).m128_f32[2];
    fVar24 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0];
    fVar25 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1];
    fVar26 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2];
    fVar21 = fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3];
    auVar29._4_4_ = -(uint)(_UNK_1506895e4 < fVar25);
    auVar29._0_4_ = -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 < fVar24);
    auVar29._8_4_ = -(uint)(_UNK_1506895e8 < fVar26);
    auVar29._12_4_ = -(uint)(_UNK_1506895ec < fVar21);
    iVar11 = movmskps((int)pTVar13,auVar29);
    if (iVar11 != 0) {
      return true;
    }
    auVar27._4_4_ = -(uint)(fVar25 < _UNK_150b28874);
    auVar27._0_4_ = -(uint)(fVar24 < ___xmm_b8d1b717b8d1b717b8d1b717b8d1b717);
    auVar27._8_4_ = -(uint)(fVar26 < _UNK_150b28878);
    auVar27._12_4_ = -(uint)(fVar21 < _UNK_150b2887c);
    iVar11 = movmskps(0,auVar27);
    if (iVar11 != 0) {
      bVar17 = true;
    }
    else {
      auVar28._8_4_ = local_a8._8_4_;
      auVar28._0_8_ = local_a8._0_8_;
      auVar28._12_4_ = 0;
      auVar5._4_4_ = fVar35;
      auVar5._0_4_ = fVar34;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = 0;
      auVar18 = maxps(auVar28,auVar5);
      auVar22._8_4_ = local_a8._8_4_;
      auVar22._0_8_ = local_a8._0_8_;
      auVar22._12_4_ = 0;
      auVar7._4_4_ = fVar39;
      auVar7._0_4_ = fVar37;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = 0;
      auVar29 = maxps(auVar18,auVar7);
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = 0;
      auVar18 = minps(auVar22,auVar6);
      auVar30._4_4_ = -(uint)(auVar29._4_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[1]);
      auVar30._0_4_ = -(uint)(auVar29._0_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[0]);
      auVar30._8_4_ = -(uint)(auVar29._8_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[2]);
      auVar30._12_4_ = -(uint)(auVar29._12_4_ < (this->GeometryAABBTriangleSpace).Min.m128_f32[3]);
      auVar8._4_4_ = fVar39;
      auVar8._0_4_ = fVar37;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = 0;
      auVar18 = minps(auVar18,auVar8);
      auVar19._4_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[1] < auVar18._4_4_);
      auVar19._0_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[0] < auVar18._0_4_);
      auVar19._8_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[2] < auVar18._8_4_);
      auVar19._12_4_ = -(uint)((this->GeometryAABBTriangleSpace).Max.m128_f32[3] < auVar18._12_4_);
      iVar12 = movmskps(0,auVar30 | auVar19);
      bVar17 = iVar12 == 0;
    }
    bVar9 = iVar11 == 0;
    if (!bVar17) {
      return true;
    }
  }
  pFVar3 = this->QueryGeom;
  auVar32._0_4_ = (uint)(fVar31 - fVar34) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar32._4_4_ = (uint)(fVar33 - fVar35) & _UNK_15061cc74;
  auVar32._8_4_ = (uint)(local_a8._8_4_ - fVar36) & _UNK_15061cc78;
  auVar32._12_4_ = 0;
  auVar23._0_4_ = (uint)(fVar34 - fVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar23._4_4_ = (uint)(fVar35 - fVar39) & _UNK_15061cc74;
  auVar23._8_4_ = (uint)(fVar36 - fVar20) & _UNK_15061cc78;
  auVar23._12_4_ = 0;
  auVar18 = maxps(auVar32,auVar23);
  fVar20 = this->LengthScale * *param_2;
  if (auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + auVar18._8_4_ * auVar18._8_4_
      <= __real_501502f9) {
    local_1c8.Margin = *(float *)&pFVar3->_padding_;
    local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
    local_1b0.Geometry = local_a8;
    local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1c8.Radius = 0.0;
    local_1b0.Margin = 0.0;
    local_1b0.Radius = 0.0;
    local_1c8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<__m128,1>
                       (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,
                        &this->RayDirSimd,fVar20,local_218,&this->OutPositionSimd,
                        &this->OutNormalSimd,this->bComputeMTD,&GlobalVectorConstants::Float1000);
  }
  else {
    local_148.XY.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[0];
    local_148.XY.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[1];
    local_148.ZW.m128d_f64[0] = (double)(this->RayDirSimd).m128_f32[2];
    local_148.ZW.m128d_f64[1] = (double)(this->RayDirSimd).m128_f32[3];
    local_128.XY.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[0];
    local_128.XY.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[1];
    local_128.ZW.m128d_f64[0] = (double)(this->TranslationSimd).m128_f32[2];
    local_128.ZW.m128d_f64[1] = (double)(this->TranslationSimd).m128_f32[3];
    local_108.XY.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[0];
    local_108.XY.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[1];
    local_108.ZW.m128d_f64[0] = (double)(this->RotationSimd).m128_f32[2];
    local_108.ZW.m128d_f64[1] = (double)(this->RotationSimd).m128_f32[3];
    local_1f8.Margin = *(float *)&pFVar3->_padding_;
    local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
    local_1e0.Geometry = local_a8;
    local_1e0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_1f8.Radius = 0.0;
    local_1e0.Margin = 0.0;
    local_1e0.Radius = 0.0;
    local_1f8.Geometry = pFVar3;
    bVar17 = GJKRaycast2ImplSimd<VectorRegister4Double,1>
                       (&local_1e0,&local_1f8,&local_108,&local_128,&local_148,fVar20,local_218,
                        &local_e8,&local_c8,this->bComputeMTD,&GlobalVectorConstants::Double1000);
    (this->OutPositionSimd).m128_u64[0] =
         CONCAT44((float)local_e8.XY.m128d_f64[1],(float)local_e8.XY.m128d_f64[0]);
    (this->OutPositionSimd).m128_u64[1] =
         CONCAT44((float)local_e8.ZW.m128d_f64[1],(float)local_e8.ZW.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[0] =
         CONCAT44((float)local_c8.XY.m128d_f64[1],(float)local_c8.XY.m128d_f64[0]);
    (this->OutNormalSimd).m128_u64[1] =
         CONCAT44((float)local_c8.ZW.m128d_f64[1],(float)local_c8.ZW.m128d_f64[0]);
  }
  if ((bVar17 != false) && ((local_218[0] <= 0.0 || (!bVar9)))) {
    pfVar1 = &this->OutTime;
    if (local_218[0] < this->LengthScale * *pfVar1) {
      local_180 = (double)(this->OutNormalSimd).m128_f32[0];
      local_178 = (double)(this->OutNormalSimd).m128_f32[1];
      local_170 = (double)(this->OutNormalSimd).m128_f32[2];
      local_198 = (double)(this->OutPositionSimd).m128_f32[0];
      local_190 = (double)(this->OutPositionSimd).m128_f32[1];
      local_168._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_168._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      local_188 = (double)(this->OutPositionSimd).m128_f32[2];
      local_168._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      TransformSweepOutputsHelper
                (&local_168,(TVector<double,3> *)&local_180,(TVector<double,3> *)&local_198,
                 this->LengthScale,local_218[0],&this->OutNormal,&this->OutPosition,pfVar1);
      this->OutFaceIndex = uVar2;
      *(double *)&this->OutFaceNormal = (double)fVar40;
      *(double *)&(this->OutFaceNormal).field_0x8 = (double)fVar41;
      *(double *)&(this->OutFaceNormal).field_0x10 = (double)fVar38;
      if (0.0 < local_218[0]) {
        *param_2 = *pfVar1;
      }
      else {
        *param_2 = 0.0001;
      }
    }
  }
  return true;
}

