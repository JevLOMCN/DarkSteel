// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 350

// Call @ 14338be80

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
::Call(void *param_1,int *param_2,TAxisAlignedBox3<double> *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014338be8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)param_1)(*param_2,param_3);
  return iVar1;
}

// Call @ 14338bea0

float __cdecl
UE::Core::Private::Function::TFunctionRefCaller<float_(__cdecl*)(float,float),float,float,float>::
Call(void *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014338beac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)param_1)(*param_2,*param_3);
  return fVar1;
}

// Call @ 14338bec0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<double_(__cdecl*)(double,double),double,double,double>::Call
          (void *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014338becc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(**(code **)param_1)(*param_2,*param_3);
  return dVar1;
}

// Call @ 14338bee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014338bee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2);
  return (bool)uVar1;
}

// Call @ 14338bef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l170::<lambda_10>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<float> *param_3)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18[0]._8_4_ = (param_3->field0_0x0)._s_0.Z;
  `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l170::<lambda_10>::operator()
            (param_1,param_2,(TVector<float> *)&local_18[0]._s_0);
  return;
}

// Call @ 14338bf20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l170::<lambda_10>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>_>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l170::<lambda_10>::operator()
            (param_1,param_2,(TVector<double> *)&local_28._s_0);
  return;
}

// Call @ 14338bf50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshTriInfoCache::
  BuildTriInfoCache<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338bf60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FDynamicMesh3>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338bf70

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox2Points<float>'::__l2::<lambda_1>,UE::Math::TVector2<float>,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FitOrientedBox2Points<float>'::__l2::<lambda_1>::operator()(param_2,(int)param_1);
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14338bfa0

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox2Points<double>'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::FitOrientedBox2Points<double>'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338bfd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<float>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338bfe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FDelaunay2Connectivity::GetFilledTrianglesGeneralizedWinding<double>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338bff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult___cdecl(int)>,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult___cdecl(`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult)>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult___cdecl(int)>,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult___cdecl(`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult)>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult___cdecl(int)>,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult___cdecl(`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult)>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult___cdecl(int)>,TFunctionRef<`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult___cdecl(`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult)>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::PData,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::PData,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_2>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_2>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c050

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::Delaunay3Internal::Triangulate<float>'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::Delaunay3Internal::Triangulate<float>'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338c080

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::Delaunay3Internal::Triangulate<double>'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::Delaunay3Internal::Triangulate<double>'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338c0b0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Call @ 14338c0f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14338c100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14338c110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l95::<lambda_3>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::FConvexDecomposition3::MergeBest'::__l95::<lambda_3>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c120

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  return *(int *)(*(longlong *)
                   (*(longlong *)(*(longlong *)param_1 + 0x1c0) +
                   (ulonglong)((uint)*param_2 >> 9) * 8) + 0xc +
                 (ulonglong)(*param_2 & 0x1ff) * 0x10) == -1;
}

// Call @ 14338c160

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Call @ 14338c1a0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ComputeThickenedHull'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::ComputeThickenedHull'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338c1d0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::ComputeVolume'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  float fVar1;
  TVector<float> *pTVar2;
  
  pTVar2 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector<float>_const_,int> **)param_1,*param_2);
  fVar1 = (pTVar2->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// Call @ 14338c210

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::ComputeVolume'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  
  pTVar3 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector<double>_const_,int> **)param_1,*param_2);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  dVar1 = (pTVar3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14338c250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::RemoveTriangles'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  return;
}

// Call @ 14338c260

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshEditor::SetTriangleNormals'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_14338c2af;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14338c2af:
  return iVar2 != -1;
}

// Call @ 14338c2c0

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<float>,int>
::Call(void *param_1,int *param_2)

{
  TVector2<float>_u_0 *pTVar1;
  int *in_R8;
  
  pTVar1 = &TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<float>_const_,int> **)param_2,*in_R8)->
            field0_0x0;
  *(TVector2<float>_u_0 *)param_1 = *pTVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14338c2f0

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<float>,int>
::Call(void *param_1,int *param_2)

{
  TVector2<float>_u_0 *pTVar1;
  int *in_R8;
  
  pTVar1 = &TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<float>_const_,int> **)param_2,*in_R8)->
            field0_0x0;
  *(TVector2<float>_u_0 *)param_1 = *pTVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14338c320

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  pTVar2 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector2<double>_const_,int> **)param_1,*param_2);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14338c350

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  pTVar2 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector2<double>_const_,int> **)param_1,*param_2);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14338c380

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338c390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::Solve'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338c3a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14338c3c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14338c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
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

// Call @ 14338c3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
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

// Call @ 14338c400

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Call @ 14338c440

FIndex2i __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>::operator()(param_2,(int)param_1)
  ;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

// Call @ 14338c470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMarchingCubes::generate_parallel'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMarchingCubes::generate_parallel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c480

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>'::__l4::<lambda_1>,double,int_const_&>
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

// Call @ 14338c4f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l85::<lambda_4>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l85::<lambda_4>::
  operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14338c500

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// Call @ 14338c570

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// Call @ 14338c5e0

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox2SimplePolygon<float>'::__l6::<lambda_1>,UE::Math::TVector2<float>,int>
::Call(void *param_1,int *param_2)

{
  TVector2<float>_u_0 *pTVar1;
  int *in_R8;
  
  pTVar1 = &TArrayView<UE::Math::TVector2<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector2<float>_const_,int> **)param_2,*in_R8)->
            field0_0x0;
  *(TVector2<float>_u_0 *)param_1 = *pTVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14338c610

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox2SimplePolygon<double>'::__l6::<lambda_1>,UE::Math::TVector2<double>,int>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  pTVar2 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[]
                     (*(TArrayView<UE::Math::TVector2<double>_const_,int> **)param_1,*param_2);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14338c640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FaceNormalClustering::ComputeClusterCornerVertices'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  if (**(int **)param_1 < 3) {
    iVar2 = UE::Geometry::FSizedDisjointSet::Find
                      (*(FSizedDisjointSet **)((longlong)param_1 + 8),*param_2);
    iVar1 = **(int **)param_1;
    if (0 < iVar1) {
      piVar3 = *(int **)((longlong)param_1 + 0x10);
      lVar4 = 0;
      do {
        if (*piVar3 == iVar2) {
          return;
        }
        lVar4 = lVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (lVar4 < iVar1);
    }
    *(int *)(*(longlong *)((longlong)param_1 + 0x10) + (longlong)iVar1 * 4) = iVar2;
    **(int **)param_1 = **(int **)param_1 + 1;
  }
  return;
}

// Call @ 14338c6a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14338c6c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 14338c6e0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(**(longlong **)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Call @ 14338c720

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// Call @ 14338c790

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// Call @ 14338c800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMarchingCubes::generate_continuation_parallel'::__l11::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMarchingCubes::generate_continuation_parallel'::__l11::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14338c810

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_26_>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338c820

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::FitKDop3Helpers::FitKDopImpl3<float>'::__l2::<lambda_2>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Private::FitKDop3Helpers::FitKDopImpl3<float>'::__l2::<lambda_2>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338c850

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::FitKDop3Helpers::FitKDopImpl3<double>'::__l2::<lambda_2>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Private::FitKDop3Helpers::FitKDopImpl3<double>'::__l2::<lambda_2>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338c880

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox2SimplePolygon<float>'::__l2::<lambda_2>,UE::Math::TVector2<float>,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FitOrientedBox2SimplePolygon<float>'::__l2::<lambda_2>::operator()
            (param_2,(int)param_1);
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14338c8b0

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox2SimplePolygon<double>'::__l2::<lambda_2>,UE::Math::TVector2<double>,int>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::FitOrientedBox2SimplePolygon<double>'::__l2::<lambda_2>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338c8e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FConvexDecomposition3::MergeBest'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                            (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 14338c930

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                            (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 14338c980

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ComputeThickenedHull'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [8];
  
  local_res8[0] = *param_2;
  if (local_res8[0] <
      *(int *)(*(longlong *)param_1 + 0x20) * 0x200 + *(int *)(*(longlong *)param_1 + 0x24)) {
    uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                      ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res8);
    return (bool)uVar1;
  }
  return true;
}

// Call @ 14338c9d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338c9e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338c9f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>'::__l4::<lambda_2>,bool,int,double>
::Call(void *param_1,int *param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FVertexConnectedComponents::
          ConnectCloseVertices<UE::Geometry::FDynamicMesh3>'::__l4::<lambda_2>::operator()
                    (param_1,param_2,*param_3);
  return bVar1;
}

