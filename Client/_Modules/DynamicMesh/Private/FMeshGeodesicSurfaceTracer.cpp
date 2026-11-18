// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// TraceMeshFromBaryPoint @ 14c844720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromBaryPoint
          (FMeshGeodesicSurfaceTracer *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,double param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  FDynamicMesh3 *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint local_138;
  uint uStack_134;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  FMeshSurfaceDirection local_f8 [9];
  
  if (this->Mesh == (FDynamicMesh3 *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mesh",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshGeodesicSurfaceTracer.cpp"
                        ,0x2f5,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      dVar13 = (double)(*pcVar10)();
      return dVar13;
    }
  }
  dVar20 = __real_3ff0000000000000;
  dVar13 = (param_2->field0_0x0)._s_0.X;
  dVar22 = (param_2->field0_0x0)._s_0.Y;
  if (__real_3ff0000000000000 <= dVar13) {
    dVar13 = __real_3ff0000000000000;
  }
  dVar19 = (param_2->field0_0x0)._s_0.Z;
  if (__real_3ff0000000000000 <= dVar22) {
    dVar22 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar19) {
    dVar19 = __real_3ff0000000000000;
  }
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  if (dVar19 <= 0.0) {
    dVar19 = 0.0;
  }
  dVar14 = dVar13 + dVar22 + dVar19;
  if (dVar14 <= __real_3e45798ee2308c3a) {
    local_128._s_0.X = ___xmm_3fd55555555555553fd5555555555555;
    local_128._s_0.Y = _UNK_150aa23f8;
    local_128._s_0.Z = __real_3fd5555555555555;
  }
  else {
    dVar14 = __real_3ff0000000000000 / dVar14;
    local_128._s_0.X = dVar14 * dVar13;
    local_128._s_0.Y = dVar14 * dVar22;
    local_128._s_0.Z = dVar14 * dVar19;
  }
  uVar3 = *(undefined8 *)
           (*(longlong *)
             ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc);
  FDynamicMesh3::GetTriNormal(this->Mesh,(TVector<double> *)&local_110._s_0,param_1);
  uStack_134 = (uint)((ulonglong)uVar3 >> 0x20);
  pFVar6 = this->Mesh;
  local_138 = (uint)uVar3;
  pFVar7 = (pFVar6->Vertices).Blocks.AllocatorInstance.Data;
  lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uStack_134 >> 9) * 8);
  pdVar1 = (double *)(lVar8 + (ulonglong)(uStack_134 & 0x1ff) * 0x18);
  lVar9 = *(longlong *)(pFVar7 + (ulonglong)(local_138 >> 9) * 8);
  pdVar2 = (double *)(lVar9 + (ulonglong)(local_138 & 0x1ff) * 0x18);
  dVar14 = *(double *)(lVar8 + 0x10 + (ulonglong)(uStack_134 & 0x1ff) * 0x18) -
           *(double *)(lVar9 + 0x10 + (ulonglong)(local_138 & 0x1ff) * 0x18);
  dVar22 = *pdVar1 - *pdVar2;
  dVar19 = pdVar1[1] - pdVar2[1];
  dVar13 = SQRT(dVar19 * dVar19 + dVar22 * dVar22 + dVar14 * dVar14);
  if (dVar13 <= 0.0) {
    dVar22 = 0.0;
    dVar19 = 0.0;
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar20 / dVar13;
    dVar22 = dVar13 * dVar22;
    dVar19 = dVar13 * dVar19;
    dVar13 = dVar13 * dVar14;
  }
  dVar21 = dVar19 * local_110._s_0.Z - dVar13 * local_110._s_0.Y;
  dVar23 = dVar13 * local_110._s_0.X - dVar22 * local_110._s_0.Z;
  dVar14 = dVar22 * local_110._s_0.Y - dVar19 * local_110._s_0.X;
  auVar15._0_8_ = dVar21 * dVar21;
  auVar15._8_8_ = 0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar23 * dVar23 + auVar15._0_8_ + dVar14 * dVar14;
  auVar16 = sqrtpd(auVar15,auVar16);
  if (auVar16._0_8_ <= 0.0) {
    dVar21 = 0.0;
    dVar23 = 0.0;
    dVar11 = 0.0;
  }
  else {
    dVar11 = dVar20 / auVar16._0_8_;
    dVar21 = dVar11 * dVar21;
    dVar23 = dVar11 * dVar23;
    dVar11 = dVar11 * dVar14;
  }
  dVar14 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar19 = dVar14 * dVar19 + dVar4 * dVar22 + dVar5 * dVar13;
  dVar22 = dVar14 * dVar23 + dVar4 * dVar21 + dVar5 * dVar11;
  dVar13 = dVar22 * dVar22 + dVar19 * dVar19;
  if (dVar13 <= __real_3e45798ee0000000) {
    local_f8[0].Dir.field0_0x0._8_8_ = 0.0;
  }
  else {
    dVar20 = dVar20 / SQRT(dVar13);
    local_f8[0].Dir.field0_0x0._8_8_ = dVar22 * dVar20;
    dVar20 = dVar19 * dVar20;
  }
  uVar17 = SUB84(dVar20,0);
  uVar18 = (uint)((ulonglong)dVar20 >> 0x20);
  local_f8[0].EdgeID =
       *(uint *)(*(longlong *)
                  ((pFVar6->TriangleEdges).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar3 = *(undefined8 *)
           (*(longlong *)
             ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_f8[0].EdgeID >> 9) * 8) +
           (ulonglong)(local_f8[0].EdgeID & 0x1ff) * 0x10);
  if (((uint)((ulonglong)uVar3 >> 0x20) == local_138) && ((uint)uVar3 == uStack_134)) {
    local_f8[0].Dir.field0_0x0._8_8_ =
         CONCAT44((uint)((ulonglong)local_f8[0].Dir.field0_0x0._8_8_ >> 0x20) ^
                  __xmm_80000000000000008000000000000000._4_4_,
                  (uint)local_f8[0].Dir.field0_0x0._8_8_ ^
                  (uint)__xmm_80000000000000008000000000000000);
    uVar17 = uVar17 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar18 = uVar18 ^ __xmm_80000000000000008000000000000000._4_4_;
  }
  local_f8[0].Dir.field0_0x0._0_8_ = CONCAT44(uVar18,uVar17);
  dVar13 = TraceMeshFromBaryPoint(this,param_1,(TVector<double> *)&local_128._s_0,local_f8,param_4);
  return dVar13;
}

