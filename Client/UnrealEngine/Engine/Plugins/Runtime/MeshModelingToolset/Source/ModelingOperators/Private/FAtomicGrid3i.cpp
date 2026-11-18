// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// operator() @ 14c94aa20

void __thiscall
``UE::Geometry::
TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::compute_intersections'::__l2::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *_Dst;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_28 [2];
  
  lVar8 = (longlong)param_1;
  if (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x20) + lVar8 * 0x10) != 0) {
    _Dst = ::operator_new(0x800);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      memset(_Dst,0,0x800);
    }
    lVar2 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar2 + 0x20)) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + lVar8 * 8);
    if (puVar1 != local_28) {
      pvVar3 = (void *)*puVar1;
      *puVar1 = _Dst;
      _Dst = (void *)0x0;
      ::operator_delete(pvVar3,0x800);
    }
    ::operator_delete(_Dst,0x800);
    lVar2 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar2 + 0x20)) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + lVar8 * 8);
    uVar7 = 0;
    do {
      LOCK();
      *(undefined4 *)(lVar8 + uVar7 * 4) = 0;
      UNLOCK();
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < 0x200);
  }
  return;
}

// operator() @ 14c94ab80

void __thiscall
``UE::Geometry::TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2
::FAtomicGrid3i::FAtomicGrid3i'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *_Dst;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_28 [2];
  
  lVar8 = (longlong)param_1;
  if (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x20) + lVar8 * 0x10) != 0) {
    _Dst = ::operator_new(0x800);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      memset(_Dst,0,0x800);
    }
    lVar2 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar2 + 0x20)) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + lVar8 * 8);
    if (puVar1 != local_28) {
      pvVar3 = (void *)*puVar1;
      *puVar1 = _Dst;
      _Dst = (void *)0x0;
      ::operator_delete(pvVar3,0x800);
    }
    ::operator_delete(_Dst,0x800);
    lVar2 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar2 + 0x20)) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + lVar8 * 8);
    uVar7 = 0;
    do {
      LOCK();
      *(undefined4 *)(lVar8 + uVar7 * 4) = 0;
      UNLOCK();
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < 0x200);
  }
  return;
}

