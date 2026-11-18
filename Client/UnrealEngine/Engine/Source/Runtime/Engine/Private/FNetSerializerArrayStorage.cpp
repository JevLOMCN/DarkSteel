// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AdjustSize @ 147bc92f0

void __thiscall
UE::Net::
FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::AdjustSize(FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
             *this,FNetSerializationContext *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar3;
  uint uVar4;
  
  puVar1 = &this->ArrayNum;
  uVar4 = 0x20;
  if (0x20 < param_2) {
    uVar4 = param_2;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<unsigned_int>::ResizeAllocation(&this->AllocatorInstance,param_1,*puVar1,uVar4);
  uVar2 = *puVar1;
  this->ArrayMaxCapacity = uVar4;
  if (uVar2 < uVar4) {
    pFVar3 = (FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pFVar3 != (FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      this = pFVar3;
    }
    memset((this->AllocatorInstance).InlineData + uVar2,0,(ulonglong)(uVar4 - uVar2) << 2);
  }
  if (param_2 < uVar4) {
    uVar4 = param_2;
  }
  *puVar1 = uVar4;
  return;
}

// Free @ 147bdd600

void __thiscall
UE::Net::
FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::Free(FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
       *this,FNetSerializationContext *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (puVar1 == (uint *)0x0) {
    this->ArrayNum = 0;
    this->ArrayMaxCapacity = 0x20;
    return;
  }
  uVar2 = 0x20;
  if (this->ArrayNum < 0x20) {
    uVar2 = this->ArrayNum;
  }
  memmove(this,puVar1,(ulonglong)uVar2 << 2);
  puVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (puVar1 != (uint *)0x0) {
    AllocationPolicies::FElementAllocationPolicy::Free(param_1,puVar1);
    (this->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
    this->ArrayMaxCapacity = 0x20;
    this->ArrayNum = 0;
    return;
  }
  this->ArrayMaxCapacity = 0x20;
  this->ArrayNum = 0;
  return;
}

