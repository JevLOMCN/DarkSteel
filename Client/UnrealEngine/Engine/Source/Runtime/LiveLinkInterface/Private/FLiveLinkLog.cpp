// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// Log_Internal<wchar_t_const_*> @ 14cfb4bd0

void __cdecl
FLiveLinkLog::Log_Internal<wchar_t_const_*>
          (Type param_1,FName param_2,FLiveLinkSubjectKey *param_3,
          TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*> param_4,wchar_t *param_5)

{
  code *pcVar1;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar2;
  FString local_18;
  
  TVar2.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FLiveLinkLog *)0x0) {
    pcVar1 = *(code **)((longlong)*Instance.Ptr + 0x20);
    ::FString::PrintfImpl(&local_18,param_4.FormatString);
    (*pcVar1)(TVar2.Ptr,param_1,param_2,param_3,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

