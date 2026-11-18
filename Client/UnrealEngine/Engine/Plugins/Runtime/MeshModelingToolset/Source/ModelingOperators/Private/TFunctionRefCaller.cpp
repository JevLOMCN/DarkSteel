// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 110

// Call @ 14c975e80

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
::Call(TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
      void *param_1,TGeneralPolygon2<double> *param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 14c975ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14c975eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_intersections'::__l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::compute_intersections'::__l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c975ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::
  __l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c975ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FScatterCounter::FScatterCounter'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  LOCK();
  *(undefined4 *)(*(longlong *)param_1 + (longlong)*param_2 * 4) = 0;
  UNLOCK();
  return;
}

// Call @ 14c975ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FScatterCounter::FScatterCounter'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  LOCK();
  *(undefined4 *)(*(longlong *)param_1 + (longlong)*param_2 * 4) = 0;
  UNLOCK();
  return;
}

// Call @ 14c975f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FTriIDBlockGrid::FTriIDBlockGrid'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::FTriIDBlockGrid::FTriIDBlockGrid'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c975f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriIDBlockGrid::FTriIDBlockGrid'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::FTriIDBlockGrid::
  FTriIDBlockGrid'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c975f30

TVector2<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ApplyUVTransforms'::__l2::<lambda_1>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
::Call(void *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *in_R8;
  
  pfVar8 = *(float **)(param_2->field0_0x0).XY;
  fVar1 = *in_R8;
  fVar2 = in_R8[1];
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  fVar3 = pfVar8[3];
                    /* WARNING: Load size is inaccurate */
  fVar4 = pfVar8[2];
  fVar5 = *(float *)((longlong)*(TVector2<float>_u_0 *)param_2[1].field0_0x0.XY + 4);
  fVar6 = *(float *)((longlong)*(TVector2<float>_u_0 *)param_2[2].field0_0x0.XY + 4);
  fVar7 = *(float *)((longlong)*(TVector2<float>_u_0 *)param_2[3].field0_0x0.XY + 4);
  *(float *)param_1 =
       (fVar2 * pfVar8[1] + fVar1 * *pfVar8) *
       *(float *)*(TVector2<float>_u_0 *)param_2[1].field0_0x0.XY +
       *(float *)*(TVector2<float>_u_0 *)param_2[2].field0_0x0.XY +
       *(float *)*(TVector2<float>_u_0 *)param_2[3].field0_0x0.XY;
  *(float *)((longlong)param_1 + 4) = (fVar2 * fVar3 + fVar1 * fVar4) * fVar5 + fVar6 + fVar7;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// Call @ 14c975fa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>,bool,int,int>::Call
          (void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c975fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FMeshBoundaryCache::Calculate'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FMeshBoundaryCache::Calculate'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c975fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),param_2);
  return;
}

// Call @ 14c975fe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),param_2);
  return;
}

// Call @ 14c976000

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass'::__l2::<lambda_1>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = UE::Geometry::
          TTriLinearGridInterpolant<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>
          ::Value<0>(param_1,param_2);
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
}

// Call @ 14c976020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeLazySDFs'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeLazySDFs'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14c976030

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass'::__l2::<lambda_1>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = UE::Geometry::
          TTriLinearGridInterpolant<UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>,double,1>
          ::Value<0>(param_1,param_2);
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
}

// Call @ 14c976050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeSpatials'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::ComputeSpatials'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14c976060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_DirectDistance'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSkinBindingOp::CreateSkinWeights_DirectDistance'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c976070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c976080

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitBlend<UE::Geometry::FDynamicMesh3>::GenerateBlendAnalytic'::__l2::<lambda_1>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar1 = UE::Geometry::
          TSkeletalRicciNaryBlend3<UE::Geometry::TDistanceFieldToSkeletalField<UE::Geometry::TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>,double>,double>
          ::Value(*(TSkeletalRicciNaryBlend3<UE::Geometry::TDistanceFieldToSkeletalField<UE::Geometry::TTriLinearGridInterpolant<UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>,double,1>,double>,double>
                    **)param_1,(TVector<double> *)&local_28._s_0);
  return dVar1;
}

// Call @ 14c9760b0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<UE::Geometry::`anonymous_namespace'::FCreateSkinWeights_Closest_WorkData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x30);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)
              &TThreadSingleton<UE::Geometry::FCreateSkinWeights_Closest_WorkData>::_vftable_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&UE::Geometry::FCreateSkinWeights_Closest_WorkData::_vftable_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14c9760c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::FOffsetMeshRegion::EdgesSeparateSameGroupsAndAreColinearAtBorder
                    (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),*param_2,*param_3,
                     *(bool *)(*(longlong *)param_1 + 0xd8));
  return bVar1;
}

// Call @ 14c9760e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::NormalizeUVAreas'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::Geometry::FRecomputeUVsOp::NormalizeUVAreas'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9760f0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FIterativeSmoothingOp::Smooth_Forward'::__l2::<lambda_1>,double,int,bool>
::Call(void *param_1,int *param_2,bool *param_3)

