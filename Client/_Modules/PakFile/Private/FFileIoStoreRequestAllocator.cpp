// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// FFileIoStoreRequestAllocator @ 142a51bb0

FFileIoStoreRequestAllocator * __thiscall
FFileIoStoreRequestAllocator::FFileIoStoreRequestAllocator(FFileIoStoreRequestAllocator *this)

{
  FSlab *pFVar1;
  FSlab *pFVar2;
  FSlab *pFVar3;
  longlong lVar4;
  longlong lVar5;
  FSlab *pFVar6;
  
  pFVar6 = (FSlab *)0x0;
  (this->ResolvedRequestAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x48008);
  lVar5 = 0x1000;
  pFVar3 = pFVar6;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x48004);
    lVar4 = 0x1000;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)((longlong)pFVar2->Elements[0].Data.Pad + 0x40);
      *(undefined8 *)pFVar2 = 0;
      lVar4 = lVar4 + -1;
      pFVar3 = pFVar1;
    } while (lVar4 != 0);
  }
  (this->ResolvedRequestAllocator).CurrentSlab = (FSlab *)pFVar3;
  (this->ReadRequestAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0xd8008);
  pFVar3 = pFVar6;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0xd8004);
    lVar4 = 0x1000;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)(pFVar2->Elements[0].Data.Pad + 0xd0);
      pFVar2->Allocated = 0;
      pFVar2->Freed = 0;
      *(undefined4 *)&pFVar2->field_0x4 = 0;
      lVar4 = lVar4 + -1;
      pFVar3 = pFVar1;
    } while (lVar4 != 0);
  }
  (this->ReadRequestAllocator).CurrentSlab = (FSlab *)pFVar3;
  (this->CompressedBlockAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x100008);
  pFVar3 = pFVar6;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x100004);
    lVar4 = 0x1000;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)&pFVar2->Elements[0].Slab;
      *(FSlab **)pFVar2 = (FSlab *)0x0;
      lVar4 = lVar4 + -1;
      pFVar3 = pFVar1;
    } while (lVar4 != 0);
  }
  (this->CompressedBlockAllocator).CurrentSlab = pFVar3;
  (this->RequestLinkAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar3 = ::operator_new(0x18008);
  if (pFVar3 != (FSlab *)0x0) {
    memset(&pFVar3->field_0x4,0,0x18004);
    pFVar3->Allocated = 0;
    pFVar3->Freed = 0;
    pFVar1 = pFVar3;
    do {
      pFVar1 = (FSlab *)(pFVar1->Elements[0].Data.Pad + 0x10);
      pFVar1->Allocated = 0;
      pFVar1->Freed = 0;
      *(undefined4 *)&pFVar1->field_0x4 = 0;
      lVar5 = lVar5 + -1;
      pFVar6 = pFVar3;
    } while (lVar5 != 0);
  }
  (this->RequestLinkAllocator).CurrentSlab = (FSlab *)pFVar6;
  this->LiveReadRequestsCount = 0;
  return this;
}

// ~FFileIoStoreRequestAllocator @ 142a561e0

void __thiscall
FFileIoStoreRequestAllocator::~FFileIoStoreRequestAllocator(FFileIoStoreRequestAllocator *this)

{
  FSlab *pFVar1;
  FSlab *pFVar2;
  FSlab *pFVar3;
  FSlab *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  pFVar1 = (this->RequestLinkAllocator).CurrentSlab;
  if (pFVar1->Allocated != pFVar1->Freed) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::operator_delete((this->RequestLinkAllocator).CurrentSlab,0x18008);
  pFVar2 = (this->CompressedBlockAllocator).CurrentSlab;
  if (pFVar2->Allocated != pFVar2->Freed) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::operator_delete((this->CompressedBlockAllocator).CurrentSlab,0x100008);
  pFVar3 = (this->ReadRequestAllocator).CurrentSlab;
  if (pFVar3->Allocated != pFVar3->Freed) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::operator_delete((this->ReadRequestAllocator).CurrentSlab,0xd8008);
  pFVar4 = (this->ResolvedRequestAllocator).CurrentSlab;
  if (pFVar4->Allocated != pFVar4->Freed) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::operator_delete((this->ResolvedRequestAllocator).CurrentSlab,0x48008);
  return;
}

