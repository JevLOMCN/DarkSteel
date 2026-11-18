// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// operator() @ 14c94b980

void __thiscall
`UE::Geometry::FTriangulateCurvesOp::CalculateResult'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TVector<double> *param_5,TVector<double> *param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  FDynamicMeshAttributeSet *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  TVector<double> *pTVar17;
  TDynamicMeshOverlay<float,3> *pTVar18;
  FDynamicMeshAttributeSet *pFVar19;
  TDynamicMeshOverlay<float,2> *pTVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_1a8 [8];
  FIndex3i_u_0 local_1a0;
  int local_190;
  float local_188;
  float fStack_184;
  float local_180;
  TVector<double>_u_0 local_178;
  TVector<double> local_160;
  TVector<double>_u_0 local_148;
  TQuaternion<double>_u_0 local_130;
  TVector<double>_u_0 local_110;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  TVector2<float>_u_0 local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  
  dVar11 = __real_3ff0000000000000;
  if (param_3->ArrayNum != 0) {
    lVar7 = *(longlong *)this;
    local_148._s_0.X = *(double *)(lVar7 + 0x30);
    local_148._s_0.Y = *(double *)(lVar7 + 0x38);
    local_148._s_0.Z = *(double *)(lVar7 + 0x40);
    local_178._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_178._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_178._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_130._s_0.X = 0.0;
    local_130._s_0.W = __real_3ff0000000000000;
    local_130._s_0.Y = 0.0;
    local_130._s_0.Z = 0.0;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_130._s_0,(TVector<double> *)&local_178._s_0,param_6);
    pTVar17 = UE::Geometry::TTransformSRT3<double>::InverseTransformNormal<double>
                        ((TTransformSRT3<double> *)(lVar7 + 0x10),&local_160,param_6);
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar12 = __real_3e45798ee2308c3a;
    iVar6 = param_2->ArrayNum;
    pFVar21 = (param_2->AllocatorInstance).Data;
    local_190 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    local_180 = (float)(pTVar17->field0_0x0)._s_0.Z;
    pFVar1 = pFVar21 + (longlong)iVar6 * 0x18;
    fStack_184 = (float)(pTVar17->field0_0x0)._s_0.Y;
    local_188 = (float)(pTVar17->field0_0x0)._s_0.X;
    while( true ) {
      if (param_2->ArrayNum != iVar6) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a8);
      }
      iVar15 = local_190;
      if (pFVar21 == pFVar1) break;
      dVar2 = *(double *)(pFVar21 + 0x10);
      lVar7 = *(longlong *)this;
      dVar10 = *(double *)pFVar21;
      dVar9 = *(double *)(pFVar21 + 8);
      dVar3 = *(double *)(lVar7 + 0x48);
      uVar22 = SUB84(dVar3,0) & uVar13;
      uVar23 = (uint)((ulonglong)dVar3 >> 0x20) & uVar14;
      if (dVar12 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar12) {
        dVar3 = dVar11 / dVar3;
      }
      else {
        dVar3 = 0.0;
      }
      dVar4 = *(double *)(lVar7 + 0x50);
      uVar22 = SUB84(dVar4,0) & uVar13;
      uVar23 = (uint)((ulonglong)dVar4 >> 0x20) & uVar14;
      if (dVar12 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar12) {
        dVar4 = dVar11 / dVar4;
      }
      else {
        dVar4 = 0.0;
      }
      dVar5 = *(double *)(lVar7 + 0x58);
      uVar22 = SUB84(dVar5,0) & uVar13;
      uVar23 = (uint)((ulonglong)dVar5 >> 0x20) & uVar14;
      if (dVar12 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar12) {
        dVar5 = dVar11 / dVar5;
      }
      else {
        dVar5 = 0.0;
      }
      local_178._s_0.X = dVar10 - *(double *)(lVar7 + 0x30);
      local_178._s_0.Z = dVar2 - *(double *)(lVar7 + 0x40);
      local_178._s_0.Y = dVar9 - *(double *)(lVar7 + 0x38);
      local_160.field0_0x0._s_0.Z = dVar2;
      pTVar17 = UE::Geometry::TQuaternion<double>::InverseMultiply
                          ((TQuaternion<double> *)(lVar7 + 0x10),&local_160,
                           (TVector<double> *)&local_178._s_0);
      local_f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_ec = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_110._s_0.X = dVar3 * (pTVar17->field0_0x0)._s_0.X;
      local_d8 = 0;
      local_110._s_0.Y = dVar4 * (pTVar17->field0_0x0)._s_0.Y;
      local_d6 = 0;
      local_110._s_0.Z = dVar5 * (pTVar17->field0_0x0)._s_0.Z;
      local_f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_e4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uVar22 = UE::Geometry::FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_110._s_0);
      if ((param_1->VertexNormals).bIsSet != false) {
        lVar7 = *(longlong *)
                 ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar22 >> 9) * 8);
        *(ulonglong *)(lVar7 + (ulonglong)(uVar22 & 0x1ff) * 0xc) = CONCAT44(fStack_184,local_188);
        *(float *)(lVar7 + 8 + (ulonglong)(uVar22 & 0x1ff) * 0xc) = local_180;
      }
      pFVar8 = (param_1->AttributeSet).Ptr;
      pFVar19 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar19 = pFVar8;
      }
      if ((pFVar19->NormalLayers).Array.ArrayNum < 1) {
        pTVar18 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      else {
        pTVar18 = *(TDynamicMeshOverlay<float,3> **)
                   (pFVar19->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(pTVar18,&local_188);
      pFVar8 = (param_1->AttributeSet).Ptr;
      pFVar19 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar19 = pFVar8;
      }
      if ((pFVar19->UVLayers).Array.ArrayNum < 1) {
        pTVar20 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      else {
        pTVar20 = *(TDynamicMeshOverlay<float,2> **)(pFVar19->UVLayers).Array.AllocatorInstance.Data
        ;
      }
      dVar10 = dVar10 - local_148._s_0.X;
      dVar9 = dVar9 - local_148._s_0.Y;
      dVar2 = dVar2 - local_148._s_0.Z;
      pTVar17 = UE::Geometry::TFrame3<double>::GetAxis
                          ((TFrame3<double> *)&local_148._s_0,&local_160,0);
      dVar3 = (pTVar17->field0_0x0)._s_0.Y;
      dVar4 = (pTVar17->field0_0x0)._s_0.X;
      dVar5 = (pTVar17->field0_0x0)._s_0.Z;
      pTVar17 = UE::Geometry::TFrame3<double>::GetAxis
                          ((TFrame3<double> *)&local_148._s_0,&local_160,1);
      local_1a0._s_0.A =
           (int)(float)((dVar9 * dVar3 + dVar10 * dVar4 + dVar2 * dVar5) *
                       *(double *)((longlong)this + 8));
      local_1a0._s_0.B =
           (int)(float)(*(double *)((longlong)this + 8) *
                       (dVar9 * (pTVar17->field0_0x0)._s_0.Y + dVar10 * (pTVar17->field0_0x0)._s_0.X
                       + dVar2 * (pTVar17->field0_0x0)._s_0.Z));
      UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(pTVar20,(float *)local_1a0.ABC);
      pFVar21 = pFVar21 + 0x18;
    }
    iVar6 = param_3->ArrayNum;
    pFVar21 = (param_3->AllocatorInstance).Data;
    pFVar1 = pFVar21 + (longlong)iVar6 * 0xc;
    while( true ) {
      if (param_3->ArrayNum != iVar6) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_1a8);
      }
      if (pFVar21 == pFVar1) break;
      local_1a0._s_0.A = *(int *)pFVar21 + iVar15;
      local_1a0._s_0.B = *(int *)(pFVar21 + 4) + iVar15;
      local_1a0._s_0.C = *(int *)(pFVar21 + 8) + iVar15;
      if (param_7) {
        local_1a0._s_0.B = *(int *)(pFVar21 + 8) + iVar15;
        local_1a0._s_0.C = *(int *)(pFVar21 + 4) + iVar15;
      }
      iVar16 = UE::Geometry::FDynamicMesh3::AppendTriangle
                         (param_1,(FIndex3i *)&local_1a0._s_0,param_4);
      pFVar8 = (param_1->AttributeSet).Ptr;
      pFVar19 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar19 = pFVar8;
      }
      if ((pFVar19->NormalLayers).Array.ArrayNum < 1) {
        pTVar18 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      else {
        pTVar18 = *(TDynamicMeshOverlay<float,3> **)
                   (pFVar19->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                (pTVar18,iVar16,(FIndex3i *)&local_1a0._s_0,true);
      pFVar8 = (param_1->AttributeSet).Ptr;
      pFVar19 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar19 = pFVar8;
      }
      if ((pFVar19->UVLayers).Array.ArrayNum < 1) {
        pTVar20 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      else {
        pTVar20 = *(TDynamicMeshOverlay<float,2> **)(pFVar19->UVLayers).Array.AllocatorInstance.Data
        ;
      }
      UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                (pTVar20,iVar16,(FIndex3i *)&local_1a0._s_0,true);
      pFVar21 = pFVar21 + 0xc;
    }
  }
  return;
}

// operator() @ 14c9595c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`UE::Geometry::FTriangulateCurvesOp::CalculateResult'::__l2::<lambda_4>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,
          TArrayView<UE::Geometry::FTriangulateCurvesOp::FCurvePath_const_,int> *param_3,int param_4
          )

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  code *pcVar9;
  double dVar10;
  void *_Src;
  bool bVar11;
  EPolygonOffsetJoinType EVar12;
  EPolygonOffsetEndType EVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  TVector<double> *pTVar19;
  FCurvePath *pFVar20;
  TGeneralPolygon2<double> *pTVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  ulonglong uVar25;
  ForAnyElementType *pFVar26;
  uint uVar27;
  TGeneralPolygon2<double> *pTVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  TGeneralPolygon2<double> *pTVar34;
  ulonglong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  uint local_414;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_410;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_400;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_3f0;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> local_3e0;
  ForAnyElementType local_3d0;
  int local_3c8;
  int local_3c4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_3c0;
  void *local_3b0;
  undefined8 local_3a8;
  TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> local_398;
  longlong local_348;
  void *local_340;
  int iStack_338;
  undefined4 uStack_334;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_330;
  TGeneralPolygon2<double> local_320;
  FDelaunay2 local_2f8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  TQuaternion<double>_u_0 TStack_2c0;
  TGeneralPolygon2<double> *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  TGeneralPolygon2<double> *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  TGeneralPolygon2<double> *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  TGeneralPolygon2<double> *local_268;
  uint uStack_260;
  undefined4 uStack_25c;
  TGeneralPolygon2<double> *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TGeneralPolygon2<double> *local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  TGeneralPolygon2<double> *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  TGeneralPolygon2<double> *local_228;
  uint uStack_220;
  undefined4 uStack_21c;
  TGeneralPolygon2<double> *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  TVector<double>_u_0 local_208;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_1e8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_1d8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_1c8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_1b8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_1a8;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_198;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_188;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  void **local_c0;
  TVector<double> local_b8 [5];
  
  uVar27 = __xmm_80000000000000008000000000000000._4_4_;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  lVar32 = *(longlong *)this;
  if (*(char *)(lVar32 + 0xb8) != '\0') {
    uVar36 = *(uint *)((longlong)&param_1->field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar37 = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
    uVar38 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_1->field0_0x0 =
         *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_1->field0_0x0 + 4) = uVar36;
    *(uint *)((longlong)&param_1->field0_0x0 + 8) = uVar37;
    *(uint *)((longlong)&param_1->field0_0x0 + 0xc) = uVar38;
    uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    (param_1->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar27,(uint)uVar4 ^ uVar15);
  }
  dVar10 = __real_3ff0000000000000;
  pTVar28 = (TGeneralPolygon2<double> *)0x0;
  local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e0.ArrayNum = 0;
  local_3f0.ArrayNum = 0;
  local_3f0.ArrayMax = 0;
  local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e0.ArrayMax = 0;
  if ((*(char *)(lVar32 + 0xa1) == '\x02') || ((byte)(*(char *)(lVar32 + 0xa1) - 3U) < 2)) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  local_2d8 = (param_2->field0_0x0)._s_0.X;
  dStack_2d0 = (param_2->field0_0x0)._s_0.Y;
  local_2c8 = (param_2->field0_0x0)._s_0.Z;
  local_3b0 = (void *)0x0;
  local_3a8 = 0;
  local_168._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_168._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_168._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TStack_2c0._s_0.X = 0.0;
  TStack_2c0._s_0.W = __real_3ff0000000000000;
  TStack_2c0._s_0.Y = 0.0;
  TStack_2c0._s_0.Z = 0.0;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_2c0._s_0,(TVector<double> *)&local_168._s_0,param_1);
  dVar5 = _UNK_15076b868;
  dVar39 = ___xmm_3ff0000000000000bff0000000000000;
  dVar41 = _UNK_150744178;
  dVar40 = ___xmm_40000000000000003ff0000000000000;
  local_c0 = &local_3b0;
  local_400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8 = local_2d8;
  dStack_f0 = dStack_2d0;
  local_400.ArrayNum = 0;
  local_400.ArrayMax = 0;
  cVar6 = *(char *)(lVar32 + 0xa3);
  local_e8 = local_2c8;
  dStack_e0 = TStack_2c0._s_0.X;
  local_d8 = TStack_2c0._s_0.Y;
  dStack_d0 = TStack_2c0._s_0.Z;
  local_c8 = TStack_2c0._s_0.W;
  pTVar21 = pTVar28;
  FVar30.Data = (FScriptContainerElement *)pTVar28;
  if (((cVar6 == '\x01') &&
      (pTVar21 = (TGeneralPolygon2<double> *)0x0,
      FVar30.Data = (FScriptContainerElement *)(TGeneralPolygon2<double> *)0x0,
      *(double *)(lVar32 + 0xb0) != 0.0)) &&
     (iVar16 = param_3->ArrayNum, pTVar34 = pTVar28, 0 < iVar16)) {
    do {
      iVar17 = 0;
      uVar27 = (uint)pTVar28;
      uVar15 = 0;
      if ((int)uVar27 < iVar16) {
        uVar15 = ~uVar27 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      pFVar20 = (FCurvePath *)(&param_3->DataPtr->bClosed + (longlong)&(pTVar34->Outer).Vertices);
      if (pFVar20->bClosed == false) {
        ``UE::Geometry::FTriangulateCurvesOp::CalculateResult'::__l2::<lambda_4>::operator()'::__l2
        ::<lambda_2>::operator()(&local_f8,pFVar20);
        local_398.Polygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_398.Result.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (int)local_3a8;
        local_398.Polygons.ArrayNum = 0;
        local_398.Polygons.ArrayMax = 0;
        local_398.Offset = dVar40;
        local_398.MiterLimit = dVar41;
        local_398.MaxStepsPerRadian = dVar39;
        local_398.DefaultStepsPerRadianScale = dVar5;
        local_398.JoinType = Square;
        local_398.EndType = Polygon;
        local_398.Result.ArrayNum = 0;
        local_398.Result.ArrayMax = 0;
        local_340 = local_3b0;
        if ((int)local_3a8 < 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
          iVar17 = local_398.Polygons.ArrayNum;
        }
        iStack_338 = iVar16;
        if ((local_398.Polygons.AllocatorInstance.Data <= (FScriptContainerElement *)&local_340) &&
           ((FScriptContainerElement *)&local_340 <
            local_398.Polygons.AllocatorInstance.Data + (longlong)local_398.Polygons.ArrayMax * 0x10
           )) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
          iVar17 = local_398.Polygons.ArrayNum;
        }
        if (iVar17 == local_398.Polygons.ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&local_398,&local_398.Polygons.ArrayMax);
        }
        local_398.Polygons.ArrayNum = iVar17 + 1;
        *(void **)(local_398.Polygons.AllocatorInstance.Data + (longlong)iVar17 * 0x10) = local_340;
        *(ulonglong *)(local_398.Polygons.AllocatorInstance.Data + (longlong)iVar17 * 0x10 + 8) =
             CONCAT44(uStack_334,iStack_338);
        lVar32 = *(longlong *)this;
        local_398.Offset = *(double *)(lVar32 + 0xb0);
        local_398.MiterLimit = *(double *)(lVar32 + 0xa8);
        cVar7 = *(char *)(lVar32 + 0xa4);
        if (cVar7 == '\0') {
LAB_14c95994d:
          EVar12 = Square;
        }
        else if (cVar7 == '\x01') {
          EVar12 = Miter;
        }
        else {
          if (cVar7 != '\x02') {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CurveOps\\TriangulateCurvesOp.cpp"
                                ,0xc3,L"");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
            goto LAB_14c95994d;
          }
          EVar12 = Round;
        }
        local_398.JoinType = EVar12;
        cVar7 = *(char *)(*(longlong *)this + 0xa5);
        if (cVar7 == '\0') {
LAB_14c959999:
          EVar13 = Square;
        }
        else if (cVar7 == '\x01') {
          EVar13 = Round;
        }
        else {
          if (cVar7 != '\x02') {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CurveOps\\TriangulateCurvesOp.cpp"
                                ,0xb4,L"");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
            goto LAB_14c959999;
          }
          EVar13 = Butt;
        }
        local_398.EndType = EVar13;
        bVar11 = UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double>::
                 ComputeResult(&local_398);
        if (bVar11) {
          if ((!bVar14) || (pTVar24 = &local_3e0, (int)uVar27 < 1)) {
            pTVar24 = &local_3f0;
          }
          iVar16 = local_398.Result.ArrayNum;
          if (local_398.Result.ArrayNum != 0) {
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x28,8,local_398.Result.ArrayNum,&pTVar24->AllocatorInstance,
                                &pTVar24->ArrayNum,&pTVar24->ArrayMax);
            ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                      ((pTVar24->AllocatorInstance).Data + (longlong)iVar17 * 0x28,
                       (TGeneralPolygon2<double> *)local_398.Result.AllocatorInstance.Data,iVar16);
          }
        }
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                  ((TGeneralPolygon2<double> *)local_398.Result.AllocatorInstance.Data,
                   local_398.Result.ArrayNum);
        if ((TGeneralPolygon2<double> *)local_398.Result.AllocatorInstance.Data !=
            (TGeneralPolygon2<double> *)0x0) {
          FMemory::Free(local_398.Result.AllocatorInstance.Data);
        }
        if (local_398.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Polygons.AllocatorInstance.Data);
        }
      }
      iVar16 = param_3->ArrayNum;
      pTVar28 = (TGeneralPolygon2<double> *)(ulonglong)(uVar27 + 1);
      pTVar34 = (TGeneralPolygon2<double> *)&pTVar34->Holes;
    } while ((int)(uVar27 + 1) < iVar16);
    pTVar21 = (TGeneralPolygon2<double> *)(ulonglong)(uint)local_3e0.ArrayNum;
    FVar30.Data = local_3e0.AllocatorInstance.Data;
  }
  dVar41 = __real_bff0000000000000;
  dVar40 = __real_3fe0000000000000;
  iVar16 = param_3->ArrayNum;
  local_414 = 0;
  uVar15 = (uint)pTVar21;
  if (0 < iVar16) {
    local_348 = 0;
    do {
      lVar32 = local_348;
      uVar15 = 0;
      if ((int)local_414 < iVar16) {
        uVar15 = ~local_414 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      pFVar20 = (FCurvePath *)(&param_3->DataPtr->bClosed + lVar32);
      if ((cVar6 != '\x01') || (pFVar20->bClosed != false)) {
        ``UE::Geometry::FTriangulateCurvesOp::CalculateResult'::__l2::<lambda_4>::operator()'::__l2
        ::<lambda_2>::operator()(&local_f8,pFVar20);
        _Src = local_3b0;
        lVar22 = (longlong)(int)local_3a8;
        local_3d0.Data = (FScriptContainerElement *)0x0;
        local_3c8 = (int)local_3a8;
        if ((int)local_3a8 == 0) {
          local_3c4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_3a8,0,&local_3d0,(int)local_3a8,&local_3c4);
          memcpy(local_3d0.Data,_Src,lVar22 << 4);
        }
        iVar16 = local_3c8;
        FVar30.Data = local_3d0.Data;
        local_320.Outer.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.Outer.Vertices.ArrayNum = local_3c8;
        if (local_3c8 == 0) {
          local_320.Outer.Vertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_3c8,0,(ForAnyElementType *)&local_320,local_3c8,
                     &local_320.Outer.Vertices.ArrayMax);
          memcpy(local_320.Outer.Vertices.AllocatorInstance.Data,FVar30.Data,(longlong)iVar16 << 4);
        }
        iVar16 = local_3c8;
        FVar30.Data = local_3d0.Data;
        local_320.Holes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.Holes.ArrayNum = 0;
        local_320.Holes.ArrayMax = 0;
        if ((local_3c8 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          iVar16 = (*pcVar9)();
          return iVar16;
        }
        dVar39 = 0.0;
        if (iVar16 != 0) {
          lVar22 = (longlong)iVar16;
          if (0 < iVar16) {
            lVar29 = (longlong)(int)(iVar16 - 1U) << 4;
            FVar23.Data = FVar30.Data;
            uVar15 = iVar16 - 1U;
            uVar27 = 0;
            do {
              uVar36 = 0;
              if ((int)uVar15 < iVar16) {
                uVar36 = ~uVar15 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
              uVar15 = 0;
              if ((int)uVar27 < iVar16) {
                uVar15 = ~uVar27 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
              lVar32 = lVar29 + 8;
              pFVar1 = FVar23.Data + 8;
              pFVar3 = FVar30.Data + lVar29;
              lVar29 = (longlong)FVar23.Data - (longlong)FVar30.Data;
              dVar5 = *(double *)FVar23.Data;
              FVar23.Data = FVar23.Data + 0x10;
              dVar39 = dVar39 + (*(double *)pFVar1 * *(double *)pFVar3 -
                                *(double *)(FVar30.Data + lVar32) * dVar5);
              lVar22 = lVar22 + -1;
              lVar32 = local_348;
              uVar15 = uVar27;
              uVar27 = uVar27 + 1;
            } while (lVar22 != 0);
          }
          dVar39 = dVar39 * dVar40;
        }
        local_320.bOuterIsCW = dVar39 < 0.0;
        if (local_3d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data);
        }
        local_298 = &local_320;
        iStack_290 = 1;
        if ((longlong)local_400._8_8_ < 0) {
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_400.AllocatorInstance.Data,local_400.ArrayNum
                    );
          iVar16 = local_400.ArrayMax;
          local_400._8_8_ = local_400._8_8_ & 0xffffffff00000000;
          if (iVar16 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&local_400.AllocatorInstance,0,&local_400.ArrayMax);
          }
        }
        else {
          DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
                    ((TGeneralPolygon2<double> *)local_400.AllocatorInstance.Data,local_400.ArrayNum
                    );
          local_400._8_8_ = local_400._8_8_ & 0xffffffff00000000;
        }
        local_108._12_4_ = uStack_28c;
        local_108.ArrayNum = iStack_290;
        local_108.DataPtr = local_298;
        UE::Geometry::PolygonsUnion(&local_108,&local_400,true);
        cVar7 = *(char *)(*(longlong *)this + 0xa2);
        if (cVar7 != '\0') {
          cVar8 = *(char *)(*(longlong *)this + 0xa4);
          if (cVar8 == '\0') {
LAB_14c959e0b:
            EVar12 = Square;
          }
          else if (cVar8 == '\x01') {
            EVar12 = Miter;
          }
          else {
            if (cVar8 != '\x02') {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CurveOps\\TriangulateCurvesOp.cpp"
                                  ,0xc3,L"");
              if (bVar11) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
              goto LAB_14c959e0b;
            }
            EVar12 = Round;
          }
          iVar16 = local_400.ArrayNum;
          dVar39 = *(double *)(*(longlong *)this + 0xa8);
          local_288 = (TGeneralPolygon2<double> *)local_400.AllocatorInstance.Data;
          if ((local_400.ArrayNum < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
          iStack_280 = iVar16;
          local_1e8._12_4_ = uStack_27c;
          local_1e8.ArrayNum = iVar16;
          local_1e8.DataPtr = local_288;
          UE::Geometry::PolygonsOffset
                    (*(double *)(*(longlong *)this + 0xb0),&local_1e8,&local_400,true,dVar39,EVar12,
                     cVar7 != '\x01',dVar41,dVar10);
        }
        if ((!bVar14) || (pTVar24 = &local_3e0, (int)local_414 < 1)) {
          pTVar24 = &local_3f0;
        }
        iVar16 = local_400.ArrayNum;
        if (local_400.ArrayNum != 0) {
          iVar17 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x28,8,local_400.ArrayNum,&pTVar24->AllocatorInstance,
                              &pTVar24->ArrayNum,&pTVar24->ArrayMax);
          ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                    ((pTVar24->AllocatorInstance).Data + (longlong)iVar17 * 0x28,
                     (TGeneralPolygon2<double> *)local_400.AllocatorInstance.Data,iVar16);
        }
        DestructItems<UE::Geometry::TPolygon2<double>,int>
                  ((TPolygon2<double> *)local_320.Holes.AllocatorInstance.Data,
                   local_320.Holes.ArrayNum);
        if (local_320.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Holes.AllocatorInstance.Data);
        }
        if (local_320.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Outer.Vertices.AllocatorInstance.Data);
        }
      }
      iVar16 = param_3->ArrayNum;
      local_414 = local_414 + 1;
      local_348 = lVar32 + 0x18;
      FVar30.Data = local_3e0.AllocatorInstance.Data;
      uVar15 = local_3e0.ArrayNum;
    } while ((int)local_414 < iVar16);
  }
  cVar6 = *(char *)(*(longlong *)this + 0xa1);
  if (cVar6 == '\x01') {
    iVar16 = local_3f0.ArrayNum;
    local_278 = (TGeneralPolygon2<double> *)local_3f0.AllocatorInstance.Data;
    if ((local_3f0.ArrayNum < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    iStack_270 = iVar16;
    local_1d8._12_4_ = uStack_26c;
    local_1d8.ArrayNum = iVar16;
    local_1d8.DataPtr = local_278;
    UE::Geometry::PolygonsUnion(&local_1d8,&local_3f0,true);
  }
  else if (cVar6 == '\x02') {
    local_268 = (TGeneralPolygon2<double> *)FVar30.Data;
    if (((int)uVar15 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    iVar16 = local_3f0.ArrayNum;
    local_258 = (TGeneralPolygon2<double> *)local_3f0.AllocatorInstance.Data;
    uStack_260 = uVar15;
    if ((local_3f0.ArrayNum < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    local_1c8._12_4_ = uStack_25c;
    local_1c8.ArrayNum = uStack_260;
    iStack_250 = iVar16;
    local_1b8._12_4_ = uStack_24c;
    local_1b8.ArrayNum = iVar16;
    local_1b8.DataPtr = local_258;
    local_1c8.DataPtr = local_268;
    UE::Geometry::PolygonsIntersection(&local_1b8,&local_1c8,&local_3f0);
  }
  else if (cVar6 == '\x03') {
    local_248 = (TGeneralPolygon2<double> *)FVar30.Data;
    if (((int)uVar15 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    iVar16 = local_3f0.ArrayNum;
    local_238 = (TGeneralPolygon2<double> *)local_3f0.AllocatorInstance.Data;
    uStack_240 = uVar15;
    if ((local_3f0.ArrayNum < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    local_1a8._12_4_ = uStack_23c;
    local_1a8.ArrayNum = uStack_240;
    iStack_230 = iVar16;
    local_198._12_4_ = uStack_22c;
    local_198.ArrayNum = iVar16;
    local_198.DataPtr = local_238;
    local_1a8.DataPtr = local_248;
    UE::Geometry::PolygonsDifference(&local_198,&local_1a8,&local_3f0);
  }
  else if (cVar6 == '\x04') {
    local_228 = (TGeneralPolygon2<double> *)FVar30.Data;
    if (((int)uVar15 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    iVar16 = local_3f0.ArrayNum;
    local_218 = (TGeneralPolygon2<double> *)local_3f0.AllocatorInstance.Data;
    uStack_220 = uVar15;
    if ((local_3f0.ArrayNum < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      iVar16 = (*pcVar9)();
      return iVar16;
    }
    local_188._12_4_ = uStack_21c;
    local_188.ArrayNum = uStack_220;
    iStack_210 = iVar16;
    local_178._12_4_ = uStack_20c;
    local_178.ArrayNum = iVar16;
    local_178.DataPtr = local_218;
    local_188.DataPtr = local_228;
    UE::Geometry::PolygonsExclusiveOr(&local_178,&local_188,&local_3f0);
  }
  local_414 = 0;
  iVar16 = param_4;
  if (0 < local_3f0.ArrayNum) {
    do {
      uVar31 = 0;
      local_2f8.RandomStream.InitialSeed = 0;
      local_2f8.RandomStream.Seed = 0;
      local_2f8.bKeepFastEdgeAdjacencyData = false;
      local_2f8.bValidateEdges = true;
      local_2f8.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
      uVar15 = 0;
      if ((int)local_414 < local_3f0.ArrayNum) {
        uVar15 = ~local_414 >> 0x1f;
      }
      local_2f8.bIsConstrained = false;
      local_2f8.Result = NotComputed;
      local_2f8.bAutomaticallyFixEdgesToDuplicateVertices = true;
      local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_330.ArrayNum = 0;
      local_330.ArrayMax = 0;
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.ArrayNum = 0;
      local_3c0.ArrayMax = 0;
      local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_410.ArrayNum = 0;
      local_410.ArrayMax = 0;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      UE::Geometry::FDelaunay2::Triangulate<double>
                (&local_2f8,
                 (TGeneralPolygon2<double> *)
                 (local_3f0.AllocatorInstance.Data + (longlong)(int)local_414 * 0x28),&local_330,
                 &local_3c0,true);
      uVar15 = local_3c0.ArrayNum;
      uVar25 = (ulonglong)local_410.ArrayNum;
      if (local_410.ArrayNum < local_3c0.ArrayNum) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_3c0.ArrayNum - local_410.ArrayNum,&local_410.AllocatorInstance,
                   &local_410.ArrayNum,&local_410.ArrayMax);
        uVar25 = local_410._8_8_ & 0xffffffff;
      }
      else {
        if (local_3c0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(local_3c0._8_8_ & 0xffffffff);
        }
        if (local_3c0.ArrayNum < local_410.ArrayNum) {
          uVar27 = local_410.ArrayNum - local_3c0.ArrayNum;
          if ((int)(uVar27 | local_3c0.ArrayNum) < 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
            uVar25 = local_410._8_8_ & 0xffffffff;
          }
          if (uVar27 != 0) {
            iVar18 = ((int)uVar25 - uVar27) - uVar15;
            iVar17 = (int)uVar25;
            if (iVar18 != 0) {
              memmove(local_410.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18,
                      local_410.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18 +
                      (longlong)(int)uVar27 * 0x18,(longlong)iVar18 * 0x18);
              iVar17 = local_410.ArrayNum;
            }
            local_410.ArrayNum = iVar17 - uVar27;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&local_410.AllocatorInstance,iVar17 - uVar27,&local_410.ArrayMax);
            uVar25 = local_410._8_8_ & 0xffffffff;
          }
        }
      }
      uVar33 = uVar31;
      uVar35 = uVar31;
      if (0 < (int)uVar15) {
        while( true ) {
          uVar36 = (uint)uVar31;
          uVar27 = 0;
          if ((int)uVar36 < (int)uVar15) {
            uVar27 = ~uVar36 >> 0x1f;
          }
          iVar17 = (int)uVar25;
          if (uVar27 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
            iVar17 = local_410.ArrayNum;
          }
          local_208._s_0.Z = 0.0;
          local_208._s_0.X = (double)*(undefined8 *)(local_3c0.AllocatorInstance.Data + uVar33);
          local_208._s_0.Y = (double)*(undefined8 *)(local_3c0.AllocatorInstance.Data + uVar33 + 8);
          pTVar19 = UE::Geometry::operator*<double>
                              (local_b8,(TQuaternion<double> *)&TStack_2c0._s_0,
                               (TVector<double> *)&local_208._s_0);
          dVar40 = local_2d8 + (pTVar19->field0_0x0)._s_0.X;
          dVar41 = dStack_2d0 + (pTVar19->field0_0x0)._s_0.Y;
          dVar10 = local_2c8 + (pTVar19->field0_0x0)._s_0.Z;
          uVar15 = 0;
          if ((int)uVar36 < iVar17) {
            uVar15 = ~uVar36 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
          uVar31 = (ulonglong)(uVar36 + 1);
          *(double *)(local_410.AllocatorInstance.Data + uVar35) = dVar40;
          *(double *)(local_410.AllocatorInstance.Data + uVar35 + 8) = dVar41;
          *(double *)(local_410.AllocatorInstance.Data + uVar35 + 0x10) = dVar10;
          if (local_3c0.ArrayNum <= (int)(uVar36 + 1)) break;
          uVar25 = local_410._8_8_ & 0xffffffff;
          uVar33 = uVar33 + 0x10;
          uVar35 = uVar35 + 0x18;
          uVar15 = local_3c0.ArrayNum;
        }
      }
      param_4 = iVar16 + 1;
      local_148._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_148._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_148._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      local_128._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      __l2::<lambda_1>::operator()
                (*(void **)((longlong)this + 0x18),*(FDynamicMesh3 **)(*(longlong *)this + 8),
                 &local_410,&local_330,iVar16,(TVector<double> *)&local_128._s_0,
                 (TVector<double> *)&local_148._s_0,true);
      if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.AllocatorInstance.Data);
      }
      if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.AllocatorInstance.Data);
      }
      if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.AllocatorInstance.Data);
      }
      if (local_2f8.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
        (**(code **)&local_2f8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
                  (&local_2f8.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
      }
      local_414 = local_414 + 1;
      iVar16 = param_4;
    } while ((int)local_414 < local_3f0.ArrayNum);
  }
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            ((TGeneralPolygon2<double> *)local_400.AllocatorInstance.Data,local_400.ArrayNum);
  if ((TGeneralPolygon2<double> *)local_400.AllocatorInstance.Data !=
      (TGeneralPolygon2<double> *)0x0) {
    FMemory::Free(local_400.AllocatorInstance.Data);
  }
  if (local_3b0 != (void *)0x0) {
    FMemory::Free(local_3b0);
  }
  pFVar26 = &local_3d0;
  lVar32 = 2;
  do {
    pFVar2 = pFVar26 + -1;
    pFVar26 = pFVar26 + -2;
    lVar32 = lVar32 + -1;
    DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
              ((TGeneralPolygon2<double> *)pFVar26->Data,*(int *)&pFVar2->Data);
    if (pFVar26->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar26->Data);
    }
  } while (lVar32 != 0);
  return param_4;
}

// AddSpline @ 14c95c200

void __thiscall
UE::Geometry::FTriangulateCurvesOp::AddSpline
          (FTriangulateCurvesOp *this,USplineComponent *param_1,double param_2)

{
  uint uVar1;
  int *piVar2;
  void *_Dst;
  FScriptContainerElement *pFVar3;
  double dVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = (this->Paths).ArrayNum;
  piVar2 = &(this->Paths).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Paths).AllocatorInstance,piVar2);
  }
  pFVar3 = (this->Paths).AllocatorInstance.Data;
  (this->Paths).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6;
  *(undefined8 *)(pFVar3 + lVar7 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x18 + 0x10) = 0;
  USplineComponent::ConvertSplineToPolyLine
            (param_1,World,(float)(param_2 * param_2),
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (pFVar3 + lVar7 * 0x18 + 8));
  FVar5 = (FScriptContainerElement)USplineComponent::IsClosedLoop(param_1);
  pFVar3[lVar7 * 0x18] = FVar5;
  if (((bool)FVar5) && (1 < *(int *)(pFVar3 + lVar7 * 0x18 + 0x10))) {
    uVar1 = *(int *)(pFVar3 + lVar7 * 0x18 + 0x10) - 1;
    _Dst = (void *)(*(longlong *)(pFVar3 + lVar7 * 0x18 + 8) + (longlong)(int)uVar1 * 0x18);
    iVar6 = ~uVar1 + *(int *)(pFVar3 + lVar7 * 0x18 + 0x10);
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar6 * 0x18);
    }
    *(int *)(pFVar3 + lVar7 * 0x18 + 0x10) = *(int *)(pFVar3 + lVar7 * 0x18 + 0x10) + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(ForAnyElementType *)(pFVar3 + lVar7 * 0x18 + 8),
               *(int *)(pFVar3 + lVar7 * 0x18 + 0x10),(int *)(pFVar3 + lVar7 * 0x18 + 0x14));
  }
  if ((this->Paths).ArrayNum == 1) {
    dVar4 = (double)param_1->_padding_;
    (this->FirstPathTransform).Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
    (this->FirstPathTransform).Rotation.XY.m128d_f64[1] = dVar4;
    dVar4 = (double)param_1->_padding_;
    (this->FirstPathTransform).Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
    (this->FirstPathTransform).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar4 = (double)param_1->_padding_;
    (this->FirstPathTransform).Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
    (this->FirstPathTransform).Translation.XY.m128d_f64[1] = dVar4;
    dVar4 = (double)param_1->_padding_;
    (this->FirstPathTransform).Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
    (this->FirstPathTransform).Translation.ZW.m128d_f64[1] = dVar4;
    dVar4 = (double)param_1->_padding_;
    (this->FirstPathTransform).Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
    (this->FirstPathTransform).Scale3D.XY.m128d_f64[1] = dVar4;
    dVar4 = (double)param_1->_padding_;
    (this->FirstPathTransform).Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
    (this->FirstPathTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  }
  return;
}

