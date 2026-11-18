// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// GetArchiveName @ 143320150

FString * __thiscall
BuildPatchServices::FFakeFileReader::GetArchiveName
          (FFakeFileReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FFakeFileReader");
  return __return_storage_ptr__;
}

// Serialize @ 143326ce0

void __thiscall
BuildPatchServices::FFakeFileReader::Serialize(FFakeFileReader *this,void *param_1,long64 param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    lVar5 = (**(code **)(this->_padding_ + 0x30))();
    if (lVar5 < this->_padding_ + param_2) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      pTVar1 = this->Bytes;
      uVar6 = (uint)this->_padding_;
      uVar4 = 0;
      if ((int)uVar6 < pTVar1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy(param_1,(pTVar1->AllocatorInstance).Data + (int)uVar6,param_2);
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

// TotalSize @ 143328530

long64 __thiscall BuildPatchServices::FFakeFileReader::TotalSize(FFakeFileReader *this)

{
  return this->FakeTotalSize;
}

