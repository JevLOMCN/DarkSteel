// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 72

// TDynamicMeshAttributeChange<float,2> @ 14344e2a0

TDynamicMeshAttributeChange<float,2> * __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::TDynamicMeshAttributeChange<float,2>
          (TDynamicMeshAttributeChange<float,2> *this)

{
  (this->OldElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldElements).ArrayNum = 0;
  (this->OldElements).ArrayMax = 0;
  (this->OldElementData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldElementData).ArrayNum = 0;
  (this->OldElementData).ArrayMax = 0;
  (this->OldTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldTriangles).ArrayNum = 0;
  (this->OldTriangles).ArrayMax = 0;
  (this->NewElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewElements).ArrayNum = 0;
  (this->NewElements).ArrayMax = 0;
  (this->NewElementData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewElementData).ArrayNum = 0;
  (this->NewElementData).ArrayMax = 0;
  (this->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTriangles).ArrayNum = 0;
  (this->NewTriangles).ArrayMax = 0;
  return this;
}

// TDynamicMeshAttributeChange<float,3> @ 14344e2e0

TDynamicMeshAttributeChange<float,3> * __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::TDynamicMeshAttributeChange<float,3>
          (TDynamicMeshAttributeChange<float,3> *this)

{
  (this->OldElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldElements).ArrayNum = 0;
  (this->OldElements).ArrayMax = 0;
  (this->OldElementData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldElementData).ArrayNum = 0;
  (this->OldElementData).ArrayMax = 0;
  (this->OldTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldTriangles).ArrayNum = 0;
  (this->OldTriangles).ArrayMax = 0;
  (this->NewElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewElements).ArrayNum = 0;
  (this->NewElements).ArrayMax = 0;
  (this->NewElementData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewElementData).ArrayNum = 0;
  (this->NewElementData).ArrayMax = 0;
  (this->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTriangles).ArrayNum = 0;
  (this->NewTriangles).ArrayMax = 0;
  return this;
}

// TDynamicMeshAttributeChange<float,4> @ 14344e320

TDynamicMeshAttributeChange<float,4> * __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::TDynamicMeshAttributeChange<float,4>
          (TDynamicMeshAttributeChange<float,4> *this)

{
  (this->OldElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldElements).ArrayNum = 0;
  (this->OldElements).ArrayMax = 0;
  (this->OldElementData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldElementData).ArrayNum = 0;
  (this->OldElementData).ArrayMax = 0;
  (this->OldTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldTriangles).ArrayNum = 0;
  (this->OldTriangles).ArrayMax = 0;
  (this->NewElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewElements).ArrayNum = 0;
  (this->NewElements).ArrayMax = 0;
  (this->NewElementData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewElementData).ArrayNum = 0;
  (this->NewElementData).ArrayMax = 0;
  (this->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewTriangles).ArrayNum = 0;
  (this->NewTriangles).ArrayMax = 0;
  return this;
}

