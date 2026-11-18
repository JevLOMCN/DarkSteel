// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 11

// EvaluateSample<1> @ 14c86c0f0

void __cdecl
UE::Geometry::FMeshPropertyMapEvaluator::EvaluateSample<1>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  TVector4<float>_u_0 local_18;
  
  SampleFunction<1>(param_3,(TVector4<float> *)&local_18._s_0,param_2);
  pfVar1 = *param_1;
  *(undefined8 *)pfVar1 = local_18._0_8_;
  *(undefined8 *)(pfVar1 + 2) = local_18._8_8_;
  *param_1 = pfVar1 + 4;
  return;
}

// EvaluateSample<0> @ 14c86c4e0

void __cdecl
UE::Geometry::FMeshPropertyMapEvaluator::EvaluateSample<0>
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  TVector4<float>_u_0 local_18;
  
  SampleFunction<0>(param_3,(TVector4<float> *)&local_18._s_0,param_2);
  pfVar1 = *param_1;
  *(undefined8 *)pfVar1 = local_18._0_8_;
  *(undefined8 *)(pfVar1 + 2) = local_18._8_8_;
  *param_1 = pfVar1 + 4;
  return;
}

// SampleFunction<1> @ 14c875ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Geometry::FMeshPropertyMapEvaluator::SampleFunction<1>
          (FMeshPropertyMapEvaluator *this,TVector4<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  TVector<double> *pTVar1;
  undefined1 auVar2 [16];
  EMeshPropertyMapType EVar3;
  void *pvVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
  *pTVar10;
  TVector<float> *pTVar11;
  TVector4<float> *pTVar12;
  undefined4 uVar13;
  TImageBuilder<UE::Math::TVector4<float>_> *this_00;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int local_res8;
  undefined8 local_res18;
  ulonglong in_stack_fffffffffffffe98;
  TVector<float>_u_0 local_158;
  TVector2<double>_u_0 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  TVector4<float>_u_0 local_118;
  double local_108;
  TVector4<float>_u_0 local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  
  EVar3 = this->Property;
  pTVar1 = &param_1->DetailBaryCoords;
  uVar7 = *(undefined8 *)((longlong)&(this->DefaultValue4f).field0_0x0 + 8);
  pvVar4 = param_1->DetailMesh;
  iVar9 = param_1->DetailTriID;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->DefaultValue4f).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
  local_res18 = param_1;
  switch(EVar3) {
  case Position:
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_138,pvVar4,iVar9,pTVar1);
    auVar2 = *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8);
    dVar16 = (this->Bounds).Min.field0_0x0._s_0.Z;
    dVar21 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar18 = (this->Bounds).Min.field0_0x0._s_0.Y;
    auVar6._4_8_ = extraout_XMM0_Qb;
    auVar6._0_4_ = auVar2._4_4_;
    auVar15._0_8_ = auVar6._0_8_ << 0x20;
    auVar15._8_4_ = auVar2._8_4_;
    auVar15._12_4_ = auVar2._12_4_;
    dVar14 = auVar15._8_8_ - dVar16;
    dVar23 = (this->Bounds).Max.field0_0x0._s_0.X - dVar21;
    if (dVar14 <= 0.0) {
      dVar14 = 0.0;
    }
    if (dVar23 <= 0.0) {
      dVar23 = 0.0;
    }
    dVar5 = auVar2._0_8_ - dVar18;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)((local_138 - dVar21) / dVar23);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)((dStack_130 - dVar18) / dVar5);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)((local_128 - dVar16) / dVar14);
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    break;
  case Normal:
    cVar8 = (**(code **)((longlong)*this->DetailSampler + 0xe8))
                      (this->DetailSampler,pvVar4,iVar9,pTVar1,&local_158);
    fVar17 = __real_3f800000;
    if (cVar8 != '\0') {
      fVar19 = SQRT(local_158._s_0.X * local_158._s_0.X + local_158._s_0.Y * local_158._s_0.Y +
                    local_158._s_0.Z * local_158._s_0.Z);
      if (fVar19 <= 0.0) {
        local_158._s_0.Y = 0.0;
        local_158._s_0.Z = 0.0;
        local_158._s_0.X = 0.0;
      }
      else {
        fVar19 = __real_3f800000 / fVar19;
        local_158._s_0.X = local_158._s_0.X * fVar19;
        local_158._s_0.Y = local_158._s_0.Y * fVar19;
        local_158._s_0.Z = local_158._s_0.Z * fVar19;
      }
      uVar28 = local_158._s_0.Z;
      uVar26 = local_158._s_0.Y;
      uVar27 = local_158._s_0.X;
      this_00 = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
      uVar13 = 0;
      local_res8 = 0;
      pTVar10 = TMapBase<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,0>_>
                ::Find(&this->DetailNormalMaps,pvVar4);
      if (pTVar10 !=
          (TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
           *)0x0) {
        this_00 = *(TImageBuilder<UE::Math::TVector4<float>_> **)pTVar10;
        uVar13 = *(undefined4 *)&pTVar10->field_0x8;
        local_res8 = *(int *)&pTVar10->field_0xc;
      }
      if (this_00 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
        (**(code **)((longlong)*this->DetailSampler + 0x100))
                  (this->DetailSampler,pvVar4,local_res18->DetailTriID,pTVar1,&local_138,&local_e8);
        (**(code **)((longlong)*this->DetailSampler + 0xf0))
                  (this->DetailSampler,pvVar4,iVar9,pTVar1,uVar13,&local_res18);
        dVar16 = (double)(float)local_res18;
        local_118._0_8_ = ___xmm_3f800000000000000000000000000000;
        local_118._8_8_ = _UNK_150689648;
        dVar21 = (double)local_res18._4_4_;
        if (0.0 <= dVar16) {
          if (__real_3ff0000000000000 <= dVar16) {
            dVar16 = __real_3ff0000000000000;
          }
        }
        else {
          dVar16 = 0.0;
        }
        dVar18 = 0.0;
        if ((0.0 <= dVar21) && (dVar18 = dVar21, __real_3ff0000000000000 <= dVar21)) {
          dVar18 = __real_3ff0000000000000;
        }
        local_148._s_0.X = (double)(this_00->Dimensions).Width * dVar16;
        local_148._s_0.Y = (double)(this_00->Dimensions).Height * dVar18;
        TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
                  (this_00,(TVector4<float> *)&local_f8._s_0,(TVector2<double> *)&local_148._s_0,
                   (TVector4<float> *)&local_118._s_0);
        fVar24 = (local_f8._s_0.X + local_f8._s_0.X) -
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
        fVar22 = (local_f8._s_0.Z + local_f8._s_0.Z) -
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
        fVar25 = (local_f8._s_0.Y + local_f8._s_0.Y) -
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
        fVar19 = fVar24;
        fVar20 = fVar22;
        if (local_res8 == 0) {
          fVar20 = (float)local_d8 * fVar25 + (float)local_128 * fVar24 + fVar22 * local_158._s_0.Z;
          fVar19 = (float)local_e8 * fVar25 + (float)local_138 * fVar24 + fVar22 * local_158._s_0.X;
          fVar25 = (float)local_e0 * fVar25 + (float)dStack_130 * fVar24 + fVar22 * local_158._s_0.Y
          ;
        }
        fVar22 = SQRT(fVar25 * fVar25 + fVar19 * fVar19 + fVar20 * fVar20);
        if (fVar22 <= 0.0) {
          uVar28 = 0.0;
          uVar26 = 0.0;
          uVar27 = 0.0;
        }
        else {
          fVar17 = fVar17 / fVar22;
          uVar26 = fVar25 * fVar17;
          uVar28 = fVar17 * fVar20;
          uVar27 = fVar19 * fVar17;
        }
      }
      fVar19 = ((float)uVar28 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) *
               __real_3f000000;
      fVar17 = ((float)uVar26 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y) *
               __real_3f000000;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           ((float)uVar27 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) * __real_3f000000
      ;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar19;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    }
    break;
  case FacetNormal:
    (**(code **)((longlong)*this->DetailSampler + 0xa0))
              (this->DetailSampler,&local_118,pvVar4,iVar9);
    fVar17 = ((float)(double)local_118._8_8_ + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y
             ) * __real_3f000000;
    fVar19 = ((float)local_108 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) *
             __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((float)(double)local_118._0_8_ + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) *
         __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar19;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    break;
  case UVPosition:
    cVar8 = (**(code **)((longlong)*this->DetailSampler + 0xf0))
                      (this->DetailSampler,pvVar4,iVar9,pTVar1,
                       in_stack_fffffffffffffe98 & 0xffffffff00000000,&local_res18);
    if (cVar8 != '\0') {
      if (0.0 <= (float)local_res18) {
        fVar17 = (float)local_res18;
        if (__real_3f800000 <= (float)local_res18) {
          fVar17 = __real_3f800000;
        }
      }
      else {
        fVar17 = 0.0;
      }
      fVar19 = 0.0;
      if ((0.0 <= local_res18._4_4_) &&
         (fVar19 = local_res18._4_4_, __real_3f800000 <= local_res18._4_4_)) {
        fVar19 = __real_3f800000;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar19;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    }
    break;
  case MaterialID:
    iVar9 = (**(code **)((longlong)*this->DetailSampler + 0xb0))(this->DetailSampler,pvVar4,iVar9);
    pTVar11 = LinearColors::SelectColor<UE::Math::TVector<float>_>
                        ((TVector<float> *)&local_158._s_0,iVar9);
    fVar17 = (pTVar11->field0_0x0)._s_0.Y;
    fVar19 = (pTVar11->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar19;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    break;
  case VertexColor:
    local_148._s_0.X = ___xmm_3f800000000000000000000000000000;
    local_148._s_0.Y = _UNK_150689648;
    cVar8 = (**(code **)((longlong)*this->DetailSampler + 0xf8))
                      (this->DetailSampler,pvVar4,iVar9,pTVar1,&local_148);
    if (cVar8 == '\0') {
      return __return_storage_ptr__;
    }
    goto LAB_14c876256;
  case PolyGroupID:
    iVar9 = (**(code **)((longlong)*this->DetailSampler + 0xb8))(this->DetailSampler,pvVar4,iVar9);
    pTVar12 = LinearColors::SelectColor<UE::Math::TVector4<float>_>
                        ((TVector4<float> *)&local_118._s_0,iVar9);
    local_148._s_0.X = (double)*(undefined8 *)&pTVar12->field0_0x0;
    local_148._s_0.Y = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
LAB_14c876256:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_148._s_0.X;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_148._s_0.Y;
  }
  return __return_storage_ptr__;
}

