// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// AllocatePage @ 142022070

void * __thiscall UE::GC::FPageAllocator::AllocatePage(FPageAllocator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  
  if ((0x10 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkerIdx >=0 && WorkerIdx < NumWorkerCaches",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x541,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  uVar3 = this->WorkerCaches[param_1].Num;
  if (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    this->WorkerCaches[param_1].Num = uVar3;
    pvVar4 = this->WorkerCaches[param_1].Pages[uVar3];
    if (pvVar4 != (void *)0x0) {
      if (((ulonglong)pvVar4 & 0xfff) == 0) {
        return pvVar4;
      }
      iVar6 = 0x544;
      pcVar5 = "IsValidPage(WorkerPage)";
      goto LAB_1420220e2;
    }
  }
  if (this == (FPageAllocator *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar6 = (this->SharedCache).Pages.ArrayNum;
  if (iVar6 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  else {
    if ((iVar6 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
    iVar6 = (this->SharedCache).Pages.ArrayNum;
    pvVar4 = *(void **)((this->SharedCache).Pages.AllocatorInstance.Data + (longlong)iVar6 * 8 + -8)
    ;
    (this->SharedCache).Pages.ArrayNum = iVar6 + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    if (pvVar4 != (void *)0x0) {
      if (((ulonglong)pvVar4 & 0xfff) == 0) {
        return pvVar4;
      }
      iVar6 = 0x549;
      pcVar5 = "IsValidPage(SharedPage)";
LAB_1420220e2:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar5,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,iVar6,L"");
      if (!bVar2) {
        return pvVar4;
      }
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  pvVar4 = FMemory::Malloc(0x1000,0x1000);
  return pvVar4;
}

