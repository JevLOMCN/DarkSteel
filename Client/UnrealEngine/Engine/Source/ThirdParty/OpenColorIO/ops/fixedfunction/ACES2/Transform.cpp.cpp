// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 41

// JMh_to_RGB @ 14ff2a8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::JMh_to_RGB(class std::array<float,3>
   const & __ptr64,struct OpenColorIO_v2_4::ACES2::JMhParams const & __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::JMh_to_RGB
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,JMhParams *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = param_1->_Elems[1] / ___real_421acccd;
  fVar8 = (param_1->_Elems[2] * __real_40490fdb) / __real_43340000;
  fVar4 = cosf(fVar8);
  fVar4 = fVar4 * fVar7;
  fVar5 = sinf(fVar8);
  fVar2 = __real_42c80000;
  fVar5 = fVar5 * fVar7;
  fVar6 = powf(param_1->_Elems[0] / __real_42c80000,
               __real_3f800000 / (*(float *)(param_2 + 4) * __real_3f170a3d));
  fVar1 = __real_41d90a3d;
  fVar8 = __real_40186186;
  fVar7 = __real_43c80000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = fVar6 * *(float *)(param_2 + 8) * ___real_43e60000;
  fVar6 = (fVar4 * ___real_43e18000 + fVar10 + fVar5 * __real_43900000) / __real_44af6000;
  fVar9 = ((fVar10 - fVar4 * ___real_445ec000) - fVar5 * ___real_43828000) / __real_44af6000;
  fVar5 = ((fVar10 - fVar4 * __real_435c0000) - fVar5 * ___real_45c4e000) / __real_44af6000;
  fVar4 = powf(((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_41d90a3d) /
               (__real_43c80000 - (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)),
               __real_40186186);
  fVar10 = (fVar4 * (((float)(((uint)__real_3f800000 ^ (uint)fVar6) & uVar3 ^ (uint)fVar6) * fVar2)
                    / *(float *)param_2)) / *(float *)(param_2 + 0x1c);
  fVar4 = powf(((float)((uint)fVar9 & uVar3) * fVar1) / (fVar7 - (float)((uint)fVar9 & uVar3)),fVar8
              );
  fVar9 = (fVar4 * (((float)(((uint)__real_3f800000 ^ (uint)fVar9) & uVar3 ^ (uint)fVar9) * fVar2) /
                   *(float *)param_2)) / *(float *)(param_2 + 0x20);
  fVar4 = powf(((float)((uint)fVar5 & uVar3) * fVar1) / (fVar7 - (float)((uint)fVar5 & uVar3)),fVar8
              );
  fVar7 = *(float *)(param_2 + 100);
  fVar8 = *(float *)(param_2 + 0x58);
  fVar1 = *(float *)(param_2 + 0x68);
  fVar6 = (fVar4 * (((float)(((uint)__real_3f800000 ^ (uint)fVar5) & uVar3 ^ (uint)fVar5) * fVar2) /
                   *(float *)param_2)) / *(float *)(param_2 + 0x24);
  fVar2 = *(float *)(param_2 + 0x5c);
  fVar4 = *(float *)(param_2 + 0x60);
  fVar5 = *(float *)(param_2 + 0x6c);
  __return_storage_ptr__->_Elems[0] =
       fVar9 * *(float *)(param_2 + 0x50) + fVar10 * *(float *)(param_2 + 0x4c) +
       fVar6 * *(float *)(param_2 + 0x54);
  __return_storage_ptr__->_Elems[1] = fVar9 * fVar2 + fVar10 * fVar8 + fVar6 * fVar4;
  __return_storage_ptr__->_Elems[2] = fVar9 * fVar1 + fVar10 * fVar7 + fVar6 * fVar5;
  return __return_storage_ptr__;
}

// RGB_to_JMh @ 14ff2abf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::RGB_to_JMh(class std::array<float,3>
   const & __ptr64,struct OpenColorIO_v2_4::ACES2::JMhParams const & __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::RGB_to_JMh
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,JMhParams *param_2)

{
  uint uVar1;
  float fVar2;
  float _Y;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  _Y = __real_3ed70a3d;
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = *(float *)param_2;
  fVar7 = param_1->_Elems[0];
  fVar9 = param_1->_Elems[2];
  fVar8 = param_1->_Elems[1];
  fVar6 = (fVar8 * *(float *)(param_2 + 0x2c) + fVar7 * *(float *)(param_2 + 0x28) +
          fVar9 * *(float *)(param_2 + 0x30)) * *(float *)(param_2 + 0x1c);
  fVar4 = powf(((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar5) /
               __real_42c80000,__real_3ed70a3d);
  fVar3 = __real_41d90a3d;
  fVar2 = __real_43c80000;
  fVar10 = ((float)((__real_3f800000 ^ (uint)fVar6) & uVar1 ^ (uint)fVar6) * __real_43c80000 * fVar4
           ) / (fVar4 + __real_41d90a3d);
  fVar6 = (fVar8 * *(float *)(param_2 + 0x38) + fVar7 * *(float *)(param_2 + 0x34) +
          fVar9 * *(float *)(param_2 + 0x3c)) * *(float *)(param_2 + 0x20);
  fVar4 = powf(((float)((uint)fVar6 & uVar1) * fVar5) / __real_42c80000,_Y);
  fVar9 = (fVar8 * *(float *)(param_2 + 0x44) + fVar7 * *(float *)(param_2 + 0x40) +
          fVar9 * *(float *)(param_2 + 0x48)) * *(float *)(param_2 + 0x24);
  fVar7 = ((float)((__real_3f800000 ^ (uint)fVar6) & uVar1 ^ (uint)fVar6) * fVar2 * fVar4) /
          (fVar4 + fVar3);
  fVar5 = powf(((float)((uint)fVar9 & uVar1) * fVar5) / __real_42c80000,_Y);
  fVar5 = ((float)((__real_3f800000 ^ (uint)fVar9) & uVar1 ^ (uint)fVar9) * fVar2 * fVar5) /
          (fVar5 + fVar3);
  fVar8 = (fVar10 - (fVar7 * __real_41400000) / __real_41300000) + fVar5 / __real_41300000;
  fVar9 = ((fVar7 + fVar10) - (fVar5 + fVar5)) / __real_41100000;
  fVar5 = powf((fVar10 + fVar10 + fVar7 + fVar5 * __real_3d4ccccd) / *(float *)(param_2 + 8),
               *(float *)(param_2 + 4) * __real_3f170a3d);
  fVar5 = fVar5 * __real_42c80000;
  if (fVar5 == 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = fVar9 * fVar9 + fVar8 * fVar8;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fVar7 = fVar7 * ___real_421acccd;
  }
  fVar8 = atan2f(fVar9,fVar8);
  fVar9 = __real_43b40000;
  fVar8 = fmodf((fVar8 * __real_43340000) / __real_40490fdb,__real_43b40000);
  if (fVar8 < 0.0) {
    fVar8 = fVar8 + fVar9;
  }
  __return_storage_ptr__->_Elems[0] = fVar5;
  __return_storage_ptr__->_Elems[1] = fVar7;
  __return_storage_ptr__->_Elems[2] = fVar8;
  return __return_storage_ptr__;
}

// RGBtoXYZ_f33 @ 14ff2af20

/* class std::array<float,9> __cdecl OpenColorIO_v2_4::ACES2::RGBtoXYZ_f33(struct
   OpenColorIO_v2_4::Primaries const & __ptr64) */

array<float,9> * __cdecl
OpenColorIO_v2_4::ACES2::RGBtoXYZ_f33(array<float,9> *__return_storage_ptr__,Primaries *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  longlong lVar12;
  longlong *plVar13;
  Primaries local_48 [8];
  longlong *local_40;
  
  plVar13 = (longlong *)build_conversion_matrix(local_48,param_1,0x553e81e0);
  pdVar11 = *(double **)(*plVar13 + 0x10);
  dVar3 = pdVar11[8];
  dVar4 = pdVar11[9];
  dVar5 = pdVar11[10];
  dVar6 = pdVar11[1];
  dVar7 = pdVar11[2];
  dVar8 = pdVar11[4];
  dVar9 = pdVar11[5];
  dVar10 = pdVar11[6];
  __return_storage_ptr__->_Elems[0] = (float)*pdVar11;
  __return_storage_ptr__->_Elems[1] = (float)dVar6;
  __return_storage_ptr__->_Elems[2] = (float)dVar7;
  __return_storage_ptr__->_Elems[3] = (float)dVar8;
  __return_storage_ptr__->_Elems[4] = (float)dVar9;
  __return_storage_ptr__->_Elems[5] = (float)dVar10;
  __return_storage_ptr__->_Elems[6] = (float)dVar3;
  __return_storage_ptr__->_Elems[7] = (float)dVar4;
  __return_storage_ptr__->_Elems[8] = (float)dVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_40 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40);
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// XYZtoRGB_f33 @ 14ff2b050

/* class std::array<float,9> __cdecl OpenColorIO_v2_4::ACES2::XYZtoRGB_f33(struct
   OpenColorIO_v2_4::Primaries const & __ptr64) */

array<float,9> * __cdecl
OpenColorIO_v2_4::ACES2::XYZtoRGB_f33(array<float,9> *__return_storage_ptr__,Primaries *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *local_50;
  Primaries local_48 [8];
  longlong *local_40;
  
  puVar13 = (undefined8 *)build_conversion_matrix(local_48,param_1,0x553e81e0);
  plVar14 = (longlong *)MatrixOpData::MatrixArray::inverse((MatrixArray *)*puVar13);
  pdVar11 = *(double **)(*plVar14 + 0x10);
  dVar3 = pdVar11[1];
  dVar4 = pdVar11[2];
  dVar5 = pdVar11[4];
  dVar6 = pdVar11[5];
  dVar7 = pdVar11[6];
  dVar8 = pdVar11[8];
  dVar9 = pdVar11[9];
  dVar10 = pdVar11[10];
  __return_storage_ptr__->_Elems[0] = (float)*pdVar11;
  __return_storage_ptr__->_Elems[1] = (float)dVar3;
  __return_storage_ptr__->_Elems[2] = (float)dVar4;
  __return_storage_ptr__->_Elems[3] = (float)dVar5;
  __return_storage_ptr__->_Elems[4] = (float)dVar6;
  __return_storage_ptr__->_Elems[5] = (float)dVar7;
  __return_storage_ptr__->_Elems[6] = (float)dVar8;
  __return_storage_ptr__->_Elems[7] = (float)dVar9;
  __return_storage_ptr__->_Elems[8] = (float)dVar10;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_50 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_40 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40);
      }
    }
  }
  return __return_storage_ptr__;
}

// Y_to_J @ 14ff2b1b0

/* float __cdecl OpenColorIO_v2_4::ACES2::Y_to_J(float,struct OpenColorIO_v2_4::ACES2::JMhParams
   const & __ptr64) */

float __cdecl OpenColorIO_v2_4::ACES2::Y_to_J(float param_1,JMhParams *param_2)