// SampleFunction<0> @ 14c877fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Geometry::FMeshPropertyMapEvaluator::SampleFunction<0>
          (FMeshPropertyMapEvaluator *this,TVector4<float> *__return_storage_ptr__,
          FCorrespondenceSample *param_1)

{
  TVector<double> *pTVar1;
  undefined1 auVar2 [16];
  EMeshPropertyMapType EVar3;
  void *pvVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  TVector<float> *pTVar13;
  TVector4<float> *pTVar14;
  double dVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float local_res8;
  float fStackX_c;
  ulonglong in_stack_ffffffffffffffa8;
  TVector4<float>_u_0 local_48;
  double local_38;
  
  EVar3 = this->Property;
  pTVar1 = &param_1->DetailBaryCoords;
  uVar10 = *(undefined8 *)((longlong)&(this->DefaultValue4f).field0_0x0 + 8);
  pvVar4 = param_1->DetailMesh;
  iVar12 = param_1->DetailTriID;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->DefaultValue4f).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar10;
  switch(EVar3) {
  case Position:
    (**(code **)((longlong)*this->DetailSampler + 0xe0))
              (this->DetailSampler,&local_48,pvVar4,iVar12,pTVar1);
    auVar2 = *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8);
    dVar7 = (this->Bounds).Min.field0_0x0._s_0.Z;
    dVar8 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar9 = (this->Bounds).Min.field0_0x0._s_0.Y;
    auVar6._4_8_ = extraout_XMM0_Qb;
    auVar6._0_4_ = auVar2._4_4_;
    auVar16._0_8_ = auVar6._0_8_ << 0x20;
    auVar16._8_4_ = auVar2._8_4_;
    auVar16._12_4_ = auVar2._12_4_;
    dVar15 = auVar16._8_8_ - dVar7;
    dVar20 = (this->Bounds).Max.field0_0x0._s_0.X - dVar8;
    if (dVar15 <= 0.0) {
      dVar15 = 0.0;
    }
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    dVar5 = auVar2._0_8_ - dVar9;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(((double)local_48._0_8_ - dVar8) / dVar20)
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(((double)local_48._8_8_ - dVar9) / dVar5);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)((local_38 - dVar7) / dVar15);
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    return __return_storage_ptr__;
  case Normal:
    cVar11 = (**(code **)((longlong)*this->DetailSampler + 0xe8))
                       (this->DetailSampler,pvVar4,iVar12,pTVar1,&local_48);
    if (cVar11 != '\0') {
      fVar18 = 0.0;
      fVar17 = SQRT(local_48._s_0.X * local_48._s_0.X + local_48._s_0.Y * local_48._s_0.Y +
                    local_48._s_0.Z * local_48._s_0.Z);
      if (fVar17 <= 0.0) {
        fVar19 = 0.0;
        fVar17 = 0.0;
      }
      else {
        fVar17 = __real_3f800000 / fVar17;
        fVar18 = fVar17 * local_48._s_0.X;
        fVar19 = fVar17 * local_48._s_0.Y;
        fVar17 = fVar17 * local_48._s_0.Z;
      }
      fVar19 = (fVar19 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y) * __real_3f000000;
      fVar17 = (fVar17 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) * __real_3f000000;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (fVar18 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) * __real_3f000000;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar19;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      return __return_storage_ptr__;
    }
    break;
  case FacetNormal:
    (**(code **)((longlong)*this->DetailSampler + 0xa0))
              (this->DetailSampler,&local_48,pvVar4,iVar12);
    fVar17 = ((float)(double)local_48._8_8_ + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y)
             * __real_3f000000;
    fVar18 = ((float)local_38 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) *
             __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((float)(double)local_48._0_8_ + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) *
         __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    return __return_storage_ptr__;
  case UVPosition:
    cVar11 = (**(code **)((longlong)*this->DetailSampler + 0xf0))
                       (this->DetailSampler,pvVar4,iVar12,pTVar1,
                        in_stack_ffffffffffffffa8 & 0xffffffff00000000,&local_res8);
    if (cVar11 != '\0') {
      if (0.0 <= local_res8) {
        fVar17 = local_res8;
        if (__real_3f800000 <= local_res8) {
          fVar17 = __real_3f800000;
        }
      }
      else {
        fVar17 = 0.0;
      }
      fVar18 = 0.0;
      if ((0.0 <= fStackX_c) && (fVar18 = fStackX_c, __real_3f800000 <= fStackX_c)) {
        fVar18 = __real_3f800000;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar17;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar18;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      return __return_storage_ptr__;
    }
    break;
  case MaterialID:
    iVar12 = (**(code **)((longlong)*this->DetailSampler + 0xb0))();
    pTVar13 = LinearColors::SelectColor<UE::Math::TVector<float>_>
                        ((TVector<float> *)&local_48._s_0,iVar12);
    fVar17 = (pTVar13->field0_0x0)._s_0.Y;
    fVar18 = (pTVar13->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    return __return_storage_ptr__;
  case VertexColor:
    local_48._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_48._8_8_ = _UNK_150689648;
    cVar11 = (**(code **)((longlong)*this->DetailSampler + 0xf8))
                       (this->DetailSampler,pvVar4,iVar12,pTVar1,&local_48);
    if (cVar11 == '\0') {
      return __return_storage_ptr__;
    }
    goto LAB_14c87836b;
  case PolyGroupID:
    iVar12 = (**(code **)((longlong)*this->DetailSampler + 0xb8))();
    pTVar14 = LinearColors::SelectColor<UE::Math::TVector4<float>_>
                        ((TVector4<float> *)&local_48._s_0,iVar12);
    local_48._0_8_ = *(undefined8 *)&pTVar14->field0_0x0;
    local_48._8_8_ = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 8);
LAB_14c87836b:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_48._0_8_;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_48._8_8_;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c8a5c00

void __thiscall
`UE::Geometry::FMeshPropertyMapEvaluator::Setup'::__l2::<lambda_1>::operator()
          (void *this,void *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  TPairInitializer<void_const_*_const_&,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_const_&>
  local_res8;
  TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
  **local_18;
  longlong local_10;
  
  local_res8.Value = param_1;
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x38))();
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0xc);
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 200))
                      (*(longlong **)(*(longlong *)this + 0x10),local_res8.Value,
                       *(undefined4 *)(lVar3 + 8));
    if ((cVar2 != '\0') &&
       ((iVar1 != 0 ||
        (cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd0))
                           (*(longlong **)(*(longlong *)this + 0x10),local_res8.Value),
        cVar2 != '\0')))) {
      local_18 = &local_res8.Value;
      local_10 = lVar3;
      TSet<TTuple<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_>,TDefaultMapHashableKeyFuncs<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<void_const_*_const_&,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_const_&>_>
                ((void *)(*(longlong *)this + 0x18),&local_res8,(bool *)&local_18);
      *(undefined1 *)(*(longlong *)this + 0x68) = 1;
    }
  }
  return;
}

// DataLayout @ 14c8d6fd0

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshPropertyMapEvaluator::DataLayout(FMeshPropertyMapEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 4;
      atexit(`UE::Geometry::FMeshPropertyMapEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0e50

void __cdecl
UE::Geometry::FMeshPropertyMapEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8643798653032464502>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshPropertyMapEvaluator.cpp"
                     ,0x76,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pfVar1 = *param_2;
  *param_3 = *pfVar1;
  *param_2 = pfVar1 + 1;
  return;
}

