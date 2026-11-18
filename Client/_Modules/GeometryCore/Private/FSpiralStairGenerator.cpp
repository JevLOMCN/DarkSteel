// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GenerateUV @ 1435ae280

TVector2<float> __thiscall
UE::Geometry::FSpiralStairGenerator::GenerateUV
          (FSpiralStairGenerator *this,ESide param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  TVector2<float> TVar7;
  int iVar8;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  float in_stack_00000030;
  
  TVar9._s_0.Y = (float)in_register_00000014;
  TVar9._s_0.X = (float)param_1;
  uVar6 = 0;
  if ((int)param_4 < *(int *)&this->field_0xd0) {
    uVar6 = ~(uint)param_4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
    return (TVector2<float>)TVar7.field0_0x0;
  }
  iVar1 = *(int *)(*(longlong *)&this->field_0xc8 + (longlong)(int)param_4 * 8);
  uVar6 = 0;
  if ((int)param_4 < *(int *)&this->field_0xd0) {
    uVar6 = ~(uint)param_4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
    return (TVector2<float>)TVar7.field0_0x0;
  }
  fVar4 = __real_3f000000;
  iVar8 = *(int *)(*(longlong *)&this->field_0xc8 + 4 + (longlong)(int)param_4 * 8);
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar2 = *(int *)&this->field_0xac;
    fVar14 = in_stack_00000030 * *(float *)&this->field_0x154;
    fVar10 = (float)(iVar1 % *(int *)&this->field_0x120);
    fVar12 = (float)iVar8;
    if (__real_40400000 <= fVar10) {
      fVar12 = (fVar12 + fVar10) - __real_40000000;
    }
    fVar13 = __real_3f800000 / (float)(iVar2 + 1);
    fVar10 = fVar13 * fVar10;
    if (0.0 <= fVar10) {
      if (__real_3f800000 <= fVar10) {
        fVar10 = __real_3f800000;
      }
    }
    else {
      fVar10 = 0.0;
    }
    fVar13 = fVar13 * fVar12;
    fVar12 = fVar10 * __real_3f000000 - (__real_3f800000 - fVar10) * __real_3f000000;
    fVar10 = 0.0;
    if ((0.0 <= fVar13) && (fVar10 = fVar13, __real_3f800000 <= fVar13)) {
      fVar10 = __real_3f800000;
    }
    fVar11 = fVar10 * __real_3f000000;
    fVar13 = (__real_3f800000 - fVar10) * __real_3f000000;
    fVar10 = *(float *)&this->field_0x158 * fVar14;
    if (fVar10 <= __real_3f800000) {
      if (param_2 == 1) {
        fVar12 = fVar12 * *(float *)&this->field_0x158;
      }
    }
    else {
      if (param_2 == 1) {
        fVar10 = fVar14;
      }
      fVar12 = fVar12 / fVar10;
    }
    fVar10 = *(float *)&this->field_0xa8;
    *(float *)TVar9 = fVar12 * fVar14 + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) =
         (float)iVar2 * fVar10 * in_stack_00000030 * (fVar11 - fVar13) + fVar4;
  }
  else if (param_2 == 4) {
    iVar2 = *(int *)&this->field_0xac;
    iVar8 = iVar8 + param_3;
    if (iVar2 + -1 <= param_3) {
      iVar8 = iVar8 + -1;
    }
    fVar12 = (float)iVar8 / (float)(iVar2 + 1);
    fVar10 = __real_bf000000;
    if (iVar1 < *(int *)&this->field_0x120) {
      fVar10 = __real_3f000000;
    }
    fVar14 = 0.0;
    if ((0.0 <= fVar12) && (fVar14 = fVar12, __real_3f800000 <= fVar12)) {
      fVar14 = __real_3f800000;
    }
    fVar12 = (__real_3f800000 - fVar14) * __real_3f000000;
    *(float *)TVar9 = fVar10 * in_stack_00000030 * *(float *)&this->field_0xa4 + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) =
         (fVar14 * fVar4 - fVar12) * in_stack_00000030 * (float)iVar2 * *(float *)&this->field_0xa8
         + fVar4;
  }
  else {
    TVar7 = FCurvedStairGenerator::GenerateUV
                      ((FCurvedStairGenerator *)this,(ESide)local_res8,param_2,param_3,param_4);
    *(undefined8 *)TVar9 = *(undefined8 *)TVar7.field0_0x0;
  }
  return (TVector2<float>)TVar9;
}

// GenerateVertex @ 1435aeb10

TVector<double> * __thiscall
UE::Geometry::FSpiralStairGenerator::GenerateVertex
          (FSpiralStairGenerator *this,TVector<double> *__return_storage_ptr__,ESide param_1,
          int param_2,int param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  longlong lVar5;
  undefined8 extraout_XMM0_Qa;
  float fVar6;
  float fVar7;
  
  if (Left < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
                       ,0x4db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (1 < param_2) {
    param_3 = param_3 + -2 + param_2;
  }
  fVar1 = *(float *)&this->field_0xa8;
  __libm_sse2_sincosf_();
  fVar7 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
  lVar5 = 0x154;
  if (this->field_0x148 == '\0') {
    if (param_1 != Right) {
      lVar5 = 0x140;
    }
    fVar6 = (float)((uint)(*(float *)(&this->field_0x0 + lVar5) * (float)extraout_XMM0_Qa) ^
                   __xmm_80000000800000008000000080000000);
    fVar7 = (float)((uint)(*(float *)(&this->field_0x0 + lVar5) * fVar7) ^
                   __xmm_80000000800000008000000080000000);
  }
  else {
    lVar5 = 0x140;
    if (param_1 != Right) {
      lVar5 = 0x154;
    }
    fVar6 = *(float *)(&this->field_0x0 + lVar5) * (float)extraout_XMM0_Qa;
    fVar7 = *(float *)(&this->field_0x0 + lVar5) * fVar7;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)((float)param_3 * fVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar6;
  return __return_storage_ptr__;
}

