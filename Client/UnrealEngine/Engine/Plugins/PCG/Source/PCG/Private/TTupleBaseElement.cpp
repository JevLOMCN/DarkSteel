// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// TTupleBaseElement<TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,1,2><TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_const_&> @ 149ee11b0

TTupleBaseElement<TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,1,2>
* __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,1,2>
::
TTupleBaseElement<TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,1,2><TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>_const_&>
          (TTupleBaseElement<TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>,1,2>
           *this,EForwardingConstructor param_1,
          TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<unsigned_int> _Dst;
  
  (this->Value).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  iVar2 = param_2->ArrayNum;
  (this->Value).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_2 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  piVar1 = &(this->Value).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0xd;
    return this;
  }
  ReallocForCopy<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
            (4,4,iVar2,0,(ForElementType<unsigned_int> *)this,iVar2,piVar1);
  FVar3 = (this->Value).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<unsigned_int>)this;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_2,(longlong)iVar2 << 2);
  return this;
}

