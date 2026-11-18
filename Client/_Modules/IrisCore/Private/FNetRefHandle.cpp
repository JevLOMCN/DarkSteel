// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// GetReplicationSystemId @ 14427cba0

uint __thiscall UE::Net::FNetRefHandle::GetReplicationSystemId(FNetRefHandle *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->field0_0x0).Value < 0x40000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReplicationSystemId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)((this->field0_0x0).Value >> 0x36) - 1;
}

// ToCompactString @ 144298090

FString * __thiscall
UE::Net::FNetRefHandle::ToCompactString(FNetRefHandle *this,FString *__return_storage_ptr__)

{
  if (((this->field0_0x0).Value != 0) && (0x3fffffffffffff < (this->field0_0x0).Value)) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%llu:%u");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu:?");
  return __return_storage_ptr__;
}

// ToString @ 144298110

FString * __thiscall
UE::Net::FNetRefHandle::ToString(FNetRefHandle *this,FString *__return_storage_ptr__)

{
  if (((this->field0_0x0).Value != 0) && (0x3fffffffffffff < (this->field0_0x0).Value)) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
  return __return_storage_ptr__;
}

