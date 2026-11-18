// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FWorkerCache @ 142011e90

FWorkerCache * __thiscall UE::GC::FPageAllocator::FWorkerCache::FWorkerCache(FWorkerCache *this)

{
  this->Num = 0;
  memset(this->Pages,0,0x100);
  return this;
}

// ~FWorkerCache @ 142013a70

void __thiscall UE::GC::FPageAllocator::FWorkerCache::~FWorkerCache(FWorkerCache *this)

{
  void **ppvVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  void **ppvVar6;
  
  uVar2 = this->Num;
  ppvVar6 = this->Pages;
  if (((int)uVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppvVar1 = ppvVar6 + (int)uVar2;
  while( true ) {
    if (ppvVar6 == ppvVar1) {
      return;
    }
    pvVar3 = *ppvVar6;
    if (((pvVar3 == (void *)0x0) || (((ulonglong)pvVar3 & 0xfff) != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidPage(Page)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x562,L""), bVar5)) break;
    FMemory::Free(pvVar3);
    ppvVar6 = ppvVar6 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