// AddWorldCurve @ 14c95c520

void __thiscall
UE::Geometry::FTriangulateCurvesOp::AddWorldCurve
          (FTriangulateCurvesOp *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          bool param_2,TTransform<double> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  void *_Dst;
  TVector<double> *pTVar10;
  longlong lVar11;
  
  iVar7 = (this->Paths).ArrayNum;
  piVar1 = &(this->Paths).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Paths).AllocatorInstance,piVar1);
  }
  (this->Paths).ArrayNum = iVar7 + 1;
  lVar9 = (longlong)iVar7;
  pFVar2 = (this->Paths).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 0x10) = 0;
  pFVar2[lVar9 * 0x18] = (FScriptContainerElement)param_2;
  if ((param_2) && (iVar7 = param_1->ArrayNum, 1 < iVar7)) {
    pTVar10 = param_1->DataPtr;
    uVar8 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar8 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar11 = (longlong)param_1->ArrayNum + -1;
    iVar7 = param_1->ArrayNum + -1;
    pTVar3 = param_1->DataPtr;
    if (((pTVar3[lVar11].field0_0x0._s_0.X != (pTVar10->field0_0x0)._s_0.X) ||
        (pTVar3[lVar11].field0_0x0._s_0.Y != (pTVar10->field0_0x0)._s_0.Y)) ||
       (pTVar3[lVar11].field0_0x0._s_0.Z != (pTVar10->field0_0x0)._s_0.Z)) goto LAB_14c95c770;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15c,L"Invalid count (%lld)"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->ArrayNum < iVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = param_1->DataPtr;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9a9,L"Invalid range size: %lld"), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iVar7 == 0) goto LAB_14c95c7e5;
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar7,(ForAnyElementType *)(pFVar2 + lVar9 * 0x18 + 8),
                       (int *)(pFVar2 + lVar9 * 0x18 + 0x10),(int *)(pFVar2 + lVar9 * 0x18 + 0x14));
    _Dst = (void *)(*(longlong *)(pFVar2 + lVar9 * 0x18 + 8) + (longlong)iVar7 * 0x18);
  }
  else {
LAB_14c95c770:
    iVar7 = param_1->ArrayNum;
    lVar11 = (longlong)iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9a9,L"Invalid range size: %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (iVar7 == 0) goto LAB_14c95c7e5;
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar7,(ForAnyElementType *)(pFVar2 + lVar9 * 0x18 + 8),
                       (int *)(pFVar2 + lVar9 * 0x18 + 0x10),(int *)(pFVar2 + lVar9 * 0x18 + 0x14));
    pTVar10 = param_1->DataPtr;
    _Dst = (void *)(*(longlong *)(pFVar2 + lVar9 * 0x18 + 8) + (longlong)iVar7 * 0x18);
  }
  memcpy(_Dst,pTVar10,lVar11 * 0x18);