// Call @ 14338ca00

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::OptimizeOrientedBox3Points<float>'::__l4::<lambda_2>,float,float,float>
::Call(void *param_1,float *param_2,float *param_3)

{
  return (*param_2 + *param_3) * *(float *)param_1 + *param_2 * *param_3;
}

// Call @ 14338ca20

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::OptimizeOrientedBox3Points<double>'::__l4::<lambda_2>,double,double,double>
::Call(void *param_1,double *param_2,double *param_3)

{
  return (*param_2 + *param_3) * *(double *)param_1 + *param_2 * *param_3;
}

// Call @ 14338ca40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l5::<lambda_2>,void,UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool>
::Call(void *param_1,FConvexPart *param_2,int *param_3,bool *param_4)

{
  if (*param_4 == false) {
    UE::Geometry::FSphereCovering::SetRadius
              ((FSphereCovering *)(*(longlong *)param_1 + 0x110),*param_3,__real_ffefffffffffffff);
    return;
  }
  return;
}

// Call @ 14338ca70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetFaces'::__l7::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::TConvexHull3<float>::GetFaces'::__l7::<lambda_2>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14338ca80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetFaces'::__l7::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::TConvexHull3<double>::GetFaces'::__l7::<lambda_2>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14338ca90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_2>,bool,int>::
Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = **(longlong **)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                            (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 14338caf0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox3Points<float>'::__l45::<lambda_2>,float,int_const_&>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  lVar8 = (longlong)(int)uVar1;
  pfVar3 = *(float **)((longlong)param_1 + 8);
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  lVar4 = *plVar2;
  fVar9 = pfVar3[1] - *(float *)(lVar4 + 4 + lVar8 * 0xc);
  fVar11 = *pfVar3 - *(float *)(lVar4 + lVar8 * 0xc);
  fVar10 = pfVar3[2] - *(float *)(lVar4 + 8 + lVar8 * 0xc);
  return fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
}

// Call @ 14338cb00

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox3Points<double>'::__l45::<lambda_2>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  lVar8 = (longlong)(int)uVar1;
  pdVar3 = *(double **)((longlong)param_1 + 8);
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar9 = (double)(*pcVar5)();
      return dVar9;
    }
  }
  lVar4 = *plVar2;
  dVar9 = pdVar3[1] - *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar11 = *pdVar3 - *(double *)(lVar4 + lVar8 * 0x18);
  dVar10 = pdVar3[2] - *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  return dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
}

// Call @ 14338cb10

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_2>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_2>::
  operator()(param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14338cb40

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_32_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14338cb50

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_33_>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338cb60

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_34_>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338cb70

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_35_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14338cb80

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_36_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 14338cb90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::FitKDop3Helpers::FitKDopImpl3<float>'::__l2::<lambda_3>,bool,int>::
Call(void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338cba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::FitKDop3Helpers::FitKDopImpl3<double>'::__l2::<lambda_3>,bool,int>
::Call(void *param_1,int *param_2)

{
  return true;
}

// Call @ 14338cbb0

FResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,int>
::Call(FResult *__return_storage_ptr__,void *param_1,int *param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FResult *pFVar5;
  FResult local_38;
  
  pFVar5 = `UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()
                     (param_1,&local_38,*param_2);
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->Box).Frame.Origin.field0_0x0 + 4);
  uVar3 = *(undefined8 *)&(pFVar5->Box).Frame.Rotation.field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(pFVar5->Box).Frame.Rotation.field0_0x0 + 8);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pFVar5;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)&(pFVar5->Box).Extents.field0_0x0;
  fVar2 = (pFVar5->Box).Extents.field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 8) = uVar4;
  *(undefined8 *)&(__return_storage_ptr__->Box).Extents.field0_0x0 = uVar1;
  (__return_storage_ptr__->Box).Extents.field0_0x0._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Call @ 14338cc00

FResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,int>
::Call(FResult *__return_storage_ptr__,void *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FResult *pFVar6;
  FResult local_68;
  
  pFVar6 = `UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()
                     (param_1,&local_68,*param_2);
  dVar1 = (pFVar6->Box).Frame.Origin.field0_0x0._s_0.X;
  dVar2 = (pFVar6->Box).Frame.Origin.field0_0x0._s_0.Y;
  dVar3 = (pFVar6->Box).Frame.Origin.field0_0x0._s_0.Z;
  __return_storage_ptr__->Score = pFVar6->Score;
  (__return_storage_ptr__->Box).Frame.Origin.field0_0x0._s_0.X = dVar1;
  dVar1 = (pFVar6->Box).Frame.Rotation.field0_0x0._s_0.X;
  dVar4 = (pFVar6->Box).Frame.Rotation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Box).Frame.Origin.field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Box).Frame.Origin.field0_0x0._s_0.Z = dVar3;
  dVar2 = (pFVar6->Box).Frame.Rotation.field0_0x0._s_0.Z;
  dVar3 = (pFVar6->Box).Frame.Rotation.field0_0x0._s_0.W;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.Y = dVar4;
  dVar4 = (pFVar6->Box).Extents.field0_0x0._s_0.X;
  dVar5 = (pFVar6->Box).Extents.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.W = dVar3;
  dVar1 = (pFVar6->Box).Extents.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Box).Extents.field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Box).Extents.field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->Box).Extents.field0_0x0._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Call @ 14338cc70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::DelaunayInternal::GetVoronoiCells<float>'::__l2::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::DelaunayInternal::GetVoronoiCells<float>'::__l2::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14338cc80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::DelaunayInternal::GetVoronoiCells<double>'::__l2::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::DelaunayInternal::GetVoronoiCells<double>'::__l2::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14338cc90

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,float,float,float>
::Call(void *param_1,float *param_2,float *param_3)

{
  return (*param_2 + *param_3) * *(float *)param_1 + *param_2 * *param_3;
}

// Call @ 14338ccb0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,double,double,double>
::Call(void *param_1,double *param_2,double *param_3)

{
  return (*param_2 + *param_3) * *(double *)param_1 + *param_2 * *param_3;
}

// Call @ 14338ccd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l9::<lambda_3>,void,UE::Geometry::FConvexDecomposition3::FConvexPart_&,int,bool>
::Call(void *param_1,FConvexPart *param_2,int *param_3,bool *param_4)

