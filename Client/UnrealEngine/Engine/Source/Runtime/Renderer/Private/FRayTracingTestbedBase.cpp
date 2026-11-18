// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CanRunInEnvironment @ 145737830

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRayTracingTestbedBase::CanRunInEnvironment
          (FRayTracingTestbedBase *this,FString *param_1,FString *param_2,bool *param_3)

{
  if ((GRHIGlobals.RayTracing.Supported) && (GRHIGlobals.RayTracing.SupportsShaders)) {
    return true;
  }
  if (param_2 != (FString *)0x0) {
    ::FString::operator=(param_2,L"RHI does not support Ray Tracing and/or Ray Tracing Shaders.");
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
  return false;
}

