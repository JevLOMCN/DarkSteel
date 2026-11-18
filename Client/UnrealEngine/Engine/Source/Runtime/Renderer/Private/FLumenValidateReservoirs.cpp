// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetRayTracingPayloadType @ 144ccceb0

ERayTracingPayloadType __cdecl FLumenValidateReservoirs::GetRayTracingPayloadType(int param_1)

{
  ERayTracingPayloadType EVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenValidateReservoirs::FHitLighting>
  local_res10 [4];
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenValidateReservoirs::FHitLighting>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenValidateReservoirs::FHitLighting>
            (local_res10,param_1);
  EVar1 = LumenMinimal;
  if (local_res10[0].Tail.DimensionValue != false) {
    EVar1 = RayTracingMaterial;
  }
  return EVar1;
}

