// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 14

// <lambda_invoker_cdecl> @ 14cb59540

bool __cdecl
`FMeshTopologySelector::FMeshTopologySelector'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_ < param_3;
}

// <lambda_invoker_cdecl> @ 14cb595f0

void * __cdecl
`FMeshTopologySelector::FMeshTopologySelector'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return (void *)0x0;
}

// FMeshTopologySelector @ 14cb61c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMeshTopologySelector * __thiscall
FMeshTopologySelector::FMeshTopologySelector(FMeshTopologySelector *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->VisualAngleSnapThreshold = 0.5;
  *(undefined8 *)&this->PointsWithinToleranceTest = 0;
  *(undefined ***)this = &___7FMeshTopologySelector__6B_;
  *(undefined8 *)&(this->PointsWithinToleranceTest).field_0x28 = 0;
  this->Mesh = (FDynamicMesh3 *)0x0;
  (this->TopologyProvider).Ptr = (FTopologyProvider *)0x0;
  *(undefined8 *)&this->GetSpatial = 0;
  *(undefined8 *)&(this->GetSpatial).field_0x28 = 0;
  this->bGeometryInitialized = false;
  this->bGeometryUpToDate = false;
  (this->GeometrySet).Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometrySet).Points.ArrayNum = 0;
  (this->GeometrySet).Points.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x48 = 0;
  (this->GeometrySet).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometrySet).Curves.ArrayNum = 0;
  (this->GeometrySet).Curves.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x48 = 0;
  local_48 = *(longlong *)&this->PointsWithinToleranceTest;
  uVar2 = *(undefined8 *)&(this->PointsWithinToleranceTest).field_0x8;
  local_38 = *(longlong *)&(this->PointsWithinToleranceTest).field_0x10;
  uStack_30 = *(undefined8 *)&(this->PointsWithinToleranceTest).field_0x18;
  uVar1 = *(undefined8 *)&(this->PointsWithinToleranceTest).field_0x20;
  plStack_20 = *(longlong **)&(this->PointsWithinToleranceTest).field_0x28;
  *(code **)&this->PointsWithinToleranceTest =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double>
       ::Call;
  *(undefined8 *)&(this->PointsWithinToleranceTest).field_0x8 = uStack_40;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x10 = 0x5291a250;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x14 = 1;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x18 = 0x4cb59540;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x1c = 1;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x28 = 0;
  *(undefined4 *)&(this->PointsWithinToleranceTest).field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_48 = *(longlong *)&this->GetSpatial;
  uVar2 = *(undefined8 *)&(this->GetSpatial).field_0x8;
  local_38 = *(longlong *)&(this->GetSpatial).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetSpatial).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetSpatial).field_0x20;
  plStack_20 = *(longlong **)&(this->GetSpatial).field_0x28;
  *(code **)&this->GetSpatial =
       UE::Core::Private::Function::
       TFunctionRefCaller<std::nullptr_t_(__cdecl*)(void),UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
       ::Call;
  *(undefined8 *)&(this->GetSpatial).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetSpatial).field_0x10 = 0x5291a270;
  *(undefined4 *)&(this->GetSpatial).field_0x14 = 1;
  *(undefined4 *)&(this->GetSpatial).field_0x18 = 0x4cb595f0;
  *(undefined4 *)&(this->GetSpatial).field_0x1c = 1;
  *(undefined4 *)&(this->GetSpatial).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetSpatial).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetSpatial).field_0x28 = 0;
  *(undefined4 *)&(this->GetSpatial).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~FMeshTopologySelector @ 14cb64920

void __thiscall FMeshTopologySelector::~FMeshTopologySelector(FMeshTopologySelector *this)

