// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// FTensorShape @ 14eae5f90

FTensorShape * __thiscall
UE::NNE::FTensorShape::FTensorShape(FTensorShape *this,FTensorShape *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<unsigned_int> _Dst;
  
  (this->Data).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FVar3 = (param_1->Data).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Data).ArrayNum;
  (this->Data).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (FTensorShape *)FVar3;
  }
  piVar1 = &(this->Data).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
    return this;
  }
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
            (4,4,iVar2,0,(ForElementType<unsigned_int> *)this,iVar2,piVar1);
  FVar3 = (this->Data).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<unsigned_int>)this;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_1,(longlong)iVar2 << 2);
  return this;
}

