// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 21

// <lambda_invoker_cdecl> @ 14c85c750

bool __cdecl
`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(int param_1,int param_2)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14c85c760

bool __cdecl
`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(int param_1,int param_2)

{
  return true;
}

// FPolygroupsGenerator @ 14c897b20

FPolygroupsGenerator * __thiscall
UE::Geometry::FPolygroupsGenerator::FPolygroupsGenerator
          (FPolygroupsGenerator *this,FDynamicMesh3 *param_1)

{
  this->bApplyPostProcessing = true;
  this->MinGroupSize = 0;
  this->InitialGroupID = 0;
  (this->FoundPolygroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoundPolygroups).ArrayNum = 0;
  (this->FoundPolygroups).ArrayMax = 0;
  (this->PolygroupEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygroupEdges).ArrayNum = 0;
  (this->PolygroupEdges).ArrayMax = 0;
  this->bCopyToMesh = true;
  this->Mesh = param_1;
  return this;
}

// operator() @ 14c8a0a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
`UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups'::__l2::<lambda_1>::operator()
          (void *this,FTriPairQuad *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  FIndex4i *pFVar23;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined4 uVar24;
  undefined4 uVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  TVector<double>_u_0 local_1a8;
  TQuaternion<double>_u_0 local_190;
  TVector<double>_u_0 local_170;
  undefined1 local_158 [16];
  TVector<double>_u_0 local_148;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  uVar20 = (param_1->Triangles).field0_0x0._s_0.B;
  lVar21 = (longlong)(int)uVar20;
  plVar5 = *(longlong **)((longlong)this + 8);
  uVar16 = 0;
  if ((int)uVar20 < (int)plVar5[1]) {
    uVar16 = ~uVar20 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    dVar28 = (double)(*pcVar9)();
    return dVar28;
  }
  plVar6 = *(longlong **)((longlong)this + 8);
  uVar20 = (param_1->Triangles).field0_0x0._s_0.A;
  lVar22 = (longlong)(int)uVar20;
  lVar7 = *plVar5;
  uVar16 = 0;
  if ((int)uVar20 < (int)plVar6[1]) {
    uVar16 = ~uVar20 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    dVar28 = (double)(*pcVar9)();
    return dVar28;
  }
  lVar8 = *plVar6;
  dVar28 = *(double *)(lVar7 + 8 + lVar21 * 0x18);
  dVar29 = *(double *)(lVar7 + lVar21 * 0x18);
  dVar30 = *(double *)(lVar7 + 0x10 + lVar21 * 0x18);
  dVar2 = *(double *)(lVar8 + 8 + lVar22 * 0x18);
  uVar20 = (param_1->Triangles).field0_0x0._s_0.B;
  lVar21 = (longlong)(int)uVar20;
  dVar3 = *(double *)(lVar8 + lVar22 * 0x18);
  plVar5 = *(longlong **)((longlong)this + 8);
  dVar4 = *(double *)(lVar8 + 0x10 + lVar22 * 0x18);
  uVar16 = 0;
  if ((int)uVar20 < (int)plVar5[1]) {
    uVar16 = ~uVar20 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    dVar28 = (double)(*pcVar9)();
    return dVar28;
  }
  plVar6 = *(longlong **)((longlong)this + 8);
  uVar20 = (param_1->Triangles).field0_0x0._s_0.A;
  lVar22 = (longlong)(int)uVar20;
  lVar7 = *plVar5;
  uVar16 = 0;
  if ((int)uVar20 < (int)plVar6[1]) {
    uVar16 = ~uVar20 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    dVar28 = (double)(*pcVar9)();
    return dVar28;
  }
  dVar14 = __real_bff0000000000000;
  dVar13 = __real_3ff0000000000000;
  lVar8 = *plVar6;
  dVar10 = *(double *)(lVar7 + 8 + lVar21 * 0x18) * *(double *)(lVar8 + 8 + lVar22 * 0x18) +
           *(double *)(lVar8 + lVar22 * 0x18) * *(double *)(lVar7 + lVar21 * 0x18) +
           *(double *)(lVar7 + 0x10 + lVar21 * 0x18) * *(double *)(lVar8 + 0x10 + lVar22 * 0x18);
  dVar11 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar10) && (dVar11 = dVar10, __real_3ff0000000000000 <= dVar10)) {
    dVar11 = __real_3ff0000000000000;
  }
  dVar10 = acos(dVar11);
  dVar11 = 0.0;
  dVar10 = dVar10 * dVar10 * ___real_40a9a59cd9e8a324;
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           ___real_3f002e85c0898b71;
  local_158._8_4_ = extraout_XMM0_Dc & _UNK_15061cc88;
  local_158._0_8_ = dVar10;
  local_158._12_4_ = extraout_XMM0_Dd & _UNK_15061cc8c;
  dVar12 = __real_4010000000000000;
  if (__real_3f50624dd2f1a9fc < dVar28 * dVar2 + dVar29 * dVar3 + dVar30 * dVar4) {
    uVar20 = (param_1->Triangles).field0_0x0._s_0.A;
    lVar21 = (longlong)(int)uVar20;
    plVar5 = *(longlong **)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar20 < (int)plVar5[1]) {
      uVar16 = ~uVar20 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      dVar28 = (double)(*pcVar9)();
      return dVar28;
    }
    plVar6 = *(longlong **)((longlong)this + 8);
    uVar20 = (param_1->Triangles).field0_0x0._s_0.B;
    lVar22 = (longlong)(int)uVar20;
    lVar7 = *plVar5;
    uVar16 = 0;
    if ((int)uVar20 < (int)plVar6[1]) {
      uVar16 = ~uVar20 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      dVar28 = (double)(*pcVar9)();
      return dVar28;
    }
    lVar8 = *plVar6;
    dVar28 = *(double *)(lVar8 + lVar22 * 0x18) + *(double *)(lVar7 + lVar21 * 0x18);
    dVar29 = *(double *)(lVar7 + 8 + lVar21 * 0x18) + *(double *)(lVar8 + 8 + lVar22 * 0x18);
    dVar30 = *(double *)(lVar7 + 0x10 + lVar21 * 0x18) + *(double *)(lVar8 + 0x10 + lVar22 * 0x18);
    auVar25._0_8_ = dVar30 * dVar30;
    auVar25._8_8_ = 0;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar29 * dVar29 + dVar28 * dVar28 + auVar25._0_8_;
    auVar26 = sqrtpd(auVar25,auVar26);
    if (auVar26._0_8_ <= 0.0) {
      local_170._s_0.Z = 0.0;
      local_170._s_0.X = 0.0;
      local_170._s_0.Y = 0.0;
    }
    else {
      dVar2 = dVar13 / auVar26._0_8_;
      local_170._s_0.X = dVar28 * dVar2;
      local_170._s_0.Y = dVar29 * dVar2;
      local_170._s_0.Z = dVar30 * dVar2;
    }
    uVar20 = 2;
    pFVar23 = &param_1->VertexLoop;
    lVar21 = 4;
    do {
      uVar16 = (pFVar23->field0_0x0)._s_0.A;
      uVar19 = (ulonglong)(uVar16 & 0x1ff);
      lVar7 = *(longlong *)(**(longlong **)this + 0x10);
      lVar22 = *(longlong *)(lVar7 + (ulonglong)(uVar16 >> 9) * 8);
      local_130.field0_0x0._s_0.Z = *(double *)(lVar22 + 0x10 + uVar19 * 0x18);
      pdVar1 = (double *)(lVar22 + uVar19 * 0x18);
      dVar28 = *pdVar1;
      dVar29 = pdVar1[1];
      uVar16 = uVar20 - 1 & 0x80000003;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
      }
      uVar16 = (param_1->VertexLoop).field0_0x0.ABCD[(int)uVar16];
      uVar17 = uVar20 & 0x80000003;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
      }
      local_190._s_0.X = 0.0;
      local_190._s_0.W = dVar13;
      local_190._s_0.Y = 0.0;
      local_190._s_0.Z = 0.0;
      uVar17 = (param_1->VertexLoop).field0_0x0.ABCD[(int)uVar17];
      uVar19 = (ulonglong)(uVar17 & 0x1ff);
      lVar22 = *(longlong *)(lVar7 + (ulonglong)(uVar17 >> 9) * 8);
      local_118.field0_0x0._s_0.Z = *(double *)(lVar22 + 0x10 + uVar19 * 0x18);
      pdVar1 = (double *)(lVar22 + uVar19 * 0x18);
      dVar2 = *pdVar1;
      dVar3 = pdVar1[1];
      uVar19 = (ulonglong)(uVar16 & 0x1ff);
      lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar16 >> 9) * 8);
      pdVar1 = (double *)(lVar7 + uVar19 * 0x18);
      local_1a8._s_0.X = *pdVar1;
      local_1a8._s_0.Y = pdVar1[1];
      local_1a8._s_0.Z = *(double *)(lVar7 + 0x10 + uVar19 * 0x18);
      local_148._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_148._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_148._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_190._s_0,(TVector<double> *)&local_148._s_0,
                 (TVector<double> *)&local_170._s_0);
      dVar30 = local_130.field0_0x0._s_0.Z - local_1a8._s_0.Z;
      dVar28 = dVar28 - local_1a8._s_0.X;
      dVar29 = dVar29 - local_1a8._s_0.Y;
      pTVar18 = UE::Geometry::TFrame3<double>::GetAxis
                          ((TFrame3<double> *)&local_1a8._s_0,&local_130,0);
      dVar4 = dVar29 * (pTVar18->field0_0x0)._s_0.Y + dVar28 * (pTVar18->field0_0x0)._s_0.X +
              dVar30 * (pTVar18->field0_0x0)._s_0.Z;
      pTVar18 = UE::Geometry::TFrame3<double>::GetAxis
                          ((TFrame3<double> *)&local_1a8._s_0,&local_100,1);
      dVar29 = dVar29 * (pTVar18->field0_0x0)._s_0.Y + dVar28 * (pTVar18->field0_0x0)._s_0.X +
               dVar30 * (pTVar18->field0_0x0)._s_0.Z;
      dVar28 = SQRT(dVar29 * dVar29 + dVar4 * dVar4);
      if (dVar28 <= 0.0) {
        dVar28 = 0.0;
        dVar29 = 0.0;
      }
      else {
        dVar28 = dVar13 / dVar28;
        dVar29 = dVar28 * dVar29;
        dVar28 = dVar28 * dVar4;
      }
      dVar30 = local_118.field0_0x0._s_0.Z - local_1a8._s_0.Z;
      dVar2 = dVar2 - local_1a8._s_0.X;
      dVar3 = dVar3 - local_1a8._s_0.Y;
      pTVar18 = UE::Geometry::TFrame3<double>::GetAxis
                          ((TFrame3<double> *)&local_1a8._s_0,&local_118,0);
      dVar4 = dVar3 * (pTVar18->field0_0x0)._s_0.Y + dVar2 * (pTVar18->field0_0x0)._s_0.X +
              dVar30 * (pTVar18->field0_0x0)._s_0.Z;
      pTVar18 = UE::Geometry::TFrame3<double>::GetAxis
                          ((TFrame3<double> *)&local_1a8._s_0,local_e8,1);
      dVar2 = dVar3 * (pTVar18->field0_0x0)._s_0.Y + dVar2 * (pTVar18->field0_0x0)._s_0.X +
              dVar30 * (pTVar18->field0_0x0)._s_0.Z;
      dVar30 = SQRT(dVar2 * dVar2 + dVar4 * dVar4);
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
        dVar2 = 0.0;
      }
      else {
        dVar30 = dVar13 / dVar30;
        dVar2 = dVar30 * dVar2;
        dVar30 = dVar30 * dVar4;
      }
      dVar28 = dVar2 * dVar29 + dVar30 * dVar28;
      dVar29 = dVar14;
      if ((dVar14 <= dVar28) && (dVar29 = dVar28, dVar13 <= dVar28)) {
        dVar29 = dVar13;
      }
      dVar28 = acos(dVar29);
      uVar20 = uVar20 + 1;
      pFVar23 = (FIndex4i *)((longlong)&pFVar23->field0_0x0 + 4);
      dVar28 = ((double)CONCAT44((uint)((ulonglong)(dVar28 * __real_404ca5dc1a63c1f8) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar28 * __real_404ca5dc1a63c1f8,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
               __real_4056800000000000) * ___real_3f86c16c16c16c17;
      dVar11 = dVar11 + (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar28,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar10 = (double)local_158._0_8_;
    dVar12 = dVar11;
  }
  dVar28 = (param_1->TriAreas).field0_0x0._s_0.Y;
  uVar24 = SUB84(dVar28,0);
  uVar27 = (undefined4)((ulonglong)dVar28 >> 0x20);
  dVar29 = (param_1->TriAreas).field0_0x0._s_0.X;
  dVar30 = dVar28;
  if (dVar29 <= dVar28) {
    dVar30 = dVar29;
  }
  dVar29 = *(double *)&(param_1->TriAreas).field0_0x0;
  if (dVar28 <= dVar29) {
    uVar24 = SUB84(dVar29,0);
    uVar27 = (undefined4)((ulonglong)dVar29 >> 0x20);
  }
  if (dVar30 <= __real_3e7ad7f29abcaf48) {
    dVar30 = __real_3e7ad7f29abcaf48;
  }
  dVar30 = (double)CONCAT44(uVar27,uVar24) / dVar30;
  if (dVar13 <= dVar30) {
    if (__real_4014000000000000 <= dVar30) {
      dVar30 = __real_4014000000000000;
    }
    dVar30 = dVar30 - dVar13;
    if (((dVar30 * __real_3fd0000000000000 < 0.0) || (dVar13 < dVar30 * __real_3fd0000000000000)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("AreaMetric >= 0 && AreaMetric <= 1.0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                            ,0x118,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      dVar28 = (double)(*pcVar9)();
      return dVar28;
    }
  }
  else {
    dVar30 = 0.0;
  }
  return SQRT((dVar30 * dVar30 + dVar12 * dVar12) * __real_3fb0000000000000 + dVar10);
}

// operator() @ 14c8afe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>::
operator()(void *this,FComponentContext *param_1,int param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FComponent *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_228 [32];
  FComponentContext local_1d8;
  undefined1 local_1c8 [4];
  int local_1c4 [3];
  TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_1b8;
  TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [64];
  ForAnyElementType local_128;
  int local_120;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> local_110;
  ForAnyElementType local_f0;
  ForAnyElementType local_e0;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  int local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_228;
  dVar3 = 0.0;
  local_1d8.Seeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Seeds.ArrayNum = 0;
  local_1d8.Seeds.ArrayMax = 0;
  pFVar9 = UE::Geometry::FMeshConnectedComponents::operator[]
                     (*(FMeshConnectedComponents **)((longlong)this + 0x18),param_2);
  pFVar13 = (pFVar9->Indices).AllocatorInstance.Data;
  iVar16 = (pFVar9->Indices).ArrayNum;
  pFVar10 = pFVar13 + (longlong)iVar16 * 4;
  while( true ) {
    if ((pFVar9->Indices).ArrayNum != iVar16) {
      local_1c8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1c8);
    }
    if (pFVar13 == pFVar10) break;
    dVar2 = UE::Geometry::FDynamicMesh3::GetTriArea
                      ((FDynamicMesh3 *)**(undefined8 **)this,*(int *)pFVar13);
    dVar3 = dVar3 + dVar2;
    pFVar13 = pFVar13 + 4;
  }
  iVar16 = -((int)ROUND(__real_bfe0000000000000 - (dVar3 + dVar3) / *(double *)((longlong)this + 8))
            >> 1);
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  pFVar9 = UE::Geometry::FMeshConnectedComponents::operator[]
                     (*(FMeshConnectedComponents **)((longlong)this + 0x18),param_2);
  if (((pFVar9->Indices).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar10 = (pFVar9->Indices).AllocatorInstance.Data;
  if (((local_1d8.Seeds.AllocatorInstance.Data <= pFVar10) &&
      (pFVar10 < local_1d8.Seeds.AllocatorInstance.Data + (longlong)local_1d8.Seeds.ArrayMax * 4))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = local_1d8.Seeds.ArrayNum;
  if (local_1d8.Seeds.ArrayNum == local_1d8.Seeds.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&local_1d8,&local_1d8.Seeds.ArrayMax);
  }
  iVar8 = iVar6 + 1;
  local_1d8.Seeds.ArrayNum = iVar8;
  *(undefined4 *)(local_1d8.Seeds.AllocatorInstance.Data + (longlong)iVar6 * 4) =
       *(undefined4 *)pFVar10;
  if (iVar16 == 1) {
    if ((param_1 == &local_1d8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar14 = (longlong)local_1d8.Seeds.ArrayNum;
    if (local_1d8.Seeds.ArrayNum != 0) {
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_1d8.Seeds.ArrayNum,(ForAnyElementType *)param_1,
                          &(param_1->Seeds).ArrayNum,&(param_1->Seeds).ArrayMax);
      memcpy((param_1->Seeds).AllocatorInstance.Data + (longlong)iVar16 * 4,
             local_1d8.Seeds.AllocatorInstance.Data,lVar14 << 2);
    }
  }
  else {
    if (iVar8 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = local_1d8.Seeds.ArrayNum;
    }
    uVar19 = *(undefined4 *)local_1d8.Seeds.AllocatorInstance.Data;
    if ((iVar8 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar20 = *(undefined4 *)local_1d8.Seeds.AllocatorInstance.Data;
    UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::
    TIncrementalMeshDijkstra<FMeshFaceDualGraph>
              ((TIncrementalMeshDijkstra<FMeshFaceDualGraph> *)local_168,
               *(FMeshFaceDualGraph **)((longlong)this + 0x10));
    local_198 = CONCAT44(uVar20,uVar19);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    uStack_190 = 0;
    *(undefined8 *)local_1b8.AllocatorInstance.Data = local_198;
    *(undefined8 *)(local_1b8.AllocatorInstance.Data + 8) = 0;
    UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::AddSeedPoints
              ((TIncrementalMeshDijkstra<FMeshFaceDualGraph> *)local_168,&local_1b8);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    dVar3 = __real_7fefffffffffffff;
    iVar6 = local_1d8.Seeds.ArrayNum;
    while (iVar6 < iVar16) {
      uVar19 = 0;
      uVar20 = 0;
      uVar18 = 0xffffffff;
      iVar8 = -1;
      iVar6 = (int)((FMeshFaceDualGraph *)local_168._0_8_)->_padding_ * 0x200 +
              *(int *)((longlong)&((FMeshFaceDualGraph *)local_168._0_8_)->_padding_ + 4);
      lVar14 = (longlong)iVar6;
      uVar15 = 0;
      uVar17 = 0;
      if (0 < iVar6) {
        do {
          uVar12 = (uint)uVar15;
          if (((-1 < (int)uVar12) &&
              ((int)uVar12 <
               (int)*(longlong *)(local_168._0_8_ + 8) * 0x200 +
               *(int *)((longlong)(local_168._0_8_ + 8) + 4))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(local_168._0_8_ + 0x10) + (uVar15 >> 9) * 8) +
                                 (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            uVar7 = 0;
            if ((int)uVar12 < local_120) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar10 = local_128.Data + uVar17;
            if ((pFVar10 != (FScriptContainerElement *)0x0) &&
               (*(int *)(pFVar10 + 0x18) != local_80)) {
              dVar2 = *(double *)(pFVar10 + 0x10);
              if ((dVar2 != dVar3) &&
                 ((double)CONCAT44(uVar20,uVar19) <= dVar2 &&
                  dVar2 != (double)CONCAT44(uVar20,uVar19))) {
                uVar18 = uVar15;
                uVar19 = SUB84(dVar2,0);
                uVar20 = (int)((ulonglong)dVar2 >> 0x20);
              }
            }
          }
          iVar8 = (int)uVar18;
          lVar14 = lVar14 + -1;
          uVar15 = (ulonglong)(uVar12 + 1);
          uVar17 = uVar17 + 0x20;
        } while (lVar14 != 0);
      }
      local_1c4[0] = iVar8;
      if (iVar8 < 0) break;
      local_188 = CONCAT44(iVar8,iVar8);
      uVar4 = local_188;
      uStack_180 = 0;
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_1a8.AllocatorInstance,1,&local_1a8.ArrayMax);
      local_178 = uVar4;
      uStack_170 = 0;
      *(undefined8 *)local_1a8.AllocatorInstance.Data = uVar4;
      *(undefined8 *)(local_1a8.AllocatorInstance.Data + 8) = 0;
      UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::AddSeedPoints
                ((TIncrementalMeshDijkstra<FMeshFaceDualGraph> *)local_168,&local_1a8);
      if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.AllocatorInstance.Data);
      }
      if (((local_1d8.Seeds.AllocatorInstance.Data <= (FScriptContainerElement *)local_1c4) &&
          ((FScriptContainerElement *)local_1c4 <
           local_1d8.Seeds.AllocatorInstance.Data + (longlong)local_1d8.Seeds.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = local_1d8.Seeds.ArrayNum;
      if (local_1d8.Seeds.ArrayNum == local_1d8.Seeds.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)&local_1d8,&local_1d8.Seeds.ArrayMax);
      }
      iVar6 = iVar8 + 1;
      local_1d8.Seeds.ArrayNum = iVar6;
      *(int *)(local_1d8.Seeds.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_1c4[0];
    }
    if ((param_1 == &local_1d8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar14 = (longlong)local_1d8.Seeds.ArrayNum;
    if (local_1d8.Seeds.ArrayNum != 0) {
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_1d8.Seeds.ArrayNum,(ForAnyElementType *)param_1,
                          &(param_1->Seeds).ArrayNum,&(param_1->Seeds).ArrayMax);
      memcpy((param_1->Seeds).AllocatorInstance.Data + (longlong)iVar16 * 4,
             local_1d8.Seeds.AllocatorInstance.Data,lVar14 << 2);
    }
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d0);
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_110);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    if (local_168._16_8_ != 0) {
      plVar11 = (longlong *)(local_168 + 0x20);
      if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_168._56_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if (local_1d8.Seeds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Seeds.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14c8b12d0

double __thiscall
`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::__l21::<lambda_3>::
operator()(void *this,int param_1,int param_2,int param_3,double param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = param_3 * 3;
  uVar3 = param_2 * 3;
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x130);
  dVar5 = *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
           (ulonglong)(uVar2 + 1 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
           (ulonglong)(uVar3 + 1 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
           (ulonglong)(uVar2 + 2 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
           (ulonglong)(uVar3 + 2 & 0x1ff) * 8);
  if (__real_3f50624dd2f1a9fc < *(double *)((longlong)this + 8)) {
    dVar5 = pow(dVar5,*(double *)((longlong)this + 8));
  }
  dVar4 = __real_3ff0000000000000 - dVar5 * dVar5;
  dVar5 = __real_3f50624dd2f1a9fc;
  if (0.0 <= dVar4) {
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar4 = dVar4 * dVar4 * dVar4;
    if ((__real_3f50624dd2f1a9fc <= dVar4) && (dVar5 = dVar4, __real_3ff0000000000000 <= dVar4)) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  return dVar5 * param_4;
}

// operator() @ 14c8b23d0

double __thiscall
`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l14::<lambda_4>
::operator()(void *this,int param_1,int param_2,int param_3,double param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = param_3 * 3;
  uVar3 = param_2 * 3;
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x20) + 0x130);
  dVar5 = *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
           (ulonglong)(uVar2 + 1 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
           (ulonglong)(uVar3 + 1 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8) +
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
           (ulonglong)(uVar2 + 2 & 0x1ff) * 8) *
          *(double *)
           (*(longlong *)(lVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
           (ulonglong)(uVar3 + 2 & 0x1ff) * 8);
  if (__real_3f50624dd2f1a9fc < *(double *)((longlong)this + 8)) {
    dVar5 = pow(dVar5,*(double *)((longlong)this + 8));
  }
  dVar4 = __real_3ff0000000000000 - dVar5 * dVar5;
  dVar5 = __real_3f50624dd2f1a9fc;
  if (0.0 <= dVar4) {
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar4 = dVar4 * dVar4 * dVar4;
    if ((__real_3f50624dd2f1a9fc <= dVar4) && (dVar5 = dVar4, __real_3ff0000000000000 <= dVar4)) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  return dVar5 * param_4;
}

// CopyPolygroupsToMesh @ 14c8d6300

void __thiscall UE::Geometry::FPolygroupsGenerator::CopyPolygroupsToMesh(FPolygroupsGenerator *this)

{
  int iVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong local_res10;
  
  FDynamicMesh3::EnableTriangleGroups(this->Mesh,0);
  lVar9 = (longlong)(this->FoundPolygroups).ArrayNum;
  uVar7 = 0;
  if (0 < lVar9) {
    local_res10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar7 < (this->FoundPolygroups).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = 0;
      pFVar11 = (this->FoundPolygroups).AllocatorInstance.Data + local_res10;
      lVar6 = 0;
      iVar1 = *(int *)(pFVar11 + 8);
      if (0 < (longlong)iVar1) {
        do {
          pFVar2 = this->Mesh;
          iVar10 = this->InitialGroupID + 1 + uVar7;
          uVar5 = 0;
          if ((int)uVar8 < *(int *)(pFVar11 + 8)) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          uVar5 = *(uint *)(*(longlong *)pFVar11 + lVar6 * 4);
          if ((pFVar2->TriangleGroups).bIsSet != false) {
            *(int *)(*(longlong *)
                      ((pFVar2->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) = iVar10;
            iVar10 = iVar10 + 1;
            if (iVar10 < pFVar2->GroupIDCounter) {
              iVar10 = pFVar2->GroupIDCounter;
            }
            pFVar2->GroupIDCounter = iVar10;
          }
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar1);
      }
      uVar7 = uVar7 + 1;
      local_res10 = local_res10 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// CopyPolygroupsToPolygroupSet @ 14c8d64c0

void __thiscall
UE::Geometry::FPolygroupsGenerator::CopyPolygroupsToPolygroupSet
          (FPolygroupsGenerator *this,FPolygroupSet *param_1,FDynamicMesh3 *param_2)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  FDynamicMeshAttributeSet *this_00;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ulonglong uVar13;
  uint local_res20;
  longlong local_50;
  
  lVar10 = (longlong)(this->FoundPolygroups).ArrayNum;
  local_res20 = 0;
  if (0 < lVar10) {
    local_50 = 0;
    do {
      uVar9 = 0;
      if ((int)local_res20 < (this->FoundPolygroups).ArrayNum) {
        uVar9 = ~local_res20 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = 0;
      pFVar11 = (this->FoundPolygroups).AllocatorInstance.Data + local_50;
      uVar9 = 0;
      iVar1 = *(int *)(pFVar11 + 8);
      if (0 < (longlong)iVar1) {
        do {
          iVar12 = this->InitialGroupID + 1 + local_res20;
          uVar5 = 0;
          if ((int)uVar9 < *(int *)(pFVar11 + 8)) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          uVar5 = *(uint *)(*(longlong *)pFVar11 + lVar8 * 4);
          if (((-1 < (int)uVar5) &&
              ((int)uVar5 <
               (int)((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_2->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
             (uVar13 = (ulonglong)(uVar5 >> 9),
             (ushort)(*(short *)(*(longlong *)
                                  ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                   Data + uVar13 * 8) + (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) <
             0xfffe)) {
            if (param_1->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
              if ((param_2->TriangleGroups).bIsSet != false) {
                *(int *)(*(longlong *)
                          ((param_2->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                          uVar13 * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) = iVar12;
                iVar6 = iVar12 + 1;
                if (iVar12 + 1 < param_2->GroupIDCounter) {
                  iVar6 = param_2->GroupIDCounter;
                }
                param_2->GroupIDCounter = iVar6;
              }
            }
            else {
              pFVar2 = (param_2->AttributeSet).Ptr;
              this_00 = (FDynamicMeshAttributeSet *)0x0;
              if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
                this_00 = pFVar2;
              }
              pTVar7 = FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,param_1->GroupLayerIndex)
              ;
              *(int *)(*(longlong *)(*(longlong *)&pTVar7->field_0x20 + uVar13 * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 4) = iVar12;
            }
          }
          iVar6 = iVar12 + 1;
          if (iVar12 + 1 < param_1->MaxGroupID) {
            iVar6 = param_1->MaxGroupID;
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 1;
          param_1->MaxGroupID = iVar6;
        } while (lVar8 < iVar1);
      }
      local_res20 = local_res20 + 1;
      local_50 = local_50 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// FindPolygroupEdges @ 14c8e94f0

bool __thiscall UE::Geometry::FPolygroupsGenerator::FindPolygroupEdges(FPolygroupsGenerator *this)

{
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_28 [4];
  
  piVar1 = &(this->PolygroupEdges).ArrayMax;
  (this->PolygroupEdges).ArrayNum = 0;
  if ((this->PolygroupEdges).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PolygroupEdges).AllocatorInstance,0,piVar1);
  }
  pFVar2 = this->Mesh;
  uVar10 = (pFVar2->EdgeRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  uVar9 = 0;
  if ((uVar10 != 0) &&
     (pFVar3 = (pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar9 = 1;
    bVar11 = uVar10 == 1;
    if ((int)uVar10 < 2) goto LAB_14c8e95b3;
    do {
      lVar6 = (ulonglong)(uVar9 & 0x1ff) * 2;
      lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar9 >> 9) * 8);
      if ((*(short *)(lVar6 + lVar4) != 0) && (*(short *)(lVar6 + lVar4) != -1)) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  bVar11 = uVar9 == uVar10;
LAB_14c8e95b3:
  if (!bVar11) {
LAB_14c8e95c0:
    do {
      local_28[0] = uVar9;
      bVar11 = FDynamicMesh3::IsGroupBoundaryEdge(this->Mesh,uVar9);
      if (bVar11) {
        pFVar3 = (this->PolygroupEdges).AllocatorInstance.Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
           ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 4)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        iVar8 = (this->PolygroupEdges).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->PolygroupEdges).AllocatorInstance,piVar1);
        }
        (this->PolygroupEdges).ArrayNum = iVar8 + 1;
        *(uint *)((this->PolygroupEdges).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_28[0]
        ;
      }
      uVar9 = uVar9 + 1;
      if ((int)uVar9 < (int)uVar10) {
        do {
          lVar6 = (ulonglong)(uVar9 & 0x1ff) * 2;
          lVar4 = *(longlong *)
                   ((pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar9 >> 9) * 8);
          if ((*(short *)(lVar6 + lVar4) != 0) && (*(short *)(lVar6 + lVar4) != -1))
          goto LAB_14c8e95c0;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar10);
      }
    } while (uVar9 != uVar10);
  }
  return 0 < (this->PolygroupEdges).ArrayNum;
}

// FindPolygroupsFromAreaDensityPointSampling @ 14c8e98f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c8e99e9) */
/* WARNING: Removing unreachable block (ram,0x00014c8e99fd) */
/* WARNING: Removing unreachable block (ram,0x00014c8e9a01) */
/* WARNING: Removing unreachable block (ram,0x00014c8e9ab3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe18 : 0x00014c8e9ab7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling
          (FPolygroupsGenerator *this,int param_1,EWeightingType param_2,TVector<double> *param_3,
          FPolygroupSet *param_4)

{
  undefined8 uVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  double dVar5;
  FPolygroupsGenerator *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  uint *puVar23;
  uint uVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_5c8 [32];
  <lambda_1> local_578 [4];
  int local_574;
  TArray<int,TSizedDefaultAllocator<32>_> local_570;
  TArray<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_560;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_550;
  ForAnyElementType local_540;
  int local_538;
  int local_534;
  ForAnyElementType local_530;
  undefined8 local_528;
  uint local_520;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  FPolygroupsGenerator *local_510;
  FMeshConnectedComponents local_508;
  FScriptContainerElement *local_4e8;
  undefined8 uStack_4e0;
  int local_4d8;
  undefined4 uStack_4d4;
  FMeshConnectedComponents local_4c8;
  FScriptContainerElement *local_4b0;
  int *piStack_4a8;
  undefined8 local_4a0;
  code *local_498;
  code **local_490;
  code *local_488;
  code **local_480;
  FPolygroupsGenerator *local_478;
  double dStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 *local_458;
  <lambda_3> local_448;
  undefined1 local_428 [16];
  code *local_418 [2];
  code *local_408 [3];
  undefined8 local_3f0;
  TFunction<bool___cdecl(int,int)> local_3e8;
  undefined1 local_3b8 [280];
  void *local_2a0;
  TDynamicVector<double,512> local_290;
  TDynamicVector<double,512> local_278;
  code *local_258 [2];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  longlong *plStack_230;
  undefined8 local_228;
  undefined8 uStack_200;
  code *local_1f8;
  undefined **local_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [120];
  longlong *plStack_120;
  longlong local_118;
  int local_110;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  ForAnyElementType local_c0;
  ForAnyElementType local_78;
  int local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  iVar13 = (this->Mesh->VertexRefCounts).UsedCount;
  if (param_1 < iVar13) {
    iVar13 = param_1;
  }
  uVar21 = 0;
  local_258[0] = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>
                 ::Call;
  local_248 = 0x528cfdc8;
  uStack_244 = 1;
  uStack_240._0_4_ = 0x4c85c750;
  uStack_240._4_4_ = 1;
  plStack_230 = (longlong *)0x0;
  local_228 = 0;
  uStack_200 = 0;
  uStack_200 = 0;
  local_228 = 0;
  plStack_230 = (longlong *)0x0;
  uStack_244 = 1;
  local_248 = 0x528cfdc8;
  local_258[0] = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>
                 ::Call;
  uStack_240 = `UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::
               __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_510 = this;
  if (param_4 != (FPolygroupSet *)0x0) {
    local_258[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l5::<lambda_2>,bool,int,int>
                   ::Call;
    plStack_230 = (longlong *)0x0;
    local_248 = 0x528cfe28;
    uStack_244 = 1;
    uStack_240 = (code *)param_4;
    local_1f8 = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>::
                Call;
    local_1e8 = &___7__TFunction_OwnedObject_P6A_NHH_Z_0A__0A__Function_Private_Core_UE__6B_;
    pcStack_1e0 = `UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::
                  __l2::<lambda_1>::<lambda_invoker_cdecl>;
    uStack_1d0 = 0;
    (*(code *)PTR_Destroy_1528cfdd8)();
  }
  pFVar2 = this->Mesh;
  dVar5 = 0.0;
  uVar24 = (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar24 == 0) ||
     (pFVar26 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar26 - 1U) < 0xfffe)) {
LAB_14c8e9b28:
    uVar20 = (uint)uVar21;
  }
  else {
    uVar21 = 1;
    uVar20 = 1;
    if (1 < (int)uVar24) {
      do {
        uVar17 = (ulonglong)((uint)uVar21 & 0x1ff);
        lVar25 = *(longlong *)(pFVar26 + (uVar21 >> 9) * 8);
        if ((*(short *)(lVar25 + uVar17 * 2) != 0) && (*(short *)(lVar25 + uVar17 * 2) != -1))
        break;
        uVar20 = (uint)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while ((int)uVar20 < (int)uVar24);
      goto LAB_14c8e9b28;
    }
  }
joined_r0x00014c8e9b2a:
  if (uVar20 != uVar24) {
    while( true ) {
      dVar29 = FDynamicMesh3::GetTriArea(this->Mesh,(int)uVar21);
      uVar20 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      dVar5 = dVar5 + dVar29;
      if ((int)uVar24 <= (int)uVar20) break;
      while( true ) {
        uVar17 = (ulonglong)((uint)uVar21 & 0x1ff);
        lVar25 = *(longlong *)
                  ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar21 >> 9) * 8);
        if ((*(short *)(lVar25 + uVar17 * 2) != 0) && (*(short *)(lVar25 + uVar17 * 2) != -1))
        break;
        uVar20 = (uint)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
        if ((int)uVar24 <= (int)uVar20) goto joined_r0x00014c8e9b2a;
      }
    }
    goto joined_r0x00014c8e9b2a;
  }
  uStack_4e0._4_4_ = (int)((ulonglong)uStack_4e0 >> 0x20);
  FMeshFaceDualGraph::FMeshFaceDualGraph((FMeshFaceDualGraph *)local_3b8);
  if (local_258[0] == (code *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  local_490 = local_258;
  local_498 = Core::Private::Function::
              TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
  FMeshFaceDualGraph::MakeFaceDualGraphForMesh
            (this->Mesh,(FMeshFaceDualGraph *)local_3b8,
             (TFunctionRef<bool___cdecl(int,int)> *)&local_498);
  uVar21 = 0;
  local_4c8.Mesh = this->Mesh;
  local_530.Data = (FScriptContainerElement *)0x0;
  local_528 = 0;
  local_4c8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4c8.Components.Array.ArrayNum = 0;
  local_4c8.Components.Array.ArrayMax = 0;
  local_418[0] = local_258[0];
  local_3f0 = 0;
  if (local_258[0] != (code *)0x0) {
    plVar15 = (longlong *)&local_248;
    if (plStack_230 != (longlong *)0x0) {
      plVar15 = plStack_230;
    }
    (**(code **)*plVar15)(plVar15,local_418 + 2);
  }
  FMeshConnectedComponents::FindConnectedTriangles
            (&local_4c8,(TFunction<bool___cdecl(int,int)> *)local_418);
  iVar11 = local_4c8.Components.Array.ArrayNum;
  lVar25 = (longlong)local_4c8.Components.Array.ArrayNum;
  local_540.Data = (FScriptContainerElement *)0x0;
  local_538 = 0;
  local_534 = 0;
  if (local_4c8.Components.Array.ArrayNum < 1) {
    if (local_4c8.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_4c8.Components.Array._8_8_ & 0xffffffff);
    }
  }
  else {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,local_4c8.Components.Array.ArrayNum,&local_540,&local_538,&local_534)
    ;
    DefaultConstructItems<_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling_::__l2::FComponentContext,int>
              (local_540.Data + (longlong)iVar10 * 0x10,iVar11);
  }
  iVar10 = local_538;
  local_4e8 = local_540.Data;
  if (local_538 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  local_448.FaceGraph = (FMeshFaceDualGraph *)local_3b8;
  uStack_4e0 = (int *)CONCAT44(uStack_4e0._4_4_,iVar10);
  local_428._0_8_ = local_4e8;
  local_428._8_8_ = uStack_4e0;
  local_448.__this = this;
  local_448.ExpectedAreaPerSeed = dVar5 / (double)iVar13;
  local_448.Components = &local_4c8;
  ParallelForImpl::
  ParallelForInternal<_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling_::__l2::FComponentContext,_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling_::__l2::<lambda_3>_>_::__l2::<lambda_1>,_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling_::__l2::FComponentContext>
            (L"ParallelFor Task",iVar11,1,&local_448,local_578[0],None,
             (TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>
              *)local_428);
  uVar17 = uVar21;
  if (0 < iVar11) {
    do {
      uVar20 = (uint)uVar21;
      uVar24 = 0;
      if ((int)uVar20 < local_538) {
        uVar24 = ~uVar20 >> 0x1f;
      }
      if (uVar24 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      pFVar26 = local_540.Data + uVar17;
      if ((FScriptContainerElement *)&local_530 == pFVar26) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      iVar13 = *(int *)(pFVar26 + 8);
      if (iVar13 != 0) {
        iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar13,&local_530,(int *)&local_528,
                            (int *)((longlong)&local_528 + 4));
                    /* WARNING: Load size is inaccurate */
        memcpy(local_530.Data + (longlong)iVar11 * 4,*pFVar26,(longlong)iVar13 << 2);
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      lVar25 = lVar25 + -1;
      uVar17 = uVar17 + 0x10;
    } while (lVar25 != 0);
  }
  TMeshDijkstra<FMeshFaceDualGraph>::TMeshDijkstra<FMeshFaceDualGraph>
            ((TMeshDijkstra<FMeshFaceDualGraph> *)local_198,(FMeshFaceDualGraph *)local_3b8);
  this_00 = local_510;
  if (param_2 == NormalDeviation) {
    dStack_470 = (param_3->field0_0x0)._s_0.X;
    uStack_468 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_458 = local_3b8;
    uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    uVar30 = (undefined4)uVar1;
    uVar31 = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_198[0x40] = true;
    local_478 = local_510;
    local_1c8 = (code *)0x0;
    plVar15 = FMemory::Malloc(0x30,8);
    plStack_1a0 = plStack_120;
    uVar7 = local_198._112_8_;
    uVar6 = local_198._88_8_;
    uVar1 = local_198._80_8_;
    *plVar15 = (longlong)
               &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::`14'::<lambda_4>,1,1>
                ::_vftable_;
    plVar15[1] = (longlong)local_478;
    plVar15[2] = (longlong)dStack_470;
    *(undefined4 *)(plVar15 + 3) = (undefined4)uStack_468;
    *(undefined4 *)((longlong)plVar15 + 0x1c) = uStack_468._4_4_;
    *(undefined4 *)(plVar15 + 4) = uVar30;
    *(undefined4 *)((longlong)plVar15 + 0x24) = uVar31;
    plVar15[5] = (longlong)local_458;
    if (plVar15 != (longlong *)&DAT_fffffffffffffff8) {
      local_1c8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l14::<lambda_4>,double,int,int,int,double>
                  ::Call;
    }
    local_198._80_8_ = local_1c8;
    local_198._88_8_ = uStack_1c0;
    local_198._112_8_ = local_1a8;
    plStack_120 = plVar15;
    local_1c8 = (code *)uVar1;
    uStack_1c0 = uVar6;
    local_1a8 = uVar7;
    uStack_460 = uVar30;
    uStack_45c = uVar31;
    local_198._96_4_ = (undefined4)local_1b8;
    local_198._100_4_ = local_1b8._4_4_;
    local_198._104_4_ = (undefined4)uStack_1b0;
    local_198._108_4_ = uStack_1b0._4_4_;
    if ((code *)uVar1 != (code *)0x0) {
      plVar15 = &local_1b8;
      if (plStack_1a0 != (longlong *)0x0) {
        plVar15 = plStack_1a0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  uVar21 = 0;
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  uVar17 = uVar21;
  uVar27 = uVar21;
  if (0 < (int)local_528) {
    do {
      uVar20 = (uint)uVar17;
      uVar24 = 0;
      if ((int)uVar20 < (int)local_528) {
        uVar24 = ~uVar20 >> 0x1f;
      }
      local_520 = uVar20;
      if (uVar24 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      uStack_51c = *(undefined4 *)(local_530.Data + uVar27);
      uStack_518 = 0;
      if ((local_560.AllocatorInstance.Data <= (FScriptContainerElement *)&local_520) &&
         ((FScriptContainerElement *)&local_520 <
          local_560.AllocatorInstance.Data + (longlong)local_560.ArrayMax * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      if (local_560.ArrayNum == local_560.ArrayMax) {
        local_560.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_560.AllocatorInstance,&local_560.ArrayMax);
      }
      lVar25 = (longlong)local_560.ArrayNum;
      local_560.ArrayNum = local_560.ArrayNum + 1;
      *(ulonglong *)(local_560.AllocatorInstance.Data + lVar25 * 0x10) =
           CONCAT44(uStack_51c,local_520);
      *(undefined8 *)(local_560.AllocatorInstance.Data + lVar25 * 0x10 + 8) = uStack_518;
      uVar17 = (ulonglong)(uVar20 + 1);
      uVar27 = uVar27 + 4;
    } while ((int)(uVar20 + 1) < (int)local_528);
  }
  TMeshDijkstra<FMeshFaceDualGraph>::ComputeToMaxDistance
            ((TMeshDijkstra<FMeshFaceDualGraph> *)local_198,&local_560,__real_7fefffffffffffff);
  local_550.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_550.ArrayNum = 0;
  local_550.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_550,(int)local_528,Default);
  pFVar2 = this_00->Mesh;
  local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_570.ArrayNum = 0;
  local_570.ArrayMax = 0;
  uVar24 = (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar24 != 0) &&
     (pFVar26 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar26 - 1U))) {
    uVar21 = 1;
    uVar20 = 1;
    if ((int)uVar24 < 2) goto LAB_14c8ea17b;
    do {
      uVar17 = (ulonglong)((uint)uVar21 & 0x1ff);
      lVar25 = *(longlong *)(pFVar26 + (uVar21 >> 9) * 8);
      if ((*(short *)(lVar25 + uVar17 * 2) != 0) && (*(short *)(lVar25 + uVar17 * 2) != -1)) break;
      uVar20 = (uint)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
    } while ((int)uVar20 < (int)uVar24);
  }
  uVar20 = (uint)uVar21;
LAB_14c8ea17b:
  puVar23 = (uint *)0x0;
  uVar12 = 0;
joined_r0x00014c8ea17b:
  if (uVar20 == uVar24) {
    puVar19 = puVar23;
    if (0 < local_550.ArrayNum) {
      do {
        uVar20 = (uint)puVar23;
        uVar24 = 0;
        if ((int)uVar20 < local_550.ArrayNum) {
          uVar24 = ~uVar20 >> 0x1f;
        }
        if (uVar24 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        if (0 < *(int *)((longlong)(puVar19 + 2) + local_550.AllocatorInstance.Data)) {
          uVar24 = uVar12;
          if ((int)uVar20 < local_550.ArrayNum) {
            uVar24 = ~uVar20 >> 0x1f;
          }
          if (uVar24 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          pFVar26 = (this_00->FoundPolygroups).AllocatorInstance.Data;
          pFVar22 = local_550.AllocatorInstance.Data + (longlong)puVar19;
          if ((pFVar26 <= pFVar22) &&
             (pFVar22 < pFVar26 + (longlong)(this_00->FoundPolygroups).ArrayMax * 0x10)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          iVar13 = (this_00->FoundPolygroups).ArrayNum;
          piVar16 = &(this_00->FoundPolygroups).ArrayMax;
          if (iVar13 == *piVar16) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this_00->FoundPolygroups).AllocatorInstance,piVar16);
          }
          lVar25 = (longlong)iVar13;
          (this_00->FoundPolygroups).ArrayNum = iVar13 + 1;
          pFVar26 = (this_00->FoundPolygroups).AllocatorInstance.Data;
          *(undefined8 *)(pFVar26 + lVar25 * 0x10) = 0;
          *(undefined8 *)(pFVar26 + lVar25 * 0x10) = *(undefined8 *)pFVar22;
          *(undefined8 *)pFVar22 = 0;
          *(undefined4 *)(pFVar26 + lVar25 * 0x10 + 8) = *(undefined4 *)(pFVar22 + 8);
          *(undefined4 *)(pFVar26 + lVar25 * 0x10 + 0xc) = *(undefined4 *)(pFVar22 + 0xc);
          *(undefined8 *)(pFVar22 + 8) = 0;
        }
        puVar23 = (uint *)(ulonglong)(uVar20 + 1);
        puVar19 = puVar19 + 4;
      } while ((int)(uVar20 + 1) < local_550.ArrayNum);
    }
    if (0 < local_570.ArrayNum) {
      local_508.Mesh = this_00->Mesh;
      local_508.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_508.Components.Array.ArrayNum = 0;
      local_508.Components.Array.ArrayMax = 0;
      local_3e8._0_8_ = 0;
      local_3e8._40_8_ = 0;
      FMeshConnectedComponents::FindConnectedTriangles(&local_508,&local_570,&local_3e8);
      uStack_4e0 = &local_508.Components.Array.ArrayNum;
      local_4e8 = local_508.Components.Array.AllocatorInstance.Data;
      local_4d8 = local_508.Components.Array.ArrayNum;
      local_4a0 = CONCAT44(uStack_4d4,local_508.Components.Array.ArrayNum);
      pFVar26 = local_508.Components.Array.AllocatorInstance.Data +
                (longlong)local_508.Components.Array.ArrayNum * 8;
      local_4b0 = local_508.Components.Array.AllocatorInstance.Data;
      piStack_4a8 = uStack_4e0;
      while( true ) {
        pFVar22 = local_4b0;
        if (*piStack_4a8 != (int)local_4a0) {
          local_578[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_578);
        }
        if (pFVar22 == pFVar26) break;
        pFVar3 = *(FScriptContainerElement **)pFVar22;
        pFVar28 = (this_00->FoundPolygroups).AllocatorInstance.Data;
        if ((pFVar28 <= pFVar3) &&
           (pFVar3 < pFVar28 + (longlong)(this_00->FoundPolygroups).ArrayMax * 0x10)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        iVar13 = (this_00->FoundPolygroups).ArrayNum;
        piVar16 = &(this_00->FoundPolygroups).ArrayMax;
        if (iVar13 == *piVar16) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this_00->FoundPolygroups).AllocatorInstance,piVar16);
        }
        (this_00->FoundPolygroups).ArrayNum = iVar13 + 1;
        pFVar28 = (this_00->FoundPolygroups).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(FScriptContainerElement **)&pFVar28->field_0x0 = (FScriptContainerElement *)0x0;
        iVar13 = *(int *)(pFVar3 + 8);
        _Src = *(void **)pFVar3;
        *(int *)&pFVar28[8].field_0x0 = iVar13;
        if (iVar13 == 0) {
          local_4b0 = pFVar22 + 8;
          *(int *)(pFVar28 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar13,0,(ForAnyElementType *)pFVar28,iVar13,(int *)(pFVar28 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar28->field_0x0,_Src,(longlong)iVar13 << 2);
          local_4b0 = pFVar22 + 8;
        }
      }
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_508.Components);
    }
    if (this_00->bApplyPostProcessing != false) {
      if (local_258[0] == (code *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBound(InFunc)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                           ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      if (1 < this_00->MinGroupSize) {
        local_488 = Core::Private::Function::
                    TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
        local_480 = local_258;
        OptimizePolygroups(this_00,(TFunctionRef<bool___cdecl(int,int)> *)&local_488);
      }
    }
    if (this_00->bCopyToMesh != false) {
      CopyPolygroupsToMesh(this_00);
    }
    iVar13 = (this_00->FoundPolygroups).ArrayNum;
    if (local_570.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_550.AllocatorInstance.Data,
               local_550.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_550.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_550.AllocatorInstance.Data);
    }
    if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.AllocatorInstance.Data);
    }
    TMeshDijkstra<FMeshFaceDualGraph>::~TMeshDijkstra<FMeshFaceDualGraph>
              ((TMeshDijkstra<FMeshFaceDualGraph> *)local_198);
    DestructItems<_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling_::__l2::FComponentContext,int>
              ((FComponentContext *)local_540.Data,local_538);
    if (local_540.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.Data);
    }
    TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
              (&local_4c8.Components);
    if (local_530.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.Data);
    }
    TDynamicVector<double,512>::Empty(&local_278,0);
    if (local_278.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<double,512>::Empty(&local_290,0);
    if (local_290.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<double,512>::Empty((TDynamicVector<double,512> *)(local_3b8 + 0x110),0);
    if (local_2a0 != (void *)0x0) {
      FMemory::Free(local_2a0);
    }
    FDynamicGraph::~FDynamicGraph((FDynamicGraph *)local_3b8);
    if (local_258[0] != (code *)0x0) {
      plVar15 = (longlong *)&local_248;
      if (plStack_230 != (longlong *)0x0) {
        plVar15 = plStack_230;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    return 0 < iVar13;
  }
  do {
    iVar13 = (int)uVar21;
    local_574 = iVar13;
    if (local_110 != local_e4) {
      puVar18 = local_e0;
      if (local_d8 != (undefined1 *)0x0) {
        puVar18 = local_d8;
      }
      iVar11 = *(int *)(puVar18 + (local_d0 - 1 & uVar21) * 4);
      while (iVar11 != -1) {
        piVar16 = (int *)((longlong)iVar11 * 0x10 + local_118);
        if (*piVar16 == iVar13) {
          puVar19 = (uint *)(piVar16 + 1);
          if (piVar16 == (int *)0x0) {
            puVar19 = puVar23;
          }
          if (((puVar19 != (uint *)0x0) &&
              (lVar25 = (ulonglong)(*puVar19 & 0x1ff) * 0x20 +
                        *(longlong *)(local_c0.Data + (ulonglong)(*puVar19 >> 9) * 8), lVar25 != 0))
             && (*(char *)(lVar25 + 0x18) != '\0')) {
            uVar20 = *(uint *)(lVar25 + 8);
            uVar14 = uVar12;
            if ((int)uVar20 < local_70) {
              uVar14 = ~uVar20 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
            }
            uVar20 = *(uint *)(local_78.Data + (longlong)(int)uVar20 * 0x10);
            if (-1 < (int)uVar20) {
              uVar14 = uVar12;
              if ((int)uVar20 < local_550.ArrayNum) {
                uVar14 = ~uVar20 >> 0x1f;
              }
              if (uVar14 == 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
              }
              pFVar26 = local_550.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10;
              if ((*(FScriptContainerElement **)&pFVar26->field_0x0 <=
                   (FScriptContainerElement *)&local_574) &&
                 ((FScriptContainerElement *)&local_574 <
                  *(FScriptContainerElement **)&pFVar26->field_0x0 +
                  (longlong)*(int *)(pFVar26 + 0xc) * 4)) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
              }
              iVar11 = *(int *)(pFVar26 + 8);
              if (iVar11 == *(int *)(pFVar26 + 0xc)) {
                iVar11 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar26,(int *)(pFVar26 + 0xc));
              }
              *(int *)(pFVar26 + 8) = iVar11 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar26->field_0x0 + (longlong)iVar11 * 4) =
                   local_574;
              goto LAB_14c8ea299;
            }
          }
          break;
        }
        iVar11 = piVar16[2];
      }
    }
    if ((local_570.AllocatorInstance.Data <= (FScriptContainerElement *)&local_574) &&
       ((FScriptContainerElement *)&local_574 <
        local_570.AllocatorInstance.Data + (longlong)local_570.ArrayMax * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    if (local_570.ArrayNum == local_570.ArrayMax) {
      local_570.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_570.AllocatorInstance,&local_570.ArrayMax);
    }
    lVar25 = (longlong)local_570.ArrayNum;
    local_570.ArrayNum = local_570.ArrayNum + 1;
    *(int *)(local_570.AllocatorInstance.Data + lVar25 * 4) = local_574;
LAB_14c8ea299:
    uVar20 = iVar13 + 1;
    uVar21 = (ulonglong)uVar20;
    if ((int)uVar24 <= (int)uVar20) goto joined_r0x00014c8ea17b;
    while( true ) {
      uVar17 = (ulonglong)((uint)uVar21 & 0x1ff);
      lVar25 = *(longlong *)
                ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                (uVar21 >> 9) * 8);
      if ((*(short *)(lVar25 + uVar17 * 2) != 0) && (*(short *)(lVar25 + uVar17 * 2) != -1)) break;
      uVar20 = (uint)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      if ((int)uVar24 <= (int)uVar20) goto joined_r0x00014c8ea17b;
    }
  } while( true );
}

