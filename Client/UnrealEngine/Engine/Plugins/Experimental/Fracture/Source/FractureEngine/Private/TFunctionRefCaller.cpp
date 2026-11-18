// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 7

// Call @ 14e8072f0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_1>,double,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*plVar2 + (longlong)(int)uVar1 * 8);
}

// Call @ 14e807360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVoronoiPartitioner::GenerateCentroids'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FVoronoiPartitioner::GenerateCentroids'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e807370

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::AppendConvexHullToCompactDynamicMesh'::__l18::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  TVector<float,3> *pTVar3;
  
  pTVar3 = ::Chaos::FConvex::GetVertex(*(FConvex **)param_1,*param_2);
  fVar1 = *(float *)&pTVar3->field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)pTVar3;
  fVar2 = *(float *)&pTVar3->field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  return __return_storage_ptr__;
}

// Call @ 14e8073c0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_2>,int,int>::
Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*plVar2 + (longlong)(int)uVar1 * 4);
}

// Call @ 14e807430

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_3>,UE::Math::TVector<double>,int,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,int *param_3)

{
  `FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_3>::operator()
            (param_1,__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 14e807460

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,bool,UE::Geometry::FConvexDecomposition3::FConvexPart_const_&,UE::Geometry::FConvexDecomposition3::FConvexPart_const_&>
::Call(void *param_1,FConvexPart *param_2,FConvexPart *param_3)

{
  double dVar1;
  
  if ((param_2->bMustMerge == false) && (param_3->bMustMerge == false)) {
    dVar1 = *(double *)param_1;
    if (((dVar1 <= param_2->SumHullsVolume) ||
        (dVar1 < param_3->SumHullsVolume || dVar1 == param_3->SumHullsVolume)) &&
       ((dVar1 = *(double *)((longlong)param_1 + 8), dVar1 <= param_2->SumHullsVolume &&
        (dVar1 < param_3->SumHullsVolume || dVar1 == param_3->SumHullsVolume)))) {
      return false;
    }
  }
  return true;
}

// Call @ 14e8074c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  UE::Geometry::FSizedDisjointSet::Union(*(FSizedDisjointSet **)param_1,*param_2,*param_3);
  return;
}

