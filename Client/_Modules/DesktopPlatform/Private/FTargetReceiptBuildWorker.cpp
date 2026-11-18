// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 5

// FTargetReceiptBuildWorker @ 142d1c010

FTargetReceiptBuildWorker * __thiscall
FTargetReceiptBuildWorker::FTargetReceiptBuildWorker
          (FTargetReceiptBuildWorker *this,wchar_t *param_1)

{
  this->_padding_ = (longlong)&___7FTargetReceiptBuildWorker__6B_;
  (this->PopulateTaskRef).Reference = (FBaseGraphTask *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  *(undefined8 *)&this->EnvironmentVariables = 0;
  *(undefined8 *)&(this->EnvironmentVariables).field_0x8 = 0;
  *(undefined8 *)&(this->EnvironmentVariables).field_0x20 = 0;
  *(undefined4 *)&(this->EnvironmentVariables).field_0x28 = 0;
  *(undefined4 *)&(this->EnvironmentVariables).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnvironmentVariables).field_0x34 = 0;
  *(undefined4 *)&(this->EnvironmentVariables).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EnvironmentVariables).field_0x40 = 0;
  *(undefined4 *)&(this->EnvironmentVariables).field_0x48 = 0;
  (this->ExecutablePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutablePaths).ArrayNum = 0;
  (this->ExecutablePaths).ArrayMax = 0;
  (this->ExecutableMeta).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutableMeta).ArrayNum = 0;
  (this->ExecutableMeta).ArrayMax = 0;
  (this->BuildSystemVersion).A = 0;
  (this->BuildSystemVersion).B = 0;
  (this->BuildSystemVersion).C = 0;
  (this->BuildSystemVersion).D = 0;
  (this->FunctionVersions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionVersions).ArrayNum = 0;
  (this->FunctionVersions).ArrayMax = 0;
  this->bAbortRequested = (atomic<bool>)0x0;
  this->bEnabled = false;
  return this;
}

// ~FTargetReceiptBuildWorker @ 142d1ccd0

void __thiscall
FTargetReceiptBuildWorker::~FTargetReceiptBuildWorker(FTargetReceiptBuildWorker *this)

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
  return;
}

// GetWorkerFactory @ 142d28310

FTargetReceiptBuildWorkerFactory * __thiscall
FTargetReceiptBuildWorker::GetWorkerFactory(FTargetReceiptBuildWorker *this)

{
  return (FTargetReceiptBuildWorkerFactory *)&this->InternalFactory;
}

