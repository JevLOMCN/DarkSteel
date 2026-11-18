// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// AddMessage @ 14e4e2350

void __thiscall
UInterchangeTranslatorBase::AddMessage(UInterchangeTranslatorBase *this,UInterchangeResult *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FString *pFVar2;
  UInterchangeResultsContainer *pUVar3;
  FScriptContainerElement *pFVar4;
  UInterchangeSourceData *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UInterchangeResult *local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  pUVar3 = (this->Results).field0_0x0.DebugPtr;
  if (pUVar3 != (UInterchangeResultsContainer *)0x0) {
    if ((this->SourceData).field0_0x0.DebugPtr == (UInterchangeSourceData *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3799874561680343184>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                         ,0x90,"SourceData");
      if (bVar7) goto code_r0x00014e4e23e2;
    }
    else {
      lpCriticalSection = &pUVar3->Lock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_28 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UInterchangeResult *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar4 = (pUVar3->Results).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)(pUVar3->Results).ArrayMax * 8)
          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (pUVar3->Results).ArrayNum;
      piVar1 = &(pUVar3->Results).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pUVar3->Results).AllocatorInstance,piVar1);
      }
      pFVar4 = (pUVar3->Results).AllocatorInstance.Data;
      (pUVar3->Results).ArrayNum = iVar8 + 1;
      *(UInterchangeResult **)(pFVar4 + (longlong)iVar8 * 8) = local_28;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_28 != (UInterchangeResult *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pUVar5 = (this->SourceData).field0_0x0.DebugPtr;
      local_20.Data = (FScriptContainerElement *)0x0;
      iVar8 = (pUVar5->Filename).Data.ArrayNum;
      pFVar4 = (pUVar5->Filename).Data.AllocatorInstance.Data;
      local_18 = CONCAT44(local_18._4_4_,iVar8);
      if (iVar8 == 0) {
        local_18 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,0,&local_20,iVar8,(int *)((longlong)&local_18 + 4));
        memcpy(local_20.Data,pFVar4,(longlong)iVar8 * 2);
      }
      pFVar2 = &param_1->SourceAssetName;
      if (pFVar2 != (FString *)&local_20) {
        pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar2->Data).AllocatorInstance.Data = local_20.Data;
        (param_1->SourceAssetName).Data.ArrayNum = (int)local_18;
        local_20.Data = (FScriptContainerElement *)0x0;
        (param_1->SourceAssetName).Data.ArrayMax = local_18._4_4_;
        local_18 = 0;
      }
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
    }
    return;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3799874561680343184>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                     ,0x90,"Results");
  if (!bVar7) {
    return;
  }
code_r0x00014e4e23e2:
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

