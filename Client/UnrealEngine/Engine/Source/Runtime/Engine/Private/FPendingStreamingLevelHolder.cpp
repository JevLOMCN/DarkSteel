// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddReferencedObjects @ 148b252e0

void __thiscall
FPendingStreamingLevelHolder::AddReferencedObjects
          (FPendingStreamingLevelHolder *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->Levels).AllocatorInstance.Data,(this->Levels).ArrayNum,0,0);
  return;
}

// GetReferencerName @ 148b42280

FString * __thiscall
FPendingStreamingLevelHolder::GetReferencerName
          (FPendingStreamingLevelHolder *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPendingStreamingLevelHolder");
  return __return_storage_ptr__;
}