{
  `UE::Geometry::FConvexDecomposition3::InitNegativeSpaceConvexPartMapping'::__l9::<lambda_3>::
  operator()(param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14338ccf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l37::<lambda_3>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  void *this;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined8 auStack_c8 [2];
  TVector<double>_u_0 TStack_b8;
  TVector<double>_u_0 TStack_98;
  undefined8 auStack_78 [2];
  longlong lStack_68;
  longlong alStack_58 [3];
  longlong *plStack_40;
  undefined1 uStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar5 = *(longlong **)param_1;
  if (*plVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  this = (void *)*plVar5;
  if ((*(int *)((longlong)this + 0xbc) < 0) || (*(longlong *)((longlong)this + 0x10) != 0)) {
    UE::Geometry::
    TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
    BuildTopDown(this,false);
    *(longlong *)((longlong)this + 0x10) = 0;
  }
  lVar6 = *plVar5;
  if (plVar5[4] != *(longlong *)(lVar6 + 0x10)) {
    UE::Geometry::
    TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
    build_fast_winding_cache(plVar5);
    lVar6 = *plVar5;
    plVar5[4] = *(longlong *)(lVar6 + 0x10);
  }
  TStack_b8._s_0.X = (param_2->field0_0x0)._s_0.X;
  TStack_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  TStack_b8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar2 = UE::Geometry::
          TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
          ::branch_fast_winding_num
                    (plVar5,*(int *)(lVar6 + 0xbc),(TVector<double> *)&TStack_b8._s_0);
  if (__real_3fe0000000000000 < dVar2) {
    TStack_98._s_0.X = (param_2->field0_0x0)._s_0.X;
    TStack_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    TStack_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar2 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                      (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)param_1 + 8),
                       (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)param_1 + 8))
                       ->Tree->RootIndex,(TVector<double> *)&TStack_98._s_0);
    if (dVar2 * *(double *)((longlong)param_1 + 0x10) <= __real_3fe0000000000000) {
      auStack_c8[0] = __real_7fefffffffffffff;
      auStack_78[0] = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x18);
      lStack_68 = 0;
      plStack_40 = (longlong *)0x0;
      uStack_38 = 0;
      iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)param_1 + 8) + 0x20))
                        ((longlong *)**(undefined8 **)((longlong)param_1 + 8),param_2,auStack_c8,
                         auStack_78);
      if (lStack_68 != 0) {
        plVar5 = alStack_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar5 = plStack_40;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (iVar4 == -1) {
        if (*(longlong *)
             &(*(FNegativeSpaceSampleSettings **)((longlong)param_1 + 0x18))->OptionalObstacleSDF !=
            0) {
          dVar2 = UE::Geometry::FNegativeSpaceSampleSettings::ObstacleDistance
                            (*(FNegativeSpaceSampleSettings **)((longlong)param_1 + 0x18),param_2);
          if (dVar2 < *(double *)(*(longlong *)((longlong)param_1 + 0x18) + 0x18))
          goto LAB_143379d90;
        }
        uVar7 = (undefined4)__real_3ff0000000000000;
        uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        goto LAB_143379d98;
      }
    }
  }
LAB_143379d90:
  uVar7 = (undefined4)__real_bff0000000000000;
  uVar8 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
LAB_143379d98:
  return (double)CONCAT44(uVar8,uVar7);
}

// Call @ 14338cd00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_3>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::
          <lambda_3>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14338cd10

FResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox3Points<float>'::__l2::<lambda_4>,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<float>'::__l2::FResult>
::Call(FResult *__return_storage_ptr__,void *param_1,FResult *param_2,FResult *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  fVar2 = param_3->Score;
  fVar3 = (param_3->Box).Frame.Origin.field0_0x0._s_0.X;
  fVar4 = (param_3->Box).Frame.Origin.field0_0x0._s_0.Y;
  fVar5 = (param_3->Box).Frame.Origin.field0_0x0._s_0.Z;
  fVar1 = (param_2->Box).Extents.field0_0x0._s_0.Z;
  if (fVar2 <= param_2->Score) {
    fVar6 = (param_3->Box).Frame.Rotation.field0_0x0._s_0.X;
    fVar7 = (param_3->Box).Frame.Rotation.field0_0x0._s_0.Y;
    fVar8 = (param_3->Box).Frame.Rotation.field0_0x0._s_0.Z;
    fVar9 = (param_3->Box).Frame.Rotation.field0_0x0._s_0.W;
    fVar1 = (param_3->Box).Extents.field0_0x0._s_0.Z;
    uVar10 = *(undefined8 *)&(param_3->Box).Extents.field0_0x0;
  }
  else {
    fVar6 = (param_2->Box).Frame.Rotation.field0_0x0._s_0.X;
    fVar7 = (param_2->Box).Frame.Rotation.field0_0x0._s_0.Y;
    fVar8 = (param_2->Box).Frame.Rotation.field0_0x0._s_0.Z;
    fVar9 = (param_2->Box).Frame.Rotation.field0_0x0._s_0.W;
    uVar10 = *(undefined8 *)&(param_2->Box).Extents.field0_0x0;
    fVar2 = param_2->Score;
    fVar3 = (param_2->Box).Frame.Origin.field0_0x0._s_0.X;
    fVar4 = (param_2->Box).Frame.Origin.field0_0x0._s_0.Y;
    fVar5 = (param_2->Box).Frame.Origin.field0_0x0._s_0.Z;
  }
  __return_storage_ptr__->Score = fVar2;
  (__return_storage_ptr__->Box).Frame.Origin.field0_0x0._s_0.X = fVar3;
  (__return_storage_ptr__->Box).Frame.Origin.field0_0x0._s_0.Y = fVar4;
  (__return_storage_ptr__->Box).Frame.Origin.field0_0x0._s_0.Z = fVar5;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.X = fVar6;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.Y = fVar7;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.Z = fVar8;
  (__return_storage_ptr__->Box).Frame.Rotation.field0_0x0._s_0.W = fVar9;
  *(undefined8 *)&(__return_storage_ptr__->Box).Extents.field0_0x0 = uVar10;
  (__return_storage_ptr__->Box).Extents.field0_0x0._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// Call @ 14338cd70

FResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FitOrientedBox3Points<double>'::__l2::<lambda_4>,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult,`UE::Geometry::FitOrientedBox3Points<double>'::__l2::FResult>
::Call(FResult *__return_storage_ptr__,void *param_1,FResult *param_2,FResult *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  
  auVar1 = *(undefined1 (*) [16])param_3;
  uVar3 = auVar1._0_4_;
  uVar4 = auVar1._4_4_;
  uVar5 = auVar1._8_4_;
  uVar6 = auVar1._12_4_;
  auVar2 = *(undefined1 (*) [16])param_2;
  if (auVar1._0_8_ <= auVar2._0_8_) {
    uVar7 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Origin.field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Origin.field0_0x0 + 0xc);
    uVar9 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Origin.field0_0x0 + 0x10);
    uVar10 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Origin.field0_0x0 + 0x14);
    uVar11 = *(undefined4 *)&(param_3->Box).Frame.Rotation.field0_0x0;
    uVar12 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 8);
    uVar14 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 0xc);
    uVar19 = *(undefined4 *)&(param_3->Box).Extents.field0_0x0;
    uVar20 = *(undefined4 *)((longlong)&(param_3->Box).Extents.field0_0x0 + 4);
    uVar21 = *(undefined4 *)((longlong)&(param_3->Box).Extents.field0_0x0 + 8);
    uVar22 = *(undefined4 *)((longlong)&(param_3->Box).Extents.field0_0x0 + 0xc);
    dVar23 = (param_3->Box).Extents.field0_0x0._s_0.Z;
    uVar15 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 0x10);
    uVar16 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 0x14);
    uVar17 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 0x18);
    uVar18 = *(undefined4 *)((longlong)&(param_3->Box).Frame.Rotation.field0_0x0 + 0x1c);
  }
  else {
    uVar7 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Origin.field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Origin.field0_0x0 + 0xc);
    uVar9 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Origin.field0_0x0 + 0x10);
    uVar10 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Origin.field0_0x0 + 0x14);
    uVar15 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 0x10);
    uVar16 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 0x14);
    uVar17 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 0x18);
    uVar18 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 0x1c);
    uVar19 = *(undefined4 *)&(param_2->Box).Extents.field0_0x0;
    uVar20 = *(undefined4 *)((longlong)&(param_2->Box).Extents.field0_0x0 + 4);
    uVar21 = *(undefined4 *)((longlong)&(param_2->Box).Extents.field0_0x0 + 8);
    uVar22 = *(undefined4 *)((longlong)&(param_2->Box).Extents.field0_0x0 + 0xc);
    dVar23 = (param_2->Box).Extents.field0_0x0._s_0.Z;
    uVar11 = *(undefined4 *)&(param_2->Box).Frame.Rotation.field0_0x0;
    uVar12 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 8);
    uVar14 = *(undefined4 *)((longlong)&(param_2->Box).Frame.Rotation.field0_0x0 + 0xc);
    uVar3 = auVar2._0_4_;
    uVar4 = auVar2._4_4_;
    uVar5 = auVar2._8_4_;
    uVar6 = auVar2._12_4_;
  }
  *(undefined4 *)&__return_storage_ptr__->Score = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Score + 4) = uVar4;
  *(undefined4 *)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 = uVar5;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 + 4) = uVar6;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 + 0xc) = uVar8;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 + 0x10) = uVar9;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Origin.field0_0x0 + 0x14) = uVar10;
  *(undefined4 *)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 = uVar11;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 4) = uVar12;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 8) = uVar13;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 0xc) = uVar14
  ;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 0x10) =
       uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 0x14) =
       uVar16;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 0x18) =
       uVar17;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Frame.Rotation.field0_0x0 + 0x1c) =
       uVar18;
  *(undefined4 *)&(__return_storage_ptr__->Box).Extents.field0_0x0 = uVar19;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Extents.field0_0x0 + 4) = uVar20;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Extents.field0_0x0 + 8) = uVar21;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Box).Extents.field0_0x0 + 0xc) = uVar22;
  (__return_storage_ptr__->Box).Extents.field0_0x0._s_0.Z = dVar23;
  return __return_storage_ptr__;
}