// FindPolygroupsFromConnectedTris @ 14c8ea9a0

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromConnectedTris
          (FPolygroupsGenerator *this,TFunction<bool___cdecl(int,int)> *param_1)

{
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FPolygroupsGenerator *this_00;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FMeshConnectedComponents local_98;
  TFunction<bool___cdecl(int,int)> *local_78;
  FPolygroupsGenerator *local_70;
  TFunction<bool___cdecl(int,int)> local_68;
  
  local_98.Mesh = this->Mesh;
  uVar11 = 0;
  local_68._0_8_ = *(undefined8 *)param_1;
  local_98.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Components.Array.ArrayNum = 0;
  local_98.Components.Array.ArrayMax = 0;
  local_68._40_8_ = 0;
  local_78 = param_1;
  local_70 = this;
  if (local_68._0_8_ != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)(puVar7,&local_68.field_0x10);
  }
  FMeshConnectedComponents::FindConnectedTriangles(&local_98,&local_68);
  uVar13 = (ulonglong)local_98.Components.Array.ArrayNum;
  this_00 = this;
  uVar15 = uVar13;
  if (0 < local_98.Components.Array.ArrayNum) {
    pTVar1 = &this->FoundPolygroups;
    uVar16 = uVar11;
    do {
      uVar10 = (uint)uVar11;
      uVar12 = 0;
      if ((int)uVar10 < (int)uVar15) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      pFVar2 = *(FScriptContainerElement **)
                (local_98.Components.Array.AllocatorInstance.Data + uVar16 * 8);
      if (((pFVar14 <= pFVar2) &&
          (pFVar2 < pFVar14 + (longlong)(this->FoundPolygroups).ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (this->FoundPolygroups).ArrayNum;
      if (iVar6 == (this->FoundPolygroups).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,&(this->FoundPolygroups).ArrayMax);
      }
      (this->FoundPolygroups).ArrayNum = iVar6 + 1;
      pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      iVar6 = *(int *)(pFVar2 + 8);
      _Src = *(void **)pFVar2;
      *(int *)(pFVar14 + 8) = iVar6;
      if (iVar6 == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar6,0,(ForAnyElementType *)pFVar14,iVar6,(int *)(pFVar14 + 0xc));
        memcpy(*(void **)pFVar14,_Src,(longlong)iVar6 << 2);
      }
      uVar15 = local_98.Components.Array._8_8_ & 0xffffffff;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar16 = uVar16 + 1;
      this_00 = local_70;
      param_1 = local_78;
    } while ((longlong)uVar16 < (longlong)uVar13);
  }
  if (this_00->bCopyToMesh != false) {
    CopyPolygroupsToMesh(this_00);
    uVar15 = local_98.Components.Array._8_8_ & 0xffffffff;
  }
  iVar6 = (this_00->FoundPolygroups).ArrayNum;
  uVar12 = (uint)uVar15;
  FVar9.Data = local_98.Components.Array.AllocatorInstance.Data;
  while (uVar12 != 0) {
    puVar7 = *(undefined8 **)FVar9.Data;
    if (puVar7 != (undefined8 *)0x0) {
      if ((void *)*puVar7 != (void *)0x0) {
        FMemory::Free((void *)*puVar7);
      }
      ::operator_delete(puVar7,0x10);
    }
    FVar9.Data = FVar9.Data + 8;
    uVar12 = (int)uVar15 - 1;
    uVar15 = (ulonglong)uVar12;
  }
  uVar11 = (ulonglong)local_98.Components.Array._8_8_ >> 0x20;
  local_98.Components.Array._8_8_ = local_98.Components.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_98.Components,0,&local_98.Components.Array.ArrayMax
              );
  }
  if (local_98.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Components.Array.AllocatorInstance.Data);
  }
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return 0 < iVar6;
}