{
  double dVar1;
  
  dVar1 = `UE::Geometry::FIterativeSmoothingOp::Smooth_Forward'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return dVar1;
}

// Call @ 14c976110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_intersections'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::compute_intersections'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2
  ::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::fill_spans'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::fill_spans'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14c976160

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid_dense'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid_dense'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::scatter_tris'::__l3::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::scatter_tris'::__l3::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l3::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l3::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976190

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Box'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976230

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Cylinder'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c9762d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_ExpMap'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976370

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Plane'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14c976420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_signs'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::compute_signs'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::update_signs'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::update_signs'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  uint *puVar1;
  double *pdVar2;
  int *piVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  TBasicBlockedDenseGrid3<float,8> *this;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  TBlockData3<float,8> *pTVar28;
  TBlockData3<int,8> *pTVar29;
  uint uVar30;
  int iVar31;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint *puVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  longlong lVar41;
  int iVar42;
  double dVar43;
  float fVar44;
  undefined1 auStackX_10 [8];
  int iStackX_18;
  int iStackX_20;
  int iStack_160;
  int iStack_15c;
  int iStack_128;
  int iStack_124;
  TVector<double>_u_0 TStack_110;
  TVector<double>_u_0 TStack_f8;
  TVector<double>_u_0 TStack_e0;
  TVector<double>_u_0 TStack_c8;
  double dStack_a0;
  double dStack_88;
  
  lVar10 = *(longlong *)((longlong)param_1 + 0x18);
  iStackX_18 = *(int *)(*(longlong *)((longlong)param_1 + 0x20) + 0x14);
  uVar4 = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x20) + 0xc);
  uVar9 = *(uint *)(**(longlong **)((longlong)param_1 + 0x10) + (longlong)*param_2 * 4);
  uVar30 = 0;
  if ((int)uVar9 < *(int *)(lVar10 + 0x30)) {
    uVar30 = ~uVar9 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  lVar10 = *(longlong *)(lVar10 + 0x28);
  this = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)param_1 + 0x20);
  lVar40 = (longlong)(int)uVar9 * 0x10;
  iVar33 = (int)this->_padding_;
  iVar38 = *(int *)((longlong)&this->_padding_ + 4);
  iVar35 = (int)uVar9 % iVar33;
  iVar25 = (int)uVar9 / (iVar38 * iVar33);
  iVar37 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar9 / (longlong)iVar33) >> 0x1f) << 0x20
                 | (longlong)(int)uVar9 / (longlong)iVar33 & 0xffffffffU) % (longlong)iVar38);
  pTVar28 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                      (this,(iVar25 * iVar38 + iVar37) * iVar33 + iVar35);
  this_00 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)param_1 + 0x100);
  pTVar29 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                      (this_00,(iVar25 * *(int *)(*(longlong *)param_1 + 0x104) + iVar37) *
                               (int)this_00->_padding_ + iVar35);
  iVar39 = iVar25 * 8;
  iStack_160 = (int)uVar4;
  iVar33 = iVar35 * 8 + 8;
  iVar38 = iVar37 * 8;
  if (iVar33 < iStack_160) {
    iStack_160 = iVar33;
  }
  iStack_160 = iStack_160 + -1;
  iStack_15c = (int)((ulonglong)uVar4 >> 0x20);
  puVar36 = *(uint **)(lVar40 + lVar10);
  if (iVar38 + 8 < iStack_15c) {
    iStack_15c = iVar38 + 8;
  }
  uVar9 = *(uint *)(lVar40 + 8 + lVar10);
  uVar32 = (ulonglong)(int)uVar9;
  iStackX_20 = iStack_15c + -1;
  if (iVar39 + 8 < iStackX_18) {
    iStackX_18 = iVar39 + 8;
  }
  iStackX_18 = iStackX_18 + -1;
  puVar1 = puVar36 + uVar32;
  while( true ) {
    iVar33 = iVar35 * 8;
    if (*(int *)(lVar40 + 8 + lVar10) != (int)uVar32) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (puVar36 == puVar1) {
      return;
    }
    uVar30 = *puVar36;
    lVar41 = (longlong)(int)uVar30;
    plVar11 = (longlong *)**(longlong **)param_1;
    plVar12 = (longlong *)plVar11[1];
    uVar27 = 0;
    if ((int)uVar30 < (int)plVar12[1]) {
      uVar27 = ~uVar30 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    plVar13 = (longlong *)*plVar11;
    lVar14 = *plVar12;
    uVar27 = *(uint *)(lVar14 + lVar41 * 0xc);
    uVar26 = 0;
    if ((int)uVar27 < (int)plVar13[1]) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar15 = *plVar13;
    dStack_88 = *(double *)(lVar15 + 0x10 + (longlong)(int)uVar27 * 0x18);
    pdVar2 = (double *)(lVar15 + (longlong)(int)uVar27 * 0x18);
    dVar43 = *pdVar2;
    dVar21 = pdVar2[1];
    plVar12 = (longlong *)*plVar11;
    uVar27 = *(uint *)(lVar14 + 4 + lVar41 * 0xc);
    uVar26 = 0;
    if ((int)uVar27 < (int)plVar12[1]) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar15 = *plVar12;
    dStack_a0 = *(double *)(lVar15 + 0x10 + (longlong)(int)uVar27 * 0x18);
    pdVar2 = (double *)(lVar15 + (longlong)(int)uVar27 * 0x18);
    dVar22 = *pdVar2;
    dVar23 = pdVar2[1];
    plVar11 = (longlong *)*plVar11;
    uVar27 = *(uint *)(lVar14 + 8 + lVar41 * 0xc);
    uVar26 = 0;
    if ((int)uVar27 < (int)plVar11[1]) {
      uVar26 = ~uVar27 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) break;
    dVar5 = *(double *)((longlong)param_1 + 0x48);
    dVar6 = *(double *)((longlong)param_1 + 0x30);
    dVar7 = *(double *)((longlong)param_1 + 0x40);
    dVar8 = *(double *)((longlong)param_1 + 0x38);
    lVar14 = *plVar11;
    TStack_e0._s_0.X = (dVar43 - dVar6) * dVar5;
    pdVar2 = (double *)(lVar14 + (longlong)(int)uVar27 * 0x18);
    dVar43 = *(double *)(lVar14 + 0x10 + (longlong)(int)uVar27 * 0x18);
    TStack_e0._s_0.Y = (dVar21 - dVar8) * dVar5;
    TStack_e0._s_0.Z = (dStack_88 - dVar7) * dVar5;
    TStack_f8._s_0.X = (dVar22 - dVar6) * dVar5;
    TStack_f8._s_0.Y = (dVar23 - dVar8) * dVar5;
    TStack_f8._s_0.Z = (dStack_a0 - dVar7) * dVar5;
    TStack_110._s_0.Z = (dVar43 - dVar7) * dVar5;
    TStack_110._s_0.X = (*pdVar2 - dVar6) * dVar5;
    TStack_110._s_0.Y = (pdVar2[1] - dVar8) * dVar5;
    piVar3 = (int *)(**(longlong **)((longlong)param_1 + 8) + lVar41 * 0x18);
    uVar4 = *(undefined8 *)(**(longlong **)((longlong)param_1 + 8) + 0x10 + lVar41 * 0x18);
    iVar31 = iStack_160;
    if (*piVar3 < iStack_160) {
      iVar31 = *piVar3;
    }
    iVar18 = iVar33;
    if (iVar33 < iVar31) {
      iVar18 = iVar31;
    }
    iVar31 = iStackX_20;
    if (piVar3[1] < iStackX_20) {
      iVar31 = piVar3[1];
    }
    iVar19 = iVar38;
    if (iVar38 < iVar31) {
      iVar19 = iVar31;
    }
    iVar31 = iStackX_18;
    if (piVar3[2] < iStackX_18) {
      iVar31 = piVar3[2];
    }
    iVar42 = iVar39;
    if (iVar39 < iVar31) {
      iVar42 = iVar31;
    }
    iVar31 = iStack_160;
    if (piVar3[3] < iStack_160) {
      iVar31 = piVar3[3];
    }
    if (iVar33 < iVar31) {
      iVar33 = iVar31;
    }
    iStack_128 = (int)uVar4;
    iVar31 = iStackX_20;
    if (iStack_128 < iStackX_20) {
      iVar31 = iStack_128;
    }
    iVar20 = iVar38;
    if (iVar38 < iVar31) {
      iVar20 = iVar31;
    }
    iStack_124 = (int)((ulonglong)uVar4 >> 0x20);
    iVar31 = iStackX_18;
    if (iStack_124 < iStackX_18) {
      iVar31 = iStack_124;
    }
    dStack_a0 = dVar43;
    iVar17 = iVar39;
    if (iVar39 < iVar31) {
      iVar17 = iVar31;
    }
    for (; iVar31 = iVar19, iVar42 <= iVar17; iVar42 = iVar42 + 1) {
      for (; iVar31 <= iVar20; iVar31 = iVar31 + 1) {
        if (iVar18 <= iVar33) {
          iVar34 = iVar18;
          do {
            TStack_c8._s_0.X = (double)iVar34;
            TStack_c8._s_0.Y = (double)iVar31;
            TStack_c8._s_0.Z = (double)iVar42;
            dVar43 = UE::Geometry::PointTriangleDistance
                               ((TVector<double> *)&TStack_c8._s_0,
                                (TVector<double> *)&TStack_e0._s_0,
                                (TVector<double> *)&TStack_f8._s_0,
                                (TVector<double> *)&TStack_110._s_0);
            uVar27 = ((iVar42 + iVar25 * -8) * 8 + iVar37 * -8 + iVar31) * 8 + iVar35 * -8 + iVar34;
            fVar44 = (float)((double)*(float *)((longlong)param_1 + 0x50) * dVar43);
            if (fVar44 < (pTVar28->Data).Elements[uVar27]) {
              (pTVar28->Data).Elements[uVar27] = fVar44;
              (pTVar29->Data).Elements[uVar27] = uVar30;
            }
            iVar34 = iVar34 + 1;
          } while (iVar34 <= iVar33);
        }
      }
    }
    puVar36 = puVar36 + 1;
    uVar32 = (ulonglong)uVar9;
  }
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

// Call @ 14c976470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  uint *puVar1;
  double *pdVar2;
  double *pdVar3;
  int *piVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  TBasicBlockedDenseGrid3<float,8> *this;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  TBlockData3<float,8> *pTVar22;
  TBlockData3<int,8> *pTVar23;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  double dVar38;
  float fVar39;
  int aiStackX_10 [2];
  int iStackX_18;
  int iStackX_20;
  int iStack_158;
  int iStack_154;
  int iStack_110;
  int iStack_10c;
  TVector<double>_u_0 TStack_108;
  longlong lStack_e8;
  TVector<double>_u_0 TStack_e0;
  TVector<double>_u_0 TStack_c8;
  TVector<double>_u_0 aTStack_b0 [4];
  
  lVar10 = *(longlong *)((longlong)param_1 + 0x18);
  iStackX_18 = *(int *)(*(longlong *)((longlong)param_1 + 0x20) + 0x14);
  uVar5 = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x20) + 0xc);
  uVar9 = *(uint *)(**(longlong **)((longlong)param_1 + 0x10) + (longlong)*param_2 * 4);
  uVar19 = 0;
  if ((int)uVar9 < *(int *)(lVar10 + 0x30)) {
    uVar19 = ~uVar9 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar10 = *(longlong *)(lVar10 + 0x28);
  this = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)param_1 + 0x20);
  lVar37 = (longlong)(int)uVar9 * 0x10;
  iVar28 = (int)this->_padding_;
  iVar34 = *(int *)((longlong)&this->_padding_ + 4);
  iVar30 = (int)uVar9 % iVar28;
  iVar20 = (int)uVar9 / (iVar34 * iVar28);
  iVar33 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar9 / (longlong)iVar28) >> 0x1f) << 0x20
                 | (longlong)(int)uVar9 / (longlong)iVar28 & 0xffffffffU) % (longlong)iVar34);
  lStack_e8 = lVar37;
  pTVar22 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                      (this,(iVar20 * iVar34 + iVar33) * iVar28 + iVar30);
  this_00 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)param_1 + 0x100);
  pTVar23 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                      (this_00,(iVar20 * *(int *)(*(longlong *)param_1 + 0x104) + iVar33) *
                               (int)this_00->_padding_ + iVar30);
  iVar36 = iVar20 * 8;
  iStack_158 = (int)uVar5;
  iVar28 = iVar30 * 8 + 8;
  iVar34 = iVar33 * 8;
  if (iVar28 < iStack_158) {
    iStack_158 = iVar28;
  }
  iStack_158 = iStack_158 + -1;
  iStack_154 = (int)((ulonglong)uVar5 >> 0x20);
  puVar32 = *(uint **)(lVar37 + lVar10);
  if (iVar34 + 8 < iStack_154) {
    iStack_154 = iVar34 + 8;
  }
  uVar9 = *(uint *)(lVar37 + 8 + lVar10);
  uVar27 = (ulonglong)(int)uVar9;
  iStackX_20 = iStack_154 + -1;
  if (iVar36 + 8 < iStackX_18) {
    iStackX_18 = iVar36 + 8;
  }
  iStackX_18 = iStackX_18 + -1;
  puVar1 = puVar32 + uVar27;
  while( true ) {
    iVar28 = iVar30 * 8;
    if (*(int *)(lVar37 + 8 + lVar10) != (int)uVar27) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (aiStackX_10);
    }
    if (puVar32 == puVar1) break;
    dVar38 = *(double *)((longlong)param_1 + 0x48);
    uVar19 = *puVar32;
    dVar6 = *(double *)((longlong)param_1 + 0x30);
    dVar7 = *(double *)((longlong)param_1 + 0x38);
    dVar8 = *(double *)((longlong)param_1 + 0x40);
    uVar27 = (ulonglong)(uVar19 & 0x1ff);
    lVar37 = *(longlong *)
              (*(longlong *)(**(longlong **)param_1 + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
    lVar11 = *(longlong *)(**(longlong **)param_1 + 0x10);
    uVar21 = *(uint *)(lVar37 + uVar27 * 0xc);
    uVar24 = (ulonglong)(uVar21 & 0x1ff);
    lVar12 = *(longlong *)(lVar11 + (ulonglong)(uVar21 >> 9) * 8);
    pdVar2 = (double *)(lVar12 + uVar24 * 0x18);
    uVar21 = *(uint *)(lVar37 + 4 + uVar27 * 0xc);
    uVar25 = (ulonglong)(uVar21 & 0x1ff);
    lVar13 = *(longlong *)(lVar11 + (ulonglong)(uVar21 >> 9) * 8);
    aTStack_b0[0]._0_8_ = (*pdVar2 - dVar6) * dVar38;
    aTStack_b0[0]._8_8_ = (pdVar2[1] - dVar7) * dVar38;
    pdVar2 = (double *)(lVar13 + uVar25 * 0x18);
    uVar21 = *(uint *)(lVar37 + 8 + uVar27 * 0xc);
    uVar27 = (ulonglong)(uVar21 & 0x1ff);
    aTStack_b0[0]._16_8_ = (*(double *)(lVar12 + 0x10 + uVar24 * 0x18) - dVar8) * dVar38;
    lVar37 = *(longlong *)(lVar11 + (ulonglong)(uVar21 >> 9) * 8);
    TStack_c8._s_0.Z = (*(double *)(lVar13 + 0x10 + uVar25 * 0x18) - dVar8) * dVar38;
    pdVar3 = (double *)(lVar37 + uVar27 * 0x18);
    TStack_108._s_0.Z = *(double *)(lVar37 + 0x10 + uVar27 * 0x18);
    TStack_c8._s_0.X = (*pdVar2 - dVar6) * dVar38;
    TStack_c8._s_0.Y = (pdVar2[1] - dVar7) * dVar38;
    TStack_e0._s_0.Z = (TStack_108._s_0.Z - dVar8) * dVar38;
    TStack_e0._s_0.X = (*pdVar3 - dVar6) * dVar38;
    TStack_e0._s_0.Y = (pdVar3[1] - dVar7) * dVar38;
    piVar4 = (int *)(**(longlong **)((longlong)param_1 + 8) + (longlong)(int)uVar19 * 0x18);
    uVar5 = *(undefined8 *)
             (**(longlong **)((longlong)param_1 + 8) + 0x10 + (longlong)(int)uVar19 * 0x18);
    iVar35 = iStack_158;
    if (*piVar4 < iStack_158) {
      iVar35 = *piVar4;
    }
    iVar16 = iVar28;
    if (iVar28 < iVar35) {
      iVar16 = iVar35;
    }
    iVar35 = iStackX_20;
    if (piVar4[1] < iStackX_20) {
      iVar35 = piVar4[1];
    }
    iVar17 = iVar34;
    if (iVar34 < iVar35) {
      iVar17 = iVar35;
    }
    iVar35 = iStackX_18;
    if (piVar4[2] < iStackX_18) {
      iVar35 = piVar4[2];
    }
    iVar31 = iVar36;
    if (iVar36 < iVar35) {
      iVar31 = iVar35;
    }
    iVar35 = iStack_158;
    if (piVar4[3] < iStack_158) {
      iVar35 = piVar4[3];
    }
    if (iVar28 < iVar35) {
      iVar28 = iVar35;
    }
    iStack_110 = (int)uVar5;
    iVar35 = iStackX_20;
    if (iStack_110 < iStackX_20) {
      iVar35 = iStack_110;
    }
    aiStackX_10[0] = iVar34;
    if (iVar34 < iVar35) {
      aiStackX_10[0] = iVar35;
    }
    iStack_10c = (int)((ulonglong)uVar5 >> 0x20);
    iVar35 = iStackX_18;
    if (iStack_10c < iStackX_18) {
      iVar35 = iStack_10c;
    }
    iVar26 = aiStackX_10[0];
    lVar37 = lStack_e8;
    iVar15 = iVar36;
    if (iVar36 < iVar35) {
      iVar15 = iVar35;
    }
    for (; lStack_e8 = lVar37, iVar31 <= iVar15; iVar31 = iVar31 + 1) {
      iVar35 = iVar17;
      if (iVar17 <= iVar26) {
        do {
          if (iVar16 <= iVar28) {
            iVar29 = iVar16;
            do {
              TStack_108._s_0.X = (double)iVar29;
              TStack_108._s_0.Y = (double)iVar35;
              TStack_108._s_0.Z = (double)iVar31;
              dVar38 = UE::Geometry::PointTriangleDistance
                                 ((TVector<double> *)&TStack_108._s_0,
                                  (TVector<double> *)&aTStack_b0[0]._s_0,
                                  (TVector<double> *)&TStack_c8._s_0,
                                  (TVector<double> *)&TStack_e0._s_0);
              uVar21 = ((iVar31 + iVar20 * -8) * 8 + iVar33 * -8 + iVar35) * 8 + iVar30 * -8 +
                       iVar29;
              fVar39 = (float)((double)*(float *)((longlong)param_1 + 0x50) * dVar38);
              if (fVar39 < (pTVar22->Data).Elements[uVar21]) {
                (pTVar22->Data).Elements[uVar21] = fVar39;
                (pTVar23->Data).Elements[uVar21] = uVar19;
              }
              iVar29 = iVar29 + 1;
              iVar26 = aiStackX_10[0];
            } while (iVar29 <= iVar28);
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 <= iVar26);
      }
      lVar37 = lStack_e8;
    }
    puVar32 = puVar32 + 1;
    uVar27 = (ulonglong)uVar9;
  }
  return;
}

// Call @ 14c976480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c953191) */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_spatial'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  TBasicBlockedDenseGrid3<float,8> *this;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  code *pcVar7;
  uint *puVar8;
  bool bVar9;
  uint uVar10;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  ForElementType<unsigned_int> FVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  TBlockData3<float,8> *pTVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_9a8 [32];
  longlong lStack_988;
  longlong lStack_980;
  bool abStack_978 [4];
  int iStack_974;
  int iStack_970;
  int iStack_968;
  int iStack_964;
  int iStack_960;
  int iStack_95c;
  int iStack_958;
  int iStack_954;
  longlong *plStack_950;
  int iStack_948;
  int iStack_944;
  int iStack_940;
  int iStack_93c;
  int iStack_938;
  uint uStack_934;
  TBlockData3<int,8> *pTStack_930;
  undefined8 uStack_928;
  int iStack_920;
  uint *puStack_918;
  longlong lStack_910;
  longlong lStack_908;
  uint *puStack_900;
  TBlockData3<float,8> *pTStack_8f8;
  ulonglong auStack_8f0 [3];
  double dStack_8d8;
  double dStack_8d0;
  double dStack_8c8;
  longlong alStack_8b8 [2];
  longlong lStack_8a8;
  longlong alStack_898 [3];
  longlong *plStack_880;
  undefined1 uStack_878;
  TBlockData3<bool,8> TStack_868;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_9a8;
  uStack_928 = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x20) + 0xc);
  iVar25 = *(int *)(*(longlong *)((longlong)param_1 + 0x20) + 0x14);
  lVar22 = *(longlong *)((longlong)param_1 + 0x18);
  iVar30 = *(int *)(lVar22 + 0x30);
  uVar27 = *(uint *)(**(longlong **)((longlong)param_1 + 0x10) + (longlong)*param_2 * 4);
  uVar20 = 0;
  if ((int)uVar27 < iVar30) {
    uVar20 = ~uVar27 >> 0x1f;
  }
  plStack_950 = param_1;
  iStack_920 = iVar25;
  if ((uVar20 == 0) &&
     (lStack_988 = (longlong)(int)uVar27, lStack_980 = (longlong)iVar30,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)param_1 + 0x20);
  lStack_908 = *(longlong *)(lVar22 + 0x28);
  lStack_910 = (longlong)(int)uVar27 << 4;
  iVar30 = (int)this->_padding_;
  iVar17 = *(int *)((longlong)&this->_padding_ + 4);
  iVar15 = (int)uVar27 % iVar30;
  iVar14 = (int)uVar27 / (iVar17 * iVar30);
  iVar16 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar27 / (longlong)iVar30) >> 0x1f) << 0x20
                 | (longlong)(int)uVar27 / (longlong)iVar30 & 0xffffffffU) % (longlong)iVar17);
  iStack_970 = iVar15 * 8;
  iVar28 = iVar14 * 8;
  iStack_974 = iVar16 * 8;
  pTStack_8f8 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                          (this,(iVar14 * iVar17 + iVar16) * iVar30 + iVar15);
  this_00 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)param_1 + 0x100);
  pTStack_930 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                          (this_00,(iVar16 + iVar14 * *(int *)(*(longlong *)param_1 + 0x104)) *
                                   (int)this_00->_padding_ + iVar15);
  abStack_978[0] = false;
  UE::Geometry::TBlockData3<bool,8>::TBlockData3<bool,8>(&TStack_868,abStack_978,-1);
  iVar30 = iVar16 * 8 + 8;
  iVar15 = iVar15 * 8;
  iStack_948 = (int)uStack_928;
  if (iVar15 + 8 < (int)uStack_928) {
    iStack_948 = iVar15 + 8;
  }
  iStack_948 = iStack_948 + -1;
  iStack_944 = uStack_928._4_4_;
  if (iVar30 < uStack_928._4_4_) {
    iStack_944 = iVar30;
  }
  iStack_944 = iStack_944 + -1;
  puVar21 = *(uint **)(lStack_910 + lStack_908);
  if (iVar28 + 8 < iVar25) {
    iVar25 = iVar28 + 8;
  }
  uStack_934 = *(uint *)(lStack_910 + 8 + lStack_908);
  uVar24 = (ulonglong)(int)uStack_934;
  iStack_940 = iVar25 + -1;
  uVar27 = 1;
  puStack_900 = puVar21 + uVar24;
  while( true ) {
    puVar8 = puStack_900;
    puStack_918 = puVar21;
    if (*(int *)(lStack_910 + 8 + lStack_908) != (int)uVar24) {
      abStack_978[1] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (abStack_978 + 1);
    }
    iVar25 = iStack_974;
    if (puVar21 == puVar8) {
      uVar20 = 0;
      pTStack_930 = (TBlockData3<int,8> *)((longlong)pTStack_930 - (longlong)pTStack_8f8);
      pTVar18 = pTStack_8f8;
      do {
        pTVar18 = (TBlockData3<float,8> *)&pTVar18->Data;
        if ((TStack_868.BitArray.NumBits <= (int)uVar20) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar11 = (ForElementType<unsigned_int>)&TStack_868.BitArray;
        if (TStack_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
           ) {
          FVar11 = TStack_868.BitArray.AllocatorInstance.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar11 + (ulonglong)(uVar20 >> 5) * 4) & uVar27) != 0) {
          fVar2 = *(float *)((longlong)param_1 + 0x30);
          pfVar6 = *(float **)((longlong)param_1 + 8);
          dStack_8c8 = (double)((float)(int)((uVar20 >> 6) + iVar28) * fVar2 + pfVar6[2]);
          dStack_8d0 = (double)((float)(int)((uVar20 >> 3 & 0x80000007) + iVar25) * fVar2 +
                               pfVar6[1]);
          dStack_8d8 = (double)((float)(int)((uVar20 & 7) + iVar15) * fVar2 + *pfVar6);
          alStack_8b8[0] = *(longlong *)((longlong)param_1 + 0x38);
          lStack_8a8 = 0;
          plStack_880 = (longlong *)0x0;
          uStack_878 = 0;
          iVar30 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x20))
                             (*(longlong **)(*(longlong *)param_1 + 8),&dStack_8d8,auStack_8f0,
                              alStack_8b8);
          if (lStack_8a8 != 0) {
            plVar12 = alStack_898;
            if (plStack_880 != (longlong *)0x0) {
              plVar12 = plStack_880;
            }
            (**(code **)(*plVar12 + 0x10))();
          }
          param_1 = plStack_950;
          if (iVar30 == -1) {
            ((TStaticArray<float,512,4294967295> *)pTVar18)->Elements[0] =
                 *(float *)((longlong)plStack_950 + 0x34);
          }
          else {
            auVar31._8_8_ = 0;
            auVar31._0_8_ = auStack_8f0[0];
            auVar31 = sqrtpd(auVar31,auVar31);
            ((TStaticArray<float,512,4294967295> *)pTVar18)->Elements[0] = (float)auVar31._0_8_;
            *(int *)((longlong)((TStaticArray<float,512,4294967295> *)pTVar18)->Elements +
                    (longlong)pTStack_930) = iVar30;
          }
        }
        uVar20 = uVar20 + 1;
        uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
      } while ((int)uVar20 < 0x200);
      if (TStack_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
      {
        FMemory::Free((void *)TStack_868.BitArray.AllocatorInstance.SecondaryData);
      }
      return;
    }
    uVar20 = *puVar21;
    lVar22 = (longlong)(int)uVar20;
    plVar12 = (longlong *)**(longlong **)param_1;
    plVar4 = (longlong *)plVar12[1];
    iVar25 = (int)plVar4[1];
    uVar10 = 0;
    if ((int)uVar20 < iVar25) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (lStack_988 = lVar22, lStack_980 = (longlong)iVar25,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar5 = *plVar4;
    uVar20 = *(uint *)(lVar5 + lVar22 * 0xc);
    uVar10 = 0;
    if ((int)uVar20 < *(int *)(*plVar12 + 8)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (lStack_988 = (longlong)(int)uVar20, lStack_980 = (longlong)*(int *)(*plVar12 + 8),
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = *(uint *)(lVar5 + 4 + lVar22 * 0xc);
    uVar10 = 0;
    if ((int)uVar20 < *(int *)(*plVar12 + 8)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (lStack_988 = (longlong)(int)uVar20, lStack_980 = (longlong)*(int *)(*plVar12 + 8),
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = *(uint *)(lVar5 + 8 + lVar22 * 0xc);
    uVar10 = 0;
    if ((int)uVar20 < *(int *)(*plVar12 + 8)) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (lStack_988 = (longlong)(int)uVar20, lStack_980 = (longlong)*(int *)(*plVar12 + 8),
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    piVar1 = (int *)(*(longlong *)plStack_950[5] + lVar22 * 0x18);
    uVar3 = *(undefined8 *)(*(longlong *)plStack_950[5] + 0x10 + lVar22 * 0x18);
    iVar25 = iStack_948;
    if (*piVar1 < iStack_948) {
      iVar25 = *piVar1;
    }
    iStack_968 = iVar15;
    if (iVar15 < iVar25) {
      iStack_968 = iVar25;
    }
    iVar25 = iStack_944;
    if (piVar1[1] < iStack_944) {
      iVar25 = piVar1[1];
    }
    iStack_964 = iStack_974;
    if (iStack_974 < iVar25) {
      iStack_964 = iVar25;
    }
    iVar25 = iStack_940;
    if (piVar1[2] < iStack_940) {
      iVar25 = piVar1[2];
    }
    iVar30 = iVar28;
    if (iVar28 < iVar25) {
      iVar30 = iVar25;
    }
    iVar25 = iStack_948;
    if (piVar1[3] < iStack_948) {
      iVar25 = piVar1[3];
    }
    iVar17 = iVar15;
    if (iVar15 < iVar25) {
      iVar17 = iVar25;
    }
    iStack_958 = (int)uVar3;
    iVar25 = iStack_944;
    if (iStack_958 < iStack_944) {
      iVar25 = iStack_958;
    }
    iStack_938 = iStack_974;
    if (iStack_974 < iVar25) {
      iStack_938 = iVar25;
    }
    iStack_954 = (int)((ulonglong)uVar3 >> 0x20);
    iVar25 = iStack_940;
    if (iStack_954 < iStack_940) {
      iVar25 = iStack_954;
    }
    iVar16 = iVar28;
    if (iVar28 < iVar25) {
      iVar16 = iVar25;
    }
    _iStack_958 = CONCAT44(iVar16,iStack_938);
    iVar25 = iStack_974;
    iStack_960 = iVar30;
    iStack_95c = iVar17;
    iStack_93c = iVar17;
    iVar19 = iStack_968;
    iVar29 = iStack_964;
    iVar23 = iVar17;
    iVar13 = iStack_938;
    iVar26 = iStack_938;
    if (iVar30 <= iVar16) {
      do {
        if (iVar29 <= iVar26) {
          do {
            if (iVar19 <= iVar23) {
              do {
                iVar16 = ((((iVar30 + iVar14 * -8) * 8 - iVar25) + iVar29) * 8 - iVar15) + iVar19;
                if (((iVar16 < 0) || (TStack_868.BitArray.NumBits <= iVar16)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), iVar25 = iStack_974, bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar11 = (ForElementType<unsigned_int>)&TStack_868.BitArray;
                if (TStack_868.BitArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar11 = TStack_868.BitArray.AllocatorInstance.SecondaryData;
                }
                iVar15 = iVar16;
                if (iVar16 < 0) {
                  iVar15 = iVar16 + 0x1f;
                }
                iVar19 = iVar19 + 1;
                puVar21 = (uint *)((longlong)FVar11 + (longlong)(iVar15 >> 5) * 4);
                *puVar21 = *puVar21 | 1 << ((byte)iVar16 & 0x1f);
                iVar15 = iStack_970;
              } while (iVar19 <= iVar17);
              iVar19 = iStack_968;
              iVar23 = iStack_93c;
              iVar13 = iStack_958;
            }
            iVar29 = iVar29 + 1;
          } while (iVar29 <= iVar13);
          iVar29 = iStack_964;
          iVar26 = iStack_938;
          iVar16 = iStack_954;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 <= iVar16);
    }
    puVar21 = puStack_918 + 1;
    uVar24 = (ulonglong)uStack_934;
    param_1 = plStack_950;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// Call @ 14c976490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c953739) */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_spatial'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  TBasicBlockedDenseGrid3<float,8> *this;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TBasicBlockedDenseGrid3<int,8> *this_00;
  ForElementType<unsigned_int> FVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TBlockData3<float,8> *pTVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_9a8 [32];
  longlong lStack_988;
  longlong lStack_980;
  bool abStack_978 [4];
  int iStack_974;
  int iStack_970;
  int iStack_96c;
  int iStack_968;
  int iStack_964;
  int iStack_960;
  int iStack_95c;
  int iStack_958;
  int iStack_954;
  int iStack_950;
  int iStack_94c;
  int iStack_948;
  int iStack_944;
  uint uStack_940;
  TBlockData3<int,8> *pTStack_938;
  longlong *plStack_930;
  undefined8 uStack_928;
  int iStack_920;
  int *piStack_918;
  longlong lStack_910;
  longlong lStack_908;
  int *piStack_900;
  TBlockData3<float,8> *pTStack_8f8;
  ulonglong auStack_8f0 [3];
  double dStack_8d8;
  double dStack_8d0;
  double dStack_8c8;
  longlong alStack_8b8 [2];
  longlong lStack_8a8;
  longlong alStack_898 [3];
  longlong *plStack_880;
  undefined1 uStack_878;
  TBlockData3<bool,8> TStack_868;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_9a8;
  iStack_974 = *(int *)(*(longlong *)((longlong)param_1 + 0x20) + 0x14);
  uStack_928 = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x20) + 0xc);
  lVar5 = *(longlong *)((longlong)param_1 + 0x18);
  iVar24 = *(int *)(lVar5 + 0x30);
  uVar25 = *(uint *)(**(longlong **)((longlong)param_1 + 0x10) + (longlong)*param_2 * 4);
  uVar18 = 0;
  if ((int)uVar25 < iVar24) {
    uVar18 = ~uVar25 >> 0x1f;
  }
  plStack_930 = param_1;
  iStack_920 = iStack_974;
  if ((uVar18 == 0) &&
     (lStack_988 = (longlong)(int)uVar25, lStack_980 = (longlong)iVar24,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this = *(TBasicBlockedDenseGrid3<float,8> **)((longlong)param_1 + 0x20);
  lStack_908 = *(longlong *)(lVar5 + 0x28);
  lStack_910 = (longlong)(int)uVar25 << 4;
  iVar24 = (int)this->_padding_;
  iVar27 = *(int *)((longlong)&this->_padding_ + 4);
  iVar14 = (int)uVar25 % iVar24;
  iVar13 = (int)uVar25 / (iVar27 * iVar24);
  iVar22 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)(int)uVar25 / (longlong)iVar24) >> 0x1f) << 0x20
                 | (longlong)(int)uVar25 / (longlong)iVar24 & 0xffffffffU) % (longlong)iVar27);
  iStack_970 = iVar22 * 8;
  iStack_96c = iVar14 * 8;
  iVar26 = iVar13 * 8;
  pTStack_8f8 = UE::Geometry::TBasicBlockedDenseGrid3<float,8>::TouchBlockData
                          (this,(iVar13 * iVar27 + iVar22) * iVar24 + iVar14);
  this_00 = (TBasicBlockedDenseGrid3<int,8> *)(*(longlong *)param_1 + 0x100);
  pTStack_938 = UE::Geometry::TBasicBlockedDenseGrid3<int,8>::TouchBlockData
                          (this_00,(iVar22 + iVar13 * *(int *)(*(longlong *)param_1 + 0x104)) *
                                   (int)this_00->_padding_ + iVar14);
  abStack_978[0] = false;
  UE::Geometry::TBlockData3<bool,8>::TBlockData3<bool,8>(&TStack_868,abStack_978,-1);
  iVar14 = iVar14 * 8;
  iVar22 = iVar22 * 8;
  uVar25 = 1;
  iStack_968 = (int)uStack_928;
  if (iVar14 + 8 < (int)uStack_928) {
    iStack_968 = iVar14 + 8;
  }
  iStack_968 = iStack_968 + -1;
  iStack_964 = uStack_928._4_4_;
  if (iVar22 + 8 < uStack_928._4_4_) {
    iStack_964 = iVar22 + 8;
  }
  iStack_964 = iStack_964 + -1;
  piVar19 = *(int **)(lStack_910 + lStack_908);
  if (iVar26 + 8 < iStack_974) {
    iStack_974 = iVar26 + 8;
  }
  uStack_940 = *(uint *)(lStack_910 + 8 + lStack_908);
  uVar21 = (ulonglong)(int)uStack_940;
  iVar24 = iStack_974 + -1;
  piStack_900 = piVar19 + uVar21;
  iStack_974 = iVar24;
  while( true ) {
    piVar1 = piStack_900;
    iVar27 = iStack_964;
    piStack_918 = piVar19;
    if (*(int *)(lStack_910 + 8 + lStack_908) != (int)uVar21) {
      abStack_978[1] = false;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (abStack_978 + 1);
      iVar22 = iStack_970;
      iVar24 = iStack_974;
    }
    iVar28 = iStack_970;
    if (piVar19 == piVar1) break;
    piVar1 = (int *)(**(longlong **)((longlong)param_1 + 0x28) + (longlong)*piVar19 * 0x18);
    uVar4 = *(undefined8 *)
             (**(longlong **)((longlong)param_1 + 0x28) + 0x10 + (longlong)*piVar19 * 0x18);
    iVar28 = iStack_968;
    if (*piVar1 < iStack_968) {
      iVar28 = *piVar1;
    }
    iStack_960 = iVar14;
    if (iVar14 < iVar28) {
      iStack_960 = iVar28;
    }
    if (piVar1[1] < iVar27) {
      iVar27 = piVar1[1];
    }
    iStack_95c = iVar22;
    if (iVar22 < iVar27) {
      iStack_95c = iVar27;
    }
    iVar27 = iVar24;
    if (piVar1[2] < iVar24) {
      iVar27 = piVar1[2];
    }
    iVar28 = iVar26;
    if (iVar26 < iVar27) {
      iVar28 = iVar27;
    }
    iVar27 = iStack_968;
    if (piVar1[3] < iStack_968) {
      iVar27 = piVar1[3];
    }
    iVar15 = iVar14;
    if (iVar14 < iVar27) {
      iVar15 = iVar27;
    }
    iStack_950 = (int)uVar4;
    iVar27 = iStack_964;
    if (iStack_950 < iStack_964) {
      iVar27 = iStack_950;
    }
    iStack_944 = iVar22;
    if (iVar22 < iVar27) {
      iStack_944 = iVar27;
    }
    iStack_94c = (int)((ulonglong)uVar4 >> 0x20);
    iVar27 = iVar24;
    if (iStack_94c < iVar24) {
      iVar27 = iStack_94c;
    }
    iVar9 = iVar26;
    if (iVar26 < iVar27) {
      iVar9 = iVar27;
    }
    _iStack_950 = CONCAT44(iVar9,iStack_944);
    iStack_958 = iVar28;
    iStack_954 = iVar15;
    iStack_948 = iVar15;
    iVar27 = iStack_95c;
    iVar17 = iStack_960;
    iVar12 = iStack_944;
    iVar23 = iStack_944;
    iVar20 = iVar15;
    if (iVar28 <= iVar9) {
      do {
        if (iVar27 <= iVar23) {
          do {
            if (iVar17 <= iVar20) {
              do {
                iVar24 = ((((iVar28 + iVar13 * -8) * 8 - iVar22) + iVar27) * 8 - iVar14) + iVar17;
                if (((iVar24 < 0) || (TStack_868.BitArray.NumBits <= iVar24)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), iVar22 = iStack_970, bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar10 = (ForElementType<unsigned_int>)&TStack_868.BitArray;
                if (TStack_868.BitArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar10 = TStack_868.BitArray.AllocatorInstance.SecondaryData;
                }
                iVar14 = iVar24;
                if (iVar24 < 0) {
                  iVar14 = iVar24 + 0x1f;
                }
                iVar17 = iVar17 + 1;
                puVar2 = (uint *)((longlong)FVar10 + (longlong)(iVar14 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)iVar24 & 0x1f);
                iVar14 = iStack_96c;
              } while (iVar17 <= iVar15);
              iVar17 = iStack_960;
              iVar12 = iStack_950;
              iVar20 = iStack_948;
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 <= iVar12);
          iVar27 = iStack_95c;
          iVar23 = iStack_944;
          iVar9 = iStack_94c;
        }
        iVar28 = iVar28 + 1;
        iVar24 = iStack_974;
      } while (iVar28 <= iVar9);
    }
    piVar19 = piStack_918 + 1;
    uVar21 = (ulonglong)uStack_940;
    param_1 = plStack_930;
  }
  uVar18 = 0;
  pTStack_938 = (TBlockData3<int,8> *)((longlong)pTStack_938 - (longlong)pTStack_8f8);
  pTVar16 = pTStack_8f8;
  do {
    pTVar16 = (TBlockData3<float,8> *)&pTVar16->Data;
    if ((TStack_868.BitArray.NumBits <= (int)uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&TStack_868.BitArray;
    if (TStack_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = TStack_868.BitArray.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar10 + (ulonglong)(uVar18 >> 5) * 4) & uVar25) != 0) {
      fVar3 = *(float *)((longlong)param_1 + 0x30);
      pfVar6 = *(float **)((longlong)param_1 + 8);
      dStack_8c8 = (double)((float)(int)((uVar18 >> 6) + iVar26) * fVar3 + pfVar6[2]);
      dStack_8d0 = (double)((float)(int)((uVar18 >> 3 & 0x80000007) + iVar28) * fVar3 + pfVar6[1]);
      dStack_8d8 = (double)((float)(int)((uVar18 & 7) + iVar14) * fVar3 + *pfVar6);
      alStack_8b8[0] = *(longlong *)((longlong)param_1 + 0x38);
      lStack_8a8 = 0;
      plStack_880 = (longlong *)0x0;
      uStack_878 = 0;
      iVar24 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x20))
                         (*(longlong **)(*(longlong *)param_1 + 8),&dStack_8d8,auStack_8f0,
                          alStack_8b8);
      if (lStack_8a8 != 0) {
        plVar11 = alStack_898;
        if (plStack_880 != (longlong *)0x0) {
          plVar11 = plStack_880;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      param_1 = plStack_930;
      if (iVar24 == -1) {
        ((TStaticArray<float,512,4294967295> *)pTVar16)->Elements[0] =
             *(float *)((longlong)plStack_930 + 0x34);
      }
      else {
        auVar29._8_8_ = 0;
        auVar29._0_8_ = auStack_8f0[0];
        auVar29 = sqrtpd(auVar29,auVar29);
        ((TStaticArray<float,512,4294967295> *)pTVar16)->Elements[0] = (float)auVar29._0_8_;
        *(int *)((longlong)((TStaticArray<float,512,4294967295> *)pTVar16)->Elements +
                (longlong)pTStack_938) = iVar24;
      }
    }
    uVar18 = uVar18 + 1;
    uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
  } while ((int)uVar18 < 0x200);
  if (TStack_868.BitArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)TStack_868.BitArray.AllocatorInstance.SecondaryData);
  }
  return;
}

// Call @ 14c9764a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l8::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::FOffsetMeshRegion::EdgesSeparateSameGroupsAndAreColinearAtBorder
                    (*(FDynamicMesh3 **)((longlong)param_1 + 8),*param_2,*param_3,
                     *(bool *)(*(longlong *)param_1 + 0x16a));
  return bVar1;
}

// Call @ 14c9764c0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  `UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l10::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14c9764f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l16::<lambda_1>,bool>::
Call(void *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)**(undefined8 **)param_1;
  if (pcVar1 == (char *)0x0) {
    return false;
  }
  if (*pcVar1 == '\0') {
    CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar5 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 14c976560

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  `UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l19::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14c976590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FBendMeshOp::CalculateResult'::__l24::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FBendMeshOp::CalculateResult'::__l24::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9765a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l28::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::AreTrianglesConnected
                    (*(TDynamicMeshOverlay<float,2> **)param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c9765c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>::
          operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c9765d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CalculateResult_RegionOptimization'::__l33::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FRecomputeUVsOp::CalculateResult_RegionOptimization'::__l33::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c9765e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l34::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l34::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 14c976600

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FCurveSweepOp::CalculateResult'::__l39::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FCurveSweepOp::CalculateResult'::__l39::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 14c976620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FBooleanMeshesOp::CalculateResult'::__l47::<lambda_1>,bool,int>::
Call(void *param_1,int *param_2)

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
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_14c97666f;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14c97666f:
  return iVar2 != -1;
}

// Call @ 14c976680

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l47::<lambda_1>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l47::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return bVar1;
}

// Call @ 14c9766a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l49::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l49::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c9766b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FFlareMeshOp::CalculateResult'::__l11::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FFlareMeshOp::CalculateResult'::__l11::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9766c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FTwistMeshOp::CalculateResult'::__l11::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FTwistMeshOp::CalculateResult'::__l11::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9766d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l11::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::FOffsetMeshRegion::EdgesSeparateSameGroupsAndAreColinearAtBorder
                    (*(FDynamicMesh3 **)((longlong)param_1 + 8),*param_2,*param_3,
                     *(bool *)(*(longlong *)param_1 + 0xda));
  return bVar1;
}

// Call @ 14c9766f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSelfUnionMeshesOp::CalculateResult'::__l14::<lambda_1>,bool,int>
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
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_14c97673f;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14c97673f:
  return iVar2 != -1;
}

// Call @ 14c976750

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l14::<lambda_1>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this;
  TVector<double>_u_0 TStack_28;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((((*(double *)((longlong)param_1 + 8) <= dVar1) &&
       (dVar2 = (param_2->field0_0x0)._s_0.Y, *(double *)((longlong)param_1 + 0x10) <= dVar2)) &&
      (dVar3 = (param_2->field0_0x0)._s_0.Z, *(double *)((longlong)param_1 + 0x18) <= dVar3)) &&
     (((dVar1 < *(double *)((longlong)param_1 + 0x20) ||
        dVar1 == *(double *)((longlong)param_1 + 0x20) &&
       (dVar2 < *(double *)((longlong)param_1 + 0x28) ||
        dVar2 == *(double *)((longlong)param_1 + 0x28))) &&
      (dVar3 < *(double *)((longlong)param_1 + 0x30) ||
       dVar3 == *(double *)((longlong)param_1 + 0x30))))) {
    this = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(*(longlong *)param_1 + 0x10);
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this,false);
    TStack_28._s_0.X = (param_2->field0_0x0)._s_0.X;
    TStack_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    TStack_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar1 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                      (this,this->Tree->RootIndex,(TVector<double> *)&TStack_28._s_0);
    return dVar1;
  }
  dVar1 = *(double *)(*(longlong *)param_1 + 0x18) + __real_3ff0000000000000;
  return (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
}

// Call @ 14c976760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FBendMeshOp::CalculateResult'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FBendMeshOp::CalculateResult'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FFlareMeshOp::CalculateResult'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FFlareMeshOp::CalculateResult'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FTwistMeshOp::CalculateResult'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Geometry::FTwistMeshOp::CalculateResult'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976790

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l2::<lambda_2>,bool>::
Call(void *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)**(undefined8 **)param_1;
  if (pcVar1 == (char *)0x0) {
    return false;
  }
  if (*pcVar1 == '\0') {
    CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar5 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 14c976800

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelSolidifyMeshesOp::CalculateResult'::__l2::<lambda_2>,bool>::
Call(void *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)**(undefined8 **)param_1;
  if (pcVar1 == (char *)0x0) {
    return false;
  }
  if (*pcVar1 == '\0') {
    CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar5 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 14c976870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c976880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_intersections'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::compute_intersections'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2
  ::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9768a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::compute_tri_bboxes'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  FVector3i *pFVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if ((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)(**(longlong **)param_1 + 8) + 8))) {
    pFVar1 = (FVector3i *)(**(longlong **)((longlong)param_1 + 0x10) + (longlong)iVar2 * 0x18);
    `UE::Geometry::
    TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
    ::compute_tri_bboxes'::__l2::<lambda_1>::operator()
              (*(void **)((longlong)param_1 + 8),iVar2,pFVar1,pFVar1 + 1);
    return;
  }
  return;
}

