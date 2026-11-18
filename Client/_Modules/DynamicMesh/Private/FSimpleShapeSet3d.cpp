// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 13

// operator() @ 14c8a42f0

void __thiscall
`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_1>::operator()
          (void *this,FMeshShapeGenerator *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FIndex3i_u_0 local_78;
  undefined8 local_68;
  TVector<double>_u_0 local_58;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  TVector2<float>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  lVar3 = **(longlong **)this;
  if (lVar3 != 0) {
    pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
    iVar2 = (param_1->Vertices).ArrayNum;
    iVar5 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((param_1->Vertices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_58._s_0.X = (double)*(undefined8 *)pFVar4;
      local_58._s_0.Y = (double)*(undefined8 *)(pFVar4 + 8);
      local_58._s_0.Z = (double)*(undefined8 *)(pFVar4 + 0x10);
      local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_20 = 0;
      local_1e = 0;
      UE::Geometry::FDynamicMesh3::AppendVertex
                ((FDynamicMesh3 *)**(undefined8 **)this,(FVertexInfo *)&local_58._s_0);
      pFVar4 = pFVar4 + 0x18;
    }
    iVar2 = (param_1->Triangles).ArrayNum;
    pFVar4 = (param_1->Triangles).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((param_1->Triangles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_68 = *(undefined8 *)pFVar4;
      local_78._s_0.A = (int)local_68 + iVar5;
      local_78._s_0.B = (int)((ulonglong)local_68 >> 0x20) + iVar5;
      local_78._s_0.C = *(int *)(pFVar4 + 8) + iVar5;
      UE::Geometry::FDynamicMesh3::AppendTriangle
                ((FDynamicMesh3 *)**(undefined8 **)this,(FIndex3i *)&local_78._s_0,0);
      pFVar4 = pFVar4 + 0xc;
    }
  }
  return;
}

// operator() @ 14c8ace00

void __thiscall
`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_2>::operator()
          (void *this,TArrayView<UE::Math::TVector<double>,int> *param_1,TTransform<double> *param_2
          )

{
  TVector<double> *pTVar1;
  double dVar2;
  undefined1 auVar3 [16];
  TVector<double> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  pTVar4 = param_1->DataPtr;
  pTVar1 = pTVar4 + param_1->ArrayNum;
  for (; pTVar4 != pTVar1; pTVar4 = pTVar4 + 1) {
    auVar3 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    auVar9 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar5 = (pTVar4->field0_0x0)._s_0.X * (param_2->Scale3D).XY.m128d_f64[0];
    dVar6 = (pTVar4->field0_0x0)._s_0.Y * (param_2->Scale3D).XY.m128d_f64[1];
    uVar19 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar7 = *(double *)((longlong)&pTVar4->field0_0x0 + 0x10) * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar17 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar11 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar20._8_4_ = SUB84(dVar6,0);
    auVar20._0_8_ = dVar5;
    auVar20._12_4_ = uVar19;
    dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
    auVar12 = blendpd(auVar9,auVar3,2);
    dVar2 = auVar3._0_8_;
    auVar21._0_8_ = auVar20._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar5;
    auVar21._8_8_ = dVar7 * auVar9._8_8_ - dVar2 * dVar6;
    auVar14._8_4_ = SUB84(dVar6,0);
    auVar14._0_8_ = dVar5;
    auVar14._12_4_ = uVar19;
    auVar9._8_4_ = SUB84(dVar17,0);
    auVar9._0_8_ = dVar7;
    auVar9._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar9 = blendpd(auVar14,auVar9,2);
    auVar10._0_8_ = auVar9._0_8_ * dVar2 - auVar12._0_8_ * dVar7;
    auVar10._8_8_ = auVar9._8_8_ * auVar3._8_8_ - auVar12._8_8_ * dVar17;
    auVar9 = blendpd(auVar21,auVar10,2);
    dVar17 = auVar21._8_8_ + auVar21._8_8_;
    dVar18 = auVar10._0_8_ + auVar10._0_8_;
    auVar22._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar22._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    auVar15._8_4_ = SUB84(dVar18,0);
    auVar15._0_8_ = dVar17;
    uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
    auVar15._12_4_ = uVar19;
    auVar12._8_4_ = SUB84(dVar18,0);
    auVar12._0_8_ = dVar17;
    auVar12._12_4_ = uVar19;
    auVar14 = blendpd(auVar11,auVar3,2);
    auVar9 = blendpd(auVar12,auVar22,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar17;
    auVar16._8_8_ = auVar22._0_8_ * auVar11._8_8_ - dVar2 * dVar18;
    auVar11._8_4_ = SUB84(auVar16._8_8_,0);
    auVar11._0_8_ = auVar16._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar13._0_8_ = auVar9._0_8_ * dVar2 - auVar14._0_8_ * auVar22._0_8_;
    auVar13._8_8_ = auVar9._8_8_ * auVar3._8_8_ - auVar14._8_8_ * auVar22._8_8_;
    auVar9 = blendpd(auVar16,auVar13,2);
    dVar6 = dVar8 * dVar18 + dVar6 + auVar13._0_8_ + (param_2->Translation).XY.m128d_f64[1];
    dVar2 = (param_2->Translation).ZW.m128d_f64[0];
    auVar3._8_4_ = SUB84(dVar6,0);
    auVar3._0_8_ = dVar8 * dVar17 + dVar5 + auVar11._8_8_ + (param_2->Translation).XY.m128d_f64[0];
    auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&pTVar4->field0_0x0 = auVar3;
    *(double *)((longlong)&pTVar4->field0_0x0 + 0x10) =
         dVar8 * auVar22._0_8_ + dVar7 + auVar9._0_8_ + dVar2;
  }
  return;
}

// operator() @ 14c8b0540

void __thiscall
`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_3>::operator()
          (void *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,double param_2,
          FSourceShapeRef param_3,TTransform<double> *param_4)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  double local_res18;
  FSourceShapeRef local_res20;
  int local_b8 [2];
  undefined1 local_b0 [16];
  double local_a0;
  undefined1 local_98 [16];
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)this + 8) != *(int *)(*(longlong *)((longlong)this + 8) + 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("HullToShapeSource.Num() == HullVolumes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\ShapeApproximation\\SimpleShapeSet3.cpp"
                          ,0x305,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = *(ForAnyElementType **)this;
  if ((((FSourceShapeRef *)pFVar4->Data <= &local_res20) &&
      (&local_res20 < (FSourceShapeRef *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar4,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  *(int *)&pFVar4[1].Data = iVar15 + 1;
  *(FSourceShapeRef *)(pFVar4->Data + (longlong)iVar15 * 8) = local_res20;
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
  iVar15 = *(int *)&pFVar4[1].Data;
  uVar19 = (ulonglong)iVar15;
  if (iVar3 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9a9,L"Invalid range size: %lld");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar3 == 0) goto LAB_14c8b06d6;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,8,iVar3,pFVar4,(int *)(pFVar4 + 1),(int *)((longlong)&pFVar4[1].Data + 4)
                     );
  memcpy(pFVar4->Data + (longlong)iVar16 * 0x18,param_1->DataPtr,(longlong)iVar3 * 0x18);
LAB_14c8b06d6:
  if ((param_4 != (TTransform<double> *)0x0) &&
     (plVar21 = *(longlong **)((longlong)this + 0x10), iVar15 < (int)plVar21[1])) {
    lVar20 = uVar19 * 0x18;
    do {
      uVar18 = (uint)uVar19;
      uVar17 = 0;
      if ((int)uVar18 < (int)plVar21[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auVar30 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
      local_98 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      auVar26 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      dVar13 = (param_4->Rotation).ZW.m128d_f64[1];
      pdVar2 = (double *)(lVar20 + *plVar21);
      plVar5 = *(longlong **)((longlong)this + 0x10);
      dVar9 = *pdVar2 * (param_4->Scale3D).XY.m128d_f64[0];
      dVar31 = pdVar2[1] * (param_4->Scale3D).XY.m128d_f64[1];
      uVar35 = (undefined4)((ulonglong)dVar31 >> 0x20);
      uVar17 = 0;
      if ((int)uVar18 < (int)plVar5[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      auVar32._8_4_ = SUB84(dVar31,0);
      auVar32._0_8_ = dVar9;
      auVar32._12_4_ = uVar35;
      dVar10 = *(double *)(lVar20 + 0x10 + *plVar21) * (param_4->Scale3D).ZW.m128d_f64[0];
      dVar11 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar24 = blendpd(local_98,auVar30,2);
      dVar8 = auVar30._0_8_;
      auVar33._0_8_ = auVar32._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar9;
      auVar33._8_8_ = dVar10 * local_98._8_8_ - dVar8 * dVar31;
      auVar27._8_4_ = SUB84(dVar31,0);
      auVar27._0_8_ = dVar9;
      auVar27._12_4_ = uVar35;
      auVar22._8_4_ = SUB84(dVar11,0);
      auVar22._0_8_ = dVar10;
      auVar22._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar22 = blendpd(auVar27,auVar22,2);
      auVar23._0_8_ = auVar22._0_8_ * dVar8 - auVar24._0_8_ * dVar10;
      auVar23._8_8_ = auVar22._8_8_ * auVar30._8_8_ - auVar24._8_8_ * dVar11;
      auVar22 = blendpd(auVar33,auVar23,2);
      dVar11 = auVar33._8_8_ + auVar33._8_8_;
      dVar12 = auVar23._0_8_ + auVar23._0_8_;
      uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar34._0_8_ = auVar22._0_8_ + auVar22._0_8_;
      auVar34._8_8_ = auVar22._8_8_ + auVar22._8_8_;
      auVar28._8_4_ = SUB84(dVar12,0);
      auVar28._0_8_ = dVar11;
      auVar28._12_4_ = uVar35;
      auVar25._8_4_ = SUB84(dVar12,0);
      auVar25._0_8_ = dVar11;
      auVar25._12_4_ = uVar35;
      auVar22 = blendpd(auVar25,auVar34,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
      auVar29._8_8_ = auVar34._0_8_ * auVar26._8_8_ - dVar8 * dVar12;
      auVar24._8_4_ = SUB84(auVar29._8_8_,0);
      auVar24._0_8_ = auVar29._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar26,auVar30,2);
      auVar26._0_8_ = auVar22._0_8_ * dVar8 - auVar27._0_8_ * auVar34._0_8_;
      auVar26._8_8_ = auVar22._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar34._8_8_;
      auVar30 = blendpd(auVar29,auVar26,2);
      dVar9 = dVar11 * dVar13 + dVar9 + auVar24._8_8_ + (param_4->Translation).XY.m128d_f64[0];
      dVar31 = dVar12 * dVar13 + dVar31 + auVar26._0_8_ + (param_4->Translation).XY.m128d_f64[1];
      uVar35 = SUB84(dVar31,0);
      uVar36 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar31 = auVar34._0_8_ * dVar13 + dVar10 + auVar30._0_8_ +
               (param_4->Translation).ZW.m128d_f64[0];
      local_b0._8_4_ = uVar35;
      local_b0._0_8_ = dVar9;
      local_b0._12_4_ = uVar36;
      local_a0 = dVar31;
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *plVar5;
      uVar19 = (ulonglong)(uVar18 + 1);
      auVar30._8_4_ = uVar35;
      auVar30._0_8_ = dVar9;
      auVar30._12_4_ = uVar36;
      *(undefined1 (*) [16])(lVar6 + lVar20) = auVar30;
      *(double *)(lVar6 + 0x10 + lVar20) = dVar31;
      lVar20 = lVar20 + 0x18;
      plVar21 = *(longlong **)((longlong)this + 0x10);
    } while ((int)(uVar18 + 1) < (int)plVar21[1]);
  }
  local_b8[0] = param_1->ArrayNum;
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
  if (((pFVar4->Data <= (FScriptContainerElement *)local_b8) &&
      ((FScriptContainerElement *)local_b8 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar15 + 1;
  *(int *)(pFVar4->Data + (longlong)iVar15 * 4) = local_b8[0];
  pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
  if (((pFVar4->Data <= (FScriptContainerElement *)&local_res18) &&
      ((FScriptContainerElement *)&local_res18 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar15 + 1;
  *(double *)(pFVar4->Data + (longlong)iVar15 * 8) = local_res18;
  return;
}

// operator() @ 14c8b4990

TVector<double> * __thiscall
`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_8>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  
  plVar3 = *(longlong **)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar10 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  uVar11 = *(int *)(*plVar3 + (longlong)param_1 * 4) + param_2;
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar4[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  lVar5 = *plVar4;
  pdVar1 = (double *)(lVar5 + (longlong)(int)uVar11 * 0x18);
  dVar7 = pdVar1[1];
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)(int)uVar11 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Append @ 14c8b80d0

void __thiscall
UE::Geometry::FSimpleShapeSet3d::Append(FSimpleShapeSet3d *this,FSimpleShapeSet3d *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMesh3 *pFVar6;
  FLevelSetShape3d *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FDynamicMesh3 *pFVar14;
  FLevelSetShape3d *pFVar15;
  uint uVar16;
  FDynamicMesh3 *pFVar17;
  FLevelSetShape3d *pFVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  iVar3 = (param_1->Spheres).ArrayNum;
  pFVar12 = (param_1->Spheres).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((param_1->Spheres).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FSphereShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    local_100 = *(undefined8 *)pFVar12;
    uStack_f8 = *(undefined8 *)(pFVar12 + 8);
    pFVar4 = (this->Spheres).AllocatorInstance.Data;
    local_f0 = *(undefined8 *)(pFVar12 + 0x10);
    uStack_e8 = *(undefined8 *)(pFVar12 + 0x18);
    if ((pFVar4 <= (FScriptContainerElement *)&local_100) &&
       ((FScriptContainerElement *)&local_100 < pFVar4 + (longlong)(this->Spheres).ArrayMax * 0x20))
    {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->Spheres).ArrayNum;
    if (iVar10 == (this->Spheres).ArrayMax) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,&(this->Spheres).ArrayMax);
      (this->Spheres).ArrayNum = iVar10;
    }
    (this->Spheres).ArrayNum = iVar10 + 1;
    pFVar5 = (this->Spheres).AllocatorInstance.Data;
    pFVar12 = pFVar12 + 0x20;
    pFVar4 = pFVar5 + (longlong)iVar10 * 0x20;
    *(undefined8 *)pFVar4 = local_100;
    *(undefined8 *)(pFVar4 + 8) = uStack_f8;
    pFVar5 = pFVar5 + (longlong)iVar10 * 0x20 + 0x10;
    *(undefined8 *)pFVar5 = local_f0;
    *(undefined8 *)(pFVar5 + 8) = uStack_e8;
  }
  iVar3 = (param_1->Boxes).ArrayNum;
  pFVar12 = (param_1->Boxes).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x50;
  while( true ) {
    if ((param_1->Boxes).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FBoxShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar13) break;
    local_98 = *(undefined8 *)pFVar12;
    uStack_90 = *(undefined8 *)(pFVar12 + 8);
    pFVar4 = (this->Boxes).AllocatorInstance.Data;
    local_88 = *(undefined8 *)(pFVar12 + 0x10);
    uStack_80 = *(undefined8 *)(pFVar12 + 0x18);
    local_78 = *(undefined8 *)(pFVar12 + 0x20);
    uStack_70 = *(undefined8 *)(pFVar12 + 0x28);
    local_68 = *(undefined8 *)(pFVar12 + 0x30);
    uStack_60 = *(undefined8 *)(pFVar12 + 0x38);
    local_58 = *(undefined8 *)(pFVar12 + 0x40);
    uStack_50 = *(undefined8 *)(pFVar12 + 0x48);
    if ((pFVar4 <= (FScriptContainerElement *)&local_98) &&
       ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)(this->Boxes).ArrayMax * 0x50)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->Boxes).ArrayNum;
    piVar1 = &(this->Boxes).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&(this->Boxes).AllocatorInstance,piVar1);
    }
    (this->Boxes).ArrayNum = iVar10 + 1;
    lVar11 = (longlong)iVar10;
    pFVar4 = (this->Boxes).AllocatorInstance.Data;
    pFVar12 = pFVar12 + 0x50;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50) = local_98;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 8) = uStack_90;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x10) = local_88;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x10 + 8) = uStack_80;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x20) = local_78;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x20 + 8) = uStack_70;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x30) = local_68;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x30 + 8) = uStack_60;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x40) = local_58;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x40 + 8) = uStack_50;
  }
  iVar3 = (param_1->Capsules).ArrayNum;
  pFVar12 = (param_1->Capsules).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x40;
  while( true ) {
    if ((param_1->Capsules).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FCapsuleShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar13) break;
    local_d8 = *(undefined8 *)pFVar12;
    uStack_d0 = *(undefined8 *)(pFVar12 + 8);
    pFVar4 = (this->Capsules).AllocatorInstance.Data;
    local_c8 = *(undefined8 *)(pFVar12 + 0x10);
    uStack_c0 = *(undefined8 *)(pFVar12 + 0x18);
    local_b8 = *(undefined8 *)(pFVar12 + 0x20);
    uStack_b0 = *(undefined8 *)(pFVar12 + 0x28);
    local_a8 = *(undefined8 *)(pFVar12 + 0x30);
    uStack_a0 = *(undefined8 *)(pFVar12 + 0x38);
    if ((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
       ((FScriptContainerElement *)&local_d8 < pFVar4 + (longlong)(this->Capsules).ArrayMax * 0x40))
    {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->Capsules).ArrayNum;
    piVar1 = &(this->Capsules).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->Capsules).AllocatorInstance,piVar1);
    }
    (this->Capsules).ArrayNum = iVar10 + 1;
    pFVar4 = (this->Capsules).AllocatorInstance.Data;
    lVar11 = (longlong)iVar10 * 0x40;
    pFVar12 = pFVar12 + 0x40;
    *(undefined8 *)(pFVar4 + lVar11) = local_d8;
    *(undefined8 *)(pFVar4 + lVar11 + 8) = uStack_d0;
    *(undefined8 *)(pFVar4 + lVar11 + 0x10) = local_c8;
    *(undefined8 *)(pFVar4 + lVar11 + 0x10 + 8) = uStack_c0;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20) = local_b8;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20 + 8) = uStack_b0;
    *(undefined8 *)(pFVar4 + lVar11 + 0x30) = local_a8;
    *(undefined8 *)(pFVar4 + lVar11 + 0x30 + 8) = uStack_a0;
  }
  iVar3 = (this->Convexes).ArrayNum;
  uVar16 = (param_1->Convexes).ArrayNum + iVar3;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(this->Convexes).ArrayMax;
  if (*piVar1 < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,uVar16,&(this->Convexes).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (param_1->Convexes).ArrayNum;
  pFVar14 = (FDynamicMesh3 *)(param_1->Convexes).AllocatorInstance.Data;
  pFVar17 = pFVar14 + iVar3;
  while( true ) {
    if ((param_1->Convexes).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FConvexShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar14 == pFVar17) break;
    pFVar6 = (FDynamicMesh3 *)(this->Convexes).AllocatorInstance.Data;
    if ((pFVar6 <= pFVar14) && (pFVar14 < pFVar6 + *piVar1)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->Convexes).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x230,8,&(this->Convexes).AllocatorInstance,piVar1);
      (this->Convexes).ArrayNum = iVar10;
    }
    (this->Convexes).ArrayNum = iVar10 + 1;
    FDynamicMesh3::FDynamicMesh3
              ((FDynamicMesh3 *)((this->Convexes).AllocatorInstance.Data + (longlong)iVar10 * 0x230)
               ,pFVar14);
    pFVar14 = pFVar14 + 1;
  }
  pTVar2 = &this->LevelSets;
  iVar3 = (this->LevelSets).ArrayNum;
  uVar16 = (param_1->LevelSets).ArrayNum + iVar3;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(this->LevelSets).ArrayMax;
  if ((this->LevelSets).ArrayMax < (int)uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar16,&pTVar2->AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (param_1->LevelSets).ArrayNum;
  pFVar15 = (FLevelSetShape3d *)(param_1->LevelSets).AllocatorInstance.Data;
  pFVar18 = pFVar15 + iVar3;
  while( true ) {
    if ((param_1->LevelSets).ArrayNum != iVar3) {
      local_108[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FLevelSetShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_108);
    }
    if (pFVar15 == pFVar18) break;
    pFVar7 = (FLevelSetShape3d *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar7 <= pFVar15) && (pFVar15 < pFVar7 + *piVar1)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->LevelSets).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1090,&pTVar2->AllocatorInstance,piVar1);
      (this->LevelSets).ArrayNum = iVar10;
    }
    (this->LevelSets).ArrayNum = iVar10 + 1;
    FLevelSetShape3d::FLevelSetShape3d
              ((FLevelSetShape3d *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x90),
               pFVar15);
    pFVar15 = pFVar15 + 1;
  }
  return;
}

