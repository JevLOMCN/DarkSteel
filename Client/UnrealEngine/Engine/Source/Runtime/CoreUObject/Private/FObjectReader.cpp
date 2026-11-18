// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// operator<< @ 141f253a0

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,UObject **param_1)

{
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,param_1,8);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,param_1,8);
  return (FArchive *)this;
}

// operator<< @ 141f253f0

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,FLazyObjectPtr *param_1)

{
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  ::operator<<((FArchive *)this,&local_18);
  *(undefined8 *)param_1 = 0;
  *(uint *)&param_1->field_0x8 = local_18.A;
  *(uint *)&param_1->field_0xc = local_18.B;
  *(uint *)&param_1->field_0x10 = local_18.C;
  *(uint *)&param_1->field_0x14 = local_18.D;
  return (FArchive *)this;
}

// operator<< @ 141f25440

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,FObjectPtr *param_1)

{
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,param_1,8);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,param_1,8);
  return (FArchive *)this;
}

// operator<< @ 141f25490

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 141f254c0

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,FSoftObjectPtr *param_1)

{
  FArchive *pFVar1;
  
  *(undefined8 *)param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000141f254cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FArchive *)(**(code **)(this->_padding_ + 0x140))(this,&param_1->field_0x8);
  return pFVar1;
}

// operator<< @ 141f254e0

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->_padding_ & 0x3000000) != 0x1000000) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(this->_padding_ + 0x168))(this,&pUStackX_8);
    if (((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 141f254f0

FArchive * __thiscall FObjectReader::operator<<(FObjectReader *this,FName *param_1)

{
  FName FVar1;
  FNameEntryId local_res8 [2];
  undefined4 local_res10 [2];
  uint local_res18 [2];
  
  local_res8[0].Value = 0;
  local_res10[0] = 0;
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8,4);
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res10,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10,4);
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18,4);
  }
  FVar1.Number = local_res18[0];
  FVar1.ComparisonIndex.Value = local_res8[0].Value;
  *param_1 = FVar1;
  return (FArchive *)this;
}

// GetArchiveName @ 141f32f30

FString * __thiscall
FObjectReader::GetArchiveName(FObjectReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectReader");
  return __return_storage_ptr__;
}

