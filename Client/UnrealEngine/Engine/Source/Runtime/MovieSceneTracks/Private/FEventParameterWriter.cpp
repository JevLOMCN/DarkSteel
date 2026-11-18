// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// GetArchiveName @ 146793fe0

FString * __thiscall
FEventParameterWriter::GetArchiveName(FEventParameterWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FEventParameterWriter");
  return __return_storage_ptr__;
}

// Serialize @ 1467c1060

void __thiscall
FEventParameterWriter::Serialize(FEventParameterWriter *this,void *param_1,long64 param_2)

{
  uint uVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)this->Bytes->ArrayNum;
  lVar7 = (this->_padding_ - lVar6) + param_2;
  if (0 < lVar7) {
    if (0x7ffffffe < lVar6 + lVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArrayCount < ((int32) 0x7fffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneEventSection.cpp"
                         ,0x81,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar2 = this->Bytes;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)lVar7,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  }
  if (param_2 != 0) {
    uVar1 = (uint)this->_padding_;
    pTVar2 = this->Bytes;
    uVar5 = 0;
    if ((int)uVar1 < pTVar2->ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    memcpy((pTVar2->AllocatorInstance).Data + (int)uVar1,param_1,param_2);
    this->_padding_ = this->_padding_ + param_2;
  }
  return;
}

// Write @ 1467c7640

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall
FEventParameterWriter::Write(FEventParameterWriter *this,UScriptStruct *param_1,uchar *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  undefined8 *puVar4;
  longlong lVar5;
  uint local_res8 [2];
  uint local_res20 [2];
  FCustomVersionContainer local_38;
  
  local_res20[0] = 0xa1b2c3d4;
  plVar2 = (longlong *)this->_padding_;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  lVar3 = this->_padding_;
  local_res8[0] = 0;
  plVar2 = (longlong *)this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)param_1,(FArchive *)this,param_2,(UStruct *)param_1,(uchar *)0x0,
             (UObject *)0x0);
  local_res8[0] = (uint)this->_padding_;
  puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this);
  local_38.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Versions.ArrayNum = *(int *)(puVar4 + 1);
  lVar5 = (longlong)local_38.Versions.ArrayNum;
  _Src = (void *)*puVar4;
  if (local_38.Versions.ArrayNum == 0) {
    local_38.Versions.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_38.Versions.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_38.Versions.ArrayNum,&local_38.Versions.ArrayMax);
    memcpy(local_38.Versions.AllocatorInstance.Data,_Src,lVar5 * 0x28);
  }
  FCustomVersionContainer::Serialize(&local_38,(FArchive *)this,Latest);
  plVar2 = (longlong *)this->_padding_;
  this->_padding_ = lVar3;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*pbVar1 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_38.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Versions.AllocatorInstance.Data);
  }
  return;
}

