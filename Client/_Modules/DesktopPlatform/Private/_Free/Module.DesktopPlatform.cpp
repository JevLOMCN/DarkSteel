// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 45

// WorkerReceiptVersion'' @ 140f49f60

void __cdecl `dynamic_initializer_for_'FTargetReceiptBuildWorker::WorkerReceiptVersion__(void)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,L"dab5352e-a5a7-4793-a7a3-1d4acad6aff2");
  bVar1 = FGuid::Parse(&local_18,&FTargetReceiptBuildWorker::WorkerReceiptVersion);
  if (!bVar1) {
    FTargetReceiptBuildWorker::WorkerReceiptVersion.C = 0;
    FTargetReceiptBuildWorker::WorkerReceiptVersion.D = 0;
    FTargetReceiptBuildWorker::WorkerReceiptVersion.A = 0;
    FTargetReceiptBuildWorker::WorkerReceiptVersion.B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'LogDesktopPlatform'' @ 140f49fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDesktopPlatform__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDesktopPlatform,L"LogDesktopPlatform",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDesktopPlatform__);
  return;
}

// `dynamic_initializer_for_'LogDesktopPlatformNull'' @ 140f4a000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDesktopPlatformNull__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDesktopPlatformNull,L"LogDesktopPlatformNull",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDesktopPlatformNull__);
  return;
}

// `dynamic_initializer_for_'LogInstalledPlatforms'' @ 140f4a040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInstalledPlatforms__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInstalledPlatforms,L"LogInstalledPlatforms",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInstalledPlatforms__);
  return;
}

// `dynamic_initializer_for_'LogTargetReceiptBuildWorker'' @ 140f4a080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTargetReceiptBuildWorker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTargetReceiptBuildWorker,L"LogTargetReceiptBuildWorker",Log,All
            );
  atexit(_dynamic_atexit_destructor_for__LogTargetReceiptBuildWorker__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantDesktopPlatform'' @ 140f4a0c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantDesktopPlatform__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "DesktopPlatform";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"DesktopPlatform",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDesktopPlatformModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 142d1a1d0

void * __thiscall
FDesktopPlatformModule::_scalar_deleting_destructor_(FDesktopPlatformModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// DefaultConstructItems<TTuple<FIoHash,unsigned___int64>,int> @ 142d1a410

void __cdecl DefaultConstructItems<TTuple<FIoHash,unsigned___int64>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FTargetInfo,int> @ 142d1a440

void __cdecl DefaultConstructItems<FTargetInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined1 *)(lVar1 + 0x16) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<_COMDLG_FILTERSPEC,int> @ 142d1a480

void __cdecl DefaultConstructItems<_COMDLG_FILTERSPEC,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<TTuple<FString,FGuid>,int> @ 142d1a490

void __cdecl DestructItems<TTuple<FString,FGuid>,int>(TTuple<FString,FGuid> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FBuildProduct,int> @ 142d1a4d0

void __cdecl DestructItems<FBuildProduct,int>(FBuildProduct *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Type).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FInstalledPlatformConfiguration,int> @ 142d1a520

void __cdecl
DestructItems<FInstalledPlatformConfiguration,int>
          (FInstalledPlatformConfiguration *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Architecture;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FInstalledPlatformConfiguration *)(pFVar2 + -2))->PlatformName).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FReceiptProperty,int> @ 142d1a580