{
  float fVar1;
  
  fVar1 = powf(((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * *(float *)param_2)
               / __real_42c80000,__real_3ed70a3d);
  fVar1 = powf(((fVar1 * __real_43c80000) / (fVar1 + __real_41d90a3d)) / *(float *)(param_2 + 0xc),
               *(float *)(param_2 + 4) * __real_3f170a3d);
  return fVar1 * (float)((__real_3f800000 ^ (uint)param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff
                        ^ (uint)param_1) * __real_42c80000;
}

// any_below_zero @ 14ff2b250

/* bool __cdecl OpenColorIO_v2_4::ACES2::any_below_zero(class std::array<float,3> const & __ptr64)
    */

bool __cdecl OpenColorIO_v2_4::ACES2::any_below_zero(array<float,3> *param_1)

{
  if (((0.0 < param_1->_Elems[0] || param_1->_Elems[0] == 0.0) &&
      (0.0 < param_1->_Elems[1] || param_1->_Elems[1] == 0.0)) &&
     (0.0 < param_1->_Elems[2] || param_1->_Elems[2] == 0.0)) {
    return false;
  }
  return true;
}

// base_hue_for_position @ 14ff2b270

/* float __cdecl OpenColorIO_v2_4::ACES2::base_hue_for_position(int,int) */

float __cdecl OpenColorIO_v2_4::ACES2::base_hue_for_position(int param_1,int param_2)

{
  return ((float)param_1 * __real_43b40000) / (float)param_2;
}

// chroma_compress_norm @ 14ff2b2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl OpenColorIO_v2_4::ACES2::chroma_compress_norm(float,float) */

float __cdecl OpenColorIO_v2_4::ACES2::chroma_compress_norm(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_1 / __real_43340000) * __real_40490fdb;
  fVar1 = cosf(fVar2);
  fVar2 = sinf(fVar2);
  return ((((fVar1 * fVar1 - fVar2 * fVar2) * ___real_4183c07e + fVar1 * ___real_41357397 +
            (fVar1 * __real_40800000 * fVar1 * fVar1 - fVar1 * __real_40400000) * ___real_40fc4817 +
           fVar2 * ___real_416aa16c) - (fVar1 + fVar1) * fVar2 * ___real_40cbe964) +
          (fVar2 * __real_40400000 - fVar2 * __real_40800000 * fVar2 * fVar2) * ___real_41131926 +
         ___real_429a4207) * param_2;
}

// clamp_to_table_bounds @ 14ff2b3c0

/* int __cdecl OpenColorIO_v2_4::ACES2::clamp_to_table_bounds(int,int) */

int __cdecl OpenColorIO_v2_4::ACES2::clamp_to_table_bounds(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
  }
  iVar1 = param_2 + -1;
  if (iVar2 < param_2 + -1) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// compressGamut @ 14ff2b3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::compressGamut(class
   std::array<float,3> const & __ptr64,float,struct OpenColorIO_v2_4::ACES2::GamutCompressParams
   const & __ptr64,bool) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::compressGamut
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,float param_2,
          GamutCompressParams *param_3,bool param_4)

{
  float fVar1;
  float _X;
  float fVar2;
  int iVar3;
  array<float,3> *paVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_128 [32];
  array<float,3> local_e0;
  float local_d0 [2];
  float local_c8;
  array<float,2> local_c0 [2];
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_128;
  fVar14 = param_1->_Elems[1];
  fVar1 = param_1->_Elems[0];
  _X = param_1->_Elems[2];
  if ((fVar14 < __real_38d1b717) || (fVar13 = *(float *)param_3, fVar13 < fVar1)) {
    __return_storage_ptr__->_Elems[0] = fVar1;
    __return_storage_ptr__->_Elems[2] = _X;
    __return_storage_ptr__->_Elems[1] = 0.0;
  }
  else {
    local_d0 = (float  [2])cusp_from_table(_X,(Table3D *)(param_3 + 0x5bc));
    fVar2 = __real_3f800000;
    fVar11 = *(float *)(param_3 + 0xc);
    fVar10 = local_d0[0];
    fVar7 = __real_3fa66666 - local_d0[0] / fVar13;
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    fVar15 = (*(float *)(param_3 + 4) - local_d0[0]) * fVar7 + local_d0[0];
    local_c0[0] = (array<float,2>)local_d0;
    fVar8 = get_focus_gain(param_2,local_d0[0],fVar13);
    fVar7 = __real_43b40000;
    fVar9 = fmodf(_X,__real_43b40000);
    fVar12 = fVar9;
    if (fVar9 < 0.0) {
      fVar12 = fVar9 + fVar7;
    }
    iVar5 = 1 - (int)((fVar12 / __real_c3b40000) * fVar7);
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    iVar5 = 0x169;
    if (iVar3 < 0x169) {
      iVar5 = iVar3;
    }
    iVar6 = (iVar5 + 1) % 0x168;
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    iVar6 = 0x169;
    if (iVar3 < 0x169) {
      iVar6 = iVar3;
    }
    if (fVar9 < 0.0) {
      fVar9 = fVar9 + fVar7;
    }
    local_c8 = _X;
    local_d0[0] = fVar1;
    local_d0[1] = fVar14;
    paVar4 = find_gamut_boundary_intersection
                       (&local_e0,(array<float,3> *)local_d0,local_c0,fVar15,fVar13,
                        fVar8 * fVar13 * fVar11,
                        (*(float *)(param_3 + (longlong)iVar6 * 4 + 0x16b4) -
                        *(float *)(param_3 + (longlong)iVar5 * 4 + 0x16b4)) *
                        (fVar9 - (float)(iVar5 + -1)) +
                        *(float *)(param_3 + (longlong)iVar5 * 4 + 0x16b4),
                        *(float *)(param_3 + 0x10));
    local_c0[0]._Elems = *(float (*) [2])paVar4->_Elems;
    fVar7 = paVar4->_Elems[2];
    fVar12 = local_c0[0]._Elems[1];
    if (0.0 < fVar12) {
      local_d0[0] = reach_m_from_table(_X,(Table1D *)(param_3 + 0x14));
      fVar1 = local_c0[0]._Elems[0];
      fVar10 = get_focus_gain(local_c0[0]._Elems[0],fVar10,fVar13);
      fVar10 = fVar10 * fVar13 * fVar11;
      fVar11 = solve_J_intersect(fVar1,fVar12,fVar15,fVar13,fVar10);
      if (fVar15 <= fVar11) {
        fVar8 = (fVar13 - fVar11) * (fVar11 - fVar15);
      }
      else {
        fVar8 = (fVar11 - fVar15) * fVar11;
      }
      fVar11 = powf(fVar11 / fVar13,*(float *)(param_3 + 8));
      fVar14 = fVar14 / fVar12;
      fVar13 = ((fVar11 * fVar13 * local_d0[0]) /
               (fVar13 - (fVar8 / (fVar10 * fVar15)) * local_d0[0])) / fVar12;
      if (fVar13 <= __real_3f800347) {
        fVar13 = __real_3f800347;
      }
      fVar11 = fVar2 / fVar13;
      if (fVar2 / fVar13 <= __real_3f400000) {
        fVar11 = __real_3f400000;
      }
      fVar8 = ((fVar13 - fVar11) * (fVar2 - fVar11)) / (fVar13 - fVar2);
      fVar10 = (fVar14 - fVar11) / fVar8;
      if (param_4) {
        if (((fVar11 <= fVar14) && (__real_3f800347 < fVar13)) && (fVar14 <= fVar8 + fVar11)) {
          fVar14 = fVar11 - (fVar10 / (fVar10 - fVar2)) * fVar8;
        }
      }
      else if ((fVar11 <= fVar14) && (__real_3f800347 < fVar13)) {
        fVar14 = (fVar10 * fVar8) / (fVar10 + fVar2) + fVar11;
      }
      __return_storage_ptr__->_Elems[1] = (fVar12 - 0.0) * fVar14 + 0.0;
      __return_storage_ptr__->_Elems[0] = (fVar1 - fVar7) * fVar14 + fVar7;
    }
    else {
      __return_storage_ptr__->_Elems[0] = fVar1;
      __return_storage_ptr__->_Elems[1] = 0.0;
    }
    __return_storage_ptr__->_Elems[2] = _X;
  }
  return __return_storage_ptr__;
}

// compression_function @ 14ff2b860

/* float __cdecl OpenColorIO_v2_4::ACES2::compression_function(float,float,float,bool) */

float __cdecl
OpenColorIO_v2_4::ACES2::compression_function
          (float param_1,float param_2,float param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = ((param_3 - param_2) * (__real_3f800000 - param_2)) / (param_3 - __real_3f800000);
  fVar1 = (param_1 - param_2) / fVar2;
  if (param_4) {
    if (((param_2 <= param_1) && (__real_3f800347 < param_3)) && (param_1 <= fVar2 + param_2)) {
      return param_2 - (fVar1 / (fVar1 - __real_3f800000)) * fVar2;
    }
  }
  else if ((param_2 <= param_1) && (__real_3f800347 < param_3)) {
    return (fVar1 * fVar2) / (fVar1 + __real_3f800000) + param_2;
  }
  return param_1;
}

// cusp_from_table @ 14ff2b940

/* class std::array<float,2> __cdecl OpenColorIO_v2_4::ACES2::cusp_from_table(float,struct
   OpenColorIO_v2_4::ACES2::Table3D const & __ptr64) */

array<float,2> __cdecl OpenColorIO_v2_4::ACES2::cusp_from_table(float param_1,Table3D *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  array<float,2> aVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar6 = 0;
  iVar7 = 0x169;
  fVar8 = fmodf(param_1,__real_43b40000);
  if (fVar8 < 0.0) {
    fVar8 = fVar8 + __real_43b40000;
  }
  iVar5 = 1 - (int)((fVar8 / __real_c3b40000) * __real_43b40000);
  iVar1 = 0;
  if (0 < iVar5) {
    iVar1 = iVar5;
  }
  iVar5 = 0x169;
  if (iVar1 < 0x169) {
    iVar5 = iVar1;
  }
  do {
    iVar1 = iVar5;
    if (param_1 < *(float *)(param_2 + (longlong)iVar5 * 0xc + 8) ||
        param_1 == *(float *)(param_2 + (longlong)iVar5 * 0xc + 8)) {
      iVar1 = iVar6;
      iVar7 = iVar5;
    }
    iVar5 = (iVar7 + iVar1) / 2;
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = 0x169;
    if (iVar6 < 0x169) {
      iVar5 = iVar6;
    }
    iVar6 = iVar1;
  } while (iVar1 + 1 < iVar7);
  iVar6 = 1;
  if (1 < iVar7) {
    iVar6 = iVar7;
  }
  lVar2 = (longlong)iVar6;
  lVar3 = (longlong)iVar6;
  fVar8 = (param_1 - *(float *)(param_2 + lVar2 * 0xc + -4)) /
          (*(float *)(param_2 + lVar3 * 0xc + 8) - *(float *)(param_2 + lVar2 * 0xc + -4));
  aVar4._Elems[0] =
       (*(float *)(param_2 + lVar3 * 0xc) - *(float *)(param_2 + lVar2 * 0xc + -0xc)) * fVar8 +
       *(float *)(param_2 + lVar2 * 0xc + -0xc);
  aVar4._Elems[1] =
       (*(float *)(param_2 + lVar3 * 0xc + 4) - *(float *)(param_2 + lVar2 * 0xc + -8)) * fVar8 +
       *(float *)(param_2 + lVar2 * 0xc + -8);
  return (array<float,2>)aVar4._Elems;
}

// evaluate_gamma_fit @ 14ff2ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl OpenColorIO_v2_4::ACES2::evaluate_gamma_fit(class std::array<float,2> const &
   __ptr64,class std::array<float,3> const * __ptr64
   const,float,float,float,float,float,float,struct OpenColorIO_v2_4::ACES2::JMhParams const &
   __ptr64) */

bool __cdecl
OpenColorIO_v2_4::ACES2::evaluate_gamma_fit
          (array<float,2> *param_1,array<float,3> *param_2,float param_3,float param_4,float param_5
          ,float param_6,float param_7,float param_8,JMhParams *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float _Y;
  array<float,3> *paVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_138 [32];
  array<float,3> local_f8;
  array<float,3> local_e8;
  array<float,3> local_d8 [2];
  ulonglong local_b8;
  
  _Y = __real_3fe8ba2e;
  fVar3 = __real_3f800000;
  fVar2 = __real_38d1b717;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_138;
  fVar1 = param_1->_Elems[0];
  uVar5 = 0;
  fVar9 = (param_5 - fVar1) * __real_3e99999a + fVar1;
  fVar10 = __real_42c80000 / param_4;
  fVar7 = __real_3fa66666 - fVar1 / param_5;
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  while( true ) {
    fVar6 = param_2->_Elems[0];
    fVar8 = fVar3;
    if (fVar9 < fVar6) {
      if (param_5 <= fVar6) {
        fVar6 = param_5;
      }
      fVar8 = param_5 - fVar6;
      if (param_5 - fVar6 <= fVar2) {
        fVar8 = fVar2;
      }
      fVar6 = log10f((param_5 - fVar9) / fVar8);
      fVar6 = powf(fVar6,_Y);
      fVar8 = fVar6 + fVar3;
    }
    paVar4 = find_gamut_boundary_intersection
                       (&local_f8,param_2,param_1,(param_6 - fVar1) * fVar7 + fVar1,param_5,
                        param_5 * param_7 * fVar8,param_3,param_8);
    local_d8[0]._Elems[0] = (float)*(undefined8 *)paVar4->_Elems;
    local_d8[0]._Elems[1] = (float)((ulonglong)*(undefined8 *)paVar4->_Elems >> 0x20);
    local_d8[0]._Elems[2] = param_2->_Elems[2];
    paVar4 = JMh_to_RGB(&local_e8,local_d8,param_9);
    if ((((float)*(undefined8 *)paVar4->_Elems * fVar10 <= fVar3) &&
        ((float)((ulonglong)*(undefined8 *)paVar4->_Elems >> 0x20) * fVar10 <= fVar3)) &&
       (paVar4->_Elems[2] * fVar10 <= fVar3)) break;
    uVar5 = uVar5 + 1;
    param_2 = param_2 + 1;
    if (2 < uVar5) {
      return true;
    }
  }
  return false;
}

