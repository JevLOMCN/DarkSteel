// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 45

// FModuleManager @ 141916f80

FModuleManager * __thiscall
FModuleManager::FModuleManager(FModuleManager *this,FPrivateToken param_1)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *pFVar3;
  
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this);
  this->_padding_ = (longlong)&___7FModuleManager__6B_;
  *(undefined8 *)&this->Modules = 0;
  *(undefined8 *)&(this->Modules).field_0x8 = 0;
  *(undefined8 *)&(this->Modules).field_0x20 = 0;
  *(undefined4 *)&(this->Modules).field_0x28 = 0;
  *(undefined4 *)&(this->Modules).field_0x2c = 0x80;
  *(undefined4 *)&(this->Modules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Modules).field_0x34 = 0;
  *(undefined8 *)&(this->Modules).field_0x40 = 0;
  *(undefined4 *)&(this->Modules).field_0x48 = 0;
  (this->PendingStaticallyLinkedModuleInitializers).AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
        )0x0;
  (this->PendingStaticallyLinkedModuleInitializers).ArrayNum = 0;
  (this->PendingStaticallyLinkedModuleInitializers).ArrayMax = 0x10;
  *(undefined8 *)&this->StaticallyLinkedModuleInitializers = 0;
  *(undefined8 *)&(this->StaticallyLinkedModuleInitializers).field_0x8 = 0;
  *(undefined8 *)&(this->StaticallyLinkedModuleInitializers).field_0x20 = 0;
  *(undefined4 *)&(this->StaticallyLinkedModuleInitializers).field_0x28 = 0;
  *(undefined4 *)&(this->StaticallyLinkedModuleInitializers).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticallyLinkedModuleInitializers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticallyLinkedModuleInitializers).field_0x34 = 0;
  *(undefined8 *)&(this->StaticallyLinkedModuleInitializers).field_0x40 = 0;
  *(undefined4 *)&(this->StaticallyLinkedModuleInitializers).field_0x48 = 0;
  this->bCanProcessNewlyLoadedObjects = false;
  this->bExtraBinarySearchPathsAdded = false;
  this->bIsLoadingDynamicLibrary = false;
  *(undefined8 *)&this->ModulePathsCache = 0;
  *(undefined8 *)&(this->ModulePathsCache).field_0x8 = 0;
  *(undefined8 *)&(this->ModulePathsCache).field_0x20 = 0;
  *(undefined4 *)&(this->ModulePathsCache).field_0x28 = 0;
  *(undefined4 *)&(this->ModulePathsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModulePathsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModulePathsCache).field_0x34 = 0;
  *(undefined8 *)&(this->ModulePathsCache).field_0x40 = 0;
  *(undefined4 *)&(this->ModulePathsCache).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ModulesChangedEvent,4000);
  *(undefined8 *)&(this->ModulesChangedEvent).field_0x28 = 0;
  *(undefined8 *)&(this->ModulesChangedEvent).field_0x30 = 0;
  *(undefined8 *)&(this->ModulesChangedEvent).field_0x38 = 2;
  *(undefined8 *)&this->ProcessLoadedObjectsCallback = 0;
  *(undefined8 *)&(this->ProcessLoadedObjectsCallback).field_0x8 = 0;
  *(undefined8 *)&(this->ProcessLoadedObjectsCallback).field_0x10 = 0;
  *(undefined8 *)&(this->ProcessLoadedObjectsCallback).field_0x18 = 2;
  *(undefined8 *)&this->OnModulesUnloadCallback = 0;
  *(undefined8 *)&(this->OnModulesUnloadCallback).field_0x8 = 0;
  *(undefined8 *)&(this->OnModulesUnloadCallback).field_0x10 = 0;
  *(undefined8 *)&(this->OnModulesUnloadCallback).field_0x18 = 2;
  *(undefined8 *)&this->CheckLiveObjectsInModulesCallback = 0;
  *(undefined8 *)&(this->CheckLiveObjectsInModulesCallback).field_0x8 = 0;
  *(undefined4 *)&(this->CheckLiveObjectsInModulesCallback).field_0x10 = 0;
  *(undefined8 *)&this->IsPackageLoaded = 0;
  *(undefined8 *)&(this->IsPackageLoaded).field_0x8 = 0;
  *(undefined4 *)&(this->IsPackageLoaded).field_0x10 = 0;
  (this->EngineBinariesDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineBinariesDirectories).ArrayNum = 0;
  (this->EngineBinariesDirectories).ArrayMax = 0;
  (this->PendingEngineBinariesDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingEngineBinariesDirectories).ArrayNum = 0;
  (this->PendingEngineBinariesDirectories).ArrayMax = 0;
  (this->GameBinariesDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameBinariesDirectories).ArrayNum = 0;
  (this->GameBinariesDirectories).ArrayMax = 0;
  (this->PendingGameBinariesDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingGameBinariesDirectories).ArrayNum = 0;
  (this->PendingGameBinariesDirectories).ArrayMax = 0;
  (this->BuildId).field0_0x0.TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  *(undefined4 *)((longlong)&(this->BuildId).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->BuildId).field0_0x0 + 0xc) = 0xffffffff;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ModulesCriticalSection,4000);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FModuleManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FModuleManager @ 14191bd60

void __thiscall FModuleManager::~FModuleManager(FModuleManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
  FVar3;
  
  this->_padding_ = (longlong)&___7FModuleManager__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ModulesCriticalSection);
  if ((*(int *)((longlong)&(this->BuildId).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->BuildId).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PendingGameBinariesDirectories).AllocatorInstance.Data,
             (this->PendingGameBinariesDirectories).ArrayNum);
  pFVar1 = (this->PendingGameBinariesDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->GameBinariesDirectories).AllocatorInstance.Data,
             (this->GameBinariesDirectories).ArrayNum);
  pFVar1 = (this->GameBinariesDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PendingEngineBinariesDirectories).AllocatorInstance.Data,
             (this->PendingEngineBinariesDirectories).ArrayNum);
  pFVar1 = (this->PendingEngineBinariesDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EngineBinariesDirectories).AllocatorInstance.Data,
             (this->EngineBinariesDirectories).ArrayNum);
  pFVar1 = (this->EngineBinariesDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsPackageLoaded);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CheckLiveObjectsInModulesCallback);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnModulesUnloadCallback).field_0x8,
             *(int *)&(this->OnModulesUnloadCallback).field_0x10);
  pvVar2 = *(void **)&(this->OnModulesUnloadCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnModulesUnloadCallback);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ProcessLoadedObjectsCallback).field_0x8,
             *(int *)&(this->ProcessLoadedObjectsCallback).field_0x10);
  pvVar2 = *(void **)&(this->ProcessLoadedObjectsCallback).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ProcessLoadedObjectsCallback);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ModulesChangedEvent).field_0x28,
             *(int *)&(this->ModulesChangedEvent).field_0x30);
  pvVar2 = *(void **)&(this->ModulesChangedEvent).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ModulesChangedEvent);
  *(undefined4 *)&(this->ModulePathsCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModulePathsCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModulePathsCache);
  *(undefined4 *)&(this->StaticallyLinkedModuleInitializers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StaticallyLinkedModuleInitializers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticallyLinkedModuleInitializers);
  FVar3 = (this->PendingStaticallyLinkedModuleInitializers).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                )0x0) {
    FVar3 = (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
             )&this->PendingStaticallyLinkedModuleInitializers;
  }
  DestructItems<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,int>
            ((TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>
              *)FVar3,(this->PendingStaticallyLinkedModuleInitializers).ArrayNum);
  FVar3 = (this->PendingStaticallyLinkedModuleInitializers).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  *(undefined4 *)&(this->Modules).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Modules).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Modules);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  return;
}

