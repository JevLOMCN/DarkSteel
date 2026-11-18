// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// GenerateNormal @ 1435a99c0

TVector<float> * __thiscall
UE::Geometry::FCurvedStairGenerator::GenerateNormal
          (FCurvedStairGenerator *this,TVector<float> *__return_storage_ptr__,ESide param_1,
          int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  uint *puVar5;
  undefined8 extraout_XMM0_Qa;
  uint uVar6;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  float fVar7;
  uint local_38;
  uint uStack_34;
  ESide local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  
  uVar6 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  uVar6 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar1)();
    return pTVar4;
  }
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  uVar6 = __xmm_80000000800000008000000080000000;
  switch(param_1) {
  case Right:
  case Left:
    __libm_sse2_sincosf_();
    uVar6 = (uint)((ulonglong)extraout_XMM0_Qa >> 0x20);
    if (param_1 == Right) {
      puVar5 = &local_38;
      local_38 = uVar6 ^ __xmm_80000000800000008000000080000000;
      uStack_34 = (uint)extraout_XMM0_Qa ^ __xmm_80000000800000008000000080000000;
      local_30 = param_1;
    }
    else {
      local_2c = uVar6;
      puVar5 = &local_2c;
      local_28 = (uint)extraout_XMM0_Qa;
      local_24 = 0;
    }
    fVar7 = (float)puVar5[2];
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)puVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7;
    Normalize<float>(__return_storage_ptr__,0.0);
    break;
  case Front:
    __libm_sse2_sincosf_();
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)extraout_XMM0_Qa_00;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (float)((uint)((ulonglong)extraout_XMM0_Qa_00 >> 0x20) ^
                __xmm_80000000800000008000000080000000);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    Normalize<float>(__return_storage_ptr__,0.0);
    break;
  case Top:
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
         CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    break;
  case Back:
    if (((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X ==
          (this->BackNormal).field0_0x0._s_0.X) &&
        (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y ==
         (this->BackNormal).field0_0x0._s_0.Y)) &&
       (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z ==
        (this->BackNormal).field0_0x0._s_0.Z)) {
      __libm_sse2_sincosf_();
      (this->BackNormal).field0_0x0._s_0.X =
           (float)((uint)extraout_XMM0_Qa_01 ^ __xmm_80000000800000008000000080000000);
      (this->BackNormal).field0_0x0._s_0.Y = (float)((ulonglong)extraout_XMM0_Qa_01 >> 0x20);
      (this->BackNormal).field0_0x0._s_0.Z = 0.0;
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->BackNormal).field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->BackNormal).field0_0x0._s_0.Z;
    break;
  case Bottom:
    fVar7 = (float)((uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y ^
                   __xmm_80000000800000008000000080000000);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)((uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X ^
                __xmm_80000000800000008000000080000000);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar2 ^ uVar6);
  }
  return __return_storage_ptr__;
}

// GenerateUV @ 1435ad560