// Call @ 14c9768e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_tri_bboxes'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_tri_bboxes'::__l2::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c9768f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_floodfill'::__l4::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::make_level_set3_parallel_floodfill'::__l4::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_floodfill'::__l4::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
  make_level_set3_parallel_floodfill'::__l4::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::scatter_tris'::__l4::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::scatter_tris'::__l4::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l4::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::scatter_tris'::__l4::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::update_signs'::__l5::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::update_signs'::__l5::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::update_signs'::__l5::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976950

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l8::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<double> *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)param_1;
  dVar1 = *(double *)(lVar6 + 0xa8);
  dVar2 = *(double *)(lVar6 + 200);
  dVar3 = *(double *)(lVar6 + 0xd0);
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * *(double *)(lVar6 + 0xc0) + (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 * dVar2 + dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar3 + dVar5;
  return __return_storage_ptr__;
}

// Call @ 14c9769b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l10::<lambda_2>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return true;
}

// Call @ 14c9769c0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate'::__l16::<lambda_2>,double,UE::Math::TVector<double>_>
::Call(void *param_1,TVector<double> *param_2)

{
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this;
  double dVar1;
  TVector<double>_u_0 local_28;
  
  this = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)(*(longlong *)param_1 + 0x10);
  UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(this,false);
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar1 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                    (this,this->Tree->RootIndex,(TVector<double> *)&local_28._s_0);
  return dVar1;
}

