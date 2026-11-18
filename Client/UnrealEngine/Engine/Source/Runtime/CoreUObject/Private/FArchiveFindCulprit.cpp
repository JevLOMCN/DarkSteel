// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FArchiveFindCulprit @ 141ed1950

FArchiveFindCulprit * __thiscall
FArchiveFindCulprit::FArchiveFindCulprit
          (FArchiveFindCulprit *this,UObject *param_1,UObject *param_2,bool param_3)

{
  byte *pbVar1;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xef;
  this->_padding_ = (longlong)&___7FArchiveFindCulprit__6B_;
  this->Find = param_1;
  this->Count = 0;
  this->PretendSaving = param_3;
  (this->Referencers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Referencers).ArrayNum = 0;
  (this->Referencers).ArrayMax = 0;
  if (param_3) {
    (**(code **)(this->_padding_ + 0xd8))(this,1);
    (**(code **)(this->_padding_ + 0x108))(this,1);
  }
  (**(code **)(*(longlong *)param_2 + 200))(param_2,this);
  return this;
}

// operator<< @ 141ed6aa0

FArchive * __thiscall FArchiveFindCulprit::operator<<(FArchiveFindCulprit *this,UObject **param_1)

{
  bool bVar1;
  FUObjectItem *pFVar2;
  FProperty *local_res8;
  UObject *local_res10;
  
  if (*param_1 == this->Find) {
    if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
      local_res8 = (FProperty *)this->_padding_;
      TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_const_*>
                (&this->Referencers,&local_res8);
    }
    this->Count = this->Count + 1;
  }
  if (this->PretendSaving == false) {
    return (FArchive *)this;
  }
  if (*param_1 == (UObject *)0x0) {
    return (FArchive *)this;
  }
  if ((*(uint *)&(*param_1)->field_0x8 >> 0x1e & 1) == 0) {
    if (((*(uint *)&(*param_1)->field_0x8 & 0x40) != 0) &&
       ((*(uint *)&(*param_1)->field_0x8 & 1) == 0)) {
      return (FArchive *)this;
    }
    bVar1 = ObjectHasAnyMarks((UObjectBase *)*param_1,OBJECTMARK_TagExp);
    if (!bVar1) {
      if (((*(uint *)&(*param_1)->field_0x8 & 2) != 0) ||
         (pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc),
         ((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x42000000U) != 0)) {
        local_res8 = *(FProperty **)&(*param_1)->field_0x20;
        (**(code **)(this->_padding_ + 0x168))(this,&local_res8);
      }
      local_res10 = UObject::GetArchetype(*param_1);
      (**(code **)(this->_padding_ + 0x168))(this,&local_res10);
      return (FArchive *)this;
    }
    return (FArchive *)this;
  }
  return (FArchive *)this;
}

// GetArchiveName @ 141ef8f80

FString * __thiscall
FArchiveFindCulprit::GetArchiveName(FArchiveFindCulprit *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveFindCulprit");
  return __return_storage_ptr__;
}