void __cdecl DestructItems<FReceiptProperty,int>(FReceiptProperty *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRuntimeDependency,int> @ 142d1a5d0

void __cdecl DestructItems<FRuntimeDependency,int>(FRuntimeDependency *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Type).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTargetInfo,int> @ 142d1a620

void __cdecl DestructItems<FTargetInfo,int>(FTargetInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTargetReceiptBuildWorker::FWorkerPath,int> @ 142d1a670

void __cdecl
DestructItems<FTargetReceiptBuildWorker::FWorkerPath,int>(FWorkerPath *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->RemotePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->LocalPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// IID_PPV_ARGS_Helper<IFileDialog> @ 142d1b8b0

void ** __cdecl IID_PPV_ARGS_Helper<IFileDialog>(IFileDialog **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IFileOpenDialog> @ 142d1b8c0

void ** __cdecl IID_PPV_ARGS_Helper<IFileOpenDialog>(IFileOpenDialog **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IShellItem> @ 142d1b8d0

void ** __cdecl IID_PPV_ARGS_Helper<IShellItem>(IShellItem **param_1)

{
  return param_1;
}

// IntCastChecked<unsigned_short,unsigned___int64> @ 142d1b8e0

ushort __cdecl IntCastChecked<unsigned_short,unsigned___int64>(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (param_1 != (param_1 & 0xffff)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ushort)param_1;
}

// `scalar_deleting_destructor' @ 142d1d370

void * __thiscall
FDesktopPlatformBase::_scalar_deleting_destructor_(FDesktopPlatformBase *this,uint param_1)

{
  ~FDesktopPlatformBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d1d3b0

void * __thiscall
FDesktopPlatformNull::_scalar_deleting_destructor_(FDesktopPlatformNull *this,uint param_1)

{
  *(undefined ***)this = &___7FDesktopPlatformNull__6B_;
  FDesktopPlatformBase::~FDesktopPlatformBase((FDesktopPlatformBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d1d400

void * __thiscall
FDesktopPlatformWindows::_scalar_deleting_destructor_(FDesktopPlatformWindows *this,uint param_1)

{
  FDesktopPlatformBase::~FDesktopPlatformBase((FDesktopPlatformBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d1d440

void * __thiscall
FTargetFileVisitor::_scalar_deleting_destructor_(FTargetFileVisitor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->SubDirectories).AllocatorInstance.Data,
             (this->SubDirectories).ArrayNum);
  pFVar1 = (this->SubDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d1d4a0

void * __thiscall
FTargetReceiptBuildWorker::_scalar_deleting_destructor_
          (FTargetReceiptBuildWorker *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FBaseGraphTask *pFVar5;
  
  this->_padding_ = (longlong)&___7FTargetReceiptBuildWorker__6B_;
  DestructItems<TTuple<FString,FGuid>,int>
            ((TTuple<FString,FGuid> *)(this->FunctionVersions).AllocatorInstance.Data,
             (this->FunctionVersions).ArrayNum);
  pFVar3 = (this->FunctionVersions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ExecutableMeta).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FTargetReceiptBuildWorker::FWorkerPath,int>
            ((FWorkerPath *)(this->ExecutablePaths).AllocatorInstance.Data,
             (this->ExecutablePaths).ArrayNum);
  pFVar3 = (this->ExecutablePaths).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->EnvironmentVariables).field_0x48 = 0;
  pvVar4 = *(void **)&(this->EnvironmentVariables).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnvironmentVariables);
  pFVar3 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar5 = (this->PopulateTaskRef).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d1d5a0

void * __thiscall
FWindowsNativeFeedbackContext::_scalar_deleting_destructor_
          (FWindowsNativeFeedbackContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWindowsNativeFeedbackContext__6B_;
  DestroySlowTaskWindow(this);
  pFVar1 = (this->LogOutput).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Status).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d1d620

void * __thiscall
IDesktopPlatform::_scalar_deleting_destructor_(IDesktopPlatform *this,uint param_1)

{
  *this = (IDesktopPlatform)&___7IDesktopPlatform__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EProjectTypeFromString @ 142d1eda0

EProjectType __cdecl EProjectTypeFromString(FString *param_1)

{
  int iVar1;
  EProjectType EVar2;
  wchar_t *pwVar3;
  wchar_t *_Str1;
  
  _Str1 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar3,L"Any");
  if (iVar1 == 0) {
    return Any;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(pwVar3,L"Code");
  if (iVar1 == 0) {
    return Code;
  }
  if ((param_1->Data).ArrayNum != 0) {
    _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(_Str1,L"Content");
  EVar2 = Unknown;
  if (iVar1 == 0) {
    EVar2 = Content;
  }
  return EVar2;
}

// EnumerateRegistryKeys @ 142d20e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d20f61) */

bool __cdecl
EnumerateRegistryKeys(HKEY__ *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  DWORD dwIndex;
  undefined1 auStackY_298 [32];
  DWORD local_248 [2];
  FString local_240;
  WCHAR local_228 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  dwIndex = 0;
  local_248[0] = 0x100;
  iVar4 = RegEnumKeyExW((HKEY)param_1,0,local_228,local_248,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                        (PFILETIME)0x0);
  while( true ) {
    if (iVar4 == 0x103) {
      return true;
    }
    if (iVar4 != 0) break;
    FString::FString(&local_240,local_228);
    pFVar5 = (param_2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_240) &&
        ((FScriptContainerElement *)&local_240 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar4;
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_240.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_240.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_240.Data.ArrayMax;
    local_240.Data.ArrayNum = 0;
    local_240.Data.ArrayMax = 0;
    local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    dwIndex = dwIndex + 1;
    local_248[0] = 0x100;
    iVar4 = RegEnumKeyExW((HKEY)param_1,dwIndex,local_228,local_248,(LPDWORD)0x0,(LPWSTR)0x0,
                          (LPDWORD)0x0,(PFILETIME)0x0);
  }
  return false;
}

// EnumerateRegistryValues @ 142d20fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d21131) */

bool __cdecl
EnumerateRegistryValues(HKEY__ *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  DWORD dwIndex;
  undefined1 auStackY_298 [32];
  DWORD local_248 [2];
  FString local_240;
  WCHAR local_228 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  dwIndex = 0;
  local_248[0] = 0x100;
  iVar4 = RegEnumValueW((HKEY)param_1,0,local_228,local_248,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                        (LPDWORD)0x0);
  while( true ) {
    if (iVar4 == 0x103) {
      return true;
    }
    if (iVar4 != 0) break;
    FString::FString(&local_240,local_228);
    pFVar5 = (param_2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_240) &&
        ((FScriptContainerElement *)&local_240 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar4;
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_240.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_240.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_240.Data.ArrayMax;
    local_240.Data.ArrayNum = 0;
    local_240.Data.ArrayMax = 0;
    local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    dwIndex = dwIndex + 1;
    local_248[0] = 0x100;
    iVar4 = RegEnumValueW((HKEY)param_1,dwIndex,local_228,local_248,(LPDWORD)0x0,(LPDWORD)0x0,
                          (LPBYTE)0x0,(LPDWORD)0x0);
  }
  return false;
}

// IsTargetInfoValid @ 142d28fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
IsTargetInfoValid(TArray<FTargetInfo,TSizedDefaultAllocator<32>_> *param_1,
                 TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FDateTime *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  code *pcVar3;
  void *pvVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [7];
  FString local_1e0;
  FString local_1d0;
  IFileManager *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined **local_1a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_1a0;
  undefined1 *local_198;
  long64 local_190;
  TArray<FString,TSizedDefaultAllocator<32>_> local_188;
  undefined2 local_178;
  char local_176;
  undefined1 local_170 [16];
  undefined1 *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined1 *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar21 = -1 < CpuChannel->Enabled;
  local_170._8_8_ = param_3;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1409,"IsTargetInfoValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\DesktopPlatformBase.cpp"
               ,0x581);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1409);
  }
  iVar9 = FApp::GetEngineIsPromotedBuild();
  if (iVar9 == 0) {
    iVar9 = param_1->ArrayNum;
    pFVar16 = (param_1->AllocatorInstance).Data;
    local_d8._0_8_ = 0;
    local_d8._8_8_ = 0;
    local_b8 = (uint *)0x0;
    pFVar14 = pFVar16 + (longlong)iVar9 * 0x28;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar9) {
        local_1e8 = 0;
        `TCheckedPointerIterator<FTargetInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1e8);
      }
      if (pFVar16 == pFVar14) break;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8,
                 (FString *)local_170,(bool *)pFVar16);
      pFVar16 = pFVar16 + 0x28;
    }
    uVar19 = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_88.Elements._48_4_ = 0xffffffff;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&local_88,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8);
    local_1c0 = IFileManager::Get();
    iVar9 = param_2->ArrayNum;
    piVar2 = &param_2->ArrayNum;
    if (0 < iVar9) {
      local_1b8 = 0;
      local_1b0 = 0;
      do {
        lVar12 = local_1b0;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8 = &___7FTargetFileVisitor__6B_;
        local_1a0 = &local_88;
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        uVar20 = ~uVar19 >> 0x1f;
        local_198 = local_d8;
        local_178 = 1;
        local_176 = '\0';
        local_190 = *(long64 *)local_170._8_8_;
        pcVar3 = *(code **)((longlong)*local_1c0 + 0xb8);
        uVar11 = 0;
        if ((int)uVar19 < iVar9) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar14 = (param_2->AllocatorInstance).Data;
        if (*(int *)(pFVar14 + lVar12 + 8) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)(pFVar14 + lVar12);
        }
        (*pcVar3)(local_1c0,pwVar13,&local_1a8);
        if (local_176 != '\0') {
          DestructItems<FString,int>((FString *)local_188.AllocatorInstance.Data,local_188.ArrayNum)
          ;
          if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.AllocatorInstance.Data);
          }
          bVar6 = false;
          goto LAB_142d29817;
        }
        if (local_d8._8_4_ == local_a4) {
          DestructItems<FString,int>((FString *)local_188.AllocatorInstance.Data,local_188.ArrayNum)
          ;
          if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.AllocatorInstance.Data);
          }
          local_1a8 = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
          break;
        }
        if (local_178._1_1_ != '\0') {
          uVar11 = 0;
          if ((int)uVar19 < *piVar2) {
            uVar11 = uVar20;
          }
          if ((uVar11 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pFVar14 = (param_2->AllocatorInstance).Data;
          local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = *(int *)(pFVar14 + lVar12 + 8);
          pvVar4 = *(void **)(pFVar14 + lVar12);
          local_1d0.Data.ArrayNum = iVar9;
          uVar11 = iVar9 + 7 + (uint)(*(int *)(pFVar14 + lVar12 + 8) == 0);
          if ((int)uVar11 < iVar9) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar11,0,(ForAnyElementType *)&local_1d0,iVar9,&local_1d0.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_1d0.Data.AllocatorInstance.Data,pvVar4,(longlong)iVar9 * 2);
          }
          FString::PathAppend(&local_1d0,L"Source",6);
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_1d0.Data.ArrayNum != 0) {
            FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*local_1c0 + 0x58))(local_1c0,FVar15.Data);
          if (cVar8 != '\0') {
            iVar9 = *piVar2;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            *piVar2 = iVar9 + 1;
            pFVar14 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_1d0.Data.AllocatorInstance.Data;
            local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar14 + 8) = local_1d0.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_1d0.Data.ArrayMax;
            local_1d0.Data.ArrayNum = 0;
            local_1d0.Data.ArrayMax = 0;
          }
          uVar11 = 0;
          if ((int)uVar19 < *piVar2) {
            uVar11 = uVar20;
          }
          if ((uVar11 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pFVar14 = (param_2->AllocatorInstance).Data + local_1b0;
          local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar9 = *(int *)(pFVar14 + 8);
          pvVar4 = *(void **)pFVar14;
          local_1e0.Data.ArrayNum = iVar9;
          uVar11 = iVar9 + 6 + (uint)(*(int *)(pFVar14 + 8) == 0);
          if ((int)uVar11 < iVar9) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar11,0,(ForAnyElementType *)&local_1e0,iVar9,&local_1e0.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_1e0.Data.AllocatorInstance.Data,pvVar4,(longlong)iVar9 * 2);
          }
          FString::PathAppend(&local_1e0,L"Tests",5);
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_1e0.Data.ArrayNum != 0) {
            FVar15.Data = local_1e0.Data.AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*local_1c0 + 0x58))(local_1c0,FVar15.Data);
          if (cVar8 != '\0') {
            iVar9 = *piVar2;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            *piVar2 = iVar9 + 1;
            pFVar14 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_1e0.Data.AllocatorInstance.Data;
            local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar14 + 8) = local_1e0.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_1e0.Data.ArrayMax;
            local_1e0.Data.ArrayNum = 0;
            local_1e0.Data.ArrayMax = 0;
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          lVar12 = local_1b0;
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            lVar12 = local_1b0;
          }
        }
        if ((char)local_178 == '\0') {
          iVar9 = local_188.ArrayNum;
        }
        else {
          if ((param_2 == &local_188) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar17 = (longlong)local_188.ArrayNum;
          iVar9 = 0;
          if (local_188.ArrayNum != 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,local_188.ArrayNum,&param_2->AllocatorInstance,piVar2,
                               &param_2->ArrayMax);
            memmove((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
                    local_188.AllocatorInstance.Data,lVar17 << 4);
            local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
            iVar9 = 0;
          }
        }
        DestructItems<FString,int>((FString *)local_188.AllocatorInstance.Data,iVar9);
        if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.AllocatorInstance.Data);
        }
        local_1b8 = local_1b8 + 1;
        local_1b0 = lVar12 + 0x10;
        iVar9 = *piVar2;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar9);
    }
    uVar19 = local_b0;
    uStack_158 = 0;
    uStack_154 = 1;
    uStack_144 = uStack_158;
    local_140 = uStack_158;
    if (local_b0 != 0) {
      puVar18 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar18 = local_b8;
      }
      uVar11 = *puVar18;
      while (uVar11 == 0) {
        lVar12 = (longlong)(int)uStack_158;
        local_140 = local_140 + 0x20;
        uStack_158 = uStack_158 + 1;
        uStack_144 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_158)
        goto LAB_142d29660;
        uVar11 = (puVar18 + 1)[lVar12];
      }
      uStack_154 = -uVar11 & uVar11;
      uVar1 = (ulonglong)uStack_154 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_170._4_4_ = (undefined4)lVar12;
      uStack_144 = local_170._4_4_ + -1 + local_140;
      if ((int)local_b0 < (int)uStack_144) {
        uStack_144 = local_b0;
      }
    }
LAB_142d29660:
    local_160 = local_d8;
    uStack_13c = local_e4;
    local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    iStack_138 = local_d8._8_4_ - local_a4;
    uVar11 = local_b0 & 0xffffffe0;
    uStack_148 = 0xffffffff;
    TStack_128.CurrentBitIndex = uStack_144;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    TStack_128._padding_ = CONCAT44(uStack_154,uStack_158);
    iVar9 = (int)local_b0 >> 5;
    TStack_128._28_4_ = local_e4;
    TStack_128.BaseBitIndex = local_140;
    uStack_108 = CONCAT44(uStack_134,iStack_138);
    bVar10 = (byte)local_b0;
    local_130 = local_160;
    TStack_128.Array = local_150;
    if (((int)local_b0 < 0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (uVar19 != local_b0) {
      puVar18 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar18 = local_b8;
      }
      uVar19 = -1 << (bVar10 & 0x1f) & puVar18[iVar9];
      while (uVar19 == 0) {
        lVar12 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar19 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_142d29760;
        uVar19 = (puVar18 + 1)[lVar12];
      }
      uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar19 = (uVar11 - 1) + (int)lVar12;
      if ((int)local_b0 < (int)uVar19) {
        uVar19 = local_b0;
      }
    }
LAB_142d29760:
    while( true ) {
      puVar5 = local_130;
      if (*(int *)(local_130 + 8) - *(int *)(local_130 + 0x34) != (int)uStack_108) {
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
      }
      if (((TStack_128.CurrentBitIndex == uVar19) &&
          (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (puVar5 == local_d8)) break;
      if (4 < (byte)LogDesktopPlatform._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
      }
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
    }
    bVar6 = local_d8._8_4_ == local_a4;
LAB_142d29817:
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
  }
  else {
    bVar6 = true;
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// TryParseBuildVersion @ 142d351f0

bool __cdecl TryParseBuildVersion(FJsonObject *param_1,FBuildVersion *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0xc;
  local_18.DataPtr = L"MajorVersion";
  bVar1 = FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->MajorVersion);
  if (bVar1) {
    local_18.Size = 0xc;
    local_18.DataPtr = L"MinorVersion";
    bVar1 = FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->MinorVersion);
    if (bVar1) {
      local_18.Size = 0xc;
      local_18.DataPtr = L"PatchVersion";
      bVar1 = FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->PatchVersion);
      if (bVar1) {
        local_18.Size = 10;
        local_18.DataPtr = L"Changelist";
        FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->Changelist);
        local_18.Size = 0x14;
        local_18.DataPtr = L"CompatibleChangelist";
        FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->CompatibleChangelist);
        local_18.Size = 0x11;
        local_18.DataPtr = L"IsLicenseeVersion";
        FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->IsLicenseeVersion);
        local_18.Size = 0xf;
        local_18.DataPtr = L"IsPromotedBuild";
        FJsonObject::TryGetNumberField(param_1,&local_18,&param_2->IsPromotedBuild);
        local_18.Size = 10;
        local_18.DataPtr = L"BranchName";
        FJsonObject::TryGetStringField(param_1,&local_18,&param_2->BranchName);
        local_18.Size = 7;
        local_18.DataPtr = L"BuildId";
        FJsonObject::TryGetStringField(param_1,&local_18,&param_2->BuildId);
        local_18.Size = 0xc;
        local_18.DataPtr = L"BuildVersion";
        FJsonObject::TryGetStringField(param_1,&local_18,&param_2->BuildVersion);
        return true;
      }
    }
  }
  return false;
}

// TryReadMsBuildInstallPath @ 142d35860

bool __cdecl
TryReadMsBuildInstallPath
          (HKEY__ *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,FString *param_5)

{
  ForAnyElementType _Src;
  int iVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = FWindowsPlatformMisc::QueryRegKey(param_1,param_2,param_3,&local_18);
  if (bVar2) {
    sVar4 = wcslen(param_4);
    _Src.Data = local_18.Data.AllocatorInstance.Data;
    iVar1 = local_18.Data.ArrayNum;
    lVar5 = (longlong)local_18.Data.ArrayNum;
    iVar7 = (int)sVar4;
    if ((local_18.Data.ArrayNum != 0) || (iVar3 = 2, iVar7 == -1)) {
      iVar3 = 1;
    }
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = local_18.Data.ArrayNum;
    if ((local_18.Data.ArrayNum == 0) && (iVar3 + iVar7 == 0)) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      uVar6 = local_18.Data.ArrayNum + iVar3 + iVar7;
      if ((int)uVar6 < local_18.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6,0,(ForAnyElementType *)&local_28,local_18.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_28.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
      }
    }
    FString::PathAppend(&local_28,param_4,iVar7);
    bVar2 = FPaths::FileExists(&local_28);
    if (bVar2) {
      iVar7 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      FString::AssignRange(param_5,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar7);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = false;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// TryReadMsBuildInstallPath @ 142d359c0

bool __cdecl
TryReadMsBuildInstallPath(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,FString *param_4)

{
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  FString local_38;
  FString local_28;
  
  pFVar2 = FString::FString(&local_28,"SOFTWARE\\");
  FString::ConcatFC(&local_38,pFVar2,param_1);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  bVar1 = TryReadMsBuildInstallPath
                    ((HKEY__ *)0xffffffff80000001,(wchar_t *)FVar3.Data,param_2,param_3,param_4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    pFVar2 = FString::FString(&local_28,"SOFTWARE\\");
    FString::ConcatFC(&local_38,pFVar2,param_1);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = TryReadMsBuildInstallPath
                      ((HKEY__ *)&DAT_ffffffff80000002,(wchar_t *)FVar3.Data,param_2,param_3,param_4
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (!bVar1) {
      pFVar2 = FString::FString(&local_28,"SOFTWARE\\Wow6432Node\\");
      FString::ConcatFC(&local_38,pFVar2,param_1);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar3.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar1 = TryReadMsBuildInstallPath
                        ((HKEY__ *)0xffffffff80000001,(wchar_t *)FVar3.Data,param_2,param_3,param_4)
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar1) {
        pFVar2 = FString::FString(&local_28,"SOFTWARE\\Wow6432Node\\");
        FString::ConcatFC(&local_38,pFVar2,param_1);
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar3.Data = local_38.Data.AllocatorInstance.Data;
        }
        bVar1 = TryReadMsBuildInstallPath
                          ((HKEY__ *)&DAT_ffffffff80000002,(wchar_t *)FVar3.Data,param_2,param_3,
                           param_4);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar1;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return bVar1;
      }
    }
  }
  return true;
}

// IMPLEMENT_MODULE_DesktopPlatform @ 142d36db0

void __cdecl IMPLEMENT_MODULE_DesktopPlatform(void)

{
  return;
}

// fprintf @ 142d36dc0

int __cdecl fprintf(_iobuf *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vfprintf(*puVar2,param_1,param_2,0,local_res18);
  return iVar1;
}

// `dynamic_atexit_destructor_for_'EngineDirPrefix'' @ 15035f390

void __cdecl
`FTargetReceipt::ExpandVariables'::__l2::_dynamic_atexit_destructor_for__EngineDirPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EngineDirPrefix.Data.AllocatorInstance.Data;
  if (EngineDirPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EngineDirPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FeedbackContext'' @ 15035f3b0

void __cdecl
`FDesktopPlatformWindows::GetNativeFeedbackContext'::__l2::
_dynamic_atexit_destructor_for__FeedbackContext__(void)

{
  FeedbackContext._padding_ = (longlong)&___7FWindowsNativeFeedbackContext__6B_;
  FWindowsNativeFeedbackContext::DestroySlowTaskWindow(&FeedbackContext);
  if (FeedbackContext.LogOutput.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FeedbackContext.LogOutput.Data.AllocatorInstance.Data);
  }
  if (FeedbackContext.Status.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FeedbackContext.Status.Data.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&FeedbackContext.CriticalSection);
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)&FeedbackContext);
  return;
}

// `dynamic_atexit_destructor_for_'InfoSingleton'' @ 15035f420

void __cdecl
`FInstalledPlatformInfo::Get'::__l2::_dynamic_atexit_destructor_for__InfoSingleton__(void)

{
  DestructItems<FInstalledPlatformConfiguration,int>
            ((FInstalledPlatformConfiguration *)
             InfoSingleton.InstalledPlatformConfigurations.AllocatorInstance.Data,
             InfoSingleton.InstalledPlatformConfigurations.ArrayNum);
  if (InfoSingleton.InstalledPlatformConfigurations.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(InfoSingleton.InstalledPlatformConfigurations.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogDesktopPlatform'' @ 15035f460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDesktopPlatform__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDesktopPlatform);
  return;
}

// `dynamic_atexit_destructor_for_'LogDesktopPlatformNull'' @ 15035f480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDesktopPlatformNull__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDesktopPlatformNull);
  return;
}

// `dynamic_atexit_destructor_for_'LogInstalledPlatforms'' @ 15035f4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInstalledPlatforms__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInstalledPlatforms);
  return;
}

// `dynamic_atexit_destructor_for_'LogTargetReceiptBuildWorker'' @ 15035f4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTargetReceiptBuildWorker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTargetReceiptBuildWorker);
  return;
}

// `dynamic_atexit_destructor_for_'ProjectDirPrefix'' @ 15035f4e0

void __cdecl
`FTargetReceipt::ExpandVariables'::__l2::_dynamic_atexit_destructor_for__ProjectDirPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProjectDirPrefix.Data.AllocatorInstance.Data;
  if (ProjectDirPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProjectDirPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

