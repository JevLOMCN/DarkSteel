// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 1

// Free @ 14a6adbf0

void __thiscall
FWN_SubsequentTaskArrayPool::Free
          (FWN_SubsequentTaskArrayPool *this,
          TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> **param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (*param_1 != (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this == (FWN_SubsequentTaskArrayPool *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    pFVar2 = (this->FreedTasksArray).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->FreedTasksArray).ArrayMax * 8))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->FreedTasksArray).ArrayNum;
    piVar1 = &(this->FreedTasksArray).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreedTasksArray).AllocatorInstance,piVar1);
    }
    (this->FreedTasksArray).ArrayNum = iVar5 + 1;
    *(TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> **)
     ((this->FreedTasksArray).AllocatorInstance.Data + (longlong)iVar5 * 8) = *param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    *param_1 = (TArray<FWN_Task_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return;
}