// Call @ 14338cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l39::<lambda_4>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStackY_118 [32];
  int aiStack_e8 [4];
  TVector<double>_u_0 TStack_d8;
  double dStack_b8;
  double dStack_b0;
  TVector<double>_u_0 TStack_a8;
  undefined1 auStack_90 [24];
  TVector<double> TStack_78;
  ulonglong uStack_58;
  
  dVar3 = __real_7fefffffffffffff;
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  dStack_b8 = __real_7fefffffffffffff;
  TStack_a8._s_0.X =
       *(double *)(*(longlong *)((longlong)param_1 + 0x20) + 0x20) +
       *(double *)(*(longlong *)((longlong)param_1 + 0x20) + 0x18);
  TStack_a8._s_0.Z = 0.0;
  TStack_78.field0_0x0._s_0.Y = 0.0;
  TStack_78.field0_0x0._16_1_ = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)param_1 + 0x10) + 0x20))
                    ((longlong *)**(undefined8 **)((longlong)param_1 + 0x10),param_2,&dStack_b8,
                     &TStack_a8);
  if (TStack_a8._s_0.Z != 0.0) {
    uVar7 = &(((TVector<double> *)auStack_90)->field0_0x0)._s_0.Y;
    if ((double *)TStack_78.field0_0x0._s_0.Y != (double *)0x0) {
      uVar7 = TStack_78.field0_0x0._s_0.Y;
    }
    (**(code **)((longlong)*(double *)uVar7 + 0x10))();
  }
  if (iVar4 == -1) {
LAB_14337a4c3:
    if (*(char *)(*(longlong *)((longlong)param_1 + 0x20) + 0x29) == '\0') {
      TStack_d8._s_0.X = (param_2->field0_0x0)._s_0.X;
      TStack_d8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      TStack_d8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      dVar11 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                         (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)
                           ((longlong)param_1 + 0x10),
                          (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)
                            ((longlong)param_1 + 0x10))->Tree->RootIndex,
                          (TVector<double> *)&TStack_d8._s_0);
      if (__real_3fe0000000000000 < dVar11 * *(double *)((longlong)param_1 + 0x18))
      goto LAB_14337a5ef;
    }
    dStack_b0 = dVar3;
    TStack_a8._s_0.X = dVar3;
    TStack_a8._s_0.Z = 0.0;
    TStack_78.field0_0x0._s_0.Y = 0.0;
    TStack_78.field0_0x0._16_1_ = 0;
    iVar4 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x20))
                      (*(longlong **)((longlong)param_1 + 8),param_2,&dStack_b0,&TStack_a8);
    if (TStack_a8._s_0.Z != 0.0) {
      uVar7 = &(((TVector<double> *)auStack_90)->field0_0x0)._s_0.Y;
      if ((double *)TStack_78.field0_0x0._s_0.Y != (double *)0x0) {
        uVar7 = TStack_78.field0_0x0._s_0.Y;
      }
      (**(code **)((longlong)*(double *)uVar7 + 0x10))();
    }
    if (iVar4 != -1) {
      `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                (*(void **)param_1,iVar4,(TVector<double> *)&TStack_a8._s_0,
                 (TVector<double> *)auStack_90,&TStack_78);
      UE::Geometry::VectorUtil::Normal<double>
                ((TVector<double> *)&TStack_d8._s_0,(TVector<double> *)&TStack_a8._s_0,
                 (TVector<double> *)auStack_90,&TStack_78);
      if ((0.0 < ((param_2->field0_0x0)._s_0.Y - TStack_a8._s_0.Y) * TStack_d8._s_0.Y +
                 ((param_2->field0_0x0)._s_0.X - TStack_a8._s_0.X) * TStack_d8._s_0.X +
                 ((param_2->field0_0x0)._s_0.Z - TStack_a8._s_0.Z) * TStack_d8._s_0.Z) &&
         (*(double *)((longlong)param_1 + 0x28) <= dStack_b0 &&
          dStack_b0 != *(double *)((longlong)param_1 + 0x28))) goto LAB_14337a5ef;
    }
    if (*(longlong *)
         &(*(FNegativeSpaceSampleSettings **)((longlong)param_1 + 0x20))->OptionalObstacleSDF != 0)
    {
      dVar3 = UE::Geometry::FNegativeSpaceSampleSettings::ObstacleDistance
                        (*(FNegativeSpaceSampleSettings **)((longlong)param_1 + 0x20),param_2);
      if (dVar3 < *(double *)(*(longlong *)((longlong)param_1 + 0x20) + 0x20)) goto LAB_14337a5ef;
    }
    uVar8 = SUB84(__real_3ff0000000000000,0);
    uVar9 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  else {
    lVar1 = *(longlong *)((longlong)param_1 + 0x20);
    if ((*(void **)(lVar1 + 0x80) != (void *)0x0) &&
       (dVar11 = *(double *)(lVar1 + 0xb0), dVar11 < __real_3ff0000000000000)) {
      TStack_d8._s_0.X = (param_2->field0_0x0)._s_0.X;
      TStack_d8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      TStack_d8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      uVar7 = *(undefined8 *)(**(longlong **)((longlong)param_1 + 0x10) + 8);
      aiStack_e8[0] = iVar4;
      CheckCallable(*(void **)(lVar1 + 0x80));
      pcVar2 = *(code **)(lVar1 + 0x80);
      plVar6 = (longlong *)(lVar1 + 0x90);
      if (*(longlong **)(lVar1 + 0xa8) != (longlong *)0x0) {
        plVar6 = *(longlong **)(lVar1 + 0xa8);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      dVar10 = (double)(*pcVar2)(uVar5,uVar7,aiStack_e8,&TStack_d8);
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      if (dVar10 <= dVar11) {
        dVar10 = dVar11;
      }
      dVar11 = dVar10 * *(double *)(*(longlong *)((longlong)param_1 + 0x20) + 0x18) +
               *(double *)(*(longlong *)((longlong)param_1 + 0x20) + 0x20);
      if (dVar11 * dVar11 <= dStack_b8) goto LAB_14337a4c3;
    }
LAB_14337a5ef:
    uVar8 = (undefined4)__real_bff0000000000000;
    uVar9 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  return (double)CONCAT44(uVar9,uVar8);
}

// Call @ 14338ce00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l60::<lambda_4>,bool,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  
  uVar1 = *param_2;
  plVar6 = (longlong *)((longlong)*(int *)((longlong)param_1 + 8) * 0x10 + *(longlong *)param_1);
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar6[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)((longlong)(int)uVar1 + *plVar6);
}

// Call @ 14338ce80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l2::<lambda_5>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14338ce90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l2::<lambda_5>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14338cea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l69::<lambda_6>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l69::<lambda_6>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 14338ceb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l90::<lambda_6>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::FSizedDisjointSet::Find(*(FSizedDisjointSet **)param_1,*param_2);
  return iVar1 == **(int **)((longlong)param_1 + 8);
}

// Call @ 14338cee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l90::<lambda_6>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::FSizedDisjointSet::Find(*(FSizedDisjointSet **)param_1,*param_2);
  return iVar1 == **(int **)((longlong)param_1 + 8);
}

// Call @ 14338cf10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l168::<lambda_9>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<float> *param_3)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18[0]._8_4_ = (param_3->field0_0x0)._s_0.Z;
  `UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces'::__l168::<lambda_9>::operator()
            (param_1,param_2,(TVector<float> *)&local_18[0]._s_0);
  return;
}

// Call @ 14338cf40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l168::<lambda_9>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<double>_>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  `UE::Geometry::TConvexHull3<double>::GetSimplifiedFaces'::__l168::<lambda_9>::operator()
            (param_1,param_2,(TVector<double> *)&local_28._s_0);
  return;
}

// Call @ 14338cf70

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<float___cdecl(float,float)>,float,float,float>::Call
          (void *param_1,float *param_2,float *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = *param_3;
  local_res10[0] = *param_2;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  fVar4 = (float)(*pcVar1)(uVar2,local_res10,local_res8);
  return fVar4;
}

// Call @ 14338cfe0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<double___cdecl(double,double)>,double,double,double>::Call
          (void *param_1,double *param_2,double *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double dVar4;
  double local_res8;
  double local_res10;
  
  local_res8 = *param_3;
  local_res10 = *param_2;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  dVar4 = (double)(*pcVar1)(uVar2,&local_res10,&local_res8);
  return dVar4;
}

// Call @ 14338d050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014338d09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
  return (bool)uVar1;
}

// Call @ 14338d0b0

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<TUniqueFunction<bool___cdecl(int)>,bool,int>::Call
          (void *param_1,int *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  local_res8[0] = *param_2;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3,local_res8);
  return (bool)uVar2;
}