// ~TDynamicMeshAttributeChange<float,2> @ 143452db0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::~TDynamicMeshAttributeChange<float,2>
          (TDynamicMeshAttributeChange<float,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewElementData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldElementData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TDynamicMeshAttributeChange<float,3> @ 143452e20

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::~TDynamicMeshAttributeChange<float,3>
          (TDynamicMeshAttributeChange<float,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewElementData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldElementData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TDynamicMeshAttributeChange<float,4> @ 143452e90

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::~TDynamicMeshAttributeChange<float,4>
          (TDynamicMeshAttributeChange<float,4> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NewTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewElementData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldElementData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Apply @ 143470490

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,1>::Apply
          (TDynamicMeshAttributeChange<int,1> *this,TDynamicMeshOverlay<int,1> *param_1,bool param_2
          )

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<int,1> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<int,1> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 143470500

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,2>::Apply
          (TDynamicMeshAttributeChange<int,2> *this,TDynamicMeshOverlay<int,2> *param_1,bool param_2
          )

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<int,2> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<int,2> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 143470570

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,3>::Apply
          (TDynamicMeshAttributeChange<int,3> *this,TDynamicMeshOverlay<int,3> *param_1,bool param_2
          )

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<int,3> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<int,3> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 1434705e0

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,1>::Apply
          (TDynamicMeshAttributeChange<float,1> *this,TDynamicMeshOverlay<float,1> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<float,1> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<float,1> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<float,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 143470650

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::Apply
          (TDynamicMeshAttributeChange<float,2> *this,TDynamicMeshOverlay<float,2> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<float,2> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<float,2> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<float,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 1434706c0

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::Apply
          (TDynamicMeshAttributeChange<float,3> *this,TDynamicMeshOverlay<float,3> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<float,3> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<float,3> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<float,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 143470730

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::Apply
          (TDynamicMeshAttributeChange<float,4> *this,TDynamicMeshOverlay<float,4> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<float,4> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<float,4> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<float,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 1434707a0

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,1>::Apply
          (TDynamicMeshAttributeChange<double,1> *this,TDynamicMeshOverlay<double,1> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<double,1> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<double,1> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<double,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 143470810

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,2>::Apply
          (TDynamicMeshAttributeChange<double,2> *this,TDynamicMeshOverlay<double,2> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<double,2> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<double,2> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<double,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 143470880

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,3>::Apply
          (TDynamicMeshAttributeChange<double,3> *this,TDynamicMeshOverlay<double,3> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<double,3> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<double,3> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<double,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// Apply @ 1434708f0

bool __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,4>::Apply
          (TDynamicMeshAttributeChange<double,4> *this,TDynamicMeshOverlay<double,4> *param_1,
          bool param_2)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshAttributeChange<double,4> *pTVar3;
  longlong lVar4;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0x50;
  }
  lVar4 = 0x10;
  if (!param_2) {
    lVar4 = 0x40;
  }
  uVar2 = 0x50;
  if (!param_2) {
    uVar2 = 0x20;
  }
  pTVar3 = this;
  if (!param_2) {
    pTVar3 = (TDynamicMeshAttributeChange<double,4> *)&this->NewElements;
  }
  ApplyReplaceChange(this,param_1,
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar2),
                     &pTVar3->OldElements,
                     (TArray<double,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(this->OldElements).AllocatorInstance.Data + lVar4),
                     (TArray<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
                      *)((longlong)&(this->OldElements).AllocatorInstance.Data + (ulonglong)uVar1));
  return true;
}

// ApplyReplaceChange @ 143471470

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,1>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<int,1> *this,TDynamicMeshOverlay<int,1> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EMeshResult EVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar7 = (param_3->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar7 == pFVar8) break;
    uVar2 = *(uint *)pFVar7;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar7 + 4);
      uVar5 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
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
      EVar6 = TDynamicMeshOverlay<int,1>::InsertElement
                        (param_1,*(uint *)pFVar7,
                         (int *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4),true)
      ;
      if (EVar6 != Ok) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar7 = pFVar7 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar7 + 4);
      uVar5 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
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
      uVar5 = *(uint *)pFVar7;
      pFVar7 = pFVar7 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
       (ulonglong)(uVar5 & 0x1ff) * 4) =
           *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar8 = (param_5->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar8 == pFVar7) break;
    EVar6 = TDynamicMeshOverlay<int,1>::SetTriangle
                      (param_1,*(int *)pFVar8,(FIndex3i *)(pFVar8 + 4),true);
    if (EVar6 != Ok) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 1434716d0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,2>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<int,2> *this,TDynamicMeshOverlay<int,2> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar2 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar3 = *(uint *)pFVar8;
    if ((((int)uVar3 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                                    (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))) {
      uVar3 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar3 < param_4->ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<int,2>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (int *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar3 * 4),true)
      ;
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar3 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar3 < param_4->ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
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
      pFVar1 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar3 * 4;
      uVar3 = *(uint *)pFVar8;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar3 * 2 & 0x1ff) * 4) =
           *(undefined4 *)pFVar1;
      pFVar8 = pFVar8 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar1 + 4);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar2 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar2) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<int,2>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<int,2>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143471960

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,3>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<int,3> *this,TDynamicMeshOverlay<int,3> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar2 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar3 = *(uint *)pFVar8;
    if ((((int)uVar3 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                                    (ulonglong)(uVar3 & 0x1ff) * 2) - 1U))) {
      uVar3 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar3 < param_4->ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<int,3>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (int *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar3 * 4),true)
      ;
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar3 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar3 < param_4->ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
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
      pFVar1 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar3 * 4;
      uVar3 = *(uint *)pFVar8 * 3;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff) * 4) = *(undefined4 *)pFVar1;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 + 1 >> 9) * 8) +
       (ulonglong)(uVar3 + 1 & 0x1ff) * 4) = *(undefined4 *)(pFVar1 + 4);
      pFVar8 = pFVar8 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 + 2 >> 9) * 8) +
       (ulonglong)(uVar3 + 2 & 0x1ff) * 4) = *(undefined4 *)(pFVar1 + 8);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar2 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar2) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<int,3>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<int,3>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143471c10

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,1>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<float,1> *this,TDynamicMeshOverlay<float,1> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EMeshResult EVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar7 = (param_3->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar7 == pFVar8) break;
    uVar2 = *(uint *)pFVar7;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar7 + 4);
      uVar5 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
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
      EVar6 = TDynamicMeshOverlay<float,1>::InsertElement
                        (param_1,*(uint *)pFVar7,
                         (float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4),
                         true);
      if (EVar6 != Ok) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar7 = pFVar7 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar7 + 4);
      uVar5 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
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
      uVar5 = *(uint *)pFVar7;
      pFVar7 = pFVar7 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
       (ulonglong)(uVar5 & 0x1ff) * 4) =
           *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar8 = (param_5->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar8 == pFVar7) break;
    EVar6 = TDynamicMeshOverlay<float,1>::SetTriangle
                      (param_1,*(int *)pFVar8,(FIndex3i *)(pFVar8 + 4),true);
    if (EVar6 != Ok) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143471e70

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<float,2> *this,TDynamicMeshOverlay<float,2> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar2 = *(uint *)pFVar8;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<float,2>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4),
                         true);
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      uVar6 = *(uint *)pFVar8;
      pFVar3 = (param_4->AllocatorInstance).Data;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar6 * 2 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar3 + (longlong)(int)uVar2 * 4);
      pFVar8 = pFVar8 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar3 + (longlong)(int)uVar2 * 4 + 4);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,2>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<float,2>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143472100

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<float,3> *this,TDynamicMeshOverlay<float,3> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar2 = *(uint *)pFVar8;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<float,3>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4),
                         true);
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar8 + 4);
      lVar10 = (longlong)(int)uVar2;
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar2 = *(uint *)pFVar8 * 3;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = *(undefined4 *)(pFVar3 + lVar10 * 4);
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 1 >> 9) * 8) +
       (ulonglong)(uVar2 + 1 & 0x1ff) * 4) = *(undefined4 *)(pFVar3 + lVar10 * 4 + 4);
      pFVar8 = pFVar8 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 2 >> 9) * 8) +
       (ulonglong)(uVar2 + 2 & 0x1ff) * 4) = *(undefined4 *)(pFVar3 + lVar10 * 4 + 8);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,3>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<float,3>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 1434723b0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<float,4> *this,TDynamicMeshOverlay<float,4> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar2 = *(uint *)pFVar8;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<float,4>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (float *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 4),
                         true);
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar8 + 4);
      lVar10 = (longlong)(int)uVar2;
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar2 = *(uint *)pFVar8;
      uVar6 = uVar2 * 4;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar3 + lVar10 * 4);
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 + 1 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar3 + lVar10 * 4 + 4);
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 + 2 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar3 + lVar10 * 4 + 8);
      pFVar8 = pFVar8 + 0xc;
      *(undefined4 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 + 3 & 0x1ff) * 4) =
           *(undefined4 *)(pFVar3 + lVar10 * 4 + 0xc);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<float,4>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<float,4>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143472680

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,1>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<double,1> *this,TDynamicMeshOverlay<double,1> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<double,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EMeshResult EVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar7 = (param_3->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar7 == pFVar8) break;
    uVar2 = *(uint *)pFVar7;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar7 + 4);
      uVar5 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
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
      EVar6 = TDynamicMeshOverlay<double,1>::InsertElement
                        (param_1,*(uint *)pFVar7,
                         (double *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 8),
                         true);
      if (EVar6 != Ok) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar7 = pFVar7 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar7 + 4);
      uVar5 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
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
      uVar5 = *(uint *)pFVar7;
      pFVar7 = pFVar7 + 0xc;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
       (ulonglong)(uVar5 & 0x1ff) * 8) =
           *(undefined8 *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 8);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar8 = (param_5->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar8 == pFVar7) break;
    EVar6 = TDynamicMeshOverlay<double,1>::SetTriangle
                      (param_1,*(int *)pFVar8,(FIndex3i *)(pFVar8 + 4),true);
    if (EVar6 != Ok) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = pFVar8 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 1434728e0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,2>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<double,2> *this,TDynamicMeshOverlay<double,2> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<double,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar2 = *(uint *)pFVar8;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<double,2>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (double *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 8),
                         true);
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      uVar6 = *(uint *)pFVar8;
      pFVar3 = (param_4->AllocatorInstance).Data;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar6 * 2 & 0x1ff) * 8) =
           *(undefined8 *)(pFVar3 + (longlong)(int)uVar2 * 8);
      pFVar8 = pFVar8 + 0xc;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 8) =
           *(undefined8 *)(pFVar3 + (longlong)(int)uVar2 * 8 + 8);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,2>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<double,2>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143472b70

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,3>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<double,3> *this,TDynamicMeshOverlay<double,3> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<double,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar2 = *(uint *)pFVar8;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<double,3>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (double *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 8),
                         true);
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar8 + 4);
      lVar10 = (longlong)(int)uVar2;
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar2 = *(uint *)pFVar8 * 3;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 8) = *(undefined8 *)(pFVar3 + lVar10 * 8);
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 1 >> 9) * 8) +
       (ulonglong)(uVar2 + 1 & 0x1ff) * 8) = *(undefined8 *)(pFVar3 + lVar10 * 8 + 8);
      pFVar8 = pFVar8 + 0xc;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 2 >> 9) * 8) +
       (ulonglong)(uVar2 + 2 & 0x1ff) * 8) = *(undefined8 *)(pFVar3 + lVar10 * 8 + 0x10);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,3>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<double,3>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// ApplyReplaceChange @ 143472e20

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,4>::ApplyReplaceChange
          (TDynamicMeshAttributeChange<double,4> *this,TDynamicMeshOverlay<double,4> *param_1,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_2,TArray<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeElement,TSizedDefaultAllocator<32>_>
                   *param_3,TArray<double,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeTriangle,TSizedDefaultAllocator<32>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMeshResult EVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  iVar1 = param_3->ArrayNum;
  pFVar8 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeElement_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar9) break;
    uVar2 = *(uint *)pFVar8;
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->ElementsRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      uVar2 = *(uint *)(pFVar8 + 4);
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      EVar7 = TDynamicMeshOverlay<double,4>::InsertElement
                        (param_1,*(uint *)pFVar8,
                         (double *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar2 * 8),
                         true);
      if (EVar7 != Ok) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1327787060794228852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                           ,0x74,"Result == EMeshResult::Ok");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar8 = pFVar8 + 0xc;
    }
    else {
      uVar2 = *(uint *)(pFVar8 + 4);
      lVar10 = (longlong)(int)uVar2;
      uVar6 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
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
      pFVar3 = (param_4->AllocatorInstance).Data;
      uVar2 = *(uint *)pFVar8;
      uVar6 = uVar2 * 4;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 & 0x1ff) * 8) =
           *(undefined8 *)(pFVar3 + lVar10 * 8);
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 + 1 & 0x1ff) * 8) =
           *(undefined8 *)(pFVar3 + lVar10 * 8 + 8);
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 + 2 & 0x1ff) * 8) =
           *(undefined8 *)(pFVar3 + lVar10 * 8 + 0x10);
      pFVar8 = pFVar8 + 0xc;
      *(undefined8 *)
       (*(longlong *)
         ((param_1->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar6 + 3 & 0x1ff) * 8) =
           *(undefined8 *)(pFVar3 + lVar10 * 8 + 0x18);
    }
  }
  FRefCountVector::RebuildFreeList(&param_1->ElementsRefCounts);
  iVar1 = param_5->ArrayNum;
  pFVar9 = (param_5->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TDynamicMeshAttributeChange<double,4>::FChangeTriangle_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_38);
    }
    if (pFVar9 == pFVar8) break;
    EVar7 = TDynamicMeshOverlay<double,4>::SetTriangle
                      (param_1,*(int *)pFVar9,(FIndex3i *)(pFVar9 + 4),true);
    if (EVar7 != Ok) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794228871>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x87,"Result == EMeshResult::Ok");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  return;
}

