// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 1

// GetActorQuat @ 14cf0ef80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TQuat<double> * __thiscall AActor::GetActorQuat(AActor *this,TQuat<double> *__return_storage_ptr__)

{
  USceneComponent *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pUVar1 = (this->RootComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    local_28 = 0.0;
    dStack_20 = 0.0;
    local_18 = ___xmm_3ff00000000000000000000000000000;
    dStack_10 = _UNK_15061cbc8;
  }
  else {
    local_28 = (pUVar1->ComponentToWorld).Rotation.XY.m128d_f64[0];
    dStack_20 = (pUVar1->ComponentToWorld).Rotation.XY.m128d_f64[1];
    local_18 = (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    dStack_10 = (pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  }
  __return_storage_ptr__->X = local_28;
  __return_storage_ptr__->Y = dStack_20;
  __return_storage_ptr__->Z = local_18;
  __return_storage_ptr__->W = dStack_10;
  return __return_storage_ptr__;
}

