// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 2

// AddReferencedObjects @ 14630d3b0

void __thiscall
ConstructorHelpers::FObjectFinderOptional<UTexture2D>::AddReferencedObjects
          (FObjectFinderOptional<UTexture2D> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014630d3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 146313bb0

FString * __thiscall
ConstructorHelpers::FObjectFinderOptional<UTexture2D>::GetReferencerName
          (FObjectFinderOptional<UTexture2D> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinderOptional");
  return __return_storage_ptr__;
}

