// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// GetSupportsAnisotropicMaterials @ 144777530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsAnisotropicMaterials(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1b4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsAnisotropicMaterials;
}

// GetSupportsPathTracing @ 14481b1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsPathTracing(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsRayTracing == 1 &&
         Infos[param_1.Platform].bSupportsPathTracing == 1;
}

// GetSupportsPerPixelDBufferMask @ 14481b210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsPerPixelDBufferMask(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x26e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsPerPixelDBufferMask;
}

// GetSupportsRayTracingProceduralPrimitive @ 144a8d8d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsRayTracingProceduralPrimitive
          (FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsRayTracing == 1 &&
         Infos[param_1.Platform].bSupportsRayTracingProceduralPrimitive == 1;
}

// GetSupportsShaderExecutionReordering @ 144cd79c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsShaderExecutionReordering
          (FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1a8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsShaderExecutionReordering;
}

// GetMaxMeshShaderThreadGroupSize @ 144fafbf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl
FGenericDataDrivenShaderPlatformInfo::GetMaxMeshShaderThreadGroupSize(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x262,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return Infos[param_1.Platform].MaxMeshShaderThreadGroupSize;
}

// GetSupportsBarycentricsIntrinsics @ 144fc4b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsBarycentricsIntrinsics
          (FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x341,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].SupportsBarycentricsIntrinsics;
}

// GetSupportsBarycentricsSemantic @ 144fc4b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIFeatureSupport": Some values do not have unique names */

ERHIFeatureSupport __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsBarycentricsSemantic(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  ERHIFeatureSupport EVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x347,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Infos[param_1.Platform].SupportsBarycentricsSemantic;
}

// GetSupportsMeshShadersTier1 @ 144fc4bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsMeshShadersTier1(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x256,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsMeshShadersTier1;
}

// GetSupportsPrimitiveShaders @ 144fc4c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsPrimitiveShaders(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x1f6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsPrimitiveShaders;
}

// GetSupportsDOFHybridScattering @ 145157bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsDOFHybridScattering(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x29e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsDOFHybridScattering;
}

// GetSupportsRGBColorBuffer @ 145157c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsRGBColorBuffer(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsRGBColorBuffer;
}

// GetIsPC @ 1452c5360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FGenericDataDrivenShaderPlatformInfo::GetIsPC(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xf4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bIsPC;
}

// GetSupportsInlineRayTracing @ 14532e160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsInlineRayTracing(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x178,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if ((Infos[param_1.Platform].bSupportsRayTracing != 0) &&
     (Infos[param_1.Platform].bSupportsInlineRayTracing != 0)) {
    return true;
  }
  return false;
}

// GetSupportsRayTracingTraversalStatistics @ 14532e1e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsRayTracingTraversalStatistics
          (FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,400,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsRayTracing == 1 &&
         Infos[param_1.Platform].bSupportsRayTracingTraversalStatistics == 1;
}

// GetSupportsPercentageCloserShadows @ 1455b0740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsPercentageCloserShadows
          (FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x12a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsPercentageCloserShadows;
}

// GetSupportsVertexShaderSRVs @ 1458002f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FGenericDataDrivenShaderPlatformInfo::GetSupportsVertexShaderSRVs(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (Infos[param_1.Platform].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,700,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return Infos[param_1.Platform].bSupportsVertexShaderSRVs;
}

