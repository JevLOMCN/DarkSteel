// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// DoesSentinelFileExist @ 141636710

bool __cdecl IProcessSentinel::DoesSentinelFileExist(wchar_t *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<IProcessSentinel,1> *pTVar4;
  TSharedPtr<IProcessSentinel,1> local_18;
  
  pTVar4 = FWindowsPlatformProcess::CreateProcessSentinelObject(&local_18);
  if (pTVar4->Object == (IProcessSentinel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((longlong)*pTVar4->Object + 0x10))(pTVar4->Object,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// MakeFilename @ 14164d3d0

FString * __thiscall
IProcessSentinel::MakeFilename
          (IProcessSentinel *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  pFVar1 = FPaths::ProjectIntermediateDir(&local_18);
  ::FString::ConcatFC(&local_28,pFVar1,param_1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_28,L".sentinel");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

