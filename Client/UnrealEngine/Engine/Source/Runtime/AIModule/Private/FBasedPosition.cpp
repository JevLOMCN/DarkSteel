// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// operator= @ 146f97280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBasedPosition * __thiscall FBasedPosition::operator=(FBasedPosition *this,FBasedPosition *param_1)

{
  AActor *pAVar1;
  double dVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pAVar1 = (param_1->Base).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar1);
  }
  (this->Base).field0_0x0 = (param_1->Base).field0_0x0;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar2;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  dVar2 = (param_1->CachedBaseLocation).field0_0x0._s_0.Y;
  (this->CachedBaseLocation).field0_0x0._s_0.X = (param_1->CachedBaseLocation).field0_0x0._s_0.X;
  (this->CachedBaseLocation).field0_0x0._s_0.Y = dVar2;
  (this->CachedBaseLocation).field0_0x0._s_0.Z = (param_1->CachedBaseLocation).field0_0x0._s_0.Z;
  dVar2 = (param_1->CachedBaseRotation).Yaw;
  (this->CachedBaseRotation).Pitch = (param_1->CachedBaseRotation).Pitch;
  (this->CachedBaseRotation).Yaw = dVar2;
  (this->CachedBaseRotation).Roll = (param_1->CachedBaseRotation).Roll;
  dVar2 = (param_1->CachedTransPosition).field0_0x0._s_0.Y;
  (this->CachedTransPosition).field0_0x0._s_0.X = (param_1->CachedTransPosition).field0_0x0._s_0.X;
  (this->CachedTransPosition).field0_0x0._s_0.Y = dVar2;
  (this->CachedTransPosition).field0_0x0._s_0.Z = (param_1->CachedTransPosition).field0_0x0._s_0.Z;
  return this;
}

