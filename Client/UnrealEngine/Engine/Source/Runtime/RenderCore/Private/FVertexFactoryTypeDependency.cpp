// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// RefreshCachedSourceHash @ 145ecbcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FVertexFactoryTypeDependency::RefreshCachedSourceHash
          (FVertexFactoryTypeDependency *this,EShaderPlatform param_1)

{
  undefined8 uVar1;
  FVertexFactoryType *pFVar2;
  FSHAHash *pFVar3;
  
  pFVar2 = FindVertexFactoryType(&this->VertexFactoryTypeName);
  if (pFVar2 == (FVertexFactoryType *)0x0) {
    (this->VFSourceHash).Hash[0] = '\0';
    (this->VFSourceHash).Hash[1] = '\0';
    (this->VFSourceHash).Hash[2] = '\0';
    (this->VFSourceHash).Hash[3] = '\0';
    (this->VFSourceHash).Hash[4] = '\0';
    (this->VFSourceHash).Hash[5] = '\0';
    (this->VFSourceHash).Hash[6] = '\0';
    (this->VFSourceHash).Hash[7] = '\0';
    (this->VFSourceHash).Hash[8] = '\0';
    (this->VFSourceHash).Hash[9] = '\0';
    (this->VFSourceHash).Hash[10] = '\0';
    (this->VFSourceHash).Hash[0xb] = '\0';
    (this->VFSourceHash).Hash[0xc] = '\0';
    (this->VFSourceHash).Hash[0xd] = '\0';
    (this->VFSourceHash).Hash[0xe] = '\0';
    (this->VFSourceHash).Hash[0xf] = '\0';
    (this->VFSourceHash).Hash[0x10] = '\0';
    (this->VFSourceHash).Hash[0x11] = '\0';
    (this->VFSourceHash).Hash[0x12] = '\0';
    (this->VFSourceHash).Hash[0x13] = '\0';
    return;
  }
  pFVar3 = GetShaderFileHash(pFVar2->ShaderFilename,param_1);
  uVar1 = *(undefined8 *)(pFVar3->Hash + 8);
  *(undefined8 *)(this->VFSourceHash).Hash = *(undefined8 *)pFVar3->Hash;
  *(undefined8 *)((this->VFSourceHash).Hash + 8) = uVar1;
  *(undefined4 *)((this->VFSourceHash).Hash + 0x10) = *(undefined4 *)(pFVar3->Hash + 0x10);
  return;
}

