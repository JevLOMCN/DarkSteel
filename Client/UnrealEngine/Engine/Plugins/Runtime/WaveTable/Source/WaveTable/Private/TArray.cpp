// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 2

// TArray<unsigned_char,TSizedDefaultAllocator<32>_><unsigned_char,int> @ 14b2bb7e0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
TArray<unsigned_char,TSizedDefaultAllocator<32>_><unsigned_char,int>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_char,int> *param_1)

{
  int iVar1;
  uchar *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1);
  return this;
}

// operator=<unsigned_char,int> @ 14b2bb870

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char,int>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_char,int> *param_1)

{
  int *piVar1;
  int iVar2;
  uchar *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2);
  }
  return this;
}

