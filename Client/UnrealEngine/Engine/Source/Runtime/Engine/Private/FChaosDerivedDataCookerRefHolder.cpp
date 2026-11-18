// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddReferencedObjects @ 148264f80

void __thiscall
FChaosDerivedDataCookerRefHolder::AddReferencedObjects
          (FChaosDerivedDataCookerRefHolder *this,FReferenceCollector *param_1)

{
  FChaosDerivedDataCooker *pFVar1;
  
  pFVar1 = this->Cooker;
  if ((pFVar1 != (FChaosDerivedDataCooker *)0x0) &&
     ((pFVar1->Setup).field0_0x0.DebugPtr != (UBodySetup *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148264fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar1->Setup,0,0);
    return;
  }
  return;
}

// GetReferencerName @ 14828c6c0

FString * __thiscall
FChaosDerivedDataCookerRefHolder::GetReferencerName
          (FChaosDerivedDataCookerRefHolder *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ChaosDerivedDataCooker");
  return __return_storage_ptr__;
}

