// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// redux<Eigen::internal::scalar_sum_op<float,float>_> @ 14f064b90

float __thiscall
Eigen::
DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Matrix<float,3,1,2,3,1>_const_,Eigen::Matrix<float,3,1,2,3,1>_const_>_const_>_>
::redux<Eigen::internal::scalar_sum_op<float,float>_>
          (DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Matrix<float,3,1,2,3,1>_const_,Eigen::Matrix<float,3,1,2,3,1>_const_>_const_>_>
           *this,scalar_sum_op<float,float> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = *(float **)(this + 0x10);
  pfVar2 = *(float **)(this + 0x18);
  return (pfVar1[1] - pfVar2[1]) * (pfVar1[1] - pfVar2[1]) +
         (pfVar1[2] - pfVar2[2]) * (pfVar1[2] - pfVar2[2]) +
         (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2);
}

// ComputeReflectionProperties @ 14f064bd0

ReflectionProperties * __cdecl
vraudio::ComputeReflectionProperties
          (ReflectionProperties *__return_storage_ptr__,RoomProperties *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  
  *(undefined8 *)(__return_storage_ptr__->room_rotation + 3) = 0x3f800000;
  pfVar5 = __return_storage_ptr__->coefficients;
  __return_storage_ptr__->room_position[0] = 0.0;
  __return_storage_ptr__->room_position[1] = 0.0;
  *(undefined8 *)(__return_storage_ptr__->room_position + 2) = 0;
  __return_storage_ptr__->room_rotation[1] = 0.0;
  __return_storage_ptr__->room_rotation[2] = 0.0;
  __return_storage_ptr__->room_dimensions[1] = 0.0;
  __return_storage_ptr__->room_dimensions[2] = 0.0;
  __return_storage_ptr__->cutoff_frequency = 0.0;
  *pfVar5 = 0.0;
  __return_storage_ptr__->coefficients[1] = 0.0;
  __return_storage_ptr__->coefficients[2] = 0.0;
  __return_storage_ptr__->coefficients[3] = 0.0;
  __return_storage_ptr__->coefficients[4] = 0.0;
  *(undefined8 *)(__return_storage_ptr__->coefficients + 5) = 0;
  memmove(__return_storage_ptr__,param_1,0xc);
  memmove(__return_storage_ptr__->room_rotation,param_1->rotation,0x10);
  memmove(__return_storage_ptr__->room_dimensions,param_1->dimensions,0xc);
  fVar3 = __real_3eaaaaab;
  fVar2 = __real_3f800000;
  __return_storage_ptr__->cutoff_frequency = 800.0;
  lVar6 = 6;
  do {
    iVar1 = *(int *)((longlong)param_1 + (-4 - (longlong)__return_storage_ptr__) + (longlong)pfVar5)
    ;
    fVar7 = 0.0;
    for (pfVar4 = kRoomMaterials[iVar1].absorption_coefficients + 4;
        pfVar4 != kRoomMaterials[iVar1].absorption_coefficients + 7; pfVar4 = pfVar4 + 1) {
      fVar7 = fVar7 + *pfVar4;
    }
    fVar7 = SQRT(fVar2 - fVar7 * fVar3);
    if (fVar2 <= fVar7) {
      fVar7 = fVar2;
    }
    *pfVar5 = fVar7;
    pfVar5 = pfVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  __return_storage_ptr__->gain = param_1->reflection_scalar;
  return __return_storage_ptr__;
}

// ComputeReverbProperties @ 14f064d00

ReverbProperties * __cdecl
vraudio::ComputeReverbProperties(ReverbProperties *__return_storage_ptr__,RoomProperties *param_1)

{
  __return_storage_ptr__->rt60_values[0] = 0.0;
  __return_storage_ptr__->rt60_values[1] = 0.0;
  __return_storage_ptr__->rt60_values[2] = 0.0;
  __return_storage_ptr__->rt60_values[3] = 0.0;
  __return_storage_ptr__->rt60_values[4] = 0.0;
  __return_storage_ptr__->rt60_values[5] = 0.0;
  __return_storage_ptr__->rt60_values[6] = 0.0;
  __return_storage_ptr__->rt60_values[7] = 0.0;
  *(undefined8 *)(__return_storage_ptr__->rt60_values + 8) = 0;
  `anonymous_namespace'::GenerateRt60Values(param_1,__return_storage_ptr__->rt60_values);
  `anonymous_namespace'::ModifyRT60Values
            (param_1->reverb_brightness,param_1->reverb_time,__return_storage_ptr__->rt60_values);
  __return_storage_ptr__->gain = param_1->reverb_gain * __real_3d3851ec;
  return __return_storage_ptr__;
}

// ComputeReverbPropertiesFromRT60s @ 14f064d70

ReverbProperties * __cdecl
vraudio::ComputeReverbPropertiesFromRT60s
          (ReverbProperties *__return_storage_ptr__,float *param_1,float param_2,float param_3,
          float param_4)

{
  __return_storage_ptr__->rt60_values[0] = 0.0;
  __return_storage_ptr__->rt60_values[1] = 0.0;
  __return_storage_ptr__->rt60_values[2] = 0.0;
  __return_storage_ptr__->rt60_values[3] = 0.0;
  __return_storage_ptr__->rt60_values[4] = 0.0;
  __return_storage_ptr__->rt60_values[5] = 0.0;
  __return_storage_ptr__->rt60_values[6] = 0.0;
  __return_storage_ptr__->rt60_values[7] = 0.0;
  *(undefined8 *)(__return_storage_ptr__->rt60_values + 8) = 0;
  memmove(__return_storage_ptr__,param_1,0x24);
  `anonymous_namespace'::ModifyRT60Values(param_2,param_3,__return_storage_ptr__->rt60_values);
  __return_storage_ptr__->gain = param_4 * __real_3d3851ec;
  return __return_storage_ptr__;
}

// ComputeRoomEffectsGain @ 14f064df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
vraudio::ComputeRoomEffectsGain
          (WorldPosition *param_1,WorldPosition *param_2,WorldRotation *param_3,
          WorldPosition *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  WorldPosition *local_98;
  WorldPosition local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (__real_34000000 <=
      *(float *)&param_4->field_0x4 * *(float *)param_4 * *(float *)&param_4->field_0x8) {
    WorldPosition::WorldPosition((WorldPosition *)local_b8);
    fVar1 = *(float *)&param_3->field_0xc;
    fVar8 = -*(float *)param_3;
    fVar9 = -*(float *)&param_3->field_0x4;
    fVar10 = -*(float *)&param_3->field_0x8;
    local_a8 = -*(float *)param_3;
    fStack_a4 = -*(float *)&param_3->field_0x4;
    uStack_a0 = (undefined1 *)CONCAT44(fVar1,fVar10);
    fVar2 = *(float *)param_1 - *(float *)param_2;
    fVar5 = *(float *)&param_1->field_0x4 - *(float *)&param_2->field_0x4;
    fVar7 = *(float *)&param_1->field_0x8 - *(float *)&param_2->field_0x8;
    fVar6 = fVar5 * fVar8 - fVar2 * fVar9;
    fVar4 = fVar9 * fVar7 - fVar5 * fVar10;
    fVar6 = fVar6 + fVar6;
    fVar3 = fVar2 * fVar10 - fVar8 * fVar7;
    fVar4 = fVar4 + fVar4;
    fVar3 = fVar3 + fVar3;
    local_b8._8_4_ = (fVar8 * fVar3 - fVar9 * fVar4) + fVar1 * fVar6 + fVar7;
    local_b8._4_4_ = (fVar10 * fVar4 - fVar8 * fVar6) + fVar1 * fVar3 + fVar5;
    local_b8._0_4_ = (fVar9 * fVar6 - fVar10 * fVar3) + fVar1 * fVar4 + fVar2;
    WorldPosition::WorldPosition(&local_88);
    GetClosestPositionInAabb((WorldPosition *)local_b8,param_4,&local_88);
    uStack_a0 = local_b8;
    local_98 = &local_88;
    fVar1 = Eigen::
            MatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Matrix<float,3,1,2,3,1>_const_,Eigen::Matrix<float,3,1,2,3,1>_const_>_>
            ::norm((MatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Matrix<float,3,1,2,3,1>_const_,Eigen::Matrix<float,3,1,2,3,1>_const_>_>
                    *)&local_a8);
    fVar1 = __real_3f800000 / ((fVar1 + __real_3f800000) * (fVar1 + __real_3f800000));
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GenerateRt60Values @ 14f065070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
vraudio::`anonymous_namespace'::GenerateRt60Values(RoomProperties *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *_Dst;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a0 = param_1->dimensions[2];
  local_98 = param_1->dimensions[0] * param_1->dimensions[1];
  fVar9 = local_a0 * local_98;
  if (__real_34000000 <= fVar9) {
    local_a8 = local_a0 * param_1->dimensions[1];
    local_a0 = local_a0 * param_1->dimensions[0];
    local_a4 = local_a8;
    local_9c = local_a0;
    local_94 = local_98;
    _Dst = ::operator_new(0x18);
    memmove(_Dst,&local_a8,0x18);
    fVar3 = __real_40800000;
    fVar2 = __real_3f800000;
    fVar8 = 0.0;
    for (pfVar4 = _Dst; pfVar4 != _Dst + 6; pfVar4 = pfVar4 + 1) {
      fVar8 = fVar8 + *pfVar4;
    }
    uVar5 = 0;
    lVar6 = (longlong)kAirAbsorptionCoefficients - (longlong)param_2;
    fVar11 = fVar9 * ___real_3e24dd2f;
    fVar10 = __real_3f800000 / fVar8;
    do {
      fVar1 = *(float *)(lVar6 + (longlong)param_2);
      fVar7 = (kRoomMaterials[(int)param_1->material_names[0]].absorption_coefficients[uVar5] *
               *_Dst + kRoomMaterials[(int)param_1->material_names[1]].absorption_coefficients
                       [uVar5] * _Dst[1] +
               kRoomMaterials[(int)param_1->material_names[2]].absorption_coefficients[uVar5] *
               _Dst[2] + kRoomMaterials[(int)param_1->material_names[3]].absorption_coefficients
                         [uVar5] * _Dst[3] +
               kRoomMaterials[(int)param_1->material_names[4]].absorption_coefficients[uVar5] *
               _Dst[4] +
              kRoomMaterials[(int)param_1->material_names[5]].absorption_coefficients[uVar5] *
              _Dst[5]) * fVar10;
      if (fVar2 <= fVar7) {
        fVar7 = fVar2;
      }
      fVar7 = logf(fVar2 - fVar7);
      uVar5 = uVar5 + 1;
      *param_2 = fVar11 / (fVar1 * fVar3 * fVar9 - fVar7 * fVar8);
      param_2 = param_2 + 1;
    } while (uVar5 < 9);
    ::operator_delete(_Dst,0x18);
  }
  return;
}

// GetClosestPositionInAabb @ 14f065310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
vraudio::GetClosestPositionInAabb
          (WorldPosition *param_1,WorldPosition *param_2,WorldPosition *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  WorldPosition *pWVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined1 local_38 [4];
  float local_34;
  float local_30 [2];
  float local_28;
  float local_24;
  float local_20 [2];
  ulonglong local_18;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  local_18 = __security_cookie.value ^ (ulonglong)local_38;
  local_28 = *(float *)param_2 * __real_3f000000;
  local_24 = *(float *)&param_2->field_0x4 * __real_3f000000;
  local_20[0] = *(float *)&param_2->field_0x8 * __real_3f000000;
  local_38 = (undefined1  [4])((uint)local_28 ^ __xmm_80000000800000008000000080000000);
  pWVar3 = (WorldPosition *)local_38;
  if ((float)local_38 < *(float *)param_1 || (float)local_38 == *(float *)param_1) {
    pWVar3 = param_1;
  }
  puVar1 = &param_1->field_0x4;
  fVar6 = *(float *)pWVar3;
  if (local_28 <= *(float *)pWVar3) {
    fVar6 = local_28;
  }
  local_34 = (float)((uint)local_24 ^ __xmm_80000000800000008000000080000000);
  *(float *)param_3 = fVar6;
  local_30[0] = (float)((uint)local_20[0] ^ uVar2);
  pfVar5 = &local_34;
  if (local_34 < *(float *)puVar1 || local_34 == *(float *)puVar1) {
    pfVar5 = (float *)puVar1;
  }
  pfVar4 = &local_24;
  if (*pfVar5 <= local_24) {
    pfVar4 = pfVar5;
  }
  *(float *)&param_3->field_0x4 = *pfVar4;
  puVar1 = &param_1->field_0x8;
  pfVar5 = local_30;
  if (local_30[0] < *(float *)puVar1 || local_30[0] == *(float *)puVar1) {
    pfVar5 = (float *)puVar1;
  }
  pfVar4 = local_20;
  if (*pfVar5 <= local_20[0]) {
    pfVar4 = pfVar5;
  }
  *(float *)&param_3->field_0x8 = *pfVar4;
  return;
}

// GetRoomMaterial @ 14f065400

RoomMaterial * __cdecl
vraudio::GetRoomMaterial(RoomMaterial *__return_storage_ptr__,ulong64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = kRoomMaterials[param_1].absorption_coefficients[0];
  uVar1 = *(undefined8 *)(kRoomMaterials[param_1].absorption_coefficients + 1);
  uVar2 = *(undefined8 *)(kRoomMaterials[param_1].absorption_coefficients + 3);
  uVar3 = *(undefined8 *)(kRoomMaterials[param_1].absorption_coefficients + 5);
  __return_storage_ptr__->name = kRoomMaterials[param_1].name;
  __return_storage_ptr__->absorption_coefficients[0] = fVar4;
  *(undefined8 *)(__return_storage_ptr__->absorption_coefficients + 1) = uVar1;
  uVar1 = *(undefined8 *)(kRoomMaterials[param_1].absorption_coefficients + 7);
  *(undefined8 *)(__return_storage_ptr__->absorption_coefficients + 3) = uVar2;
  *(undefined8 *)(__return_storage_ptr__->absorption_coefficients + 5) = uVar3;
  *(undefined8 *)(__return_storage_ptr__->absorption_coefficients + 7) = uVar1;
  return __return_storage_ptr__;
}

// ModifyRT60Values @ 14f065430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
vraudio::`anonymous_namespace'::ModifyRT60Values(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1 * __real_3eaaaaab + __real_3f800000;
  fVar4 = param_1 * ___real_3de38e39 + __real_3f800000;
  param_3[1] = (param_1 * ___real_3e638e39 + __real_3f800000) * param_2 * param_3[1];
  fVar3 = param_1 * ___real_3ee38e39;
  param_3[2] = fVar2 * param_2 * param_3[2];
  fVar2 = param_1 * ___real_3f0e38e4;
  param_3[3] = (fVar3 + fVar1) * param_2 * param_3[3];
  fVar3 = param_1 * __real_3f2aaaab;
  param_3[4] = (fVar2 + fVar1) * param_2 * param_3[4];
  fVar2 = param_1 * ___real_3f471c72;
  *param_3 = fVar4 * param_2 * *param_3;
  param_3[5] = (fVar3 + fVar1) * param_2 * param_3[5];
  fVar3 = param_1 * ___real_3f638e39;
  param_3[6] = (fVar2 + fVar1) * param_2 * param_3[6];
  param_3[8] = (param_1 + fVar1) * param_2 * param_3[8];
  param_3[7] = (fVar3 + fVar1) * param_2 * param_3[7];
  return;
}

// norm @ 14f065550

float __thiscall
Eigen::
MatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Matrix<float,3,1,2,3,1>_const_,Eigen::Matrix<float,3,1,2,3,1>_const_>_>
::norm(MatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Matrix<float,3,1,2,3,1>_const_,Eigen::Matrix<float,3,1,2,3,1>_const_>_>
       *this)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(this + 0x10);
  pfVar1 = *(float **)(this + 8);
  return SQRT((pfVar1[1] - pfVar2[1]) * (pfVar1[1] - pfVar2[1]) +
              (pfVar1[2] - pfVar2[2]) * (pfVar1[2] - pfVar2[2]) +
              (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2));
}