// Call @ 14c976a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l18::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::make_grid'::__l18::<lambda_2>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976a30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UVTexelDensityOpLocals::CollectIslandComponentsPerTile'::__l30::<lambda_2>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::AreTrianglesConnected
                    (*(TDynamicMeshOverlay<float,2> **)param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c976a50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>::
          operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c976a60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l35::<lambda_2>,bool>
::Call(void *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)**(undefined8 **)param_1;
  if (pcVar1 == (char *)0x0) {
    return false;
  }
  if (*pcVar1 == '\0') {
    CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar5 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 14c976ad0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l44::<lambda_2>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_4;
  iVar1 = UE::Geometry::FPolygroupSet::GetTriangleGroup
                    (*(FPolygroupSet **)((longlong)param_1 + 8),*param_3);
  iVar2 = UE::Geometry::FPolygroupSet::GetTriangleGroup
                    (*(FPolygroupSet **)((longlong)param_1 + 8),iVar2);
  return iVar1 == iVar2;
}

// Call @ 14c976b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l55::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l55::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14c976b30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l57::<lambda_2>,bool,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_4;
  iVar1 = UE::Geometry::FPolygroupSet::GetTriangleGroup
                    (*(FPolygroupSet **)((longlong)param_1 + 8),*param_3);
  iVar2 = UE::Geometry::FPolygroupSet::GetTriangleGroup
                    (*(FPolygroupSet **)((longlong)param_1 + 8),iVar2);
  return iVar1 == iVar2;
}

