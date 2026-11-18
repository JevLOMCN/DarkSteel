// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator= @ 145d917b0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FRayTracingGeometryInitializer * __thiscall
FRayTracingGeometryInitializer::operator=
          (FRayTracingGeometryInitializer *this,FRayTracingGeometryInitializer *param_1)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar2;
  FRHIBuffer *this_00;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  
  if (this != param_1) {
    this_00 = (this->IndexBuffer).Reference;
    (this->IndexBuffer).Reference = (param_1->IndexBuffer).Reference;
    (param_1->IndexBuffer).Reference = (FRHIBuffer *)0x0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar1 = &param_1->Segments;
  this->IndexBufferOffset = param_1->IndexBufferOffset;
  pTVar2 = &this->Segments;
  this->GeometryType = param_1->GeometryType;
  this->TotalPrimitiveCount = param_1->TotalPrimitiveCount;
  this->bFastBuild = param_1->bFastBuild;
  this->bAllowUpdate = param_1->bAllowUpdate;
  this->bAllowCompaction = param_1->bAllowCompaction;
  this->bTemplate = param_1->bTemplate;
  this->Type = param_1->Type;
  if (pTVar2 != pTVar1) {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)(pTVar2->AllocatorInstance).Data,
               (this->Segments).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Segments).ArrayNum = (param_1->Segments).ArrayNum;
    (this->Segments).ArrayMax = (param_1->Segments).ArrayMax;
    (param_1->Segments).ArrayNum = 0;
    (param_1->Segments).ArrayMax = 0;
  }
  this->OfflineData = param_1->OfflineData;
  uVar4 = *(undefined8 *)((param_1->OfflineDataHeader).Reserved + 2);
  *(undefined8 *)(this->OfflineDataHeader).Reserved =
       *(undefined8 *)(param_1->OfflineDataHeader).Reserved;
  *(undefined8 *)((this->OfflineDataHeader).Reserved + 2) = uVar4;
  *(undefined8 *)((this->OfflineDataHeader).Reserved + 4) =
       *(undefined8 *)((param_1->OfflineDataHeader).Reserved + 4);
  this->SourceGeometry = param_1->SourceGeometry;
  (this->DebugName).Name = (param_1->DebugName).Name;
  (this->DebugName).Number = (param_1->DebugName).Number;
  this->OwnerName = param_1->OwnerName;
  return this;
}

