// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 1

// operator() @ 14464f280

void __thiscall
TDefaultDelete<FCapturedFrames>::operator()
          (TDefaultDelete<FCapturedFrames> *this,FCapturedFrames *param_1)

{
  FScriptContainerElement *pFVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  wchar_t *pwVar3;
  
  if (param_1 != (FCapturedFrames *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(param_1->FrameReady);
    this_00 = FPlatformFileManager::Get();
    pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
    if ((param_1->ArchiveDirectory).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->ArchiveDirectory).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar2 + 0x1f8))(pIVar2,pwVar3);
    if ((param_1->UnarchiveTask).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&(param_1->UnarchiveTask).TypedValue.field_0x8);
    }
    DestructItems<FCapturedFrame,int>
              ((FCapturedFrame *)(param_1->InMemoryFrames).AllocatorInstance.Data,
               (param_1->InMemoryFrames).ArrayNum);
    pFVar1 = (param_1->InMemoryFrames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->InMemoryFrameMutex);
    pFVar1 = (param_1->ArchivedFrames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->ArchiveFrameMutex);
    pFVar1 = (param_1->ArchiveDirectory).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xb0);
  }
  return;
}