// Append @ 14c8b8690

void __thiscall
UE::Geometry::FSimpleShapeSet3d::Append
          (FSimpleShapeSet3d *this,FSimpleShapeSet3d *param_1,TTransform<double> *param_2)

{
  int *piVar1;
  TArray<UE::Geometry::FConvexShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TVector<double>_u_0 *pTVar7;
  FDynamicMesh3 *pFVar8;
  FLevelSetShape3d *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FLevelSetShape3d *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FLevelSetShape3d *pFVar26;
  FDynamicMesh3 *pFVar27;
  FDynamicMesh3 *pFVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [6];
  undefined1 local_250 [16];
  double local_240;
  double dStack_238;
  TVector<double>_u_0 local_228;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  TVector<double>_u_0 local_1d8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  TQuaternion<double>_u_0 local_150;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar4 = (param_1->Spheres).ArrayNum;
  pFVar22 = (param_1->Spheres).AllocatorInstance.Data;
  pFVar25 = pFVar22 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((param_1->Spheres).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FSphereShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar22 == pFVar25) break;
    auVar39 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    local_100 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
    pFVar5 = (this->Spheres).AllocatorInstance.Data;
    auVar35 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
    auVar31 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
    local_c8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar34 = blendpd(local_c8,auVar39,2);
    dVar15 = *(double *)pFVar22 * local_100._0_8_;
    dVar16 = *(double *)(pFVar22 + 8) * local_100._8_8_;
    uVar40 = (undefined4)((ulonglong)dVar16 >> 0x20);
    local_f0 = auVar35._0_8_;
    dVar13 = *(double *)(pFVar22 + 0x10) * local_f0;
    dVar14 = auVar35._8_8_ * 0.0;
    auVar42._8_4_ = SUB84(dVar16,0);
    auVar42._0_8_ = dVar15;
    auVar42._12_4_ = uVar40;
    dVar11 = auVar39._0_8_;
    auVar43._0_8_ = auVar42._8_8_ * local_c8._0_8_ - local_c8._8_8_ * dVar15;
    auVar43._8_8_ = dVar13 * local_c8._8_8_ - dVar11 * dVar16;
    auVar29._8_4_ = SUB84(dVar16,0);
    auVar29._0_8_ = dVar15;
    auVar29._12_4_ = uVar40;
    auVar30._8_4_ = SUB84(dVar14,0);
    auVar30._0_8_ = dVar13;
    auVar30._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar30 = blendpd(auVar29,auVar30,2);
    uVar47 = auVar35._0_4_ & uVar24;
    uVar48 = auVar35._4_4_ & uVar21;
    auVar35._0_8_ = auVar30._0_8_ * dVar11 - auVar34._0_8_ * dVar13;
    auVar35._8_8_ = auVar30._8_8_ * auVar39._8_8_ - auVar34._8_8_ * dVar14;
    auVar30 = blendpd(auVar43,auVar35,2);
    dVar14 = auVar43._8_8_ + auVar43._8_8_;
    dVar12 = auVar35._0_8_ + auVar35._0_8_;
    uVar40 = (undefined4)((ulonglong)dVar12 >> 0x20);
    auVar44._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar44._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    auVar37._8_4_ = SUB84(dVar12,0);
    auVar37._0_8_ = dVar14;
    auVar37._12_4_ = uVar40;
    auVar34._8_4_ = SUB84(dVar12,0);
    auVar34._0_8_ = dVar14;
    auVar34._12_4_ = uVar40;
    auVar35 = blendpd(auVar34,auVar44,2);
    auVar30 = blendpd(auVar31,auVar39,2);
    auVar38._0_8_ = auVar37._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar14;
    auVar38._8_8_ = auVar44._0_8_ * auVar31._8_8_ - dVar11 * dVar12;
    auVar31._8_4_ = SUB84(auVar38._8_8_,0);
    auVar31._0_8_ = auVar38._0_8_;
    auVar31._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar36._0_8_ = auVar35._0_8_ * dVar11 - auVar30._0_8_ * auVar44._0_8_;
    auVar36._8_8_ = auVar35._8_8_ * auVar39._8_8_ - auVar30._8_8_ * auVar44._8_8_;
    uVar32 = local_100._0_4_ & uVar24;
    uVar33 = local_100._4_4_ & uVar21;
    auVar39 = blendpd(auVar38,auVar36,2);
    dVar11 = dVar14 * dVar17 + dVar15 + auVar31._8_8_ + (param_2->Translation).XY.m128d_f64[0];
    dVar14 = dVar12 * dVar17 + dVar16 + auVar36._0_8_ + (param_2->Translation).XY.m128d_f64[1];
    uVar40 = SUB84(dVar14,0);
    uVar41 = (undefined4)((ulonglong)dVar14 >> 0x20);
    local_240 = auVar44._0_8_ * dVar17 + dVar13 + auVar39._0_8_ +
                (param_2->Translation).ZW.m128d_f64[0];
    uVar45 = local_100._8_4_ & uVar24;
    uVar46 = local_100._12_4_ & uVar21;
    if ((double)CONCAT44(uVar46,uVar45) <= (double)CONCAT44(uVar33,uVar32)) {
      uVar32 = uVar45;
      uVar33 = uVar46;
    }
    local_198._8_4_ = uVar40;
    local_198._0_8_ = dVar11;
    local_198._12_4_ = uVar41;
    if ((double)CONCAT44(uVar48,uVar47) <= (double)CONCAT44(uVar33,uVar32)) {
      uVar32 = uVar47;
      uVar33 = uVar48;
    }
    local_250._8_4_ = uVar40;
    local_250._0_8_ = dVar11;
    local_250._12_4_ = uVar41;
    dStack_238 = *(double *)(pFVar22 + 0x18) * (double)CONCAT44(uVar33,uVar32);
    local_188 = local_240;
    if ((pFVar5 <= (FScriptContainerElement *)local_250) &&
       ((FScriptContainerElement *)local_250 < pFVar5 + (longlong)(this->Spheres).ArrayMax * 0x20))
    {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar19 = (this->Spheres).ArrayNum;
    if (iVar19 == (this->Spheres).ArrayMax) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,&(this->Spheres).ArrayMax);
      (this->Spheres).ArrayNum = iVar19;
    }
    (this->Spheres).ArrayNum = iVar19 + 1;
    pFVar6 = (this->Spheres).AllocatorInstance.Data;
    pFVar22 = pFVar22 + 0x20;
    pFVar5 = pFVar6 + (longlong)iVar19 * 0x20;
    *(undefined8 *)pFVar5 = local_250._0_8_;
    *(undefined8 *)(pFVar5 + 8) = local_250._8_8_;
    pFVar6 = pFVar6 + (longlong)iVar19 * 0x20 + 0x10;
    *(double *)pFVar6 = local_240;
    *(double *)(pFVar6 + 8) = dStack_238;
  }
  iVar4 = (param_1->Boxes).ArrayNum;
  pFVar22 = (param_1->Boxes).AllocatorInstance.Data;
  pFVar25 = pFVar22 + (longlong)iVar4 * 0x50;
  while( true ) {
    if ((param_1->Boxes).ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FBoxShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar22 == pFVar25) break;
    local_228._s_0.X = (double)*(undefined8 *)pFVar22;
    local_228._s_0.Y = (double)*(undefined8 *)(pFVar22 + 8);
    local_228._s_0.Z = (double)*(undefined8 *)(pFVar22 + 0x10);
    uStack_210 = *(undefined8 *)(pFVar22 + 0x18);
    local_208 = *(undefined8 *)(pFVar22 + 0x20);
    uStack_200 = *(undefined8 *)(pFVar22 + 0x28);
    local_1f8 = *(undefined8 *)(pFVar22 + 0x30);
    dStack_1f0 = *(double *)(pFVar22 + 0x38);
    local_1e8 = *(double *)(pFVar22 + 0x40);
    dStack_1e0 = *(double *)(pFVar22 + 0x48);
    TFrame3<double>::Transform((TFrame3<double> *)&local_228._s_0,param_2);
    local_e8 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_e0 = (param_2->Scale3D).XY.m128d_f64[1];
    local_d8 = (param_2->Scale3D).ZW.m128d_f64[0];
    pTVar7 = (TVector<double>_u_0 *)(this->Boxes).AllocatorInstance.Data;
    dStack_1f0 = dStack_1f0 * local_e8;
    local_1e8 = local_1e8 * dStack_e0;
    dStack_1e0 = dStack_1e0 * local_d8;
    if ((pTVar7 <= &local_228) &&
       (&local_228 <
        (TVector<double>_u_0 *)((longlong)pTVar7 + (longlong)(this->Boxes).ArrayMax * 0x50))) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar19 = (this->Boxes).ArrayNum;
    piVar1 = &(this->Boxes).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&(this->Boxes).AllocatorInstance,piVar1);
    }
    (this->Boxes).ArrayNum = iVar19 + 1;
    lVar20 = (longlong)iVar19;
    pFVar5 = (this->Boxes).AllocatorInstance.Data;
    pFVar22 = pFVar22 + 0x50;
    *(double *)(pFVar5 + lVar20 * 0x50) = local_228._s_0.X;
    *(double *)(pFVar5 + lVar20 * 0x50 + 8) = local_228._s_0.Y;
    *(double *)(pFVar5 + lVar20 * 0x50 + 0x10) = local_228._s_0.Z;
    *(undefined8 *)(pFVar5 + lVar20 * 0x50 + 0x10 + 8) = uStack_210;
    *(undefined8 *)(pFVar5 + lVar20 * 0x50 + 0x20) = local_208;
    *(undefined8 *)(pFVar5 + lVar20 * 0x50 + 0x20 + 8) = uStack_200;
    *(undefined8 *)(pFVar5 + lVar20 * 0x50 + 0x30) = local_1f8;
    *(double *)(pFVar5 + lVar20 * 0x50 + 0x30 + 8) = dStack_1f0;
    *(double *)(pFVar5 + lVar20 * 0x50 + 0x40) = local_1e8;
    *(double *)(pFVar5 + lVar20 * 0x50 + 0x40 + 8) = dStack_1e0;
  }
  iVar4 = (param_1->Capsules).ArrayNum;
  pFVar22 = (param_1->Capsules).AllocatorInstance.Data;
  pFVar25 = pFVar22 + (longlong)iVar4 * 0x40;
  while( true ) {
    if ((param_1->Capsules).ArrayNum != iVar4) {
      local_258 = 0;
      `TCheckedPointerIterator<UE::Geometry::FCapsuleShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_258);
    }
    if (pFVar22 == pFVar25) break;
    local_1d8._s_0.X = (double)*(undefined8 *)pFVar22;
    local_1d8._s_0.Y = (double)*(undefined8 *)(pFVar22 + 8);
    local_1d8._s_0.Z = (double)*(undefined8 *)(pFVar22 + 0x10);
    uStack_1c0 = *(undefined8 *)(pFVar22 + 0x18);
    local_1b8 = *(undefined8 *)(pFVar22 + 0x20);
    uStack_1b0 = *(undefined8 *)(pFVar22 + 0x28);
    local_1a8 = *(undefined8 *)(pFVar22 + 0x30);
    uStack_1a0 = *(undefined8 *)(pFVar22 + 0x38);
    TransformCapsuleShape<UE::Math::TTransform<double>_>((FCapsuleShape3d *)&local_1d8._s_0,param_2)
    ;
    pTVar7 = (TVector<double>_u_0 *)(this->Capsules).AllocatorInstance.Data;
    if ((pTVar7 <= &local_1d8) &&
       (&local_1d8 <
        (TVector<double>_u_0 *)((longlong)pTVar7 + (longlong)(this->Capsules).ArrayMax * 0x40))) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar19 = (this->Capsules).ArrayNum;
    piVar1 = &(this->Capsules).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->Capsules).AllocatorInstance,piVar1);
    }
    (this->Capsules).ArrayNum = iVar19 + 1;
    pFVar5 = (this->Capsules).AllocatorInstance.Data;
    lVar20 = (longlong)iVar19 * 0x40;
    pFVar22 = pFVar22 + 0x40;
    *(double *)(pFVar5 + lVar20) = local_1d8._s_0.X;
    *(double *)(pFVar5 + lVar20 + 8) = local_1d8._s_0.Y;
    *(double *)(pFVar5 + lVar20 + 0x10) = local_1d8._s_0.Z;
    *(undefined8 *)(pFVar5 + lVar20 + 0x10 + 8) = uStack_1c0;
    *(undefined8 *)(pFVar5 + lVar20 + 0x20) = local_1b8;
    *(undefined8 *)(pFVar5 + lVar20 + 0x20 + 8) = uStack_1b0;
    *(undefined8 *)(pFVar5 + lVar20 + 0x30) = local_1a8;
    *(undefined8 *)(pFVar5 + lVar20 + 0x30 + 8) = uStack_1a0;
  }
  pTVar2 = &this->Convexes;
  iVar4 = (this->Convexes).ArrayNum;
  uVar24 = (param_1->Convexes).ArrayNum + iVar4;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  piVar1 = &(this->Convexes).ArrayMax;
  if ((this->Convexes).ArrayMax < (int)uVar24) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,uVar24,&pTVar2->AllocatorInstance,iVar4,piVar1);
  }
  iVar4 = (param_1->Convexes).ArrayNum;
  pFVar28 = (FDynamicMesh3 *)(param_1->Convexes).AllocatorInstance.Data;
  pFVar27 = pFVar28 + iVar4;
  while( true ) {
    if ((param_1->Convexes).ArrayNum != iVar4) {
      local_257 = 0;
      `TCheckedPointerIterator<UE::Geometry::FConvexShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_257);
    }
    if (pFVar28 == pFVar27) break;
    pFVar8 = (FDynamicMesh3 *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar8 <= pFVar28) && (pFVar28 < pFVar8 + *piVar1)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar19 = (this->Convexes).ArrayNum;
    if (iVar19 == *piVar1) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x230,8,&pTVar2->AllocatorInstance,piVar1);
      (this->Convexes).ArrayNum = iVar19;
    }
    (this->Convexes).ArrayNum = iVar19 + 1;
    FDynamicMesh3::FDynamicMesh3
              ((FDynamicMesh3 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x230),
               pFVar28);
    local_150._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
    local_150._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
    iVar19 = (this->Convexes).ArrayNum;
    local_150._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_150._s_0.W = (param_2->Rotation).ZW.m128d_f64[1];
    uVar21 = iVar19 - 1;
    local_170 = (param_2->Translation).ZW.m128d_f64[0];
    local_158 = (param_2->Scale3D).ZW.m128d_f64[0];
    local_180 = (param_2->Translation).XY.m128d_f64[0];
    dStack_178 = (param_2->Translation).XY.m128d_f64[1];
    uVar24 = 0;
    if ((int)uVar21 < iVar19) {
      uVar24 = ~uVar21 >> 0x1f;
    }
    local_168 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_160 = (param_2->Scale3D).XY.m128d_f64[1];
    local_130 = local_180;
    dStack_128 = dStack_178;
    local_120 = local_170;
    local_118 = local_168;
    dStack_110 = dStack_160;
    local_108 = local_158;
    if (uVar24 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    MeshTransforms::ApplyTransform
              ((FDynamicMesh3 *)
               ((pTVar2->AllocatorInstance).Data +
               (longlong)((this->Convexes).ArrayNum + -1) * 0x230),
               (TTransformSRT3<double> *)&local_150._s_0,true,All);
    pFVar28 = pFVar28 + 1;
  }
  iVar4 = (this->LevelSets).ArrayNum;
  pTVar3 = &this->LevelSets;
  uVar24 = (param_1->LevelSets).ArrayNum + iVar4;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  piVar1 = &(this->LevelSets).ArrayMax;
  if ((this->LevelSets).ArrayMax < (int)uVar24) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar24,&pTVar3->AllocatorInstance,iVar4,piVar1);
  }
  iVar4 = (param_1->LevelSets).ArrayNum;
  pFVar23 = (FLevelSetShape3d *)(param_1->LevelSets).AllocatorInstance.Data;
  pFVar26 = pFVar23 + iVar4;
  while( true ) {
    if ((param_1->LevelSets).ArrayNum != iVar4) {
      local_256[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FLevelSetShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_256);
    }
    if (pFVar23 == pFVar26) break;
    pFVar9 = (FLevelSetShape3d *)(pTVar3->AllocatorInstance).Data;
    if ((pFVar9 <= pFVar23) && (pFVar23 < pFVar9 + *piVar1)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar19 = (this->LevelSets).ArrayNum;
    if (iVar19 == *piVar1) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1090,&pTVar3->AllocatorInstance,piVar1);
      (this->LevelSets).ArrayNum = iVar19;
    }
    (this->LevelSets).ArrayNum = iVar19 + 1;
    FLevelSetShape3d::FLevelSetShape3d
              ((FLevelSetShape3d *)((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0x90),
               pFVar23);
    iVar19 = (this->LevelSets).ArrayNum;
    uVar21 = iVar19 - 1;
    uVar24 = 0;
    if ((int)uVar21 < iVar19) {
      uVar24 = ~uVar21 >> 0x1f;
    }
    if (uVar24 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    TransformLevelSetShape<UE::Math::TTransform<double>_>
              ((FLevelSetShape3d *)
               ((pTVar3->AllocatorInstance).Data +
               (longlong)((this->LevelSets).ArrayNum + -1) * 0x90),param_2);
    pFVar23 = pFVar23 + 1;
  }
  return;
}

// Append @ 14c8b8fd0