// Call @ 14c976b80

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Box'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976c20

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Cylinder'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976cc0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_ExpMap'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976d60

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Plane'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  lVar5 = *(longlong *)param_1;
  local_28.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X * *(double *)(lVar5 + 0xe8);
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar5 + 0xf0);
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z * *(double *)(lVar5 + 0xf8);
  pTVar6 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar5 + 0xb0),
                      (TVector<double> *)&local_48._s_0);
  dVar1 = *(double *)(lVar5 + 0xd8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X + *(double *)(lVar5 + 0xd0);
  dVar3 = *(double *)(lVar5 + 0xe0);
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// Call @ 14c976e00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l13::<lambda_2>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return true;
}

// Call @ 14c976e10

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l15::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<double> *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)param_1;
  dVar1 = *(double *)(lVar6 + 0xa8);
  dVar2 = *(double *)(lVar6 + 200);
  dVar3 = *(double *)(lVar6 + 0xd0);
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * *(double *)(lVar6 + 0xc0) + (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 * dVar2 + dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar3 + dVar5;
  return __return_storage_ptr__;
}

// Call @ 14c976e70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FVoxelMorphologyMeshesOp::CalculateResult'::__l2::<lambda_3>,bool>
::Call(void *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)**(undefined8 **)param_1;
  if (pcVar1 == (char *)0x0) {
    return false;
  }
  if (*pcVar1 == '\0') {
    CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar5 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4);
    *pcVar1 = cVar3;
    if (cVar3 == '\0') {
      return false;
    }
  }
  return true;
}

