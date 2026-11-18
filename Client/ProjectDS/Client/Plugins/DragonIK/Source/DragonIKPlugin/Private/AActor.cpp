// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// FindComponentByClass<UDragonIKTraceManagerComponent> @ 14d2b5790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKTraceManagerComponent * __thiscall
AActor::FindComponentByClass<UDragonIKTraceManagerComponent>(AActor *this)

{
  code *pcVar1;
  UDragonIKTraceManagerComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UDragonIKTraceManagerComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UDragonIKTraceManagerComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

// GetActorForwardVector @ 14d2e9d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
AActor::GetActorForwardVector(AActor *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  USceneComponent *this_00;
  double dVar2;
  TVector<double>_u_0 *pTVar3;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->RootComponent).field0_0x0.DebugPtr;
  if (this_00 == (USceneComponent *)0x0) {
    pTVar3 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_28._s_0)->
              field0_0x0;
  }
  dVar2 = (pTVar3->_s_0).Y;
  dVar1 = (pTVar3->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar3->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

