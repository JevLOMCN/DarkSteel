// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// <lambda_invoker_cdecl> @ 14c940f20

bool __cdecl
UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::<lambda_41_>::<lambda_invoker_cdecl>
          (void)

{
  return false;
}

// operator() @ 14c9552e0

double __thiscall
`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l14::<lambda_1>::
operator()(void *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_00;
  TVector<double>_u_0 local_28;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((*(double *)((longlong)this + 8) <= dVar1) &&
       (dVar2 = (param_1->field0_0x0)._s_0.Y, *(double *)((longlong)this + 0x10) <= dVar2)) &&
      (dVar3 = (param_1->field0_0x0)._s_0.Z, *(double *)((longlong)this + 0x18) <= dVar3)) &&
     (((dVar1 < *(double *)((longlong)this + 0x20) || dVar1 == *(double *)((longlong)this + 0x20) &&
       (dVar2 < *(double *)((longlong)this + 0x28) || dVar2 == *(double *)((longlong)this + 0x28)))
      && (dVar3 < *(double *)((longlong)this + 0x30) || dVar3 == *(double *)((longlong)this + 0x30))
      ))) {
    this_00 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(*(longlong *)this + 0x10);
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this_00,false);
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    dVar1 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                      (this_00,this_00->Tree->RootIndex,(TVector<double> *)&local_28._s_0);
    return dVar1;
  }
  dVar1 = *(double *)(*(longlong *)this + 0x18) + __real_3ff0000000000000;
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
}

// Generate @ 14c97cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMeshShapeGenerator * __thiscall
UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate
          (TImplicitSolidify<UE::Geometry::FDynamicMesh3> *this)

{
  FMarchingCubes *this_00;
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar4;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *pTVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  int iVar22;
  ulong64 uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  FMeshShapeGenerator *pFVar26;
  longlong *plVar27;
  uint uVar28;
  TVector<double>_u_0 *pTVar29;
  TVector<double>_u_0 *pTVar30;
  uint uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  longlong *plVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_238 [32];
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  TVector<double>_u_0 local_1d8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  TVector<double>_u_0 *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_148;
  TImplicitSolidify<UE::Geometry::FDynamicMesh3> *local_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 local_110 [16];
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  this_00 = &this->MarchingCubes;
  FMeshShapeGenerator::Reset((FMeshShapeGenerator *)this_00);
  if ((((this->Source == (FDynamicMesh3 *)0x0) ||
       (pTVar4 = this->SourceSpatial, pTVar4 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0))
      || (pTVar4->RootIndex < 0)) ||
     (uVar23 = FDynamicMesh3::GetChangeStamp(pTVar4->Mesh), pTVar4->MeshChangeStamp != uVar23)) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  pTVar5 = this->SourceWinding;
  if (((this->SurfaceSearchSteps < 0) || (this->MeshCellSize <= 0.0)) ||
     (iVar22 = _finite(this->MeshCellSize), iVar22 == 0)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if (((!bVar21) || (pTVar5 == (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0)) || (!bVar19))
  {
    bVar21 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<984857840881500258>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Solidify.h"
                        ,0x62,"Validate()");
    if (!bVar21) {
      return (FMeshShapeGenerator *)this_00;
    }
    pcVar10 = (code *)swi(3);
    pFVar26 = (FMeshShapeGenerator *)(*pcVar10)();
    return pFVar26;
  }
  if (this->bUseCustomBounds == false) {
    pTVar4 = this->SourceSpatial;
    uVar31 = pTVar4->RootIndex;
    if ((int)uVar31 < 0) {
      bVar21 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2828200105734045879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                          ,0xb7,"RootIndex >= 0");
      if (bVar21) {
        pcVar10 = (code *)swi(3);
        pFVar26 = (FMeshShapeGenerator *)(*pcVar10)();
        return pFVar26;
      }
      cVar20 = this->bUseCustomBounds;
      local_190 = ___xmm_7fefffffffffffff7fefffffffffffff;
      dStack_188 = _UNK_150a9e648;
      local_170 = ___xmm_ffefffffffffffffffefffffffffffff;
      dStack_168 = _UNK_1508ffb58;
      local_180 = ___xmm_ffefffffffffffff7fefffffffffffff;
      dStack_178 = _UNK_150a9e6d8;
    }
    else {
      uVar25 = (ulonglong)(uVar31 & 0x1ff);
      lVar9 = *(longlong *)
               ((pTVar4->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar31 >> 9) * 8);
      dStack_178 = *(double *)(lVar9 + uVar25 * 0x18);
      lVar6 = *(longlong *)
               ((pTVar4->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar31 >> 9) * 8);
      local_170 = *(double *)(lVar9 + 8 + uVar25 * 0x18);
      cVar20 = '\0';
      dStack_168 = *(double *)(lVar9 + 0x10 + uVar25 * 0x18);
      local_190 = dStack_178 - *(double *)(lVar6 + uVar25 * 0x18);
      dStack_188 = local_170 - *(double *)(lVar6 + 8 + uVar25 * 0x18);
      dStack_178 = dStack_178 + *(double *)(lVar6 + uVar25 * 0x18);
      local_170 = local_170 + *(double *)(lVar6 + 8 + uVar25 * 0x18);
      local_180 = dStack_168 - *(double *)(lVar6 + 0x10 + uVar25 * 0x18);
      dStack_168 = dStack_168 + *(double *)(lVar6 + 0x10 + uVar25 * 0x18);
    }
    local_1c0._8_8_ = dStack_188;
    local_1c0._0_8_ = local_190;
    local_1b0._8_8_ = dStack_178;
    local_1b0._0_8_ = local_180;
    local_1a0._8_8_ = dStack_168;
    local_1a0._0_8_ = local_170;
    dVar36 = local_190;
    dVar14 = local_170;
    dVar16 = local_180;
    dVar34 = dStack_188;
    dVar32 = dStack_168;
    dVar12 = dStack_178;
    if (cVar20 == '\0') {
      dVar34 = this->ExtendBounds;
      dVar12 = dStack_178 + dVar34;
      dVar16 = local_180 - dVar34;
      dVar36 = local_190 - dVar34;
      dVar14 = local_170 + dVar34;
      dVar32 = dStack_168 + dVar34;
      dVar34 = dStack_188 - dVar34;
      goto LAB_14c97d18f;
    }
  }
  else {
    dVar36 = *(double *)&(this->CustomBounds).Min.field0_0x0;
    dVar34 = *(double *)((longlong)&(this->CustomBounds).Min.field0_0x0 + 8);
    dVar16 = *(double *)((longlong)&(this->CustomBounds).Min.field0_0x0 + 0x10);
    dVar12 = *(double *)&(this->CustomBounds).Max.field0_0x0;
    dVar14 = *(double *)((longlong)&(this->CustomBounds).Max.field0_0x0 + 8);
    dVar32 = *(double *)((longlong)&(this->CustomBounds).Max.field0_0x0 + 0x10);
    local_100 = dVar36;
    dStack_f8 = dVar34;
    local_f0 = dVar16;
    dStack_e8 = dVar12;
    local_e0 = dVar14;
    dStack_d8 = dVar32;
LAB_14c97d18f:
    local_1c0._8_4_ = SUB84(dVar34,0);
    local_1c0._0_8_ = dVar36;
    local_1c0._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    local_1b0._8_4_ = SUB84(dVar12,0);
    local_1b0._0_8_ = dVar16;
    local_1b0._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_1a0._8_4_ = SUB84(dVar32,0);
    local_1a0._0_8_ = dVar14;
    local_1a0._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  }
  uVar40 = (undefined4)((ulonglong)dVar12 >> 0x20);
  uVar39 = (undefined4)((ulonglong)dVar32 >> 0x20);
  uVar38 = (undefined4)((ulonglong)dVar34 >> 0x20);
  uVar37 = SUB84(dVar34,0);
  bVar21 = this->bSolidAtBoundaries;
  dVar34 = this->MeshCellSize;
  auVar11._8_4_ = uVar37;
  auVar11._0_8_ = dVar36;
  auVar11._12_4_ = uVar38;
  *(undefined1 (*) [16])&(this->MarchingCubes).Bounds.Min.field0_0x0 = auVar11;
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._0_8_ = dVar16;
  auVar15._12_4_ = uVar40;
  *(undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Min.field0_0x0 + 0x10) = auVar15;
  (this->MarchingCubes).CubeSize = dVar34;
  auVar13._8_4_ = SUB84(dVar32,0);
  auVar13._0_8_ = dVar14;
  auVar13._12_4_ = uVar39;
  *(undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Max.field0_0x0 + 8) = auVar13;
  if (bVar21 != false) {
    dVar3 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y;
    dVar34 = dVar34 * __real_3fb999999999999a;
    auVar33._8_4_ = uVar37;
    auVar33._0_8_ = dVar36;
    auVar33._12_4_ = uVar38;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X =
         (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X + dVar34;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar3 + dVar34;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X = dVar36 - dVar34;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = auVar33._8_8_ - dVar34;
    dVar3 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z =
         dVar34 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar3 - dVar34;
  }
  (this->MarchingCubes).RootModeSteps = this->SurfaceSearchSteps;
  (this->MarchingCubes).IsoValue = this->WindingThreshold;
  (this->MarchingCubes).RootMode = Bisection;
  TFunction<bool___cdecl(void)>::operator=(&(this->MarchingCubes).CancelF,&this->CancelF);
  pTVar30 = (TVector<double>_u_0 *)0x0;
  if (this->bSolidAtBoundaries == false) {
    local_98 = *(longlong *)&(this->MarchingCubes).Implicit;
    uVar18 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8;
    local_88 = *(longlong *)&(this->MarchingCubes).Implicit.field_0x10;
    uStack_80 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x18;
    uVar17 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20;
    plVar35 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
    *(code **)&(this->MarchingCubes).Implicit =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l16::<lambda_2>,double,UE::Math::TVector<double>_>
         ::Call;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8 = uStack_90;
    *(undefined ***)&(this->MarchingCubes).Implicit.field_0x10 =
         &
         ___7__TFunction_OwnedObject_V<lambda_2>__BA___Generate___TImplicitSolidify_VFDynamicMesh3_Geometry_UE___Geometry_UE__QEAAAEBVFMeshShapeGenerator_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    *(TImplicitSolidify<UE::Geometry::FDynamicMesh3> **)&(this->MarchingCubes).Implicit.field_0x18 =
         this;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20 = local_78;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x28 = 0;
    uStack_90 = uVar18;
    local_78 = uVar17;
    plStack_70 = plVar35;
    if (local_98 != 0) {
      plVar27 = &local_88;
      goto LAB_14c97d3b9;
    }
  }
  else {
    local_c8 = (code *)0x0;
    auStack_130._8_4_ = uVar37;
    auStack_130._0_8_ = dVar36;
    auStack_130._12_4_ = uVar38;
    auStack_120._8_4_ = SUB84(dVar12,0);
    auStack_120._0_8_ = dVar16;
    auStack_120._12_4_ = uVar40;
    local_110._8_4_ = SUB84(dVar32,0);
    local_110._0_8_ = dVar14;
    local_110._12_4_ = uVar39;
    local_138 = this;
    puVar24 = FMemory::Malloc(0x40,8);
    *puVar24 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__O___Generate___TImplicitSolidify_VFDynamicMesh3_Geometry_UE___Geometry_UE__QEAAAEBVFMeshShapeGenerator_45_XZ__0A__00_Function_Private_Core_UE__6B_
    ;
    puVar24[1] = local_138;
    puVar24[2] = auStack_130._0_8_;
    puVar24[3] = auStack_130._8_8_;
    puVar24[4] = auStack_120._0_8_;
    puVar24[5] = auStack_120._8_8_;
    puVar24[6] = local_110._0_8_;
    puVar24[7] = dVar32;
    lVar9 = *(longlong *)&(this->MarchingCubes).Implicit;
    uVar18 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8;
    uVar37 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x10;
    uVar38 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x14;
    uVar39 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x18;
    uVar40 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x1c;
    uVar17 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20;
    plVar35 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
    if (puVar24 + 1 != (undefined8 *)0x0) {
      local_c8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l14::<lambda_1>,double,UE::Math::TVector<double>_>
                 ::Call;
    }
    *(code **)&(this->MarchingCubes).Implicit = local_c8;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8 = uStack_c0;
    *(ulonglong *)&(this->MarchingCubes).Implicit.field_0x10 = CONCAT44(uStack_b4,local_b8);
    *(ulonglong *)&(this->MarchingCubes).Implicit.field_0x18 = CONCAT44(uStack_ac,uStack_b0);
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20 = local_a8;
    *(undefined8 **)&(this->MarchingCubes).Implicit.field_0x28 = puVar24;
    local_b8 = uVar37;
    uStack_b4 = uVar38;
    uStack_b0 = uVar39;
    uStack_ac = uVar40;
    local_a8 = uVar17;
    plStack_a0 = plVar35;
    local_c8 = (code *)lVar9;
    uStack_c0 = uVar18;
    if (lVar9 != 0) {
      plVar27 = (longlong *)&local_b8;
LAB_14c97d3b9:
      if (plVar35 != (longlong *)0x0) {
        plVar27 = plVar35;
      }
      (**(code **)(*plVar27 + 0x10))();
    }
  }
  pFVar7 = this->Source;
  iVar22 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  uVar31 = (pFVar7->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar7->VertexRefCounts).RefCounts.CurBlock * 0x200;
  pTVar29 = pTVar30;
  local_158 = pTVar30;
  if ((uVar31 != 0) &&
     (pFVar8 = (pFVar7->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pTVar29 = (TVector<double>_u_0 *)0x0, 0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    pTVar29 = (TVector<double>_u_0 *)&DAT_00000001;
    uVar28 = 1;
    if ((int)uVar31 < 2) goto joined_r0x00014c97d46a;
    do {
      uVar25 = (ulonglong)((uint)pTVar29 & 0x1ff);
      lVar9 = *(longlong *)(pFVar8 + ((ulonglong)pTVar29 >> 9) * 8);
      if ((*(short *)(lVar9 + uVar25 * 2) != 0) && (*(short *)(lVar9 + uVar25 * 2) != -1)) break;
      uVar28 = (uint)pTVar29 + 1;
      pTVar29 = (TVector<double>_u_0 *)(ulonglong)uVar28;
    } while ((int)uVar28 < (int)uVar31);
  }
  uVar28 = (uint)pTVar29;
joined_r0x00014c97d46a:
  do {
    if (uVar28 == uVar31) {
      if ((iVar22 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar26 = (FMeshShapeGenerator *)(*pcVar10)();
        return pFVar26;
      }
      local_148._12_4_ = uStack_14c;
      local_148.ArrayNum = iVar22;
      local_148.DataPtr = (TVector<double> *)local_158;
      iStack_150 = iVar22;
      FMarchingCubes::GenerateContinuation(this_00,&local_148);
      if ((TVector<double>_u_0 *)local_1e8.Data != (TVector<double>_u_0 *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      return (FMeshShapeGenerator *)this_00;
    }
    while( true ) {
      uVar25 = (ulonglong)((uint)pTVar29 & 0x1ff);
      lVar9 = *(longlong *)
               ((this->Source->Vertices).Blocks.AllocatorInstance.Data +
               ((ulonglong)pTVar29 >> 9) * 8);
      pdVar2 = (double *)(lVar9 + uVar25 * 0x18);
      local_1d8._s_0.X = *pdVar2;
      local_1d8._s_0.Y = pdVar2[1];
      local_1d8._s_0.Z = *(double *)(lVar9 + 0x10 + uVar25 * 0x18);
      if (((((this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X <= local_1d8._s_0.X) &&
           ((this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y <= local_1d8._s_0.Y)) &&
          ((this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z <= local_1d8._s_0.Z)) &&
         (((pTVar1 = &(this->MarchingCubes).Bounds.Max,
           local_1d8._s_0.X < (pTVar1->field0_0x0)._s_0.X ||
           local_1d8._s_0.X == (pTVar1->field0_0x0)._s_0.X &&
           (pdVar2 = &(this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y,
           local_1d8._s_0.Y < *pdVar2 || local_1d8._s_0.Y == *pdVar2)) &&
          (pdVar2 = &(this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z,
          local_1d8._s_0.Z < *pdVar2 || local_1d8._s_0.Z == *pdVar2)))) {
        iVar22 = (int)pTVar30;
        if ((local_158 <= &local_1d8) && (&local_1d8 < local_158 + local_1e0._4_4_)) {
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar21) {
            pcVar10 = (code *)swi(3);
            pFVar26 = (FMeshShapeGenerator *)(*pcVar10)();
            return pFVar26;
          }
          local_158 = (TVector<double>_u_0 *)local_1e8.Data;
          iVar22 = (int)local_1e0;
        }
        if (iVar22 == local_1e0._4_4_) {
          iVar22 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_1e8,(int *)((longlong)&local_1e0 + 4));
          local_158 = (TVector<double>_u_0 *)local_1e8.Data;
        }
        local_1e0 = CONCAT44(local_1e0._4_4_,iVar22 + 1U);
        local_158[iVar22]._s_0.X = local_1d8._s_0.X;
        local_158[iVar22].XYZ[1] = local_1d8._s_0.Y;
        *(double *)((longlong)local_158 + (longlong)iVar22 * 0x18 + 0x10) = local_1d8._s_0.Z;
        pTVar30 = (TVector<double>_u_0 *)(ulonglong)(iVar22 + 1U);
        local_158 = (TVector<double>_u_0 *)local_1e8.Data;
      }
      iVar22 = (int)pTVar30;
      uVar28 = (uint)pTVar29 + 1;
      pTVar29 = (TVector<double>_u_0 *)(ulonglong)uVar28;
      if ((int)uVar31 <= (int)uVar28) break;
      while( true ) {
        uVar25 = (ulonglong)((uint)pTVar29 & 0x1ff);
        lVar9 = *(longlong *)
                 ((pFVar7->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 ((ulonglong)pTVar29 >> 9) * 8);
        if ((*(short *)(lVar9 + uVar25 * 2) != 0) && (*(short *)(lVar9 + uVar25 * 2) != -1)) break;
        uVar28 = (uint)pTVar29 + 1;
        pTVar29 = (TVector<double>_u_0 *)(ulonglong)uVar28;
        if ((int)uVar31 <= (int)uVar28) goto joined_r0x00014c97d46a;
      }
    }
  } while( true );
}

