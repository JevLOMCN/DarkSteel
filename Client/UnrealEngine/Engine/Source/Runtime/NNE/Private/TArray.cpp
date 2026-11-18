// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 4

// TArray<unsigned_char,TSizedDefaultAllocator<64>_><unsigned_char_const_,__int64> @ 1436e3b30

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::
TArray<unsigned_char,TSizedDefaultAllocator<64>_><unsigned_char_const_,__int64>
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,
          TArrayView<unsigned_char_const_,__int64> *param_1)

{
  size_t _Size;
  uchar *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Size = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = _Size;
  if (_Size == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,_Size,0,&this->AllocatorInstance,_Size,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,_Size);
  return this;
}

// operator=<unsigned_char_const_,__int64> @ 1436e3c30

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=<unsigned_char_const_,__int64>
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,
          TArrayView<unsigned_char_const_,__int64> *param_1)

{
  long64 *plVar1;
  size_t _Size;
  uchar *_Src;
  
  _Size = param_1->ArrayNum;
  plVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = _Size;
  if ((_Size == 0) && (*plVar1 == 0)) {
    *plVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,_Size,*plVar1,&this->AllocatorInstance,_Size,plVar1);
  if (_Size != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,_Size);
  }
  return this;
}

// operator=<FString_const_,int> @ 1436e3cc0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::operator=<FString_const_,int>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,TArrayView<FString_const_,int> *param_1
          )

{
  int *piVar1;
  int iVar2;
  FString *pFVar3;
  
  DestructItems<FString,int>((FString *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FString,FString,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator=<TSizedDefaultAllocator<32>_> @ 1436e3d60

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=<TSizedDefaultAllocator<32>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  long64 *plVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  size_t _Size;
  
  iVar2 = param_1->ArrayNum;
  _Size = (size_t)iVar2;
  plVar1 = &this->ArrayMax;
  _Src = (param_1->AllocatorInstance).Data;
  this->ArrayNum = _Size;
  if ((iVar2 == 0) && (*plVar1 == 0)) {
    *plVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,_Size,*plVar1,&this->AllocatorInstance,_Size,plVar1);
    if (iVar2 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,_Size);
    }
  }
  return this;
}

