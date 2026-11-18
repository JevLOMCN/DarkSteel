// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FindComponentByClass<UControlRigComponent> @ 14a397730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigComponent * __thiscall AActor::FindComponentByClass<UControlRigComponent>(AActor *this)

{
  code *pcVar1;
  UControlRigComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UControlRigComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UControlRigComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

