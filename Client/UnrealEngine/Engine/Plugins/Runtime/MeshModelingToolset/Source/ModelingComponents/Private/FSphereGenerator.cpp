// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// operator() @ 14ca6df60

void __thiscall
`UE::Geometry::FSphereGenerator::GenerateVertices'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double> *param_2,TVector<float> *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  lVar5 = *(longlong *)this;
  uVar7 = *(undefined4 *)&param_2->field0_0x0;
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  lVar13 = (longlong)param_1;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x10)) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 8);
  puVar1 = (undefined4 *)(lVar5 + lVar13 * 0x18);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(double *)(lVar5 + 0x10 + lVar13 * 0x18) = dVar2;
  uVar3 = *(undefined8 *)&param_3->field0_0x0;
  lVar5 = *(longlong *)this;
  fVar4 = (param_3->field0_0x0)._s_0.Z;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x40)) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + lVar13 * 0xc) = uVar3;
  *(float *)(lVar5 + 8 + lVar13 * 0xc) = fVar4;
  lVar5 = *(longlong *)this;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x50)) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(int *)(*(longlong *)(lVar5 + 0x48) + lVar13 * 4) = param_1;
  return;
}

// Generate @ 14ca89c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall UE::Geometry::FSphereGenerator::Generate(FSphereGenerator *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 3;
  if (3 < this->NumPhi) {
    iVar2 = this->NumPhi;
  }
  this->NumPhi = iVar2;
  iVar4 = 3;
  if (3 < this->NumTheta) {
    iVar4 = this->NumTheta;
  }
  this->NumTheta = iVar4;
  iVar3 = (iVar2 + -2) * iVar4;
  iVar1 = iVar3 + 2;
  iVar3 = iVar3 * 2;
  iVar2 = (iVar4 + 1) * (iVar2 + -2) + iVar4 * 2;
  if (0 < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar1,Default);
  }
  if (0 < iVar3) {
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar3,
               Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar3,
               Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar3,
               Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar3,Default);
  }
  if (0 < iVar2) {
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar2,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar2,Default);
  }
  if (0 < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar1,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar1,Default);
  }
  GenerateVertices(this);
  GenerateUVVertices(this);
  OutputEquatorialTriangles(this);
  OutputPolarTriangles(this);
  return (FMeshShapeGenerator *)this;
}

// GenerateUVVertices @ 14ca8af10

void __thiscall UE::Geometry::FSphereGenerator::GenerateUVVertices(FSphereGenerator *this)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_res8;
  
  fVar14 = __real_3f800000;
  iVar10 = this->NumPhi;
  piVar2 = &this->NumTheta;
  plVar1 = &this->_padding_;
  uVar5 = 0;
  fVar16 = __real_3f800000 / (float)(iVar10 + -1);
  fVar15 = __real_bf800000 / (float)*piVar2;
  uVar6 = 0;
  if (1 < iVar10 + -1) {
    lVar8 = 0;
    local_res8 = 0;
    fVar13 = fVar16;
    do {
      iVar10 = 0;
      fVar12 = fVar14;
      if (0 < *piVar2) {
        do {
          uVar6 = 0;
          if ((int)uVar5 < (int)this->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(ulonglong *)(*plVar1 + lVar8 * 8) = CONCAT44(fVar13,fVar12);
          iVar7 = local_res8 * *piVar2 + iVar10;
          uVar6 = 0;
          if ((int)uVar5 < (int)this->_padding_) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar12 = fVar12 + fVar15;
          iVar10 = iVar10 + 1;
          uVar5 = uVar5 + 1;
          *(int *)(this->_padding_ + lVar8 * 4) = iVar7;
          lVar8 = lVar8 + 1;
        } while (iVar10 < *piVar2);
      }
      uVar6 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(ulonglong *)(*plVar1 + lVar8 * 8) = CONCAT44(fVar13,fVar12);
      iVar10 = *piVar2;
      uVar6 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar13 = fVar13 + fVar16;
      uVar5 = uVar5 + 1;
      *(int *)(this->_padding_ + lVar8 * 4) = local_res8 * iVar10;
      lVar8 = lVar8 + 1;
      iVar10 = this->NumPhi;
      iVar7 = local_res8 + 2;
      uVar6 = uVar5;
      local_res8 = local_res8 + 1;
    } while (iVar7 < iVar10 + -1);
  }
  iVar7 = *piVar2;
  fVar14 = fVar15 + fVar14;
  iVar9 = (iVar10 + -2) * iVar7;
  iVar10 = 0;
  if (0 < iVar7) {
    lVar8 = (longlong)(int)uVar6 * 4;
    lVar11 = (longlong)(int)uVar6 * 8;
    fVar16 = fVar14;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(ulonglong *)(lVar11 + *plVar1) = (ulonglong)(uint)fVar16;
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar16 = fVar16 + fVar15;
      iVar10 = iVar10 + 1;
      uVar6 = uVar6 + 1;
      lVar11 = lVar11 + 8;
      *(int *)(lVar8 + this->_padding_) = iVar9;
      lVar8 = lVar8 + 4;
      iVar7 = this->NumTheta;
    } while (iVar10 < iVar7);
  }
  iVar10 = 0;
  if (0 < iVar7) {
    lVar8 = (longlong)(int)uVar6 * 4;
    lVar11 = (longlong)(int)uVar6 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(ulonglong *)(lVar11 + this->_padding_) = CONCAT44(0x3f800000,fVar14);
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar14 = fVar14 + fVar15;
      iVar10 = iVar10 + 1;
      uVar6 = uVar6 + 1;
      lVar11 = lVar11 + 8;
      *(int *)(lVar8 + this->_padding_) = iVar9 + 1;
      lVar8 = lVar8 + 4;
    } while (iVar10 < this->NumTheta);
  }
  return;
}

// GenerateVertices @ 14ca8b410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FSphereGenerator::GenerateVertices(FSphereGenerator *this)

{
  longlong *plVar1;
  double dVar2;
  code *pcVar3;
  FSphereGenerator *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSphereGenerator *pFVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  int local_res10;
  FSphereGenerator *local_res18;
  longlong local_res20;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108 [8];
  
  uVar11 = 0;
  iVar7 = this->NumTheta;
  local_res10 = 1;
  local_res18 = this;
  if (1 < this->NumPhi + -1) {
    lVar14 = 0;
    local_res20 = 0;
    pFVar8 = this;
    do {
      iVar15 = 0;
      if (0 < iVar7) {
        __libm_sse2_sincos_();
        lVar10 = lVar14 * 0xc;
        lVar9 = lVar14 * 0x18;
        lVar12 = lVar14 * 4;
        do {
          __libm_sse2_sincos_();
          dVar2 = this->Radius;
          uVar13 = ~uVar11 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar11 < (int)pFVar8->_padding_) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = local_res18;
          lVar14 = pFVar8->_padding_;
          *(double *)(lVar14 + lVar9) = extraout_XMM0_Qb_00 * extraout_XMM0_Qa * dVar2;
          *(double *)(lVar14 + 8 + lVar9) = extraout_XMM0_Qa_00 * extraout_XMM0_Qa * dVar2;
          *(double *)(lVar14 + 0x10 + lVar9) = extraout_XMM0_Qb * dVar2;
          uVar6 = 0;
          if ((int)uVar11 < (int)local_res18->_padding_) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = local_res18;
          lVar14 = pFVar4->_padding_;
          *(float *)(lVar14 + lVar10) = (float)(extraout_XMM0_Qb_00 * extraout_XMM0_Qa);
          *(float *)(lVar14 + 4 + lVar10) = (float)(extraout_XMM0_Qa_00 * extraout_XMM0_Qa);
          *(float *)(lVar14 + 8 + lVar10) = (float)extraout_XMM0_Qb;
          plVar1 = &local_res18->_padding_;
          uVar6 = 0;
          if ((int)uVar11 < (int)local_res18->_padding_) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = iVar15 + 1;
          lVar14 = local_res20 + 1;
          lVar9 = lVar9 + 0x18;
          *(uint *)(lVar12 + *plVar1) = uVar11;
          lVar10 = lVar10 + 0xc;
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 4;
          iVar7 = this->NumTheta;
          local_res20 = lVar14;
        } while (iVar15 < iVar7);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < this->NumPhi + -1);
  }
  local_138._0_8_ =
       CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
  dVar2 = this->Radius;
  local_138._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_128._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar2;
  local_128._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar2;
  local_128._s_0.Z = dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  `UE::Geometry::FSphereGenerator::GenerateVertices'::__l2::<lambda_1>::operator()
            (&local_res18,uVar11,(TVector<double> *)&local_128._s_0,
             (TVector<float> *)&local_138._s_0);
  dVar2 = this->Radius;
  local_148._s_0.X =
       (float)((uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X ^
              __xmm_80000000800000008000000080000000);
  local_148._s_0.Z =
       (float)((uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z ^
              __xmm_80000000800000008000000080000000);
  local_148._s_0.Y =
       (float)((uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y ^
              __xmm_80000000800000008000000080000000);
  local_108[0]._0_4_ =
       SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar2,0) ^
       (uint)__xmm_80000000000000008000000000000000;
  local_108[0]._4_4_ =
       (uint)((ulonglong)(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar2) >> 0x20)
       ^ __xmm_80000000000000008000000000000000._4_4_;
  local_108[0]._8_4_ =
       SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar2,0) ^ _UNK_15066df78;
  local_108[0]._12_4_ =
       (uint)((ulonglong)(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar2) >> 0x20)
       ^ _UNK_15066df7c;
  local_108[0]._16_8_ =
       CONCAT44((uint)((ulonglong)(dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z)
                      >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar2 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^
                (uint)__xmm_80000000000000008000000000000000);
  `UE::Geometry::FSphereGenerator::GenerateVertices'::__l2::<lambda_1>::operator()
            (&local_res18,uVar11 + 1,(TVector<double> *)&local_108[0]._s_0,
             (TVector<float> *)&local_148._s_0);
  return;
}

// OutputEquatorialTriangles @ 14ca9c7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FSphereGenerator::OutputEquatorialTriangles(FSphereGenerator *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  ulonglong *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  uint local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  longlong local_1b0;
  int local_1a8;
  longlong local_1a0;
  int local_198;
  int local_194;
  int local_190;
  undefined4 uStack_18c;
  int local_188;
  int local_180;
  int iStack_17c;
  int local_178;
  int local_170;
  int iStack_16c;
  int local_168;
  int local_160;
  int iStack_15c;
  int local_158;
  int local_150;
  undefined4 uStack_14c;
  int local_148;
  int local_140;
  int iStack_13c;
  int local_138;
  int local_130;
  int iStack_12c;
  int local_128;
  int local_120;
  int iStack_11c;
  int local_118;
  int local_110;
  int iStack_10c;
  int local_100;
  int iStack_fc;
  int local_f0;
  int iStack_ec;
  int local_e0;
  int iStack_dc;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  int local_50 [4];
  undefined8 local_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_50[3] = this->NumTheta;
  local_50[0] = 0;
  local_50[1] = 1;
  local_1c8 = 0;
  local_50[2] = local_50[3] + 1;
  local_38 = local_50[3] + 2;
  local_1b8 = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 1;
  local_34 = local_50[3] + 1;
  local_194 = 1;
  if (1 < this->NumPhi + -2) {
    local_1b0 = 0;
    do {
      iVar9 = this->NumTheta;
      local_198 = 0;
      if (0 < iVar9 + -1) {
        lVar12 = local_1b0 * 0xc;
        do {
          iVar11 = local_38;
          iVar9 = local_50[0];
          uVar6 = local_1c8;
          uVar1 = local_1c8 + 1;
          local_190 = (int)local_40;
          uStack_18c = local_40._4_4_;
          local_188 = local_38;
          local_178 = local_50[2];
          iVar15 = local_50[2];
          local_110 = local_50[0];
          if ((char)this->_padding_ != '\0') {
            local_110 = local_50[2];
            iVar15 = local_50[0];
          }
          iVar13 = (int)this->_padding_;
          local_1d0 = (longlong)iVar13;
          uVar10 = ~local_1c8 >> 0x1f;
          uVar14 = 0;
          if ((int)local_1c8 < iVar13) {
            uVar14 = uVar10;
          }
          local_1a8 = local_1b8;
          local_1a0 = lVar12;
          local_180 = local_50[0];
          iStack_17c = local_50[1];
          iStack_10c = local_50[1];
          if (uVar14 == 0) {
            local_1d8 = (longlong)(int)local_1c8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar2 = this->_padding_;
          *(ulonglong *)(lVar12 + lVar2) = CONCAT44(iStack_10c,local_110);
          *(int *)(lVar12 + 8 + lVar2) = iVar15;
          iVar15 = (int)this->_padding_;
          local_1d0 = (longlong)iVar15;
          uVar14 = 0;
          if ((int)local_1c8 < iVar15) {
            uVar14 = uVar10;
          }
          if (uVar14 == 0) {
            local_1d8 = (longlong)(int)local_1c8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar12 = local_1b0 * 4;
          *(int *)(lVar12 + this->_padding_) = local_1b8;
          iVar13 = iVar11;
          iVar15 = local_190;
          if ((char)this->_padding_ != '\0') {
            iVar13 = local_190;
            iVar15 = iVar11;
          }
          local_d0 = CONCAT44(uStack_18c,iVar15);
          iVar11 = (int)this->_padding_;
          local_1d0 = (longlong)iVar11;
          uVar14 = 0;
          if ((int)local_1c8 < iVar11) {
            uVar14 = uVar10;
          }
          local_1c0 = local_d0;
          if (uVar14 == 0) {
            local_1d8 = (longlong)(int)local_1c8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar4 = local_1a0;
          lVar2 = this->_padding_;
          *(undefined8 *)(lVar2 + local_1a0) = local_1c0;
          *(int *)(lVar2 + 8 + local_1a0) = iVar13;
          iVar15 = local_178;
          iVar11 = local_180;
          if ((char)this->_padding_ != '\0') {
            iVar15 = local_180;
            iVar11 = local_178;
          }
          local_c0 = CONCAT44(iStack_17c,iVar11);
          iVar11 = (int)this->_padding_;
          local_1d0 = (longlong)iVar11;
          uVar14 = 0;
          if ((int)local_1c8 < iVar11) {
            uVar14 = uVar10;
          }
          local_1c0 = local_c0;
          if (uVar14 == 0) {
            local_1d8 = (longlong)(int)local_1c8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar11 = (int)local_40;
          lVar2 = this->_padding_;
          local_1c8 = uVar6 + 2;
          local_1b0 = local_1b0 + 2;
          *(undefined8 *)(lVar2 + lVar4) = local_1c0;
          *(int *)(lVar2 + 8 + lVar4) = iVar15;
          local_170 = local_38;
          iStack_16c = local_34;
          iStack_15c = local_50[3];
          local_168 = (int)local_40;
          local_160 = local_50[2];
          iVar15 = local_50[2];
          local_100 = iVar9;
          if ((char)this->_padding_ == '\0') {
            local_100 = local_50[2];
            iVar15 = iVar9;
          }
          iVar13 = (int)this->_padding_;
          local_1d0 = (longlong)iVar13;
          iStack_fc = local_50[3];
          uVar14 = ~uVar1 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar1 < iVar13) {
            uVar6 = uVar14;
          }
          local_158 = iVar9;
          if (uVar6 == 0) {
            local_1d8 = (longlong)(int)uVar1;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar2 = this->_padding_;
          *(ulonglong *)(local_1a0 + 0xc + lVar2) = CONCAT44(iStack_fc,local_100);
          *(int *)(local_1a0 + 0x14 + lVar2) = iVar15;
          iVar9 = (int)this->_padding_;
          local_1d0 = (longlong)iVar9;
          uVar6 = 0;
          if ((int)uVar1 < iVar9) {
            uVar6 = uVar14;
          }
          if (uVar6 == 0) {
            local_1d8 = (longlong)(int)uVar1;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          *(int *)(this->_padding_ + 4 + lVar12) = local_1b8;
          iVar15 = iVar11;
          iVar9 = local_170;
          if ((char)this->_padding_ != '\0') {
            iVar15 = local_170;
            iVar9 = iVar11;
          }
          local_b0 = CONCAT44(iStack_16c,iVar9);
          iVar9 = (int)this->_padding_;
          local_1d0 = (longlong)iVar9;
          uVar6 = 0;
          if ((int)uVar1 < iVar9) {
            uVar6 = uVar14;
          }
          local_1c0 = local_b0;
          if (uVar6 == 0) {
            local_1d8 = (longlong)(int)uVar1;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar12 = local_1a0;
          lVar2 = this->_padding_;
          *(undefined8 *)(lVar2 + 0xc + local_1a0) = local_1c0;
          *(int *)(lVar2 + 0x14 + local_1a0) = iVar15;
          iVar11 = local_158;
          iVar9 = local_160;
          if ((char)this->_padding_ != '\0') {
            iVar11 = local_160;
            iVar9 = local_158;
          }
          local_a0 = CONCAT44(iStack_15c,iVar9);
          iVar9 = (int)this->_padding_;
          local_1d0 = (longlong)iVar9;
          uVar6 = 0;
          if ((int)uVar1 < iVar9) {
            uVar6 = uVar14;
          }
          local_1c0 = local_a0;
          if (uVar6 == 0) {
            local_1d8 = (longlong)(int)uVar1;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar2 = this->_padding_;
          *(undefined8 *)(lVar2 + 0xc + lVar12) = local_1c0;
          *(int *)(lVar2 + 0x14 + lVar12) = iVar11;
          piVar7 = local_50;
          do {
            *piVar7 = *piVar7 + 1;
            piVar7 = piVar7 + 1;
          } while (piVar7 != (int *)&local_40);
          puVar8 = &local_40;
          do {
            *(int *)puVar8 = (int)*puVar8 + 1;
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
          } while (puVar8 != &local_30);
          iVar9 = this->NumTheta;
          local_1b8 = local_1a8 + 1;
          if (this->bPolygroupPerQuad == false) {
            local_1b8 = local_1a8;
          }
          local_198 = local_198 + 1;
          lVar12 = lVar12 + 0x18;
          local_1a0 = lVar12;
        } while (local_198 < iVar9 + -1);
      }
      iVar15 = local_38;
      iVar11 = local_50[0];
      lVar12 = local_1b0;
      uVar6 = local_1c8;
      uVar1 = local_1c8 + 1;
      iStack_13c = local_50[1] - iVar9;
      local_138 = local_50[2] - iVar9;
      local_150 = (int)local_40;
      uStack_14c = local_40._4_4_;
      local_148 = local_38;
      iVar9 = local_138;
      local_f0 = local_50[0];
      if ((char)this->_padding_ != '\0') {
        iVar9 = local_50[0];
        local_f0 = local_138;
      }
      iVar13 = (int)this->_padding_;
      local_1d0 = (longlong)iVar13;
      uVar10 = ~local_1c8 >> 0x1f;
      uVar14 = 0;
      if ((int)local_1c8 < iVar13) {
        uVar14 = uVar10;
      }
      local_1a8 = local_1b8;
      local_140 = local_50[0];
      iStack_ec = iStack_13c;
      if (uVar14 == 0) {
        local_1d8 = (longlong)(int)local_1c8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_1a0 = lVar12 * 0xc;
      lVar2 = this->_padding_;
      *(ulonglong *)(lVar2 + local_1a0) = CONCAT44(iStack_ec,local_f0);
      *(int *)(lVar2 + 8 + local_1a0) = iVar9;
      iVar9 = (int)this->_padding_;
      local_1d0 = (longlong)iVar9;
      uVar14 = 0;
      if ((int)local_1c8 < iVar9) {
        uVar14 = uVar10;
      }
      if (uVar14 == 0) {
        local_1d8 = (longlong)(int)local_1c8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar12 = lVar12 * 4;
      *(int *)(lVar12 + this->_padding_) = local_1b8;
      iVar13 = iVar15;
      iVar9 = local_150;
      if ((char)this->_padding_ != '\0') {
        iVar13 = local_150;
        iVar9 = iVar15;
      }
      local_90 = CONCAT44(uStack_14c,iVar9);
      iVar9 = (int)this->_padding_;
      local_1d0 = (longlong)iVar9;
      uVar14 = 0;
      if ((int)local_1c8 < iVar9) {
        uVar14 = uVar10;
      }
      local_1c0 = local_90;
      if (uVar14 == 0) {
        local_1d8 = (longlong)(int)local_1c8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = this->_padding_;
      *(undefined8 *)(lVar2 + local_1a0) = local_1c0;
      *(int *)(lVar2 + 8 + local_1a0) = iVar13;
      iVar15 = local_138;
      iVar9 = local_140;
      if ((char)this->_padding_ != '\0') {
        iVar15 = local_140;
        iVar9 = local_138;
      }
      local_80 = CONCAT44(iStack_13c,iVar9);
      iVar9 = (int)this->_padding_;
      local_1d0 = (longlong)iVar9;
      uVar14 = 0;
      if ((int)local_1c8 < iVar9) {
        uVar14 = uVar10;
      }
      local_1c0 = local_80;
      if (uVar14 == 0) {
        local_1d8 = (longlong)(int)local_1c8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar9 = (int)local_40;
      lVar4 = local_1a0;
      lVar2 = this->_padding_;
      local_1c8 = uVar6 + 2;
      local_1b0 = local_1b0 + 2;
      *(undefined8 *)(lVar2 + local_1a0) = local_1c0;
      *(int *)(lVar2 + 8 + local_1a0) = iVar15;
      local_120 = local_50[2] - this->NumTheta;
      local_130 = local_38;
      iStack_12c = local_34;
      iStack_11c = local_50[3];
      local_128 = (int)local_40;
      iVar15 = iVar11;
      local_e0 = local_120;
      if ((char)this->_padding_ != '\0') {
        iVar15 = local_120;
        local_e0 = iVar11;
      }
      iVar13 = (int)this->_padding_;
      local_1d0 = (longlong)iVar13;
      iStack_dc = local_50[3];
      uVar14 = ~uVar1 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar1 < iVar13) {
        uVar6 = uVar14;
      }
      local_118 = iVar11;
      if (uVar6 == 0) {
        local_1d8 = (longlong)(int)uVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = this->_padding_;
      *(ulonglong *)(lVar4 + 0xc + lVar2) = CONCAT44(iStack_dc,local_e0);
      *(int *)(lVar4 + 0x14 + lVar2) = iVar15;
      iVar11 = (int)this->_padding_;
      local_1d0 = (longlong)iVar11;
      uVar6 = 0;
      if ((int)uVar1 < iVar11) {
        uVar6 = uVar14;
      }
      if (uVar6 == 0) {
        local_1d8 = (longlong)(int)uVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(int *)(lVar12 + 4 + this->_padding_) = local_1b8;
      iVar15 = iVar9;
      iVar11 = local_130;
      if ((char)this->_padding_ != '\0') {
        iVar15 = local_130;
        iVar11 = iVar9;
      }
      local_70 = CONCAT44(iStack_12c,iVar11);
      iVar9 = (int)this->_padding_;
      local_1d0 = (longlong)iVar9;
      uVar6 = 0;
      if ((int)uVar1 < iVar9) {
        uVar6 = uVar14;
      }
      local_1c0 = local_70;
      if (uVar6 == 0) {
        local_1d8 = (longlong)(int)uVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar12 = this->_padding_;
      *(undefined8 *)(lVar12 + 0xc + lVar4) = local_1c0;
      *(int *)(lVar12 + 0x14 + lVar4) = iVar15;
      iVar11 = local_118;
      iVar9 = local_120;
      if ((char)this->_padding_ != '\0') {
        iVar11 = local_120;
        iVar9 = local_118;
      }
      local_60 = CONCAT44(iStack_11c,iVar9);
      iVar9 = (int)this->_padding_;
      local_1d0 = (longlong)iVar9;
      uVar6 = 0;
      if ((int)uVar1 < iVar9) {
        uVar6 = uVar14;
      }
      local_1c0 = local_60;
      if (uVar6 == 0) {
        local_1d8 = (longlong)(int)uVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar12 = this->_padding_;
      *(undefined8 *)(lVar12 + 0xc + lVar4) = local_1c0;
      *(int *)(lVar12 + 0x14 + lVar4) = iVar11;
      piVar7 = local_50;
      do {
        *piVar7 = *piVar7 + 1;
        piVar7 = piVar7 + 1;
      } while (piVar7 != (int *)&local_40);
      puVar8 = &local_40;
      do {
        *(int *)puVar8 = (int)*puVar8 + 2;
        puVar8 = (ulonglong *)((longlong)puVar8 + 4);
      } while (puVar8 != &local_30);
      local_194 = local_194 + 1;
      local_1b8 = local_1a8 + 1;
      if (this->bPolygroupPerQuad == false) {
        local_1b8 = local_1a8;
      }
    } while (local_194 < this->NumPhi + -2);
  }
  return;
}

// OutputPolarTriangles @ 14ca9d3e0

void __thiscall UE::Geometry::FSphereGenerator::OutputPolarTriangles(FSphereGenerator *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int local_res10;
  int local_a0;
  int local_90;
  undefined8 local_78;
  int local_60;
  
  iVar21 = this->NumTheta;
  iVar8 = this->NumPhi;
  iVar17 = (iVar21 + 1) * (iVar8 + -2);
  iVar11 = (iVar8 + -2) * iVar21;
  uVar12 = (iVar8 + -3) * iVar21 * 2;
  iVar1 = iVar11 + 1;
  local_res10 = 0;
  if (this->bPolygroupPerQuad != false) {
    local_res10 = (iVar8 + -3) * iVar21;
  }
  if (0 < iVar21) {
    lVar13 = (longlong)(int)uVar12;
    local_a0 = 0;
    do {
      iVar18 = local_a0 + 1;
      iVar21 = iVar18 % iVar21;
      uVar15 = uVar12 + 1;
      iVar8 = iVar21;
      local_90 = local_a0;
      if ((char)this->_padding_ != '\0') {
        iVar8 = local_a0;
        local_90 = iVar21;
      }
      uVar19 = ~uVar12 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar20 = uVar19;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = lVar13 * 0xc;
      lVar3 = this->_padding_;
      *(ulonglong *)(lVar2 + lVar3) = CONCAT44(iVar11,local_90);
      *(int *)(lVar2 + 8 + lVar3) = iVar8;
      uVar20 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar20 = uVar19;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)(this->_padding_ + lVar13 * 4) = local_res10;
      iVar10 = iVar18;
      iVar8 = local_a0;
      if ((char)this->_padding_ != '\0') {
        iVar10 = local_a0;
        iVar8 = iVar18;
      }
      local_78 = CONCAT44(iVar17 + -1 + iVar18,iVar8);
      uVar20 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar20 = uVar19;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = this->_padding_;
      *(undefined8 *)(lVar2 + lVar3) = local_78;
      *(int *)(lVar2 + 8 + lVar3) = iVar10;
      iVar8 = iVar21;
      if ((char)this->_padding_ != '\0') {
        iVar8 = local_a0;
        local_a0 = iVar21;
      }
      uVar20 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar20 = uVar19;
      }
      if ((uVar20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = this->_padding_;
      *(ulonglong *)(lVar2 + lVar3) = CONCAT44(iVar11,local_a0);
      *(int *)(lVar2 + 8 + lVar3) = iVar8;
      iVar21 = this->NumTheta;
      iVar8 = local_res10 + 1;
      if (this->bPolygroupPerQuad == false) {
        iVar8 = local_res10;
      }
      lVar13 = lVar13 + 1;
      uVar12 = uVar15;
      local_a0 = iVar18;
      local_res10 = iVar8;
    } while (iVar18 < iVar21);
    iVar11 = iVar11 - iVar21;
    iVar8 = iVar17 - iVar21;
    if (0 < iVar21) {
      uVar14 = (ulonglong)(int)uVar15;
      uVar16 = uVar14;
      iVar18 = iVar11;
      do {
        iVar6 = -iVar11 + iVar18;
        uVar12 = (uint)uVar14;
        iVar10 = iVar6 + iVar8;
        iVar7 = iVar6 + iVar21 + iVar17;
        iVar9 = iVar10 + -1;
        iVar21 = ((1 - iVar11) + iVar18) % iVar21 + iVar11;
        iVar6 = iVar1;
        local_60 = iVar18;
        if ((char)this->_padding_ != '\0') {
          iVar6 = iVar18;
          local_60 = iVar1;
        }
        uVar20 = ~uVar12 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = this->_padding_;
        *(ulonglong *)(lVar13 + uVar16 * 0xc) = CONCAT44(iVar21,local_60);
        *(int *)(lVar13 + 8 + uVar16 * 0xc) = iVar6;
        uVar15 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)(this->_padding_ + uVar16 * 4) = local_res10;
        iVar6 = iVar9;
        if ((char)this->_padding_ != '\0') {
          iVar6 = iVar7;
          iVar7 = iVar9;
        }
        uVar15 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = this->_padding_;
        *(ulonglong *)(lVar13 + uVar16 * 0xc) = CONCAT44(iVar10,iVar6);
        *(int *)(lVar13 + 8 + uVar16 * 0xc) = iVar7;
        iVar10 = iVar1;
        local_90 = iVar18;
        if ((char)this->_padding_ != '\0') {
          iVar10 = iVar18;
          local_90 = iVar1;
        }
        uVar15 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = this->_padding_;
        iVar18 = iVar18 + 1;
        uVar14 = (ulonglong)(uVar12 + 1);
        *(ulonglong *)(lVar13 + uVar16 * 0xc) = CONCAT44(iVar21,local_90);
        *(int *)(lVar13 + 8 + uVar16 * 0xc) = iVar10;
        iVar21 = this->NumTheta;
        iVar10 = local_res10 + 1;
        if (this->bPolygroupPerQuad == false) {
          iVar10 = local_res10;
        }
        uVar16 = uVar16 + 1;
        local_res10 = iVar10;
      } while (-iVar11 + iVar18 < iVar21);
    }
  }
  return;
}

