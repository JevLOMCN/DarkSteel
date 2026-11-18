// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetViewFlags @ 144fe3c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall Nanite::FConfiguration::SetViewFlags(FConfiguration *this,FViewInfo *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(byte)param_1->_padding_ << 0xc ^ *(uint *)this) & 0x1000 ^ *(uint *)this;
  *(uint *)this = uVar1;
  uVar1 = ((uint)(byte)param_1->_padding_ << 8 ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)this = uVar1;
  uVar1 = ((uint)*(byte *)((longlong)&param_1->_padding_ + 4) << 9 ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)this = uVar1;
  uVar1 = (*(int *)(param_1->_padding_ + 0x58) << 6 ^ uVar1) & 0x4000 ^ uVar1;
  *(uint *)this = uVar1;
  uVar1 = (*(uint *)(param_1->_padding_ + 0x54) >> 3 ^ uVar1) & 0x2000 ^ uVar1;
  *(uint *)this = uVar1;
  *(uint *)this = (~(uint)*(ushort *)(param_1->_padding_ + 0x62) ^ uVar1) & 0x40 ^ uVar1;
  return;
}