// find_gamut_boundary_intersection @ 14ff2bce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::find_gamut_boundary_intersection(class
   std::array<float,3> const & __ptr64,class std::array<float,2> const &
   __ptr64,float,float,float,float,float) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::find_gamut_boundary_intersection
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,array<float,2> *param_2,
          float param_3,float param_4,float param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = param_2->_Elems[1] * ___real_3f8425af;
  fVar6 = param_2->_Elems[0];
  fVar2 = solve_J_intersect(param_1->_Elems[0],param_1->_Elems[1],param_3,param_4,param_5);
  fVar3 = solve_J_intersect(fVar6,fVar8,param_3,param_4,param_5);
  fVar1 = __real_3f800000;
  fVar4 = param_4 - fVar2;
  if (fVar2 < param_3) {
    fVar4 = fVar2;
  }
  fVar7 = ((fVar2 - param_3) * fVar4) / (param_3 * param_5);
  fVar4 = powf((param_4 - fVar2) / (param_4 - fVar3),__real_3f800000 / param_6);
  fVar5 = ((fVar4 * (param_4 - fVar3) * fVar8) / ((fVar8 * fVar7 + param_4) - fVar6)) / fVar8;
  fVar4 = powf(fVar2 / fVar3,fVar1 / param_7);
  fVar1 = __real_3df5c28f;
  __return_storage_ptr__->_Elems[2] = fVar2;
  fVar4 = ((fVar4 * fVar3) / (fVar6 / fVar8 - fVar7)) / fVar8;
  fVar6 = fVar5;
  if (fVar4 <= fVar5) {
    fVar6 = fVar4;
  }
  fVar3 = fVar1 - (float)((uint)(fVar4 - fVar5) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar4 = fVar4 / fVar1;
  fVar8 = (fVar6 - fVar4 * fVar4 * fVar4 * fVar1 * __real_3e2aaaab) * fVar8;
  __return_storage_ptr__->_Elems[1] = fVar8;
  __return_storage_ptr__->_Elems[0] = fVar8 * fVar7 + fVar2;
  return __return_storage_ptr__;
}

// gamut_compress_fwd @ 14ff2bef0

/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::gamut_compress_fwd(class
   std::array<float,3> const & __ptr64,struct OpenColorIO_v2_4::ACES2::GamutCompressParams const &
   __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::gamut_compress_fwd
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,
          GamutCompressParams *param_2)

{
  compressGamut(__return_storage_ptr__,param_1,param_1->_Elems[0],param_2,false);
  return __return_storage_ptr__;
}

// gamut_compress_inv @ 14ff2bf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::gamut_compress_inv(class
   std::array<float,3> const & __ptr64,struct OpenColorIO_v2_4::ACES2::GamutCompressParams const &
   __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::gamut_compress_inv
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,
          GamutCompressParams *param_2)

{
  array<float,3> *paVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  float local_28 [2];
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28 = (float  [2])cusp_from_table(param_1->_Elems[2],(Table3D *)(param_2 + 0x5bc));
  fVar2 = param_1->_Elems[0];
  if ((*(float *)param_2 - local_28[0]) * __real_3e99999a + local_28[0] < fVar2) {
    paVar1 = compressGamut((array<float,3> *)local_28,param_1,fVar2,param_2,true);
    local_28 = *(float (*) [2])paVar1->_Elems;
    local_20 = paVar1->_Elems[2];
    fVar2 = local_28[0];
  }
  paVar1 = compressGamut((array<float,3> *)local_28,param_1,fVar2,param_2,true);
  fVar2 = paVar1->_Elems[2];
  *(undefined8 *)__return_storage_ptr__->_Elems = *(undefined8 *)paVar1->_Elems;
  __return_storage_ptr__->_Elems[2] = fVar2;
  return __return_storage_ptr__;
}

// get_focus_gain @ 14ff2bff0

/* float __cdecl OpenColorIO_v2_4::ACES2::get_focus_gain(float,float,float) */

float __cdecl OpenColorIO_v2_4::ACES2::get_focus_gain(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_3 - param_2) * __real_3e99999a + param_2;
  if (fVar2 < param_1) {
    if (param_3 <= param_1) {
      param_1 = param_3;
    }
    fVar1 = param_3 - param_1;
    if (param_3 - param_1 <= __real_38d1b717) {
      fVar1 = __real_38d1b717;
    }
    fVar2 = log10f((param_3 - fVar2) / fVar1);
    fVar2 = powf(fVar2,__real_3fe8ba2e);
    return fVar2 + __real_3f800000;
  }
  return __real_3f800000;
}

// get_reach_boundary @ 14ff2c060

/* class std::array<float,3> __cdecl
   OpenColorIO_v2_4::ACES2::get_reach_boundary(float,float,float,class std::array<float,2> const &
   __ptr64,float,float,float,float,struct OpenColorIO_v2_4::ACES2::Table1D const & __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::get_reach_boundary
          (array<float,3> *__return_storage_ptr__,float param_1,float param_2,float param_3,
          array<float,2> *param_4,float param_5,float param_6,float param_7,float param_8,
          Table1D *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = reach_m_from_table(param_3,param_9);
  fVar2 = get_focus_gain(param_1,param_4->_Elems[0],param_6);
  fVar2 = fVar2 * param_6 * param_8;
  fVar3 = solve_J_intersect(param_1,param_2,param_5,param_6,fVar2);
  if (param_5 <= fVar3) {
    fVar4 = (param_6 - fVar3) * (fVar3 - param_5);
  }
  else {
    fVar4 = (fVar3 - param_5) * fVar3;
  }
  __return_storage_ptr__->_Elems[0] = param_1;
  fVar3 = powf(fVar3 / param_6,param_7);
  __return_storage_ptr__->_Elems[2] = param_3;
  __return_storage_ptr__->_Elems[1] =
       (fVar3 * param_6 * fVar1) / (param_6 - (fVar4 / (fVar2 * param_5)) * fVar1);
  return __return_storage_ptr__;
}

// hue_dependent_upper_hull_gamma @ 14ff2c1b0

/* float __cdecl OpenColorIO_v2_4::ACES2::hue_dependent_upper_hull_gamma(float,struct
   OpenColorIO_v2_4::ACES2::Table1D const & __ptr64) */

float __cdecl
OpenColorIO_v2_4::ACES2::hue_dependent_upper_hull_gamma(float param_1,Table1D *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = __real_43b40000;
  fVar5 = fmodf(param_1,__real_43b40000);
  fVar6 = fVar5;
  if (fVar5 < 0.0) {
    fVar6 = fVar5 + fVar1;
  }
  iVar3 = 1 - (int)((fVar6 / __real_c3b40000) * fVar1);
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = 0x169;
  if (iVar2 < 0x169) {
    iVar3 = iVar2;
  }
  iVar4 = (iVar3 + 1) % 0x168;
  iVar2 = 0;
  if (0 < iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = 0x169;
  if (iVar2 < 0x169) {
    iVar4 = iVar2;
  }
  if (fVar5 < 0.0) {
    fVar5 = fVar5 + fVar1;
  }
  return (*(float *)(param_2 + (longlong)iVar4 * 4) - *(float *)(param_2 + (longlong)iVar3 * 4)) *
         (fVar5 - (float)(iVar3 + -1)) + *(float *)(param_2 + (longlong)iVar3 * 4);
}

// hue_position_in_uniform_table @ 14ff2c280

/* int __cdecl OpenColorIO_v2_4::ACES2::hue_position_in_uniform_table(float,int) */

int __cdecl OpenColorIO_v2_4::ACES2::hue_position_in_uniform_table(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = fmodf(param_1,__real_43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + __real_43b40000;
  }
  return (int)((fVar1 / __real_43b40000) * (float)param_2);
}

// init_ChromaCompressParams @ 14ff2c2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct OpenColorIO_v2_4::ACES2::ChromaCompressParams __cdecl
   OpenColorIO_v2_4::ACES2::init_ChromaCompressParams(float) */

void __cdecl OpenColorIO_v2_4::ACES2::init_ChromaCompressParams(float param_1)

{
  float fVar1;
  float *pfVar2;
  void *_Src;
  float *in_RCX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM1_Da;
  float fVar8;
  Primaries local_688 [112];
  Primaries local_618 [1552];
  
  pfVar2 = (float *)init_ToneScaleParams(param_1);
  fVar7 = *pfVar2;
  fVar6 = pfVar2[1];
  pfVar2 = (float *)init_JMhParams(local_688);
  fVar5 = pfVar2[1];
  fVar1 = pfVar2[3];
  fVar3 = powf(((float)((uint)in_XMM1_Da & __xmm_7fffffff7fffffff7fffffff7fffffff) * *pfVar2) /
               __real_42c80000,__real_3ed70a3d);
  fVar4 = log10f(fVar7 / fVar6);
  fVar8 = __real_3fa66666 - fVar4 * ___real_3f65a1ca;
  memset(in_RCX + 5,0,0x5a8);
  fVar5 = powf(((fVar3 * __real_43c80000) / (fVar3 + __real_41d90a3d)) / fVar1,
               fVar5 * __real_3f170a3d);
  fVar6 = __real_3e4ccccd;
  *in_RCX = fVar5 * (float)(((uint)__real_3f800000 ^ (uint)in_XMM1_Da) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)in_XMM1_Da) *
                    __real_42c80000;
  if (fVar6 < 0.0) {
    fVar5 = sqrtf(fVar6);
  }
  else {
    fVar5 = SQRT(fVar6);
  }
  fVar1 = __real_3f800000;
  if (fVar8 <= fVar6) {
    fVar8 = fVar6;
  }
  fVar6 = (fVar5 + ___real_3fbd70a4) * __real_3f170a3d;
  fVar5 = fVar4 * ___real_40fd70a4 + __real_4019999a;
  in_RCX[2] = fVar8;
  fVar7 = __real_3f000000 / fVar7;
  in_RCX[1] = fVar1 / fVar6;
  fVar6 = __real_3e9ca6ca;
  in_RCX[3] = fVar7;
  fVar7 = in_XMM1_Da * ___real_3d0a6762;
  in_RCX[4] = fVar5;
  fVar7 = powf(fVar7,fVar6);
  in_RCX[0x16f] = fVar7 - ___real_3ee71759;
  _Src = (void *)make_reach_m_table(local_618,fVar6);
  memcpy(in_RCX + 5,_Src,0x5a8);
  return;
}

// init_GamutCompressParams @ 14ff2c500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct OpenColorIO_v2_4::ACES2::GamutCompressParams __cdecl
   OpenColorIO_v2_4::ACES2::init_GamutCompressParams(float,struct OpenColorIO_v2_4::Primaries const
   & __ptr64) */

