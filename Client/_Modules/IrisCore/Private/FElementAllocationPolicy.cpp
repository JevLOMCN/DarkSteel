// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// Free @ 14432fa50

void __cdecl
UE::Net::AllocationPolicies::FElementAllocationPolicy::Free
          (FNetSerializationContext *param_1,void *param_2)

{
  FMemory::Free(param_2);
  return;
}

// Realloc @ 144338e20

void * __cdecl
UE::Net::AllocationPolicies::FElementAllocationPolicy::Realloc
          (FNetSerializationContext *param_1,void *param_2,ulong64 param_3,uint param_4)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Realloc(param_2,param_3,param_4);
  return pvVar1;
}

// ResizeAllocation @ 14433a2e0

void __thiscall
UE::Net::AllocationPolicies::FElementAllocationPolicy::
ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage>::ResizeAllocation
          (ForElementType<UE::Net::FObjectNetSerializerQuantizedReferenceStorage> *this,
          FNetSerializationContext *param_1,uint param_2,uint param_3)

{
  FObjectNetSerializerQuantizedReferenceStorage *pFVar1;
  
  pFVar1 = this->Data;
  if (param_3 == 0) {
    if (pFVar1 != (FObjectNetSerializerQuantizedReferenceStorage *)0x0) {
      FMemory::Free(pFVar1);
      this->Data = (FObjectNetSerializerQuantizedReferenceStorage *)0x0;
      return;
    }
  }
  else {
    pFVar1 = FMemory::Realloc(pFVar1,(ulonglong)param_3 * 0x18,8);
    this->Data = pFVar1;
  }
  return;
}

// ResizeAllocation @ 14433a3f0

void __thiscall
UE::Net::AllocationPolicies::FElementAllocationPolicy::
ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName>::ResizeAllocation
          (ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *this,
          FNetSerializationContext *param_1,uint param_2,uint param_3)

{
  FQuantizedName *pFVar1;
  
  pFVar1 = this->Data;
  if (param_3 == 0) {
    if (pFVar1 != (FQuantizedName *)0x0) {
      FMemory::Free(pFVar1);
      this->Data = (FQuantizedName *)0x0;
      return;
    }
  }
  else {
    pFVar1 = FMemory::Realloc(pFVar1,(ulonglong)param_3 * 0x18,8);
    this->Data = pFVar1;
  }
  return;
}

// ResizeAllocation @ 14433a4f0

void __thiscall
UE::Net::AllocationPolicies::FElementAllocationPolicy::ForElementType<UE::Net::FNetToken>::
ResizeAllocation(ForElementType<UE::Net::FNetToken> *this,FNetSerializationContext *param_1,
                uint param_2,uint param_3)

{
  FNetToken *pFVar1;
  
  pFVar1 = this->Data;
  if (param_3 == 0) {
    if (pFVar1 != (FNetToken *)0x0) {
      FMemory::Free(pFVar1);
      this->Data = (FNetToken *)0x0;
      return;
    }
  }
  else {
    pFVar1 = FMemory::Realloc(pFVar1,(ulonglong)param_3 << 2,4);
    this->Data = pFVar1;
  }
  return;
}

