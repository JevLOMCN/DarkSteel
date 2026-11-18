// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TJsonStringReader<wchar_t> @ 147bb7b70

TJsonStringReader<wchar_t> * __thiscall
TJsonStringReader<wchar_t>::TJsonStringReader<wchar_t>
          (TJsonStringReader<wchar_t> *this,FString *param_1)

{
  TUniquePtr<FBufferReader,TDefaultDelete<FBufferReader>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBufferReader *pFVar4;
  FBufferReader *this_00;
  undefined8 local_18 [2];
  
  this_00 = (FBufferReader *)0x0;
  this->_padding_ = 0;
  pTVar1 = &this->Reader;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Content).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 1;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
  (this->Content).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Content).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Content).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  iVar2 = (this->Content).Data.ArrayNum;
  pTVar1->Ptr = (FBufferReader *)0x0;
  if (iVar2 < 2) {
    return this;
  }
  pFVar3 = (this->Content).Data.AllocatorInstance.Data;
  pFVar4 = ::operator_new(0xb0);
  if (pFVar4 != (FBufferReader *)0x0) {
    this_00 = FBufferReader::FBufferReader(pFVar4,pFVar3,(longlong)(iVar2 + -1) * 2,false,false);
  }
  if (pTVar1 == (TUniquePtr<FBufferReader,TDefaultDelete<FBufferReader>_> *)local_18) {
    if (this_00 == (FBufferReader *)0x0) goto LAB_147bb7cda;
    *(undefined ***)this_00 = &___7FBufferReader__6B_;
    if (this_00->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&this_00->field_0x90);
      *(undefined8 *)&this_00->field_0x90 = 0;
    }
    *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)this_00);
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar4 == (FBufferReader *)0x0) goto LAB_147bb7cda;
    *(undefined ***)pFVar4 = &___7FBufferReader__6B_;
    if (pFVar4->field_0xa8 != '\0') {
      FMemory::Free(*(void **)&pFVar4->field_0x90);
      *(undefined8 *)&pFVar4->field_0x90 = 0;
    }
    *(undefined ***)pFVar4 = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)pFVar4);
    this_00 = pFVar4;
  }
  ::operator_delete(this_00,0xb0);
LAB_147bb7cda:
  this->_padding_ = (longlong)pTVar1->Ptr;
  return this;
}

