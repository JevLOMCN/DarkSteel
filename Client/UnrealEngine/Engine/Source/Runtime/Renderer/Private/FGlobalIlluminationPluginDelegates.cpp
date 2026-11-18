// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// AnyRayTracingPassEnabled @ 144802ab0

TMulticastDelegate<void___cdecl(bool_&),FDefaultDelegateUserPolicy> * __cdecl
FGlobalIlluminationPluginDelegates::AnyRayTracingPassEnabled(void)

{
  return &GIPluginAnyRaytracingPassEnabledDelegate;
}

// PrepareRayTracing @ 14481e000

TMulticastDelegate<void___cdecl(FViewInfo_const_&,TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __cdecl FGlobalIlluminationPluginDelegates::PrepareRayTracing(void)

{
  return &GIPluginPrepareRayTracingDelegate;
}

// RenderDiffuseIndirectLight @ 1448291a0

TMulticastDelegate<void___cdecl(FScene_const_&,FViewInfo_const_&,FRDGBuilder_&,FGlobalIlluminationPluginResources_&),FDefaultDelegateUserPolicy>
* __cdecl FGlobalIlluminationPluginDelegates::RenderDiffuseIndirectLight(void)

{
  return &GIPluginRenderDiffuseIndirectLightDelegate;
}

// RenderDiffuseIndirectVisualizations @ 1448291b0

TMulticastDelegate<void___cdecl(FScene_const_&,FViewInfo_const_&,FRDGBuilder_&,FGlobalIlluminationPluginResources_&),FDefaultDelegateUserPolicy>
* __cdecl FGlobalIlluminationPluginDelegates::RenderDiffuseIndirectVisualizations(void)

{
  return &GIPluginRenderDiffuseIndirectVisualizationsDelegate;
}

