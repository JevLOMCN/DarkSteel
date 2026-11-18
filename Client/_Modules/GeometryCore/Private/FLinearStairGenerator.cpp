// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// GenerateNormal @ 1435a9cb0

TVector<float> * __thiscall
UE::Geometry::FLinearStairGenerator::GenerateNormal
          (FLinearStairGenerator *this,TVector<float> *__return_storage_ptr__,ESide param_1,
          int param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  uVar5 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  uVar2 = __xmm_80000000800000008000000080000000;
  switch(param_1) {
  case Right:
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
         CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar7;
    return __return_storage_ptr__;
  case Left:
    uVar6 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
    break;
  case Front:
    uVar7 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X;
    break;
  case Top:
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
         CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar5;
    return __return_storage_ptr__;
  case Back:
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
         CONCAT44(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar6;
    return __return_storage_ptr__;
  case Bottom:
    uVar6 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X;
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
                       ,0x387,L"");
    if (!bVar3) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  fVar8 = (float)(uVar7 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (float)(uVar5 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar6 ^ uVar2);
  return __return_storage_ptr__;
}

// GenerateUV @ 1435addf0

TVector2<float> __thiscall
UE::Geometry::FLinearStairGenerator::GenerateUV
          (FLinearStairGenerator *this,ESide param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TVector2<float> TVar9;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_stack_00000030;
  
  TVar10._s_0.Y = (float)in_register_00000014;
  TVar10._s_0.X = (float)param_1;
  uVar7 = 0;
  if ((int)param_4 < (int)this->_padding_) {
    uVar7 = ~(uint)param_4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
    return (TVector2<float>)TVar9.field0_0x0;
  }
  uVar7 = *(uint *)(this->_padding_ + (longlong)(int)param_4 * 8);
  uVar8 = 0;
  if ((int)param_4 < (int)this->_padding_) {
    uVar8 = ~(uint)param_4 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
    return (TVector2<float>)TVar9.field0_0x0;
  }
  lVar3 = this->_padding_;
  *(undefined8 *)TVar10 = 0;
  fVar5 = __real_3f000000;
  fVar12 = __real_bf000000;
  fVar11 = __real_3f800000;
  iVar1 = *(int *)(lVar3 + 4 + (longlong)(int)param_4 * 8);
  switch(param_2) {
  case 0:
  case 1:
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    fVar14 = (float)iVar2;
    fVar12 = *(float *)&this->_padding_;
    fVar15 = __real_3f800000 / (float)(iVar2 + 1);
    fVar13 = (float)((int)uVar7 % (int)this->_padding_) * fVar15;
    if (0.0 <= fVar13) {
      if (__real_3f800000 <= fVar13) {
        fVar13 = __real_3f800000;
      }
    }
    else {
      fVar13 = 0.0;
    }
    fVar15 = (float)iVar1 * fVar15;
    *(float *)TVar10 =
         (fVar13 * __real_3f000000 - (__real_3f800000 - fVar13) * __real_3f000000) * this->StepDepth
         * fVar14 * in_stack_00000030 + __real_3f000000;
    fVar13 = 0.0;
    if ((0.0 <= fVar15) && (fVar13 = fVar15, fVar11 <= fVar15)) {
      fVar13 = fVar11;
    }
    fVar11 = (fVar13 * fVar5 - (fVar11 - fVar13) * fVar5) * fVar14 * fVar12 * in_stack_00000030;
    break;
  case 2:
    fVar11 = *(float *)&this->_padding_;
    fVar13 = *(float *)((longlong)&this->_padding_ + 4);
    fVar15 = __real_bf000000;
    if ((int)uVar7 < (int)this->_padding_) {
      fVar15 = __real_3f000000;
    }
    lVar3 = this->_padding_;
    *(float *)TVar10 = fVar15;
    uVar8 = 0;
    if ((int)uVar7 < (int)lVar3) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
      return (TVector2<float>)TVar9.field0_0x0;
    }
    if (iVar1 == *(int *)(this->_padding_ + 8 + (longlong)(int)uVar7 * 0x10) + -1) {
      fVar12 = fVar5;
    }
    *(float *)TVar10 = in_stack_00000030 * fVar13 * *(float *)TVar10 + fVar5;
    *(float *)((longlong)TVar10 + 4) = fVar12 * in_stack_00000030 * fVar11 + fVar5;
    return (TVector2<float>)TVar10;
  case 3:
    iVar1 = (int)this->_padding_;
    if ((int)uVar7 < iVar1) {
      fVar12 = __real_3f000000;
    }
    fVar11 = __real_bf000000;
    if ((int)uVar7 % iVar1 <= param_3) {
      fVar11 = __real_3f000000;
    }
    fVar11 = fVar11 * in_stack_00000030 * this->StepDepth;
    *(float *)TVar10 =
         fVar12 * in_stack_00000030 * *(float *)((longlong)&this->_padding_ + 4) + __real_3f000000;
    break;
  case 4:
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    fVar13 = (float)iVar2 * *(float *)&this->_padding_;
    if ((int)uVar7 < (int)this->_padding_) {
      fVar12 = __real_3f000000;
    }
    fVar14 = (float)iVar1 / (float)(iVar2 + 1);
    fVar15 = 0.0;
    if ((0.0 <= fVar14) && (fVar15 = fVar14, __real_3f800000 <= fVar14)) {
      fVar15 = __real_3f800000;
    }
    *(float *)TVar10 =
         fVar12 * in_stack_00000030 * *(float *)((longlong)&this->_padding_ + 4) + __real_3f000000;
    goto LAB_1435ae216;
  case 5:
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    iVar2 = (int)this->_padding_;
    fVar13 = (float)iVar1 * this->StepDepth;
    if ((int)uVar7 < iVar2) {
      fVar12 = __real_3f000000;
    }
    fVar14 = (float)((int)uVar7 % iVar2) / (float)(iVar1 + 1);
    fVar15 = 0.0;
    if ((0.0 <= fVar14) && (fVar15 = fVar14, __real_3f800000 <= fVar14)) {
      fVar15 = __real_3f800000;
    }
    *(float *)TVar10 =
         fVar12 * in_stack_00000030 * *(float *)((longlong)&this->_padding_ + 4) + __real_3f000000;
LAB_1435ae216:
    fVar11 = (fVar15 * fVar5 - (fVar11 - fVar15) * fVar5) * fVar13 * in_stack_00000030;
    break;
  default:
    goto switchD_1435adf19_default;
  }
  *(float *)((longlong)TVar10 + 4) = fVar11 + fVar5;
switchD_1435adf19_default:
  return (TVector2<float>)TVar10;
}

// GenerateVertex @ 1435aea30

TVector<double> * __thiscall
UE::Geometry::FLinearStairGenerator::GenerateVertex
          (FLinearStairGenerator *this,TVector<double> *__return_storage_ptr__,ESide param_1,
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
                         ,0x367,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar2)();
    return pTVar4;
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  fVar5 = __real_bf000000;
  if (param_1 == Right) {
    fVar5 = __real_3f000000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)((float)param_2 * this->StepDepth);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * fVar5);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)((float)param_3 * *(float *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetMaxDimension @ 1435b1650

float __thiscall UE::Geometry::FLinearStairGenerator::GetMaxDimension(FLinearStairGenerator *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)((longlong)&this->_padding_ + 4);
  fVar2 = fVar1 * *(float *)&this->_padding_;
  fVar1 = fVar1 * this->StepDepth;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

