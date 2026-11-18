// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// ~FRayTracingGeometry @ 145f7e1b0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall FRayTracingGeometry::~FRayTracingGeometry(FRayTracingGeometry *this)

{
  FRHIRayTracingGeometry *this_00;
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_01;
  
  this_00 = (this->RayTracingGeometryRHI).Reference;
  if (this_00 != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(this->Initializer).Segments.AllocatorInstance.Data,
             (this->Initializer).Segments.ArrayNum);
  pFVar1 = (this->Initializer).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_01 = (this->Initializer).IndexBuffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->RawData)._padding_);
  (this->RawData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetFriendlyName @ 145f922e0

FString * __thiscall
FRayTracingGeometry::GetFriendlyName(FRayTracingGeometry *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FRayTracingGeometry");
  return __return_storage_ptr__;
}

