// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// GetTriVertices @ 14c9d2ce0

void __thiscall
UE::PlanarCut::FGeomFlatUVMesh::GetTriVertices
          (FGeomFlatUVMesh *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  FGeometryCollection *pFVar4;
  longlong lVar5;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int local_28;
  int iStack_24;
  
  pFVar4 = this->Collection;
  uVar9 = 0;
  if (param_1 < *(int *)&(pFVar4->Indices).field_0x18) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)&(pFVar4->Indices).field_0x10;
  pTVar6 = this->CollectionUVs;
  lVar2 = *(longlong *)(lVar5 + (longlong)param_1 * 0xc);
  iVar3 = *(int *)(lVar5 + 8 + (longlong)param_1 * 0xc);
  local_28 = (int)lVar2;
  if (local_28 < 0 || *(int *)&pTVar6->field_0x18 <= local_28) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)&pTVar6->field_0x10;
  fVar1 = *(float *)(lVar5 + 4 + (longlong)local_28 * 8);
  (param_2->field0_0x0)._s_0.X = (double)*(float *)(lVar5 + (longlong)local_28 * 8);
  (param_2->field0_0x0)._s_0.Y = (double)fVar1;
  (param_2->field0_0x0)._s_0.Z = 0.0;
  iStack_24 = (int)((ulonglong)lVar2 >> 0x20);
  pTVar6 = this->CollectionUVs;
  if (lVar2 < 0 || *(int *)&pTVar6->field_0x18 <= iStack_24) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar2 = *(longlong *)&pTVar6->field_0x10;
  fVar1 = *(float *)(lVar2 + 4 + (longlong)iStack_24 * 8);
  (param_3->field0_0x0)._s_0.X = (double)*(float *)(lVar2 + (longlong)iStack_24 * 8);
  (param_3->field0_0x0)._s_0.Y = (double)fVar1;
  (param_3->field0_0x0)._s_0.Z = 0.0;
  pTVar6 = this->CollectionUVs;
  if (iVar3 < 0 || *(int *)&pTVar6->field_0x18 <= iVar3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar2 = *(longlong *)&pTVar6->field_0x10;
  fVar1 = *(float *)(lVar2 + 4 + (longlong)iVar3 * 8);
  (param_4->field0_0x0)._s_0.X = (double)*(float *)(lVar2 + (longlong)iVar3 * 8);
  (param_4->field0_0x0)._s_0.Y = (double)fVar1;
  (param_4->field0_0x0)._s_0.Z = 0.0;
  return;
}

