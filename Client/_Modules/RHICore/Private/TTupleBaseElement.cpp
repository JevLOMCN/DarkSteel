// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2><TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 1446c9330

TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2>
* __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2>
::
TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2><TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (TTupleBaseElement<TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,1,2>
           *this,EForwardingConstructor param_1,
          TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  ForElementType<FRHITransientAllocationStats::FAllocation> FVar1;
  
  (this->Value).AllocatorInstance.SecondaryData =
       (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0;
  if ((param_2->AllocatorInstance).SecondaryData ==
      (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0) {
    memmove(this,param_2,0x30);
  }
  FVar1 = (this->Value).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Value).AllocatorInstance.SecondaryData = (param_2->AllocatorInstance).SecondaryData;
  (param_2->AllocatorInstance).SecondaryData =
       (ForElementType<FRHITransientAllocationStats::FAllocation>)0x0;
  (this->Value).ArrayNum = param_2->ArrayNum;
  (this->Value).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 2;
  return this;
}