TVector2<float> __thiscall
UE::Geometry::FCurvedStairGenerator::GenerateUV
          (FCurvedStairGenerator *this,ESide param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TVector2<float> TVar8;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_stack_00000030;
  
  TVar9._s_0.Y = (float)in_register_00000014;
  TVar9._s_0.X = (float)param_1;
  uVar6 = 0;
  if ((int)param_4 < (int)this->_padding_) {
    uVar6 = ~(uint)param_4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar8.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
    return (TVector2<float>)TVar8.field0_0x0;
  }
  uVar6 = *(uint *)(this->_padding_ + (longlong)(int)param_4 * 8);
  uVar7 = 0;
  if ((int)param_4 < (int)this->_padding_) {
    uVar7 = ~(uint)param_4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar8.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
    return (TVector2<float>)TVar8.field0_0x0;
  }
  fVar14 = __real_3f000000;
  fVar12 = __real_bf000000;
  iVar1 = *(int *)(this->_padding_ + 4 + (longlong)(int)param_4 * 8);
  switch(param_2) {
  case 0:
  case 1:
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    fVar10 = in_stack_00000030 * this->OuterRadius;
    fVar14 = __real_3f800000 / (float)(iVar2 + 1);
    fVar12 = (float)((int)uVar6 % (int)this->_padding_) * fVar14;
    if (0.0 <= fVar12) {
      if (__real_3f800000 <= fVar12) {
        fVar12 = __real_3f800000;
      }
    }
    else {
      fVar12 = 0.0;
    }
    fVar11 = fVar12 * __real_3f000000 - (__real_3f800000 - fVar12) * __real_3f000000;
    fVar14 = (float)iVar1 * fVar14;
    fVar12 = 0.0;
    if ((0.0 <= fVar14) && (fVar12 = fVar14, __real_3f800000 <= fVar14)) {
      fVar12 = __real_3f800000;
    }
    fVar14 = this->RadiusRatio * fVar10;
    if (fVar14 <= __real_3f800000) {
      if (param_2 == 1) {
        fVar11 = fVar11 * this->RadiusRatio;
      }
    }
    else {
      if (param_2 == 1) {
        fVar14 = fVar10;
      }
      fVar11 = fVar11 / fVar14;
    }
    fVar12 = (float)iVar2 * *(float *)&this->_padding_ *
             in_stack_00000030 *
             (fVar12 * __real_3f000000 - (__real_3f800000 - fVar12) * __real_3f000000) +
             __real_3f000000;
    *(float *)TVar9 = fVar11 * fVar10 + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) = fVar12;
    break;
  case 2:
    fVar10 = *(float *)&this->_padding_;
    fVar11 = *(float *)((longlong)&this->_padding_ + 4);
    fVar13 = __real_bf000000;
    if ((int)uVar6 < (int)this->_padding_) {
      fVar13 = __real_3f000000;
    }
    lVar4 = this->_padding_;
    *(float *)TVar9 = fVar13;
    uVar7 = 0;
    if ((int)uVar6 < (int)lVar4) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar8.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar8.field0_0x0;
    }
    if (iVar1 != *(int *)(this->_padding_ + 8 + (longlong)(int)uVar6 * 0x10) + -1) {
      fVar12 = fVar14;
    }
    *(float *)TVar9 = in_stack_00000030 * fVar11 * *(float *)TVar9 + fVar14;
    *(float *)((longlong)TVar9 + 4) = fVar12 * in_stack_00000030 * fVar10 + fVar14;
    break;
  case 3:
    iVar1 = (int)this->_padding_;
    fVar14 = (this->OuterRadius / (float)*(int *)((longlong)&this->_padding_ + 4)) *
             in_stack_00000030;
    if ((int)uVar6 < iVar1) {
      fVar12 = __real_3f000000;
    }
    fVar10 = __real_bf000000;
    if ((int)uVar6 % iVar1 <= param_3) {
      fVar10 = __real_3f000000;
    }
    fVar11 = this->RadiusRatio * fVar14;
    if (fVar11 <= __real_3f800000) {
      if (iVar1 <= (int)uVar6) {
        fVar10 = this->RadiusRatio * fVar10;
      }
    }
    else {
      if (iVar1 <= (int)uVar6) {
        fVar11 = fVar14;
      }
      fVar10 = fVar10 / fVar11;
    }
    fVar14 = fVar10 * fVar14 + __real_3f000000;
    *(float *)TVar9 =
         fVar12 * in_stack_00000030 * *(float *)((longlong)&this->_padding_ + 4) + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) = fVar14;
    break;
  case 4:
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    fVar12 = *(float *)&this->_padding_;
    fVar10 = __real_bf000000;
    if ((int)uVar6 < (int)this->_padding_) {
      fVar10 = __real_3f000000;
    }
    fVar13 = (float)iVar1 / (float)(iVar2 + 1);
    fVar11 = 0.0;
    if ((0.0 <= fVar13) && (fVar11 = fVar13, __real_3f800000 <= fVar13)) {
      fVar11 = __real_3f800000;
    }
    fVar13 = fVar11 * __real_3f000000;
    fVar11 = (__real_3f800000 - fVar11) * __real_3f000000;
    *(float *)TVar9 =
         fVar10 * in_stack_00000030 * *(float *)((longlong)&this->_padding_ + 4) + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) =
         (fVar13 - fVar11) * (float)iVar2 * fVar12 * in_stack_00000030 + fVar14;
    break;
  case 5:
    iVar1 = (int)this->_padding_;
    fVar14 = in_stack_00000030 * this->OuterRadius;
    if ((int)uVar6 < iVar1) {
      fVar12 = __real_3f000000;
    }
    fVar11 = (float)((int)uVar6 % iVar1) / (float)(*(int *)((longlong)&this->_padding_ + 4) + 1);
    fVar10 = 0.0;
    if ((0.0 <= fVar11) && (fVar10 = fVar11, __real_3f800000 <= fVar11)) {
      fVar10 = __real_3f800000;
    }
    fVar11 = fVar10 * __real_3f000000 - (__real_3f800000 - fVar10) * __real_3f000000;
    fVar10 = this->RadiusRatio * fVar14;
    if (fVar10 <= __real_3f800000) {
      if (iVar1 <= (int)uVar6) {
        fVar11 = fVar11 * this->RadiusRatio;
      }
    }
    else {
      if (iVar1 <= (int)uVar6) {
        fVar10 = fVar14;
      }
      fVar11 = fVar11 / fVar10;
    }
    fVar14 = fVar11 * fVar14 + __real_3f000000;
    *(float *)TVar9 =
         fVar12 * in_stack_00000030 * *(float *)((longlong)&this->_padding_ + 4) + __real_3f000000;
    *(float *)((longlong)TVar9 + 4) = fVar14;
    break;
  default:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
                       ,0x4c4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar8.field0_0x0 = (TVector2<float>_u_0)(*pcVar3)();
      return (TVector2<float>)TVar8.field0_0x0;
    }
  }
  return (TVector2<float>)TVar9;
}