{
  longlong *plVar1;
  FTopologyProvider *pFVar2;
  longlong *plVar3;
  
  UE::Geometry::FGeometrySet3::~FGeometrySet3(&this->GeometrySet);
  if (*(longlong *)&this->GetSpatial != 0) {
    plVar1 = *(longlong **)&(this->GetSpatial).field_0x28;
    plVar3 = (longlong *)&(this->GetSpatial).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->TopologyProvider).Ptr;
  if (pFVar2 != (FTopologyProvider *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
  }
  if (*(longlong *)&this->PointsWithinToleranceTest != 0) {
    plVar1 = *(longlong **)&(this->PointsWithinToleranceTest).field_0x28;
    plVar3 = (longlong *)&(this->PointsWithinToleranceTest).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cb64982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// operator() @ 14cb6ba90

bool __thiscall
`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *param_1)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TVector<double>_u_0 local_68 [4];
  
  pauVar1 = *(undefined1 (**) [16])((longlong)this + 8);
  dVar3 = (param_1->field0_0x0)._s_0.X * *(double *)pauVar1[4];
  dVar4 = (param_1->field0_0x0)._s_0.Y * *(double *)(pauVar1[4] + 8);
  uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (param_1->field0_0x0)._s_0.Z * *(double *)pauVar1[5];
  dVar13 = *(double *)(pauVar1[5] + 8) * 0.0;
  auVar18._8_4_ = SUB84(dVar4,0);
  auVar18._0_8_ = dVar3;
  auVar18._12_4_ = uVar15;
  auVar9 = pauVar1[1];
  auVar8 = *pauVar1;
  dVar6 = *(double *)(pauVar1[1] + 8);
  dVar2 = auVar9._0_8_;
  auVar10 = blendpd(auVar8,auVar9,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar3;
  auVar19._8_8_ = dVar5 * auVar8._8_8_ - dVar2 * dVar4;
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = uVar15;
  auVar8._8_4_ = SUB84(dVar13,0);
  auVar8._0_8_ = dVar5;
  auVar8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar8 = blendpd(auVar20,auVar8,2);
  auVar11._0_8_ = auVar8._0_8_ * dVar2 - auVar10._0_8_ * dVar5;
  auVar11._8_8_ = auVar8._8_8_ * auVar9._8_8_ - auVar10._8_8_ * dVar13;
  auVar8 = *pauVar1;
  auVar20 = blendpd(auVar19,auVar11,2);
  dVar13 = auVar19._8_8_ + auVar19._8_8_;
  dVar14 = auVar11._0_8_ + auVar11._0_8_;
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar16._8_4_ = SUB84(dVar14,0);
  auVar16._0_8_ = dVar13;
  uVar15 = (undefined4)((ulonglong)dVar14 >> 0x20);
  auVar16._12_4_ = uVar15;
  auVar10._8_4_ = SUB84(dVar14,0);
  auVar10._0_8_ = dVar13;
  auVar10._12_4_ = uVar15;
  auVar20 = blendpd(auVar8,auVar9,2);
  auVar11 = blendpd(auVar10,auVar21,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar13;
  auVar17._8_8_ = auVar21._0_8_ * auVar8._8_8_ - dVar2 * dVar14;
  auVar12._0_8_ = auVar11._0_8_ * dVar2 - auVar20._0_8_ * auVar21._0_8_;
  auVar12._8_8_ = auVar11._8_8_ * auVar9._8_8_ - auVar20._8_8_ * auVar21._8_8_;
  auVar9._8_4_ = SUB84(auVar17._8_8_,0);
  auVar9._0_8_ = auVar17._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar8 = blendpd(auVar17,auVar12,2);
  dVar2 = dVar6 * dVar14 + dVar4 + auVar12._0_8_ + *(double *)(pauVar1[2] + 8);
  local_68[0]._16_8_ = dVar6 * auVar21._0_8_ + dVar5 + auVar8._0_8_ + *(double *)pauVar1[3];
  local_68[0]._8_4_ = SUB84(dVar2,0);
  local_68[0]._0_8_ = dVar6 * dVar13 + dVar3 + auVar9._8_8_ + *(double *)pauVar1[2];
  local_68[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  bVar7 = FCameraRectangle::IsProjectedPointInRectangle
                    (*(FCameraRectangle **)this,(TVector<double> *)&local_68[0]._s_0);
  if (bVar7) {
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 6) == '\0') {
      bVar7 = IsOccluded(param_1,*(TVector<double> **)((longlong)this + 0x18),
                         *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x20),
                         *(bool *)(*(longlong *)((longlong)this + 0x10) + 3));
      if (bVar7) goto LAB_14cb6bbf5;
    }
    bVar7 = true;
  }
  else {
LAB_14cb6bbf5:
    bVar7 = false;
  }
  return bVar7;
}

// operator() @ 14cb6d350

bool __thiscall
`FMeshTopologySelector::FindSelectedElement'::__l8::<lambda_2>::operator()
          (void *this,TPolyline<double,3> *param_1)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  TVector<double> *pTVar2;
  undefined1 (*pauVar3) [16];
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double local_c8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  undefined1 local_88 [16];
  double local_78;
  
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 6) == '\0') {
    bVar16 = *(bool *)(*(longlong *)((longlong)this + 0x10) + 3);
    pTVar1 = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x20);
    pTVar2 = *(TVector<double> **)((longlong)this + 0x18);
    if (((param_1->Vertices).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    bVar16 = IsOccluded((TVector<double> *)(param_1->Vertices).AllocatorInstance.Data,pTVar2,pTVar1,
                        bVar16);
    if (bVar16) {
      return false;
    }
    iVar17 = (param_1->Vertices).ArrayNum;
    pTVar1 = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x20);
    pTVar2 = *(TVector<double> **)((longlong)this + 0x18);
    uVar18 = iVar17 - 1;
    bVar16 = *(bool *)(*(longlong *)((longlong)this + 0x10) + 3);
    uVar19 = 0;
    if ((int)uVar18 < iVar17) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    bVar16 = IsOccluded((TVector<double> *)
                        ((param_1->Vertices).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18),
                        pTVar2,pTVar1,bVar16);
    if (bVar16) {
      return false;
    }
  }
  pauVar3 = *(undefined1 (**) [16])((longlong)this + 8);
  if (((param_1->Vertices).ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar6 = (code *)swi(3);
    uVar15 = (*pcVar6)();
    return (bool)uVar15;
  }
  auVar33 = pauVar3[1];
  local_88 = *pauVar3;
  pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
  dVar40 = *(double *)(pauVar3[1] + 8);
  iVar17 = (param_1->Vertices).ArrayNum;
  dVar7 = *(double *)pFVar4 * *(double *)pauVar3[4];
  dVar8 = *(double *)(pFVar4 + 8) * *(double *)(pauVar3[4] + 8);
  uVar39 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar10 = *(double *)(pFVar4 + 0x10) * *(double *)pauVar3[5];
  dVar11 = *(double *)(pauVar3[5] + 8) * 0.0;
  auVar25 = blendpd(local_88,auVar33,2);
  auVar41._8_4_ = SUB84(dVar8,0);
  auVar41._0_8_ = dVar7;
  auVar41._12_4_ = uVar39;
  dVar12 = auVar33._0_8_;
  auVar42._0_8_ = auVar41._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar7;
  auVar42._8_8_ = dVar10 * local_88._8_8_ - dVar12 * dVar8;
  auVar43._8_4_ = SUB84(dVar8,0);
  auVar43._0_8_ = dVar7;
  auVar43._12_4_ = uVar39;
  auVar21._8_4_ = SUB84(dVar11,0);
  auVar21._0_8_ = dVar10;
  auVar21._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar21 = blendpd(auVar43,auVar21,2);
  auVar26._0_8_ = auVar21._0_8_ * dVar12 - auVar25._0_8_ * dVar10;
  auVar26._8_8_ = auVar21._8_8_ * auVar33._8_8_ - auVar25._8_8_ * dVar11;
  auVar21 = *pauVar3;
  auVar43 = blendpd(auVar42,auVar26,2);
  dVar11 = auVar42._8_8_ + auVar42._8_8_;
  dVar13 = auVar26._0_8_ + auVar26._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar44._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar44._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar31._8_4_ = SUB84(dVar13,0);
  auVar31._0_8_ = dVar11;
  auVar31._12_4_ = uVar39;
  auVar29._8_4_ = SUB84(dVar13,0);
  auVar29._0_8_ = dVar11;
  auVar29._12_4_ = uVar39;
  auVar43 = blendpd(auVar29,auVar44,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar11;
  auVar32._8_8_ = auVar44._0_8_ * auVar21._8_8_ - dVar12 * dVar13;
  auVar25._8_4_ = SUB84(auVar32._8_8_,0);
  auVar25._0_8_ = auVar32._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar21 = blendpd(auVar21,auVar33,2);
  auVar30._0_8_ = auVar43._0_8_ * dVar12 - auVar21._0_8_ * auVar44._0_8_;
  auVar30._8_8_ = auVar43._8_8_ * auVar33._8_8_ - auVar21._8_8_ * auVar44._8_8_;
  auVar33 = blendpd(auVar32,auVar30,2);
  dVar12 = dVar11 * dVar40 + dVar7 + auVar25._8_8_ + *(double *)pauVar3[2];
  dVar7 = dVar13 * dVar40 + dVar8 + auVar30._0_8_ + *(double *)(pauVar3[2] + 8);
  local_c8 = auVar44._0_8_ * dVar40 + dVar10 + auVar33._0_8_ + *(double *)pauVar3[3];
  uVar19 = 1;
  if (1 < iVar17) {
    lVar20 = 0x18;
    do {
      pauVar3 = *(undefined1 (**) [16])((longlong)this + 8);
      uVar18 = 0;
      if ((int)uVar19 < iVar17) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      auVar33 = pauVar3[1];
      pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
      auVar21 = *pauVar3;
      dVar13 = *(double *)(pauVar3[1] + 8);
      pFVar4 = pFVar5 + lVar20;
      dVar10 = *(double *)(pFVar5 + lVar20 + 0x10) * *(double *)pauVar3[5];
      dVar11 = *(double *)(pauVar3[5] + 8) * 0.0;
      dVar40 = *(double *)pauVar3[4] * *(double *)pFVar4;
      dVar45 = *(double *)(pauVar3[4] + 8) * *(double *)(pFVar4 + 8);
      auVar43 = *pauVar3;
      auVar26 = blendpd(auVar43,auVar33,2);
      auVar36._8_4_ = SUB84(dVar45,0);
      auVar36._0_8_ = dVar40;
      uVar39 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar36._12_4_ = uVar39;
      dVar8 = auVar33._0_8_;
      local_a8._8_4_ = SUB84(dVar7,0);
      local_a8._0_8_ = dVar12;
      local_a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar37._0_8_ = auVar36._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar40;
      auVar37._8_8_ = dVar10 * auVar43._8_8_ - dVar8 * dVar45;
      auVar22._8_4_ = SUB84(dVar45,0);
      auVar22._0_8_ = dVar40;
      auVar22._12_4_ = uVar39;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar43 = blendpd(auVar22,auVar9,2);
      auVar23._0_8_ = auVar43._0_8_ * dVar8 - auVar26._0_8_ * dVar10;
      auVar23._8_8_ = auVar43._8_8_ * auVar33._8_8_ - auVar26._8_8_ * dVar11;
      auVar43 = blendpd(auVar37,auVar23,2);
      dVar12 = auVar37._8_8_ + auVar37._8_8_;
      dVar7 = auVar23._0_8_ + auVar23._0_8_;
      uVar39 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar38._0_8_ = auVar43._0_8_ + auVar43._0_8_;
      auVar38._8_8_ = auVar43._8_8_ + auVar43._8_8_;
      auVar34._8_4_ = SUB84(dVar7,0);
      auVar34._0_8_ = dVar12;
      auVar34._12_4_ = uVar39;
      auVar27._8_4_ = SUB84(dVar7,0);
      auVar27._0_8_ = dVar12;
      auVar27._12_4_ = uVar39;
      auVar43 = blendpd(auVar27,auVar38,2);
      auVar35._0_8_ = auVar34._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
      auVar35._8_8_ = auVar38._0_8_ * auVar21._8_8_ - dVar8 * dVar7;
      auVar24._8_4_ = SUB84(auVar35._8_8_,0);
      auVar24._0_8_ = auVar35._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
      auVar21 = blendpd(auVar21,auVar33,2);
      auVar28._0_8_ = auVar43._0_8_ * dVar8 - auVar21._0_8_ * auVar38._0_8_;
      auVar28._8_8_ = auVar43._8_8_ * auVar33._8_8_ - auVar21._8_8_ * auVar38._8_8_;
      dVar12 = dVar12 * dVar13 + dVar40 + auVar24._8_8_ + *(double *)pauVar3[2];
      dVar7 = dVar7 * dVar13 + dVar45 + auVar28._0_8_ + *(double *)(pauVar3[2] + 8);
      auVar33 = blendpd(auVar35,auVar28,2);
      local_c0._8_4_ = SUB84(dVar7,0);
      local_c0._0_8_ = dVar12;
      local_c0._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_c0._s_0.Z = auVar38._0_8_ * dVar13 + dVar10 + auVar33._0_8_ + *(double *)pauVar3[3];
      local_a8._s_0.Z = local_c8;
      local_78 = local_c0._s_0.Z;
      bVar16 = FCameraRectangle::IsProjectedSegmentIntersectingRectangle
                         (*(FCameraRectangle **)this,(TVector<double> *)&local_a8._s_0,
                          (TVector<double> *)&local_c0._s_0);
      if (bVar16) {
        return true;
      }
      uVar19 = uVar19 + 1;
      iVar17 = (param_1->Vertices).ArrayNum;
      lVar20 = lVar20 + 0x18;
      local_c8 = local_78;
    } while ((int)uVar19 < iVar17);
  }
  return false;
}

// operator() @ 14cb6ea40

bool __thiscall
`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>::operator()
          (void *this,TAxisAlignedBox3<double> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool local_res18 [16];
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  **(int **)((longlong)this + 8) = param_2;
  dVar4 = __real_3fe0000000000000;
  if (**(int **)((longlong)this + 0x10) < param_2) {
    return true;
  }
  **(int **)((longlong)this + 0x10) = 0x7fffffff;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar2 = (param_1->Max).field0_0x0._s_0.Y;
  dVar3 = (param_1->Max).field0_0x0._s_0.Z;
  local_58._s_0.X = (dVar1 - (param_1->Min).field0_0x0._s_0.X) * dVar4;
  local_res18[0] = false;
  local_40[0]._0_8_ = (dVar1 + (param_1->Min).field0_0x0._s_0.X) * dVar4;
  local_58._s_0.Z = (dVar3 - (param_1->Min).field0_0x0._s_0.Z) * dVar4;
  local_40[0]._16_8_ = (dVar3 + (param_1->Min).field0_0x0._s_0.Z) * dVar4;
  local_58._s_0.Y = (dVar2 - (param_1->Min).field0_0x0._s_0.Y) * dVar4;
  local_40[0]._8_8_ = (dVar2 + (param_1->Min).field0_0x0._s_0.Y) * dVar4;
  bVar5 = FConvexVolume::IntersectBox
                    (*(FConvexVolume **)this,(TVector<double> *)&local_40[0]._s_0,
                     (TVector<double> *)&local_58._s_0,local_res18);
  if (local_res18[0] != false) {
    **(int **)((longlong)this + 0x10) = param_2;
  }
  return bVar5;
}

// operator() @ 14cb6f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong *plVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<UE::Math::TVector<float>_> FVar10;
  TVector<double> *pTVar11;
  uint *puVar12;
  char cVar13;
  uint *puVar14;
  ForElementType<UE::Math::TVector<float>_> FVar15;
  longlong *plVar16;
  undefined1 auStack_258 [32];
  float *local_238;
  ForElementType<UE::Math::TVector<float>_> local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  char local_208 [4];
  float local_204;
  float fStack_200;
  float local_1fc;
  uint local_1f8 [2];
  uint local_1f0 [2];
  undefined8 local_1e8;
  uint local_1e0;
  TPairInitializer<int_const_&,bool_const_&> local_1d8;
  char *local_1c8;
  double local_1b0;
  TVector<double> local_1a8;
  FPoly local_188;
  ulonglong local_28;
  
  FVar15 = (ForElementType<UE::Math::TVector<float>_>)&local_188.Vertices;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1f8[0] = param_1;
  local_1f0[0] = (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x50))();
  plVar2 = *(longlong **)((longlong)this + 8);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar16 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar16 = plVar2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar16 + (ulonglong)((int)plVar2[9] - 1U & local_1f0[0]) * 4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*plVar2 + (longlong)iVar7 * 0xc) == local_1f0[0]) {
          return;
        }
        iVar7 = *(int *)(*plVar2 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  if (**(int **)((longlong)this + 0x10) < **(int **)((longlong)this + 0x18)) {
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x130) +
             (ulonglong)(local_1f8[0] >> 9) * 8);
    local_1e8 = *(undefined8 *)(lVar9 + (ulonglong)(local_1f8[0] & 0x1ff) * 0xc);
    local_1e0 = *(uint *)(lVar9 + 8 + (ulonglong)(local_1f8[0] & 0x1ff) * 0xc);
    FPoly::FPoly(&local_188);
    FPoly::Init(&local_188);
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x10) +
             (ulonglong)((uint)local_1e8 >> 9) * 8);
    pdVar1 = (double *)(lVar9 + (ulonglong)((uint)local_1e8 & 0x1ff) * 0x18);
    local_1b0 = *(double *)(lVar9 + 0x10 + (ulonglong)((uint)local_1e8 & 0x1ff) * 0x18);
    local_204 = (float)*pdVar1;
    FVar10 = FVar15;
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
    }
    fStack_200 = (float)pdVar1[1];
    local_1fc = (float)local_1b0;
    if ((ulonglong)FVar10 <= &local_204) {
      FVar10 = FVar15;
      if (local_188.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
      }
      if (&local_204 < (float *)((longlong)FVar10 + (longlong)local_188.Vertices.ArrayMax * 0xc)) {
        local_220 = (longlong)local_188.Vertices.ArrayNum;
        local_218 = 0xc;
        local_238 = &local_204;
        local_230 = FVar15;
        if (local_188.Vertices.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TVector<float>_>)0x0) {
          local_230 = local_188.Vertices.AllocatorInstance.SecondaryData;
        }
        local_228 = (longlong)local_188.Vertices.ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_188.Vertices.ArrayNum == local_188.Vertices.ArrayMax) {
      local_188.Vertices.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                     (0x40c,(ForElementType<UE::Math::TVector<float>_> *)FVar15,
                      &local_188.Vertices.ArrayMax);
    }
    lVar9 = (longlong)local_188.Vertices.ArrayNum;
    FVar10 = FVar15;
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
    }
    local_188.Vertices.ArrayNum = local_188.Vertices.ArrayNum + 1;
    *(ulonglong *)((longlong)FVar10 + lVar9 * 0xc) = CONCAT44(fStack_200,local_204);
    *(float *)((uchar *)((longlong)FVar10 + 8) + lVar9 * 0xc) = local_1fc;
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x10) +
             (ulonglong)(local_1e8._4_4_ >> 9) * 8);
    pdVar1 = (double *)(lVar9 + (ulonglong)(local_1e8._4_4_ & 0x1ff) * 0x18);
    local_1b0 = *(double *)(lVar9 + 0x10 + (ulonglong)(local_1e8._4_4_ & 0x1ff) * 0x18);
    local_204 = (float)*pdVar1;
    FVar10 = FVar15;
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
    }
    fStack_200 = (float)pdVar1[1];
    local_1fc = (float)local_1b0;
    if ((ulonglong)FVar10 <= &local_204) {
      FVar10 = FVar15;
      if (local_188.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
      }
      if (&local_204 < (float *)((longlong)FVar10 + (longlong)local_188.Vertices.ArrayMax * 0xc)) {
        local_220 = (longlong)local_188.Vertices.ArrayNum;
        local_218 = 0xc;
        local_238 = &local_204;
        local_230 = FVar15;
        if (local_188.Vertices.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TVector<float>_>)0x0) {
          local_230 = local_188.Vertices.AllocatorInstance.SecondaryData;
        }
        local_228 = (longlong)local_188.Vertices.ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_188.Vertices.ArrayNum == local_188.Vertices.ArrayMax) {
      local_188.Vertices.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                     (0x40c,(ForElementType<UE::Math::TVector<float>_> *)FVar15,
                      &local_188.Vertices.ArrayMax);
    }
    lVar9 = (longlong)local_188.Vertices.ArrayNum;
    FVar10 = FVar15;
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
    }
    local_188.Vertices.ArrayNum = local_188.Vertices.ArrayNum + 1;
    *(ulonglong *)((longlong)FVar10 + lVar9 * 0xc) = CONCAT44(fStack_200,local_204);
    *(float *)((uchar *)((longlong)FVar10 + 8) + lVar9 * 0xc) = local_1fc;
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x10) +
             (ulonglong)(local_1e0 >> 9) * 8);
    pdVar1 = (double *)(lVar9 + (ulonglong)(local_1e0 & 0x1ff) * 0x18);
    local_1b0 = *(double *)(lVar9 + 0x10 + (ulonglong)(local_1e0 & 0x1ff) * 0x18);
    local_204 = (float)*pdVar1;
    FVar10 = FVar15;
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
    }
    fStack_200 = (float)pdVar1[1];
    local_1fc = (float)local_1b0;
    if ((ulonglong)FVar10 <= &local_204) {
      FVar10 = FVar15;
      if (local_188.Vertices.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FVar10 = local_188.Vertices.AllocatorInstance.SecondaryData;
      }
      if (&local_204 < (float *)((longlong)FVar10 + (longlong)local_188.Vertices.ArrayMax * 0xc)) {
        local_220 = (longlong)local_188.Vertices.ArrayNum;
        local_218 = 0xc;
        local_238 = &local_204;
        local_230 = FVar15;
        if (local_188.Vertices.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TVector<float>_>)0x0) {
          local_230 = local_188.Vertices.AllocatorInstance.SecondaryData;
        }
        local_228 = (longlong)local_188.Vertices.ArrayMax;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_188.Vertices.ArrayNum == local_188.Vertices.ArrayMax) {
      local_188.Vertices.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                     (0x40c,(ForElementType<UE::Math::TVector<float>_> *)FVar15,
                      &local_188.Vertices.ArrayMax);
    }
    lVar9 = (longlong)local_188.Vertices.ArrayNum;
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar15 = local_188.Vertices.AllocatorInstance.SecondaryData;
    }
    local_188.Vertices.ArrayNum = local_188.Vertices.ArrayNum + 1;
    *(ulonglong *)((longlong)FVar15 + lVar9 * 0xc) = CONCAT44(fStack_200,local_204);
    *(float *)((uchar *)((longlong)FVar15 + 8) + lVar9 * 0xc) = local_1fc;
    bVar6 = FConvexVolume::ClipPolygon(*(FConvexVolume **)((longlong)this + 0x20),&local_188);
    if (!bVar6) {
      if (local_188.Vertices.AllocatorInstance.SecondaryData ==
          (ForElementType<UE::Math::TVector<float>_>)0x0) {
        return;
      }
      FMemory::Free((void *)local_188.Vertices.AllocatorInstance.SecondaryData);
      return;
    }
    if (local_188.Vertices.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FMemory::Free((void *)local_188.Vertices.AllocatorInstance.SecondaryData);
    }
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x38) + 6) == '\0') {
    plVar2 = *(longlong **)((longlong)this + 0x40);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar16 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar16 = plVar2 + 7;
      }
      uVar8 = *(uint *)((longlong)plVar16 + (ulonglong)((int)plVar2[9] - 1U & local_1f8[0]) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar14 = (uint *)((longlong)(int)uVar8 * 0x10 + *plVar2);
          if (*puVar14 == local_1f8[0]) {
            puVar12 = puVar14 + 1;
            if (puVar14 == (uint *)0x0) {
              puVar12 = (uint *)0x0;
            }
            if (puVar12 != (uint *)0x0) {
              cVar13 = (char)*puVar12;
              goto LAB_14cb6f81e;
            }
            break;
          }
          uVar8 = puVar14[2];
        } while (uVar8 != 0xffffffff);
      }
    }
    bVar6 = *(bool *)(*(longlong *)((longlong)this + 0x38) + 3);
    pTVar3 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)**(undefined8 **)((longlong)this + 0x30)
    ;
    pTVar4 = *(TVector<double> **)((longlong)this + 0x28);
    pTVar11 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                        (*(FDynamicMesh3 **)(*(longlong *)this + 0x48),&local_1a8,local_1f8[0]);
    local_208[0] = IsOccluded(pTVar11,pTVar4,pTVar3,bVar6);
    local_1d8.Value = (bool *)local_1f8;
    local_1c8 = local_208;
    TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,bool_const_&>_>
              (*(TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x40),&local_1d8,(bool *)&local_1d8.Value);
    cVar13 = local_208[0];
LAB_14cb6f81e:
    if (cVar13 != '\0') {
      return;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             (int *)((longlong)&local_1d8.Key + 4),(bool *)local_1f0);
  return;
}

// operator() @ 14cb6fc10

bool __thiscall
`FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  double *pdVar3;
  TVector<double> *pTVar4;
  uint local_38;
  TVector<double> local_20;
  
  pTVar4 = UE::Geometry::FDynamicMesh3::GetTriNormal
                     (*(FDynamicMesh3 **)(*(longlong *)this + 0x48),&local_20,param_1);
  local_38 = (uint)*(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x130) +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x10) +
           (ulonglong)(local_38 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + (ulonglong)(local_38 & 0x1ff) * 0x18);
  pdVar3 = *(double **)((longlong)this + 8);
  return (pdVar1[1] - pdVar3[1]) * (pTVar4->field0_0x0)._s_0.Y +
         (*pdVar1 - *pdVar3) * (pTVar4->field0_0x0)._s_0.X +
         (*(double *)(lVar2 + 0x10 + (ulonglong)(local_38 & 0x1ff) * 0x18) - pdVar3[2]) *
         (pTVar4->field0_0x0)._s_0.Z < 0.0;
}

