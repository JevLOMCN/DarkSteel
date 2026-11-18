// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AddReferencedObjects @ 1479af900

void __thiscall
ConstructorHelpers::FObjectFinderOptional<UFont>::AddReferencedObjects
          (FObjectFinderOptional<UFont> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479af913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// AddReferencedObjects @ 1479af920

void __thiscall
ConstructorHelpers::FObjectFinderOptional<UMaterial>::AddReferencedObjects
          (FObjectFinderOptional<UMaterial> *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479af933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Object,0,0);
  return;
}

// GetReferencerName @ 1479cefb0

FString * __thiscall
ConstructorHelpers::FObjectFinderOptional<UFont>::GetReferencerName
          (FObjectFinderOptional<UFont> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinderOptional");
  return __return_storage_ptr__;
}

// GetReferencerName @ 1479cefe0

FString * __thiscall
ConstructorHelpers::FObjectFinderOptional<UMaterial>::GetReferencerName
          (FObjectFinderOptional<UMaterial> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectFinderOptional");
  return __return_storage_ptr__;
}

