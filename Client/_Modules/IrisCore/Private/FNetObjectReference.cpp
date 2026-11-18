// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ToString @ 144254cb0

FString * __thiscall
UE::Net::FNetObjectReference::ToString(FNetObjectReference *this,FString *__return_storage_ptr__)

{
  FNetToken *this_00;
  FString local_28;
  FString local_18;
  
  this_00 = &this->PathToken;
  if (((this_00->field0_0x0).Value & 0xfffff) == 0) {
    FNetRefHandle::ToString(&this->RefHandle,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if ((this->RefHandle).field0_0x0.Value != 0) {
    FNetToken::ToString(this_00,&local_28);
    FNetRefHandle::ToString(&this->RefHandle,&local_18);
    ::FString::AppendfImpl(&local_28,L" : %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  FNetToken::ToString(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

