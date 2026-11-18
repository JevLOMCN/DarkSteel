// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 3

// StartupModule @ 14d75cc60

void __thiscall FOpenColorIOWrapperModule::StartupModule(FOpenColorIOWrapperModule *this)

{
  return;
}

// ShutdownModule @ 14d75cc70

void __thiscall FOpenColorIOWrapperModule::ShutdownModule(FOpenColorIOWrapperModule *this)

{
  FOpenColorIOWrapperEngineConfig *pFVar1;
  
  pFVar1 = (this->EngineBuiltInConfig).Ptr;
  if (pFVar1 != (FOpenColorIOWrapperEngineConfig *)0x0) {
    (this->EngineBuiltInConfig).Ptr = (FOpenColorIOWrapperEngineConfig *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014d75cc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// GetEngineBuiltInConfig @ 14d75cca0

FOpenColorIOWrapperEngineConfig * __thiscall
FOpenColorIOWrapperModule::GetEngineBuiltInConfig(FOpenColorIOWrapperModule *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FOpenColorIOWrapperEngineConfig *pFVar1;
  FOpenColorIOWrapperEngineConfig *pFVar2;
  undefined8 *puVar3;
  TUniquePtr<FOpenColorIOWrapperEngineConfig,TDefaultDelete<FOpenColorIOWrapperEngineConfig>_>
  *pTVar4;
  longlong local_18 [2];
  
  lpCriticalSection = &this->ConfigCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = &this->EngineBuiltInConfig;
  if (pTVar4->Ptr == (FOpenColorIOWrapperEngineConfig *)0x0) {
    pFVar2 = ::operator_new(0x10);
    if (pFVar2 == (FOpenColorIOWrapperEngineConfig *)0x0) {
      pFVar2 = (FOpenColorIOWrapperEngineConfig *)0x0;
    }
    else {
      pFVar2 = FOpenColorIOWrapperEngineConfig::FOpenColorIOWrapperEngineConfig(pFVar2);
    }
    if (pTVar4 == (TUniquePtr<FOpenColorIOWrapperEngineConfig,TDefaultDelete<FOpenColorIOWrapperEngineConfig>_>
                   *)local_18) {
      if (pFVar2 == (FOpenColorIOWrapperEngineConfig *)0x0) goto LAB_14d75cd13;
      puVar3 = *(undefined8 **)pFVar2;
    }
    else {
      pFVar1 = pTVar4->Ptr;
      pTVar4->Ptr = pFVar2;
      if (pFVar1 == (FOpenColorIOWrapperEngineConfig *)0x0) goto LAB_14d75cd13;
      puVar3 = *(undefined8 **)pFVar1;
      pFVar2 = pFVar1;
    }
    (*(code *)*puVar3)(pFVar2,1);
  }
LAB_14d75cd13:
  pFVar2 = pTVar4->Ptr;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar2;
}