void __cdecl OpenColorIO_v2_4::ACES2::init_GamutCompressParams(float param_1,Primaries *param_2)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 *puVar4;
  void *pvVar5;
  array<float,2> aVar6;
  void *in_RCX;
  ulonglong uVar7;
  uint uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM1_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_4098 [32];
  float local_4048;
  float fStack_4044;
  Primaries local_4040 [120];
  Primaries local_3fc8 [4];
  float local_3fc4 [1087];
  array<float,2> local_2ec8 [2];
  undefined8 local_2eb8;
  undefined8 uStack_2eb0;
  undefined8 local_2ea8;
  undefined8 uStack_2ea0;
  undefined8 local_2e98;
  undefined8 uStack_2e90;
  undefined8 local_2e88;
  undefined8 uStack_2e80;
  undefined8 local_2e78;
  undefined8 uStack_2e70;
  undefined8 local_2e68;
  undefined8 uStack_2e60;
  undefined8 local_2e58;
  undefined8 uStack_2e50;
  Primaries local_2e48 [4352];
  float local_1d48;
  float local_1d44;
  float local_1d40;
  float local_1d3c;
  float local_1d38;
  undefined1 local_1d34 [1448];
  Table3D local_178c [4344];
  undefined1 local_694 [1452];
  array<float,3> local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  ulonglong local_c0;
  ulonglong uVar9;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_4098;
  pfVar3 = (float *)init_ToneScaleParams(param_1);
  fVar12 = *pfVar3;
  fVar17 = pfVar3[1];
  fVar18 = pfVar3[4];
  pfVar3 = (float *)init_JMhParams(local_4040);
  fVar15 = __real_3ed70a3d;
  fVar13 = __real_42c80000;
  local_2ea8 = *(undefined8 *)(pfVar3 + 4);
  uStack_2ea0 = *(undefined8 *)(pfVar3 + 6);
  local_2e98 = *(undefined8 *)(pfVar3 + 8);
  uStack_2e90 = *(undefined8 *)(pfVar3 + 10);
  fVar11 = *pfVar3;
  fVar16 = pfVar3[1];
  fVar1 = pfVar3[3];
  local_2e88 = *(undefined8 *)(pfVar3 + 0xc);
  uStack_2e80 = *(undefined8 *)(pfVar3 + 0xe);
  local_2e78 = *(undefined8 *)(pfVar3 + 0x10);
  uStack_2e70 = *(undefined8 *)(pfVar3 + 0x12);
  local_2e68 = *(undefined8 *)(pfVar3 + 0x14);
  uStack_2e60 = *(undefined8 *)(pfVar3 + 0x16);
  local_2e58 = *(undefined8 *)(pfVar3 + 0x18);
  uStack_2e50 = *(undefined8 *)(pfVar3 + 0x1a);
  fVar10 = powf(((float)((uint)in_XMM1_Da & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar11) /
                __real_42c80000,__real_3ed70a3d);
  fVar16 = fVar16 * __real_3f170a3d;
  fVar10 = powf(((fVar10 * __real_43c80000) / (fVar10 + __real_41d90a3d)) / fVar1,fVar16);
  fVar18 = fVar18 * fVar13;
  fVar10 = fVar10 * (float)(((uint)__real_3f800000 ^ (uint)in_XMM1_Da) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)in_XMM1_Da) * fVar13;
  fVar11 = powf(((float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar11) / fVar13,
                fVar15);
  local_2ec8[0]._Elems[0] =
       powf(((fVar11 * __real_43c80000) / (fVar11 + __real_41d90a3d)) / fVar1,fVar16);
  fVar18 = local_2ec8[0]._Elems[0] *
           (float)(((uint)__real_3f800000 ^ (uint)fVar18) & __xmm_7fffffff7fffffff7fffffff7fffffff ^
                  (uint)fVar18) * fVar13;
  fVar12 = log10f(fVar12 / fVar17);
  fVar17 = fVar12 * ___real_3d8f5c29 + ___real_3f91eb85;
  fVar12 = fVar12 * ___real_40173333 + ___real_3faccccd;
  puVar4 = (undefined8 *)init_JMhParams(local_4040);
  local_2eb8 = *puVar4;
  uStack_2eb0 = puVar4[1];
  local_2ea8 = puVar4[2];
  uStack_2ea0 = puVar4[3];
  local_2e98 = puVar4[4];
  uStack_2e90 = puVar4[5];
  local_2e88 = puVar4[6];
  uStack_2e80 = puVar4[7];
  local_2e78 = puVar4[8];
  uStack_2e70 = puVar4[9];
  local_2e68 = puVar4[10];
  uStack_2e60 = puVar4[0xb];
  local_2e58 = puVar4[0xc];
  uStack_2e50 = puVar4[0xd];
  memset(local_1d34,0,0x1c48);
  local_1d48 = fVar10;
  local_1d44 = fVar18;
  if (__real_3e4ccccd < 0.0) {
    fVar11 = sqrtf(__real_3e4ccccd);
  }
  else {
    fVar11 = SQRT(__real_3e4ccccd);
  }
  fVar11 = __real_3f800000 / ((fVar11 + ___real_3fbd70a4) * __real_3f170a3d);
  local_1d40 = fVar11;
  local_1d3c = fVar12;
  local_1d38 = fVar17;
  pvVar5 = (void *)make_reach_m_table(local_3fc8,fVar11);
  memcpy(local_1d34,pvVar5,0x5a8);
  pvVar5 = (void *)make_gamut_table(local_2e48,fVar11);
  memcpy(local_3fc8,pvVar5,0x10f8);
  memcpy(local_178c,local_3fc8,0x10f8);
  memset(local_2e48,0,0x5a8);
  memset(local_3fc4,0,0x5a0);
  uVar7 = 0;
  uVar9 = uVar7;
  do {
    fVar16 = __real_bf800000;
    fVar14 = (float)(int)uVar9;
    *(undefined4 *)(local_2e48 + uVar7) = 0xbf800000;
    aVar6 = cusp_from_table(fVar14,local_178c);
    fVar13 = __real_3ecccccd;
    fVar1 = __real_40a00000;
    local_4048 = aVar6._Elems[0];
    fStack_4044 = aVar6._Elems[1];
    fVar11 = fVar10 - local_4048;
    local_2ec8[0]._Elems[0] = local_4048;
    local_2ec8[0]._Elems[1] = fStack_4044;
    local_e8._Elems[1] = fStack_4044;
    local_e8._Elems[0] = fVar11 * __real_3c23d70a + local_4048;
    local_d8 = fStack_4044;
    local_cc = fStack_4044;
    local_dc = fVar11 * __real_3f000000 + local_4048;
    local_d0 = fVar11 * __real_3f7d70a4 + local_4048;
    fVar15 = __real_3ecccccd;
    fVar11 = 0.0;
    local_e8._Elems[2] = fVar14;
    local_d4 = fVar14;
    local_c8 = fVar14;
    while ((fVar14 = fVar15, fVar14 < fVar1 &&
           (bVar2 = evaluate_gamma_fit(local_2ec8,&local_e8,fVar14,in_XMM1_Da,fVar10,fVar18,fVar12,
                                       fVar17,(JMhParams *)&local_2eb8), !bVar2))) {
      fVar15 = fVar14 + fVar13;
      fVar11 = fVar14;
    }
    fVar1 = __real_3727c5ac;
    fVar13 = fVar14 - fVar11;
    while (fVar1 < fVar13) {
      fVar13 = (fVar14 + fVar11) * __real_3f000000;
      bVar2 = evaluate_gamma_fit(local_2ec8,&local_e8,fVar13,in_XMM1_Da,fVar10,fVar18,fVar12,fVar17,
                                 (JMhParams *)&local_2eb8);
      fVar15 = fVar13;
      if (bVar2) {
        *(float *)(local_2e48 + uVar7) = fVar13;
        fVar14 = fVar13;
        fVar15 = fVar11;
        fVar16 = fVar13;
      }
      fVar11 = fVar15;
      fVar13 = fVar14 - fVar15;
    }
    *(float *)((longlong)local_3fc4 + uVar7) = fVar16;
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    uVar7 = uVar7 + 4;
  } while ((int)uVar8 < 0x168);
  memcpy(local_694,local_3fc8,0x5a8);
  memcpy(in_RCX,&local_1d48,0x1c5c);
  return;
}

// init_JMhParams @ 14ff2cb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct OpenColorIO_v2_4::ACES2::JMhParams __cdecl OpenColorIO_v2_4::ACES2::init_JMhParams(struct
   OpenColorIO_v2_4::Primaries const & __ptr64) */

