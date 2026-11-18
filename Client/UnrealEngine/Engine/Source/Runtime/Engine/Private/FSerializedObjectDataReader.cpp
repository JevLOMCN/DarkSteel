// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FSerializedObjectDataReader @ 1488aeb00

FSerializedObjectDataReader * __thiscall
UE::Transaction::FSerializedObjectDataReader::FSerializedObjectDataReader
          (FSerializedObjectDataReader *this,FSerializedObject *param_1)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->SerializedObject = param_1;
  this->_padding_ = (longlong)&___7FSerializedObjectDataReader_Transaction_UE__6B_;
  this->Offset = 0;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  return this;
}

// operator<< @ 1488b3180

FArchive * __thiscall
UE::Transaction::FSerializedObjectDataReader::operator<<
          (FSerializedObjectDataReader *this,UObject **param_1)

{
  longlong *plVar1;
  FSerializedObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  UObject *pUVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res8 [2];
  
  plVar1 = (longlong *)this->_padding_;
  local_res8[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar8 = (longlong)(int)local_res8[0];
  if (local_res8[0] != 0xffffffff) {
    pFVar2 = this->SerializedObject;
    uVar7 = 0;
    if ((int)local_res8[0] < (pFVar2->ReferencedObjects).ArrayNum) {
      uVar7 = ~local_res8[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    pUVar6 = FPersistentObjectRef::Get
                       ((FPersistentObjectRef *)
                        ((pFVar2->ReferencedObjects).AllocatorInstance.Data + lVar8 * 0x78));
    *param_1 = pUVar6;
    return (FArchive *)this;
  }
  *param_1 = (UObject *)0x0;
  return (FArchive *)this;
}

// operator<< @ 1488b3280

FArchive * __thiscall
UE::Transaction::FSerializedObjectDataReader::operator<<
          (FSerializedObjectDataReader *this,FName *param_1)

{
  longlong *plVar1;
  FSerializedObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  
  plVar1 = (longlong *)this->_padding_;
  local_res8[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar7 = (longlong)(int)local_res8[0];
  pFVar2 = this->SerializedObject;
  uVar6 = 0;
  if ((int)local_res8[0] < (pFVar2->ReferencedNames).ArrayNum) {
    uVar6 = ~local_res8[0] >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  *param_1 = *(FName *)((pFVar2->ReferencedNames).AllocatorInstance.Data + lVar7 * 8);
  return (FArchive *)this;
}

// Seek @ 1488dd430

void __thiscall
UE::Transaction::FSerializedObjectDataReader::Seek(FSerializedObjectDataReader *this,long64 param_1)

{
  this->Offset = param_1;
  return;
}

// Serialize @ 1488dd450

void __thiscall
UE::Transaction::FSerializedObjectDataReader::Serialize
          (FSerializedObjectDataReader *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  FSerializedObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    lVar1 = this->Offset;
    pFVar2 = this->SerializedObject;
    uVar5 = 0;
    if (lVar1 < (pFVar2->SerializedData).Data.ArrayNum) {
      uVar5 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
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
    memcpy(param_1,(pFVar2->SerializedData).Data.AllocatorInstance.Data + lVar1,param_2);
    this->Offset = this->Offset + param_2;
  }
  return;
}

// Tell @ 1488e2480

long64 __thiscall
UE::Transaction::FSerializedObjectDataReader::Tell(FSerializedObjectDataReader *this)

{
  return this->Offset;
}

// TotalSize @ 1488e8920

long64 __thiscall
UE::Transaction::FSerializedObjectDataReader::TotalSize(FSerializedObjectDataReader *this)

{
  return (this->SerializedObject->SerializedData).Data.ArrayNum;
}

