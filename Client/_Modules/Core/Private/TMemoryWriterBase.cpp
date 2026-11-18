// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetArchiveName @ 1415c4ef0

FString * __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<32>_>::GetArchiveName
          (TMemoryWriterBase<TSizedDefaultAllocator<32>_> *this,FString *__return_storage_ptr__)

{
  if (this->ArchiveName != (FName)0x0) {
    ::FName::ToString(&this->ArchiveName,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"FMemoryWriter%d");
  return __return_storage_ptr__;
}

// Serialize @ 1415f0e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
          (TMemoryWriterBase<TSizedDefaultAllocator<32>_> *this,void *param_1,long64 param_2)

{
  uint uVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FString local_18;
  
  lVar6 = (longlong)this->Bytes->ArrayNum;
  lVar7 = (this->_padding_ - lVar6) + param_2;
  if (0 < lVar7) {
    if (0x7ffffffe < lVar6 + lVar7) {
      ::FName::ToString(&this->ArchiveName,&local_18);
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pTVar2 = this->Bytes;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)lVar7,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  }
  if (((longlong)this->Bytes->ArrayNum < this->_padding_ + param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Offset + Num) <= Bytes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                         ,0x39,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 != 0) {
    uVar1 = (uint)this->_padding_;
    pTVar2 = this->Bytes;
    uVar5 = 0;
    if ((int)uVar1 < pTVar2->ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
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
    memcpy((pTVar2->AllocatorInstance).Data + (int)uVar1,param_1,param_2);
    this->_padding_ = this->_padding_ + param_2;
  }
  return;
}

// TotalSize @ 141602e00

long64 __thiscall
TMemoryWriterBase<TSizedDefaultAllocator<32>_>::TotalSize
          (TMemoryWriterBase<TSizedDefaultAllocator<32>_> *this)

{
  return (longlong)this->Bytes->ArrayNum;
}