void __thiscall
UE::Geometry::FSimpleShapeSet3d::Append
          (FSimpleShapeSet3d *this,FSimpleShapeSet3d *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Geometry::FConvexShape3d,TSizedDefaultAllocator<32>_> *pTVar1;
  TVector<double>_u_0 *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMesh3 *pFVar4;
  FLevelSetShape3d *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  TTransform<double> *pTVar14;
  TTransform<double> *pTVar15;
  VectorRegister4Double *pVVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  FLevelSetShape3d *pFVar19;
  uint uVar20;
  FDynamicMesh3 *pFVar21;
  FScriptContainerElement *pFVar22;
  FLevelSetShape3d *pFVar23;
  undefined1 local_res20 [8];
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3 [3];
  uint local_1a0;
  FDynamicMesh3 *local_198;
  TVector<double>_u_0 local_190;
  undefined8 uStack_178;
  TVector<double>_u_0 local_168;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TQuaternion<double>_u_0 local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  iVar9 = (param_1->Spheres).ArrayNum;
  pFVar13 = (param_1->Spheres).AllocatorInstance.Data;
  pFVar18 = pFVar13 + (longlong)iVar9 * 0x20;
  while( true ) {
    if ((param_1->Spheres).ArrayNum != iVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FSphereShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar13 == pFVar18) break;
    local_190._s_0.X = (double)*(undefined8 *)pFVar13;
    local_190._s_0.Y = (double)*(undefined8 *)(pFVar13 + 8);
    local_190._s_0.Z = (double)*(undefined8 *)(pFVar13 + 0x10);
    uStack_178 = *(undefined8 *)(pFVar13 + 0x18);
    TransformSphereShapeByArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
              ((FSphereShape3d *)&local_190._s_0,param_2);
    pTVar2 = (TVector<double>_u_0 *)(this->Spheres).AllocatorInstance.Data;
    if ((pTVar2 <= &local_190) &&
       (&local_190 < (TVector<double>_u_0 *)(pTVar2->XYZ + (longlong)(this->Spheres).ArrayMax * 4)))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->Spheres).ArrayNum;
    if (iVar8 == (this->Spheres).ArrayMax) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)this,&(this->Spheres).ArrayMax);
      (this->Spheres).ArrayNum = iVar8;
    }
    (this->Spheres).ArrayNum = iVar8 + 1;
    pFVar3 = (this->Spheres).AllocatorInstance.Data;
    pFVar13 = pFVar13 + 0x20;
    pFVar22 = pFVar3 + (longlong)iVar8 * 0x20;
    *(double *)pFVar22 = local_190._s_0.X;
    *(double *)(pFVar22 + 8) = local_190._s_0.Y;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x20 + 0x10;
    *(double *)pFVar3 = local_190._s_0.Z;
    *(undefined8 *)(pFVar3 + 8) = uStack_178;
  }
  local_1a0 = (param_1->Boxes).ArrayNum;
  uVar11 = (ulonglong)(int)local_1a0;
  pFVar13 = (param_1->Boxes).AllocatorInstance.Data;
  local_198 = (FDynamicMesh3 *)(pFVar13 + uVar11 * 0x50);
  while( true ) {
    pFVar21 = local_198;
    if ((param_1->Boxes).ArrayNum != (int)uVar11) {
      local_1a8 = 0;
      `TCheckedPointerIterator<UE::Geometry::FBoxShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1a8);
    }
    if ((FDynamicMesh3 *)pFVar13 == pFVar21) break;
    local_168._s_0.X = (double)*(undefined8 *)pFVar13;
    local_168._s_0.Y = (double)*(undefined8 *)(pFVar13 + 8);
    pTVar14 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
    local_168._s_0.Z = (double)*(undefined8 *)(pFVar13 + 0x10);
    uStack_150 = *(undefined8 *)(pFVar13 + 0x18);
    iVar9 = param_2->ArrayNum;
    local_148 = *(undefined8 *)(pFVar13 + 0x20);
    uStack_140 = *(undefined8 *)(pFVar13 + 0x28);
    pVVar16 = &pTVar14->Scale3D;
    local_138 = *(undefined8 *)(pFVar13 + 0x30);
    dStack_130 = *(double *)(pFVar13 + 0x38);
    pTVar15 = pTVar14 + iVar9;
    local_128 = *(double *)(pFVar13 + 0x40);
    dStack_120 = *(double *)(pFVar13 + 0x48);
    while( true ) {
      if (param_2->ArrayNum != iVar9) {
        local_1a7 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1a7);
      }
      if (pTVar14 == pTVar15) break;
      TFrame3<double>::Transform((TFrame3<double> *)&local_168._s_0,pTVar14);
      local_58 = (pVVar16->XY).m128d_f64[0];
      dStack_50 = (pVVar16->XY).m128d_f64[1];
      pTVar14 = pTVar14 + 1;
      local_48 = (pVVar16->ZW).m128d_f64[0];
      pVVar16 = pVVar16 + 3;
      dStack_130 = dStack_130 * local_58;
      local_128 = local_128 * dStack_50;
      dStack_120 = dStack_120 * local_48;
    }
    pTVar2 = (TVector<double>_u_0 *)(this->Boxes).AllocatorInstance.Data;
    if ((pTVar2 <= &local_168) &&
       (&local_168 <
        (TVector<double>_u_0 *)((longlong)pTVar2 + (longlong)(this->Boxes).ArrayMax * 0x50))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->Boxes).ArrayNum;
    piVar17 = &(this->Boxes).ArrayMax;
    if (iVar9 == *piVar17) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->Boxes).AllocatorInstance,piVar17);
    }
    (this->Boxes).ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar9;
    pFVar18 = (this->Boxes).AllocatorInstance.Data;
    pFVar13 = pFVar13 + 0x50;
    *(double *)(pFVar18 + lVar10 * 0x50) = local_168._s_0.X;
    *(double *)(pFVar18 + lVar10 * 0x50 + 8) = local_168._s_0.Y;
    *(double *)(pFVar18 + lVar10 * 0x50 + 0x10) = local_168._s_0.Z;
    *(undefined8 *)(pFVar18 + lVar10 * 0x50 + 0x10 + 8) = uStack_150;
    *(undefined8 *)(pFVar18 + lVar10 * 0x50 + 0x20) = local_148;
    *(undefined8 *)(pFVar18 + lVar10 * 0x50 + 0x20 + 8) = uStack_140;
    *(undefined8 *)(pFVar18 + lVar10 * 0x50 + 0x30) = local_138;
    *(double *)(pFVar18 + lVar10 * 0x50 + 0x30 + 8) = dStack_130;
    *(double *)(pFVar18 + lVar10 * 0x50 + 0x40) = local_128;
    *(double *)(pFVar18 + lVar10 * 0x50 + 0x40 + 8) = dStack_120;
    uVar11 = (ulonglong)local_1a0;
  }
  iVar9 = (param_1->Capsules).ArrayNum;
  pFVar13 = (param_1->Capsules).AllocatorInstance.Data;
  pFVar18 = pFVar13 + (longlong)iVar9 * 0x40;
  while( true ) {
    if ((param_1->Capsules).ArrayNum != iVar9) {
      local_1a6 = 0;
      `TCheckedPointerIterator<UE::Geometry::FCapsuleShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1a6);
    }
    if (pFVar13 == pFVar18) break;
    local_118._s_0.X = (double)*(undefined8 *)pFVar13;
    local_118._s_0.Y = (double)*(undefined8 *)(pFVar13 + 8);
    local_118._s_0.Z = (double)*(undefined8 *)(pFVar13 + 0x10);
    uStack_100 = *(undefined8 *)(pFVar13 + 0x18);
    local_f8 = *(undefined8 *)(pFVar13 + 0x20);
    uStack_f0 = *(undefined8 *)(pFVar13 + 0x28);
    local_e8 = *(undefined8 *)(pFVar13 + 0x30);
    uStack_e0 = *(undefined8 *)(pFVar13 + 0x38);
    TransformCapsuleShapeByArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
              ((FCapsuleShape3d *)&local_118._s_0,param_2);
    pTVar2 = (TVector<double>_u_0 *)(this->Capsules).AllocatorInstance.Data;
    if ((pTVar2 <= &local_118) &&
       (&local_118 <
        (TVector<double>_u_0 *)((longlong)pTVar2 + (longlong)(this->Capsules).ArrayMax * 0x40))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->Capsules).ArrayNum;
    piVar17 = &(this->Capsules).ArrayMax;
    if (iVar8 == *piVar17) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->Capsules).AllocatorInstance,piVar17);
    }
    (this->Capsules).ArrayNum = iVar8 + 1;
    pFVar22 = (this->Capsules).AllocatorInstance.Data;
    lVar10 = (longlong)iVar8 * 0x40;
    pFVar13 = pFVar13 + 0x40;
    *(double *)(pFVar22 + lVar10) = local_118._s_0.X;
    *(double *)(pFVar22 + lVar10 + 8) = local_118._s_0.Y;
    *(double *)(pFVar22 + lVar10 + 0x10) = local_118._s_0.Z;
    *(undefined8 *)(pFVar22 + lVar10 + 0x10 + 8) = uStack_100;
    *(undefined8 *)(pFVar22 + lVar10 + 0x20) = local_f8;
    *(undefined8 *)(pFVar22 + lVar10 + 0x20 + 8) = uStack_f0;
    *(undefined8 *)(pFVar22 + lVar10 + 0x30) = local_e8;
    *(undefined8 *)(pFVar22 + lVar10 + 0x30 + 8) = uStack_e0;
  }
  pTVar1 = &this->Convexes;
  iVar9 = (this->Convexes).ArrayNum;
  uVar20 = (param_1->Convexes).ArrayNum + iVar9;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if ((this->Convexes).ArrayMax < (int)uVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,uVar20,&pTVar1->AllocatorInstance,iVar9,&(this->Convexes).ArrayMax);
  }
  local_1a0 = (param_1->Convexes).ArrayNum;
  uVar11 = (ulonglong)(int)local_1a0;
  pFVar21 = (FDynamicMesh3 *)(param_1->Convexes).AllocatorInstance.Data;
  local_198 = pFVar21 + uVar11;
  while( true ) {
    pFVar4 = local_198;
    piVar17 = &(this->Convexes).ArrayMax;
    if ((param_1->Convexes).ArrayNum != (int)uVar11) {
      local_1a5 = 0;
      `TCheckedPointerIterator<UE::Geometry::FConvexShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1a5);
    }
    if (pFVar21 == pFVar4) break;
    pFVar4 = (FDynamicMesh3 *)(pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar21) && (pFVar21 < pFVar4 + *piVar17)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->Convexes).ArrayNum;
    if (iVar9 == *piVar17) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x230,8,&pTVar1->AllocatorInstance,piVar17);
      (this->Convexes).ArrayNum = iVar9;
    }
    (this->Convexes).ArrayNum = iVar9 + 1;
    FDynamicMesh3::FDynamicMesh3
              ((FDynamicMesh3 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x230),pFVar21
              );
    iVar9 = param_2->ArrayNum;
    pFVar18 = (param_2->AllocatorInstance).Data;
    pFVar13 = pFVar18 + 0x40;
    pFVar22 = pFVar18 + (longlong)iVar9 * 0x60;
    while( true ) {
      if (param_2->ArrayNum != iVar9) {
        local_1a4 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1a4);
      }
      if (pFVar18 == pFVar22) break;
      local_a8._s_0.X = (double)*(undefined8 *)pFVar18;
      local_a8._s_0.Y = (double)*(undefined8 *)(pFVar18 + 8);
      iVar8 = (this->Convexes).ArrayNum;
      local_a8._s_0.Z = (double)*(undefined8 *)(pFVar18 + 0x10);
      local_a8._s_0.W = (double)*(undefined8 *)(pFVar18 + 0x18);
      uVar12 = iVar8 - 1;
      local_c8 = *(undefined8 *)(pFVar13 + -0x10);
      local_b0 = *(undefined8 *)(pFVar13 + 0x10);
      local_d8 = *(undefined8 *)(pFVar13 + -0x20);
      uStack_d0 = *(undefined8 *)(pFVar13 + -0x18);
      uVar20 = 0;
      if ((int)uVar12 < iVar8) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      local_c0 = *(undefined8 *)pFVar13;
      uStack_b8 = *(undefined8 *)(pFVar13 + 8);
      local_88 = local_d8;
      uStack_80 = uStack_d0;
      local_78 = local_c8;
      local_70 = local_c0;
      uStack_68 = uStack_b8;
      local_60 = local_b0;
      if (uVar20 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      MeshTransforms::ApplyTransform
                ((FDynamicMesh3 *)
                 ((pTVar1->AllocatorInstance).Data +
                 (longlong)((this->Convexes).ArrayNum + -1) * 0x230),
                 (TTransformSRT3<double> *)&local_a8._s_0,true,All);
      pFVar18 = pFVar18 + 0x60;
      pFVar13 = pFVar13 + 0x60;
    }
    pFVar21 = pFVar21 + 1;
    uVar11 = (ulonglong)local_1a0;
  }
  iVar9 = (this->LevelSets).ArrayNum;
  uVar20 = (param_1->LevelSets).ArrayNum + iVar9;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  piVar17 = &(this->LevelSets).ArrayMax;
  if ((this->LevelSets).ArrayMax < (int)uVar20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar20,&(this->LevelSets).AllocatorInstance,iVar9,piVar17);
  }
  iVar9 = (param_1->LevelSets).ArrayNum;
  pFVar19 = (FLevelSetShape3d *)(param_1->LevelSets).AllocatorInstance.Data;
  pFVar23 = pFVar19 + iVar9;
  while( true ) {
    if ((param_1->LevelSets).ArrayNum != iVar9) {
      local_1a3[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FLevelSetShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1a3);
    }
    if (pFVar19 == pFVar23) break;
    pFVar5 = (FLevelSetShape3d *)(this->LevelSets).AllocatorInstance.Data;
    if ((pFVar5 <= pFVar19) && (pFVar19 < pFVar5 + *piVar17)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->LevelSets).ArrayNum;
    if (iVar8 == *piVar17) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1090,&(this->LevelSets).AllocatorInstance,piVar17);
      (this->LevelSets).ArrayNum = iVar8;
    }
    (this->LevelSets).ArrayNum = iVar8 + 1;
    FLevelSetShape3d::FLevelSetShape3d
              ((FLevelSetShape3d *)
               ((this->LevelSets).AllocatorInstance.Data + (longlong)iVar8 * 0x90),pFVar19);
    iVar8 = (this->LevelSets).ArrayNum;
    uVar12 = iVar8 - 1;
    uVar20 = 0;
    if ((int)uVar12 < iVar8) {
      uVar20 = ~uVar12 >> 0x1f;
    }
    if (uVar20 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TransformLevelSetShapeByArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
              ((FLevelSetShape3d *)
               ((this->LevelSets).AllocatorInstance.Data +
               (longlong)((this->LevelSets).ArrayNum + -1) * 0x90),param_2);
    pFVar19 = pFVar19 + 1;
  }
  return;
}

// Append @ 14c8b9860

void __thiscall
UE::Geometry::FSimpleShapeSet3d::Append
          (FSimpleShapeSet3d *this,FSimpleShapeSet3d *param_1,TTransformSequence3<double> *param_2)

{
  ForElementType<UE::Geometry::TTransformSRT3<double>_> *pFVar1;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TVector<double>_u_0 *pTVar5;
  FDynamicMesh3 *pFVar6;
  FLevelSetShape3d *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  FLevelSetShape3d *pFVar18;
  uchar *puVar19;
  int *piVar20;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FLevelSetShape3d *pFVar24;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar25;
  FDynamicMesh3 *pFVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  undefined1 local_res20 [8];
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172 [2];
  uint local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  FDynamicMesh3 *local_f8;
  TVector<double>_u_0 local_e8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double> local_78;
  TVector<double> local_60;
  
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar11 = (param_1->Spheres).ArrayNum;
  pFVar16 = (param_1->Spheres).AllocatorInstance.Data;
  pFVar23 = pFVar16 + (longlong)iVar11 * 0x20;
  while( true ) {
    if ((param_1->Spheres).ArrayNum != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FSphereShape3d_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == pFVar23) {
      local_170 = (param_1->Boxes).ArrayNum;
      uVar14 = (ulonglong)(int)local_170;
      pFVar16 = (param_1->Boxes).AllocatorInstance.Data;
      pFVar23 = pFVar16 + uVar14 * 0x50;
      while( true ) {
        if ((param_1->Boxes).ArrayNum != (int)uVar14) {
          local_177 = 0;
          `TCheckedPointerIterator<UE::Geometry::FBoxShape3d_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_177);
        }
        if (pFVar16 == pFVar23) {
          iVar11 = (param_1->Capsules).ArrayNum;
          pFVar16 = (param_1->Capsules).AllocatorInstance.Data;
          pFVar23 = pFVar16 + (longlong)iVar11 * 0x40;
          while( true ) {
            if ((param_1->Capsules).ArrayNum != iVar11) {
              local_175 = 0;
              `TCheckedPointerIterator<UE::Geometry::FCapsuleShape3d_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_175);
            }
            if (pFVar16 == pFVar23) break;
            local_e8._s_0.X = (double)*(undefined8 *)pFVar16;
            local_e8._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
            local_e8._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
            uStack_d0 = *(undefined8 *)(pFVar16 + 0x18);
            local_c8 = *(undefined8 *)(pFVar16 + 0x20);
            uStack_c0 = *(undefined8 *)(pFVar16 + 0x28);
            local_b8 = *(undefined8 *)(pFVar16 + 0x30);
            uStack_b0 = *(undefined8 *)(pFVar16 + 0x38);
            TransformCapsuleShapeByArray<TArray<UE::Geometry::TTransformSRT3<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                      ((FCapsuleShape3d *)&local_e8._s_0,&param_2->Transforms);
            pTVar5 = (TVector<double>_u_0 *)(this->Capsules).AllocatorInstance.Data;
            if (((pTVar5 <= &local_e8) &&
                (&local_e8 <
                 (TVector<double>_u_0 *)
                 ((longlong)pTVar5 + (longlong)(this->Capsules).ArrayMax * 0x40))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar10 = (this->Capsules).ArrayNum;
            piVar20 = &(this->Capsules).ArrayMax;
            if (iVar10 == *piVar20) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&(this->Capsules).AllocatorInstance,piVar20);
            }
            (this->Capsules).ArrayNum = iVar10 + 1;
            pFVar3 = (this->Capsules).AllocatorInstance.Data;
            lVar13 = (longlong)iVar10 * 0x40;
            pFVar16 = pFVar16 + 0x40;
            *(double *)(pFVar3 + lVar13) = local_e8._s_0.X;
            *(double *)(pFVar3 + lVar13 + 8) = local_e8._s_0.Y;
            *(double *)(pFVar3 + lVar13 + 0x10) = local_e8._s_0.Z;
            *(undefined8 *)(pFVar3 + lVar13 + 0x10 + 8) = uStack_d0;
            *(undefined8 *)(pFVar3 + lVar13 + 0x20) = local_c8;
            *(undefined8 *)(pFVar3 + lVar13 + 0x20 + 8) = uStack_c0;
            *(undefined8 *)(pFVar3 + lVar13 + 0x30) = local_b8;
            *(undefined8 *)(pFVar3 + lVar13 + 0x30 + 8) = uStack_b0;
          }
          iVar11 = (this->Convexes).ArrayNum;
          uVar22 = (param_1->Convexes).ArrayNum + iVar11;
          if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
          }
          if ((this->Convexes).ArrayMax < (int)uVar22) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x230,8,uVar22,&(this->Convexes).AllocatorInstance,iVar11,
                       &(this->Convexes).ArrayMax);
          }
          local_170 = (param_1->Convexes).ArrayNum;
          uVar14 = (ulonglong)(int)local_170;
          pFVar26 = (FDynamicMesh3 *)(param_1->Convexes).AllocatorInstance.Data;
          local_f8 = pFVar26 + uVar14;
          while( true ) {
            pFVar6 = local_f8;
            piVar20 = &(this->Convexes).ArrayMax;
            if ((param_1->Convexes).ArrayNum != (int)uVar14) {
              local_174 = 0;
              `TCheckedPointerIterator<UE::Geometry::FConvexShape3d_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(&local_174);
            }
            piVar17 = &(this->Convexes).ArrayNum;
            if (pFVar26 == pFVar6) break;
            pFVar6 = (FDynamicMesh3 *)(this->Convexes).AllocatorInstance.Data;
            if (((pFVar6 <= pFVar26) && (pFVar26 < pFVar6 + *piVar20)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = *piVar17;
            if (iVar11 == *piVar20) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x230,8,&(this->Convexes).AllocatorInstance,piVar20);
            }
            *piVar17 = iVar11 + 1;
            FDynamicMesh3::FDynamicMesh3
                      ((FDynamicMesh3 *)
                       ((this->Convexes).AllocatorInstance.Data + (longlong)iVar11 * 0x230),pFVar26)
            ;
            FVar25 = (param_2->Transforms).AllocatorInstance.SecondaryData;
            iVar11 = (param_2->Transforms).ArrayNum;
            FVar21 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
            if (FVar25 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
              FVar21 = FVar25;
            }
            FVar25 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                     ((longlong)iVar11 * 0x50 + (longlong)FVar21);
            while( true ) {
              if ((param_2->Transforms).ArrayNum != iVar11) {
                local_173 = 0;
                `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_173);
              }
              if (FVar21 == FVar25) break;
              uVar15 = *piVar17 - 1;
              uVar22 = 0;
              if ((int)uVar15 < *piVar17) {
                uVar22 = ~uVar15 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              MeshTransforms::ApplyTransform
                        ((FDynamicMesh3 *)
                         ((this->Convexes).AllocatorInstance.Data +
                         (longlong)(*piVar17 + -1) * 0x230),(TTransformSRT3<double> *)FVar21,true,
                         All);
              FVar21 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)
                       ((longlong)FVar21 + 0x50);
            }
            uVar14 = (ulonglong)local_170;
            pFVar26 = pFVar26 + 1;
          }
          iVar11 = (this->LevelSets).ArrayNum;
          pTVar2 = &this->LevelSets;
          uVar22 = (param_1->LevelSets).ArrayNum + iVar11;
          if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
          }
          piVar20 = &(this->LevelSets).ArrayMax;
          if ((this->LevelSets).ArrayMax < (int)uVar22) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,0x10,uVar22,&pTVar2->AllocatorInstance,iVar11,piVar20);
          }
          iVar11 = (param_1->LevelSets).ArrayNum;
          pFVar18 = (FLevelSetShape3d *)(param_1->LevelSets).AllocatorInstance.Data;
          pFVar24 = pFVar18 + iVar11;
          while( true ) {
            if ((param_1->LevelSets).ArrayNum != iVar11) {
              local_172[0] = 0;
              `TCheckedPointerIterator<UE::Geometry::FLevelSetShape3d_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_172);
            }
            piVar17 = &(this->LevelSets).ArrayNum;
            if (pFVar18 == pFVar24) {
              return;
            }
            pFVar7 = (FLevelSetShape3d *)(pTVar2->AllocatorInstance).Data;
            if (((pFVar7 <= pFVar18) && (pFVar18 < pFVar7 + *piVar20)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar10 = *piVar17;
            if (iVar10 == *piVar20) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1090,&pTVar2->AllocatorInstance,piVar20);
            }
            *piVar17 = iVar10 + 1;
            FLevelSetShape3d::FLevelSetShape3d
                      ((FLevelSetShape3d *)
                       ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x90),pFVar18);
            uVar15 = *piVar17 - 1;
            uVar22 = 0;
            if ((int)uVar15 < *piVar17) {
              uVar22 = ~uVar15 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) break;
            TransformLevelSetShapeByArray<TArray<UE::Geometry::TTransformSRT3<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                      ((FLevelSetShape3d *)
                       ((pTVar2->AllocatorInstance).Data + (longlong)(*piVar17 + -1) * 0x90),
                       &param_2->Transforms);
            pFVar18 = pFVar18 + 1;
          }
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_148._s_0.X = (double)*(undefined8 *)pFVar16;
        local_148._s_0.Y = (double)*(undefined8 *)(pFVar16 + 8);
        FVar25 = (param_2->Transforms).AllocatorInstance.SecondaryData;
        iVar11 = (param_2->Transforms).ArrayNum;
        local_128 = *(double *)(pFVar16 + 0x20);
        dStack_120 = *(double *)(pFVar16 + 0x28);
        local_148._s_0.Z = (double)*(undefined8 *)(pFVar16 + 0x10);
        dStack_130 = *(double *)(pFVar16 + 0x18);
        local_108 = *(double *)(pFVar16 + 0x40);
        dStack_100 = *(double *)(pFVar16 + 0x48);
        local_118 = *(double *)(pFVar16 + 0x30);
        dStack_110 = *(double *)(pFVar16 + 0x38);
        FVar21 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
        if (FVar25 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
          FVar21 = FVar25;
        }
        puVar19 = (uchar *)((longlong)FVar21 + 0x28);
        while( true ) {
          if ((param_2->Transforms).ArrayNum != iVar11) {
            local_176 = 0;
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_176);
          }
          pFVar1 = (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar19 + -0x28);
          if (pFVar1 == (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
                        ((longlong)iVar11 * 0x50 + (longlong)FVar21)) break;
          local_90._s_0.X = local_148._s_0.X * *(double *)(puVar19 + 0x10);
          local_90._s_0.Y = local_148._s_0.Y * *(double *)(puVar19 + 0x18);
          local_90._s_0.Z = local_148._s_0.Z * *(double *)(puVar19 + 0x20);
          pTVar12 = operator*<double>(&local_60,(TQuaternion<double> *)pFVar1,
                                      (TVector<double> *)&local_90._s_0);
          local_148._s_0.Y = (pTVar12->field0_0x0)._s_0.Y + *(double *)puVar19;
          local_148._s_0.Z = (pTVar12->field0_0x0)._s_0.Z + *(double *)(puVar19 + 8);
          local_148._s_0.X = *(double *)(puVar19 + -8) + (pTVar12->field0_0x0)._s_0.X;
          TFrame3<double>::Rotate((TFrame3<double> *)&local_148._s_0,(TQuaternion<double> *)pFVar1);
          dStack_110 = dStack_110 * *(double *)(puVar19 + 0x10);
          local_108 = local_108 * *(double *)(puVar19 + 0x18);
          dStack_100 = dStack_100 * *(double *)(puVar19 + 0x20);
          puVar19 = puVar19 + 0x50;
        }
        pTVar5 = (TVector<double>_u_0 *)(this->Boxes).AllocatorInstance.Data;
        if (((pTVar5 <= &local_148) &&
            (&local_148 <
             (TVector<double>_u_0 *)((longlong)pTVar5 + (longlong)(this->Boxes).ArrayMax * 0x50)))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) break;
        iVar11 = (this->Boxes).ArrayNum;
        piVar20 = &(this->Boxes).ArrayMax;
        if (iVar11 == *piVar20) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&(this->Boxes).AllocatorInstance,piVar20);
        }
        (this->Boxes).ArrayNum = iVar11 + 1;
        lVar13 = (longlong)iVar11;
        pFVar3 = (this->Boxes).AllocatorInstance.Data;
        pFVar16 = pFVar16 + 0x50;
        *(double *)(pFVar3 + lVar13 * 0x50) = local_148._s_0.X;
        *(double *)(pFVar3 + lVar13 * 0x50 + 8) = local_148._s_0.Y;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x10) = local_148._s_0.Z;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x10 + 8) = dStack_130;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x20) = local_128;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x20 + 8) = dStack_120;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x30) = local_118;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x30 + 8) = dStack_110;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x40) = local_108;
        *(double *)(pFVar3 + lVar13 * 0x50 + 0x40 + 8) = dStack_100;
        uVar14 = (ulonglong)local_170;
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_168 = *(double *)pFVar16;
    dStack_160 = *(double *)(pFVar16 + 8);
    FVar25 = (param_2->Transforms).AllocatorInstance.SecondaryData;
    iVar10 = (param_2->Transforms).ArrayNum;
    local_158 = *(double *)(pFVar16 + 0x10);
    dStack_150 = *(double *)(pFVar16 + 0x18);
    FVar21 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
    if (FVar25 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
      FVar21 = FVar25;
    }
    puVar19 = (uchar *)((longlong)FVar21 + 0x28);
    while( true ) {
      if ((param_2->Transforms).ArrayNum != iVar10) {
        local_178 = 0;
        `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_178);
      }
      if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar19 + -0x28) ==
          (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
          ((longlong)iVar10 * 0x50 + (longlong)FVar21)) break;
      local_a8._s_0.X = local_168 * *(double *)(puVar19 + 0x10);
      local_a8._s_0.Y = dStack_160 * *(double *)(puVar19 + 0x18);
      local_a8._s_0.Z = local_158 * *(double *)(puVar19 + 0x20);
      pTVar12 = operator*<double>(&local_78,(TQuaternion<double> *)(puVar19 + -0x28),
                                  (TVector<double> *)&local_a8._s_0);
      local_168 = *(double *)(puVar19 + -8) + (pTVar12->field0_0x0)._s_0.X;
      local_158 = *(double *)(puVar19 + 8) + (pTVar12->field0_0x0)._s_0.Z;
      dStack_160 = (pTVar12->field0_0x0)._s_0.Y + *(double *)puVar19;
      dVar29 = (double)CONCAT44((uint)((ulonglong)*(double *)(puVar19 + 0x10) >> 0x20) & uVar15,
                                SUB84(*(double *)(puVar19 + 0x10),0) & uVar22);
      uVar27 = SUB84(*(double *)(puVar19 + 0x18),0) & uVar22;
      uVar28 = (uint)((ulonglong)*(double *)(puVar19 + 0x18) >> 0x20) & uVar15;
      if ((double)CONCAT44(uVar28,uVar27) <= dVar29) {
        dVar29 = (double)CONCAT44(uVar28,uVar27);
      }
      uVar27 = SUB84(*(double *)(puVar19 + 0x20),0) & uVar22;
      uVar28 = (uint)((ulonglong)*(double *)(puVar19 + 0x20) >> 0x20) & uVar15;
      puVar19 = puVar19 + 0x50;
      if ((double)CONCAT44(uVar28,uVar27) <= dVar29) {
        dVar29 = (double)CONCAT44(uVar28,uVar27);
      }
      dStack_150 = dStack_150 * dVar29;
    }
    pFVar3 = (this->Spheres).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 < pFVar3 + (longlong)(this->Spheres).ArrayMax * 0x20)
        ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) break;
    iVar10 = (this->Spheres).ArrayNum;
    piVar20 = &(this->Spheres).ArrayMax;
    if (iVar10 == *piVar20) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,piVar20);
    }
    (this->Spheres).ArrayNum = iVar10 + 1;
    pFVar4 = (this->Spheres).AllocatorInstance.Data;
    pFVar16 = pFVar16 + 0x20;
    pFVar3 = pFVar4 + (longlong)iVar10 * 0x20;
    *(double *)pFVar3 = local_168;
    *(double *)(pFVar3 + 8) = dStack_160;
    pFVar4 = pFVar4 + (longlong)iVar10 * 0x20 + 0x10;
    *(double *)pFVar4 = local_158;
    *(double *)(pFVar4 + 8) = dStack_150;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// ApplyTransform @ 14c8bac10

void __thiscall
UE::Geometry::FSimpleShapeSet3d::ApplyTransform(FSimpleShapeSet3d *this,TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TFrame3<double> *pTVar11;
  FDynamicMesh3 *pFVar12;
  FLevelSetShape3d *pFVar13;
  FScriptContainerElement *pFVar14;
  TFrame3<double> *this_00;
  FDynamicMesh3 *pFVar15;
  FLevelSetShape3d *pFVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 local_res8 [8];
  TQuaternion<double>_u_0 local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar3 = (this->Spheres).ArrayNum;
  pFVar10 = (this->Spheres).AllocatorInstance.Data;
  pFVar14 = pFVar10 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((this->Spheres).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FSphereShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar14) break;
    auVar26 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    auVar2 = *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64;
    auVar18 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
    auVar20 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar5 = auVar2._0_8_ * *(double *)&pFVar10->field_0x0;
    dVar17 = auVar2._8_8_ * *(double *)(pFVar10 + 8);
    uVar29 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar23 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar21 = blendpd(auVar23,auVar26,2);
    dVar6 = *(double *)&pFVar10[0x10].field_0x0 * auVar18._0_8_;
    dVar27 = auVar18._8_8_ * 0.0;
    auVar30._8_4_ = SUB84(dVar17,0);
    auVar30._0_8_ = dVar5;
    auVar30._12_4_ = uVar29;
    uVar35 = auVar18._0_4_ & uVar8;
    uVar36 = auVar18._4_4_ & uVar9;
    dVar4 = auVar26._0_8_;
    auVar31._0_8_ = auVar30._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar5;
    auVar31._8_8_ = dVar6 * auVar23._8_8_ - dVar4 * dVar17;
    auVar23._8_4_ = SUB84(dVar17,0);
    auVar23._0_8_ = dVar5;
    auVar23._12_4_ = uVar29;
    auVar18._8_4_ = SUB84(dVar27,0);
    auVar18._0_8_ = dVar6;
    auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    auVar18 = blendpd(auVar23,auVar18,2);
    auVar19._0_8_ = auVar18._0_8_ * dVar4 - auVar21._0_8_ * dVar6;
    auVar19._8_8_ = auVar18._8_8_ * auVar26._8_8_ - auVar21._8_8_ * dVar27;
    auVar18 = blendpd(auVar31,auVar19,2);
    dVar27 = auVar31._8_8_ + auVar31._8_8_;
    dVar28 = auVar19._0_8_ + auVar19._0_8_;
    auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
    auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
    auVar24._8_4_ = SUB84(dVar28,0);
    auVar24._0_8_ = dVar27;
    uVar29 = (undefined4)((ulonglong)dVar28 >> 0x20);
    auVar24._12_4_ = uVar29;
    auVar21._8_4_ = SUB84(dVar28,0);
    auVar21._0_8_ = dVar27;
    auVar21._12_4_ = uVar29;
    auVar23 = blendpd(auVar20,auVar26,2);
    auVar25._0_8_ = auVar24._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar27;
    auVar25._8_8_ = auVar32._0_8_ * auVar20._8_8_ - dVar4 * dVar28;
    auVar18 = blendpd(auVar21,auVar32,2);
    auVar20._8_4_ = SUB84(auVar25._8_8_,0);
    auVar20._0_8_ = auVar25._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
    auVar22._0_8_ = auVar18._0_8_ * dVar4 - auVar23._0_8_ * auVar32._0_8_;
    auVar22._8_8_ = auVar18._8_8_ * auVar26._8_8_ - auVar23._8_8_ * auVar32._8_8_;
    dVar4 = dVar7 * dVar28 + dVar17 + auVar22._0_8_ + (param_1->Translation).XY.m128d_f64[1];
    dVar17 = (double)CONCAT44(auVar2._4_4_ & uVar9,auVar2._0_4_ & uVar8);
    uVar33 = auVar2._8_4_ & uVar8;
    uVar34 = auVar2._12_4_ & uVar9;
    if ((double)CONCAT44(uVar34,uVar33) <= dVar17) {
      dVar17 = (double)CONCAT44(uVar34,uVar33);
    }
    auVar26 = blendpd(auVar25,auVar22,2);
    if ((double)CONCAT44(uVar36,uVar35) <= dVar17) {
      dVar17 = (double)CONCAT44(uVar36,uVar35);
    }
    dVar1 = (param_1->Translation).ZW.m128d_f64[0];
    dVar28 = *(double *)(pFVar10 + 0x18);
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar7 * dVar27 + dVar5 + auVar20._8_8_ + (param_1->Translation).XY.m128d_f64[0];
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])pFVar10 = auVar2;
    *(double *)&pFVar10[0x10].field_0x0 = dVar7 * auVar32._0_8_ + dVar6 + auVar26._0_8_ + dVar1;
    *(double *)(pFVar10 + 0x18) = dVar17 * dVar28;
    pFVar10 = pFVar10 + 0x20;
  }
  iVar3 = (this->Boxes).ArrayNum;
  this_00 = (TFrame3<double> *)(this->Boxes).AllocatorInstance.Data;
  pTVar11 = (TFrame3<double> *)((longlong)this_00 + (longlong)iVar3 * 0x50);
  while( true ) {
    if ((this->Boxes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FBoxShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pTVar11) break;
    TFrame3<double>::Transform(this_00,param_1);
    dVar17 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar6 = (param_1->Scale3D).ZW.m128d_f64[0];
    dVar4 = this_00[1].Origin.field0_0x0._s_0.X;
    dVar5 = this_00[1].Origin.field0_0x0._s_0.Z;
    this_00[1].Origin.field0_0x0._s_0.Y =
         (param_1->Scale3D).XY.m128d_f64[1] * this_00[1].Origin.field0_0x0._s_0.Y;
    this_00[1].Origin.field0_0x0._s_0.X = dVar17 * dVar4;
    this_00[1].Origin.field0_0x0._s_0.Z = dVar6 * dVar5;
    this_00 = (TFrame3<double> *)&this_00[1].Rotation;
  }
  iVar3 = (this->Capsules).ArrayNum;
  pFVar10 = (this->Capsules).AllocatorInstance.Data;
  pFVar14 = pFVar10 + (longlong)iVar3 * 0x40;
  while( true ) {
    if ((this->Capsules).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FCapsuleShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar14) break;
    TransformCapsuleShape<UE::Math::TTransform<double>_>((FCapsuleShape3d *)pFVar10,param_1);
    pFVar10 = pFVar10 + 0x40;
  }
  iVar3 = (this->Convexes).ArrayNum;
  pFVar15 = (FDynamicMesh3 *)(this->Convexes).AllocatorInstance.Data;
  pFVar12 = pFVar15 + iVar3;
  while( true ) {
    if ((this->Convexes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FConvexShape3d,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar12) break;
    local_d8._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
    local_d8._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
    local_d8._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_d8._s_0.W = (param_1->Rotation).ZW.m128d_f64[1];
    local_a8 = (param_1->Translation).ZW.m128d_f64[0];
    local_90 = (param_1->Scale3D).ZW.m128d_f64[0];
    local_b8 = (param_1->Translation).XY.m128d_f64[0];
    dStack_b0 = (param_1->Translation).XY.m128d_f64[1];
    local_a0 = (param_1->Scale3D).XY.m128d_f64[0];
    dStack_98 = (param_1->Scale3D).XY.m128d_f64[1];
    MeshTransforms::ApplyTransform(pFVar15,(TTransformSRT3<double> *)&local_d8._s_0,true,All);
    pFVar15 = pFVar15 + 1;
  }
  iVar3 = (this->LevelSets).ArrayNum;
  pFVar16 = (FLevelSetShape3d *)(this->LevelSets).AllocatorInstance.Data;
  pFVar13 = pFVar16 + iVar3;
  while( true ) {
    if ((this->LevelSets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FLevelSetShape3d,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar16 == pFVar13) break;
    TransformLevelSetShape<UE::Math::TTransform<double>_>(pFVar16,param_1);
    pFVar16 = pFVar16 + 1;
  }
  return;
}

// FilterByVolume @ 14c8e2e80

void __thiscall UE::Geometry::FSimpleShapeSet3d::FilterByVolume(FSimpleShapeSet3d *this,int param_1)

{
  TArray<UE::Geometry::FBoxShape3d,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FCapsuleShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FConvexShape3d,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FLevelSetShape3d *pFVar12;
  FDynamicMesh3 *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  FIdentityFunctor local_res10 [8];
  TArray<FSimpleShapeElementKey,TSizedDefaultAllocator<32>_> local_88;
  FSimpleShapeSet3d local_78;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  GetElementsList(this,&local_88);
  AlgoImpl::
  IntroSortInternal<FSimpleShapeElementKey,int,FIdentityFunctor,TDereferenceWrapper<FSimpleShapeElementKey,_GetElementsSortedByDecreasing_::__l2::<lambda_1>_>_>
            ((FSimpleShapeElementKey *)local_88.AllocatorInstance.Data,local_88.ArrayNum,
             local_res10[0],(<lambda_1> *)local_res10);
  if (param_1 < local_88.ArrayNum) {
    uVar15 = 0;
    local_78.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Spheres.ArrayNum = 0;
    local_78.Spheres.ArrayMax = 0;
    local_78.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Boxes.ArrayNum = 0;
    local_78.Boxes.ArrayMax = 0;
    local_78.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Capsules.ArrayNum = 0;
    local_78.Capsules.ArrayMax = 0;
    local_78.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Convexes.ArrayNum = 0;
    local_78.Convexes.ArrayMax = 0;
    local_78.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.LevelSets.ArrayNum = 0;
    local_78.LevelSets.ArrayMax = 0;
    if (0 < param_1) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar15 < local_88.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)(local_88.AllocatorInstance.Data + lVar16);
        uVar8 = 0;
        if ((int)uVar15 < local_88.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)(local_88.AllocatorInstance.Data + lVar16 + 4);
        lVar11 = (longlong)(int)uVar8;
        if (iVar10 == 2) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Spheres).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this->Spheres).AllocatorInstance.Data + lVar11 * 0x20;
          if (((local_78.Spheres.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_78.Spheres.AllocatorInstance.Data +
                         (longlong)local_78.Spheres.ArrayMax * 0x20)) &&
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
          if (local_78.Spheres.ArrayNum == local_78.Spheres.ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,(ForAnyElementType *)&local_78,&local_78.Spheres.ArrayMax);
            local_78.Spheres.ArrayNum = iVar10;
          }
          lVar11 = (longlong)local_78.Spheres.ArrayNum;
          local_78.Spheres.ArrayNum = local_78.Spheres.ArrayNum + 1;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          *(undefined8 *)(local_78.Spheres.AllocatorInstance.Data + lVar11 * 0x20) =
               *(undefined8 *)pFVar14;
          *(undefined8 *)(local_78.Spheres.AllocatorInstance.Data + lVar11 * 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x18);
          *(undefined8 *)(local_78.Spheres.AllocatorInstance.Data + lVar11 * 0x20 + 0x10) =
               *(undefined8 *)(pFVar14 + 0x10);
          *(undefined8 *)(local_78.Spheres.AllocatorInstance.Data + lVar11 * 0x20 + 0x10 + 8) =
               uVar6;
        }
        else if (iVar10 == 4) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Boxes).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this->Boxes).AllocatorInstance.Data + lVar11 * 0x50;
          if (((local_78.Boxes.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_78.Boxes.AllocatorInstance.Data +
                         (longlong)local_78.Boxes.ArrayMax * 0x50)) &&
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
          if (local_78.Boxes.ArrayNum == local_78.Boxes.ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&local_78.Boxes.AllocatorInstance,&local_78.Boxes.ArrayMax);
            local_78.Boxes.ArrayNum = iVar10;
          }
          lVar11 = (longlong)local_78.Boxes.ArrayNum;
          local_78.Boxes.ArrayNum = local_78.Boxes.ArrayNum + 1;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50) =
               *(undefined8 *)pFVar14;
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x18);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x10) =
               *(undefined8 *)(pFVar14 + 0x10);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x10 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x28);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x20) =
               *(undefined8 *)(pFVar14 + 0x20);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x38);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x30) =
               *(undefined8 *)(pFVar14 + 0x30);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x30 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x48);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x40) =
               *(undefined8 *)(pFVar14 + 0x40);
          *(undefined8 *)(local_78.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x40 + 8) = uVar6;
        }
        else if (iVar10 == 8) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Capsules).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this->Capsules).AllocatorInstance.Data + lVar11 * 0x40;
          if (((local_78.Capsules.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_78.Capsules.AllocatorInstance.Data +
                         (longlong)local_78.Capsules.ArrayMax * 0x40)) &&
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
          if (local_78.Capsules.ArrayNum == local_78.Capsules.ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&local_78.Capsules.AllocatorInstance,
                                &local_78.Capsules.ArrayMax);
            local_78.Capsules.ArrayNum = iVar10;
          }
          lVar11 = (longlong)local_78.Capsules.ArrayNum * 0x40;
          local_78.Capsules.ArrayNum = local_78.Capsules.ArrayNum + 1;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11) =
               *(undefined8 *)pFVar14;
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x18);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 0x10) =
               *(undefined8 *)(pFVar14 + 0x10);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 0x10 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x28);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 0x20) =
               *(undefined8 *)(pFVar14 + 0x20);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x38);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 0x30) =
               *(undefined8 *)(pFVar14 + 0x30);
          *(undefined8 *)(local_78.Capsules.AllocatorInstance.Data + lVar11 + 0x30 + 8) = uVar6;
        }
        else if (iVar10 == 0x10) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Convexes).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar13 = (FDynamicMesh3 *)((this->Convexes).AllocatorInstance.Data + lVar11 * 0x230);
          if (((local_78.Convexes.AllocatorInstance.Data <= pFVar13) &&
              (pFVar13 < (FDynamicMesh3 *)
                         (local_78.Convexes.AllocatorInstance.Data +
                         (longlong)local_78.Convexes.ArrayMax * 0x230))) &&
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
          if (local_78.Convexes.ArrayNum == local_78.Convexes.ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x230,8,&local_78.Convexes.AllocatorInstance,
                                &local_78.Convexes.ArrayMax);
            local_78.Convexes.ArrayNum = iVar10;
          }
          lVar11 = (longlong)local_78.Convexes.ArrayNum;
          local_78.Convexes.ArrayNum = local_78.Convexes.ArrayNum + 1;
          FDynamicMesh3::FDynamicMesh3
                    ((FDynamicMesh3 *)(local_78.Convexes.AllocatorInstance.Data + lVar11 * 0x230),
                     pFVar13);
        }
        else if (iVar10 == 0x20) {
          uVar9 = 0;
          if ((int)uVar8 < (this->LevelSets).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar12 = (FLevelSetShape3d *)((this->LevelSets).AllocatorInstance.Data + lVar11 * 0x90);
          if (((local_78.LevelSets.AllocatorInstance.Data <= pFVar12) &&
              (pFVar12 < (FLevelSetShape3d *)
                         (local_78.LevelSets.AllocatorInstance.Data +
                         (longlong)local_78.LevelSets.ArrayMax * 0x90))) &&
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
          if (local_78.LevelSets.ArrayNum == local_78.LevelSets.ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1090,&local_78.LevelSets.AllocatorInstance,
                                &local_78.LevelSets.ArrayMax);
            local_78.LevelSets.ArrayNum = iVar10;
          }
          lVar11 = (longlong)local_78.LevelSets.ArrayNum;
          local_78.LevelSets.ArrayNum = local_78.LevelSets.ArrayNum + 1;
          FLevelSetShape3d::FLevelSetShape3d
                    ((FLevelSetShape3d *)(local_78.LevelSets.AllocatorInstance.Data + lVar11 * 0x90)
                     ,pFVar12);
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar15 < param_1);
    }
    if (this != &local_78) {
      pFVar14 = (this->Spheres).AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (this->Spheres).AllocatorInstance.Data = local_78.Spheres.AllocatorInstance.Data;
      (this->Spheres).ArrayNum = local_78.Spheres.ArrayNum;
      (this->Spheres).ArrayMax = local_78.Spheres.ArrayMax;
      local_78.Spheres.ArrayNum = 0;
      local_78.Spheres.ArrayMax = 0;
      local_78.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pTVar1 = &this->Boxes;
    if (pTVar1 != &local_78.Boxes) {
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pTVar1->AllocatorInstance).Data = local_78.Boxes.AllocatorInstance.Data;
      (this->Boxes).ArrayNum = local_78.Boxes.ArrayNum;
      (this->Boxes).ArrayMax = local_78.Boxes.ArrayMax;
      local_78.Boxes.ArrayNum = 0;
      local_78.Boxes.ArrayMax = 0;
      local_78.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pTVar2 = &this->Capsules;
    if (pTVar2 != &local_78.Capsules) {
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pTVar2->AllocatorInstance).Data = local_78.Capsules.AllocatorInstance.Data;
      (this->Capsules).ArrayNum = local_78.Capsules.ArrayNum;
      (this->Capsules).ArrayMax = local_78.Capsules.ArrayMax;
      local_78.Capsules.ArrayNum = 0;
      local_78.Capsules.ArrayMax = 0;
      local_78.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pTVar3 = &this->Convexes;
    if (pTVar3 != &local_78.Convexes) {
      DestructItems<UE::Geometry::FConvexShape3d,int>
                ((FConvexShape3d *)(pTVar3->AllocatorInstance).Data,(this->Convexes).ArrayNum);
      pFVar14 = (pTVar3->AllocatorInstance).Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pTVar3->AllocatorInstance).Data = local_78.Convexes.AllocatorInstance.Data;
      (this->Convexes).ArrayNum = local_78.Convexes.ArrayNum;
      (this->Convexes).ArrayMax = local_78.Convexes.ArrayMax;
      local_78.Convexes.ArrayNum = 0;
      local_78.Convexes.ArrayMax = 0;
      local_78.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pTVar4 = &this->LevelSets;
    if (pTVar4 != &local_78.LevelSets) {
      DestructItems<UE::Geometry::FLevelSetShape3d,int>
                ((FLevelSetShape3d *)(pTVar4->AllocatorInstance).Data,(this->LevelSets).ArrayNum);
      pFVar14 = (pTVar4->AllocatorInstance).Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pTVar4->AllocatorInstance).Data = local_78.LevelSets.AllocatorInstance.Data;
      (this->LevelSets).ArrayNum = local_78.LevelSets.ArrayNum;
      (this->LevelSets).ArrayMax = local_78.LevelSets.ArrayMax;
      local_78.LevelSets.ArrayNum = 0;
      local_78.LevelSets.ArrayMax = 0;
      local_78.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    DestructItems<UE::Geometry::FLevelSetShape3d,int>
              ((FLevelSetShape3d *)local_78.LevelSets.AllocatorInstance.Data,
               local_78.LevelSets.ArrayNum);
    if ((FLevelSetShape3d *)local_78.LevelSets.AllocatorInstance.Data != (FLevelSetShape3d *)0x0) {
      FMemory::Free(local_78.LevelSets.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FConvexShape3d,int>
              ((FConvexShape3d *)local_78.Convexes.AllocatorInstance.Data,local_78.Convexes.ArrayNum
              );
    if ((FDynamicMesh3 *)local_78.Convexes.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_78.Convexes.AllocatorInstance.Data);
    }
    if (local_78.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Capsules.AllocatorInstance.Data);
    }
    if (local_78.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Boxes.AllocatorInstance.Data);
    }
    if (local_78.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Spheres.AllocatorInstance.Data);
    }
  }
  if ((FSimpleShapeElementKey *)local_88.AllocatorInstance.Data != (FSimpleShapeElementKey *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// MergeShapes @ 14c909ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSimpleShapeSet3d::MergeShapes
          (FSimpleShapeSet3d *this,int param_1,FMergeShapesSettings *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FScriptContainerElement *pFVar3;
  FMergeShapesSettings *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  FSourceShapeRef FVar14;
  FSourceShapeRef FVar15;
  FSourceShapeRef FVar16;
  FSourceShapeRef FVar17;
  ulonglong uVar18;
  FSimpleShapeSet3d *pFVar19;
  undefined8 uVar20;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar21;
  bool bVar22;
  undefined1 uVar23;
  uint uVar24;
  FDynamicMesh3 *pFVar25;
  FDynamicMesh3 *pFVar26;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar27;
  TQuat<double> *pTVar28;
  TVector2<double> *pTVar29;
  undefined8 uVar30;
  ulong64 uVar31;
  FFunctionStorage *pFVar32;
  undefined ***pppuVar33;
  longlong *plVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  FSphereCovering *pFVar38;
  FScriptContainerElement *pFVar39;
  FMergeShapesSettings *pFVar40;
  FDynamicMesh3 *pFVar41;
  longlong lVar42;
  FSphereCovering *pFVar43;
  longlong lVar44;
  int iVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStackY_1268 [32];
  undefined1 local_1218 [8];
  uint local_1210;
  ESimpleShapeType EStack_120c;
  ForAnyElementType local_1208;
  undefined8 local_1200;
  int local_11f8;
  int local_11f4;
  ForAnyElementType local_11f0;
  undefined8 local_11e8;
  ForAnyElementType local_11e0;
  undefined8 local_11d8;
  ForAnyElementType local_11d0;
  undefined8 local_11c8;
  undefined1 local_11c0 [8];
  FDynamicMesh3 *local_11b8;
  uint local_11b0;
  undefined4 uStack_11ac;
  TArray<int,TSizedDefaultAllocator<32>_> local_11a8;
  FSimpleShapeSet3d *local_1198;
  double local_1190;
  FMergeShapesSettings *local_1188;
  int local_1180;
  int local_1178;
  FDynamicMesh3 **local_1170;
  longlong local_1168;
  FScriptContainerElement *local_1160;
  FScriptContainerElement *local_1158;
  FScriptContainerElement *local_1150;
  FSphereCovering local_1148;
  TQuaternion<double>_u_0 local_1128;
  undefined1 local_1108 [16];
  longlong local_10f8;
  ForAnyElementType local_10f0;
  longlong local_10e8;
  ForAnyElementType local_10e0;
  longlong local_10d8;
  ForAnyElementType local_10d0;
  longlong local_10c8;
  ForAnyElementType local_10c0;
  longlong local_10b8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_10b0;
  ForAnyElementType local_10a0;
  longlong local_1098;
  ForAnyElementType local_1090;
  longlong local_1088;
  ForAnyElementType local_1080;
  longlong local_1078;
  bool local_1070;
  double local_1068;
  double dStack_1060;
  int local_1058;
  undefined8 local_1054;
  bool local_104c;
  FDynamicMeshEditor local_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  ForAnyElementType *local_1028;
  ForAnyElementType *local_1020;
  ForAnyElementType *local_1018;
  ForAnyElementType *local_1010;
  ForAnyElementType *local_1008;
  ForAnyElementType *local_1000;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_ff8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_fc0;
  ForAnyElementType *local_fb8;
  undefined8 local_fa8;
  undefined4 uStack_fa0;
  uint uStack_f9c;
  code *local_f98;
  TArray<int,TSizedDefaultAllocator<32>_> **local_f90;
  TVector<double> *local_f88;
  int iStack_f80;
  undefined4 uStack_f7c;
  code *local_f78;
  ForAnyElementType **local_f70;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> local_f68;
  FScriptContainerElement *local_f58;
  int iStack_f50;
  FScriptContainerElement *local_f48;
  int iStack_f40;
  undefined4 uStack_f3c;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> local_f38;
  FScriptContainerElement *local_f28;
  int iStack_f20;
  undefined4 uStack_f1c;
  code *local_f18;
  ForAnyElementType **local_f10;
  code *local_f08;
  undefined **local_ef8;
  FDynamicMesh3 *local_ef0;
  undefined ***local_ee0;
  TQuat<double> local_ed8;
  code *local_eb8 [2];
  FFunctionStorage local_ea8;
  TArrayView<TTuple<int,int>_const_,int> local_e88;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e78;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e68;
  TVector2<double>_u_0 local_e58;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e48;
  TArrayView<UE::Math::TVector<double>,int> local_e38;
  TVector2<double>_u_0 local_e28;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e18;
  FRefCountVector *local_e08 [2];
  IndexIterator local_df8;
  TVector<double>_u_0 local_de8;
  double dStack_dd0;
  double local_dc8;
  double dStack_dc0;
  double local_db8;
  double dStack_db0;
  undefined1 local_da8 [16];
  TRotator<double> local_d98;
  TTransform<double> local_d78;
  undefined1 local_d18 [16];
  int local_d08;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_cc0 [4];
  TVector<double>_u_0 local_c78 [3];
  FIndex3i_u_0 local_c28;
  float local_c18;
  ESphereProjectionMethod local_c14;
  TArrayView<UE::Math::TVector<double>_const_,int> local_c08;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_bf8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_bc8;
  TVector2<double> local_b98;
  double local_b88;
  double dStack_b80;
  double local_b78;
  double dStack_b70;
  undefined1 local_b68 [160];
  TVector<double>_u_0 local_ac8;
  TQuaternion<double>_u_0 TStack_ab0;
  TVector<double>_u_0 TStack_a90;
  FIndex3i_u_0 local_a78;
  TQuat<double> local_a68;
  FDynamicMesh3 local_a48;
  undefined1 local_818 [32];
  void *local_7f8;
  undefined4 local_7f0;
  uint local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  void *local_7d8;
  undefined4 local_7d0;
  ForAnyElementType local_7c8;
  undefined8 local_7c0;
  TBitArray<FDefaultBitArrayAllocator> local_7b8;
  undefined4 local_798;
  undefined4 local_794;
  void *local_788;
  undefined4 local_780;
  undefined2 local_778;
  ForAnyElementType local_770;
  undefined8 local_768;
  TBitArray<FDefaultBitArrayAllocator> local_760;
  undefined8 uStack_740;
  void *local_730;
  undefined4 local_728;
  ForAnyElementType local_720;
  undefined8 local_718;
  TBitArray<FDefaultBitArrayAllocator> local_710;
  undefined8 uStack_6f0;
  void *local_6e0;
  undefined4 local_6d8;
  undefined2 local_6d0;
  ForAnyElementType local_6c8;
  undefined8 local_6c0;
  TBitArray<FDefaultBitArrayAllocator> local_6b8;
  undefined4 local_698;
  undefined4 local_694;
  void *local_688;
  undefined4 local_680;
  ForAnyElementType local_678;
  undefined8 local_670;
  TBitArray<FDefaultBitArrayAllocator> local_668;
  undefined4 local_648;
  undefined4 local_644;
  void *local_638;
  undefined4 local_630;
  undefined2 local_628;
  ForAnyElementType local_620;
  undefined8 local_618;
  TBitArray<FDefaultBitArrayAllocator> local_610;
  undefined8 uStack_5f0;
  void *local_5e0;
  undefined4 local_5d8;
  ForAnyElementType local_5d0;
  undefined8 local_5c8;
  TBitArray<FDefaultBitArrayAllocator> local_5c0;
  undefined8 uStack_5a0;
  void *local_590;
  undefined4 local_588;
  undefined2 local_580;
  ForAnyElementType local_578;
  undefined8 local_570;
  ForAnyElementType local_568;
  undefined8 local_560;
  BaseIterator local_558;
  code *local_548 [2];
  longlong local_538 [3];
  longlong *local_520;
  undefined1 local_518 [40];
  longlong *local_4f0;
  FRefCountVector *local_4e8;
  undefined1 local_4d8 [192];
  undefined1 local_418 [64];
  void *local_3d8;
  undefined4 local_3d0;
  ForAnyElementType local_3c8;
  undefined8 local_3c0;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  IndexIterator local_3a8;
  undefined1 local_398 [40];
  longlong *local_370;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_368;
  FNegativeSpaceSampleSettings local_2a8;
  TVector<double> local_188 [8];
  int local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_1268;
  iVar35 = (this->Capsules).ArrayNum + (this->Boxes).ArrayNum + (this->Convexes).ArrayNum +
           (this->Spheres).ArrayNum;
  if ((param_1 < (this->LevelSets).ArrayNum + iVar35) && (1 < iVar35)) {
    pFVar41 = (FDynamicMesh3 *)0x0;
    local_11d0.Data = (FScriptContainerElement *)0x0;
    local_11c8 = 0;
    local_1208.Data = (FScriptContainerElement *)0x0;
    local_1200 = 0;
    local_11e0.Data = (FScriptContainerElement *)0x0;
    local_11d8 = 0;
    local_11f0.Data = (FScriptContainerElement *)0x0;
    local_11e8 = 0;
    local_11b8 = (FDynamicMesh3 *)0x0;
    local_11f4 = param_1;
    pFVar26 = local_11b8;
    local_1198 = this;
    local_1188 = param_2;
    if (param_2->bMergeShapesProtectNegativeSpace != false) {
      pFVar25 = ::operator_new(0x230);
      pFVar26 = pFVar41;
      if (pFVar25 != (FDynamicMesh3 *)0x0) {
        pFVar26 = FDynamicMesh3::FDynamicMesh3(pFVar25);
      }
      pFVar25 = local_11b8;
      if (local_11b8 != (FDynamicMesh3 *)0x0) {
        plVar34 = &local_11b8->_padding_;
        local_11b8 = pFVar26;
        (**(code **)*plVar34)(pFVar25,1);
        pFVar26 = local_11b8;
      }
    }
    local_11b8 = pFVar26;
    dVar13 = __real_4020000000000000;
    iVar35 = (this->Boxes).ArrayNum;
    local_1170 = &local_11b8;
    local_1018 = &local_11f0;
    local_1010 = &local_11e0;
    local_1008 = &local_11d0;
    local_1000 = &local_1208;
    if (0 < iVar35) {
      EStack_120c = Box;
      pFVar26 = pFVar41;
      pFVar25 = pFVar41;
      do {
        uVar36 = (uint)pFVar26;
        uVar37 = 0;
        if ((int)uVar36 < iVar35) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        local_1210 = uVar36;
        if ((uVar37 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        pFVar39 = (this->Boxes).AllocatorInstance.Data;
        pFVar3 = (FScriptContainerElement *)((longlong)&pFVar25->_padding_ + (longlong)pFVar39);
        dVar9 = *(double *)pFVar3;
        dVar10 = *(double *)(pFVar3 + 8);
        dVar11 = *(double *)(pFVar39 + 8 + (longlong)&(pFVar25->Vertices).CurBlock);
        dVar6 = *(double *)(pFVar39 + 8 + (longlong)&(pFVar25->Vertices).CurBlock + 8);
        dVar7 = *(double *)(pFVar39 + (longlong)&(pFVar25->VertexRefCounts).RefCounts);
        dVar48 = *(double *)(pFVar39 + (longlong)&(pFVar25->VertexRefCounts).RefCounts + 8);
        dVar8 = *(double *)(pFVar39 + 0x10 + (longlong)&(pFVar25->VertexRefCounts).RefCounts);
        dVar49 = *(double *)(pFVar39 + 0x10 + (longlong)&(pFVar25->VertexRefCounts).RefCounts + 8);
        auVar2 = *(undefined1 (*) [16])
                  (pFVar39 + 0x20 + (longlong)&(pFVar25->VertexRefCounts).RefCounts);
        uVar50 = auVar2._0_4_;
        uVar51 = auVar2._4_4_;
        uVar46 = auVar2._8_4_;
        uVar47 = auVar2._12_4_;
        local_de8._s_0.X = dVar9;
        local_de8._s_0.Y = dVar10;
        local_de8._s_0.Z = dVar11;
        dStack_dd0 = dVar6;
        local_dc8 = dVar7;
        dStack_dc0 = dVar48;
        local_db8 = dVar8;
        dStack_db0 = dVar49;
        local_da8 = auVar2;
        if (local_11b8 == (FDynamicMesh3 *)0x0) {
          local_c8 = 0;
          local_c4 = 8;
          TOrientedBox3<double>::
          EnumerateCorners<_UE::Geometry::FSimpleShapeSet3d::MergeShapes_::__l15::<lambda_5>_>
                    ((TOrientedBox3<double> *)&local_de8._s_0,
                     (TArray<UE::Math::TVector<double>,TFixedAllocator<8>_> *)local_188);
          iVar35 = local_c8;
          local_f88 = local_188;
          dVar8 = (double)local_da8._0_8_;
          if ((double)local_da8._0_8_ <= 0.0) {
            dVar8 = 0.0;
          }
          dVar49 = dStack_db0;
          if (dStack_db0 <= 0.0) {
            dVar49 = 0.0;
          }
          dVar9 = (double)local_da8._8_8_;
          if ((double)local_da8._8_8_ <= 0.0) {
            dVar9 = 0.0;
          }
          if ((local_c8 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            uVar23 = (*pcVar5)();
            return (bool)uVar23;
          }
          FVar15.ShapeType = EStack_120c;
          FVar15.SourceIdx = local_1210;
          iStack_f80 = iVar35;
          local_e68._12_4_ = uStack_f7c;
          local_e68.ArrayNum = iVar35;
          local_e68.DataPtr = local_f88;
          `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_3>::operator()
                    (&local_1018,&local_e68,dVar9 * dVar8 * dVar49 * dVar13,FVar15,
                     (TTransform<double> *)0x0);
        }
        else {
          FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_b68);
          local_a78._s_0.A = 1;
          local_a78._s_0.B = 1;
          local_a78._s_0.C = 1;
          local_ac8._s_0.X = dVar9;
          local_ac8._s_0.Y = dVar10;
          local_ac8._s_0.Z = dVar11;
          TStack_ab0._s_0.X = dVar6;
          TStack_ab0._s_0.Y = dVar7;
          TStack_ab0._s_0.Z = dVar48;
          TStack_ab0._s_0.W = dVar8;
          TStack_a90._s_0.X = dVar49;
          TStack_a90._8_16_ = auVar2;
          FGridBoxMeshGenerator::Generate((FGridBoxMeshGenerator *)local_b68);
          pTVar27 = TArrayView<UE::Math::TVector<double>_const_,int>::
                    TArrayView<UE::Math::TVector<double>_const_,int><TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                              (&local_c08,
                               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                               (local_b68 + 8));
          FVar14.ShapeType = EStack_120c;
          FVar14.SourceIdx = local_1210;
          if (dVar49 <= 0.0) {
            dVar49 = 0.0;
          }
          local_e78.DataPtr = pTVar27->DataPtr;
          local_e78.ArrayNum = pTVar27->ArrayNum;
          local_e78._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
          if (auVar2._8_8_ <= 0.0) {
            uVar46 = 0;
            uVar47 = 0;
          }
          if (auVar2._0_8_ <= 0.0) {
            uVar50 = 0;
            uVar51 = 0;
          }
          `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_3>::operator()
                    (&local_1018,&local_e78,
                     (double)CONCAT44(uVar47,uVar46) * (double)CONCAT44(uVar51,uVar50) *
                     dVar49 * dVar13,FVar14,(TTransform<double> *)0x0);
          `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_1>::operator()
                    (&local_1170,(FMeshShapeGenerator *)local_b68);
          FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)local_b68);
        }
        iVar35 = (this->Boxes).ArrayNum;
        pFVar26 = (FDynamicMesh3 *)(ulonglong)(uVar36 + 1);
        pFVar25 = (FDynamicMesh3 *)&(pFVar25->VertexRefCounts).UsedCount;
      } while ((int)(uVar36 + 1) < iVar35);
    }
    dVar13 = __real_3eb0c6f7a0000000;
    iVar35 = (this->Spheres).ArrayNum;
    if (0 < iVar35) {
      EStack_120c = Sphere;
      pFVar26 = pFVar41;
      pFVar25 = pFVar41;
      do {
        uVar36 = (uint)pFVar25;
        uVar37 = 0;
        if ((int)uVar36 < iVar35) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        local_1210 = uVar36;
        if ((uVar37 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        pFVar39 = (this->Spheres).AllocatorInstance.Data;
        FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_d18);
        local_d18._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
        local_c14 = CubeMapping;
        pFVar3 = (FScriptContainerElement *)((longlong)&pFVar26->_padding_ + (longlong)pFVar39);
        local_c78[0]._0_8_ = *(undefined8 *)pFVar3;
        local_c78[0]._8_8_ = *(undefined8 *)(pFVar3 + 8);
        local_c78[0]._16_8_ =
             *(undefined8 *)(pFVar39 + (longlong)&(pFVar26->Vertices).Blocks.AllocatorInstance);
        dVar8 = *(double *)(pFVar39 + 8 + (longlong)&(pFVar26->Vertices).Blocks.AllocatorInstance);
        if (*(double *)(pFVar39 + 8 + (longlong)&(pFVar26->Vertices).Blocks.AllocatorInstance) <=
            dVar13) {
          dVar8 = dVar13;
        }
        local_c28._s_0.A = 6;
        local_c28._s_0.B = 6;
        local_c28._s_0.C = 6;
        local_c18 = (float)dVar8;
        FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_d18);
        local_f68.SourceVertices =
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(local_d18 + 8);
        local_f68.SourceTriangles = local_cc0;
        TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
        ::GetVolumeArea((TVector2<double> *)&local_e58._s_0,&local_f68);
        iVar35 = local_d08;
        uVar12 = local_e58._s_0.X;
        local_f58 = (FScriptContainerElement *)local_d18._8_8_;
        if ((local_d08 < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        FVar16.ShapeType = EStack_120c;
        FVar16.SourceIdx = local_1210;
        iStack_f50 = iVar35;
        local_e48.DataPtr = (TVector<double> *)local_f58;
        `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_3>::operator()
                  (&local_1018,&local_e48,(double)uVar12,FVar16,(TTransform<double> *)0x0);
        `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_1>::operator()
                  (&local_1170,(FMeshShapeGenerator *)local_d18);
        FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)local_d18);
        iVar35 = (this->Spheres).ArrayNum;
        pFVar25 = (FDynamicMesh3 *)(ulonglong)(uVar36 + 1);
        pFVar26 = (FDynamicMesh3 *)&pFVar26->VertexRefCounts;
      } while ((int)(uVar36 + 1) < iVar35);
    }
    dVar11 = _UNK_150689688;
    dVar10 = ___xmm_3ff00000000000003ff0000000000000;
    dVar9 = _UNK_150689518;
    dVar49 = ___xmm_00000000000000003ff0000000000000;
    dVar8 = __real_3fe0000000000000;
    dVar13 = __real_3ff0000000000000;
    if (0 < (this->Capsules).ArrayNum) {
      EStack_120c = Capsule;
      pFVar26 = pFVar41;
      pFVar25 = pFVar41;
      do {
        uVar36 = (uint)pFVar26;
        uVar37 = 0;
        if ((int)uVar36 < (this->Capsules).ArrayNum) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        local_1210 = uVar36;
        if ((uVar37 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        pFVar3 = (this->Capsules).AllocatorInstance.Data;
        local_1108._8_8_ = (FScriptContainerElement *)0x0;
        local_10f8 = 0;
        local_10f0.Data = (FScriptContainerElement *)0x0;
        local_10e8 = 0;
        local_10e0.Data = (FScriptContainerElement *)0x0;
        local_10d8 = 0;
        local_10d0.Data = (FScriptContainerElement *)0x0;
        local_10c8 = 0;
        local_10c0.Data = (FScriptContainerElement *)0x0;
        local_10b8 = 0;
        local_10b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_10b0.ArrayNum = 0;
        local_10b0.ArrayMax = 0;
        local_10a0.Data = (FScriptContainerElement *)0x0;
        local_1098 = 0;
        local_1090.Data = (FScriptContainerElement *)0x0;
        local_1088 = 0;
        local_1080.Data = (FScriptContainerElement *)0x0;
        local_1078 = 0;
        local_1070 = false;
        local_1108._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
        local_104c = false;
        local_1068 = *(double *)(pFVar3 + 0x18 + (longlong)&(pFVar25->VertexRefCounts).RefCounts);
        dStack_1060 = *(double *)(pFVar3 + 0x10 + (longlong)&(pFVar25->VertexRefCounts).RefCounts) +
                      *(double *)(pFVar3 + 0x10 + (longlong)&(pFVar25->VertexRefCounts).RefCounts);
        local_1058 = 8;
        local_1054._0_4_ = 0x10;
        local_1054._4_4_ = 0;
        FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)local_1108,0xe2,0x1c0,0x10e,0xe2)
        ;
        FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_1108);
        FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_1108);
        FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_1108);
        FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_1108);
        local_1128._s_0.X = 0.0;
        local_1128._s_0.W = dVar13;
        local_1128._s_0.Y = 0.0;
        local_1128._s_0.Z = 0.0;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_1128._s_0,&UE::Math::TVector<double>::ZAxisVector,
                   (TVector<double> *)(pFVar3 + 0x10 + (longlong)&(pFVar25->Vertices).CurBlock));
        dVar6 = *(double *)(pFVar3 + 0x10 + (longlong)&(pFVar25->VertexRefCounts).RefCounts) +
                *(double *)(pFVar3 + 0x10 + (longlong)&(pFVar25->VertexRefCounts).RefCounts);
        dVar7 = *(double *)((longlong)&pFVar25->_padding_ + (longlong)pFVar3) -
                dVar6 * *(double *)(pFVar3 + 0x10 + (longlong)&(pFVar25->Vertices).CurBlock) * dVar8
        ;
        dVar48 = *(double *)(pFVar3 + (longlong)&(pFVar25->Vertices).CurBlock) -
                 dVar6 * *(double *)(pFVar3 + (longlong)&(pFVar25->VertexRefCounts).RefCounts) *
                 dVar8;
        local_ed8.X = local_1128._s_0.X;
        local_ed8.Y = local_1128._s_0.Y;
        dVar6 = *(double *)(pFVar3 + 8 + (longlong)&(pFVar25->Vertices).CurBlock) -
                dVar6 * *(double *)(pFVar3 + 8 + (longlong)&(pFVar25->VertexRefCounts).RefCounts) *
                dVar8;
        local_ed8.Z = local_1128._s_0.Z;
        local_ed8.W = local_1128._s_0.W;
        UE::Math::TQuat<double>::Rotator(&local_ed8,&local_d98);
        pTVar28 = UE::Math::TRotator<double>::Quaternion(&local_d98,&local_a68);
        local_d78.Rotation.XY.m128d_f64[0] = pTVar28->X;
        local_d78.Rotation.XY.m128d_f64[1] = pTVar28->Y;
        local_d78.Rotation.ZW.m128d_f64[0] = pTVar28->Z;
        local_d78.Rotation.ZW.m128d_f64[1] = pTVar28->W;
        iVar35 = (int)local_10f8;
        local_d78.Translation.ZW.m128d_f64[1] = 0.0;
        local_d78.Scale3D.XY.m128d_f64[0] = dVar10;
        local_d78.Scale3D.XY.m128d_f64[1] = dVar11;
        local_d78.Scale3D.ZW.m128d_f64[0] = dVar49;
        local_d78.Scale3D.ZW.m128d_f64[1] = dVar9;
        local_f48 = (FScriptContainerElement *)local_1108._8_8_;
        local_d78.Translation.XY.m128d_f64[0] = dVar7;
        local_d78.Translation.XY.m128d_f64[1] = dVar48;
        local_d78.Translation.ZW.m128d_f64[0] = dVar6;
        local_b88 = local_d78.Rotation.XY.m128d_f64[0];
        dStack_b80 = local_d78.Rotation.XY.m128d_f64[1];
        local_b78 = local_d78.Rotation.ZW.m128d_f64[0];
        dStack_b70 = local_d78.Rotation.ZW.m128d_f64[1];
        if (((int)local_10f8 < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        iStack_f40 = iVar35;
        local_e38._12_4_ = uStack_f3c;
        local_e38.ArrayNum = iVar35;
        local_e38.DataPtr = (TVector<double> *)local_f48;
        `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_2>::operator()
                  (local_11c0,&local_e38,&local_d78);
        local_f38.SourceVertices =
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(local_1108 + 8);
        local_f38.SourceTriangles = &local_10b0;
        TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
        ::GetVolumeArea((TVector2<double> *)&local_e28._s_0,&local_f38);
        uVar12 = local_e28._s_0.X;
        iVar35 = (int)local_10f8;
        local_f28 = (FScriptContainerElement *)local_1108._8_8_;
        if (((int)local_10f8 < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        FVar17.ShapeType = EStack_120c;
        FVar17.SourceIdx = local_1210;
        iStack_f20 = iVar35;
        local_e18._12_4_ = uStack_f1c;
        local_e18.ArrayNum = iVar35;
        local_e18.DataPtr = (TVector<double> *)local_f28;
        `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_3>::operator()
                  (&local_1018,&local_e18,(double)uVar12,FVar17,(TTransform<double> *)0x0);
        `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_1>::operator()
                  (&local_1170,(FMeshShapeGenerator *)local_1108);
        FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)local_1108);
        pFVar26 = (FDynamicMesh3 *)(ulonglong)(uVar36 + 1);
        pFVar25 = (FDynamicMesh3 *)&(pFVar25->VertexRefCounts).FreeIndices.Blocks;
      } while ((int)(uVar36 + 1) < (this->Capsules).ArrayNum);
    }
    uVar20 = _UNK_150631d98;
    uVar12 = ___xmm_00000000ffffffff0000008000000000;
    pFVar26 = pFVar41;
    if (0 < (this->Convexes).ArrayNum) {
      do {
        uVar36 = (uint)pFVar41;
        uStack_11ac = 0x10;
        uVar37 = 0;
        if ((int)uVar36 < (this->Convexes).ArrayNum) {
          uVar37 = ~uVar36 >> 0x1f;
        }
        local_11b0 = uVar36;
        if ((uVar37 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        pFVar41 = (FDynamicMesh3 *)
                  ((longlong)&pFVar26->_padding_ + (longlong)(this->Convexes).AllocatorInstance.Data
                  );
        pTVar29 = TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea(&local_b98,pFVar41);
        local_ee0 = (undefined ***)0x0;
        local_ef8 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
        ;
        local_1190 = (pTVar29->field0_0x0)._s_0.X;
        local_f08 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                    ::Call;
        local_eb8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                       ::Call;
        local_ea8.HeapAllocation = (FFunctionStorage *)0x0;
        local_ef0 = pFVar41;
        Core::Private::Function::
        TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
        CloneToEmptyStorage(&local_ef8,&local_ea8);
        local_4e8 = &pFVar41->VertexRefCounts;
        local_518._0_8_ = 0;
        local_4f0 = (longlong *)0x0;
        TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                  ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_518,
                   (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_eb8);
        if (local_eb8[0] != (code *)0x0) {
          pFVar32 = &local_ea8;
          if (local_ea8.HeapAllocation != (FFunctionStorage *)0x0) {
            pFVar32 = local_ea8.HeapAllocation;
          }
          (**(code **)(*(longlong *)pFVar32->InlineAllocation + 0x10))();
        }
        if (local_f08 != (code *)0x0) {
          pppuVar33 = &local_ef8;
          if (local_ee0 != (undefined ***)0x0) {
            pppuVar33 = local_ee0;
          }
          (*(code *)(*pppuVar33)[2])();
        }
        FRefCountVector::IndexIterator::IndexIterator
                  ((IndexIterator *)local_e08,local_4e8,0,
                   (local_4e8->RefCounts).CurBlock * 0x200 + (local_4e8->RefCounts).CurBlockUsed);
        local_548[0] = (code *)0x0;
        local_520 = (longlong *)0x0;
        local_558.Vector = local_e08[0];
        local_558._8_8_ = local_e08[1];
        TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                  ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_548,
                   (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_518);
        iVar35 = (local_4e8->RefCounts).CurBlockUsed + (local_4e8->RefCounts).CurBlock * 0x200;
        FRefCountVector::IndexIterator::IndexIterator(&local_df8,local_4e8,iVar35,iVar35);
        local_398._0_8_ = 0;
        local_370 = (longlong *)0x0;
        local_3a8._0_8_ = local_df8._0_8_;
        local_3a8._8_8_ = local_df8._8_8_;
        TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                  ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_398,
                   (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_518);
        if (local_558.Index != local_3a8._8_4_) {
          do {
            local_1180 = local_558.Index;
            Core::Private::Function::CheckCallable(local_548[0]);
            pcVar5 = local_548[0];
            plVar34 = local_538;
            if (local_520 != (longlong *)0x0) {
              plVar34 = local_520;
            }
            uVar30 = (**(code **)(*plVar34 + 8))();
            (*pcVar5)(&local_1040,uVar30);
            if (((local_11d0.Data <= (FScriptContainerElement *)&local_1040) &&
                ((FScriptContainerElement *)&local_1040 <
                 local_11d0.Data + (longlong)local_11c8._4_4_ * 0x18)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar5 = (code *)swi(3);
              uVar23 = (*pcVar5)();
              return (bool)uVar23;
            }
            iVar35 = (int)local_11c8;
            if ((int)local_11c8 == local_11c8._4_4_) {
              iVar35 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_11d0,(int *)((longlong)&local_11c8 + 4));
            }
            local_11c8 = CONCAT44(local_11c8._4_4_,iVar35 + 1);
            *(undefined8 *)(local_11d0.Data + (longlong)iVar35 * 0x18) = local_1040;
            *(undefined8 *)(local_11d0.Data + (longlong)iVar35 * 0x18 + 8) = uStack_1038;
            *(undefined8 *)(local_11d0.Data + (longlong)iVar35 * 0x18 + 0x10) = local_1030;
            FRefCountVector::BaseIterator::goto_next(&local_558);
          } while (local_558.Index != local_3a8._8_4_);
        }
        if (local_398._0_8_ != 0) {
          plVar34 = (longlong *)(local_398 + 0x10);
          if (local_370 != (longlong *)0x0) {
            plVar34 = local_370;
          }
          (**(code **)(*plVar34 + 0x10))();
        }
        if (local_548[0] != (code *)0x0) {
          plVar34 = local_538;
          if (local_520 != (longlong *)0x0) {
            plVar34 = local_520;
          }
          (**(code **)(*plVar34 + 0x10))();
        }
        if (local_518._0_8_ != 0) {
          plVar34 = (longlong *)(local_518 + 0x10);
          if (local_4f0 != (longlong *)0x0) {
            plVar34 = local_4f0;
          }
          (**(code **)(*plVar34 + 0x10))();
        }
        local_11f8 = (pFVar41->VertexRefCounts).UsedCount;
        if (((local_1208.Data <= (FScriptContainerElement *)&local_11f8) &&
            ((FScriptContainerElement *)&local_11f8 <
             local_1208.Data + (longlong)local_1200._4_4_ * 4)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        iVar35 = (int)local_1200;
        if ((int)local_1200 == local_1200._4_4_) {
          iVar35 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1208,(int *)((longlong)&local_1200 + 4));
        }
        local_1200 = CONCAT44(local_1200._4_4_,iVar35 + 1);
        *(int *)(local_1208.Data + (longlong)iVar35 * 4) = local_11f8;
        if (((local_11e0.Data <= (FScriptContainerElement *)&local_1190) &&
            ((FScriptContainerElement *)&local_1190 <
             local_11e0.Data + (longlong)local_11d8._4_4_ * 8)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        iVar35 = (int)local_11d8;
        if ((int)local_11d8 == local_11d8._4_4_) {
          iVar35 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_11e0,(int *)((longlong)&local_11d8 + 4));
        }
        local_11d8 = CONCAT44(local_11d8._4_4_,iVar35 + 1);
        *(double *)(local_11e0.Data + (longlong)iVar35 * 8) = local_1190;
        if (((local_11f0.Data <= (FScriptContainerElement *)&local_11b0) &&
            ((FScriptContainerElement *)&local_11b0 <
             local_11f0.Data + (longlong)local_11e8._4_4_ * 8)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          uVar23 = (*pcVar5)();
          return (bool)uVar23;
        }
        iVar35 = (int)local_11e8;
        if ((int)local_11e8 == local_11e8._4_4_) {
          iVar35 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_11f0,(int *)((longlong)&local_11e8 + 4));
        }
        local_11e8 = CONCAT44(local_11e8._4_4_,iVar35 + 1);
        *(ulonglong *)(local_11f0.Data + (longlong)iVar35 * 8) = CONCAT44(uStack_11ac,local_11b0);
        uVar30 = ___xmm_00000000ffffffff0000008000000000;
        if (local_11b8 != (FDynamicMesh3 *)0x0) {
          local_1048.Mesh = local_11b8;
          local_818._0_8_ = (FScriptContainerElement *)0x0;
          local_818._8_8_ = 0;
          local_7f8 = (void *)0x0;
          local_7f0 = 0;
          local_7ec = 0x80;
          local_7e8 = 0xffffffff;
          local_7e4 = 0;
          local_7d8 = (void *)0x0;
          local_7d0 = 0;
          local_7c8.Data = (FScriptContainerElement *)0x0;
          local_7c0 = 0;
          local_7b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_7b8.NumBits = 0;
          local_7b8.MaxBits = 0x80;
          local_798 = 0xffffffff;
          local_794 = 0;
          local_788 = (void *)0x0;
          local_780 = 0;
          local_778._0_1_ = true;
          local_778._1_1_ = true;
          local_770.Data = (FScriptContainerElement *)0x0;
          local_768 = 0;
          local_760.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
          _UNK_150631d94 = SUB84(uVar12,4);
          local_760.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_760.MaxBits = _UNK_150631d94;
          uStack_740 = uVar20;
          local_730 = (void *)0x0;
          local_728 = 0;
          local_720.Data = (FScriptContainerElement *)0x0;
          local_718 = 0;
          local_710.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
          _UNK_150631d94 = SUB84(uVar12,4);
          local_710.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_710.MaxBits = _UNK_150631d94;
          uStack_6f0 = uVar20;
          local_6e0 = (void *)0x0;
          local_6d8 = 0;
          local_6d0._0_1_ = true;
          local_6d0._1_1_ = true;
          local_6c8.Data = (FScriptContainerElement *)0x0;
          local_6c0 = 0;
          local_6b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_6b8.NumBits = 0;
          local_6b8.MaxBits = 0x80;
          local_698 = 0xffffffff;
          local_694 = 0;
          local_688 = (void *)0x0;
          local_680 = 0;
          local_678.Data = (FScriptContainerElement *)0x0;
          local_670 = 0;
          local_668.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_668.NumBits = 0;
          local_668.MaxBits = 0x80;
          local_648 = 0xffffffff;
          local_644 = 0;
          local_638 = (void *)0x0;
          local_630 = 0;
          local_628._0_1_ = true;
          local_628._1_1_ = true;
          local_620.Data = (FScriptContainerElement *)0x0;
          local_618 = 0;
          local_610.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
          _UNK_150631d94 = SUB84(uVar12,4);
          local_610.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_610.MaxBits = _UNK_150631d94;
          uStack_5f0 = uVar20;
          local_5e0 = (void *)0x0;
          local_5d8 = 0;
          local_5d0.Data = (FScriptContainerElement *)0x0;
          local_5c8 = 0;
          local_5c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
          _UNK_150631d94 = SUB84(uVar12,4);
          local_5c0.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_5c0.MaxBits = _UNK_150631d94;
          uStack_5a0 = uVar20;
          local_590 = (void *)0x0;
          local_588 = 0;
          local_580._0_1_ = true;
          local_580._1_1_ = true;
          local_578.Data = (FScriptContainerElement *)0x0;
          local_570._0_4_ = 0;
          local_570._4_4_ = 0;
          local_568.Data = (FScriptContainerElement *)0x0;
          local_560._0_4_ = 0;
          local_560._4_4_ = 0;
          local_bf8._0_8_ = 0;
          local_bf8._40_8_ = 0;
          local_bc8._0_8_ = 0;
          local_bc8._40_8_ = 0;
          ___xmm_00000000ffffffff0000008000000000 = uVar30;
          FDynamicMeshEditor::AppendMesh
                    (&local_1048,pFVar41,(FMeshIndexMappings *)local_818,&local_bc8,&local_bf8,false
                    );
          DestructItems<UE::Geometry::TIndexMap<int>,int>
                    ((TIndexMap<int> *)local_568.Data,(int)local_560);
          if ((TIndexMap<int> *)local_568.Data != (TIndexMap<int> *)0x0) {
            FMemory::Free(local_568.Data);
          }
          DestructItems<UE::Geometry::TIndexMap<int>,int>
                    ((TIndexMap<int> *)local_578.Data,(int)local_570);
          if ((TIndexMap<int> *)local_578.Data != (TIndexMap<int> *)0x0) {
            FMemory::Free(local_578.Data);
          }
          local_588 = 0;
          if (local_590 != (void *)0x0) {
            FMemory::Free(local_590);
          }
          uVar18 = local_5c8 >> 0x20;
          local_5c8 = local_5c8 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_5d0,0,(int *)((longlong)&local_5c8 + 4));
          }
          iVar35 = local_5c0.MaxBits;
          uStack_5a0 = 0xffffffff;
          local_5c0._24_8_ = (ulonglong)(uint)local_5c0.MaxBits << 0x20;
          if (0x80 < (uint)iVar35) {
            local_5c0.NumBits = 0;
            local_5c0.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_5c0,0);
          }
          if (local_5c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_5c0.AllocatorInstance.SecondaryData);
          }
          if (local_5d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5d0.Data);
          }
          local_5d8 = 0;
          if (local_5e0 != (void *)0x0) {
            FMemory::Free(local_5e0);
          }
          uVar18 = local_618 >> 0x20;
          local_618 = local_618 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_620,0,(int *)((longlong)&local_618 + 4));
          }
          iVar35 = local_610.MaxBits;
          uStack_5f0 = 0xffffffff;
          local_610._24_8_ = (ulonglong)(uint)local_610.MaxBits << 0x20;
          if (0x80 < (uint)iVar35) {
            local_610.NumBits = 0;
            local_610.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_610,0);
          }
          if (local_610.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_610.AllocatorInstance.SecondaryData);
          }
          if (local_620.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_620.Data);
          }
          local_630 = 0;
          if (local_638 != (void *)0x0) {
            FMemory::Free(local_638);
          }
          uVar18 = local_670 >> 0x20;
          local_670 = local_670 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_678,0,(int *)((longlong)&local_670 + 4));
          }
          local_648 = 0xffffffff;
          local_644 = 0;
          local_668.NumBits = 0;
          if (0x80 < (uint)local_668.MaxBits) {
            local_668.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_668,0);
          }
          if (local_668.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_668.AllocatorInstance.SecondaryData);
          }
          if (local_678.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_678.Data);
          }
          local_680 = 0;
          if (local_688 != (void *)0x0) {
            FMemory::Free(local_688);
          }
          uVar18 = local_6c0 >> 0x20;
          local_6c0 = local_6c0 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_6c8,0,(int *)((longlong)&local_6c0 + 4));
          }
          local_698 = 0xffffffff;
          local_694 = 0;
          local_6b8.NumBits = 0;
          if (0x80 < (uint)local_6b8.MaxBits) {
            local_6b8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_6b8,0);
          }
          if (local_6b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_6b8.AllocatorInstance.SecondaryData);
          }
          if (local_6c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6c8.Data);
          }
          local_6d8 = 0;
          if (local_6e0 != (void *)0x0) {
            FMemory::Free(local_6e0);
          }
          uVar18 = local_718 >> 0x20;
          local_718 = local_718 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_720,0,(int *)((longlong)&local_718 + 4));
          }
          iVar35 = local_710.MaxBits;
          uStack_6f0 = 0xffffffff;
          local_710._24_8_ = (ulonglong)(uint)local_710.MaxBits << 0x20;
          if (0x80 < (uint)iVar35) {
            local_710.NumBits = 0;
            local_710.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_710,0);
          }
          if (local_710.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_710.AllocatorInstance.SecondaryData);
          }
          if (local_720.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_720.Data);
          }
          local_728 = 0;
          if (local_730 != (void *)0x0) {
            FMemory::Free(local_730);
          }
          uVar18 = local_768 >> 0x20;
          local_768 = local_768 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_770,0,(int *)((longlong)&local_768 + 4));
          }
          iVar35 = local_760.MaxBits;
          uStack_740 = 0xffffffff;
          local_760._24_8_ = (ulonglong)(uint)local_760.MaxBits << 0x20;
          if (0x80 < (uint)iVar35) {
            local_760.NumBits = 0;
            local_760.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_760,0);
          }
          if (local_760.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_760.AllocatorInstance.SecondaryData);
          }
          if (local_770.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_770.Data);
          }
          local_780 = 0;
          if (local_788 != (void *)0x0) {
            FMemory::Free(local_788);
          }
          uVar18 = local_7c0 >> 0x20;
          local_7c0 = local_7c0 & 0xffffffff00000000;
          if ((int)uVar18 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_7c8,0,(int *)((longlong)&local_7c0 + 4));
          }
          local_798 = 0xffffffff;
          local_794 = 0;
          local_7b8.NumBits = 0;
          if (0x80 < (uint)local_7b8.MaxBits) {
            local_7b8.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_7b8,0);
          }
          if (local_7b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_7b8.AllocatorInstance.SecondaryData);
          }
          if (local_7c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7c8.Data);
          }
          local_7d0 = 0;
          if (local_7d8 != (void *)0x0) {
            FMemory::Free(local_7d8);
          }
          iVar35 = SUB84(local_818._8_8_,4);
          local_818._8_8_ = local_818._8_8_ & 0xffffffff00000000;
          if (iVar35 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)local_818,0,(int *)(local_818 + 0xc));
          }
          local_7e8 = 0xffffffff;
          local_7e4 = 0;
          local_7f0 = 0;
          if (0x80 < local_7ec) {
            local_7ec = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_818 + 0x10),0);
          }
          if (local_7f8 != (void *)0x0) {
            FMemory::Free(local_7f8);
          }
          if ((FScriptContainerElement *)local_818._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_818._0_8_);
          }
        }
        pFVar41 = (FDynamicMesh3 *)(ulonglong)(uVar36 + 1);
        pFVar26 = pFVar26 + 1;
      } while ((int)(uVar36 + 1) < (this->Convexes).ArrayNum);
    }
    iVar35 = (int)local_1200;
    lVar44 = (longlong)(int)local_1200;
    if ((int)local_1200 < 2) {
      bVar22 = false;
    }
    else {
      local_11a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_11a8.ArrayNum = 0;
      local_11a8.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_11a8,(int)local_1200,Default);
      if ((local_11a8.ArrayNum < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      uVar37 = 1;
      *(undefined4 *)local_11a8.AllocatorInstance.Data = 0;
      if (((int)local_1200 < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar5 = (code *)swi(3);
        uVar23 = (*pcVar5)();
        return (bool)uVar23;
      }
      iVar45 = *(int *)local_1208.Data;
      if (1 < lVar44) {
        lVar42 = 1;
        do {
          uVar36 = 0;
          if ((int)uVar37 < local_11a8.ArrayNum) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            uVar23 = (*pcVar5)();
            return (bool)uVar23;
          }
          lVar1 = lVar42 * 4;
          *(int *)(local_11a8.AllocatorInstance.Data + lVar1) = iVar45;
          uVar36 = 0;
          if ((int)uVar37 < (int)local_1200) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar5 = (code *)swi(3);
            uVar23 = (*pcVar5)();
            return (bool)uVar23;
          }
          uVar37 = uVar37 + 1;
          lVar42 = lVar42 + 1;
          iVar45 = iVar45 + *(int *)(local_1208.Data + lVar1);
          this = local_1198;
        } while (lVar42 < lVar44);
      }
      dVar9 = __real_3fb999999999999a;
      local_fc0 = &local_11a8;
      pFVar43 = (FSphereCovering *)0x0;
      local_4d8._0_8_ = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
      local_4d8._8_8_ = _UNK_150afcb08;
      local_fb8 = &local_11d0;
      local_f90 = &local_fc0;
      local_f98 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_8>,UE::Math::TVector<double>,int,int>
                  ::Call;
      local_1028 = &local_1208;
      local_f10 = &local_1028;
      local_4d8._32_8_ = ___xmm_4065400000000000403e000000000000;
      local_4d8._40_8_ = _UNK_150b37cc8;
      local_f18 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_7>,int,int>
                  ::Call;
      local_1020 = &local_11e0;
      local_4d8._96_8_ = 0.0;
      local_4d8._104_8_ = 0.0;
      local_f70 = &local_1020;
      local_4d8._128_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_4d8._136_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_4d8._16_8_ = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
      local_4d8._24_8_ = _UNK_150b37cb8;
      local_f78 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l2::<lambda_6>,double,int>
                  ::Call;
      local_4d8._144_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_4d8._112_8_ = ___xmm_3ff00000000000000000000000000000;
      local_4d8._120_8_ = _UNK_15061cbc8;
      local_fa8 = 0;
      local_4d8._168_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uStack_fa0 = 0;
      local_e88._8_8_ = (ulonglong)uStack_f9c << 0x20;
      local_4d8._48_8_ = __real_3fb999999999999a;
      local_4d8._64_8_ = 0.0;
      local_4d8._56_4_ = 0x32;
      local_4d8[0x3c] = true;
      local_4d8[0x3d] = true;
      local_4d8._72_4_ = -1;
      local_4d8._80_8_ = (FScriptContainerElement *)0x0;
      local_4d8._88_4_ = 0;
      local_4d8._92_4_ = 0;
      local_4d8._152_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_4d8._160_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_4d8._176_8_ = (FScriptContainerElement *)0x0;
      local_4d8._184_4_ = 0;
      local_4d8._188_4_ = 0;
      local_418._0_8_ = 0;
      local_418._8_8_ = 0;
      local_418._32_8_ = 0;
      local_418._40_4_ = 0;
      local_418._44_4_ = 0x80;
      local_418._48_4_ = 0xffffffff;
      local_418._52_4_ = 0;
      local_3d8 = (void *)0x0;
      local_3d0 = 0;
      local_3c8.Data = (FScriptContainerElement *)0x0;
      local_3c0._0_4_ = 0;
      local_3c0._4_4_ = 0;
      local_3b8.Data = (FScriptContainerElement *)0x0;
      local_3b0._0_4_ = 0;
      local_3b0._4_4_ = 0;
      local_e88.DataPtr = (TTuple<int,int> *)0x0;
      FConvexDecomposition3::InitializeFromHulls
                ((FConvexDecomposition3 *)local_4d8,local_11a8.ArrayNum,
                 (TFunctionRef<double___cdecl(int)> *)&local_f78,
                 (TFunctionRef<int___cdecl(int)> *)&local_f18,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(int,int)> *)&local_f98,&local_e88);
      pFVar4 = local_1188;
      local_1148.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1148.Position.ArrayNum = 0;
      dVar49 = 0.0;
      local_1148.Position.ArrayMax = 0;
      local_1148.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1148.Radius.ArrayNum = 0;
      local_1148.Radius.ArrayMax = 0;
      if (local_1188->bMergeShapesProtectNegativeSpace != false) {
        FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings(&local_2a8);
        local_2a8.ReduceRadiusMargin = pFVar4->NegativeSpaceTolerance;
        local_2a8.bOnlyConnectedToHull = pFVar4->bIgnoreInternalNegativeSpace;
        dVar49 = local_2a8.ReduceRadiusMargin * dVar8;
        local_2a8.SampleMethod = VoxelSearch;
        local_2a8.bRequireSearchSampleCoverage = true;
        local_2a8.TargetNumSamples = 1;
        local_2a8.MinRadius = pFVar4->NegativeSpaceMinRadius * dVar8 + dVar49;
        if (dVar49 <= 0.0) {
          dVar49 = 0.0;
        }
        if (local_2a8.MinRadius <= dVar13) {
          local_2a8.MinRadius = dVar13;
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                  (&local_368,local_11b8,true);
        local_ff8.Tree = &local_368;
        local_ff8.FWNBeta = __real_4000000000000000;
        local_ff8.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_ff8.FastWindingCache.ArrayNum = 0;
        local_ff8.FastWindingCache.ArrayMax = 0;
        local_ff8.FastWindingCacheOffset = 0;
        local_ff8.FastWindingCacheMeshChangeStamp = 0;
        local_ff8.FWNApproxOrder = 2;
        if ((local_368.RootIndex < 0) ||
           (uVar31 = FDynamicMesh3::GetChangeStamp(local_368.Mesh),
           local_368.MeshChangeStamp != uVar31)) {
          pTVar21 = local_ff8.Tree;
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_ff8.Tree,false);
          uVar31 = FDynamicMesh3::GetChangeStamp(pTVar21->Mesh);
          pTVar21->MeshChangeStamp = uVar31;
        }
        TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_ff8);
        local_ff8.FastWindingCacheMeshChangeStamp = (local_ff8.Tree)->MeshChangeStamp;
        FSphereCovering::AddNegativeSpace(&local_1148,&local_ff8,&local_2a8,false);
        if (local_ff8.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ff8.FastWindingCache.AllocatorInstance.Data);
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                  (&local_368);
        FNegativeSpaceSampleSettings::~FNegativeSpaceSampleSettings(&local_2a8);
      }
      pFVar38 = &local_1148;
      if (local_1148.Position.ArrayNum < 1) {
        pFVar38 = pFVar43;
      }
      FConvexDecomposition3::InitializeProximityFromDecompositionBoundingBoxOverlaps
                ((FConvexDecomposition3 *)local_4d8,__real_3fd0000000000000,dVar9,dVar49);
      iVar45 = local_11f4 - (this->LevelSets).ArrayNum;
      if (iVar45 < 0) {
        iVar45 = 0;
      }
      local_4d8._72_4_ = iVar45 * iVar45 + 1000;
      FConvexDecomposition3::MergeBest
                ((FConvexDecomposition3 *)local_4d8,iVar45,0.0,0.0,true,false,iVar45,pFVar38,
                 (TTransform<double> *)0x0);
      pFVar19 = local_1198;
      if (local_4d8._88_4_ == iVar35) {
        bVar22 = false;
      }
      else {
        local_1188 = (FMergeShapesSettings *)(this->Spheres).AllocatorInstance.Data;
        (this->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1210 = (this->Spheres).ArrayNum;
        (this->Spheres).ArrayNum = 0;
        (this->Spheres).ArrayMax = 0;
        local_1150 = (this->Boxes).AllocatorInstance.Data;
        (this->Boxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1178 = (this->Boxes).ArrayNum;
        (this->Boxes).ArrayNum = 0;
        (this->Boxes).ArrayMax = 0;
        local_1158 = (local_1198->Capsules).AllocatorInstance.Data;
        (local_1198->Capsules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar35 = (local_1198->Capsules).ArrayNum;
        (pFVar19->Capsules).ArrayNum = 0;
        (pFVar19->Capsules).ArrayMax = 0;
        local_1198 = (FSimpleShapeSet3d *)CONCAT44(local_1198._4_4_,iVar35);
        local_1160 = (pFVar19->Convexes).AllocatorInstance.Data;
        (pFVar19->Convexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_11f4 = (pFVar19->Convexes).ArrayNum;
        (pFVar19->Convexes).ArrayNum = 0;
        (pFVar19->Convexes).ArrayMax = 0;
        if (0 < (int)local_4d8._88_4_) {
          local_1168 = 0;
          do {
            lVar44 = local_1168;
            uVar36 = (uint)pFVar43;
            uVar37 = 0;
            if ((int)uVar36 < (int)local_4d8._88_4_) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar5 = (code *)swi(3);
              uVar23 = (*pcVar5)();
              return (bool)uVar23;
            }
            uVar37 = *(uint *)(*(longlong *)(local_4d8._80_8_ + lVar44) + 0x250);
            lVar44 = (longlong)(int)uVar37;
            if ((int)uVar37 < 0) {
LAB_14c90bb4c:
              pFVar26 = FConvexDecomposition3::GetHullMesh
                                  ((FConvexDecomposition3 *)local_4d8,&local_a48,uVar36);
              iVar35 = (pFVar19->Convexes).ArrayNum;
              if (iVar35 == (pFVar19->Convexes).ArrayMax) {
                iVar35 = Core::Private::
                         ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,8,&(pFVar19->Convexes).AllocatorInstance,
                                    &(pFVar19->Convexes).ArrayMax);
              }
              (pFVar19->Convexes).ArrayNum = iVar35 + 1;
              FDynamicMesh3::FDynamicMesh3
                        ((FDynamicMesh3 *)
                         ((pFVar19->Convexes).AllocatorInstance.Data + (longlong)iVar35 * 0x230),
                         pFVar26);
              FDynamicMesh3::~FDynamicMesh3(&local_a48);
            }
            else {
              uVar24 = 0;
              if ((int)uVar37 < (int)local_11e8) {
                uVar24 = ~uVar37 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar5 = (code *)swi(3);
                uVar23 = (*pcVar5)();
                return (bool)uVar23;
              }
              iVar35 = *(int *)(local_11f0.Data + lVar44 * 8 + 4);
              if (iVar35 == 2) {
                uVar37 = *(uint *)(local_11f0.Data + lVar44 * 8);
                uVar24 = 0;
                if ((int)uVar37 < (int)local_1210) {
                  uVar24 = ~uVar37 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                pFVar4 = (FMergeShapesSettings *)(pFVar19->Spheres).AllocatorInstance.Data;
                pFVar40 = local_1188 + (int)uVar37;
                if (((pFVar4 <= pFVar40) && (pFVar40 < pFVar4 + (pFVar19->Spheres).ArrayMax)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                iVar35 = (pFVar19->Spheres).ArrayNum;
                if (iVar35 == (pFVar19->Spheres).ArrayMax) {
                  iVar35 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)pFVar19,
                                      &(pFVar19->Spheres).ArrayMax);
                }
                (pFVar19->Spheres).ArrayNum = iVar35 + 1;
                dVar13 = pFVar40->NegativeSpaceTolerance;
                pFVar39 = (pFVar19->Spheres).AllocatorInstance.Data;
                pFVar3 = pFVar39 + (longlong)iVar35 * 0x20;
                *(undefined8 *)pFVar3 = *(undefined8 *)pFVar40;
                *(double *)(pFVar3 + 8) = dVar13;
                uVar12 = *(undefined8 *)&pFVar40->bIgnoreInternalNegativeSpace;
                pFVar39 = pFVar39 + (longlong)iVar35 * 0x20 + 0x10;
                *(double *)pFVar39 = pFVar40->NegativeSpaceMinRadius;
                *(undefined8 *)(pFVar39 + 8) = uVar12;
              }
              else if (iVar35 == 4) {
                uVar37 = *(uint *)(local_11f0.Data + lVar44 * 8);
                uVar24 = 0;
                if ((int)uVar37 < local_1178) {
                  uVar24 = ~uVar37 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                pFVar3 = (this->Boxes).AllocatorInstance.Data;
                pFVar39 = local_1150 + (longlong)(int)uVar37 * 0x50;
                if (((pFVar3 <= pFVar39) &&
                    (pFVar39 < pFVar3 + (longlong)(this->Boxes).ArrayMax * 0x50)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                iVar35 = (this->Boxes).ArrayNum;
                if (iVar35 == (this->Boxes).ArrayMax) {
                  iVar35 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x850,&(this->Boxes).AllocatorInstance,&(this->Boxes).ArrayMax
                                     );
                }
                lVar44 = (longlong)iVar35;
                (this->Boxes).ArrayNum = iVar35 + 1;
                uVar12 = *(undefined8 *)(pFVar39 + 8);
                pFVar3 = (this->Boxes).AllocatorInstance.Data;
                *(undefined8 *)(pFVar3 + lVar44 * 0x50) = *(undefined8 *)pFVar39;
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x18);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x10) = *(undefined8 *)(pFVar39 + 0x10);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x10 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x28);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x20) = *(undefined8 *)(pFVar39 + 0x20);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x20 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x38);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x30) = *(undefined8 *)(pFVar39 + 0x30);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x30 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x48);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x40) = *(undefined8 *)(pFVar39 + 0x40);
                *(undefined8 *)(pFVar3 + lVar44 * 0x50 + 0x40 + 8) = uVar12;
              }
              else if (iVar35 == 8) {
                uVar37 = *(uint *)(local_11f0.Data + lVar44 * 8);
                uVar24 = 0;
                if ((int)uVar37 < (int)local_1198) {
                  uVar24 = ~uVar37 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                pFVar3 = (pFVar19->Capsules).AllocatorInstance.Data;
                pFVar39 = local_1158 + (longlong)(int)uVar37 * 0x40;
                if (((pFVar3 <= pFVar39) &&
                    (pFVar39 < pFVar3 + (longlong)(pFVar19->Capsules).ArrayMax * 0x40)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                iVar35 = (pFVar19->Capsules).ArrayNum;
                if (iVar35 == (pFVar19->Capsules).ArrayMax) {
                  iVar35 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x840,&(pFVar19->Capsules).AllocatorInstance,
                                      &(pFVar19->Capsules).ArrayMax);
                }
                (pFVar19->Capsules).ArrayNum = iVar35 + 1;
                uVar12 = *(undefined8 *)(pFVar39 + 8);
                pFVar3 = (pFVar19->Capsules).AllocatorInstance.Data;
                lVar44 = (longlong)iVar35 * 0x40;
                *(undefined8 *)(pFVar3 + lVar44) = *(undefined8 *)pFVar39;
                *(undefined8 *)(pFVar3 + lVar44 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x18);
                *(undefined8 *)(pFVar3 + lVar44 + 0x10) = *(undefined8 *)(pFVar39 + 0x10);
                *(undefined8 *)(pFVar3 + lVar44 + 0x10 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x28);
                *(undefined8 *)(pFVar3 + lVar44 + 0x20) = *(undefined8 *)(pFVar39 + 0x20);
                *(undefined8 *)(pFVar3 + lVar44 + 0x20 + 8) = uVar12;
                uVar12 = *(undefined8 *)(pFVar39 + 0x38);
                *(undefined8 *)(pFVar3 + lVar44 + 0x30) = *(undefined8 *)(pFVar39 + 0x30);
                *(undefined8 *)(pFVar3 + lVar44 + 0x30 + 8) = uVar12;
              }
              else {
                if (iVar35 != 0x10) {
                  local_1218[0] = 0;
                  `UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l46::<lambda_9>::operator()
                            (local_1218);
                  goto LAB_14c90bb4c;
                }
                uVar37 = *(uint *)(local_11f0.Data + lVar44 * 8);
                uVar24 = 0;
                if ((int)uVar37 < local_11f4) {
                  uVar24 = ~uVar37 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                pFVar26 = (FDynamicMesh3 *)(pFVar19->Convexes).AllocatorInstance.Data;
                pFVar41 = (FDynamicMesh3 *)(local_1160 + (longlong)(int)uVar37 * 0x230);
                if (((pFVar26 <= pFVar41) && (pFVar41 < pFVar26 + (pFVar19->Convexes).ArrayMax)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  uVar23 = (*pcVar5)();
                  return (bool)uVar23;
                }
                iVar35 = (pFVar19->Convexes).ArrayNum;
                if (iVar35 == (pFVar19->Convexes).ArrayMax) {
                  iVar35 = Core::Private::
                           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x230,8,&(pFVar19->Convexes).AllocatorInstance,
                                      &(pFVar19->Convexes).ArrayMax);
                }
                (pFVar19->Convexes).ArrayNum = iVar35 + 1;
                FDynamicMesh3::FDynamicMesh3
                          ((FDynamicMesh3 *)
                           ((pFVar19->Convexes).AllocatorInstance.Data + (longlong)iVar35 * 0x230),
                           pFVar41);
              }
            }
            pFVar43 = (FSphereCovering *)(ulonglong)(uVar36 + 1);
            local_1168 = local_1168 + 8;
          } while ((int)(uVar36 + 1) < (int)local_4d8._88_4_);
        }
        pFVar3 = local_1160;
        bVar22 = true;
        DestructItems<UE::Geometry::FConvexShape3d,int>((FConvexShape3d *)local_1160,local_11f4);
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        if (local_1158 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1158);
        }
        if (local_1150 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1150);
        }
        if (local_1188 != (FMergeShapesSettings *)0x0) {
          FMemory::Free(local_1188);
        }
      }
      if (local_1148.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1148.Radius.AllocatorInstance.Data);
      }
      if (local_1148.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1148.Position.AllocatorInstance.Data);
      }
      if (local_3b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data);
      }
      if (local_3c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data);
      }
      local_3d0 = 0;
      if (local_3d8 != (void *)0x0) {
        FMemory::Free(local_3d8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_418);
      if ((FScriptContainerElement *)local_4d8._176_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4d8._176_8_);
      }
      TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
      ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                ((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                  *)(local_4d8 + 0x50));
      if (local_11a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_11a8.AllocatorInstance.Data);
      }
    }
    if (local_11b8 != (FDynamicMesh3 *)0x0) {
      (**(code **)local_11b8->_padding_)(local_11b8,1);
    }
    if (local_11f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11f0.Data);
    }
    if (local_11e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11e0.Data);
    }
    if (local_1208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1208.Data);
    }
    if (local_11d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11d0.Data);
    }
  }
  else {
    bVar22 = false;
  }
  return bVar22;
}

