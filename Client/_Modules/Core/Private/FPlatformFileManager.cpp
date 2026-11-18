// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FPlatformFileManager @ 1416d6520

FPlatformFileManager * __thiscall
FPlatformFileManager::FPlatformFileManager(FPlatformFileManager *this)

{
  this->TopmostPlatformFile = (IPlatformFile *)0x0;
  return this;
}

// FindPlatformFile @ 1416ef680

IPlatformFile * __thiscall
FPlatformFileManager::FindPlatformFile(FPlatformFileManager *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IPlatformFile *pIVar4;
  wchar_t *pwVar5;
  
  if ((this->TopmostPlatformFile == (IPlatformFile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TopmostPlatformFile != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x37,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar4 = (IPlatformFile *)(*pcVar1)();
    return pIVar4;
  }
  pIVar4 = this->TopmostPlatformFile;
  while( true ) {
    if (pIVar4 == (IPlatformFile *)0x0) {
      return (IPlatformFile *)0x0;
    }
    pwVar5 = (wchar_t *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4);
    iVar3 = FGenericPlatformStricmp::Stricmp(pwVar5,param_1);
    if (iVar3 == 0) break;
    pIVar4 = (IPlatformFile *)(**(code **)((longlong)*pIVar4 + 0x60))(pIVar4);
  }
  return pIVar4;
}

// Get @ 1416f1460

FPlatformFileManager * __cdecl FPlatformFileManager::Get(void)

{
  return &::Singleton;
}

// GetPlatformFile @ 1416f9b60

IPlatformFile * __thiscall FPlatformFileManager::GetPlatformFile(FPlatformFileManager *this)

{
  IPlatformFile *pIVar1;
  
  pIVar1 = this->TopmostPlatformFile;
  if (pIVar1 == (IPlatformFile *)0x0) {
    pIVar1 = IPlatformFile::GetPlatformPhysical();
    this->TopmostPlatformFile = pIVar1;
  }
  return pIVar1;
}

// GetPlatformFile @ 1416f9b90

IPlatformFile * __thiscall
FPlatformFileManager::GetPlatformFile(FPlatformFileManager *this,wchar_t *param_1)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  IPlatformFile *pIVar7;
  IPlatformFile *pIVar8;
  FName local_res18 [2];
  
  pIVar7 = (IPlatformFile *)0x0;
  iVar3 = wcscmp(L"LogFile",param_1);
  if (iVar3 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar8 = ::operator_new(0x88);
      if (pIVar8 != (IPlatformFile *)0x0) {
        IPlatformFile::IPlatformFile(pIVar8);
        pIVar8[1] = (IPlatformFile)0x0;
        *pIVar8 = (IPlatformFile)&___7FLoggedPlatformFile__6B_;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar8 + 2),4000);
        pIVar8[7] = (IPlatformFile)0x0;
        pIVar8[8] = (IPlatformFile)0x0;
        pIVar8[0xb] = (IPlatformFile)0x0;
        *(undefined4 *)(pIVar8 + 0xc) = 0;
        *(undefined4 *)&pIVar8[0xc].field_0x4 = 0x80;
        *(undefined4 *)(pIVar8 + 0xd) = 0xffffffff;
        *(undefined4 *)&pIVar8[0xd].field_0x4 = 0;
        pIVar8[0xf] = (IPlatformFile)0x0;
        *(undefined4 *)(pIVar8 + 0x10) = 0;
        pIVar7 = pIVar8;
      }
      AutoDestroySingleton.Ptr = pIVar7;
      atexit(`FPlatformFileManager::GetPlatformFile'::__l5::
             _dynamic_atexit_destructor_for__AutoDestroySingleton__);
      _Init_thread_footer(&::_TSS0);
      return AutoDestroySingleton.Ptr;
    }
    return AutoDestroySingleton.Ptr;
  }
  iVar3 = wcscmp(L"FileOpenLog",param_1);
  if (iVar3 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pIVar8 = ::operator_new(0xa8);
      if (pIVar8 != (IPlatformFile *)0x0) {
        IPlatformFile::IPlatformFile(pIVar8);
        pIVar8[1] = (IPlatformFile)0x0;
        *pIVar8 = (IPlatformFile)&___7FPlatformFileOpenLog__6B_;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar8 + 2),4000);
        pIVar8[8] = (IPlatformFile)0x0;
        pIVar8[9] = (IPlatformFile)0x0;
        pIVar8[0xc] = (IPlatformFile)0x0;
        pIVar8[7] = (IPlatformFile)0x0;
        *(undefined4 *)(pIVar8 + 0xd) = 0;
        *(undefined4 *)&pIVar8[0xd].field_0x4 = 0x80;
        *(undefined4 *)(pIVar8 + 0xe) = 0xffffffff;
        *(undefined4 *)&pIVar8[0xe].field_0x4 = 0;
        pIVar8[0x10] = (IPlatformFile)0x0;
        *(undefined4 *)(pIVar8 + 0x11) = 0;
        pIVar8[0x12] = (IPlatformFile)0x0;
        pIVar8[0x13] = (IPlatformFile)0x0;
        *(undefined1 *)(pIVar8 + 0x14) = 0;
        pIVar7 = pIVar8;
      }
      AutoDestroySingleton.Ptr = pIVar7;
      atexit(`FPlatformFileManager::GetPlatformFile'::__l9::
             _dynamic_atexit_destructor_for__AutoDestroySingleton__);
      _Init_thread_footer(&::_TSS1);
      return AutoDestroySingleton.Ptr;
    }
    return AutoDestroySingleton.Ptr;
  }
  iVar3 = wcscmp(L"CachedReadFile",param_1);
  if (iVar3 != 0) {
    pFVar4 = FModuleManager::Get();
    bVar2 = FModuleManager::ModuleExists(pFVar4,param_1,(FString *)0x0);
    if (bVar2) {
      pFVar5 = ::FName::FName(local_res18,param_1);
      FVar1 = *pFVar5;
      pFVar4 = FModuleManager::Get();
      pIVar6 = FModuleManager::LoadModule(pFVar4,FVar1,None);
      if (pIVar6 != (IModuleInterface *)0x0) {
        pIVar7 = (IPlatformFile *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
        return pIVar7;
      }
    }
    return (IPlatformFile *)0x0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar8 = ::operator_new(0x10);
    if (pIVar8 != (IPlatformFile *)0x0) {
      IPlatformFile::IPlatformFile(pIVar8);
      pIVar8[1] = (IPlatformFile)0x0;
      *pIVar8 = (IPlatformFile)&___7FCachedReadPlatformFile__6B_;
      pIVar7 = pIVar8;
    }
    AutoDestroySingleton.Ptr = pIVar7;
    atexit(`FPlatformFileManager::GetPlatformFile'::__l13::
           _dynamic_atexit_destructor_for__AutoDestroySingleton__);
    _Init_thread_footer(&::_TSS2);
    return AutoDestroySingleton.Ptr;
  }
  return AutoDestroySingleton.Ptr;
}

// GetPlatformPhysical @ 1416f9ef0

IPlatformFile * __thiscall FPlatformFileManager::GetPlatformPhysical(FPlatformFileManager *this)

{
  IPlatformFile *pIVar1;
  
  pIVar1 = this->PhysicalPlatformFile;
  if (pIVar1 == (IPlatformFile *)0x0) {
    pIVar1 = IPlatformFile::GetPlatformPhysical();
    this->PhysicalPlatformFile = pIVar1;
  }
  return pIVar1;
}

// InitializeNewAsyncIO @ 1417009d0

void __thiscall FPlatformFileManager::InitializeNewAsyncIO(FPlatformFileManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  IPlatformFile *pIVar5;
  
  if (GEventDrivenLoaderEnabled) {
    if ((this->TopmostPlatformFile == (IPlatformFile *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TopmostPlatformFile != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                           ,0x37,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    for (pIVar5 = this->TopmostPlatformFile; pIVar5 != (IPlatformFile *)0x0;
        pIVar5 = (IPlatformFile *)(**(code **)((longlong)*pIVar5 + 0x60))(pIVar5)) {
      pwVar4 = (wchar_t *)(**(code **)((longlong)*pIVar5 + 0x70))(pIVar5);
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,L"CachedReadFile");
      if (iVar3 == 0) {
        RemovePlatformFile(this,pIVar5);
        break;
      }
    }
  }
  for (pIVar5 = this->TopmostPlatformFile; pIVar5 != (IPlatformFile *)0x0;
      pIVar5 = (IPlatformFile *)(**(code **)((longlong)*pIVar5 + 0x60))(pIVar5)) {
    (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
  }
  return;
}

// InsertPlatformFile @ 141700fe0

bool __thiscall
FPlatformFileManager::InsertPlatformFile(FPlatformFileManager *this,IPlatformFile *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  IPlatformFile *pIVar5;
  longlong lVar6;
  IPlatformFile *pIVar7;
  longlong lVar8;
  
  if ((this->TopmostPlatformFile == (IPlatformFile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TopmostPlatformFile != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x88,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 == (IPlatformFile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewPlatformFile != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x89,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pwVar4 = (wchar_t *)(**(code **)((longlong)*param_1 + 0x70))(param_1);
  pIVar5 = FindPlatformFile(this,pwVar4);
  if ((pIVar5 == (IPlatformFile *)0x0) &&
     (lVar6 = (**(code **)((longlong)*param_1 + 0x60))(param_1), lVar6 != 0)) {
    pIVar5 = this->TopmostPlatformFile;
    pIVar7 = (IPlatformFile *)(**(code **)((longlong)*param_1 + 0x60))(param_1);
    if (pIVar7 == pIVar5) {
      this->TopmostPlatformFile = param_1;
      (**(code **)((longlong)*param_1 + 0x28))(param_1);
      return true;
    }
    for (pIVar5 = this->TopmostPlatformFile; pIVar5 != (IPlatformFile *)0x0;
        pIVar5 = (IPlatformFile *)(**(code **)((longlong)*pIVar5 + 0x60))()) {
      lVar6 = (**(code **)((longlong)*param_1 + 0x60))(param_1);
      lVar8 = (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5);
      if (lVar8 == lVar6) {
        (**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,param_1);
        return true;
      }
    }
  }
  return false;
}

// RemovePlatformFile @ 14170c3c0

void __thiscall
FPlatformFileManager::RemovePlatformFile(FPlatformFileManager *this,IPlatformFile *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IPlatformFile *pIVar1;
  bool bVar2;
  IPlatformFile *pIVar3;
  undefined8 uVar4;
  longlong lVar5;
  IPlatformFile *pIVar6;
  
  if ((this->TopmostPlatformFile == (IPlatformFile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TopmostPlatformFile != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x6f,L""), bVar2)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((param_1 == (IPlatformFile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlatformFileToRemove != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x70,L""), bVar2)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pIVar3 = this->TopmostPlatformFile;
  pIVar6 = (IPlatformFile *)0x0;
  while (pIVar1 = pIVar3, pIVar1 != (IPlatformFile *)0x0) {
    if (pIVar1 == param_1) goto LAB_14170c477;
    pIVar3 = (IPlatformFile *)(**(code **)((longlong)*pIVar1 + 0x60))();
    pIVar6 = pIVar1;
  }
  if ((param_1 != (IPlatformFile *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundElement == PlatformFileToRemove",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x78,L""), bVar2)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_14170c477:
  if (pIVar6 != (IPlatformFile *)0x0) {
    pIVar3 = (IPlatformFile *)(**(code **)((longlong)*pIVar6 + 0x60))(pIVar6);
    if ((pIVar3 != param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("HigherLevelPlatformFile->GetLowerLevel() == PlatformFileToRemove",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                           ,0x7b,L""), bVar2)) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar6 + 0x68);
    uVar4 = (**(code **)((longlong)*param_1 + 0x60))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014170c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar6,uVar4);
    return;
  }
  if ((this->TopmostPlatformFile != param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TopmostPlatformFile == PlatformFileToRemove",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x80,L""), bVar2)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar5 = (**(code **)((longlong)*param_1 + 0x60))(param_1);
  if ((lVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlatformFileToRemove->GetLowerLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\PlatformFileManager.cpp"
                         ,0x81,L""), bVar2)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pIVar6 = (IPlatformFile *)(**(code **)((longlong)*param_1 + 0x60))(param_1);
  this->TopmostPlatformFile = pIVar6;
                    /* WARNING: Could not recover jumptable at 0x00014170c55f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,*(code **)((longlong)*pIVar6 + 0x28));
  return;
}

// SetPlatformFile @ 1417117a0

void __thiscall
FPlatformFileManager::SetPlatformFile(FPlatformFileManager *this,IPlatformFile *param_1)

{
  this->TopmostPlatformFile = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001417117a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x28))(param_1);
  return;
}

// SetPlatformPhysical @ 1417117c0

void __thiscall
FPlatformFileManager::SetPlatformPhysical(FPlatformFileManager *this,IPlatformFile *param_1)

{
  this->PhysicalPlatformFile = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001417117ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x28))(param_1);
  return;
}

// TickActivePlatformFile @ 141715610

void __thiscall FPlatformFileManager::TickActivePlatformFile(FPlatformFileManager *this)

{
  IPlatformFile *pIVar1;
  
  for (pIVar1 = this->TopmostPlatformFile; pIVar1 != (IPlatformFile *)0x0;
      pIVar1 = (IPlatformFile *)(**(code **)((longlong)*pIVar1 + 0x60))(pIVar1)) {
    (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1);
  }
  return;
}

