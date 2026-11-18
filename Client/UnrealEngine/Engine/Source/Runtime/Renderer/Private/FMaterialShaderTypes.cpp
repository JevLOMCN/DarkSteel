// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// AddShaderType @ 14473f510

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall
FMaterialShaderTypes::AddShaderType(FMaterialShaderTypes *this,FShaderType *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  
  bVar1 = (byte)param_1->Frequency;
  if (this->ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderType *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->ShaderType[bVar1] = param_1;
  this->PermutationId[bVar1] = param_2;
  return param_1;
}

// AddShaderType<FHWRasterizeMS> @ 144f579c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall
FMaterialShaderTypes::AddShaderType<FHWRasterizeMS>(FMaterialShaderTypes *this,int param_1)

{
  FShaderType *pFVar1;
  
  pFVar1 = (FShaderType *)FHWRasterizeMS::GetStaticType();
  pFVar1 = AddShaderType(this,pFVar1,param_1);
  return pFVar1;
}

// AddShaderType<FHWRasterizeWGMS> @ 144f57a00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall
FMaterialShaderTypes::AddShaderType<FHWRasterizeWGMS>(FMaterialShaderTypes *this,int param_1)

{
  FShaderType *pFVar1;
  
  pFVar1 = (FShaderType *)FHWRasterizeWGMS::GetStaticType();
  pFVar1 = AddShaderType(this,pFVar1,param_1);
  return pFVar1;
}

// AddShaderType<FMicropolyRasterizeCS> @ 144f57a40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall
FMaterialShaderTypes::AddShaderType<FMicropolyRasterizeCS>(FMaterialShaderTypes *this,int param_1)

{
  FShaderType *pFVar1;
  
  pFVar1 = (FShaderType *)FMicropolyRasterizeCS::GetStaticType();
  pFVar1 = AddShaderType(this,pFVar1,param_1);
  return pFVar1;
}

// AddShaderType<FMicropolyRasterizeWG> @ 144f57a80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __thiscall
FMaterialShaderTypes::AddShaderType<FMicropolyRasterizeWG>(FMaterialShaderTypes *this,int param_1)

{
  FShaderType *pFVar1;
  
  pFVar1 = (FShaderType *)FMicropolyRasterizeWG::GetStaticType();
  pFVar1 = AddShaderType(this,pFVar1,param_1);
  return pFVar1;
}

