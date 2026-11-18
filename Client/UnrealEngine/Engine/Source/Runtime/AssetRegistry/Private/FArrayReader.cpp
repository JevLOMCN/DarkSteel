// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// GetArchiveName @ 142b93e40

FString * __thiscall
FArrayReader::GetArchiveName(FArrayReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArrayReader");
  return __return_storage_ptr__;
}

// Serialize @ 142bac510

void __thiscall FArrayReader::Serialize(FArrayReader *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 != 0) && ((this->field_0x29 & 2) == 0)) {
    if ((longlong)*(int *)&this->field_0xa0 < *(longlong *)&this->field_0x90 + param_2) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      uVar4 = (uint)*(longlong *)&this->field_0x90;
      uVar3 = 0;
      if ((int)uVar4 < *(int *)&this->field_0xa0) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      memcpy(param_1,(void *)((longlong)(int)uVar4 + *(longlong *)&this->field_0x98),param_2);
      *(longlong *)&this->field_0x90 = *(longlong *)&this->field_0x90 + param_2;
    }
  }
  return;
}

// TotalSize @ 142bb2b20

long64 __thiscall FArrayReader::TotalSize(FArrayReader *this)

{
  return (longlong)*(int *)&this->field_0xa0;
}

