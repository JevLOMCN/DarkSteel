// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// FDuplicateDataReader @ 141f21150

FDuplicateDataReader * __thiscall
FDuplicateDataReader::FDuplicateDataReader
          (FDuplicateDataReader *this,FUObjectAnnotationSparse<FDuplicatedObject,0> *param_1,
          FLargeMemoryData *param_2,uint param_3,UObject *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  FUObjectAnnotationSparse<FDuplicatedObject,0> *pFVar3;
  undefined7 uVar4;
  
  pFVar3 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->DuplicatedObjectAnnotation = param_1;
  uVar4 = (undefined7)((ulonglong)pFVar3 >> 8);
  this->_padding_ = (longlong)&___7FDuplicateDataReader__6B_;
  this->ObjectData = param_2;
  this->Offset = 0;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,CONCAT71(uVar4,1));
  (**(code **)(this->_padding_ + 0xf8))
            (this,CONCAT31((uint3)(param_3 >> 0x1e),~(byte)(param_3 >> 0x16)) & 0xffffff01);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 | param_3 | 0x1000;
  return this;
}

// operator<< @ 141f24c60

FArchive * __thiscall FDuplicateDataReader::operator<<(FDuplicateDataReader *this,UObject **param_1)

{
  FDuplicatedObject *pFVar1;
  UObject *pUVar2;
  UObjectBase *local_res8;
  FDuplicatedObject local_28;
  undefined1 local_18 [8];
  int local_10;
  
  local_res8 = (UObjectBase *)*param_1;
  (**(code **)(this->_padding_ + 0x188))(this,&local_res8,8);
  if (local_res8 == (UObjectBase *)0x0) {
    local_28.bIsDefault = true;
    local_28.DuplicatedObject.WeakPtr.ObjectIndex = 0;
    local_28.DuplicatedObject.WeakPtr.ObjectSerialNumber = 0;
    pFVar1 = &local_28;
  }
  else {
    pFVar1 = FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
                       (this->DuplicatedObjectAnnotation,&local_28,local_res8);
  }
  local_18[0] = pFVar1->bIsDefault;
  local_18._1_3_ = *(undefined3 *)&pFVar1->field_0x1;
  local_18._4_4_ = (pFVar1->DuplicatedObject).WeakPtr.ObjectIndex;
  local_10 = (pFVar1->DuplicatedObject).WeakPtr.ObjectSerialNumber;
  if (local_18[0] == '\0') {
    pUVar2 = FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(local_18 + 4));
    *param_1 = pUVar2;
    return (FArchive *)this;
  }
  *param_1 = (UObject *)local_res8;
  return (FArchive *)this;
}

// operator<< @ 141f24d10

FArchive * __thiscall
FDuplicateDataReader::operator<<(FDuplicateDataReader *this,FLazyObjectPtr *param_1)

{
  int iVar1;
  FUniqueObjectGuid *pFVar2;
  FGuid local_28;
  FUniqueObjectGuid local_18;
  
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  ::operator<<((FArchive *)this,&local_28);
  if ((this->_padding_ & 0x40000000000000) == 0) {
  }
  else {
    iVar1 = UE::GetPlayInEditorID();
    pFVar2 = FUniqueObjectGuid::FixupForPIE((FUniqueObjectGuid *)&local_28,&local_18,iVar1);
    local_28.A = (pFVar2->Guid).A;
    local_28.B = (pFVar2->Guid).B;
    local_28.C = (pFVar2->Guid).C;
    local_28.D = (pFVar2->Guid).D;
  }
  *(undefined8 *)param_1 = 0;
  *(uint *)&param_1->field_0x8 = local_28.A;
  *(uint *)&param_1->field_0xc = local_28.B;
  *(uint *)&param_1->field_0x10 = local_28.C;
  *(uint *)&param_1->field_0x14 = local_28.D;
  return (FArchive *)this;
}

// operator<< @ 141f24d90

FArchive * __thiscall
FDuplicateDataReader::operator<<(FDuplicateDataReader *this,FObjectPtr *param_1)