// SaveInitialElement @ 14351a4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,1>::SaveInitialElement
          (TDynamicMeshAttributeChange<int,1> *this,TDynamicMeshOverlay<int,1> *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_28 [2];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar7 = (ulonglong)((uint)param_2 >> 9) * 8;
  lVar2 = (ulonglong)(param_2 & 0x1ff) * 4;
  local_18 = *(undefined4 *)
              (lVar2 + *(longlong *)
                        ((param_1->ParentVertices).Blocks.AllocatorInstance.Data + lVar7));
  iStack_1c = (this->OldElementData).ArrayNum;
  local_28[0] = *(int *)(lVar2 + *(longlong *)
                                  ((param_1->Elements).Blocks.AllocatorInstance.Data + lVar7));
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_20 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)local_28 < pFVar3 + lVar7 * 4)) {
    local_40 = (longlong)(this->OldElementData).ArrayNum;
    local_38 = 4;
    local_58 = local_28;
    local_50 = pFVar3;
    local_48 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  piVar1 = &(this->OldElementData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,piVar1);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28[0];
  pFVar3 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_20) &&
     (lVar7 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_20 < pFVar3 + lVar7 * 0xc)) {
    local_40 = (longlong)(this->OldElements).ArrayNum;
    local_38 = 0xc;
    local_58 = &local_20;
    local_50 = pFVar3;
    local_48 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar6 + 1;
  pFVar3 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_1c,local_20);
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_18;
  return;
}

