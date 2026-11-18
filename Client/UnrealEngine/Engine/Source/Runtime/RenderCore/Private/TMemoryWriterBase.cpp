// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// GetArchiveName @ 145e9ccc0

FString * __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<64>_>::GetArchiveName
          (TMemoryWriterBase<TSizedDefaultAllocator<64>_> *this,FString *__return_storage_ptr__)

{
  if (this->ArchiveName != (FName)0x0) {
    ::FName::ToString(&this->ArchiveName,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"FMemoryWriter%d");
  return __return_storage_ptr__;
}

// Serialize @ 145eb3640

void __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<64>_>::Serialize
          (TMemoryWriterBase<TSizedDefaultAllocator<64>_> *this,void *param_1,long64 param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  pTVar1 = this->Bytes;
  lVar5 = (param_2 - pTVar1->ArrayNum) + this->_padding_;
  if (0 < lVar5) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,lVar5,&pTVar1->AllocatorInstance,&pTVar1->ArrayNum,&pTVar1->ArrayMax);
  }
  if (this->Bytes->ArrayNum < this->_padding_ + param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Offset + Num) <= Bytes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                       ,0x39,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 != 0) {
    lVar5 = this->_padding_;
    pTVar1 = this->Bytes;
    uVar4 = 0;
    if (lVar5 < pTVar1->ArrayNum) {
      uVar4 = (uint)((ulonglong)lVar5 >> 0x3f) ^ 1;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memcpy((pTVar1->AllocatorInstance).Data + lVar5,param_1,param_2);
    this->_padding_ = this->_padding_ + param_2;
  }
  return;
}

// TotalSize @ 145eba8d0

long64 __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<64>_>::TotalSize
          (TMemoryWriterBase<TSizedDefaultAllocator<64>_> *this)

{
  return this->Bytes->ArrayNum;
}

