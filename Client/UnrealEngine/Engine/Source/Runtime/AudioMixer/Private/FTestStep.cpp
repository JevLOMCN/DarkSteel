// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// DoRenderStep @ 146552880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FAudioRenderSchedulerTesterImpl::FTestStep::DoRenderStep(FTestStep *this)

{
  int *piVar1;
  FAudioRenderSchedulerTesterImpl *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  
  lpCriticalSection = &this->Owner->ResultsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = this->Owner;
  piVar7 = &this->Id;
  pTVar8 = &pFVar2->Results;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= piVar7) && (piVar7 < pFVar3 + (longlong)(pFVar2->Results).ArrayMax * 4)) {
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
  iVar6 = (pFVar2->Results).ArrayNum;
  piVar1 = &(pFVar2->Results).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar8->AllocatorInstance,piVar1);
    (pFVar2->Results).ArrayNum = iVar6 + 1;
  }
  else {
    (pFVar2->Results).ArrayNum = iVar6 + 1;
  }
  *(int *)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 4) = *piVar7;
                    /* WARNING: Could not recover jumptable at 0x00014655295f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetRenderStepName @ 14655a770

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
Audio::FAudioRenderSchedulerTesterImpl::FTestStep::GetRenderStepName(FTestStep *this)

{
  return L"";
}

