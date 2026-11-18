// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Reset @ 14740f3c0

void __thiscall TMaybeMappedAllocator<0>::ForAnyElementType::Reset(ForAnyElementType *this)

{
  IMappedFileRegion *pIVar1;
  IMappedFileHandle *pIVar2;
  
  pIVar1 = this->MappedRegion;
  if (pIVar1 == (IMappedFileRegion *)0x0) {
    if (this->MappedHandle == (IMappedFileHandle *)0x0) goto LAB_14740f40d;
  }
  else {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  pIVar2 = this->MappedHandle;
  if (pIVar2 != (IMappedFileHandle *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  this->MappedRegion = (IMappedFileRegion *)0x0;
  this->MappedHandle = (IMappedFileHandle *)0x0;
  this->Data = (FScriptContainerElement *)0x0;
LAB_14740f40d:
  if (this->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(this->Data);
    this->Data = (FScriptContainerElement *)0x0;
  }
  return;
}

// ResizeAllocation @ 14740f7e0

void __thiscall
TMaybeMappedAllocator<0>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3)

{
  IMappedFileHandle **ppIVar1;
  IMappedFileRegion *pIVar2;
  IMappedFileHandle *pIVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  ppIVar1 = &this->MappedHandle;
  if ((this->MappedRegion == (IMappedFileRegion *)0x0) && (*ppIVar1 == (IMappedFileHandle *)0x0)) {
    if ((this->Data != (FScriptContainerElement *)0x0) || (param_2 != 0)) {
      if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
        pFVar6 = FMemory::Realloc(this->Data,(longlong)param_2 * param_3,0);
        this->Data = pFVar6;
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Animation::Private::OnInvalidMaybeMappedAllocatorNum(param_2,param_3);
    }
  }
  else {
    if (param_2 != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCompressionTypes.h"
                         ,0x253,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar2 = this->MappedRegion;
    if (pIVar2 != (IMappedFileRegion *)0x0) {
      (**(code **)pIVar2->_padding_)(pIVar2,1);
    }
    pIVar3 = *ppIVar1;
    if (pIVar3 != (IMappedFileHandle *)0x0) {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
    this->MappedRegion = (IMappedFileRegion *)0x0;
    *ppIVar1 = (IMappedFileHandle *)0x0;
    this->Data = (FScriptContainerElement *)0x0;
  }
  return;
}

// ~ForAnyElementType @ 1474b53e0

void __thiscall
TMaybeMappedAllocator<0>::ForAnyElementType::~ForAnyElementType(ForAnyElementType *this)

{
  IMappedFileRegion *pIVar1;
  IMappedFileHandle *pIVar2;
  
  pIVar1 = this->MappedRegion;
  if (pIVar1 == (IMappedFileRegion *)0x0) {
    if (this->MappedHandle == (IMappedFileHandle *)0x0) goto LAB_1474b542d;
  }
  else {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  pIVar2 = this->MappedHandle;
  if (pIVar2 != (IMappedFileHandle *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  this->MappedRegion = (IMappedFileRegion *)0x0;
  this->MappedHandle = (IMappedFileHandle *)0x0;
  this->Data = (FScriptContainerElement *)0x0;
LAB_1474b542d:
  if (this->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(this->Data);
    this->Data = (FScriptContainerElement *)0x0;
  }
  return;
}