// operator() @ 141920e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FModuleManager::LoadModuleWithFailureReason'::__l2::<lambda_2>::operator()
          (void *this,
          TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  short sVar1;
  undefined8 *puVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  FString *pFVar14;
  uchar *puVar15;
  size_t sVar16;
  ulonglong uVar17;
  ulong64 uVar18;
  FWriteBuffer *pFVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  wchar_t *pwVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong _Size;
  longlong lVar27;
  FName *this_00;
  undefined1 auStack_538 [32];
  longlong local_518;
  longlong local_510;
  char local_508;
  undefined1 local_507;
  longlong *local_500;
  FName *local_4f8;
  FDestructionSentinel local_4f0;
  longlong local_4d8;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FReadAccessScope local_4a0;
  FScopedBootTiming local_488;
  TLogScope<1> local_470;
  FRequestGroupScope local_458;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_538;
  local_500 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_4a0);
  plVar25 = (longlong *)0x0;
  uVar24 = 0;
  plVar20 = plVar25;
  if (*(int *)&param_1->field_0x10 != 0) {
    plVar20 = *(longlong **)&param_1->field_0x8;
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar20 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_4a0);
  plVar20 = (longlong *)(**(longlong **)((longlong)this + 0x18) + 0x28);
  if (plVar20 == &local_4d8) {
    if (puVar12 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)*puVar12;
      goto LAB_141920ed6;
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar20;
    *plVar20 = (longlong)puVar12;
    if (puVar2 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)*puVar2;
      puVar12 = puVar2;
LAB_141920ed6:
      (*(code *)*puVar13)(puVar12,1);
    }
  }
  if (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x28) == 0) {
    if ((2 < (byte)LogModuleManager._0_1_) && ((*(byte *)((longlong)this + 0x10) & 1) != 0)) {
      ::FName::ToString((FName *)((longlong)this + 8),&local_4b0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
    }
    **(undefined4 **)((longlong)this + 0x28) = 4;
    return;
  }
  this_00 = (FName *)((longlong)this + 8);
  local_4f8 = this_00;
  FScopedBootTiming::FScopedBootTiming(&local_488,"LoadModule  - ",*(FName *)((longlong)this + 8));
  pFVar14 = ::FName::ToString(this_00,&local_4d0);
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar23 = L"";
LAB_1419210ac:
    local_458.FormatArgsSize = 0;
    local_458.FormatString = L"LoadModule - %s";
    sVar16 = wcslen(pwVar23);
    iVar11 = (int)sVar16 * 2 + 2;
    if (0xffff < iVar11) {
      iVar11 = 0xffff;
    }
    uVar21 = (longlong)iVar11 + 2;
    if (0x400 < uVar21) {
      uVar21 = 0;
      goto LAB_141920fa5;
    }
    local_458.FormatArgsBuffer[0] = '\x01';
    local_458.FormatArgsBuffer[1] = 0xc2;
    if ((FScriptContainerElement *)pwVar23 == (FScriptContainerElement *)0x0) goto LAB_141920f6f;
    sVar16 = wcslen(pwVar23);
    uVar22 = (int)sVar16 * 2 + 2;
    uVar17 = (ulonglong)uVar22;
    if (0xffff < (int)uVar22) {
      uVar17 = 0xffff;
    }
    _Size = uVar17 & 0xffff;
    memcpy(local_458.FormatArgsBuffer + 2,pwVar23,_Size);
    if ((short)uVar17 == -1) {
      local_470._0_4_ = 0x2e002e;
      local_470._4_4_ = 0x2e;
      *(undefined8 *)((longlong)&local_458 + (_Size - ((uint)_Size & 1)) + 4) = 0x2e002e002e;
    }
    puVar15 = local_458.FormatArgsBuffer + _Size + 2;
  }
  else {
    pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    local_458.FormatString = L"LoadModule - %s";
    local_458.FormatArgsSize = 0;
    if ((FScriptContainerElement *)pwVar23 != (FScriptContainerElement *)0x0) goto LAB_1419210ac;
    uVar21 = 4;
LAB_141920f6f:
    local_458.FormatArgsBuffer[0] = '\x01';
    local_458.FormatArgsBuffer[1] = 0xc2;
    local_458.FormatArgsBuffer[2] = '\0';
    local_458.FormatArgsBuffer[3] = '\0';
    puVar15 = local_458.FormatArgsBuffer + 4;
  }
  if (((longlong)puVar15 - (longlong)local_458.FormatArgsBuffer != uVar21) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadBufferPtr - Buffer == FormatArgsSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                         ,0x44,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_141920fa5:
  local_458.FormatArgsSize = (ushort)uVar21;
  FLoadTimeProfilerTrace::FRequestGroupScope::OutputBegin(&local_458);
  if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
  }
  LOCK();
  IStringTableEngineBridge::DeferFindOrLoad =
       (atomic<signed_char>)((char)IStringTableEngineBridge::DeferFindOrLoad + '\x01');
  UNLOCK();
  lVar3 = *(longlong *)this;
  FVar4 = *this_00;
  local_507 = *(undefined1 *)(lVar3 + 0x338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x3d0),
             (FWriteAccessScope *)&local_4f0);
  uVar7 = local_507;
  *(int *)(lVar3 + 0x3ec) = *(int *)(lVar3 + 0x3ec) + 1;
  uVar22 = *(int *)(lVar3 + 0x3e0) - 1;
  local_508 = '\0';
  if (-1 < (int)uVar22) {
    lVar26 = (longlong)(int)uVar22;
    lVar27 = lVar26 << 4;
    do {
      uVar10 = 0;
      if ((int)uVar22 < *(int *)(lVar3 + 0x3e0)) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_518 = lVar26, local_510 = (longlong)*(int *)(lVar3 + 0x3e0),
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(int *)(lVar27 + 8 + *(longlong *)(lVar3 + 0x3d8)) == 0) ||
          (plVar20 = *(longlong **)(lVar27 + *(longlong *)(lVar3 + 0x3d8)),
          plVar20 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar20 + 0x68))(plVar20,FVar4,uVar7), cVar9 == '\0')) {
        local_508 = '\x01';
      }
      lVar26 = lVar26 + -1;
      lVar27 = lVar27 + -0x10;
      uVar22 = uVar22 - 1;
      this = local_500;
      this_00 = local_4f8;
    } while (-1 < (int)uVar22);
  }
  pwVar23 = L"";
  *(int *)(lVar3 + 0x3ec) = *(int *)(lVar3 + 0x3ec) + -1;
  if (local_508 != '\0') {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x3d0),false);
  }
  if (local_4f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
  }
  LOCK();
  IStringTableEngineBridge::DeferFindOrLoad =
       (atomic<signed_char>)((char)IStringTableEngineBridge::DeferFindOrLoad + -1);
  UNLOCK();
  bVar8 = false;
  uVar21 = (ulonglong)_tls_index;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuStartupModuleFields>(&local_470);
    pFVar14 = ::FName::ToString(this_00,&local_4c0);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    sVar1 = *pwVar23;
    pFVar6 = (FScriptContainerElement *)pwVar23;
    while (sVar1 != 0) {
      pFVar6 = pFVar6 + 2;
      uVar24 = (int)plVar25 + 1;
      plVar25 = (longlong *)(ulonglong)uVar24;
      sVar1 = *(short *)pFVar6;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar23,uVar24);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar26 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar26;
    if (lVar3 != local_470._8_8_) {
      *(longlong *)(lVar3 + 0x28) = lVar26;
    }
    bVar8 = true;
    *(undefined8 *)(local_470._8_8_ + 0x28) = *(undefined8 *)(local_470._8_8_ + 0x20);
    if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(**(longlong **)(**(longlong **)((longlong)this + 0x18) + 0x28) + 8))();
  if (bVar8) {
    uVar18 = UE::Trace::Private::TimeGetTimestamp();
    lVar26 = uVar18 - UE::Trace::Private::GStartCycle;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar19 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar19 - *(int *)&pFVar19->Cursor < 8) {
      pFVar19 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar19->Cursor = lVar26 * 0x100 + 0x12;
    pFVar19->Cursor = pFVar19->Cursor + 8;
    pFVar19->Committed = pFVar19->Cursor;
  }
  iVar11 = FModuleManager::FModuleInfo::CurrentLoadOrder + 1;
  *(int *)(**(longlong **)((longlong)this + 0x18) + 0x34) =
       FModuleManager::FModuleInfo::CurrentLoadOrder;
  FModuleManager::FModuleInfo::CurrentLoadOrder = iVar11;
  LOCK();
  *(undefined1 *)(**(longlong **)((longlong)this + 0x18) + 0x31) = 1;
  UNLOCK();
  TMulticastDelegate<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>::
  Broadcast((void *)(*(longlong *)this + 0x390),*this_00,ModuleLoaded);
  **(undefined8 **)((longlong)this + 0x20) =
       *(undefined8 *)(**(longlong **)((longlong)this + 0x18) + 0x28);
  FLoadTimeProfilerTrace::FRequestGroupScope::~FRequestGroupScope(&local_458);
  FScopedBootTiming::~FScopedBootTiming(&local_488);
  return;
}

// AbandonModule @ 141924320

void __thiscall FModuleManager::AbandonModule(FModuleManager *this,FName param_1)

{
  IModuleInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_18;
  
  FindModule(this,&local_18,param_1);
  if (local_18.Object != (FModuleInfo *)0x0) {
    if (local_18.Object == (FModuleInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((local_18.Object)->Module).Ptr != (IModuleInterface *)0x0) {
      LOCK();
      (local_18.Object)->bIsReady = (TAtomic<bool>)0x0;
      UNLOCK();
      (**(code **)((longlong)*((local_18.Object)->Module).Ptr + 0x20))();
      pIVar1 = ((local_18.Object)->Module).Ptr;
      if (pIVar1 != (IModuleInterface *)0x0) {
        ((local_18.Object)->Module).Ptr = (IModuleInterface *)0x0;
        (**(code **)*pIVar1)(pIVar1,1);
      }
      TMulticastDelegate<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&this->ModulesChangedEvent,param_1,ModuleUnloaded);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// AbandonModuleWithCallback @ 1419243f0

void __thiscall FModuleManager::AbandonModuleWithCallback(FModuleManager *this,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FModuleInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FModuleManager::FModuleInfo,1> *pTVar5;
  TSharedRef<FModuleManager::FModuleInfo,1> local_28;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_18;
  
  FindModuleChecked(this,&local_28,param_1);
  (**(code **)((longlong)*((local_28.Object)->Module).Ptr + 0x10))();
  AbandonModule(this,param_1);
  pTVar5 = FindModule(this,&local_18,param_1);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((pFVar2 == (FModuleInfo *)0x0) || ((pFVar2->Module).Ptr == (IModuleInterface *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsModuleLoaded(InModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                       ,0x7d9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddBinariesDirectory @ 141924700

/* WARNING: Removing unreachable block (ram,0x0001419248cf) */

void __thiscall
FModuleManager::AddBinariesDirectory(FModuleManager *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  wchar_t *_Str;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  IFileManager *pIVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  wchar_t **ppwVar11;
  int iVar12;
  FString local_90;
  FString local_80;
  FString local_70;
  wchar_t *local_60 [4];
  wchar_t *local_40;
  
  if (param_2) {
    pTVar2 = &this->PendingGameBinariesDirectories;
    ::FString::FString(&local_90,param_1);
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_90) &&
        ((FScriptContainerElement *)&local_90 <
         pFVar9 + (longlong)(this->PendingGameBinariesDirectories).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->PendingGameBinariesDirectories).ArrayNum;
    piVar1 = &(this->PendingGameBinariesDirectories).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingGameBinariesDirectories).ArrayNum = iVar6 + 1;
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_90.Data.AllocatorInstance.Data;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 8) = local_90.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_90.Data.ArrayMax;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
  }
  else {
    pTVar2 = &this->PendingEngineBinariesDirectories;
    ::FString::FString(&local_80,param_1);
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar9 + (longlong)(this->PendingEngineBinariesDirectories).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->PendingEngineBinariesDirectories).ArrayNum;
    piVar1 = &(this->PendingEngineBinariesDirectories).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingEngineBinariesDirectories).ArrayNum = iVar6 + 1;
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_80.Data.AllocatorInstance.Data;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 8) = local_80.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_80.Data.ArrayMax;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
  }
  FWindowsPlatformProcess::AddDllDirectory(param_1);
  local_60[0] = L"NoRedist";
  ppwVar11 = local_60;
  local_60[1] = L"NotForLicensees";
  local_60[2] = L"CarefullyRedist";
  local_60[3] = L"LimitedAccess";
  do {
    _Str = *ppwVar11;
    iVar12 = 0;
    iVar6 = iVar12;
    if (param_1 != (wchar_t *)0x0) {
      sVar7 = wcslen(param_1);
      iVar6 = (int)sVar7;
    }
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
      iVar12 = (int)sVar7;
    }
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    ::FString::Reserve(&local_70,iVar12 + 2 + iVar6);
    ::FString::AppendChars(&local_70,param_1,iVar6);
    ::FString::PathAppend(&local_70,_Str,iVar12);
    pIVar8 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar10.Data = local_70.Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,FVar10.Data);
    if (cVar5 != '\0') {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        FVar10.Data = local_70.Data.AllocatorInstance.Data;
      }
      AddBinariesDirectory(this,(wchar_t *)FVar10.Data,param_2);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    ppwVar11 = ppwVar11 + 1;
  } while (ppwVar11 != &local_40);
  return;
}

// AddExtraBinarySearchPaths @ 141924ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FModuleManager::AddExtraBinarySearchPaths(FModuleManager *this)

{
  ulonglong *puVar1;
  FName *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  IFileManager *pIVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ulonglong *puVar17;
  FName *pFVar18;
  ForAnyElementType FVar19;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  FString local_b8;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this->bExtraBinarySearchPathsAdded == false) {
    ::FString::FString(&local_78,L"NoRedist");
    ::FString::FString(&local_68,L"NotForLicensees");
    ::FString::FString(&local_58,L"CarefullyRedist");
    ::FString::FString(&local_48,L"LimitedAccess");
    lVar15 = 4;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,0,&local_d0,4,&local_c4);
    ConstructItems<FString,FString,int>(local_d0.Data,&local_78,4);
    puVar17 = local_38;
    do {
      puVar1 = puVar17 + -2;
      puVar17 = puVar17 + -2;
      lVar15 = lVar15 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar15 != 0);
    pTVar9 = FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms();
    pFVar18 = (FName *)(pTVar9->AllocatorInstance).Data;
    iVar3 = pTVar9->ArrayNum;
    pFVar2 = pFVar18 + iVar3;
    while( true ) {
      if (pTVar9->ArrayNum != iVar3) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if (pFVar18 == pFVar2) break;
      local_a8 = *pFVar18;
      pFVar10 = (FScriptContainerElement *)::FName::ToString(&local_a8,&local_90);
      if (((local_d0.Data <= pFVar10) && (pFVar10 < local_d0.Data + (longlong)local_c4 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_c8 == local_c4) {
        local_c8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_d0,&local_c4);
      }
      iVar16 = local_c8 + 1;
      pFVar12 = local_d0.Data + (longlong)local_c8 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
      *(undefined8 *)pFVar10 = 0;
      *(int *)(pFVar12 + 8) = *(int *)(pFVar10 + 8);
      *(int *)(pFVar12 + 0xc) = *(int *)(pFVar10 + 0xc);
      *(undefined8 *)(pFVar10 + 8) = 0;
      local_c8 = iVar16;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      pFVar18 = pFVar18 + 1;
    }
    FWindowsPlatformProcess::GetModulesDirectory(&local_a0);
    iVar3 = local_c8;
    pFVar10 = local_d0.Data + (longlong)local_c8 * 0x10;
    FVar19.Data = local_d0.Data;
    while( true ) {
      if (local_c8 != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c0)
        ;
      }
      FVar13.Data = local_a0.Data.AllocatorInstance.Data;
      if (FVar19.Data == pFVar10) break;
      iVar16 = *(int *)(FVar19.Data + 8) + -1;
      if (*(int *)(FVar19.Data + 8) == 0) {
        iVar16 = 0;
      }
      iVar14 = local_a0.Data.ArrayNum;
      if ((iVar14 != 0) || (iVar7 = 2, iVar16 == -1)) {
        iVar7 = 1;
      }
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = iVar14;
      if ((iVar14 == 0) && (iVar16 + iVar7 == 0)) {
        local_b8.Data.ArrayMax = 0;
      }
      else {
        uVar8 = iVar16 + iVar7 + iVar14;
        if ((int)uVar8 < iVar14) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,0,(ForAnyElementType *)&local_b8,iVar14,&local_b8.Data.ArrayMax);
        if (iVar14 != 0) {
          memcpy(local_b8.Data.AllocatorInstance.Data,FVar13.Data,(longlong)iVar14 * 2);
        }
      }
      ::FString::PathAppend(&local_b8,*(wchar_t **)FVar19.Data,iVar16);
      pIVar11 = IFileManager::Get();
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar13.Data = local_b8.Data.AllocatorInstance.Data;
      }
      cVar6 = (**(code **)((longlong)*pIVar11 + 0x58))(pIVar11,FVar13.Data);
      if (cVar6 != '\0') {
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar13.Data = local_b8.Data.AllocatorInstance.Data;
        }
        AddBinariesDirectory(this,(wchar_t *)FVar13.Data,false);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      FVar19.Data = FVar19.Data + 0x10;
    }
    this->bExtraBinarySearchPathsAdded = true;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_d0.Data,local_c8);
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  return;
}