// EvaluateColor @ 14c8e1160

void __cdecl
UE::Geometry::FMeshPropertyMapEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 2);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)*param_2;
  *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = uVar1;
  *param_2 = *param_2 + 4;
  return;
}

// EvaluateDefault @ 14c8e1280

void __cdecl UE::Geometry::FMeshPropertyMapEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  *param_1 = pfVar1 + 4;
  return;
}

// GetDefaultValue @ 14c8f2ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Geometry::FMeshPropertyMapEvaluator::GetDefaultValue
          (FMeshPropertyMapEvaluator *this,TVector4<float> *__return_storage_ptr__,
          EMeshPropertyMapType param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 in_XMM0_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float local_res10;
  float fStackX_14;
  
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  uVar9 = _UNK_1528d06e8;
  dVar8 = __real_3fe0000000000000;
  switch(param_1) {
  case Position:
    auVar4 = *(undefined1 (*) [16])((longlong)&(this->Bounds).Min.field0_0x0 + 0x10);
    dVar3 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar7 = (this->Bounds).Min.field0_0x0._s_0.Y;
    auVar6._4_8_ = in_XMM0_Qb;
    auVar6._0_4_ = auVar4._4_4_;
    auVar12._0_8_ = auVar6._0_8_ << 0x20;
    auVar12._8_4_ = auVar4._8_4_;
    auVar12._12_4_ = auVar4._12_4_;
    dVar10 = auVar12._8_8_ - dVar3;
    dVar11 = (this->Bounds).Max.field0_0x0._s_0.Y;
    dVar5 = (this->Bounds).Max.field0_0x0._s_0.Z;
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
    dVar2 = (this->Bounds).Min.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)((((this->Bounds).Max.field0_0x0._s_0.X + (this->Bounds).Min.field0_0x0._s_0.X) *
                  __real_3fe0000000000000 - dVar3) / dVar10);
    dVar11 = dVar11 - dVar7;
    dVar5 = dVar5 - auVar4._0_8_;
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    dVar10 = (this->Bounds).Max.field0_0x0._s_0.Z;
    dVar3 = (this->Bounds).Min.field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)(((dVar1 + dVar2) * dVar8 - dVar7) / dVar11);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (float)(((dVar10 + dVar3) * dVar8 - auVar4._0_8_) / dVar5);
    return __return_storage_ptr__;
  case Normal:
  case FacetNormal:
    fVar13 = (UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y +
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y) * __real_3f000000;
    fVar14 = (UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z +
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) * __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X +
         UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) * __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    return __return_storage_ptr__;
  case UVPosition:
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
    if (0.0 <= local_res10) {
      if (__real_3f800000 <= local_res10) {
        local_res10 = __real_3f800000;
      }
    }
    else {
      local_res10 = 0.0;
    }
    fStackX_14 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
    fVar13 = 0.0;
    if ((0.0 <= fStackX_14) && (fVar13 = fStackX_14, __real_3f800000 <= fStackX_14)) {
      fVar13 = __real_3f800000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_res10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar13;
    return __return_storage_ptr__;
  case MaterialID:
  case PolyGroupID:
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = ___xmm_3f8000003f41c1c23f36b6b73f800000;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar9;
    return __return_storage_ptr__;
  case VertexColor:
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  }
  return __return_storage_ptr__;
}

