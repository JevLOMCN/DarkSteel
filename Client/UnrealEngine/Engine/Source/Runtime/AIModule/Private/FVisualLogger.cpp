// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// Redirect @ 146e99f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FVisualLogger::Redirect(UObject *param_1,UObject *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FVisualLogger *this;
  UObject *pUVar3;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  this = Get();
  SRWLock = &this->RedirectRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pUVar3 = RedirectInternal(this,param_1,param_2);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if ((((bIsRecording != 0) && (param_1 != (UObject *)0x0)) && (pUVar3 != (UObject *)0x0)) &&
     (bIsRecording != 0)) {
    local_res18.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    local_res18.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&local_res18,&local_28);
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_38);
    CategorizedLogfImpl(param_1,(FName *)&LogVisual.field_0x4,Log,L"Redirected \'%s\' to \'%s\'");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