// DoEdgeBasedSelection @ 14cb830c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMeshTopologySelector::DoEdgeBasedSelection
          (FMeshTopologySelector *this,FSelectionSettings *param_1,TRay<double> *param_2,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_3,FGeometrySet3 *param_4,
          FGroupTopologySelection *param_5,TVector<double> *param_6,int *param_7)

{
  double *pdVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  FTopologyProvider *pFVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMesh3 *this_00;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  TVector<double> *pTVar23;
  FIndex2i FVar24;
  ulonglong uVar25;
  longlong lVar26;
  byte bVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  int *piVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  ForAnyElementType FVar35;
  FNearest *pFVar36;
  uint *puVar37;
  bool *pbVar38;
  ForElementType<unsigned_int> FVar39;
  longlong lVar40;
  uint uVar41;
  FNearest *pFVar42;
  longlong lVar43;
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined8 unaff_XMM8_Qb;
  double dVar53;
  undefined1 auStackY_458 [32];
  ForAnyElementType local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined1 local_3f7 [7];
  double local_3f0;
  double local_3e8;
  double local_3e0;
  FNearest *local_3d8;
  undefined1 local_3d0 [8];
  FGroupTopologySelection *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  uint local_3b8;
  int local_3b4;
  int iStack_3b0;
  int local_3ac;
  int iStack_3a8;
  TArray<UE::Geometry::FGeometrySet3::FNearest,TSizedDefaultAllocator<32>_> local_3a0;
  FSelectionSettings *local_390;
  TRay<double> *local_388;
  double local_380;
  undefined8 local_378;
  uint local_370 [2];
  uint local_368;
  uint uStack_364;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_360;
  undefined4 local_358;
  uint uStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  undefined4 local_32c;
  int local_328;
  int local_324;
  int local_320 [2];
  int *local_318;
  int local_310;
  int local_30c [5];
  TRay<double> *local_2f8;
  undefined1 local_2f0 [16];
  double local_2e0;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  FSparseArrayAllocationInfo local_2a8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  undefined1 local_268 [8];
  TVector<double>_u_0 local_260;
  code *local_248 [2];
  undefined **local_238;
  FMeshTopologySelector *local_230;
  undefined8 local_220;
  code *local_218 [2];
  undefined **local_208;
  FMeshTopologySelector *local_200;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector<double> local_1a0;
  FNearest local_188;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  uint local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  ulonglong local_e8;
  undefined8 uVar48;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  pFVar42 = (FNearest *)0x0;
  local_3c8 = param_5;
  local_318 = param_7;
  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.ArrayNum = 0;
  local_3a0.ArrayMax = 0;
  local_408.Data = (FScriptContainerElement *)0x0;
  local_400 = 0;
  local_3d8 = (FNearest *)0x0;
  local_390 = param_1;
  local_388 = param_2;
  if (param_1->bSelectDownRay == false) {
    local_238 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_220 = 0;
    local_248[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMeshTopologySelector::DoEdgeBasedSelection'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                   ::Call;
    local_230 = this;
    bVar17 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
                       (param_4,param_2,&local_188,
                        (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                         *)local_248);
    pFVar36 = &local_188;
    local_3d8 = &local_188;
    if (!bVar17) {
      pFVar36 = pFVar42;
      local_3d8 = pFVar42;
    }
  }
  else {
    local_208 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMeshTopologySelector::DoEdgeBasedSelection'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_1f0 = 0;
    local_218[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMeshTopologySelector::DoEdgeBasedSelection'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                   ::Call;
    local_200 = this;
    bVar17 = UE::Geometry::FGeometrySet3::CollectCurvesNearRay
                       (param_4,param_2,&local_3a0,
                        (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                         *)local_218);
    pFVar36 = pFVar42;
    if (bVar17) {
      iVar19 = local_3a0.ArrayNum;
      uVar29 = (ulonglong)local_3a0.ArrayNum;
      pFVar42 = (FNearest *)(local_3a0.AllocatorInstance.Data + uVar29 * 0x50);
      FVar35.Data = local_3a0.AllocatorInstance.Data;
      dVar51 = __real_7fefffffffffffff;
      while( true ) {
        if ((int)uVar29 != iVar19) {
          local_3f8 = 0;
          `TCheckedPointerIterator<UE::Geometry::FGeometrySet3::FNearest,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_3f8);
          uVar29 = local_3a0._8_8_ & 0xffffffff;
        }
        pFVar36 = local_3d8;
        param_1 = local_390;
        if ((FNearest *)FVar35.Data == pFVar42) break;
        if (((FNearest *)FVar35.Data)->RayParam < dVar51) {
          dVar51 = ((FNearest *)FVar35.Data)->RayParam;
          local_3d8 = (FNearest *)FVar35.Data;
        }
        FVar35.Data = FVar35.Data + 0x50;
      }
    }
  }
  if ((pFVar36 == (FNearest *)0x0) ||
     ((param_1->bIgnoreOcclusion == false &&
      (bVar17 = IsOccluded(&pFVar36->NearestGeoPoint,&param_2->Origin,param_3,param_1->bHitBackFaces
                          ), bVar17)))) {
LAB_14cb846dc:
    bVar17 = false;
  }
  else {
    dVar3 = __real_3f1a36e2e0000000;
    uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar51 = (pFVar36->NearestGeoPoint).field0_0x0._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (pFVar36->NearestGeoPoint).field0_0x0._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar51;
    local_348 = 8;
    (param_6->field0_0x0)._s_0.Z = (pFVar36->NearestGeoPoint).field0_0x0._s_0.Z;
    if (param_1->bSelectDownRay != false) {
      local_3ac = pFVar36->ID;
      iStack_3a8 = pFVar36->PolySegmentIdx;
      if (((local_408.Data <= (FScriptContainerElement *)&local_3ac) &&
          ((FScriptContainerElement *)&local_3ac < local_408.Data + (longlong)local_400._4_4_ * 8))
         && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      iVar19 = (int)local_400;
      if ((int)local_400 == local_400._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_408,(int *)((longlong)&local_400 + 4));
      }
      local_400 = CONCAT44(local_400._4_4_,iVar19 + 1);
      *(ulonglong *)(local_408.Data + (longlong)iVar19 * 8) = CONCAT44(iStack_3a8,local_3ac);
      pFVar8 = (this->TopologyProvider).Ptr;
      plVar22 = (longlong *)(**(code **)((longlong)*pFVar8 + 0x30))(pFVar8,pFVar36->ID);
      uVar41 = pFVar36->PolySegmentIdx;
      uVar21 = 0;
      if ((int)uVar41 < (int)plVar22[1]) {
        uVar21 = ~uVar41 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      pFVar9 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      uVar41 = *(uint *)(*plVar22 + (longlong)(int)uVar41 * 4);
      uVar29 = *(ulonglong *)
                (*(longlong *)
                  ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8)
                + (ulonglong)(uVar41 & 0x1ff) * 0x10);
      uVar34 = (ulonglong)((uint)uVar29 & 0x1ff);
      lVar43 = *(longlong *)(pFVar9 + ((uVar29 & 0xffffffff) >> 9) * 8);
      uVar32 = (ulonglong)((uint)(uVar29 >> 0x20) & 0x1ff);
      pdVar1 = (double *)(lVar43 + uVar34 * 0x18);
      local_1e8 = *pdVar1;
      dStack_1e0 = pdVar1[1];
      lVar40 = *(longlong *)(pFVar9 + (uVar29 >> 0x29) * 8);
      local_1d8 = *(double *)(lVar43 + 0x10 + uVar34 * 0x18);
      pdVar1 = (double *)(lVar43 + uVar34 * 0x18);
      dVar12 = *pdVar1;
      dVar49 = pdVar1[1];
      local_298._s_0.X = local_1e8 + (param_2->Direction).field0_0x0._s_0.X;
      local_298._s_0.Z = local_1d8 + (param_2->Direction).field0_0x0._s_0.Z;
      local_298._s_0.Y = dStack_1e0 + (param_2->Direction).field0_0x0._s_0.Y;
      pdVar1 = (double *)(lVar40 + uVar32 * 0x18);
      local_260._s_0.X = *pdVar1;
      local_260._s_0.Y = pdVar1[1];
      local_280._s_0.Z = *(double *)(lVar43 + 0x10 + uVar34 * 0x18);
      local_260._s_0.Z = *(double *)(lVar40 + 0x10 + uVar32 * 0x18);
      local_280._s_0.X = dVar12;
      local_280._s_0.Y = dVar49;
      pTVar23 = UE::Geometry::VectorUtil::Normal<double>
                          (&local_1a0,(TVector<double> *)&local_280._s_0,
                           (TVector<double> *)&local_260._s_0,(TVector<double> *)&local_298._s_0);
      iVar19 = local_3a0.ArrayNum;
      auVar5 = *(undefined1 (*) [16])&pTVar23->field0_0x0;
      dVar51 = (pTVar23->field0_0x0)._s_0.Z;
      auVar15._4_8_ = unaff_XMM8_Qb;
      auVar15._0_4_ = auVar5._4_4_;
      auVar47._0_8_ = auVar15._0_8_ << 0x20;
      auVar47._8_4_ = auVar5._8_4_;
      auVar47._12_4_ = auVar5._12_4_;
      dVar4 = auVar5._0_8_;
      pFVar42 = (FNearest *)(local_3a0.AllocatorInstance.Data + (longlong)local_3a0.ArrayNum * 0x50)
      ;
      dVar12 = dVar49 * auVar47._8_8_ + dVar12 * dVar4 + local_280._s_0.Z * dVar51;
      FVar35.Data = local_3a0.AllocatorInstance.Data;
      local_2f0 = auVar5;
      local_2e0 = dVar51;
      while( true ) {
        if (local_3a0.ArrayNum != iVar19) {
          local_3f7[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FGeometrySet3::FNearest,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_3f7);
        }
        param_1 = local_390;
        param_2 = local_388;
        if ((FNearest *)FVar35.Data == pFVar42) break;
        if (pFVar36 != (FNearest *)FVar35.Data) {
          pFVar8 = (this->TopologyProvider).Ptr;
          plVar22 = (longlong *)
                    (**(code **)((longlong)*pFVar8 + 0x30))(pFVar8,((FNearest *)FVar35.Data)->ID);
          uVar41 = ((FNearest *)FVar35.Data)->PolySegmentIdx;
          uVar21 = 0;
          if ((int)uVar41 < (int)plVar22[1]) {
            uVar21 = ~uVar41 >> 0x1f;
          }
          uVar48 = extraout_XMM0_Qb;
          if (uVar21 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar48 = extraout_XMM0._8_8_;
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
          }
          pFVar9 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
          uVar41 = *(uint *)(*plVar22 + (longlong)(int)uVar41 * 4);
          uVar29 = *(ulonglong *)
                    (*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar41 >> 9) * 8) + (ulonglong)(uVar41 & 0x1ff) * 0x10);
          uVar34 = (ulonglong)((uint)uVar29 & 0x1ff);
          lVar43 = *(longlong *)(pFVar9 + ((uVar29 & 0xffffffff) >> 9) * 8);
          auVar6 = *(undefined1 (*) [16])(lVar43 + uVar34 * 0x18);
          local_2f8 = *(TRay<double> **)(lVar43 + 0x10 + uVar34 * 0x18);
          auVar16._4_8_ = uVar48;
          auVar16._0_4_ = auVar6._4_4_;
          auVar44._0_8_ = auVar16._0_8_ << 0x20;
          auVar44._8_4_ = auVar6._8_4_;
          auVar44._12_4_ = auVar6._12_4_;
          dVar49 = (auVar47._8_8_ * auVar44._8_8_ + dVar4 * auVar6._0_8_ +
                   dVar51 * (double)local_2f8) - dVar12;
          pFVar36 = local_3d8;
          if (((double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar28,SUB84(dVar49,0) & uVar7)
               < dVar3) &&
             (uVar34 = (ulonglong)((uint)(uVar29 >> 0x20) & 0x1ff),
             lVar43 = *(longlong *)(pFVar9 + (uVar29 >> 0x29) * 8),
             pdVar1 = (double *)(lVar43 + uVar34 * 0x18),
             local_2f8 = *(TRay<double> **)(lVar43 + 0x10 + uVar34 * 0x18),
             dVar49 = (auVar5._8_8_ * pdVar1[1] + dVar4 * *pdVar1 + dVar51 * (double)local_2f8) -
                      dVar12,
             (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar28,SUB84(dVar49,0) & uVar7) <
             dVar3)) {
            local_3b4 = ((FNearest *)FVar35.Data)->ID;
            iStack_3b0 = ((FNearest *)FVar35.Data)->PolySegmentIdx;
            if ((local_408.Data <= (FScriptContainerElement *)&local_3b4) &&
               (((FScriptContainerElement *)&local_3b4 <
                 local_408.Data + (longlong)local_400._4_4_ * 8 &&
                (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar17)))) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            iVar20 = (int)local_400;
            if ((int)local_400 == local_400._4_4_) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_408,(int *)((longlong)&local_400 + 4));
            }
            local_400 = CONCAT44(local_400._4_4_,iVar20 + 1);
            *(ulonglong *)(local_408.Data + (longlong)iVar20 * 8) = CONCAT44(iStack_3b0,local_3b4);
            pFVar36 = local_3d8;
          }
        }
        FVar35.Data = FVar35.Data + 0x50;
      }
    }
    lVar43 = 8;
    if ((param_1->bPreferProjectedElement == false) || (param_1->bEnableFaceHits == false)) {
LAB_14cb8465c:
      if (param_1->bEnableEdgeHits == false) goto LAB_14cb846dc;
      if (param_1->bSelectDownRay == false) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_3c8->SelectedEdgeIDs,&local_310,(bool *)pFVar36);
      }
      else {
        iVar19 = (int)local_400;
        pFVar9 = local_408.Data + (longlong)(int)local_400 * 8;
        FVar35.Data = local_408.Data;
        while( true ) {
          if ((int)local_400 != iVar19) {
            `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_3d0);
          }
          pFVar36 = local_3d8;
          if (FVar35.Data == pFVar9) break;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_3c8->SelectedEdgeIDs,local_30c,(bool *)FVar35.Data);
          FVar35.Data = FVar35.Data + 8;
        }
      }
      if (local_318 != (int *)0x0) {
        *local_318 = pFVar36->PolySegmentIdx;
      }
    }
    else {
      pFVar8 = (this->TopologyProvider).Ptr;
      local_138._0_8_ = (FScriptContainerElement *)0x0;
      local_138._8_8_ = 0;
      local_118 = (ForElementType<unsigned_int>)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = -1;
      local_104 = 0;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = 0;
      plVar22 = (longlong *)(**(code **)((longlong)*pFVar8 + 0x30))(pFVar8,pFVar36->ID);
      uVar7 = pFVar36->PolySegmentIdx;
      uVar28 = 0;
      if ((int)uVar7 < (int)plVar22[1]) {
        uVar28 = ~uVar7 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      this_00 = this->Mesh;
      dVar51 = (param_2->Direction).field0_0x0._s_0.Y;
      dVar3 = (param_2->Direction).field0_0x0._s_0.Z;
      uVar7 = *(uint *)(*plVar22 + (longlong)(int)uVar7 * 4);
      pFVar9 = (this_00->Vertices).Blocks.AllocatorInstance.Data;
      dVar4 = (param_2->Direction).field0_0x0._s_0.X;
      auVar5 = *(undefined1 (*) [16])
                (*(longlong *)
                  ((this_00->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                (ulonglong)(uVar7 & 0x1ff) * 0x10);
      uVar29 = (ulonglong)(auVar5._0_4_ & 0x1ff);
      lVar40 = *(longlong *)(pFVar9 + ((auVar5._0_8_ & 0xffffffff) >> 9) * 8);
      auVar47 = *(undefined1 (*) [16])(lVar40 + uVar29 * 0x18);
      local_388 = *(TRay<double> **)(lVar40 + 0x10 + uVar29 * 0x18);
      dVar14 = auVar47._0_8_;
      uVar29 = (ulonglong)(auVar5._4_4_ & 0x1ff);
      dVar12 = auVar47._8_8_;
      dVar53 = ((double)local_388 + dVar3) - (double)local_388;
      dVar50 = (dVar14 + dVar4) - dVar14;
      lVar40 = *(longlong *)(pFVar9 + (auVar5._0_8_ >> 0x29) * 8);
      dVar49 = (dVar12 + dVar51) - dVar12;
      pdVar1 = (double *)(lVar40 + uVar29 * 0x18);
      dVar11 = *(double *)(lVar40 + 0x10 + uVar29 * 0x18) - (double)local_388;
      dVar52 = pdVar1[1] - dVar12;
      dVar13 = *pdVar1 - dVar14;
      local_3f0 = dVar49 * dVar11 - dVar53 * dVar52;
      dVar53 = dVar53 * dVar13 - dVar50 * dVar11;
      auVar45._8_4_ = auVar47._8_4_;
      auVar45._0_8_ = local_3f0;
      auVar45._12_4_ = auVar47._12_4_;
      auVar46._8_8_ = auVar45._8_8_;
      auVar46._0_8_ = local_3f0 * local_3f0;
      local_3e8 = dVar50 * dVar52 - dVar49 * dVar13;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar53 * dVar53 + auVar46._0_8_ + local_3e8 * local_3e8;
      auVar47 = sqrtpd(auVar46,auVar6);
      if (auVar47._0_8_ <= 0.0) {
        local_3e8 = 0.0;
        local_3e0 = 0.0;
        local_3f0 = 0.0;
      }
      else {
        local_3e0 = __real_3ff0000000000000 / auVar47._0_8_;
        local_3f0 = local_3e0 * local_3f0;
        local_3e8 = local_3e0 * local_3e8;
        local_3e0 = local_3e0 * dVar53;
      }
      local_380 = dVar12 * local_3e0 + dVar14 * local_3f0 + (double)local_388 * local_3e8;
      dVar49 = dVar51 * dVar13 - dVar4 * dVar52;
      dVar53 = dVar3 * dVar52 - dVar51 * dVar11;
      dVar4 = dVar4 * dVar11 - dVar3 * dVar13;
      local_2f8 = local_388;
      UE::Geometry::FDynamicMesh3::GetEdgeOpposingV(this_00,(int)&local_378);
      pFVar9 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      uVar29 = (ulonglong)((uint)local_378 & 0x1ff);
      lVar40 = *(longlong *)(pFVar9 + ((local_378 & 0xffffffff) >> 9) * 8);
      pdVar1 = (double *)(lVar40 + uVar29 * 0x18);
      dVar50 = *pdVar1;
      dVar3 = pdVar1[1];
      local_2f8 = *(TRay<double> **)(lVar40 + 0x10 + uVar29 * 0x18);
      dVar51 = (dVar3 * local_3e0 + dVar50 * local_3f0 + (double)local_2f8 * local_3e8) - local_380;
      if ((__real_3f1a36e2e0000000 <=
           (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar51,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (dVar3 = dVar3 - dVar12, dVar50 = dVar50 - dVar14,
         (dVar50 * dVar11 - ((double)local_2f8 - (double)local_388) * dVar13) * dVar4 +
         (((double)local_2f8 - (double)local_388) * dVar52 - dVar3 * dVar11) * dVar53 +
         (dVar3 * dVar13 - dVar50 * dVar52) * dVar49 <= 0.0)) {
        if (local_378._4_4_ != 0xffffffff) {
          lVar40 = *(longlong *)(pFVar9 + (ulonglong)(local_378._4_4_ >> 9) * 8);
          pdVar1 = (double *)(lVar40 + (ulonglong)(local_378._4_4_ & 0x1ff) * 0x18);
          dVar50 = *pdVar1;
          dVar3 = pdVar1[1];
          local_2f8 = *(TRay<double> **)
                       (lVar40 + 0x10 + (ulonglong)(local_378._4_4_ & 0x1ff) * 0x18);
          dVar51 = (dVar3 * local_3e0 + dVar50 * local_3f0 + (double)local_2f8 * local_3e8) -
                   local_380;
          if (((double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar51,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
               __real_3f1a36e2e0000000) &&
             (dVar3 = dVar3 - dVar12, dVar50 = dVar50 - dVar14,
             0.0 < (dVar50 * dVar11 - ((double)local_2f8 - (double)local_388) * dVar13) * dVar4 +
                   (((double)local_2f8 - (double)local_388) * dVar52 - dVar3 * dVar11) * dVar53 +
                   (dVar3 * dVar13 - dVar50 * dVar52) * dVar49)) {
            pFVar8 = (this->TopologyProvider).Ptr;
            local_3bc = (**(code **)((longlong)*pFVar8 + 0x50))(pFVar8,auVar5._12_4_);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_3c8->SelectedGroupIDs,&local_338,(bool *)&local_3bc);
            pbVar38 = (bool *)&local_3bc;
            piVar31 = &local_334;
            goto LAB_14cb83c85;
          }
        }
      }
      else {
        pFVar8 = (this->TopologyProvider).Ptr;
        local_3c0 = (**(code **)((longlong)*pFVar8 + 0x50))(pFVar8,auVar5._8_4_);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_3c8->SelectedGroupIDs,&local_340,(bool *)&local_3c0);
        pbVar38 = (bool *)&local_3c0;
        piVar31 = &local_33c;
LAB_14cb83c85:
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,piVar31,
                   pbVar38);
      }
      dVar3 = local_380;
      dVar51 = __real_3f1a36e2e0000000;
      uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if ((local_390->bSelectDownRay != false) && (0 < local_138._8_4_ - local_104)) {
        uVar41 = 1;
        if (1 < (int)local_400) {
          lVar40 = 1;
          do {
            pFVar8 = (this->TopologyProvider).Ptr;
            pcVar10 = *(code **)((longlong)*pFVar8 + 0x30);
            uVar21 = 0;
            if ((int)uVar41 < (int)local_400) {
              uVar21 = ~uVar41 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            plVar22 = (longlong *)(*pcVar10)(pFVar8,*(undefined4 *)(local_408.Data + lVar43));
            puVar37 = (uint *)0x0;
            uVar21 = 0;
            if ((int)uVar41 < (int)local_400) {
              uVar21 = ~uVar41 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            uVar21 = *(uint *)(local_408.Data + lVar40 * 8 + 4);
            uVar30 = 0;
            if ((int)uVar21 < (int)plVar22[1]) {
              uVar30 = ~uVar21 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            uVar21 = *(uint *)(*plVar22 + (longlong)(int)uVar21 * 4);
            auVar5 = *(undefined1 (*) [16])
                      (*(longlong *)
                        ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 0x10);
            FVar24 = UE::Geometry::FDynamicMesh3::GetEdgeOpposingV(this->Mesh,(int)local_268);
            local_378 = *(ulonglong *)FVar24.field0_0x0;
            uVar29 = (ulonglong)((uint)local_378 & 0x1ff);
            lVar43 = *(longlong *)
                      ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                      ((local_378 & 0xffffffff) >> 9) * 8);
            pdVar1 = (double *)(lVar43 + uVar29 * 0x18);
            local_1d0 = *pdVar1;
            dStack_1c8 = pdVar1[1];
            local_1c0 = *(double *)(lVar43 + 0x10 + uVar29 * 0x18);
            dVar4 = (dStack_1c8 * local_3e0 + local_1d0 * local_3f0 + local_1c0 * local_3e8) - dVar3
            ;
            if ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar28,SUB84(dVar4,0) & uVar7) <
                dVar51) {
              pFVar8 = (this->TopologyProvider).Ptr;
              uVar21 = (**(code **)((longlong)*pFVar8 + 0x50))(pFVar8,auVar5._8_4_);
              local_370[0] = uVar21;
              if (local_138._8_4_ != local_104) {
                FVar35.Data = (FScriptContainerElement *)local_100;
                if ((ForElementType<FSetElementId>)local_f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar35.Data = local_f8.Data;
                }
                for (iVar19 = *(int *)((longlong)FVar35.Data +
                                      (ulonglong)(local_f0 - 1 & uVar21) * 4); iVar19 != -1;
                    iVar19 = *(int *)(local_138._0_8_ + (longlong)iVar19 * 0xc + 4)) {
                  if (*(uint *)(local_138._0_8_ + (longlong)iVar19 * 0xc) == uVar21)
                  goto LAB_14cb843a6;
                }
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_3c8->SelectedGroupIDs,&local_330,(bool *)local_370);
              if (local_104 == 0) {
                iVar19 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0xc,4,1,(ForAnyElementType *)local_138,(int *)(local_138 + 8),
                                    (int *)(local_138 + 0xc));
                iVar20 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),1);
                FVar39 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
                if (local_118 != (ForElementType<unsigned_int>)0x0) {
                  FVar39 = local_118;
                }
                bVar27 = (byte)iVar20 & 0x1f;
                if (iVar20 < 0) {
                  iVar20 = iVar20 + 0x1f;
                  bVar27 = bVar27 - 0x20;
                }
                puVar2 = (uint *)((longlong)FVar39 + (longlong)(iVar20 >> 5) * 4);
                *puVar2 = *puVar2 & ~(1 << (bVar27 & 0x1f));
                iVar20 = local_108;
              }
              else {
                local_104 = local_104 + -1;
                iVar20 = *(int *)(local_138._0_8_ + (longlong)local_108 * 0xc + 4);
                iVar19 = local_108;
                if (local_104 != 0) {
                  *(undefined4 *)(local_138._0_8_ + (longlong)iVar20 * 0xc) = 0xffffffff;
                }
              }
              local_108 = iVar20;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_138,&local_2a8,iVar19);
              if (local_2a8.Pointer != (uint *)0x0) {
                *(uint *)local_2a8.Pointer = uVar21;
                *(uint *)((longlong)local_2a8.Pointer + 4) = 0xffffffff;
                puVar37 = local_2a8.Pointer;
              }
              uVar21 = *puVar37;
              if ((local_138._8_4_ - local_104 != 1) && (local_138._8_4_ != local_104)) {
                FVar35.Data = (FScriptContainerElement *)local_100;
                if ((ForElementType<FSetElementId>)local_f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar35.Data = local_f8.Data;
                }
                for (iVar19 = *(int *)((longlong)FVar35.Data +
                                      (ulonglong)(local_f0 - 1 & uVar21) * 4); iVar19 != -1;
                    iVar19 = *(int *)(local_138._0_8_ + (longlong)iVar19 * 0xc + 4)) {
                  if (*(uint *)(local_138._0_8_ + (longlong)iVar19 * 0xc) == uVar21) {
                    if (iVar19 != -1) {
                      *(uint *)(local_138._0_8_ + (longlong)iVar19 * 0xc) = uVar21;
                      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_138,local_2a8.Index,1);
                      goto LAB_14cb843a6;
                    }
                    break;
                  }
                }
              }
              uVar29 = 0;
              uVar34 = 1;
              uVar30 = local_138._8_4_ - local_104;
              if (3 < uVar30) {
                uVar34 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
                lVar43 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                  }
                }
                local_32c = (undefined4)lVar43;
                uVar34 = (ulonglong)(uint)(1 << ((byte)lVar43 & 0x1f));
              }
              uVar33 = (uint)uVar34;
              if (((int)uVar30 < 1) || ((int)uVar33 <= (int)local_f0)) {
                uVar21 = local_f0 - 1 & uVar21;
                puVar37[2] = uVar21;
                FVar35.Data = (FScriptContainerElement *)local_100;
                if ((ForElementType<FSetElementId>)local_f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar35.Data = local_f8.Data;
                }
                uVar29 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar21;
                puVar37[1] = *(uint *)((longlong)FVar35.Data + uVar29 * 4);
                *(int *)((longlong)FVar35.Data + uVar29 * 4) = local_2a8.Index;
              }
              else {
                local_f0 = uVar33;
                if ((ForElementType<FSetElementId>)local_f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_f8,0,0,4);
                }
                if (uVar33 != 0) {
                  uVar21 = uVar33;
                  if (uVar33 < 2) {
                    if ((ForElementType<FSetElementId>)local_f8.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      uVar21 = 0;
                      goto LAB_14cb84181;
                    }
                  }
                  else {
LAB_14cb84181:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_f8,0,uVar21,4);
                  }
                  if (0 < (int)uVar33) {
                    uVar32 = uVar29;
                    do {
                      FVar35.Data = (FScriptContainerElement *)local_100;
                      if ((ForElementType<FSetElementId>)local_f8.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar35.Data = local_f8.Data;
                      }
                      uVar25 = (longlong)(int)uVar33 - 1U & uVar32;
                      uVar32 = uVar32 + 1;
                      *(undefined4 *)((longlong)FVar35.Data + uVar25 * 4) = 0xffffffff;
                      uVar34 = uVar34 - 1;
                    } while (uVar34 != 0);
                  }
                }
                if (local_f0 != 0) {
                  pTStack_360 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
                  local_368 = 0;
                  uStack_364 = 1;
                  uStack_354 = 0;
                  uStack_350 = 0;
                  if (local_110 != 0) {
                    FVar39 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
                    if (local_118 != (ForElementType<unsigned_int>)0x0) {
                      FVar39 = local_118;
                    }
                    uVar21 = *(uint *)FVar39;
                    uVar34 = uVar29;
                    while (uVar21 == 0) {
                      uStack_350 = (int)uVar34 + 0x20;
                      uVar34 = (ulonglong)uStack_350;
                      iVar19 = (int)uVar29;
                      local_368 = iVar19 + 1;
                      uVar29 = (ulonglong)local_368;
                      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 <
                          (int)local_368) goto LAB_14cb8428e;
                      uVar21 = ((uint *)((longlong)FVar39 + 4))[iVar19];
                    }
                    uStack_364 = -uVar21 & uVar21;
                    uVar29 = (ulonglong)uStack_364 * 2 + 1;
                    lVar43 = 0x3f;
                    if (uVar29 != 0) {
                      for (; uVar29 >> lVar43 == 0; lVar43 = lVar43 + -1) {
                      }
                    }
                    local_328 = (int)lVar43;
                    uStack_354 = local_328 + -1 + (int)uVar34;
                    uVar29 = (ulonglong)uStack_354;
                    if ((int)local_110 < (int)uStack_354) {
LAB_14cb8428e:
                      uVar29 = (ulonglong)local_110;
                      uStack_354 = local_110;
                    }
                  }
                  local_358 = 0xffffffff;
                  local_2d0 = (longlong *)local_138;
                  local_2c8._padding_ = CONCAT44(uStack_364,local_368);
                  local_2c8.CurrentBitIndex = uStack_354;
                  local_2c8.UnvisitedBitMask = 0xffffffff;
                  local_2c8._28_4_ = uStack_34c;
                  local_2c8.BaseBitIndex = uStack_350;
                  local_2c8.Array = pTStack_360;
                  if ((int)uVar29 < (int)local_110) {
                    do {
                      lVar43 = *local_2d0;
                      lVar26 = (longlong)(int)uVar29;
                      uVar21 = local_f0 - 1 & *(uint *)(lVar43 + lVar26 * 0xc);
                      *(uint *)(lVar43 + 8 + lVar26 * 0xc) = uVar21;
                      FVar35.Data = (FScriptContainerElement *)local_100;
                      if ((ForElementType<FSetElementId>)local_f8.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar35.Data = local_f8.Data;
                      }
                      uVar34 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar21;
                      *(undefined4 *)(lVar43 + 4 + lVar26 * 0xc) =
                           *(undefined4 *)((longlong)FVar35.Data + uVar34 * 4);
                      *(int *)((longlong)FVar35.Data + uVar34 * 4) = (int)uVar29;
                      local_2c8.UnvisitedBitMask =
                           local_2c8.UnvisitedBitMask & ~local_2c8._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
                      uVar29 = (ulonglong)(uint)local_2c8.CurrentBitIndex;
                    } while (local_2c8.CurrentBitIndex < (local_2c8.Array)->NumBits);
                  }
                }
              }
            }
