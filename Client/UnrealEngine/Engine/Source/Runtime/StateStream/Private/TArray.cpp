// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 1

// operator= @ 143125f20

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x60);
    }
  }
  return this;
}

