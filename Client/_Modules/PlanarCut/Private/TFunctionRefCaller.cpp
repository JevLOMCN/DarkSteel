// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 41

// Call @ 14c9b92b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FImageOccupancyMap::ClassifySamplesFromUVSpaceMesh<UE::PlanarCut::FGeomFlatUVMesh,`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FImageOccupancyMap::
  ClassifySamplesFromUVSpaceMesh<UE::PlanarCut::FGeomFlatUVMesh,`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9b92c0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::PlanarCut::BoxProjectUVs'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14c9b92e0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = (ulonglong)(*param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + uVar4 * 0x18);
  pdVar3 = *(double **)((longlong)param_1 + 8);
  dVar5 = pdVar1[1] - pdVar3[1];
  dVar6 = *pdVar1 - *pdVar3;
  dVar7 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) - pdVar3[2];
  return dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
}

// Call @ 14c9b9350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::AreTrianglesConnected
                    ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)param_1 + 8),
                     *param_2,*param_3);
  return bVar1;
}

// Call @ 14c9b9370

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()'::__l2::<lambda_1>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = *param_2;
  lVar7 = (longlong)(int)uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x40)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar8 = (double)(*pcVar4)();
      return dVar8;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x38);
  pdVar3 = *(double **)param_1;
  dVar8 = *(double *)(lVar2 + 8 + lVar7 * 0x18) - pdVar3[1];
  dVar10 = *(double *)(lVar2 + lVar7 * 0x18) - *pdVar3;
  dVar9 = *(double *)(lVar2 + 0x10 + lVar7 * 0x18) - pdVar3[2];
  return dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9;
}

// Call @ 14c9b9380

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::BoxProjectUVs'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,int>
::Call(void *param_1,FDynamicMesh3 *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::PlanarCut::BoxProjectUVs'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14c9b9390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c9b93a0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FindSmallBones'::__l2::<lambda_1>,bool,double,int>
::Call(void *param_1,double *param_2,int *param_3)

{
  return *param_2 < *(double *)param_1;
}

// Call @ 14c9b93c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,int>
::Call(void *param_1,FDynamicMesh3 *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14c9b93d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVPacker::StandardPack'::__l2::<lambda_1>,void,int,TArray<int,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  `UE::Geometry::FUVPacker::StandardPack'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 14c9b93e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14c9b9400

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14c9b9420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 TStack_b8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  TVector<double>_u_0 TStack_68;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TStack_b8._s_0.X = (param_2->Triangle1).V[0].field0_0x0._s_0.X;
  TStack_b8._s_0.Y = (param_2->Triangle1).V[0].field0_0x0._s_0.Y;
  TStack_b8._s_0.Z = (param_2->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_2->Triangle1).V[1].field0_0x0._s_0.X;
  dStack_98 = (param_2->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_2->Triangle1).V[1].field0_0x0._s_0.Z;
  dStack_88 = (param_2->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_2->Triangle1).V[2].field0_0x0._s_0.Y;
  dStack_78 = (param_2->Triangle1).V[2].field0_0x0._s_0.Z;
  TStack_68._s_0.X = (param_2->Triangle0).V[0].field0_0x0._s_0.X;
  TStack_68._s_0.Y = (param_2->Triangle0).V[0].field0_0x0._s_0.Y;
  TStack_68._s_0.Z = (param_2->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_2->Triangle0).V[1].field0_0x0._s_0.X;
  dStack_48 = (param_2->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_2->Triangle0).V[1].field0_0x0._s_0.Z;
  dStack_38 = (param_2->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_2->Triangle0).V[2].field0_0x0._s_0.Y;
  dStack_28 = (param_2->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&TStack_68._s_0,(TTriangle3<double> *)&TStack_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_2->Quantity = 0;
  param_2->Result = (bVar1 ^ 1) + Intersects;
  param_2->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// Call @ 14c9b9430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 TStack_b8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  TVector<double>_u_0 TStack_68;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TStack_b8._s_0.X = (param_2->Triangle1).V[0].field0_0x0._s_0.X;
  TStack_b8._s_0.Y = (param_2->Triangle1).V[0].field0_0x0._s_0.Y;
  TStack_b8._s_0.Z = (param_2->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_2->Triangle1).V[1].field0_0x0._s_0.X;
  dStack_98 = (param_2->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_2->Triangle1).V[1].field0_0x0._s_0.Z;
  dStack_88 = (param_2->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_2->Triangle1).V[2].field0_0x0._s_0.Y;
  dStack_78 = (param_2->Triangle1).V[2].field0_0x0._s_0.Z;
  TStack_68._s_0.X = (param_2->Triangle0).V[0].field0_0x0._s_0.X;
  TStack_68._s_0.Y = (param_2->Triangle0).V[0].field0_0x0._s_0.Y;
  TStack_68._s_0.Z = (param_2->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_2->Triangle0).V[1].field0_0x0._s_0.X;
  dStack_48 = (param_2->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_2->Triangle0).V[1].field0_0x0._s_0.Z;
  dStack_38 = (param_2->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_2->Triangle0).V[2].field0_0x0._s_0.Y;
  dStack_28 = (param_2->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&TStack_68._s_0,(TTriangle3<double> *)&TStack_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_2->Quantity = 0;
  param_2->Result = (bVar1 ^ 1) + Intersects;
  param_2->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// Call @ 14c9b9440

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14c9b94b0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14c9b9520

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l6::<lambda_1>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  double *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + uVar3 * 0x18);
  dVar6 = *(double *)(lVar2 + 0x10 + uVar3 * 0x18) - *(double *)((longlong)param_1 + 0x18);
  dVar4 = pdVar1[1] - *(double *)((longlong)param_1 + 0x10);
  dVar5 = *pdVar1 - *(double *)((longlong)param_1 + 8);
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}

