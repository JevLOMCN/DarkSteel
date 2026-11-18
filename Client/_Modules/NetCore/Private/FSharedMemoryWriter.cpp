// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// Serialize @ 1441ea5f0

void __thiscall
FSharedMemoryWriter::Serialize(FSharedMemoryWriter *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (0x1fffffb < (ulonglong)(this->_padding_ + param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + Num < ((1024 * 1024 * 32) - sizeof(uint32))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\PacketAudit.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < param_2) {
    memcpy(this->MemPayloadData + this->_padding_,param_1,param_2);
    uVar3 = this->_padding_ + param_2;
    this->_padding_ = uVar3;
    if ((uVar3 != (uVar3 & 0xffffffff)) || ((longlong)uVar3 < 0)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *this->MemSizeData = (uint)uVar3;
  }
  return;
}

// TotalSize @ 1441ed050

long64 __thiscall FSharedMemoryWriter::TotalSize(FSharedMemoryWriter *this)

{
  return (ulonglong)*this->MemSizeData;
}

