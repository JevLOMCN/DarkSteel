// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraResourceArrayWriter @ 149386ab0

FNiagaraResourceArrayWriter * __thiscall
FNiagaraResourceArrayWriter::FNiagaraResourceArrayWriter
          (FNiagaraResourceArrayWriter *this,TResourceArray<unsigned_char,0> *param_1,bool param_2,
          bool param_3,FName param_4)

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
  this->_padding_ = (longlong)&___7FNiagaraResourceArrayWriter__6B_;
  this->ArchiveName = param_4;
  this->Bytes = param_1;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  if (param_3) {
    this->_padding_ = (longlong)(int)param_1->_padding_;
  }
  return this;
}

// GetArchiveName @ 1493a38f0

FString * __thiscall
FNiagaraResourceArrayWriter::GetArchiveName
          (FNiagaraResourceArrayWriter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNiagaraResourceArrayWriter");
  return __return_storage_ptr__;
}

// Serialize @ 1493b55e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraResourceArrayWriter::Serialize
          (FNiagaraResourceArrayWriter *this,void *param_1,long64 param_2)

{
  uint uVar1;
  TResourceArray<unsigned_char,0> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  FString local_18;
  
  lVar7 = (longlong)(int)this->Bytes->_padding_;
  lVar8 = (this->_padding_ - lVar7) + param_2;
  if (0 < lVar8) {
    if (0x7ffffffe < lVar7 + lVar8) {
      ::FName::ToString(&this->ArchiveName,&local_18);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pTVar2 = this->Bytes;
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (1,1,(int)lVar8,(ForAnyElementType *)&pTVar2->_padding_,(int *)&pTVar2->_padding_,
               (int *)((longlong)&pTVar2->_padding_ + 4));
  }
  if (((longlong)(int)this->Bytes->_padding_ < this->_padding_ + param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Offset + Num) <= Bytes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraResourceArrayWriter.cpp"
                         ,0x20,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 != 0) {
    plVar9 = &this->Bytes->_padding_;
    uVar1 = (uint)this->_padding_;
    uVar5 = 0;
    if ((int)uVar1 < (int)this->Bytes->_padding_) {
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
    uVar6 = *plVar9;
    if ((uVar6 & 1) != 0) {
      uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)plVar9;
    }
    memcpy((void *)(uVar6 + (longlong)(int)uVar1),param_1,param_2);
    this->_padding_ = this->_padding_ + param_2;
  }
  return;
}

// TotalSize @ 1493ba150

long64 __thiscall FNiagaraResourceArrayWriter::TotalSize(FNiagaraResourceArrayWriter *this)

{
  return (longlong)(int)this->Bytes->_padding_;
}

