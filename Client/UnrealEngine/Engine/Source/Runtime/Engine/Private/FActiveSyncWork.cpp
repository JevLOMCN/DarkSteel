// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetTickFunction @ 1488597f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tick::FActiveSyncPoint::FActiveSyncWork::SetTickFunction
          (FActiveSyncWork *this,FTickFunction *param_1,bool param_2)

{
  FTickFunction *pFVar1;
  
  if ((((this->field0_0x0).StateValue & 0x200) != 0) &&
     (pFVar1 = this->TickFunction, pFVar1 != (FTickFunction *)0x0)) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  (this->field0_0x0).StateValue = (this->field0_0x0).StateValue & 0xfffffdff;
  this->TickFunction = param_1;
  (this->field0_0x0).StateValue = (this->field0_0x0).StateValue | (uint)param_2 << 9;
  return;
}

