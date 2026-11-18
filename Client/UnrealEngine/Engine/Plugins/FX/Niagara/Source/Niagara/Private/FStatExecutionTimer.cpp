// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FStatExecutionTimer @ 1490232c0

FStatExecutionTimer * __thiscall FStatExecutionTimer::FStatExecutionTimer(FStatExecutionTimer *this)

{
  int *piVar1;
  
  piVar1 = &(this->CapturedTimings).ArrayMax;
  *piVar1 = 0;
  (this->CapturedTimings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapturedTimings).ArrayNum = 0;
  this->CurrentIndex = 0;
  if (-1 < GbMaxStatRecordedFrames) {
    if (0 < GbMaxStatRecordedFrames) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,GbMaxStatRecordedFrames,(ForAnyElementType *)this,0,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GbMaxStatRecordedFrames);
}

// AddTiming @ 14902bd90

void __thiscall FStatExecutionTimer::AddTiming(FStatExecutionTimer *this,float param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_res10 [6];
  
  iVar6 = (this->CapturedTimings).ArrayNum;
  local_res10[0] = param_1;
  if (GbMaxStatRecordedFrames <= iVar6) {
    iVar2 = this->CurrentIndex;
    if ((-1 < iVar2) && (iVar2 < iVar6)) {
      if (iVar2 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(float *)((this->CapturedTimings).AllocatorInstance.Data + (longlong)iVar2 * 4) = param_1;
      this->CurrentIndex = (this->CurrentIndex + 1) % GbMaxStatRecordedFrames;
    }
    return;
  }
  pFVar3 = (this->CapturedTimings).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->CapturedTimings).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CapturedTimings).ArrayNum;
  piVar1 = &(this->CapturedTimings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->CapturedTimings).ArrayNum = iVar6 + 1;
  *(float *)((this->CapturedTimings).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  return;
}

