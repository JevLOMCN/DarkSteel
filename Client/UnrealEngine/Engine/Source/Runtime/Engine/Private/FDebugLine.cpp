// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Draw @ 147ad1dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDebugRenderSceneProxy::FDebugLine::Draw(FDebugLine *this,FPrimitiveDrawInterface *param_1)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_18 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.R];
  local_14 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.G];
  local_10 = FLinearColor::sRGBToLinearTable[(this->Color).field0_0x0._s_0.B];
  local_c = (float)(this->Color).field0_0x0._s_0.A * __real_3b808081;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,this,&this->End,&local_18,0,this->Thickness,0,0.0 < this->Thickness);
  return;
}

