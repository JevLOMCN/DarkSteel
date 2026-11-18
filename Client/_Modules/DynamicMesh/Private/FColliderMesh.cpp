// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// GetTriNormal @ 14c8f87c0

TVector<double> * __thiscall
UE::Geometry::FColliderMesh::GetTriNormal
          (FColliderMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  int local_28;
  int iStack_24;
  
  uVar8 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pFVar3 = (this->Triangles).AllocatorInstance.Data;
  iVar2 = *(int *)(pFVar3 + (longlong)param_1 * 0xc + 8);
  lVar1 = *(longlong *)(pFVar3 + (longlong)param_1 * 0xc);
  if (iVar2 < 0 || (this->Vertices).ArrayNum <= iVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  iStack_24 = (int)((ulonglong)lVar1 >> 0x20);
  if (lVar1 < 0 || (this->Vertices).ArrayNum <= iStack_24) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pFVar4 = (this->Vertices).AllocatorInstance.Data;
  local_28 = (int)lVar1;
  if (local_28 < 0 || (this->Vertices).ArrayNum <= local_28) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  VectorUtil::Normal<double>
            (__return_storage_ptr__,
             (TVector<double> *)
             ((this->Vertices).AllocatorInstance.Data + (longlong)local_28 * 0x18),
             (TVector<double> *)(pFVar4 + (longlong)iStack_24 * 0x18),
             (TVector<double> *)(pFVar3 + (longlong)iVar2 * 0x18));
  return __return_storage_ptr__;
}

// GetTriangle @ 14c8f8980

FIndex3i * __thiscall
UE::Geometry::FColliderMesh::GetTriangle
          (FColliderMesh *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIndex3i *pFVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FIndex3i *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2 = (this->Triangles).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0xc + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(pFVar2 + (longlong)param_1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// GetVertex @ 14c8f9aa0

TVector<double> * __thiscall
UE::Geometry::FColliderMesh::GetVertex
          (FColliderMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  dVar5 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