// SaveInitialElement @ 14351a680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,2>::SaveInitialElement
          (TDynamicMeshAttributeChange<int,2> *this,TDynamicMeshOverlay<int,2> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_28 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_2c = (this->OldElementData).ArrayNum;
  local_38 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 & 0x1ff) * 4);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_34 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4);
  local_30 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar7 * 4)) {
    local_50 = (longlong)(this->OldElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_38;
    local_60 = pFVar3;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_34) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_34 < pFVar2 + lVar7 * 4)) {
    local_50 = (longlong)(this->OldElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_34;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_34;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 0xc)) {
    local_50 = (longlong)(this->OldElements).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_30;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_2c,local_30);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_28;
  return;
}

// SaveInitialElement @ 14351a900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,3>::SaveInitialElement
          (TDynamicMeshAttributeChange<int,3> *this,TDynamicMeshOverlay<int,3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int iStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = param_2 * 3;
  local_30 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_34 = (this->OldElementData).ArrayNum;
  local_48 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
  local_44 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                     (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_40[0] = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
  local_38 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar8 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_48;
    local_70 = pFVar3;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_44) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_44 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_44;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_44;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_40) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)local_40 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = local_40;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_40[0];
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar8 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->OldElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_38;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar7 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_34,local_38);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_30;
  return;
}

// SaveInitialElement @ 14351ac40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,1>::SaveInitialElement
          (TDynamicMeshAttributeChange<float,1> *this,TDynamicMeshOverlay<float,1> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_28 [2];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_1c = (this->OldElementData).ArrayNum;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  local_28[0] = *(int *)(*(longlong *)
                          ((param_1->Elements).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  local_20 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     (lVar6 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)local_28 < pFVar2 + lVar6 * 4)) {
    local_40 = (longlong)(this->OldElementData).ArrayNum;
    local_38 = 4;
    local_58 = local_28;
    local_50 = pFVar2;
    local_48 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OldElementData).ArrayNum;
  piVar1 = &(this->OldElementData).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,piVar1);
  }
  (this->OldElementData).ArrayNum = iVar5 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_28[0];
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_20) &&
     (lVar6 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_20 < pFVar2 + lVar6 * 0xc)) {
    local_40 = (longlong)(this->OldElements).ArrayNum;
    local_38 = 0xc;
    local_58 = &local_20;
    local_50 = pFVar2;
    local_48 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar5 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(iStack_1c,local_20);
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_18;
  return;
}

