// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// CalculateBounds @ 1492dd2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraBoundsCalculatorHelper<0,1,0>::CalculateBounds
          (FNiagaraBoundsCalculatorHelper<0,1,0> *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,FNiagaraDataSet *param_2,int param_3)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  TVector<float> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar15;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar43;
  undefined4 uVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined8 local_198;
  float local_190;
  undefined1 local_188 [8];
  float local_180;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_178;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  TVector<float> local_130 [2];
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_118 [7];
  
  if ((param_3 == 0) || (*(int *)&(this->PositionAccessor).field_0x4 == -1)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    local_198 = 0.0;
    local_190 = 0.0;
    local_188 = (undefined1  [8])0x0;
    local_180 = 0.0;
    this_00 = FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                        ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionAccessor,
                         local_118,param_2);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::GetMinMax
              (this_00,(FNiagaraPosition *)&local_198,(FNiagaraPosition *)local_188);
    iVar1 = *(int *)&(this->ScaleAccessor).field_0x4;
    local_138 = (double)local_180;
    dVar45 = (double)(float)local_198;
    dVar17 = (double)local_198._4_4_;
    dVar31 = (double)local_190;
    dVar49 = (double)(float)local_188._0_4_;
    dVar18 = (double)(float)local_188._4_4_;
    fVar6 = __real_3f800000;
    fVar52 = __real_3f800000;
    fVar15 = __real_3f800000;
    local_198 = dVar18;
    local_158 = dVar45;
    local_150 = dVar17;
    local_148 = dVar31;
    local_140 = dVar49;
    if (iVar1 != -1) {
      pFVar2 = param_2->CurrentData;
      local_178.bIsFloat = *(bool *)&this->ScaleAccessor;
      local_178.bIsValid = false;
      local_178.NumInstances = 0;
      local_178.ComponentData[2] = (uchar *)0x0;
      local_178.ComponentData[0] = (uchar *)0x0;
      local_178.ComponentData[1] = (uchar *)0x0;
      if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
        local_178.bIsValid = true;
        if (local_178.bIsFloat == false) {
          local_178.ComponentData[0] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
          local_178.ComponentData[1] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data +
                        (iVar1 + 1) * pFVar2->HalfStride);
          local_178.ComponentData[2] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data +
                        (iVar1 + 2) * pFVar2->HalfStride);
        }
        else {
          local_178.ComponentData[0] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
          local_178.ComponentData[1] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data +
                        (iVar1 + 1) * pFVar2->FloatStride);
          local_178.ComponentData[2] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data +
                        (iVar1 + 2) * pFVar2->FloatStride);
        }
        local_178.NumInstances = pFVar2->NumInstances;
      }
      pTVar7 = FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::GetMax(&local_178,local_130);
      fVar52 = (pTVar7->field0_0x0)._s_0.Z;
      fVar15 = (float)((ulonglong)*(undefined8 *)&pTVar7->field0_0x0 >> 0x20);
      local_188._0_4_ = (undefined4)*(undefined8 *)&pTVar7->field0_0x0;
      fVar6 = (float)local_188._0_4_;
    }
    dVar16 = (double)fVar6 * (this->MeshExtents).field0_0x0._s_0.X;
    dVar21 = (double)fVar15 * (this->MeshExtents).field0_0x0._s_0.Y;
    dVar11 = (double)fVar52 * (this->MeshExtents).field0_0x0._s_0.Z;
    fVar52 = (float)SQRT(dVar21 * dVar21 + dVar16 * dVar16 + dVar11 * dVar11);
    if (fVar52 <= __real_38d1b717) {
      fVar52 = __real_38d1b717;
    }
    if (this->bLocalSpace == false) {
      auVar48 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      dVar11 = auVar48._0_8_;
      auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar21 = (this->MaxLocalMeshOffset).field0_0x0._s_0.X * (param_1->Scale3D).XY.m128d_f64[0];
      dVar34 = (this->MaxLocalMeshOffset).field0_0x0._s_0.Y * (param_1->Scale3D).XY.m128d_f64[1];
      auVar37._0_8_ =
           (this->MaxLocalMeshOffset).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
      auVar37._8_8_ = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar38 = (param_1->Rotation).ZW.m128d_f64[1];
      auVar40._8_4_ = SUB84(dVar34,0);
      auVar40._0_8_ = dVar21;
      uVar30 = (undefined4)((ulonglong)dVar34 >> 0x20);
      auVar40._12_4_ = uVar30;
      auVar23 = blendpd(auVar19,auVar48,2);
      auVar41._0_8_ = auVar40._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar21;
      auVar41._8_8_ = auVar37._0_8_ * auVar19._8_8_ - dVar11 * dVar34;
      auVar19._8_4_ = SUB84(dVar34,0);
      auVar19._0_8_ = dVar21;
      auVar19._12_4_ = uVar30;
      auVar19 = blendpd(auVar19,auVar37,2);
      auVar25._0_8_ = auVar19._0_8_ * dVar11 - auVar23._0_8_ * auVar37._0_8_;
      auVar25._8_8_ = auVar19._8_8_ * auVar48._8_8_ - auVar23._8_8_ * auVar37._8_8_;
      auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar16 = auVar41._8_8_ + auVar41._8_8_;
      dVar43 = auVar25._0_8_ + auVar25._0_8_;
      uVar30 = (undefined4)((ulonglong)dVar43 >> 0x20);
      auVar25 = blendpd(auVar41,auVar25,2);
      auVar28._8_4_ = SUB84(dVar43,0);
      auVar28._0_8_ = dVar16;
      auVar28._12_4_ = uVar30;
      auVar26._8_4_ = SUB84(dVar43,0);
      auVar26._0_8_ = dVar16;
      auVar26._12_4_ = uVar30;
      auVar42._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar42._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar25 = blendpd(auVar26,auVar42,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar16;
      auVar29._8_8_ = auVar42._0_8_ * auVar19._8_8_ - dVar11 * dVar43;
      auVar23._8_4_ = SUB84(auVar29._8_8_,0);
      auVar23._0_8_ = auVar29._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar19 = blendpd(auVar19,auVar48,2);
      auVar27._0_8_ = auVar25._0_8_ * dVar11 - auVar19._0_8_ * auVar42._0_8_;
      auVar27._8_8_ = auVar25._8_8_ * auVar48._8_8_ - auVar19._8_8_ * auVar42._8_8_;
      auVar48 = blendpd(auVar29,auVar27,2);
      dVar11 = (this->MaxWorldMeshOffset).field0_0x0._s_0.X;
      dVar21 = dVar16 * dVar38 + dVar21 + auVar23._8_8_;
      dVar43 = dVar43 * dVar38 + dVar34 + auVar27._0_8_;
      dVar38 = auVar42._0_8_ * dVar38 + auVar37._0_8_ + auVar48._0_8_;
      dVar16 = (this->MaxWorldMeshOffset).field0_0x0._s_0.Y;
      if (dVar11 <= dVar21) {
        dVar11 = dVar21;
      }
      if (dVar16 <= dVar43) {
        dVar16 = dVar43;
      }
      dVar21 = (this->MaxWorldMeshOffset).field0_0x0._s_0.Z;
      local_140 = dVar49;
      local_150 = dVar17;
      local_148 = dVar31;
      local_198 = dVar18;
      local_158 = dVar45;
      if (dVar21 <= dVar38) {
        dVar21 = dVar38;
      }
    }
    else {
      auVar48 = *(undefined1 (*) [16])&(this->MaxWorldMeshOffset).field0_0x0;
      dVar17 = (this->MaxWorldMeshOffset).field0_0x0._s_0.Z;
      dVar49 = (param_1->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar11 = (param_1->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar31 = (param_1->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar18 = (param_1->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(dVar11,0);
      auVar22._0_8_ = dVar49;
      uVar30 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar22._12_4_ = uVar30;
      auVar24._8_4_ = SUB84(dVar11,0);
      auVar24._0_8_ = dVar49;
      auVar24._12_4_ = uVar30;
      auVar3._8_4_ = SUB84(dVar18,0);
      auVar3._0_8_ = dVar31;
      auVar3._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      auVar25 = blendpd(auVar24,auVar3,2);
      dVar45 = auVar48._8_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar17;
      auVar19 = blendpd(auVar48,auVar5,2);
      auVar50._0_8_ = dVar45 * dVar49 - auVar48._0_8_ * auVar22._8_8_;
      auVar50._8_8_ = dVar17 * dVar11 - dVar45 * dVar31;
      auVar39._8_4_ = SUB84(auVar50._8_8_,0);
      auVar39._0_8_ = auVar50._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
      auVar20._0_8_ = auVar19._0_8_ * dVar31 - auVar25._0_8_ * dVar17;
      auVar20._8_8_ = auVar19._8_8_ * dVar18 - auVar25._8_8_ * 0.0;
      auVar19 = blendpd(auVar50,auVar20,2);
      dVar21 = auVar39._8_8_ + auVar39._8_8_;
      dVar43 = auVar20._0_8_ + auVar20._0_8_;
      auVar51._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar51._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      uVar30 = SUB84(dVar43,0);
      auVar46._8_4_ = uVar30;
      auVar46._0_8_ = dVar21;
      uVar44 = (undefined4)((ulonglong)dVar43 >> 0x20);
      auVar46._12_4_ = uVar44;
      auVar12._8_4_ = uVar30;
      auVar12._0_8_ = dVar21;
      auVar12._12_4_ = uVar44;
      auVar35._8_4_ = uVar30;
      auVar35._0_8_ = dVar21;
      auVar35._12_4_ = uVar44;
      auVar19 = blendpd(auVar35,auVar51,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar49 - dVar21 * auVar22._8_8_;
      auVar47._8_8_ = auVar51._0_8_ * dVar11 - auVar12._8_8_ * dVar31;
      auVar13._8_4_ = SUB84(auVar51._8_8_,0);
      auVar13._0_8_ = auVar51._0_8_;
      auVar13._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar32._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(param_1->Scale3D).XY.m128d_f64);
      auVar32._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
      auVar32._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
      dVar11 = (this->MaxLocalMeshOffset).field0_0x0._s_0.X;
      auVar36._0_8_ = auVar19._0_8_ * dVar31 - auVar51._0_8_ * auVar25._0_8_;
      auVar36._8_8_ = auVar19._8_8_ * dVar18 - auVar13._8_8_ * auVar25._8_8_;
      auVar19 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
      lVar8 = -(ulonglong)
               ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar19._4_4_,
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar19._0_4_) <=
               (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
      lVar9 = -(ulonglong)(auVar32._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar10 = -(ulonglong)(auVar32._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar33._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar25._4_4_,
                            ~(uint)lVar9 & auVar25._0_4_);
      auVar33._8_4_ = ~(uint)lVar10 & auVar25._8_4_;
      auVar33._12_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar25._12_4_;
      auVar14._8_4_ = SUB84(auVar47._8_8_,0);
      auVar14._0_8_ = auVar47._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar4._0_8_ = auVar19._0_8_;
      auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
      dVar16 = (this->MaxLocalMeshOffset).field0_0x0._s_0.Y;
      dVar31 = auVar33._0_8_ * (dVar21 * dVar18 + auVar48._0_8_ + auVar14._8_8_);
      dVar45 = auVar33._8_8_ * (dVar43 * dVar18 + dVar45 + auVar36._0_8_);
      auVar48 = blendpd(auVar47,auVar36,2);
      if (dVar11 <= dVar31) {
        dVar11 = dVar31;
      }
      dVar17 = (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar19._4_4_,
                                ~(uint)lVar8 & auVar19._0_4_) *
               (auVar51._0_8_ * dVar18 + dVar17 + auVar48._0_8_);
      dVar21 = (this->MaxLocalMeshOffset).field0_0x0._s_0.Z;
      if (dVar16 <= dVar45) {
        dVar16 = dVar45;
      }
      if (dVar21 <= dVar17) {
        dVar21 = dVar17;
      }
    }
    dVar31 = (double)fVar52;
    dVar17 = local_158 - dVar11;
    if (local_158 <= local_158 - dVar11) {
      dVar17 = local_158;
    }
    dVar18 = local_150 - dVar16;
    if (local_150 <= local_150 - dVar16) {
      dVar18 = local_150;
    }
    dVar45 = dVar11 + local_140;
    if (dVar11 + local_140 <= local_140) {
      dVar45 = local_140;
    }
    dVar49 = dVar16 + local_198;
    if (dVar16 + local_198 <= local_198) {
      dVar49 = local_198;
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar17 - dVar31;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar18 - dVar31;
    dVar17 = local_148 - dVar21;
    if (local_148 <= local_148 - dVar21) {
      dVar17 = local_148;
    }
    dVar18 = dVar21 + local_138;
    if (dVar21 + local_138 <= local_138) {
      dVar18 = local_138;
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar17 - dVar31;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar45 + dVar31;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar49 + dVar31;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar18 + dVar31;
    __return_storage_ptr__->IsValid = '\x01';
  }
  return __return_storage_ptr__;
}

// InitAccessors @ 1492f7400

void __thiscall
FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors
          (FNiagaraBoundsCalculatorHelper<0,1,0> *this,FNiagaraDataSetCompiledData *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::PositionName,L"Position");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::SpriteSizeName,L"SpriteSize");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::ScaleName,L"Scale");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::RibbonWidthName,L"RibbonWidth");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionAccessor,param_1,
               `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
               ::__l2::PositionName);
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)&this->ScaleAccessor,
               param_1,`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,1,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                       ::__l2::ScaleName);
    return;
  }
  *(undefined1 *)&this->PositionAccessor = 1;
  *(undefined4 *)&(this->PositionAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleAccessor = 1;
  *(undefined4 *)&(this->ScaleAccessor).field_0x4 = 0xffffffff;
  return;
}

// CalculateBounds @ 149396260

/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraBoundsCalculatorHelper<0,0,1>::CalculateBounds
          (FNiagaraBoundsCalculatorHelper<0,0,1> *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,FNiagaraDataSet *param_2,int param_3)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  float fVar9;
  double dVar10;
  undefined1 local_c8 [8];
  float local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  FNiagaraDataSetReaderFloat<float> local_a8;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_98 [4];
  
  if ((param_3 != 0) && (*(int *)&(this->PositionAccessor).field_0x4 != -1)) {
    local_c8 = (undefined1  [8])0x0;
    local_c0 = 0.0;
    local_b8 = (undefined1  [8])0x0;
    local_b0 = 0.0;
    this_00 = FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                        ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionAccessor,
                         local_98,param_2);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::GetMinMax
              (this_00,(FNiagaraPosition *)local_c8,(FNiagaraPosition *)local_b8);
    iVar1 = *(int *)&(this->RibbonWidthAccessor).field_0x4;
    dVar3 = (double)(float)local_c8._0_4_;
    dVar4 = (double)(float)local_c8._4_4_;
    dVar5 = (double)local_c0;
    dVar6 = (double)(float)local_b8._0_4_;
    dVar7 = (double)(float)local_b8._4_4_;
    dVar8 = (double)local_b0;
    fVar9 = __real_42480000;
    if (iVar1 != -1) {
      pFVar2 = param_2->CurrentData;
      local_a8.bIsFloat = *(bool *)&this->RibbonWidthAccessor;
      local_a8.bIsValid = false;
      local_a8.NumInstances = 0;
      local_a8.ComponentData[0] = (uchar *)0x0;
      if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
        local_a8.bIsValid = true;
        if (local_a8.bIsFloat == false) {
          local_a8.ComponentData[0] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
        }
        else {
          local_a8.ComponentData[0] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
        }
        local_a8.NumInstances = pFVar2->NumInstances;
      }
      fVar9 = FNiagaraDataSetReaderFloat<float>::GetMax(&local_a8);
    }
    if ((float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= __real_38d1b717) {
      fVar9 = __real_38d1b717;
    }
    dVar10 = (double)fVar9;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3 - dVar10;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar10;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar5 - dVar10;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10 + dVar6;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10 + dVar7;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar10 + dVar8;
    __return_storage_ptr__->IsValid = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// InitAccessors @ 1493a8900

void __thiscall
FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors
          (FNiagaraBoundsCalculatorHelper<0,0,1> *this,FNiagaraDataSetCompiledData *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::PositionName,L"Position");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::SpriteSizeName,L"SpriteSize");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::ScaleName,L"Scale");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::RibbonWidthName,L"RibbonWidth");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionAccessor,param_1,
               `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
               ::__l2::PositionName);
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->RibbonWidthAccessor,param_1,
               `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<0,0,1>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
               ::__l2::RibbonWidthName);
    return;
  }
  *(undefined1 *)&this->PositionAccessor = 1;
  *(undefined4 *)&(this->PositionAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RibbonWidthAccessor = 1;
  *(undefined4 *)&(this->RibbonWidthAccessor).field_0x4 = 0xffffffff;
  return;
}

