// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator<< @ 141f6a130

FArchive * __thiscall
UE::StructUtils::FHashBuilder::operator<<(FHashBuilder *this,UObject **param_1)

{
  UObject *pUVar1;
  FArchive *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [4];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  if (this->ObjectHashingMode == ObjectPtrBasedCRC) {
    pUVar1 = *param_1;
    uVar4 = 0;
    uVar3 = 0;
    if (pUVar1 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending) {
        GC::MarkAsReachable(pUVar1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = pUVar1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      uVar4 = local_res18.ObjectSerialNumber;
      uVar3 = local_res18.ObjectIndex;
    }
    uVar6 = uVar3 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
    uVar5 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar6 << 0x10;
    uVar3 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar5 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 << 10;
    local_res8[0] = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xf;
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    return (FArchive *)this;
  }
  pFVar2 = FArchiveCrc32::operator<<((FArchiveCrc32 *)this,param_1);
  return pFVar2;
}

// GetArchiveName @ 141f80900

FString * __thiscall
UE::StructUtils::FHashBuilder::GetArchiveName(FHashBuilder *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"StructUtils_FHashBuilder");
  return __return_storage_ptr__;
}

