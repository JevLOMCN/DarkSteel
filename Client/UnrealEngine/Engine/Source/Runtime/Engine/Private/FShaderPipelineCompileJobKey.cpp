// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// MakeHash @ 148534280

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

uint __thiscall
FShaderPipelineCompileJobKey::MakeHash(FShaderPipelineCompileJobKey *this,uint param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0;
  uVar4 = this->PermutationId;
  if (this->VFType == (FVertexFactoryType *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar1 = (this->VFType->HashedName).Hash;
    uVar6 = (int)(uVar1 >> 0x20) * 0x17 + (int)uVar1;
  }
  if (this->ShaderPipeline != (FShaderPipelineType *)0x0) {
    uVar3 = this->ShaderPipeline->HashIndex;
  }
  uVar5 = param_1 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar7 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar3 = (uVar2 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar2 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar7 ^ uVar2 << 10;
  uVar2 = ((uVar7 - uVar3) - uVar2 ^ uVar3 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar6 ^ uVar2 << 8;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 10;
  uVar6 = ((uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar2 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar4 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar3 = (uVar6 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xf;
}

