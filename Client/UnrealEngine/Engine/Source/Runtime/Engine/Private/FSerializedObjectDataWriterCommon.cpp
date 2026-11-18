// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSerializedObjectDataWriterCommon @ 1488aeda0

FSerializedObjectDataWriterCommon * __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::FSerializedObjectDataWriterCommon
          (FSerializedObjectDataWriterCommon *this,FSerializedObjectData *param_1)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->SerializedData = param_1;
  this->_padding_ = (longlong)&___7FSerializedObjectDataWriterCommon_Internal_Transaction_UE__6B_;
  this->Offset = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  return this;
}

// OnDataSerialized @ 1488cfa40

void __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::OnDataSerialized
          (FSerializedObjectDataWriterCommon *this,long64 param_1,long64 param_2)

{
  return;
}

// Seek @ 1488dd440

void __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::Seek
          (FSerializedObjectDataWriterCommon *this,long64 param_1)

{
  this->Offset = param_1;
  return;
}

// Serialize @ 1488dd510

void __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::Serialize
          (FSerializedObjectDataWriterCommon *this,void *param_1,long64 param_2)

{
  long64 *plVar1;
  longlong lVar2;
  FSerializedObjectData *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    lVar2 = this->Offset;
    pFVar3 = this->SerializedData;
    plVar1 = &(pFVar3->Data).ArrayNum;
    if (lVar2 == (pFVar3->Data).ArrayNum) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,param_2,(ForAnyElementType *)pFVar3,plVar1,&(pFVar3->Data).ArrayMax);
    }
    uVar6 = 0;
    if (lVar2 < *plVar1) {
      uVar6 = (uint)((ulonglong)lVar2 >> 0x3f) ^ 1;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    memcpy((pFVar3->Data).AllocatorInstance.Data + lVar2,param_1,param_2);
    this->Offset = this->Offset + param_2;
    (**(code **)(this->_padding_ + 0x268))(this,lVar2,param_2);
  }
  return;
}

// Tell @ 1488e2490

long64 __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::Tell
          (FSerializedObjectDataWriterCommon *this)

{
  return this->Offset;
}

// TotalSize @ 1488e8940

long64 __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::TotalSize
          (FSerializedObjectDataWriterCommon *this)

{
  return (this->SerializedData->Data).ArrayNum;
}

