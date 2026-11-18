// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FMemoryChunk @ 145c45240

FMemoryChunk * __thiscall
FGPUDefragAllocator::FMemoryChunk::FMemoryChunk
          (FMemoryChunk *this,uchar *param_1,long64 param_2,FGPUDefragAllocator *param_3,
          FMemoryChunk **param_4,TStatId param_5)

{
  FGPUDefragAllocator *pFVar1;
  uchar *puVar2;
  FMemoryChunk *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMemoryChunk *pFVar6;
  
  this->Base = param_1;
  this->Size = param_2;
  this->OrigSize = 0;
  this->bIsAvailable = false;
  this->LockCount = 0;
  this->DefragCounter = 0;
  this->BestFitAllocator = param_3;
  this->SyncIndex = 0;
  this->SyncSize = 0;
  this->UserPayload = (void *)0x0;
  (this->Stat).StatIdPtr = param_5.StatIdPtr;
  this->bTail = false;
  if (*param_4 == (FMemoryChunk *)0x0) {
    this->PreviousChunk = (FMemoryChunk *)0x0;
    this->NextChunk = (FMemoryChunk *)0x0;
    *param_4 = this;
  }
  else {
    this->NextChunk = (*param_4)->NextChunk;
    this->PreviousChunk = *param_4;
    (*param_4)->NextChunk = this;
    if (this->NextChunk != (FMemoryChunk *)0x0) {
      this->NextChunk->PreviousChunk = this;
      goto LAB_145c452cb;
    }
  }
  this->BestFitAllocator->LastChunk = this;
LAB_145c452cb:
  pFVar6 = *param_4;
  if ((this->bIsAvailable != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsAvailable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x49,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FMemoryChunk *)(*pcVar4)();
    return pFVar6;
  }
  pFVar1 = this->BestFitAllocator;
  this->bIsAvailable = true;
  this->DefragCounter = 0;
  this->UserPayload = (void *)0x0;
  this->bTail = false;
  if (pFVar1->FirstFreeChunk == (FMemoryChunk *)0x0) {
    this->PreviousFreeChunk = (FMemoryChunk *)0x0;
    this->NextFreeChunk = (FMemoryChunk *)0x0;
    pFVar1->FirstFreeChunk = this;
    return this;
  }
  if ((pFVar6 == (FMemoryChunk *)0x0) || (pFVar6->bIsAvailable == false)) {
    pFVar6 = pFVar1->FirstFreeChunk;
  }
  puVar2 = pFVar6->Base;
  while ((puVar2 < this->Base && (pFVar3 = pFVar6->NextFreeChunk, pFVar3 != (FMemoryChunk *)0x0))) {
    puVar2 = pFVar3->Base;
    pFVar6 = pFVar3;
  }
  this->NextFreeChunk = pFVar6;
  this->PreviousFreeChunk = pFVar6->PreviousFreeChunk;
  if (pFVar6->PreviousFreeChunk == (FMemoryChunk *)0x0) {
    pFVar1->FirstFreeChunk = this;
    pFVar6->PreviousFreeChunk = this;
    return this;
  }
  pFVar6->PreviousFreeChunk->NextFreeChunk = this;
  pFVar6->PreviousFreeChunk = this;
  return this;
}

// LinkFree @ 145c60c00

void __thiscall
FGPUDefragAllocator::FMemoryChunk::LinkFree(FMemoryChunk *this,FMemoryChunk *param_1)

{
  FGPUDefragAllocator *pFVar1;
  uchar *puVar2;
  FMemoryChunk *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->bIsAvailable != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsAvailable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUDefragAllocator.cpp"
                         ,0x49,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = this->BestFitAllocator;
  this->bIsAvailable = true;
  this->DefragCounter = 0;
  this->UserPayload = (void *)0x0;
  this->bTail = false;
  if (pFVar1->FirstFreeChunk == (FMemoryChunk *)0x0) {
    this->PreviousFreeChunk = (FMemoryChunk *)0x0;
    this->NextFreeChunk = (FMemoryChunk *)0x0;
    pFVar1->FirstFreeChunk = this;
    return;
  }
  if ((param_1 == (FMemoryChunk *)0x0) || (param_1->bIsAvailable == false)) {
    param_1 = pFVar1->FirstFreeChunk;
  }
  puVar2 = param_1->Base;
  while ((puVar2 < this->Base && (pFVar3 = param_1->NextFreeChunk, pFVar3 != (FMemoryChunk *)0x0)))
  {
    puVar2 = pFVar3->Base;
    param_1 = pFVar3;
  }
  this->NextFreeChunk = param_1;
  this->PreviousFreeChunk = param_1->PreviousFreeChunk;
  if (param_1->PreviousFreeChunk == (FMemoryChunk *)0x0) {
    pFVar1->FirstFreeChunk = this;
    param_1->PreviousFreeChunk = this;
    return;
  }
  param_1->PreviousFreeChunk->NextFreeChunk = this;
  param_1->PreviousFreeChunk = this;
  return;
}

// UnlinkFree @ 145c7ec80

void __thiscall FGPUDefragAllocator::FMemoryChunk::UnlinkFree(FMemoryChunk *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsAvailable == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsAvailable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUDefragAllocator.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsAvailable = false;
  if (this->PreviousFreeChunk == (FMemoryChunk *)0x0) {
    this->BestFitAllocator->FirstFreeChunk = this->NextFreeChunk;
  }
  else {
    this->PreviousFreeChunk->NextFreeChunk = this->NextFreeChunk;
  }
  if (this->NextFreeChunk != (FMemoryChunk *)0x0) {
    this->NextFreeChunk->PreviousFreeChunk = this->PreviousFreeChunk;
  }
  this->NextFreeChunk = (FMemoryChunk *)0x0;
  this->PreviousFreeChunk = (FMemoryChunk *)0x0;
  return;
}

