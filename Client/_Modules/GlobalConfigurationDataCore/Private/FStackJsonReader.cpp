// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 1

// ~FStackJsonReader @ 14e9b7730

void __thiscall
IGlobalConfigurationRouter_Private::FStackJsonReader::~FStackJsonReader(FStackJsonReader *this)

{
  char cVar1;
  
  cVar1 = (this->Reader).field_0xa8;
  *(undefined ***)&this->Reader = &___7FBufferReader__6B_;
  if (cVar1 != '\0') {
    FMemory::Free(*(void **)&(this->Reader).field_0x90);
    *(undefined8 *)&(this->Reader).field_0x90 = 0;
  }
  *(undefined ***)&this->Reader = &___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)&this->Reader);
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

