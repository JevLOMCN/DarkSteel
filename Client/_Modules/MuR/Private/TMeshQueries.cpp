// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// GetTriBounds @ 14a9a72a0

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::GetTriBounds
          (TAxisAlignedBox3<double> *__return_storage_ptr__,FShapeMeshAdapter *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  FShapeMeshDescriptor<double,float> *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FIndex3i *pFVar10;
  TAxisAlignedBox3<double> *pTVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
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
  uint local_f8;
  uint uStack_f4;
  undefined8 local_e8;
  double local_d8;
  undefined8 local_d0;
  double local_c0;
  
  pFVar10 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                      (&param_1->Mesh->Triangles,param_2);
  pFVar6 = param_1->Mesh;
  uVar1 = *(undefined8 *)&pFVar10->field0_0x0;
  uVar5 = (pFVar10->field0_0x0)._s_0.C;
  local_f8 = (uint)uVar1;
  uVar12 = 0;
  if ((int)local_f8 < (pFVar6->Positions).ArrayNum) {
    uVar12 = ~local_f8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TAxisAlignedBox3<double> *)(*pcVar8)();
    return pTVar11;
  }
  uStack_f4 = (uint)((ulonglong)uVar1 >> 0x20);
  pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
  pFVar6 = param_1->Mesh;
  auVar3 = *(undefined1 (*) [16])(pFVar7 + (longlong)(int)local_f8 * 0x18);
  local_e8 = auVar3._0_8_;
  uVar16 = auVar3._0_4_;
  uVar17 = auVar3._4_4_;
  uVar22 = auVar3._8_4_;
  uVar23 = auVar3._12_4_;
  local_d8 = *(double *)(pFVar7 + (longlong)(int)local_f8 * 0x18 + 0x10);
  uVar12 = 0;
  if ((int)uStack_f4 < (pFVar6->Positions).ArrayNum) {
    uVar12 = ~uStack_f4 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TAxisAlignedBox3<double> *)(*pcVar8)();
    return pTVar11;
  }
  pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
  auVar4 = *(undefined1 (*) [16])(pFVar7 + (longlong)(int)uStack_f4 * 0x18);
  dVar13 = auVar4._0_8_;
  dVar2 = *(double *)(pFVar7 + (longlong)(int)uStack_f4 * 0x18 + 0x10);
  uVar28 = auVar4._0_4_;
  uVar29 = auVar4._4_4_;
  local_d0 = dVar13;
  if ((local_e8 <= dVar13) &&
     (uVar28 = uVar16, uVar29 = uVar17, local_d0 = local_e8, local_e8 < dVar13)) {
    uVar16 = auVar4._0_4_;
    uVar17 = auVar4._4_4_;
    local_e8 = dVar13;
  }
  uVar18 = uVar22;
  uVar19 = uVar23;
  if (auVar3._8_8_ <= auVar4._8_8_) {
    if (auVar3._8_8_ < auVar4._8_8_) {
      local_e8 = (double)CONCAT44(uVar17,uVar16);
      uVar18 = auVar4._8_4_;
      uVar19 = auVar4._12_4_;
    }
  }
  else {
    local_d0 = (double)CONCAT44(uVar29,uVar28);
    uVar22 = auVar4._8_4_;
    uVar23 = auVar4._12_4_;
  }
  uVar24 = SUB84(local_d8,0);
  uVar25 = (undefined4)((ulonglong)local_d8 >> 0x20);
  uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar26 = SUB84(dVar2,0);
  uVar27 = uVar20;
  local_c0 = dVar2;
  if ((local_d8 <= dVar2) &&
     (uVar26 = uVar24, uVar27 = uVar25, local_c0 = local_d8, local_d8 < dVar2)) {
    uVar24 = SUB84(dVar2,0);
    uVar25 = uVar20;
    local_d8 = dVar2;
  }
  pFVar6 = param_1->Mesh;
  uVar12 = 0;
  if ((int)uVar5 < (pFVar6->Positions).ArrayNum) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TAxisAlignedBox3<double> *)(*pcVar8)();
    return pTVar11;
  }
  pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
  auVar3 = *(undefined1 (*) [16])(pFVar7 + (longlong)(int)uVar5 * 0x18);
  dVar14 = auVar3._0_8_;
  dVar15 = auVar3._8_8_;
  dVar2 = *(double *)(pFVar7 + (longlong)(int)uVar5 * 0x18 + 0x10);
  uVar20 = auVar3._0_4_;
  uVar21 = auVar3._4_4_;
  dVar13 = dVar14;
  if (((double)CONCAT44(uVar29,uVar28) <= dVar14) &&
     (uVar20 = uVar28, uVar21 = uVar29, dVar13 = local_d0,
     (double)CONCAT44(uVar17,uVar16) <= dVar14 && dVar14 != (double)CONCAT44(uVar17,uVar16))) {
    uVar16 = auVar3._0_4_;
    uVar17 = auVar3._4_4_;
    local_e8 = dVar14;
  }
  local_d0 = dVar13;
  if ((double)CONCAT44(uVar23,uVar22) <= dVar15) {
    if ((double)CONCAT44(uVar19,uVar18) <= dVar15 && dVar15 != (double)CONCAT44(uVar19,uVar18)) {
      uVar16 = (undefined4)local_e8;
      uVar17 = local_e8._4_4_;
      uVar18 = auVar3._8_4_;
      uVar19 = auVar3._12_4_;
    }
  }
  else {
    uVar20 = (undefined4)local_d0;
    uVar21 = local_d0._4_4_;
    uVar22 = auVar3._8_4_;
    uVar23 = auVar3._12_4_;
  }
  dVar13 = dVar2;
  if (((double)CONCAT44(uVar27,uVar26) <= dVar2) &&
     (dVar13 = local_c0,
     (double)CONCAT44(uVar25,uVar24) <= dVar2 && dVar2 != (double)CONCAT44(uVar25,uVar24))) {
    local_d8 = dVar2;
  }
  local_c0 = dVar13;
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar20;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar21;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar22;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar23;
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar16;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar17;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar19;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_c0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_d8;
  return __return_storage_ptr__;
}

