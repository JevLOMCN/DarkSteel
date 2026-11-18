// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// SupportsDynamicReloading @ 145bd6380

bool __thiscall FOpenGLDynamicRHIModule::SupportsDynamicReloading(FOpenGLDynamicRHIModule *this)

{
  return false;
}

// IsSupported @ 145bd6390

bool __thiscall FOpenGLDynamicRHIModule::IsSupported(FOpenGLDynamicRHIModule *this)

{
  return true;
}

// CreateRHI @ 145bd63a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FDynamicRHI * __thiscall
FOpenGLDynamicRHIModule::CreateRHI(FOpenGLDynamicRHIModule *this,Type param_1)

{
  FOpenGLDynamicRHI *pFVar1;
  
  GRequestedFeatureLevel = param_1;
  pFVar1 = ::operator_new(0x14c80);
  if (pFVar1 != (FOpenGLDynamicRHI *)0x0) {
    pFVar1 = FOpenGLDynamicRHI::FOpenGLDynamicRHI(pFVar1);
    return (FDynamicRHI *)pFVar1;
  }
  return (FDynamicRHI *)0x0;
}