// Call @ 143476190

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector<float>_(__cdecl*)(int),UE::Math::TVector<float>,int>::Call
          (TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 1434761b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1434761c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1434761d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 1434761f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 1434762b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 1434762d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 1434762f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l2::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l2::<lambda_1>,void,bool>::
Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143476370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeOverlayNormal'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::ComputeOverlayNormal'::__l2::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 1434763a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<float>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 1434763b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<double>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 1434763c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeTriangleTangents'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<float>::ComputeTriangleTangents'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434763d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeTriangleTangents'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<double>::ComputeTriangleTangents'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434763e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1434763f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::ComputeVertexNormal'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143476400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::Compute_Triangle'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::Compute_Triangle'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143476410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::InitializeOverlayRegionToPerVertexNormals'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_14347645f;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14347645f:
  return iVar2 != -1;
}

// Call @ 143476470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromFaceGroups'::__l2::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_4;
  iVar1 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(*(FDynamicMesh3 **)param_1,*param_3);
  iVar2 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(*(FDynamicMesh3 **)param_1,iVar2);
  return iVar1 == iVar2;
}

// Call @ 1434764c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromOpeningAngle'::__l2::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FMeshNormals::InitializeOverlayTopologyFromOpeningAngle'::__l2::<lambda_1>
          ::operator()(param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 1434764e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_1>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x1d0) * 0x200 + *(int *)(*(longlong *)param_1 + 0x1d4);
}

// Call @ 143476500

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 143476560

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_1>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x1d0) * 0x200 + *(int *)(*(longlong *)param_1 + 0x1d4);
}

// Call @ 143476580

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_1>,int>::Call(void *param_1)

{
  return **(int **)param_1 * 0x200 + (*(int **)param_1)[1];
}

// Call @ 1434765a0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeTransformedDynamicMeshAdapter'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  auVar2 = *(undefined1 (*) [16])((longlong)param_1 + 0x20);
  dVar9 = *(double *)((longlong)param_1 + 0x28);
  uVar10 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar10 * 0x18);
  dVar7 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18) * *(double *)((longlong)param_1 + 0x60);
  dVar8 = *(double *)((longlong)param_1 + 0x68) * 0.0;
  dVar5 = *(double *)((longlong)param_1 + 0x50) * *pdVar1;
  dVar6 = *(double *)((longlong)param_1 + 0x58) * pdVar1[1];
  uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar11 = *(undefined1 (*) [16])((longlong)param_1 + 0x10);
  auVar21._8_4_ = SUB84(dVar6,0);
  auVar21._0_8_ = dVar5;
  auVar21._12_4_ = uVar18;
  auVar12 = blendpd(auVar11,auVar2,2);
  dVar4 = auVar2._0_8_;
  auVar22._0_8_ = auVar21._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar5;
  auVar22._8_8_ = dVar7 * auVar11._8_8_ - dVar4 * dVar6;
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._0_8_ = dVar5;
  auVar23._12_4_ = uVar18;
  auVar11._8_4_ = SUB84(dVar8,0);
  auVar11._0_8_ = dVar7;
  auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar11 = blendpd(auVar23,auVar11,2);
  auVar14._0_8_ = auVar11._0_8_ * dVar4 - auVar12._0_8_ * dVar7;
  auVar14._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar12._8_8_ * dVar8;
  auVar11 = *(undefined1 (*) [16])((longlong)param_1 + 0x10);
  auVar23 = blendpd(auVar22,auVar14,2);
  auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  dVar16 = auVar22._8_8_ + auVar22._8_8_;
  dVar17 = auVar14._0_8_ + auVar14._0_8_;
  auVar19._8_4_ = SUB84(dVar17,0);
  auVar19._0_8_ = dVar16;
  uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar19._12_4_ = uVar18;
  auVar13._8_4_ = SUB84(dVar17,0);
  auVar13._0_8_ = dVar16;
  auVar13._12_4_ = uVar18;
  auVar23 = blendpd(auVar11,auVar2,2);
  auVar14 = blendpd(auVar13,auVar24,2);
  auVar20._0_8_ = auVar19._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar16;
  auVar20._8_8_ = auVar24._0_8_ * auVar11._8_8_ - dVar4 * dVar17;
  auVar15._0_8_ = auVar14._0_8_ * dVar4 - auVar23._0_8_ * auVar24._0_8_;
  auVar15._8_8_ = auVar14._8_8_ * auVar2._8_8_ - auVar23._8_8_ * auVar24._8_8_;
  dVar8 = *(double *)((longlong)param_1 + 0x40);
  auVar12._8_4_ = SUB84(auVar20._8_8_,0);
  auVar12._0_8_ = auVar20._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
  auVar11 = blendpd(auVar20,auVar15,2);
  dVar4 = dVar9 * dVar17 + dVar6 + auVar15._0_8_ + *(double *)((longlong)param_1 + 0x38);
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar9 * dVar16 + dVar5 + auVar12._8_8_ + *(double *)((longlong)param_1 + 0x30);
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar9 * auVar24._0_8_ + dVar7 + auVar11._0_8_ + dVar8;
  return __return_storage_ptr__;
}

// Call @ 143476700

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_1>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x140) * 0x200 + *(int *)(*(longlong *)param_1 + 0x144);
}

// Call @ 143476720

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_1>,int>::Call(void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x20) * 0x200 + *(int *)(*(longlong *)param_1 + 0x24);
}

// Call @ 143476740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,1>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<int,1>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,2>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<int,2>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,3>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<int,3>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,1>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,1>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,2>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,2>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,3>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,3>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434767a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,4>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,4>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434767b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,1>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,1>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434767c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,2>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,2>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434767d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,3>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,3>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434767e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,4>::MergeElement'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,4>::MergeElement'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434767f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476800

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 143476820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
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

// Call @ 143476830

FIndex3i * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
::Call(FIndex3i *__return_storage_ptr__,void *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x130) + (ulonglong)((uint)*param_2 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 8 + uVar3 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(lVar2 + uVar3 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// Call @ 143476870

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>::Call
          (void *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x1c0) +
             (ulonglong)((uint)*param_2 >> 9) * 8) + (ulonglong)(*param_2 & 0x1ff) * 0x10);
  iVar4 = (int)uVar1;
  iVar2 = (int)((ulonglong)uVar1 >> 0x20);
  if (iVar4 == *(int *)param_1) {
    return iVar2;
  }
  iVar3 = -1;
  if (iVar2 == *(int *)param_1) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// Call @ 1434768c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>::operator()'::__l5::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1434768d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// Call @ 143476940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,1>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<int,1>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,2>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<int,2>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,3>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<int,3>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,1>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,1>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,2>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,2>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434769a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,3>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,3>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434769b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,4>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<float,4>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434769c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,1>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,1>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434769d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,2>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,2>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434769e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,3>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,3>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1434769f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,4>::SplitBowties'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TDynamicMeshOverlay<double,4>::SplitBowties'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476a00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
::Call(void *param_1,TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    (param_2,param_3,__real_3e45798ee2308c3a);
  return bVar1;
}

// Call @ 143476a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::VertexToTriangleOneRing'::__l6::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::VertexToTriangleOneRing'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143476a30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::CopyToOverlays'::__l7::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::TMeshTangents<float>::CopyToOverlays'::__l7::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 143476a50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::CopyToOverlays'::__l7::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::TMeshTangents<double>::CopyToOverlays'::__l7::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 143476a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::SmoothVertexNormals'::__l7::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143476a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476a90

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// Call @ 143476b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::GetBounds'::__l14::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FDynamicMesh3::GetBounds'::__l14::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143476b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143476b30

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_2>,int>::Call
          (void *param_1)

{
  return *(int *)param_1;
}

// Call @ 143476b40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                            (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 143476b90

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_2>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x200);
}

// Call @ 143476ba0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_2>,int>::Call(void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x30);
}

// Call @ 143476bb0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_2>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x170);
}

// Call @ 143476bc0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_2>,int>::Call(void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x50);
}

// Call @ 143476bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143476fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshOverlay.cpp"
                       ,0x6f0,L"TDynamicMeshOverlay::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1434770a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l5::<lambda_2>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMesh3.cpp"
                       ,0x4da,L"FDynamicMesh3::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l5::<lambda_2>,void,bool>::
Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                       ,0x390,L"FDynamicMeshChange::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshNormals::QuickRecomputeOverlayNormals'::__l10::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143477190

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_3>,bool,int>::
Call(void *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  lVar3 = *(longlong *)param_1;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4)))
  {
    lVar1 = (ulonglong)(uVar2 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + lVar1) +
                            (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + lVar1) + 0xc +
                (ulonglong)(uVar2 & 0x1ff) * 0x10) == -1)) {
      return true;
    }
  }
  return false;
}

