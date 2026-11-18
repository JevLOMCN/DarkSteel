// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// operator<< @ 141f255c0

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,UObject **param_1)

{
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_1,8);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,param_1,8);
  return (FArchive *)this;
}

// operator<< @ 141f25610

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,FLazyObjectPtr *param_1)

{
  FGuid local_18;
  
  local_18.A = *(uint *)&param_1->field_0x8;
  local_18.B = *(uint *)&param_1->field_0xc;
  local_18.C = *(uint *)&param_1->field_0x10;
  local_18.D = *(uint *)&param_1->field_0x14;
  ::operator<<((FArchive *)this,&local_18);
  return (FArchive *)this;
}

// operator<< @ 141f25640

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,FObjectPtr *param_1)

{
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_1,8);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,param_1,8);
  return (FArchive *)this;
}

// operator<< @ 141f25690

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath::SerializePath(param_1,(FArchive *)this);
  return (FArchive *)this;
}

// operator<< @ 141f256c0

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,FSoftObjectPtr *param_1)

{
  FArchive *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f256c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FArchive *)(**(code **)(*(longlong *)this + 0x140))(this,&param_1->field_0x8);
  return pFVar1;
}

// operator<< @ 141f256e0

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->field_0x2b & 3) != 1) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(*(longlong *)this + 0x168))(this,&pUStackX_8);
    if (((this->field_0x28 & 1) != 0) || ((this->field_0x2b & 2) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 141f256f0

FArchive * __thiscall FObjectWriter::operator<<(FObjectWriter *this,FName *param_1)

{
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res8[0] = (param_1->ComparisonIndex).Value;
  local_res18[0] = param_1->Number;
  local_res10[0] = local_res8[0];
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,local_res8,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8,4);
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
  }
  else {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10,4);
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,local_res18,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18,4);
  return (FArchive *)this;
}

// GetArchiveName @ 141f32f60

FString * __thiscall
FObjectWriter::GetArchiveName(FObjectWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FObjectWriter");
  return __return_storage_ptr__;
}