Primaries * __cdecl OpenColorIO_v2_4::ACES2::init_JMhParams(Primaries *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  array<float,9> *paVar13;
  Primaries *in_RDX;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined1 local_1d8 [16];
  array<float,9> local_1c8;
  array<float,9> local_1a0;
  array<float,9> local_178;
  array<float,9> local_150;
  array<float,9> local_128;
  array<float,9> local_100;
  array<float,9> local_d8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_218;
  paVar13 = XYZtoRGB_f33(&local_100,(Primaries *)&DAT_1553e84d0);
  fVar18 = paVar13->_Elems[0];
  fVar14 = paVar13->_Elems[1];
  fVar15 = paVar13->_Elems[2];
  fVar16 = paVar13->_Elems[3];
  fVar17 = paVar13->_Elems[8];
  fVar20 = paVar13->_Elems[4];
  fVar21 = paVar13->_Elems[5];
  fVar22 = paVar13->_Elems[6];
  fVar1 = paVar13->_Elems[7];
  paVar13 = RGBtoXYZ_f33(&local_100,in_RDX);
  fVar12 = __real_42c80000;
  fVar2 = paVar13->_Elems[5];
  fVar3 = paVar13->_Elems[6];
  fVar4 = paVar13->_Elems[7];
  fVar25 = paVar13->_Elems[1] * __real_42c80000 + paVar13->_Elems[0] * __real_42c80000 +
           paVar13->_Elems[2] * __real_42c80000;
  fVar24 = paVar13->_Elems[4] * __real_42c80000 + paVar13->_Elems[3] * __real_42c80000 +
           fVar2 * __real_42c80000;
  fVar23 = fVar4 * __real_42c80000 + fVar3 * __real_42c80000 + paVar13->_Elems[8] * __real_42c80000;
  fVar19 = fVar14 * fVar24 + fVar18 * fVar25 + fVar15 * fVar23;
  fVar20 = fVar20 * fVar24 + fVar16 * fVar25 + fVar21 * fVar23;
  fVar21 = fVar1 * fVar24 + fVar22 * fVar25 + fVar17 * fVar23;
  fVar14 = powf(__real_3b02cf75,__real_40800000);
  fVar15 = powf(__real_3f800000 - fVar14,__real_40000000);
  fVar17 = __real_43fa0000;
  fVar15 = fVar15 * __real_3dcccccd;
  fVar16 = powf(__real_43fa0000,__real_3eaaaaab);
  fVar18 = __real_3ed70a3d;
  uVar11 = _UNK_15061cc7c;
  uVar10 = _UNK_15061cc78;
  uVar9 = _UNK_15061cc74;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_1f0 = fVar24 / fVar19;
  local_1f8 = fVar24 / fVar20;
  fVar19 = local_1f0 * fVar19;
  fVar22 = fVar15 * fVar16 + fVar14 * __real_3e4ccccd * fVar17;
  local_1f4 = fVar24 / fVar21;
  fVar17 = powf(((float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar22) / fVar12,
                __real_3ed70a3d);
  uStack_1e4 = (uint)fVar2 & uVar9 ^ (uint)fVar2;
  uStack_1e0 = (uint)fVar3 & uVar10 ^ (uint)fVar3;
  uStack_1dc = (uint)fVar4 & uVar11 ^ (uint)fVar4;
  fVar20 = local_1f8 * fVar20;
  local_1e8 = ((float)(((uint)__real_3f800000 ^ (uint)fVar19) & uVar8 ^ (uint)fVar19) *
               __real_43c80000 * fVar17) / (fVar17 + __real_41d90a3d);
  fVar17 = powf(((float)((uint)fVar20 & uVar8) * fVar22) / fVar12,fVar18);
  fVar21 = local_1f4 * fVar21;
  local_1d8 = ZEXT416((uint)(((float)(((uint)__real_3f800000 ^ (uint)fVar20) & uVar8 ^ (uint)fVar20)
                              * __real_43c80000 * fVar17) / (fVar17 + __real_41d90a3d)));
  fVar15 = powf(((float)((uint)fVar21 & uVar8) * fVar22) / fVar12,fVar18);
  fVar14 = __real_41d90a3d;
  fVar17 = __real_43c80000;
  fVar20 = (float)(((uint)__real_3f800000 ^ (uint)fVar21) & uVar8 ^ (uint)fVar21) * __real_43c80000;
  fVar16 = fVar15 + __real_41d90a3d;
  fVar18 = powf(fVar22,fVar18);
  *(float *)(param_1 + 0x10) = fVar25;
  *(float *)(param_1 + 0x14) = fVar24;
  *(float *)(param_1 + 0x18) = fVar23;
  *(float *)param_1 = fVar22;
  fVar24 = __real_41a00000 / fVar24;
  if (fVar24 < 0.0) {
    fVar24 = sqrtf(fVar24);
  }
  else {
    fVar24 = SQRT(fVar24);
  }
  fVar15 = ((fVar20 * fVar15) / fVar16) * __real_3d4ccccd;
  local_100._Elems[8] = 100.0;
  *(float *)(param_1 + 4) = fVar24 + ___real_3fbd70a4;
  *(ulonglong *)(param_1 + 0x1c) = CONCAT44(local_1f8,local_1f0);
  *(float *)(param_1 + 0x24) = local_1f4;
  *(float *)(param_1 + 8) = local_1e8 + local_1e8 + (float)local_1d8._0_4_ + fVar15;
  *(float *)(param_1 + 0xc) = (fVar18 * fVar17) / (fVar18 + fVar14);
  local_100._Elems[0] = ___xmm_00000000000000000000000042c80000;
  local_100._Elems[1] = _UNK_153668b14;
  local_100._Elems[2] = _UNK_153668b18;
  local_100._Elems[3] = _UNK_153668b1c;
  local_100._Elems[4] = ___xmm_00000000000000000000000042c80000;
  local_100._Elems[5] = _UNK_153668b14;
  local_100._Elems[6] = _UNK_153668b18;
  local_100._Elems[7] = _UNK_153668b1c;
  paVar13 = RGBtoXYZ_f33(&local_178,in_RDX);
  local_d8._Elems._0_8_ = *(undefined8 *)paVar13->_Elems;
  local_d8._Elems._8_8_ = *(undefined8 *)(paVar13->_Elems + 2);
  local_d8._Elems._16_8_ = *(undefined8 *)(paVar13->_Elems + 4);
  local_d8._Elems._24_8_ = *(undefined8 *)(paVar13->_Elems + 6);
  local_d8._Elems[8] = paVar13->_Elems[8];
  paVar13 = XYZtoRGB_f33(&local_150,(Primaries *)&DAT_1553e84d0);
  local_128._Elems._0_8_ = *(undefined8 *)paVar13->_Elems;
  local_128._Elems._8_8_ = *(undefined8 *)(paVar13->_Elems + 2);
  local_128._Elems._16_8_ = *(undefined8 *)(paVar13->_Elems + 4);
  local_128._Elems._24_8_ = *(undefined8 *)(paVar13->_Elems + 6);
  local_128._Elems[8] = paVar13->_Elems[8];
  mult_f33_f33(&local_1c8,&local_128,&local_d8);
  local_128._Elems[8] = local_1c8._Elems[8];
  local_128._Elems[0] = local_1c8._Elems[0];
  local_128._Elems[1] = local_1c8._Elems[1];
  local_128._Elems[2] = local_1c8._Elems[2];
  local_128._Elems[3] = local_1c8._Elems[3];
  local_128._Elems[4] = local_1c8._Elems[4];
  local_128._Elems[5] = local_1c8._Elems[5];
  local_128._Elems[6] = local_1c8._Elems[6];
  local_128._Elems[7] = local_1c8._Elems[7];
  paVar13 = mult_f33_f33(&local_1a0,&local_128,&local_100);
  fVar17 = paVar13->_Elems[8];
  uVar5 = *(undefined8 *)(paVar13->_Elems + 2);
  uVar6 = *(undefined8 *)(paVar13->_Elems + 4);
  uVar7 = *(undefined8 *)(paVar13->_Elems + 6);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)paVar13->_Elems;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(float *)(param_1 + 0x48) = fVar17;
  paVar13 = invert_f33(&local_1a0,(array<float,9> *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(paVar13->_Elems + 2);
  fVar17 = paVar13->_Elems[8];
  uVar6 = *(undefined8 *)(paVar13->_Elems + 4);
  uVar7 = *(undefined8 *)(paVar13->_Elems + 6);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)paVar13->_Elems;
  *(undefined8 *)(param_1 + 0x54) = uVar5;
  *(undefined8 *)(param_1 + 0x5c) = uVar6;
  *(undefined8 *)(param_1 + 100) = uVar7;
  *(float *)(param_1 + 0x6c) = fVar17;
  return param_1;
}

// init_ToneScaleParams @ 14ff2d0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct OpenColorIO_v2_4::ACES2::ToneScaleParams __cdecl
   OpenColorIO_v2_4::ACES2::init_ToneScaleParams(float) */

void __cdecl OpenColorIO_v2_4::ACES2::init_ToneScaleParams(float param_1)

{
  float *in_RCX;
  float fVar1;
  float in_XMM1_Da;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = __real_42c80000;
  fVar3 = in_XMM1_Da / __real_42c80000;
  fVar2 = (fVar3 + __real_3e23d70a) * fVar3;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar4 = (fVar2 + fVar3) * __real_3f000000;
  fVar2 = logf(fVar3);
  fVar1 = logf(fVar1);
  fVar6 = ((fVar2 / fVar1) * __real_44400000 + __real_43000000) / fVar4;
  fVar1 = logf(fVar3);
  fVar2 = logf(__real_40000000);
  fVar2 = ((fVar1 / fVar2) * __real_3e0f5c29 + __real_3f800000) * ___real_3dcd10f4;
  fVar1 = (fVar2 + __real_3e23d70a) * fVar2;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  fVar5 = (fVar1 + fVar2) * __real_3f000000;
  fVar3 = powf(fVar6 / (fVar6 + __real_3f800000),__real_3f933333);
  fVar1 = __real_3f5e9bd4;
  fVar5 = fVar5 / (fVar4 / fVar3);
  fVar3 = powf(fVar5,__real_3f5e9bd4);
  fVar3 = (float)((uint)(fVar3 * fVar4) ^ __xmm_80000000800000008000000080000000);
  fVar1 = powf(fVar5,fVar1);
  fVar3 = __real_3e3851ec / (fVar3 / (fVar1 - __real_3f800000));
  fVar1 = powf(fVar6 / (fVar6 + fVar3),__real_3f933333);
  in_RCX[1] = 100.0;
  in_RCX[2] = 1.15;
  in_RCX[3] = 0.04;
  *in_RCX = in_XMM1_Da;
  in_RCX[7] = fVar4 / fVar1;
  in_RCX[4] = fVar2;
  in_RCX[5] = fVar3 * fVar4;
  in_RCX[6] = fVar1;
  return;
}

// invert_f33 @ 14ff2d2d0

/* class std::array<float,9> __cdecl OpenColorIO_v2_4::ACES2::invert_f33(class std::array<float,9>
   const & __ptr64) */

array<float,9> * __cdecl
OpenColorIO_v2_4::ACES2::invert_f33(array<float,9> *__return_storage_ptr__,array<float,9> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong *plVar13;
  void *pvVar14;
  ulong64 uVar15;
  double *pdVar16;
  ulonglong uVar17;
  double *pdVar18;
  longlong *local_a0;
  undefined **local_98 [2];
  double *local_88;
  longlong local_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_64;
  double *local_60;
  undefined8 uStack_58;
  double *local_50;
  
  MatrixOpData::MatrixArray::MatrixArray((MatrixArray *)local_98);
  *local_88 = (double)param_1->_Elems[0];
  local_88[1] = (double)param_1->_Elems[1];
  local_88[2] = (double)param_1->_Elems[2];
  local_88[4] = (double)param_1->_Elems[3];
  local_88[5] = (double)param_1->_Elems[4];
  local_88[6] = (double)param_1->_Elems[5];
  local_88[8] = (double)param_1->_Elems[6];
  local_88[9] = (double)param_1->_Elems[7];
  local_88[10] = (double)param_1->_Elems[8];
  plVar13 = (longlong *)MatrixOpData::MatrixArray::inverse((MatrixArray *)local_98);
  lVar12 = *plVar13;
  local_70 = ArrayT<double>::vftable;
  local_68 = *(undefined4 *)(lVar12 + 8);
  local_64 = *(undefined4 *)(lVar12 + 0xc);
  local_60 = (double *)0x0;
  uStack_58 = 0;
  pdVar16 = (double *)0x0;
  local_50 = (double *)0x0;
  uVar17 = *(longlong *)(lVar12 + 0x18) - *(longlong *)(lVar12 + 0x10) >> 3;
  if (uVar17 == 0) {
    pdVar16 = (double *)0x0;
  }
  else {
    if (0x1fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::vector<double,std::allocator<double>_>::_Xlength();
    }
    uVar2 = uVar17 * 8;
    if (uVar2 != 0) {
      if (uVar2 < 0x1000) {
        pdVar16 = ::operator_new(uVar2);
      }
      else {
        if (uVar2 + 0x27 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
        pvVar14 = ::operator_new(uVar2 + 0x27);
        if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        pdVar16 = (double *)((longlong)pvVar14 + 0x27U & 0xffffffffffffffe0);
        pdVar16[-1] = (double)pvVar14;
      }
    }
    local_50 = pdVar16 + uVar17;
    local_60 = pdVar16;
    memmove(pdVar16,*(void **)(lVar12 + 0x10),
            *(longlong *)(lVar12 + 0x18) - (longlong)*(void **)(lVar12 + 0x10));
  }
  pdVar18 = pdVar16;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_a0 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    pdVar18 = local_60;
    if ((int)lVar12 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      pdVar18 = local_60;
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0);
        pdVar18 = local_60;
      }
    }
  }
  dVar4 = pdVar16[1];
  dVar5 = pdVar16[2];
  dVar6 = pdVar16[4];
  dVar7 = pdVar16[5];
  dVar8 = pdVar16[6];
  dVar9 = pdVar16[8];
  dVar10 = pdVar16[9];
  dVar11 = pdVar16[10];
  __return_storage_ptr__->_Elems[0] = (float)*pdVar16;
  __return_storage_ptr__->_Elems[1] = (float)dVar4;
  __return_storage_ptr__->_Elems[2] = (float)dVar5;
  __return_storage_ptr__->_Elems[3] = (float)dVar6;
  __return_storage_ptr__->_Elems[4] = (float)dVar7;
  __return_storage_ptr__->_Elems[5] = (float)dVar8;
  __return_storage_ptr__->_Elems[6] = (float)dVar9;
  __return_storage_ptr__->_Elems[7] = (float)dVar10;
  __return_storage_ptr__->_Elems[8] = (float)dVar11;
  if (pdVar18 != (double *)0x0) {
    uVar17 = ((longlong)local_50 - (longlong)pdVar18 >> 3) * 8;
    pdVar16 = pdVar18;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      pdVar16 = (double *)pdVar18[-1];
      if (0x1f < (ulonglong)((longlong)pdVar18 + (-8 - (longlong)pdVar16))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pdVar16,uVar17);
  }
  local_98[0] = ArrayT<double>::vftable;
  if (local_88 != (double *)0x0) {
    uVar15 = local_78 - (longlong)local_88 & 0xfffffffffffffff8;
    pdVar16 = local_88;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      pdVar16 = (double *)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pdVar16))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pdVar16,uVar15);
  }
  return __return_storage_ptr__;
}

// make_gamut_table @ 14ff2d610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* struct OpenColorIO_v2_4::ACES2::Table3D __cdecl OpenColorIO_v2_4::ACES2::make_gamut_table(struct
   OpenColorIO_v2_4::Primaries const & __ptr64,float) */

