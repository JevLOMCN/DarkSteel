// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// operator() @ 143f8e850

int __thiscall
`UE::Geometry::FCapsuleGenerator::GenerateUVVertices'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,float param_3,float param_4)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  
  fVar3 = __real_3f800000;
  iVar9 = param_1 + param_2;
  do {
    if (iVar9 <= param_1) {
      return param_1;
    }
    lVar8 = *(longlong *)this;
    iVar6 = 0;
    fVar10 = fVar3;
    if (0 < *(int *)(lVar8 + 0xb4)) {
      do {
        uVar1 = **(uint **)((longlong)this + 8);
        uVar5 = 0;
        if ((int)uVar1 < *(int *)(lVar8 + 0x20)) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        *(ulonglong *)(*(longlong *)(lVar8 + 0x18) + (longlong)(int)uVar1 * 8) =
             CONCAT44(param_3,fVar10);
        lVar8 = *(longlong *)this;
        uVar1 = **(uint **)((longlong)this + 8);
        iVar7 = param_1 * *(int *)(lVar8 + 0xb4) + iVar6;
        uVar5 = 0;
        if ((int)uVar1 < *(int *)(lVar8 + 0x30)) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        iVar6 = iVar6 + 1;
        *(int *)(*(longlong *)(lVar8 + 0x28) + (longlong)(int)uVar1 * 4) = iVar7;
        **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
        lVar8 = *(longlong *)this;
        fVar10 = fVar10 + *(float *)((longlong)this + 0x10);
      } while (iVar6 < *(int *)(lVar8 + 0xb4));
    }
    uVar1 = **(uint **)((longlong)this + 8);
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x20)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    *(ulonglong *)(*(longlong *)(lVar8 + 0x18) + (longlong)(int)uVar1 * 8) =
         CONCAT44(param_3,fVar10);
    lVar8 = *(longlong *)this;
    uVar1 = **(uint **)((longlong)this + 8);
    iVar6 = param_1 * *(int *)(lVar8 + 0xb4);
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x30)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    param_3 = param_3 + param_4;
    param_1 = param_1 + 1;
    *(int *)(*(longlong *)(lVar8 + 0x28) + (longlong)(int)uVar1 * 4) = iVar6;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  } while( true );
}

// operator() @ 143f8eae0

void __thiscall
`UE::Geometry::FCapsuleGenerator::GenerateVertices'::__l2::<lambda_1>::operator()
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

// Generate @ 143facd90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall UE::Geometry::FCapsuleGenerator::Generate(FCapsuleGenerator *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 2;
  if (2 < this->NumHemisphereArcSteps) {
    iVar2 = this->NumHemisphereArcSteps;
  }
  this->NumHemisphereArcSteps = iVar2;
  iVar4 = 3;
  if (3 < this->NumCircleSteps) {
    iVar4 = this->NumCircleSteps;
  }
  this->NumCircleSteps = iVar4;
  iVar1 = this->NumSegmentSteps + -2 + iVar2 * 2;
  iVar3 = iVar1 * iVar4;
  iVar2 = iVar3 + 2;
  iVar4 = (iVar4 + 1) * iVar1 + iVar4 * 2;
  iVar3 = iVar3 * 2;
  if (0 < iVar2) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar2,Default);
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
  if (0 < iVar4) {
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar4,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar4,Default);
  }
  if (0 < iVar2) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar2,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar2,Default);
  }
  GenerateVertices(this);
  GenerateUVVertices(this);
  OutputEquatorialTriangles(this);
  OutputPolarTriangles(this);
  return (FMeshShapeGenerator *)this;
}

// GenerateUVVertices @ 143fad5c0

