// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FConstPCGPointValueRanges @ 1497de300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FConstPCGPointValueRanges * __thiscall
FConstPCGPointValueRanges::FConstPCGPointValueRanges
          (FConstPCGPointValueRanges *this,UPCGBasePointData *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  long64 lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (this->TransformRange).ElementView.FirstElementPtr = (TTransform<double> *)0x0;
  (this->TransformRange).ElementView.BytesBetweenElements = 0;
  (this->TransformRange).ElementView.NumElements = 0;
  (this->TransformRange).NumElements = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->TransformRange).StubValue.Scale3D.ZW.m128d_f64 = auVar9;
  (this->DensityRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->DensityRange).ElementView.BytesBetweenElements = 0;
  (this->DensityRange).ElementView.NumElements = 0;
  (this->DensityRange).NumElements = 0;
  (this->SteepnessRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->SteepnessRange).ElementView.BytesBetweenElements = 0;
  (this->SteepnessRange).ElementView.NumElements = 0;
  (this->SteepnessRange).NumElements = 0;
  (this->BoundsMinRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMinRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMinRange).ElementView.NumElements = 0;
  (this->BoundsMinRange).NumElements = 0;
  (this->BoundsMaxRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMaxRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMaxRange).ElementView.NumElements = 0;
  (this->BoundsMaxRange).NumElements = 0;
  (this->ColorRange).ElementView.FirstElementPtr = (TVector4<double> *)0x0;
  (this->ColorRange).ElementView.BytesBetweenElements = 0;
  (this->ColorRange).ElementView.NumElements = 0;
  (this->ColorRange).NumElements = 0;
  (this->ColorRange).StubValue.field0_0x0._s_0.X = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Y = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Z = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.W = 1.0;
  (this->SeedRange).ElementView.FirstElementPtr = (int *)0x0;
  (this->SeedRange).ElementView.BytesBetweenElements = 0;
  (this->SeedRange).ElementView.NumElements = 0;
  (this->SeedRange).NumElements = 0;
  (this->MetadataEntryRange).ElementView.FirstElementPtr = (long64 *)0x0;
  (this->MetadataEntryRange).ElementView.BytesBetweenElements = 0;
  (this->MetadataEntryRange).ElementView.NumElements = 0;
  (this->MetadataEntryRange).NumElements = 0;
  puVar18 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x500))(param_1,local_98);
  uVar1 = puVar18[1];
  (this->TransformRange).ElementView.FirstElementPtr = (TTransform<double> *)*puVar18;
  (this->TransformRange).ElementView.BytesBetweenElements = (int)uVar1;
  (this->TransformRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
  lVar15 = puVar18[3];
  *(undefined8 *)&(this->TransformRange).NumElements = puVar18[2];
  (this->TransformRange)._padding_ = lVar15;
  dVar16 = (double)puVar18[5];
  (this->TransformRange).StubValue.Rotation.XY.m128d_f64[0] = (double)puVar18[4];
  (this->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = dVar16;
  dVar16 = (double)puVar18[7];
  (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] = (double)puVar18[6];
  (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (double)puVar18[9];
  (this->TransformRange).StubValue.Translation.XY.m128d_f64[0] = (double)puVar18[8];
  (this->TransformRange).StubValue.Translation.XY.m128d_f64[1] = dVar16;
  dVar16 = (double)puVar18[0xb];
  (this->TransformRange).StubValue.Translation.ZW.m128d_f64[0] = (double)puVar18[10];
  (this->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = dVar16;
  uVar10 = *(undefined4 *)((longlong)puVar18 + 100);
  uVar11 = *(undefined4 *)(puVar18 + 0xd);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x6c);
  *(undefined4 *)(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 =
       *(undefined4 *)(puVar18 + 0xc);
  *(undefined4 *)((longlong)(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 + 4) = uVar10;
  *(undefined4 *)((this->TransformRange).StubValue.Scale3D.XY.m128d_f64 + 1) = uVar11;
  *(undefined4 *)((longlong)(this->TransformRange).StubValue.Scale3D.XY.m128d_f64 + 0xc) = uVar12;
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x74);
  uVar11 = *(undefined4 *)(puVar18 + 0xf);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x7c);
  *(undefined4 *)(this->TransformRange).StubValue.Scale3D.ZW.m128d_f64 =
       *(undefined4 *)(puVar18 + 0xe);
  *(undefined4 *)((longlong)(this->TransformRange).StubValue.Scale3D.ZW.m128d_f64 + 4) = uVar10;
  *(undefined4 *)((this->TransformRange).StubValue.Scale3D.ZW.m128d_f64 + 1) = uVar11;
  *(undefined4 *)((longlong)(this->TransformRange).StubValue.Scale3D.ZW.m128d_f64 + 0xc) = uVar12;
  puVar19 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x508))(param_1,local_98);
  uVar10 = puVar19[1];
  iVar13 = puVar19[2];
  iVar14 = puVar19[3];
  *(undefined4 *)&(this->DensityRange).ElementView.FirstElementPtr = *puVar19;
  *(undefined4 *)((longlong)&(this->DensityRange).ElementView.FirstElementPtr + 4) = uVar10;
  (this->DensityRange).ElementView.BytesBetweenElements = iVar13;
  (this->DensityRange).ElementView.NumElements = iVar14;
  uVar1 = *(undefined8 *)(puVar19 + 4);
  (this->DensityRange).NumElements = (int)uVar1;
  (this->DensityRange).StubValue = (float)(int)((ulonglong)uVar1 >> 0x20);
  puVar19 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x528))(param_1,local_98);
  uVar10 = puVar19[1];
  iVar13 = puVar19[2];
  iVar14 = puVar19[3];
  *(undefined4 *)&(this->SteepnessRange).ElementView.FirstElementPtr = *puVar19;
  *(undefined4 *)((longlong)&(this->SteepnessRange).ElementView.FirstElementPtr + 4) = uVar10;
  (this->SteepnessRange).ElementView.BytesBetweenElements = iVar13;
  (this->SteepnessRange).ElementView.NumElements = iVar14;
  uVar1 = *(undefined8 *)(puVar19 + 4);
  (this->SteepnessRange).NumElements = (int)uVar1;
  (this->SteepnessRange).StubValue = (float)(int)((ulonglong)uVar1 >> 0x20);
  puVar18 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x510))(param_1,local_98);
  uVar1 = puVar18[1];
  (this->BoundsMinRange).ElementView.FirstElementPtr = (TVector<double> *)*puVar18;
  (this->BoundsMinRange).ElementView.BytesBetweenElements = (int)uVar1;
  (this->BoundsMinRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x14);
  uVar11 = *(undefined4 *)(puVar18 + 3);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x1c);
  (this->BoundsMinRange).NumElements = *(int *)(puVar18 + 2);
  *(undefined4 *)&(this->BoundsMinRange).field_0x14 = uVar10;
  *(undefined4 *)&(this->BoundsMinRange).StubValue.field0_0x0 = uVar11;
  *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 4) = uVar12;
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x24);
  uVar11 = *(undefined4 *)(puVar18 + 5);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x2c);
  *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 8) =
       *(undefined4 *)(puVar18 + 4);
  *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 0xc) = uVar10;
  *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 0x10) = uVar11;
  *(undefined4 *)((longlong)&(this->BoundsMinRange).StubValue.field0_0x0 + 0x14) = uVar12;
  puVar18 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x518))(param_1,local_98);
  uVar1 = puVar18[1];
  (this->BoundsMaxRange).ElementView.FirstElementPtr = (TVector<double> *)*puVar18;
  (this->BoundsMaxRange).ElementView.BytesBetweenElements = (int)uVar1;
  (this->BoundsMaxRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x14);
  uVar11 = *(undefined4 *)(puVar18 + 3);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x1c);
  (this->BoundsMaxRange).NumElements = *(int *)(puVar18 + 2);
  *(undefined4 *)&(this->BoundsMaxRange).field_0x14 = uVar10;
  *(undefined4 *)&(this->BoundsMaxRange).StubValue.field0_0x0 = uVar11;
  *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 4) = uVar12;
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x24);
  uVar11 = *(undefined4 *)(puVar18 + 5);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x2c);
  *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 8) =
       *(undefined4 *)(puVar18 + 4);
  *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 0xc) = uVar10;
  *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 0x10) = uVar11;
  *(undefined4 *)((longlong)&(this->BoundsMaxRange).StubValue.field0_0x0 + 0x14) = uVar12;
  puVar18 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x520))(param_1,local_98);
  uVar1 = puVar18[1];
  (this->ColorRange).ElementView.FirstElementPtr = (TVector4<double> *)*puVar18;
  (this->ColorRange).ElementView.BytesBetweenElements = (int)uVar1;
  (this->ColorRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
  lVar15 = puVar18[3];
  *(undefined8 *)&(this->ColorRange).NumElements = puVar18[2];
  (this->ColorRange)._padding_ = lVar15;
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x24);
  uVar11 = *(undefined4 *)(puVar18 + 5);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x2c);
  *(undefined4 *)&(this->ColorRange).StubValue.field0_0x0 = *(undefined4 *)(puVar18 + 4);
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 4) = uVar10;
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 8) = uVar11;
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 0xc) = uVar12;
  uVar10 = *(undefined4 *)((longlong)puVar18 + 0x34);
  uVar11 = *(undefined4 *)(puVar18 + 7);
  uVar12 = *(undefined4 *)((longlong)puVar18 + 0x3c);
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 0x10) =
       *(undefined4 *)(puVar18 + 6);
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 0x14) = uVar10;
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 0x18) = uVar11;
  *(undefined4 *)((longlong)&(this->ColorRange).StubValue.field0_0x0 + 0x1c) = uVar12;
  puVar19 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x530))(param_1,local_98);
  uVar10 = puVar19[1];
  iVar13 = puVar19[2];
  iVar14 = puVar19[3];
  *(undefined4 *)&(this->SeedRange).ElementView.FirstElementPtr = *puVar19;
  *(undefined4 *)((longlong)&(this->SeedRange).ElementView.FirstElementPtr + 4) = uVar10;
  (this->SeedRange).ElementView.BytesBetweenElements = iVar13;
  (this->SeedRange).ElementView.NumElements = iVar14;
  uVar1 = *(undefined8 *)(puVar19 + 4);
  (this->SeedRange).NumElements = (int)uVar1;
  (this->SeedRange).StubValue = (int)((ulonglong)uVar1 >> 0x20);
  puVar18 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x538))(param_1,local_98);
  uVar1 = puVar18[1];
  (this->MetadataEntryRange).ElementView.FirstElementPtr = (long64 *)*puVar18;
  (this->MetadataEntryRange).ElementView.BytesBetweenElements = (int)uVar1;
  (this->MetadataEntryRange).ElementView.NumElements = (int)((ulonglong)uVar1 >> 0x20);
  lVar17 = puVar18[3];
  *(undefined8 *)&(this->MetadataEntryRange).NumElements = puVar18[2];
  (this->MetadataEntryRange).StubValue = lVar17;
  return this;
}

