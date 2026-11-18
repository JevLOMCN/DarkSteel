// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 1

// FTensorDesc @ 14eb05bf0

FTensorDesc * __thiscall UE::NNE::FTensorDesc::FTensorDesc(FTensorDesc *this,FTensorDesc *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  ::FString::FString(&this->Name,&param_1->Name);
  this->DataType = param_1->DataType;
  (this->Shape).Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_1->Shape).Data.AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Shape).Data.ArrayNum;
  (this->Shape).Data.ArrayNum = iVar2;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_1->Shape;
  }
  piVar1 = &(this->Shape).Data.ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,(ForElementType<int> *)&this->Shape,iVar2,piVar1);
    _Dst = (this->Shape).Data.AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->Shape;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  return this;
}

