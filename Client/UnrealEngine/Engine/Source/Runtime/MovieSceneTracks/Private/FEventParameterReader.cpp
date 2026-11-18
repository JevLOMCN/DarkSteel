// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// GetArchiveName @ 146793fb0

FString * __thiscall
FEventParameterReader::GetArchiveName(FEventParameterReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FEventParameterReader");
  return __return_storage_ptr__;
}

// Read @ 1467b4910

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall
FEventParameterReader::Read(FEventParameterReader *this,UScriptStruct *param_1,uchar *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FName *pFVar3;
  FName local_res8;
  uint local_res20 [2];
  FCustomVersionContainer local_28;
  
  if (7 < this->Bytes->ArrayNum) {
    plVar1 = (longlong *)this->_padding_;
    local_res8.ComparisonIndex.Value = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,&local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,(uint *)&local_res8);
      }
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (local_res8.ComparisonIndex.Value == 0xa1b2c3d4) {
      plVar1 = (longlong *)this->_padding_;
      local_res20[0] = 0;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((this->_padding_ & 0x10000) == 0) {
          (**(code **)(this->_padding_ + 0x188))(this,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res20);
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      lVar2 = this->_padding_;
      this->_padding_ = (longlong)(int)local_res20[0];
      local_28.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Versions.ArrayNum = 0;
      local_28.Versions.ArrayMax = 0;
      FCustomVersionContainer::Serialize(&local_28,(FArchive *)this,Latest);
      (**(code **)(this->_padding_ + 0x68))(this,&local_28);
      this->_padding_ = lVar2;
      if (local_28.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Versions.AllocatorInstance.Data);
      }
      goto LAB_1467b4a6b;
    }
  }
  pFVar3 = ::FName::FName(&local_res8,"EventParameter");
  FArchiveState::SetCustomVersion((FArchiveState *)this,&EventParameterVersionGUID,0,*pFVar3);
  this->_padding_ = 0;
LAB_1467b4a6b:
  UStruct::SerializeTaggedProperties
            ((UStruct *)param_1,(FArchive *)this,param_2,(UStruct *)param_1,(uchar *)0x0,
             (UObject *)0x0);
  return;
}

// Serialize @ 1467c0f80

void __thiscall
FEventParameterReader::Serialize(FEventParameterReader *this,void *param_1,long64 param_2)

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
    if ((longlong)iVar1 < this->_padding_ + param_2) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      uVar6 = (uint)this->_padding_;
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
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