// SaveInitialElement @ 14351ae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::SaveInitialElement
          (TDynamicMeshAttributeChange<float,2> *this,TDynamicMeshOverlay<float,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_28 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_2c = (this->OldElementData).ArrayNum;
  local_38 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 & 0x1ff) * 4);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_34 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4);
  local_30 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar7 * 4)) {
    local_50 = (longlong)(this->OldElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_38;
    local_60 = pFVar3;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_34) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_34 < pFVar2 + lVar7 * 4)) {
    local_50 = (longlong)(this->OldElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_34;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_34;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 0xc)) {
    local_50 = (longlong)(this->OldElements).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_30;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_2c,local_30);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_28;
  return;
}

// SaveInitialElement @ 14351b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::SaveInitialElement
          (TDynamicMeshAttributeChange<float,3> *this,TDynamicMeshOverlay<float,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int iStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = param_2 * 3;
  local_30 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_34 = (this->OldElementData).ArrayNum;
  local_48 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
  local_44 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                     (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_40[0] = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
  local_38 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar8 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_48;
    local_70 = pFVar3;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_44) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_44 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_44;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_44;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_40) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)local_40 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = local_40;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_40[0];
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar8 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->OldElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_38;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar7 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_34,local_38);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_30;
  return;
}

// SaveInitialElement @ 14351b3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::SaveInitialElement
          (TDynamicMeshAttributeChange<float,4> *this,TDynamicMeshOverlay<float,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar8 = param_2 * 4;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_30 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_34 = (this->OldElementData).ArrayNum;
  local_48 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 & 0x1ff) * 4);
  local_44 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
  local_40 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_3c = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 + 3 & 0x1ff) * 4);
  local_38 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar7 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_48;
    local_70 = pFVar3;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_48;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_44) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_44 < pFVar2 + lVar7 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_44;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_44;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_40 < pFVar2 + lVar7 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_40;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_40;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_3c) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_3c < pFVar2 + lVar7 * 4)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_3c;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_3c;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar7 * 0xc)) {
    local_60 = (longlong)(this->OldElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_38;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_34,local_38);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_30;
  return;
}

// SaveInitialElement @ 14351b7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,1>::SaveInitialElement
          (TDynamicMeshAttributeChange<double,1> *this,TDynamicMeshOverlay<double,1> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_20 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_24 = (this->OldElementData).ArrayNum;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  local_18 = *(undefined8 *)
              (*(longlong *)
                ((param_1->Elements).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 8);
  local_28 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     (lVar6 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_18 < pFVar2 + lVar6 * 8)) {
    local_40 = (longlong)(this->OldElementData).ArrayNum;
    local_38 = 8;
    local_58 = (int *)&local_18;
    local_50 = pFVar2;
    local_48 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OldElementData).ArrayNum;
  piVar1 = &(this->OldElementData).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,piVar1);
  }
  (this->OldElementData).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     (lVar6 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_28 < pFVar2 + lVar6 * 0xc)) {
    local_40 = (longlong)(this->OldElements).ArrayNum;
    local_38 = 0xc;
    local_58 = &local_28;
    local_50 = pFVar2;
    local_48 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar5 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(iStack_24,local_28);
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_20;
  return;
}

// SaveInitialElement @ 14351b9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,2>::SaveInitialElement
          (TDynamicMeshAttributeChange<double,2> *this,TDynamicMeshOverlay<double,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_40 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_44 = (this->OldElementData).ArrayNum;
  local_38 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
              (ulonglong)(param_2 * 2 & 0x1ff) * 8);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_30 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
              (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 8);
  local_48 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar7 * 8)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_38;
    local_70 = pFVar3;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 8)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_30;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_30;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar2 + lVar7 * 0xc)) {
    local_60 = (longlong)(this->OldElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_48;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_44,local_48);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_40;
  return;
}

// SaveInitialElement @ 14351bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,3>::SaveInitialElement
          (TDynamicMeshAttributeChange<double,3> *this,TDynamicMeshOverlay<double,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = param_2 * 3;
  local_40 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_44 = (this->OldElementData).ArrayNum;
  local_38 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8)
  ;
  local_30 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
              (ulonglong)(uVar5 + 1 & 0x1ff) * 8);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_28 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
              (ulonglong)(uVar5 + 2 & 0x1ff) * 8);
  local_48 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar8 * 8)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_38;
    local_70 = pFVar3;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar8 * 8)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_30;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_30;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     (lVar8 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_28 < pFVar2 + lVar8 * 8)) {
    local_60 = (longlong)(this->OldElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_28;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElementData).ArrayNum;
  if (iVar7 == (this->OldElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->OldElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_48;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar7 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_44,local_48);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_40;
  return;
}

// SaveInitialElement @ 14351bf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,4>::SaveInitialElement
          (TDynamicMeshAttributeChange<double,4> *this,TDynamicMeshOverlay<double,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  int *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar8 = param_2 * 4;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_50 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_54 = (this->OldElementData).ArrayNum;
  local_48 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 & 0x1ff) * 8);
  local_40 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 + 1 & 0x1ff) * 8);
  local_38 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 + 2 & 0x1ff) * 8);
  pFVar3 = (this->OldElementData).AllocatorInstance.Data;
  local_30 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 + 3 & 0x1ff) * 8);
  local_58 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar7 * 8)) {
    local_70 = (longlong)(this->OldElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_48;
    local_80 = pFVar3;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_40 < pFVar2 + lVar7 * 8)) {
    local_70 = (longlong)(this->OldElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_40;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_40;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar7 * 8)) {
    local_70 = (longlong)(this->OldElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_38;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38;
  pFVar2 = (this->OldElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->OldElementData).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 8)) {
    local_70 = (longlong)(this->OldElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_30;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElementData).ArrayNum;
  if (iVar6 == (this->OldElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OldElementData).AllocatorInstance,
                       &(this->OldElementData).ArrayMax);
  }
  (this->OldElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->OldElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_30;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
     (lVar7 = (longlong)(this->OldElements).ArrayMax,
     (FScriptContainerElement *)&local_58 < pFVar2 + lVar7 * 0xc)) {
    local_70 = (longlong)(this->OldElements).ArrayNum;
    local_68 = 0xc;
    local_88 = &local_58;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OldElements).ArrayNum;
  piVar1 = &(this->OldElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->OldElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_54,local_58);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_50;
  return;
}