void __thiscall UE::Geometry::FCapsuleGenerator::GenerateUVVertices(FCapsuleGenerator *this)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_res8 [2];
  float local_res10;
  undefined4 uStackX_14;
  float local_res18;
  undefined4 uStackX_1c;
  FCapsuleGenerator *local_78;
  uint *local_70;
  float local_68;
  
  dVar1 = this->Radius;
  iVar10 = this->NumHemisphereArcSteps;
  iVar2 = this->NumSegmentSteps;
  iVar5 = iVar10 + -1;
  local_res8[0] = 0;
  local_70 = local_res8;
  fVar14 = __real_bf800000 / (float)this->NumCircleSteps;
  fVar12 = (float)(dVar1 + dVar1 + this->SegmentLength);
  fVar13 = (float)dVar1 / ((float)iVar5 * fVar12);
  local_78 = this;
  local_68 = fVar14;
  iVar5 = `UE::Geometry::FCapsuleGenerator::GenerateUVVertices'::__l2::<lambda_1>::operator()
                    (&local_78,1,iVar5,fVar13,fVar13);
  fVar11 = __real_3f800000 / fVar12;
  fVar12 = (float)this->SegmentLength / ((float)(this->NumSegmentSteps + 1) * fVar12);
  iVar5 = `UE::Geometry::FCapsuleGenerator::GenerateUVVertices'::__l2::<lambda_1>::operator()
                    (&local_78,iVar5,this->NumSegmentSteps,(float)this->Radius * fVar11 + fVar12,
                     fVar12);
  `UE::Geometry::FCapsuleGenerator::GenerateUVVertices'::__l2::<lambda_1>::operator()
            (&local_78,iVar5,this->NumHemisphereArcSteps + -1,
             (float)(this->SegmentLength + this->Radius) * fVar11,fVar13);
  fVar12 = fVar14 + __real_3f800000;
  iVar9 = 0;
  iVar5 = (this->NumSegmentSteps + -2 + iVar2 + iVar10 * 2) * this->NumCircleSteps;
  if (0 < this->NumCircleSteps) {
    uStackX_14 = 0;
    fVar11 = fVar12;
    do {
      uVar7 = local_res8[0];
      uVar6 = 0;
      if ((int)local_res8[0] < (int)this->_padding_) {
        uVar6 = ~local_res8[0] >> 0x1f;
      }
      local_res10 = fVar11;
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(ulonglong *)(this->_padding_ + (longlong)(int)uVar7 * 8) = CONCAT44(uStackX_14,local_res10);
      lVar8 = (longlong)(int)local_res8[0];
      uVar7 = 0;
      if ((int)local_res8[0] < (int)this->_padding_) {
        uVar7 = ~local_res8[0] >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      fVar11 = fVar11 + fVar14;
      iVar9 = iVar9 + 1;
      *(int *)(this->_padding_ + lVar8 * 4) = iVar5;
      uVar7 = local_res8[0] + 1;
      local_res8[0] = uVar7;
    } while (iVar9 < this->NumCircleSteps);
    iVar10 = 0;
    if (0 < this->NumCircleSteps) {
      uStackX_1c = 0x3f800000;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        local_res8[0] = uVar7;
        local_res18 = fVar12;
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        *(ulonglong *)(this->_padding_ + (longlong)(int)uVar7 * 8) =
             CONCAT44(uStackX_1c,local_res18);
        lVar8 = (longlong)(int)local_res8[0];
        uVar7 = 0;
        if ((int)local_res8[0] < (int)this->_padding_) {
          uVar7 = ~local_res8[0] >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        fVar12 = fVar12 + fVar14;
        iVar10 = iVar10 + 1;
        *(int *)(this->_padding_ + lVar8 * 4) = iVar5 + 1;
        uVar7 = local_res8[0] + 1;
      } while (iVar10 < this->NumCircleSteps);
    }
  }
  return;
}

// GenerateVertices @ 143fad940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FCapsuleGenerator::GenerateVertices(FCapsuleGenerator *this)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FCapsuleGenerator *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FCapsuleGenerator *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  double extraout_XMM0_Qb_03;
  double dVar19;
  longlong local_res10;
  int local_res18;
  longlong local_res20;
  FCapsuleGenerator *local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108 [8];
  
  local_178 = this->SegmentLength;
  uVar12 = 0;
  local_158 = __real_3ff921fb54442d18;
  iVar9 = this->NumCircleSteps;
  local_res18 = 1;
  local_res10._0_4_ = 1;
  dVar19 = __real_3ff921fb54442d18 / (double)(this->NumHemisphereArcSteps + -1);
  local_168 = __real_401921fb54442d18 / (double)iVar9;
  pFVar10 = this;
  local_188 = this;
  local_180 = dVar19;
  local_160 = dVar19;
  if (1 < this->NumHemisphereArcSteps) {
    lVar18 = 0;
    local_170 = 0.0;
    do {
      iVar13 = 0;
      if (0 < iVar9) {
        __libm_sse2_sincos_();
        lVar11 = lVar18 * 0xc;
        lVar16 = lVar18 * 0x18;
        lVar15 = lVar18 * 4;
        do {
          __libm_sse2_sincos_();
          uVar17 = ~uVar12 >> 0x1f;
          dVar19 = this->Radius;
          uVar8 = 0;
          if ((int)uVar12 < (int)pFVar10->_padding_) {
            uVar8 = uVar17;
          }
          dVar3 = dVar19 * extraout_XMM0_Qb + local_178;
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = local_188;
          lVar18 = pFVar10->_padding_;
          *(double *)(lVar16 + lVar18) = dVar19 * extraout_XMM0_Qb_00 * extraout_XMM0_Qa;
          *(double *)(lVar16 + 8 + lVar18) = dVar19 * extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
          *(double *)(lVar16 + 0x10 + lVar18) = dVar3;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_188->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar10 = local_188;
          lVar18 = pFVar6->_padding_;
          *(float *)(lVar18 + lVar11) = (float)(extraout_XMM0_Qb_00 * extraout_XMM0_Qa);
          *(float *)(lVar18 + 4 + lVar11) = (float)(extraout_XMM0_Qa_00 * extraout_XMM0_Qa);
          *(float *)(lVar18 + 8 + lVar11) = (float)extraout_XMM0_Qb;
          plVar1 = &local_188->_padding_;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_188->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar13 = iVar13 + 1;
          lVar18 = (longlong)local_170 + 1;
          lVar16 = lVar16 + 0x18;
          lVar11 = lVar11 + 0xc;
          *(uint *)(*plVar1 + lVar15) = uVar12;
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 4;
          iVar9 = this->NumCircleSteps;
          dVar19 = local_160;
          local_170 = (double)lVar18;
        } while (iVar13 < iVar9);
      }
      local_res10._0_4_ = (int)local_res10 + 1;
      local_180 = local_180 + dVar19;
    } while ((int)local_res10 < this->NumHemisphereArcSteps);
  }
  dVar5 = __real_3ff0000000000000;
  iVar13 = 0;
  dVar3 = __real_3ff0000000000000 / ((double)this->NumSegmentSteps + __real_3ff0000000000000);
  local_170 = dVar3;
  if (0 < this->NumSegmentSteps) {
    lVar18 = (longlong)(int)uVar12;
    dVar4 = dVar3;
    local_res20 = lVar18;
    do {
      iVar14 = 0;
      if (0 < iVar9) {
        lVar15 = lVar18 * 0xc;
        lVar11 = lVar18 * 0x18;
        local_180 = (double)(lVar18 * 4);
        dVar19 = (dVar5 - dVar4) * local_178;
        do {
          __libm_sse2_sincos_();
          dVar3 = this->Radius;
          uVar17 = ~uVar12 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar12 < (int)pFVar10->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = local_188;
          lVar18 = pFVar10->_padding_;
          *(double *)(lVar11 + lVar18) = dVar3 * extraout_XMM0_Qb_01;
          *(double *)(lVar11 + 8 + lVar18) = dVar3 * extraout_XMM0_Qa_01;
          *(double *)(lVar11 + 0x10 + lVar18) = dVar19;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_188->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar10 = local_188;
          lVar18 = pFVar6->_padding_;
          *(float *)(lVar18 + lVar15) = (float)extraout_XMM0_Qb_01;
          *(float *)(lVar18 + 4 + lVar15) = (float)extraout_XMM0_Qa_01;
          *(undefined4 *)(lVar18 + 8 + lVar15) = 0;
          plVar1 = &local_188->_padding_;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_188->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar14 = iVar14 + 1;
          lVar11 = lVar11 + 0x18;
          lVar15 = lVar15 + 0xc;
          *(uint *)((longlong)local_180 + *plVar1) = uVar12;
          local_180 = (double)((longlong)local_180 + 4);
          uVar12 = uVar12 + 1;
          iVar9 = this->NumCircleSteps;
          lVar18 = local_res20 + 1;
          dVar3 = local_170;
          local_res20 = lVar18;
        } while (iVar14 < iVar9);
      }
      dVar4 = dVar4 + dVar3;
      iVar13 = iVar13 + 1;
      dVar19 = local_160;
    } while (iVar13 < this->NumSegmentSteps);
  }
  if (1 < this->NumHemisphereArcSteps) {
    lVar18 = (longlong)(int)uVar12;
    local_res10 = lVar18;
    do {
      iVar13 = 0;
      if (0 < iVar9) {
        __libm_sse2_sincos_();
        lVar15 = lVar18 * 0xc;
        local_res20 = lVar18 * 4;
        lVar11 = lVar18 * 0x18;
        do {
          __libm_sse2_sincos_();
          dVar19 = this->Radius;
          uVar17 = ~uVar12 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar12 < (int)pFVar10->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar6 = local_188;
          lVar18 = pFVar10->_padding_;
          *(double *)(lVar11 + lVar18) = dVar19 * extraout_XMM0_Qb_03 * extraout_XMM0_Qa_02;
          *(double *)(lVar11 + 8 + lVar18) = dVar19 * extraout_XMM0_Qa_03 * extraout_XMM0_Qa_02;
          *(double *)(lVar11 + 0x10 + lVar18) = dVar19 * extraout_XMM0_Qb_02;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_188->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar10 = local_188;
          lVar18 = pFVar6->_padding_;
          *(float *)(lVar18 + lVar15) = (float)(extraout_XMM0_Qb_03 * extraout_XMM0_Qa_02);
          *(float *)(lVar18 + 4 + lVar15) = (float)(extraout_XMM0_Qa_03 * extraout_XMM0_Qa_02);
          *(float *)(lVar18 + 8 + lVar15) = (float)extraout_XMM0_Qb_02;
          plVar1 = &local_188->_padding_;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_188->_padding_) {
            uVar8 = uVar17;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar13 = iVar13 + 1;
          lVar11 = lVar11 + 0x18;
          lVar18 = local_res10 + 1;
          lVar15 = lVar15 + 0xc;
          *(uint *)(local_res20 + *plVar1) = uVar12;
          local_res20 = local_res20 + 4;
          uVar12 = uVar12 + 1;
          iVar9 = this->NumCircleSteps;
          dVar19 = local_160;
          local_res10 = lVar18;
        } while (iVar13 < iVar9);
      }
      local_res18 = local_res18 + 1;
      local_158 = local_158 + dVar19;
    } while (local_res18 < this->NumHemisphereArcSteps);
  }
  local_138._0_8_ =
       CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
  dVar19 = this->Radius;
  local_138._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_128._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar19;
  local_128._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar19;
  local_128._s_0.Z = dVar19 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z + local_178;
  `UE::Geometry::FCapsuleGenerator::GenerateVertices'::__l2::<lambda_1>::operator()
            (&local_188,uVar12,(TVector<double> *)&local_128._s_0,(TVector<float> *)&local_138._s_0)
  ;
  dVar19 = this->Radius;
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
       SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar19,0) ^
       (uint)__xmm_80000000000000008000000000000000;
  local_108[0]._4_4_ =
       (uint)((ulonglong)(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar19) >> 0x20
             ) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_108[0]._8_4_ =
       SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar19,0) ^ _UNK_15066df78;
  local_108[0]._12_4_ =
       (uint)((ulonglong)(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar19) >> 0x20
             ) ^ _UNK_15066df7c;
  local_108[0]._16_8_ =
       CONCAT44((uint)((ulonglong)
                       (dVar19 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z) >> 0x20)
                ^ __xmm_80000000000000008000000000000000._4_4_,
                SUB84(dVar19 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^
                (uint)__xmm_80000000000000008000000000000000);
  `UE::Geometry::FCapsuleGenerator::GenerateVertices'::__l2::<lambda_1>::operator()
            (&local_188,uVar12 + 1,(TVector<double> *)&local_108[0]._s_0,
             (TVector<float> *)&local_148._s_0);
  return;
}

// OutputEquatorialTriangles @ 143fb94a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles(FCapsuleGenerator *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  ulonglong *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  int local_1b0;
  int local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int local_198;
  int iStack_194;
  int local_190;
  int local_188;
  int iStack_184;
  int local_180;
  int local_178;
  int iStack_174;
  int local_170;
  int local_168;
  undefined4 uStack_164;
  int local_160;
  int local_158;
  int iStack_154;
  int local_150;
  int local_148;
  int iStack_144;
  int local_140;
  int local_138;
  int iStack_134;
  int local_130;
  int local_128;
  int local_120;
  int iStack_11c;
  int local_110;
  int iStack_10c;
  int local_100;
  int iStack_fc;
  int local_f0;
  int iStack_ec;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  longlong local_60;
  int local_58 [4];
  undefined8 local_48;
  int local_40;
  int local_3c;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_208;
  local_58[3] = this->NumCircleSteps;
  local_58[1] = 1;
  local_58[0] = 0;
  local_1d8 = 0;
  local_58[2] = local_58[3] + 1;
  local_40 = local_58[3] + 2;
  local_3c = local_58[3] + 1;
  local_1c8 = 0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 1;
  local_1b0 = 1;
  local_128 = this->NumSegmentSteps + this->NumHemisphereArcSteps * 2 + -2;
  if (1 < local_128) {
    local_1c0 = 0;
    do {
      iVar10 = this->NumCircleSteps;
      local_1c4 = 0;
      iVar13 = local_1c8;
      if (0 < iVar10 + -1) {
        local_1b8 = local_1c0 * 0xc;
        do {
          iVar12 = local_40;
          iVar10 = local_58[0];
          uVar7 = local_1d8;
          uVar1 = local_1d8 + 1;
          local_1a8 = (int)local_48;
          uStack_1a4 = local_48._4_4_;
          local_1a0 = local_40;
          local_190 = local_58[2];
          iVar16 = local_58[2];
          local_120 = local_58[0];
          if ((char)this->_padding_ != '\0') {
            local_120 = local_58[2];
            iVar16 = local_58[0];
          }
          iVar14 = (int)this->_padding_;
          local_1e0 = (longlong)iVar14;
          uVar11 = ~local_1d8 >> 0x1f;
          uVar15 = 0;
          if ((int)local_1d8 < iVar14) {
            uVar15 = uVar11;
          }
          local_198 = local_58[0];
          iStack_194 = local_58[1];
          iStack_11c = local_58[1];
          if (uVar15 == 0) {
            local_1e8 = (longlong)(int)local_1d8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar2 = this->_padding_;
          *(ulonglong *)(lVar2 + local_1b8) = CONCAT44(iStack_11c,local_120);
          *(int *)(lVar2 + 8 + local_1b8) = iVar16;
          iVar16 = (int)this->_padding_;
          local_1e0 = (longlong)iVar16;
          uVar15 = 0;
          if ((int)local_1d8 < iVar16) {
            uVar15 = uVar11;
          }
          if (uVar15 == 0) {
            local_1e8 = (longlong)(int)local_1d8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_60 = local_1c0 * 4;
          *(int *)(local_60 + this->_padding_) = iVar13;
          iVar14 = iVar12;
          iVar16 = local_1a8;
          if ((char)this->_padding_ != '\0') {
            iVar14 = local_1a8;
            iVar16 = iVar12;
          }
          local_e0 = CONCAT44(uStack_1a4,iVar16);
          iVar12 = (int)this->_padding_;
          local_1e0 = (longlong)iVar12;
          uVar15 = 0;
          if ((int)local_1d8 < iVar12) {
            uVar15 = uVar11;
          }
          local_1d0 = local_e0;
          if (uVar15 == 0) {
            local_1e8 = (longlong)(int)local_1d8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar4 = local_1b8;
          lVar2 = this->_padding_;
          *(undefined8 *)(local_1b8 + lVar2) = local_1d0;
          *(int *)(local_1b8 + 8 + lVar2) = iVar14;
          iVar16 = local_190;
          iVar12 = local_198;
          if ((char)this->_padding_ != '\0') {
            iVar16 = local_198;
            iVar12 = local_190;
          }
          local_d0 = CONCAT44(iStack_194,iVar12);
          iVar12 = (int)this->_padding_;
          local_1e0 = (longlong)iVar12;
          uVar15 = 0;
          if ((int)local_1d8 < iVar12) {
            uVar15 = uVar11;
          }
          local_1d0 = local_d0;
          if (uVar15 == 0) {
            local_1e8 = (longlong)(int)local_1d8;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = (int)local_48;
          lVar2 = this->_padding_;
          local_1d8 = uVar7 + 2;
          local_1c0 = local_1c0 + 2;
          *(undefined8 *)(lVar4 + lVar2) = local_1d0;
          *(int *)(lVar4 + 8 + lVar2) = iVar16;
          local_188 = local_40;
          iStack_184 = local_3c;
          iStack_174 = local_58[3];
          local_180 = (int)local_48;
          local_178 = local_58[2];
          iVar16 = local_58[2];
          local_110 = iVar10;
          if ((char)this->_padding_ == '\0') {
            local_110 = local_58[2];
            iVar16 = iVar10;
          }
          iVar14 = (int)this->_padding_;
          local_1e0 = (longlong)iVar14;
          iStack_10c = local_58[3];
          uVar15 = ~uVar1 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar1 < iVar14) {
            uVar7 = uVar15;
          }
          local_170 = iVar10;
          if (uVar7 == 0) {
            local_1e8 = (longlong)(int)uVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar2 = this->_padding_;
          *(ulonglong *)(lVar2 + 0xc + local_1b8) = CONCAT44(iStack_10c,local_110);
          *(int *)(lVar2 + 0x14 + local_1b8) = iVar16;
          iVar10 = (int)this->_padding_;
          local_1e0 = (longlong)iVar10;
          uVar7 = 0;
          if ((int)uVar1 < iVar10) {
            uVar7 = uVar15;
          }
          if (uVar7 == 0) {
            local_1e8 = (longlong)(int)uVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          *(int *)(this->_padding_ + 4 + local_60) = iVar13;
          iVar16 = iVar12;
          iVar10 = local_188;
          if ((char)this->_padding_ != '\0') {
            iVar16 = local_188;
            iVar10 = iVar12;
          }
          local_c0 = CONCAT44(iStack_184,iVar10);
          iVar10 = (int)this->_padding_;
          local_1e0 = (longlong)iVar10;
          uVar7 = 0;
          if ((int)uVar1 < iVar10) {
            uVar7 = uVar15;
          }
          local_1d0 = local_c0;
          if (uVar7 == 0) {
            local_1e8 = (longlong)(int)uVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar4 = local_1b8;
          lVar2 = this->_padding_;
          *(undefined8 *)(local_1b8 + 0xc + lVar2) = local_1d0;
          *(int *)(local_1b8 + 0x14 + lVar2) = iVar16;
          iVar12 = local_170;
          iVar10 = local_178;
          if ((char)this->_padding_ != '\0') {
            iVar12 = local_178;
            iVar10 = local_170;
          }
          local_b0 = CONCAT44(iStack_174,iVar10);
          iVar10 = (int)this->_padding_;
          local_1e0 = (longlong)iVar10;
          uVar7 = 0;
          if ((int)uVar1 < iVar10) {
            uVar7 = uVar15;
          }
          local_1d0 = local_b0;
          if (uVar7 == 0) {
            local_1e8 = (longlong)(int)uVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar2 = this->_padding_;
          *(undefined8 *)(lVar4 + 0xc + lVar2) = local_1d0;
          *(int *)(lVar4 + 0x14 + lVar2) = iVar12;
          piVar8 = local_58;
          do {
            *piVar8 = *piVar8 + 1;
            piVar8 = piVar8 + 1;
          } while (piVar8 != (int *)&local_48);
          puVar9 = &local_48;
          do {
            *(int *)puVar9 = (int)*puVar9 + 1;
            puVar9 = (ulonglong *)((longlong)puVar9 + 4);
          } while (puVar9 != local_38);
          iVar10 = this->NumCircleSteps;
          iVar12 = iVar13 + 1;
          if (this->bPolygroupPerQuad == false) {
            iVar12 = iVar13;
          }
          iVar13 = iVar12;
          local_1c4 = local_1c4 + 1;
          local_1b8 = lVar4 + 0x18;
        } while (local_1c4 < iVar10 + -1);
      }
      local_1c8 = iVar13;
      iVar12 = local_40;
      iVar13 = local_58[0];
      uVar7 = local_1d8;
      uVar1 = local_1d8 + 1;
      iStack_154 = local_58[1] - iVar10;
      local_150 = local_58[2] - iVar10;
      local_168 = (int)local_48;
      uStack_164 = local_48._4_4_;
      local_160 = local_40;
      iVar10 = local_150;
      local_100 = local_58[0];
      if ((char)this->_padding_ != '\0') {
        iVar10 = local_58[0];
        local_100 = local_150;
      }
      iVar16 = (int)this->_padding_;
      local_1e0 = (longlong)iVar16;
      uVar11 = ~local_1d8 >> 0x1f;
      uVar15 = 0;
      if ((int)local_1d8 < iVar16) {
        uVar15 = uVar11;
      }
      local_1c4 = local_1c8;
      local_158 = local_58[0];
      iStack_fc = iStack_154;
      if (uVar15 == 0) {
        local_1e8 = (longlong)(int)local_1d8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar4 = local_1c0;
      local_1b8 = local_1c0 * 0xc;
      lVar2 = this->_padding_;
      *(ulonglong *)(lVar2 + local_1b8) = CONCAT44(iStack_fc,local_100);
      *(int *)(lVar2 + 8 + local_1b8) = iVar10;
      iVar10 = (int)this->_padding_;
      local_1e0 = (longlong)iVar10;
      uVar15 = 0;
      if ((int)local_1d8 < iVar10) {
        uVar15 = uVar11;
      }
      if (uVar15 == 0) {
        local_1e8 = (longlong)(int)local_1d8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(int *)(lVar4 * 4 + this->_padding_) = local_1c8;
      iVar16 = iVar12;
      iVar10 = local_168;
      if ((char)this->_padding_ != '\0') {
        iVar16 = local_168;
        iVar10 = iVar12;
      }
      local_a0 = CONCAT44(uStack_164,iVar10);
      iVar10 = (int)this->_padding_;
      local_1e0 = (longlong)iVar10;
      uVar15 = 0;
      if ((int)local_1d8 < iVar10) {
        uVar15 = uVar11;
      }
      local_1d0 = local_a0;
      if (uVar15 == 0) {
        local_1e8 = (longlong)(int)local_1d8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = this->_padding_;
      *(undefined8 *)(local_1b8 + lVar2) = local_1d0;
      *(int *)(local_1b8 + 8 + lVar2) = iVar16;
      iVar12 = local_150;
      iVar10 = local_158;
      if ((char)this->_padding_ != '\0') {
        iVar12 = local_158;
        iVar10 = local_150;
      }
      local_90 = CONCAT44(iStack_154,iVar10);
      iVar10 = (int)this->_padding_;
      local_1e0 = (longlong)iVar10;
      uVar15 = 0;
      if ((int)local_1d8 < iVar10) {
        uVar15 = uVar11;
      }
      local_1d0 = local_90;
      if (uVar15 == 0) {
        local_1e8 = (longlong)(int)local_1d8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar10 = (int)local_48;
      lVar5 = local_1b8;
      lVar2 = this->_padding_;
      local_1d8 = uVar7 + 2;
      local_1c0 = local_1c0 + 2;
      *(undefined8 *)(local_1b8 + lVar2) = local_1d0;
      *(int *)(local_1b8 + 8 + lVar2) = iVar12;
      local_138 = local_58[2] - this->NumCircleSteps;
      local_148 = local_40;
      iStack_144 = local_3c;
      iStack_134 = local_58[3];
      local_140 = (int)local_48;
      iVar12 = iVar13;
      local_f0 = local_138;
      if ((char)this->_padding_ != '\0') {
        iVar12 = local_138;
        local_f0 = iVar13;
      }
      iVar16 = (int)this->_padding_;
      local_1e0 = (longlong)iVar16;
      iStack_ec = local_58[3];
      uVar15 = ~uVar1 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar1 < iVar16) {
        uVar7 = uVar15;
      }
      local_130 = iVar13;
      if (uVar7 == 0) {
        local_1e8 = (longlong)(int)uVar1;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = this->_padding_;
      *(ulonglong *)(lVar2 + 0xc + lVar5) = CONCAT44(iStack_ec,local_f0);
      *(int *)(lVar2 + 0x14 + lVar5) = iVar12;
      iVar13 = (int)this->_padding_;
      local_1e0 = (longlong)iVar13;
      uVar7 = 0;
      if ((int)uVar1 < iVar13) {
        uVar7 = uVar15;
      }
      if (uVar7 == 0) {
        local_1e8 = (longlong)(int)uVar1;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(int *)(this->_padding_ + 4 + lVar4 * 4) = local_1c8;
      iVar12 = iVar10;
      iVar13 = local_148;
      if ((char)this->_padding_ != '\0') {
        iVar12 = local_148;
        iVar13 = iVar10;
      }
      local_80 = CONCAT44(iStack_144,iVar13);
      iVar10 = (int)this->_padding_;
      local_1e0 = (longlong)iVar10;
      uVar7 = 0;
      if ((int)uVar1 < iVar10) {
        uVar7 = uVar15;
      }
      local_1d0 = local_80;
      if (uVar7 == 0) {
        local_1e8 = (longlong)(int)uVar1;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = this->_padding_;
      *(undefined8 *)(lVar5 + 0xc + lVar2) = local_1d0;
      *(int *)(lVar5 + 0x14 + lVar2) = iVar12;
      iVar13 = local_130;
      iVar10 = local_138;
      if ((char)this->_padding_ != '\0') {
        iVar13 = local_138;
        iVar10 = local_130;
      }
      local_70 = CONCAT44(iStack_134,iVar10);
      iVar10 = (int)this->_padding_;
      local_1e0 = (longlong)iVar10;
      uVar7 = 0;
      if ((int)uVar1 < iVar10) {
        uVar7 = uVar15;
      }
      local_1d0 = local_70;
      if (uVar7 == 0) {
        local_1e8 = (longlong)(int)uVar1;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = this->_padding_;
      *(undefined8 *)(lVar5 + 0xc + lVar2) = local_1d0;
      *(int *)(lVar5 + 0x14 + lVar2) = iVar13;
      piVar8 = local_58;
      do {
        *piVar8 = *piVar8 + 1;
        piVar8 = piVar8 + 1;
      } while (piVar8 != (int *)&local_48);
      puVar9 = &local_48;
      do {
        *(int *)puVar9 = (int)*puVar9 + 2;
        puVar9 = (ulonglong *)((longlong)puVar9 + 4);
      } while (puVar9 != local_38);
      local_1b0 = local_1b0 + 1;
      local_1c8 = local_1c4 + 1;
      if (this->bPolygroupPerQuad == false) {
        local_1c8 = local_1c4;
      }
    } while (local_1b0 < local_128);
  }
  return;
}

// OutputPolarTriangles @ 143fba0a0

void __thiscall UE::Geometry::FCapsuleGenerator::OutputPolarTriangles(FCapsuleGenerator *this)

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
  
  iVar21 = this->NumCircleSteps;
  iVar8 = this->NumSegmentSteps + this->NumHemisphereArcSteps * 2;
  iVar17 = iVar21 * (iVar8 + -2);
  iVar10 = (iVar21 + 1) * (iVar8 + -2);
  uVar12 = (iVar8 + -3) * iVar21 * 2;
  iVar1 = iVar17 + 1;
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
      *(ulonglong *)(lVar3 + lVar2) = CONCAT44(iVar17,local_90);
      *(int *)(lVar3 + 8 + lVar2) = iVar8;
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
      iVar11 = iVar18;
      iVar8 = local_a0;
      if ((char)this->_padding_ != '\0') {
        iVar11 = local_a0;
        iVar8 = iVar18;
      }
      local_78 = CONCAT44(iVar10 + -1 + iVar18,iVar8);
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
      *(undefined8 *)(lVar3 + lVar2) = local_78;
      *(int *)(lVar3 + 8 + lVar2) = iVar11;
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
      *(ulonglong *)(lVar3 + lVar2) = CONCAT44(iVar17,local_a0);
      *(int *)(lVar3 + 8 + lVar2) = iVar8;
      iVar21 = this->NumCircleSteps;
      iVar8 = local_res10 + 1;
      if (this->bPolygroupPerQuad == false) {
        iVar8 = local_res10;
      }
      lVar13 = lVar13 + 1;
      uVar12 = uVar15;
      local_a0 = iVar18;
      local_res10 = iVar8;
    } while (iVar18 < iVar21);
    iVar17 = iVar17 - iVar21;
    iVar8 = iVar10 - iVar21;
    if (0 < iVar21) {
      uVar14 = (ulonglong)(int)uVar15;
      uVar16 = uVar14;
      iVar18 = iVar17;
      do {
        iVar6 = -iVar17 + iVar18;
        uVar12 = (uint)uVar14;
        iVar11 = iVar6 + iVar8;
        iVar7 = iVar6 + iVar21 + iVar10;
        iVar9 = iVar11 + -1;
        iVar21 = ((1 - iVar17) + iVar18) % iVar21 + iVar17;
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
        *(ulonglong *)(lVar13 + uVar16 * 0xc) = CONCAT44(iVar11,iVar6);
        *(int *)(lVar13 + 8 + uVar16 * 0xc) = iVar7;
        iVar11 = iVar1;
        local_90 = iVar18;
        if ((char)this->_padding_ != '\0') {
          iVar11 = iVar18;
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
        *(int *)(lVar13 + 8 + uVar16 * 0xc) = iVar11;
        iVar21 = this->NumCircleSteps;
        iVar11 = local_res10 + 1;
        if (this->bPolygroupPerQuad == false) {
          iVar11 = local_res10;
        }
        uVar16 = uVar16 + 1;
        local_res10 = iVar11;
      } while (-iVar17 + iVar18 < iVar21);
    }
  }
  return;
}

