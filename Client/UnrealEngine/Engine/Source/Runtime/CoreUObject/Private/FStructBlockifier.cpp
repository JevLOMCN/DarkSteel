// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~FStructBlockifier @ 1420137d0

void __thiscall UE::GC::FStructBlockifier::~FStructBlockifier(FStructBlockifier *this)

{
  FStructArrayBlock *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWorkerCache *pFVar5;
  
  if (this->Wip != (FStructArrayBlock *)0x0) {
    iVar4 = PartialNum(this);
    if (this->Wip->NextFull != (FStructArrayBlock *)0x0 || 0 < iVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CanPop()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x720,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = this->Wip;
    iVar4 = this->WorkerIndex;
    if ((pFVar1 == (FStructArrayBlock *)0x0) || (((ulonglong)pFVar1 & 0xfff) != 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidPage(Page)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x553,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = GScratchPages.WorkerCaches + iVar4;
      if (pFVar1 == (FStructArrayBlock *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Page",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x4fd,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    else {
      pFVar5 = GScratchPages.WorkerCaches + iVar4;
    }
    if (pFVar5->Num < 0x20) {
      pFVar5->Pages[pFVar5->Num] = pFVar1;
      pFVar5->Num = pFVar5->Num + 1;
      return;
    }
    if ((pFVar1 == (FStructArrayBlock *)0x0) || (((ulonglong)pFVar1 & 0xfff) != 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidPage(Page)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x562,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMemory::Free(pFVar1);
  }
  return;
}

// FreeBlock @ 142053490

void __thiscall
UE::GC::FStructBlockifier::FreeBlock(FStructBlockifier *this,FStructArrayBlock *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FWorkerCache *pFVar4;
  
  iVar1 = this->WorkerIndex;
  if ((param_1 == (FStructArrayBlock *)0x0) || (((ulonglong)param_1 & 0xfff) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidPage(Page)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x553,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = GScratchPages.WorkerCaches + iVar1;
    if (param_1 == (FStructArrayBlock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Page",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x4fd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    pFVar4 = GScratchPages.WorkerCaches + iVar1;
  }
  if (pFVar4->Num < 0x20) {
    pFVar4->Pages[pFVar4->Num] = param_1;
    pFVar4->Num = pFVar4->Num + 1;
    return;
  }
  if ((param_1 == (FStructArrayBlock *)0x0) || (((ulonglong)param_1 & 0xfff) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidPage(Page)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x562,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMemory::Free(param_1);
  return;
}

// GetSlack @ 142055e70

int __thiscall UE::GC::FStructBlockifier::GetSlack(FStructBlockifier *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (longlong)this->Wip + (0xfc0 - (longlong)this->WipIt);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  lVar4 = (lVar4 >> 2) - (lVar4 >> 0x3f);
  iVar3 = (int)lVar4;
  if (lVar4 != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// PartialNum @ 142065e20

int __thiscall UE::GC::FStructBlockifier::PartialNum(FStructBlockifier *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (((FStructArrayBlock *)this->WipIt < this->Wip) ||
     ((FStructArrayBlock *)(this->Wip->Data + 0xa8) <= (FStructArrayBlock *)this->WipIt)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WipIt >= Wip->Data && WipIt < Wip->Data + FStructArrayBlock::Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x76e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return (int)(((longlong)this->WipIt - (longlong)this->Wip) / 0x18);
}

