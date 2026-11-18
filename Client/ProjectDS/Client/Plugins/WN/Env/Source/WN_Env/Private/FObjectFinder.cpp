// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 2

// AddReferencedObjects @ 14a04fee0

void __thiscall
ConstructorHelpers::FObjectFinder<UCurveFloat>::AddReferencedObjects
          (FObjectFinder<UCurveFloat> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014a04fef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 14a054840

FString * __thiscall
ConstructorHelpers::FObjectFinder<UCurveFloat>::GetReferencerName
          (FObjectFinder<UCurveFloat> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinder");
  return __return_storage_ptr__;
}