// AddModule @ 141925510

void __thiscall FModuleManager::AddModule(FModuleManager *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TOptional<FModuleManager> *pTVar6;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_res10 [8];
  TPairInitializer<FName_const_&,TSharedRef<FModuleManager::FModuleInfo,1>_const_&> local_res18;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<FModuleManager::FModuleInfo,1> **local_28;
  TReferenceControllerBase<1> **local_20;
  
  if (param_1 == (FName)0x0) {
    local_res10[0] = 0;
    bVar2 = `FModuleManager::AddModule'::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar2) {
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Modules).field_0x8 != *(int *)&(this->Modules).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Modules).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Modules).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->Modules).field_0x48 - 1U & param_1.Number + uVar3) *
                              4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)((longlong)iVar4 * 0x20 + *(longlong *)&this->Modules) == param_1) {
          return;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->Modules);
      } while (iVar4 != -1);
    }
  }
  pTVar5 = ::operator_new(0x38);
  local_30 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = local_30;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->_padding_ = 0;
    pTVar5->SharedReferenceCount = (atomic<int>)0x0;
    pTVar5->WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar5[3]._padding_ = 0;
    iVar4 = FModuleInfo::CurrentLoadOrder + 1;
    *(int *)((longlong)&pTVar5[3]._padding_ + 4) = FModuleInfo::CurrentLoadOrder;
    FModuleInfo::CurrentLoadOrder = iVar4;
    pTVar8 = pTVar5;
  }
  local_38 = pTVar8;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFModuleInfo_FModuleManager__U__DefaultDeleter_VFModuleInfo_FModuleManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)pTVar8;
    local_30 = pTVar5;
  }
  if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar6 = UE::Core::Private::GetModuleManagerSingleton();
  if ((pTVar6->bIsSet == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpCriticalSection = &(pTVar6->TypedValue).ModulesCriticalSection;
  local_res18.Value = (TSharedRef<FModuleManager::FModuleInfo,1> *)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_28 = &local_res18.Value;
  local_20 = &local_38;
  TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FModuleManager::FModuleInfo,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
              *)&(pTVar6->TypedValue).Modules,&local_res18,(bool *)&local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar6 = UE::Core::Private::GetModuleManagerSingleton();
  if ((pTVar6->bIsSet == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TMulticastDelegate<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>::
  Broadcast(&(pTVar6->TypedValue).ModulesChangedEvent,(FName)local_res18.Value,
            PluginDirectoryChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// AddModuleToModulesList @ 141925750

void __thiscall
FModuleManager::AddModuleToModulesList
          (FModuleManager *this,FName param_1,TSharedRef<FModuleManager::FModuleInfo,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TOptional<FModuleManager> *pTVar3;
  TPairInitializer<FName_const_&,TSharedRef<FModuleManager::FModuleInfo,1>_const_&> local_res8;
  TSharedRef<FModuleManager::FModuleInfo,1> **local_18;
  TSharedRef<FModuleManager::FModuleInfo,1> *local_10;
  
  lpCriticalSection = &this->ModulesCriticalSection;
  local_res8.Value = (TSharedRef<FModuleManager::FModuleInfo,1> *)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FModuleManager::FModuleInfo,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Modules,&local_res8,(bool *)&local_18);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = UE::Core::Private::GetModuleManagerSingleton();
  if (pTVar3->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>::
  Broadcast(&(pTVar3->TypedValue).ModulesChangedEvent,(FName)local_res8.Value,PluginDirectoryChanged
           );
  return;
}

// DoesLoadedModuleHaveUObjects @ 141935100

bool __thiscall FModuleManager::DoesLoadedModuleHaveUObjects(FModuleManager *this,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  char cVar3;
  undefined1 uVar4;
  TSharedPtr<FModuleManager::FModuleInfo,1> *pTVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  longlong *plVar9;
  FModuleInfo *pFVar10;
  FName local_res10;
  FName local_res18;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_58;
  FString local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  local_res10 = param_1;
  pTVar5 = FindModule(this,&local_58,param_1);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar10 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      (int)local_58.SharedReferenceCount.ReferenceController));
  if ((pFVar10 == (FModuleInfo *)0x0) || ((pFVar10->Module).Ptr == (IModuleInterface *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->IsPackageLoaded,
               &local_38);
    if ((*(int *)&(this->IsPackageLoaded).field_0x10 != 0) &&
       (plVar9 = *(longlong **)&(this->IsPackageLoaded).field_0x8, plVar9 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*plVar9 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        pFVar6 = ::FName::ToString(&local_res10,(FString *)&local_38);
        pFVar7 = ::FString::FString(&local_48,L"/Script/");
        ::FString::ConcatFF((FString *)&local_58,pFVar7,pFVar6);
        pFVar10 = (FModuleInfo *)L"";
        if ((int)local_58.SharedReferenceCount.ReferenceController != 0) {
          pFVar10 = local_58.Object;
        }
        pFVar8 = ::FName::FName(&local_res18,(wchar_t *)pFVar10);
        FVar2 = *pFVar8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->IsPackageLoaded,
                   &local_20);
        if (*(int *)&(this->IsPackageLoaded).field_0x10 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)&(this->IsPackageLoaded).field_0x8;
        }
        uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,FVar2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        if (local_58.Object != (FModuleInfo *)0x0) {
          FMemory::Free(local_58.Object);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((void *)local_38.DestructionSentinel._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_38.DestructionSentinel._0_8_);
        }
        return (bool)uVar4;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  return false;
}

// Exec_Dev @ 141939e60

/* WARNING: Removing unreachable block (ram,0x00014193a13a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FModuleManager::Exec_Dev
          (FModuleManager *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint *puVar10;
  wchar_t *local_res18;
  FIdentityFunctor local_c8 [8];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FString local_b0;
  int local_a0;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FString local_40;
  
  local_res18 = param_2;
  bVar3 = FParse::Command(&local_res18,L"Module",true);
  if ((!bVar3) || (bVar3 = FParse::Command(&local_res18,L"List",true), !bVar3)) {
    return false;
  }
  if (*(int *)&(this->Modules).field_0x8 - *(int *)&(this->Modules).field_0x34 < 1) {
    FOutputDevice::LogfImpl(param_3,L"No modules are currently known.");
  }
  else {
    FOutputDevice::LogfImpl(param_3,L"Listing all %i known modules:\n");
    local_98 = &this->Modules;
    local_b8._0_4_ = 0;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_88 = &(this->Modules).field_0x10;
    local_b8 = 0;
    iVar5 = *(int *)&(this->Modules).field_0x28;
    iStack_90 = 0;
    local_78 = 0;
    uStack_8c = 1;
    iStack_7c = 0;
    if (iVar5 != 0) {
      puVar10 = *(uint **)&(this->Modules).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_88;
      }
      uVar9 = *puVar10;
      while (uVar9 == 0) {
        lVar7 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_141939f90;
        uVar9 = puVar10[lVar7 + 1];
      }
      uStack_8c = -uVar9 & uVar9;
      uVar1 = (ulonglong)uStack_8c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_a0 = (int)lVar7;
      iStack_7c = local_78 + -1 + local_a0;
      if (iVar5 < iStack_7c) {
        iStack_7c = iVar5;
      }
    }
LAB_141939f90:
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    iStack_74 = iStack_7c;
    local_68 = local_98;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
    TStack_60.CurrentBitIndex = iStack_7c;
    if (iStack_7c < iVar5) {
      do {
        ::FName::ToString((FName *)((longlong)TStack_60.CurrentBitIndex * 0x20 +
                                   *(longlong *)local_68),&local_40);
        ::FString::PrintfImpl(&local_b0,L"    %s [File: %s] [Loaded: %s]");
        if (((local_c0.Data <= (FScriptContainerElement *)&local_b0) &&
            ((FScriptContainerElement *)&local_b0 < local_c0.Data + (longlong)local_b8._4_4_ * 0x10)
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = (int)local_b8;
        if ((int)local_b8 == local_b8._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_c0,(int *)((longlong)&local_b8 + 4));
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar5 + 1);
        pFVar8 = local_c0.Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        *(FScriptContainerElement **)pFVar8 = local_b0.Data.AllocatorInstance.Data;
        *(int *)(pFVar8 + 8) = local_b0.Data.ArrayNum;
        *(int *)(pFVar8 + 0xc) = local_b0.Data.ArrayMax;
        local_b0.Data.ArrayNum = 0;
        local_b0.Data.ArrayMax = 0;
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_c0.Data,(int)local_b8,local_c8[0],(TLess<void> *)local_c8);
    for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < (int)local_b8)); uVar9 = uVar9 + 1) {
      uVar6 = 0;
      if ((int)uVar9 < (int)local_b8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FOutputDevice::Log(param_3,(FString *)(local_c0.Data + (longlong)(int)uVar9 * 0x10));
    }
    DestructItems<FString,int>((FString *)local_c0.Data,(int)local_b8);
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
      return true;
    }
  }
  return true;
}

// FindModule @ 14193d4a0

TSharedPtr<FModuleManager::FModuleInfo,1> * __thiscall
FModuleManager::FindModule
          (FModuleManager *this,TSharedPtr<FModuleManager::FModuleInfo,1> *__return_storage_ptr__,
          FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_> *pTVar1;
  undefined8 *puVar2;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_28;
  
  lpCriticalSection = &this->ModulesCriticalSection;
  __return_storage_ptr__->Object = (FModuleInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
                     *)&this->Modules,param_1);
    puVar2 = (undefined8 *)&pTVar1->field_0x8;
    if (pTVar1 == (TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_> *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    if (puVar2 != (undefined8 *)0x0) {
      local_28.Object = (FModuleInfo *)*puVar2;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__ != &local_28) {
        __return_storage_ptr__->Object = local_28.Object;
        local_28.Object = (FModuleInfo *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindModuleChecked @ 14193d580

TSharedRef<FModuleManager::FModuleInfo,1> * __thiscall
FModuleManager::FindModuleChecked
          (FModuleManager *this,TSharedRef<FModuleManager::FModuleInfo,1> *__return_storage_ptr__,
          FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_> *pTVar4;
  TSharedRef<FModuleManager::FModuleInfo,1> *pTVar5;
  
  lpCriticalSection = &this->ModulesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>,FDefaultSetAllocator>
                   *)&this->Modules,param_1);
  if (pTVar4 == (TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FModuleManager::FModuleInfo,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = *(FModuleInfo **)&pTVar4->field_0x8;
  pTVar1 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// FindModules @ 14193d640

/* WARNING: Removing unreachable block (ram,0x00014193da89) */

void __thiscall
FModuleManager::FindModules
          (FModuleManager *this,wchar_t *param_1,
          TArray<FModuleDiskInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  wchar_t wVar3;
  uint uVar4;
  FName *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  FName FVar8;
  TMap<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *pTVar9;
  TMap<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FString *this_00;
  wchar_t *pwVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res10 [16];
  int local_res20;
  FName local_108;
  FName local_100;
  undefined8 uStack_f8;
  FName local_f0;
  FName local_e8;
  undefined8 uStack_e0;
  FName local_d8;
  TMap<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  TMap<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *local_98;
  FString local_90;
  TMap<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  if (param_1 != (wchar_t *)0x0) {
    wVar3 = *param_1;
    pwVar14 = param_1;
    while (wVar3 != L'\0') {
      if ((wVar3 == L'*') || (wVar3 == L'?')) {
        ProcessPendingStaticallyLinkedModuleInitializers(this);
        local_98 = &this->StaticallyLinkedModuleInitializers;
        ::FString::FString(&local_90,param_1);
        iVar13 = *(int *)&(this->StaticallyLinkedModuleInitializers).field_0x28;
        local_c0 = &(this->StaticallyLinkedModuleInitializers).field_0x10;
        iVar18 = 0;
        uStack_c4 = 1;
        iStack_c8 = 0;
        iStack_b4 = iStack_c8;
        local_b0 = iStack_c8;
        if (iVar13 == 0) goto LAB_14193d7ef;
        puVar20 = *(uint **)&(this->StaticallyLinkedModuleInitializers).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)local_c0;
        }
        uVar12 = *puVar20;
        local_b0 = iVar18;
        iStack_c8 = iVar18;
        goto joined_r0x00014193d7a7;
      }
      pwVar1 = pwVar14 + 1;
      pwVar14 = pwVar14 + 1;
      wVar3 = *pwVar1;
    }
  }
  ProcessPendingStaticallyLinkedModuleInitializers(this);
  ::FName::FName(&local_d8,param_1);
  FVar8 = local_d8;
  uVar12 = ::GetTypeHash(local_d8.ComparisonIndex.Value);
  if (*(int *)&(this->StaticallyLinkedModuleInitializers).field_0x8 ==
      *(int *)&(this->StaticallyLinkedModuleInitializers).field_0x34) {
    return;
  }
  puVar16 = *(undefined1 **)&(this->StaticallyLinkedModuleInitializers).field_0x40;
  if (puVar16 == (undefined1 *)0x0) {
    puVar16 = &(this->StaticallyLinkedModuleInitializers).field_0x38;
  }
  iVar13 = *(int *)(puVar16 +
                   (ulonglong)
                   (*(int *)&(this->StaticallyLinkedModuleInitializers).field_0x48 - 1U &
                   FVar8.Number + uVar12) * 4);
  if (iVar13 == -1) {
    return;
  }
  while (*(FName *)(*(longlong *)&this->StaticallyLinkedModuleInitializers + (longlong)iVar13 * 0x28
                   ) != FVar8) {
    iVar13 = *(int *)(*(longlong *)&this->StaticallyLinkedModuleInitializers + 0x20 +
                     (longlong)iVar13 * 0x28);
    if (iVar13 == -1) {
      return;
    }
  }
  if (iVar13 == -1) {
    return;
  }
  pFVar5 = (FName *)(param_2->AllocatorInstance).Data;
  local_f0 = local_d8;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  uStack_e0 = 0;
  if (((pFVar5 <= &local_f0) && (&local_f0 < pFVar5 + (longlong)param_2->ArrayMax * 3)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar13 = param_2->ArrayNum;
  if (iVar13 == param_2->ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar13 + 1;
  pFVar5 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x18);
  *pFVar5 = local_f0;
  pFVar5[1].ComparisonIndex = 0;
  pFVar5[1].Number = 0;
  pFVar5[1] = local_e8;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  pFVar5[2].ComparisonIndex.Value = (uint)uStack_e0;
  pFVar5[2].Number = uStack_e0._4_4_;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_e0 = 0;
  goto LAB_14193dbb9;
joined_r0x00014193d7a7:
  if (uVar12 != 0) goto LAB_14193d7c8;
  lVar15 = (longlong)iStack_c8;
  local_b0 = local_b0 + 0x20;
  iStack_c8 = iStack_c8 + 1;
  iStack_b4 = iVar13;
  if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14193d7ef;
  uVar12 = puVar20[lVar15 + 1];
  goto joined_r0x00014193d7a7;
LAB_14193d7c8:
  uStack_c4 = -uVar12 & uVar12;
  uVar2 = (ulonglong)uStack_c4 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  local_res20 = (int)lVar15;
  iStack_b4 = local_b0 + -1 + local_res20;
  if (iVar13 < iStack_b4) {
    iStack_b4 = iVar13;
  }
LAB_14193d7ef:
  local_d0 = &this->StaticallyLinkedModuleInitializers;
  iStack_a8 = *(int *)&(this->StaticallyLinkedModuleInitializers).field_0x8 -
              *(int *)&(this->StaticallyLinkedModuleInitializers).field_0x34;
  uVar12 = *(uint *)&(this->StaticallyLinkedModuleInitializers).field_0x28;
  puVar16 = &(this->StaticallyLinkedModuleInitializers).field_0x10;
  uStack_b8 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_b4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uVar21 = uVar12 & 0xffffffe0;
  iVar17 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iStack_b4;
  TStack_78.BaseBitIndex = local_b0;
  uStack_58 = CONCAT44(uStack_a4,iStack_a8);
  iStack_ac = iStack_b4;
  local_80 = local_d0;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar12 < 0) || (iVar13 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar9 = local_98;
  uVar4 = *(uint *)&(this->StaticallyLinkedModuleInitializers).field_0x28;
  if (uVar12 != uVar4) {
    puVar19 = *(undefined1 **)&(this->StaticallyLinkedModuleInitializers).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar16;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar12 == 0) {
      lVar15 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14193d910;
      uVar12 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_a0 = (int)lVar15;
    uVar12 = local_a0 + -1 + uVar21;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14193d910:
  while( true ) {
    pTVar10 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar12) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) && (pTVar10 == pTVar9)
       ) break;
    pFVar5 = (FName *)(*(longlong *)pTVar10 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    this_00 = ::FName::ToString(pFVar5,&local_50);
    iVar13 = local_90.Data.ArrayNum + -1;
    FVar7.Data = local_90.Data.AllocatorInstance.Data;
    if (local_90.Data.ArrayNum == 0) {
      iVar13 = iVar18;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    bVar11 = ::FString::MatchesWildcard(this_00,(wchar_t *)FVar7.Data,iVar13,IgnoreCase);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      local_108 = *pFVar5;
      pFVar5 = (FName *)(param_2->AllocatorInstance).Data;
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
      uStack_f8 = 0;
      if (((pFVar5 <= &local_108) && (&local_108 < pFVar5 + (longlong)param_2->ArrayMax * 3)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = param_2->ArrayNum;
      if (iVar13 == param_2->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar13 + 1;
      pFVar5 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x18);
      *pFVar5 = local_108;
      pFVar5[1].ComparisonIndex = 0;
      pFVar5[1].Number = 0;
      pFVar5[1] = local_100;
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
      pFVar5[2].ComparisonIndex.Value = (uint)uStack_f8;
      pFVar5[2].Number = uStack_f8._4_4_;
      uStack_f8 = 0;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
LAB_14193dbb9:
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// FindModules @ 14193dbe0

void __thiscall
FModuleManager::FindModules
          (FModuleManager *this,wchar_t *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FModuleDiskInfo *pFVar2;
  FModuleDiskInfo *pFVar3;
  code *pcVar4;
  FName *pFVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  undefined1 local_res18 [16];
  TArray<FModuleDiskInfo,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FindModules(this,param_1,&local_28);
  uVar10 = local_28.ArrayNum + param_2->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar6 = local_28.ArrayNum;
  pFVar2 = (FModuleDiskInfo *)(local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x18)
  ;
  FVar9.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FModuleDiskInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((FModuleDiskInfo *)FVar9.Data == pFVar2) break;
    pFVar3 = (FModuleDiskInfo *)(param_2->AllocatorInstance).Data;
    if ((pFVar3 <= FVar9.Data) && (FVar9.Data < (FModuleDiskInfo *)(&pFVar3->Name + *piVar1))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar8 + 1;
    pFVar5 = &((FModuleDiskInfo *)FVar9.Data)->Name;
    FVar9.Data = FVar9.Data + 0x18;
    *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = *pFVar5;
  }
  DestructItems<FModuleDiskInfo,int>
            ((FModuleDiskInfo *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FModuleDiskInfo *)local_28.AllocatorInstance.Data != (FModuleDiskInfo *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// Get @ 141944a80

FModuleManager * __cdecl FModuleManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FModuleManager> *pTVar3;
  FModuleManager *pFVar4;
  
  pTVar3 = UE::Core::Private::GetModuleManagerSingleton();
  if ((pTVar3->bIsSet == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FModuleManager *)(*pcVar1)();
    return pFVar4;
  }
  return &pTVar3->TypedValue;
}

// GetGameBinariesDirectory @ 141947c50

FString * __thiscall
FModuleManager::GetGameBinariesDirectory(FModuleManager *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  iVar1 = (this->GameBinariesDirectories).ArrayNum;
  if (iVar1 == 0) {
    iVar1 = (this->PendingGameBinariesDirectories).ArrayNum;
    if (iVar1 == 0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    ::FString::FString(__return_storage_ptr__,
                       (FString *)(this->PendingGameBinariesDirectories).AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)(this->GameBinariesDirectories).AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetModule @ 141948550

/* WARNING: Enum "Type": Some values do not have unique names */

IModuleInterface * __thiscall FModuleManager::GetModule(FModuleManager *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  IModuleInterface *pIVar3;
  FName local_res10 [3];
  TSharedPtr<FModuleManager::FModuleInfo,1> local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  FindModule(this,&local_28,param_1);
  if (local_28.Object != (FModuleInfo *)0x0) {
    if ((local_28.Object == (FModuleInfo *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IModuleInterface *)(*pcVar1)();
      return pIVar3;
    }
    if (((local_28.Object)->bIsReady != (TAtomic<bool>)0x0) || (bVar2 = IsInGameThread(), bVar2)) {
      if ((local_28.Object == (FModuleInfo *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IModuleInterface *)(*pcVar1)();
        return pIVar3;
      }
      pIVar3 = ((local_28.Object)->Module).Ptr;
      goto LAB_14194863e;
    }
    if (2 < (byte)LogModuleManager._0_1_) {
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  pIVar3 = (IModuleInterface *)0x0;
LAB_14194863e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return pIVar3;
}

// GetModuleCount @ 141948660

int __thiscall FModuleManager::GetModuleCount(FModuleManager *this)

{
  return *(int *)&(this->Modules).field_0x8 - *(int *)&(this->Modules).field_0x34;
}

// GetModulePtr_Internal @ 141948700

IModuleInterface * __cdecl FModuleManager::GetModulePtr_Internal(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FModuleManager> *this;
  IModuleInterface *pIVar3;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_18;
  
  this = UE::Core::Private::GetModuleManagerSingleton();
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IModuleInterface *)(*pcVar1)();
      return pIVar3;
    }
  }
  FindModule(&this->TypedValue,&local_18,param_1);
  if (local_18.Object != (FModuleInfo *)0x0) {
    if (local_18.Object == (FModuleInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IModuleInterface *)(*pcVar1)();
        return pIVar3;
      }
    }
    pIVar3 = ((local_18.Object)->Module).Ptr;
    if (pIVar3 != (IModuleInterface *)0x0) goto LAB_14194879e;
  }
  pIVar3 = (IModuleInterface *)0x0;
LAB_14194879e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pIVar3;
}

// GetOrLoadModule @ 141948b60

/* WARNING: Enum "Type": Some values do not have unique names */

IModuleInterface * __thiscall
FModuleManager::GetOrLoadModule
          (FModuleManager *this,FName param_1,EModuleLoadResult *param_2,ELoadModuleFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  IModuleInterface *pIVar3;
  FLLMScope local_res10 [2];
  FName local_48;
  FMemScope local_40;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_38;
  FString local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name916,L"Modules");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name916,false,None,Default,true);
  FMemScope::FMemScope(&local_40,&LLMScope_Name916,true);
  local_48 = param_1;
  FindModule(this,&local_38,param_1);
  if (local_38.Object == (FModuleInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pIVar3 = (IModuleInterface *)0x0;
  }
  else {
    if ((local_38.Object == (FModuleInfo *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IModuleInterface *)(*pcVar1)();
      return pIVar3;
    }
    if (((local_38.Object)->bIsReady != (TAtomic<bool>)0x0) || (bVar2 = IsInGameThread(), bVar2)) {
      if ((local_38.Object == (FModuleInfo *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IModuleInterface *)(*pcVar1)();
        return pIVar3;
      }
      pIVar3 = ((local_38.Object)->Module).Ptr;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (pIVar3 != (IModuleInterface *)0x0) goto LAB_141948d17;
    }
    else {
      if (2 < (byte)LogModuleManager._0_1_) {
        ::FName::ToString(&local_48,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      pIVar3 = (IModuleInterface *)0x0;
    }
  }
  bVar2 = IsInGameThread();
  if (bVar2) {
    pIVar3 = LoadModuleWithFailureReason(this,param_1,param_2,param_3);
  }
  else {
    *param_2 = NotLoadedByGameThread;
  }
LAB_141948d17:
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res10);
  return pIVar3;
}

// GetUBTConfiguration @ 14194bf40

wchar_t * __cdecl FModuleManager::GetUBTConfiguration(void)

{
  EBuildConfiguration EVar1;
  wchar_t *pwVar2;
  
  EVar1 = FApp::GetBuildConfiguration();
  pwVar2 = ::LexToString(EVar1);
  return pwVar2;
}

// IsModuleLoaded @ 1419520c0

bool __thiscall FModuleManager::IsModuleLoaded(FModuleManager *this,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FModuleInfo *pFVar2;
  TSharedPtr<FModuleManager::FModuleInfo,1> *pTVar3;
  bool bVar4;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_18;
  
  pTVar3 = FindModule(this,&local_18,param_1);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((pFVar2 == (FModuleInfo *)0x0) || ((pFVar2->Module).Ptr == (IModuleInterface *)0x0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar4;
}

// IsModuleSafeToUse @ 141952130

bool __thiscall FModuleManager::IsModuleSafeToUse(FModuleManager *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  lpCriticalSection = &this->ModulesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bIsLoadingDynamicLibrary == false) {
    uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this->ModulePathsCache).field_0x8 != *(int *)&(this->ModulePathsCache).field_0x34)
    {
      puVar4 = *(undefined1 **)&(this->ModulePathsCache).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->ModulePathsCache).field_0x38;
      }
      iVar3 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->ModulePathsCache).field_0x48 - 1U &
                                param_1.Number + uVar2) * 4);
      if (iVar3 != -1) {
        do {
          if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->ModulePathsCache) == param_1)
          {
            bVar1 = IsModuleLoaded(this,param_1);
            goto LAB_1419521d7;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->ModulePathsCache);
        } while (iVar3 != -1);
      }
    }
  }
  bVar1 = true;
LAB_1419521d7:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar1;
}

// LoadModule @ 141954200

IModuleInterface * __thiscall
FModuleManager::LoadModule(FModuleManager *this,FName param_1,ELoadModuleFlags param_2)

{
  IModuleInterface *pIVar1;
  EModuleLoadResult local_res20 [2];
  
  local_res20[0] = Success;
  pIVar1 = GetOrLoadModule(this,param_1,local_res20,param_2);
  return pIVar1;
}

// LoadModuleBinaryOnly @ 141954230

void __thiscall FModuleManager::LoadModuleBinaryOnly(FModuleManager *this,FName param_1)

{
  return;
}

// LoadModuleChecked @ 141954240

IModuleInterface * __thiscall FModuleManager::LoadModuleChecked(FModuleManager *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  IModuleInterface *pIVar3;
  FName local_res10;
  EModuleLoadResult local_res18 [2];
  FString local_18;
  
  local_res18[0] = Success;
  local_res10 = param_1;
  pIVar3 = GetOrLoadModule(this,param_1,local_res18,LogFailures);
  if (pIVar3 == (IModuleInterface *)0x0) {
    IsInGameThread();
    switch(local_res18[0]) {
    case Success:
      break;
    case FileNotFound:
      break;
    case FileIncompatible:
      break;
    case CouldNotBeLoadedByOS:
      break;
    case FailedToInitialize:
      break;
    case NotLoadedByGameThread:
    }
    ::FName::ToString(&local_res10,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Module",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                       ,0x3c0,L"ModuleName=%s, Failure=%s, IsInGameThread=%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IModuleInterface *)(*pcVar1)();
      return pIVar3;
    }
  }
  return pIVar3;
}

// LoadModuleWithCallback @ 141954390

bool __thiscall
FModuleManager::LoadModuleWithCallback(FModuleManager *this,FName param_1,FOutputDevice *param_2)

{
  IModuleInterface *pIVar1;
  EModuleLoadResult local_res20 [2];
  
  local_res20[0] = Success;
  pIVar1 = GetOrLoadModule(this,param_1,local_res20,None);
  if (pIVar1 == (IModuleInterface *)0x0) {
    FOutputDevice::Log(param_2,L"Module couldn\'t be loaded.");
    return false;
  }
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  return true;
}

// LoadModuleWithFailureReason @ 1419543f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

IModuleInterface * __thiscall
FModuleManager::LoadModuleWithFailureReason
          (FModuleManager *this,FName param_1,EModuleLoadResult *param_2,ELoadModuleFlags param_3)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  FName FVar11;
  FModuleManager *this_00;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  IModuleInterface *pIVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_class_IModuleInterface_*___cdecl_FModuleManager::LoadModuleWithFailureReason(FName,EModuleLoadResult_&,ELoadModuleFlags)_::_2_::FStat_STAT_ModuleLoad>
  FVar19;
  FString *pFVar20;
  longlong lVar21;
  TSharedPtr<FModuleManager::FModuleInfo,1> *pTVar22;
  FThreadStats *pFVar23;
  FThreadStatsPool *pFVar24;
  ulong64 uVar25;
  FWriteBuffer *pFVar26;
  wchar_t *pwVar27;
  ForAnyElementType FVar28;
  undefined1 *puVar29;
  TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *pTVar30;
  FNameEntryId FVar31;
  int iVar32;
  FName FVar33;
  longlong lVar34;
  FName FVar35;
  int iVar36;
  FName local_res10 [2];
  undefined1 auStackY_2e8 [32];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  FEngineTrackedActivityScope local_270 [4];
  FColor_u_0 local_26c;
  ELoadModuleFlags local_268;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_258;
  FString local_248;
  uint local_238;
  uint uStack_234;
  FColor_u_0 local_230 [2];
  IModuleInterface *local_228;
  FName local_220;
  FName *local_218;
  FName local_210;
  uint local_208;
  uint uStack_204;
  FModuleManager *local_200;
  EModuleLoadResult *local_1f8;
  FName local_1f0;
  FName local_1e0;
  FModuleInfo *local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FName local_1b8;
  FName local_1b0;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  FStatMessage local_198;
  FStatMessage local_188;
  FModuleManager *local_178;
  FName local_170;
  TSharedPtr<FModuleManager::FModuleInfo,1> *local_168;
  FName *local_160;
  uint *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  FModuleManager *local_140;
  FName local_138;
  ELoadModuleFlags local_130;
  FModuleInfo **local_128;
  IModuleInterface **local_120;
  EModuleLoadResult *local_118;
  FModuleManager **local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FScopedBootTiming local_70;
  TLogScope<1> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_228 = (IModuleInterface *)0x0;
  iVar36 = 0;
  *param_2 = Success;
  local_res10[0] = param_1;
  local_268 = param_3;
  local_200 = this;
  local_1f8 = param_2;
  local_1b8 = param_1;
  bVar13 = IsInGameThread();
  if ((!bVar13) && (2 < (byte)LogModuleManager._0_1_)) {
    ::FName::ToString(&local_1b8,&local_f0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  FindModule(this,&local_258,local_res10[0]);
  local_170 = local_res10[0];
  local_168 = &local_258;
  local_178 = this;
  if (local_258.Object != (FModuleInfo *)0x0) {
    if ((local_258.Object == (FModuleInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pIVar17 = (IModuleInterface *)(*pcVar4)();
      return pIVar17;
    }
    pIVar17 = ((local_258.Object)->Module).Ptr;
    local_228 = pIVar17;
    if (pIVar17 != (IModuleInterface *)0x0) goto LAB_141954ecd;
  }
  if (5 < (byte)LogModuleManager._0_1_) {
    ::FName::ToString(local_res10,&local_e0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  ::FName::ToString(local_res10,&local_a0);
  FEngineTrackedActivityScope::FEngineTrackedActivityScope(local_270,L"Loading Module %s");
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  FScopedBootTiming::FScopedBootTiming(&local_70,"LoadModule");
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ModuleLoad ==
        (FThreadSafeStaticStat<_public:_class_IModuleInterface_*___cdecl_FModuleManager::LoadModuleWithFailureReason(FName,EModuleLoadResult_&,ELoadModuleFlags)_::_2_::FStat_STAT_ModuleLoad>
         )0x0) {
      pFVar18 = ::FName::FName(&local_100,"STAT_ModuleLoad");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ModuleLoad,*pFVar18,L"Module Load",
                 "STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_ModuleLoad;
  if (StatPtr_STAT_ModuleLoad ==
      (FThreadSafeStaticStat<_public:_class_IModuleInterface_*___cdecl_FModuleManager::LoadModuleWithFailureReason(FName,EModuleLoadResult_&,ELoadModuleFlags)_::_2_::FStat_STAT_ModuleLoad>
       )0x0) {
    pFVar18 = ::FName::FName(&local_f8,"STAT_ModuleLoad");
    FVar19 = (FThreadSafeStaticStat<_public:_class_IModuleInterface_*___cdecl_FModuleManager::LoadModuleWithFailureReason(FName,EModuleLoadResult_&,ELoadModuleFlags)_::_2_::FStat_STAT_ModuleLoad>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ModuleLoad,*pFVar18,
                          L"Module Load","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar19;
  bVar13 = false;
  bVar10 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  bVar12 = false;
  bVar7 = false;
  FVar31 = FVar35.ComparisonIndex.Value;
  uVar16 = FVar35.Number;
  if ((FVar31.Value == 0) && (uVar16 == 0)) {
LAB_141954722:
    bVar10 = bVar7;
    bVar13 = bVar12;
    bVar12 = false;
    FVar35 = local_1f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_230[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_230[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar10 = true;
      bVar12 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar31.Value;
        local_220.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                   ,0x3fc);
        bVar13 = true;
        bVar10 = true;
        bVar12 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141954722;
    local_238 = FVar31.Value;
    uStack_234 = uVar16;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar12 = true;
  }
  bVar7 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuLoadModuleFields>(&local_58);
    pFVar20 = ::FName::ToString(local_res10,&local_d0);
    if ((pFVar20->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
    }
    sVar2 = *pwVar27;
    pFVar8 = (FScriptContainerElement *)pwVar27;
    while (sVar2 != 0) {
      pFVar8 = pFVar8 + 2;
      iVar36 = iVar36 + 1;
      sVar2 = *(short *)pFVar8;
    }
    UE::Trace::Private::Field_WriteStringWide(0,pwVar27,iVar36);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar34 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar34 + 0x20) = 6;
    lVar21 = *(longlong *)(lVar34 + 0x20) + 1;
    *(longlong *)(lVar34 + 0x20) = lVar21;
    if (lVar34 != local_58._8_8_) {
      *(longlong *)(lVar34 + 0x28) = lVar21;
    }
    bVar7 = true;
    *(undefined8 *)(local_58._8_8_ + 0x28) = *(undefined8 *)(local_58._8_8_ + 0x20);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&Module,L"Module");
    atexit(`FModuleManager::LoadModuleWithFailureReason'::__l2::
           _dynamic_atexit_destructor_for__Module__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar20 = ::FName::GetPlainNameString(local_res10,&local_c0);
  FVar28 = Module.Data.AllocatorInstance;
  iVar32 = (pFVar20->Data).ArrayNum;
  iVar36 = iVar32 + -1;
  if (iVar32 == 0) {
    iVar36 = 0;
  }
  iVar32 = Module.Data.ArrayNum;
  local_248.Data.ArrayNum = iVar32;
  if ((iVar32 == 0) && (iVar36 != -1)) {
    iVar15 = iVar36 + 2;
LAB_14195486a:
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar15 != 0) goto LAB_141954873;
    local_248.Data.ArrayMax = 0;
  }
  else {
    iVar15 = iVar36 + 1;
    if (iVar32 == 0) goto LAB_14195486a;
LAB_141954873:
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = iVar32 + iVar15;
    if ((int)uVar16 < iVar32) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar16,0,(ForAnyElementType *)&local_248,iVar32,&local_248.Data.ArrayMax);
    if (iVar32 != 0) {
      memcpy(local_248.Data.AllocatorInstance.Data,FVar28.Data,(longlong)iVar32 * 2);
    }
  }
  ::FString::PathAppend(&local_248,(wchar_t *)(pFVar20->Data).AllocatorInstance.Data,iVar36);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_278[0] = 1;
  local_280[0] = 1;
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar28.Data = local_248.Data.AllocatorInstance.Data;
  }
  local_238 = 2;
  pFVar18 = ::FName::FName(&local_108,(wchar_t *)FVar28.Data);
  local_1b0 = *pFVar18;
  local_160 = &local_1b0;
  local_158 = &local_238;
  local_150 = local_280;
  local_148 = local_278;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_UObjects>'::__l2::<lambda_1>::operator()
            (&local_160);
  bVar5 = false;
  bVar9 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  FVar33 = *local_218;
  FVar31 = FVar33.ComparisonIndex.Value;
  uVar16 = FVar33.Number;
  if ((FVar31.Value == 0) && (uVar16 == 0)) {
LAB_1419549fd:
    bVar6 = false;
    FVar33 = local_1e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_26c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_26c._s_0,(char *)local_218[2]);
      bVar5 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210.ComparisonIndex.Value = FVar31.Value;
        local_210.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)local_218[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                   ,0x407);
        bVar5 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1419549fd;
    local_208 = FVar31.Value;
    uStack_204 = uVar16;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar6 = true;
  }
  this_00 = local_200;
  if (local_258.Object == (FModuleInfo *)0x0) {
    AddModule(local_200,local_res10[0]);
    pTVar22 = FindModule(this_00,&local_b0,local_res10[0]);
    if (&local_258 != pTVar22) {
      local_258.Object = pTVar22->Object;
      pTVar22->Object = (FModuleInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_258.SharedReferenceCount,&pTVar22->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    if ((local_258.Object == (FModuleInfo *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      pIVar17 = (IModuleInterface *)(*pcVar4)();
      return pIVar17;
    }
  }
  local_1c8 = local_258.Object;
  pTStack_1c0 = local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_258.Object == (FModuleInfo *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    pIVar17 = (IModuleInterface *)(*pcVar4)();
    return pIVar17;
  }
  if (local_1c8->bWasUnloadedAtShutdown != false) {
    ::FName::ToString(local_res10,&local_80);
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(!ModuleInfo->bWasUnloadedAtShutdown)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                        ,0x421,
                        L"Attempted to load module \'%s\' that was already unloaded at shutdown.  FModuleManager::LoadModule() was called to load a module that was previously loaded, and was unloaded at shutdown time.  If this assert goes off, you\'re trying to load a module during the shutdown phase that was already cleaned up.  The easiest way to fix this is to change your code to query for an already-loaded module instead of trying to load it directly."
                       );
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      pIVar17 = (IModuleInterface *)(*pcVar4)();
      return pIVar17;
    }
  }
  local_138 = local_res10[0];
  local_130 = local_268;
  local_128 = &local_1c8;
  local_120 = &local_228;
  local_118 = local_1f8;
  local_110 = &local_178;
  local_140 = this_00;
  ProcessPendingStaticallyLinkedModuleInitializers(this_00);
  FVar11 = local_res10[0];
  uVar16 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  if (*(int *)&(this_00->StaticallyLinkedModuleInitializers).field_0x8 !=
      *(int *)&(this_00->StaticallyLinkedModuleInitializers).field_0x34) {
    puVar29 = *(undefined1 **)&(this_00->StaticallyLinkedModuleInitializers).field_0x40;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = &(this_00->StaticallyLinkedModuleInitializers).field_0x38;
    }
    iVar36 = *(int *)(puVar29 +
                     (ulonglong)
                     (*(int *)&(this_00->StaticallyLinkedModuleInitializers).field_0x48 - 1U &
                     FVar11.Number + uVar16) * 4);
    if (iVar36 != -1) {
      do {
        lVar3 = *(longlong *)&this_00->StaticallyLinkedModuleInitializers + (longlong)iVar36 * 0x28;
        if (*(FName *)(*(longlong *)&this_00->StaticallyLinkedModuleInitializers +
                      (longlong)iVar36 * 0x28) == FVar11) {
          pTVar30 = (TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                    (lVar3 + 8);
          if (lVar3 == 0) {
            pTVar30 = (TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
          }
          if (pTVar30 !=
              (TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
            `FModuleManager::LoadModuleWithFailureReason'::__l2::<lambda_2>::operator()
                      (&local_140,pTVar30);
            goto LAB_141954c68;
          }
          break;
        }
        iVar36 = *(int *)(lVar3 + 0x20);
      } while (iVar36 != -1);
    }
  }
  if ((2 < (byte)LogModuleManager._0_1_) && ((local_268 & LogFailures) != None)) {
    ::FName::ToString(local_res10,&local_90);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  *local_1f8 = FileNotFound;
LAB_141954c68:
  pIVar17 = local_228;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c0);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_198.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_198.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1a8);
      local_198.StatData.Pad[4] = '\0';
      local_198.StatData.Pad[5] = '\0';
      local_198.StatData.Pad[6] = '\0';
      local_198.StatData.Pad[7] = '\0';
      local_198.StatData.Pad[0] = local_1a8.s.LowPart._0_1_;
      local_198.StatData.Pad[1] = local_1a8.s.LowPart._1_1_;
      local_198.StatData.Pad[2] = local_1a8.s.LowPart._2_1_;
      local_198.StatData.Pad[3] = local_1a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar23,&local_198);
      piVar1 = &pFVar23->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    uVar25 = UE::Trace::Private::TimeGetTimestamp();
    lVar34 = uVar25 - UE::Trace::Private::GStartCycle;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar26 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar26 - *(int *)&pFVar26->Cursor < 8) {
      pFVar26 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar26->Cursor = lVar34 * 0x100 + 0x12;
    pFVar26->Cursor = pFVar26->Cursor + 8;
    pFVar26->Committed = pFVar26->Cursor;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (FVar35 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_188.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
      local_188.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1a0);
      local_188.StatData.Pad[4] = '\0';
      local_188.StatData.Pad[5] = '\0';
      local_188.StatData.Pad[6] = '\0';
      local_188.StatData.Pad[7] = '\0';
      local_188.StatData.Pad[0] = local_1a0.s.LowPart._0_1_;
      local_188.StatData.Pad[1] = local_1a0.s.LowPart._1_1_;
      local_188.StatData.Pad[2] = local_1a0.s.LowPart._2_1_;
      local_188.StatData.Pad[3] = local_1a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar23,&local_188);
      piVar1 = &pFVar23->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_70);
  FEngineTrackedActivityScope::~FEngineTrackedActivityScope(local_270);
LAB_141954ecd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  return pIVar17;
}

// MakeUniqueModuleFilename @ 141956160

void __thiscall
FModuleManager::MakeUniqueModuleFilename
          (FModuleManager *this,FName param_1,FString *param_2,FString *param_3)

{
  FModuleInfo *this_00;
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FModuleManager::FModuleInfo,1> *pTVar5;
  IFileManager *pIVar6;
  int iVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  FName local_res10;
  TReferenceControllerBase<1> *local_res18;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TSharedRef<FModuleManager::FModuleInfo,1> local_58 [2];
  
  local_res10 = param_1;
  pTVar5 = FindModuleChecked(this,local_58,param_1);
  this_00 = pTVar5->Object;
  local_res18 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58[0].SharedReferenceCount.ReferenceController._4_4_,
                      local_58[0].SharedReferenceCount.ReferenceController._0_4_));
  pIVar6 = IFileManager::Get();
  dVar2 = __real_bff0000000000000;
  do {
    rand();
    ::FString::PrintfImpl(&local_98,L"%04d");
    if (param_2 != &local_98) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_98.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    ::FName::ToString(&local_res10,&local_78);
    iVar3 = local_78.Data.ArrayNum;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (iVar3 != 0) {
      FVar8.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar4 = 0;
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar10 = iVar4;
    }
    iVar3 = ::FString::Find(&this_00->OriginalFilename,(wchar_t *)FVar8.Data,iVar10,IgnoreCase,
                            FromEnd,-1);
    if (iVar3 != -1) {
      iVar10 = local_78.Data.ArrayNum + -1 + iVar3;
      if (local_78.Data.ArrayNum == 0) {
        iVar10 = iVar3;
      }
      iVar3 = (this_00->OriginalFilename).Data.ArrayNum;
      iVar11 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar11 = iVar4;
      }
      if (iVar3 == 0) {
        pwVar9 = L"";
        iVar3 = iVar4;
      }
      else {
        pwVar9 = (wchar_t *)(this_00->OriginalFilename).Data.AllocatorInstance.Data;
        iVar3 = iVar3 + -1;
      }
      iVar7 = iVar3;
      if (iVar11 - iVar10 < iVar3) {
        iVar7 = iVar11 - iVar10;
      }
      if (0 < iVar7) {
        iVar4 = iVar7;
      }
      ::FString::FString((FString *)local_58,
                         (wchar_t *)((longlong)pwVar9 + ((longlong)iVar3 - (longlong)iVar4) * 2));
      iVar4 = (this_00->OriginalFilename).Data.ArrayNum;
      iVar3 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      if (iVar10 < iVar3) {
        iVar3 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar3) {
        iVar10 = iVar3;
      }
      if (iVar4 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(this_00->OriginalFilename).Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_68,pwVar9,iVar10);
      ::FString::PrintfImpl(&local_88,L"%s-%s%s");
      if (param_3 != &local_88) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_88.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58[0].Object != (FModuleInfo *)0x0) {
        FMemory::Free(local_58[0].Object);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((param_3->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    dVar12 = (double)(**(code **)((longlong)*pIVar6 + 0xd0))(pIVar6,pwVar9);
  } while (dVar12 != dVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  return;
}

// ModuleExists @ 141956b10

bool __thiscall FModuleManager::ModuleExists(FModuleManager *this,wchar_t *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArray<FModuleDiskInfo,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FindModules(this,param_1,&local_18);
  iVar4 = local_18.ArrayNum;
  if (local_18.ArrayNum == 0) {
    if (param_2 != (FString *)0x0) {
      ::FString::Reset(param_2,0);
      iVar4 = local_18.ArrayNum;
    }
    bVar2 = false;
  }
  else {
    if (param_2 != (FString *)0x0) {
      if (local_18.ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      iVar4 = *(int *)(local_18.AllocatorInstance.Data + 0x10) + -1;
      if (*(int *)(local_18.AllocatorInstance.Data + 0x10) == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange(param_2,*(wchar_t **)(local_18.AllocatorInstance.Data + 8),iVar4);
      iVar4 = local_18.ArrayNum;
    }
    bVar2 = true;
  }
  DestructItems<FModuleDiskInfo,int>((FModuleDiskInfo *)local_18.AllocatorInstance.Data,iVar4);
  if ((FModuleDiskInfo *)local_18.AllocatorInstance.Data != (FModuleDiskInfo *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// OnObjectCleanup @ 141957600

void __thiscall FModuleManager::OnObjectCleanup(FModuleManager *this)

{
  return;
}

// ProcessPendingStaticallyLinkedModuleInitializers @ 14195de30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FModuleManager::ProcessPendingStaticallyLinkedModuleInitializers(FModuleManager *this)

{
  TArray<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
  FVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
  FVar13;
  undefined1 local_res8 [8];
  TPairInitializer<FName_const_&,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_const_&>
  local_res10;
  FName local_res20;
  TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> **local_68;
  longlong local_60;
  FString local_58;
  FString local_48;
  
  iVar4 = (this->PendingStaticallyLinkedModuleInitializers).ArrayNum;
  if (iVar4 != 0) {
    pTVar1 = &this->PendingStaticallyLinkedModuleInitializers;
    FVar13 = (this->PendingStaticallyLinkedModuleInitializers).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                   )0x0) {
      FVar13 = (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                )pTVar1;
    }
    FVar3 = (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
             )((longlong)FVar13 + (longlong)iVar4 * 0x28);
    while( true ) {
      if ((this->PendingStaticallyLinkedModuleInitializers).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar13 == FVar3) break;
      if (6 < (byte)LogModuleManager._0_1_) {
        FLazyName::Resolve((FLazyName *)FVar13);
        ::FName::ToString(&local_res20,&local_58);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      FLazyName::Resolve((FLazyName *)FVar13);
      pTVar8 = local_res10.Value;
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)local_res10.Value);
      if (*(int *)&(this->StaticallyLinkedModuleInitializers).field_0x8 !=
          *(int *)&(this->StaticallyLinkedModuleInitializers).field_0x34) {
        puVar5 = *(undefined1 **)&(this->StaticallyLinkedModuleInitializers).field_0x40;
        puVar12 = &(this->StaticallyLinkedModuleInitializers).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar12 = puVar5;
        }
        iVar11 = *(int *)(puVar12 +
                         (ulonglong)
                         (*(int *)&(this->StaticallyLinkedModuleInitializers).field_0x48 - 1U &
                         (int)((ulonglong)pTVar8 >> 0x20) + uVar10) * 4);
        if (iVar11 != -1) {
          lVar6 = *(longlong *)&(this->StaticallyLinkedModuleInitializers).field_0x0;
          do {
            if (*(TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy> **)
                 (lVar6 + (longlong)iVar11 * 0x28) == pTVar8) {
              ::FName::ToString((FName *)&local_res10.Value,&local_48);
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!StaticallyLinkedModuleInitializers.Contains(NameKey)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                                 ,0x7af,L"Duplicate module \'%s\' registered");
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              break;
            }
            iVar11 = *(int *)(lVar6 + 0x20 + (longlong)iVar11 * 0x28);
          } while (iVar11 != -1);
        }
      }
      local_68 = &local_res10.Value;
      local_60 = (longlong)FVar13 + 0x10;
      TSet<TTuple<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FName_const_&,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_const_&>_>
                ((TSet<TTuple<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                  *)&this->StaticallyLinkedModuleInitializers,&local_res10,(bool *)&local_68);
      FVar13 = (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                )((longlong)FVar13 + 0x28);
    }
    FVar13 = (this->PendingStaticallyLinkedModuleInitializers).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                   )0x0) {
      FVar13 = (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                )pTVar1;
    }
    DestructItems<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,int>
              ((TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)FVar13,(this->PendingStaticallyLinkedModuleInitializers).ArrayNum);
    piVar2 = &(this->PendingStaticallyLinkedModuleInitializers).ArrayMax;
    (this->PendingStaticallyLinkedModuleInitializers).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>_>
                (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// QueryModule @ 14195f010

bool __thiscall
FModuleManager::QueryModule(FModuleManager *this,FName param_1,FModuleStatus *param_2)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FModuleInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  IModuleInterface *pIVar5;
  bool bVar6;
  TSharedPtr<FModuleManager::FModuleInfo,1> *pTVar7;
  FModuleStatus *pFVar8;
  FString *pFVar9;
  FName local_res10;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_28;
  
  local_res10 = param_1;
  pTVar7 = FindModule(this,&local_28,param_1);
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar7->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pFVar3 == (FModuleInfo *)0x0) {
    bVar6 = false;
  }
  else {
    pFVar8 = (FModuleStatus *)::FName::ToString(&local_res10,(FString *)&local_28);
    if (param_2 != pFVar8) {
      pFVar4 = (param_2->Name).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_2->Name).Data.AllocatorInstance.Data = (pFVar8->Name).Data.AllocatorInstance.Data;
      (pFVar8->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Name).Data.ArrayNum = (pFVar8->Name).Data.ArrayNum;
      (param_2->Name).Data.ArrayMax = (pFVar8->Name).Data.ArrayMax;
      (pFVar8->Name).Data.ArrayNum = 0;
      (pFVar8->Name).Data.ArrayMax = 0;
    }
    if (local_28.Object != (FModuleInfo *)0x0) {
      FMemory::Free(local_28.Object);
    }
    pFVar9 = FPaths::ConvertRelativePathToFull((FString *)&local_28,&pFVar3->Filename);
    pFVar1 = &param_2->FilePath;
    if (pFVar1 != pFVar9) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->FilePath).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (param_2->FilePath).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_28.Object != (FModuleInfo *)0x0) {
      FMemory::Free(local_28.Object);
    }
    pIVar5 = (pFVar3->Module).Ptr;
    param_2->bIsLoaded = pIVar5 != (IModuleInterface *)0x0;
    if (pIVar5 != (IModuleInterface *)0x0) {
      bVar6 = (bool)(**(code **)((longlong)*(pFVar3->Module).Ptr + 0x38))();
      param_2->bIsGameModule = bVar6;
    }
    bVar6 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar6;
}

// QueryModules @ 14195f150

/* WARNING: Removing unreachable block (ram,0x00014195f672) */
/* WARNING: Removing unreachable block (ram,0x00014195f681) */

void __thiscall
FModuleManager::QueryModules
          (FModuleManager *this,TArray<FModuleStatus,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FModuleStatus *pFVar3;
  FName FVar4;
  void *_Src;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FString *pFVar11;
  size_t sVar12;
  byte bVar13;
  longlong lVar14;
  FName *this_00;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_118;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  undefined2 local_f8;
  FString local_f0;
  FString local_e0;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_90;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  if (&this->ModulesCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ModulesCriticalSection);
  uVar15 = *(int *)&(this->Modules).field_0x8 - *(int *)&(this->Modules).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  pFVar3 = (FModuleStatus *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < (int)uVar15) {
    DestructItems<FModuleStatus,int>(pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar15,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<FModuleStatus,int>(pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  iVar10 = *(int *)&(this->Modules).field_0x28;
  local_d0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Modules).field_0x10;
  local_90 = &this->Modules;
  iVar17 = 0;
  uStack_bc = 1;
  iStack_ac = iVar17;
  iStack_c0 = iVar17;
  local_a8 = iVar17;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&(this->Modules).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_d0;
    }
    uVar15 = *puVar19;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar15 == 0) {
      lVar14 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14195f28f;
      uVar15 = puVar19[lVar14 + 1];
    }
    uStack_bc = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_bc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_98 = (int)lVar14;
    iStack_ac = local_a8 + -1 + local_98;
    if (iVar10 < iStack_ac) {
      iStack_ac = iVar10;
    }
  }
LAB_14195f28f:
  local_res20 = *(uint *)&(this->Modules).field_0x28;
  local_c8 = &this->Modules;
  iStack_a0 = *(int *)&(this->Modules).field_0x8 - *(int *)&(this->Modules).field_0x34;
  uStack_b0 = 0xffffffff;
  uVar15 = local_res20 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
  iVar16 = (int)local_res20 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  bVar13 = (byte)local_res20;
  local_b8 = (undefined1 *)local_d0;
  iStack_a4 = iStack_ac;
  local_88 = local_c8;
  TStack_80.Array = local_d0;
  if ((((int)local_res20 < 0) || (iVar10 < (int)local_res20)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&(this->Modules).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Modules).field_0x10;
  uVar21 = local_res20;
  if (local_res20 != uVar2) {
    puVar18 = *(undefined1 **)&(this->Modules).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar21 = -1 << (bVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar14 = (longlong)iVar16;
      uVar15 = uVar15 + 0x20;
      iVar16 = iVar16 + 1;
      local_res20 = uVar2;
      uVar21 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14195f3c0;
      uVar21 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_94 = (int)lVar14;
    local_res20 = local_94 + -1 + uVar15;
    uVar21 = local_res20;
    if ((int)uVar2 < (int)local_res20) {
      local_res20 = uVar2;
      uVar21 = uVar2;
    }
  }
LAB_14195f3c0:
  while( true ) {
    pTVar7 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      pTVar20 = local_d0;
    }
    if (((TStack_80.CurrentBitIndex == uVar21) && (TStack_80.Array == pTVar20)) &&
       (pTVar7 == local_90)) {
                    /* WARNING: Could not recover jumptable at 0x00014195f6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ModulesCriticalSection);
      return;
    }
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00 = (FName *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    FVar4 = this_00[1];
    local_f8 = 0;
    pFVar11 = ::FName::ToString(this_00,&local_48);
    if (&local_118 != pFVar11) {
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_118.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_118.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_f0.Data.ArrayNum = *(int *)((longlong)FVar4 + 0x18);
    lVar14 = (longlong)local_f0.Data.ArrayNum;
    _Src = *(void **)((longlong)FVar4 + 0x10);
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f0.Data.ArrayNum == 0) {
      local_f0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,local_f0.Data.ArrayNum,
                 &local_f0.Data.ArrayMax);
      memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
    }
    local_58.DataPtr = FWindowsPlatformProcess::BaseDir();
    iVar10 = iVar17;
    if (local_58.DataPtr != (wchar_t *)0x0) {
      sVar12 = wcslen(local_58.DataPtr);
      iVar10 = (int)sVar12;
    }
    local_58.Size = iVar10;
    UE4Paths_Private::ConvertRelativePathToFullInternal<TStringView<wchar_t>_>
              (&local_e0,&local_58,&local_f0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    local_108 = local_e0.Data.AllocatorInstance.Data;
    local_100._0_4_ = local_e0.Data.ArrayNum;
    local_100._4_4_ = local_e0.Data.ArrayMax;
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    local_f8 = CONCAT11(local_f8._1_1_,*(longlong *)((longlong)FVar4 + 0x28) != 0);
    if (*(longlong *)((longlong)FVar4 + 0x28) != 0) {
      uVar9 = (**(code **)(**(longlong **)((longlong)FVar4 + 0x28) + 0x38))();
      local_f8 = CONCAT11(uVar9,local_f8._0_1_);
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar5 + (longlong)param_1->ArrayMax * 0x28)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar10 = param_1->ArrayNum;
    if (iVar10 == param_1->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar10 + 1;
    pFVar5 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x28) = 0;
    pFVar5 = pFVar5 + (longlong)iVar10 * 0x28;
    *(FScriptContainerElement **)pFVar5 = local_118.Data.AllocatorInstance.Data;
    *(int *)(pFVar5 + 8) = local_118.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_118.Data.ArrayMax;
    *(undefined8 *)(pFVar5 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar5 + 0x10) = local_108;
    *(int *)(pFVar5 + 0x18) = (int)local_100;
    *(int *)(pFVar5 + 0x1c) = local_100._4_4_;
    pFVar5[0x20] = local_f8._0_1_;
    pFVar5[0x21] = local_f8._1_1_;
    local_100 = 0;
    local_108 = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    pTVar20 = local_d0;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// RegisterStaticallyLinkedModule @ 141962160

void __cdecl
FModuleManager::RegisterStaticallyLinkedModule
          (FLazyName *param_1,_func___cdecl_IModuleInterface_ptr *param_2)

{
  TArray<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  FLiteralOrName FVar5;
  FLiteralOrName FVar6;
  bool bVar7;
  int iVar8;
  TOptional<FModuleManager> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
  FVar12;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pTVar9 = UE::Core::Private::GetModuleManagerSingleton();
  if (pTVar9->bIsSet == false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pTVar1 = &(pTVar9->TypedValue).PendingStaticallyLinkedModuleInitializers;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = param_2;
    if (param_2 == (_func___cdecl_IModuleInterface_ptr *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  iVar8 = (pTVar9->TypedValue).PendingStaticallyLinkedModuleInitializers.ArrayNum;
  piVar3 = &(pTVar9->TypedValue).PendingStaticallyLinkedModuleInitializers.ArrayMax;
  if (iVar8 == *piVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>_>
                      (0x828,&pTVar1->AllocatorInstance,piVar3);
  }
  FVar5 = param_1->Either;
  FVar6 = *(FLiteralOrName *)&param_1->Number;
  (pTVar9->TypedValue).PendingStaticallyLinkedModuleInitializers.ArrayNum = iVar8 + 1;
  FVar12 = (pTVar9->TypedValue).PendingStaticallyLinkedModuleInitializers.AllocatorInstance.
           SecondaryData;
  if (FVar12 == (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
                 )0x0) {
    FVar12 = (ForElementType<TTuple<FLazyName,TDelegate<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>_>_>
              )pTVar1;
  }
  lVar2 = (longlong)iVar8 * 5 + 2;
  *(FLiteralOrName *)((undefined1 *)((longlong)FVar12 + -0x10) + lVar2 * 8) = FVar5;
  ((FLiteralOrName *)((undefined1 *)((longlong)FVar12 + -0x10) + lVar2 * 8))[1] = FVar6;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar12 + lVar2 * 8),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// ResetModulePathsCache @ 1419674a0

void __thiscall FModuleManager::ResetModulePathsCache(FModuleManager *this)

{
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Reset((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
         *)&this->ModulePathsCache);
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&this->PendingEngineBinariesDirectories,&this->EngineBinariesDirectories);
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (&this->PendingGameBinariesDirectories,&this->GameBinariesDirectories);
  return;
}

// SetGameBinariesDirectory @ 14196c820

void __thiscall FModuleManager::SetGameBinariesDirectory(FModuleManager *this,wchar_t *param_1)

{
  return;
}

// StartProcessingNewlyLoadedObjects @ 14196ebf0

void __thiscall FModuleManager::StartProcessingNewlyLoadedObjects(FModuleManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bCanProcessNewlyLoadedObjects == false) {
    this->bCanProcessNewlyLoadedObjects = true;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3710524381336700972>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                     ,0x82c,"bCanProcessNewlyLoadedObjects == false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bCanProcessNewlyLoadedObjects = true;
  return;
}

// TearDown @ 14196f4c0

void __cdecl FModuleManager::TearDown(void)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FModuleManager> *this;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                       ,0xc3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = UE::Core::Private::GetModuleManagerSingleton();
  if (this->bIsSet != false) {
    ~FModuleManager(&this->TypedValue);
    this->bIsSet = false;
  }
  return;
}

// UnloadModule @ 14197a340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FModuleManager::UnloadModule(FModuleManager *this,FName param_1,bool param_2,bool param_3)

{
  IModuleInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName local_res10;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_28;
  FString local_18;
  
  local_res10 = param_1;
  if (5 < (byte)LogModuleManager._0_1_) {
    ::FName::ToString(&local_res10,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FindModule(this,&local_28,local_res10);
  if (local_28.Object != (FModuleInfo *)0x0) {
    if ((local_28.Object == (FModuleInfo *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (((local_28.Object)->Module).Ptr != (IModuleInterface *)0x0) {
      LOCK();
      (local_28.Object)->bIsReady = (TAtomic<bool>)0x0;
      UNLOCK();
      (**(code **)((longlong)*((local_28.Object)->Module).Ptr + 0x20))();
      pIVar1 = ((local_28.Object)->Module).Ptr;
      if (pIVar1 != (IModuleInterface *)0x0) {
        ((local_28.Object)->Module).Ptr = (IModuleInterface *)0x0;
        (**(code **)*pIVar1)(pIVar1,1);
      }
      if (param_2) {
        (local_28.Object)->bWasUnloadedAtShutdown = true;
        bVar3 = true;
      }
      else {
        TMulticastDelegate<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
        ::Broadcast(&this->ModulesChangedEvent,local_res10,ModuleUnloaded);
        bVar3 = true;
      }
      goto LAB_14197a45e;
    }
  }
  bVar3 = false;
LAB_14197a45e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// UnloadModulesAtShutdown @ 14197a490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FModuleManager::UnloadModulesAtShutdown(FModuleManager *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  FModulePair *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  FName *pFVar20;
  ForAnyElementType this_00;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *pTVar24;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_f0;
  int local_e8;
  int local_e4;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<FName,TSharedRef<FModuleManager::FModuleInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FModuleManager::FModuleInfo,1>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80 [2];
  undefined4 local_54;
  
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3710524381336700301>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                          ,0x58d,"IsInGameThread()"), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (CpuChannel->Enabled < 0) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    if (__CpuProfilerEventSpecId1423 == 0) {
      __CpuProfilerEventSpecId1423 =
           FCpuProfilerTrace::OutputEventType
                     ("UnloadModulesAtShutdown",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                      ,0x58f);
    }
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1423);
  }
  puVar1 = &(this->Modules).field_0x10;
  local_108.Data = (FScriptContainerElement *)0x0;
  pTVar24 = &this->Modules;
  local_100 = 0;
  iStack_d8 = 0;
  iVar15 = *(int *)&(this->Modules).field_0x28;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = iStack_d8;
  if (iVar15 != 0) {
    puVar22 = *(uint **)&(this->Modules).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar17 = *puVar22;
    local_c0 = 0;
    iStack_d8 = 0;
    while (uVar17 == 0) {
      lVar16 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14197a5cf;
      uVar17 = puVar22[lVar16 + 1];
    }
    uStack_d4 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uStack_d4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_e8 = (int)lVar16;
    iStack_c4 = local_c0 + -1 + local_e8;
    if (iVar15 < iStack_c4) {
      iStack_c4 = iVar15;
    }
  }
LAB_14197a5cf:
  uVar17 = *(uint *)&(this->Modules).field_0x28;
  uStack_bc = local_54;
  iStack_b8 = *(int *)&(this->Modules).field_0x8 - *(int *)&(this->Modules).field_0x34;
  uVar23 = uVar17 & 0xffffffe0;
  uStack_c8 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
  TStack_a8.CurrentBitIndex = iStack_c4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar17 >> 5;
  TStack_a8._28_4_ = local_54;
  TStack_a8.BaseBitIndex = local_c0;
  uStack_88 = CONCAT44(uStack_b4,iStack_b8);
  local_f0 = pTVar24;
  local_e0 = pTVar24;
  local_d0 = puVar1;
  local_b0 = pTVar24;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar15 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar6 = *(uint *)&(this->Modules).field_0x28;
  if (uVar17 != uVar6) {
    puVar21 = *(undefined1 **)&(this->Modules).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14197a6d0;
      uVar17 = *(uint *)(puVar21 + lVar16 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_e4 = (int)lVar16;
    uVar17 = local_e4 + -1 + uVar23;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
    }
  }
LAB_14197a6d0:
  do {
    pTVar11 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FModuleManager::FModuleInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a8.CurrentBitIndex == uVar17) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar24)
       ) {
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,int,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::__l2::FModulePair,TLess<void>_>_>
                ((FModulePair *)local_108.Data,(int)local_100,local_res8,(TLess<void> *)local_res18)
      ;
      iVar15 = (int)local_100;
      pFVar20 = (FName *)(local_108.Data + 0x10);
      pFVar3 = (FName *)(local_108.Data + (longlong)(int)local_100 * 0x18);
      while( true ) {
        if ((int)local_100 != iVar15) {
          `TCheckedPointerIterator<`FModuleManager::UnloadModulesAtShutdown'::__l2::FModulePair,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar20 + -2 == pFVar3) break;
        (**(code **)(*(longlong *)*pFVar20 + 0x10))();
        pFVar20->ComparisonIndex = 0;
        pFVar20->Number = 0;
        pFVar20 = pFVar20 + 3;
      }
      iVar15 = (int)local_100;
      pFVar4 = (FModulePair *)(local_108.Data + (longlong)(int)local_100 * 0x18);
      this_00.Data = local_108.Data;
      while( true ) {
        if ((int)local_100 != iVar15) {
          `TCheckedPointerIterator<`FModuleManager::UnloadModulesAtShutdown'::__l2::FModulePair,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_f8);
        }
        if ((FModulePair *)this_00.Data == pFVar4) break;
        if (5 < (byte)LogModuleManager._0_1_) {
          ::FName::ToString((FName *)this_00.Data,local_80);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
          if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
          }
        }
        UnloadModule(this,((FModulePair *)this_00.Data)->ModuleName,true,true);
        if (5 < (byte)LogModuleManager._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
        }
        this_00.Data = this_00.Data + 0x18;
      }
      if ((FModulePair *)local_108.Data != (FModulePair *)0x0) {
        FMemory::Free(local_108.Data);
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    puVar18 = (undefined8 *)((longlong)TStack_a8.CurrentBitIndex * 0x20 + *(longlong *)pTVar11);
    pTVar7 = (TReferenceControllerBase<1> *)puVar18[2];
    lVar16 = puVar18[1];
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar8 = *(longlong **)(lVar16 + 0x28);
    if ((plVar8 != (longlong *)0x0) && (cVar14 = (**(code **)(*plVar8 + 0x30))(), cVar14 != '\0')) {
      uVar9 = *(undefined8 *)(lVar16 + 0x28);
      lVar16 = puVar18[1];
      iVar15 = (int)local_100;
      if ((int)local_100 == local_100._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_108,(int *)((longlong)&local_100 + 4));
      }
      local_100 = CONCAT44(local_100._4_4_,iVar15 + 1);
      pFVar2 = local_108.Data + (longlong)iVar15 * 0x18;
      iVar15 = *(int *)(lVar16 + 0x34);
      *(undefined8 *)&pFVar2->field_0x0 = *puVar18;
      *(int *)(pFVar2 + 8) = iVar15;
      *(undefined8 *)(pFVar2 + 0x10) = uVar9;
      pTVar24 = local_f0;
      if ((iVar15 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("LoadOrder > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                              ,0x59b,L""), pTVar24 = local_f0, bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// UnloadOrAbandonModuleWithCallback @ 14197a920

void __thiscall
FModuleManager::UnloadOrAbandonModuleWithCallback
          (FModuleManager *this,FName param_1,FOutputDevice *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FModuleInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TSharedPtr<FModuleManager::FModuleInfo,1> *pTVar6;
  TSharedRef<FModuleManager::FModuleInfo,1> local_28;
  TSharedPtr<FModuleManager::FModuleInfo,1> local_18;
  
  FindModuleChecked(this,&local_28,param_1);
  (**(code **)((longlong)*((local_28.Object)->Module).Ptr + 0x10))();
  bVar4 = DoesLoadedModuleHaveUObjects(this,param_1);
  if (bVar4) {
    cVar5 = (**(code **)((longlong)*((local_28.Object)->Module).Ptr + 0x28))();
    if (cVar5 != '\0') {
      bVar4 = UnloadModule(this,param_1,false,true);
      if (!bVar4) {
        FOutputDevice::Log(param_2,
                           L"Module couldn\'t be unloaded, and so can\'t be recompiled while the engine is running."
                          );
      }
      goto LAB_14197a9b6;
    }
  }
  FOutputDevice::Log(param_2,
                     L"Module being reloaded does not support dynamic unloading -- abandoning existing loaded module so that we can load the recompiled version!"
                    );
  AbandonModule(this,param_1);
LAB_14197a9b6:
  pTVar6 = FindModule(this,&local_18,param_1);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((pFVar2 == (FModuleInfo *)0x0) || ((pFVar2->Module).Ptr == (IModuleInterface *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsModuleLoaded(InModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\ModuleManager.cpp"
                       ,0x7cc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// WarnIfItWasntSafeToLoadHere @ 14197c860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FModuleManager::WarnIfItWasntSafeToLoadHere(FName param_1)

{
  bool bVar1;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  bVar1 = IsInGameThread();
  if ((!bVar1) && (2 < (byte)LogModuleManager._0_1_)) {
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogModuleManager);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 15047ee10

bool __thiscall `FModuleManager::AddModule'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3710524381336699328>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3710524381336699328>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

