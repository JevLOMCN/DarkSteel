// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FArchiveDescribeReference @ 141ed1850

FArchiveDescribeReference * __thiscall
FArchiveDescribeReference::FArchiveDescribeReference
          (FArchiveDescribeReference *this,UObject *param_1,UObject *param_2,FOutputDevice *param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7FArchiveDescribeReference__6B_;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  this->Source = param_1;
  this->Target = param_2;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xbd | 0x10;
  this->Output = param_3;
  (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  return this;
}

// operator<< @ 141ed6920

FArchive * __thiscall
FArchiveDescribeReference::operator<<(FArchiveDescribeReference *this,UObject **param_1)

{
  FOutputDevice *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  FName local_res8;
  FString local_28;
  
  if (*param_1 == this->Target) {
    pFVar1 = this->Output;
    if ((FField *)this->_padding_ == (FField *)0x0) {
      FOutputDevice::Log(pFVar1,L"        [native]");
    }
    else {
      FField::GetFullName((FField *)this->_padding_,&local_28);
      FOutputDevice::LogfImpl(pFVar1,L"        [%s]");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    lVar4 = (longlong)param_1 - (longlong)this->Source;
    if ((0 < lVar4) &&
       (lVar2 = *(longlong *)&this->Source->field_0x10, lVar4 < *(int *)(lVar2 + 0x58))) {
      for (lVar3 = *(longlong *)(lVar2 + 0x40);
          (lVar3 != 0 && ((int)lVar4 < *(int *)(lVar3 + 0x58))); lVar3 = *(longlong *)(lVar3 + 0x40)
          ) {
        lVar2 = lVar3;
      }
      pFVar1 = this->Output;
      local_res8 = *(FName *)(lVar2 + 0x18);
      ::FName::ToString(&local_res8,&local_28);
      FOutputDevice::LogfImpl(pFVar1,L"            class %s offset %d, offset from UObject %d ");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FArchive *)this;
  }
  return (FArchive *)this;
}

// GetArchiveName @ 141ef8f20

FString * __thiscall
FArchiveDescribeReference::GetArchiveName
          (FArchiveDescribeReference *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveFindAllRefs");
  return __return_storage_ptr__;
}