Primaries * __cdecl OpenColorIO_v2_4::ACES2::make_gamut_table(Primaries *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 *puVar10;
  array<float,3> *paVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  float *pfVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_XMM2_Da;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_23f8 [32];
  array<float,3> local_23d8;
  Primaries local_23c8 [112];
  array<float,3> local_2358 [2];
  undefined8 local_2338;
  undefined8 uStack_2330;
  undefined8 local_2328;
  undefined8 uStack_2320;
  undefined8 local_2318;
  undefined8 uStack_2310;
  undefined8 local_2308;
  undefined8 uStack_2300;
  undefined8 local_22f8;
  undefined8 uStack_22f0;
  undefined8 local_22e8;
  undefined8 uStack_22e0;
  undefined8 local_22d8;
  undefined8 uStack_22d0;
  float local_22c8 [1088];
  undefined4 local_11c8;
  undefined4 local_11c4;
  float local_11c0;
  undefined4 local_11bc;
  float local_11b8;
  float local_11b4;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_23f8;
  puVar10 = (undefined8 *)init_JMhParams(local_23c8);
  local_2338 = *puVar10;
  uStack_2330 = puVar10[1];
  local_2328 = puVar10[2];
  uStack_2320 = puVar10[3];
  local_2318 = puVar10[4];
  uStack_2310 = puVar10[5];
  local_2308 = puVar10[6];
  uStack_2300 = puVar10[7];
  local_22f8 = puVar10[8];
  uStack_22f0 = puVar10[9];
  local_22e8 = puVar10[10];
  uStack_22e0 = puVar10[0xb];
  local_22d8 = puVar10[0xc];
  uStack_22d0 = puVar10[0xd];
  memset(local_22c8,0,0x10f8);
  dVar9 = __real_3feaaaaaaaaaaaab;
  dVar8 = __real_3fe5555555555555;
  dVar7 = __real_3fd5555555555555;
  fVar6 = __real_43b40000;
  fVar4 = __real_3f000000;
  uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  fVar29 = in_XMM2_Da / __real_42c80000;
  pfVar18 = local_22c8 + 1;
  uVar12 = 0;
  uVar14 = uVar12;
  do {
    fVar28 = (float)(int)uVar14 / fVar6;
    fVar23 = fmodf(fVar28 * __real_40c00000,__real_40000000);
    fVar23 = fVar3 - (float)((uint)(fVar23 - fVar3) & uVar15);
    if (__real_3e2aaaab <= fVar28) {
      dVar27 = (double)fVar28;
      fVar24 = fVar23;
      fVar25 = 0.0;
      fVar26 = fVar3;
      if (dVar7 <= dVar27) {
        if (fVar4 <= fVar28) {
          fVar25 = fVar3;
          if (dVar8 <= dVar27) {
            fVar26 = 0.0;
            fVar28 = fVar23;
            if (dVar9 <= dVar27) goto LAB_14ff2d79e;
          }
          else {
            fVar24 = 0.0;
            fVar26 = fVar23;
          }
        }
        else {
          fVar24 = 0.0;
          fVar25 = fVar23;
        }
      }
    }
    else {
      fVar28 = 0.0;
      fVar26 = fVar23;
LAB_14ff2d79e:
      fVar24 = fVar3;
      fVar25 = fVar28;
    }
    local_2358[0]._Elems[0] = (fVar24 + 0.0) * fVar29;
    local_2358[0]._Elems[1] = (fVar26 + 0.0) * fVar29;
    local_2358[0]._Elems[2] = (fVar25 + 0.0) * fVar29;
    paVar11 = RGB_to_JMh(&local_23d8,local_2358,(JMhParams *)&local_2338);
    uVar20 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar20;
    uVar5 = *(undefined8 *)paVar11->_Elems;
    pfVar18[-1] = (float)uVar5;
    *pfVar18 = (float)((ulonglong)uVar5 >> 0x20);
    pfVar18[1] = paVar11->_Elems[2];
    pfVar18 = pfVar18 + 3;
    if (0x167 < (int)uVar20) {
      pfVar18 = local_22c8 + 5;
      uVar14 = uVar12;
      uVar16 = uVar12;
      uVar19 = uVar12;
      do {
        fVar3 = *(float *)((longlong)local_22c8 + uVar12 + 8);
        uVar15 = (uint)uVar16;
        pfVar2 = (float *)((longlong)local_22c8 + uVar14 + 8);
        fVar4 = *(float *)((longlong)local_22c8 + uVar14 + 0x14);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          uVar12 = uVar14;
        }
        uVar20 = uVar15;
        if ((NAN(fVar3) || NAN(*pfVar2)) || (*pfVar2 > fVar3 || fVar3 == *pfVar2)) {
          uVar20 = (uint)uVar19;
        }
        fVar3 = *(float *)((longlong)local_22c8 + uVar12 + 8);
        if (fVar4 < fVar3) {
          uVar12 = (longlong)pfVar18 - (longlong)(local_22c8 + 2);
        }
        fVar29 = *(float *)((longlong)local_22c8 + uVar12 + 8);
        uVar21 = uVar15 + 1;
        if (fVar3 <= fVar4) {
          uVar21 = uVar20;
        }
        pfVar2 = (float *)((longlong)local_22c8 + uVar14 + 0x20);
        if (*pfVar2 <= fVar29 && fVar29 != *pfVar2) {
          uVar12 = uVar14 + 0x18;
        }
        fVar3 = *(float *)((longlong)local_22c8 + uVar12 + 8);
        uVar20 = uVar15 + 2;
        if ((NAN(fVar29) || NAN(*pfVar2)) || (*pfVar2 > fVar29 || fVar29 == *pfVar2)) {
          uVar20 = uVar21;
        }
        pfVar2 = (float *)((longlong)local_22c8 + uVar14 + 0x2c);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          uVar12 = uVar14 + 0x24;
        }
        fVar4 = *(float *)((longlong)local_22c8 + uVar12 + 8);
        uVar21 = uVar15 + 3;
        if ((NAN(fVar3) || NAN(*pfVar2)) || (*pfVar2 > fVar3 || fVar3 == *pfVar2)) {
          uVar21 = uVar20;
        }
        pfVar2 = (float *)((longlong)local_22c8 + uVar14 + 0x38);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          uVar12 = uVar14 + 0x30;
        }
        fVar3 = *(float *)((longlong)local_22c8 + uVar12 + 8);
        uVar20 = uVar15 + 4;
        if ((NAN(fVar4) || NAN(*pfVar2)) || (*pfVar2 > fVar4 || fVar4 == *pfVar2)) {
          uVar20 = uVar21;
        }
        pfVar2 = (float *)((longlong)local_22c8 + uVar14 + 0x44);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          uVar12 = uVar14 + 0x3c;
        }
        uVar21 = uVar15 + 5;
        if ((NAN(fVar3) || NAN(*pfVar2)) || (*pfVar2 > fVar3 || fVar3 == *pfVar2)) {
          uVar21 = uVar20;
        }
        uVar16 = (ulonglong)(uVar15 + 6);
        uVar14 = uVar14 + 0x48;
        pfVar18 = pfVar18 + 0x12;
        uVar19 = (ulonglong)uVar21;
      } while ((int)(uVar15 + 6) < 0x168);
      memset(&local_11bc,0,0x10e0);
      iVar17 = uVar21 + 2;
      lVar22 = 0x24;
      pfVar18 = &local_11b8;
      do {
        lVar13 = (longlong)((iVar17 + -2) % 0x168);
        pfVar18[-1] = local_22c8[lVar13 * 3];
        *pfVar18 = local_22c8[lVar13 * 3 + 1];
        pfVar18[1] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + -1) % 0x168);
        pfVar18[2] = local_22c8[lVar13 * 3];
        pfVar18[3] = local_22c8[lVar13 * 3 + 1];
        pfVar18[4] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)(iVar17 % 0x168);
        pfVar18[5] = local_22c8[lVar13 * 3];
        pfVar18[6] = local_22c8[lVar13 * 3 + 1];
        pfVar18[7] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + 1) % 0x168);
        pfVar18[8] = local_22c8[lVar13 * 3];
        pfVar18[9] = local_22c8[lVar13 * 3 + 1];
        pfVar18[10] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + 2) % 0x168);
        pfVar18[0xb] = local_22c8[lVar13 * 3];
        pfVar18[0xc] = local_22c8[lVar13 * 3 + 1];
        pfVar18[0xd] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + 3) % 0x168);
        pfVar18[0xe] = local_22c8[lVar13 * 3];
        pfVar18[0xf] = local_22c8[lVar13 * 3 + 1];
        pfVar18[0x10] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + 4) % 0x168);
        pfVar18[0x11] = local_22c8[lVar13 * 3];
        pfVar18[0x12] = local_22c8[lVar13 * 3 + 1];
        pfVar18[0x13] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + 5) % 0x168);
        pfVar18[0x14] = local_22c8[lVar13 * 3];
        pfVar18[0x15] = local_22c8[lVar13 * 3 + 1];
        pfVar18[0x16] = local_22c8[lVar13 * 3 + 2];
        lVar13 = (longlong)((iVar17 + 6) % 0x168);
        pfVar18[0x17] = local_22c8[lVar13 * 3];
        pfVar18[0x18] = local_22c8[lVar13 * 3 + 1];
        pfVar18[0x19] = local_22c8[lVar13 * 3 + 2];
        iVar1 = iVar17 + 7;
        iVar17 = iVar17 + 10;
        lVar13 = (longlong)(iVar1 % 0x168);
        pfVar18[0x1a] = local_22c8[lVar13 * 3];
        pfVar18[0x1b] = local_22c8[lVar13 * 3 + 1];
        pfVar18[0x1c] = local_22c8[lVar13 * 3 + 2];
        lVar22 = lVar22 + -1;
        pfVar18 = pfVar18 + 0x1e;
      } while (lVar22 != 0);
      local_11c8 = local_e8;
      local_11c4 = local_e4;
      local_dc = local_11bc;
      local_d8 = local_11b8;
      local_11c0 = local_e0 - fVar6;
      local_d4 = local_11b4 + fVar6;
      memcpy(param_1,&local_11c8,0x10f8);
      return param_1;
    }
  } while( true );
}

// make_reach_m_table @ 14ff2dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* struct OpenColorIO_v2_4::ACES2::Table1D __cdecl
   OpenColorIO_v2_4::ACES2::make_reach_m_table(struct OpenColorIO_v2_4::Primaries const &
   __ptr64,float) */

