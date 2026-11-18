// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FColorSpaceTransform @ 14147d050

FColorSpaceTransform * __thiscall
UE::Color::FColorSpaceTransform::FColorSpaceTransform
          (FColorSpaceTransform *this,FColorSpace *param_1,FColorSpace *param_2,
          EChromaticAdaptationMethod param_3)

{
  CalcColorSpaceTransformMatrix((TMatrix<double> *)this,param_1,param_2,param_3);
  return this;
}

// FColorSpaceTransform @ 14147d070

FColorSpaceTransform * __thiscall
UE::Color::FColorSpaceTransform::FColorSpaceTransform
          (FColorSpaceTransform *this,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1->M[0][1];
  dVar2 = param_1->M[0][2];
  dVar3 = param_1->M[0][3];
  *(double *)this = param_1->M[0][0];
  *(double *)&this->field_0x8 = dVar1;
  dVar1 = param_1->M[1][0];
  dVar4 = param_1->M[1][1];
  *(double *)&this->field_0x10 = dVar2;
  *(double *)&this->field_0x18 = dVar3;
  dVar2 = param_1->M[1][2];
  dVar3 = param_1->M[1][3];
  *(double *)&this->field_0x20 = dVar1;
  *(double *)&this->field_0x28 = dVar4;
  dVar1 = param_1->M[2][0];
  dVar4 = param_1->M[2][1];
  *(double *)&this->field_0x30 = dVar2;
  *(double *)&this->field_0x38 = dVar3;
  dVar2 = param_1->M[2][2];
  dVar3 = param_1->M[2][3];
  *(double *)&this->field_0x40 = dVar1;
  *(double *)&this->field_0x48 = dVar4;
  dVar1 = param_1->M[3][0];
  dVar4 = param_1->M[3][1];
  *(double *)&this->field_0x50 = dVar2;
  *(double *)&this->field_0x58 = dVar3;
  dVar2 = param_1->M[3][2];
  dVar3 = param_1->M[3][3];
  *(double *)&this->field_0x60 = dVar1;
  *(double *)&this->field_0x68 = dVar4;
  *(double *)&this->field_0x70 = dVar2;
  *(double *)&this->field_0x78 = dVar3;
  return this;
}

// Apply @ 141486d90