LAB_14cb843a6:
            if (local_378._4_4_ != 0xffffffff) {
              lVar43 = *(longlong *)
                        ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_378._4_4_ >> 9) * 8);
              pdVar1 = (double *)(lVar43 + (ulonglong)(local_378._4_4_ & 0x1ff) * 0x18);
              local_1b8 = *pdVar1;
              dStack_1b0 = pdVar1[1];
              local_1a8 = *(double *)(lVar43 + 0x10 + (ulonglong)(local_378._4_4_ & 0x1ff) * 0x18);
              dVar4 = (dStack_1b0 * local_3e0 + local_1b8 * local_3f0 + local_1a8 * local_3e8) -
                      dVar3;
              if ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar28,SUB84(dVar4,0) & uVar7)
                  < dVar51) {
                pFVar8 = (this->TopologyProvider).Ptr;
                local_3b8 = (**(code **)((longlong)*pFVar8 + 0x50))(pFVar8,auVar5._12_4_);
                if (local_138._8_4_ != local_104) {
                  FVar35.Data = (FScriptContainerElement *)local_100;
                  if ((ForElementType<FSetElementId>)local_f8.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar35.Data = local_f8.Data;
                  }
                  for (iVar19 = *(int *)((longlong)FVar35.Data +
                                        (ulonglong)(local_f0 - 1 & local_3b8) * 4); iVar19 != -1;
                      iVar19 = *(int *)(local_138._0_8_ + (longlong)iVar19 * 0xc + 4)) {
                    if (*(uint *)(local_138._0_8_ + (longlong)iVar19 * 0xc) == local_3b8)
                    goto LAB_14cb844b7;
                  }
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&local_3c8->SelectedGroupIDs,&local_324,(bool *)&local_3b8);
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,
                           local_320,(bool *)&local_3b8);
              }
            }