// TraceMeshFromBaryPoint @ 14c844b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromBaryPoint
          (FMeshGeodesicSurfaceTracer *this,int param_1,TVector<double> *param_2,
          FMeshSurfaceDirection *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  FTraceResult *pFVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  ETraceClassification EVar16;
  int iVar17;
  undefined1 local_1f8 [80];
  double local_1a8;
  undefined8 local_198;
  TVector<double>_u_0 local_188;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  int local_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  uint uStack_120;
  int iStack_11c;
  undefined8 local_118;
  FMeshSurfaceDirection local_108;
  FTraceResult local_f0;
  FTraceResult local_98;
  
  if ((this->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshGeodesicSurfaceTracer.cpp"
                         ,0x31d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    auVar13._8_8_ = (double)(*pcVar6)();
    return auVar13._8_8_;
  }
  auVar13._8_8_ = (param_2->field0_0x0)._s_0.X;
  dVar1 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (__real_3ff0000000000000 <= auVar13._8_8_) {
    auVar13._8_8_ = __real_3ff0000000000000;
  }
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar14 = SUB84(dVar1,0);
  uVar15 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_3ff0000000000000 <= dVar1) {
    uVar14 = SUB84(__real_3ff0000000000000,0);
    uVar15 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (auVar13._8_8_ <= 0.0) {
    auVar13._8_8_ = 0.0;
  }
  if ((double)CONCAT44(uVar15,uVar14) <= 0.0) {
    uVar14 = 0;
    uVar15 = 0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar1 = auVar13._8_8_ + (double)CONCAT44(uVar15,uVar14) + dVar2;
  if (dVar1 <= __real_3e45798ee2308c3a) {
    local_188._s_0.X = ___xmm_3fd55555555555553fd5555555555555;
    local_188._s_0.Y = _UNK_150aa23f8;
    dStack_130 = __real_3fd5555555555555;
    local_138 = __real_3fd5555555555555;
    local_188._s_0.Z = __real_3fd5555555555555;
  }
  else {
    dVar1 = __real_3ff0000000000000 / dVar1;
    local_188._s_0.X = dVar1 * auVar13._8_8_;
    local_188._s_0.Y = dVar1 * (double)CONCAT44(uVar15,uVar14);
    dStack_130 = local_188._s_0.Y;
    local_138 = local_188._s_0.X;
    local_188._s_0.Z = dVar1 * dVar2;
  }
  auStack_150._8_8_ = (param_3->Dir).field0_0x0._s_0.X;
  auVar13._8_8_ = (param_3->Dir).field0_0x0._s_0.Y;
  auVar12._0_8_ = (double)auStack_150._8_8_ * (double)auStack_150._8_8_;
  auVar12._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar13._8_8_ * auVar13._8_8_ + auVar12._0_8_;
  auVar13 = sqrtpd(auVar12,auVar7);
  if (auVar13._0_8_ <= 0.0) {
    dStack_140 = 0.0;
    auStack_150._8_8_ = 0.0;
  }
  else {
    dStack_140 = __real_3ff0000000000000 / auVar13._0_8_;
    auStack_150._8_8_ = dStack_140 * (double)auStack_150._8_8_;
    dStack_140 = dStack_140 * (param_3->Dir).field0_0x0._s_0.Y;
  }
  iStack_11c = param_3->EdgeID;
  lVar11 = *(longlong *)
            ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8);
  local_198 = *(undefined8 *)(lVar11 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  if ((((int)local_198 == iStack_11c) || ((int)((ulonglong)local_198 >> 0x20) == iStack_11c)) ||
     (*(int *)(lVar11 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) == iStack_11c)) {
    pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
    local_108.EdgeID = iStack_11c;
    uStack_160 = 0;
    local_168 = 0;
    uStack_120 = uStack_120 & 0xffffff00;
    auStack_150._0_8_ = local_108._0_8_;
    local_118 = __real_bff0000000000000;
    local_158 = param_1;
    local_128 = local_188._s_0.Z;
    local_108.Dir.field0_0x0._s_0.X = (double)auStack_150._8_8_;
    local_108.Dir.field0_0x0._s_0.Y = dStack_140;
    if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar4 + (longlong)(this->SurfaceTrace).ArrayMax * 0x58)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      auVar13._8_8_ = (double)(*pcVar6)();
      return auVar13._8_8_;
    }
    auVar13._4_4_ = (this->SurfaceTrace).ArrayNum;
    if (auVar13._4_4_ == (this->SurfaceTrace).ArrayMax) {
      auVar13._4_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x858,&(this->SurfaceTrace).AllocatorInstance,&(this->SurfaceTrace).ArrayMax);
    }
    (this->SurfaceTrace).ArrayNum = auVar13._4_4_ + 1;
    lVar11 = (longlong)auVar13._4_4_ * 0x58;
    pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
    *(ulonglong *)(pFVar4 + lVar11) = CONCAT44(uStack_164,local_168);
    *(undefined8 *)(pFVar4 + lVar11 + 8) = uStack_160;
    *(ulonglong *)(pFVar4 + lVar11 + 0x10) = CONCAT44(uStack_154,local_158);
    *(undefined8 *)(pFVar4 + lVar11 + 0x10 + 8) = auStack_150._0_8_;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20) = auStack_150._8_8_;
    *(double *)(pFVar4 + lVar11 + 0x20 + 8) = dStack_140;
    *(double *)(pFVar4 + lVar11 + 0x30) = local_138;
    *(double *)(pFVar4 + lVar11 + 0x30 + 8) = dStack_130;
    *(double *)(pFVar4 + lVar11 + 0x40) = local_128;
    *(ulonglong *)(pFVar4 + lVar11 + 0x40 + 8) = CONCAT44(iStack_11c,uStack_120);
    *(undefined8 *)(pFVar4 + lVar11 + 0x50) = local_118;
    pFVar10 = GeodesicSingleTriangleUtils::TraceTriangleFromBaryPoint
                        (&local_f0,this->Mesh,param_1,(TVector<double> *)&local_188._s_0,&local_108,
                         &this->ScratchTri2,param_4);
    pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
    auVar13._0_4_ = pFVar10->Classification;
    auVar13._4_4_ = *(int *)&pFVar10->field_0x4;
    auVar13._8_8_ = pFVar10->TraceDist;
    auVar3._4_4_ = (int)((ulonglong)auVar13._8_8_ >> 0x20);
    local_1f8._16_4_ = pFVar10->TriID;
    local_1f8._20_4_ = *(undefined4 *)&pFVar10->field_0x14;
    local_1f8._24_4_ = (pFVar10->SurfaceDirection).EdgeID;
    local_1f8._28_4_ = *(undefined4 *)&(pFVar10->SurfaceDirection).field_0x4;
    local_1f8._32_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.X;
    local_1f8._40_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.Y;
    local_1f8._48_8_ = (pFVar10->Barycentric).field0_0x0._s_0.X;
    local_1f8._56_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Y;
    local_1f8._64_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Z;
    local_1f8._72_8_ = *(undefined8 *)&pFVar10->bIsEdgePoint;
    local_1a8 = pFVar10->EdgeAlpha;
    EVar16 = auVar13._0_4_;
    iVar17 = SUB84(auVar13._8_8_,0);
    local_1f8._0_16_ = auVar13;
    if ((pFVar4 <= (FScriptContainerElement *)local_1f8) &&
       ((FScriptContainerElement *)local_1f8 <
        pFVar4 + (longlong)(this->SurfaceTrace).ArrayMax * 0x58)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        auVar13._8_8_ = (double)(*pcVar6)();
        return auVar13._8_8_;
      }
      EVar16 = local_1f8._0_4_;
      auVar13._4_4_ = local_1f8._4_4_;
      iVar17 = local_1f8._8_4_;
      auVar3._4_4_ = local_1f8._12_4_;
    }
    iVar9 = (this->SurfaceTrace).ArrayNum;
    if (iVar9 == (this->SurfaceTrace).ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->SurfaceTrace).AllocatorInstance,
                         &(this->SurfaceTrace).ArrayMax);
      EVar16 = local_1f8._0_4_;
      auVar13._4_4_ = local_1f8._4_4_;
      iVar17 = local_1f8._8_4_;
      auVar3._4_4_ = local_1f8._12_4_;
    }
    (this->SurfaceTrace).ArrayNum = iVar9 + 1;
    lVar11 = (longlong)iVar9 * 0x58;
    pFVar5 = (this->SurfaceTrace).AllocatorInstance.Data;
    pFVar4 = pFVar5 + lVar11;
    *(ETraceClassification *)pFVar4 = EVar16;
    *(int *)(pFVar4 + 4) = auVar13._4_4_;
    *(int *)(pFVar4 + 8) = iVar17;
    *(int *)(pFVar4 + 0xc) = auVar3._4_4_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_1f8._16_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x10 + 8) = local_1f8._24_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x20) = local_1f8._32_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x20 + 8) = local_1f8._40_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x30) = local_1f8._48_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x30 + 8) = local_1f8._56_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x40) = local_1f8._64_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x40 + 8) = local_1f8._72_8_;
    *(double *)(pFVar5 + lVar11 + 0x50) = local_1a8;
    dVar1 = param_4 - (double)local_1f8._8_8_;
    while (1 < auVar13._0_4_ - DistanceTerminated) {
      pFVar10 = GeodesicSingleTriangleUtils::TraceNextTriangle
                          (&local_98,this->Mesh,(FTraceResult *)local_1f8,&this->ScratchTri2,dVar1);
      pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
      auVar3._0_4_ = pFVar10->Classification;
      auVar3._4_4_ = *(int *)&pFVar10->field_0x4;
      auVar3._8_8_ = pFVar10->TraceDist;
      auVar13._4_4_ = (int)((ulonglong)auVar3._8_8_ >> 0x20);
      local_1f8._16_4_ = pFVar10->TriID;
      local_1f8._20_4_ = *(undefined4 *)&pFVar10->field_0x14;
      local_1f8._24_4_ = (pFVar10->SurfaceDirection).EdgeID;
      local_1f8._28_4_ = *(undefined4 *)&(pFVar10->SurfaceDirection).field_0x4;
      local_1f8._32_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.X;
      local_1f8._40_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.Y;
      local_1f8._48_8_ = (pFVar10->Barycentric).field0_0x0._s_0.X;
      local_1f8._56_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Y;
      local_1f8._64_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Z;
      local_1f8._72_8_ = *(undefined8 *)&pFVar10->bIsEdgePoint;
      local_1a8 = pFVar10->EdgeAlpha;
      auVar13._8_8_ = auVar13._8_8_ + (double)auVar3._8_8_;
      dVar1 = dVar1 - (double)auVar3._8_8_;
      auVar13._0_4_ = auVar3._0_4_;
      iVar17 = (int)auVar3._8_8_;
      local_1f8._0_16_ = auVar3;
      if ((pFVar4 <= (FScriptContainerElement *)local_1f8) &&
         ((FScriptContainerElement *)local_1f8 <
          pFVar4 + (longlong)(this->SurfaceTrace).ArrayMax * 0x58)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          auVar13._8_8_ = (double)(*pcVar6)();
          return auVar13._8_8_;
        }
        auVar13._0_4_ = local_1f8._0_4_;
        auVar3._4_4_ = local_1f8._4_4_;
        iVar17 = local_1f8._8_4_;
        auVar13._4_4_ = local_1f8._12_4_;
      }
      iVar9 = (this->SurfaceTrace).ArrayNum;
      if (iVar9 == (this->SurfaceTrace).ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&(this->SurfaceTrace).AllocatorInstance,
                           &(this->SurfaceTrace).ArrayMax);
        auVar13._0_4_ = local_1f8._0_4_;
        auVar3._4_4_ = local_1f8._4_4_;
        iVar17 = local_1f8._8_4_;
        auVar13._4_4_ = local_1f8._12_4_;
      }
      (this->SurfaceTrace).ArrayNum = iVar9 + 1;
      lVar11 = (longlong)iVar9 * 0x58;
      pFVar5 = (this->SurfaceTrace).AllocatorInstance.Data;
      pFVar4 = pFVar5 + lVar11;
      *(ETraceClassification *)pFVar4 = auVar13._0_4_;
      *(int *)(pFVar4 + 4) = auVar3._4_4_;
      *(int *)(pFVar4 + 8) = iVar17;
      *(int *)(pFVar4 + 0xc) = auVar13._4_4_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_1f8._16_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x10 + 8) = local_1f8._24_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x20) = local_1f8._32_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x20 + 8) = local_1f8._40_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x30) = local_1f8._48_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x30 + 8) = local_1f8._56_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x40) = local_1f8._64_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x40 + 8) = local_1f8._72_8_;
      *(double *)(pFVar5 + lVar11 + 0x50) = local_1a8;
      auVar13._0_4_ = auVar3._0_4_;
    }
  }
  else {
    auVar13._8_8_ = 0.0;
  }
  return auVar13._8_8_;
}