{
  UObject *pUVar1;
  FDuplicatedObject local_18;
  
  (**(code **)(this->_padding_ + 0x188))(this,param_1,8);
  if ((UObjectBase *)(param_1->field0_0x0).Handle != (UObjectBase *)0x0) {
    FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
              (this->DuplicatedObjectAnnotation,&local_18,
               (UObjectBase *)(param_1->field0_0x0).Handle);
    if (local_18.bIsDefault == false) {
      pUVar1 = FWeakObjectPtr::GetEvenIfUnreachable(&local_18.DuplicatedObject.WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      (param_1->field0_0x0).Handle = pUVar1;
    }
  }
  return (FArchive *)this;
}

// operator<< @ 141f24e20

FArchive * __thiscall
FDuplicateDataReader::operator<<(FDuplicateDataReader *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBase *pUVar2;
  FDuplicatedObject *pFVar3;
  FUtf8String *pFVar4;
  UObject *local_res8;
  FDuplicatedObject local_48;
  undefined1 local_38 [8];
  int local_30;
  FSoftObjectPath local_28;
  
  FArchiveUObject::SerializeSoftObjectPath((FArchive *)this,param_1);
  pUVar2 = (UObjectBase *)FSoftObjectPath::ResolveObject(param_1);
  if (pUVar2 == (UObjectBase *)0x0) {
    local_48.bIsDefault = true;
    pFVar3 = &local_48;
    local_48.DuplicatedObject.WeakPtr.ObjectIndex = 0;
    local_48.DuplicatedObject.WeakPtr.ObjectSerialNumber = 0;
  }
  else {
    pFVar3 = FUObjectAnnotationSparse<FDuplicatedObject,0>::GetAnnotation
                       (this->DuplicatedObjectAnnotation,&local_48,pUVar2);
  }
  local_38[0] = pFVar3->bIsDefault;
  local_38._1_3_ = *(undefined3 *)&pFVar3->field_0x1;
  local_38._4_4_ = (pFVar3->DuplicatedObject).WeakPtr.ObjectIndex;
  local_30 = (pFVar3->DuplicatedObject).WeakPtr.ObjectSerialNumber;
  if (local_38[0] == '\0') {
    local_res8 = FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(local_38 + 4));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FSoftObjectPath::GetOrCreateIDForObject(&local_28,(FObjectPtr)&local_res8);
    (param_1->AssetPath).PackageName = local_28.AssetPath.PackageName;
    (param_1->AssetPath).AssetName = local_28.AssetPath.AssetName;
    pFVar4 = &param_1->SubPathString;
    if (pFVar4 != &local_28.SubPathString) {
      pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar4->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
      (param_1->SubPathString).Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
      (param_1->SubPathString).Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 141f24f30

FArchive * __thiscall FDuplicateDataReader::operator<<(FDuplicateDataReader *this,FName *param_1)

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

// GetArchiveName @ 141f32ea0

FString * __thiscall
FDuplicateDataReader::GetArchiveName(FDuplicateDataReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDuplicateDataReader");
  return __return_storage_ptr__;
}

// Seek @ 141f43f80

void __thiscall FDuplicateDataReader::Seek(FDuplicateDataReader *this,long64 param_1)

{
  this->Offset = param_1;
  return;
}

// Serialize @ 141f44740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDuplicateDataReader::Serialize(FDuplicateDataReader *this,void *param_1,long64 param_2)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  FString local_38;
  code *local_28;
  undefined1 *local_20;
  FString local_18;
  
  bVar1 = FLargeMemoryData::Read(this->ObjectData,param_1,this->Offset,param_2);
  if (bVar1) {
    this->Offset = this->Offset + param_2;
    return;
  }
  GetFullNameSafe(&local_18,(FField *)this->_padding_);
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar2);
  this_00 = *(UObjectBaseUtility **)((longlong)pFVar3[0x2f] + 0x30);
  if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeFail @ 141f4c210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDuplicateDataReader::SerializeFail(FDuplicateDataReader *this)

{
  UObjectBaseUtility *this_00;
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res8 [8];
  FString local_38;
  code *local_28;
  undefined1 *local_20;
  FString local_18;
  
  GetFullNameSafe(&local_18,(FField *)this->_padding_);
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar1);
  this_00 = *(UObjectBaseUtility **)((longlong)pFVar2[0x2f] + 0x30);
  if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Tell @ 141f4e0a0

long64 __thiscall FDuplicateDataReader::Tell(FDuplicateDataReader *this)

{
  return this->Offset;
}

// TotalSize @ 141f4e0c0

long64 __thiscall FDuplicateDataReader::TotalSize(FDuplicateDataReader *this)

{
  return this->ObjectData->NumBytes;
}