// Call @ 143477210

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_3>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x140) * 0x200 + *(int *)(*(longlong *)param_1 + 0x144);
}

// Call @ 143477230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 143477290

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) && (piVar2 = *(int **)param_1, (int)uVar1 < *piVar2 * 0x200 + piVar2[1]))
     && ((ushort)(*(short *)(*(longlong *)(*(longlong *)(piVar2 + 2) + (ulonglong)(uVar1 >> 9) * 8)
                            + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 1434772e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 143477340

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)param_1;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                            (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// Call @ 143477390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<int,1>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2
    ::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1434773e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<int,2>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2
    ::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<int,3>::CheckValidity'::__l9::<lambda_3>::operator()'::__l2
    ::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<float,1>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1434774d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<float,2>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<float,3>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<float,4>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1434775c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<double,1>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<double,2>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<double,3>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1434776b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::TDynamicMeshOverlay<double,4>::CheckValidity'::__l9::<lambda_3>::operator()'::
    __l2::<lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::FDynamicMesh3::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143477750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>,void,bool>::
Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::FDynamicMeshChange::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1434777a0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeBoundaryEdgeMidpointsAdapter'::__l2::<lambda_4>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  UE::Geometry::FDynamicMesh3::GetEdgePoint
            (*(FDynamicMesh3 **)param_1,__return_storage_ptr__,*param_2,__real_3fe0000000000000);
  return __return_storage_ptr__;
}

// Call @ 1434777e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_4>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x20) * 0x200 + *(int *)(*(longlong *)param_1 + 0x24);
}

// Call @ 143477800

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeEdgeMidpointsAdapter'::__l2::<lambda_4>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  UE::Geometry::FDynamicMesh3::GetEdgePoint
            (*(FDynamicMesh3 **)param_1,__return_storage_ptr__,*param_2,__real_3fe0000000000000);
  return __return_storage_ptr__;
}

// Call @ 143477840

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::MakePointsAdapter'::__l2::<lambda_4>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 143477870

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_4>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 1434778a0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_4>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Call @ 1434778e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_5>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x170);
}

// Call @ 1434778f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_5>,bool>::Call(void *param_1)

{
  return false;
}

// Call @ 143477900

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_5>,bool>::Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x70);
}

// Call @ 143477910

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_6>,int>::Call
          (void *param_1)

{
  return *(int *)(*(longlong *)param_1 + 0x50);
}

// Call @ 143477920

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakePointsAdapter'::__l2::<lambda_6>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  return __return_storage_ptr__;
}

// Call @ 143477940

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeTriCentroidsAdapter'::__l2::<lambda_6>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  pTVar3 = UE::Geometry::FDynamicMesh3::GetTriNormal(*(FDynamicMesh3 **)param_1,&local_28,*param_2);
  dVar1 = (pTVar3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(pTVar3->field0_0x0)._s_0.X;
  dVar2 = (pTVar3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar2;
  return __return_storage_ptr__;
}

// Call @ 1434779a0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeVerticesAdapter'::__l2::<lambda_6>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar3 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  if (*(char *)(*(longlong *)param_1 + 0x70) == '\0') {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar3;
    return __return_storage_ptr__;
  }
  uVar4 = (ulonglong)(*param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x60) + (ulonglong)((uint)*param_2 >> 9) * 8);
  fVar1 = *(float *)(lVar2 + 8 + uVar4 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(lVar2 + uVar4 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// Call @ 143477a00

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_7>,unsigned___int64>::Call
          (void *param_1)

{
  atomic<unsigned_char> *paVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar6 = 1;
  iVar5 = 1;
  if (*(char *)(lVar4 + 0x21c) != '\0') {
    paVar1 = (atomic<unsigned_char> *)(lVar4 + 0x21d);
    LOCK();
    FVar2.State = *paVar1;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *paVar1 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      FMutex::LockSlow((FMutex *)paVar1);
    }
    iVar5 = *(int *)(lVar4 + 0x220);
    LOCK();
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)paVar1);
    }
  }
  if (*(char *)(lVar4 + 0x224) != '\0') {
    paVar1 = (atomic<unsigned_char> *)(lVar4 + 0x225);
    LOCK();
    FVar2.State = *paVar1;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *paVar1 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      FMutex::LockSlow((FMutex *)paVar1);
    }
    iVar6 = *(int *)(lVar4 + 0x228);
    LOCK();
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)paVar1);
    }
  }
  return (ulonglong)(uint)(iVar6 + iVar5);
}

// Call @ 143477a10

FIndex3i * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_8>,UE::Geometry::FIndex3i,int>
::Call(FIndex3i *__return_storage_ptr__,void *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x130) + (ulonglong)((uint)*param_2 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 8 + uVar3 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(lVar2 + uVar3 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// Call @ 143477a50

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::MakeDynamicMeshAdapter'::__l2::<lambda_9>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(*param_2 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1 + 0x10) + (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar5 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// Call @ 143578ac0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_*,int),UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 143578af0

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
         ::Call(void *param_1)

{
  undefined8 *in_RDX;
  undefined8 local_res8 [4];
  
  (*(code *)*in_RDX)(local_res8);
  *(undefined8 *)param_1 = local_res8[0];
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )param_1;
}

// Call @ 143578b20

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
         ::Call(void *param_1)

{
  undefined8 *in_RDX;
  undefined8 local_res8 [4];
  
  (*(code *)*in_RDX)(local_res8);
  *(undefined8 *)param_1 = local_res8[0];
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )param_1;
}

// Call @ 143578b50

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
         ::Call(void *param_1)

{
  undefined8 *in_RDX;
  undefined8 local_res8 [4];
  
  (*(code *)*in_RDX)(local_res8);
  *(undefined8 *)param_1 = local_res8[0];
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )param_1;
}

// Call @ 143578b80

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
         ::Call(void *param_1)

{
  undefined8 *in_RDX;
  undefined8 local_res8 [4];
  
  (*(code *)*in_RDX)(local_res8);
  *(undefined8 *)param_1 = local_res8[0];
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )param_1;
}

// Call @ 143578bb0

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl UE::Core::Private::Function::
         TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
         ::Call(void *param_1)

{
  undefined8 *in_RDX;
  
  (*(code *)*in_RDX)();
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )param_1;
}

// Call @ 143578bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_2>,`MeshTransforms::ApplyTransform'::__l2::<lambda_3>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_2>,`MeshTransforms::ApplyTransform'::__l2::<lambda_3>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_2>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_3>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_2>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_3>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_2>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_3>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_2>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_3>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578c00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_2>,`MeshTransforms::Rotate'::__l2::<lambda_3>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_2>,`MeshTransforms::Rotate'::__l2::<lambda_3>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_2>,`MeshTransforms::Scale'::__l2::<lambda_3>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_2>,`MeshTransforms::Scale'::__l2::<lambda_3>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_2>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_3>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_2>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_3>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578c30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l67::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  **(byte **)param_1 = **(byte **)param_1 & **(int **)((longlong)param_1 + 8) != *param_2;
  return;
}

// Call @ 143578c60

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,UE::Math::TVector<float>,UE::Math::TVector<float>_const_&>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,TVector<float> *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshTransforms.cpp"
                     ,0x111,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector<float> *)(*pcVar2)();
    return pTVar4;
  }
  fVar1 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// Call @ 143578cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143578ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 143578d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143578d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143578d20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Geometry::FMeshBoolean::FCustomInsideTestContext_const_&>
::Call(void *param_1,TVector<double> *param_2,FCustomInsideTestContext *param_3)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_38 [2];
  
  local_38[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_38[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_38[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
  dVar1 = *(double *)param_1;
  dVar2 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                    (param_3->OptionalWindingTree,param_3->OptionalWindingTree->Tree->RootIndex,
                     (TVector<double> *)&local_38[0]._s_0);
  return dVar1 < dVar2;
}

// Call @ 143578d80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  
  param_2->Tolerance = *(double *)(*(longlong *)param_1 + 0x18);
  param_2->Result = NotComputed;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_2);
  return bVar1;
}

// Call @ 143578db0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
::Call(void *param_1,TIntrTriangle3Triangle3<double> *param_2)

{
  bool bVar1;
  
  param_2->Tolerance = *(double *)(*(longlong *)param_1 + 0xc0);
  param_2->Result = NotComputed;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_2);
  return bVar1;
}