// TraceMeshFromVertex @ 14c8450c0

double __thiscall
UE::Geometry::FMeshGeodesicSurfaceTracer::TraceMeshFromVertex
          (FMeshGeodesicSurfaceTracer *this,FMeshTangentDirection *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FTraceResult *pFVar10;
  longlong lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  ETraceClassification EVar12;
  int iVar13;
  undefined1 local_1f8 [80];
  double local_1a8;
  undefined8 auStack_1a0 [4];
  undefined8 local_180;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  uint local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  uint local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 local_f8;
  FTraceResult local_f0;
  FTraceResult local_98;
  
  if ((this->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshGeodesicSurfaceTracer.cpp"
                         ,0x35a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    auVar1._8_8_ = (double)(*pcVar6)();
    return auVar1._8_8_;
  }
  auVar1._4_4_ = param_1->VID;
  uVar3 = param_1->EdgeID;
  bVar8 = FDynamicMesh3::IsBowtieVertex(this->Mesh,auVar1._4_4_);
  if (bVar8) {
    auVar1._8_8_ = 0.0;
  }
  else {
    __libm_sse2_sincos_();
    uStack_100 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    local_f8 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    auStack_1a0[3] = 0;
    local_158 = *(uint *)(*(longlong *)
                           ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar3 >> 9) * 8) + 8 + (ulonglong)(uVar3 & 0x1ff) * 0x10);
    lVar11 = *(longlong *)
              ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_158 >> 9) * 8);
    local_180 = *(undefined8 *)(lVar11 + (ulonglong)(local_158 & 0x1ff) * 0xc);
    auStack_1a0[1] = 0;
    auStack_1a0[2] = 0;
    local_108 = uVar3;
    if ((int)local_180 == auVar1._4_4_) {
      auVar2._4_4_ = 0;
    }
    else if ((int)((ulonglong)local_180 >> 0x20) == auVar1._4_4_) {
      auVar2._4_4_ = 1;
    }
    else {
      auVar2._4_4_ = -1;
      if (*(int *)(lVar11 + 8 + (ulonglong)(local_158 & 0x1ff) * 0xc) == auVar1._4_4_) {
        auVar2._4_4_ = 2;
      }
      if ((auVar2._4_4_ < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        auVar1._8_8_ = (double)(*pcVar6)();
        return auVar1._8_8_;
      }
    }
    uStack_150 = CONCAT44(uStack_104,local_108);
    uStack_148 = uStack_100;
    auStack_1a0[(longlong)auVar2._4_4_ + 1] = 0x3ff0000000000000;
    pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
    uStack_140 = local_f8;
    local_138 = auStack_1a0[1];
    uStack_130 = auStack_1a0[2];
    local_118 = __real_bff0000000000000;
    uStack_160 = 0;
    local_168 = 0;
    local_128 = auStack_1a0[3];
    uStack_120 = uStack_120 & 0xffffff00;
    uStack_11c = uVar3;
    if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar4 + (longlong)(this->SurfaceTrace).ArrayMax * 0x58)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      auVar1._8_8_ = (double)(*pcVar6)();
      return auVar1._8_8_;
    }
    auVar1._4_4_ = (this->SurfaceTrace).ArrayNum;
    if (auVar1._4_4_ == (this->SurfaceTrace).ArrayMax) {
      auVar1._4_4_ = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x858,&(this->SurfaceTrace).AllocatorInstance,
                                &(this->SurfaceTrace).ArrayMax);
    }
    (this->SurfaceTrace).ArrayNum = auVar1._4_4_ + 1;
    lVar11 = (longlong)auVar1._4_4_ * 0x58;
    pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
    *(ulonglong *)(pFVar4 + lVar11) = CONCAT44(uStack_164,local_168);
    *(undefined8 *)(pFVar4 + lVar11 + 8) = uStack_160;
    *(ulonglong *)(pFVar4 + lVar11 + 0x10) = CONCAT44(uStack_154,local_158);
    *(undefined8 *)(pFVar4 + lVar11 + 0x10 + 8) = uStack_150;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20) = uStack_148;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20 + 8) = uStack_140;
    *(undefined8 *)(pFVar4 + lVar11 + 0x30) = local_138;
    *(undefined8 *)(pFVar4 + lVar11 + 0x30 + 8) = uStack_130;
    *(undefined8 *)(pFVar4 + lVar11 + 0x40) = local_128;
    *(ulonglong *)(pFVar4 + lVar11 + 0x40 + 8) = CONCAT44(uStack_11c,uStack_120);
    *(undefined8 *)(pFVar4 + lVar11 + 0x50) = local_118;
    pFVar10 = GeodesicSingleTriangleUtils::TraceFromVertex
                        (&local_f0,this->Mesh,param_1,&this->ScratchTri2,param_2);
    pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
    auVar1._0_4_ = pFVar10->Classification;
    auVar1._4_4_ = *(int *)&pFVar10->field_0x4;
    auVar1._8_8_ = pFVar10->TraceDist;
    auVar2._4_4_ = (int)((ulonglong)auVar1._8_8_ >> 0x20);
    local_1f8._16_4_ = pFVar10->TriID;
    local_1f8._20_4_ = *(undefined4 *)&pFVar10->field_0x14;
    local_1f8._24_4_ = (pFVar10->SurfaceDirection).EdgeID;
    local_1f8._28_4_ = *(undefined4 *)&(pFVar10->SurfaceDirection).field_0x4;
    local_1f8._32_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.X;
    local_1f8._40_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.Y;
    local_1f8._48_8_ = (pFVar10->Barycentric).field0_0x0._s_0.X;
    local_1f8._56_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Y;
    local_1f8._64_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Z;
    local_1f8._72_8_ = *(undefined8 *)&pFVar10->bIsEdgePoint;
    local_1a8 = pFVar10->EdgeAlpha;
    EVar12 = auVar1._0_4_;
    iVar13 = SUB84(auVar1._8_8_,0);
    local_1f8._0_16_ = auVar1;
    if ((pFVar4 <= (FScriptContainerElement *)local_1f8) &&
       ((FScriptContainerElement *)local_1f8 <
        pFVar4 + (longlong)(this->SurfaceTrace).ArrayMax * 0x58)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        auVar1._8_8_ = (double)(*pcVar6)();
        return auVar1._8_8_;
      }
      EVar12 = local_1f8._0_4_;
      auVar1._4_4_ = local_1f8._4_4_;
      iVar13 = local_1f8._8_4_;
      auVar2._4_4_ = local_1f8._12_4_;
    }
    iVar9 = (this->SurfaceTrace).ArrayNum;
    if (iVar9 == (this->SurfaceTrace).ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->SurfaceTrace).AllocatorInstance,
                         &(this->SurfaceTrace).ArrayMax);
      EVar12 = local_1f8._0_4_;
      auVar1._4_4_ = local_1f8._4_4_;
      iVar13 = local_1f8._8_4_;
      auVar2._4_4_ = local_1f8._12_4_;
    }
    (this->SurfaceTrace).ArrayNum = iVar9 + 1;
    lVar11 = (longlong)iVar9 * 0x58;
    pFVar5 = (this->SurfaceTrace).AllocatorInstance.Data;
    pFVar4 = pFVar5 + lVar11;
    *(ETraceClassification *)pFVar4 = EVar12;
    *(int *)(pFVar4 + 4) = auVar1._4_4_;
    *(int *)(pFVar4 + 8) = iVar13;
    *(int *)(pFVar4 + 0xc) = auVar2._4_4_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_1f8._16_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x10 + 8) = local_1f8._24_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x20) = local_1f8._32_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x20 + 8) = local_1f8._40_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x30) = local_1f8._48_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x30 + 8) = local_1f8._56_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x40) = local_1f8._64_8_;
    *(undefined8 *)(pFVar5 + lVar11 + 0x40 + 8) = local_1f8._72_8_;
    *(double *)(pFVar5 + lVar11 + 0x50) = local_1a8;
    dVar7 = param_2 - (double)local_1f8._8_8_;
    while (1 < auVar1._0_4_ - DistanceTerminated) {
      pFVar10 = GeodesicSingleTriangleUtils::TraceNextTriangle
                          (&local_98,this->Mesh,(FTraceResult *)local_1f8,&this->ScratchTri2,dVar7);
      pFVar4 = (this->SurfaceTrace).AllocatorInstance.Data;
      auVar2._0_4_ = pFVar10->Classification;
      auVar2._4_4_ = *(int *)&pFVar10->field_0x4;
      auVar2._8_8_ = pFVar10->TraceDist;
      auVar1._4_4_ = (int)((ulonglong)auVar2._8_8_ >> 0x20);
      local_1f8._16_4_ = pFVar10->TriID;
      local_1f8._20_4_ = *(undefined4 *)&pFVar10->field_0x14;
      local_1f8._24_4_ = (pFVar10->SurfaceDirection).EdgeID;
      local_1f8._28_4_ = *(undefined4 *)&(pFVar10->SurfaceDirection).field_0x4;
      local_1f8._32_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.X;
      local_1f8._40_8_ = (pFVar10->SurfaceDirection).Dir.field0_0x0._s_0.Y;
      local_1f8._48_8_ = (pFVar10->Barycentric).field0_0x0._s_0.X;
      local_1f8._56_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Y;
      local_1f8._64_8_ = (pFVar10->Barycentric).field0_0x0._s_0.Z;
      local_1f8._72_8_ = *(undefined8 *)&pFVar10->bIsEdgePoint;
      local_1a8 = pFVar10->EdgeAlpha;
      auVar1._8_8_ = auVar1._8_8_ + (double)auVar2._8_8_;
      dVar7 = dVar7 - (double)auVar2._8_8_;
      auVar1._0_4_ = auVar2._0_4_;
      iVar13 = (int)auVar2._8_8_;
      local_1f8._0_16_ = auVar2;
      if ((pFVar4 <= (FScriptContainerElement *)local_1f8) &&
         ((FScriptContainerElement *)local_1f8 <
          pFVar4 + (longlong)(this->SurfaceTrace).ArrayMax * 0x58)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          auVar1._8_8_ = (double)(*pcVar6)();
          return auVar1._8_8_;
        }
        auVar1._0_4_ = local_1f8._0_4_;
        auVar2._4_4_ = local_1f8._4_4_;
        iVar13 = local_1f8._8_4_;
        auVar1._4_4_ = local_1f8._12_4_;
      }
      iVar9 = (this->SurfaceTrace).ArrayNum;
      if (iVar9 == (this->SurfaceTrace).ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&(this->SurfaceTrace).AllocatorInstance,
                           &(this->SurfaceTrace).ArrayMax);
        auVar1._0_4_ = local_1f8._0_4_;
        auVar2._4_4_ = local_1f8._4_4_;
        iVar13 = local_1f8._8_4_;
        auVar1._4_4_ = local_1f8._12_4_;
      }
      (this->SurfaceTrace).ArrayNum = iVar9 + 1;
      lVar11 = (longlong)iVar9 * 0x58;
      pFVar5 = (this->SurfaceTrace).AllocatorInstance.Data;
      pFVar4 = pFVar5 + lVar11;
      *(ETraceClassification *)pFVar4 = auVar1._0_4_;
      *(int *)(pFVar4 + 4) = auVar2._4_4_;
      *(int *)(pFVar4 + 8) = iVar13;
      *(int *)(pFVar4 + 0xc) = auVar1._4_4_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_1f8._16_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x10 + 8) = local_1f8._24_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x20) = local_1f8._32_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x20 + 8) = local_1f8._40_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x30) = local_1f8._48_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x30 + 8) = local_1f8._56_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x40) = local_1f8._64_8_;
      *(undefined8 *)(pFVar5 + lVar11 + 0x40 + 8) = local_1f8._72_8_;
      *(double *)(pFVar5 + lVar11 + 0x50) = local_1a8;
      auVar1._0_4_ = auVar2._0_4_;
    }
  }
  return auVar1._8_8_;
}