// GenerateVertex @ 1435ae830

TVector<double> * __thiscall
UE::Geometry::FCurvedStairGenerator::GenerateVertex
          (FCurvedStairGenerator *this,TVector<double> *__return_storage_ptr__,ESide param_1,
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
  float fVar8;
  
  if (Left < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\StairGenerator.cpp"
                       ,0x41f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  fVar1 = *(float *)&this->_padding_;
  __libm_sse2_sincosf_();
  fVar6 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
  lVar5 = 0x154;
  if (this->bIsClockwise == false) {
    if (param_1 != Right) {
      lVar5 = 0x140;
    }
    fVar8 = *(float *)((longlong)&this->_padding_ + lVar5);
    fVar7 = (float)((uint)(fVar8 * (float)extraout_XMM0_Qa) ^ __xmm_80000000800000008000000080000000
                   );
    fVar8 = (float)((uint)(fVar8 * fVar6) ^ __xmm_80000000800000008000000080000000);
  }
  else {
    lVar5 = 0x140;
    if (param_1 != Right) {
      lVar5 = 0x154;
    }
    fVar8 = *(float *)((longlong)&this->_padding_ + lVar5);
    fVar7 = fVar8 * (float)extraout_XMM0_Qa;
    fVar8 = fVar8 * fVar6;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)((float)param_3 * fVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar7;
  return __return_storage_ptr__;
}

// GetMaxDimension @ 1435b1610

float __thiscall UE::Geometry::FCurvedStairGenerator::GetMaxDimension(FCurvedStairGenerator *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)((uint)this->CurveRadians & __xmm_7fffffff7fffffff7fffffff7fffffff) *
          this->OuterRadius;
  fVar2 = (float)*(int *)((longlong)&this->_padding_ + 4) * *(float *)&this->_padding_;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// ResetData @ 1435c0410

void __thiscall UE::Geometry::FCurvedStairGenerator::ResetData(FCurvedStairGenerator *this)

{
  int iVar1;
  float fVar2;
  
  FStairGenerator::ResetData((FStairGenerator *)this);
  fVar2 = this->CurveAngle * __real_3c8efa35;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  this->bIsClockwise = 0.0 < this->CurveAngle;
  this->CurveRadians = fVar2;
  this->CurveRadiansPerStep = fVar2 / (float)iVar1;
  fVar2 = this->InnerRadius + *(float *)((longlong)&this->_padding_ + 4);
  this->OuterRadius = fVar2;
  this->RadiusRatio = fVar2 / this->InnerRadius;
  *(undefined8 *)&(this->BackNormal).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->BackNormal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

