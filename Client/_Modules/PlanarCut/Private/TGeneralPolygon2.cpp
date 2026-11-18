// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// TGeneralPolygon2<float> @ 14c9a0c00

TGeneralPolygon2<float> * __thiscall
UE::Geometry::TGeneralPolygon2<float>::TGeneralPolygon2<float>
          (TGeneralPolygon2<float> *this,TPolygon2<float> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TGeneralPolygon2<float> *pTVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  
  (this->Outer).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Outer).Vertices.ArrayMax;
  iVar6 = (param_1->Vertices).ArrayNum;
  pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Outer).Vertices.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    memcpy((this->Outer).Vertices.AllocatorInstance.Data,pFVar7,(longlong)iVar6 << 3);
  }
  (this->Holes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Holes).ArrayNum = 0;
  (this->Holes).ArrayMax = 0;
  pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
  iVar6 = (param_1->Vertices).ArrayNum;
  lVar14 = (longlong)iVar6;
  if ((iVar6 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TGeneralPolygon2<float> *)(*pcVar8)();
    return pTVar11;
  }
  fVar17 = 0.0;
  if (iVar6 != 0) {
    if (0 < iVar6) {
      lVar16 = (longlong)(int)(iVar6 - 1U) * 8;
      pFVar13 = pFVar7;
      uVar12 = iVar6 - 1U;
      uVar15 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < iVar6) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pTVar11 = (TGeneralPolygon2<float> *)(*pcVar8)();
          return pTVar11;
        }
        uVar12 = 0;
        if ((int)uVar15 < iVar6) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pTVar11 = (TGeneralPolygon2<float> *)(*pcVar8)();
          return pTVar11;
        }
        lVar4 = lVar16 + 4;
        pFVar2 = pFVar13 + 4;
        pFVar3 = pFVar7 + lVar16;
        lVar16 = (longlong)pFVar13 - (longlong)pFVar7;
        fVar5 = *(float *)pFVar13;
        pFVar13 = pFVar13 + 8;
        fVar17 = fVar17 + (*(float *)pFVar2 * *(float *)pFVar3 - *(float *)(pFVar7 + lVar4) * fVar5)
        ;
        lVar14 = lVar14 + -1;
        uVar12 = uVar15;
        uVar15 = uVar15 + 1;
      } while (lVar14 != 0);
    }
    fVar17 = fVar17 * __real_3f000000;
  }
  this->bOuterIsCW = fVar17 < 0.0;
  return this;
}

