// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGSpawnSplineMeshPerIterationState @ 149c4a4b0

FPCGSpawnSplineMeshPerIterationState * __thiscall
FPCGSpawnSplineMeshPerIterationState::FPCGSpawnSplineMeshPerIterationState
          (FPCGSpawnSplineMeshPerIterationState *this)

{
  FPCGSplineMeshParams *this_00;
  
  FSplineMeshComponentDescriptor::FSplineMeshComponentDescriptor
            ((FSplineMeshComponentDescriptor *)this);
  this_00 = &(this->SMCBuilderParams).SplineMeshParams;
  FPCGSplineMeshParams::FPCGSplineMeshParams(this_00);
  (this->SMCBuilderParams).SettingsCrc.Value = 0;
  (this->SMCBuilderParams).SettingsCrc.bValid = false;
  (this->DescriptionOverrides).OutputKey._padding_ =
       (longlong)
       &___7__FPCGAttributeAccessorKeysSingleObjectPtr_UFSplineMeshComponentDescriptor__X__6B_;
  (this->ParamsOverrides).OutputKey._padding_ =
       (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_UFPCGSplineMeshParams__X__6B_;
  (this->ComponentOverrides).OutputKey._padding_ =
       (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_VUSplineMeshComponent__X__6B_;
  (this->ParamsOverrides).OutputKey.Ptr = this_00;
  (this->DescriptionOverrides).bPropagateEditChangeEvent = false;
  (this->DescriptionOverrides).CachedOutputObject = (UObject *)0x0;
  *(undefined1 *)&(this->DescriptionOverrides).OutputKey._padding_ = 0;
  (this->DescriptionOverrides).OutputKey.Ptr = (FSplineMeshComponentDescriptor *)this;
  (this->DescriptionOverrides).ObjectSingleOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DescriptionOverrides).ObjectSingleOverrides.ArrayNum = 0;
  (this->DescriptionOverrides).ObjectSingleOverrides.ArrayMax = 0;
  (this->DescriptionOverrides).bInitialized = false;
  (this->ParamsOverrides).bPropagateEditChangeEvent = false;
  (this->ParamsOverrides).CachedOutputObject = (UObject *)0x0;
  *(undefined1 *)&(this->ParamsOverrides).OutputKey._padding_ = 0;
  (this->ParamsOverrides).ObjectSingleOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParamsOverrides).ObjectSingleOverrides.ArrayNum = 0;
  (this->ParamsOverrides).ObjectSingleOverrides.ArrayMax = 0;
  (this->ParamsOverrides).bInitialized = false;
  (this->ComponentOverrides).bPropagateEditChangeEvent = false;
  (this->ComponentOverrides).CachedOutputObject = (UObject *)0x0;
  *(undefined1 *)&(this->ComponentOverrides).OutputKey._padding_ = 0;
  (this->ComponentOverrides).OutputKey.Ptr = (USplineMeshComponent *)0x0;
  (this->ComponentOverrides).ObjectSingleOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentOverrides).ObjectSingleOverrides.ArrayNum = 0;
  (this->ComponentOverrides).ObjectSingleOverrides.ArrayMax = 0;
  (this->ComponentOverrides).bInitialized = false;
  this->SplineData = (UPCGPolyLineData *)0x0;
  this->LandscapeSplineData = (UPCGLandscapeSplineData *)0x0;
  this->ElementIndex = 0;
  return this;
}

// ~FPCGSpawnSplineMeshPerIterationState @ 149c4d5a0

void __thiscall
FPCGSpawnSplineMeshPerIterationState::~FPCGSpawnSplineMeshPerIterationState
          (FPCGSpawnSplineMeshPerIterationState *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPCGObjectSingleOverride,int>
            ((FPCGObjectSingleOverride *)
             (this->ComponentOverrides).ObjectSingleOverrides.AllocatorInstance.Data,
             (this->ComponentOverrides).ObjectSingleOverrides.ArrayNum);
  pFVar1 = (this->ComponentOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGObjectSingleOverride,int>
            ((FPCGObjectSingleOverride *)
             (this->ParamsOverrides).ObjectSingleOverrides.AllocatorInstance.Data,
             (this->ParamsOverrides).ObjectSingleOverrides.ArrayNum);
  pFVar1 = (this->ParamsOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGObjectSingleOverride,int>
            ((FPCGObjectSingleOverride *)
             (this->DescriptionOverrides).ObjectSingleOverrides.AllocatorInstance.Data,
             (this->DescriptionOverrides).ObjectSingleOverrides.ArrayNum);
  pFVar1 = (this->DescriptionOverrides).ObjectSingleOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSplineMeshComponentDescriptor::~FSplineMeshComponentDescriptor
            ((FSplineMeshComponentDescriptor *)this);
  return;
}

