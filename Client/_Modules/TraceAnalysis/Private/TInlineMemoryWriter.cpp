// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// TInlineMemoryWriter<32> @ 14d38ea60

TInlineMemoryWriter<32> * __thiscall
UE::Trace::TInlineMemoryWriter<32>::TInlineMemoryWriter<32>(TInlineMemoryWriter<32> *this)

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
  this->_padding_ = (longlong)&___7__TInlineMemoryWriter__0CA__Trace_UE__6B_;
  (this->Buffer).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  this->_padding_ = 0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0x20;
  (*(code *)PTR_SetIsSaving_152b080f8)(this,1);
  return this;
}

// TInlineMemoryWriter<128> @ 14d38eae0

TInlineMemoryWriter<128> * __thiscall
UE::Trace::TInlineMemoryWriter<128>::TInlineMemoryWriter<128>(TInlineMemoryWriter<128> *this)

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
  this->_padding_ = (longlong)&___7__TInlineMemoryWriter__0IA__Trace_UE__6B_;
  (this->Buffer).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  this->_padding_ = 0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0x80;
  (*(code *)PTR_SetIsSaving_152b08390)(this,1);
  return this;
}

// Serialize @ 14d3a70e0

void __thiscall
UE::Trace::TInlineMemoryWriter<32>::Serialize
          (TInlineMemoryWriter<32> *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<unsigned_char> FVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  if (param_2 != iVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 == (void *)0x0) && (iVar5 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,iVar5,&(this->Buffer).AllocatorInstance,&(this->Buffer).ArrayNum,
                     &(this->Buffer).ArrayMax);
  FVar4 = (this->Buffer).AllocatorInstance.SecondaryData;
  if (iVar5 != 0) {
    if (FVar4 == (ForElementType<unsigned_char>)0x0) {
      FVar4 = (ForElementType<unsigned_char>)&this->Buffer;
    }
    memcpy((void *)((longlong)FVar4 + (longlong)iVar3),param_1,(longlong)iVar5);
  }
  return;
}

// Serialize @ 14d3a71e0

void __thiscall
UE::Trace::TInlineMemoryWriter<128>::Serialize
          (TInlineMemoryWriter<128> *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<unsigned_char> FVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  if (param_2 != iVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 == (void *)0x0) && (iVar5 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,iVar5,&(this->Buffer).AllocatorInstance,&(this->Buffer).ArrayNum,
                     &(this->Buffer).ArrayMax);
  FVar4 = (this->Buffer).AllocatorInstance.SecondaryData;
  if (iVar5 != 0) {
    if (FVar4 == (ForElementType<unsigned_char>)0x0) {
      FVar4 = (ForElementType<unsigned_char>)&this->Buffer;
    }
    memcpy((void *)((longlong)FVar4 + (longlong)iVar3),param_1,(longlong)iVar5);
  }
  return;
}

