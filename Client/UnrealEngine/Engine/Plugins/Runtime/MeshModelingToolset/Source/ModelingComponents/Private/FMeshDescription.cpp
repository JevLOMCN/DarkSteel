// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// FMeshDescription @ 14cac9b20

FMeshDescription * __thiscall
FMeshDescription::FMeshDescription(FMeshDescription *this,FMeshDescription *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  *(undefined8 *)&(this->Elements).field_0x40 = 0;
  *(undefined4 *)&(this->Elements).field_0x48 = 0;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                      *)param_1);
  this->VertexElements = param_1->VertexElements;
  this->VertexInstanceElements = param_1->VertexInstanceElements;
  this->UVElements = param_1->UVElements;
  this->EdgeElements = param_1->EdgeElements;
  this->TriangleElements = param_1->TriangleElements;
  this->PolygonElements = param_1->PolygonElements;
  this->PolygonGroupElements = param_1->PolygonGroupElements;
  (this->VertexInstanceVertices).ArrayPtr = (param_1->VertexInstanceVertices).ArrayPtr;
  uVar1 = (param_1->EdgeVertices).Extent;
  uVar2 = *(undefined4 *)&(param_1->EdgeVertices).field_0xc;
  (this->EdgeVertices).ArrayPtr = (param_1->EdgeVertices).ArrayPtr;
  (this->EdgeVertices).Extent = uVar1;
  *(undefined4 *)&(this->EdgeVertices).field_0xc = uVar2;
  uVar1 = (param_1->TriangleVertexInstances).Extent;
  uVar2 = *(undefined4 *)&(param_1->TriangleVertexInstances).field_0xc;
  (this->TriangleVertexInstances).ArrayPtr = (param_1->TriangleVertexInstances).ArrayPtr;
  (this->TriangleVertexInstances).Extent = uVar1;
  *(undefined4 *)&(this->TriangleVertexInstances).field_0xc = uVar2;
  (this->TrianglePolygons).ArrayPtr = (param_1->TrianglePolygons).ArrayPtr;
  uVar1 = (param_1->TriangleEdges).Extent;
  uVar2 = *(undefined4 *)&(param_1->TriangleEdges).field_0xc;
  (this->TriangleEdges).ArrayPtr = (param_1->TriangleEdges).ArrayPtr;
  (this->TriangleEdges).Extent = uVar1;
  *(undefined4 *)&(this->TriangleEdges).field_0xc = uVar2;
  uVar1 = (param_1->TriangleVertices).Extent;
  uVar2 = *(undefined4 *)&(param_1->TriangleVertices).field_0xc;
  (this->TriangleVertices).ArrayPtr = (param_1->TriangleVertices).ArrayPtr;
  (this->TriangleVertices).Extent = uVar1;
  *(undefined4 *)&(this->TriangleVertices).field_0xc = uVar2;
  uVar1 = (param_1->TriangleUVs).Extent;
  uVar2 = *(undefined4 *)&(param_1->TriangleUVs).field_0xc;
  (this->TriangleUVs).ArrayPtr = (param_1->TriangleUVs).ArrayPtr;
  (this->TriangleUVs).Extent = uVar1;
  *(undefined4 *)&(this->TriangleUVs).field_0xc = uVar2;
  (this->TrianglePolygonGroups).ArrayPtr = (param_1->TrianglePolygonGroups).ArrayPtr;
  (this->PolygonPolygonGroups).ArrayPtr = (param_1->PolygonPolygonGroups).ArrayPtr;
  (this->VertexPositions).ArrayPtr = (param_1->VertexPositions).ArrayPtr;
  (this->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data =
       (param_1->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data;
  (param_1->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexToVertexInstances).PerChannelIndices.ArrayNum =
       (param_1->VertexToVertexInstances).PerChannelIndices.ArrayNum;
  (this->VertexToVertexInstances).PerChannelIndices.ArrayMax =
       (param_1->VertexToVertexInstances).PerChannelIndices.ArrayMax;
  (param_1->VertexToVertexInstances).PerChannelIndices.ArrayNum = 0;
  (param_1->VertexToVertexInstances).PerChannelIndices.ArrayMax = 0;
  (this->VertexToVertexInstances).ReferencedElementType =
       (param_1->VertexToVertexInstances).ReferencedElementType;
  uVar1 = (param_1->VertexToVertexInstances).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->VertexToVertexInstances).ReferencingAttributeRef.field_0xc;
  (this->VertexToVertexInstances).ReferencingAttributeRef.ArrayPtr =
       (param_1->VertexToVertexInstances).ReferencingAttributeRef.ArrayPtr;
  (this->VertexToVertexInstances).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->VertexToVertexInstances).ReferencingAttributeRef.field_0xc = uVar2;
  (this->VertexToVertexInstances).InitialSize = (param_1->VertexToVertexInstances).InitialSize;
  (this->VertexToVertexInstances).ChunkBits = (param_1->VertexToVertexInstances).ChunkBits;
  (this->VertexToVertexInstances).ChunkMask = (param_1->VertexToVertexInstances).ChunkMask;
  (this->VertexToVertexInstances).bSuspended = (param_1->VertexToVertexInstances).bSuspended;
  (this->VertexToVertexInstances).bEverythingStale =
       (param_1->VertexToVertexInstances).bEverythingStale;
  (this->VertexToEdges).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexToEdges).PerChannelIndices.AllocatorInstance.Data =
       (param_1->VertexToEdges).PerChannelIndices.AllocatorInstance.Data;
  (param_1->VertexToEdges).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexToEdges).PerChannelIndices.ArrayNum =
       (param_1->VertexToEdges).PerChannelIndices.ArrayNum;
  (this->VertexToEdges).PerChannelIndices.ArrayMax =
       (param_1->VertexToEdges).PerChannelIndices.ArrayMax;
  (param_1->VertexToEdges).PerChannelIndices.ArrayNum = 0;
  (param_1->VertexToEdges).PerChannelIndices.ArrayMax = 0;
  (this->VertexToEdges).ReferencedElementType = (param_1->VertexToEdges).ReferencedElementType;
  uVar1 = (param_1->VertexToEdges).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->VertexToEdges).ReferencingAttributeRef.field_0xc;
  (this->VertexToEdges).ReferencingAttributeRef.ArrayPtr =
       (param_1->VertexToEdges).ReferencingAttributeRef.ArrayPtr;
  (this->VertexToEdges).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->VertexToEdges).ReferencingAttributeRef.field_0xc = uVar2;
  (this->VertexToEdges).InitialSize = (param_1->VertexToEdges).InitialSize;
  (this->VertexToEdges).ChunkBits = (param_1->VertexToEdges).ChunkBits;
  (this->VertexToEdges).ChunkMask = (param_1->VertexToEdges).ChunkMask;
  (this->VertexToEdges).bSuspended = (param_1->VertexToEdges).bSuspended;
  (this->VertexToEdges).bEverythingStale = (param_1->VertexToEdges).bEverythingStale;
  (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (param_1->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
  (param_1->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum =
       (param_1->VertexInstanceToTriangles).PerChannelIndices.ArrayNum;
  (this->VertexInstanceToTriangles).PerChannelIndices.ArrayMax =
       (param_1->VertexInstanceToTriangles).PerChannelIndices.ArrayMax;
  (param_1->VertexInstanceToTriangles).PerChannelIndices.ArrayNum = 0;
  (param_1->VertexInstanceToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->VertexInstanceToTriangles).ReferencedElementType =
       (param_1->VertexInstanceToTriangles).ReferencedElementType;
  uVar1 = (param_1->VertexInstanceToTriangles).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->VertexInstanceToTriangles).ReferencingAttributeRef.field_0xc;
  (this->VertexInstanceToTriangles).ReferencingAttributeRef.ArrayPtr =
       (param_1->VertexInstanceToTriangles).ReferencingAttributeRef.ArrayPtr;
  (this->VertexInstanceToTriangles).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->VertexInstanceToTriangles).ReferencingAttributeRef.field_0xc = uVar2;
  (this->VertexInstanceToTriangles).InitialSize = (param_1->VertexInstanceToTriangles).InitialSize;
  (this->VertexInstanceToTriangles).ChunkBits = (param_1->VertexInstanceToTriangles).ChunkBits;
  (this->VertexInstanceToTriangles).ChunkMask = (param_1->VertexInstanceToTriangles).ChunkMask;
  (this->VertexInstanceToTriangles).bSuspended = (param_1->VertexInstanceToTriangles).bSuspended;
  (this->VertexInstanceToTriangles).bEverythingStale =
       (param_1->VertexInstanceToTriangles).bEverythingStale;
  (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (param_1->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data;
  (param_1->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EdgeToTriangles).PerChannelIndices.ArrayNum =
       (param_1->EdgeToTriangles).PerChannelIndices.ArrayNum;
  (this->EdgeToTriangles).PerChannelIndices.ArrayMax =
       (param_1->EdgeToTriangles).PerChannelIndices.ArrayMax;
  (param_1->EdgeToTriangles).PerChannelIndices.ArrayNum = 0;
  (param_1->EdgeToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->EdgeToTriangles).ReferencedElementType = (param_1->EdgeToTriangles).ReferencedElementType;
  uVar1 = (param_1->EdgeToTriangles).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->EdgeToTriangles).ReferencingAttributeRef.field_0xc;
  (this->EdgeToTriangles).ReferencingAttributeRef.ArrayPtr =
       (param_1->EdgeToTriangles).ReferencingAttributeRef.ArrayPtr;
  (this->EdgeToTriangles).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->EdgeToTriangles).ReferencingAttributeRef.field_0xc = uVar2;
  (this->EdgeToTriangles).InitialSize = (param_1->EdgeToTriangles).InitialSize;
  (this->EdgeToTriangles).ChunkBits = (param_1->EdgeToTriangles).ChunkBits;
  (this->EdgeToTriangles).ChunkMask = (param_1->EdgeToTriangles).ChunkMask;
  (this->EdgeToTriangles).bSuspended = (param_1->EdgeToTriangles).bSuspended;
  (this->EdgeToTriangles).bEverythingStale = (param_1->EdgeToTriangles).bEverythingStale;
  (this->UVToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (param_1->UVToTriangles).PerChannelIndices.AllocatorInstance.Data;
  (param_1->UVToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->UVToTriangles).PerChannelIndices.ArrayNum =
       (param_1->UVToTriangles).PerChannelIndices.ArrayNum;
  (this->UVToTriangles).PerChannelIndices.ArrayMax =
       (param_1->UVToTriangles).PerChannelIndices.ArrayMax;
  (param_1->UVToTriangles).PerChannelIndices.ArrayNum = 0;
  (param_1->UVToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->UVToTriangles).ReferencedElementType = (param_1->UVToTriangles).ReferencedElementType;
  uVar1 = (param_1->UVToTriangles).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->UVToTriangles).ReferencingAttributeRef.field_0xc;
  (this->UVToTriangles).ReferencingAttributeRef.ArrayPtr =
       (param_1->UVToTriangles).ReferencingAttributeRef.ArrayPtr;
  (this->UVToTriangles).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->UVToTriangles).ReferencingAttributeRef.field_0xc = uVar2;
  (this->UVToTriangles).InitialSize = (param_1->UVToTriangles).InitialSize;
  (this->UVToTriangles).ChunkBits = (param_1->UVToTriangles).ChunkBits;
  (this->UVToTriangles).ChunkMask = (param_1->UVToTriangles).ChunkMask;
  (this->UVToTriangles).bSuspended = (param_1->UVToTriangles).bSuspended;
  (this->UVToTriangles).bEverythingStale = (param_1->UVToTriangles).bEverythingStale;
  (this->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (param_1->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data;
  (param_1->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonToTriangles).PerChannelIndices.ArrayNum =
       (param_1->PolygonToTriangles).PerChannelIndices.ArrayNum;
  (this->PolygonToTriangles).PerChannelIndices.ArrayMax =
       (param_1->PolygonToTriangles).PerChannelIndices.ArrayMax;
  (param_1->PolygonToTriangles).PerChannelIndices.ArrayNum = 0;
  (param_1->PolygonToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->PolygonToTriangles).ReferencedElementType =
       (param_1->PolygonToTriangles).ReferencedElementType;
  uVar1 = (param_1->PolygonToTriangles).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->PolygonToTriangles).ReferencingAttributeRef.field_0xc;
  (this->PolygonToTriangles).ReferencingAttributeRef.ArrayPtr =
       (param_1->PolygonToTriangles).ReferencingAttributeRef.ArrayPtr;
  (this->PolygonToTriangles).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->PolygonToTriangles).ReferencingAttributeRef.field_0xc = uVar2;
  (this->PolygonToTriangles).InitialSize = (param_1->PolygonToTriangles).InitialSize;
  (this->PolygonToTriangles).ChunkBits = (param_1->PolygonToTriangles).ChunkBits;
  (this->PolygonToTriangles).ChunkMask = (param_1->PolygonToTriangles).ChunkMask;
  (this->PolygonToTriangles).bSuspended = (param_1->PolygonToTriangles).bSuspended;
  (this->PolygonToTriangles).bEverythingStale = (param_1->PolygonToTriangles).bEverythingStale;
  (this->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (param_1->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data;
  (param_1->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToTriangles).PerChannelIndices.ArrayNum =
       (param_1->PolygonGroupToTriangles).PerChannelIndices.ArrayNum;
  (this->PolygonGroupToTriangles).PerChannelIndices.ArrayMax =
       (param_1->PolygonGroupToTriangles).PerChannelIndices.ArrayMax;
  (param_1->PolygonGroupToTriangles).PerChannelIndices.ArrayNum = 0;
  (param_1->PolygonGroupToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->PolygonGroupToTriangles).ReferencedElementType =
       (param_1->PolygonGroupToTriangles).ReferencedElementType;
  uVar1 = (param_1->PolygonGroupToTriangles).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->PolygonGroupToTriangles).ReferencingAttributeRef.field_0xc;
  (this->PolygonGroupToTriangles).ReferencingAttributeRef.ArrayPtr =
       (param_1->PolygonGroupToTriangles).ReferencingAttributeRef.ArrayPtr;
  (this->PolygonGroupToTriangles).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->PolygonGroupToTriangles).ReferencingAttributeRef.field_0xc = uVar2;
  (this->PolygonGroupToTriangles).InitialSize = (param_1->PolygonGroupToTriangles).InitialSize;
  (this->PolygonGroupToTriangles).ChunkBits = (param_1->PolygonGroupToTriangles).ChunkBits;
  (this->PolygonGroupToTriangles).ChunkMask = (param_1->PolygonGroupToTriangles).ChunkMask;
  (this->PolygonGroupToTriangles).bSuspended = (param_1->PolygonGroupToTriangles).bSuspended;
  (this->PolygonGroupToTriangles).bEverythingStale =
       (param_1->PolygonGroupToTriangles).bEverythingStale;
  (this->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data =
       (param_1->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data;
  (param_1->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToPolygons).PerChannelIndices.ArrayNum =
       (param_1->PolygonGroupToPolygons).PerChannelIndices.ArrayNum;
  (this->PolygonGroupToPolygons).PerChannelIndices.ArrayMax =
       (param_1->PolygonGroupToPolygons).PerChannelIndices.ArrayMax;
  (param_1->PolygonGroupToPolygons).PerChannelIndices.ArrayNum = 0;
  (param_1->PolygonGroupToPolygons).PerChannelIndices.ArrayMax = 0;
  (this->PolygonGroupToPolygons).ReferencedElementType =
       (param_1->PolygonGroupToPolygons).ReferencedElementType;
  uVar1 = (param_1->PolygonGroupToPolygons).ReferencingAttributeRef.Extent;
  uVar2 = *(undefined4 *)&(param_1->PolygonGroupToPolygons).ReferencingAttributeRef.field_0xc;
  (this->PolygonGroupToPolygons).ReferencingAttributeRef.ArrayPtr =
       (param_1->PolygonGroupToPolygons).ReferencingAttributeRef.ArrayPtr;
  (this->PolygonGroupToPolygons).ReferencingAttributeRef.Extent = uVar1;
  *(undefined4 *)&(this->PolygonGroupToPolygons).ReferencingAttributeRef.field_0xc = uVar2;
  (this->PolygonGroupToPolygons).InitialSize = (param_1->PolygonGroupToPolygons).InitialSize;
  (this->PolygonGroupToPolygons).ChunkBits = (param_1->PolygonGroupToPolygons).ChunkBits;
  (this->PolygonGroupToPolygons).ChunkMask = (param_1->PolygonGroupToPolygons).ChunkMask;
  (this->PolygonGroupToPolygons).bSuspended = (param_1->PolygonGroupToPolygons).bSuspended;
  (this->PolygonGroupToPolygons).bEverythingStale =
       (param_1->PolygonGroupToPolygons).bEverythingStale;
  return this;
}

// VertexAttributes @ 14cbcdeb0

TAttributesSet<FVertexID> * __thiscall FMeshDescription::VertexAttributes(FMeshDescription *this)

{
  ForElementType<FMeshElementContainer> FVar1;
  code *pcVar2;
  bool bVar3;
  TAttributesSet<FVertexID> *pTVar4;
  ForElementType<FMeshElementContainer> FVar5;
  
  FVar1 = (ForElementType<FMeshElementContainer>)this->VertexElements;
  if (*(int *)((longlong)FVar1 + 0x88) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TAttributesSet<FVertexID> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FVar5 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<FMeshElementContainer>)0x0) {
    FVar5 = FVar1;
  }
  return (TAttributesSet<FVertexID> *)((longlong)FVar5 + 0x20);
}

