// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// FManifestReader @ 143224320

FManifestReader * __thiscall
FManifestReader::FManifestReader
          (FManifestReader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *this_00;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res18;
  FMemoryReader local_f8;
  uint *local_48;
  FName **local_40;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this_00 = &this->FNameLookup;
  this->Bytes = param_1;
  this->_padding_ = (longlong)&___7FManifestReader__6B_;
  this->Offset = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->FNameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FNameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FNameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FNameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FNameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FNameLookup).field_0x34 = 0;
  *(undefined8 *)&(this->FNameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FNameLookup).field_0x48 = 0;
  (**(code **)(this->_padding_ + 0x108))(this,0);
  (**(code **)(this->_padding_ + 200))(this,1);
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_f8);
  local_f8._padding_ = 0;
  local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_f8.LimitSize = 0x7fffffffffffffff;
  local_f8.Bytes = param_1;
  FArchiveState::SetIsLoading((FArchiveState *)&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  if (*(uint **)(local_f8._padding_ + 8) < *(uint **)local_f8._padding_ + 1) {
    if ((local_f8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_f8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_f8,local_res8,4);
      }
      else {
        (**(code **)(local_f8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_f8,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_f8._padding_;
    *(longlong *)local_f8._padding_ = *(longlong *)local_f8._padding_ + 4;
  }
  if ((int)local_res8[0] < 0x32) {
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::Empty
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)this_00,local_res8[0]);
    if (0 < (int)local_res8[0]) {
      local_48 = local_res10;
      local_40 = &local_res18.Value;
      do {
        local_res18.Value = (FName *)0x0;
        if (*(code **)(local_f8._padding_ + 0x178) == FMemoryArchive::operator<<) {
          FMemoryArchive::operator<<((FMemoryArchive *)&local_f8,(FName *)&local_res18.Value);
        }
        else {
          (**(code **)(local_f8._padding_ + 0x178))();
        }
        if (*(uint **)(local_f8._padding_ + 8) < *(uint **)local_f8._padding_ + 1) {
          if ((local_f8._padding_ & 0x10000U) == 0) {
            if (*(code **)(local_f8._padding_ + 0x188) == FMemoryReader::Serialize) {
              FMemoryReader::Serialize(&local_f8,local_res10,4);
            }
            else {
              (**(code **)(local_f8._padding_ + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_f8,local_res10);
          }
        }
        else {
          local_res10[0] = **(uint **)local_f8._padding_;
          *(longlong *)local_f8._padding_ = *(longlong *)local_f8._padding_ + 4;
        }
        TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,FName_const_&>_>
                  ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                    *)this_00,&local_res18,(bool *)&local_48);
        local_res8[0] = local_res8[0] - 1;
      } while (0 < (int)local_res8[0]);
    }
  }
  else {
    FArchiveState::SetError((FArchiveState *)this);
  }
  this->Offset = local_f8._padding_;
  FArchive::~FArchive((FArchive *)&local_f8);
  return this;
}

// operator<< @ 14322b950

FArchive * __thiscall FManifestReader::operator<<(FManifestReader *this,FName *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  FName *pFVar4;
  undefined1 *puVar5;
  uint local_res8 [2];
  
  if ((this->_padding_ & 0x200) != 0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    return (FArchive *)this;
  }
  plVar1 = (longlong *)this->_padding_;
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (*(int *)&(this->FNameLookup).field_0x8 != *(int *)&(this->FNameLookup).field_0x34) {
    puVar5 = *(undefined1 **)&(this->FNameLookup).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->FNameLookup).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->FNameLookup).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->FNameLookup;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x14) == local_res8[0]) {
          pFVar4 = TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                   ::FindChecked((TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                                  *)&this->FNameLookup,local_res8[0]);
          *param_1 = *pFVar4;
          return (FArchive *)this;
        }
        iVar3 = *(int *)(lVar2 + 0xc + (longlong)iVar3 * 0x14);
      } while (iVar3 != -1);
    }
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  FArchiveState::SetError((FArchiveState *)this);
  return (FArchive *)this;
}

// GetArchiveName @ 143254250

FString * __thiscall
FManifestReader::GetArchiveName(FManifestReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FManifestReader");
  return __return_storage_ptr__;
}

// Seek @ 143267d70

void __thiscall FManifestReader::Seek(FManifestReader *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->Bytes->ArrayNum) {
    this->Offset = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InPos <= Bytes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ManifestUObject.cpp"
                     ,0x144,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Offset = param_1;
  return;
}

// Serialize @ 1432686d0

void __thiscall FManifestReader::Serialize(FManifestReader *this,void *param_1,long64 param_2)

{
  int iVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    pTVar2 = this->Bytes;
    iVar1 = pTVar2->ArrayNum;
    if ((longlong)iVar1 < this->Offset + param_2) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      uVar6 = (uint)this->Offset;
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy(param_1,(pTVar2->AllocatorInstance).Data + (int)uVar6,param_2);
      this->Offset = this->Offset + param_2;
    }
  }
  return;
}

// Tell @ 143269bf0

long64 __thiscall FManifestReader::Tell(FManifestReader *this)

{
  return this->Offset;
}

// TotalSize @ 14326b230

long64 __thiscall FManifestReader::TotalSize(FManifestReader *this)

{
  return (longlong)this->Bytes->ArrayNum;
}