// SaveInitialTriangle @ 14351c420

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,1>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<int,1> *this,TDynamicMeshOverlay<int,1> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351c540

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,2>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<int,2> *this,TDynamicMeshOverlay<int,2> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351c660

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,3>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<int,3> *this,TDynamicMeshOverlay<int,3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351c780

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,1>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<float,1> *this,TDynamicMeshOverlay<float,1> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351c8a0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<float,2> *this,TDynamicMeshOverlay<float,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351c9c0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<float,3> *this,TDynamicMeshOverlay<float,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351cae0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<float,4> *this,TDynamicMeshOverlay<float,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351cc00

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,1>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<double,1> *this,TDynamicMeshOverlay<double,1> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351cd20

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,2>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<double,2> *this,TDynamicMeshOverlay<double,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351ce40

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,3>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<double,3> *this,TDynamicMeshOverlay<double,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// SaveInitialTriangle @ 14351cf60

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,4>::SaveInitialTriangle
          (TDynamicMeshAttributeChange<double,4> *this,TDynamicMeshOverlay<double,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->OldTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->OldTriangles).ArrayNum;
  piVar1 = &(this->OldTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->OldTriangles).AllocatorInstance,piVar1);
  }
  (this->OldTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->OldTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalElement @ 14354e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,1>::StoreFinalElement
          (TDynamicMeshAttributeChange<int,1> *this,TDynamicMeshOverlay<int,1> *param_1,int param_2)

{
  int *piVar1;
  TArray<UE::Geometry::TDynamicMeshAttributeChange<int,1>::FChangeElement,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  int *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_28 [2];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar8 = (ulonglong)((uint)param_2 >> 9) * 8;
  lVar3 = (ulonglong)(param_2 & 0x1ff) * 4;
  local_18 = *(undefined4 *)
              (lVar3 + *(longlong *)
                        ((param_1->ParentVertices).Blocks.AllocatorInstance.Data + lVar8));
  iStack_1c = (this->NewElementData).ArrayNum;
  local_28[0] = *(int *)(lVar3 + *(longlong *)
                                  ((param_1->Elements).Blocks.AllocatorInstance.Data + lVar8));
  pFVar4 = (this->NewElementData).AllocatorInstance.Data;
  local_20 = param_2;
  if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)local_28 < pFVar4 + lVar8 * 4)) {
    local_40 = (longlong)(this->NewElementData).ArrayNum;
    local_38 = 4;
    local_58 = local_28;
    local_50 = pFVar4;
    local_48 = lVar8;
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
  iVar7 = (this->NewElementData).ArrayNum;
  piVar1 = &(this->NewElementData).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,piVar1);
  }
  pTVar2 = &this->NewElements;
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_28[0];
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_20) &&
     (lVar8 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_20 < pFVar4 + lVar8 * 0xc)) {
    local_40 = (longlong)(this->NewElements).ArrayNum;
    local_38 = 0xc;
    local_58 = &local_20;
    local_50 = pFVar4;
    local_48 = lVar8;
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
  iVar7 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_1c,local_20);
  *(undefined4 *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = local_18;
  return;
}

// StoreFinalElement @ 14354e920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,2>::StoreFinalElement
          (TDynamicMeshAttributeChange<int,2> *this,TDynamicMeshOverlay<int,2> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_28 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_2c = (this->NewElementData).ArrayNum;
  local_38 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 & 0x1ff) * 4);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_34 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4);
  local_30 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar7 * 4)) {
    local_50 = (longlong)(this->NewElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_38;
    local_60 = pFVar3;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_34) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_34 < pFVar2 + lVar7 * 4)) {
    local_50 = (longlong)(this->NewElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_34;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_34;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 0xc)) {
    local_50 = (longlong)(this->NewElements).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_30;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_2c,local_30);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_28;
  return;
}

// StoreFinalElement @ 14354eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,3>::StoreFinalElement
          (TDynamicMeshAttributeChange<int,3> *this,TDynamicMeshOverlay<int,3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int iStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = param_2 * 3;
  local_30 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_34 = (this->NewElementData).ArrayNum;
  local_48 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
  local_44 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                     (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_40[0] = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
  local_38 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar8 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_48;
    local_70 = pFVar3;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_44) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_44 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_44;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_44;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_40) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)local_40 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = local_40;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_40[0];
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar8 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->NewElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_38;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar7 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_34,local_38);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_30;
  return;
}