// FindPolygroupsFromFaceNormals @ 14c8eac90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFaceNormals
          (FPolygroupsGenerator *this,double param_1,bool param_2,bool param_3,bool param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  double dVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FDynamicMesh3 *pFVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_148;
  uint local_138;
  FPolygroupsGenerator *local_130;
  uint local_128;
  FMeshNormals local_120;
  FDynamicMesh3 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  FClusterOptions local_f0;
  code *local_d8;
  undefined1 *local_d0;
  FIndex3i local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  local_130 = this;
  if ((param_2) || (param_3)) {
    GetSeamConstraintEdges(this,param_2,param_3,&local_b8);
  }
  if (param_4) {
    local_f0.SmallFaceAreaThreshold = __real_3e45798ee2308c3a;
    local_f0.TargetMinGroups = 0;
    local_f0.bApplyNormalToleranceToClusters = true;
    local_f0.NormalOneMinusCosTolerance = param_1;
    FaceNormalClustering::ComputeMeshPolyGroupsFromClusters
              (this->Mesh,&this->FoundPolygroups,&local_f0,&local_b8);
    goto LAB_14c8eb5bb;
  }
  dVar4 = __real_3ff0000000000000 - param_1;
  local_120.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Normals.ArrayNum = 0;
  local_120.Normals.ArrayMax = 0;
  local_120.Mesh = this->Mesh;
  FMeshNormals::Compute_Triangle(&local_120);
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&local_148,
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  pFVar15 = this->Mesh;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  uVar21 = (pFVar15->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar15->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_164 = 0;
  uVar20 = 0;
  if ((uVar21 == 0) ||
     (pFVar14 = (pFVar15->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar20 = 0,
     (ushort)(**(short **)pFVar14 - 1U) < 0xfffe)) {
LAB_14c8eae4e:
    uVar19 = (uint)uVar20;
  }
  else {
    uVar20 = 1;
    local_164 = 1;
    uVar19 = 1;
    if (1 < (int)uVar21) {
      do {
        uVar11 = (ulonglong)((uint)uVar20 & 0x1ff);
        lVar13 = *(longlong *)(pFVar14 + (uVar20 >> 9) * 8);
        if ((*(short *)(lVar13 + uVar11 * 2) != 0) && (*(short *)(lVar13 + uVar11 * 2) != -1))
        break;
        uVar19 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
      } while ((int)uVar19 < (int)uVar21);
      local_164 = (uint)uVar20;
      goto LAB_14c8eae4e;
    }
  }
  local_128 = uVar21;
  local_108 = pFVar15;
  if (uVar19 != uVar21) {
LAB_14c8eae60:
    do {
      uVar19 = (uint)uVar20;
      uVar16 = 0;
      uVar9 = uVar16;
      if ((int)uVar19 < local_148.ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      local_168 = uVar19;
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (local_148.AllocatorInstance.Data[(int)uVar19] != (FScriptContainerElement)0x1) {
        local_158 = 0;
        local_160.Data = (FScriptContainerElement *)0x0;
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_160,(int *)((longlong)&local_158 + 4));
        local_158 = CONCAT44(local_158._4_4_,iVar8 + 1);
        *(uint *)(local_160.Data + (longlong)iVar8 * 4) = local_168;
        lVar13 = (longlong)(int)local_168;
        uVar9 = uVar16;
        if ((int)local_168 < local_148.ArrayNum) {
          uVar9 = ~local_168 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        local_148.AllocatorInstance.Data[lVar13] = (FScriptContainerElement)0x1;
        bVar6 = local_170 < 0;
        local_170._0_4_ = uVar16;
        if ((bVar6) && (local_170._4_4_ != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_178,0,(int *)((longlong)&local_170 + 4));
        }
        if (((local_178.Data <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             local_178.Data + (longlong)(int)local_170._4_4_ * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        uVar9 = (uint)local_170;
        if ((uint)local_170 == local_170._4_4_) {
          uVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_178,(int *)((longlong)&local_170 + 4));
        }
        local_170 = CONCAT44(local_170._4_4_,uVar9 + 1);
        *(uint *)(local_178.Data + (longlong)(int)uVar9 * 4) = local_168;
        iVar8 = uVar9 + 1;
        while (0 < iVar8) {
          iVar1 = iVar8 + -1;
          uVar21 = *(uint *)(local_178.Data + (longlong)iVar1 * 4);
          iVar10 = (iVar8 - iVar1) + -1;
          local_138 = uVar21;
          if (iVar10 != 0) {
            memmove(local_178.Data + (longlong)iVar1 * 4,local_178.Data + (longlong)iVar1 * 4 + 4,
                    (longlong)iVar10 << 2);
            iVar8 = (uint)local_170;
          }
          local_170 = CONCAT44(local_170._4_4_,iVar8 + -1);
          FDynamicMesh3::GetTriNeighbourTris(this->Mesh,&local_c8,uVar21);
          lVar17 = 3;
          lVar18 = (longlong)(int)uVar21;
          lVar22 = 0;
          lVar13 = *(longlong *)
                    ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar21 >> 9) * 8);
          local_100 = *(undefined8 *)(lVar13 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
          local_f8 = *(undefined4 *)(lVar13 + 8 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
          do {
            if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
              FVar12 = (ForElementType<FSetElementId>)&local_b8.Hash;
              if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar12 = local_b8.Hash.SecondaryData;
              }
              for (iVar8 = *(int *)((longlong)FVar12 +
                                   (ulonglong)
                                   (local_b8.HashSize - 1U &
                                   *(uint *)((longlong)&local_100 + lVar22)) * 4); iVar8 != -1;
                  iVar8 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar8 * 0xc)) {
                if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar8 * 0xc) ==
                    *(uint *)((longlong)&local_100 + lVar22)) goto LAB_14c8eb3e2;
              }
            }
            pFVar14 = (FScriptContainerElement *)((longlong)&local_c8.field0_0x0 + lVar22);
            uVar19 = *(uint *)pFVar14;
            if (-1 < (int)uVar19) {
              uVar9 = 0;
              if ((int)uVar19 < local_148.ArrayNum) {
                uVar9 = ~uVar19 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              if (local_148.AllocatorInstance.Data[(int)uVar19] == (FScriptContainerElement)0x0) {
                uVar19 = 0;
                if ((int)uVar21 < local_120.Normals.ArrayNum) {
                  uVar19 = ~uVar21 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                FVar5.Data = local_120.Normals.AllocatorInstance.Data;
                uVar21 = *(uint *)pFVar14;
                lVar13 = (longlong)(int)uVar21;
                uVar19 = 0;
                if ((int)uVar21 < local_120.Normals.ArrayNum) {
                  uVar19 = ~uVar21 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar7 = (*pcVar3)();
                  return (bool)uVar7;
                }
                uVar21 = local_138;
                if (dVar4 < *(double *)
                             (local_120.Normals.AllocatorInstance.Data + lVar13 * 0x18 + 8) *
                            *(double *)(FVar5.Data + lVar18 * 0x18 + 8) +
                            *(double *)(FVar5.Data + lVar18 * 0x18) *
                            *(double *)(local_120.Normals.AllocatorInstance.Data + lVar13 * 0x18) +
                            *(double *)
                             (local_120.Normals.AllocatorInstance.Data + lVar13 * 0x18 + 0x10) *
                            *(double *)(FVar5.Data + lVar18 * 0x18 + 0x10)) {
                  if (((local_160.Data <= pFVar14) &&
                      (pFVar14 < local_160.Data + (longlong)local_158._4_4_ * 4)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    uVar7 = (*pcVar3)();
                    return (bool)uVar7;
                  }
                  iVar8 = (int)local_158;
                  if ((int)local_158 == local_158._4_4_) {
                    iVar8 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_160,(int *)((longlong)&local_158 + 4));
                  }
                  local_158 = CONCAT44(local_158._4_4_,iVar8 + 1);
                  *(uint *)(local_160.Data + (longlong)iVar8 * 4) = *(uint *)pFVar14;
                  if (((local_178.Data <= pFVar14) &&
                      (pFVar14 < local_178.Data + (longlong)(int)local_170._4_4_ * 4)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    uVar7 = (*pcVar3)();
                    return (bool)uVar7;
                  }
                  iVar8 = (uint)local_170;
                  if ((uint)local_170 == local_170._4_4_) {
                    iVar8 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_178,(int *)((longlong)&local_170 + 4));
                  }
                  local_170 = CONCAT44(local_170._4_4_,iVar8 + 1);
                  *(uint *)(local_178.Data + (longlong)iVar8 * 4) = *(uint *)pFVar14;
                  uVar21 = *(uint *)pFVar14;
                  uVar19 = 0;
                  if ((int)uVar21 < local_148.ArrayNum) {
                    uVar19 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    uVar7 = (*pcVar3)();
                    return (bool)uVar7;
                  }
                  local_148.AllocatorInstance.Data[(int)uVar21] = (FScriptContainerElement)0x1;
                  uVar21 = local_138;
                }
              }
            }
LAB_14c8eb3e2:
            lVar22 = lVar22 + 4;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar19 = local_164;
          this = local_130;
          uVar21 = local_128;
          iVar8 = (uint)local_170;
        }
        pFVar14 = (this->FoundPolygroups).AllocatorInstance.Data;
        if (((pFVar14 <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             pFVar14 + (longlong)(this->FoundPolygroups).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar8 = (this->FoundPolygroups).ArrayNum;
        piVar2 = &(this->FoundPolygroups).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->FoundPolygroups).AllocatorInstance,piVar2);
        }
        FVar5.Data = local_160.Data;
        pFVar14 = (this->FoundPolygroups).AllocatorInstance.Data;
        (this->FoundPolygroups).ArrayNum = iVar8 + 1;
        pFVar14 = pFVar14 + (longlong)iVar8 * 0x10;
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        lVar13 = (longlong)(int)local_158;
        *(int *)&pFVar14[8].field_0x0 = (int)local_158;
        if ((int)local_158 == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_158,0,(ForAnyElementType *)pFVar14,(int)local_158,
                     (int *)(pFVar14 + 0xc));
          memcpy(*(void **)&pFVar14->field_0x0,FVar5.Data,lVar13 << 2);
        }
        pFVar15 = local_108;
        this = local_130;
        if (local_160.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data);
          pFVar15 = local_108;
          this = local_130;
        }
      }
      local_164 = uVar19 + 1;
      uVar20 = (ulonglong)local_164;
      if ((int)local_164 < (int)uVar21) {
        do {
          uVar11 = (ulonglong)((uint)uVar20 & 0x1ff);
          lVar13 = *(longlong *)
                    ((pFVar15->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar20 >> 9) * 8);
          if ((*(short *)(lVar13 + uVar11 * 2) != 0) && (*(short *)(lVar13 + uVar11 * 2) != -1))
          goto LAB_14c8eae60;
          local_164 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)local_164;
        } while ((int)local_164 < (int)uVar21);
      }
    } while (local_164 != uVar21);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_120.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Normals.AllocatorInstance.Data);
  }
