// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FMemoryArchive @ 14ea973e0

void __thiscall FMemoryArchive::~FMemoryArchive(FMemoryArchive *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FArchiveState__6B_;
  if (this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NextProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\Archive.cpp"
                       ,0x8c,L"Archive destroyed before its proxies");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    ::operator_delete(puVar1,0x10);
  }
  pvVar2 = (void *)this->_padding_;
  if (pvVar2 != (void *)0x0) {
    if (*(void **)((longlong)pvVar2 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar2 + 0x40));
    }
    ::operator_delete(pvVar2,0x58);
  }
  return;
}

