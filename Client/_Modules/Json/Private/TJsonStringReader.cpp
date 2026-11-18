// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 2

// ~TJsonStringReader<wchar_t> @ 141dc5a60

void __thiscall
TJsonStringReader<wchar_t>::~TJsonStringReader<wchar_t>(TJsonStringReader<wchar_t> *this)

{
  FBufferReader *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->Reader).Ptr;
  if (this_00 != (FBufferReader *)0x0) {
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    ::operator_delete(this_00,0xb0);
  }
  pFVar1 = (this->Content).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// InitReader @ 141dd7e30

void __thiscall TJsonStringReader<wchar_t>::InitReader(TJsonStringReader<wchar_t> *this)

{
  TUniquePtr<FBufferReader,TDefaultDelete<FBufferReader>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBufferReader *this_00;
  FBufferReader *pFVar4;
  undefined8 local_18 [2];
  
  iVar2 = (this->Content).Data.ArrayNum;
  if (iVar2 < 2) {
    return;
  }
  pFVar3 = (this->Content).Data.AllocatorInstance.Data;
  pFVar4 = ::operator_new(0xb0);
  if (pFVar4 == (FBufferReader *)0x0) {
    pFVar4 = (FBufferReader *)0x0;
  }
  else {
    pFVar4 = FBufferReader::FBufferReader(pFVar4,pFVar3,(longlong)(iVar2 + -1) * 2,false,false);
  }
  pTVar1 = &this->Reader;
  if (pTVar1 == (TUniquePtr<FBufferReader,TDefaultDelete<FBufferReader>_> *)local_18) {
    if (pFVar4 == (FBufferReader *)0x0) goto LAB_141dd7f39;
    *(undefined ***)pFVar4 = &___7FBufferReader__6B_;
    if (pFVar4->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&pFVar4->field_0x90);
      *(undefined8 *)&pFVar4->field_0x90 = 0;
    }
    *(undefined ***)pFVar4 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)pFVar4);
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (this_00 == (FBufferReader *)0x0) goto LAB_141dd7f39;
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
    pFVar4 = this_00;
  }
  ::operator_delete(pFVar4,0xb0);
LAB_141dd7f39:
  this->_padding_ = (longlong)pTVar1->Ptr;
  return;
}

