// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 4

// GetFramePace @ 1423ded80

int __cdecl FGenericPlatformRHIFramePacer::GetFramePace(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  IConsoleManager *pIVar5;
  int iVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      SyncIntervalCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"rhi.SyncInterval",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<407854045798072331>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformFramePacer.cpp"
                       ,0xb,"SyncIntervalCVar != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    iVar3 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))();
    if (0 < iVar3) {
      iVar6 = 0x7fffffff;
      if (iVar3 < 0x7fffffff) {
        iVar6 = iVar3;
      }
      iVar4 = FWindowsPlatformMisc::GetMaxRefreshRate();
      iVar3 = 1;
      if (1 < iVar6) {
        iVar3 = iVar6;
      }
      return iVar4 / iVar3;
    }
  }
  return 0;
}

// GetFramePaceFromSyncInterval @ 1423dee80

int __cdecl FGenericPlatformRHIFramePacer::GetFramePaceFromSyncInterval(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  IConsoleManager *pIVar5;
  int iVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      SyncIntervalCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"rhi.SyncInterval",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<407854045798072331>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformFramePacer.cpp"
                       ,0xb,"SyncIntervalCVar != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    iVar3 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))();
    if (0 < iVar3) {
      iVar6 = 0x7fffffff;
      if (iVar3 < 0x7fffffff) {
        iVar6 = iVar3;
      }
      iVar4 = FWindowsPlatformMisc::GetMaxRefreshRate();
      iVar3 = 1;
      if (1 < iVar6) {
        iVar3 = iVar6;
      }
      return iVar4 / iVar3;
    }
  }
  return 0;
}

// SetFramePaceToSyncInterval @ 142404930

int __cdecl FGenericPlatformRHIFramePacer::SetFramePaceToSyncInterval(int param_1)

{
  longlong lVar1;
  code *pcVar2;
  IConsoleVariable *pIVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  IConsoleManager *pIVar7;
  ForAnyElementType FVar8;
  undefined1 local_48 [16];
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = IConsoleManager::Get();
    SyncIntervalCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"rhi.SyncInterval",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (-1 < param_1) {
    if (param_1 != 0) {
      iVar5 = FWindowsPlatformMisc::GetMaxRefreshRate();
      if (iVar5 % param_1 != 0) goto LAB_142404aa7;
      FWindowsPlatformMisc::GetMaxRefreshRate();
    }
    if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<407854045798072360>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformFramePacer.cpp"
                         ,0x28,"SyncIntervalCVar != nullptr");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    else {
      if (0 < param_1) {
        FWindowsPlatformMisc::GetMaxRefreshRate();
      }
      pIVar3 = SyncIntervalCVar;
      local_20 = 0;
      local_28 = 0xe000000;
      local_24 = 0;
      local_18 = 0;
      local_14 = 0xf000000;
      local_10 = 0x1000000;
      ::FString::PrintfImpl(&local_38,L"%d");
      lVar1 = *(longlong *)pIVar3;
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(lVar1 + 0xa8))(pIVar3,local_48,&local_28);
      (**(code **)(lVar1 + 0xb0))(pIVar3,FVar8.Data,uVar6);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_142404aa7:
  iVar5 = GetFramePace();
  return iVar5;
}

// SupportsFramePace @ 142408860

bool __cdecl FGenericPlatformRHIFramePacer::SupportsFramePace(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return false;
  }
  if (param_1 != 0) {
    iVar1 = FWindowsPlatformMisc::GetMaxRefreshRate();
    if (iVar1 % param_1 != 0) {
      return false;
    }
    FWindowsPlatformMisc::GetMaxRefreshRate();
  }
  return true;
}