// StoreFinalElement @ 14354eee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,1>::StoreFinalElement
          (TDynamicMeshAttributeChange<float,1> *this,TDynamicMeshOverlay<float,1> *param_1,
          int param_2)

{
  int *piVar1;
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,1>::FChangeElement,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_28 [2];
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_1c = (this->NewElementData).ArrayNum;
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_28[0] = *(int *)(*(longlong *)
                          ((param_1->Elements).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  local_20 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)local_28 < pFVar3 + lVar7 * 4)) {
    local_40 = (longlong)(this->NewElementData).ArrayNum;
    local_38 = 4;
    local_58 = local_28;
    local_50 = pFVar3;
    local_48 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  piVar1 = &(this->NewElementData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,piVar1);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  pTVar2 = &this->NewElements;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_28[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_20) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_20 < pFVar3 + lVar7 * 0xc)) {
    local_40 = (longlong)(this->NewElements).ArrayNum;
    local_38 = 0xc;
    local_58 = &local_20;
    local_50 = pFVar3;
    local_48 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_1c,local_20);
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_18;
  return;
}

// StoreFinalElement @ 14354f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::StoreFinalElement
          (TDynamicMeshAttributeChange<float,2> *this,TDynamicMeshOverlay<float,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_28 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_2c = (this->NewElementData).ArrayNum;
  local_38 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 & 0x1ff) * 4);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_34 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4);
  local_30 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar7 * 4)) {
    local_50 = (longlong)(this->NewElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_38;
    local_60 = pFVar3;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_38;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_34) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_34 < pFVar2 + lVar7 * 4)) {
    local_50 = (longlong)(this->NewElementData).ArrayNum;
    local_48 = 4;
    local_68 = &local_34;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_34;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 0xc)) {
    local_50 = (longlong)(this->NewElements).ArrayNum;
    local_48 = 0xc;
    local_68 = &local_30;
    local_60 = pFVar2;
    local_58 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_2c,local_30);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_28;
  return;
}

// StoreFinalElement @ 14354f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::StoreFinalElement
          (TDynamicMeshAttributeChange<float,3> *this,TDynamicMeshOverlay<float,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int iStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = param_2 * 3;
  local_30 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_34 = (this->NewElementData).ArrayNum;
  local_48 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
  local_44 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                     (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_40[0] = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
  local_38 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar8 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_48;
    local_70 = pFVar3;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_44) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_44 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_44;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_44;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_40) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)local_40 < pFVar2 + lVar8 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = local_40;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_40[0];
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar8 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->NewElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_38;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar7 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_34,local_38);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_30;
  return;
}

// StoreFinalElement @ 14354f680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::StoreFinalElement
          (TDynamicMeshAttributeChange<float,4> *this,TDynamicMeshOverlay<float,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar8 = param_2 * 4;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_30 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_34 = (this->NewElementData).ArrayNum;
  local_48 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 & 0x1ff) * 4);
  local_44 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
  local_40 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_3c = *(int *)(*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                     (ulonglong)(uVar8 + 3 & 0x1ff) * 4);
  local_38 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar7 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_48;
    local_70 = pFVar3;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_48;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_44) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_44 < pFVar2 + lVar7 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_44;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_44;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_40 < pFVar2 + lVar7 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_40;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_40;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_3c) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_3c < pFVar2 + lVar7 * 4)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 4;
    local_78 = &local_3c;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(int *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_3c;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar7 * 0xc)) {
    local_60 = (longlong)(this->NewElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_38;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_34,local_38);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_30;
  return;
}

// StoreFinalElement @ 14354fa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,1>::StoreFinalElement
          (TDynamicMeshAttributeChange<double,1> *this,TDynamicMeshOverlay<double,1> *param_1,
          int param_2)

{
  int *piVar1;
  TArray<UE::Geometry::TDynamicMeshAttributeChange<double,1>::FChangeElement,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  FScriptContainerElement *local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_20 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_24 = (this->NewElementData).ArrayNum;
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_18 = *(undefined8 *)
              (*(longlong *)
                ((param_1->Elements).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 8);
  local_28 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_18 < pFVar3 + lVar7 * 8)) {
    local_40 = (longlong)(this->NewElementData).ArrayNum;
    local_38 = 8;
    local_58 = (int *)&local_18;
    local_50 = pFVar3;
    local_48 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  piVar1 = &(this->NewElementData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,piVar1);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  pTVar2 = &this->NewElements;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_28 < pFVar3 + lVar7 * 0xc)) {
    local_40 = (longlong)(this->NewElements).ArrayNum;
    local_38 = 0xc;
    local_58 = &local_28;
    local_50 = pFVar3;
    local_48 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_24,local_28);
  *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_20;
  return;
}

// StoreFinalElement @ 14354fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,2>::StoreFinalElement
          (TDynamicMeshAttributeChange<double,2> *this,TDynamicMeshOverlay<double,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_40 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_44 = (this->NewElementData).ArrayNum;
  local_38 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
              (ulonglong)(param_2 * 2 & 0x1ff) * 8);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_30 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
              (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 8);
  local_48 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar7 * 8)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_38;
    local_70 = pFVar3;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 8)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_30;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_30;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar2 + lVar7 * 0xc)) {
    local_60 = (longlong)(this->NewElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_48;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_44,local_48);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_40;
  return;
}