// PopulateWorkerFromReceipt @ 142d2bd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTargetReceiptBuildWorker::PopulateWorkerFromReceipt
          (FTargetReceiptBuildWorker *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  TArray<TTuple<FString,FGuid>,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  float fVar7;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar8;
  FBufferOwner *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  IFileManager *pIVar15;
  FString *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  ulong64 uVar21;
  void *pvVar22;
  FBlake3Hash *pFVar23;
  FArchive *pFVar24;
  int *piVar25;
  TMemoryView<void_const_> *pTVar26;
  FGuid *pFVar27;
  TStringView<char8_t> *pTVar28;
  IModularFeatures *pIVar29;
  wchar_t *pwVar30;
  undefined **ppuVar31;
  FStaticBasicLogRecord *pFVar32;
  ForAnyElementType FVar33;
  int *piVar34;
  undefined1 uVar35;
  FScriptContainerElement *this_00;
  longlong lVar36;
  ForAnyElementType FVar37;
  TArray<TTuple<FIoHash,unsigned___int64>,TSizedDefaultAllocator<32>_> *pTVar38;
  TRefCountPtr<FBaseGraphTask> *pTVar39;
  FTargetReceiptBuildWorker *pFVar40;
  uint uVar41;
  FScriptContainerElement *pFVar42;
  FScriptContainerElement *pFVar43;
  undefined1 auStackY_828 [32];
  int *piVar44;
  uint in_stack_fffffffffffff814;
  undefined1 local_7c7;
  undefined1 local_7c6;
  undefined1 local_7c5 [5];
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  ForAnyElementType local_790;
  undefined8 local_788;
  uint local_780;
  FProcHandle local_778;
  ForAnyElementType local_770;
  int local_768;
  int local_764;
  TArray<FString,TSizedDefaultAllocator<32>_> local_760;
  longlong local_750;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_748;
  FGuid local_740;
  FCbFieldView local_730;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_720;
  FString local_718;
  FGuid local_708;
  IFileManager *local_6f8;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  undefined1 local_6c0 [16];
  FBufferOwner *local_6b0;
  longlong local_6a8;
  FTargetReceiptBuildWorker *local_6a0;
  longlong local_698;
  FGuid local_690;
  longlong local_680;
  TCbBuffer<FCbFieldView> local_678;
  FString local_660;
  FString local_650;
  FString local_640;
  LARGE_INTEGER local_630;
  int *local_628;
  longlong local_620;
  TArray<TTuple<FIoHash,unsigned___int64>,TSizedDefaultAllocator<32>_> *local_618;
  FScriptContainerElement *local_610;
  FScriptContainerElement *local_608;
  longlong local_600;
  undefined8 local_5f8;
  FBufferOwner *local_5f0;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FCbFieldView local_5b8;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  LARGE_INTEGER local_598;
  TCbFieldIterator<FCbFieldView> local_590;
  FScriptContainerElement *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  wchar_t *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  wchar_t *local_558;
  int iStack_550;
  undefined4 uStack_54c;
  TMemoryView<void_const_> local_548;
  FString local_538;
  FString local_528;
  char *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  char *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  FCbFieldView local_4f8;
  char *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  FCbObjectView local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  TStringView<wchar_t> local_488;
  wchar_t *local_478;
  undefined4 local_470;
  TStringView<wchar_t> local_468;
  wchar_t *local_458;
  undefined4 local_450;
  TStringView<wchar_t> local_448;
  wchar_t *local_438;
  undefined4 local_430;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  FString local_378;
  TStringView<char8_t> local_368;
  TStringView<char8_t> local_358;
  FCbFieldView local_348;
  FCbFieldView local_338;
  TStringView<char8_t> local_328;
  FCbFieldView local_318;
  TStringView<char8_t> local_308;
  TStringView<char8_t> local_2f8;
  FCbFieldView local_2e8;
  undefined1 local_2d8 [8];
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  FGuid local_25c;
  TStringView<char8_t> local_248;
  TMemoryView<void_const_> local_238;
  FGuid local_228;
  FTargetReceipt local_218;
  FBlake3Hash local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_828;
  if (this->bAbortRequested != (atomic<bool>)0x0) {
    return;
  }
  local_6a0 = this;
  pIVar15 = IFileManager::Get();
  local_7b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7b0.Data.ArrayNum = 0;
  local_7b0.Data.ArrayMax = 0;
  local_7a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7a0.Data.ArrayNum = 0;
  local_7a0.Data.ArrayMax = 0;
  local_7c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7c0.Data.ArrayNum = 0;
  local_7c0.Data.ArrayMax = 0;
  local_6f8 = pIVar15;
  bVar10 = ::FString::StartsWith(param_1,L"$(ProjectDir)",0xd,IgnoreCase);
  if (bVar10) {
    pFVar16 = FPaths::ProjectDir(&local_2b0);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar30 = L"";
    }
    else {
      pwVar30 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    pFVar16 = ::FString::Replace(param_1,&local_2c0,L"$(ProjectDir)",pwVar30,IgnoreCase);
    pFVar16 = FPaths::ConvertRelativePathToFull(&local_2d0,pFVar16);
    if (&local_7b0 != pFVar16) {
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
      local_7b0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7b0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      local_7b0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_6e0,&local_7b0,L".BuildVersion");
    if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
    }
    local_7a0.Data.AllocatorInstance.Data = local_6e0.Data.AllocatorInstance.Data;
    local_7a0.Data.ArrayNum = local_6e0.Data.ArrayNum;
    local_7a0.Data.ArrayMax = local_6e0.Data.ArrayMax;
    local_6e0.Data.ArrayNum = 0;
    local_6e0.Data.ArrayMax = 0;
    local_6e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar16 = FPaths::ProjectSavedDir();
    local_470 = 0x1c;
    local_488.DataPtr = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    iVar12 = (pFVar16->Data).ArrayNum;
    local_488.Size = iVar12 + -1;
    if (iVar12 == 0) {
      local_488.Size = 0;
    }
    local_478 = L"GeneratedWorkerBuildVersions";
    FPaths::CombineInternal(&local_5e8,&local_488,2);
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_5e8.Data.ArrayNum != 0) {
      FVar37.Data = local_5e8.Data.AllocatorInstance.Data;
    }
    pFVar16 = ::FString::Replace(param_1,&local_290,L"$(ProjectDir)",(wchar_t *)FVar37.Data,
                                 IgnoreCase);
    ::FString::ConcatFC(&local_4b8,pFVar16,L".BuildVersion");
    pFVar16 = FPaths::ConvertRelativePathToFull(&local_2a0,&local_4b8);
    if (&local_7c0 != pFVar16) {
      if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
      }
      local_7c0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      local_7c0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar10 = ::FString::StartsWith(param_1,L"$(EngineDir)",0xc,IgnoreCase);
    if (!bVar10) {
      if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
      }
      goto LAB_142d2d9fc;
    }
    pFVar16 = FPaths::EngineDir(&local_280);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar30 = L"";
    }
    else {
      pwVar30 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    ::FString::Replace(param_1,&local_650,L"$(EngineDir)",pwVar30,IgnoreCase);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    pFVar16 = FPaths::ProjectDir(&local_428);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar30 = L"";
    }
    else {
      pwVar30 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    ::FString::Replace(param_1,&local_660,L"$(EngineDir)",pwVar30,IgnoreCase);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_660.Data.ArrayNum != 0) {
      FVar37.Data = local_660.Data.AllocatorInstance.Data;
    }
    local_698 = 0;
    FVar33.Data = (FScriptContainerElement *)L"";
    if (local_650.Data.ArrayNum != 0) {
      FVar33.Data = local_650.Data.AllocatorInstance.Data;
    }
    local_680 = 0;
    (**(code **)((longlong)*pIVar15 + 0xe0))(pIVar15,FVar33.Data,FVar37.Data,&local_698);
    if (local_698 < local_680) {
      pFVar16 = FPaths::ConvertRelativePathToFull(&local_418,&local_660);
      if (&local_7b0 != pFVar16) {
        if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
        }
        local_7b0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_7b0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
      }
      if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_6f0,&local_7b0,L".BuildVersion");
      if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
      }
      local_7a0.Data.AllocatorInstance.Data = local_6f0.Data.AllocatorInstance.Data;
      local_7a0.Data.ArrayNum = local_6f0.Data.ArrayNum;
      local_7a0.Data.ArrayMax = local_6f0.Data.ArrayMax;
      local_6f0.Data.ArrayNum = 0;
      local_6f0.Data.ArrayMax = 0;
      local_6f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar16 = FPaths::ProjectSavedDir();
      local_450 = 0x1c;
      local_468.DataPtr = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      iVar12 = (pFVar16->Data).ArrayNum;
      local_468.Size = iVar12 + -1;
      if (iVar12 == 0) {
        local_468.Size = 0;
      }
      local_458 = L"GeneratedWorkerBuildVersions";
      FPaths::CombineInternal(&local_5d8,&local_468,2);
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_5d8.Data.ArrayNum != 0) {
        FVar37.Data = local_5d8.Data.AllocatorInstance.Data;
      }
      pFVar16 = ::FString::Replace(param_1,&local_3f8,L"$(EngineDir)",(wchar_t *)FVar37.Data,
                                   IgnoreCase);
      ::FString::ConcatFC(&local_4a8,pFVar16,L".BuildVersion");
      pFVar16 = FPaths::ConvertRelativePathToFull(&local_408,&local_4a8);
      if (&local_7c0 != pFVar16) {
        if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
        }
        local_7c0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7c0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_7c0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
      }
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
      }
      local_3b8.Data.AllocatorInstance.Data = local_5d8.Data.AllocatorInstance.Data;
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
        local_3b8.Data.AllocatorInstance.Data = local_5d8.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar16 = FPaths::ConvertRelativePathToFull(&local_3e8,&local_650);
      if (&local_7b0 != pFVar16) {
        if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
        }
        local_7b0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7b0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_7b0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_6d0,&local_7b0,L".BuildVersion");
      if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
      }
      local_7a0.Data.AllocatorInstance.Data = local_6d0.Data.AllocatorInstance.Data;
      local_7a0.Data.ArrayNum = local_6d0.Data.ArrayNum;
      local_7a0.Data.ArrayMax = local_6d0.Data.ArrayMax;
      local_6d0.Data.ArrayNum = 0;
      local_6d0.Data.ArrayMax = 0;
      local_6d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar16 = FPaths::EngineSavedDir(&local_3b8);
      local_430 = 0x1c;
      local_448.DataPtr = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      iVar12 = (pFVar16->Data).ArrayNum;
      local_448.Size = iVar12 + -1;
      if (iVar12 == 0) {
        local_448.Size = 0;
      }
      local_438 = L"GeneratedWorkerBuildVersions";
      FPaths::CombineInternal(&local_5c8,&local_448,2);
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_5c8.Data.ArrayNum != 0) {
        FVar37.Data = local_5c8.Data.AllocatorInstance.Data;
      }
      pFVar16 = ::FString::Replace(param_1,&local_3c8,L"$(EngineDir)",(wchar_t *)FVar37.Data,
                                   IgnoreCase);
      ::FString::ConcatFC(&local_498,pFVar16,L".BuildVersion");
      pFVar16 = FPaths::ConvertRelativePathToFull(&local_3d8,&local_498);
      if (&local_7c0 != pFVar16) {
        if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
        }
        local_7c0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7c0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        local_7c0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
      }
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
      if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
      }
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    local_5e8.Data.AllocatorInstance.Data = local_650.Data.AllocatorInstance.Data;
    if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_660.Data.AllocatorInstance.Data);
      local_5e8.Data.AllocatorInstance.Data = local_650.Data.AllocatorInstance.Data;
    }
  }
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  bVar10 = FPaths::FileExists(&local_7b0);
  if (!bVar10) goto LAB_142d2d9fc;
  local_218.ProjectFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ProjectFile.Data.ArrayNum = 0;
  local_218.ProjectFile.Data.ArrayMax = 0;
  local_218.ProjectDir.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ProjectDir.Data.ArrayNum = 0;
  local_218.ProjectDir.Data.ArrayMax = 0;
  local_218.TargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.TargetName.Data.ArrayNum = 0;
  local_218.TargetName.Data.ArrayMax = 0;
  local_218.Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Platform.Data.ArrayNum = 0;
  local_218.Platform.Data.ArrayMax = 0;
  local_218.Architecture.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Architecture.Data.ArrayNum = 0;
  local_218.Architecture.Data.ArrayMax = 0;
  local_218.BuildSettingsVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.BuildSettingsVersion.Data.ArrayNum = 0;
  local_218.BuildSettingsVersion.Data.ArrayMax = 0;
  local_218.TargetBuildEnvironment.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.TargetBuildEnvironment.Data.ArrayNum = 0;
  local_218.TargetBuildEnvironment.Data.ArrayMax = 0;
  FBuildVersion::FBuildVersion(&local_218.Version);
  local_218.PluginNameToEnabledState._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_218.PluginNameToEnabledState._48_8_ = _UNK_150631d98;
  local_218.Launch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Launch.Data.ArrayNum = 0;
  local_218.Launch.Data.ArrayMax = 0;
  local_218.LaunchCmd.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_218.LaunchCmd.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_218.LaunchCmd.field0_0x0.TypedValue.Data.ArrayMax = -1;
  local_218.BuildProducts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.BuildProducts.ArrayNum = 0;
  local_218.BuildProducts.ArrayMax = 0;
  local_218.RuntimeDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.RuntimeDependencies.ArrayNum = 0;
  local_218.RuntimeDependencies.ArrayMax = 0;
  local_218.PluginNameToEnabledState._0_8_ = 0;
  local_218.PluginNameToEnabledState._8_8_ = 0;
  local_218.PluginNameToEnabledState._32_8_ = 0;
  local_218.PluginNameToEnabledState._64_8_ = 0;
  local_218.PluginNameToEnabledState._72_4_ = 0;
  local_218.BuildPlugins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.BuildPlugins.ArrayNum = 0;
  local_218.BuildPlugins.ArrayMax = 0;
  local_218.AdditionalProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.AdditionalProperties.ArrayNum = 0;
  local_218.AdditionalProperties.ArrayMax = 0;
  bVar10 = FTargetReceipt::Read(&local_218,&local_7b0,false);
  if (bVar10) {
    if (this->bAbortRequested == (atomic<bool>)0x0) {
      iVar12 = local_218.TargetName.Data.ArrayNum + -1;
      if (local_218.TargetName.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AssignRange
                (&this->Name,(wchar_t *)local_218.TargetName.Data.AllocatorInstance.Data,iVar12);
      iVar12 = local_218.Platform.Data.ArrayNum + -1;
      if (local_218.Platform.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AssignRange
                (&this->Platform,(wchar_t *)local_218.Platform.Data.AllocatorInstance.Data,iVar12);
      local_578 = local_218.Launch.Data.AllocatorInstance.Data;
      iStack_570 = local_218.Launch.Data.ArrayNum + -1;
      if (local_218.Launch.Data.ArrayNum == 0) {
        iStack_570 = 0;
      }
      local_3a8._12_4_ = uStack_56c;
      local_3a8.Size = iStack_570;
      local_3a8.DataPtr = (wchar_t *)local_218.Launch.Data.AllocatorInstance.Data;
      bVar10 = TryAddExecutablePath(this,&local_3a8);
      if (bVar10) {
        bVar10 = false;
        uVar17 = (ulonglong)local_218.AdditionalProperties.ArrayNum;
        pFVar43 = local_218.AdditionalProperties.AllocatorInstance.Data + 0x10;
        pFVar42 = local_218.AdditionalProperties.AllocatorInstance.Data + uVar17 * 0x20;
        local_740.A = 0;
        local_740.B = 0;
        local_740.C = 0;
        local_740.D = 0;
        local_790.Data = (FScriptContainerElement *)0x0;
        local_788 = 0;
        local_780 = local_218.AdditionalProperties.ArrayNum;
        uVar18 = uVar17;
        FVar37.Data = local_218.AdditionalProperties.AllocatorInstance.Data;
        do {
          uVar41 = 0;
          if ((int)uVar17 != (int)uVar18) {
            local_7c7 = 0;
            `TCheckedPointerIterator<FReceiptProperty,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_7c7);
          }
          if (FVar37.Data == pFVar42) {
            if (!bVar10) goto LAB_142d2d994;
            iVar12 = local_218.RuntimeDependencies.ArrayNum;
            uVar18 = (ulonglong)local_218.RuntimeDependencies.ArrayNum;
            pFVar43 = local_218.RuntimeDependencies.AllocatorInstance.Data + uVar18 * 0x20;
            FVar37.Data = local_218.RuntimeDependencies.AllocatorInstance.Data;
            goto LAB_142d2cb12;
          }
          if (*(int *)(pFVar43 + -8) == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = *(wchar_t **)FVar37.Data;
          }
          iVar12 = FGenericPlatformStricmp::Stricmp(pwVar30,L"DerivedDataBuildWorkerReceiptVersion")
          ;
          if (iVar12 == 0) {
            bVar10 = FGuid::Parse((FString *)pFVar43,&local_708);
            if (!bVar10) {
              local_708.A = 0;
              local_708.D = 0;
              local_708.C = 0;
              local_708.B = 0;
            }
            bVar10 = ((local_708.D == WorkerReceiptVersion.D &&
                      local_708.C == WorkerReceiptVersion.C) &&
                     local_708.B == WorkerReceiptVersion.B) && local_708.A == WorkerReceiptVersion.A
            ;
          }
          else {
            if (*(int *)(pFVar43 + -8) == 0) {
              pwVar30 = L"";
            }
            else {
              pwVar30 = *(wchar_t **)FVar37.Data;
            }
            iVar12 = FGenericPlatformStricmp::Stricmp
                               (pwVar30,L"DerivedDataBuildWorkerBuildSystemVersion");
            if (iVar12 == 0) {
              bVar11 = FGuid::Parse((FString *)pFVar43,&local_740);
              if (!bVar11) goto code_r0x000142d2c855;
            }
            else {
              if (*(int *)(pFVar43 + -8) == 0) {
                pwVar30 = L"";
              }
              else {
                pwVar30 = *(wchar_t **)FVar37.Data;
              }
              iVar12 = FGenericPlatformStricmp::Stricmp
                                 (pwVar30,L"DerivedDataBuildWorkerFunctionVersion");
              if (iVar12 == 0) {
                local_760.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_760.ArrayNum = 0;
                local_760.ArrayMax = 0;
                iVar12 = ::FString::ParseIntoArray((FString *)pFVar43,&local_760,L":",true);
                if (iVar12 == 2) {
                  local_690.A = 0;
                  local_690.B = 0;
                  local_690.C = 0;
                  local_690.D = 0;
                  if ((local_760.ArrayNum < 2) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  bVar11 = FGuid::Parse((FString *)(local_760.AllocatorInstance.Data + 0x10),
                                        &local_690);
                  if (bVar11) {
                    if ((local_760.ArrayNum < 1) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    FVar33.Data = local_760.AllocatorInstance.Data;
                    iVar12 = (int)local_788;
                    if ((int)local_788 == local_788._4_4_) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x820,&local_790,(int *)((longlong)&local_788 + 4));
                    }
                    local_788 = CONCAT44(local_788._4_4_,iVar12 + 1);
                    this_00 = local_790.Data + (longlong)iVar12 * 0x20;
                    ::FString::FString((FString *)this_00,(FString *)FVar33.Data);
                    *(undefined8 *)(this_00 + 0x10) = local_690._0_8_;
                    *(undefined8 *)(this_00 + 0x18) = local_690._8_8_;
                    DestructItems<FString,int>
                              ((FString *)local_760.AllocatorInstance.Data,local_760.ArrayNum);
                    if (local_760.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_760.AllocatorInstance.Data);
                    }
                    goto LAB_142d2c9de;
                  }
                  if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
                    ppuVar31 = &PTR_u_Target_receipt__1509de118;
                    goto LAB_142d2caba;
                  }
                }
                else if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
                  ppuVar31 = (undefined **)&::LOG_Static;
LAB_142d2caba:
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)ppuVar31,
                             (FLogCategoryBase *)&LogTargetReceiptBuildWorker);
                }
                DestructItems<FString,int>
                          ((FString *)local_760.AllocatorInstance.Data,local_760.ArrayNum);
                if (local_760.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_760.AllocatorInstance.Data);
                }
                goto LAB_142d2d994;
              }
              if (*(int *)(pFVar43 + -8) == 0) {
                pwVar30 = L"";
              }
              else {
                pwVar30 = *(wchar_t **)FVar37.Data;
              }
              iVar12 = FGenericPlatformStricmp::Stricmp(pwVar30,L"UnstagedRuntimeDependency");
              if (iVar12 == 0) {
                local_568 = *(wchar_t **)pFVar43;
                iStack_560 = *(int *)(pFVar43 + 8) + -1;
                if (*(int *)(pFVar43 + 8) == 0) {
                  iStack_560 = 0;
                }
                local_398._12_4_ = uStack_55c;
                local_398.Size = iStack_560;
                local_398.DataPtr = local_568;
                bVar11 = TryAddExecutablePath(this,&local_398);
                if (!bVar11) {
                  if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
                  }
                  goto LAB_142d2d994;
                }
              }
            }
          }
LAB_142d2c9de:
          uVar17 = local_218.AdditionalProperties._8_8_ & 0xffffffff;
          FVar37.Data = FVar37.Data + 0x20;
          uVar18 = (ulonglong)local_780;
          pFVar43 = pFVar43 + 0x20;
        } while( true );
      }
    }
  }
  else if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
    FTargetReceipt::~FTargetReceipt(&local_218);
    goto LAB_142d2d9fc;
  }
  goto LAB_142d2d9be;
LAB_142d2cb12:
  if ((int)uVar18 != iVar12) {
    local_7c6 = 0;
    `TCheckedPointerIterator<FRuntimeDependency,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_7c6);
  }
  if (FVar37.Data == pFVar43) {
    if (this->bAbortRequested != (atomic<bool>)0x0) goto LAB_142d2d994;
    iVar12 = (this->ExecutablePaths).ArrayNum;
    pTVar38 = &this->ExecutableMeta;
    piVar44 = &(this->ExecutableMeta).ArrayMax;
    piVar25 = &(this->ExecutableMeta).ArrayNum;
    local_628 = piVar25;
    local_618 = pTVar38;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,iVar12,&pTVar38->AllocatorInstance,piVar25,piVar44);
    DefaultConstructItems<TTuple<FIoHash,unsigned___int64>,int>
              ((pTVar38->AllocatorInstance).Data + (longlong)iVar13 * 0x20,iVar12);
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_7b0.Data.ArrayNum != 0) {
      FVar37.Data = local_7b0.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*local_6f8 + 0xd8))(local_6f8,&local_750,FVar37.Data);
    local_780 = (this->ExecutablePaths).ArrayNum;
    uVar18 = (ulonglong)(int)local_780;
    pFVar43 = (this->ExecutablePaths).AllocatorInstance.Data;
    local_610 = pFVar43 + uVar18 * 0x20;
    local_6a8 = 0;
    goto LAB_142d2cc85;
  }
  bVar10 = ::FString::EndsWith((FString *)FVar37.Data,L".uproject",9,IgnoreCase);
  if (!bVar10) {
    local_558 = *(wchar_t **)FVar37.Data;
    iStack_550 = *(int *)(FVar37.Data + 8) + -1;
    if (*(int *)(FVar37.Data + 8) == 0) {
      iStack_550 = 0;
    }
    local_388._12_4_ = uStack_54c;
    local_388.Size = iStack_550;
    local_388.DataPtr = local_558;
    bVar10 = TryAddExecutablePath(this,&local_388);
    if (!bVar10) goto LAB_142d2cb9b;
  }
  uVar18 = local_218.RuntimeDependencies._8_8_ & 0xffffffff;
  FVar37.Data = FVar37.Data + 0x20;
  goto LAB_142d2cb12;
LAB_142d2cc85:
  pFVar42 = local_610;
  if ((this->ExecutablePaths).ArrayNum != (int)uVar18) {
    local_7c5[0] = 0;
    `TCheckedPointerIterator<FTargetReceiptBuildWorker::FWorkerPath,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_7c5);
  }
  if (pFVar43 == pFVar42) {
    pFVar40 = this;
    if (((local_740.D != 0 || local_740.C != 0) || local_740.B != 0) || local_740.A != 0) {
      pTVar2 = &this->FunctionVersions;
      (this->BuildSystemVersion).A = local_740.A;
      (this->BuildSystemVersion).B = local_740.B;
      (this->BuildSystemVersion).C = local_740.C;
      (this->BuildSystemVersion).D = local_740.D;
      if (pTVar2 != (TArray<TTuple<FString,FGuid>,TSizedDefaultAllocator<32>_> *)&local_790) {
        DestructItems<TTuple<FString,FGuid>,int>
                  ((TTuple<FString,FGuid> *)(pTVar2->AllocatorInstance).Data,
                   (this->FunctionVersions).ArrayNum);
        pFVar43 = (pTVar2->AllocatorInstance).Data;
        if (pFVar43 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar43);
        }
        (pTVar2->AllocatorInstance).Data = local_790.Data;
        (this->FunctionVersions).ArrayNum = (int)local_788;
        (this->FunctionVersions).ArrayMax = local_788._4_4_;
        local_788 = 0;
        local_790.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_142d2d8a5;
    }
    local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_718.Data.ArrayNum = 0;
    local_718.Data.ArrayMax = 0;
    FCbObjectView::FCbObjectView((FCbObjectView *)local_6c0);
    local_6b0 = (FBufferOwner *)0x0;
    bVar10 = FPaths::FileExists(&local_7a0);
    if (bVar10) {
      iVar12 = local_7a0.Data.ArrayNum + -1;
      if (local_7a0.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      ::FString::AssignRange(&local_718,(wchar_t *)local_7a0.Data.AllocatorInstance.Data,iVar12);
      pIVar15 = IFileManager::Get();
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_7a0.Data.ArrayNum != 0) {
        FVar37.Data = local_7a0.Data.AllocatorInstance.Data;
      }
      pFVar24 = (FArchive *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15,FVar37.Data,2);
      if (pFVar24 != (FArchive *)0x0) goto LAB_142d2d35f;
      if ((byte)LogTargetReceiptBuildWorker._0_1_ < 3) goto LAB_142d2d923;
      pFVar32 = &::LOG_Static;
      goto LAB_142d2d914;
    }
    iVar12 = local_7c0.Data.ArrayNum + -1;
    if (local_7c0.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange(&local_718,(wchar_t *)local_7c0.Data.AllocatorInstance.Data,iVar12);
    pwVar30 = FWindowsPlatformProcess::GetBinariesSubdirectory();
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_218.Platform.Data.ArrayNum != 0) {
      FVar37.Data = local_218.Platform.Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar37.Data,pwVar30);
    pIVar15 = local_6f8;
    if (iVar12 != 0) {
      if (4 < (byte)LogTargetReceiptBuildWorker._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
      }
      goto LAB_142d2d923;
    }
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_7c0.Data.ArrayNum != 0) {
      FVar37.Data = local_7c0.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*local_6f8 + 0xd8))(local_6f8,&local_620,FVar37.Data);
    if (local_750 <= local_620) goto LAB_142d2d32e;
    ::FString::ConcatCF(&local_538,L"-Version=\"",&local_7c0);
    ::FString::ConcatFC(&local_640,&local_538,L"\"");
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
    iVar12 = (this->ExecutablePaths).ArrayNum;
    piVar25 = (int *)(longlong)iVar12;
    uVar35 = 0x6c;
    if (local_640.Data.ArrayNum != 0) {
      uVar35 = (char)local_640.Data.AllocatorInstance.Data;
    }
    if ((iVar12 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       piVar44 = piVar25, bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FString::FString(&local_528,(FString *)(this->ExecutablePaths).AllocatorInstance.Data);
    pFVar16 = FPaths::ConvertRelativePathToFull(&local_378,&local_528);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar30 = L"";
    }
    else {
      pwVar30 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::CreateProc
              ((wchar_t *)&local_778,pwVar30,(bool)uVar35,true,true,
               (uint *)CONCAT71((int7)((ulonglong)piVar44 >> 8),1),0,
               (wchar_t *)((ulonglong)in_stack_fffffffffffff814 << 0x20),(void *)0x0,(void *)0x0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
    if (local_778 != (FProcHandle)0x0) {
      QueryPerformanceCounter(&local_598);
      bVar10 = FWindowsPlatformProcess::IsProcRunning(&local_778);
      fVar7 = __real_3dcccccd;
      dVar6 = __real_4024000000000000;
      if (!bVar10) goto LAB_142d2d2d5;
      goto LAB_142d2d260;
    }
    if ((byte)LogTargetReceiptBuildWorker._0_1_ < 3) goto LAB_142d2d473;
    pFVar32 = &::LOG_Static;
    goto LAB_142d2d456;
  }
  piVar34 = (int *)(longlong)*piVar25;
  uVar14 = 0;
  if ((int)uVar41 < *piVar25) {
    uVar14 = ~uVar41 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     piVar44 = piVar34, bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_768 = *(int *)(pFVar43 + 8);
  lVar36 = (longlong)local_768;
  local_608 = (pTVar38->AllocatorInstance).Data;
  pvVar22 = *(void **)pFVar43;
  local_770.Data = (FScriptContainerElement *)0x0;
  if (local_768 == 0) {
    local_764 = 0;
  }
  else {
    piVar44 = (int *)CONCAT44((int)((ulonglong)piVar44 >> 0x20),local_768);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_768,0,&local_770,local_768,&local_764);
    memcpy(local_770.Data,pvVar22,lVar36 * 2);
  }
  pIVar15 = local_6f8;
  FVar37.Data = (FScriptContainerElement *)L"";
  if (local_768 != 0) {
    FVar37.Data = local_770.Data;
  }
  plVar19 = (longlong *)(**(code **)((longlong)*local_6f8 + 0x18))(local_6f8,FVar37.Data,2);
  if (plVar19 == (longlong *)0x0) goto LAB_142d2cf0c;
  FVar37.Data = (FScriptContainerElement *)L"";
  if (local_768 != 0) {
    FVar37.Data = local_770.Data;
  }
  (**(code **)((longlong)*pIVar15 + 0xd8))(pIVar15,&local_600,FVar37.Data);
  if (local_750 < local_600) {
    local_750 = local_600;
  }
  uVar20 = (**(code **)(*plVar19 + 0x30))(plVar19);
  FUniqueBuffer::Alloc((ulong64)&local_748);
  TVar8.Owner = local_748.Owner;
  pcVar4 = *(code **)(*plVar19 + 0x188);
  if (local_748.Owner == (FBufferOwner *)0x0) {
    pvVar22 = (void *)0x0;
  }
  else {
    if (((ulonglong)(local_748.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_748.Owner)->_padding_ + 8))(local_748.Owner);
    }
    pvVar22 = (TVar8.Owner)->Data;
  }
  (*pcVar4)(plVar19,pvVar22,uVar20);
  TVar8.Owner = local_748.Owner;
  if (local_748.Owner == (FBufferOwner *)0x0) {
    uVar21 = 0;
  }
  else {
    if (((ulonglong)(local_748.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_748.Owner)->_padding_ + 8))(local_748.Owner);
    }
    uVar21 = (TVar8.Owner)->Size;
  }
  TVar8.Owner = local_748.Owner;
  pvVar22 = (void *)0x0;
  if (local_748.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_748.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_748.Owner)->_padding_ + 8))(local_748.Owner);
    }
    pvVar22 = (TVar8.Owner)->Data;
  }
  local_548.Data = pvVar22;
  local_548.Size = uVar21;
  pFVar23 = FBlake3::HashBuffer(&local_88,&local_548);
  lVar36 = local_6a8;
  local_260 = *(undefined4 *)(pFVar23->Hash + 0x10);
  local_270 = *(undefined8 *)pFVar23->Hash;
  uStack_268 = *(undefined8 *)(pFVar23->Hash + 8);
  *(undefined8 *)(local_608 + local_6a8) = local_270;
  *(undefined8 *)(local_608 + local_6a8 + 8) = uStack_268;
  *(undefined4 *)(local_608 + local_6a8 + 0x10) = local_260;
  *(undefined8 *)(local_608 + local_6a8 + 0x18) = uVar20;
  (**(code **)(*plVar19 + 0x210))(plVar19);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_748);
  (**(code **)*plVar19)(plVar19,1);
  local_6a8 = lVar36 + 0x20;
  uVar41 = uVar41 + 1;
  if (local_770.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.Data);
  }
  pFVar43 = pFVar43 + 0x20;
  uVar18 = (ulonglong)local_780;
  pTVar38 = local_618;
  this = local_6a0;
  piVar25 = local_628;
  goto LAB_142d2cc85;
LAB_142d2cf0c:
  if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
  }
  if (local_770.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.Data);
  }
  goto LAB_142d2d994;
LAB_142d2cb9b:
  if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
  }
  goto LAB_142d2d994;
code_r0x000142d2c855:
  if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
  }
  goto LAB_142d2d994;
  while (bVar10 = FWindowsPlatformProcess::IsProcRunning(&local_778), bVar10) {
LAB_142d2d260:
    FWindowsPlatformProcess::Sleep(fVar7);
    if ((this->bAbortRequested != (atomic<bool>)0x0) ||
       (QueryPerformanceCounter(&local_630),
       dVar6 < (double)(ulonglong)(local_630.QuadPart - (longlong)local_598) *
               FGenericPlatformTime::SecondsPerCycle64)) {
      if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
      }
      FWindowsPlatformProcess::TerminateProc(&local_778,true);
      FWindowsPlatformProcess::CloseProc(&local_778);
      goto LAB_142d2d473;
    }
  }
LAB_142d2d2d5:
  FWindowsPlatformProcess::CloseProc(&local_778);
  bVar10 = FPaths::FileExists(&local_7c0);
  if (bVar10) {
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_7c0.Data.ArrayNum != 0) {
      FVar37.Data = local_7c0.Data.AllocatorInstance.Data;
    }
    plVar19 = (longlong *)(**(code **)((longlong)*pIVar15 + 0xd8))(pIVar15,local_2d8,FVar37.Data);
    if (*plVar19 < local_750) goto LAB_142d2d446;
    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data.AllocatorInstance.Data);
    }
LAB_142d2d32e:
    pIVar15 = IFileManager::Get();
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_7c0.Data.ArrayNum != 0) {
      FVar37.Data = local_7c0.Data.AllocatorInstance.Data;
    }
    pFVar24 = (FArchive *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15,FVar37.Data,2);
    if (pFVar24 == (FArchive *)0x0) {
      if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
        pFVar32 = &::LOG_Static;
LAB_142d2d914:
        UE::Logging::Private::BasicLog<3>(pFVar32,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
      }
    }
    else {
LAB_142d2d35f:
      ::operator<<(pFVar24,(FCbObject *)local_6c0);
      (*(code *)**(undefined8 **)pFVar24)(pFVar24,1);
      uStack_510 = 0x12;
      local_518 = "BuildSystemVersion";
      local_368._12_4_ = uStack_50c;
      local_368.Size = 0x12;
      local_368.DataPtr = "BuildSystemVersion";
      FCbObjectView::FindView((FCbObjectView *)local_6c0,&local_5b8,&local_368);
      pFVar9 = local_6b0;
      if ((local_5b8.TypeWithFlags & CustomByName) == None) {
        local_730.TypeWithFlags = None;
        local_730.Error = None;
        local_730._2_2_ = 0;
        local_730.NameLen = 0;
        local_730.Value = (void *)0x0;
LAB_142d2d5f4:
        local_720.Owner = (FBufferOwner *)0x0;
      }
      else {
        if (local_6b0 == (FBufferOwner *)0x0) {
LAB_142d2d48d:
          local_730.Error = local_5b8.Error;
          local_730._2_2_ = local_5b8._2_2_;
          local_730.NameLen = local_5b8.NameLen;
          local_730.TypeWithFlags = local_5b8.TypeWithFlags;
          local_730.Value = local_5b8.Value;
          if (local_6b0 == (FBufferOwner *)0x0) goto LAB_142d2d5f4;
        }
        else {
          LOCK();
          paVar1 = &local_6b0->ReferenceCountsAndFlags;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar3 & 0x3fffffff) != 0) goto LAB_142d2d48d;
          LOCK();
          local_6b0->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)((longlong)local_6b0->ReferenceCountsAndFlags + 0x40000000)
          ;
          UNLOCK();
        }
        local_730.Error = local_5b8.Error;
        local_730._2_2_ = local_5b8._2_2_;
        local_730.NameLen = local_5b8.NameLen;
        local_730.TypeWithFlags = local_5b8.TypeWithFlags;
        local_720.Owner = (FBufferOwner *)0x0;
        local_730.Value = local_5b8.Value;
        if (((ulonglong)local_6b0->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)(local_6b0->_padding_ + 8))(local_6b0);
        }
        uVar21 = pFVar9->Size;
        if (((ulonglong)pFVar9->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)(pFVar9->_padding_ + 8))(pFVar9);
        }
        pvVar22 = pFVar9->Data;
        pTVar26 = FCbFieldView::GetView(&local_730,&local_238);
        if (((pTVar26->Data < pvVar22) ||
            ((longlong)pvVar22 + uVar21 < (longlong)pTVar26->Data + pTVar26->Size)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OuterBuffer.GetView().Contains(ViewType::GetView())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\CompactBinary.h"
                                ,0x474,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TVar8.Owner = local_720.Owner;
        local_720.Owner = pFVar9;
        if (TVar8.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = &(TVar8.Owner)->ReferenceCountsAndFlags;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
          UNLOCK();
          if ((aVar3._0_4_ & 0x3fffffff) == 1) {
            (**(code **)((TVar8.Owner)->_padding_ + 0x10))();
            (TVar8.Owner)->Data = (void *)0x0;
            (TVar8.Owner)->Size = 0;
            LOCK();
            paVar1 = &(TVar8.Owner)->ReferenceCountsAndFlags;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
            UNLOCK();
            if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
              (**(code **)(TVar8.Owner)->_padding_)(TVar8.Owner,1);
            }
          }
        }
      }
      pFVar27 = FCbFieldView::AsUuid(&local_730,&local_228);
      uVar41 = pFVar27->B;
      uVar14 = pFVar27->C;
      uVar5 = pFVar27->D;
      (this->BuildSystemVersion).A = pFVar27->A;
      (this->BuildSystemVersion).B = uVar41;
      (this->BuildSystemVersion).C = uVar14;
      (this->BuildSystemVersion).D = uVar5;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_720);
      if ((((this->BuildSystemVersion).D != 0 || (this->BuildSystemVersion).C != 0) ||
          (this->BuildSystemVersion).B != 0) || (this->BuildSystemVersion).A != 0) {
        uStack_500 = 9;
        local_508 = "Functions";
        local_358._12_4_ = uStack_4fc;
        local_358.Size = 9;
        local_358.DataPtr = "Functions";
        FCbObjectView::FindView((FCbObjectView *)local_6c0,&local_4f8,&local_358);
        if ((local_4f8.TypeWithFlags & CustomByName) == None) {
          local_678._padding_ = 0;
          local_678._padding_ = 0;
          local_678.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        else {
          if (local_6b0 != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = &local_6b0->ReferenceCountsAndFlags;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
            UNLOCK();
            if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
              LOCK();
              local_6b0->ReferenceCountsAndFlags =
                   (atomic<unsigned___int64>)
                   ((longlong)local_6b0->ReferenceCountsAndFlags + 0x40000000);
              UNLOCK();
            }
          }
          local_5f0 = local_6b0;
          TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                    (&local_678,&local_4f8,(FSharedBuffer)&local_5f0);
        }
        FCbFieldView::AsArrayView((FCbFieldView *)&local_678,(FCbArrayView *)&local_348);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_678.Buffer.Owner);
        FCbFieldView::CreateViewIterator(&local_348,(FCbFieldViewIterator *)&local_590);
        if (((byte)local_590._padding_ & 0x1f) != 0) {
          do {
            local_338.Value = (void *)local_590._padding_;
            FCbFieldView::AsObjectView(&local_338,&local_4c8);
            local_4e8 = "Version";
            uStack_4e0 = 7;
            local_328._12_4_ = uStack_4dc;
            local_328.Size = 7;
            local_328.DataPtr = "Version";
            FCbObjectView::FindView(&local_4c8,&local_318,&local_328);
            pFVar27 = FCbFieldView::AsUuid(&local_318,&local_25c);
            local_4d8 = &s_Name;
            uStack_4d0 = 4;
            local_308._12_4_ = uStack_4cc;
            local_308.Size = 4;
            local_308.DataPtr = "Name";
            FCbObjectView::FindView(&local_4c8,&local_2e8,&local_308);
            uStack_5a0 = 0;
            local_5a8 = 0;
            local_2f8.DataPtr = (uchar *)0x0;
            local_2f8.Size = 0;
            local_2f8._12_4_ = 0;
            pTVar28 = FCbFieldView::AsString(&local_2e8,&local_248,&local_2f8);
            iVar12 = (this->FunctionVersions).ArrayNum;
            if (iVar12 == (this->FunctionVersions).ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&(this->FunctionVersions).AllocatorInstance,
                                  &(this->FunctionVersions).ArrayMax);
            }
            (this->FunctionVersions).ArrayNum = iVar12 + 1;
            TTuple<FString,FGuid>::TTuple<FString,FGuid><TStringView<char8_t>,FGuid>
                      ((TTuple<FString,FGuid> *)
                       ((this->FunctionVersions).AllocatorInstance.Data + (longlong)iVar12 * 0x20),
                       pTVar28,pFVar27);
            TCbFieldIterator<FCbFieldView>::operator++(&local_590);
            pFVar40 = local_6a0;
          } while (((byte)local_590._padding_ & 0x1f) != 0);
        }
        pFVar9 = local_6b0;
        if (local_6b0 != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = &local_6b0->ReferenceCountsAndFlags;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
          UNLOCK();
          if ((aVar3._0_4_ & 0x3fffffff) == 1) {
            (**(code **)(local_6b0->_padding_ + 0x10))(local_6b0);
            pFVar9->Data = (void *)0x0;
            pFVar9->Size = 0;
            LOCK();
            paVar1 = &pFVar9->ReferenceCountsAndFlags;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
            UNLOCK();
            if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
              (**(code **)pFVar9->_padding_)(pFVar9,1);
            }
          }
        }
        if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_718.Data.AllocatorInstance.Data);
        }
LAB_142d2d8a5:
        pIVar29 = IModularFeatures::Get();
        pcVar4 = *(code **)((longlong)*pIVar29 + 0x28);
        FLazyName::Resolve(&UE::DerivedData::IBuildWorkerFactory::FeatureName);
        pTVar39 = &pFVar40->PopulateTaskRef;
        if (pFVar40 == (FTargetReceiptBuildWorker *)&DAT_fffffffffffffff8) {
          pTVar39 = (TRefCountPtr<FBaseGraphTask> *)0x0;
        }
        (*pcVar4)(pIVar29,local_5f8,pTVar39);
        pFVar40->bEnabled = true;
        goto LAB_142d2d994;
      }
      if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
        pFVar32 = &::LOG_Static;
        goto LAB_142d2d914;
      }
    }
  }
  else {
LAB_142d2d446:
    if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
      pFVar32 = &::LOG_Static;
LAB_142d2d456:
      UE::Logging::Private::BasicLog<3>(pFVar32,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
    }
LAB_142d2d473:
    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data.AllocatorInstance.Data);
    }
  }
LAB_142d2d923:
  pFVar9 = local_6b0;
  if (local_6b0 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &local_6b0->ReferenceCountsAndFlags;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar3._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(local_6b0->_padding_ + 0x10))(local_6b0);
      pFVar9->Data = (void *)0x0;
      pFVar9->Size = 0;
      LOCK();
      paVar1 = &pFVar9->ReferenceCountsAndFlags;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
  }
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
LAB_142d2d994:
  DestructItems<TTuple<FString,FGuid>,int>((TTuple<FString,FGuid> *)local_790.Data,(int)local_788);
  if ((TTuple<FString,FGuid> *)local_790.Data != (TTuple<FString,FGuid> *)0x0) {
    FMemory::Free(local_790.Data);
  }
LAB_142d2d9be:
  FTargetReceipt::~FTargetReceipt(&local_218);
LAB_142d2d9fc:
  if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
  }
  if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
  }
  if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  return;
}

// TryAddExecutablePath @ 142d33310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTargetReceiptBuildWorker::TryAddExecutablePath
          (FTargetReceiptBuildWorker *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  TArray<FTargetReceiptBuildWorker::FWorkerPath,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  FStaticBasicLogRecord *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  TStringView<wchar_t> *pTVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  wchar_t *pwVar18;
  ulong64 uVar19;
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  FString local_228;
  int local_218 [4];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [12];
  undefined4 uStack_1dc;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  int iStack_1bc;
  undefined1 local_1b8 [12];
  uint uStack_1ac;
  undefined1 local_1a8 [12];
  int iStack_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  iVar9 = param_1->Size;
  if (iVar9 == 0) {
    if ((byte)LogTargetReceiptBuildWorker._0_1_ < 3) {
      return false;
    }
    local_238 = param_1->DataPtr;
    if ((this->Name).Data.ArrayNum == 0) {
      pFVar12 = &::LOG_Static;
    }
    else {
      pFVar12 = &::LOG_Static;
    }
LAB_142d33e58:
    UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
    return false;
  }
  pwVar4 = param_1->DataPtr;
  iVar7 = iVar9;
  if (2 < iVar9) {
    iVar7 = 2;
  }
  iVar8 = 0;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  if ((iVar8 != 2) || (iVar7 = FGenericPlatformStricmp::Strnicmp(L"$(",pwVar4,2), iVar7 != 0)) {
    if ((byte)LogTargetReceiptBuildWorker._0_1_ < 3) {
      return false;
    }
    pFVar12 = &::LOG_Static;
    local_238 = pwVar4;
    goto LAB_142d33e58;
  }
  stack0xfffffffffffffe20 = (undefined1 *)CONCAT44(uStack_1dc,1);
  local_1e8._0_8_ = L")";
  iStack_1c0 = 0;
  if (0 < iVar9) {
    iStack_1c0 = iVar9;
  }
  local_1f8._0_8_ = L")";
  local_1f8._8_8_ = stack0xfffffffffffffe20;
  local_208._0_8_ = pwVar4 + ((longlong)iVar9 - (longlong)iStack_1c0);
  local_208._12_4_ = iStack_1bc;
  local_208._8_4_ = iStack_1c0;
  local_1c8 = (FScriptContainerElement *)local_208._0_8_;
  local_218[0] = UE::String::FindFirst
                           ((TStringView<wchar_t> *)local_208,(TStringView<wchar_t> *)local_1f8,
                            CaseSensitive);
  if (local_218[0] == -1) {
    if ((byte)LogTargetReceiptBuildWorker._0_1_ < 3) {
      return false;
    }
    local_218[0] = -1;
    if ((this->Name).Data.ArrayNum == 0) {
      pFVar12 = &::LOG_Static;
      local_238 = pwVar4;
    }
    else {
      pFVar12 = &::LOG_Static;
      local_238 = pwVar4;
    }
    goto LAB_142d33e58;
  }
  iVar7 = 2;
  if (iVar9 < 2) {
    iVar7 = iVar9;
  }
  iVar8 = iVar9 - iVar7;
  if (local_218[0] + -2 < iVar9 - iVar7) {
    iVar8 = local_218[0] + -2;
  }
  iVar17 = 0;
  if (0 < iVar8) {
    iVar17 = iVar8;
  }
  uVar19 = (ulong64)iVar17;
  pwVar18 = pwVar4 + iVar7;
  if (iVar17 != 0) {
    iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar18,L"EngineDir",uVar19);
    if ((iVar7 == 0) && (L"EngineDir"[uVar19] == L'\0')) {
      iVar8 = (iVar9 - local_218[0]) + -2;
      iVar7 = iVar9;
      if (iVar8 < iVar9) {
        iVar7 = iVar8;
      }
      iVar8 = 0;
      if (0 < iVar7) {
        iVar8 = iVar7;
      }
      pFVar13 = (FScriptContainerElement *)(pwVar4 + ((longlong)iVar9 - (longlong)iVar8));
      pFVar11 = FPaths::EngineDir((FString *)local_198);
      piVar1 = &(this->ExecutablePaths).ArrayMax;
      iVar9 = (this->ExecutablePaths).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->ExecutablePaths).AllocatorInstance,piVar1);
      }
      iVar17 = iStack_19c;
      (this->ExecutablePaths).ArrayNum = iVar9 + 1;
      local_1f8._0_8_ = (pFVar11->Data).AllocatorInstance.Data;
      local_1c8 = (FScriptContainerElement *)0x150653430;
      local_1d8.Data.ArrayMax = iStack_19c;
      iVar7 = (pFVar11->Data).ArrayNum;
      pFVar16 = (this->ExecutablePaths).AllocatorInstance.Data + (longlong)iVar9 * 0x20;
      stack0xfffffffffffffe20 =
           (undefined1 *)((ulonglong)stack0xfffffffffffffe20 & 0xffffffff00000000);
      local_168.Base = local_148;
      iVar9 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar9 = 0;
      }
      local_168.CurPos = local_148;
      local_1a8._0_8_ = (FScriptContainerElement *)0x0;
      stack0xfffffffffffffe60 = stack0xfffffffffffffe20;
      local_168.End = (wchar_t *)local_48;
      stack0xfffffffffffffe50 = (undefined1 *)CONCAT44(uStack_1ac,iVar9);
      iStack_1c0 = 6;
      local_208._8_8_ = CONCAT44(iStack_1bc,6);
      local_208._0_8_ = L"Engine";
      unique0x10000b21 = (undefined1 *)CONCAT44(iVar17,iVar8);
      local_1f8._8_8_ = stack0xfffffffffffffe50;
      *(undefined8 *)&pFVar16->field_0x0 = 0;
      *(undefined8 *)(pFVar16 + 8) = 0;
      *(undefined8 *)&pFVar16[0x10].field_0x0 = 0;
      *(undefined8 *)(pFVar16 + 0x18) = 0;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      local_1e8._0_8_ = pFVar13;
      local_1d8.Data.AllocatorInstance.Data = pFVar13;
      local_1d8.Data.ArrayNum = iVar8;
      local_1b8._0_8_ = local_1f8._0_8_;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)local_1f8._0_8_,iVar9);
      if ((((int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1) != 0) &&
          (local_168.CurPos[-1] != L'/')) && (local_168.CurPos[-1] != L'\\')) {
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'/';
        local_168.CurPos = local_168.CurPos + 1;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)pFVar13,iVar8);
      ::FString::AssignRange
                ((FString *)pFVar16,local_168.Base,
                 (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
      local_168.CurPos = local_168.Base;
      FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
                (&local_168,(TStringView<wchar_t> *)local_208,(TStringView<wchar_t> *)local_1e8);
      ::FString::AssignRange
                ((FString *)(pFVar16 + 0x10),local_168.Base,
                 (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      FVar14.Data = (FScriptContainerElement *)local_198._0_8_;
      goto LAB_142d33e22;
    }
    iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar18,L"ProjectDir",uVar19);
    if ((iVar7 == 0) && (L"ProjectDir"[iVar17] == L'\0')) {
      pFVar11 = FPaths::ProjectDir((FString *)local_198);
      FPaths::ConvertRelativePathToFull(&local_1d8,pFVar11);
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
      pFVar11 = FPaths::RootDir((FString *)local_198);
      FPaths::ConvertRelativePathToFull((FString *)local_1e8,pFVar11);
      if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_198._0_8_);
      }
      pTVar2 = &this->ExecutablePaths;
      pFVar13 = (FScriptContainerElement *)L"";
      if (local_1e8._8_4_ != 0) {
        pFVar13 = (FScriptContainerElement *)local_1e8._0_8_;
      }
      iVar7 = (iVar9 - local_218[0]) + -2;
      bVar6 = FPaths::MakePathRelativeTo(&local_1d8,(wchar_t *)pFVar13);
      if (bVar6) {
        iVar8 = iVar9;
        if (iVar7 < iVar9) {
          iVar8 = iVar7;
        }
        iVar7 = 0;
        if (0 < iVar8) {
          iVar7 = iVar8;
        }
        pFVar13 = (FScriptContainerElement *)(pwVar4 + ((longlong)iVar9 - (longlong)iVar7));
        pFVar11 = FPaths::ProjectDir((FString *)local_188);
        iVar9 = (this->ExecutablePaths).ArrayNum;
        if (iVar9 == (this->ExecutablePaths).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&pTVar2->AllocatorInstance,&(this->ExecutablePaths).ArrayMax);
        }
        iVar8 = iStack_19c;
        (this->ExecutablePaths).ArrayNum = iVar9 + 1;
        local_1f8._0_8_ = (pFVar11->Data).AllocatorInstance.Data;
        stack0xfffffffffffffe50 = (undefined1 *)((ulonglong)uStack_1ac << 0x20);
        pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
        iStack_1bc = iStack_19c;
        iVar9 = local_1d8.Data.ArrayNum + -1;
        if (local_1d8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        iVar3 = (pFVar11->Data).ArrayNum;
        local_208._8_4_ = iVar9;
        local_1a8._0_8_ = (FScriptContainerElement *)0x0;
        stack0xfffffffffffffe60 = stack0xfffffffffffffe50;
        iVar17 = iVar3 + -1;
        local_208._0_8_ = local_1d8.Data.AllocatorInstance.Data;
        if (iVar3 == 0) {
          iVar17 = 0;
        }
        *(undefined8 *)pFVar16 = 0;
        local_168.Base = local_148;
        local_1f8._8_4_ = iVar17;
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        *(undefined8 *)(pFVar16 + 8) = 0;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(undefined8 *)(pFVar16 + 0x18) = 0;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        unique0x10000b51 = (undefined1 *)CONCAT44(iVar8,iVar7);
        local_198._8_8_ = local_1f8._8_8_;
        local_1c8 = pFVar13;
        iStack_1c0 = iVar7;
        local_1b8._0_8_ = pFVar13;
        local_198._0_8_ = local_1f8._0_8_;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)local_1f8._0_8_,iVar17)
        ;
        if ((((int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1) != 0) &&
            (local_168.CurPos[-1] != L'/')) && (local_168.CurPos[-1] != L'\\')) {
          if (local_168.End < local_168.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_168,1);
          }
          *local_168.CurPos = L'/';
          local_168.CurPos = local_168.CurPos + 1;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)pFVar13,iVar7);
        ::FString::AssignRange
                  ((FString *)pFVar16,local_168.Base,
                   (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
        local_168.CurPos = local_168.Base;
        pTVar15 = (TStringView<wchar_t> *)local_198;
        if (iVar9 != 0) {
          pTVar15 = (TStringView<wchar_t> *)local_208;
        }
        FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
                  (&local_168,pTVar15,(TStringView<wchar_t> *)local_1b8);
        ::FString::AssignRange
                  ((FString *)(pFVar16 + 0x10),local_168.Base,
                   (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        pFVar13 = (FScriptContainerElement *)local_188._0_8_;
      }
      else {
        iVar8 = iVar9;
        if (iVar7 < iVar9) {
          iVar8 = iVar7;
        }
        iVar7 = 0;
        if (0 < iVar8) {
          iVar7 = iVar8;
        }
        pFVar13 = (FScriptContainerElement *)(pwVar4 + ((longlong)iVar9 - (longlong)iVar7));
        pFVar11 = FPaths::ProjectDir((FString *)local_1a8);
        iVar9 = (this->ExecutablePaths).ArrayNum;
        if (iVar9 == (this->ExecutablePaths).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&pTVar2->AllocatorInstance,&(this->ExecutablePaths).ArrayMax);
        }
        (this->ExecutablePaths).ArrayNum = iVar9 + 1;
        local_1b8._0_8_ = (pFVar11->Data).AllocatorInstance.Data;
        local_208._0_8_ = L"Project";
        iStack_1bc = iStack_19c;
        iVar17 = (pFVar11->Data).ArrayNum;
        local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
        iVar8 = iVar17 + -1;
        pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x20;
        local_178 = 0;
        uStack_170 = (undefined1 *)local_1f8._8_8_;
        local_168.Base = local_148;
        if (iVar17 == 0) {
          iVar8 = 0;
        }
        local_168.CurPos = local_148;
        stack0xfffffffffffffe50 = (undefined1 *)CONCAT44(uStack_1ac,iVar8);
        local_168.End = (wchar_t *)local_48;
        *(undefined8 *)pFVar16 = 0;
        *(undefined8 *)(pFVar16 + 8) = 0;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(undefined8 *)(pFVar16 + 0x18) = 0;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_208._8_4_ = 7;
        local_198._0_8_ = L"Project";
        local_198._8_8_ = local_208._8_8_;
        local_1f8._8_8_ = CONCAT44(iStack_19c,iVar7);
        local_188._8_8_ = stack0xfffffffffffffe50;
        local_1f8._0_8_ = pFVar13;
        local_1c8 = pFVar13;
        iStack_1c0 = iVar7;
        local_188._0_8_ = local_1b8._0_8_;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)local_1b8._0_8_,iVar8);
        if ((((int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1) != 0) &&
            (local_168.CurPos[-1] != L'/')) && (local_168.CurPos[-1] != L'\\')) {
          if (local_168.End < local_168.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_168,1);
          }
          *local_168.CurPos = L'/';
          local_168.CurPos = local_168.CurPos + 1;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)pFVar13,iVar7);
        ::FString::AssignRange
                  ((FString *)pFVar16,local_168.Base,
                   (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
        local_168.CurPos = local_168.Base;
        FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
                  (&local_168,(TStringView<wchar_t> *)local_198,(TStringView<wchar_t> *)local_1f8);
        ::FString::AssignRange
                  ((FString *)(pFVar16 + 0x10),local_168.Base,
                   (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        pFVar13 = (FScriptContainerElement *)local_1a8._0_8_;
      }
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
      if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e8._0_8_);
        FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
      }
      goto LAB_142d33e22;
    }
  }
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  pFVar11 = ::FString::ConstructFromPtrSize((FString *)local_1a8,pwVar18,iVar17);
  if (&local_228 != pFVar11) {
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    local_228.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_228.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  pwVar18 = L"";
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar14.Data = local_228.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::GetEnvironmentVariable(&local_1d8,(wchar_t *)FVar14.Data);
  if (local_1d8.Data.ArrayNum < 2) {
    if (2 < (byte)LogTargetReceiptBuildWorker._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogTargetReceiptBuildWorker);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
    return false;
  }
  piVar1 = &(this->ExecutablePaths).ArrayMax;
  iVar8 = (iVar9 - local_218[0]) + -2;
  iVar7 = iVar9;
  if (iVar8 < iVar9) {
    iVar7 = iVar8;
  }
  iVar8 = 0;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = (this->ExecutablePaths).ArrayNum;
  pFVar13 = (FScriptContainerElement *)(pwVar4 + ((longlong)iVar9 - (longlong)iVar8));
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ExecutablePaths).AllocatorInstance,piVar1);
  }
  uVar5 = uStack_170._4_4_;
  local_208._0_8_ = local_228.Data.AllocatorInstance.Data;
  (this->ExecutablePaths).ArrayNum = iVar7 + 1;
  pFVar16 = (this->ExecutablePaths).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
  local_1f8._0_8_ = (FScriptContainerElement *)0x0;
  iVar9 = local_228.Data.ArrayNum + -1;
  local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
  if (local_228.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  local_168.Base = local_148;
  iVar7 = local_1d8.Data.ArrayNum + -1;
  if (local_1d8.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  local_168.CurPos = local_148;
  local_178 = 0;
  uStack_170 = (undefined1 *)local_1f8._8_8_;
  stack0xfffffffffffffe50 = (undefined1 *)CONCAT44(uStack_1ac,iVar7);
  local_168.End = (wchar_t *)local_48;
  local_1b8._0_8_ = local_1d8.Data.AllocatorInstance.Data;
  *(undefined8 *)&pFVar16->field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 8) = 0;
  *(undefined8 *)&pFVar16[0x10].field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 0x18) = 0;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_208._8_4_ = iVar9;
  local_188._0_8_ = local_228.Data.AllocatorInstance.Data;
  local_188._8_8_ = local_208._8_8_;
  stack0xfffffffffffffe20 = (undefined1 *)CONCAT44(uVar5,iVar8);
  local_1a8._0_8_ = local_1d8.Data.AllocatorInstance.Data;
  stack0xfffffffffffffe60 = stack0xfffffffffffffe50;
  local_198._8_8_ = stack0xfffffffffffffe20;
  local_1e8._0_8_ = pFVar13;
  local_198._0_8_ = pFVar13;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_168,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar7);
  if ((((int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1) != 0) &&
      (local_168.CurPos[-1] != L'/')) && (local_168.CurPos[-1] != L'\\')) {
    if (local_168.End < local_168.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    *local_168.CurPos = L'/';
    local_168.CurPos = local_168.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,(wchar_t *)pFVar13,iVar8);
  ::FString::AssignRange
            ((FString *)pFVar16,local_168.Base,
             (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
  local_168.CurPos = local_168.Base;
  pTVar15 = (TStringView<wchar_t> *)local_1a8;
  if (iVar9 != 0) {
    pTVar15 = (TStringView<wchar_t> *)local_188;
  }
  FPathViews::Append<wchar_t,TStringView<wchar_t>_&,TStringView<wchar_t>_&>
            (&local_168,pTVar15,(TStringView<wchar_t> *)local_198);
  ::FString::AssignRange
            ((FString *)(pFVar16 + 0x10),local_168.Base,
             (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  pFVar11 = ::FString::FString((FString *)local_1a8,L"..\\..\\..\\");
  ::FString::ConcatFF((FString *)local_208,pFVar11,&local_228);
  if (local_228.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = local_228.Data.ArrayNum + -1;
    pwVar18 = (wchar_t *)local_228.Data.AllocatorInstance.Data;
  }
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar18);
  iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->EnvironmentVariables,uVar10,&local_228);
  if ((iVar9 == -1) || (*(longlong *)&this->EnvironmentVariables + (longlong)iVar9 * 0x28 == 0)) {
    local_1f8._0_8_ = &local_228;
    local_238 = (wchar_t *)0x0;
    local_1f8._8_8_ = local_208;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FString_const_&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->EnvironmentVariables,(uint)local_218,
               (TPairInitializer<FString_const_&,FString_&&> *)(ulonglong)uVar10,(bool *)local_1f8);
  }
  if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._0_8_);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  FVar14.Data = local_228.Data.AllocatorInstance.Data;
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    FVar14.Data = local_228.Data.AllocatorInstance.Data;
  }
LAB_142d33e22:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return true;
}

