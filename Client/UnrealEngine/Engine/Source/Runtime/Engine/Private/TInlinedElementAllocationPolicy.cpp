// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// CalculateNewCapacity @ 147bcb860

uint __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<unsigned_int>::CalculateNewCapacity(ForElementType<unsigned_int> *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

// ResizeAllocation @ 147bfdd80

void __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<unsigned_int>::ResizeAllocation
          (ForElementType<unsigned_int> *this,FNetSerializationContext *param_1,uint param_2,
          uint param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  
  puVar1 = (this->SecondaryData).Data;
  if (param_3 < 0x21) {
    if (puVar1 != (uint *)0x0) {
      uVar2 = 0x20;
      if (param_2 < 0x20) {
        uVar2 = (ulonglong)param_2;
      }
      memmove(this,puVar1,uVar2 << 2);
      puVar1 = (this->SecondaryData).Data;
      if (puVar1 != (uint *)0x0) {
        FElementAllocationPolicy::Free(param_1,puVar1);
        (this->SecondaryData).Data = (uint *)0x0;
        return;
      }
    }
  }
  else {
    if (puVar1 == (uint *)0x0) {
      puVar1 = FElementAllocationPolicy::Realloc(param_1,(void *)0x0,(ulonglong)param_3 << 2,4);
      (this->SecondaryData).Data = puVar1;
      memmove(puVar1,this,(ulonglong)param_2 << 2);
      return;
    }
    puVar1 = FElementAllocationPolicy::Realloc(param_1,puVar1,(ulonglong)param_3 << 2,4);
    (this->SecondaryData).Data = puVar1;
  }
  return;
}

