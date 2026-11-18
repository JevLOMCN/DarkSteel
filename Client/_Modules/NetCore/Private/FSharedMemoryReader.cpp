// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 3

// FSharedMemoryReader @ 1441d26e0

FSharedMemoryReader * __thiscall
FSharedMemoryReader::FSharedMemoryReader(FSharedMemoryReader *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSharedMemoryReader *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSharedMemoryReader__6B_;
  this->MemPayloadData = param_1 + 4;
  this->MemSizeData = (uint *)param_1;
  if (0x1fffffc < *(uint *)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*MemSizeData <= ((1024 * 1024 * 32) - sizeof(uint32))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSharedMemoryReader *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(this->_padding_ + 200))(this,1);
  return this;
}

// Serialize @ 1441ea570

void __thiscall
FSharedMemoryReader::Serialize(FSharedMemoryReader *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((0 < param_2) && ((this->_padding_ & 0x200) == 0)) {
    lVar1 = this->_padding_;
    lVar2 = (**(code **)(this->_padding_ + 0x30))();
    if (lVar2 < lVar1 + param_2) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      memcpy(param_1,this->MemPayloadData + lVar1,param_2);
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

// TotalSize @ 1441ed040

long64 __thiscall FSharedMemoryReader::TotalSize(FSharedMemoryReader *this)

{
  return (ulonglong)*this->MemSizeData;
}