Primaries * __cdecl OpenColorIO_v2_4::ACES2::make_reach_m_table(Primaries *param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  array<float,3> *paVar8;
  int iVar9;
  Primaries *pPVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint in_XMM2_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_218 [32];
  array<float,3> local_1f8;
  array<float,3> local_1e8;
  Primaries local_1d8 [112];
  array<float,3> local_168;
  array<float,3> local_158;
  undefined8 local_148;
  undefined8 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_218;
  pfVar7 = (float *)init_JMhParams(local_1d8);
  local_118 = *(undefined8 *)(pfVar7 + 4);
  uStack_110 = *(undefined8 *)(pfVar7 + 6);
  local_128 = *pfVar7;
  fVar2 = pfVar7[1];
  fStack_120 = pfVar7[2];
  fVar3 = pfVar7[3];
  local_108 = *(undefined8 *)(pfVar7 + 8);
  uStack_100 = *(undefined8 *)(pfVar7 + 10);
  local_f8 = *(undefined8 *)(pfVar7 + 0xc);
  uStack_f0 = *(undefined8 *)(pfVar7 + 0xe);
  local_e8 = *(undefined8 *)(pfVar7 + 0x10);
  uStack_e0 = *(undefined8 *)(pfVar7 + 0x12);
  local_d8 = *(undefined8 *)(pfVar7 + 0x14);
  uStack_d0 = *(undefined8 *)(pfVar7 + 0x16);
  local_c8 = *(undefined8 *)(pfVar7 + 0x18);
  uStack_c0 = *(undefined8 *)(pfVar7 + 0x1a);
  fStack_124 = fVar2;
  fStack_11c = fVar3;
  fVar11 = powf(((float)(in_XMM2_Da & __xmm_7fffffff7fffffff7fffffff7fffffff) * local_128) /
                __real_42c80000,__real_3ed70a3d);
  fVar12 = powf(((fVar11 * __real_43c80000) / (fVar11 + __real_41d90a3d)) / fVar3,
                fVar2 * __real_3f170a3d);
  fVar12 = fVar12 * (float)((__real_3f800000 ^ in_XMM2_Da) & __xmm_7fffffff7fffffff7fffffff7fffffff
                           ^ in_XMM2_Da) * __real_42c80000;
  memset(param_1,0,0x5a8);
  fVar11 = __real_44a28000;
  fVar3 = __real_42480000;
  fVar2 = __real_3f000000;
  dVar4 = __real_3f847ae147ae147b;
  iVar9 = 0;
  pPVar10 = param_1;
  local_168._Elems[0] = fVar12;
  do {
    fVar14 = fVar3;
    fVar17 = 0.0;
    local_168._Elems[2] = (float)iVar9;
    do {
      fVar15 = fVar14;
      local_168._Elems[1] = fVar15;
      paVar8 = JMh_to_RGB(&local_1f8,&local_168,(JMhParams *)&local_128);
      local_148 = *(undefined8 *)paVar8->_Elems;
      fVar14 = fVar15;
      if ((((float)local_148 < 0.0) ||
          (local_148._4_4_ = (float)((ulonglong)local_148 >> 0x20), local_148._4_4_ < 0.0)) ||
         (paVar8->_Elems[2] <= 0.0 && paVar8->_Elems[2] != 0.0)) break;
      fVar14 = fVar15 + fVar3;
      fVar17 = fVar15;
    } while (fVar14 < fVar11);
    fVar13 = fVar14 - fVar17;
    fVar5 = fVar12;
    fVar6 = (float)iVar9;
    fVar15 = local_158._Elems[0];
    fVar16 = local_158._Elems[2];
    while (local_158._Elems[2] = fVar6, local_158._Elems[0] = fVar5, dVar4 < (double)fVar13) {
      fVar16 = (fVar14 + fVar17) * fVar2;
      local_158._Elems[1] = fVar16;
      paVar8 = JMh_to_RGB(&local_1e8,&local_158,(JMhParams *)&local_128);
      uVar1 = *(undefined8 *)paVar8->_Elems;
      fVar15 = fVar16;
      if (((0.0 <= (float)uVar1) &&
          (local_138._4_4_ = (float)((ulonglong)uVar1 >> 0x20), 0.0 <= local_138._4_4_)) &&
         (0.0 < paVar8->_Elems[2] || paVar8->_Elems[2] == 0.0)) {
        fVar15 = fVar14;
        fVar17 = fVar16;
      }
      fVar13 = fVar15 - fVar17;
      fVar5 = local_158._Elems[0];
      fVar6 = local_158._Elems[2];
      fVar14 = fVar15;
      fVar15 = local_158._Elems[0];
      fVar16 = local_158._Elems[2];
      local_138 = uVar1;
    }
    *(float *)pPVar10 = fVar14;
    iVar9 = iVar9 + 1;
    pPVar10 = pPVar10 + 4;
    local_158._Elems[0] = fVar15;
    local_158._Elems[2] = fVar16;
    if (0x167 < iVar9) {
      return param_1;
    }
  } while( true );
}

// make_upper_hull_gamma @ 14ff2df90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* struct OpenColorIO_v2_4::ACES2::Table1D __cdecl
   OpenColorIO_v2_4::ACES2::make_upper_hull_gamma(struct OpenColorIO_v2_4::ACES2::Table3D const &
   __ptr64,float,float,float,float,float,struct OpenColorIO_v2_4::ACES2::JMhParams const & __ptr64)
    */

Table3D * __cdecl
OpenColorIO_v2_4::ACES2::make_upper_hull_gamma
          (Table3D *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          JMhParams *param_7)

{
  float fVar1;
  bool bVar2;
  array<float,2> aVar3;
  Table3D *in_RDX;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  JMhParams *in_stack_00000040;
  undefined1 auStackY_6f8 [32];
  float local_6a8;
  float fStack_6a4;
  array<float,2> local_6a0;
  float local_698;
  undefined1 local_694 [1432];
  undefined4 local_fc;
  array<float,3> local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  memset(local_694,0,0x5a4);
  memset(param_1,0,0x5a8);
  pfVar4 = &local_698;
  iVar5 = 0;
  do {
    fVar10 = __real_bf800000;
    fVar8 = (float)iVar5;
    *pfVar4 = -1.0;
    aVar3 = cusp_from_table(fVar8,in_RDX);
    fVar6 = __real_3ecccccd;
    fVar1 = __real_40a00000;
    local_6a8 = aVar3._Elems[0];
    fStack_6a4 = aVar3._Elems[1];
    fVar7 = param_4 - local_6a8;
    local_6a0._Elems[0] = local_6a8;
    local_6a0._Elems[1] = fStack_6a4;
    local_e8._Elems[1] = fStack_6a4;
    local_e8._Elems[0] = fVar7 * __real_3c23d70a + local_6a8;
    local_d8 = fStack_6a4;
    local_cc = fStack_6a4;
    local_dc = fVar7 * __real_3f000000 + local_6a8;
    local_d0 = fVar7 * __real_3f7d70a4 + local_6a8;
    fVar9 = __real_3ecccccd;
    fVar7 = 0.0;
    local_e8._Elems[2] = fVar8;
    local_d4 = fVar8;
    local_c8 = fVar8;
    while ((fVar8 = fVar9, fVar8 < fVar1 &&
           (bVar2 = evaluate_gamma_fit(&local_6a0,&local_e8,fVar8,param_3,param_4,param_5,param_6,
                                       param_7._0_4_,in_stack_00000040), !bVar2))) {
      fVar9 = fVar8 + fVar6;
      fVar7 = fVar8;
    }
    fVar1 = __real_3727c5ac;
    fVar6 = fVar8 - fVar7;
    while (fVar1 < fVar6) {
      fVar6 = (fVar8 + fVar7) * __real_3f000000;
      bVar2 = evaluate_gamma_fit(&local_6a0,&local_e8,fVar6,param_3,param_4,param_5,param_6,
                                 param_7._0_4_,in_stack_00000040);
      fVar9 = fVar6;
      if (bVar2) {
        *pfVar4 = fVar6;
        fVar8 = fVar6;
        fVar9 = fVar7;
        fVar10 = fVar6;
      }
      fVar7 = fVar9;
      fVar6 = fVar8 - fVar9;
    }
    *(float *)((longlong)pfVar4 + (longlong)(param_1 + (4 - (longlong)&local_698))) = fVar10;
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar5 < 0x168);
  *(undefined4 *)param_1 = local_fc;
  *(float *)(param_1 + 0x5a4) = local_698;
  return param_1;
}

// mult_f33_f33 @ 14ff2e2d0

/* class std::array<float,9> __cdecl OpenColorIO_v2_4::ACES2::mult_f33_f33(class std::array<float,9>
   const & __ptr64,class std::array<float,9> const & __ptr64) */

array<float,9> * __cdecl
OpenColorIO_v2_4::ACES2::mult_f33_f33
          (array<float,9> *__return_storage_ptr__,array<float,9> *param_1,array<float,9> *param_2)

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
  float fVar11;
  float fVar12;
  
  fVar1 = param_1->_Elems[1];
  fVar2 = param_1->_Elems[0];
  fVar3 = param_1->_Elems[2];
  fVar4 = param_1->_Elems[3];
  fVar5 = param_2->_Elems[4];
  fVar6 = param_2->_Elems[7];
  __return_storage_ptr__->_Elems[0] =
       param_2->_Elems[3] * fVar1 + param_2->_Elems[0] * fVar2 + param_2->_Elems[6] * fVar3;
  fVar7 = param_2->_Elems[5];
  fVar8 = param_1->_Elems[4];
  fVar9 = param_2->_Elems[8];
  fVar10 = param_1->_Elems[5];
  __return_storage_ptr__->_Elems[1] = param_2->_Elems[1] * fVar2 + fVar5 * fVar1 + fVar6 * fVar3;
  fVar5 = param_2->_Elems[1];
  fVar6 = param_2->_Elems[3];
  fVar11 = param_2->_Elems[6];
  __return_storage_ptr__->_Elems[2] = param_2->_Elems[2] * fVar2 + fVar7 * fVar1 + fVar9 * fVar3;
  fVar1 = param_2->_Elems[2];
  fVar2 = param_2->_Elems[4];
  fVar3 = param_2->_Elems[5];
  fVar7 = param_2->_Elems[7];
  fVar9 = param_2->_Elems[8];
  fVar12 = param_1->_Elems[7];
  __return_storage_ptr__->_Elems[3] = fVar4 * param_2->_Elems[0] + fVar8 * fVar6 + fVar10 * fVar11;
  fVar6 = param_2->_Elems[3];
  fVar11 = param_1->_Elems[8];
  __return_storage_ptr__->_Elems[4] = fVar4 * fVar5 + fVar8 * fVar2 + fVar10 * fVar7;
  fVar2 = param_2->_Elems[6];
  __return_storage_ptr__->_Elems[5] = fVar4 * fVar1 + fVar8 * fVar3 + fVar10 * fVar9;
  fVar1 = param_1->_Elems[6];
  fVar3 = param_2->_Elems[1];
  fVar4 = param_2->_Elems[2];
  fVar5 = param_2->_Elems[5];
  fVar7 = param_2->_Elems[4];
  fVar8 = param_2->_Elems[7];
  __return_storage_ptr__->_Elems[6] = fVar1 * param_2->_Elems[0] + fVar12 * fVar6 + fVar11 * fVar2;
  __return_storage_ptr__->_Elems[7] = fVar1 * fVar3 + fVar12 * fVar7 + fVar11 * fVar8;
  __return_storage_ptr__->_Elems[8] = fVar1 * fVar4 + fVar12 * fVar5 + fVar11 * param_2->_Elems[8];
  return __return_storage_ptr__;
}

// next_position_in_table @ 14ff2e480

/* int __cdecl OpenColorIO_v2_4::ACES2::next_position_in_table(int,int) */

int __cdecl OpenColorIO_v2_4::ACES2::next_position_in_table(int param_1,int param_2)

{
  return (param_1 + 1) % param_2;
}

// outside_hull @ 14ff2e4a0

/* bool __cdecl OpenColorIO_v2_4::ACES2::outside_hull(class std::array<float,3> const & __ptr64) */

bool __cdecl OpenColorIO_v2_4::ACES2::outside_hull(array<float,3> *param_1)

{
  if (((param_1->_Elems[0] <= __real_3f800000) && (param_1->_Elems[1] <= __real_3f800000)) &&
     (param_1->_Elems[2] <= __real_3f800000)) {
    return false;
  }
  return true;
}

// panlrc_forward @ 14ff2e4e0

/* float __cdecl OpenColorIO_v2_4::ACES2::panlrc_forward(float,float) */

float __cdecl OpenColorIO_v2_4::ACES2::panlrc_forward(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = powf(((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * param_2) /
               __real_42c80000,__real_3ed70a3d);
  return ((float)((__real_3f800000 ^ (uint)param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff ^
                 (uint)param_1) * __real_43c80000 * fVar1) / (fVar1 + __real_41d90a3d);
}

// panlrc_inverse @ 14ff2e550

/* float __cdecl OpenColorIO_v2_4::ACES2::panlrc_inverse(float,float) */

float __cdecl OpenColorIO_v2_4::ACES2::panlrc_inverse(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = powf(((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_41d90a3d) /
               (__real_43c80000 - (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)),
               __real_40186186);
  return fVar1 * (((float)((__real_3f800000 ^ (uint)param_1) &
                           __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)param_1) * __real_42c80000
                  ) / param_2);
}

// reach_m_from_table @ 14ff2e5d0

/* float __cdecl OpenColorIO_v2_4::ACES2::reach_m_from_table(float,struct
   OpenColorIO_v2_4::ACES2::Table1D const & __ptr64) */

float __cdecl OpenColorIO_v2_4::ACES2::reach_m_from_table(float param_1,Table1D *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar1 = __real_43b40000;
  fVar5 = fmodf(param_1,__real_43b40000);
  if (fVar5 < 0.0) {
    fVar5 = fVar5 + fVar1;
  }
  iVar2 = (int)((fVar5 / fVar1) * fVar1);
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  iVar2 = 0x169;
  if (iVar4 < 0x169) {
    iVar2 = iVar4;
  }
  iVar3 = (iVar2 + 1) % 0x168;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = 0x169;
  if (iVar4 < 0x169) {
    iVar3 = iVar4;
  }
  return ((param_1 - (float)iVar2) / (float)(iVar3 - iVar2)) *
         (*(float *)(param_2 + (longlong)iVar3 * 4) - *(float *)(param_2 + (longlong)iVar2 * 4)) +
         *(float *)(param_2 + (longlong)iVar2 * 4);
}

// smin @ 14ff2e6b0

/* float __cdecl OpenColorIO_v2_4::ACES2::smin(float,float,float) */

float __cdecl OpenColorIO_v2_4::ACES2::smin(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 - param_2;
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  fVar1 = param_3 - (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 / param_3;
  return param_2 - fVar2 * fVar2 * fVar2 * param_3 * __real_3e2aaaab;
}

// solve_J_intersect @ 14ff2e700

/* float __cdecl OpenColorIO_v2_4::ACES2::solve_J_intersect(float,float,float,float,float) */

float __cdecl
OpenColorIO_v2_4::ACES2::solve_J_intersect
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 <= param_1) {
    fVar3 = (float)((uint)((param_2 * param_4) / (param_3 * param_5) +
                          param_2 / param_5 + __real_3f800000) ^
                   __xmm_80000000800000008000000080000000);
    fVar2 = (param_2 * param_4) / param_5 + param_1;
  }
  else {
    fVar3 = __real_3f800000 - param_2 / param_5;
    fVar2 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  }
  fVar1 = fVar3 * fVar3 - (param_2 / (param_3 * param_5)) * __real_40800000 * fVar2;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (param_3 <= param_1) {
    fVar1 = fVar1 - fVar3;
  }
  else {
    fVar1 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000) - fVar1;
  }
  return (fVar2 + fVar2) / fVar1;
}