// TriDistanceSqr @ 14a9eb990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
UE::Geometry::TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::TriDistanceSqr
          (FShapeMeshAdapter *param_1,int param_2,TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FShapeMeshDescriptor<double,float> *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  FIndex3i *pFVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  TVector<double>_u_0 local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar9 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                     (&param_1->Mesh->Triangles,param_2);
  pFVar4 = param_1->Mesh;
  uVar2 = (pFVar9->field0_0x0)._s_0.A;
  lVar11 = (longlong)(int)uVar2;
  iVar3 = (pFVar4->Positions).ArrayNum;
  uVar10 = 0;
  if ((int)uVar2 < iVar3) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_128 = lVar11;
    local_120 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      dVar7 = (double)(*pcVar6)();
      return dVar7;
    }
  }
  pFVar5 = (pFVar4->Positions).AllocatorInstance.Data;
  uVar2 = (pFVar9->field0_0x0)._s_0.B;
  lVar12 = (longlong)(int)uVar2;
  pFVar4 = param_1->Mesh;
  pFVar1 = pFVar5 + lVar11 * 0x18;
  local_118 = *(undefined8 *)pFVar1;
  uStack_110 = *(undefined8 *)(pFVar1 + 8);
  local_108 = *(undefined8 *)(pFVar5 + lVar11 * 0x18 + 0x10);
  iVar3 = (pFVar4->Positions).ArrayNum;
  uVar10 = 0;
  if ((int)uVar2 < iVar3) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_128 = lVar12;
    local_120 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      dVar7 = (double)(*pcVar6)();
      return dVar7;
    }
  }
  pFVar5 = (pFVar4->Positions).AllocatorInstance.Data;
  uVar2 = (pFVar9->field0_0x0)._s_0.C;
  lVar11 = (longlong)(int)uVar2;
  pFVar4 = param_1->Mesh;
  pFVar1 = pFVar5 + lVar12 * 0x18;
  uStack_100 = *(undefined8 *)pFVar1;
  uStack_f8 = *(undefined8 *)(pFVar1 + 8);
  uStack_f0 = *(undefined8 *)(pFVar5 + lVar12 * 0x18 + 0x10);
  iVar3 = (pFVar4->Positions).ArrayNum;
  uVar10 = 0;
  if ((int)uVar2 < iVar3) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_128 = lVar11;
    local_120 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      dVar7 = (double)(*pcVar6)();
      return dVar7;
    }
  }
  local_c8._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_c8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  pFVar5 = (pFVar4->Positions).AllocatorInstance.Data;
  local_c8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  pFVar1 = pFVar5 + lVar11 * 0x18;
  local_80 = *(undefined8 *)pFVar1;
  uStack_78 = *(undefined8 *)(pFVar1 + 8);
  local_70 = *(undefined8 *)(pFVar5 + lVar11 * 0x18 + 0x10);
  local_b0 = local_118;
  uStack_a8 = uStack_110;
  local_90 = uStack_f8;
  uStack_88 = uStack_f0;
  local_a0 = local_108;
  uStack_98 = uStack_100;
  dVar7 = TDistPoint3Triangle3<double>::ComputeResult
                    ((TDistPoint3Triangle3<double> *)&local_c8._s_0);
  return dVar7;
}