// GetPoint @ 1499fa8b0

FPCGPoint * __thiscall
FConstPCGPointValueRanges::GetPoint
          (FConstPCGPointValueRanges *this,FPCGPoint *__return_storage_ptr__,int param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  int *piVar4;
  float *pfVar5;
  TTransform<double> *pTVar6;
  TVector<double> *pTVar7;
  TVector4<double> *pTVar8;
  long64 *plVar9;
  
  piVar4 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                     (&this->SeedRange,param_1);
  iVar2 = *piVar4;
  pfVar5 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                     (&this->DensityRange,param_1);
  fVar1 = *pfVar5;
  pTVar6 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
           ::GetElement(&this->TransformRange,param_1);
  FPCGPoint::FPCGPoint(__return_storage_ptr__,pTVar6,fVar1,iVar2);
  pTVar7 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
           ::GetElement(&this->BoundsMinRange,param_1);
  dVar3 = (pTVar7->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  pTVar7 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
           ::GetElement(&this->BoundsMaxRange,param_1);
  dVar3 = (pTVar7->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  pfVar5 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                     (&this->SteepnessRange,param_1);
  __return_storage_ptr__->Steepness = *pfVar5;
  pTVar8 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
           ::GetElement(&this->ColorRange,param_1);
  dVar3 = (pTVar8->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Color).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Color).field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar8->field0_0x0)._s_0.W;
  (__return_storage_ptr__->Color).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Color).field0_0x0._s_0.W = dVar3;
  plVar9 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                     (&this->MetadataEntryRange,param_1);
  __return_storage_ptr__->MetadataEntry = *plVar9;
  return __return_storage_ptr__;
}

