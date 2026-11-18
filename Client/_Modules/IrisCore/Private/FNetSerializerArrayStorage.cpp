// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// AdjustSize @ 144327f60

void __thiscall
UE::Net::
FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::AdjustSize(FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
             *this,FNetSerializationContext *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar3;
  uint uVar4;
  
  puVar1 = &this->ArrayNum;
  uVar4 = 4;
  if (4 < param_2) {
    uVar4 = param_2;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage>::ResizeAllocation
            (&this->AllocatorInstance,param_1,*puVar1,uVar4);
  uVar2 = *puVar1;
  this->ArrayMaxCapacity = uVar4;
  if (uVar2 < uVar4) {
    pFVar3 = (FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pFVar3 != (FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      this = pFVar3;
    }
    memset((this->AllocatorInstance).InlineData + uVar2,0,(ulonglong)(uVar4 - uVar2) * 0x18);
  }
  if (param_2 < uVar4) {
    uVar4 = param_2;
  }
  *puVar1 = uVar4;
  return;
}

// AdjustSize @ 144327ff0

void __thiscall
UE::Net::
FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::AdjustSize(FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
             *this,FNetSerializationContext *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *pFVar3;
  uint uVar4;
  
  puVar1 = &this->ArrayNum;
  uVar4 = 4;
  if (4 < param_2) {
    uVar4 = param_2;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName>::ResizeAllocation
            (&this->AllocatorInstance,param_1,*puVar1,uVar4);
  uVar2 = *puVar1;
  this->ArrayMaxCapacity = uVar4;
  if (uVar2 < uVar4) {
    pFVar3 = (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pFVar3 != (FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                   *)0x0) {
      this = pFVar3;
    }
    memset((this->AllocatorInstance).InlineData + uVar2,0,(ulonglong)(uVar4 - uVar2) * 0x18);
  }
  if (param_2 < uVar4) {
    uVar4 = param_2;
  }
  *puVar1 = uVar4;
  return;
}

// Free @ 14432f8d0

void __thiscall
UE::Net::
FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::Free(FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
       *this,FNetSerializationContext *param_1)

{
  FObjectNetSerializerQuantizedReferenceStorage *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (pFVar1 == (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
    this->ArrayMaxCapacity = 4;
    this->ArrayNum = 0;
    return;
  }
  uVar2 = 4;
  if (this->ArrayNum < 4) {
    uVar2 = this->ArrayNum;
  }
  memmove(this,pFVar1,(ulonglong)uVar2 * 0x18);
  pFVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (pFVar1 != (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
    FMemory::Free(pFVar1);
    (this->AllocatorInstance).SecondaryData.Data =
         (FObjectNetSerializerQuantizedReferenceStorage *)0x0;
    this->ArrayMaxCapacity = 4;
    this->ArrayNum = 0;
    return;
  }
  this->ArrayMaxCapacity = 4;
  this->ArrayNum = 0;
  return;
}

// Free @ 14432f950

void __thiscall
UE::Net::
FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::Free(FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
       *this,FNetSerializationContext *param_1)

{
  FQuantizedName *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (pFVar1 == (FQuantizedName *)0x0) {
    this->ArrayMaxCapacity = 4;
    this->ArrayNum = 0;
    return;
  }
  uVar2 = 4;
  if (this->ArrayNum < 4) {
    uVar2 = this->ArrayNum;
  }
  memmove(this,pFVar1,(ulonglong)uVar2 * 0x18);
  pFVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (pFVar1 != (FQuantizedName *)0x0) {
    FMemory::Free(pFVar1);
    (this->AllocatorInstance).SecondaryData.Data = (FQuantizedName *)0x0;
    this->ArrayMaxCapacity = 4;
    this->ArrayNum = 0;
    return;
  }
  this->ArrayMaxCapacity = 4;
  this->ArrayNum = 0;
  return;
}

// Free @ 14432f9d0

void __thiscall
UE::Net::
FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
::Free(FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
       *this,FNetSerializationContext *param_1)

{
  FNetToken *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (pFVar1 == (FNetToken *)0x0) {
    this->ArrayMaxCapacity = 4;
    this->ArrayNum = 0;
    return;
  }
  uVar2 = 4;
  if (this->ArrayNum < 4) {
    uVar2 = this->ArrayNum;
  }
  memmove(this,pFVar1,(ulonglong)uVar2 << 2);
  pFVar1 = (this->AllocatorInstance).SecondaryData.Data;
  if (pFVar1 != (FNetToken *)0x0) {
    FMemory::Free(pFVar1);
    (this->AllocatorInstance).SecondaryData.Data = (FNetToken *)0x0;
    this->ArrayMaxCapacity = 4;
    this->ArrayNum = 0;
    return;
  }
  this->ArrayMaxCapacity = 4;
  this->ArrayNum = 0;
  return;
}

