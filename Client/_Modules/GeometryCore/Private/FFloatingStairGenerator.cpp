// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GenerateUV @ 1435adad0

TVector2<float> __thiscall
UE::Geometry::FFloatingStairGenerator::GenerateUV
          (FFloatingStairGenerator *this,ESide param_1,int param_2,int param_3,float param_4)

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
  float fVar15;
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
  iVar8 = *(int *)(*(longlong *)&this->field_0xc8 + 4 + (longlong)(int)param_4 * 8);
  *(undefined8 *)TVar9 = 0;
  fVar4 = __real_3f000000;
  fVar10 = __real_3f800000;
  if ((param_2 == 0) || (param_2 == 1)) {
    fVar15 = (float)*(int *)&this->field_0xac;
    fVar11 = (float)(iVar1 % *(int *)&this->field_0x120);
    fVar13 = *(float *)&this->field_0xa8;
    fVar12 = (float)iVar8;
    if (__real_40400000 <= fVar11) {
      fVar12 = (fVar12 + fVar11) - __real_40000000;
    }
    fVar14 = __real_3f800000 / (float)(*(int *)&this->field_0xac + 1);
    fVar12 = fVar12 * fVar14;
    fVar14 = fVar14 * fVar11;
    if (0.0 <= fVar14) {
      if (__real_3f800000 <= fVar14) {
        fVar14 = __real_3f800000;
      }
    }
    else {
      fVar14 = 0.0;
    }
    *(float *)TVar9 =
         (fVar14 * __real_3f000000 - (__real_3f800000 - fVar14) * __real_3f000000) *
         *(float *)&this->field_0x140 * in_stack_00000030 * fVar15 + __real_3f000000;
    fVar11 = 0.0;
    if ((0.0 <= fVar12) && (fVar11 = fVar12, fVar10 <= fVar12)) {
      fVar11 = fVar10;
    }
    *(float *)((longlong)TVar9 + 4) =
         (fVar11 * fVar4 - (fVar10 - fVar11) * fVar4) * fVar15 * fVar13 * in_stack_00000030 + fVar4;
  }
  else if (param_2 == 4) {
    iVar2 = *(int *)&this->field_0xac;
    iVar8 = iVar8 + param_3;
    if (iVar2 + -1 <= param_3) {
      iVar8 = iVar8 + -1;
    }
    fVar13 = (float)iVar8 / (float)(iVar2 + 1);
    fVar10 = __real_bf000000;
    if (iVar1 < *(int *)&this->field_0x120) {
      fVar10 = __real_3f000000;
    }
    fVar11 = 0.0;
    if ((0.0 <= fVar13) && (fVar11 = fVar13, __real_3f800000 <= fVar13)) {
      fVar11 = __real_3f800000;
    }
    fVar13 = (__real_3f800000 - fVar11) * __real_3f000000;
    *(float *)TVar9 = fVar10 * in_stack_00000030 * *(float *)&this->field_0xa4 + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) =
         (fVar11 * fVar4 - fVar13) * in_stack_00000030 * (float)iVar2 * *(float *)&this->field_0xa8
         + fVar4;
  }
  else {
    TVar7 = FLinearStairGenerator::GenerateUV
                      ((FLinearStairGenerator *)this,(ESide)local_res8,param_2,param_3,param_4);
    *(undefined8 *)TVar9 = *(undefined8 *)TVar7.field0_0x0;
  }
  return (TVector2<float>)TVar9;
}

// GenerateVertex @ 1435ae940

TVector<double> * __thiscall
UE::Geometry::FFloatingStairGenerator::GenerateVertex
          (FFloatingStairGenerator *this,TVector<double> *__return_storage_ptr__,ESide param_1,
          int param_2,int param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  float fVar5;
  
  if ((Left < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
                         ,0x3d8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar2)();
    return pTVar4;
  }
  fVar1 = *(float *)&this->field_0xa4;
  fVar5 = __real_bf000000;
  if (param_1 == Right) {
    fVar5 = __real_3f000000;
  }
  if (1 < param_2) {
    param_3 = param_3 + -2 + param_2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)param_2 * *(float *)&this->field_0x140);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * fVar5);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)((float)param_3 * *(float *)&this->field_0xa8);
  return __return_storage_ptr__;
}

