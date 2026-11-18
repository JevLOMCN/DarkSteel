// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// GetArchiveName @ 148cc6a50

FString * __thiscall
TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::GetArchiveName
          (TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          FString *__return_storage_ptr__)

{
  if (this->ArchiveName != (FName)0x0) {
    ::FName::ToString(&this->ArchiveName,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"FMemoryWriter%d");
  return __return_storage_ptr__;
}

// Serialize @ 148cdd2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::Serialize
          (TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          void *param_1,long64 param_2)

{
  uint uVar1;
  TArray<unsigned_char,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  ForElementType<unsigned_char> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ForElementType<unsigned_char> FVar8;
  longlong lVar9;
  FString local_18;
  
  lVar7 = (longlong)this->Bytes->ArrayNum;
  lVar9 = (this->_padding_ - lVar7) + param_2;
  if (0 < lVar9) {
    if (0x7ffffffe < lVar7 + lVar9) {
      ::FName::ToString(&this->ArchiveName,&local_18);
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::Serialize(void*___ptr64,__int64)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pTVar2 = this->Bytes;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,(int)lVar9,&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
  }
  if (((longlong)this->Bytes->ArrayNum < this->_padding_ + param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Offset + Num) <= Bytes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                         ,0x39,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 != 0) {
    uVar1 = (uint)this->_padding_;
    FVar3 = (ForElementType<unsigned_char>)this->Bytes;
    uVar6 = 0;
    if ((int)uVar1 < *(int *)((longlong)FVar3 + 0x88)) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar8 = *(ForElementType<unsigned_char> *)((longlong)FVar3 + 0x80);
    if (*(ForElementType<unsigned_char> *)((longlong)FVar3 + 0x80) ==
        (ForElementType<unsigned_char>)0x0) {
      FVar8 = FVar3;
    }
    memcpy((void *)((longlong)FVar8 + (longlong)(int)uVar1),param_1,param_2);
    this->_padding_ = this->_padding_ + param_2;
  }
  return;
}

// TotalSize @ 148ce0c20

long64 __thiscall
TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::TotalSize
          (TMemoryWriterBase<TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this)

{
  return (longlong)this->Bytes->ArrayNum;
}