// Call @ 143578de0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::ConvertLoopToTriOrderedEdgeLoop'::__l2::<lambda_1>,int,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  return *param_3;
}

// Call @ 143578df0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::EmbedProjectedPaths'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  `UE::Geometry::EmbedProjectedPaths'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 143578e20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
::Call(void *param_1,int *param_2)

{
  return false;
}

// Call @ 143578e30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143578e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143578e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578e70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::SetTriangleNormals'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_143578ebf;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_143578ebf:
  return iVar2 != -1;
}

// Call @ 143578ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<`MeshTransforms::Translate'::__l8::<lambda_2>,enum_MeshTransformsLocal::ESkipOffset>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<`MeshTransforms::Translate'::__l8::<lambda_2>,enum_MeshTransformsLocal::ESkipOffset>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformSculptLayers<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformSculptLayers<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'
  ::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransforms::Translate'::__l5::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `MeshTransforms::Translate'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143578f60

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMergeCoincidentMeshEdges::Apply'::__l16::<lambda_1>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = *param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x10);
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  uVar8 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar10 = (double)(*pcVar6)();
      return dVar10;
    }
  }
  uVar1 = *(uint *)(*plVar2 + (longlong)(int)uVar1 * 4);
  lVar9 = (longlong)(int)uVar1;
  uVar8 = 0;
  if ((int)uVar1 < (int)plVar3[1]) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar10 = (double)(*pcVar6)();
      return dVar10;
    }
  }
  pdVar4 = *(double **)param_1;
  lVar5 = *plVar3;
  dVar10 = *(double *)(lVar5 + 8 + lVar9 * 0x18) - pdVar4[1];
  dVar12 = *(double *)(lVar5 + lVar9 * 0x18) - *pdVar4;
  dVar11 = *(double *)(lVar5 + 0x10 + lVar9 * 0x18) - pdVar4[2];
  return dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
}

// Call @ 143578f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l67::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l67::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143578f80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()'::__l11::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = ``UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()'::__l11::
          <lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 143578f90

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_24_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 143578fa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>'::__l2::<lambda_2>,bool,UE::Geometry::FVector3i_const_&>
::Call(void *param_1,FVector3i *param_2)

{
  int *piVar1;
  FVector3i_u_0 local_18 [2];
  
  piVar1 = *(int **)param_1;
  if ((((param_2->field0_0x0)._s_0.X != *piVar1) || ((param_2->field0_0x0)._s_0.Y != piVar1[1])) ||
     ((param_2->field0_0x0)._s_0.Z != piVar1[2])) {
    local_18[0]._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    local_18[0]._8_4_ = (param_2->field0_0x0)._s_0.Z;
    `UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>'::__l2::<lambda_1>::operator()
              (*(void **)((longlong)param_1 + 8),(FVector3i *)&local_18[0]._s_0);
  }
  return true;
}

// Call @ 143578ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143579010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l5::<lambda_2>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeLoop.cpp"
                       ,0xc4,L"FEdgeLoop::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143579080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l5::<lambda_2>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                       ,0xdc,L"FEdgeSpan::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1435790f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143579100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_2>,`MeshTransforms::ApplyTransform'::__l2::<lambda_3>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_2>,`MeshTransforms::ApplyTransform'::__l2::<lambda_3>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_2>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_3>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_2>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_3>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_2>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_3>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_2>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_3>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_2>,`MeshTransforms::Rotate'::__l2::<lambda_3>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_2>,`MeshTransforms::Rotate'::__l2::<lambda_3>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_2>,`MeshTransforms::Scale'::__l2::<lambda_3>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_2>,`MeshTransforms::Scale'::__l2::<lambda_3>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_2>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_3>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_2>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_3>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579160

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'
  ::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579170

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  TVector<double> *pTVar1;
  
  pTVar1 = UE::Geometry::FMeshNormals::operator[](*(FMeshNormals **)param_1,*param_2);
  if ((((pTVar1->field0_0x0)._s_0.X == 0.0) && ((pTVar1->field0_0x0)._s_0.Y == 0.0)) &&
     ((pTVar1->field0_0x0)._s_0.Z == 0.0)) {
    return false;
  }
  return true;
}

// Call @ 1435791b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 1435791c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_3>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 1435791d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l9::<lambda_3>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::FEdgeLoop::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143579220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l9::<lambda_3>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::FEdgeSpan::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 143579270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143579280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::EmbedProjectedPaths'::__l91::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_1435792cf;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1435792cf:
  return iVar2 == -1;
}

// Call @ 1435792e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_2>,`MeshTransforms::ApplyTransform'::__l2::<lambda_3>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::ApplyTransform'::__l2::<lambda_1>,`MeshTransforms::ApplyTransform'::__l2::<lambda_2>,`MeshTransforms::ApplyTransform'::__l2::<lambda_3>,`MeshTransforms::ApplyTransform'::__l2::<lambda_4>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 1435792f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_2>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_3>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_1>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_2>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_3>,`MeshTransforms::ApplyTransformInverse'::__l2::<lambda_4>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_2>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_3>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_1>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_2>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_3>,`MeshTransforms::FrameCoordsToWorld'::__l2::<lambda_4>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_2>,`MeshTransforms::Rotate'::__l2::<lambda_3>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::Rotate'::__l2::<lambda_1>,`MeshTransforms::Rotate'::__l2::<lambda_2>,`MeshTransforms::Rotate'::__l2::<lambda_3>,`MeshTransforms::Rotate'::__l2::<lambda_4>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_2>,`MeshTransforms::Scale'::__l2::<lambda_3>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::Scale'::__l2::<lambda_1>,`MeshTransforms::Scale'::__l2::<lambda_2>,`MeshTransforms::Scale'::__l2::<lambda_3>,`MeshTransforms::Scale'::__l2::<lambda_4>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_2>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_3>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_1>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_2>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_3>,`MeshTransforms::WorldToFrameCoords'::__l2::<lambda_4>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MeshTransformsLocal::TransformMeshHelper<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'::__l13::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `MeshTransformsLocal::
  TransformMeshHelper<TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)>,`MeshTransforms::ApplyTransform'::__l2::<lambda_1>_>'
  ::__l13::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143579350

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l98::<lambda_6>,double,int_const_&>::
Call(void *param_1,int *param_2)

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
           (*(longlong *)(*(longlong *)(*(longlong *)param_1 + 0x68) + 0x10) +
           (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + uVar4 * 0x18);
  pdVar3 = *(double **)((longlong)param_1 + 8);
  dVar5 = pdVar1[1] - pdVar3[1];
  dVar6 = *pdVar1 - *pdVar3;
  dVar7 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) - pdVar3[2];
  return dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
}

// Call @ 1435793c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l98::<lambda_7>,bool,int_const_&>::
Call(void *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(undefined8 **)param_1;
  piVar1 = piVar2 + *(int *)(*(undefined8 **)param_1 + 1);
  while( true ) {
    if (piVar2 == piVar1) {
      return false;
    }
    if (*piVar2 == *param_2) break;
    piVar2 = piVar2 + 1;
  }
  return true;
}

// Call @ 1435793f0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'[::D]::<lambda_7>,double,int_const_&>
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
           (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x10) +
           (ulonglong)((uint)*param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + uVar4 * 0x18);
  pdVar3 = *(double **)param_1;
  dVar5 = pdVar1[1] - pdVar3[1];
  dVar6 = *pdVar1 - *pdVar3;
  dVar7 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) - pdVar3[2];
  return dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
}

// Call @ 1435f2a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::FPerTriangleDensePointSampling::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UELocal::FPerTriangleDensePointSampling::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1435f2a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::FTriangleInfoCache::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UELocal::FTriangleInfoCache::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1435f2a80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
::Call(void *param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)param_1;
  if (((((param_2->Min).field0_0x0._s_0.X <= pdVar2[3] &&
         pdVar2[3] != (param_2->Min).field0_0x0._s_0.X) &&
       (*pdVar2 < (param_2->Max).field0_0x0._s_0.X)) &&
      (pdVar1 = &(param_2->Min).field0_0x0._s_0.Y, *pdVar1 <= pdVar2[4] && pdVar2[4] != *pdVar1)) &&
     (((pdVar2[1] < (param_2->Max).field0_0x0._s_0.Y &&
       (pdVar1 = &(param_2->Min).field0_0x0._s_0.Z, *pdVar1 <= pdVar2[5] && pdVar2[5] != *pdVar1))
      && (pdVar2[2] < (param_2->Max).field0_0x0._s_0.Z)))) {
    return true;
  }
  return false;
}

// Call @ 1435f2ae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,void,bool>
::Call(void *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((*pcVar1 != '\0') && (*param_2 != false)) {
    *pcVar1 = '\x01';
    return;
  }
  *pcVar1 = '\0';
  return;
}

// Call @ 1435f2b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::CollectCurvesNearRay'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::CollectCurvesNearRay'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::CollectPointsNearRay'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::CollectPointsNearRay'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l2::<lambda_1>,void,UE::Math::TVector<double>,int,double>
::Call(void *param_1,TVector<double> *param_2,int *param_3,double *param_4)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  `UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l2::<lambda_1>::operator()
            (param_1,(TVector<double> *)&local_28._s_0,*param_3,*param_4);
  return;
}