FLinearColor * __thiscall
UE::Color::FColorSpaceTransform::Apply
          (FColorSpaceTransform *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar5 = *(double *)&this->field_0x28;
  dVar6 = *(double *)&this->field_0x10;
  dVar7 = *(double *)&this->field_0x18;
  dVar1 = (double)(param_1->field0_0x0)._s_0.R;
  dVar2 = (double)(param_1->field0_0x0)._s_0.G;
  dVar3 = (double)(param_1->field0_0x0)._s_0.B;
  dVar4 = (double)(param_1->field0_0x0)._s_0.A;
  dVar8 = *(double *)&this->field_0x8;
  dVar9 = *(double *)&this->field_0x48;
  dVar10 = *(double *)&this->field_0x68;
  dVar11 = *(double *)&this->field_0x30;
  dVar12 = *(double *)&this->field_0x38;
  dVar13 = *(double *)&this->field_0x50;
  dVar14 = *(double *)&this->field_0x58;
  dVar15 = *(double *)&this->field_0x70;
  dVar16 = *(double *)&this->field_0x78;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (float)(dVar1 * *(double *)this + dVar2 * *(double *)&this->field_0x20 +
               dVar3 * *(double *)&this->field_0x40 + dVar4 * *(double *)&this->field_0x60);
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (float)(dVar1 * dVar8 + dVar2 * dVar5 + dVar3 * dVar9 + dVar4 * dVar10);
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (float)(dVar6 * dVar1 + dVar11 * dVar2 + dVar13 * dVar3 + dVar15 * dVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (float)(dVar7 * dVar1 + dVar12 * dVar2 + dVar14 * dVar3 + dVar16 * dVar4);
  return __return_storage_ptr__;
}

// CalcChromaticAdaptionMatrix @ 141487f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
UE::Color::FColorSpaceTransform::CalcChromaticAdaptionMatrix
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,EChromaticAdaptationMethod param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_2d8 [32];
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_2b8.M[1][0] = ___xmm_3ffb28f5c28f5c293fdb7e90ff972474;
  local_2b8.M[1][1] = _UNK_15061cc58;
  local_2b8.M[1][2] = ___xmm_00000000000000003f8bda5119ce075f;
  local_2b8.M[1][3] = _UNK_15061c768;
  local_2b8.M[0][0] = ___xmm_bfe683e425aee6323fe77318fc504817;
  local_2b8.M[0][1] = _UNK_15061cda8;
  local_2b8.M[0][2] = ___xmm_00000000000000003f689374bc6a7efa;
  local_2b8.M[0][3] = _UNK_15061c738;
  local_2b8.M[2][0] = ___xmm_3f78fc504816f007bfc4c985f06f6944;
  local_2b8.M[2][1] = _UNK_15061ca68;
  local_2b8.M[2][2] = ___xmm_00000000000000003fef780346dc5d64;
  local_2b8.M[2][3] = _UNK_15061c818;
  if ((param_3 == CAT02) ||
     (local_2b8.M[1][0] = ___xmm_3ffb6a7ef9db22d13fd10cb295e9e1b1,
     local_2b8.M[1][1] = _UNK_15061cc68, local_2b8.M[1][2] = ___xmm_0000000000000000bfb189374bc6a7f0
     , local_2b8.M[1][3] = _UNK_15061ca08,
     local_2b8.M[0][0] = ___xmm_bfe801a36e2eb1c43feca4a8c154c986, local_2b8.M[0][1] = _UNK_15061cdb8
     , local_2b8.M[0][2] = ___xmm_00000000000000003fa3eab367a0f909,
     local_2b8.M[0][3] = _UNK_15061c798, local_2b8.M[2][0] = ___xmm_3fa2ca57a786c227bfc4a8c154c985f0
     , local_2b8.M[2][1] = _UNK_15061ca78,
     local_2b8.M[2][2] = ___xmm_00000000000000003ff0793dd97f62b7, local_2b8.M[2][3] = _UNK_15061c858
     , param_3 == Bradford)) {
    dVar3 = (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    local_2b8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_2b8.M[3][3] = _UNK_15061cbc8;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    local_238.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_238.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_238.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_238.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_238.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_238.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_2b8.M[3][0] = 0.0;
    local_2b8.M[3][1] = 0.0;
    local_238.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_238.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_238.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_238.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_238.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_238.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_238.M[0][0] =
         (local_2b8.M[1][0] * dVar6 + local_2b8.M[0][0] * dVar5 + local_2b8.M[2][0] * dVar2 + 0.0) /
         (local_2b8.M[1][0] * dVar4 + local_2b8.M[0][0] * dVar3 + local_2b8.M[2][0] * dVar1 + 0.0);
    local_238.M[1][1] =
         (local_2b8.M[1][1] * dVar6 + local_2b8.M[0][1] * dVar5 + local_2b8.M[2][1] * dVar2 + 0.0) /
         (local_2b8.M[1][1] * dVar4 + local_2b8.M[0][1] * dVar3 + local_2b8.M[2][1] * dVar1 + 0.0);
    local_238.M[2][2] =
         (local_2b8.M[1][2] * dVar6 + local_2b8.M[0][2] * dVar5 + local_2b8.M[2][2] * dVar2 +
         ___xmm_3ff00000000000000000000000000000 * 0.0) /
         (local_2b8.M[1][2] * dVar4 + local_2b8.M[0][2] * dVar3 + local_2b8.M[2][2] * dVar1 +
         ___xmm_3ff00000000000000000000000000000 * 0.0);
    local_238.M[3][3] = __real_3ff0000000000000;
    UE::Math::TMatrix<double>::Inverse(&local_2b8,&local_1b8);
    VectorMatrixMultiply(&local_138,&local_2b8,&local_238);
    VectorMatrixMultiply(__return_storage_ptr__,&local_138,&local_1b8);
  }
  else {
    __return_storage_ptr__->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    __return_storage_ptr__->M[0][1] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
    __return_storage_ptr__->M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    __return_storage_ptr__->M[0][3] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
    __return_storage_ptr__->M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    __return_storage_ptr__->M[1][1] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
    __return_storage_ptr__->M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    __return_storage_ptr__->M[1][3] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
    __return_storage_ptr__->M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
    __return_storage_ptr__->M[2][1] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
    __return_storage_ptr__->M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    __return_storage_ptr__->M[2][3] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
    __return_storage_ptr__->M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    __return_storage_ptr__->M[3][1] = dVar1;
    dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
    __return_storage_ptr__->M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    __return_storage_ptr__->M[3][3] = dVar1;
  }
  return __return_storage_ptr__;
}

// GetSRGBToWorkingColorSpace @ 14149a430

FColorSpaceTransform * __cdecl UE::Color::FColorSpaceTransform::GetSRGBToWorkingColorSpace(void)

{
  FColorSpace *pFVar1;
  FColorSpace *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FColorSpace::GetWorking();
      pFVar2 = FColorSpace::GetSRGB();
      CalcColorSpaceTransformMatrix((TMatrix<double> *)&CachedTransform,pFVar2,pFVar1,Bradford);
      _Init_thread_footer(&::_TSS0);
      return &CachedTransform;
    }
  }
  return &CachedTransform;
}

// GetWorkingColorSpaceToSRGB @ 14149aa60

FColorSpaceTransform * __cdecl UE::Color::FColorSpaceTransform::GetWorkingColorSpaceToSRGB(void)

{
  FColorSpace *pFVar1;
  FColorSpace *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FColorSpace::GetSRGB();
      pFVar2 = FColorSpace::GetWorking();
      CalcColorSpaceTransformMatrix((TMatrix<double> *)&CachedTransform,pFVar2,pFVar1,Bradford);
      _Init_thread_footer(&::_TSS0);
      return &CachedTransform;
    }
  }
  return &CachedTransform;
}