LAB_14cb844b7:
            uVar41 = uVar41 + 1;
            lVar43 = local_348 + 8;
            lVar40 = lVar40 + 1;
            pFVar36 = local_3d8;
            local_348 = lVar43;
          } while ((int)uVar41 < (int)local_400);
        }
      }
      param_1 = local_390;
      local_f0 = 0;
      if (local_138._8_4_ - local_104 < 1) {
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free(local_f8.Data);
        }
        bVar17 = local_138._12_4_ != 0;
        local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
        if (bVar17) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = -1;
        local_104 = 0;
        local_110 = 0;
        if (0x80 < local_10c) {
          local_10c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (local_118 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_118);
        }
        if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_138._0_8_);
        }
        goto LAB_14cb8465c;
      }
      if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_f8.Data);
      }
      bVar17 = local_138._12_4_ != 0;
      local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
      if (bVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
      }
      local_108 = -1;
      local_104 = 0;
      local_110 = 0;
      if (0x80 < local_10c) {
        local_10c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
      }
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_118);
      }
      if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_138._0_8_);
        bVar17 = true;
        goto LAB_14cb846de;
      }
    }
    bVar17 = true;
  }
LAB_14cb846de:
  if (local_408.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data);
  }
  if ((FNearest *)local_3a0.AllocatorInstance.Data != (FNearest *)0x0) {
    FMemory::Free(local_3a0.AllocatorInstance.Data);
  }
  return bVar17;
}

// FindSelectedElement @ 14cb8f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cb8fa50) */
/* WARNING: Removing unreachable block (ram,0x00014cb8fa61) */
/* WARNING: Removing unreachable block (ram,0x00014cb8fa65) */