// Call @ 14c976ee0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<double> *param_3,int *param_4)

{
  `UE::Geometry::FLinearExtrusionOp::CalculateResultInPlace'::__l2::<lambda_3>::operator()
            (param_1,__return_storage_ptr__,param_2,param_3,*param_4);
  return __return_storage_ptr__;
}

// Call @ 14c976f20

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRegionOffsetOp::CalculateResultInPlace'::__l2::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<double> *param_3,int *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar1 = *(double *)(*(longlong *)param_1 + 0xa8);
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar3 = dVar1 * (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar1 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar1 * dVar4 + dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  return __return_storage_ptr__;
}

// Call @ 14c976f60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::make_level_set3_parallel_floodfill'::__l9::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::
  TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  ::make_level_set3_parallel_floodfill'::__l9::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::make_level_set3_parallel_floodfill'::__l9::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::
  make_level_set3_parallel_floodfill'::__l9::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14c976f80

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l10::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<double> *param_3,int *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar1 = *(double *)(*(longlong *)param_1 + 0xa8);
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar3 = dVar1 * (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar1 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar1 * dVar4 + dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  return __return_storage_ptr__;
}

// Call @ 14c976fc0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l17::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,TVector<double> *param_2,
      TVector<double> *param_3,int *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar1 = *(double *)(*(longlong *)param_1 + 0xa8);
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar3 = dVar1 * (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar1 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar1 * dVar4 + dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  return __return_storage_ptr__;
}

// Call @ 14c977000

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l37::<lambda_3>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_3;
  iVar1 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                    (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),*param_2);
  iVar2 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                    (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),iVar2);
  return iVar1 == iVar2;
}

// Call @ 14c977050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_3>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_3>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c977060

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_3>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_3>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c977070

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l39::<lambda_4>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_3;
  iVar1 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                    (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),*param_2);
  iVar2 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                    (*(FDynamicMesh3 **)(*(longlong *)param_1 + 8),iVar2);
  return iVar1 == iVar2;
}

// Call @ 14c9770c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_4>,void,int,int,float_*>
::Call(void *param_1,int *param_2,int *param_3,float **param_4)

{
  `UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_4>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 14c9770e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_4>,void,int,int,float_*>
::Call(void *param_1,int *param_2,int *param_3,float **param_4)

{
  `UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_4>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 14c977100

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l44::<lambda_5>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::AreTrianglesConnected
                    (*(TDynamicMeshOverlay<float,2> **)param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 14c977120

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l46::<lambda_6>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::AreTrianglesConnected
                    (*(TDynamicMeshOverlay<float,2> **)param_1,*param_2,*param_3);
  return bVar1;
}

