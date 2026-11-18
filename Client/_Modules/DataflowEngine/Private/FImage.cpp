// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// FImage @ 1462ceb10

FImage * __thiscall FImage::FImage(FImage *this,FImage *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  size_t _Size;
  FScriptContainerElement *_Src;
  longlong lVar3;
  
  lVar3 = param_1->_padding_;
  pTVar1 = &this->RawData;
  plVar2 = &(this->RawData).ArrayMax;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Size = (param_1->RawData).ArrayNum;
  _Src = (param_1->RawData).AllocatorInstance.Data;
  (this->RawData).ArrayNum = _Size;
  if (_Size == 0) {
    *plVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,_Size,0,&pTVar1->AllocatorInstance,_Size,plVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,_Size);
  }
  return this;
}

