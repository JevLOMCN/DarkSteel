// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// TGeneralPolygon2<double> @ 14ce26190

TGeneralPolygon2<double> * __thiscall
UE::Geometry::TGeneralPolygon2<double>::TGeneralPolygon2<double>
          (TGeneralPolygon2<double> *this,TPolygon2<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  TGeneralPolygon2<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  
  (this->Outer).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Outer).Vertices.ArrayMax;
  iVar5 = (param_1->Vertices).ArrayNum;
  pFVar6 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Outer).Vertices.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->Outer).Vertices.AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 4);
  }
  (this->Holes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Holes).ArrayNum = 0;
  (this->Holes).ArrayMax = 0;
  pFVar6 = (param_1->Vertices).AllocatorInstance.Data;
  iVar5 = (param_1->Vertices).ArrayNum;
  lVar15 = (longlong)iVar5;
  if ((iVar5 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TGeneralPolygon2<double> *)(*pcVar7)();
    return pTVar12;
  }
  dVar8 = 0.0;
  if (iVar5 != 0) {
    dVar4 = 0.0;
    if (0 < iVar5) {
      lVar14 = (longlong)(int)(iVar5 - 1U) << 4;
      pFVar17 = pFVar6;
      uVar13 = iVar5 - 1U;
      uVar16 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar13 < iVar5) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TGeneralPolygon2<double> *)(*pcVar7)();
          return pTVar12;
        }
        uVar13 = 0;
        if ((int)uVar16 < iVar5) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TGeneralPolygon2<double> *)(*pcVar7)();
          return pTVar12;
        }
        lVar9 = lVar14 + 8;
        pFVar2 = pFVar17 + 8;
        pFVar3 = pFVar6 + lVar14;
        lVar14 = (longlong)pFVar17 - (longlong)pFVar6;
        dVar4 = *(double *)pFVar17;
        pFVar17 = pFVar17 + 0x10;
        dVar8 = dVar8 + (*(double *)pFVar2 * *(double *)pFVar3 - *(double *)(pFVar6 + lVar9) * dVar4
                        );
        lVar15 = lVar15 + -1;
        uVar13 = uVar16;
        uVar16 = uVar16 + 1;
        dVar4 = dVar8;
      } while (lVar15 != 0);
    }
    dVar8 = dVar4 * __real_3fe0000000000000;
  }
  this->bOuterIsCW = dVar8 < 0.0;
  return this;
}

