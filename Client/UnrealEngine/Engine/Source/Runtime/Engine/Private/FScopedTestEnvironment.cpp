// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FScopedTestEnvironment @ 14880c520

void __thiscall FScopedTestEnvironment::~FScopedTestEnvironment(FScopedTestEnvironment *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  if (*(int *)&(this->Variables).field_0x8 != *(int *)&(this->Variables).field_0x34) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                           ,0x193,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = 1 < *(int *)&(this->Variables).field_0x48;
    if (!bVar5) {
      TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->Variables).field_0x8);
    puVar1 = &(this->Variables).field_0xc;
    *(undefined4 *)&(this->Variables).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Variables).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Variables).field_0x34 = 0;
    iVar2 = *(int *)&(this->Variables).field_0x2c;
    *(undefined4 *)&(this->Variables).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->Variables).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Variables).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->Variables).field_0x48 = 1;
      TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
                *)this);
    }
  }
  *(undefined4 *)&(this->Variables).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Variables).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Get @ 14883bf90

TSharedPtr<FScopedTestEnvironment,1> * __cdecl
FScopedTestEnvironment::Get(TSharedPtr<FScopedTestEnvironment,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  atomic<int> aVar8;
  TSharedPtr<FScopedTestEnvironment,1> *pTVar9;
  FScopedTestEnvironment *pFVar10;
  FScopedTestEnvironment *pFVar11;
  TRawPtrProxy<FScopedTestEnvironment> local_res8;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x162,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FScopedTestEnvironment,1> *)(*pcVar4)();
    return pTVar9;
  }
  pFVar11 = (FScopedTestEnvironment *)0x0;
  __return_storage_ptr__->Object = (FScopedTestEnvironment *)0x0;
  FVar6 = EnvironmentInstance.WeakReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       EnvironmentInstance.WeakReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar7);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = EnvironmentInstance.Object;
  }
  FVar6.ReferenceController = EnvironmentInstance.WeakReferenceCount.ReferenceController;
  if (__return_storage_ptr__->Object == (FScopedTestEnvironment *)0x0) {
    pFVar10 = ::operator_new(0x50);
    if (pFVar10 != (FScopedTestEnvironment *)0x0) {
      *(undefined8 *)&(pFVar10->Variables).field_0x10 = 0;
      *(undefined8 *)&(pFVar10->Variables).field_0x18 = 0;
      *(undefined8 *)&(pFVar10->Variables).field_0x38 = 0;
      *(undefined8 *)&(pFVar10->Variables).field_0x48 = 0;
      *(undefined8 *)&pFVar10->Variables = 0;
      *(undefined8 *)&(pFVar10->Variables).field_0x8 = 0;
      *(undefined8 *)&(pFVar10->Variables).field_0x20 = 0;
      *(undefined4 *)&(pFVar10->Variables).field_0x28 = 0;
      *(undefined4 *)&(pFVar10->Variables).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar10->Variables).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar10->Variables).field_0x34 = 0;
      *(undefined8 *)&(pFVar10->Variables).field_0x40 = 0;
      pFVar11 = pFVar10;
    }
    local_res8.Object = pFVar11;
    TSharedPtr<FScopedTestEnvironment,1>::operator=<FScopedTestEnvironment>
              (__return_storage_ptr__,&local_res8);
    EnvironmentInstance.Object = __return_storage_ptr__->Object;
    pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    FVar6 = EnvironmentInstance.WeakReferenceCount;
    if (pTVar3 != EnvironmentInstance.WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar5.ReferenceController = EnvironmentInstance.WeakReferenceCount.ReferenceController;
      FVar6.ReferenceController = pTVar3;
      if (EnvironmentInstance.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(EnvironmentInstance.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
    }
  }
  EnvironmentInstance.WeakReferenceCount.ReferenceController = FVar6.ReferenceController;
  if ((__return_storage_ptr__->Object == (FScopedTestEnvironment *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x16b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FScopedTestEnvironment,1> *)(*pcVar4)();
    return pTVar9;
  }
  return __return_storage_ptr__;
}

// Restore @ 148856bc0

void __thiscall FScopedTestEnvironment::Restore(FScopedTestEnvironment *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if (*(int *)&(this->Variables).field_0x8 != *(int *)&(this->Variables).field_0x34) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                           ,0x193,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = 1 < *(int *)&(this->Variables).field_0x48;
    if (!bVar4) {
      TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FTestConsoleVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->Variables).field_0x8);
    puVar1 = &(this->Variables).field_0xc;
    *(undefined4 *)&(this->Variables).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Variables).field_0x34 = 0;
    *(undefined4 *)&(this->Variables).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->Variables).field_0x2c;
    *(undefined4 *)&(this->Variables).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->Variables).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Variables).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->Variables).field_0x48 = 1;
      TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
                *)this);
      return;
    }
  }
  return;
}

