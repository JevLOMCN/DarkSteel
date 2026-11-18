// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// GetTriBounds @ 14c9d2a50

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::PlanarCut::FGeomFlatUVMesh>::GetTriBounds
          (TAxisAlignedBox3<double> *__return_storage_ptr__,FGeomFlatUVMesh *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  FGeometryCollection *pFVar3;
  longlong lVar4;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  uint uVar13;
  TAxisAlignedBox3<double> *pTVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pFVar3 = param_1->Collection;
  lVar16 = (longlong)param_2;
  uVar15 = 0;
  if (param_2 < *(int *)&(pFVar3->Indices).field_0x18) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar14;
  }
  lVar4 = *(longlong *)&(pFVar3->Indices).field_0x10;
  pTVar5 = param_1->CollectionUVs;
  uVar15 = *(uint *)(lVar4 + lVar16 * 0xc);
  uVar1 = *(uint *)(lVar4 + 4 + lVar16 * 0xc);
  uVar2 = *(uint *)(lVar4 + 8 + lVar16 * 0xc);
  uVar13 = 0;
  if ((int)uVar15 < *(int *)&pTVar5->field_0x18) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar14;
  }
  lVar16 = *(longlong *)&pTVar5->field_0x10;
  pTVar5 = param_1->CollectionUVs;
  dVar9 = (double)*(float *)(lVar16 + (longlong)(int)uVar15 * 8);
  dVar7 = (double)*(float *)(lVar16 + 4 + (longlong)(int)uVar15 * 8);
  uVar15 = 0;
  if ((int)uVar1 < *(int *)&pTVar5->field_0x18) {
    uVar15 = ~uVar1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar14;
  }
  lVar16 = *(longlong *)&pTVar5->field_0x10;
  dVar19 = (double)*(float *)(lVar16 + (longlong)(int)uVar1 * 8);
  dVar17 = (double)*(float *)(lVar16 + 4 + (longlong)(int)uVar1 * 8);
  dVar11 = dVar19;
  if ((dVar9 <= dVar19) && (dVar11 = dVar9, dVar9 < dVar19)) {
    dVar9 = dVar19;
  }
  dVar19 = dVar17;
  if ((dVar7 <= dVar17) && (dVar19 = dVar7, dVar7 < dVar17)) {
    dVar7 = dVar17;
  }
  pTVar5 = param_1->CollectionUVs;
  uVar15 = 0;
  if ((int)uVar2 < *(int *)&pTVar5->field_0x18) {
    uVar15 = ~uVar2 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TAxisAlignedBox3<double> *)(*pcVar6)();
    return pTVar14;
  }
  lVar16 = *(longlong *)&pTVar5->field_0x10;
  dVar20 = (double)*(float *)(lVar16 + (longlong)(int)uVar2 * 8);
  dVar18 = (double)*(float *)(lVar16 + 4 + (longlong)(int)uVar2 * 8);
  dVar17 = dVar20;
  if ((dVar11 <= dVar20) && (dVar17 = dVar11, dVar9 < dVar20)) {
    dVar9 = dVar20;
  }
  dVar11 = dVar18;
  if ((dVar19 <= dVar18) && (dVar11 = dVar19, dVar7 < dVar18)) {
    dVar7 = dVar18;
  }
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = dVar17;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar10;
  auVar8._8_4_ = SUB84(dVar7,0);
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Max).field0_0x0 = auVar8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

