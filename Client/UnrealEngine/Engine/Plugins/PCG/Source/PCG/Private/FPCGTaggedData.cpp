// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// FPCGTaggedData @ 1497e01f0

FPCGTaggedData * __thiscall
FPCGTaggedData::FPCGTaggedData(FPCGTaggedData *this,FPCGTaggedData *param_1)

{
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(&this->Data,&param_1->Data);
  *(undefined8 *)&(this->Tags).Elements = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tags).Elements.field_0x34 = 0;
  (this->Tags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->Tags,&param_1->Tags);
  this->Pin = param_1->Pin;
  this->bPinlessData = param_1->bPinlessData;
  this->bIsUsedMultipleTimes = param_1->bIsUsedMultipleTimes;
  (this->OriginatingNode).WeakPtr = (param_1->OriginatingNode).WeakPtr;
  this->OriginalIndex = param_1->OriginalIndex;
  return this;
}

// operator= @ 1497e3820

FPCGTaggedData * __thiscall FPCGTaggedData::operator=(FPCGTaggedData *this,FPCGTaggedData *param_1)

{
  FPCGDataPtrWrapper::operator=(&this->Data,&param_1->Data);
  if (&this->Tags != &param_1->Tags) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&this->Tags,&param_1->Tags)
    ;
  }
  this->Pin = param_1->Pin;
  this->bPinlessData = param_1->bPinlessData;
  this->bIsUsedMultipleTimes = param_1->bIsUsedMultipleTimes;
  (this->OriginatingNode).WeakPtr = (param_1->OriginatingNode).WeakPtr;
  this->OriginalIndex = param_1->OriginalIndex;
  return this;
}

// FPCGTaggedData @ 1499c2e60

FPCGTaggedData * __thiscall
FPCGTaggedData::FPCGTaggedData(FPCGTaggedData *this,FPCGTaggedData *param_1)

{
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(&this->Data,&param_1->Data);
  *(undefined8 *)&(this->Tags).Elements = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tags).Elements.field_0x34 = 0;
  (this->Tags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&this->Tags,&param_1->Tags);
  this->Pin = param_1->Pin;
  this->bPinlessData = param_1->bPinlessData;
  this->bIsUsedMultipleTimes = param_1->bIsUsedMultipleTimes;
  (this->OriginatingNode).WeakPtr = (param_1->OriginatingNode).WeakPtr;
  this->OriginalIndex = param_1->OriginalIndex;
  return this;
}

// ~FPCGTaggedData @ 149be96d0

void __thiscall FPCGTaggedData::~FPCGTaggedData(FPCGTaggedData *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->Tags).HashSize = 0;
  FVar1 = (this->Tags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&this->Data);
  return;
}

// StaticStruct @ 149edd450

UScriptStruct * __cdecl FPCGTaggedData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGTaggedData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGTaggedData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGTaggedData,(UObject *)pUVar1,L"PCGTaggedData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FPCGTaggedData.OuterSingleton;
}

// operator== @ 149ef0600

bool __thiscall FPCGTaggedData::operator==(FPCGTaggedData *this,FPCGTaggedData *param_1)

{
  bool bVar1;
  
  if ((this->Data).Data.field0_0x0.DebugPtr == (param_1->Data).Data.field0_0x0.DebugPtr) {
    if (*(int *)&(this->Tags).Elements.field_0x8 - *(int *)&(this->Tags).Elements.field_0x34 ==
        *(int *)&(param_1->Tags).Elements.field_0x8 - *(int *)&(param_1->Tags).Elements.field_0x34)
    {
      bVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                        (&this->Tags,&param_1->Tags);
      if ((bVar1) && (this->Pin == param_1->Pin)) {
        return true;
      }
    }
  }
  return false;
}

// operator!= @ 149ef07f0

bool __thiscall FPCGTaggedData::operator!=(FPCGTaggedData *this,FPCGTaggedData *param_1)

{
  bool bVar1;
  
  if ((this->Data).Data.field0_0x0.DebugPtr == (param_1->Data).Data.field0_0x0.DebugPtr) {
    if (*(int *)&(this->Tags).Elements.field_0x8 - *(int *)&(this->Tags).Elements.field_0x34 ==
        *(int *)&(param_1->Tags).Elements.field_0x8 - *(int *)&(param_1->Tags).Elements.field_0x34)
    {
      bVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                        (&this->Tags,&param_1->Tags);
      if ((bVar1) && (this->Pin == param_1->Pin)) {
        return false;
      }
    }
  }
  return true;
}

// ComputeCrc @ 149ef8b50

FPCGCrc __thiscall FPCGTaggedData::ComputeCrc(FPCGTaggedData *this,bool param_1)

{
  UPCGData *pUVar1;
  char cVar2;
  FPCGCrc *pFVar3;
  FPCGCrc FVar4;
  undefined7 in_register_00000011;
  FPCGCrc FVar5;
  bool bVar6;
  char in_R8B;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FArchiveCrc32 local_b8;
  
  FVar5._1_7_ = in_register_00000011;
  FVar5.Value._0_1_ = param_1;
  FArchiveCrc32::FArchiveCrc32(&local_b8,0,(UObject *)0x0);
  (**(code **)(local_b8._padding_ + 0x178))(&local_b8,&this->Pin);
  pUVar1 = (this->Data).Data.field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGData *)0x0) goto LAB_149ef8c44;
  if (in_R8B == '\0') {
LAB_149ef8bb3:
    bVar6 = false;
  }
  else {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1);
    if (cVar2 == '\0') goto LAB_149ef8bb3;
    bVar6 = true;
  }
  if (((pUVar1->Crc).bValid == false) || ((pUVar1->bIsFullDataCrc == false && (bVar6 != false)))) {
    pFVar3 = (FPCGCrc *)(**(code **)(pUVar1->_padding_ + 0x368))(pUVar1,local_res10,bVar6);
    FVar4 = *pFVar3;
    pUVar1->Crc = FVar4;
    pUVar1->bIsFullDataCrc = bVar6;
  }
  else {
    FVar4 = pUVar1->Crc;
  }
  local_res8[0] = FVar4.Value;
  if (*(uint **)(local_b8._padding_ + 8) < *(uint **)local_b8._padding_ + 1) {
    if ((local_b8._padding_._2_1_ & 1) == 0) {
      (**(code **)(local_b8._padding_ + 0x188))(&local_b8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_b8._padding_;
    *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 4;
  }
LAB_149ef8c44:
  TSetPrivateFriend::Serialize<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            ((FArchive *)&local_b8,&this->Tags);
  *(uint *)FVar5 = local_b8.CRC;
  *(undefined1 *)((longlong)FVar5 + 4) = 1;
  FArchive::~FArchive((FArchive *)&local_b8);
  return FVar5;
}

