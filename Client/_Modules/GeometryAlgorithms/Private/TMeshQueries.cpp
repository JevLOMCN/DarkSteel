// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// GetTriBounds @ 14951ade0

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::
TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::GetTriBounds(TAxisAlignedBox3<double> *__return_storage_ptr__,
              TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
              *param_1,int param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TAxisAlignedBox3<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_f8;
  double local_e8;
  undefined8 local_e0;
  double local_d0;
  
  pTVar6 = param_1->SourceTriangles;
  lVar14 = (longlong)param_2;
  uVar13 = 0;
  if (param_2 < pTVar6->ArrayNum) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar9)();
    return pTVar12;
  }
  pFVar7 = (pTVar6->AllocatorInstance).Data;
  pTVar8 = param_1->SourceVertices;
  uVar13 = *(uint *)(pFVar7 + lVar14 * 0xc);
  uVar4 = *(uint *)(pFVar7 + lVar14 * 0xc + 4);
  uVar5 = *(uint *)(pFVar7 + lVar14 * 0xc + 8);
  uVar11 = 0;
  if ((int)uVar13 < pTVar8->ArrayNum) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar9)();
    return pTVar12;
  }
  pFVar7 = (pTVar8->AllocatorInstance).Data;
  pTVar8 = param_1->SourceVertices;
  auVar2 = *(undefined1 (*) [16])(pFVar7 + (longlong)(int)uVar13 * 0x18);
  local_f8 = auVar2._0_8_;
  uVar18 = auVar2._0_4_;
  uVar19 = auVar2._4_4_;
  uVar24 = auVar2._8_4_;
  uVar25 = auVar2._12_4_;
  local_e8 = *(double *)(pFVar7 + (longlong)(int)uVar13 * 0x18 + 0x10);
  uVar13 = 0;
  if ((int)uVar4 < pTVar8->ArrayNum) {
    uVar13 = ~uVar4 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar9)();
    return pTVar12;
  }
  pFVar7 = (pTVar8->AllocatorInstance).Data;
  auVar3 = *(undefined1 (*) [16])(pFVar7 + (longlong)(int)uVar4 * 0x18);
  dVar15 = auVar3._0_8_;
  dVar1 = *(double *)(pFVar7 + (longlong)(int)uVar4 * 0x18 + 0x10);
  uVar30 = auVar3._0_4_;
  uVar31 = auVar3._4_4_;
  local_e0 = dVar15;
  if ((local_f8 <= dVar15) &&
     (uVar30 = uVar18, uVar31 = uVar19, local_e0 = local_f8, local_f8 < dVar15)) {
    uVar18 = auVar3._0_4_;
    uVar19 = auVar3._4_4_;
    local_f8 = dVar15;
  }
  uVar20 = uVar24;
  uVar21 = uVar25;
  if (auVar2._8_8_ <= auVar3._8_8_) {
    if (auVar2._8_8_ < auVar3._8_8_) {
      local_f8 = (double)CONCAT44(uVar19,uVar18);
      uVar20 = auVar3._8_4_;
      uVar21 = auVar3._12_4_;
    }
  }
  else {
    local_e0 = (double)CONCAT44(uVar31,uVar30);
    uVar24 = auVar3._8_4_;
    uVar25 = auVar3._12_4_;
  }
  uVar26 = SUB84(local_e8,0);
  uVar27 = (undefined4)((ulonglong)local_e8 >> 0x20);
  uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar28 = SUB84(dVar1,0);
  uVar29 = uVar22;
  local_d0 = dVar1;
  if ((local_e8 <= dVar1) &&
     (uVar28 = uVar26, uVar29 = uVar27, local_d0 = local_e8, local_e8 < dVar1)) {
    uVar26 = SUB84(dVar1,0);
    uVar27 = uVar22;
    local_e8 = dVar1;
  }
  pTVar8 = param_1->SourceVertices;
  uVar13 = 0;
  if ((int)uVar5 < pTVar8->ArrayNum) {
    uVar13 = ~uVar5 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar9)();
    return pTVar12;
  }
  pFVar7 = (pTVar8->AllocatorInstance).Data;
  auVar2 = *(undefined1 (*) [16])(pFVar7 + (longlong)(int)uVar5 * 0x18);
  dVar16 = auVar2._0_8_;
  dVar17 = auVar2._8_8_;
  dVar1 = *(double *)(pFVar7 + (longlong)(int)uVar5 * 0x18 + 0x10);
  uVar22 = auVar2._0_4_;
  uVar23 = auVar2._4_4_;
  dVar15 = dVar16;
  if (((double)CONCAT44(uVar31,uVar30) <= dVar16) &&
     (uVar22 = uVar30, uVar23 = uVar31, dVar15 = local_e0,
     (double)CONCAT44(uVar19,uVar18) <= dVar16 && dVar16 != (double)CONCAT44(uVar19,uVar18))) {
    uVar18 = auVar2._0_4_;
    uVar19 = auVar2._4_4_;
    local_f8 = dVar16;
  }
  local_e0 = dVar15;
  if ((double)CONCAT44(uVar25,uVar24) <= dVar17) {
    if ((double)CONCAT44(uVar21,uVar20) <= dVar17 && dVar17 != (double)CONCAT44(uVar21,uVar20)) {
      uVar18 = (undefined4)local_f8;
      uVar19 = local_f8._4_4_;
      uVar20 = auVar2._8_4_;
      uVar21 = auVar2._12_4_;
    }
  }
  else {
    uVar22 = (undefined4)local_e0;
    uVar23 = local_e0._4_4_;
    uVar24 = auVar2._8_4_;
    uVar25 = auVar2._12_4_;
  }
  dVar15 = dVar1;
  if (((double)CONCAT44(uVar29,uVar28) <= dVar1) &&
     (dVar15 = local_d0,
     (double)CONCAT44(uVar27,uVar26) <= dVar1 && dVar1 != (double)CONCAT44(uVar27,uVar26))) {
    local_e8 = dVar1;
  }
  local_d0 = dVar15;
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar22;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar23;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar24;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar25;
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar19;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar20;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar21;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_d0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_e8;
  return __return_storage_ptr__;
}