// TriangleDistance @ 14a9ebb90

TDistPoint3Triangle3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Mutable::Private::FShapeMeshAdapter_const_>::TriangleDistance
          (TDistPoint3Triangle3<double> *__return_storage_ptr__,FShapeMeshAdapter *param_1,
          int param_2,TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FShapeMeshDescriptor<double,float> *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  TDistPoint3Triangle3<double> *pTVar18;
  FIndex3i *pFVar19;
  uint uVar20;
  
  if ((param_2 < 0) || ((param_1->Mesh->Triangles).ArrayNum <= param_2)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mesh.IsTriangle(TriIdx)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                        ,0x1e,L"");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TDistPoint3Triangle3<double> *)(*pcVar8)();
      return pTVar18;
    }
  }
  pFVar19 = TArrayView<UE::Geometry::FIndex3i_const_,int>::operator[]
                      (&param_1->Mesh->Triangles,param_2);
  pFVar6 = param_1->Mesh;
  uVar17 = (pFVar19->field0_0x0)._s_0.A;
  uVar20 = 0;
  if ((int)uVar17 < (pFVar6->Positions).ArrayNum) {
    uVar20 = ~uVar17 >> 0x1f;
  }
  if (uVar20 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TDistPoint3Triangle3<double> *)(*pcVar8)();
      return pTVar18;
    }
  }
  pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
  uVar20 = (pFVar19->field0_0x0)._s_0.B;
  pFVar6 = param_1->Mesh;
  pFVar1 = pFVar7 + (longlong)(int)uVar17 * 0x18;
  dVar9 = *(double *)pFVar1;
  dVar10 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar7 + (longlong)(int)uVar17 * 0x18 + 0x10);
  uVar17 = 0;
  if ((int)uVar20 < (pFVar6->Positions).ArrayNum) {
    uVar17 = ~uVar20 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TDistPoint3Triangle3<double> *)(*pcVar8)();
      return pTVar18;
    }
  }
  pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
  uVar17 = (pFVar19->field0_0x0)._s_0.C;
  pFVar6 = param_1->Mesh;
  pFVar1 = pFVar7 + (longlong)(int)uVar20 * 0x18;
  dVar11 = *(double *)pFVar1;
  dVar12 = *(double *)(pFVar1 + 8);
  dVar3 = *(double *)(pFVar7 + (longlong)(int)uVar20 * 0x18 + 0x10);
  uVar20 = 0;
  if ((int)uVar17 < (pFVar6->Positions).ArrayNum) {
    uVar20 = ~uVar17 >> 0x1f;
  }
  if (uVar20 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      pTVar18 = (TDistPoint3Triangle3<double> *)(*pcVar8)();
      return pTVar18;
    }
  }
  pFVar7 = (pFVar6->Positions).AllocatorInstance.Data;
  dVar13 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  pFVar1 = pFVar7 + (longlong)(int)uVar17 * 0x18;
  dVar14 = *(double *)pFVar1;
  dVar15 = *(double *)(pFVar1 + 8);
  dVar5 = *(double *)(pFVar7 + (longlong)(int)uVar17 * 0x18 + 0x10);
  (__return_storage_ptr__->Point).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Y = dVar13;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.X = dVar9;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Y = dVar10;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.X = dVar11;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Y = dVar12;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.X = dVar14;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Y = dVar15;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Z = dVar5;
  TDistPoint3Triangle3<double>::ComputeResult(__return_storage_ptr__);
  return __return_storage_ptr__;
}

