// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// GetArchiveName @ 1415c4fd0

FString * __thiscall
FMemoryReader::GetArchiveName(FMemoryReader *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xe,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xe,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Memcpy
            ((__return_storage_ptr__->Data).AllocatorInstance.Data,L"FMemoryReader",0x1c);
  return __return_storage_ptr__;
}

// Serialize @ 1415f0ff0

void __thiscall FMemoryReader::Serialize(FMemoryReader *this,void *param_1,long64 param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_2 != 0) && ((this->_padding_ & 0x200) == 0)) {
    lVar5 = (**(code **)(this->_padding_ + 0x30))();
    if (lVar5 < this->_padding_ + param_2) {
      FArchiveState::SetError((FArchiveState *)this);
    }
    else {
      pTVar1 = this->Bytes;
      uVar6 = (uint)this->_padding_;
      uVar4 = 0;
      if ((int)uVar6 < pTVar1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memcpy(param_1,(pTVar1->AllocatorInstance).Data + (int)uVar6,param_2);
      this->_padding_ = this->_padding_ + param_2;
    }
  }
  return;
}

// TotalSize @ 141602e30

long64 __thiscall FMemoryReader::TotalSize(FMemoryReader *this)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)this->Bytes->ArrayNum;
  lVar1 = this->LimitSize;
  if (lVar2 < this->LimitSize) {
    lVar1 = lVar2;
  }
  return lVar1;
}

// FMemoryReader @ 141be4db0

FMemoryReader * __thiscall
FMemoryReader::FMemoryReader
          (FMemoryReader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
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
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMemoryReader__6B_;
  this->Bytes = param_1;
  this->LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  return this;
}