LAB_14c8eb5bb:
  if ((this->bApplyPostProcessing != false) && (1 < this->MinGroupSize)) {
    local_d8 = Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_31_>,bool,int,int>
               ::Call;
    local_d0 = local_150;
    OptimizePolygroups(this,(TFunctionRef<bool___cdecl(int,int)> *)&local_d8);
  }
  if (this->bCopyToMesh != false) {
    CopyPolygroupsToMesh(this);
  }
  iVar8 = (this->FoundPolygroups).ArrayNum;
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  return 0 < iVar8;
}

// FindPolygroupsFromFurthestPointSampling @ 14c8eb650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c8eb750) */
/* WARNING: Removing unreachable block (ram,0x00014c8eb764) */
/* WARNING: Removing unreachable block (ram,0x00014c8eb768) */
/* WARNING: Removing unreachable block (ram,0x00014c8eb81a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffd18 : 0x00014c8eb81e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling
          (FPolygroupsGenerator *this,int param_1,EWeightingType param_2,TVector<double> *param_3,
          FPolygroupSet *param_4)

{
  double dVar1;
  undefined8 uVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  code *pcVar5;
  double dVar6;
  FPolygroupsGenerator *this_00;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  int *piVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint *puVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint *puVar33;
  FScriptContainerElement *pFVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_6c8 [32];
  int local_678 [2];
  ForAnyElementType local_670;
  undefined8 local_668;
  undefined1 local_660;
  undefined1 local_65f [3];
  int local_65c;
  TArray<int,TSizedDefaultAllocator<32>_> local_658;
  TArray<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_648;
  TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_638;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_628;
  int local_618;
  int iStack_614;
  undefined8 uStack_610;
  TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_608;
  uint local_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  FPolygroupsGenerator *local_5e8;
  undefined8 local_5d8;
  int *piStack_5d0;
  int local_5c8;
  undefined4 uStack_5c4;
  FMeshConnectedComponents local_5b8;
  FMeshConnectedComponents local_5a0;
  FScriptContainerElement *local_588;
  int *piStack_580;
  undefined8 local_578;
  code *local_570;
  code **local_568;
  code *local_560;
  code **local_558;
  FPolygroupsGenerator *local_550;
  double dStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 *local_530;
  code *local_528 [2];
  code *local_518 [3];
  undefined8 local_500;
  FScriptContainerElement *local_4f8;
  undefined8 uStack_4f0;
  TFunction<bool___cdecl(int,int)> local_4e8;
  undefined1 local_4b8 [280];
  void *local_3a0;
  TDynamicVector<double,512> local_390;
  TDynamicVector<double,512> local_378;
  code *local_358 [2];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  longlong *plStack_330;
  undefined8 local_328;
  undefined8 uStack_300;
  code *local_2f8;
  undefined **local_2e8;
  code *pcStack_2e0;
  undefined8 uStack_2d0;
  code *local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [64];
  ForAnyElementType local_258;
  int local_250;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> local_240;
  ForAnyElementType local_220;
  ForAnyElementType local_210;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_200;
  void *local_1c0;
  undefined4 local_1b8;
  int local_1b0;
  undefined1 local_1a8 [128];
  longlong local_128;
  int local_120;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  int local_e0;
  ForAnyElementType local_d0;
  ForAnyElementType local_88;
  int local_80;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  iVar12 = (this->Mesh->VertexRefCounts).UsedCount;
  if (param_1 < iVar12) {
    iVar12 = param_1;
  }
  uVar28 = 0;
  local_358[0] = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>
                 ::Call;
  local_348 = 0x528cfdc8;
  uStack_344 = 1;
  uStack_340._0_4_ = 0x4c85c760;
  uStack_340._4_4_ = 1;
  plStack_330 = (longlong *)0x0;
  local_328 = 0;
  uStack_300 = 0;
  uStack_300 = 0;
  local_328 = 0;
  plStack_330 = (longlong *)0x0;
  uStack_344 = 1;
  local_348 = 0x528cfdc8;
  local_358[0] = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>
                 ::Call;
  uStack_340 = `UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::__l2::
               <lambda_1>::<lambda_invoker_cdecl>;
  local_5e8 = this;
  if (param_4 != (FPolygroupSet *)0x0) {
    local_358[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::__l5::<lambda_2>,bool,int,int>
                   ::Call;
    plStack_330 = (longlong *)0x0;
    local_348 = 0x528cfde8;
    uStack_344 = 1;
    uStack_340 = (code *)param_4;
    local_2f8 = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>::
                Call;
    local_2e8 = &___7__TFunction_OwnedObject_P6A_NHH_Z_0A__0A__Function_Private_Core_UE__6B_;
    pcStack_2e0 = `UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::
                  __l2::<lambda_1>::<lambda_invoker_cdecl>;
    uStack_2d0 = 0;
    (*(code *)PTR_Destroy_1528cfdd8)();
  }
  FMeshFaceDualGraph::FMeshFaceDualGraph((FMeshFaceDualGraph *)local_4b8);
  if (local_358[0] == (code *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  local_568 = local_358;
  local_570 = Core::Private::Function::
              TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
  FMeshFaceDualGraph::MakeFaceDualGraphForMesh
            (this->Mesh,(FMeshFaceDualGraph *)local_4b8,
             (TFunctionRef<bool___cdecl(int,int)> *)&local_570);
  TIncrementalMeshDijkstra<FMeshFaceDualGraph>::TIncrementalMeshDijkstra<FMeshFaceDualGraph>
            ((TIncrementalMeshDijkstra<FMeshFaceDualGraph> *)local_298,
             (FMeshFaceDualGraph *)local_4b8);
  local_5a0.Mesh = this->Mesh;
  local_670.Data = (FScriptContainerElement *)0x0;
  local_668 = 0;
  local_5a0.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a0.Components.Array.ArrayNum = 0;
  local_5a0.Components.Array.ArrayMax = 0;
  local_528[0] = local_358[0];
  local_500 = 0;
  if (local_358[0] != (code *)0x0) {
    plVar18 = (longlong *)&local_348;
    if (plStack_330 != (longlong *)0x0) {
      plVar18 = plStack_330;
    }
    (**(code **)*plVar18)(plVar18,local_528 + 2);
  }
  FMeshConnectedComponents::FindConnectedTriangles
            (&local_5a0,(TFunction<bool___cdecl(int,int)> *)local_528);
  uVar19 = (ulonglong)local_5a0.Components.Array.ArrayNum;
  uVar20 = uVar19;
  uVar31 = uVar28;
  if (0 < local_5a0.Components.Array.ArrayNum) {
    while( true ) {
      uVar27 = (uint)uVar31;
      uVar22 = 0;
      if ((int)uVar27 < (int)uVar20) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      puVar14 = *(undefined8 **)(local_5a0.Components.Array.AllocatorInstance.Data + uVar28 * 8);
      if (*(int *)(puVar14 + 1) < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      pFVar15 = (FScriptContainerElement *)*puVar14;
      if ((local_670.Data <= pFVar15) && (pFVar15 < local_670.Data + (longlong)local_668._4_4_ * 4))
      {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      iVar10 = (int)local_668;
      if ((int)local_668 == local_668._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_670,(int *)((longlong)&local_668 + 4));
      }
      uVar31 = (ulonglong)(uVar27 + 1);
      local_668 = CONCAT44(local_668._4_4_,iVar10 + 1);
      uVar28 = uVar28 + 1;
      *(int *)(local_670.Data + (longlong)iVar10 * 4) = *(int *)pFVar15;
      if ((longlong)uVar19 <= (longlong)uVar28) break;
      uVar20 = local_5a0.Components.Array._8_8_ & 0xffffffff;
    }
  }
  iVar10 = (int)local_668;
  uVar28 = (ulonglong)(int)local_668;
  local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_638.ArrayMax = 0;
  local_638.ArrayNum = 0;
  pFVar15 = local_670.Data + uVar28 * 4;
  FVar24.Data = local_670.Data;
  while( true ) {
    if ((int)uVar28 != iVar10) {
      local_660 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_660);
    }
    if (FVar24.Data == pFVar15) break;
    local_618 = *(int *)FVar24.Data;
    uStack_610 = 0;
    iStack_614 = local_618;
    if ((local_638.AllocatorInstance.Data <= (FScriptContainerElement *)&local_618) &&
       ((FScriptContainerElement *)&local_618 <
        local_638.AllocatorInstance.Data + (longlong)local_638.ArrayMax * 0x10)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    if (local_638.ArrayNum == local_638.ArrayMax) {
      local_638.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_638.AllocatorInstance,&local_638.ArrayMax);
    }
    FVar24.Data = FVar24.Data + 4;
    *(ulonglong *)(local_638.AllocatorInstance.Data + (longlong)local_638.ArrayNum * 0x10) =
         CONCAT44(iStack_614,local_618);
    *(undefined8 *)(local_638.AllocatorInstance.Data + (longlong)local_638.ArrayNum * 0x10 + 8) =
         uStack_610;
    uVar28 = local_668 & 0xffffffff;
    local_638.ArrayNum = local_638.ArrayNum + 1;
  }
  TIncrementalMeshDijkstra<FMeshFaceDualGraph>::AddSeedPoints
            ((TIncrementalMeshDijkstra<FMeshFaceDualGraph> *)local_298,&local_638);
  dVar6 = __real_7fefffffffffffff;
  iVar10 = (int)local_668;
  while (iVar10 < iVar12) {
    uVar20 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar28 = 0xffffffff;
    iVar11 = -1;
    iVar10 = (int)((FMeshFaceDualGraph *)local_298._0_8_)->_padding_ * 0x200 +
             *(int *)((longlong)&((FMeshFaceDualGraph *)local_298._0_8_)->_padding_ + 4);
    lVar29 = (longlong)iVar10;
    if (0 < iVar10) {
      lVar32 = 0;
      do {
        uVar22 = (uint)uVar20;
        if (((-1 < (int)uVar22) &&
            ((int)uVar22 <
             (int)*(longlong *)(local_298._0_8_ + 8) * 0x200 +
             *(int *)((longlong)(local_298._0_8_ + 8) + 4))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(local_298._0_8_ + 0x10) + (uVar20 >> 9) * 8) +
                               (ulonglong)(uVar22 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar27 = 0;
          if ((int)uVar22 < local_250) {
            uVar27 = ~uVar22 >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
          }
          pFVar15 = local_258.Data + lVar32;
          if ((pFVar15 != (FScriptContainerElement *)0x0) && (*(int *)(pFVar15 + 0x18) != local_1b0)
             ) {
            dVar1 = *(double *)(pFVar15 + 0x10);
            if ((dVar1 != dVar6) &&
               ((double)CONCAT44(uVar36,uVar35) <= dVar1 && dVar1 != (double)CONCAT44(uVar36,uVar35)
               )) {
              uVar28 = uVar20;
              uVar35 = SUB84(dVar1,0);
              uVar36 = (int)((ulonglong)dVar1 >> 0x20);
            }
          }
        }
        iVar11 = (int)uVar28;
        uVar20 = (ulonglong)(uVar22 + 1);
        lVar32 = lVar32 + 0x20;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    local_65c = iVar11;
    if (iVar11 < 0) break;
    local_5d8 = (FScriptContainerElement *)CONCAT44(iVar11,iVar11);
    pFVar15 = local_5d8;
    piStack_5d0 = (int *)0x0;
    local_608.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_608.ArrayNum = 1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_608.AllocatorInstance,1,&local_608.ArrayMax);
    local_4f8 = pFVar15;
    uStack_4f0 = 0;
    *(FScriptContainerElement **)local_608.AllocatorInstance.Data = pFVar15;
    *(undefined8 *)(local_608.AllocatorInstance.Data + 8) = 0;
    TIncrementalMeshDijkstra<FMeshFaceDualGraph>::AddSeedPoints
              ((TIncrementalMeshDijkstra<FMeshFaceDualGraph> *)local_298,&local_608);
    if (local_608.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.AllocatorInstance.Data);
    }
    if ((local_670.Data <= (FScriptContainerElement *)&local_65c) &&
       ((FScriptContainerElement *)&local_65c < local_670.Data + (longlong)local_668._4_4_ * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    iVar11 = (int)local_668;
    if ((int)local_668 == local_668._4_4_) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_670,(int *)((longlong)&local_668 + 4));
    }
    iVar10 = iVar11 + 1;
    local_668 = CONCAT44(local_668._4_4_,iVar10);
    *(int *)(local_670.Data + (longlong)iVar11 * 4) = local_65c;
  }
  TMeshDijkstra<FMeshFaceDualGraph>::TMeshDijkstra<FMeshFaceDualGraph>
            ((TMeshDijkstra<FMeshFaceDualGraph> *)local_1a8,(FMeshFaceDualGraph *)local_4b8);
  this_00 = local_5e8;
  if (param_2 == NormalDeviation) {
    dStack_548 = (param_3->field0_0x0)._s_0.X;
    uStack_540 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_530 = local_4b8;
    uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    uVar35 = (undefined4)uVar2;
    uVar36 = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_1a8[0x40] = true;
    local_550 = local_5e8;
    local_2c8 = (code *)0x0;
    puVar14 = FMemory::Malloc(0x30,8);
    uVar7 = local_1a8._88_8_;
    uVar2 = local_1a8._80_8_;
    *puVar14 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::`21'::<lambda_3>,1,1>
                ::_vftable_;
    puVar14[1] = local_550;
    puVar14[2] = dStack_548;
    *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_540;
    *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_540._4_4_;
    *(undefined4 *)(puVar14 + 4) = uVar35;
    *(undefined4 *)((longlong)puVar14 + 0x24) = uVar36;
    puVar14[5] = local_530;
    if (puVar14 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_2c8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFurthestPointSampling'::__l21::<lambda_3>,double,int,int,int,double>
                  ::Call;
    }
    plVar18 = (longlong *)CONCAT44(local_1a8._124_4_,local_1a8._120_4_);
    local_1a8._80_8_ = local_2c8;
    local_1a8._88_8_ = uStack_2c0;
    uStack_2a0 = SUB84(puVar14,0);
    uStack_29c = (undefined4)((ulonglong)puVar14 >> 0x20);
    local_1a8._112_4_ = (undefined4)local_2a8;
    local_1a8._116_4_ = local_2a8._4_4_;
    local_1a8._120_4_ = uStack_2a0;
    local_1a8._124_4_ = uStack_29c;
    local_2c8 = (code *)uVar2;
    uStack_2c0 = uVar7;
    uStack_538 = uVar35;
    uStack_534 = uVar36;
    local_1a8._96_4_ = (undefined4)local_2b8;
    local_1a8._100_4_ = local_2b8._4_4_;
    local_1a8._104_4_ = (undefined4)uStack_2b0;
    local_1a8._108_4_ = uStack_2b0._4_4_;
    if ((code *)uVar2 != (code *)0x0) {
      plVar16 = &local_2b8;
      if (plVar18 != (longlong *)0x0) {
        plVar16 = plVar18;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  puVar30 = (uint *)0x0;
  uVar22 = 0;
  local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.ArrayNum = 0;
  local_648.ArrayMax = 0;
  puVar25 = puVar30;
  puVar33 = puVar30;
  if (0 < (int)local_668) {
    do {
      uVar23 = (uint)puVar25;
      uVar27 = uVar22;
      if ((int)uVar23 < (int)local_668) {
        uVar27 = ~uVar23 >> 0x1f;
      }
      local_5f8 = uVar23;
      if (uVar27 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      uStack_5f4 = *(undefined4 *)((longlong)puVar33 + local_670.Data);
      uStack_5f0 = 0;
      if ((local_648.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5f8) &&
         ((FScriptContainerElement *)&local_5f8 <
          local_648.AllocatorInstance.Data + (longlong)local_648.ArrayMax * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      if (local_648.ArrayNum == local_648.ArrayMax) {
        local_648.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_648.AllocatorInstance,&local_648.ArrayMax);
      }
      lVar29 = (longlong)local_648.ArrayNum;
      local_648.ArrayNum = local_648.ArrayNum + 1;
      *(ulonglong *)(local_648.AllocatorInstance.Data + lVar29 * 0x10) =
           CONCAT44(uStack_5f4,local_5f8);
      *(undefined8 *)(local_648.AllocatorInstance.Data + lVar29 * 0x10 + 8) = uStack_5f0;
      puVar25 = (uint *)(ulonglong)(uVar23 + 1);
      puVar33 = puVar33 + 1;
    } while ((int)(uVar23 + 1) < (int)local_668);
  }
  TMeshDijkstra<FMeshFaceDualGraph>::ComputeToMaxDistance
            ((TMeshDijkstra<FMeshFaceDualGraph> *)local_1a8,&local_648,dVar6);
  local_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_628.ArrayNum = 0;
  local_628.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_628,(int)local_668,Default);
  pFVar3 = this_00->Mesh;
  local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_658.ArrayNum = 0;
  local_658.ArrayMax = 0;
  uVar27 = (pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed;
  puVar25 = puVar30;
  if ((uVar27 != 0) &&
     (pFVar15 = (pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar15 - 1U))) {
    puVar25 = (uint *)&DAT_00000001;
    uVar23 = 1;
    if ((int)uVar27 < 2) goto joined_r0x00014c8ec118;
    do {
      uVar28 = (ulonglong)((uint)puVar25 & 0x1ff);
      lVar29 = *(longlong *)(pFVar15 + ((ulonglong)puVar25 >> 9) * 8);
      if ((*(short *)(lVar29 + uVar28 * 2) != 0) && (*(short *)(lVar29 + uVar28 * 2) != -1)) break;
      uVar23 = (uint)puVar25 + 1;
      puVar25 = (uint *)(ulonglong)uVar23;
    } while ((int)uVar23 < (int)uVar27);
  }
  uVar23 = (uint)puVar25;
joined_r0x00014c8ec118:
  if (uVar23 == uVar27) {
    puVar25 = puVar30;
    if (0 < local_628.ArrayNum) {
      do {
        uVar23 = (uint)puVar30;
        uVar27 = uVar22;
        if ((int)uVar23 < local_628.ArrayNum) {
          uVar27 = ~uVar23 >> 0x1f;
        }
        if (uVar27 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        if (0 < *(int *)((longlong)(puVar25 + 2) + local_628.AllocatorInstance.Data)) {
          uVar27 = uVar22;
          if ((int)uVar23 < local_628.ArrayNum) {
            uVar27 = ~uVar23 >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
          }
          pFVar15 = (this_00->FoundPolygroups).AllocatorInstance.Data;
          pFVar26 = local_628.AllocatorInstance.Data + (longlong)puVar25;
          if ((pFVar15 <= pFVar26) &&
             (pFVar26 < pFVar15 + (longlong)(this_00->FoundPolygroups).ArrayMax * 0x10)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
          }
          iVar12 = (this_00->FoundPolygroups).ArrayNum;
          piVar17 = &(this_00->FoundPolygroups).ArrayMax;
          if (iVar12 == *piVar17) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this_00->FoundPolygroups).AllocatorInstance,piVar17);
          }
          lVar29 = (longlong)iVar12;
          (this_00->FoundPolygroups).ArrayNum = iVar12 + 1;
          pFVar15 = (this_00->FoundPolygroups).AllocatorInstance.Data;
          *(undefined8 *)(pFVar15 + lVar29 * 0x10) = 0;
          *(undefined8 *)(pFVar15 + lVar29 * 0x10) = *(undefined8 *)pFVar26;
          *(undefined8 *)pFVar26 = 0;
          *(undefined4 *)(pFVar15 + lVar29 * 0x10 + 8) = *(undefined4 *)(pFVar26 + 8);
          *(undefined4 *)(pFVar15 + lVar29 * 0x10 + 0xc) = *(undefined4 *)(pFVar26 + 0xc);
          *(undefined8 *)(pFVar26 + 8) = 0;
        }
        puVar30 = (uint *)(ulonglong)(uVar23 + 1);
        puVar25 = puVar25 + 4;
      } while ((int)(uVar23 + 1) < local_628.ArrayNum);
    }
    if (0 < local_658.ArrayNum) {
      local_5b8.Mesh = this_00->Mesh;
      local_5b8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5b8.Components.Array.ArrayNum = 0;
      local_5b8.Components.Array.ArrayMax = 0;
      local_4e8._0_8_ = 0;
      local_4e8._40_8_ = 0;
      FMeshConnectedComponents::FindConnectedTriangles(&local_5b8,&local_658,&local_4e8);
      piStack_5d0 = &local_5b8.Components.Array.ArrayNum;
      local_5d8 = local_5b8.Components.Array.AllocatorInstance.Data;
      local_5c8 = local_5b8.Components.Array.ArrayNum;
      local_578 = CONCAT44(uStack_5c4,local_5b8.Components.Array.ArrayNum);
      pFVar15 = local_5b8.Components.Array.AllocatorInstance.Data +
                (longlong)local_5b8.Components.Array.ArrayNum * 8;
      local_588 = local_5b8.Components.Array.AllocatorInstance.Data;
      piStack_580 = piStack_5d0;
      while( true ) {
        pFVar26 = local_588;
        if (*piStack_580 != (int)local_578) {
          local_65f[0] = 0;
          `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_65f);
        }
        if (pFVar26 == pFVar15) break;
        pFVar4 = *(FScriptContainerElement **)pFVar26;
        pFVar34 = (this_00->FoundPolygroups).AllocatorInstance.Data;
        if ((pFVar34 <= pFVar4) &&
           (pFVar4 < pFVar34 + (longlong)(this_00->FoundPolygroups).ArrayMax * 0x10)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        iVar12 = (this_00->FoundPolygroups).ArrayNum;
        piVar17 = &(this_00->FoundPolygroups).ArrayMax;
        if (iVar12 == *piVar17) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this_00->FoundPolygroups).AllocatorInstance,piVar17);
        }
        (this_00->FoundPolygroups).ArrayNum = iVar12 + 1;
        pFVar34 = (this_00->FoundPolygroups).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
        *(FScriptContainerElement **)&pFVar34->field_0x0 = (FScriptContainerElement *)0x0;
        iVar12 = *(int *)(pFVar4 + 8);
        _Src = *(void **)pFVar4;
        *(int *)&pFVar34[8].field_0x0 = iVar12;
        if (iVar12 == 0) {
          local_588 = pFVar26 + 8;
          *(int *)(pFVar34 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,0,(ForAnyElementType *)pFVar34,iVar12,(int *)(pFVar34 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar34->field_0x0,_Src,(longlong)iVar12 << 2);
          local_588 = pFVar26 + 8;
        }
      }
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_5b8.Components);
    }
    if (this_00->bApplyPostProcessing != false) {
      if (local_358[0] == (code *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBound(InFunc)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                           ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      if (1 < this_00->MinGroupSize) {
        local_560 = Core::Private::Function::
                    TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
        local_558 = local_358;
        OptimizePolygroups(this_00,(TFunctionRef<bool___cdecl(int,int)> *)&local_560);
      }
    }
    if (this_00->bCopyToMesh != false) {
      CopyPolygroupsToMesh(this_00);
    }
    iVar12 = (this_00->FoundPolygroups).ArrayNum;
    if (local_658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_628.AllocatorInstance.Data,
               local_628.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_628.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_628.AllocatorInstance.Data);
    }
    if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.AllocatorInstance.Data);
    }
    TMeshDijkstra<FMeshFaceDualGraph>::~TMeshDijkstra<FMeshFaceDualGraph>
              ((TMeshDijkstra<FMeshFaceDualGraph> *)local_1a8);
    if (local_638.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.AllocatorInstance.Data);
    }
    TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
              (&local_5a0.Components);
    if (local_670.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.Data);
    }
    local_1b8 = 0;
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_200);
    if (local_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data);
    }
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_240);
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
    if (local_298._16_8_ != 0) {
      plVar18 = (longlong *)(local_298 + 0x20);
      if ((longlong *)local_298._56_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_298._56_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    TDynamicVector<double,512>::Empty(&local_378,0);
    if (local_378.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<double,512>::Empty(&local_390,0);
    if (local_390.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<double,512>::Empty((TDynamicVector<double,512> *)(local_4b8 + 0x110),0);
    if (local_3a0 != (void *)0x0) {
      FMemory::Free(local_3a0);
    }
    FDynamicGraph::~FDynamicGraph((FDynamicGraph *)local_4b8);
    if (local_358[0] != (code *)0x0) {
      plVar18 = (longlong *)&local_348;
      if (plStack_330 != (longlong *)0x0) {
        plVar18 = plStack_330;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    return 0 < iVar12;
  }
  do {
    iVar12 = (int)puVar25;
    local_678[0] = iVar12;
    if (local_120 != local_f4) {
      puVar21 = local_1a8 + 0xb8;
      if (local_e8 != (undefined1 *)0x0) {
        puVar21 = local_e8;
      }
      iVar10 = *(int *)(puVar21 + ((ulonglong)(local_e0 - 1) & (ulonglong)puVar25) * 4);
      while (iVar10 != -1) {
        piVar17 = (int *)((longlong)iVar10 * 0x10 + local_128);
        if (*piVar17 == iVar12) {
          puVar25 = (uint *)(piVar17 + 1);
          if (piVar17 == (int *)0x0) {
            puVar25 = puVar30;
          }
          if (((puVar25 != (uint *)0x0) &&
              (lVar29 = (ulonglong)(*puVar25 & 0x1ff) * 0x20 +
                        *(longlong *)(local_d0.Data + (ulonglong)(*puVar25 >> 9) * 8), lVar29 != 0))
             && (*(char *)(lVar29 + 0x18) != '\0')) {
            uVar23 = *(uint *)(lVar29 + 8);
            uVar13 = uVar22;
            if ((int)uVar23 < local_80) {
              uVar13 = ~uVar23 >> 0x1f;
            }
            if (uVar13 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
            }
            uVar23 = *(uint *)(local_88.Data + (longlong)(int)uVar23 * 0x10);
            if (-1 < (int)uVar23) {
              uVar13 = uVar22;
              if ((int)uVar23 < local_628.ArrayNum) {
                uVar13 = ~uVar23 >> 0x1f;
              }
              if (uVar13 == 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
              }
              pFVar15 = local_628.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
              if ((*(FScriptContainerElement **)&pFVar15->field_0x0 <=
                   (FScriptContainerElement *)local_678) &&
                 ((FScriptContainerElement *)local_678 <
                  *(FScriptContainerElement **)&pFVar15->field_0x0 +
                  (longlong)*(int *)(pFVar15 + 0xc) * 4)) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar8) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
              }
              iVar10 = *(int *)(pFVar15 + 8);
              if (iVar10 == *(int *)(pFVar15 + 0xc)) {
                iVar10 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
              }
              *(int *)(pFVar15 + 8) = iVar10 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar10 * 4) =
                   local_678[0];
              goto LAB_14c8ec229;
            }
          }
          break;
        }
        iVar10 = piVar17[2];
      }
    }
    if ((local_658.AllocatorInstance.Data <= (FScriptContainerElement *)local_678) &&
       ((FScriptContainerElement *)local_678 <
        local_658.AllocatorInstance.Data + (longlong)local_658.ArrayMax * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    if (local_658.ArrayNum == local_658.ArrayMax) {
      local_658.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_658.AllocatorInstance,&local_658.ArrayMax);
    }
    lVar29 = (longlong)local_658.ArrayNum;
    local_658.ArrayNum = local_658.ArrayNum + 1;
    *(int *)(local_658.AllocatorInstance.Data + lVar29 * 4) = local_678[0];
LAB_14c8ec229:
    uVar23 = iVar12 + 1;
    puVar25 = (uint *)(ulonglong)uVar23;
    if ((int)uVar27 <= (int)uVar23) goto joined_r0x00014c8ec118;
    while( true ) {
      uVar28 = (ulonglong)((uint)puVar25 & 0x1ff);
      lVar29 = *(longlong *)
                ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                ((ulonglong)puVar25 >> 9) * 8);
      if ((*(short *)(lVar29 + uVar28 * 2) != 0) && (*(short *)(lVar29 + uVar28 * 2) != -1)) break;
      uVar23 = (uint)puVar25 + 1;
      puVar25 = (uint *)(ulonglong)uVar23;
      if ((int)uVar27 <= (int)uVar23) goto joined_r0x00014c8ec118;
    }
  } while( true );
}

// FindPolygroupsFromHardNormalSeams @ 14c8ec9a0

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromHardNormalSeams(FPolygroupsGenerator *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  bool bVar2;
  FDynamicMeshAttributeSet *pFVar3;
  code *local_38 [2];
  undefined **local_28;
  longlong local_20;
  undefined8 local_10;
  
  pFVar1 = (this->Mesh->AttributeSet).Ptr;
  pFVar3 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar1;
  }
  if ((0 < (pFVar3->NormalLayers).Array.ArrayNum) &&
     (local_20 = *(longlong *)(pFVar3->NormalLayers).Array.AllocatorInstance.Data, local_20 != 0)) {
    local_28 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromHardNormalSeams'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_10 = 0;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromHardNormalSeams'::__l2::<lambda_1>,bool,int,int>
                  ::Call;
    bVar2 = FindPolygroupsFromConnectedTris(this,(TFunction<bool___cdecl(int,int)> *)local_38);
    return bVar2;
  }
  return false;
}

// FindPolygroupsFromMaterialIDs @ 14c8eca20

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromMaterialIDs(FPolygroupsGenerator *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  bool bVar2;
  FDynamicMeshAttributeSet *pFVar3;
  code *local_38 [2];
  undefined **local_28;
  TDynamicMeshScalarTriangleAttribute<int> *local_20;
  undefined8 local_10;
  
  pFVar1 = (this->Mesh->AttributeSet).Ptr;
  pFVar3 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar1;
  }
  local_20 = (pFVar3->MaterialIDAttrib).Ptr;
  if (local_20 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    return false;
  }
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromMaterialIDs'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromMaterialIDs'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  bVar2 = FindPolygroupsFromConnectedTris(this,(TFunction<bool___cdecl(int,int)> *)local_38);
  return bVar2;
}

// FindPolygroupsFromUVIslands @ 14c8eca90

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromUVIslands
          (FPolygroupsGenerator *this,int param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  bool bVar2;
  FDynamicMeshAttributeSet *this_00;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res8 [4];
  code *local_38 [2];
  undefined **local_28;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_20;
  undefined8 local_10;
  
  pFVar1 = (this->Mesh->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  local_res8[0] = FDynamicMeshAttributeSet::GetUVLayer(this_00,param_1);
  if (local_res8[0] == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    return false;
  }
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromUVIslands'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res8;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromUVIslands'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  bVar2 = FindPolygroupsFromConnectedTris(this,(TFunction<bool___cdecl(int,int)> *)local_38);
  return bVar2;
}

// FindSourceMeshPolygonPolygroups @ 14c8ecc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c8efdcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups
          (FPolygroupsGenerator *this,bool param_1,bool param_2,double param_3,double param_4,
          int param_5)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FDynamicMesh3 *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  double dVar12;
  ForAnyElementType FVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  ForElementType<FSetElementId> FVar26;
  ForElementType<FSetElementId> FVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  FRefCountVector *pFVar32;
  ulong64 uVar33;
  ForAnyElementType FVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  FPolygroupsGenerator *pFVar38;
  int iVar39;
  longlong lVar40;
  ulonglong uVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  uint uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auStackY_5e8 [32];
  FScriptContainerElement local_598 [8];
  ForAnyElementType local_590;
  undefined8 local_588;
  ForAnyElementType local_580;
  int local_578;
  int iStack_574;
  ForAnyElementType local_570;
  int local_568;
  int iStack_564;
  undefined8 local_560;
  ForAnyElementType local_558;
  undefined8 local_550;
  undefined1 local_548;
  undefined1 local_547;
  undefined1 local_546;
  undefined1 local_545;
  undefined1 local_544;
  FIdentityFunctor local_543 [3];
  FIndexPriorityQueue local_540;
  FPolygroupsGenerator *local_508;
  FScriptContainerElement *local_500;
  uint local_4f8;
  ForAnyElementType local_4f0;
  undefined8 local_4e8;
  FIndex2i_u_0 local_4e0;
  double dStack_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  FScriptContainerElement *local_4c8;
  ForAnyElementType local_4c0;
  undefined8 local_4b8;
  uint local_4b0;
  FScriptContainerElement *local_4a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_490;
  int local_480;
  int local_47c;
  uint local_478 [2];
  uint local_470 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_468;
  TArray<double,TSizedDefaultAllocator<32>_> local_458;
  uint local_448;
  float fStack_444;
  uint local_438;
  float fStack_434;
  int local_428;
  int local_424;
  uint local_420;
  uint uStack_41c;
  undefined8 local_418;
  uint uStack_410;
  undefined4 uStack_40c;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  FIndex3i_u_0 local_3b8;
  int local_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  FPolygroupsGenerator *local_398;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_390;
  undefined8 local_388;
  undefined4 local_380;
  BaseIterator local_378;
  BaseIterator local_368;
  BaseIterator local_358;
  BaseIterator local_348;
  int local_338 [4];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  uint local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  IndexIterator local_268;
  IndexIterator local_258;
  IndexIterator local_248;
  IndexIterator local_238;
  FIndex3i local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  TVector<double> local_1b8;
  FMeshFaceSelection local_198;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_138;
  undefined1 local_e8 [40];
  longlong *local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  uVar28 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.ArrayNum = 0;
  local_468.ArrayMax = 0;
  local_548 = param_2;
  local_508 = this;
  local_4b0 = uVar28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_468,uVar28,Default);
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ArrayNum = 0;
  local_458.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_458,uVar28,Default);
  pFVar3 = this->Mesh;
  pFVar32 = &pFVar3->TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_378,pFVar32,0,
             (pFVar32->RefCounts).CurBlock * 0x200 +
             (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar39 = (pFVar32->RefCounts).CurBlock * 0x200 +
           (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_268,pFVar32,iVar39,iVar39);
  pFVar38 = this;
  if (local_378.Index != local_268._8_4_) {
    do {
      uVar35 = local_378.Index;
      pFVar3 = this->Mesh;
      uVar28 = 0;
      if ((int)uVar35 < local_458.ArrayNum) {
        uVar28 = ~uVar35 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar20 = (*pcVar5)();
        return (bool)uVar20;
      }
      pFVar43 = local_458.AllocatorInstance.Data + (longlong)(int)uVar35 * 8;
      uVar28 = 0;
      if ((int)uVar35 < local_468.ArrayNum) {
        uVar28 = ~uVar35 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar20 = (*pcVar5)();
        return (bool)uVar20;
      }
      FDynamicMesh3::GetTriInfo
                (pFVar3,uVar35,
                 (TVector<double> *)
                 (local_468.AllocatorInstance.Data + (longlong)(int)uVar35 * 0x18),(double *)pFVar43
                 ,&local_1b8);
      FRefCountVector::BaseIterator::goto_next(&local_378);
      pFVar38 = local_508;
      param_2 = (bool)local_548;
    } while (local_378.Index != local_268._8_4_);
  }
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  if ((param_1) || (param_2 != false)) {
    GetSeamConstraintEdges(pFVar38,param_1,param_2,&local_138);
  }
  uVar28 = local_4b0;
  uVar33 = (ulong64)local_4b0;
  local_558.Data = (FScriptContainerElement *)0x0;
  local_550 = 0;
  if ((int)local_4b0 < 1) {
    if ((int)local_4b0 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar33);
    }
  }
  else {
    iVar39 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x108,8,local_4b0,&local_558,(int *)&local_550,
                        (int *)((longlong)&local_550 + 4));
    DefaultConstructItems<TStaticArray<_UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups_::__l2::FTriPairQuad,3,4294967295>,int>
              (local_558.Data + (longlong)iVar39 * 0x108,uVar28);
  }
  pFVar3 = pFVar38->Mesh;
  pFVar32 = &pFVar3->TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_368,pFVar32,0,
             (pFVar32->RefCounts).CurBlock * 0x200 +
             (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar39 = (pFVar32->RefCounts).CurBlock * 0x200 +
           (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_258,pFVar32,iVar39,iVar39);
  auVar10 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_398 = pFVar38;
  if (local_368.Index != local_258._8_4_) {
    do {
      uVar28 = local_368.Index;
      lVar40 = *(longlong *)
                ((pFVar38->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                ((local_368._8_8_ & 0xffffffff) >> 9) * 8);
      local_388 = *(undefined8 *)(lVar40 + (ulonglong)(uVar28 & 0x1ff) * 0xc);
      local_380 = *(undefined4 *)(lVar40 + 8 + (ulonglong)(uVar28 & 0x1ff) * 0xc);
      local_4c8 = (FScriptContainerElement *)(longlong)(int)uVar28;
      FDynamicMesh3::GetTriNeighbourTris(pFVar38->Mesh,&local_228,uVar28);
      local_4a8 = (FScriptContainerElement *)0x0;
      local_4f8 = ~uVar28 >> 0x1f;
      lVar40 = (longlong)(int)uVar28 * 0x108;
      local_500 = (FScriptContainerElement *)&DAT_00000003;
      do {
        pFVar38 = local_508;
        uVar35 = *(uint *)(local_4a8 + (longlong)&local_228.field0_0x0);
        local_418 = 0xffffffffffffffff;
        local_408 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        uStack_410 = 0xffffffff;
        local_3f8 = auVar10;
        local_3e8 = auVar10;
        local_3d8 = auVar10;
        local_3c8 = 0xffffffff;
        auVar48 = auVar10;
        if (-1 < (int)uVar35) {
          uVar21 = *(uint *)((longlong)&local_388 + (longlong)local_4a8);
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            FVar26 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_138.Hash.SecondaryData;
            }
            for (iVar39 = *(int *)((longlong)FVar26 +
                                  (ulonglong)(local_138.HashSize - 1U & uVar21) * 4); iVar39 != -1;
                iVar39 = *(int *)(local_138.Elements._0_8_ + 4 + (longlong)iVar39 * 0xc)) {
              if (*(uint *)(local_138.Elements._0_8_ + (longlong)iVar39 * 0xc) == uVar21)
              goto LAB_14c8ed4b2;
            }
          }
          local_418 = CONCAT44(uVar35,uVar28);
          uVar4 = *(undefined8 *)
                   (*(longlong *)
                     ((local_508->Mesh->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          local_560 = uVar4;
          local_420 = uVar28;
          uStack_41c = uVar35;
          uStack_410 = uVar21;
          FDynamicMesh3::GetEdgeOpposingV(local_508->Mesh,(int)&local_428);
          iVar37 = local_424;
          iVar22 = local_428;
          iVar39 = local_560._4_4_;
          iStack_3a0 = local_560._4_4_;
          iStack_39c = local_424;
          iVar29 = (int)uVar4;
          iStack_3a4 = local_428;
          auVar48._4_4_ = local_428;
          auVar48._0_4_ = iVar29;
          auVar48._8_4_ = local_560._4_4_;
          auVar48._12_4_ = local_424;
          local_3f8 = auVar48;
          local_3a8 = iVar29;
          dVar45 = FDynamicMesh3::GetTriArea(pFVar38->Mesh,uVar28);
          local_408._0_8_ = dVar45;
          dVar45 = FDynamicMesh3::GetTriArea(pFVar38->Mesh,uVar35);
          local_408._8_8_ = dVar45;
          uVar21 = FDynamicMesh3::FindEdge(pFVar38->Mesh,iVar29,iVar22);
          local_3e8._0_4_ = uVar21;
          uVar41 = *(ulonglong *)
                    (*(longlong *)
                      ((pFVar38->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar21 >> 9) * 8) + 8 + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          uVar21 = (uint)(uVar41 >> 0x20);
          local_560 = uVar41;
          if (uVar21 != 0xffffffff) {
            uVar30 = (uint)uVar41;
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if ((uVar21 == uVar28) || (uVar21 == uVar35)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            if ((!(bool)(bVar9 ^ bVar8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(IsA ^ IsB) == 1",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                                    ,0xd3,L""), bVar19)) {
              pcVar5 = (code *)swi(3);
              uVar20 = (*pcVar5)();
              return (bool)uVar20;
            }
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              uVar41 = local_560 >> 0x20;
            }
            local_3d8._0_4_ = (int)uVar41;
          }
          pFVar38 = local_508;
          uVar21 = FDynamicMesh3::FindEdge(local_508->Mesh,iVar22,iVar39);
          local_3e8._4_4_ = uVar21;
          uVar41 = *(ulonglong *)
                    (*(longlong *)
                      ((pFVar38->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar21 >> 9) * 8) + 8 + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          uVar21 = (uint)(uVar41 >> 0x20);
          local_560 = uVar41;
          if (uVar21 != 0xffffffff) {
            uVar30 = (uint)uVar41;
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if ((uVar21 == uVar28) || (uVar21 == uVar35)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            if ((!(bool)(bVar9 ^ bVar8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(IsA ^ IsB) == 1",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                                    ,0xd3,L""), bVar19)) {
              pcVar5 = (code *)swi(3);
              uVar20 = (*pcVar5)();
              return (bool)uVar20;
            }
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              uVar41 = local_560 >> 0x20;
            }
            local_3d8._4_4_ = (int)uVar41;
          }
          pFVar38 = local_508;
          uVar21 = FDynamicMesh3::FindEdge(local_508->Mesh,iVar39,iVar37);
          local_3e8._8_4_ = uVar21;
          uVar41 = *(ulonglong *)
                    (*(longlong *)
                      ((pFVar38->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar21 >> 9) * 8) + 8 + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          uVar21 = (uint)(uVar41 >> 0x20);
          local_560 = uVar41;
          if (uVar21 != 0xffffffff) {
            uVar30 = (uint)uVar41;
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if ((uVar21 == uVar28) || (uVar21 == uVar35)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            if ((!(bool)(bVar9 ^ bVar8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(IsA ^ IsB) == 1",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                                    ,0xd3,L""), bVar19)) {
              pcVar5 = (code *)swi(3);
              uVar20 = (*pcVar5)();
              return (bool)uVar20;
            }
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              uVar41 = local_560 >> 0x20;
            }
            local_3d8._8_4_ = (int)uVar41;
          }
          uVar21 = FDynamicMesh3::FindEdge(pFVar38->Mesh,iVar37,iVar29);
          local_3e8._12_4_ = uVar21;
          uVar41 = *(ulonglong *)
                    (*(longlong *)
                      ((pFVar38->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar21 >> 9) * 8) + 8 + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          uVar21 = (uint)(uVar41 >> 0x20);
          local_560 = uVar41;
          if (uVar21 != 0xffffffff) {
            uVar30 = (uint)uVar41;
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if ((uVar21 == uVar28) || (uVar21 == uVar35)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            if (!(bool)(bVar9 ^ bVar8)) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(IsA ^ IsB) == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                                  ,0xd3,L"");
              if (bVar19) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
            }
            if ((uVar30 == uVar28) || (uVar30 == uVar35)) {
              uVar41 = local_560 >> 0x20;
            }
            local_3d8._12_4_ = (int)uVar41;
          }
        }
LAB_14c8ed4b2:
        uVar11 = local_418;
        pFVar1 = local_4a8;
        pFVar43 = local_500;
        uVar4 = CONCAT44(uStack_40c,uStack_410);
        uVar6 = local_408._0_8_;
        uVar14 = local_408._8_8_;
        uVar35 = 0;
        if ((int)uVar28 < (int)local_550) {
          uVar35 = local_4f8;
        }
        uVar15 = local_3e8._0_8_;
        uVar16 = local_3e8._8_8_;
        uVar17 = local_3d8._0_8_;
        uVar18 = local_3d8._8_8_;
        uVar7 = CONCAT44(uStack_3c4,local_3c8);
        if ((uVar35 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        local_4a8 = pFVar1 + 4;
        *(undefined8 *)(local_558.Data + lVar40) = uVar11;
        *(undefined8 *)(local_558.Data + lVar40 + 8) = uVar4;
        *(undefined8 *)(local_558.Data + lVar40 + 0x10) = uVar6;
        *(undefined8 *)(local_558.Data + lVar40 + 0x10 + 8) = uVar14;
        *(undefined1 (*) [16])(local_558.Data + lVar40 + 0x20) = auVar48;
        *(undefined8 *)(local_558.Data + lVar40 + 0x30) = uVar15;
        *(undefined8 *)(local_558.Data + lVar40 + 0x30 + 8) = uVar16;
        *(undefined8 *)(local_558.Data + lVar40 + 0x40) = uVar17;
        *(undefined8 *)(local_558.Data + lVar40 + 0x40 + 8) = uVar18;
        *(undefined8 *)(local_558.Data + lVar40 + 0x50) = uVar7;
        lVar40 = lVar40 + 0x58;
        local_500 = pFVar43 + -1;
      } while (local_500 != (FScriptContainerElement *)0x0);
      FRefCountVector::BaseIterator::goto_next(&local_368);
      pFVar38 = local_508;
    } while (local_368.Index != local_258._8_4_);
    uVar33 = (ulong64)local_4b0;
    local_398 = local_508;
  }
  pFVar3 = local_398->Mesh;
  local_390 = &local_468;
  pFVar32 = &pFVar3->TriangleRefCounts;
  local_590.Data = (FScriptContainerElement *)0x0;
  local_588 = 0;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_358,pFVar32,0,
             (pFVar32->RefCounts).CurBlock * 0x200 +
             (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed);
  iVar39 = (pFVar32->RefCounts).CurBlock * 0x200 +
           (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_248,pFVar32,iVar39,iVar39);
  if (local_358.Index != local_248._8_4_) {
    iVar39 = (int)local_550;
    do {
      uVar21 = local_358.Index;
      uVar35 = ~uVar21 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar21 < iVar39) {
        uVar28 = uVar35;
      }
      if (uVar28 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        iVar39 = (int)local_550;
      }
      lVar40 = (longlong)(int)uVar21 * 0x108;
      if ((-1 < *(int *)(local_558.Data + lVar40)) && (-1 < *(int *)(local_558.Data + lVar40 + 4)))
      {
        local_4e0._s_0.B = 0;
        uVar28 = 0;
        if ((int)uVar21 < iVar39) {
          uVar28 = uVar35;
        }
        local_4e0._s_0.A = uVar21;
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        dStack_4d8 = `UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups'::__l2::
                     <lambda_1>::operator()(&local_398,(FTriPairQuad *)(local_558.Data + lVar40));
        local_4d0 = 0;
        if (((local_590.Data <= &local_4e0) &&
            (&local_4e0 < (FIndex2i_u_0 *)(local_590.Data + (longlong)local_588._4_4_ * 0x18))) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        iVar39 = (int)local_588;
        if ((int)local_588 == local_588._4_4_) {
          iVar39 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_590,(int *)((longlong)&local_588 + 4));
        }
        local_588 = CONCAT44(local_588._4_4_,iVar39 + 1);
        *(ulonglong *)&local_590.Data[(longlong)iVar39 * 0x18].field_0x0 =
             CONCAT44(local_4e0._s_0.B,local_4e0._s_0.A);
        *(double *)(local_590.Data + (longlong)iVar39 * 0x18 + 8) = dStack_4d8;
        *(ulonglong *)(local_590.Data + (longlong)iVar39 * 0x18 + 0x10) =
             CONCAT44(uStack_4cc,local_4d0);
        iVar39 = (int)local_550;
      }
      uVar28 = 0;
      if ((int)uVar21 < iVar39) {
        uVar28 = uVar35;
      }
      if (uVar28 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        iVar39 = (int)local_550;
      }
      if ((-1 < *(int *)(local_558.Data + lVar40 + 0x58)) &&
         (-1 < *(int *)(local_558.Data + lVar40 + 0x5c))) {
        local_4e0._s_0.B = 1;
        uVar28 = 0;
        if ((int)uVar21 < iVar39) {
          uVar28 = uVar35;
        }
        local_4e0._0_4_ = uVar21;
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        dStack_4d8 = `UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups'::__l2::
                     <lambda_1>::operator()
                               (&local_398,(FTriPairQuad *)(local_558.Data + lVar40 + 0x58));
        local_4d0 = 0;
        if (((local_590.Data <= &local_4e0) &&
            (&local_4e0 < (FIndex2i_u_0 *)(local_590.Data + (longlong)local_588._4_4_ * 0x18))) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        iVar39 = (int)local_588;
        if ((int)local_588 == local_588._4_4_) {
          iVar39 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_590,(int *)((longlong)&local_588 + 4));
        }
        local_588 = CONCAT44(local_588._4_4_,iVar39 + 1);
        *(ulonglong *)&local_590.Data[(longlong)iVar39 * 0x18].field_0x0 =
             CONCAT44(local_4e0._s_0.B,local_4e0._s_0.A);
        *(double *)(local_590.Data + (longlong)iVar39 * 0x18 + 8) = dStack_4d8;
        *(ulonglong *)(local_590.Data + (longlong)iVar39 * 0x18 + 0x10) =
             CONCAT44(uStack_4cc,local_4d0);
        iVar39 = (int)local_550;
      }
      uVar28 = 0;
      if ((int)uVar21 < iVar39) {
        uVar28 = uVar35;
      }
      if (uVar28 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        iVar39 = (int)local_550;
      }
      if ((-1 < *(int *)(local_558.Data + lVar40 + 0xb0)) &&
         (-1 < *(int *)(local_558.Data + lVar40 + 0xb4))) {
        local_4e0._s_0.B = 2;
        uVar28 = 0;
        if ((int)uVar21 < iVar39) {
          uVar28 = uVar35;
        }
        local_4e0._0_4_ = uVar21;
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        dStack_4d8 = `UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups'::__l2::
                     <lambda_1>::operator()
                               (&local_398,(FTriPairQuad *)(local_558.Data + lVar40 + 0xb0));
        local_4d0 = 0;
        if (((local_590.Data <= &local_4e0) &&
            (&local_4e0 < (FIndex2i_u_0 *)(local_590.Data + (longlong)local_588._4_4_ * 0x18))) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        iVar39 = (int)local_588;
        if ((int)local_588 == local_588._4_4_) {
          iVar39 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_590,(int *)((longlong)&local_588 + 4));
        }
        local_588 = CONCAT44(local_588._4_4_,iVar39 + 1);
        *(ulonglong *)&local_590.Data[(longlong)iVar39 * 0x18].field_0x0 =
             CONCAT44(local_4e0._s_0.B,local_4e0._s_0.A);
        *(double *)(local_590.Data + (longlong)iVar39 * 0x18 + 8) = dStack_4d8;
        *(ulonglong *)(local_590.Data + (longlong)iVar39 * 0x18 + 0x10) =
             CONCAT44(uStack_4cc,local_4d0);
        iVar39 = (int)local_550;
      }
      FRefCountVector::BaseIterator::goto_next(&local_358);
    } while (local_358.Index != local_248._8_4_);
  }
  AlgoImpl::
  IntroSortInternal<_UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups_::__l2::FQuadWithMetric,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups_::__l2::FQuadWithMetric,_UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups_::__l2::<lambda_3>_>_>
            ((FQuadWithMetric *)local_590.Data,(int)local_588,local_543[0],(<lambda_3> *)local_543);
  dVar12 = __real_3fe279a74590331d;
  dVar45 = __real_3ff199999999999a;
  uVar11 = _UNK_150631d98;
  uVar4 = ___xmm_00000000ffffffff0000008000000000;
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_570.Data = (FScriptContainerElement *)0x0;
  local_568 = 0;
  iStack_564 = 0;
  local_4f0.Data = (FScriptContainerElement *)0x0;
  local_4e8 = 0;
  local_580.Data = (FScriptContainerElement *)0x0;
  local_578 = 0;
  iStack_574 = 0;
  uVar28 = 0;
  do {
    pFVar38 = local_508;
    lVar40 = 0;
    uVar30 = (uint)((ulonglong)param_4 >> 0x20);
    local_4f8 = uVar28 + 1;
    if (param_5 <= (int)uVar28) {
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_508->FoundPolygroups,local_568,Default);
      uVar28 = 0;
      lVar23 = lVar40;
      if (0 < local_568) {
        do {
          uVar35 = 0;
          if ((int)uVar28 < local_568) {
            uVar35 = ~uVar28 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          local_218 = *(undefined8 *)(local_570.Data + lVar40);
          uStack_210 = *(undefined8 *)(local_570.Data + lVar40 + 8);
          local_208 = *(undefined8 *)(local_570.Data + lVar40 + 0x10);
          uStack_200 = *(undefined8 *)(local_570.Data + lVar40 + 0x10 + 8);
          local_1f8 = *(undefined8 *)(local_570.Data + lVar40 + 0x20);
          uStack_1f0 = *(undefined8 *)(local_570.Data + lVar40 + 0x20 + 8);
          local_1e8 = *(undefined8 *)(local_570.Data + lVar40 + 0x30);
          uStack_1e0 = *(undefined8 *)(local_570.Data + lVar40 + 0x30 + 8);
          local_1d8 = *(undefined8 *)(local_570.Data + lVar40 + 0x40);
          uStack_1d0 = *(undefined8 *)(local_570.Data + lVar40 + 0x40 + 8);
          local_1c8 = *(undefined8 *)(local_570.Data + lVar40 + 0x50);
          uVar35 = 0;
          if ((int)uVar28 < (pFVar38->FoundPolygroups).ArrayNum) {
            uVar35 = ~uVar28 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          pFVar43 = (pFVar38->FoundPolygroups).AllocatorInstance.Data + lVar23;
          if (((*(FScriptContainerElement **)&pFVar43->field_0x0 <=
                (FScriptContainerElement *)&local_218) &&
              ((FScriptContainerElement *)&local_218 <
               *(FScriptContainerElement **)&pFVar43->field_0x0 +
               (longlong)*(int *)(pFVar43 + 0xc) * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          iVar39 = *(int *)&pFVar43[8].field_0x0;
          if (iVar39 == *(int *)(pFVar43 + 0xc)) {
            iVar39 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar43,(int *)(pFVar43 + 0xc));
          }
          *(int *)&pFVar43[8].field_0x0 = iVar39 + 1;
          *(undefined4 *)(*(FScriptContainerElement **)&pFVar43->field_0x0 + (longlong)iVar39 * 4) =
               (undefined4)local_218;
          uVar35 = 0;
          if ((int)uVar28 < (pFVar38->FoundPolygroups).ArrayNum) {
            uVar35 = ~uVar28 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          pFVar43 = (pFVar38->FoundPolygroups).AllocatorInstance.Data + lVar23;
          if (((*(FScriptContainerElement **)&pFVar43->field_0x0 <=
                (FScriptContainerElement *)((longlong)&local_218 + 4U)) &&
              ((FScriptContainerElement *)((longlong)&local_218 + 4U) <
               *(FScriptContainerElement **)&pFVar43->field_0x0 +
               (longlong)*(int *)(pFVar43 + 0xc) * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          iVar39 = *(int *)&pFVar43[8].field_0x0;
          if (iVar39 == *(int *)(pFVar43 + 0xc)) {
            iVar39 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar43,(int *)(pFVar43 + 0xc));
          }
          *(int *)&pFVar43[8].field_0x0 = iVar39 + 1;
          uVar28 = uVar28 + 1;
          lVar40 = lVar40 + 0x58;
          *(undefined4 *)(*(FScriptContainerElement **)&pFVar43->field_0x0 + (longlong)iVar39 * 4) =
               local_218._4_4_;
          lVar23 = lVar23 + 0x10;
        } while ((int)uVar28 < local_568);
      }
      pFVar3 = pFVar38->Mesh;
      pFVar32 = &pFVar3->TriangleRefCounts;
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_348,pFVar32,0,
                 (pFVar32->RefCounts).CurBlock * 0x200 +
                 (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar39 = (pFVar32->RefCounts).CurBlock * 0x200 +
               (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator(&local_238,pFVar32,iVar39,iVar39);
      uVar28 = 0;
      if (local_348.Index != local_238._8_4_) {
        do {
          uVar21 = local_348.Index;
          uVar35 = uVar28;
          if ((int)uVar21 < local_578) {
            uVar35 = ~uVar21 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          if (local_580.Data[(int)uVar21] == (FScriptContainerElement)0x0) {
            local_4b8 = 0;
            local_4c0.Data = (FScriptContainerElement *)0x0;
            iVar39 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_4c0,(int *)((longlong)&local_4b8 + 4));
            local_4b8 = CONCAT44(local_4b8._4_4_,iVar39 + 1);
            *(uint *)(local_4c0.Data + (longlong)iVar39 * 4) = uVar21;
            pFVar43 = (pFVar38->FoundPolygroups).AllocatorInstance.Data;
            if (((pFVar43 <= (FScriptContainerElement *)&local_4c0) &&
                ((FScriptContainerElement *)&local_4c0 <
                 pFVar43 + (longlong)(pFVar38->FoundPolygroups).ArrayMax * 0x10)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar5 = (code *)swi(3);
              uVar20 = (*pcVar5)();
              return (bool)uVar20;
            }
            iVar39 = (pFVar38->FoundPolygroups).ArrayNum;
            piVar2 = &(pFVar38->FoundPolygroups).ArrayMax;
            if (iVar39 == *piVar2) {
              iVar39 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pFVar38->FoundPolygroups).AllocatorInstance,piVar2);
            }
            lVar40 = (longlong)iVar39;
            (pFVar38->FoundPolygroups).ArrayNum = iVar39 + 1;
            pFVar43 = (pFVar38->FoundPolygroups).AllocatorInstance.Data;
            *(undefined8 *)(pFVar43 + lVar40 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar43 + lVar40 * 0x10) = local_4c0.Data;
            *(undefined4 *)(pFVar43 + lVar40 * 0x10 + 8) = (undefined4)local_4b8;
            *(undefined4 *)(pFVar43 + lVar40 * 0x10 + 0xc) = local_4b8._4_4_;
            local_4b8 = 0;
            local_4c0.Data = (FScriptContainerElement *)0x0;
          }
          FRefCountVector::BaseIterator::goto_next(&local_348);
        } while (local_348.Index != local_238._8_4_);
      }
      if (pFVar38->bCopyToMesh != false) {
        CopyPolygroupsToMesh(pFVar38);
      }
      bVar19 = 0 < local_568;
      if (local_580.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data);
      }
      if (local_4f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.Data);
      }
      if (local_570.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_570.Data);
      }
      if ((FIndex2i_u_0 *)local_590.Data != (FIndex2i_u_0 *)0x0) {
        FMemory::Free(local_590.Data);
      }
      if (local_558.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_558.Data);
      }
      local_138.HashSize = uVar28;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.AllocatorInstance.Data);
      }
      if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.AllocatorInstance.Data);
      }
      return bVar19;
    }
    local_598[0] = (FScriptContainerElement)0x0;
    iVar39 = (int)uVar33;
    if (iVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar33);
    }
    local_578 = 0;
    if (iStack_574 != iVar39) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar39,&local_580,0,&iStack_574);
    }
    if (0 < iVar39) {
      do {
        if (((local_580.Data <= local_598) && (local_598 < local_580.Data + iStack_574)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        if (local_578 == iStack_574) {
          local_578 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,&local_580,&iStack_574);
        }
        lVar23 = (longlong)local_578;
        local_578 = local_578 + 1;
        local_580.Data[lVar23] = local_598[0];
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
    uVar28 = 0;
    if (0 < (int)local_588) {
      do {
        uVar42 = 0;
        if ((int)uVar28 < (int)local_588) {
          uVar42 = ~uVar28 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        uVar41 = *(ulonglong *)(local_590.Data + lVar40);
        uVar44 = (uint)uVar41;
        uVar42 = 0;
        if ((int)uVar44 < (int)local_550) {
          uVar42 = ~uVar44 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        *(uint *)(local_558.Data + ((longlong)(int)uVar44 * 3 + (uVar41 >> 0x20)) * 0x58 + 0x50) =
             uVar28;
        uVar42 = 0;
        if ((int)uVar28 < (int)local_588) {
          uVar42 = ~uVar28 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        uVar28 = uVar28 + 1;
        *(undefined4 *)(local_590.Data + lVar40 + 0x10) = 0;
        lVar40 = lVar40 + 0x18;
      } while ((int)uVar28 < (int)local_588);
    }
    local_568 = 0;
    if (iStack_564 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&local_570,0,&iStack_564);
    }
    iVar39 = (int)local_4e8;
    if (0 < (int)local_4e8) {
      pFVar43 = local_4f0.Data + (longlong)(int)local_4e8 * 0x58;
      FVar34.Data = local_4f0.Data;
      while( true ) {
        if ((int)local_4e8 != iVar39) {
          local_547 = 0;
          `TCheckedPointerIterator<`UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups'::__l2::FTriPairQuad,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_547);
        }
        lVar40 = local_4e8;
        if (FVar34.Data == pFVar43) break;
        local_328 = *(undefined8 *)FVar34.Data;
        uStack_320 = *(undefined8 *)(FVar34.Data + 8);
        local_318 = *(undefined8 *)(FVar34.Data + 0x10);
        uStack_310 = *(undefined8 *)(FVar34.Data + 0x18);
        local_308 = *(undefined8 *)(FVar34.Data + 0x20);
        uStack_300 = *(undefined8 *)(FVar34.Data + 0x28);
        local_2f8 = *(undefined8 *)(FVar34.Data + 0x30);
        uStack_2f0 = *(undefined8 *)(FVar34.Data + 0x38);
        local_2d8 = *(undefined8 *)(FVar34.Data + 0x50);
        local_2e8 = *(undefined8 *)(FVar34.Data + 0x40);
        uStack_2e0 = *(undefined8 *)(FVar34.Data + 0x48);
        if (((local_570.Data <= (FScriptContainerElement *)&local_328) &&
            ((FScriptContainerElement *)&local_328 < local_570.Data + (longlong)iStack_564 * 0x58))
           && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        if (local_568 == iStack_564) {
          local_568 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x858,&local_570,&iStack_564);
        }
        lVar40 = (longlong)local_568;
        local_568 = local_568 + 1;
        lVar40 = lVar40 * 0x58;
        *(undefined8 *)(local_570.Data + lVar40) = local_328;
        *(undefined8 *)(local_570.Data + lVar40 + 8) = uStack_320;
        *(undefined8 *)(local_570.Data + lVar40 + 0x10) = local_318;
        *(undefined8 *)(local_570.Data + lVar40 + 0x10 + 8) = uStack_310;
        *(undefined8 *)(local_570.Data + lVar40 + 0x20) = local_308;
        *(undefined8 *)(local_570.Data + lVar40 + 0x20 + 8) = uStack_300;
        *(undefined8 *)(local_570.Data + lVar40 + 0x30) = local_2f8;
        *(undefined8 *)(local_570.Data + lVar40 + 0x30 + 8) = uStack_2f0;
        *(undefined8 *)(local_570.Data + lVar40 + 0x40) = local_2e8;
        *(undefined8 *)(local_570.Data + lVar40 + 0x40 + 8) = uStack_2e0;
        *(undefined8 *)(local_570.Data + lVar40 + 0x50) = local_2d8;
        lVar40 = (longlong)(int)(uint)local_328;
        uVar28 = 0;
        if ((int)(uint)local_328 < local_578) {
          uVar28 = ~(uint)local_328 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        local_580.Data[lVar40] = (FScriptContainerElement)0x1;
        lVar40 = (longlong)(int)local_328._4_4_;
        uVar28 = 0;
        if ((int)local_328._4_4_ < local_578) {
          uVar28 = ~local_328._4_4_ >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        FVar34.Data = FVar34.Data + 0x58;
        local_580.Data[lVar40] = (FScriptContainerElement)0x1;
      }
      uVar28 = local_4e8._4_4_;
      uVar41 = 0;
      local_4e8 = (ulonglong)local_4e8._4_4_ << 0x20;
      if ((lVar40 < 0) && (uVar28 != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&local_4f0,0,(int *)((longlong)&local_4e8 + 4));
      }
      local_560 = 0;
      uVar24 = uVar41;
      if (0 < (int)local_588) {
        do {
          uVar44 = (uint)uVar24;
          uVar42 = ~uVar44 >> 0x1f;
          uVar28 = 0;
          if ((int)uVar44 < (int)local_588) {
            uVar28 = uVar42;
          }
          if ((uVar28 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          uVar24 = *(ulonglong *)(local_590.Data + uVar41);
          uVar31 = (uint)uVar24;
          uVar28 = 0;
          if ((int)uVar31 < (int)local_550) {
            uVar28 = ~uVar31 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          lVar40 = 4;
          pFVar43 = local_558.Data + ((longlong)(int)uVar31 * 3 + (uVar24 >> 0x20)) * 0x58 + 0x40;
          do {
            uVar28 = *(uint *)pFVar43;
            if (-1 < (int)uVar28) {
              uVar31 = 0;
              if ((int)uVar28 < local_578) {
                uVar31 = ~uVar28 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              if (local_580.Data[(int)uVar28] != (FScriptContainerElement)0x0) {
                uVar28 = 0;
                if ((int)uVar44 < (int)local_588) {
                  uVar28 = uVar42;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  uVar20 = (*pcVar5)();
                  return (bool)uVar20;
                }
                *(int *)(local_590.Data + uVar41 + 0x10) =
                     *(int *)(local_590.Data + uVar41 + 0x10) + 1;
                uVar28 = 0;
                if ((int)uVar44 < (int)local_588) {
                  uVar28 = uVar42;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  uVar20 = (*pcVar5)();
                  return (bool)uVar20;
                }
                if (-1 < *(int *)(local_590.Data + uVar41 + 0x10)) {
                  uVar28 = 0;
                  if ((int)uVar44 < (int)local_588) {
                    uVar28 = uVar42;
                  }
                  if ((uVar28 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  if (*(int *)(local_590.Data + uVar41 + 0x10) < 5) goto LAB_14c8ee26e;
                }
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AllQuadsMetricList[Index].FixedQuadNbrs >= 0 && AllQuadsMetricList[Index].FixedQuadNbrs <= 4"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                                    ,0x17f,L"");
                if (bVar19) {
                  pcVar5 = (code *)swi(3);
                  uVar20 = (*pcVar5)();
                  return (bool)uVar20;
                }
              }
            }
LAB_14c8ee26e:
            pFVar43 = pFVar43 + 4;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          local_560 = local_560 + 1;
          uVar41 = uVar41 + 0x18;
          uVar24 = (ulonglong)(uVar44 + 1);
        } while ((int)(uVar44 + 1) < (int)local_588);
      }
    }
    pFVar43 = (FScriptContainerElement *)0x0;
    local_540.EnableDebugChecks = false;
    local_540.nodes.CurBlock = 0;
    local_540.nodes.CurBlockUsed = 0;
    local_540.nodes.Blocks.ArrayNum = 0;
    local_540.nodes.Blocks.ArrayMax = 0;
    local_540.nodes.Blocks.AllocatorInstance.Data = pFVar43;
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
              (&local_540.nodes);
    local_540.id_to_index.ArrayNum = 0;
    local_540.id_to_index.ArrayMax = 0;
    local_540.id_to_index.AllocatorInstance.Data = pFVar43;
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
              (&local_540.nodes,1,No);
    local_540.nodes.CurBlock = 0;
    local_540.nodes.CurBlockUsed = 0;
    if (local_540.nodes.Blocks.ArrayNum == 0) {
      TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                (&local_540.nodes);
    }
    local_480 = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_540.id_to_index,&local_480,0);
    iVar39 = (int)local_588;
    uVar28 = 0;
    local_540.num_nodes = uVar28;
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
              (&local_540.nodes,1,No);
    local_540.nodes.CurBlock = 0;
    local_540.nodes.CurBlockUsed = 0;
    if (local_540.nodes.Blocks.ArrayNum == 0) {
      TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                (&local_540.nodes);
    }
    local_47c = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_540.id_to_index,&local_47c,iVar39);
    uVar42 = 0;
    local_540.num_nodes = uVar28;
    pFVar1 = pFVar43;
    if (0 < (int)local_588) {
      do {
        local_500 = pFVar1;
        uVar44 = ~uVar42 >> 0x1f;
        uVar28 = 0;
        if ((int)uVar42 < (int)local_588) {
          uVar28 = uVar44;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        uVar41 = *(ulonglong *)(local_590.Data + (longlong)pFVar43);
        uVar31 = (uint)uVar41;
        uVar28 = 0;
        if ((int)uVar31 < (int)local_550) {
          uVar28 = ~uVar31 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        FVar34.Data = local_558.Data;
        lVar40 = ((longlong)(int)uVar31 * 3 + (uVar41 >> 0x20)) * 0x58;
        uVar28 = *(uint *)(local_558.Data + lVar40);
        uVar31 = 0;
        if ((int)uVar28 < local_578) {
          uVar31 = ~uVar28 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        if (local_580.Data[(int)uVar28] != (FScriptContainerElement)0x1) {
          uVar28 = *(uint *)(FVar34.Data + lVar40 + 4);
          uVar36 = 0;
          uVar31 = uVar36;
          if ((int)uVar28 < local_578) {
            uVar31 = ~uVar28 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          if (local_580.Data[(int)uVar28] != (FScriptContainerElement)0x1) {
            uVar28 = uVar36;
            if ((int)uVar42 < (int)local_588) {
              uVar28 = uVar44;
            }
            if ((uVar28 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              uVar20 = (*pcVar5)();
              return (bool)uVar20;
            }
            dVar47 = *(double *)((longlong)(local_590.Data + 8) + (longlong)pFVar43);
            if (*(int *)((longlong)(local_590.Data + 0x10) + (longlong)pFVar43) != 0) {
              dVar46 = pow((double)(*(int *)((longlong)(local_590.Data + 0x10) + (longlong)pFVar43)
                                   + 1),(double)CONCAT44(uVar30 ^ uVar21,SUB84(param_4,0) ^ uVar35))
              ;
              dVar47 = dVar47 * dVar46;
            }
            if (dVar47 * dVar12 <= param_3) {
              if (((local_540.EnableDebugChecks != false) &&
                  (bVar19 = FIndexPriorityQueue::Contains(&local_540,uVar42), bVar19)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Contains(NodeID) == false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                      ,0x7d,L""), bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              uVar31 = local_540.num_nodes + 1;
              fStack_434 = (float)dVar47;
              uVar28 = 0;
              if ((int)uVar42 < local_540.id_to_index.ArrayNum) {
                uVar28 = uVar44;
              }
              local_540.num_nodes = uVar31;
              local_438 = uVar42;
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              *(uint *)(local_500 + local_540.id_to_index.AllocatorInstance.Data) = uVar31;
              uVar28 = local_540.nodes.CurBlock * 0x200 + local_540.nodes.CurBlockUsed;
              if (local_540.num_nodes == uVar28) {
                uVar44 = local_540.nodes.CurBlock;
                uVar28 = local_540.nodes.CurBlockUsed;
                if (local_540.nodes.CurBlockUsed == 0x200) {
                  if (local_540.nodes.CurBlock == local_540.nodes.Blocks.ArrayNum - 1U) {
                    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
                    AddAllocatedBlock(&local_540.nodes);
                  }
                  uVar44 = local_540.nodes.CurBlock + 1;
                  local_540.nodes.CurBlockUsed = 0;
                  local_540.nodes.CurBlock = uVar44;
                  uVar28 = uVar36;
                }
LAB_14c8ee691:
                lVar40 = *(longlong *)
                          (local_540.nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar44 * 8
                          );
                *(ulonglong *)(lVar40 + (longlong)(int)uVar28 * 0xc) =
                     CONCAT44(fStack_434,local_438);
                *(uint *)(lVar40 + 8 + (longlong)(int)uVar28 * 0xc) = uVar31;
                local_540.nodes.CurBlockUsed = local_540.nodes.CurBlockUsed + 1;
              }
              else {
                if (uVar28 < (uint)local_540.num_nodes) {
                  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                            (&local_540.nodes,local_540.num_nodes);
                  uVar44 = local_540.nodes.CurBlock;
                  uVar28 = local_540.nodes.CurBlockUsed;
                  if (local_540.nodes.CurBlockUsed == 0x200) {
                    if (local_540.nodes.CurBlock == local_540.nodes.Blocks.ArrayNum - 1U) {
                      TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
                      AddAllocatedBlock(&local_540.nodes);
                    }
                    local_540.nodes.CurBlock = local_540.nodes.CurBlock + 1;
                    local_540.nodes.CurBlockUsed = 0;
                    uVar44 = local_540.nodes.CurBlock;
                    uVar28 = uVar36;
                  }
                  goto LAB_14c8ee691;
                }
                lVar40 = *(longlong *)
                          (local_540.nodes.Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)local_540.num_nodes >> 9) * 8);
                *(ulonglong *)(lVar40 + (ulonglong)(local_540.num_nodes & 0x1ff) * 0xc) =
                     CONCAT44(fStack_434,local_438);
                *(uint *)(lVar40 + 8 + (ulonglong)(local_540.num_nodes & 0x1ff) * 0xc) = uVar31;
              }
              FIndexPriorityQueue::move_up
                        (&local_540,
                         *(int *)(*(longlong *)
                                   (local_540.nodes.Blocks.AllocatorInstance.Data +
                                   (ulonglong)((uint)local_540.num_nodes >> 9) * 8) + 8 +
                                 (ulonglong)(local_540.num_nodes & 0x1ff) * 0xc));
            }
          }
        }
        local_500 = local_500 + 4;
        uVar42 = uVar42 + 1;
        pFVar43 = pFVar43 + 0x18;
        pFVar1 = local_500;
      } while ((int)uVar42 < (int)local_588);
    }
    local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.ArrayNum = 0;
    local_4a0.ArrayMax = 0;
    local_490.ArrayNum = 0;
    local_490.ArrayMax = 0;
    local_490.AllocatorInstance.Data = local_4a0.AllocatorInstance.Data;
    while (0 < local_540.num_nodes) {
      if (((local_540.EnableDebugChecks != false) && (local_540.num_nodes < 1)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("GetCount() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                              ,0x92,L""), bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar20 = (*pcVar5)();
        return (bool)uVar20;
      }
      uVar28 = *(uint *)(*(longlong *)local_540.nodes.Blocks.AllocatorInstance.Data + 0xc);
      FIndexPriorityQueue::remove_at_index(&local_540,1);
      uVar42 = 0;
      if ((int)uVar28 < (int)local_588) {
        uVar42 = ~uVar28 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar20 = (*pcVar5)();
        return (bool)uVar20;
      }
      uVar41 = *(ulonglong *)&local_590.Data[(longlong)(int)uVar28 * 0x18].field_0x0;
      uVar42 = (uint)uVar41;
      uVar28 = 0;
      if ((int)uVar42 < (int)local_550) {
        uVar28 = ~uVar42 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar20 = (*pcVar5)();
        return (bool)uVar20;
      }
      pFVar43 = local_558.Data + ((longlong)(int)uVar42 * 3 + (uVar41 >> 0x20)) * 0x58;
      uVar28 = *(uint *)pFVar43;
      uVar42 = 0;
      if ((int)uVar28 < local_578) {
        uVar42 = ~uVar28 >> 0x1f;
      }
      local_4a8 = pFVar43;
      if ((uVar42 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar20 = (*pcVar5)();
        return (bool)uVar20;
      }
      if (local_580.Data[(int)uVar28] != (FScriptContainerElement)0x1) {
        uVar28 = *(uint *)(pFVar43 + 4);
        uVar42 = 0;
        if ((int)uVar28 < local_578) {
          uVar42 = ~uVar28 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          uVar20 = (*pcVar5)();
          return (bool)uVar20;
        }
        if (local_580.Data[(int)uVar28] != (FScriptContainerElement)0x1) {
          if (((local_570.Data <= pFVar43) &&
              (pFVar43 < local_570.Data + (longlong)iStack_564 * 0x58)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          if (local_568 == iStack_564) {
            local_568 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x858,&local_570,&iStack_564);
          }
          iVar39 = local_568 + 1;
          uVar6 = *(undefined8 *)(pFVar43 + 8);
          lVar40 = (longlong)local_568 * 0x58;
          *(undefined8 *)(local_570.Data + lVar40) = *(undefined8 *)pFVar43;
          *(undefined8 *)(local_570.Data + lVar40 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar43 + 0x18);
          *(undefined8 *)(local_570.Data + lVar40 + 0x10) = *(undefined8 *)(pFVar43 + 0x10);
          *(undefined8 *)(local_570.Data + lVar40 + 0x10 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar43 + 0x28);
          *(undefined8 *)(local_570.Data + lVar40 + 0x20) = *(undefined8 *)(pFVar43 + 0x20);
          *(undefined8 *)(local_570.Data + lVar40 + 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar43 + 0x38);
          *(undefined8 *)(local_570.Data + lVar40 + 0x30) = *(undefined8 *)(pFVar43 + 0x30);
          *(undefined8 *)(local_570.Data + lVar40 + 0x30 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar43 + 0x48);
          *(undefined8 *)(local_570.Data + lVar40 + 0x40) = *(undefined8 *)(pFVar43 + 0x40);
          *(undefined8 *)(local_570.Data + lVar40 + 0x40 + 8) = uVar6;
          *(undefined8 *)(local_570.Data + lVar40 + 0x50) = *(undefined8 *)(pFVar43 + 0x50);
          uVar28 = *(uint *)pFVar43;
          uVar42 = 0;
          if ((int)uVar28 < local_578) {
            uVar42 = ~uVar28 >> 0x1f;
          }
          local_568 = iVar39;
          if ((uVar42 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          local_580.Data[(int)uVar28] = (FScriptContainerElement)0x1;
          uVar28 = *(uint *)(pFVar43 + 4);
          uVar42 = 0;
          if ((int)uVar28 < local_578) {
            uVar42 = ~uVar28 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          uVar6 = local_4a0._8_8_;
          local_580.Data[(int)uVar28] = (FScriptContainerElement)0x1;
          if (0.0 < param_4) {
            iVar39 = local_4a0.ArrayMax;
            local_4a0._8_8_ = (ulonglong)(uint)local_4a0.ArrayMax << 0x20;
            if (((longlong)uVar6 < 0) && (iVar39 != 0)) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_4a0.AllocatorInstance,0,&local_4a0.ArrayMax);
            }
            uVar6 = local_490._8_8_;
            iVar39 = local_490.ArrayMax;
            local_490._8_8_ = (ulonglong)(uint)local_490.ArrayMax << 0x20;
            if (((longlong)uVar6 < 0) && (iVar39 != 0)) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_490.AllocatorInstance,0,&local_490.ArrayMax);
            }
            local_4c8 = pFVar43 + 0x40;
            local_500 = (FScriptContainerElement *)0x4;
            do {
              uVar28 = *(uint *)local_4c8;
              if (uVar28 != 0xffffffff) {
                lVar23 = 3;
                lVar40 = (longlong)(int)uVar28 * 0x108;
                do {
                  uVar42 = 0;
                  if ((int)uVar28 < (int)local_550) {
                    uVar42 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar42 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  FVar34.Data = local_558.Data;
                  uVar42 = *(uint *)(local_558.Data + lVar40);
                  if ((-1 < (int)uVar42) && (-1 < *(int *)(local_558.Data + lVar40 + 4))) {
                    uVar44 = 0;
                    if ((int)uVar42 < local_578) {
                      uVar44 = ~uVar42 >> 0x1f;
                    }
                    if ((uVar44 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar5 = (code *)swi(3);
                      uVar20 = (*pcVar5)();
                      return (bool)uVar20;
                    }
                    if (local_580.Data[(int)uVar42] != (FScriptContainerElement)0x1) {
                      uVar42 = *(uint *)(FVar34.Data + lVar40 + 4);
                      uVar44 = 0;
                      if ((int)uVar42 < local_578) {
                        uVar44 = ~uVar42 >> 0x1f;
                      }
                      if ((uVar44 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar5 = (code *)swi(3);
                        uVar20 = (*pcVar5)();
                        return (bool)uVar20;
                      }
                      if (local_580.Data[(int)uVar42] != (FScriptContainerElement)0x1) {
                        uVar42 = *(uint *)(FVar34.Data + lVar40);
                        if ((((((*(uint *)(local_4a8 + 0x40) == uVar42) ||
                               (*(uint *)(local_4a8 + 0x44) == uVar42)) ||
                              (*(uint *)(local_4a8 + 0x48) == uVar42)) ||
                             ((*(uint *)(local_4a8 + 0x4c) == uVar42 ||
                              (uVar42 = *(uint *)(FVar34.Data + lVar40 + 4),
                              *(uint *)(local_4a8 + 0x40) == uVar42)))) ||
                            (*(uint *)(local_4a8 + 0x44) == uVar42)) ||
                           ((*(uint *)(local_4a8 + 0x48) == uVar42 ||
                            (*(uint *)(local_4a8 + 0x4c) == uVar42)))) {
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                    (&local_4a0,(int *)(FVar34.Data + lVar40 + 0x50));
                          local_478[0] = *(uint *)(FVar34.Data + lVar40 + 4);
                          if ((*(uint *)(FVar34.Data + lVar40) != uVar28) &&
                             (local_478[0] = 0xffffffff,
                             *(uint *)(FVar34.Data + lVar40 + 4) == uVar28)) {
                            local_478[0] = *(uint *)(FVar34.Data + lVar40);
                          }
                          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                                    (&local_490,(int *)local_478);
                        }
                      }
                    }
                  }
                  lVar40 = lVar40 + 0x58;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              local_4c8 = local_4c8 + 4;
              local_500 = (FScriptContainerElement *)((longlong)local_500 + -1);
            } while (local_500 != (FScriptContainerElement *)0x0);
            uVar24 = (ulonglong)local_490.ArrayNum;
            local_560 = CONCAT44(local_560._4_4_,local_490.ArrayNum);
            local_500 = local_490.AllocatorInstance.Data + uVar24 * 4;
            uVar41 = uVar24;
            FVar34.Data = local_490.AllocatorInstance.Data;
            while( true ) {
              pFVar43 = local_500;
              local_4c8 = FVar34.Data;
              if ((int)uVar24 != (int)uVar41) {
                local_546 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_546);
              }
              if (FVar34.Data == pFVar43) break;
              uVar28 = *(uint *)FVar34.Data;
              lVar23 = 3;
              lVar40 = (longlong)(int)uVar28 * 0x108;
              do {
                uVar42 = 0;
                if ((int)uVar28 < (int)local_550) {
                  uVar42 = ~uVar28 >> 0x1f;
                }
                if ((uVar42 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  uVar20 = (*pcVar5)();
                  return (bool)uVar20;
                }
                FVar34.Data = local_558.Data;
                uVar42 = *(uint *)(local_558.Data + lVar40);
                if ((-1 < (int)uVar42) && (-1 < *(int *)(local_558.Data + lVar40 + 4))) {
                  uVar44 = 0;
                  if ((int)uVar42 < local_578) {
                    uVar44 = ~uVar42 >> 0x1f;
                  }
                  if ((uVar44 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  if (local_580.Data[(int)uVar42] != (FScriptContainerElement)0x1) {
                    uVar42 = *(uint *)(FVar34.Data + lVar40 + 4);
                    uVar44 = 0;
                    if ((int)uVar42 < local_578) {
                      uVar44 = ~uVar42 >> 0x1f;
                    }
                    if ((uVar44 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar5 = (code *)swi(3);
                      uVar20 = (*pcVar5)();
                      return (bool)uVar20;
                    }
                    if (local_580.Data[(int)uVar42] != (FScriptContainerElement)0x1) {
                      uVar42 = *(uint *)(FVar34.Data + lVar40);
                      if (((((*(uint *)(local_4a8 + 0x40) == uVar42) ||
                            (*(uint *)(local_4a8 + 0x44) == uVar42)) ||
                           (*(uint *)(local_4a8 + 0x48) == uVar42)) ||
                          ((*(uint *)(local_4a8 + 0x4c) == uVar42 ||
                           (uVar42 = *(uint *)(FVar34.Data + lVar40 + 4),
                           *(uint *)(local_4a8 + 0x40) == uVar42)))) ||
                         ((*(uint *)(local_4a8 + 0x44) == uVar42 ||
                          ((*(uint *)(local_4a8 + 0x48) == uVar42 ||
                           (*(uint *)(local_4a8 + 0x4c) == uVar42)))))) {
                        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                                  (&local_4a0,(int *)(FVar34.Data + lVar40 + 0x50));
                      }
                    }
                  }
                }
                lVar40 = lVar40 + 0x58;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              uVar24 = local_490._8_8_ & 0xffffffff;
              FVar34.Data = local_4c8 + 4;
              uVar41 = local_560 & 0xffffffff;
            }
            iVar39 = local_4a0.ArrayNum;
            pFVar43 = local_4a0.AllocatorInstance.Data + (longlong)local_4a0.ArrayNum * 4;
            FVar34.Data = local_4a0.AllocatorInstance.Data;
            while( true ) {
              if (local_4a0.ArrayNum != iVar39) {
                local_545 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_545);
              }
              if (FVar34.Data == pFVar43) break;
              uVar28 = *(uint *)FVar34.Data;
              lVar40 = (longlong)(int)uVar28;
              if ((int)uVar28 <= local_540.id_to_index.ArrayNum + 1) {
                uVar42 = 0;
                if ((int)uVar28 < local_540.id_to_index.ArrayNum) {
                  uVar42 = ~uVar28 >> 0x1f;
                }
                if ((uVar42 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  uVar20 = (*pcVar5)();
                  return (bool)uVar20;
                }
                uVar42 = *(uint *)(local_540.id_to_index.AllocatorInstance.Data + lVar40 * 4);
                if (((0 < (int)uVar42) && ((int)uVar42 <= local_540.num_nodes)) &&
                   (0 < *(int *)(*(longlong *)
                                  (local_540.nodes.Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar42 >> 9) * 8) + 8 +
                                (ulonglong)(uVar42 & 0x1ff) * 0xc))) {
                  uVar42 = 0;
                  if ((int)uVar28 < (int)local_588) {
                    uVar42 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar42 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  FVar13.Data = local_590.Data;
                  iVar22 = *(int *)(local_590.Data + lVar40 * 0x18 + 0x10) + 1;
                  *(int *)(local_590.Data + lVar40 * 0x18 + 0x10) = iVar22;
                  if (((iVar22 < 0) || (4 < iVar22)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("UpdateQM.FixedQuadNbrs >= 0 && UpdateQM.FixedQuadNbrs <= 4"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Polygroups\\PolygroupsGenerator.cpp"
                                          ,0x1d3,L""), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  iVar22 = *(int *)(FVar13.Data + lVar40 * 0x18 + 0x10);
                  dVar47 = *(double *)(FVar13.Data + lVar40 * 0x18 + 8);
                  if (iVar22 != 0) {
                    dVar46 = pow((double)(iVar22 + 1),
                                 (double)CONCAT44(uVar30 ^ uVar21,SUB84(param_4,0) ^ uVar35));
                    dVar47 = dVar47 * dVar46;
                  }
                  if (((local_540.EnableDebugChecks != false) &&
                      (bVar19 = FIndexPriorityQueue::Contains(&local_540,uVar28), !bVar19)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Contains(NodeID) == true",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                          ,0xa1,L""), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  uVar44 = 0;
                  uVar42 = uVar44;
                  if ((int)uVar28 < local_540.id_to_index.ArrayNum) {
                    uVar42 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar42 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  FIndexPriorityQueue::remove_at_index
                            (&local_540,
                             *(int *)(local_540.id_to_index.AllocatorInstance.Data + lVar40 * 4));
                  if (((local_540.EnableDebugChecks != false) &&
                      (bVar19 = FIndexPriorityQueue::Contains(&local_540,uVar28), bVar19)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Contains(NodeID) == false",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                          ,0x7d,L""), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  uVar31 = local_540.num_nodes + 1;
                  fStack_444 = (float)dVar47;
                  uVar42 = uVar44;
                  if ((int)uVar28 < local_540.id_to_index.ArrayNum) {
                    uVar42 = ~uVar28 >> 0x1f;
                  }
                  local_540.num_nodes = uVar31;
                  local_448 = uVar28;
                  if ((uVar42 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    uVar20 = (*pcVar5)();
                    return (bool)uVar20;
                  }
                  *(uint *)(local_540.id_to_index.AllocatorInstance.Data + lVar40 * 4) = uVar31;
                  uVar28 = local_540.nodes.CurBlock * 0x200 + local_540.nodes.CurBlockUsed;
                  if (local_540.num_nodes == uVar28) {
                    uVar42 = local_540.nodes.CurBlock;
                    uVar28 = local_540.nodes.CurBlockUsed;
                    if (local_540.nodes.CurBlockUsed == 0x200) {
                      if (local_540.nodes.CurBlock == local_540.nodes.Blocks.ArrayNum - 1U) {
                        TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
                        AddAllocatedBlock(&local_540.nodes);
                      }
                      uVar42 = local_540.nodes.CurBlock + 1;
                      local_540.nodes.CurBlockUsed = 0;
                      local_540.nodes.CurBlock = uVar42;
                      uVar28 = uVar44;
                    }
LAB_14c8ef1d1:
                    lVar40 = *(longlong *)
                              (local_540.nodes.Blocks.AllocatorInstance.Data +
                              (longlong)(int)uVar42 * 8);
                    *(ulonglong *)(lVar40 + (longlong)(int)uVar28 * 0xc) =
                         CONCAT44(fStack_444,local_448);
                    *(uint *)(lVar40 + 8 + (longlong)(int)uVar28 * 0xc) = uVar31;
                    local_540.nodes.CurBlockUsed = local_540.nodes.CurBlockUsed + 1;
                  }
                  else {
                    if (uVar28 < (uint)local_540.num_nodes) {
                      TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                                (&local_540.nodes,local_540.num_nodes);
                      uVar42 = local_540.nodes.CurBlock;
                      uVar28 = local_540.nodes.CurBlockUsed;
                      if (local_540.nodes.CurBlockUsed == 0x200) {
                        if (local_540.nodes.CurBlock == local_540.nodes.Blocks.ArrayNum - 1U) {
                          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
                          AddAllocatedBlock(&local_540.nodes);
                        }
                        local_540.nodes.CurBlock = local_540.nodes.CurBlock + 1;
                        local_540.nodes.CurBlockUsed = 0;
                        uVar42 = local_540.nodes.CurBlock;
                        uVar28 = uVar44;
                      }
                      goto LAB_14c8ef1d1;
                    }
                    lVar40 = *(longlong *)
                              (local_540.nodes.Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)local_540.num_nodes >> 9) * 8);
                    *(ulonglong *)(lVar40 + (ulonglong)(local_540.num_nodes & 0x1ff) * 0xc) =
                         CONCAT44(fStack_444,local_448);
                    *(uint *)(lVar40 + 8 + (ulonglong)(local_540.num_nodes & 0x1ff) * 0xc) = uVar31;
                  }
                  FIndexPriorityQueue::move_up
                            (&local_540,
                             *(int *)(*(longlong *)
                                       (local_540.nodes.Blocks.AllocatorInstance.Data +
                                       (ulonglong)((uint)local_540.num_nodes >> 9) * 8) + 8 +
                                     (ulonglong)(local_540.num_nodes & 0x1ff) * 0xc));
                }
              }
              FVar34.Data = FVar34.Data + 4;
            }
          }
        }
      }
    }
    if (0 < (int)(param_5 - local_4f8)) {
      local_198.Selected.Elements._0_8_ = 0;
      local_198.Selected.Elements._8_8_ = 0;
      uVar41 = 0;
      local_198.Selected.Elements._32_8_ = 0;
      pFVar3 = local_508->Mesh;
      local_198.Selected.Elements._40_8_ = uVar4;
      local_198.Selected.Elements._48_8_ = uVar11;
      local_198.Selected.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_198.Selected.HashSize = 0;
      local_198.Mesh = pFVar3;
      iVar39 = (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed +
               (pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200;
      if (((iVar39 != 0) &&
          (pFVar43 = (pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
          0xfffd < (ushort)(**(short **)pFVar43 - 1U))) && (uVar41 = 1, 1 < iVar39)) {
        do {
          uVar24 = (ulonglong)((uint)uVar41 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar43 + (uVar41 >> 9) * 8) + uVar24 * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar43 + (uVar41 >> 9) * 8) + uVar24 * 2) != -1)) break;
          uVar28 = (uint)uVar41 + 1;
          uVar41 = (ulonglong)uVar28;
        } while ((int)uVar28 < iVar39);
      }
      iVar22 = (pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed;
      local_560._4_4_ = (int)(local_560 >> 0x20);
      local_560 = CONCAT44(local_560._4_4_,iVar22);
      if ((int)uVar41 != iVar22) {
        do {
          iVar37 = 0;
          uVar42 = (uint)uVar41;
          uVar30 = 0;
          uVar28 = uVar30;
          if ((int)uVar42 < local_578) {
            uVar28 = ~uVar42 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          if (local_580.Data[(int)uVar42] == (FScriptContainerElement)0x0) {
            FDynamicMesh3::GetTriNeighbourTris(local_508->Mesh,(FIndex3i *)&local_3b8._s_0,uVar42);
            lVar40 = (longlong)local_3b8._s_0.A;
            if (local_3b8._s_0.A < 0) {
LAB_14c8ef435:
              uVar28 = uVar30;
            }
            else {
              uVar28 = uVar30;
              if (local_3b8._s_0.A < local_578) {
                uVar28 = (uint)~local_3b8._s_0.A >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              uVar28 = 1;
              if (local_580.Data[lVar40] == (FScriptContainerElement)0x0) goto LAB_14c8ef435;
            }
            lVar40 = (longlong)local_3b8._s_0.B;
            if (-1 < local_3b8._s_0.B) {
              if (local_3b8._s_0.B < local_578) {
                uVar30 = (uint)~local_3b8._s_0.B >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              if (local_580.Data[lVar40] != (FScriptContainerElement)0x0) {
                iVar37 = 1;
              }
            }
            lVar40 = (longlong)local_3b8._s_0.C;
            if (local_3b8._s_0.C < 0) {
LAB_14c8ef4fe:
              iVar29 = 0;
            }
            else {
              uVar30 = 0;
              if (local_3b8._s_0.C < local_578) {
                uVar30 = (uint)~local_3b8._s_0.C >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              if (local_580.Data[lVar40] == (FScriptContainerElement)0x0) goto LAB_14c8ef4fe;
              iVar29 = 1;
            }
            if (iVar29 + iVar37 + uVar28 == 3) {
              if (((((int)uVar42 < 0) ||
                   ((int)(((local_198.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         ((local_198.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed) <=
                    (int)uVar42)) ||
                  (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (((local_198.Mesh)->TriangleRefCounts).RefCounts.
                                                  Blocks.AllocatorInstance.Data + (uVar41 >> 9) * 8)
                                               + (ulonglong)(uVar42 & 0x1ff) * 2) - 1U))) &&
                 (bVar19 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<5735661616712646743>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Selections\\MeshFaceSelection.h"
                                      ,0x57,"Mesh->IsTriangle(tid)"), bVar19)) {
                pcVar5 = (code *)swi(3);
                uVar20 = (*pcVar5)();
                return (bool)uVar20;
              }
              if (((-1 < (int)uVar42) &&
                  ((int)uVar42 <
                   (int)(((local_198.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                        ((local_198.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
                 ((ushort)(*(short *)(*(longlong *)
                                       (((local_198.Mesh)->TriangleRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + (uVar41 >> 9) * 8) +
                                     (ulonglong)(uVar42 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                local_470[0] = uVar42;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&local_198.Selected,local_338,(bool *)local_470);
              }
            }
          }
          uVar41 = (ulonglong)(uVar42 + 1);
          if ((int)(uVar42 + 1) < iVar39) {
            do {
              uVar24 = (ulonglong)((uint)uVar41 & 0x1ff);
              lVar40 = *(longlong *)
                        ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (uVar41 >> 9) * 8);
              if ((*(short *)(lVar40 + uVar24 * 2) != 0) && (*(short *)(lVar40 + uVar24 * 2) != -1))
              break;
              uVar28 = (uint)uVar41 + 1;
              uVar41 = (ulonglong)uVar28;
            } while ((int)uVar28 < iVar39);
            iVar22 = (int)local_560;
          }
        } while ((int)uVar41 != iVar22);
      }
      iVar39 = local_198.Selected.Elements._8_4_ - local_198.Selected.Elements._52_4_;
      local_e8._0_8_ = 0;
      local_c0 = (longlong *)0x0;
      if (0 < (int)(local_4f8 + 1)) {
        uVar41 = (ulonglong)(local_4f8 + 1);
        do {
          FMeshFaceSelection::ExpandToFaceNeighbours
                    (&local_198,(TUniqueFunction<bool___cdecl(int)> *)local_e8);
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
        if (local_e8._0_8_ != 0) {
          plVar25 = (longlong *)(local_e8 + 0x10);
          if (local_c0 != (longlong *)0x0) {
            plVar25 = local_c0;
          }
          (**(code **)(*plVar25 + 0x10))();
        }
      }
      iVar22 = local_568;
      FVar26 = local_198.Selected.Hash.SecondaryData;
      if (0 < iVar39) {
        pFVar43 = local_570.Data + (longlong)local_568 * 0x58;
        FVar34.Data = local_570.Data;
        lVar40 = local_198.Selected.Elements._0_8_;
        while( true ) {
          if (local_568 != iVar22) {
            local_544 = 0;
            `TCheckedPointerIterator<`UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups'::__l2::FTriPairQuad,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_544);
            lVar40 = local_198.Selected.Elements._0_8_;
            FVar26 = local_198.Selected.Hash.SecondaryData;
          }
          if (FVar34.Data == pFVar43) break;
          local_2c8 = *(uint *)FVar34.Data;
          uStack_2c4 = *(uint *)(FVar34.Data + 4);
          local_2b8 = *(undefined8 *)(FVar34.Data + 0x10);
          uStack_2b0 = *(undefined8 *)(FVar34.Data + 0x18);
          local_2a8 = *(undefined8 *)(FVar34.Data + 0x20);
          uStack_2a0 = *(undefined8 *)(FVar34.Data + 0x28);
          local_298 = *(undefined8 *)(FVar34.Data + 0x30);
          uStack_290 = *(undefined8 *)(FVar34.Data + 0x38);
          local_278 = *(undefined8 *)(FVar34.Data + 0x50);
          uStack_2c0 = *(uint *)(FVar34.Data + 8);
          uStack_2bc = *(uint *)(FVar34.Data + 0xc);
          local_288 = *(undefined1 (*) [16])(FVar34.Data + 0x40);
          if (local_198.Selected.Elements._8_4_ != local_198.Selected.Elements._52_4_) {
            FVar27 = (ForElementType<FSetElementId>)&local_198.Selected.Hash;
            if (FVar26 != (ForElementType<FSetElementId>)0x0) {
              FVar27 = FVar26;
            }
            for (iVar39 = *(int *)((longlong)FVar27 +
                                  (ulonglong)(local_198.Selected.HashSize - 1U & local_2c8) * 4);
                iVar39 != -1; iVar39 = *(int *)(lVar40 + 4 + (longlong)iVar39 * 0xc)) {
              if (*(uint *)(lVar40 + (longlong)iVar39 * 0xc) == local_2c8) goto LAB_14c8ef8eb;
            }
            FVar27 = (ForElementType<FSetElementId>)&local_198.Selected.Hash;
            if (FVar26 != (ForElementType<FSetElementId>)0x0) {
              FVar27 = FVar26;
            }
            for (iVar39 = *(int *)((longlong)FVar27 +
                                  (ulonglong)(local_198.Selected.HashSize - 1U & uStack_2c4) * 4);
                iVar39 != -1; iVar39 = *(int *)(lVar40 + 4 + (longlong)iVar39 * 0xc)) {
              if (*(uint *)(lVar40 + (longlong)iVar39 * 0xc) == uStack_2c4) goto LAB_14c8ef8eb;
            }
          }
          if (((local_4f0.Data <= (FScriptContainerElement *)&local_2c8) &&
              ((FScriptContainerElement *)&local_2c8 <
               local_4f0.Data + (longlong)(int)local_4e8._4_4_ * 0x58)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            uVar20 = (*pcVar5)();
            return (bool)uVar20;
          }
          iVar39 = (int)local_4e8;
          if ((int)local_4e8 == local_4e8._4_4_) {
            iVar39 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,&local_4f0,(int *)((longlong)&local_4e8 + 4));
          }
          local_4e8 = CONCAT44(local_4e8._4_4_,iVar39 + 1);
          lVar40 = (longlong)iVar39 * 0x58;
          pFVar1 = local_4f0.Data + lVar40;
          *(uint *)pFVar1 = local_2c8;
          *(uint *)(pFVar1 + 4) = uStack_2c4;
          *(uint *)(pFVar1 + 8) = uStack_2c0;
          *(uint *)(pFVar1 + 0xc) = uStack_2bc;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x10) = local_2b8;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x10 + 8) = uStack_2b0;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x20) = local_2a8;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x20 + 8) = uStack_2a0;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x30) = local_298;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x30 + 8) = uStack_290;
          *(undefined1 (*) [16])(local_4f0.Data + lVar40 + 0x40) = local_288;
          *(undefined8 *)(local_4f0.Data + lVar40 + 0x50) = local_278;
          lVar40 = local_198.Selected.Elements._0_8_;
          FVar26 = local_198.Selected.Hash.SecondaryData;
LAB_14c8ef8eb:
          FVar34.Data = FVar34.Data + 0x58;
        }
      }
      param_4 = param_4 * dVar45;
      local_198.Selected.HashSize = 0;
      if (FVar26 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar26);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_198.Selected.Elements);
    }
    if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.AllocatorInstance.Data);
    }
    if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.AllocatorInstance.Data);
    }
    if (local_540.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.id_to_index.AllocatorInstance.Data);
    }
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_540.nodes);
    uVar33 = (ulong64)local_4b0;
    uVar28 = local_4f8;
  } while( true );
}

// GetSeamConstraintEdges @ 14c8f5f40

void __thiscall
UE::Geometry::FPolygroupsGenerator::GetSeamConstraintEdges
          (FPolygroupsGenerator *this,bool param_1,bool param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  longlong lVar4;
  TDynamicMeshOverlay<float,3> *this_01;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_res10 [2];
  int local_res18 [4];
  
  uVar8 = 0;
  if (param_1) {
    pFVar1 = this->Mesh;
    pFVar2 = (pFVar1->AttributeSet).Ptr;
    if (((pFVar2 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar2->UVLayers).Array.ArrayNum)) &&
       (pFVar3 = (pFVar2->UVLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0)) {
      this_00 = *(TDynamicMeshOverlay<float,2> **)pFVar3;
      uVar9 = (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed +
              (pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
      uVar11 = uVar8;
      if ((uVar9 == 0) ||
         (pFVar3 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
         (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_14c8f6010:
        uVar10 = (uint)uVar11;
      }
      else {
        uVar11 = 1;
        uVar10 = 1;
        if (1 < (int)uVar9) {
          do {
            lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
            lVar4 = *(longlong *)(pFVar3 + (uVar11 >> 9) * 8);
            if ((*(short *)(lVar5 + lVar4) != 0) && (*(short *)(lVar5 + lVar4) != -1)) break;
            uVar10 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < (int)uVar9);
          goto LAB_14c8f6010;
        }
      }
joined_r0x00014c8f6012:
      if (uVar10 != uVar9) {
        while( true ) {
          iVar7 = (int)uVar11;
          local_res10[0] = iVar7;
          bVar6 = TDynamicMeshOverlay<float,2>::IsSeamEdge(this_00,iVar7,(bool *)0x0);
          if (bVar6) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_3,local_res18,(bool *)local_res10);
          }
          uVar10 = iVar7 + 1;
          uVar11 = (ulonglong)uVar10;
          if ((int)uVar9 <= (int)uVar10) break;
          pFVar3 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            lVar4 = (uVar11 >> 9) * 8;
            lVar5 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
            if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar4)) != 0) &&
               (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar4)) != -1)) break;
            uVar10 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            if ((int)uVar9 <= (int)uVar10) goto joined_r0x00014c8f6012;
          }
        }
        goto joined_r0x00014c8f6012;
      }
    }
  }
  if (!param_2) {
    return;
  }
  pFVar1 = this->Mesh;
  pFVar2 = (pFVar1->AttributeSet).Ptr;
  if (pFVar2 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  if ((pFVar2->NormalLayers).Array.ArrayNum < 1) {
    return;
  }
  pFVar3 = (pFVar2->NormalLayers).Array.AllocatorInstance.Data;
  if (*(longlong *)pFVar3 == 0) {
    return;
  }
  this_01 = *(TDynamicMeshOverlay<float,3> **)pFVar3;
  uVar9 = (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed +
          (pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar9 != 0) &&
     (pFVar3 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar8 = 1;
    uVar10 = 1;
    if ((int)uVar9 < 2) goto joined_r0x00014c8f6147;
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      if ((*(short *)(lVar4 + *(longlong *)(pFVar3 + (uVar8 >> 9) * 8)) != 0) &&
         (*(short *)(lVar4 + *(longlong *)(pFVar3 + (uVar8 >> 9) * 8)) != -1)) break;
      uVar10 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar9);
  }
  uVar10 = (uint)uVar8;
joined_r0x00014c8f6147:
  do {
    if (uVar10 == uVar9) {
      return;
    }
    while( true ) {
      iVar7 = (int)uVar8;
      local_res10[0] = iVar7;
      bVar6 = TDynamicMeshOverlay<float,3>::IsSeamEdge(this_01,iVar7,(bool *)0x0);
      if (bVar6) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_3,local_res18,(bool *)local_res10);
      }
      uVar10 = iVar7 + 1;
      uVar8 = (ulonglong)uVar10;
      if ((int)uVar9 <= (int)uVar10) break;
      while( true ) {
        lVar5 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
        lVar4 = *(longlong *)
                 ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + (uVar8 >> 9) * 8
                 );
        if ((*(short *)(lVar5 + lVar4) != 0) && (*(short *)(lVar5 + lVar4) != -1)) break;
        uVar10 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        if ((int)uVar9 <= (int)uVar10) goto joined_r0x00014c8f6147;
      }
    }
  } while( true );
}

// OptimizePolygroups @ 14c90d150

void __thiscall
UE::Geometry::FPolygroupsGenerator::OptimizePolygroups
          (FPolygroupsGenerator *this,TFunctionRef<bool___cdecl(int,int)> *param_1)

{
  int iVar1;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  undefined8 *local_res18;
  TFunctionRef<bool___cdecl(int,int)> local_a8;
  code *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined8 **local_80;
  undefined1 local_78 [48];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  pTVar2 = &this->FoundPolygroups;
  local_a8._0_8_ = *(undefined8 *)param_1;
  uVar13 = 0;
  local_a8._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_90 = local_res8;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::OptimizePolygroups'::__l2::<lambda_1>,int,int>
             ::Call;
  local_78._0_8_ = (FRegion *)0x0;
  local_78._8_8_ = 0;
  local_78._16_8_ = (FScriptContainerElement *)0x0;
  local_78._24_4_ = 0;
  local_78._28_4_ = 0;
  local_78._32_8_ = (FScriptContainerElement *)0x0;
  local_78._40_4_ = 0;
  local_78._44_4_ = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_res8[0] = 0;
  FMeshRegionGraph::BuildFromTriangleSets
            ((FMeshRegionGraph *)local_78,this->Mesh,pTVar2,
             (TFunctionRef<int___cdecl(int)> *)&local_98,&local_a8);
  local_res18 = (undefined8 *)local_78;
  iVar15 = this->MinGroupSize + -1;
  bVar7 = false;
  iVar10 = 1;
LAB_14c90d200:
  if (iVar15 <= iVar10) {
    local_80 = &local_res18;
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FPolygroupsGenerator::OptimizePolygroups'::__l2::<lambda_2>,float,int,int>
               ::Call;
    bVar6 = FMeshRegionGraph::MergeSmallRegionsPass
                      ((FMeshRegionGraph *)local_78,iVar10,
                       (TFunctionRef<float___cdecl(int,int)> *)&local_88);
    if (!bVar6) goto LAB_14c90d232;
  }
  iVar1 = iVar10 + 1;
  bVar7 = true;
  iVar10 = iVar15;
  if (iVar1 < iVar15) {
    iVar10 = iVar1;
  }
  goto LAB_14c90d200;
LAB_14c90d232:
  bVar6 = FMeshRegionGraph::OptimizeBorders((FMeshRegionGraph *)local_78,0x19);
  if ((bVar7) || (bVar6)) {
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
    iVar10 = (this->FoundPolygroups).ArrayNum;
    piVar3 = &(this->FoundPolygroups).ArrayMax;
    if ((this->FoundPolygroups).ArrayMax < 0) {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar10);
      (this->FoundPolygroups).ArrayNum = 0;
      if (*piVar3 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar3);
      }
    }
    else {
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar10);
      (this->FoundPolygroups).ArrayNum = 0;
    }
    local_res10 = (ulonglong)(int)local_78._8_4_;
    uVar11 = local_res10;
    uVar18 = uVar13;
    iVar10 = local_78._8_4_;
    if (0 < (int)local_78._8_4_) {
      do {
        uVar12 = (uint)uVar13;
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)uVar11)) {
          uVar16 = ~uVar12 >> 0x1f;
          uVar8 = 0;
          uVar9 = uVar8;
          if ((int)uVar12 < (int)uVar11) {
            uVar9 = uVar16;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar11 = local_78._8_8_ & 0xffffffff;
          }
          iVar10 = (int)uVar11;
          if (*(FScriptContainerElement *)(local_78._0_8_ + uVar18) != (FScriptContainerElement)0x0)
          {
            if ((int)uVar12 < iVar10) {
              uVar9 = uVar8;
              if ((int)uVar12 < iVar10) {
                uVar9 = uVar16;
              }
              if (uVar9 == 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar10 = local_78._8_4_;
              }
              if (*(FScriptContainerElement *)(local_78._0_8_ + uVar18) ==
                  (FScriptContainerElement)0x0) goto LAB_14c90d3df;
              if ((int)uVar12 < iVar10) {
                uVar8 = uVar16;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar17 = (FScriptContainerElement *)
                        (local_78._0_8_ + (longlong)(int)uVar12 * 0x30 + 8);
            }
            else {
LAB_14c90d3df:
              pFVar17 = (FScriptContainerElement *)&local_48;
            }
            pFVar14 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar14 <= pFVar17) && (pFVar17 < pFVar14 + (longlong)*piVar3 * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->FoundPolygroups).ArrayNum;
            if (iVar10 == *piVar3) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,piVar3);
            }
            (this->FoundPolygroups).ArrayNum = iVar10 + 1;
            pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)&pFVar14->field_0x0 = 0;
            iVar10 = *(int *)(pFVar17 + 8);
            _Src = *(void **)pFVar17;
            *(int *)&pFVar14[8].field_0x0 = iVar10;
            if (iVar10 == 0) {
              *(int *)(pFVar14 + 0xc) = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar10,0,(ForAnyElementType *)pFVar14,iVar10,(int *)(pFVar14 + 0xc));
              memcpy(*(void **)&pFVar14->field_0x0,_Src,(longlong)iVar10 << 2);
            }
            uVar11 = local_78._8_8_ & 0xffffffff;
          }
        }
        iVar10 = (int)uVar11;
        uVar13 = (ulonglong)(uVar12 + 1);
        local_res10 = local_res10 - 1;
        uVar18 = uVar18 + 0x30;
      } while (local_res10 != 0);
    }
  }
  else {
    iVar10 = local_78._8_4_;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
    iVar10 = local_78._8_4_;
  }
  if ((FScriptContainerElement *)local_78._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._32_8_);
    iVar10 = local_78._8_4_;
  }
  if ((FScriptContainerElement *)local_78._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._16_8_);
    iVar10 = local_78._8_4_;
  }
  DestructItems<UE::Geometry::FMeshRegionGraph::FRegion,int>((FRegion *)local_78._0_8_,iVar10);
  if ((FRegion *)local_78._0_8_ != (FRegion *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// PostProcessPolygroups @ 14c90f7f0

void __thiscall
UE::Geometry::FPolygroupsGenerator::PostProcessPolygroups
          (FPolygroupsGenerator *this,bool param_1,TFunctionRef<bool___cdecl(int,int)> *param_2)

{
  TFunctionRef<bool___cdecl(int,int)> local_18;
  
  if ((param_1) && (1 < this->MinGroupSize)) {
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
    OptimizePolygroups(this,&local_18);
  }
  return;
}