bool __thiscall
FMeshTopologySelector::FindSelectedElement
          (FMeshTopologySelector *this,FSelectionSettings *param_1,TRay<double> *param_2,
          FGroupTopologySelection *param_3,TVector<double> *param_4,TVector<double> *param_5,
          int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  FTopologyProvider *pFVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  char cVar13;
  undefined8 uVar14;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar15;
  TVector<double> *pTVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_3c8 [32];
  int local_384;
  int local_380 [2];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_378;
  int local_370 [2];
  TVector<double>_u_0 local_368;
  double local_350;
  TVector<double> *local_348;
  FGeometrySet3 *local_340;
  int *local_338;
  TVector<double>_u_0 local_330;
  double local_318;
  double dStack_310;
  double local_308;
  TVector<double>_u_0 local_2f8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  code *local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  longlong *plStack_290;
  undefined1 local_288;
  FGroupTopologySelection local_278;
  FGroupTopologySelection local_188;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_348 = param_4;
  local_338 = param_6;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetSpatial);
  pcVar7 = *(code **)&this->GetSpatial;
  plVar18 = *(longlong **)&(this->GetSpatial).field_0x28;
  plVar17 = (longlong *)&(this->GetSpatial).field_0x10;
  if (plVar18 != (longlong *)0x0) {
    plVar17 = plVar18;
  }
  uVar14 = (**(code **)(*plVar17 + 8))();
  pTVar15 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(*pcVar7)(uVar14);
  local_378 = pTVar15;
  local_340 = GetGeometrySet(this);
  uVar21 = uStack_2a4;
  uVar20 = local_2a8;
  dVar1 = dStack_2b0;
  bVar19 = false;
  local_2c8 = __real_7fefffffffffffff;
  local_2b8 = (code *)0x0;
  local_288 = 0;
  local_298 = (TRay<double> *)CONCAT44(local_298._4_4_,(undefined4)local_298);
  if ((pTVar15 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
     (local_298 = (TRay<double> *)CONCAT44(local_298._4_4_,(undefined4)local_298),
     param_1->bHitBackFaces == false)) {
    uStack_2e0 = SUB84(pTVar15,0);
    uStack_2dc = (undefined4)((ulonglong)pTVar15 >> 0x20);
    local_2b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,bool,int>
                ::Call;
    dStack_2b0 = local_2f8._s_0.Y;
    local_298 = param_2;
    plStack_290 = (longlong *)0x0;
    local_2a8 = 0x5291a290;
    uStack_2a4 = 1;
    uStack_2a0 = uStack_2e0;
    uStack_29c = uStack_2dc;
    local_2f8._s_0.X = 0.0;
    local_2f8._s_0.Y = dVar1;
    local_2f8._20_4_ = uVar21;
    local_2f8._16_4_ = uVar20;
    uStack_2d0 = 0;
  }
  plStack_290 = (longlong *)0x0;
  uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar21 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  local_350 = __real_bff0000000000000;
  local_384 = -1;
  local_318 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dStack_310 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  if (pTVar15 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
LAB_14cb8fb56:
    uVar14 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    (param_5->field0_0x0)._s_0.Y = (double)uVar14;
    (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
LAB_14cb8fb6d:
    bVar10 = false;
  }
  else {
    local_288 = 0;
    plStack_290 = (longlong *)0x0;
    local_384 = -1;
    local_350 = __real_bff0000000000000;
    cVar11 = (**(code **)(pTVar15->_padding_ + 0x38))(pTVar15,param_2,&local_350,&local_384);
    if (cVar11 == '\0') goto LAB_14cb8fb56;
    local_318 = local_350 * (param_2->Direction).field0_0x0._s_0.X +
                (param_2->Origin).field0_0x0._s_0.X;
    dStack_310 = local_350 * (param_2->Direction).field0_0x0._s_0.Y +
                 (param_2->Origin).field0_0x0._s_0.Y;
    local_308 = local_350 * (param_2->Direction).field0_0x0._s_0.Z +
                (param_2->Origin).field0_0x0._s_0.Z;
    pTVar16 = UE::Geometry::FDynamicMesh3::GetTriNormal
                        (this->Mesh,(TVector<double> *)&local_2f8._s_0,local_384);
    uVar20 = SUB84(local_308,0);
    uVar21 = (undefined4)((ulonglong)local_308 >> 0x20);
    dVar1 = (pTVar16->field0_0x0)._s_0.Y;
    (param_5->field0_0x0)._s_0.X = (pTVar16->field0_0x0)._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar1;
    (param_5->field0_0x0)._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
    if (param_1->bEnableFaceHits == false) goto LAB_14cb8fb6d;
    bVar10 = true;
  }
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_188);
  local_368._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  local_368._s_0.Y =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_370[0] = 0;
  local_368._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((param_1->bEnableCornerHits != false) ||
     ((param_1->bEnableEdgeHits != false && (param_1->bPreferProjectedElement != false)))) {
    bVar12 = DoCornerBasedSelection
                       (this,param_1,param_2,local_378,local_340,&local_188,
                        (TVector<double> *)&local_368._s_0,local_370);
    if (bVar12) {
      bVar19 = true;
    }
  }
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_278);
  local_330._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  local_330._s_0.Y =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_380[0] = 0;
  local_330._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((param_1->bEnableEdgeHits != false) ||
     ((cVar11 = '\0', param_1->bEnableFaceHits != false &&
      (param_1->bPreferProjectedElement != false)))) {
    bVar12 = DoEdgeBasedSelection
                       (this,param_1,param_2,local_378,local_340,&local_278,
                        (TVector<double> *)&local_330._s_0,local_380);
    cVar11 = '\0';
    if (bVar12) {
      cVar11 = '\x01';
    }
  }
  if (bVar10) {
    if (bVar19) {
      dVar1 = (param_2->Origin).field0_0x0._s_0.X;
      dVar2 = (param_2->Origin).field0_0x0._s_0.Y;
      dVar3 = (param_2->Origin).field0_0x0._s_0.Z;
      dVar4 = (param_2->Direction).field0_0x0._s_0.X;
      dVar5 = (param_2->Direction).field0_0x0._s_0.Y;
      dVar6 = (param_2->Direction).field0_0x0._s_0.Z;
      dVar9 = (local_368._s_0.X - dVar1) * dVar4 + (local_368._s_0.Y - dVar2) * dVar5 +
              (local_368._s_0.Z - dVar3) * dVar6;
      if (0.0 <= dVar9) {
        local_2f8._s_0.X = dVar4 * dVar9 + dVar1;
        local_2f8._s_0.Y = dVar5 * dVar9 + dVar2;
        local_2f8._s_0.Z = dVar6 * dVar9 + dVar3;
      }
      else {
        local_2f8._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_2f8._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_2f8._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
      }
      local_378 = __real_3fd0000000000000;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->PointsWithinToleranceTest);
      plVar18 = *(longlong **)&(this->PointsWithinToleranceTest).field_0x28;
      pcVar7 = *(code **)&this->PointsWithinToleranceTest;
      plVar17 = (longlong *)&(this->PointsWithinToleranceTest).field_0x10;
      if (plVar18 != (longlong *)0x0) {
        plVar17 = plVar18;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      cVar13 = (*pcVar7)(uVar14,&local_368,&local_2f8,&local_378);
      if ((cVar11 == '\0') || (cVar13 != '\0')) {
        cVar11 = false;
LAB_14cb8ffef:
        if (cVar13 != '\0') goto LAB_14cb8fff7;
        goto LAB_14cb8fe99;
      }
LAB_14cb8fdbc:
      dVar1 = (param_2->Origin).field0_0x0._s_0.X;
      dVar2 = (param_2->Origin).field0_0x0._s_0.Y;
      dVar3 = (param_2->Origin).field0_0x0._s_0.Z;
      dVar4 = (param_2->Direction).field0_0x0._s_0.X;
      dVar5 = (param_2->Direction).field0_0x0._s_0.Y;
      dVar6 = (param_2->Direction).field0_0x0._s_0.Z;
      dVar9 = (local_330._s_0.X - dVar1) * dVar4 + (local_330._s_0.Y - dVar2) * dVar5 +
              (local_330._s_0.Z - dVar3) * dVar6;
      if (0.0 <= dVar9) {
        local_2f8._s_0.X = dVar4 * dVar9 + dVar1;
        local_2f8._s_0.Y = dVar5 * dVar9 + dVar2;
        local_2f8._s_0.Z = dVar6 * dVar9 + dVar3;
      }
      else {
        local_2f8._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_2f8._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_2f8._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
      }
      local_378 = __real_3fc999999999999a;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->PointsWithinToleranceTest);
      plVar18 = *(longlong **)&(this->PointsWithinToleranceTest).field_0x28;
      pcVar7 = *(code **)&this->PointsWithinToleranceTest;
      plVar17 = (longlong *)&(this->PointsWithinToleranceTest).field_0x10;
      if (plVar18 != (longlong *)0x0) {
        plVar17 = plVar18;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      cVar11 = (*pcVar7)(uVar14,&local_330,&local_2f8,&local_378);
LAB_14cb8fe99:
      if (cVar11 != '\0') {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&param_3->SelectedGroupIDs,&local_278.SelectedGroupIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&param_3->SelectedCornerIDs,&local_278.SelectedCornerIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&param_3->SelectedEdgeIDs,&local_278.SelectedEdgeIDs);
        (local_348->field0_0x0)._s_0.X = local_330._s_0.X;
        (local_348->field0_0x0)._s_0.Y = local_330._s_0.Y;
        (local_348->field0_0x0)._s_0.Z = local_330._s_0.Z;
        if (local_338 != (int *)0x0) {
          bVar19 = true;
          *local_338 = local_380[0];
          goto LAB_14cb90094;
        }
        goto LAB_14cb9008e;
      }
    }
    else if (cVar11 != '\0') goto LAB_14cb8fdbc;
    if (!bVar10) {
      bVar19 = false;
      goto LAB_14cb90094;
    }
    pFVar8 = (this->TopologyProvider).Ptr;
    local_380[0] = (**(code **)((longlong)*pFVar8 + 0x50))(pFVar8,local_384);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&param_3->SelectedGroupIDs,local_370,(bool *)local_380);
    (local_348->field0_0x0)._s_0.X = local_318;
    (local_348->field0_0x0)._s_0.Y = dStack_310;
    (local_348->field0_0x0)._s_0.Z = (double)CONCAT44(uVar21,uVar20);
  }
  else {
    if (!bVar19) goto LAB_14cb8fe99;
    if (cVar11 != '\0') {
      dVar1 = (param_2->Origin).field0_0x0._s_0.X;
      dVar2 = (param_2->Origin).field0_0x0._s_0.Y;
      dVar3 = (param_2->Origin).field0_0x0._s_0.Z;
      dVar4 = (param_2->Direction).field0_0x0._s_0.X;
      dVar5 = (param_2->Direction).field0_0x0._s_0.Y;
      dVar6 = (param_2->Direction).field0_0x0._s_0.Z;
      local_378 = __real_3fe8000000000000;
      dVar9 = (local_368._s_0.X - dVar1) * dVar4 + (local_368._s_0.Y - dVar2) * dVar5 +
              (local_368._s_0.Z - dVar3) * dVar6;
      if (0.0 <= dVar9) {
        local_2f8._s_0.X = dVar4 * dVar9 + dVar1;
        local_2f8._s_0.Y = dVar5 * dVar9 + dVar2;
        local_2f8._s_0.Z = dVar6 * dVar9 + dVar3;
      }
      else {
        local_2f8._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_2f8._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_2f8._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
      }
      UE::Core::Private::Function::CheckCallable(*(void **)&this->PointsWithinToleranceTest);
      plVar18 = *(longlong **)&(this->PointsWithinToleranceTest).field_0x28;
      pcVar7 = *(code **)&this->PointsWithinToleranceTest;
      plVar17 = (longlong *)&(this->PointsWithinToleranceTest).field_0x10;
      if (plVar18 != (longlong *)0x0) {
        plVar17 = plVar18;
      }
      uVar14 = (**(code **)(*plVar17 + 8))();
      cVar13 = (*pcVar7)(uVar14,&local_368,&local_2f8,&local_378);
      cVar11 = cVar13 == '\0';
      goto LAB_14cb8ffef;
    }
LAB_14cb8fff7:
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&param_3->SelectedGroupIDs,&local_188.SelectedGroupIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&param_3->SelectedCornerIDs,&local_188.SelectedCornerIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&param_3->SelectedEdgeIDs,&local_188.SelectedEdgeIDs);
    (local_348->field0_0x0)._s_0.X = local_368._s_0.X;
    (local_348->field0_0x0)._s_0.Y = local_368._s_0.Y;
    (local_348->field0_0x0)._s_0.Z = local_368._s_0.Z;
    if (local_338 != (int *)0x0) {
      bVar19 = true;
      *local_338 = local_370[0];
      goto LAB_14cb90094;
    }
  }
LAB_14cb9008e:
  bVar19 = true;
