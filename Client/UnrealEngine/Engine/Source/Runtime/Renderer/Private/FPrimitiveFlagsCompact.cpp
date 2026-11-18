// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FPrimitiveFlagsCompact @ 1452953d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveFlagsCompact * __thiscall
FPrimitiveFlagsCompact::FPrimitiveFlagsCompact
          (FPrimitiveFlagsCompact *this,FPrimitiveSceneProxy *param_1)

{
  FPrimitiveFlagsCompact FVar1;
  
  FVar1 = (FPrimitiveFlagsCompact)
          ((param_1->bCastDynamicShadow ^ this->bCastDynamicShadow) & 1 ^ (byte)*this);
  *this = FVar1;
  FVar1 = (FPrimitiveFlagsCompact)(((byte)param_1->field_0x7a >> 5 ^ (byte)FVar1) & 2 ^ (byte)FVar1)
  ;
  *this = FVar1;
  FVar1 = (FPrimitiveFlagsCompact)(((byte)param_1->field_0x7d >> 5 ^ (byte)FVar1) & 4 ^ (byte)FVar1)
  ;
  *this = FVar1;
  FVar1 = (FPrimitiveFlagsCompact)((param_1->field_0x81 << 2 ^ (byte)FVar1) & 8 ^ (byte)FVar1);
  *this = FVar1;
  FVar1 = (FPrimitiveFlagsCompact)((param_1->field_0x81 << 2 ^ (byte)FVar1) & 0x10 ^ (byte)FVar1);
  *this = FVar1;
  *this = (FPrimitiveFlagsCompact)
          (((byte)param_1->field_0x81 >> 1 ^ (byte)FVar1) & 0x20 ^ (byte)FVar1);
  return this;
}