// SetConsoleVariableValue @ 148858770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedTestEnvironment::SetConsoleVariableValue
          (FScopedTestEnvironment *this,FString *param_1,FString *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FTestConsoleVariable *this_00;
  longlong *plVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  undefined1 local_98 [16];
  FString *local_88;
  FTestConsoleVariable *local_80;
  uint local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  FTestConsoleVariable local_58;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x171,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = TMapBase<FString,FTestConsoleVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>_>
            ::Find((TMapBase<FString,FTestConsoleVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>_>
                    *)this,param_1);
  if (this_00 != (FTestConsoleVariable *)0x0) {
    FTestConsoleVariable::Set(this_00,param_2);
    return;
  }
  local_58.bModified = false;
  ::FString::FString(&local_58.ConsoleVariableName,param_1);
  local_58.OriginalValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.OriginalValue.Data.ArrayNum = 0;
  local_58.OriginalValue.Data.ArrayMax = 0;
  FTestConsoleVariable::Set(&local_58,param_2);
  local_80 = &local_58;
  local_88 = param_1;
  TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FTestConsoleVariable_&&>_>
            ((TSet<TTuple<FString,FTestConsoleVariable>,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,FTestConsoleVariable_&&> *)&stack0x00000008,
             (bool *)&local_88);
  if (local_58.bModified != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.ConsoleVariableName.Data.ArrayNum != 0) {
      FVar6.Data = local_58.ConsoleVariableName.Data.AllocatorInstance.Data;
    }
    plVar4 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,FVar6.Data,1);
    if (plVar4 == (longlong *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_261016140514328247>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x149,"ConsoleVariable");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
      local_70 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_58.OriginalValue.Data.ArrayNum != 0) {
        FVar6.Data = local_58.OriginalValue.Data.AllocatorInstance.Data;
      }
      local_68 = 0;
      local_74 = 1;
      local_60 = 0x1000000;
      local_64 = 0xf000000;
      local_78 = (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar1 = *plVar4;
      local_78 = local_78 & 0xff000000;
      uVar5 = (**(code **)(lVar1 + 0xa8))(plVar4,local_98,&local_78);
      (**(code **)(lVar1 + 0xb0))(plVar4,FVar6.Data,uVar5);
      if (5 < (byte)LogEngineAutomationTests._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
      }
    }
    local_58.bModified = false;
  }
  if (local_58.OriginalValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.OriginalValue.Data.AllocatorInstance.Data);
  }
  if (local_58.ConsoleVariableName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ConsoleVariableName.Data.AllocatorInstance.Data);
  }
  return;
}

// TryGetConsoleVariableValue @ 14885c7b0

bool __thiscall
FScopedTestEnvironment::TryGetConsoleVariableValue
          (FScopedTestEnvironment *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTestConsoleVariable *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  bVar3 = IsInGameThread();
  pwVar7 = L"";
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = TMapBase<FString,FTestConsoleVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>_>
           ::Find((TMapBase<FString,FTestConsoleVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTestConsoleVariable,0>_>
                   *)this,param_1);
  bVar3 = false;
  if (pFVar5 != (FTestConsoleVariable *)0x0) {
    if (param_2 != (FString *)0x0) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      if ((pFVar5->ConsoleVariableName).Data.ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->ConsoleVariableName).Data.AllocatorInstance.Data;
      }
      plVar6 = (longlong *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,pwVar7,1);
      if (plVar6 == (longlong *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_261016140514328260>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                           ,0x13c,"ConsoleVariable");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0xd8))(plVar6,&local_18);
      }
      if (param_2 != &local_18) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_18.Data.ArrayNum;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayMax = local_18.Data.ArrayMax;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

