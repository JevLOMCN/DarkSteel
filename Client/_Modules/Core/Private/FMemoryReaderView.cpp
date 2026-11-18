// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetArchiveName @ 14175b910

FString * __thiscall
FMemoryReaderView::GetArchiveName(FMemoryReaderView *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMemoryReaderView");
  return __return_storage_ptr__;
}

// Serialize @ 1417793a0

void __thiscall FMemoryReaderView::Serialize(FMemoryReaderView *this,void *param_1,long64 param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong _Size;
  
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    uVar6 = this->_padding_;
    lVar5 = (**(code **)(this->_padding_ + 0x30))();
    if (lVar5 < (longlong)(uVar6 + param_2)) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      uVar1 = (this->Bytes).Size;
      pvVar2 = (this->Bytes).Data;
      if (uVar1 < uVar6) {
        uVar6 = uVar1;
      }
      _Size = param_2;
      if (uVar1 - uVar6 < (ulonglong)param_2) {
        _Size = uVar1 - uVar6;
      }
      if (((ulonglong)param_2 < _Size) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InView.Size <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                             ,0xdb,
                             L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (_Size != 0) {
        memcpy(param_1,(void *)((longlong)pvVar2 + uVar6),_Size);
      }
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

// TotalSize @ 14177fb00

long64 __thiscall FMemoryReaderView::TotalSize(FMemoryReaderView *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = (this->Bytes).Size;
  uVar2 = this->LimitSize;
  if ((longlong)uVar1 < this->LimitSize) {
    uVar2 = uVar1;
  }
  return uVar2;
}