// FConstPCGPointValueRanges @ 149be5ab0

/* WARNING: Type propagation algorithm not settling */

FConstPCGPointValueRanges * __thiscall
FConstPCGPointValueRanges::FConstPCGPointValueRanges(FConstPCGPointValueRanges *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->TransformRange).ElementView.FirstElementPtr = (TTransform<double> *)0x0;
  (this->TransformRange).ElementView.BytesBetweenElements = 0;
  (this->TransformRange).ElementView.NumElements = 0;
  (this->TransformRange).NumElements = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TransformRange).StubValue.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TransformRange).StubValue.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformRange).StubValue.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TransformRange).StubValue.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TransformRange).StubValue.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformRange).StubValue.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformRange).StubValue.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TransformRange).StubValue.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TransformRange).StubValue.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformRange).StubValue.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformRange).StubValue.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->DensityRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->DensityRange).ElementView.BytesBetweenElements = 0;
  (this->DensityRange).ElementView.NumElements = 0;
  (this->DensityRange).NumElements = 0;
  (this->SteepnessRange).ElementView.FirstElementPtr = (float *)0x0;
  (this->SteepnessRange).ElementView.BytesBetweenElements = 0;
  (this->SteepnessRange).ElementView.NumElements = 0;
  (this->SteepnessRange).NumElements = 0;
  (this->BoundsMinRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMinRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMinRange).ElementView.NumElements = 0;
  (this->BoundsMinRange).NumElements = 0;
  (this->BoundsMaxRange).ElementView.FirstElementPtr = (TVector<double> *)0x0;
  (this->BoundsMaxRange).ElementView.BytesBetweenElements = 0;
  (this->BoundsMaxRange).ElementView.NumElements = 0;
  (this->BoundsMaxRange).NumElements = 0;
  (this->ColorRange).ElementView.FirstElementPtr = (TVector4<double> *)0x0;
  (this->ColorRange).ElementView.BytesBetweenElements = 0;
  (this->ColorRange).ElementView.NumElements = 0;
  (this->ColorRange).StubValue.field0_0x0._s_0.W = 1.0;
  (this->ColorRange).NumElements = 0;
  (this->ColorRange).StubValue.field0_0x0._s_0.X = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Y = 0.0;
  (this->ColorRange).StubValue.field0_0x0._s_0.Z = 0.0;
  (this->SeedRange).ElementView.FirstElementPtr = (int *)0x0;
  (this->SeedRange).ElementView.BytesBetweenElements = 0;
  (this->SeedRange).ElementView.NumElements = 0;
  (this->SeedRange).NumElements = 0;
  (this->MetadataEntryRange).ElementView.FirstElementPtr = (long64 *)0x0;
  (this->MetadataEntryRange).ElementView.BytesBetweenElements = 0;
  (this->MetadataEntryRange).ElementView.NumElements = 0;
  (this->MetadataEntryRange).NumElements = 0;
  return this;
}

