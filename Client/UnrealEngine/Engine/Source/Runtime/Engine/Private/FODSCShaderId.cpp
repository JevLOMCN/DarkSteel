// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FODSCShaderId @ 148089a90

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

FODSCShaderId * __thiscall
FODSCThread::FODSCShaderId::FODSCShaderId(FODSCShaderId *this,FShaderId *param_1)

{
  FHashedName *pFVar1;
  FHashedName local_res8;
  FHashedName local_res10;
  
  if (param_1->Type == (FShaderType *)0x0) {
    pFVar1 = FHashedName::FHashedName(&local_res10,(wchar_t *)0x0);
  }
  else {
    pFVar1 = FHashedName::FHashedName(&local_res8,&param_1->Type->HashedName);
  }
  FHashedName::FHashedName(&this->ShaderTypeHashedName,pFVar1);
  if (param_1->VFType == (FVertexFactoryType *)0x0) {
    pFVar1 = FHashedName::FHashedName(&local_res10,(wchar_t *)0x0);
  }
  else {
    pFVar1 = FHashedName::FHashedName(&local_res8,&param_1->VFType->HashedName);
  }
  FHashedName::FHashedName(&this->VFTypeHashedName,pFVar1);
  FHashedName::FHashedName(&this->ShaderPipelineName,&param_1->ShaderPipelineName);
  this->PermutationId = param_1->PermutationId;
  this->Platform = param_1->Platform;
  return this;
}

