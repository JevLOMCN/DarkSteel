// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// ~FGeometrySet3 @ 14cad1970

void __thiscall UE::Geometry::FGeometrySet3::~FGeometrySet3(FGeometrySet3 *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->CurveIDToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveIDToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveIDToIndex);
  DestructItems<UE::Geometry::FGeometrySet3::FCurve,int>
            ((FCurve *)(this->Curves).AllocatorInstance.Data,(this->Curves).ArrayNum);
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PointIDToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PointIDToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PointIDToIndex);
  pFVar2 = (this->Points).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14cad3940

void __thiscall
`UE::Geometry::FGeometrySet3::
ParallelFindAllCurvesSatisfying<`UCollisionPrimitivesMechanic::OnDragRectangleChanged'::__l2::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x68)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = `UCollisionPrimitivesMechanic::OnDragRectangleChanged'::__l2::<lambda_1>::operator()
                    (*(void **)((longlong)this + 8),
                     (TPolyline<double,3> *)
                     (*(longlong *)(lVar1 + 0x60) + ((longlong)param_1 * 9 + 1) * 8));
  if (bVar4) {
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined1 *)((longlong)param_1 + *plVar2) = 1;
  }
  return;
}

// operator() @ 14cb66020

void __thiscall
`UE::Geometry::FGeometrySet3::
ParallelFindAllCurvesSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l8::<lambda_2>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x68)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = `FMeshTopologySelector::FindSelectedElement'::__l8::<lambda_2>::operator()
                    (*(void **)((longlong)this + 8),
                     (TPolyline<double,3> *)
                     (*(longlong *)(lVar1 + 0x60) + ((longlong)param_1 * 9 + 1) * 8));
  if (bVar4) {
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined1 *)((longlong)param_1 + *plVar2) = 1;
  }
  return;
}

// operator() @ 14cb66120

void __thiscall
`UE::Geometry::FGeometrySet3::
ParallelFindAllPointsSatisfying<`FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = `FMeshTopologySelector::FindSelectedElement'::__l5::<lambda_1>::operator()
                    (*(void **)((longlong)this + 8),
                     (TVector<double> *)(*plVar1 + 8 + (longlong)param_1 * 0x20));
  if (bVar3) {
    plVar1 = *(longlong **)((longlong)this + 0x10);
    uVar4 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined1 *)((longlong)param_1 + *plVar1) = 1;
  }
  return;
}