// Setup @ 14c918480

void __thiscall
UE::Geometry::FMeshPropertyMapEvaluator::Setup
          (FMeshPropertyMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  IMeshBakerDetailSampler *pIVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  code *pcVar14;
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar15;
  double *pdVar16;
  TVector4<float> *pTVar17;
  longlong lVar18;
  FMeshPropertyMapEvaluator *local_res8;
  double local_e8 [3];
  code *local_d0;
  FMeshPropertyMapEvaluator **local_c8;
  double local_c0 [7];
  TVector4<float> local_88;
  TVector4<float> local_78;
  undefined1 local_68 [96];
  
  pIVar10 = param_1->DetailSampler;
  local_c8 = &local_res8;
  this->DetailSampler = pIVar10;
  local_d0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshPropertyMapEvaluator::Setup'::__l2::<lambda_1>,void,void_const_*>
             ::Call;
  local_res8 = this;
  (**(code **)((longlong)*pIVar10 + 8))(pIVar10,&local_d0);
  bVar9 = this->bHasDetailNormalTextures;
  param_2->EvalData = this;
  pcVar14 = EvaluateSample<0>;
  if (bVar9 != false) {
    pcVar14 = EvaluateSample<1>;
  }
  lVar18 = 0;
  param_2->Evaluate = pcVar14;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  param_2->EvaluateChannel = EvaluateChannel;
  pTVar15 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 0x10))(this);
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar15);
  if ((this->Property == MaterialID) || (this->Property == PolyGroupID)) {
    param_2->AccumulateMode = Overwrite;
  }
  pdVar16 = (double *)
            (**(code **)((longlong)*this->DetailSampler + 0x88))(this->DetailSampler,local_68);
  dVar13 = __real_3eb0c6f7a0000000;
  dVar12 = __real_3fe0000000000000;
  dVar3 = pdVar16[1];
  (this->Bounds).Min.field0_0x0._s_0.X = *pdVar16;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar16[3];
  (this->Bounds).Min.field0_0x0._s_0.Z = pdVar16[2];
  (this->Bounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar16[5];
  (this->Bounds).Max.field0_0x0._s_0.Y = pdVar16[4];
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar3;
  do {
    dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
    dVar4 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar5 = (this->Bounds).Max.field0_0x0._s_0.Y;
    dVar6 = (this->Bounds).Min.field0_0x0._s_0.Y;
    dVar7 = (this->Bounds).Max.field0_0x0._s_0.Z;
    dVar8 = (this->Bounds).Min.field0_0x0._s_0.Z;
    local_e8[0] = dVar3 - dVar4;
    local_e8[1] = dVar5 - dVar6;
    local_e8[2] = dVar7 - dVar8;
    if (*(double *)((longlong)local_e8 + lVar18) <= dVar13 &&
        dVar13 != *(double *)((longlong)local_e8 + lVar18)) {
      local_c0[0] = (dVar3 + dVar4) * dVar12;
      local_c0[1] = (dVar6 + dVar5) * dVar12;
      local_c0[2] = (dVar8 + dVar7) * dVar12;
      *(double *)((longlong)&(this->Bounds).Min.field0_0x0 + lVar18) =
           *(double *)((longlong)local_c0 + lVar18) - dVar13;
      local_c0[3] = ((this->Bounds).Max.field0_0x0._s_0.X + (this->Bounds).Min.field0_0x0._s_0.X) *
                    dVar12;
      local_c0[4] = ((this->Bounds).Max.field0_0x0._s_0.Y + (this->Bounds).Min.field0_0x0._s_0.Y) *
                    dVar12;
      local_c0[5] = ((this->Bounds).Min.field0_0x0._s_0.Z + (this->Bounds).Max.field0_0x0._s_0.Z) *
                    dVar12;
      *(double *)((longlong)&(this->Bounds).Max.field0_0x0 + lVar18) =
           *(double *)((longlong)local_c0 + lVar18 + 0x18) + dVar13;
    }
    lVar18 = lVar18 + 8;
  } while (lVar18 < 0x18);
  pTVar17 = GetDefaultValue(this,&local_88,this->Property);
  fVar1 = (pTVar17->field0_0x0)._s_0.Y;
  fVar2 = (pTVar17->field0_0x0)._s_0.Z;
  (this->DefaultValue).field0_0x0._s_0.X = (pTVar17->field0_0x0)._s_0.X;
  (this->DefaultValue).field0_0x0._s_0.Y = fVar1;
  (this->DefaultValue).field0_0x0._s_0.Z = fVar2;
  pTVar17 = GetDefaultValue(this,&local_78,this->Property);
  uVar11 = *(undefined8 *)((longlong)&pTVar17->field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultValue4f).field0_0x0 = *(undefined8 *)&pTVar17->field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultValue4f).field0_0x0 + 8) = uVar11;
  return;
}

