// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// CalculateNewCapacity @ 144328320

uint __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage>::CalculateNewCapacity
          (ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage> *this,uint param_1
          )

{
  uint uVar1;
  
  uVar1 = 4;
  if (4 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

// CalculateNewCapacity @ 144328340

uint __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName>::CalculateNewCapacity
          (ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *this,
          uint param_1)

{
  uint uVar1;
  
  uVar1 = 4;
  if (4 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

// CalculateNewCapacity @ 144328360

uint __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<UE::Net::FNetToken>::CalculateNewCapacity
          (ForElementType<UE::Net::FNetToken> *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 4;
  if (4 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

// ResizeAllocation @ 14433a220

void __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage>::ResizeAllocation
          (ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage> *this,
          FNetSerializationContext *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  FObjectNetSerializerQuantizedReferenceStorage *pFVar2;
  
  pFVar2 = (this->SecondaryData).Data;
  if (param_3 < 5) {
    if (pFVar2 != (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
      uVar1 = 4;
      if (param_2 < 4) {
        uVar1 = (ulonglong)param_2;
      }
      memmove(this,pFVar2,uVar1 * 0x18);
      pFVar2 = (this->SecondaryData).Data;
      if (pFVar2 != (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
        FMemory::Free(pFVar2);
        (this->SecondaryData).Data = (FObjectNetSerializerQuantizedReferenceStorage *)0x0;
        return;
      }
    }
  }
  else {
    if (pFVar2 == (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
      pFVar2 = FMemory::Realloc((void *)0x0,(ulonglong)param_3 * 0x18,8);
      (this->SecondaryData).Data = pFVar2;
      memmove(pFVar2,this,(ulonglong)param_2 * 0x18);
      return;
    }
    pFVar2 = FMemory::Realloc(pFVar2,(ulonglong)param_3 * 0x18,8);
    (this->SecondaryData).Data = pFVar2;
  }
  return;
}

// ResizeAllocation @ 14433a330

void __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName>::ResizeAllocation
          (ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *this,
          FNetSerializationContext *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  FQuantizedName *pFVar2;
  
  pFVar2 = (this->SecondaryData).Data;
  if (param_3 < 5) {
    if (pFVar2 != (FQuantizedName *)0x0) {
      uVar1 = 4;
      if (param_2 < 4) {
        uVar1 = (ulonglong)param_2;
      }
      memmove(this,pFVar2,uVar1 * 0x18);
      pFVar2 = (this->SecondaryData).Data;
      if (pFVar2 != (FQuantizedName *)0x0) {
        FMemory::Free(pFVar2);
        (this->SecondaryData).Data = (FQuantizedName *)0x0;
        return;
      }
    }
  }
  else {
    if (pFVar2 == (FQuantizedName *)0x0) {
      pFVar2 = FMemory::Realloc((void *)0x0,(ulonglong)param_3 * 0x18,8);
      (this->SecondaryData).Data = pFVar2;
      memmove(pFVar2,this,(ulonglong)param_2 * 0x18);
      return;
    }
    pFVar2 = FMemory::Realloc(pFVar2,(ulonglong)param_3 * 0x18,8);
    (this->SecondaryData).Data = pFVar2;
  }
  return;
}

// ResizeAllocation @ 14433a440

void __thiscall
UE::Net::AllocationPolicies::
TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
ForElementType<UE::Net::FNetToken>::ResizeAllocation
          (ForElementType<UE::Net::FNetToken> *this,FNetSerializationContext *param_1,uint param_2,
          uint param_3)

{
  FNetToken *pFVar1;
  ulonglong uVar2;
  
  pFVar1 = (this->SecondaryData).Data;
  if (param_3 < 5) {
    if (pFVar1 != (FNetToken *)0x0) {
      uVar2 = 4;
      if (param_2 < 4) {
        uVar2 = (ulonglong)param_2;
      }
      memmove(this,pFVar1,uVar2 << 2);
      pFVar1 = (this->SecondaryData).Data;
      if (pFVar1 != (FNetToken *)0x0) {
        FMemory::Free(pFVar1);
        (this->SecondaryData).Data = (FNetToken *)0x0;
        return;
      }
    }
  }
  else {
    if (pFVar1 == (FNetToken *)0x0) {
      pFVar1 = FMemory::Realloc((void *)0x0,(ulonglong)param_3 << 2,4);
      (this->SecondaryData).Data = pFVar1;
      memmove(pFVar1,this,(ulonglong)param_2 << 2);
      return;
    }
    pFVar1 = FMemory::Realloc(pFVar1,(ulonglong)param_3 << 2,4);
    (this->SecondaryData).Data = pFVar1;
  }
  return;
}