// Call @ 14c9b9590

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14c9b95b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14c9b95d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::CutWithCellMeshes'::__l8::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::PlanarCut::FDynamicMeshCollection::CutWithCellMeshes'::__l8::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c9b95e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ConvertMeshDescriptionToCuttingDynamicMesh'::__l22::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `ConvertMeshDescriptionToCuttingDynamicMesh'::__l22::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9b95f0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::AugmentedDynamicMesh::AddCollisionSamplesPerComponent'::__l37::<lambda_1>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  double *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + uVar3 * 0x18);
  dVar4 = *(double *)((longlong)param_1 + 0x18) - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
  dVar5 = *(double *)((longlong)param_1 + 8) - *pdVar1;
  dVar6 = *(double *)((longlong)param_1 + 0x10) - pdVar1[1];
  return dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
}

// Call @ 14c9b9660

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::__l37::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = (param_3->field0_0x0)._s_0.Y - *(double *)((longlong)param_1 + 8);
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = *(double *)((longlong)param_1 + 0x10);
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_3->field0_0x0)._s_0.X - *(double *)param_1;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 - dVar2;
  return __return_storage_ptr__;
}

// Call @ 14c9b9690

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14c9b9700

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = *(undefined8 **)param_1;
  CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[5];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// Call @ 14c9b9770

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::IsNeighboring'::__l15::<lambda_1>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pdVar2 = *(double **)((longlong)param_1 + 8);
  uVar4 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar4 * 0x18);
  dVar5 = pdVar2[2] - *(double *)(lVar3 + 0x10 + uVar4 * 0x18);
  dVar6 = *pdVar2 - *pdVar1;
  dVar7 = pdVar2[1] - pdVar1[1];
  return dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5;
}

// Call @ 14c9b97f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::AugmentedDynamicMesh::ComputeTangents'::__l5::<lambda_2>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::PlanarCut::AugmentedDynamicMesh::ComputeTangents'::__l5::<lambda_2>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 14c9b9810

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l6::<lambda_2>,bool,int,double>
::Call(void *param_1,int *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l6::<lambda_2>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c9b9830

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l31::<lambda_2>,float,int_const_&>
::Call(void *param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = `UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l31::<lambda_2>::operator()
                    (param_1,*param_2);
  return fVar1;
}

// Call @ 14c9b9840

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l37::<lambda_2>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
::Call(void *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_R8;
  
  fVar1 = in_R8[1];
  fVar2 = param_2[1].field0_0x0._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.X;
  fVar4 = param_2[1].field0_0x0._s_0.X;
  *(float *)param_1 =
       (*in_R8 - (param_2->field0_0x0)._s_0.Y) * (param_2->field0_0x0)._s_0.X +
       (param_2->field0_0x0)._s_0.Y;
  *(float *)((longlong)param_1 + 4) = (fVar1 - fVar2) * fVar3 + fVar4;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14c9b9880

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::TextureSpecifiedFaces'::__l37::<lambda_2>,double,int,bool>::Call
          (void *param_1,int *param_2,bool *param_3)

{
  return *(double *)param_1;
}

// Call @ 14c9b9890

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l55::<lambda_2>,double,UE::Geometry::FIndex2i_const_&>
::Call(void *param_1,FIndex2i *param_2)

{
  double dVar1;
  
  dVar1 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l55::<lambda_2>::
          operator()(param_1,(FIndex2i)(param_2->field0_0x0)._s_0);
  return dVar1;
}

// Call @ 14c9b98a0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::UVPacking::<lambda_33_>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14c9b98b0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_34_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14c9b98c0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_35_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14c9b98d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Geometry::<lambda_36_>,bool,UE::Geometry::FIndex2i_const_&>::Call
          (void *param_1,FIndex2i *param_2)

{
  return false;
}

// Call @ 14c9b98e0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_37_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14c9b98f0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::FDynamicMeshCollection::SplitIslands'::__l2::<lambda_3>,int,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FDisjointSet::Find(*(FDisjointSet **)((longlong)param_1 + 8),
                             *(uint *)(*(longlong *)
                                        (*(longlong *)(*(longlong *)param_1 + 0x130) +
                                        (ulonglong)((uint)*param_2 >> 9) * 8) +
                                      (ulonglong)(*param_2 & 0x1ff) * 0xc));
  return uVar1;
}

// Call @ 14c9b9930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9b9940

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l45::<lambda_3>,float,int_const_&>
::Call(void *param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = `UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l45::<lambda_3>::operator()
                    (param_1,*param_2);
  return fVar1;
}

// Call @ 14c9b9950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l59::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  assign_op<float,float> local_res8 [32];
  Solve<Eigen::SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Matrix<float,_1,1,0,_1,1>_>
  local_18;
  
  local_18.m_dec =
       *(SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_> **)
        ((longlong)param_1 + 8);
  local_18.m_rhs =
       (Matrix<float,_1,1,0,_1,1> *)
       (*(longlong *)((longlong)param_1 + 0x10) + (longlong)*param_2 * 0x10);
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<float,_1,1,0,_1,1>,Eigen::Solve<Eigen::SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Matrix<float,_1,1,0,_1,1>_>,Eigen::internal::assign_op<float,float>_>
            ((Matrix<float,_1,1,0,_1,1> *)(*(longlong *)param_1 + (longlong)*param_2 * 0x10),
             &local_18,local_res8);
  return;
}