LAB_14c95c7e5:
  if ((this->Paths).ArrayNum == 1) {
    dVar5 = (param_3->Rotation).XY.m128d_f64[1];
    (this->FirstPathTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    (this->FirstPathTransform).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->FirstPathTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    (this->FirstPathTransform).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Translation).XY.m128d_f64[1];
    (this->FirstPathTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    (this->FirstPathTransform).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Translation).ZW.m128d_f64[1];
    (this->FirstPathTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    (this->FirstPathTransform).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->FirstPathTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    (this->FirstPathTransform).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->FirstPathTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    (this->FirstPathTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  }
  return;
}

// ApplyThickness @ 14c95ea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FTriangulateCurvesOp::ApplyThickness(FTriangulateCurvesOp *this,double param_1)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  double local_48;
  float local_3c;
  ForAnyElementType local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (0.0 < this->Thickness) {
    FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)local_88,(FDynamicMesh3 *)this->_padding_);
    local_48 = this->Thickness;
    local_3c = (float)param_1;
    FExtrudeMesh::Apply((FExtrudeMesh *)local_88);
    local_88._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
    DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
              ((FExtrusionInfo *)local_38.Data,local_30);
    if ((FExtrusionInfo *)local_38.Data != (FExtrusionInfo *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_88._16_8_ != 0) {
      plVar1 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar1 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// CalculateResult @ 14c96a850

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FTriangulateCurvesOp::CalculateResult
          (FTriangulateCurvesOp *this,FProgressCancel *param_1)

{
  double dVar1;
  double dVar2;
  EFlattenCurveMethod EVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  FDynamicMesh3 *this_00;
  undefined1 auVar7 [16];
  double dVar8;
  FScriptContainerElement *pFVar9;
  FTriangulateCurvesOp *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  TVector<double> *pTVar17;
  FDynamicMeshAttributeSet *pFVar18;
  FDynamicMeshAttributeSet *pFVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  double *pdVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  longlong lVar27;
  FDynamicMeshAttributeSet *pFVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  double *pdVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  double dVar38;
  undefined4 uVar40;
  double dVar39;
  undefined4 uVar41;
  double dVar42;
  undefined4 uVar44;
  double dVar43;
  double dVar45;
  uint uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined1 local_4b6;
  undefined1 local_4b5;
  uint local_4b4;
  FIndex3i_u_0 local_4b0;
  undefined8 local_4a0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_498;
  int local_488;
  longlong local_480;
  longlong local_478;
  float local_470;
  float fStack_46c;
  float local_468;
  TVector<double>_u_0 local_460;
  FTriangulateCurvesOp *local_448;
  double local_440;
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_420;
  double *local_408;
  double local_400;
  TVector<double>_u_0 local_3f8;
  TQuaternion<double>_u_0 local_3e0;
  FCurvePath *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  FCurvePath *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  FTriangulateCurvesOp *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  FTriangulateCurvesOp **local_380;
  TVector<double>_u_0 local_378;
  undefined8 local_360;
  float local_358;
  undefined8 local_354;
  float local_34c;
  TVector2<float>_u_0 local_348;
  undefined2 local_340;
  undefined1 local_33e;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  undefined1 local_298 [16];
  double local_288;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double> local_208;
  TArrayView<UE::Geometry::FTriangulateCurvesOp::FCurvePath_const_,int> local_1e8;
  TArrayView<UE::Geometry::FTriangulateCurvesOp::FCurvePath_const_,int> local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  TVector<double> local_160;
  double local_138;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100 [8];
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar5 = *(code **)&param_1->CancelF;
    plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar20 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar20 = plVar6;
    }
    uVar16 = (**(code **)(*plVar20 + 8))();
    bVar11 = (bool)(*pcVar5)(uVar16);
    param_1->WasCancelled = bVar11;
    if (bVar11 != false) {
      return;
    }
  }
  FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
  FDynamicMesh3::EnableTriangleGroups((FDynamicMesh3 *)this->_padding_,0);
  FDynamicMesh3::EnableVertexNormals
            ((FDynamicMesh3 *)this->_padding_,&UE::Math::TVector<float>::ZAxisVector);
  local_1b0 = (this->FirstPathTransform).Rotation.XY.m128d_f64[0];
  local_1a8 = (this->FirstPathTransform).Rotation.XY.m128d_f64[1];
  local_1a0 = (this->FirstPathTransform).Rotation.ZW.m128d_f64[0];
  local_198 = (this->FirstPathTransform).Rotation.ZW.m128d_f64[1];
  local_1b8 = (this->FirstPathTransform).Translation.ZW.m128d_f64[0];
  local_288 = (this->FirstPathTransform).Scale3D.ZW.m128d_f64[0];
  local_1c8 = (this->FirstPathTransform).Translation.XY.m128d_f64[0];
  dStack_1c0 = (this->FirstPathTransform).Translation.XY.m128d_f64[1];
  local_298 = *(undefined1 (*) [16])(this->FirstPathTransform).Scale3D.XY.m128d_f64;
  local_190 = local_1c8;
  dStack_188 = dStack_1c0;
  local_180 = local_1b8;
  local_178 = local_298;
  local_168 = local_288;
  (**(code **)(this->_padding_ + 8))(this,&local_1b0);
  iVar15 = (this->Paths).ArrayNum;
  pFVar31 = (this->Paths).AllocatorInstance.Data;
  uVar48 = (undefined4)__real_7fefffffffffffff;
  uVar49 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar41 = (undefined4)__real_ffefffffffffffff;
  uVar44 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  pFVar30 = pFVar31 + 0x10;
  local_4a0 = pFVar31 + (longlong)iVar15 * 0x18;
  uVar51 = uVar41;
  uVar52 = uVar44;
  uVar53 = uVar48;
  uVar54 = uVar49;
  uVar55 = uVar48;
  uVar56 = uVar49;
  uVar57 = uVar41;
  uVar58 = uVar44;
  while( true ) {
    pFVar9 = local_4a0;
    if ((this->Paths).ArrayNum != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FTriangulateCurvesOp::FCurvePath,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    uVar26 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar8 = __real_3e45798ee2308c3a;
    dVar1 = __real_3ff0000000000000;
    if (pFVar31 == pFVar9) break;
    iVar4 = *(int *)pFVar30;
    pdVar24 = *(double **)(pFVar30 + -8);
    pdVar33 = pdVar24 + (longlong)iVar4 * 3;
    while( true ) {
      if (*(int *)pFVar30 != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pdVar24 == pdVar33) break;
      dVar1 = *pdVar24;
      uVar37 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < (double)CONCAT44(uVar54,uVar53)) {
        uVar53 = SUB84(dVar1,0);
        uVar54 = uVar37;
      }
      if ((double)CONCAT44(uVar44,uVar41) <= dVar1 && dVar1 != (double)CONCAT44(uVar44,uVar41)) {
        uVar41 = SUB84(dVar1,0);
        uVar44 = uVar37;
      }
      dVar1 = pdVar24[1];
      uVar37 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < (double)CONCAT44(uVar56,uVar55)) {
        uVar55 = SUB84(dVar1,0);
        uVar56 = uVar37;
      }
      if ((double)CONCAT44(uVar58,uVar57) <= dVar1 && dVar1 != (double)CONCAT44(uVar58,uVar57)) {
        uVar57 = SUB84(dVar1,0);
        uVar58 = uVar37;
      }
      dVar1 = pdVar24[2];
      uVar37 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < (double)CONCAT44(uVar49,uVar48)) {
        uVar48 = SUB84(dVar1,0);
        uVar49 = uVar37;
      }
      if ((double)CONCAT44(uVar52,uVar51) <= dVar1 && dVar1 != (double)CONCAT44(uVar52,uVar51)) {
        uVar51 = SUB84(dVar1,0);
        uVar52 = uVar37;
      }
      pdVar24 = pdVar24 + 3;
    }
    pFVar31 = pFVar31 + 0x18;
    pFVar30 = pFVar30 + 0x18;
  }
  dVar38 = __real_4059000000000000;
  if (this->bWorldSpaceUVScale == false) {
    dVar38 = (double)CONCAT44(uVar52,uVar51) - (double)CONCAT44(uVar49,uVar48);
    dVar42 = (double)CONCAT44(uVar58,uVar57) - (double)CONCAT44(uVar56,uVar55);
    dVar45 = (double)CONCAT44(uVar44,uVar41) - (double)CONCAT44(uVar54,uVar53);
    if (dVar38 <= 0.0) {
      dVar38 = 0.0;
    }
    if (dVar42 <= 0.0) {
      dVar42 = 0.0;
    }
    if (dVar45 <= 0.0) {
      dVar45 = 0.0;
    }
    if (dVar38 <= dVar42) {
      dVar38 = dVar42;
    }
    if (dVar38 <= dVar45) {
      dVar38 = dVar45;
    }
  }
  pFVar28 = (FDynamicMeshAttributeSet *)0x0;
  EVar3 = this->FlattenMethod;
  dVar38 = this->UVScaleFactor / dVar38;
  uVar29 = 0;
  local_448 = this;
  local_440 = dVar38;
  local_400 = dVar38;
  if (EVar3 == DoNotFlatten) {
    local_4b4 = 0;
    if (0 < (this->Paths).ArrayNum) {
      uVar13 = (uint)__xmm_80000000000000008000000000000000;
      uVar46 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_480 = 0;
      local_478 = 0;
      pFVar19 = pFVar28;
      do {
        lVar32 = local_478;
        lVar27 = local_480;
        uVar50 = (uint)pFVar19;
        uVar22 = ~uVar50 >> 0x1f;
        uVar47 = uVar29;
        if ((int)uVar50 < (this->Paths).ArrayNum) {
          uVar47 = uVar22;
        }
        if ((uVar47 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (2 < *(int *)((this->Paths).AllocatorInstance.Data + lVar32 + 0x10)) {
          uVar47 = uVar29;
          if ((int)uVar50 < (this->Paths).ArrayNum) {
            uVar47 = uVar22;
          }
          if ((uVar47 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          PolygonTriangulation::ComputePolygonPlane<double>
                    ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                     ((this->Paths).AllocatorInstance.Data + lVar32 + 8),
                     (TVector<double> *)&local_438._s_0,&local_130);
          if (this->bFlipResult != false) {
            local_438._0_4_ = local_438._0_4_ ^ uVar13;
            local_438._4_4_ = local_438._4_4_ ^ uVar46;
            local_438._8_4_ = local_438._8_4_ ^ uVar13;
            local_438._12_4_ = local_438._12_4_ ^ uVar46;
            local_438._s_0.Z =
                 (double)CONCAT44((uint)((ulonglong)local_438._16_8_ >> 0x20) ^ uVar46,
                                  SUB84(local_438._s_0.Z,0) ^ uVar13);
          }
          local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_498.ArrayNum = 0;
          local_498.ArrayMax = 0;
          uVar13 = uVar29;
          if ((int)uVar50 < (this->Paths).ArrayNum) {
            uVar13 = uVar22;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          PolygonTriangulation::TriangulateSimplePolygon<double>
                    ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                     ((this->Paths).AllocatorInstance.Data + lVar32 + 8),&local_498,false);
          uVar16 = local_438._16_8_;
          bVar11 = this->bFlipResult;
          dVar38 = (double)CONCAT44(local_438._4_4_,local_438._0_4_);
          dVar42 = (double)CONCAT44(local_438._12_4_,local_438._8_4_);
          uVar13 = 0;
          if ((int)uVar50 < (this->Paths).ArrayNum) {
            uVar13 = uVar22;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = local_448;
          pFVar30 = (this->Paths).AllocatorInstance.Data;
          this_00 = (FDynamicMesh3 *)this->_padding_;
          local_2d8._16_8_ = uVar16;
          local_2d8._s_0.X = dVar38;
          local_2d8._s_0.Y = dVar42;
          if (local_498.ArrayNum != 0) {
            local_3e0._s_0.X = 0.0;
            local_3e0._s_0.W = dVar1;
            local_3e0._s_0.Y = 0.0;
            local_3e0._s_0.Z = 0.0;
            local_3f8._s_0.X = (double)local_448->_padding_;
            local_3f8._s_0.Y = (double)local_448->_padding_;
            local_3f8._s_0.Z = (double)local_448->_padding_;
            local_280._s_0.X =
                 (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
            local_280._s_0.Y =
                 (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
            local_280._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_3e0._s_0,(TVector<double> *)&local_280._s_0,
                       (TVector<double> *)&local_2d8._s_0);
            TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&pFVar10->_padding_,(TVector<double> *)&local_338._s_0
                       ,(TVector<double> *)&local_2d8._s_0);
            dVar38 = local_338._s_0.X * (double)pFVar10->_padding_;
            dVar42 = local_338._s_0.Y * (double)pFVar10->_padding_;
            dVar45 = local_338._s_0.Z * (double)pFVar10->_padding_;
            auVar34._0_8_ = dVar38 * dVar38;
            auVar34._8_8_ = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar42 * dVar42 + auVar34._0_8_ + dVar45 * dVar45;
            auVar35 = sqrtpd(auVar34,auVar7);
            if (auVar35._0_8_ <= 0.0) {
              dVar38 = 0.0;
              dVar42 = 0.0;
              dVar39 = 0.0;
            }
            else {
              dVar39 = dVar1 / auVar35._0_8_;
              dVar38 = dVar39 * dVar38;
              dVar42 = dVar39 * dVar42;
              dVar39 = dVar39 * dVar45;
            }
            pdVar33 = *(double **)(pFVar30 + lVar32 + 8);
            iVar15 = *(int *)(pFVar30 + lVar32 + 0x10);
            local_470 = (float)dVar38;
            local_488 = (this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                        (this_00->VertexRefCounts).RefCounts.CurBlockUsed;
            fStack_46c = (float)dVar42;
            local_408 = pdVar33 + (longlong)iVar15 * 3;
            local_468 = (float)dVar39;
            while( true ) {
              pdVar24 = local_408;
              if (*(int *)(pFVar30 + local_478 + 0x10) != iVar15) {
                local_4b8 = 0;
                `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_4b8);
              }
              iVar4 = local_488;
              if (pdVar33 == pdVar24) break;
              dVar38 = pdVar33[2];
              dVar39 = *pdVar33;
              dVar45 = pdVar33[1];
              dVar42 = (double)local_448->_padding_;
              if (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar26,
                                           SUB84(dVar42,0) & uVar23)) {
                dVar42 = dVar1 / dVar42;
              }
              else {
                dVar42 = 0.0;
              }
              dVar43 = (double)local_448->_padding_;
              if (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar26,
                                           SUB84(dVar43,0) & uVar23)) {
                dVar43 = dVar1 / dVar43;
              }
              else {
                dVar43 = 0.0;
              }
              dVar2 = (double)local_448->_padding_;
              if (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar26,
                                           SUB84(dVar2,0) & uVar23)) {
                dVar2 = dVar1 / dVar2;
              }
              else {
                dVar2 = 0.0;
              }
              local_320._s_0.X = dVar39 - (double)local_448->_padding_;
              local_320._s_0.Z = dVar38 - (double)local_448->_padding_;
              local_320._s_0.Y = dVar45 - (double)local_448->_padding_;
              local_208.field0_0x0._s_0.Z = dVar38;
              pTVar17 = TQuaternion<double>::InverseMultiply
                                  ((TQuaternion<double> *)&local_448->_padding_,&local_208,
                                   (TVector<double> *)&local_320._s_0);
              local_360 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_354 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_378._s_0.X = dVar42 * (pTVar17->field0_0x0)._s_0.X;
              local_340 = 0;
              local_378._s_0.Y = dVar43 * (pTVar17->field0_0x0)._s_0.Y;
              local_33e = 0;
              local_378._s_0.Z = dVar2 * (pTVar17->field0_0x0)._s_0.Z;
              local_358 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_34c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_348 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              uVar13 = FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_378._s_0);
              if ((this_00->VertexNormals).bIsSet != false) {
                lVar27 = *(longlong *)
                          ((this_00->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar13 >> 9) * 8);
                *(ulonglong *)(lVar27 + (ulonglong)(uVar13 & 0x1ff) * 0xc) =
                     CONCAT44(fStack_46c,local_470);
                *(float *)(lVar27 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc) = local_468;
              }
              pFVar19 = (this_00->AttributeSet).Ptr;
              pFVar18 = pFVar28;
              if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
                pFVar18 = pFVar19;
              }
              pFVar19 = pFVar28;
              if (0 < (pFVar18->NormalLayers).Array.ArrayNum) {
                pFVar19 = *(FDynamicMeshAttributeSet **)
                           (pFVar18->NormalLayers).Array.AllocatorInstance.Data;
              }
              TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)pFVar19,&local_470);
              pFVar19 = (this_00->AttributeSet).Ptr;
              pFVar18 = pFVar28;
              if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
                pFVar18 = pFVar19;
              }
              pFVar19 = pFVar28;
              if (0 < (pFVar18->UVLayers).Array.ArrayNum) {
                pFVar19 = *(FDynamicMeshAttributeSet **)
                           (pFVar18->UVLayers).Array.AllocatorInstance.Data;
              }
              dVar39 = dVar39 - local_3f8._s_0.X;
              dVar45 = dVar45 - local_3f8._s_0.Y;
              dVar38 = dVar38 - local_3f8._s_0.Z;
              pTVar17 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_3f8._s_0,&local_118,0);
              dVar42 = (pTVar17->field0_0x0)._s_0.Y;
              dVar43 = (pTVar17->field0_0x0)._s_0.X;
              dVar2 = (pTVar17->field0_0x0)._s_0.Z;
              pTVar17 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_3f8._s_0,local_100,1);
              local_4a0 = (FScriptContainerElement *)
                          CONCAT44((float)((dVar45 * (pTVar17->field0_0x0)._s_0.Y +
                                            dVar39 * (pTVar17->field0_0x0)._s_0.X +
                                           dVar38 * (pTVar17->field0_0x0)._s_0.Z) * local_440),
                                   (float)((dVar45 * dVar42 + dVar39 * dVar43 + dVar38 * dVar2) *
                                          local_440));
              TDynamicMeshOverlay<float,2>::AppendElement
                        ((TDynamicMeshOverlay<float,2> *)pFVar19,(float *)&local_4a0);
              pdVar33 = pdVar33 + 3;
            }
            iVar15 = local_498.ArrayNum;
            uVar21 = (ulonglong)local_498.ArrayNum;
            pFVar30 = local_498.AllocatorInstance.Data + uVar21 * 0xc;
            FVar25.Data = local_498.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar21 != iVar15) {
                local_4b7 = 0;
                `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_4b7);
              }
              lVar32 = local_478;
              uVar50 = local_4b4;
              if (FVar25.Data == pFVar30) break;
              local_4b0._s_0.A = *(int *)FVar25.Data + iVar4;
              local_4b0._s_0.B = *(int *)(FVar25.Data + 4) + iVar4;
              local_4b0._s_0.C = *(int *)(FVar25.Data + 8) + iVar4;
              if (bVar11 != false) {
                local_4b0._s_0.B = *(int *)(FVar25.Data + 8) + iVar4;
                local_4b0._s_0.C = *(int *)(FVar25.Data + 4) + iVar4;
              }
              iVar14 = FDynamicMesh3::AppendTriangle(this_00,(FIndex3i *)&local_4b0._s_0,local_4b4);
              pFVar19 = (this_00->AttributeSet).Ptr;
              pFVar18 = pFVar28;
              if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
                pFVar18 = pFVar19;
              }
              pFVar19 = pFVar28;
              if (0 < (pFVar18->NormalLayers).Array.ArrayNum) {
                pFVar19 = *(FDynamicMeshAttributeSet **)
                           (pFVar18->NormalLayers).Array.AllocatorInstance.Data;
              }
              TDynamicMeshOverlay<float,3>::SetTriangle
                        ((TDynamicMeshOverlay<float,3> *)pFVar19,iVar14,(FIndex3i *)&local_4b0._s_0,
                         true);
              pFVar19 = (this_00->AttributeSet).Ptr;
              pFVar18 = pFVar28;
              if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
                pFVar18 = pFVar19;
              }
              pFVar19 = pFVar28;
              if (0 < (pFVar18->UVLayers).Array.ArrayNum) {
                pFVar19 = *(FDynamicMeshAttributeSet **)
                           (pFVar18->UVLayers).Array.AllocatorInstance.Data;
              }
              TDynamicMeshOverlay<float,2>::SetTriangle
                        ((TDynamicMeshOverlay<float,2> *)pFVar19,iVar14,(FIndex3i *)&local_4b0._s_0,
                         true);
              uVar21 = local_498._8_8_ & 0xffffffff;
              FVar25.Data = FVar25.Data + 0xc;
            }
          }
          if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.AllocatorInstance.Data);
          }
          uVar13 = (uint)__xmm_80000000000000008000000000000000;
          uVar46 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          lVar27 = local_480;
        }
        local_4b4 = uVar50 + 1;
        pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)local_4b4;
        local_480 = lVar27 + 1;
        local_478 = lVar32 + 0x18;
      } while ((int)local_4b4 < (this->Paths).ArrayNum);
    }
    ApplyThickness(this,local_400);
  }
  else {
    uVar37 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
    uVar40 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20);
    dVar8 = ((double)CONCAT44(uVar54,uVar53) + (double)CONCAT44(uVar44,uVar41)) *
            __real_3fe0000000000000;
    dVar1 = ((double)CONCAT44(uVar52,uVar51) + (double)CONCAT44(uVar49,uVar48)) *
            __real_3fe0000000000000;
    dVar42 = ((double)CONCAT44(uVar56,uVar55) + (double)CONCAT44(uVar58,uVar57)) *
             __real_3fe0000000000000;
    if (EVar3 == AlongX) {
      uVar37 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0);
      uVar40 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20);
      uVar41 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
      uVar44 = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
      uVar48 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
      uVar49 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
    }
    else if (EVar3 == AlongY) {
      uVar37 = SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0);
      uVar40 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20);
      uVar41 = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_;
      uVar44 = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_;
      uVar48 = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_;
      uVar49 = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_;
    }
    else {
      uVar41 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
      uVar44 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
      uVar48 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
      uVar49 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
      if ((EVar3 == ToBestFitPlane) && (this->CombineMethod != LeaveSeparate)) {
        if (((this->Paths).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        PolygonTriangulation::ComputePolygonPlane<double>
                  ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   ((this->Paths).AllocatorInstance.Data + 8),(TVector<double> *)&local_460._s_0,
                   &local_160);
        uVar23 = 1;
        if (1 < (this->Paths).ArrayNum) {
          uVar26 = (uint)__xmm_80000000000000008000000000000000;
          uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          do {
            uVar46 = 0;
            if ((int)uVar23 < (this->Paths).ArrayNum) {
              uVar46 = ~uVar23 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            PolygonTriangulation::ComputePolygonPlane<double>
                      ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                       ((this->Paths).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x18 + 8),
                       (TVector<double> *)&local_308._s_0,&local_160);
            uVar46 = SUB84(local_308._s_0.Y,0);
            uVar47 = (uint)((ulonglong)local_308._8_8_ >> 0x20);
            uVar50 = SUB84(local_308._s_0.X,0);
            uVar22 = (uint)((ulonglong)local_308._0_8_ >> 0x20);
            uVar16 = local_308._s_0.Z;
            if (local_460._s_0.Y * local_308._s_0.Y + local_460._s_0.X * local_308._s_0.X +
                local_460._s_0.Z * local_308._s_0.Z < 0.0) {
              uVar50 = uVar50 ^ uVar26;
              uVar22 = uVar22 ^ uVar13;
              uVar46 = uVar46 ^ uVar26;
              uVar47 = uVar47 ^ uVar13;
              uVar16 = CONCAT44((uint)((ulonglong)local_308._16_8_ >> 0x20) ^ uVar13,
                                SUB84(local_308._s_0.Z,0) ^ uVar26);
            }
            local_460._s_0.X = local_460._s_0.X + (double)CONCAT44(uVar22,uVar50);
            uVar23 = uVar23 + 1;
            local_460._s_0.Y = local_460._s_0.Y + (double)CONCAT44(uVar47,uVar46);
            local_460._s_0.Z = local_460._s_0.Z + (double)uVar16;
          } while ((int)uVar23 < (this->Paths).ArrayNum);
        }
        auVar36._0_8_ = local_460._s_0.Z * local_460._s_0.Z;
        auVar36._8_8_ = 0;
        auVar35._8_8_ = 0;
        auVar35._0_8_ =
             local_460._s_0.Y * local_460._s_0.Y + local_460._s_0.X * local_460._s_0.X +
             auVar36._0_8_;
        auVar35 = sqrtpd(auVar36,auVar35);
        if (auVar35._0_8_ <= 0.0) {
          local_138 = 0.0;
          dVar39 = 0.0;
          dVar45 = 0.0;
        }
        else {
          dVar45 = __real_3ff0000000000000 / auVar35._0_8_;
          local_138 = local_460._s_0.Z * dVar45;
          dVar39 = local_460._s_0.Y * dVar45;
          dVar45 = local_460._s_0.X * dVar45;
        }
        uVar41 = SUB84(dVar45,0);
        uVar44 = (undefined4)((ulonglong)dVar45 >> 0x20);
        uVar48 = SUB84(dVar39,0);
        uVar49 = (undefined4)((ulonglong)dVar39 >> 0x20);
        uVar37 = SUB84(local_138,0);
        uVar40 = (undefined4)((ulonglong)local_138 >> 0x20);
      }
    }
    local_390 = &local_4b6;
    local_388 = &local_4b5;
    local_380 = &local_448;
    local_398 = this;
    if (this->CombineMethod == LeaveSeparate) {
      iVar15 = 1;
      if (0 < (this->Paths).ArrayNum) {
        do {
          uVar26 = (uint)pFVar28;
          uVar23 = uVar29;
          if ((int)uVar26 < (this->Paths).ArrayNum) {
            uVar23 = ~uVar26 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          PolygonTriangulation::ComputePolygonPlane<double>
                    ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                     ((this->Paths).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x18 + 8),
                     (TVector<double> *)&local_420._s_0,(TVector<double> *)&local_2f0._s_0);
          uVar41 = SUB84(local_420._s_0.Z,0);
          uVar44 = (undefined4)((ulonglong)local_420._16_8_ >> 0x20);
          uVar23 = uVar29;
          if ((int)uVar26 < (this->Paths).ArrayNum) {
            uVar23 = ~uVar26 >> 0x1f;
          }
          dVar45 = (dVar42 * local_420._s_0.Y + dVar8 * local_420._s_0.X + dVar1 * local_420._s_0.Z)
                   - (local_2f0._s_0.Y * local_420._s_0.Y + local_2f0._s_0.X * local_420._s_0.X +
                     local_2f0._s_0.Z * local_420._s_0.Z);
          dVar39 = local_420._s_0.X * dVar45;
          dVar43 = local_420._s_0.Y * dVar45;
          dVar45 = local_420._s_0.Z * dVar45;
          if (uVar23 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar41 = SUB84(local_420._s_0.Z,0);
            uVar44 = (undefined4)((ulonglong)local_420._16_8_ >> 0x20);
          }
          uStack_3b0 = 1;
          local_3b8 = (FCurvePath *)
                      ((this->Paths).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x18);
          local_1d8._12_4_ = uStack_3ac;
          local_1d8.ArrayNum = 1;
          local_268._s_0.Z = (double)CONCAT44(uVar44,uVar41);
          local_268._s_0.X = local_420._s_0.X;
          local_268._s_0.Y = local_420._s_0.Y;
          local_2b8._s_0.X = dVar8 - dVar39;
          local_2b8._s_0.Y = dVar42 - dVar43;
          local_2b8._s_0.Z = dVar1 - dVar45;
          local_1d8.DataPtr = local_3b8;
          iVar15 = `UE::Geometry::FTriangulateCurvesOp::CalculateResult'::__l2::<lambda_4>::
                   operator()(&local_398,(TVector<double> *)&local_268._s_0,
                              (TVector<double> *)&local_2b8._s_0,&local_1d8,iVar15);
          pFVar28 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar26 + 1);
        } while ((int)(uVar26 + 1) < (this->Paths).ArrayNum);
      }
    }
    else {
      local_3a8 = (FCurvePath *)(this->Paths).AllocatorInstance.Data;
      iVar15 = (this->Paths).ArrayNum;
      if ((iVar15 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1e8._12_4_ = uStack_39c;
      local_1e8.ArrayNum = iVar15;
      local_1e8.DataPtr = local_3a8;
      local_228._s_0.Z = (double)CONCAT44(uVar40,uVar37);
      iStack_3a0 = iVar15;
      local_248._s_0.X = dVar8;
      local_248._s_0.Y = dVar42;
      local_248._s_0.Z = dVar1;
      local_228._0_4_ = uVar41;
      local_228._4_4_ = uVar44;
      local_228._8_4_ = uVar48;
      local_228._12_4_ = uVar49;
      `UE::Geometry::FTriangulateCurvesOp::CalculateResult'::__l2::<lambda_4>::operator()
                (&local_398,(TVector<double> *)&local_228._s_0,(TVector<double> *)&local_248._s_0,
                 &local_1e8,1);
    }
    ApplyThickness(this,dVar38);
    if ((param_1 != (FProgressCancel *)0x0) && (param_1->WasCancelled == false)) {
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar5 = *(code **)&param_1->CancelF;
      plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar20 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar6 != (longlong *)0x0) {
        plVar20 = plVar6;
      }
      uVar16 = (**(code **)(*plVar20 + 8))();
      bVar11 = (bool)(*pcVar5)(uVar16);
      param_1->WasCancelled = bVar11;
    }
  }
  return;
}

