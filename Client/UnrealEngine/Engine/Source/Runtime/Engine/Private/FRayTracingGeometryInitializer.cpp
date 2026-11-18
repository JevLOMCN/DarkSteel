// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRayTracingGeometryInitializer @ 148620a40

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FRayTracingGeometryInitializer * __thiscall
FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
          (FRayTracingGeometryInitializer *this,FRayTracingGeometryInitializer *param_1)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRHIBuffer *this_00;
  FRayTracingGeometrySegment *pFVar4;
  undefined8 uVar5;
  
  (this->IndexBuffer).Reference = (FRHIBuffer *)0x0;
  this_00 = (param_1->IndexBuffer).Reference;
  (this->IndexBuffer).Reference = this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  pTVar1 = &this->Segments;
  this->IndexBufferOffset = param_1->IndexBufferOffset;
  this->GeometryType = param_1->GeometryType;
  this->TotalPrimitiveCount = param_1->TotalPrimitiveCount;
  this->bFastBuild = param_1->bFastBuild;
  this->bAllowUpdate = param_1->bAllowUpdate;
  this->bAllowCompaction = param_1->bAllowCompaction;
  this->bTemplate = param_1->bTemplate;
  this->Type = param_1->Type;
  piVar2 = &(this->Segments).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Segments).ArrayNum;
  pFVar4 = (FRayTracingGeometrySegment *)(param_1->Segments).AllocatorInstance.Data;
  (this->Segments).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->OfflineData = param_1->OfflineData;
  uVar5 = *(undefined8 *)((param_1->OfflineDataHeader).Reserved + 2);
  *(undefined8 *)(this->OfflineDataHeader).Reserved =
       *(undefined8 *)(param_1->OfflineDataHeader).Reserved;
  *(undefined8 *)((this->OfflineDataHeader).Reserved + 2) = uVar5;
  *(undefined8 *)((this->OfflineDataHeader).Reserved + 4) =
       *(undefined8 *)((param_1->OfflineDataHeader).Reserved + 4);
  this->SourceGeometry = param_1->SourceGeometry;
  (this->DebugName).Name = (param_1->DebugName).Name;
  (this->DebugName).Number = (param_1->DebugName).Number;
  this->OwnerName = param_1->OwnerName;
  return this;
}

