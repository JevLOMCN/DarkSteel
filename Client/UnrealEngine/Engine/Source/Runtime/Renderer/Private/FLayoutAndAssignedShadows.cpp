// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FLayoutAndAssignedShadows @ 145609a50

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

FLayoutAndAssignedShadows * __thiscall
FLayoutAndAssignedShadows::FLayoutAndAssignedShadows
          (FLayoutAndAssignedShadows *this,FLayoutAndAssignedShadows *param_1)

{
  ForElementType<FTextureLayout::FTextureLayoutNode> FVar1;
  
  (this->TextureLayout).MinSizeX = (param_1->TextureLayout).MinSizeX;
  (this->TextureLayout).MinSizeY = (param_1->TextureLayout).MinSizeY;
  (this->TextureLayout).SizeX = (param_1->TextureLayout).SizeX;
  (this->TextureLayout).SizeY = (param_1->TextureLayout).SizeY;
  (this->TextureLayout).AspectRatio = (param_1->TextureLayout).AspectRatio;
  (this->TextureLayout).bPowerOfTwoSize = (param_1->TextureLayout).bPowerOfTwoSize;
  (this->TextureLayout).bAlignByFour = (param_1->TextureLayout).bAlignByFour;
  (this->TextureLayout).Nodes.AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0;
  if ((param_1->TextureLayout).Nodes.AllocatorInstance.SecondaryData ==
      (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    memmove(&(this->TextureLayout).Nodes,&(param_1->TextureLayout).Nodes,100);
  }
  FVar1 = (this->TextureLayout).Nodes.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->TextureLayout).Nodes.AllocatorInstance.SecondaryData =
       (param_1->TextureLayout).Nodes.AllocatorInstance.SecondaryData;
  (param_1->TextureLayout).Nodes.AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout::FTextureLayoutNode>)0x0;
  (this->TextureLayout).Nodes.ArrayNum = (param_1->TextureLayout).Nodes.ArrayNum;
  (this->TextureLayout).Nodes.ArrayMax = (param_1->TextureLayout).Nodes.ArrayMax;
  (param_1->TextureLayout).Nodes.ArrayNum = 0;
  (param_1->TextureLayout).Nodes.ArrayMax = 5;
  (this->Shadows).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->Shadows).AllocatorInstance.Data = (param_1->Shadows).AllocatorInstance.Data;
  (param_1->Shadows).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->Shadows).ArrayNum = (param_1->Shadows).ArrayNum;
  (this->Shadows).ArrayMax = (param_1->Shadows).ArrayMax;
  (param_1->Shadows).ArrayNum = 0;
  (param_1->Shadows).ArrayMax = 0;
  return this;
}

