// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd9ac00

UScriptStruct * __cdecl FGeometryScriptSimpleCollision::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptSimpleCollision.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptSimpleCollision.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSimpleCollision,(UObject *)pUVar1,
                         L"GeometryScriptSimpleCollision");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptSimpleCollision.OuterSingleton;
}

// FGeometryScriptSimpleCollision @ 14cda5570

FGeometryScriptSimpleCollision * __thiscall
FGeometryScriptSimpleCollision::FGeometryScriptSimpleCollision(FGeometryScriptSimpleCollision *this)

{
  (this->AggGeom).SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphereElems.ArrayNum = 0;
  (this->AggGeom).SphereElems.ArrayMax = 0;
  (this->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).BoxElems.ArrayNum = 0;
  (this->AggGeom).BoxElems.ArrayMax = 0;
  (this->AggGeom).SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SphylElems.ArrayNum = 0;
  (this->AggGeom).SphylElems.ArrayMax = 0;
  (this->AggGeom).ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).ConvexElems.ArrayNum = 0;
  (this->AggGeom).ConvexElems.ArrayMax = 0;
  (this->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (this->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (this->AggGeom).LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).LevelSetElems.ArrayNum = 0;
  (this->AggGeom).LevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (this->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (this->AggGeom).MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (this->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (this->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (this->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (this->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  return this;
}

