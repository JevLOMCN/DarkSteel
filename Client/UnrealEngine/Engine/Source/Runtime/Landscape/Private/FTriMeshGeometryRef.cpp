// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// FTriMeshGeometryRef @ 145f02920

FTriMeshGeometryRef * __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::FTriMeshGeometryRef::FTriMeshGeometryRef
          (FTriMeshGeometryRef *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->_padding_ =
       (longlong)&___7FTriMeshGeometryRef_ULandscapeMeshCollisionComponent_DEPRECATED__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->Guid).A = param_1->A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  (this->UsedChaosMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedChaosMaterials).ArrayNum = 0;
  (this->UsedChaosMaterials).ArrayMax = 0;
  (this->TrimeshGeometry).Reference = (FTriangleMeshImplicitObject *)0x0;
  return this;
}

// FTriMeshGeometryRef @ 145f02950

FTriMeshGeometryRef * __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::FTriMeshGeometryRef::FTriMeshGeometryRef
          (FTriMeshGeometryRef *this)

{
  this->_padding_ =
       (longlong)&___7FTriMeshGeometryRef_ULandscapeMeshCollisionComponent_DEPRECATED__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->UsedChaosMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedChaosMaterials).ArrayNum = 0;
  (this->UsedChaosMaterials).ArrayMax = 0;
  (this->TrimeshGeometry).Reference = (FTriangleMeshImplicitObject *)0x0;
  return this;
}

// ~FTriMeshGeometryRef @ 145f04110

void __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::FTriMeshGeometryRef::~FTriMeshGeometryRef
          (FTriMeshGeometryRef *this)

{
  longlong *plVar1;
  FTriangleMeshImplicitObject *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  
  this->_padding_ =
       (longlong)&___7FTriMeshGeometryRef_ULandscapeMeshCollisionComponent_DEPRECATED__6B_;
  pFVar2 = (this->TrimeshGeometry).Reference;
  if (pFVar2 != (FTriangleMeshImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->UsedChaosMaterials).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetResourceSizeEx @ 145f13580

void __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::FTriMeshGeometryRef::GetResourceSizeEx
          (FTriMeshGeometryRef *this,FResourceSizeEx *param_1)

{
  return;
}

