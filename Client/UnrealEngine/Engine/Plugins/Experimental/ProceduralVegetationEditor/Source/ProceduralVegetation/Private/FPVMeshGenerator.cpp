// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// Generate @ 14da8ea30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall FPVMeshGenerator::Generate(FPVMeshGenerator *this)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  TArray<FLocalDynamicMeshData,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  uint uVar12;
  FMeshShapeGenerator *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int *piVar23;
  float *pfVar24;
  uint uVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  longlong local_b8;
  longlong local_b0;
  longlong local_98;
  longlong local_78;
  
  iVar4 = this->VerticesCount;
  iVar20 = this->TriangleCount;
  if (0 < iVar4) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar4,Default);
  }
  if (0 < iVar20) {
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar20
               ,Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar20
               ,Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar20
               ,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar20,Default);
  }
  if (0 < iVar4) {
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar4,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar4,Default);
  }
  if (0 < iVar20) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               iVar20,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar20,Default);
  }
  uVar19 = 0;
  local_res20 = this->MeshesDatas->ArrayNum - 1;
  if (-1 < (int)local_res20) {
    local_b8 = (longlong)(int)local_res20 * 0x28;
    local_98 = 0;
    local_b0 = 0;
    uVar25 = 0;
    do {
      pTVar5 = this->MeshesDatas;
      uVar17 = 0;
      if ((int)local_res20 < pTVar5->ArrayNum) {
        uVar17 = ~local_res20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
        return pFVar13;
      }
      pFVar6 = (pTVar5->AllocatorInstance).Data;
      local_78 = local_98 * 4;
      uVar17 = *(uint *)(pFVar6 + local_b8 + 0x18);
      uVar14 = (ulonglong)(int)uVar17;
      piVar23 = *(int **)(pFVar6 + local_b8 + 0x10);
      piVar18 = piVar23 + uVar14 * 4;
      lVar15 = local_98 * 0xc;
      while( true ) {
        if (*(int *)(pFVar6 + local_b8 + 0x18) != (int)uVar14) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TIntVector4<int>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (piVar23 == piVar18) break;
        iVar4 = piVar23[3];
        local_res18 = piVar23[2] + uVar19;
        iVar21 = piVar23[1] + uVar19;
        uVar16 = ~uVar25 >> 0x1f;
        iVar20 = *piVar23 + uVar19;
        uVar12 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        lVar22 = this->_padding_;
        *(int *)(lVar15 + lVar22) = iVar20;
        *(int *)(lVar15 + 4 + lVar22) = iVar21;
        *(uint *)(lVar15 + 8 + lVar22) = local_res18;
        uVar12 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        lVar22 = this->_padding_;
        *(int *)(lVar15 + lVar22) = iVar20;
        *(int *)(lVar15 + 4 + lVar22) = iVar21;
        *(uint *)(lVar15 + 8 + lVar22) = local_res18;
        uVar12 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        lVar22 = this->_padding_;
        *(int *)(lVar15 + lVar22) = iVar20;
        *(int *)(lVar15 + 4 + lVar22) = iVar21;
        *(uint *)(lVar15 + 8 + lVar22) = local_res18;
        uVar12 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        uVar25 = uVar25 + 1;
        lVar15 = lVar15 + 0xc;
        piVar23 = piVar23 + 4;
        local_98 = local_98 + 1;
        *(uint *)(local_78 + this->_padding_) = iVar4 + uVar19;
        local_78 = local_78 + 4;
        uVar14 = (ulonglong)uVar17;
      }
      pfVar24 = *(float **)(pFVar6 + local_b8);
      iVar4 = *(int *)(pFVar6 + local_b8 + 8);
      lVar15 = local_b0 * 0xc;
      lVar22 = local_b0 * 0x18;
      pfVar1 = pfVar24 + (longlong)iVar4 * 9;
      local_res18 = uVar25;
      while( true ) {
        if (*(int *)(pFVar6 + local_b8 + 8) != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FLocalDynamicMeshData::FVertex_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pfVar24 == pfVar1) break;
        fVar2 = *pfVar24;
        uVar3 = *(undefined8 *)(pfVar24 + 1);
        dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar17 = ~uVar19 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar19 < (int)this->_padding_) {
          uVar25 = uVar17;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        lVar7 = this->_padding_;
        *(double *)(lVar7 + lVar22) = (double)fVar2;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (double)(float)uVar3;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(lVar7 + 8 + lVar22) = auVar9;
        uVar3 = *(undefined8 *)(pfVar24 + 3);
        fVar2 = pfVar24[5];
        uVar25 = 0;
        if ((int)uVar19 < (int)this->_padding_) {
          uVar25 = uVar17;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        lVar7 = this->_padding_;
        *(undefined8 *)(lVar15 + lVar7) = uVar3;
        *(float *)(lVar15 + 8 + lVar7) = fVar2;
        uVar25 = 0;
        if ((int)uVar19 < (int)this->_padding_) {
          uVar25 = uVar17;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        *(uint *)(this->_padding_ + local_b0 * 4) = uVar19;
        uVar3 = *(undefined8 *)(pfVar24 + 6);
        uVar25 = 0;
        if ((int)uVar19 < (int)this->_padding_) {
          uVar25 = uVar17;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        *(undefined8 *)(this->_padding_ + local_b0 * 8) = uVar3;
        uVar25 = 0;
        if ((int)uVar19 < (int)this->_padding_) {
          uVar25 = uVar17;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar13;
        }
        lVar22 = lVar22 + 0x18;
        lVar15 = lVar15 + 0xc;
        *(uint *)(this->_padding_ + local_b0 * 4) = uVar19;
        local_b0 = local_b0 + 1;
        uVar19 = uVar19 + 1;
        pfVar24 = pfVar24 + 9;
      }
      local_b8 = local_b8 + -0x28;
      local_res20 = local_res20 - 1;
      uVar25 = local_res18;
    } while (-1 < (int)local_res20);
  }
  return (FMeshShapeGenerator *)this;
}

