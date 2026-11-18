// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ResizeAllocation @ 147bfde60

void __thiscall
UE::Net::AllocationPolicies::FElementAllocationPolicy::ForElementType<unsigned_int>::
ResizeAllocation(ForElementType<unsigned_int> *this,FNetSerializationContext *param_1,uint param_2,
                uint param_3)

{
  uint *puVar1;
  
  puVar1 = this->Data;
  if (param_3 == 0) {
    if (puVar1 != (uint *)0x0) {
      FElementAllocationPolicy::Free(param_1,puVar1);
      this->Data = (uint *)0x0;
      return;
    }
  }
  else {
    puVar1 = FElementAllocationPolicy::Realloc(param_1,puVar1,(ulonglong)param_3 << 2,4);
    this->Data = puVar1;
  }
  return;
}

