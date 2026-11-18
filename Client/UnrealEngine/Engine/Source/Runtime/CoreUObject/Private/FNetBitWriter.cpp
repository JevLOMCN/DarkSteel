// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FNetBitWriter @ 141fbdf40

FNetBitWriter * __thiscall
FNetBitWriter::FNetBitWriter(FNetBitWriter *this,UPackageMap *param_1,long64 param_2)

{
  FBitWriter::FBitWriter((FBitWriter *)this,param_2,true);
  this->PackageMap = param_1;
  this->_padding_ = (longlong)&___7FNetBitWriter__6B_;
  (this->TraceCollector).Ptr = (FNetTraceCollector *)0x0;
  (this->NetTokenExportContext).Ptr = (FNetTokenExportContext *)0x0;
  return this;
}

// FNetBitWriter @ 141fbdfa0

FNetBitWriter * __thiscall FNetBitWriter::FNetBitWriter(FNetBitWriter *this)

{
  FBitWriter::FBitWriter((FBitWriter *)this,0,false);
  this->_padding_ = (longlong)&___7FNetBitWriter__6B_;
  this->PackageMap = (UPackageMap *)0x0;
  (this->TraceCollector).Ptr = (FNetTraceCollector *)0x0;
  (this->NetTokenExportContext).Ptr = (FNetTokenExportContext *)0x0;
  return this;
}

// FNetBitWriter @ 141fbdff0

FNetBitWriter * __thiscall FNetBitWriter::FNetBitWriter(FNetBitWriter *this,long64 param_1)

{
  FBitWriter::FBitWriter((FBitWriter *)this,param_1,true);
  this->_padding_ = (longlong)&___7FNetBitWriter__6B_;
  this->PackageMap = (UPackageMap *)0x0;
  (this->TraceCollector).Ptr = (FNetTraceCollector *)0x0;
  (this->NetTokenExportContext).Ptr = (FNetTokenExportContext *)0x0;
  return this;
}

// operator<< @ 141fc1930

FArchive * __thiscall FNetBitWriter::operator<<(FNetBitWriter *this,UObject **param_1)

{
  UPackageMap *pUVar1;
  code *pcVar2;
  UClass *pUVar3;
  
  pUVar1 = this->PackageMap;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b8);
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  (*pcVar2)(pUVar1,this,pUVar3,param_1,0);
  return (FArchive *)this;
}

// operator<< @ 141fc19a0

FArchive * __thiscall FNetBitWriter::operator<<(FNetBitWriter *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 141fc19b0

FArchive * __thiscall FNetBitWriter::operator<<(FNetBitWriter *this,FSoftObjectPath *param_1)

{
  FString local_18;
  
  FSoftObjectPath::ToString(param_1,&local_18);
  ::operator<<((FArchive *)this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 141fc1a00

FArchive * __thiscall FNetBitWriter::operator<<(FNetBitWriter *this,FSoftObjectPtr *param_1)

{
  UPackageMap *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UObject *pUVar6;
  FUObjectItem *pFVar7;
  UClass *pUVar8;
  UObject *local_res8;
  UObject *local_res18;
  
  (**(code **)(this->_padding_ + 0x230))();
  uVar5 = (**(code **)(this->_padding_ + 0x48))(this);
  if (uVar5 < 0x1d) {
    FArchiveUObject::SerializeSoftObjectPtr((FArchive *)this,param_1);
    return (FArchive *)this;
  }
  local_res18 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if ((local_res18 != (UObject *)0x0) || (*(longlong *)&param_1->field_0x8 == 0))
  goto LAB_141fc1aeb;
  pUVar6 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&param_1->field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  bVar3 = (*IsInAsyncLoadingThread)();
  if ((bVar3) && (pUVar6 != (UObject *)0x0)) {
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar6->field_0xc);
    if (((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_141fc1aa4;
LAB_141fc1ad1:
    if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) != 0) goto LAB_141fc1ae1;
    bVar3 = true;
  }
  else {
LAB_141fc1aa4:
    local_res8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
    if (pUVar6 != (UObject *)0x0) goto LAB_141fc1ad1;
LAB_141fc1ae1:
    bVar3 = false;
  }
  local_res18 = (UObject *)0x0;
  if (bVar3) {
    local_res18 = pUVar6;
  }
LAB_141fc1aeb:
  if (local_res18 != (UObject *)0x0) {
    cVar4 = (**(code **)(*(longlong *)local_res18 + 0x208))();
    if (cVar4 == '\0') {
      FBitWriter::WriteBit((FBitWriter *)this,'\0');
      pUVar1 = this->PackageMap;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b8);
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      (*pcVar2)(pUVar1,this,pUVar8,&local_res18,0);
      return (FArchive *)this;
    }
  }
  FBitWriter::WriteBit((FBitWriter *)this,'\x01');
  FArchiveUObject::SerializeSoftObjectPtr((FArchive *)this,param_1);
  return (FArchive *)this;
}

// operator<< @ 141fc1ba0

FArchive * __thiscall FNetBitWriter::operator<<(FNetBitWriter *this,FWeakObjectPtr *param_1)

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

// operator<< @ 141fc1bb0

FArchive * __thiscall FNetBitWriter::operator<<(FNetBitWriter *this,FName *param_1)

{
  UPackageMap *pUVar1;
  
  pUVar1 = this->PackageMap;
  if (pUVar1 != (UPackageMap *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,this,param_1);
    return (FArchive *)this;
  }
  UPackageMap::StaticSerializeName((FArchive *)this,param_1);
  return (FArchive *)this;
}

// CountMemory @ 141fc9440

void __thiscall FNetBitWriter::CountMemory(FNetBitWriter *this,FArchive *param_1)

{
  FBitWriter::CountMemory((FBitWriter *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000141fc9461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x18,0x18);
  return;
}