// Call @ 1435f2b60

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::FindClosestPoint'::__l2::<lambda_1>,double,double,UE::Geometry::FSparsePointOctreeCell_const_&>
::Call(void *param_1,double *param_2,FSparsePointOctreeCell *param_3)

{
  double dVar1;
  
  dVar1 = `UE::Geometry::FSparseDynamicPointOctree3::FindClosestPoint'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return dVar1;
}

// Call @ 1435f2b70

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>,double,double,UE::Geometry::FSparsePointOctreeCell_const_&>
::Call(void *param_1,double *param_2,FSparsePointOctreeCell *param_3)

{
  double dVar1;
  
  dVar1 = `UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>::
          operator()(param_1,*param_2,param_3);
  return dVar1;
}

// Call @ 1435f2b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::FindNearestCurveToRay'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::FindNearestCurveToRay'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FGeometrySet3::FindNearestPointToRay'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FGeometrySet3::FindNearestPointToRay'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2ba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
::Call(void *param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)param_1;
  if (((((param_2->Min).field0_0x0._s_0.X <= pdVar2[3] &&
         pdVar2[3] != (param_2->Min).field0_0x0._s_0.X) &&
       (*pdVar2 < (param_2->Max).field0_0x0._s_0.X)) &&
      (pdVar1 = &(param_2->Min).field0_0x0._s_0.Y, *pdVar1 <= pdVar2[4] && pdVar2[4] != *pdVar1)) &&
     (((pdVar2[1] < (param_2->Max).field0_0x0._s_0.Y &&
       (pdVar1 = &(param_2->Min).field0_0x0._s_0.Z, *pdVar1 <= pdVar2[5] && pdVar2[5] != *pdVar1))
      && (pdVar2[2] < (param_2->Max).field0_0x0._s_0.Z)))) {
    return true;
  }
  return false;
}

// Call @ 1435f2c00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
::Call(void *param_1,TAxisAlignedBox3<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  
  pdVar4 = *(double **)param_1;
  dVar1 = *pdVar4;
  if (((((param_2->Min).field0_0x0._s_0.X <= dVar1) &&
       (dVar2 = pdVar4[1], (param_2->Min).field0_0x0._s_0.Y <= dVar2)) &&
      (dVar3 = pdVar4[2], (param_2->Min).field0_0x0._s_0.Z <= dVar3)) &&
     (((dVar1 < (param_2->Max).field0_0x0._s_0.X || dVar1 == (param_2->Max).field0_0x0._s_0.X &&
       (pdVar4 = &(param_2->Max).field0_0x0._s_0.Y, dVar2 < *pdVar4 || dVar2 == *pdVar4)) &&
      (pdVar4 = &(param_2->Max).field0_0x0._s_0.Z, dVar3 < *pdVar4 || dVar3 == *pdVar4)))) {
    return true;
  }
  return false;
}

// Call @ 1435f2c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelCollectObjectsInOverlappingCells'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSparseDynamicOctree3::ParallelCollectObjectsInOverlappingCells'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 1435f2c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 1435f2c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2c80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
::Call(void *param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)param_1;
  if (((((param_2->Min).field0_0x0._s_0.X <= pdVar2[3] &&
         pdVar2[3] != (param_2->Min).field0_0x0._s_0.X) &&
       (*pdVar2 < (param_2->Max).field0_0x0._s_0.X)) &&
      (pdVar1 = &(param_2->Min).field0_0x0._s_0.Y, *pdVar1 <= pdVar2[4] && pdVar2[4] != *pdVar1)) &&
     (((pdVar2[1] < (param_2->Max).field0_0x0._s_0.Y &&
       (pdVar1 = &(param_2->Min).field0_0x0._s_0.Z, *pdVar1 <= pdVar2[5] && pdVar2[5] != *pdVar1))
      && (pdVar2[2] < (param_2->Max).field0_0x0._s_0.Z)))) {
    return true;
  }
  return false;
}

// Call @ 1435f2ce0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1435f2d00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::BranchCustomOverlapAnyQuery'::__l4::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int local_res8 [2];
  
  iVar1 = *param_2;
  local_res8[0] = iVar1;
  cVar2 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8);
  if (cVar2 != '\0') {
    **(int **)((longlong)param_1 + 8) = iVar1;
    return false;
  }
  return true;
}

// Call @ 1435f2d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::GrowToConnectedVertices'::__l4::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshConnectedComponents::GrowToConnectedVertices'::__l4::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2d80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::GrowToConnectedEdges'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshConnectedComponents::GrowToConnectedEdges'::__l6::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2d90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,bool,UE::Geometry::FUVSpaceAllocator::FRect_const_&>
::Call(void *param_1,FRect *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1;
  return param_2->H + param_2->W + param_2->Y + param_2->X <
         (uint)(piVar1[3] + piVar1[2] + piVar1[1] + *piVar1);
}

// Call @ 1435f2dc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours'::__l20::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours'::__l20::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 1435f2dd0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l21::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  UELocal::FDenseSamplePointSet::GetVertex
            (*(FDenseSamplePointSet **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 1435f2e00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,bool>
::Call(void *param_1)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  FStandardChartPacker *this;
  TAtomic<bool> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x20);
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  this = *(FStandardChartPacker **)param_1;
  pTVar4 = *(TAtomic<bool> **)((longlong)param_1 + 0x10);
  uVar9 = 0;
  if ((int)uVar2 < (int)plVar3[1]) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  lVar5 = *plVar3;
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  dVar1 = *(double *)((longlong)param_1 + 0x18);
  uVar9 = *(uint *)((longlong)param_1 + 0x20);
  uVar10 = 0;
  if ((int)uVar9 < (int)plVar3[1]) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  bVar7 = InternalUVPacking::FStandardChartPacker::PackCharts
                    (this,(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_> *)
                          (*plVar3 + (longlong)(int)uVar9 * 0x28),dVar1,
                     (double *)(lVar5 + (longlong)(int)uVar2 * 0x28 + 0x20),pTVar4);
  return bVar7;
}

// Call @ 1435f2e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l13::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l13::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2e20

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l15::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  UELocal::FDenseSamplePointSet::GetVertex
            (*(FDenseSamplePointSet **)param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 1435f2e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l15::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours'::__l15::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1435f2e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 1435f2e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("b",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\SparseDynamicOctree3.cpp"
                       ,0x336,L"FSparseDynamicOctree3::CheckValidity failed!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1435f2ee0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l8::<lambda_2>,double,int,UE::Math::TVector<double>,UE::Math::TVector<double>_>
::Call(void *param_1,int *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_48._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar1 = `UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling'::__l8::<lambda_2>::
          operator()(param_1,*param_2,(TVector<double> *)&local_28._s_0,
                     (TVector<double> *)&local_48._s_0);
  return dVar1;
}

// Call @ 1435f2f30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l26::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UELocal::UniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l26::<lambda_2>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1435f2f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,void,bool>
::Call(void *param_1,bool *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  
  bVar1 = *param_2;
  if (bVar1 == false) {
    ``UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  pcVar2 = *(char **)param_1;
  if ((*pcVar2 != '\0') && (bVar1 != false)) {
    *pcVar2 = '\x01';
    return;
  }
  *pcVar2 = '\0';
  return;
}

// Call @ 1435f2f90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l25::<lambda_3>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `UELocal::NonUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l25::<lambda_3>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1435f2fa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::FUVSpaceAllocator::FRect_const_&)>,bool,UE::Geometry::FUVSpaceAllocator::FRect_const_&>
::Call(void *param_1,FRect *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001435f2fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
  return (bool)uVar1;
}

// Call @ 1435f3000

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
          (void *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = *param_3;
  local_res10[0] = *param_2;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3,local_res10,local_res8);
  return (bool)uVar2;
}

