// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9cc0

IVerifier * __cdecl
BuildPatchServices::FVerifierFactory::Create
          (IFileSystem *param_1,IVerifierStat *param_2,EVerifyMode param_3,
          TSharedPtr<IBuildInstallerSharedContext,1> *param_4,IBuildManifestSet *param_5,
          FString *param_6,FString *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  IVerifier *pIVar4;
  FVerifier *this;
  FVerifier *pFVar5;
  FString local_48;
  FString local_38;
  TSharedPtr<IBuildInstallerSharedContext,1> local_28;
  
  if (param_1 == (IFileSystem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileSystem != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Verifier.cpp"
                       ,0x1a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IVerifier *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (param_2 == (IVerifierStat *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VerifierStat != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Verifier.cpp"
                       ,0x1a1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IVerifier *)(*pcVar2)();
      return pIVar4;
    }
  }
  this = ::operator_new(0x140);
  pFVar5 = (FVerifier *)0x0;
  if (this != (FVerifier *)0x0) {
    local_48.Data.AllocatorInstance.Data = (param_7->Data).AllocatorInstance.Data;
    (param_7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (param_7->Data).ArrayNum;
    local_48.Data.ArrayMax = (param_7->Data).ArrayMax;
    (param_7->Data).ArrayNum = 0;
    (param_7->Data).ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (param_6->Data).AllocatorInstance.Data;
    (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (param_6->Data).ArrayNum;
    local_38.Data.ArrayMax = (param_6->Data).ArrayMax;
    (param_6->Data).ArrayNum = 0;
    (param_6->Data).ArrayMax = 0;
    local_28.Object = param_4->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = FVerifier::FVerifier
                       (this,param_1,param_2,param_3,&local_28,param_5,&local_38,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  pFVar1 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (IVerifier *)pFVar5;
}