// toe_fwd @ 14ff2e800

/* float __cdecl OpenColorIO_v2_4::ACES2::toe_fwd(float,float,float,float) */

float __cdecl
OpenColorIO_v2_4::ACES2::toe_fwd(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 <= param_2) {
    fVar3 = __real_3a83126f;
    if (__real_3a83126f <= param_4) {
      fVar3 = param_4;
    }
    fVar1 = fVar3 * fVar3 + param_3 * param_3;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar2 = (fVar1 + param_2) / (fVar3 + param_2);
    fVar1 = fVar2 * param_1 - fVar1;
    fVar3 = fVar3 * __real_40800000 * fVar2 * param_1 + fVar1 * fVar1;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    param_1 = (fVar3 + fVar1) * __real_3f000000;
  }
  return param_1;
}

// toe_inv @ 14ff2e8e0

/* float __cdecl OpenColorIO_v2_4::ACES2::toe_inv(float,float,float,float) */

float __cdecl
OpenColorIO_v2_4::ACES2::toe_inv(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_1 <= param_2) {
    fVar2 = __real_3a83126f;
    if (__real_3a83126f <= param_4) {
      fVar2 = param_4;
    }
    fVar1 = fVar2 * fVar2 + param_3 * param_3;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    param_1 = (fVar1 * param_1 + param_1 * param_1) /
              (((fVar1 + param_2) / (fVar2 + param_2)) * (fVar2 + param_1));
  }
  return param_1;
}

// tonescale_chroma_compress_fwd @ 14ff2e990

/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::tonescale_chroma_compress_fwd(class
   std::array<float,3> const & __ptr64,struct OpenColorIO_v2_4::ACES2::JMhParams const &
   __ptr64,struct OpenColorIO_v2_4::ACES2::ToneScaleParams const & __ptr64,struct
   OpenColorIO_v2_4::ACES2::ChromaCompressParams const & __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::tonescale_chroma_compress_fwd
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,JMhParams *param_2,
          ToneScaleParams *param_3,ChromaCompressParams *param_4)

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
  float fVar11;
  float fVar12;
  
  fVar8 = __real_42c80000;
  fVar12 = __real_3f800000;
  fVar11 = param_1->_Elems[2];
  fVar10 = *(float *)(param_2 + 4) * __real_3f170a3d;
  fVar6 = param_1->_Elems[1];
  fVar2 = powf((float)((uint)param_1->_Elems[0] & __xmm_7fffffff7fffffff7fffffff7fffffff) /
               __real_42c80000,__real_3f800000 / fVar10);
  fVar3 = __real_43c80000;
  fVar2 = powf((fVar2 * *(float *)(param_2 + 0xc) * __real_41d90a3d) /
               (__real_43c80000 - fVar2 * *(float *)(param_2 + 0xc)),__real_40186186);
  fVar2 = (fVar2 * (((float)(((uint)__real_3f800000 ^ (uint)param_1->_Elems[0]) &
                             __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)param_1->_Elems[0]) *
                    fVar8) / *(float *)param_2)) / fVar8;
  fVar7 = fVar2 + *(float *)(param_3 + 0x14);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = powf(fVar2 / fVar7,*(float *)(param_3 + 8));
  fVar2 = fVar2 * *(float *)(param_3 + 0x1c);
  fVar2 = (fVar2 * fVar2) / (fVar2 + *(float *)(param_3 + 0xc));
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 * *(float *)(param_3 + 4);
  fVar7 = powf(((float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) * *(float *)param_2) /
               fVar8,__real_3ed70a3d);
  fVar3 = powf(((fVar7 * fVar3) / (fVar7 + __real_41d90a3d)) / *(float *)(param_2 + 0xc),fVar10);
  fVar3 = fVar3 * (float)(((uint)__real_3f800000 ^ (uint)fVar2) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)fVar2) * fVar8;
  if (fVar6 != 0.0) {
    fVar11 = param_1->_Elems[2];
    fVar8 = fVar3 / *(float *)param_4;
    fVar12 = fVar12 - fVar8;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar7 = chroma_compress_norm(fVar11,*(float *)(param_4 + 0x5bc));
    fVar10 = reach_m_from_table(fVar11,(Table1D *)(param_4 + 0x14));
    fVar4 = powf(fVar8,*(float *)(param_4 + 4));
    fVar2 = *(float *)(param_4 + 0x10);
    fVar4 = (fVar10 * fVar4) / fVar7;
    fVar10 = fVar8 * fVar8 + *(float *)(param_4 + 0xc);
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar1 = *(float *)(param_4 + 8);
    fVar9 = fVar4 - __real_3a83126f;
    fVar5 = powf(fVar3 / param_1->_Elems[0],*(float *)(param_4 + 4));
    fVar6 = toe_fwd(fVar4 - (fVar5 * fVar6) / fVar7,fVar9,fVar12 * fVar1,fVar10);
    fVar6 = toe_fwd(fVar4 - fVar6,fVar4,fVar8 * fVar2,fVar12);
    fVar6 = fVar6 * fVar7;
  }
  __return_storage_ptr__->_Elems[0] = fVar3;
  __return_storage_ptr__->_Elems[1] = fVar6;
  __return_storage_ptr__->_Elems[2] = fVar11;
  return __return_storage_ptr__;
}

// tonescale_chroma_compress_inv @ 14ff2ecd0

/* class std::array<float,3> __cdecl OpenColorIO_v2_4::ACES2::tonescale_chroma_compress_inv(class
   std::array<float,3> const & __ptr64,struct OpenColorIO_v2_4::ACES2::JMhParams const &
   __ptr64,struct OpenColorIO_v2_4::ACES2::ToneScaleParams const & __ptr64,struct
   OpenColorIO_v2_4::ACES2::ChromaCompressParams const & __ptr64) */

array<float,3> * __cdecl
OpenColorIO_v2_4::ACES2::tonescale_chroma_compress_inv
          (array<float,3> *__return_storage_ptr__,array<float,3> *param_1,JMhParams *param_2,
          ToneScaleParams *param_3,ChromaCompressParams *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b8;
  float local_b4 [43];
  
  fVar2 = __real_42c80000;
  fVar12 = __real_3f800000;
  fVar11 = param_1->_Elems[1];
  fVar1 = param_1->_Elems[2];
  fVar13 = *(float *)(param_2 + 4) * __real_3f170a3d;
  fVar8 = param_1->_Elems[0];
  fVar6 = *(float *)(param_2 + 0xc);
  fVar4 = powf((float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) / __real_42c80000,
               __real_3f800000 / fVar13);
  fVar5 = *(float *)param_2;
  fVar4 = fVar4 * fVar6;
  fVar4 = powf((fVar4 * __real_41d90a3d) / (__real_43c80000 - fVar4),__real_40186186);
  local_b4[0] = *(float *)param_3 / (*(float *)(param_3 + 4) * *(float *)(param_3 + 0x18));
  local_b8 = (fVar4 * (((float)(((uint)__real_3f800000 ^ (uint)fVar8) &
                                __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)fVar8) * fVar2) /
                      fVar5)) / fVar2;
  pfVar3 = &local_b8;
  if (local_b4[0] <= local_b8) {
    pfVar3 = local_b4;
  }
  fVar4 = *pfVar3;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar9 = (*(float *)(param_3 + 0xc) * __real_40800000 + fVar4) * fVar4;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  fVar4 = powf(*(float *)(param_3 + 0x1c) / ((fVar9 + fVar4) * __real_3f000000),
               fVar12 / *(float *)(param_3 + 8));
  fVar4 = (*(float *)(param_3 + 0x14) / (fVar4 - fVar12)) * *(float *)(param_3 + 4);
  fVar5 = powf(((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar5) / fVar2,
               __real_3ed70a3d);
  fVar6 = powf(((fVar5 * __real_43c80000) / (fVar5 + __real_41d90a3d)) / fVar6,fVar13);
  fVar6 = fVar6 * (float)(((uint)__real_3f800000 ^ (uint)fVar4) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff ^ (uint)fVar4) * fVar2;
  if (fVar11 != 0.0) {
    fVar5 = fVar8 / *(float *)param_4;
    fVar12 = fVar12 - fVar5;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar13 = chroma_compress_norm(fVar1,*(float *)(param_4 + 0x5bc));
    fVar2 = *(float *)(param_4 + 4);
    fVar9 = reach_m_from_table(fVar1,(Table1D *)(param_4 + 0x14));
    fVar7 = powf(fVar5,fVar2);
    fVar4 = __real_3a83126f;
    fVar11 = fVar11 / fVar13;
    fVar9 = (fVar9 * fVar7) / fVar13;
    if (fVar11 <= fVar9) {
      fVar7 = __real_3a83126f;
      if (__real_3a83126f <= fVar12) {
        fVar7 = fVar12;
      }
      fVar10 = fVar7 * fVar7 +
               fVar5 * *(float *)(param_4 + 0x10) * fVar5 * *(float *)(param_4 + 0x10);
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      fVar11 = (fVar10 * fVar11 + fVar11 * fVar11) /
               (((fVar10 + fVar9) / (fVar7 + fVar9)) * (fVar7 + fVar11));
    }
    fVar5 = fVar5 * fVar5 + *(float *)(param_4 + 0xc);
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar7 = fVar9 - fVar4;
    fVar11 = fVar9 - fVar11;
    if (fVar11 <= fVar7) {
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
      fVar5 = fVar4 * fVar4 + fVar12 * *(float *)(param_4 + 8) * fVar12 * *(float *)(param_4 + 8);
      if (fVar5 < 0.0) {
        fVar5 = sqrtf(fVar5);
      }
      else {
        fVar5 = SQRT(fVar5);
      }
      fVar11 = (fVar5 * fVar11 + fVar11 * fVar11) /
               (((fVar5 + fVar7) / (fVar4 + fVar7)) * (fVar4 + fVar11));
    }
    fVar8 = powf(fVar8 / fVar6,(float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000));
    fVar11 = fVar8 * (fVar9 - fVar11) * fVar13;
  }
  __return_storage_ptr__->_Elems[0] = fVar6;
  __return_storage_ptr__->_Elems[1] = fVar11;
  __return_storage_ptr__->_Elems[2] = fVar1;
  return __return_storage_ptr__;
}

// wrap_to_360 @ 14ff2f120

/* float __cdecl OpenColorIO_v2_4::ACES2::wrap_to_360(float) */

float __cdecl OpenColorIO_v2_4::ACES2::wrap_to_360(float param_1)

{
  float fVar1;
  
  fVar1 = fmodf(param_1,__real_43b40000);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + __real_43b40000;
  }
  return fVar1;
}

