// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Serialize @ 1418f5cc0

void __thiscall
FOutputDeviceMemory::FOutputDeviceMemoryProxyArchive::Serialize
          (FOutputDeviceMemoryProxyArchive *this,void *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FOutputDeviceMemory *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar3 = this->OutputDevice;
  iVar1 = (pFVar3->Buffer).ArrayNum;
  if ((iVar1 < (int)param_2) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3903348948135313498>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceMemory.cpp"
                         ,0x5a,"Length <= BufferCapacity"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)param_2 != 0) {
    lpCriticalSection = &pFVar3->BufferPosCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar2 = pFVar3->BufferStartPos;
      iVar5 = (int)param_2;
      iVar7 = iVar2 + iVar5;
      iVar9 = iVar5;
      if (iVar1 < iVar7) {
        iVar7 = pFVar3->PreserveSize;
        iVar9 = iVar1 - iVar2;
      }
      iVar8 = pFVar3->BufferLength + iVar9;
      pFVar3->BufferStartPos = iVar7;
      iVar7 = iVar1;
      if (iVar8 < iVar1) {
        iVar7 = iVar8;
      }
      pFVar3->BufferLength = iVar7;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      memcpy((pFVar3->Buffer).AllocatorInstance.Data + iVar2,param_1,(longlong)iVar9);
      param_1 = (void *)((longlong)param_1 + (longlong)iVar9);
      param_2 = (long64)(uint)(iVar5 - iVar9);
    } while (iVar5 - iVar9 != 0);
  }
  return;
}

