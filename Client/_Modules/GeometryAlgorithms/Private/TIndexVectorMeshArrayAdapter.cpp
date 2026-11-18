// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// GetTriVertices @ 14951b1d0

void __thiscall
UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
::GetTriVertices(TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
                 *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
                TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  pTVar3 = this->SourceTriangles;
  lVar11 = (longlong)param_1;
  uVar12 = 0;
  if (param_1 < pTVar3->ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  uVar12 = *(uint *)(pFVar4 + lVar11 * 0xc);
  pTVar5 = this->SourceVertices;
  uVar10 = 0;
  if ((int)uVar12 < pTVar5->ArrayNum) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (pTVar5->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)(int)uVar12 * 0x18;
  dVar8 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar6 + (longlong)(int)uVar12 * 0x18 + 0x10);
  (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_2->field0_0x0)._s_0.Y = dVar8;
  (param_2->field0_0x0)._s_0.Z = dVar2;
  uVar12 = *(uint *)(pFVar4 + lVar11 * 0xc + 4);
  pTVar5 = this->SourceVertices;
  uVar10 = 0;
  if ((int)uVar12 < pTVar5->ArrayNum) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (pTVar5->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)(int)uVar12 * 0x18;
  dVar8 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar6 + (longlong)(int)uVar12 * 0x18 + 0x10);
  (param_3->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_3->field0_0x0)._s_0.Y = dVar8;
  (param_3->field0_0x0)._s_0.Z = dVar2;
  uVar12 = *(uint *)(pFVar4 + lVar11 * 0xc + 8);
  pTVar5 = this->SourceVertices;
  uVar10 = 0;
  if ((int)uVar12 < pTVar5->ArrayNum) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  pFVar4 = pFVar1 + (longlong)(int)uVar12 * 0x18;
  dVar8 = *(double *)(pFVar4 + 8);
  dVar2 = *(double *)(pFVar1 + (longlong)(int)uVar12 * 0x18 + 0x10);
  (param_4->field0_0x0)._s_0.X = *(double *)pFVar4;
  (param_4->field0_0x0)._s_0.Y = dVar8;
  (param_4->field0_0x0)._s_0.Z = dVar2;
  return;
}