LAB_14cb90094:
  local_278.SelectedEdgeIDs.HashSize = 0;
  if (local_278.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_278.SelectedEdgeIDs.Elements);
  local_278.SelectedCornerIDs.HashSize = 0;
  if (local_278.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_278.SelectedCornerIDs.Elements);
  local_278.SelectedGroupIDs.HashSize = 0;
  if (local_278.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_278.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_278);
  local_188.SelectedEdgeIDs.HashSize = 0;
  if (local_188.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.SelectedEdgeIDs.Elements);
  local_188.SelectedCornerIDs.HashSize = 0;
  if (local_188.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.SelectedCornerIDs.Elements);
  local_188.SelectedGroupIDs.HashSize = 0;
  if (local_188.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_188);
  if (local_2b8 != (code *)0x0) {
    plVar18 = (longlong *)&local_2a8;
    if (plStack_290 != (longlong *)0x0) {
      plVar18 = plStack_290;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return bVar19;
}

// FindSelectedElement @ 14cb90200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cb90e68) */
/* WARNING: Removing unreachable block (ram,0x00014cb90e7c) */
/* WARNING: Removing unreachable block (ram,0x00014cb90e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMeshTopologySelector::FindSelectedElement
          (FMeshTopologySelector *this,FSelectionSettings *param_1,FCameraRectangle *param_2,
          TTransform<double> *param_3,FGroupTopologySelection *param_4,
          TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *param_5)

{
  TPlane<double> *pTVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  undefined8 uVar11;
  double *pdVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined8 uVar16;
  TMatrix<double> *this_00;
  ForElementType<UE::Math::TPlane<double>_> FVar17;
  ForElementType<UE::Math::TPlane<double>_> FVar18;
  longlong *plVar19;
  longlong *plVar20;
  ForElementType<UE::Math::TPlane<double>_> FVar21;
  undefined ***pppuVar22;
  int iVar23;
  uint uVar24;
  FMeshTopologySelector *pFVar25;
  ForElementType<UE::Math::TPlane<double>_> this_01;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStackY_9f8 [32];
  <lambda_1> local_9a8 [4];
  undefined4 local_9a4;
  undefined4 local_9a0 [2];
  longlong *local_998;
  TArray<bool,TSizedDefaultAllocator<32>_> local_990;
  TArray<bool,TSizedDefaultAllocator<32>_> local_980;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_970;
  FGroupTopologySelection *local_968;
  FSelectionSettings *local_960;
  FCameraRectangle *local_958;
  FMeshTopologySelector *local_950;
  int local_948 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_940;
  double local_938;
  double dStack_930;
  double local_928;
  FCameraRectangle *local_920;
  TTransform<double> *pTStack_918;
  FSelectionSettings *local_910;
  double *pdStack_908;
  longlong *local_900;
  TArrayView<std::nullptr_t,int> local_8f8;
  code *local_8e8;
  FGeometrySet3 **local_8e0;
  TArrayView<std::nullptr_t,int> local_8d8;
  code *local_8c8;
  FGeometrySet3 **local_8c0;
  FGeometrySet3 *local_8b8;
  FCameraRectangle **local_8b0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_8a8;
  FGeometrySet3 *local_8a0;
  FCameraRectangle **local_898;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_890;
  FCameraRectangle *local_888;
  TTransform<double> *local_880;
  FSelectionSettings *local_878;
  double *local_870;
  longlong *local_868;
  FCameraRectangle *local_858;
  TTransform<double> *pTStack_850;
  FSelectionSettings *local_848;
  double *pdStack_840;
  longlong *local_838;
  double local_828;
  double dStack_820;
  double local_818;
  TTransform<double> local_808;
  TPlane<double> local_7a8;
  undefined8 local_788;
  undefined8 uStack_780;
  double *local_768;
  undefined8 uStack_760;
  code *local_758;
  undefined8 uStack_750;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 local_738;
  longlong *plStack_730;
  code *local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 local_708;
  longlong *plStack_700;
  code *local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  longlong *plStack_6d0;
  code *local_6c8;
  undefined **local_6b8;
  code *local_6b0;
  undefined ***local_6a0;
  code *local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  longlong *plStack_670;
  code *local_668;
  undefined **local_658;
  code *local_650;
  undefined ***local_640;
  undefined8 local_638 [2];
  code *local_628;
  undefined8 uStack_620;
  undefined **local_618;
  FMeshTopologySelector *pFStack_610;
  double *local_608;
  undefined ***pppuStack_600;
  undefined1 local_5f8;
  FConvexVolume local_5e8;
  TMatrix<double> local_3e8;
  FConvexVolume local_368;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  local_968 = param_4;
  local_960 = param_1;
  local_958 = param_2;
  local_950 = this;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&param_4->SelectedGroupIDs);
  local_970 = &param_4->SelectedCornerIDs;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(local_970);
  local_940 = &param_4->SelectedEdgeIDs;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(local_940);
  UE::Core::Private::Function::CheckCallable(*(void **)&this->GetSpatial);
  pcVar2 = *(code **)&this->GetSpatial;
  plVar19 = *(longlong **)&(this->GetSpatial).field_0x28;
  plVar20 = (longlong *)&(this->GetSpatial).field_0x10;
  if (plVar19 != (longlong *)0x0) {
    plVar20 = plVar19;
  }
  uVar16 = (**(code **)(*plVar20 + 8))();
  local_998 = (longlong *)(*pcVar2)(uVar16);
  local_818 = (param_2->CameraState).Position.field0_0x0._s_0.Z;
  local_828 = (param_2->CameraState).Position.field0_0x0._s_0.X;
  dStack_820 = (param_2->CameraState).Position.field0_0x0._s_0.Y;
  dVar33 = local_818 - (param_3->Translation).ZW.m128d_f64[0];
  dVar39 = (param_3->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar42 = (param_3->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar3 = (param_3->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar4 = (param_3->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar7 = local_828 - (param_3->Translation).XY.m128d_f64[0];
  dVar8 = dStack_820 - (param_3->Translation).XY.m128d_f64[1];
  uVar45 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar37._8_4_ = SUB84(dVar42,0);
  auVar37._0_8_ = dVar39;
  auVar37._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  auVar49._8_4_ = SUB84(dVar8,0);
  auVar49._0_8_ = dVar7;
  auVar49._12_4_ = uVar45;
  auVar29._8_4_ = SUB84(dVar3,0);
  auVar29._0_8_ = dVar42;
  auVar29._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar34._8_4_ = SUB84(dVar8,0);
  auVar34._0_8_ = dVar7;
  auVar34._12_4_ = uVar45;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar33;
  auVar35 = blendpd(auVar34,auVar9,2);
  auVar38._8_4_ = SUB84(dVar4,0);
  auVar38._0_8_ = dVar3;
  auVar38._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar38 = blendpd(auVar37,auVar38,2);
  auVar50._0_8_ = auVar49._8_8_ * dVar39 - dVar42 * dVar7;
  auVar50._8_8_ = dVar33 * dVar42 - auVar29._8_8_ * dVar8;
  auVar36._0_8_ = auVar35._0_8_ * dVar3 - auVar38._0_8_ * dVar33;
  auVar36._8_8_ = auVar35._8_8_ * dVar4 - auVar38._8_8_ * 0.0;
  auVar35 = blendpd(auVar50,auVar36,2);
  dVar5 = auVar50._8_8_ + auVar50._8_8_;
  dVar6 = auVar36._0_8_ + auVar36._0_8_;
  uVar45 = SUB84(dVar6,0);
  uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar51._0_8_ = auVar35._0_8_ + auVar35._0_8_;
  auVar51._8_8_ = auVar35._8_8_ + auVar35._8_8_;
  auVar47._8_4_ = uVar45;
  auVar47._0_8_ = dVar5;
  auVar47._12_4_ = uVar46;
  auVar30._8_4_ = uVar45;
  auVar30._0_8_ = dVar5;
  auVar30._12_4_ = uVar46;
  auVar43._8_4_ = uVar45;
  auVar43._0_8_ = dVar5;
  auVar43._12_4_ = uVar46;
  auVar40._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(param_3->Scale3D).XY.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar40._8_4_ = *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  auVar40._12_4_ = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar48._0_8_ = auVar47._8_8_ * dVar39 - dVar5 * dVar42;
  auVar48._8_8_ = auVar51._0_8_ * dVar42 - auVar30._8_8_ * dVar3;
  auVar35 = blendpd(auVar43,auVar51,2);
  auVar31._8_4_ = SUB84(auVar51._8_8_,0);
  auVar31._0_8_ = auVar51._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  auVar44._0_8_ = auVar35._0_8_ * dVar3 - auVar51._0_8_ * auVar38._0_8_;
  auVar44._8_8_ = auVar35._8_8_ * dVar4 - auVar31._8_8_ * auVar38._8_8_;
  auVar38 = *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64;
  lVar26 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar38._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar38._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64);
  lVar27 = -(ulonglong)(auVar40._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar28 = -(ulonglong)(auVar40._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar32._8_4_ = SUB84(auVar48._8_8_,0);
  auVar32._0_8_ = auVar48._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar41._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar35._4_4_,
                        ~(uint)lVar27 & auVar35._0_4_);
  auVar41._8_4_ = ~(uint)lVar28 & auVar35._8_4_;
  auVar41._12_4_ = ~(uint)((ulonglong)lVar28 >> 0x20) & auVar35._12_4_;
  auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar35._0_8_ = auVar38._0_8_;
  auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
  auVar35 = blendpd(auVar48,auVar44,2);
  local_928 = (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar38._4_4_,
                               ~(uint)lVar26 & auVar38._0_4_) *
              (auVar51._0_8_ * dVar4 + dVar33 + auVar35._0_8_);
  local_938 = auVar41._0_8_ * (dVar5 * dVar4 + dVar7 + auVar32._8_8_);
  dStack_930 = auVar41._8_8_ * (dVar6 * dVar4 + dVar8 + auVar44._0_8_);
  pFVar25 = this;
  if (param_1->bEnableCornerHits != false) {
    pdStack_908 = &local_938;
    local_990.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_990.ArrayNum = 0;
    local_990.ArrayMax = 0;
    local_920 = param_2;
    pTStack_918 = param_3;
    local_910 = param_1;
    local_900 = local_998;
    local_858 = param_2;
    pTStack_850 = param_3;
    local_848 = param_1;
    pdStack_840 = pdStack_908;
    local_838 = local_998;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_990,(this->GeometrySet).Points.ArrayNum,Default);
    local_8b0 = &local_858;
    local_8a8 = &local_990;
    local_8f8.DataPtr = (void **)0x0;
    local_8f8.ArrayNum = 0;
    local_8e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FGeometrySet3::ParallelFindAllPointsSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_8e0 = &local_8b8;
    local_8b8 = &this->GeometrySet;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->GeometrySet).Points.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_8e8,local_9a8[0],None,&local_8f8);
    pTVar10 = local_970;
    uVar24 = 0;
    if (0 < (this->GeometrySet).Points.ArrayNum) {
      lVar26 = 0;
      lVar27 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar24 < local_990.ArrayNum) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          uVar14 = (*pcVar2)();
          return (bool)uVar14;
        }
        if (local_990.AllocatorInstance.Data[lVar26] != (FScriptContainerElement)0x0) {
          uVar15 = 0;
          if ((int)uVar24 < (this->GeometrySet).Points.ArrayNum) {
            uVar15 = ~uVar24 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (pTVar10,local_948,
                     (bool *)((this->GeometrySet).Points.AllocatorInstance.Data + lVar27));
        }
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + 1;
        lVar27 = lVar27 + 0x20;
        param_2 = local_958;
        pFVar25 = local_950;
        param_1 = local_960;
        param_4 = local_968;
      } while ((int)uVar24 < (this->GeometrySet).Points.ArrayNum);
    }
    if (local_990.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_990.AllocatorInstance.Data);
    }
  }
  if ((*(int *)&(param_4->SelectedCornerIDs).Elements.field_0x8 ==
       *(int *)&(param_4->SelectedCornerIDs).Elements.field_0x34) &&
     (param_1->bEnableEdgeHits != false)) {
    local_870 = &local_938;
    local_980.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_980.ArrayNum = 0;
    local_980.ArrayMax = 0;
    local_888 = param_2;
    local_880 = param_3;
    local_878 = param_1;
    local_868 = local_998;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_980,(pFVar25->GeometrySet).Curves.ArrayNum,Default);
    local_898 = &local_888;
    local_890 = &local_980;
    local_8d8.DataPtr = (void **)0x0;
    local_8d8.ArrayNum = 0;
    local_8c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FGeometrySet3::ParallelFindAllCurvesSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l8::<lambda_2>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_8c0 = &local_8a0;
    local_8a0 = &pFVar25->GeometrySet;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(pFVar25->GeometrySet).Curves.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_8c8,local_9a8[0],None,&local_8d8);
    pTVar10 = local_940;
    uVar24 = 0;
    if (0 < (pFVar25->GeometrySet).Curves.ArrayNum) {
      lVar26 = 0;
      lVar27 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar24 < local_980.ArrayNum) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          uVar14 = (*pcVar2)();
          return (bool)uVar14;
        }
        if (local_980.AllocatorInstance.Data[lVar26] != (FScriptContainerElement)0x0) {
          uVar15 = 0;
          if ((int)uVar24 < (pFVar25->GeometrySet).Curves.ArrayNum) {
            uVar15 = ~uVar24 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (pTVar10,(int *)&local_970,
                     (bool *)((pFVar25->GeometrySet).Curves.AllocatorInstance.Data + lVar27));
        }
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + 1;
        lVar27 = lVar27 + 0x48;
        param_2 = local_958;
        param_1 = local_960;
        param_4 = local_968;
      } while ((int)uVar24 < (pFVar25->GeometrySet).Curves.ArrayNum);
    }
    if (local_980.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.AllocatorInstance.Data);
    }
  }
  if ((((param_1->bEnableFaceHits != false) &&
       (*(int *)&(param_4->SelectedCornerIDs).Elements.field_0x8 ==
        *(int *)&(param_4->SelectedCornerIDs).Elements.field_0x34)) &&
      (*(int *)&(param_4->SelectedEdgeIDs).Elements.field_0x8 ==
       *(int *)&(param_4->SelectedEdgeIDs).Elements.field_0x34)) &&
     (*(int *)&(param_4->SelectedGroupIDs).Elements.field_0x8 ==
      *(int *)&(param_4->SelectedGroupIDs).Elements.field_0x34)) {
    FCameraRectangle::FrustumAsConvexVolume(param_2,&local_368);
    local_808.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_808.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_808.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_808.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_808.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_808.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_808.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_808.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_808.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_808.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_808.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_808.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    this_00 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_808,&local_168);
    UE::Math::TMatrix<double>::Inverse(this_00,&local_3e8);
    iVar23 = local_368.Planes.ArrayNum;
    local_5e8.Planes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    local_5e8.Planes.ArrayMax = 6;
    this_01 = (ForElementType<UE::Math::TPlane<double>_>)&local_368;
    if (local_368.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      this_01 = local_368.Planes.AllocatorInstance.SecondaryData;
    }
    local_5e8.PermutedPlanes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    FVar17 = (ForElementType<UE::Math::TPlane<double>_>)&local_368;
    if (local_368.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar17 = local_368.Planes.AllocatorInstance.SecondaryData;
    }
    local_5e8.PermutedPlanes.ArrayNum = 0;
    local_5e8.PermutedPlanes.ArrayMax = 8;
    local_5e8.Planes.ArrayNum = 0;
    while( true ) {
      if (local_368.Planes.ArrayNum != iVar23) {
        local_9a8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_9a8);
      }
      if (this_01 ==
          (ForElementType<UE::Math::TPlane<double>_>)((longlong)iVar23 * 0x20 + (longlong)FVar17))
      break;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)
               UE::Math::TPlane<double>::TransformBy
                         ((TPlane<double> *)this_01,&local_7a8,&local_3e8);
      FVar21 = (ForElementType<UE::Math::TPlane<double>_>)&local_5e8;
      if (local_5e8.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar21 = local_5e8.Planes.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar21 <= (ulonglong)FVar18) {
        FVar21 = (ForElementType<UE::Math::TPlane<double>_>)&local_5e8;
        if (local_5e8.Planes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar21 = local_5e8.Planes.AllocatorInstance.SecondaryData;
        }
        if (((ulonglong)FVar18 <
             (ulonglong)((longlong)local_5e8.Planes.ArrayMax * 0x20 + (longlong)FVar21)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          uVar14 = (*pcVar2)();
          return (bool)uVar14;
        }
      }
      if (local_5e8.Planes.ArrayNum == local_5e8.Planes.ArrayMax) {
        local_5e8.Planes.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                       (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)&local_5e8,
                        &local_5e8.Planes.ArrayMax);
      }
      lVar26 = *(longlong *)((longlong)FVar18 + 8);
      FVar21 = (ForElementType<UE::Math::TPlane<double>_>)&local_5e8;
      if (local_5e8.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar21 = local_5e8.Planes.AllocatorInstance.SecondaryData;
      }
      lVar27 = (longlong)local_5e8.Planes.ArrayNum;
      this_01 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)this_01 + 0x20);
      pTVar1 = (TPlane<double> *)(lVar27 * 0x20 + (longlong)FVar21);
      local_5e8.Planes.ArrayNum = local_5e8.Planes.ArrayNum + 1;
      pTVar1->_padding_ = *(longlong *)FVar18;
      pTVar1->_padding_ = lVar26;
      dVar3 = *(double *)((longlong)FVar18 + 0x18);
      plVar19 = (longlong *)(lVar27 * 0x20 + 0x10 + (longlong)FVar21);
      *plVar19 = *(longlong *)((longlong)FVar18 + 0x10);
      plVar19[1] = (longlong)dVar3;
    }
    FConvexVolume::Init(&local_5e8);
    plStack_6d0 = (longlong *)0x0;
    local_698 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
    ;
    local_668 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
    ;
    local_6e8 = &
                ___7__TFunction_OwnedObject_P6A_NAEBU__TAxisAlignedBox3_N_Geometry_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_6a0 = (undefined ***)0x0;
    uStack_6e0 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                 <lambda_48_>::<lambda_invoker_cdecl>;
    plStack_670 = (longlong *)0x0;
    local_6f8 = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                ::Call;
    local_6b8 = &___7__TFunction_OwnedObject_P6AXHH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_6b0 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                <lambda_49_>::<lambda_invoker_cdecl>;
    local_6c8 = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(int,int),void,int,int>::Call;
    uStack_680 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                 <lambda_50_>::<lambda_invoker_cdecl>;
    local_650 = UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::
                <lambda_51_>::<lambda_invoker_cdecl>;
    local_688 = &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_640 = (undefined ***)0x0;
    local_658 = &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
    local_9a4 = 0xffffffff;
    local_9a0[0] = 0x7fffffff;
    local_758 = (code *)0x0;
    plVar19 = FMemory::Malloc(0x20,8);
    plStack_730 = plStack_6d0;
    uVar11 = local_6d8;
    uVar16 = uStack_6f0;
    pcVar2 = local_6f8;
    *plVar19 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`11'::<lambda_3>,0,1>
                ::_vftable_;
    plVar19[1] = (longlong)&local_5e8;
    plVar19[2] = (longlong)&local_9a4;
    plVar19[3] = (longlong)local_9a0;
    if (plVar19 + 1 != (longlong *)0x0) {
      local_758 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_3>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
                  ::Call;
    }
    local_6f8 = local_758;
    uStack_6f0 = uStack_750;
    local_6d8 = local_738;
    plStack_6d0 = plVar19;
    local_758 = pcVar2;
    uStack_750 = uVar16;
    local_748 = (undefined4)local_6e8;
    uStack_744 = local_6e8._4_4_;
    uStack_740 = (undefined4)uStack_6e0;
    uStack_73c = uStack_6e0._4_4_;
    local_738 = uVar11;
    if (pcVar2 != (code *)0x0) {
      plVar19 = (longlong *)&local_748;
      if (plStack_730 != (longlong *)0x0) {
        plVar19 = plStack_730;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    local_728 = (code *)0x0;
    plVar19 = FMemory::Malloc(0x50,8);
    plStack_700 = plStack_670;
    uVar11 = local_678;
    uVar16 = uStack_690;
    pcVar2 = local_698;
    pFVar25 = local_950;
    *plVar19 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`11'::<lambda_4>,0,1>
                ::_vftable_;
    plVar19[1] = (longlong)local_950;
    plVar19[2] = (longlong)param_4;
    plVar19[3] = (longlong)&local_9a4;
    plVar19[4] = (longlong)local_9a0;
    plVar19[5] = (longlong)&local_5e8;
    plVar19[6] = (longlong)&local_938;
    plVar19[7] = (longlong)&local_998;
    plVar19[8] = (longlong)param_1;
    plVar19[9] = (longlong)param_5;
    if (plVar19 + 1 != (longlong *)0x0) {
      local_728 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l11::<lambda_4>,void,int>
                  ::Call;
    }
    local_698 = local_728;
    uStack_690 = uStack_720;
    local_678 = local_708;
    plStack_670 = plVar19;
    local_728 = pcVar2;
    uStack_720 = uVar16;
    local_718 = (undefined4)local_688;
    uStack_714 = local_688._4_4_;
    uStack_710 = (undefined4)uStack_680;
    uStack_70c = uStack_680._4_4_;
    local_708 = uVar11;
    if (pcVar2 != (code *)0x0) {
      plVar19 = (longlong *)&local_718;
      if (plStack_700 != (longlong *)0x0) {
        plVar19 = plStack_700;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    pdVar12 = local_608;
    uVar16 = uStack_620;
    local_638[0] = __real_7fefffffffffffff;
    local_628 = (code *)0x0;
    local_5f8 = 0;
    if (param_1->bHitBackFaces == false) {
      local_628 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMeshTopologySelector::FindSelectedElement'::__l18::<lambda_5>,bool,int>
                  ::Call;
      uStack_620 = uStack_780;
      local_608 = &local_938;
      pppuStack_600 = (undefined ***)0x0;
      local_618 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FMeshTopologySelector::FindSelectedElement'::`18'::<lambda_5>,0,0>
                   ::_vftable_;
      pFStack_610 = pFVar25;
      local_788 = 0;
      uStack_780 = uVar16;
      local_768 = pdVar12;
      uStack_760 = 0;
    }
    pppuStack_600 = (undefined ***)0x0;
    (**(code **)(*local_998 + 0x78))(local_998,&local_6f8,local_638);
    if (local_628 != (code *)0x0) {
      pppuVar22 = &local_618;
      if (pppuStack_600 != (undefined ***)0x0) {
        pppuVar22 = pppuStack_600;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    if (local_668 != (code *)0x0) {
      pppuVar22 = &local_658;
      if (local_640 != (undefined ***)0x0) {
        pppuVar22 = local_640;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    if (local_698 != (code *)0x0) {
      plVar19 = &local_688;
      if (plStack_670 != (longlong *)0x0) {
        plVar19 = plStack_670;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_6c8 != (code *)0x0) {
      pppuVar22 = &local_6b8;
      if (local_6a0 != (undefined ***)0x0) {
        pppuVar22 = local_6a0;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    if (local_6f8 != (code *)0x0) {
      plVar19 = &local_6e8;
      if (plStack_6d0 != (longlong *)0x0) {
        plVar19 = plStack_6d0;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_5e8.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_5e8.PermutedPlanes.AllocatorInstance.SecondaryData);
    }
    if (local_5e8.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_5e8.Planes.AllocatorInstance.SecondaryData);
    }
    if (local_368.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_368.PermutedPlanes.AllocatorInstance.SecondaryData);
    }
    if (local_368.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_368.Planes.AllocatorInstance.SecondaryData);
    }
  }
  if (((*(int *)&(param_4->SelectedCornerIDs).Elements.field_0x8 ==
        *(int *)&(param_4->SelectedCornerIDs).Elements.field_0x34) &&
      (*(int *)&(param_4->SelectedEdgeIDs).Elements.field_0x8 ==
       *(int *)&(param_4->SelectedEdgeIDs).Elements.field_0x34)) &&
     (*(int *)&(param_4->SelectedGroupIDs).Elements.field_0x8 ==
      *(int *)&(param_4->SelectedGroupIDs).Elements.field_0x34)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  return bVar13;
}

// GetGeometrySet @ 14cb966e0

FGeometrySet3 * __thiscall FMeshTopologySelector::GetGeometrySet(FMeshTopologySelector *this)

{
  undefined8 *puVar1;
  FTopologyProvider *pFVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TVector<double>_u_0 local_38;
  
  iVar8 = 0;
  if (this->bGeometryInitialized == false) {
    UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
    iVar5 = (**(code **)((longlong)*(this->TopologyProvider).Ptr + 8))();
    iVar7 = iVar8;
    if (0 < iVar5) {
      do {
        pFVar2 = (this->TopologyProvider).Ptr;
        pFVar3 = this->Mesh;
        uVar6 = (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,iVar7);
        lVar4 = *(longlong *)
                 ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
        local_38._s_0.X = (double)*puVar1;
        local_38._s_0.Y = (double)puVar1[1];
        local_38._s_0.Z = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
        UE::Geometry::FGeometrySet3::AddPoint
                  (&this->GeometrySet,iVar7,(TVector<double> *)&local_38._s_0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    iVar5 = (**(code **)((longlong)*(this->TopologyProvider).Ptr + 0x18))();
    iVar7 = iVar8;
    if (0 < iVar5) {
      do {
        pFVar2 = (this->TopologyProvider).Ptr;
        local_38._s_0.X = 0.0;
        local_38._s_0.Y = 0.0;
        (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,iVar7,&local_38);
        UE::Geometry::FGeometrySet3::AddCurve
                  (&this->GeometrySet,iVar7,(TPolyline<double,3> *)&local_38._s_0);
        if ((void *)local_38._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_38._s_0.X);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    this->bGeometryInitialized = true;
    this->bGeometryUpToDate = true;
  }
  if (this->bGeometryUpToDate == false) {
    iVar5 = (**(code **)((longlong)*(this->TopologyProvider).Ptr + 8))();
    iVar7 = iVar8;
    if (0 < iVar5) {
      do {
        pFVar2 = (this->TopologyProvider).Ptr;
        pFVar3 = this->Mesh;
        uVar6 = (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,iVar7);
        lVar4 = *(longlong *)
                 ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
        local_38._s_0.X = (double)*puVar1;
        local_38._s_0.Y = (double)puVar1[1];
        local_38._s_0.Z = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
        UE::Geometry::FGeometrySet3::UpdatePoint
                  (&this->GeometrySet,iVar7,(TVector<double> *)&local_38._s_0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    iVar7 = (**(code **)((longlong)*(this->TopologyProvider).Ptr + 0x18))();
    if (0 < iVar7) {
      do {
        pFVar2 = (this->TopologyProvider).Ptr;
        local_38._s_0.X = 0.0;
        local_38._s_0.Y = 0.0;
        (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,iVar8,&local_38);
        UE::Geometry::FGeometrySet3::UpdateCurve
                  (&this->GeometrySet,iVar8,(TPolyline<double,3> *)&local_38._s_0);
        if ((void *)local_38._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_38._s_0.X);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    this->bGeometryUpToDate = true;
  }
  return &this->GeometrySet;
}

// Invalidate @ 14cba3680

void __thiscall
FMeshTopologySelector::Invalidate(FMeshTopologySelector *this,bool param_1,bool param_2)

{
  if (param_1) {
    this->bGeometryUpToDate = false;
  }
  if (param_2) {
    this->bGeometryInitialized = false;
    this->bGeometryUpToDate = false;
  }
  return;
}