// RemoveContainedGeometry @ 14c913270

void __thiscall UE::Geometry::FSimpleShapeSet3d::RemoveContainedGeometry(FSimpleShapeSet3d *this)

{
  TArray<UE::Geometry::FBoxShape3d,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FCapsuleShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FConvexShape3d,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FLevelSetShape3d *pFVar12;
  FDynamicMesh3 *pFVar13;
  FScriptContainerElement *pFVar14;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FSimpleShapeElementKey,TSizedDefaultAllocator<32>_> local_a8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_98;
  FSimpleShapeSet3d local_88;
  
  uVar16 = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  GetElementsList(this,&local_a8);
  AlgoImpl::
  IntroSortInternal<FSimpleShapeElementKey,int,FIdentityFunctor,TDereferenceWrapper<FSimpleShapeElementKey,_GetElementsSortedByDecreasing_::__l2::<lambda_1>_>_>
            ((FSimpleShapeElementKey *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum,
             local_res8[0],(<lambda_1> *)local_res10);
  iVar4 = local_a8.ArrayNum;
  lVar10 = (longlong)local_a8.ArrayNum;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_res8[0] = (FIdentityFunctor)0x0;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_98,(bool *)local_res8,local_a8.ArrayNum);
  if (0 < iVar4) {
    lVar18 = 0;
    lVar17 = 0;
    do {
      uVar9 = ~uVar16 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar16 < local_98.ArrayNum) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_98.AllocatorInstance.Data[lVar18] == (FScriptContainerElement)0x0) {
        uVar8 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar8 = uVar9;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar4 = *(int *)(local_a8.AllocatorInstance.Data + lVar17);
        uVar8 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)(local_a8.AllocatorInstance.Data + lVar17 + 4);
        lVar11 = (longlong)(int)uVar8;
        if (iVar4 == 2) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Spheres).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          FilterContained(this,(FSphereShape3d *)
                               ((this->Spheres).AllocatorInstance.Data + lVar11 * 0x20),&local_a8,
                          uVar16,&local_98);
        }
        else if (iVar4 == 8) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Capsules).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          FilterContained(this,(FCapsuleShape3d *)
                               ((this->Capsules).AllocatorInstance.Data + lVar11 * 0x40),&local_a8,
                          uVar16,&local_98);
        }
        else if (iVar4 == 4) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Boxes).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          FilterContained(this,(FBoxShape3d *)((this->Boxes).AllocatorInstance.Data + lVar11 * 0x50)
                          ,&local_a8,uVar16,&local_98);
        }
        else if (iVar4 == 0x10) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Convexes).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          FilterContained(this,(FConvexShape3d *)
                               ((this->Convexes).AllocatorInstance.Data + lVar11 * 0x230),&local_a8,
                          uVar16,&local_98);
        }
        else if (iVar4 == 0x20) {
          uVar9 = 0;
          if ((int)uVar8 < (this->LevelSets).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          FilterContained(this,(FLevelSetShape3d *)
                               ((this->LevelSets).AllocatorInstance.Data + lVar11 * 0x90),&local_a8,
                          0,&local_98);
        }
        else {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4036236765281910436>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\ShapeApproximation\\SimpleShapeSet3.cpp"
                             ,0x15c,"false");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar18 < lVar10);
  }
  uVar16 = 0;
  local_88.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Spheres.ArrayNum = 0;
  local_88.Spheres.ArrayMax = 0;
  local_88.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Boxes.ArrayNum = 0;
  local_88.Boxes.ArrayMax = 0;
  local_88.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Capsules.ArrayNum = 0;
  local_88.Capsules.ArrayMax = 0;
  local_88.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Convexes.ArrayNum = 0;
  local_88.Convexes.ArrayMax = 0;
  local_88.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.LevelSets.ArrayNum = 0;
  local_88.LevelSets.ArrayMax = 0;
  if (0 < lVar10) {
    lVar18 = 0;
    lVar17 = 0;
    do {
      uVar9 = ~uVar16 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar16 < local_98.ArrayNum) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_98.AllocatorInstance.Data[lVar18] == (FScriptContainerElement)0x0) {
        uVar8 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar4 = *(int *)(local_a8.AllocatorInstance.Data + lVar17);
        uVar8 = 0;
        if ((int)uVar16 < local_a8.ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)(local_a8.AllocatorInstance.Data + lVar17 + 4);
        lVar11 = (longlong)(int)uVar8;
        if (iVar4 == 2) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Spheres).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this->Spheres).AllocatorInstance.Data + lVar11 * 0x20;
          if (((local_88.Spheres.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_88.Spheres.AllocatorInstance.Data +
                         (longlong)local_88.Spheres.ArrayMax * 0x20)) &&
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
          if (local_88.Spheres.ArrayNum == local_88.Spheres.ArrayMax) {
            local_88.Spheres.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)&local_88,&local_88.Spheres.ArrayMax);
          }
          lVar11 = (longlong)local_88.Spheres.ArrayNum;
          local_88.Spheres.ArrayNum = local_88.Spheres.ArrayNum + 1;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          *(undefined8 *)(local_88.Spheres.AllocatorInstance.Data + lVar11 * 0x20) =
               *(undefined8 *)pFVar14;
          *(undefined8 *)(local_88.Spheres.AllocatorInstance.Data + lVar11 * 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x18);
          *(undefined8 *)(local_88.Spheres.AllocatorInstance.Data + lVar11 * 0x20 + 0x10) =
               *(undefined8 *)(pFVar14 + 0x10);
          *(undefined8 *)(local_88.Spheres.AllocatorInstance.Data + lVar11 * 0x20 + 0x10 + 8) =
               uVar6;
        }
        else if (iVar4 == 4) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Boxes).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this->Boxes).AllocatorInstance.Data + lVar11 * 0x50;
          if (((local_88.Boxes.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_88.Boxes.AllocatorInstance.Data +
                         (longlong)local_88.Boxes.ArrayMax * 0x50)) &&
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
          if (local_88.Boxes.ArrayNum == local_88.Boxes.ArrayMax) {
            local_88.Boxes.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_88.Boxes.AllocatorInstance,&local_88.Boxes.ArrayMax);
          }
          lVar11 = (longlong)local_88.Boxes.ArrayNum;
          local_88.Boxes.ArrayNum = local_88.Boxes.ArrayNum + 1;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50) =
               *(undefined8 *)pFVar14;
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x18);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x10) =
               *(undefined8 *)(pFVar14 + 0x10);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x10 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x28);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x20) =
               *(undefined8 *)(pFVar14 + 0x20);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x38);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x30) =
               *(undefined8 *)(pFVar14 + 0x30);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x30 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x48);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x40) =
               *(undefined8 *)(pFVar14 + 0x40);
          *(undefined8 *)(local_88.Boxes.AllocatorInstance.Data + lVar11 * 0x50 + 0x40 + 8) = uVar6;
        }
        else if (iVar4 == 8) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Capsules).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar14 = (this->Capsules).AllocatorInstance.Data + lVar11 * 0x40;
          if (((local_88.Capsules.AllocatorInstance.Data <= pFVar14) &&
              (pFVar14 < local_88.Capsules.AllocatorInstance.Data +
                         (longlong)local_88.Capsules.ArrayMax * 0x40)) &&
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
          if (local_88.Capsules.ArrayNum == local_88.Capsules.ArrayMax) {
            local_88.Capsules.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_88.Capsules.AllocatorInstance,&local_88.Capsules.ArrayMax);
          }
          lVar11 = (longlong)local_88.Capsules.ArrayNum * 0x40;
          local_88.Capsules.ArrayNum = local_88.Capsules.ArrayNum + 1;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11) =
               *(undefined8 *)pFVar14;
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x18);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 0x10) =
               *(undefined8 *)(pFVar14 + 0x10);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 0x10 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x28);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 0x20) =
               *(undefined8 *)(pFVar14 + 0x20);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 0x20 + 8) = uVar6;
          uVar6 = *(undefined8 *)(pFVar14 + 0x38);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 0x30) =
               *(undefined8 *)(pFVar14 + 0x30);
          *(undefined8 *)(local_88.Capsules.AllocatorInstance.Data + lVar11 + 0x30 + 8) = uVar6;
        }
        else if (iVar4 == 0x10) {
          uVar9 = 0;
          if ((int)uVar8 < (this->Convexes).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar13 = (FDynamicMesh3 *)((this->Convexes).AllocatorInstance.Data + lVar11 * 0x230);
          if (((local_88.Convexes.AllocatorInstance.Data <= pFVar13) &&
              (pFVar13 < (FDynamicMesh3 *)
                         (local_88.Convexes.AllocatorInstance.Data +
                         (longlong)local_88.Convexes.ArrayMax * 0x230))) &&
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
          if (local_88.Convexes.ArrayNum == local_88.Convexes.ArrayMax) {
            local_88.Convexes.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x230,8,&local_88.Convexes.AllocatorInstance,&local_88.Convexes.ArrayMax
                           );
          }
          lVar11 = (longlong)local_88.Convexes.ArrayNum;
          local_88.Convexes.ArrayNum = local_88.Convexes.ArrayNum + 1;
          FDynamicMesh3::FDynamicMesh3
                    ((FDynamicMesh3 *)(local_88.Convexes.AllocatorInstance.Data + lVar11 * 0x230),
                     pFVar13);
        }
        else if (iVar4 == 0x20) {
          uVar9 = 0;
          if ((int)uVar8 < (this->LevelSets).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          pFVar12 = (FLevelSetShape3d *)((this->LevelSets).AllocatorInstance.Data + lVar11 * 0x90);
          if (((local_88.LevelSets.AllocatorInstance.Data <= pFVar12) &&
              (pFVar12 < (FLevelSetShape3d *)
                         (local_88.LevelSets.AllocatorInstance.Data +
                         (longlong)local_88.LevelSets.ArrayMax * 0x90))) &&
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
          if (local_88.LevelSets.ArrayNum == local_88.LevelSets.ArrayMax) {
            local_88.LevelSets.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1090,&local_88.LevelSets.AllocatorInstance,
                            &local_88.LevelSets.ArrayMax);
          }
          lVar11 = (longlong)local_88.LevelSets.ArrayNum;
          local_88.LevelSets.ArrayNum = local_88.LevelSets.ArrayNum + 1;
          FLevelSetShape3d::FLevelSetShape3d
                    ((FLevelSetShape3d *)(local_88.LevelSets.AllocatorInstance.Data + lVar11 * 0x90)
                     ,pFVar12);
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar18 < lVar10);
  }
  if (this != &local_88) {
    pFVar14 = (this->Spheres).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (this->Spheres).AllocatorInstance.Data = local_88.Spheres.AllocatorInstance.Data;
    (this->Spheres).ArrayNum = local_88.Spheres.ArrayNum;
    (this->Spheres).ArrayMax = local_88.Spheres.ArrayMax;
    local_88.Spheres.ArrayNum = 0;
    local_88.Spheres.ArrayMax = 0;
    local_88.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar1 = &this->Boxes;
  if (pTVar1 != &local_88.Boxes) {
    pFVar14 = (pTVar1->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Boxes.AllocatorInstance.Data;
    (this->Boxes).ArrayNum = local_88.Boxes.ArrayNum;
    (this->Boxes).ArrayMax = local_88.Boxes.ArrayMax;
    local_88.Boxes.ArrayNum = 0;
    local_88.Boxes.ArrayMax = 0;
    local_88.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &this->Capsules;
  if (pTVar2 != &local_88.Capsules) {
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar2->AllocatorInstance).Data = local_88.Capsules.AllocatorInstance.Data;
    (this->Capsules).ArrayNum = local_88.Capsules.ArrayNum;
    (this->Capsules).ArrayMax = local_88.Capsules.ArrayMax;
    local_88.Capsules.ArrayNum = 0;
    local_88.Capsules.ArrayMax = 0;
    local_88.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar3 = &this->Convexes;
  if (pTVar3 != &local_88.Convexes) {
    DestructItems<UE::Geometry::FConvexShape3d,int>
              ((FConvexShape3d *)(pTVar3->AllocatorInstance).Data,(this->Convexes).ArrayNum);
    pFVar14 = (pTVar3->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar3->AllocatorInstance).Data = local_88.Convexes.AllocatorInstance.Data;
    (this->Convexes).ArrayNum = local_88.Convexes.ArrayNum;
    (this->Convexes).ArrayMax = local_88.Convexes.ArrayMax;
    local_88.Convexes.ArrayNum = 0;
    local_88.Convexes.ArrayMax = 0;
    local_88.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar15 = &this->LevelSets;
  if (pTVar15 != &local_88.LevelSets) {
    DestructItems<UE::Geometry::FLevelSetShape3d,int>
              ((FLevelSetShape3d *)(pTVar15->AllocatorInstance).Data,(this->LevelSets).ArrayNum);
    pFVar14 = (pTVar15->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar15->AllocatorInstance).Data = local_88.LevelSets.AllocatorInstance.Data;
    (this->LevelSets).ArrayNum = local_88.LevelSets.ArrayNum;
    (this->LevelSets).ArrayMax = local_88.LevelSets.ArrayMax;
    local_88.LevelSets.ArrayNum = 0;
    local_88.LevelSets.ArrayMax = 0;
    local_88.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<UE::Geometry::FLevelSetShape3d,int>
            ((FLevelSetShape3d *)local_88.LevelSets.AllocatorInstance.Data,
             local_88.LevelSets.ArrayNum);
  if ((FLevelSetShape3d *)local_88.LevelSets.AllocatorInstance.Data != (FLevelSetShape3d *)0x0) {
    FMemory::Free(local_88.LevelSets.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FConvexShape3d,int>
            ((FConvexShape3d *)local_88.Convexes.AllocatorInstance.Data,local_88.Convexes.ArrayNum);
  if ((FDynamicMesh3 *)local_88.Convexes.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_88.Convexes.AllocatorInstance.Data);
  }
  if (local_88.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Capsules.AllocatorInstance.Data);
  }
  if (local_88.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Boxes.AllocatorInstance.Data);
  }
  if (local_88.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Spheres.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if ((FSimpleShapeElementKey *)local_a8.AllocatorInstance.Data != (FSimpleShapeElementKey *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150574b30

bool __thiscall
`UE::Geometry::FSimpleShapeSet3d::MergeShapes'::__l46::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4036236765281909825>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4036236765281909825>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