// StoreFinalElement @ 14354fef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,3>::StoreFinalElement
          (TDynamicMeshAttributeChange<double,3> *this,TDynamicMeshOverlay<double,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  uVar5 = param_2 * 3;
  local_40 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_44 = (this->NewElementData).ArrayNum;
  local_38 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8)
  ;
  local_30 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
              (ulonglong)(uVar5 + 1 & 0x1ff) * 8);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_28 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
              (ulonglong)(uVar5 + 2 & 0x1ff) * 8);
  local_48 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar3 + lVar8 * 8)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_38;
    local_70 = pFVar3;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar8 * 8)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_30;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_30;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     (lVar8 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_28 < pFVar2 + lVar8 * 8)) {
    local_60 = (longlong)(this->NewElementData).ArrayNum;
    local_58 = 8;
    local_78 = (int *)&local_28;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElementData).ArrayNum;
  if (iVar7 == (this->NewElementData).ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     (lVar8 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar2 + lVar8 * 0xc)) {
    local_60 = (longlong)(this->NewElements).ArrayNum;
    local_58 = 0xc;
    local_78 = &local_48;
    local_70 = pFVar2;
    local_68 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar7 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_44,local_48);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_40;
  return;
}

// StoreFinalElement @ 143550240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,4>::StoreFinalElement
          (TDynamicMeshAttributeChange<double,4> *this,TDynamicMeshOverlay<double,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  int *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar8 = param_2 * 4;
  pFVar2 = (param_1->Elements).Blocks.AllocatorInstance.Data;
  local_50 = *(undefined4 *)
              (*(longlong *)
                ((param_1->ParentVertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  iStack_54 = (this->NewElementData).ArrayNum;
  local_48 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 & 0x1ff) * 8);
  local_40 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 + 1 & 0x1ff) * 8);
  local_38 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 + 2 & 0x1ff) * 8);
  pFVar3 = (this->NewElementData).AllocatorInstance.Data;
  local_30 = *(undefined8 *)
              (*(longlong *)(pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar8 + 3 & 0x1ff) * 8);
  local_58 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar7 * 8)) {
    local_70 = (longlong)(this->NewElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_48;
    local_80 = pFVar3;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_40 < pFVar2 + lVar7 * 8)) {
    local_70 = (longlong)(this->NewElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_40;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_40;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar2 + lVar7 * 8)) {
    local_70 = (longlong)(this->NewElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_38;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38;
  pFVar2 = (this->NewElementData).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
     (lVar7 = (longlong)(this->NewElementData).ArrayMax,
     (FScriptContainerElement *)&local_30 < pFVar2 + lVar7 * 8)) {
    local_70 = (longlong)(this->NewElementData).ArrayNum;
    local_68 = 8;
    local_88 = (int *)&local_30;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElementData).ArrayNum;
  if (iVar6 == (this->NewElementData).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->NewElementData).AllocatorInstance,
                       &(this->NewElementData).ArrayMax);
  }
  (this->NewElementData).ArrayNum = iVar6 + 1;
  *(undefined8 *)((this->NewElementData).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_30;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
     (lVar7 = (longlong)(this->NewElements).ArrayMax,
     (FScriptContainerElement *)&local_58 < pFVar2 + lVar7 * 0xc)) {
    local_70 = (longlong)(this->NewElements).ArrayNum;
    local_68 = 0xc;
    local_88 = &local_58;
    local_80 = pFVar2;
    local_78 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NewElements).ArrayNum;
  piVar1 = &(this->NewElements).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->NewElements).AllocatorInstance,piVar1);
  }
  (this->NewElements).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewElements).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar6 * 0xc) = CONCAT44(iStack_54,local_58);
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_50;
  return;
}

// StoreFinalTriangle @ 143550650

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,1>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<int,1> *this,TDynamicMeshOverlay<int,1> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550770

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,2>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<int,2> *this,TDynamicMeshOverlay<int,2> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550890

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<int,3>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<int,3> *this,TDynamicMeshOverlay<int,3> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 1435509b0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,1>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<float,1> *this,TDynamicMeshOverlay<float,1> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550ad0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,2>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<float,2> *this,TDynamicMeshOverlay<float,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550bf0

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,3>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<float,3> *this,TDynamicMeshOverlay<float,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550d10

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<float,4>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<float,4> *this,TDynamicMeshOverlay<float,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550e30

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,1>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<double,1> *this,TDynamicMeshOverlay<double,1> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143550f50

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,2>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<double,2> *this,TDynamicMeshOverlay<double,2> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143551070

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,3>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<double,3> *this,TDynamicMeshOverlay<double,3> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// StoreFinalTriangle @ 143551190

void __thiscall
UE::Geometry::TDynamicMeshAttributeChange<double,4>::StoreFinalTriangle
          (TDynamicMeshAttributeChange<double,4> *this,TDynamicMeshOverlay<double,4> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (param_1->ElementTriangles).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 3;
  uStack_10 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uStack_c = *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
              (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uStack_14 = *(undefined4 *)
               (*(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4
               );
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->NewTriangles).ArrayMax * 0x10
     )) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->NewTriangles).ArrayNum;
  piVar1 = &(this->NewTriangles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->NewTriangles).AllocatorInstance,piVar1);
  }
  (this->NewTriangles).ArrayNum = iVar6 + 1;
  pFVar2 = (this->NewTriangles).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

