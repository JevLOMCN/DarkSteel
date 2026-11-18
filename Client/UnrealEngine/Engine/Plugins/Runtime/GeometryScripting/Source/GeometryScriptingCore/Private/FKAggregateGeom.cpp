// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// FKAggregateGeom @ 14cda5650

FKAggregateGeom * __thiscall
FKAggregateGeom::FKAggregateGeom(FKAggregateGeom *this,FKAggregateGeom *param_1)

{
  (this->SphereElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereElems).ArrayNum = 0;
  (this->SphereElems).ArrayMax = 0;
  (this->BoxElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxElems).ArrayNum = 0;
  (this->BoxElems).ArrayMax = 0;
  (this->SphylElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphylElems).ArrayNum = 0;
  (this->SphylElems).ArrayMax = 0;
  (this->ConvexElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvexElems).ArrayNum = 0;
  (this->ConvexElems).ArrayMax = 0;
  (this->TaperedCapsuleElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaperedCapsuleElems).ArrayNum = 0;
  (this->TaperedCapsuleElems).ArrayMax = 0;
  (this->LevelSetElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelSetElems).ArrayNum = 0;
  (this->LevelSetElems).ArrayMax = 0;
  (this->SkinnedLevelSetElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedLevelSetElems).ArrayNum = 0;
  (this->SkinnedLevelSetElems).ArrayMax = 0;
  (this->MLLevelSetElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MLLevelSetElems).ArrayNum = 0;
  (this->MLLevelSetElems).ArrayMax = 0;
  (this->SkinnedTriangleMeshElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedTriangleMeshElems).ArrayNum = 0;
  (this->SkinnedTriangleMeshElems).ArrayMax = 0;
  this->RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->RenderInfoLock).State = (atomic<unsigned_char>)0x0;
  CloneAgg(this,param_1);
  return this;
}

// FKAggregateGeom @ 14cda56d0

FKAggregateGeom * __thiscall FKAggregateGeom::FKAggregateGeom(FKAggregateGeom *this)

{
  (this->SphereElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereElems).ArrayNum = 0;
  (this->SphereElems).ArrayMax = 0;
  (this->BoxElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxElems).ArrayNum = 0;
  (this->BoxElems).ArrayMax = 0;
  (this->SphylElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphylElems).ArrayNum = 0;
  (this->SphylElems).ArrayMax = 0;
  (this->ConvexElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvexElems).ArrayNum = 0;
  (this->ConvexElems).ArrayMax = 0;
  (this->TaperedCapsuleElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaperedCapsuleElems).ArrayNum = 0;
  (this->TaperedCapsuleElems).ArrayMax = 0;
  (this->LevelSetElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelSetElems).ArrayNum = 0;
  (this->LevelSetElems).ArrayMax = 0;
  (this->SkinnedLevelSetElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedLevelSetElems).ArrayNum = 0;
  (this->SkinnedLevelSetElems).ArrayMax = 0;
  (this->MLLevelSetElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MLLevelSetElems).ArrayNum = 0;
  (this->MLLevelSetElems).ArrayMax = 0;
  (this->SkinnedTriangleMeshElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedTriangleMeshElems).ArrayNum = 0;
  (this->SkinnedTriangleMeshElems).ArrayMax = 0;
  this->RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->RenderInfoLock).State = (atomic<unsigned_char>)0x0;
  return this;
}

