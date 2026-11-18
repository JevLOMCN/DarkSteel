// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// MakeHash @ 148534090

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

uint __thiscall FShaderCompileJobKey::MakeHash(FShaderCompileJobKey *this,uint param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = this->PermutationId;
  uVar4 = ((uint)((ulonglong)this->ShaderType >> 0x14) & 0xffff ^
          (uint)((ulonglong)this->ShaderType >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if (this->VFType == (FVertexFactoryType *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar1 = (this->VFType->HashedName).Hash;
    uVar5 = (int)(uVar1 >> 0x20) * 0x17 + (int)uVar1;
  }
  uVar7 = param_1 - uVar5 ^ uVar5 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar6 = (uVar5 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar5 = (uVar2 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar2 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar6 = (uVar7 - uVar2) - uVar5 ^ uVar2 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar2 ^ uVar6 << 10;
  uVar6 = ((uVar2 - uVar5) - uVar6 ^ uVar5 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar2 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 0xc;
  uVar4 = (uVar5 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar5 = (uVar2 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar2 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar5 = ((uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xc;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  return (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

