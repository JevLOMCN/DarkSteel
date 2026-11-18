// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FReplicationCacheData @ 148250060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FReplicationCacheData * __thiscall
FPhysScene_Chaos::FReplicationCacheData::FReplicationCacheData
          (FReplicationCacheData *this,UPrimitiveComponent *param_1,double param_2)

{
  UPrimitiveComponent *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->RootComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->AccessTime = param_2;
  this->bValidStateCached = false;
  *(undefined8 *)&(this->State).Position = 0;
  *(undefined8 *)&(this->State).Position.field_0x8 = 0;
  *(undefined8 *)&(this->State).Position.field_0x10 = 0;
  (this->State).Quaternion.W = 1.0;
  (this->State).Quaternion.X = 0.0;
  (this->State).Quaternion.Y = 0.0;
  (this->State).Quaternion.Z = 0.0;
  *(undefined8 *)&(this->State).LinVel = 0;
  *(undefined8 *)&(this->State).LinVel.field_0x8 = 0;
  *(undefined8 *)&(this->State).LinVel.field_0x10 = 0;
  *(undefined8 *)&(this->State).AngVel = 0;
  *(undefined8 *)&(this->State).AngVel.field_0x8 = 0;
  *(undefined8 *)&(this->State).AngVel.field_0x10 = 0;
  (this->State).Flags = '\0';
  return this;
}