// CalculateBounds @ 1493d9080

/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraBoundsCalculatorHelper<1,0,0>::CalculateBounds
          (FNiagaraBoundsCalculatorHelper<1,0,0> *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,FNiagaraDataSet *param_2,int param_3)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined1 local_d8 [8];
  float local_d0;
  undefined1 local_c8 [8];
  float local_c0;
  float local_b8;
  float local_b4;
  FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> local_b0;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_98 [4];
  
  if ((param_3 == 0) || (iVar1 = *(int *)&(this->PositionAccessor).field_0x4, iVar1 == -1)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    pFVar2 = param_2->CurrentData;
    local_98[0].bIsFloat = *(bool *)&this->PositionAccessor;
    local_d8 = (undefined1  [8])0x0;
    local_d0 = 0.0;
    local_c8 = (undefined1  [8])0x0;
    local_c0 = 0.0;
    local_98[0].bIsValid = false;
    local_98[0].NumInstances = 0;
    local_98[0].ComponentData[2] = (uchar *)0x0;
    local_98[0].ComponentData[0] = (uchar *)0x0;
    local_98[0].ComponentData[1] = (uchar *)0x0;
    if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
      local_98[0].bIsValid = true;
      if (local_98[0].bIsFloat == false) {
        local_98[0].ComponentData[0] =
             (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
        local_98[0].ComponentData[1] =
             (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + (iVar1 + 1) * pFVar2->HalfStride)
        ;
        local_98[0].ComponentData[2] =
             (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + (iVar1 + 2) * pFVar2->HalfStride)
        ;
      }
      else {
        local_98[0].ComponentData[0] =
             (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
        local_98[0].ComponentData[1] =
             (uchar *)((pFVar2->FloatData).AllocatorInstance.Data +
                      (iVar1 + 1) * pFVar2->FloatStride);
        local_98[0].ComponentData[2] =
             (uchar *)((pFVar2->FloatData).AllocatorInstance.Data +
                      (iVar1 + 2) * pFVar2->FloatStride);
      }
      local_98[0].NumInstances = pFVar2->NumInstances;
    }
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::GetMinMax
              (local_98,(FNiagaraPosition *)local_d8,(FNiagaraPosition *)local_c8);
    iVar1 = *(int *)&(this->SpriteSizeAccessor).field_0x4;
    dVar3 = (double)(float)local_d8._0_4_;
    dVar4 = (double)(float)local_d8._4_4_;
    dVar5 = (double)local_d0;
    dVar6 = (double)(float)local_c8._0_4_;
    dVar7 = (double)(float)local_c8._4_4_;
    dVar8 = (double)local_c0;
    fVar9 = __real_42480000;
    if (iVar1 != -1) {
      pFVar2 = param_2->CurrentData;
      local_b0.bIsFloat = *(bool *)&this->SpriteSizeAccessor;
      local_b0.bIsValid = false;
      local_b0.NumInstances = 0;
      local_b0.ComponentData[0] = (uchar *)0x0;
      local_b0.ComponentData[1] = (uchar *)0x0;
      if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
        local_b0.bIsValid = true;
        if (local_b0.bIsFloat == false) {
          local_b0.ComponentData[0] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
          local_b0.ComponentData[1] =
               (uchar *)((pFVar2->HalfData).AllocatorInstance.Data +
                        (iVar1 + 1) * pFVar2->HalfStride);
        }
        else {
          local_b0.ComponentData[0] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
          local_b0.ComponentData[1] =
               (uchar *)((pFVar2->FloatData).AllocatorInstance.Data +
                        (iVar1 + 1) * pFVar2->FloatStride);
        }
        local_b0.NumInstances = pFVar2->NumInstances;
      }
      FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_>::GetMax(&local_b0);
      fVar9 = local_b8;
      if (local_b8 <= local_b4) {
        fVar9 = local_b4;
      }
    }
    if ((float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= __real_38d1b717) {
      fVar9 = __real_38d1b717;
    }
    dVar10 = (double)fVar9;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3 - dVar10;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar10;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar5 - dVar10;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar10 + dVar6;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar10 + dVar7;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar10 + dVar8;
    __return_storage_ptr__->IsValid = '\x01';
  }
  return __return_storage_ptr__;
}

// InitAccessors @ 1493eb8d0

void __thiscall
FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors
          (FNiagaraBoundsCalculatorHelper<1,0,0> *this,FNiagaraDataSetCompiledData *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::PositionName,L"Position");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::SpriteSizeName,L"SpriteSize");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::ScaleName,L"Scale");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if (*piVar1 < `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                      ::__l2::RibbonWidthName,L"RibbonWidth");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionAccessor,param_1,
               `public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
               ::__l2::PositionName);
    FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_> *)&this->SpriteSizeAccessor
               ,param_1,`public:_virtual_void___cdecl_FNiagaraBoundsCalculatorHelper<1,0,0>::InitAccessors(FNiagaraDataSetCompiledData_const*___ptr64)___ptr64'
                        ::__l2::SpriteSizeName);
    return;
  }
  *(undefined1 *)&this->PositionAccessor = 1;
  *(undefined4 *)&(this->PositionAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->SpriteSizeAccessor = 1;
  *(undefined4 *)&(this->SpriteSizeAccessor).field_0x4 = 0xffffffff;
  return;
}

