// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 58

// FConsoleManager @ 14161d1e0

FConsoleManager * __thiscall FConsoleManager::FConsoleManager(FConsoleManager *this)

{
  *(undefined8 *)&this->ConsoleObjects = 0;
  *(undefined8 *)&(this->ConsoleObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ConsoleObjects).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FConsoleManager__6B_;
  *(undefined4 *)&(this->ConsoleObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ConsoleObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConsoleObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConsoleObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ConsoleObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ConsoleObjects).field_0x48 = 0;
  *(undefined8 *)&this->HistoryEntriesMap = 0;
  *(undefined8 *)&(this->HistoryEntriesMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEntriesMap).field_0x20 = 0;
  this->bHistoryWasLoaded = false;
  *(undefined4 *)&(this->HistoryEntriesMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEntriesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEntriesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEntriesMap).field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEntriesMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEntriesMap).field_0x48 = 0;
  (this->ConsoleVariableChangeSinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableChangeSinks).ArrayNum = 0;
  (this->ConsoleVariableChangeSinks).ArrayMax = 0;
  *(undefined8 *)&this->ConsoleVariableUnregisteredDelegate = 0;
  *(undefined8 *)&(this->ConsoleVariableUnregisteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ConsoleVariableUnregisteredDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ConsoleVariableUnregisteredDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ConsoleObjectUnregisteredDelegate = 0;
  *(undefined8 *)&(this->ConsoleObjectUnregisteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ConsoleObjectUnregisteredDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ConsoleObjectUnregisteredDelegate).field_0x18 = 2;
  this->ThreadPropagationCallback = (IConsoleThreadPropagation *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CachedPlatformsAndDeviceProfilesLock,4000);
  *(undefined8 *)&(this->CachedPlatformsAndDeviceProfiles).Elements = 0;
  *(undefined8 *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x34 = 0;
  (this->CachedPlatformsAndDeviceProfiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedPlatformsAndDeviceProfiles).HashSize = 0;
  *(undefined8 *)&this->UnknownCVarCache = 0;
  *(undefined8 *)&(this->UnknownCVarCache).field_0x8 = 0;
  *(undefined8 *)&(this->UnknownCVarCache).field_0x20 = 0;
  *(undefined4 *)&(this->UnknownCVarCache).field_0x28 = 0;
  *(undefined4 *)&(this->UnknownCVarCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnknownCVarCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UnknownCVarCache).field_0x34 = 0;
  *(undefined8 *)&(this->UnknownCVarCache).field_0x40 = 0;
  *(undefined4 *)&(this->UnknownCVarCache).field_0x48 = 0;
  this->bCallAllConsoleVariableSinks = true;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->ConsoleObjectsSynchronizationObject,4000);
  return this;
}

// ~FConsoleManager @ 1416207b0

void __thiscall FConsoleManager::~FConsoleManager(FConsoleManager *this)

{
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  this_00 = &this->ConsoleObjects;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ConsoleObjects).field_0x10;
  this->_padding_ = (longlong)&___7FConsoleManager__6B_;
  iVar2 = *(int *)&(this->ConsoleObjects).field_0x28;
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->ConsoleObjects).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar9;
    local_30 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14162085b;
      uVar3 = puVar9[lVar8 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar8;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14162085b:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this_00;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      puVar4 = *(undefined8 **)
                ((longlong)TStack_70.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)this_00);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ConsoleObjectsSynchronizationObject);
  *(undefined4 *)&(this->UnknownCVarCache).field_0x48 = 0;
  pvVar5 = *(void **)&(this->UnknownCVarCache).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<FString,enum_EConsoleVariableFlags>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<FString,enum_EConsoleVariableFlags>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UnknownCVarCache);
  (this->CachedPlatformsAndDeviceProfiles).HashSize = 0;
  FVar6 = (this->CachedPlatformsAndDeviceProfiles).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedPlatformsAndDeviceProfiles).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedPlatformsAndDeviceProfilesLock);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ConsoleObjectUnregisteredDelegate).field_0x8,
             *(int *)&(this->ConsoleObjectUnregisteredDelegate).field_0x10);
  pvVar5 = *(void **)&(this->ConsoleObjectUnregisteredDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConsoleObjectUnregisteredDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ConsoleVariableUnregisteredDelegate).field_0x8,
             *(int *)&(this->ConsoleVariableUnregisteredDelegate).field_0x10);
  pvVar5 = *(void **)&(this->ConsoleVariableUnregisteredDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConsoleVariableUnregisteredDelegate);
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->ConsoleVariableChangeSinks).AllocatorInstance.Data,
             (this->ConsoleVariableChangeSinks).ArrayNum);
  pFVar7 = (this->ConsoleVariableChangeSinks).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->HistoryEntriesMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->HistoryEntriesMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HistoryEntriesMap);
  *(undefined4 *)&(this->ConsoleObjects).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ConsoleObjects).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,IConsoleObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,IConsoleObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,IConsoleObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  this->_padding_ = (longlong)&___7IConsoleManager__6B_;
  return;
}

// operator() @ 1416224d0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FConsoleManager::LoadAllPlatformCVars'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,EConsoleVariableFlags param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleVariable *pIVar4;
  FConsoleVariableBase *pFVar5;
  FString *pFVar6;
  FName *pFVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  FName local_e8;
  FString *local_e0;
  FString *local_d8;
  FString local_d0;
  FString local_c0;
  EConsoleVariableFlags local_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  void *local_70 [2];
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  FString local_50;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pIVar4 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar9,1);
  if (pIVar4 == (IConsoleVariable *)0x0) {
    local_e8 = *(FName *)((longlong)this + 8);
    ::FName::ToString(&local_e8,&local_a0);
    ::FString::PrintfImpl(&local_d0,L"%s@%s");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    lVar1 = *(longlong *)((longlong)this + 0x10);
    ::FString::FString(&local_c0,param_2);
    local_e0 = &local_d0;
    local_d8 = &local_c0;
    local_b0 = param_3 & ECVF_SetByMask;
    TSet<TTuple<FString,TTuple<FString,enum_EConsoleVariableFlags>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<FString,enum_EConsoleVariableFlags>,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TTuple<FString,enum_EConsoleVariableFlags>_&&>_>
              ((void *)(lVar1 + 0x180),
               (TPairInitializer<FString_const_&,TTuple<FString,EConsoleVariableFlags>_&&> *)
               &stack0x00000020,(bool *)&local_e0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogConsoleManager._0_1_) {
      ::FName::ToString((FName *)((longlong)this + 8),&local_90);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar5 = FindOrCreatePlatformCVar(pIVar4,*(FName *)((longlong)this + 8));
    if ((param_2->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    (**(code **)(pFVar5->_padding_ + 0x130))(pFVar5,pwVar9,param_3 & ECVF_SetByMask,0);
    if ((byte)LogConsoleManager._0_1_ < 6) {
      return;
    }
    pcVar2 = *(code **)(*(longlong *)pIVar4 + 0x100);
    local_f8 = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    pFVar6 = ::FName::ToString(this,&local_50);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_a8,pwVar9);
    plVar8 = (longlong *)(*pcVar2)(pIVar4,local_60,*pFVar7,&local_f8);
    if ((*plVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)*plVar8 + 0xd8))((longlong *)*plVar8,local_70);
    ::FName::ToString((FName *)((longlong)this + 8),&local_80);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_70[0] != (void *)0x0) {
      FMemory::Free(local_70[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    local_d0.Data.AllocatorInstance.Data = local_f8;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      local_d0.Data.AllocatorInstance.Data = local_f8;
    }
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return;
}

// AddConsoleHistoryEntry @ 1416267d0

void __thiscall
FConsoleManager::AddConsoleHistoryEntry(FConsoleManager *this,wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar7;
  int local_res8 [2];
  FString *local_res20;
  <lambda_1> local_58;
  FString local_50;
  FString local_40;
  
  LoadHistoryIfNeeded(this);
  ::FString::FString(&local_40,param_1);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar5.Data = local_40.Data.AllocatorInstance.Data;
  }
  iVar4 = local_40.Data.ArrayNum + -1;
  if (local_40.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
  iVar4 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->HistoryEntriesMap,uVar3,&local_40);
  if ((iVar4 == -1) ||
     (lVar6 = *(longlong *)&this->HistoryEntriesMap + (longlong)iVar4 * 0x28, lVar6 == 0)) {
    local_res20 = &local_40;
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->HistoryEntriesMap,(uint)local_res8,
               (TKeyInitializer<FString_&&> *)(ulonglong)uVar3,(bool *)&local_res20);
    lVar6 = *(longlong *)&this->HistoryEntriesMap + (longlong)local_res8[0] * 0x28;
  }
  this_00 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x10);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (0x40 < *(int *)(lVar6 + 0x18)) {
    do {
      pFVar7 = (this_00->AllocatorInstance).Data;
      if (*(void **)pFVar7 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar7);
      }
      iVar4 = *(int *)(lVar6 + 0x18) + -1;
      if (iVar4 != 0) {
        memmove(pFVar7,pFVar7 + 0x10,(longlong)iVar4 << 4);
      }
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this_00,*(int *)(lVar6 + 0x18),(int *)(lVar6 + 0x1c));
    } while (0x40 < *(int *)(lVar6 + 0x18));
  }
  ::FString::FString(&local_50,param_2);
  pFVar7 = (this_00->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_50) &&
     ((FScriptContainerElement *)&local_50 < pFVar7 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58.Item = &local_50;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (this_00,&local_58);
  pFVar7 = (this_00->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_50) &&
     ((FScriptContainerElement *)&local_50 < pFVar7 + (longlong)*(int *)(lVar6 + 0x1c) * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = *(int *)(lVar6 + 0x18);
  if (iVar4 == *(int *)(lVar6 + 0x1c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this_00,(int *)(lVar6 + 0x1c));
  }
  FVar5.Data = local_50.Data.AllocatorInstance.Data;
  *(int *)(lVar6 + 0x18) = iVar4 + 1;
  pFVar7 = (this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_50.Data.ArrayNum;
  if (local_50.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_50.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar5.Data,(longlong)local_50.Data.ArrayNum * 2);
  }
  SaveHistory(this);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// AddConsoleObject @ 141626ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleObject * __thiscall
FConsoleManager::AddConsoleObject(FConsoleManager *this,wchar_t *param_1,IConsoleObject *param_2)

{
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  IConsoleObject **ppIVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  EConsoleVariableFlags EVar6;
  undefined4 uVar7;
  IConsoleObject *pIVar8;
  ulonglong uVar9;
  IConsoleObject *pIVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  char cVar15;
  longlong lVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  FLLMScope local_res10 [2];
  IConsoleObject *local_res18 [2];
  TPairInitializer<FString_&&,IConsoleObject_*_const_&> local_1b8;
  FName local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  FName local_190;
  FString local_188;
  undefined1 local_178 [8];
  IConsoleObject *local_170;
  IConsoleObject *local_168;
  FMemScope local_160;
  FString local_158;
  FString local_148;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_114;
  undefined1 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  FString *local_100;
  IConsoleObject **local_f8;
  FString local_f0;
  FString *local_e0;
  IConsoleObject ***local_d8;
  FString local_d0;
  FString *local_c0;
  IConsoleObject **local_b8;
  FString local_b0;
  FString *local_a0;
  IConsoleObject **local_98;
  FString local_90;
  void *local_80 [2];
  void *local_70 [2];
  undefined1 local_60 [12];
  undefined1 local_54 [20];
  
  pwVar18 = L"";
  local_res18[0] = param_2;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Name",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xc25,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar8 = (IConsoleObject *)(*pcVar1)();
    return pIVar8;
  }
  if ((*param_1 == L'\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Name != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xc26,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar8 = (IConsoleObject *)(*pcVar1)();
    return pIVar8;
  }
  if ((local_res18[0] == (IConsoleObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xc27,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar8 = (IConsoleObject *)(*pcVar1)();
    return pIVar8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name3112,L"EngineMisc/ConsoleCommands");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name3112,false,None,Default,true);
  FMemScope::FMemScope(&local_160,&LLMScope_Name3112,true);
  lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar8 = (IConsoleObject *)(*pcVar1)();
    return pIVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_188,param_1);
  this_00 = &this->ConsoleObjects;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar14.Data = local_188.Data.AllocatorInstance.Data;
  }
  plVar17 = (longlong *)0x0;
  iVar13 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar14.Data);
  iVar13 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                       *)this_00,uVar5,&local_188);
  if ((iVar13 != -1) &&
     (lVar16 = (longlong)iVar13 * 0x20 + *(longlong *)&this_00->field_0x0, lVar16 != 0)) {
    plVar17 = *(longlong **)(lVar16 + 0x10);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  uVar9 = (**(code **)(local_res18[0]->_padding_ + 0x18))();
  if ((uVar9 & 0x40) != 0) {
    uVar9 = (**(code **)(local_res18[0]->_padding_ + 0x18))();
    if (((uVar9 & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(Obj->GetFlags() & ECVF_Cheat)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                           ,0xc30,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pIVar8 = (IConsoleObject *)(*pcVar1)();
      return pIVar8;
    }
    uVar9 = (**(code **)(local_res18[0]->_padding_ + 0x18))();
    if (((uVar9 & 4) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(Obj->GetFlags() & ECVF_ReadOnly)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                           ,0xc32,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pIVar8 = (IConsoleObject *)(*pcVar1)();
      return pIVar8;
    }
  }
  uVar9 = (**(code **)(local_res18[0]->_padding_ + 0x18))();
  if ((((uVar9 & 0x20) != 0) &&
      (lVar16 = (**(code **)(local_res18[0]->_padding_ + 0x80))(), lVar16 != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xc3a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar8 = (IConsoleObject *)(*pcVar1)();
    return pIVar8;
  }
  if (plVar17 == (longlong *)0x0) {
    ::FString::FString(&local_90,param_1);
    local_a0 = &local_90;
    local_98 = local_res18;
    TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,IConsoleObject_*_const_&>_>
              ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1b8,(bool *)&local_a0);
    pIVar8 = local_res18[0];
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
      pIVar8 = local_res18[0];
    }
  }
  else {
    lVar16 = (**(code **)(*plVar17 + 0x38))(plVar17);
    if ((((lVar16 == 0) && (lVar16 = (**(code **)(*plVar17 + 0x80))(plVar17), lVar16 == 0)) ||
        ((bVar3 = IsReloadActive(), !bVar3 &&
         (uVar9 = (**(code **)(*plVar17 + 0x18))(plVar17), (uVar9 & 8) == 0)))) &&
       (2 < (byte)LogConsoleManager._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    }
    pIVar10 = (IConsoleObject *)(**(code **)(*plVar17 + 0x38))(plVar17);
    local_1b8.Value = (IConsoleObject **)(**(code **)(*plVar17 + 0x80))(plVar17);
    cVar4 = '\x01';
    if (pIVar10 == (IConsoleObject *)0x0) {
      cVar15 = '\x01';
    }
    else {
      cVar15 = ((IConsoleObject *)local_1b8.Value != (IConsoleObject *)0x0) + '\x02';
    }
    pIVar8 = (IConsoleObject *)(**(code **)(local_res18[0]->_padding_ + 0x38))();
    local_1b8.Key = (FString *)(**(code **)(local_res18[0]->_padding_ + 0x80))();
    if (pIVar8 != (IConsoleObject *)0x0) {
      cVar4 = ((IConsoleObject *)local_1b8.Key != (IConsoleObject *)0x0) + '\x02';
    }
    if (cVar15 != cVar4) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    }
    ppIVar2 = local_1b8.Value;
    if ((pIVar10 == (IConsoleObject *)0x0) || (pIVar8 == (IConsoleObject *)0x0)) {
      if ((IConsoleObject *)local_1b8.Value == (IConsoleObject *)0x0) {
        pIVar8 = (IConsoleObject *)0x0;
      }
      else {
        local_168 = (IConsoleObject *)local_1b8.Key;
        ::FString::FString(&local_b0,param_1);
        local_c0 = &local_b0;
        local_b8 = &local_168;
        TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,IConsoleObject_*_&&>_>
                  ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                    *)&this->ConsoleObjects,
                   (TPairInitializer<FString_&&,IConsoleObject_*_&&> *)(local_178 + 4),
                   (bool *)&local_c0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        (**(code **)(*(longlong *)ppIVar2 + 0xa0))(ppIVar2);
        pIVar8 = (IConsoleObject *)local_1b8.Key;
      }
    }
    else {
      uVar9 = (**(code **)(pIVar10->_padding_ + 0x18))(pIVar10);
      if ((uVar9 & 0x10) == 0) {
        bVar3 = IsReloadActive();
        lVar16 = pIVar10->_padding_;
        if (bVar3) {
          cVar4 = (**(code **)(lVar16 + 0x50))(pIVar10);
          if (cVar4 != '\0') {
            local_1a0 = 0;
            (**(code **)(pIVar10->_padding_ + 0xd0))(pIVar10);
            local_138 = 0xe000000;
            local_134 = 0;
            local_130 = local_1a0;
            local_128 = 0;
            local_124 = 0xf000000;
            local_120 = 0x1000000;
            ::FString::PrintfImpl(&local_158,L"%g");
            lVar16 = pIVar8->_padding_;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_158.Data.ArrayNum != 0) {
              FVar14.Data = local_158.Data.AllocatorInstance.Data;
            }
            uVar12 = (**(code **)(lVar16 + 0xa8))(pIVar8,local_60,&local_138);
            (**(code **)(lVar16 + 0xb0))(pIVar8,FVar14.Data,uVar12);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
          }
          cVar4 = (**(code **)(pIVar10->_padding_ + 0x48))(pIVar10);
          if (cVar4 != '\0') {
            local_198 = 0;
            (**(code **)(pIVar10->_padding_ + 200))(pIVar10);
            local_114 = local_198;
            local_11c = 0xe000000;
            local_118 = 0;
            local_10c = 0;
            local_108 = 0xf000000;
            local_104 = 0x1000000;
            ::FString::PrintfImpl(&local_148,L"%d");
            lVar16 = pIVar8->_padding_;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_148.Data.ArrayNum != 0) {
              FVar14.Data = local_148.Data.AllocatorInstance.Data;
            }
            uVar12 = (**(code **)(lVar16 + 0xa8))(pIVar8,local_54,&local_11c);
            (**(code **)(lVar16 + 0xb0))(pIVar8,FVar14.Data,uVar12);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
          }
          cVar4 = (**(code **)(pIVar10->_padding_ + 0x58))(pIVar10);
          if (cVar4 != '\0') {
            local_190.ComparisonIndex.Value = 0;
            local_190.Number = 0;
            puVar11 = (undefined8 *)(**(code **)(pIVar10->_padding_ + 0xd8))(pIVar10,local_70);
            if (*(int *)(puVar11 + 1) != 0) {
              pwVar18 = (wchar_t *)*puVar11;
            }
            IConsoleVariable::Set<wchar_t_const_*>
                      ((IConsoleVariable *)pIVar8,pwVar18,ECVF_SetByCode,local_190);
            if (local_70[0] != (void *)0x0) {
              FMemory::Free(local_70[0]);
            }
          }
          (**(code **)(pIVar10->_padding_ + 0xa0))(pIVar10);
          local_1b8.Value = (IConsoleObject **)pIVar8;
          ::FString::FString(&local_d0,param_1);
          local_e0 = &local_d0;
          local_d8 = &local_1b8.Value;
          TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,IConsoleObject_*_&&>_>
                    ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                      *)&this->ConsoleObjects,
                     (TPairInitializer<FString_&&,IConsoleObject_*_&&> *)local_178,(bool *)&local_e0
                    );
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar7 = (**(code **)(pIVar8->_padding_ + 0x18))(pIVar8);
          (**(code **)(lVar16 + 0x20))(pIVar10,uVar7);
          pcVar1 = *(code **)(pIVar10->_padding_ + 0x10);
          uVar12 = (**(code **)(pIVar8->_padding_ + 8))(pIVar8);
          (*pcVar1)(pIVar10,uVar12);
          (**(code **)(pIVar8->_padding_ + 0xa0))(pIVar8);
          pIVar8 = pIVar10;
        }
      }
      else {
        uVar5 = (**(code **)(pIVar8->_padding_ + 0x18))(pIVar8);
        if (((uVar5 >> 0x19 & 1) == 0) ||
           (uVar5 = (**(code **)(pIVar10->_padding_ + 0x18))(pIVar10), (uVar5 >> 0x19 & 1) == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        uVar9 = (**(code **)(pIVar8->_padding_ + 0x18))(pIVar8);
        if (((uVar9 & 1) == 0) && (!bVar3)) {
          local_1a8.ComparisonIndex.Value = 0;
          local_1a8.Number = 0;
          EVar6 = (**(code **)(pIVar10->_padding_ + 0x18))(pIVar10);
          puVar11 = (undefined8 *)(**(code **)(pIVar10->_padding_ + 0xd8))(pIVar10,local_80);
          if (*(int *)(puVar11 + 1) != 0) {
            pwVar18 = (wchar_t *)*puVar11;
          }
          IConsoleVariable::Set<wchar_t_const_*>
                    ((IConsoleVariable *)pIVar8,pwVar18,EVar6 & ECVF_SetByMask,local_1a8);
          if (local_80[0] != (void *)0x0) {
            FMemory::Free(local_80[0]);
          }
        }
        (**(code **)(pIVar10->_padding_ + 0xa0))(pIVar10);
        local_170 = pIVar8;
        ::FString::FString(&local_f0,param_1);
        local_100 = &local_f0;
        local_f8 = &local_170;
        TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,IConsoleObject_*_&&>_>
                  ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                    *)&this->ConsoleObjects,
                   (TPairInitializer<FString_&&,IConsoleObject_*_&&> *)(local_res18 + 1),
                   (bool *)&local_100);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FMemScope::~FMemScope(&local_160);
  FLLMScope::~FLLMScope(local_res10);
  return pIVar8;
}

// AddShadowConsoleObject @ 141628450

void __thiscall
FConsoleManager::AddShadowConsoleObject
          (FConsoleManager *this,wchar_t *param_1,IConsoleObject *param_2)

{
  TPairInitializer<FString_&&,IConsoleObject_*_const_&> local_res8;
  IConsoleObject *local_res18 [2];
  FString *local_28;
  IConsoleObject **local_20;
  FString local_18;
  
  local_res18[0] = param_2;
  ::FString::FString(&local_18,param_1);
  local_28 = &local_18;
  local_20 = local_res18;
  TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,IConsoleObject_*_const_&>_>
            ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
              *)&this->ConsoleObjects,&local_res8,(bool *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BatchUpdateTag @ 14162b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConsoleManager::BatchUpdateTag
          (FConsoleManager *this,FName param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2)

{
  TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar3;
  FConsoleManager *pFVar4;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
  *pTVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<FSetElementId> FVar15;
  ForElementType<unsigned_int> FVar16;
  int iVar17;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar18;
  uint uVar19;
  uint *puVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar24;
  FName *this_01;
  wchar_t *pwVar25;
  uint uStackX_14;
  undefined1 auStackY_288 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [6];
  ForElementType<unsigned_int> local_250;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_248;
  int iStack_240;
  uint uStack_23c;
  ForElementType<unsigned_int> local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  int local_228;
  uint uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_218;
  FConsoleManager *local_210;
  FString local_208;
  FString local_1f8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  FName local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  FName local_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined4 local_180;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  undefined1 local_e8 [44];
  undefined4 local_bc;
  undefined4 local_9c;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  ForElementType<FSetElementId> local_60;
  int local_50 [2];
  ulonglong local_48;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_218 = param_2;
  local_210 = this;
  pTVar9 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                   *)&UE::ConsoleManager::Private::TaggedCVars,param_1);
  pTVar20 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)0x0;
  pTVar18 = pTVar20;
  if (pTVar9 != (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                 *)0x0) {
    pTVar18 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                **)&pTVar9->field_0x8;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.AllocationFlags.MaxBits = 0x80;
  uVar19 = 0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_50[0] = 0;
  pTVar24 = pTVar20;
  if ((pTVar18 !=
       (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *)0x0) &&
     (pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0, &local_98 != pTVar18)) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_60,local_50,(ForElementType<FSetElementId> *)(pTVar18 + 1),
               *(int *)pTVar18[1].AllocationFlags.AllocatorInstance.InlineData);
    iVar17 = (pTVar18->Data).ArrayNum;
    TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_98,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar17,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
               &local_98.Data.ArrayMax);
    local_98.FirstFreeIndex = pTVar18->FirstFreeIndex;
    local_98.NumFreeIndices = pTVar18->NumFreeIndices;
    if (&local_98.AllocationFlags != &pTVar18->AllocationFlags) {
      uVar7 = (pTVar18->AllocationFlags).NumBits + 0x1fU & 0xffffffe0;
      local_98.AllocationFlags.NumBits = 0;
      if ((local_98.AllocationFlags.MaxBits < (int)uVar7) ||
         (0x80 < local_98.AllocationFlags.MaxBits)) {
        local_98.AllocationFlags.MaxBits = 0x80;
        if (0x80 < (int)uVar7) {
          local_98.AllocationFlags.MaxBits = uVar7;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98.AllocationFlags,0);
      }
      local_98.AllocationFlags.NumBits = (pTVar18->AllocationFlags).NumBits;
      if (local_98.AllocationFlags.NumBits != 0) {
        FVar16 = (pTVar18->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar16 == (ForElementType<unsigned_int>)0x0) {
          FVar16 = (ForElementType<unsigned_int>)&pTVar18->AllocationFlags;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
        if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar14,(void *)FVar16,
               (ulonglong)(local_98.AllocationFlags.NumBits + 0x1fU >> 5) << 2);
      }
    }
    pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)(uint)local_98.AllocationFlags.NumBits;
    if (iVar17 != 0) {
      memcpy(local_98.Data.AllocatorInstance.Data,(pTVar18->Data).AllocatorInstance.Data,
             (longlong)iVar17 << 4);
      pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(ulonglong)(uint)local_98.AllocationFlags.NumBits;
    }
  }
  uVar7 = *(uint *)&param_2->field_0x28;
  local_250 = (ForElementType<unsigned_int>)&param_2->field_0x10;
  uStack_1dc = 1;
  local_1c8 = 0;
  uStack_1cc = local_1c8;
  if (uVar7 != 0) {
    puVar21 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)local_250;
    }
    uVar8 = *puVar21;
    pTVar18 = pTVar20;
    local_1c8 = 0;
    uVar19 = 0;
    while (uVar8 == 0) {
      iVar17 = (int)pTVar20;
      local_1c8 = (int)pTVar18 + 0x20;
      pTVar18 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(ulonglong)local_1c8;
      uVar19 = iVar17 + 1;
      pTVar20 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(ulonglong)uVar19;
      uStack_1cc = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14162b2de;
      uVar8 = (puVar21 + 1)[iVar17];
    }
    uStack_1dc = -uVar8 & uVar8;
    uVar10 = (ulonglong)uStack_1dc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b8 = (int)lVar13;
    uStack_1cc = local_1b8 + -1 + local_1c8;
    if ((int)uVar7 < (int)uStack_1cc) {
      uStack_1cc = uVar7;
    }
  }
LAB_14162b2de:
  uStack_1c4 = local_bc;
  iStack_1c0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar8 = *(uint *)&param_2->field_0x28;
  TStack_170._padding_ = CONCAT44(uStack_1dc,uVar19);
  uStack_1d0 = 0xffffffff;
  uVar22 = uVar8 & 0xffffffe0;
  TStack_170.CurrentBitIndex = uStack_1cc;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar8 >> 5;
  TStack_170._28_4_ = local_bc;
  TStack_170.BaseBitIndex = local_1c8;
  uStack_150 = CONCAT44(uStack_1bc,iStack_1c0);
  local_1e8 = param_2;
  uStack_1e0 = uVar19;
  local_1d8 = (undefined1 *)local_250;
  local_178 = param_2;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_250;
  if (((int)uVar8 < 0) || ((int)uVar7 < (int)uVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)(uint)local_98.AllocationFlags.NumBits;
  }
  pTVar3 = local_218;
  FVar16 = local_250;
  uVar19 = *(int *)((longlong)local_250 + 0x18);
  if (uVar8 != uVar19) {
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_250;
    }
    uVar7 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar17 * 4);
    while (uVar7 == 0) {
      lVar13 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar8 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14162b400;
      uVar7 = ((uint *)((longlong)FVar14 + 4))[lVar13];
    }
    uVar10 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b4 = (int)lVar13;
    uVar8 = local_1b4 + -1 + uVar22;
    if ((int)uVar19 < (int)uVar8) {
      uVar8 = uVar19;
    }
  }
LAB_14162b400:
  while( true ) {
    pTVar5 = local_178;
    if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
      local_258 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
      pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(ulonglong)(uint)local_98.AllocationFlags.NumBits;
    }
    uVar19 = (uint)pTVar24;
    if (((TStack_170.CurrentBitIndex == uVar8) &&
        ((ForElementType<unsigned_int>)TStack_170.Array == FVar16)) && (pTVar5 == pTVar3)) break;
    ::FName::ToString((FName *)((longlong)TStack_170.CurrentBitIndex * 0x20 + *(longlong *)pTVar5),
                      &local_1f8);
    pFVar4 = local_210;
    iVar17 = local_1f8.Data.ArrayNum + -1;
    FVar2.Data = local_1f8.Data.AllocatorInstance.Data;
    if (local_1f8.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,(wchar_t *)FVar2.Data);
    iVar17 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                         *)&pFVar4->ConsoleObjects,uVar19,&local_1f8);
    if ((((iVar17 != -1) &&
         (lVar13 = (longlong)iVar17 * 0x20 + *(longlong *)&pFVar4->ConsoleObjects, lVar13 != 0)) &&
        (plVar11 = *(longlong **)(lVar13 + 0x10), plVar11 != (longlong *)0x0)) &&
       ((uVar10 = (**(code **)(*plVar11 + 0x38))(), uVar10 != 0 &&
        (local_98.Data.ArrayNum != local_98.NumFreeIndices)))) {
      uVar19 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      FVar15 = (ForElementType<FSetElementId>)&local_60;
      if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_60.SecondaryData;
      }
      uVar19 = *(uint *)((longlong)FVar15 +
                        (longlong)(int)(local_50[0] - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4);
      if (uVar19 != 0xffffffff) {
LAB_14162b530:
        lVar13 = (longlong)(int)uVar19 * 0x10;
        if (*(ulonglong *)(local_98.Data.AllocatorInstance.Data + lVar13) != uVar10)
        goto code_r0x00014162b544;
        if (((int)uVar19 < 0) || (local_98.AllocationFlags.NumBits <= (int)uVar19)) {
LAB_14162b58e:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          FVar14 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
          if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar7 = uVar19;
          if ((int)uVar19 < 0) {
            uVar7 = uVar19 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar19 & 0x1f) & 1)
              == 0) goto LAB_14162b58e;
        }
        FVar2.Data = local_98.Data.AllocatorInstance.Data;
        FVar15 = (ForElementType<FSetElementId>)&local_60;
        if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_60.SecondaryData;
        }
        pFVar23 = (FScriptContainerElement *)
                  ((longlong)FVar15 +
                  (longlong)*(int *)(local_98.Data.AllocatorInstance.Data + lVar13 + 0xc) * 4);
        while( true ) {
          uVar7 = *(uint *)pFVar23;
          if ((uVar7 == 0xffffffff) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (uVar7 == uVar19) break;
          pFVar23 = local_98.Data.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 8;
        }
        *(uint *)pFVar23 = *(uint *)(FVar2.Data + lVar13 + 8);
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(&local_98,uVar19,1);
      }
    }
LAB_14162b644:
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)(uint)local_98.AllocationFlags.NumBits;
  }
  iStack_240 = 0;
  uStack_23c = 1;
  local_228 = 0;
  uStack_22c = 0;
  if (uVar19 != 0) {
    FVar16 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
    if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar7 = *(uint *)FVar16;
    local_228 = 0;
    while (uVar7 == 0) {
      lVar13 = (longlong)iStack_240;
      local_228 = local_228 + 0x20;
      iStack_240 = iStack_240 + 1;
      uStack_22c = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_240)
      goto LAB_14162b700;
      uVar7 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar13 * 4);
    }
    uStack_23c = -uVar7 & uVar7;
    uVar10 = (ulonglong)uStack_23c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1b0 = (int)lVar13;
    uStack_22c = local_228 + -1 + local_1b0;
    if ((int)uVar19 < (int)uStack_22c) {
      uStack_22c = uVar19;
    }
  }
LAB_14162b700:
  local_248 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               *)&local_98;
  uStack_224 = local_9c;
  local_238 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
  iStack_220 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
  uVar7 = uVar19 & 0xffffffe0;
  TStack_140._padding_ = CONCAT44(uStack_23c,iStack_240);
  uStack_230 = 0xffffffff;
  TStack_140.CurrentBitIndex = uStack_22c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar19 >> 5;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_228;
  uStack_120 = CONCAT44(uStack_21c,iStack_220);
  uVar8 = uVar19;
  local_148 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_248;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
  if (((int)uVar19 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar8 = local_98.AllocationFlags.NumBits, bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar19 != uVar8) {
    FVar16 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
    if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar19 = -1 << ((byte)pTVar24 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar17;
      uVar7 = uVar7 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) {
        pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(ulonglong)uVar8;
        goto LAB_14162b831;
      }
      uVar19 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar13 * 4);
    }
    uVar10 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1ac = (int)lVar13;
    uVar19 = (uVar7 - 1) + local_1ac;
    pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)uVar19;
    if ((int)uVar8 < (int)uVar19) {
      pTVar24 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(ulonglong)uVar8;
    }
  }
LAB_14162b831:
  while( true ) {
    pTVar20 = local_148;
    if ((local_148->Data).ArrayNum - local_148->NumFreeIndices != (int)uStack_120) {
      local_257 = 0;
      `TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_257);
    }
    if (((TStack_140.CurrentBitIndex == (int)pTVar24) &&
        (TStack_140.Array == &local_98.AllocationFlags)) && (pTVar20 == &local_98)) break;
    plVar11 = *(longlong **)
               ((pTVar20->Data).AllocatorInstance.Data + (longlong)TStack_140.CurrentBitIndex * 0x10
               );
    (**(code **)(*plVar11 + 0xb8))(plVar11,0xff000000,param_1);
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  pTVar9 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                   *)&UE::ConsoleManager::Private::TaggedCVars,param_1);
  if ((pTVar9 != (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                  *)0x0) &&
     (this_00 = *(TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)&pTVar9->field_0x8,
     this_00 !=
     (TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      *)0x0)) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  local_1a0 = param_1;
  if (UE::ConsoleManager::Private::TaggedCVars._8_4_ !=
      UE::ConsoleManager::Private::TaggedCVars._52_4_) {
    uVar19 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uStackX_14 = param_1.Number;
    TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                         *)&UE::ConsoleManager::Private::TaggedCVars,uStackX_14 + uVar19,&local_1a0)
    ;
  }
  pTVar3 = local_218;
  FVar16 = local_250;
  iStack_240 = 0;
  local_228 = 0;
  uStack_23c = 1;
  uVar19 = *(uint *)((longlong)local_250 + 0x18);
  uStack_22c = 0;
  if (uVar19 != 0) {
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_250;
    }
    uVar7 = *(uint *)FVar14;
    while (uVar7 == 0) {
      lVar13 = (longlong)iStack_240;
      local_228 = local_228 + 0x20;
      iStack_240 = iStack_240 + 1;
      uStack_22c = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_240)
      goto LAB_14162b99e;
      uVar7 = ((uint *)((longlong)FVar14 + 4))[lVar13];
    }
    uStack_23c = -uVar7 & uVar7;
    uVar10 = (ulonglong)uStack_23c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1a8 = (int)lVar13;
    uStack_22c = local_228 + -1 + local_1a8;
    if ((int)uVar19 < (int)uStack_22c) {
      uStack_22c = uVar19;
    }
  }
LAB_14162b99e:
  uStack_224 = uStack_1cc;
  uVar7 = *(uint *)&local_218->field_0x28;
  iStack_220 = *(int *)&local_218->field_0x8 - *(int *)&local_218->field_0x34;
  uVar8 = uVar7 & 0xffffffe0;
  uStack_230 = 0xffffffff;
  local_248 = local_218;
  TStack_110._padding_ = CONCAT44(uStack_23c,iStack_240);
  local_238 = local_250;
  TStack_110.CurrentBitIndex = uStack_22c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  local_118 = local_218;
  iVar17 = (int)uVar7 >> 5;
  TStack_110._28_4_ = uStack_1cc;
  TStack_110.BaseBitIndex = local_228;
  uStack_f0 = CONCAT44(uStack_21c,iStack_220);
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_250;
  if ((((int)uVar7 < 0) || ((int)uVar19 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar19 = *(uint *)((longlong)FVar16 + 0x18);
  if (uVar7 != uVar19) {
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar16;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar17 * 4);
    while (uVar7 == 0) {
      lVar13 = (longlong)iVar17;
      uVar8 = uVar8 + 0x20;
      iVar17 = iVar17 + 1;
      uVar7 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14162bac0;
      uVar7 = ((uint *)((longlong)FVar14 + 4))[lVar13];
    }
    uVar10 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar7 = (uVar8 - 1) + (int)lVar13;
    if ((int)uVar19 < (int)uVar7) {
      uVar7 = uVar19;
    }
  }
LAB_14162bac0:
  while( true ) {
    pTVar5 = local_118;
    if (*(int *)&local_118->field_0x8 - *(int *)&local_118->field_0x34 != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_256);
    }
    if (((TStack_110.CurrentBitIndex == uVar7) &&
        ((ForElementType<unsigned_int>)TStack_110.Array == FVar16)) && (pTVar5 == pTVar3)) break;
    this_01 = (FName *)((longlong)TStack_110.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    ::FName::ToString(this_01,&local_208);
    pFVar4 = local_210;
    iVar17 = local_208.Data.ArrayNum + -1;
    FVar2.Data = local_208.Data.AllocatorInstance.Data;
    if (local_208.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,(wchar_t *)FVar2.Data);
    iVar17 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                         *)&pFVar4->ConsoleObjects,uVar19,&local_208);
    if (((iVar17 != -1) &&
        (lVar13 = (longlong)iVar17 * 0x20 + *(longlong *)&pFVar4->ConsoleObjects, lVar13 != 0)) &&
       ((plVar11 = *(longlong **)(lVar13 + 0x10), plVar11 != (longlong *)0x0 &&
        (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x38))(), plVar11 != (longlong *)0x0)))) {
      bVar6 = ::FString::StartsWith(&local_208,L"sg.",3,IgnoreCase);
      if (this_01[2].ComparisonIndex.Value == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = *(wchar_t **)(this_01 + 1);
      }
      lVar13 = *plVar11;
      local_194 = 0;
      local_198 = 0x7040000;
      if (bVar6) {
        local_198 = 0x2040000;
      }
      local_188 = 0;
      local_184 = 0xf000000;
      local_180 = 0x1000000;
      local_190 = param_1;
      uVar12 = (**(code **)(lVar13 + 0xa8))(plVar11,local_e8,&local_198);
      (**(code **)(lVar13 + 0xb0))(plVar11,pwVar25,uVar12);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    FVar16 = local_250;
  }
  local_50[0] = 0;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  return;
code_r0x00014162b544:
  uVar19 = *(uint *)(local_98.Data.AllocatorInstance.Data + lVar13 + 8);
  if (uVar19 == 0xffffffff) goto LAB_14162b644;
  goto LAB_14162b530;
}

// CallAllConsoleVariableSinks @ 14162d3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConsoleManager::CallAllConsoleVariableSinks(FConsoleManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FConsoleManager::CallAllConsoleVariableSinks(void)_::_2_::FStat_ConsoleManager_CallAllConsoleVariableSinks>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  FScriptContainerElement *this_02;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  FReadAccessScope local_50;
  
  uVar13 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_ConsoleManager_CallAllConsoleVariableSinks ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FConsoleManager::CallAllConsoleVariableSinks(void)_::_2_::FStat_ConsoleManager_CallAllConsoleVariableSinks>
         )0x0) {
      pFVar8 = ::FName::FName(&local_res20,"ConsoleManager_CallAllConsoleVariableSinks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ConsoleManager_CallAllConsoleVariableSinks,
                 *pFVar8,L"ConsoleManager_CallAllConsoleVariableSinks","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_ConsoleManager_CallAllConsoleVariableSinks;
  if (StatPtr_ConsoleManager_CallAllConsoleVariableSinks ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FConsoleManager::CallAllConsoleVariableSinks(void)_::_2_::FStat_ConsoleManager_CallAllConsoleVariableSinks>
       )0x0) {
    pFVar8 = ::FName::FName(&local_78,"ConsoleManager_CallAllConsoleVariableSinks");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FConsoleManager::CallAllConsoleVariableSinks(void)_::_2_::FStat_ConsoleManager_CallAllConsoleVariableSinks>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_ConsoleManager_CallAllConsoleVariableSinks,*pFVar8,
                         L"ConsoleManager_CallAllConsoleVariableSinks","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar7 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0] = 0;
      bVar4 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar4) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                   ,0x7c4);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_14162d561;
    }
  }
  bVar3 = false;
  FVar11 = local_70;
LAB_14162d561:
  if (this->bCallAllConsoleVariableSinks != false) {
    uVar14 = uVar13;
    if (0 < (this->ConsoleVariableChangeSinks).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar7 = 0;
        if ((int)uVar12 < (this->ConsoleVariableChangeSinks).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_02 = (this->ConsoleVariableChangeSinks).AllocatorInstance.Data + uVar14;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_50);
        if ((*(int *)&this_02[0x10].field_0x0 != 0) &&
           (*(longlong **)&this_02[8].field_0x0 != (longlong *)0x0)) {
          (**(code **)(**(longlong **)&this_02[8].field_0x0 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x18;
      } while ((int)(uVar12 + 1) < (this->ConsoleVariableChangeSinks).ArrayNum);
    }
    this->bCallAllConsoleVariableSinks = false;
  }
  if (((bVar6) && (bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar6)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ClearAllPlatformCVars @ 14162e4a0

void __thiscall
FConsoleManager::ClearAllPlatformCVars(FConsoleManager *this,FName param_1,FString *param_2)

{
  undefined1 *puVar1;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  FName FVar6;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  FString *pFVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FName local_b8;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  FScriptContainerElement *local_40;
  
  MakePlatformKey((FName)&local_b8,(FString *)param_1);
  lpCriticalSection = &this->CachedPlatformsAndDeviceProfilesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar6 = local_b8;
  uVar10 = ::GetTypeHash(local_b8.ComparisonIndex.Value);
  if (*(int *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x8 !=
      *(int *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x34) {
    FVar14 = (this->CachedPlatformsAndDeviceProfiles).Hash.SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&(this->CachedPlatformsAndDeviceProfiles).Hash;
    }
    iVar11 = *(int *)((longlong)FVar14 +
                     (ulonglong)
                     ((this->CachedPlatformsAndDeviceProfiles).HashSize - 1U & FVar6.Number + uVar10
                     ) * 4);
    if (iVar11 != -1) {
      lVar13 = *(longlong *)&(this->CachedPlatformsAndDeviceProfiles).Elements;
      do {
        if (*(FName *)(lVar13 + (longlong)iVar11 * 0x10) == FVar6) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                    (&this->CachedPlatformsAndDeviceProfiles,local_b8);
          iVar11 = *(int *)&(this->ConsoleObjects).field_0x28;
          puVar1 = &(this->ConsoleObjects).field_0x10;
          iStack_a8 = 0;
          pTVar2 = &this->ConsoleObjects;
          uStack_a4 = 1;
          local_90 = 0;
          iStack_94 = 0;
          if (iVar11 == 0) goto LAB_14162e5fe;
          puVar18 = *(uint **)&(this->ConsoleObjects).field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)puVar1;
          }
          uVar10 = *puVar18;
          goto joined_r0x00014162e5bc;
        }
        iVar11 = *(int *)(lVar13 + 8 + (longlong)iVar11 * 0x10);
      } while (iVar11 != -1);
    }
  }
  goto LAB_14162e7c1;
joined_r0x00014162e5bc:
  if (uVar10 != 0) goto LAB_14162e5d8;
  lVar13 = (longlong)iStack_a8;
  local_90 = local_90 + 0x20;
  iStack_a8 = iStack_a8 + 1;
  iStack_94 = iVar11;
  if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14162e5fe;
  uVar10 = puVar18[lVar13 + 1];
  goto joined_r0x00014162e5bc;
LAB_14162e5d8:
  uStack_a4 = -uVar10 & uVar10;
  uVar3 = (ulonglong)uStack_a4 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  iStack_94 = local_90 + -1 + (int)lVar13;
  if (iVar11 < iStack_94) {
    iStack_94 = iVar11;
  }
LAB_14162e5fe:
  iStack_88 = *(int *)&(this->ConsoleObjects).field_0x8 - *(int *)&(this->ConsoleObjects).field_0x34
  ;
  uVar10 = *(uint *)&(this->ConsoleObjects).field_0x28;
  uStack_98 = 0xffffffff;
  uVar19 = uVar10 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar10 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar2;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->ConsoleObjects).field_0x28;
  if (uVar10 != uVar4) {
    puVar17 = *(undefined1 **)&(this->ConsoleObjects).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar10 == 0) {
      lVar13 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14162e710;
      uVar10 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar10 = (int)lVar13 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14162e710:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FString,IConsoleObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar10) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pFVar16 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_78.CurrentBitIndex * 0x20);
    ::FString::FString(&local_50,pFVar16);
    local_40 = pFVar16[1].Data.AllocatorInstance.Data;
    cVar9 = (**(code **)(*(longlong *)local_40 + 0x88))();
    if ((cVar9 == '\0') &&
       (plVar12 = (longlong *)(**(code **)(*(longlong *)local_40 + 0x38))(),
       plVar12 != (longlong *)0x0)) {
      (**(code **)(*plVar12 + 0x110))(plVar12,local_b8);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
LAB_14162e7c1:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DumpObjects @ 141636f70

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleManager::DumpObjects
          (FConsoleManager *this,wchar_t *param_1,FOutputDevice *param_2,bool param_3)

{
  IConsoleObject *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FOutputDevice *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  EConsoleVariableFlags EVar9;
  int iVar10;
  FString *pFVar11;
  size_t sVar12;
  IFileManager *pIVar13;
  FArchive *this_00;
  ulonglong uVar14;
  IConsoleObject **ppIVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *this_01;
  int iVar23;
  FIdentityFunctor FVar24;
  ForAnyElementType FVar25;
  wchar_t *local_res10;
  undefined1 local_156 [2];
  uint local_154;
  FString local_150;
  FScriptContainerElement *local_140;
  FString local_138;
  FString local_128;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_110;
  FOutputDevice *local_100;
  FScriptContainerElement *local_f8;
  FArchive *local_f0;
  FString local_e8;
  uint local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TStringView<wchar_t> local_a0;
  wchar_t *local_90;
  undefined4 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  void *local_50 [3];
  
  this_00 = (FArchive *)0x0;
  local_154 = 0;
  local_res10 = param_1;
  bVar5 = FParse::Param(param_1,L"showhelp");
  bVar6 = FParse::Param(local_res10,L"deprecated");
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  bVar7 = FParse::Value(local_res10,L"-csv=",&local_138,true,(wchar_t **)0x0);
  if ((bVar7) || (bVar7 = FParse::Param(local_res10,L"csv"), bVar7)) {
    FVar24 = (FIdentityFunctor)0x1;
  }
  else {
    FVar24 = (FIdentityFunctor)0x0;
  }
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  FParse::Value(local_res10,L"-setby=",&local_c0,true,(wchar_t **)0x0);
  FParse::Token(&local_b0,&local_res10,false);
  bVar7 = ::FString::StartsWith(&local_b0,L"-",1,IgnoreCase);
  if (bVar7) {
    ::FString::operator=(&local_b0,L"");
  }
  this_01 = &this->ConsoleObjects;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_118 = this_01;
  TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
              *)this_01,&local_110);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)local_110.AllocatorInstance.Data,local_110.ArrayNum,FVar24,
             (TLess<void> *)local_156);
  local_100 = (FOutputDevice *)0x0;
  local_f0 = (FArchive *)0x0;
  pFVar4 = param_2;
  if (FVar24 != (FIdentityFunctor)0x0) {
    if (local_138.Data.ArrayNum < 2) {
      pFVar11 = FPaths::ProjectLogDir(&local_e8);
      local_90 = L"ConsoleVars.csv";
      if (param_3) {
        local_90 = L"ConsoleCommands.csv";
      }
      local_a0.DataPtr = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      iVar10 = (pFVar11->Data).ArrayNum;
      local_a0.Size = iVar10 + -1;
      if (iVar10 == 0) {
        local_a0.Size = 0;
      }
      sVar12 = wcslen(local_90);
      local_88 = (undefined4)sVar12;
      FPaths::CombineInternal(&local_128,&local_a0,2);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      local_138.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
      local_138.Data.ArrayNum = local_128.Data.ArrayNum;
      local_138.Data.ArrayMax = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    pIVar13 = IFileManager::Get();
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar25.Data = local_138.Data.AllocatorInstance.Data;
    }
    this_00 = (FArchive *)(**(code **)((longlong)*pIVar13 + 0x20))(pIVar13,FVar25.Data,0x10);
    local_f0 = this_00;
    if (this_00 == (FArchive *)0x0) {
      FOutputDevice::LogfImpl(param_2,L"Unable to create CSV file for writing: \'%s\'");
      goto LAB_141637774;
    }
    FOutputDevice::LogfImpl(param_2,L"Dumping to CSV file: \'%s\'");
    pwVar20 = L"NAME%s";
    if (!param_3) {
      pwVar20 = L"NAME,VALUE,SETBY%s";
    }
    FArchive::LogfImpl(this_00,pwVar20);
    pFVar4 = local_100;
  }
  local_100 = pFVar4;
  uVar14 = (ulonglong)local_110.ArrayNum;
  pFVar21 = local_110.AllocatorInstance.Data + uVar14 * 0x10;
  local_d8 = local_110.ArrayNum;
  FVar25.Data = local_110.AllocatorInstance.Data;
  local_f8 = pFVar21;
  while( true ) {
    local_140 = FVar25.Data;
    if (local_110.ArrayNum != (int)uVar14) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_156);
    }
    if (FVar25.Data == pFVar21) break;
    iVar10 = local_b0.Data.ArrayNum;
    if (iVar10 < 2) {
LAB_141637288:
      ppIVar15 = TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
                 ::FindChecked((TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
                                *)this_01,(FString *)FVar25.Data);
      pIVar1 = *ppIVar15;
      plVar16 = (longlong *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
      plVar17 = (longlong *)(**(code **)(pIVar1->_padding_ + 0x80))(pIVar1);
      cVar8 = (**(code **)(pIVar1->_padding_ + 0x98))(pIVar1);
      plVar18 = plVar16;
      if (param_3) {
        plVar18 = plVar17;
      }
      this_01 = local_118;
      if (bVar6 == (bool)cVar8 && plVar18 != (longlong *)0x0) {
        cVar8 = (**(code **)(pIVar1->_padding_ + 0x98))(pIVar1);
        if (cVar8 == '\0') {
          cVar8 = (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1);
          pwVar20 = L"";
          if (cVar8 != '\0') {
            pwVar20 = L" [SHADOW]";
          }
        }
        else {
          pwVar20 = L" [DEPRECATED]";
        }
        ::FString::FString(&local_128,pwVar20);
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
        if (bVar5) {
          pwVar20 = (wchar_t *)(**(code **)(pIVar1->_padding_ + 8))(pIVar1);
          pFVar11 = ::FString::FString(&local_70,pwVar20);
          pFVar11 = ::FString::TrimStartAndEnd(pFVar11,&local_80);
          if (&local_150 != pFVar11) {
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            local_150.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_150.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_150.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (FVar24 == (FIdentityFunctor)0x0) {
            ::FString::PrintfImpl(&local_e8,L"\n%s\n ");
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            uVar2 = local_e8.Data._8_8_;
            local_150.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            uVar3 = local_e8.Data._8_8_;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = (int)uVar2;
            local_e8.Data.ArrayMax = SUB84(uVar2,4);
            local_150.Data.ArrayNum = local_e8.Data.ArrayNum;
            local_150.Data.ArrayMax = local_e8.Data.ArrayMax;
            local_e8.Data._8_8_ = uVar3;
          }
          else {
            ::FString::Replace(&local_150,&local_60,L"\n",L"\\n",IgnoreCase);
            ::FString::PrintfImpl(&local_d0,L",\"%s\"");
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            local_150.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
            local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_150.Data.ArrayNum = local_d0.Data.ArrayNum;
            local_150.Data.ArrayMax = local_d0.Data.ArrayMax;
            local_d0.Data.ArrayNum = 0;
            local_d0.Data.ArrayMax = 0;
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
        }
        if (plVar17 != (longlong *)0x0) {
          if (local_100 != (FOutputDevice *)0x0) {
            FOutputDevice::LogfImpl(local_100,L"%s%s%s");
          }
          FVar25.Data = local_140;
          if (this_00 != (FArchive *)0x0) {
            FArchive::LogfImpl(this_00,L"%s%s%s");
            FVar25.Data = local_140;
          }
        }
        if (plVar16 != (longlong *)0x0) {
          EVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
          pwVar20 = GetConsoleVariableSetByName(EVar9);
          iVar10 = local_c0.Data.ArrayNum + -1;
          if (local_c0.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          if (0 < iVar10) {
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_c0.Data.ArrayNum != 0) {
              FVar19.Data = local_c0.Data.AllocatorInstance.Data;
            }
            iVar10 = StricmpImpl<wchar_t,wchar_t>((wchar_t *)FVar19.Data,pwVar20);
            if (iVar10 != 0) {
              if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.Data.AllocatorInstance.Data);
              }
              pFVar21 = local_f8;
              this_01 = local_118;
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
                pFVar21 = local_f8;
                this_01 = local_118;
              }
              goto LAB_141637751;
            }
          }
          cVar8 = (**(code **)(pIVar1->_padding_ + 0x98))(pIVar1);
          if (cVar8 == '\0') {
            uVar22 = local_154 | 2;
            local_154 = uVar22;
            pFVar11 = (FString *)(**(code **)(*plVar16 + 0xd8))(plVar16,local_50);
          }
          else {
            uVar22 = local_154 | 1;
            local_154 = uVar22;
            pFVar11 = ::FString::FString((FString *)&local_a0,L"");
          }
          pFVar21 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
          if (((uVar22 & 2) != 0) &&
             (uVar22 = uVar22 & 0xfffffffd, local_154 = uVar22, local_50[0] != (void *)0x0)) {
            FMemory::Free(local_50[0]);
          }
          if (((uVar22 & 1) != 0) &&
             (local_154 = uVar22 & 0xfffffffe,
             (FScriptContainerElement *)local_a0.DataPtr != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_a0.DataPtr);
          }
          if (FVar24 == (FIdentityFunctor)0x0) {
            if (local_100 != (FOutputDevice *)0x0) {
              FOutputDevice::LogfImpl(local_100,L"%s%s = \"%s\"      LastSetBy: %s%s");
            }
            if (local_f0 != (FArchive *)0x0) {
              pwVar20 = L"%s%s = \"%s\"      LastSetBy: %s%s";
              goto LAB_1416376fc;
            }
          }
          else {
            if (local_100 != (FOutputDevice *)0x0) {
              FOutputDevice::LogfImpl(local_100,L"%s%s,%s,%s%s");
            }
            if (local_f0 != (FArchive *)0x0) {
              pwVar20 = L"%s%s,%s,%s%s";
LAB_1416376fc:
              FArchive::LogfImpl(local_f0,pwVar20);
            }
          }
          if (pFVar21 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar21);
          }
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        pFVar21 = local_f8;
        this_01 = local_118;
        FVar25.Data = local_140;
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
          pFVar21 = local_f8;
          this_01 = local_118;
          FVar25.Data = local_140;
        }
      }
    }
    else {
      iVar23 = iVar10 + -1;
      FVar19.Data = local_b0.Data.AllocatorInstance.Data;
      if (iVar10 == 0) {
        iVar23 = 0;
        FVar19.Data = (FScriptContainerElement *)L"";
      }
      bVar7 = ::FString::StartsWith((FString *)FVar25.Data,(wchar_t *)FVar19.Data,iVar23,IgnoreCase)
      ;
      if (bVar7) goto LAB_141637288;
    }
LAB_141637751:
    FVar25.Data = FVar25.Data + 0x10;
    uVar14 = (ulonglong)local_d8;
    this_00 = local_f0;
  }
  if (this_00 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)this_00)(this_00,1);
  }
LAB_141637774:
  DestructItems<FString,int>((FString *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// FindConsoleObject @ 14163ad30

/* WARNING: Enum "Type": Some values do not have unique names */

IConsoleObject * __thiscall
FConsoleManager::FindConsoleObject(FConsoleManager *this,wchar_t *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  byte bVar2;
  FName FVar3;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  IConsoleObject *pIVar9;
  longlong lVar10;
  ulonglong uVar11;
  FName *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  IConsoleObject *pIVar17;
  uint *puVar18;
  int local_res8 [2];
  undefined1 local_res18 [8];
  int local_res20;
  FName local_108;
  FName local_100;
  undefined4 local_f8;
  FString local_f0;
  FName *local_e0;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78;
  FName local_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pIVar9 = (IConsoleObject *)(*pcVar1)();
    return pIVar9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_f0,param_1);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar14.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pIVar9 = (IConsoleObject *)0x0;
  uVar8 = 0;
  uVar6 = local_f0.Data.ArrayNum - 1;
  if (local_f0.Data.ArrayNum == 0) {
    uVar6 = uVar8;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,(wchar_t *)FVar14.Data);
  iVar7 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                      *)&this->ConsoleObjects,uVar6,&local_f0);
  pIVar17 = pIVar9;
  if ((iVar7 != -1) &&
     (lVar10 = (longlong)iVar7 * 0x20 + *(longlong *)&(this->ConsoleObjects).field_0x0, lVar10 != 0)
     ) {
    pIVar17 = *(IConsoleObject **)(lVar10 + 0x10);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (param_2) {
    bVar5 = GFrameCounter < 1000;
    if (pIVar17 == (IConsoleObject *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FConsoleManager::FindConsoleObject'::__l31::
               _dynamic_atexit_destructor_for__PerNameNullFindCallCount__);
        _Init_thread_footer(&::_TSS0);
      }
      NullFindCallCount = NullFindCallCount + 1;
      ::FName::FName(&local_78,param_1);
      ::FName::FName(&local_108,param_1);
      FVar3 = local_108;
      uVar6 = ::GetTypeHash(local_108.ComparisonIndex.Value);
      uVar6 = uVar6 + FVar3.Number;
      if (PerNameNullFindCallCount._8_4_ != PerNameNullFindCallCount._52_4_) {
        lVar10 = 0x154b76928;
        if (PerNameNullFindCallCount._64_8_ != 0) {
          lVar10 = PerNameNullFindCallCount._64_8_;
        }
        iVar7 = *(int *)(lVar10 + (ulonglong)(PerNameNullFindCallCount._72_4_ - 1 & uVar6) * 4);
        while (iVar7 != -1) {
          lVar10 = PerNameNullFindCallCount._0_8_ + (longlong)iVar7 * 0x14;
          if (*(FName *)(PerNameNullFindCallCount._0_8_ + (longlong)iVar7 * 0x14) == local_108) {
            if (lVar10 != 0) goto LAB_14163af88;
            break;
          }
          iVar7 = *(int *)(lVar10 + 0xc);
        }
      }
      local_e0 = &local_108;
      TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_&&>_>
                ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                  *)&PerNameNullFindCallCount,(uint)local_res8,
                 (TKeyInitializer<FName_&&> *)(ulonglong)uVar6,(bool *)&local_e0);
      lVar10 = PerNameNullFindCallCount._0_8_ + (longlong)local_res8[0] * 0x14;
LAB_14163af88:
      iVar7 = *(int *)(lVar10 + 8);
      *(int *)(lVar10 + 8) = iVar7 + 1;
      if ((iVar7 == 0x1e) && (2 < (byte)LogConsoleManager._0_1_)) {
        pFVar12 = ::FName::FName(&local_70,param_1);
        TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
        ::FindChecked((TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                       *)&PerNameNullFindCallCount,*pFVar12);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
      if (NullFindCallCount != 500) {
        return (IConsoleObject *)0x0;
      }
      if (2 < (byte)LogConsoleManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
      uStack_cc = 1;
      local_b8 = 0;
      uVar6 = PerNameNullFindCallCount._40_4_;
      uStack_bc = local_b8;
      if (uVar6 != 0) {
        puVar18 = (uint *)&PerNameNullFindCallCount.field_0x10;
        if (PerNameNullFindCallCount._32_8_ != 0) {
          puVar18 = (uint *)PerNameNullFindCallCount._32_8_;
        }
        uVar15 = *puVar18;
        pIVar17 = pIVar9;
        local_b8 = 0;
        uVar8 = 0;
        while (uVar15 == 0) {
          iVar7 = (int)pIVar9;
          local_b8 = (int)pIVar17 + 0x20;
          pIVar17 = (IConsoleObject *)(ulonglong)local_b8;
          uVar8 = iVar7 + 1;
          pIVar9 = (IConsoleObject *)(ulonglong)uVar8;
          uStack_bc = uVar6;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar8)
          goto LAB_14163b08e;
          uVar15 = puVar18[(longlong)iVar7 + 1];
        }
        uStack_cc = -uVar15 & uVar15;
        uVar11 = (ulonglong)uStack_cc * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_res20 = (int)lVar10;
        uStack_bc = (local_b8 - 1) + local_res20;
        if ((int)uVar6 < (int)uStack_bc) {
          uStack_bc = uVar6;
        }
      }
LAB_14163b08e:
      bVar2 = PerNameNullFindCallCount._40_1_;
      uStack_b4 = local_3c;
      uVar15 = uVar6 & 0xffffffe0;
      uVar11 = PerNameNullFindCallCount._40_8_ & 0xffffffff;
      iStack_b0 = PerNameNullFindCallCount._8_4_ - PerNameNullFindCallCount._52_4_;
      uStack_c0 = 0xffffffff;
      local_d8 = &PerNameNullFindCallCount;
      TStack_a0._padding_ = CONCAT44(uStack_cc,uVar8);
      local_c8 = 0x154b76900;
      TStack_a0.CurrentBitIndex = uStack_bc;
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      local_a8 = &PerNameNullFindCallCount;
      iVar7 = (int)uVar6 >> 5;
      TStack_a0._28_4_ = local_3c;
      TStack_a0.BaseBitIndex = local_b8;
      uStack_80 = CONCAT44(uStack_ac,iStack_b0);
      TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&PerNameNullFindCallCount.field_0x10
      ;
      uVar16 = uVar6;
      uStack_d0 = uVar8;
      if ((int)uVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pIVar9 = (IConsoleObject *)(*pcVar1)();
          return pIVar9;
        }
        uVar16 = PerNameNullFindCallCount._40_4_;
      }
      if (uVar6 != uVar16) {
        lVar10 = 0x154b76900;
        if (PerNameNullFindCallCount._32_8_ != 0) {
          lVar10 = PerNameNullFindCallCount._32_8_;
        }
        uVar8 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar7 * 4);
        while (uVar8 == 0) {
          lVar13 = (longlong)iVar7;
          uVar15 = uVar15 + 0x20;
          iVar7 = iVar7 + 1;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) {
            uVar11 = (ulonglong)uVar16;
            goto LAB_14163b190;
          }
          uVar8 = *(uint *)(lVar10 + 4 + lVar13 * 4);
        }
        uVar11 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar15 = (int)lVar10 + -1 + uVar15;
        uVar11 = (ulonglong)uVar15;
        if ((int)uVar16 < (int)uVar15) {
          uVar11 = (ulonglong)uVar16;
        }
      }
LAB_14163b190:
      while( true ) {
        pTVar4 = local_a8;
        if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
          `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_a0.CurrentBitIndex == (int)uVar11) &&
            (TStack_a0.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&PerNameNullFindCallCount.field_0x10)) &&
           (pTVar4 == &PerNameNullFindCallCount)) break;
        lVar10 = *(longlong *)pTVar4;
        local_100 = *(FName *)(lVar10 + (longlong)TStack_a0.CurrentBitIndex * 0x14);
        local_f8 = *(undefined4 *)(lVar10 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x14);
        if (2 < (byte)LogConsoleManager._0_1_) {
          ::FName::ToString(&local_100,local_68);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      }
      return (IConsoleObject *)0x0;
    }
    uVar8 = pIVar17->FindCallCount + 1;
    pIVar17->FindCallCount = uVar8;
    if (((bVar5) && (uVar8 == 500)) && (2 < (byte)LogConsoleManager._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      uVar11 = (**(code **)(pIVar17->_padding_ + 0x18))(pIVar17);
      if ((uVar11 & 0x10) == 0) {
        return pIVar17;
      }
      return (IConsoleObject *)0x0;
    }
  }
  else if (pIVar17 == (IConsoleObject *)0x0) {
    return (IConsoleObject *)0x0;
  }
  uVar11 = (**(code **)(pIVar17->_padding_ + 0x18))(pIVar17);
  if ((uVar11 & 0x10) != 0) {
    pIVar17 = pIVar9;
  }
  return pIVar17;
}

// FindConsoleObjectName @ 14163b2d0

FString * __thiscall
FConsoleManager::FindConsoleObjectName
          (FConsoleManager *this,FString *__return_storage_ptr__,IConsoleObject *param_1)

{
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined4 local_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  
  if ((param_1 == (IConsoleObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xcd1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->ConsoleObjects;
  iStack_58 = 0;
  iVar3 = *(int *)&(this->ConsoleObjects).field_0x28;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ConsoleObjects).field_0x10;
  local_40 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->ConsoleObjects).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)TStack_80.Array;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar9 = (longlong)iStack_58;
      local_40 = local_40 + 0x20;
      iStack_58 = iStack_58 + 1;
      iStack_44 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14163b3db;
      uVar4 = puVar10[lVar9 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_54 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar9;
    if (iVar3 < iStack_44) {
      iStack_44 = iVar3;
    }
  }
LAB_14163b3db:
  uStack_48 = 0xffffffff;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = local_8c;
  TStack_80.BaseBitIndex = local_40;
  local_60 = pTVar1;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = iStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iStack_44 < iVar3) {
    do {
      pFVar7 = (FString *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar1);
      if ((IConsoleObject *)pFVar7[1].Data.AllocatorInstance.Data == param_1) {
        ::FString::FString(__return_storage_ptr__,pFVar7);
        goto LAB_14163b4b8;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  lVar9 = (**(code **)(param_1->_padding_ + 0x30))(param_1);
  if (lVar9 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0xd0);
    uVar8 = (**(code **)(param_1->_padding_ + 0x30))(param_1);
    (*pcVar5)(this,__return_storage_ptr__,uVar8);
  }
LAB_14163b4b8:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// FindConsoleObjectUnfiltered @ 14163b4f0

IConsoleObject * __thiscall
FConsoleManager::FindConsoleObjectUnfiltered(FConsoleManager *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IConsoleObject *pIVar4;
  longlong lVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FString local_18;
  
  lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IConsoleObject *)(*pcVar1)();
      return pIVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_18,param_1);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  pIVar4 = (IConsoleObject *)0x0;
  iVar6 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar7.Data);
  iVar6 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                      *)&this->ConsoleObjects,uVar3,&local_18);
  if ((iVar6 != -1) &&
     (lVar5 = (longlong)iVar6 * 0x20 + *(longlong *)&(this->ConsoleObjects).field_0x0, lVar5 != 0))
  {
    pIVar4 = *(IConsoleObject **)(lVar5 + 0x10);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pIVar4;
}

// FindConsoleVariable @ 14163b5e0

IConsoleVariable * __thiscall
FConsoleManager::FindConsoleVariable(FConsoleManager *this,wchar_t *param_1,bool param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  IConsoleVariable *pIVar3;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 200))();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((uVar2 & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014163b616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar3 = (IConsoleVariable *)(**(code **)(*plVar1 + 0x38))(plVar1,*(code **)(*plVar1 + 0x38));
      return pIVar3;
    }
  }
  return (IConsoleVariable *)0x0;
}

// ForEachConsoleObjectThatContains @ 14163c100

void __thiscall
FConsoleManager::ForEachConsoleObjectThatContains
          (FConsoleManager *this,
          TDelegate<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy>
          *param_1,wchar_t *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FString *this_00;
  size_t sVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar14;
  wchar_t *pwVar15;
  wchar_t wVar16;
  longlong lVar17;
  uint *puVar18;
  wchar_t *pwVar19;
  uint uVar20;
  undefined8 *puVar21;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  longlong *local_128;
  LPCRITICAL_SECTION local_120;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  FString local_c0;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80 [2];
  undefined4 local_4c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_b0);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Visitor.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xa0f,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThatContains",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xa10,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  this_00 = ::FString::FString(&local_c0,param_2);
  ::FString::ParseIntoArray(this_00,&local_138,L" ",true);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  sVar9 = wcslen(param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ConsoleObjectsSynchronizationObject;
  local_120 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  local_118 = &this->ConsoleObjects;
  iStack_e8 = 0;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ConsoleObjects).field_0x10;
  iVar14 = *(int *)&(this->ConsoleObjects).field_0x28;
  uStack_e4 = 1;
  local_d0 = iStack_e8;
  iStack_d4 = 0;
  if (iVar14 != 0) {
    puVar18 = *(uint **)&(this->ConsoleObjects).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_110.Array;
    }
    uVar20 = *puVar18;
    local_d0 = 0;
    iStack_e8 = 0;
    while (uVar20 == 0) {
      lVar11 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      iStack_d4 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14163c2c1;
      uVar20 = puVar18[lVar11 + 1];
    }
    uStack_e4 = -uVar20 & uVar20;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_d4 = (int)lVar11 + -1 + local_d0;
    if (iVar14 < iStack_d4) {
      iStack_d4 = iVar14;
    }
  }
LAB_14163c2c1:
  uStack_d8 = 0xffffffff;
  uStack_cc = local_4c;
  TStack_110._padding_ = CONCAT44(uStack_e4,iStack_e8);
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._28_4_ = local_4c;
  TStack_110.BaseBitIndex = local_d0;
  local_f0 = local_118;
  local_e0 = (undefined1 *)TStack_110.Array;
  TStack_110.CurrentBitIndex = iStack_d4;
  if (iStack_d4 < iVar14) {
    do {
      puVar21 = (undefined8 *)((longlong)TStack_110.CurrentBitIndex * 0x20 + *(longlong *)local_118)
      ;
      plVar13 = *(longlong **)
                 ((longlong)TStack_110.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)local_118);
      local_128 = plVar13;
      cVar5 = (**(code **)(*plVar13 + 0x88))(plVar13);
      if (cVar5 == '\0') {
        if ((int)sVar9 == 1) {
          if (*(int *)(puVar21 + 1) == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)*puVar21;
          }
          wVar16 = *param_2;
          if (wVar16 != L'\0') {
            pwVar19 = param_2;
            do {
              uVar2 = *(ushort *)(((longlong)pwVar15 - (longlong)param_2) + (longlong)pwVar19);
              if ((wchar_t)((-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2) !=
                  (wchar_t)((-(ushort)((ushort)wVar16 - 0x41 < 0x1a) & 0x20) + wVar16))
              goto LAB_14163c5af;
              wVar16 = pwVar19[1];
              pwVar19 = pwVar19 + 1;
            } while (wVar16 != L'\0');
          }
          if (*(int *)(puVar21 + 1) == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)*puVar21;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_98);
          if (*(int *)&param_1->field_0x10 == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)&param_1->field_0x8;
          }
          (**(code **)(*plVar12 + 0x60))(plVar12,pwVar15,plVar13);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_98);
        }
        else {
          uVar20 = 0;
          if (0 < local_138.ArrayNum) {
            lVar11 = 0;
            iVar14 = local_138.ArrayNum;
            bVar6 = true;
            do {
              uVar8 = 0;
              if ((int)uVar20 < iVar14) {
                uVar8 = ~uVar20 >> 0x1f;
              }
              if (uVar8 == 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar14 = local_138.ArrayNum;
              }
              if (*(int *)(local_138.AllocatorInstance.Data + lVar11 + 8) == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = *(wchar_t **)(local_138.AllocatorInstance.Data + lVar11);
              }
              if (*(int *)(puVar21 + 1) == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)*puVar21;
              }
              if (*pwVar19 != L'\0') {
                lVar17 = (longlong)pwVar19 - (longlong)pwVar15;
                pwVar10 = pwVar15;
                do {
                  do {
                    wVar16 = *pwVar10;
                    if (wVar16 == L'\0') {
                      bVar7 = true;
                      goto LAB_14163c531;
                    }
                  } while (((wchar_t)((-(ushort)(*(ushort *)(lVar17 + (longlong)pwVar10) - 0x41 <
                                                0x1a) & 0x20) +
                                     *(ushort *)(lVar17 + (longlong)pwVar10)) ==
                            (wchar_t)((-(ushort)((ushort)wVar16 - 0x41 < 0x1a) & 0x20) + wVar16)) &&
                          ((pwVar10 = pwVar10 + 1, *(short *)(lVar17 + (longlong)pwVar10) != 0 ||
                           (*pwVar10 == L'\0'))));
                  pwVar19 = pwVar19 + 1;
                  lVar17 = lVar17 + 2;
                  pwVar10 = pwVar15;
                } while (*pwVar19 != L'\0');
              }
              bVar7 = false;
LAB_14163c531:
              bVar4 = false;
              if (bVar7) {
                bVar4 = bVar6;
              }
              uVar20 = uVar20 + 1;
              lVar11 = lVar11 + 0x10;
              bVar6 = bVar4;
            } while ((int)uVar20 < iVar14);
            if ((bVar4) && (0 < iVar14)) {
              if (*(int *)(puVar21 + 1) == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)*puVar21;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,local_80)
              ;
              if (*(int *)&param_1->field_0x10 == 0) {
                plVar13 = (longlong *)0x0;
              }
              else {
                plVar13 = *(longlong **)&param_1->field_0x8;
              }
              (**(code **)(*plVar13 + 0x60))(plVar13,pwVar15,local_128);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(local_80);
            }
          }
        }
      }
LAB_14163c5af:
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
      lpCriticalSection = local_120;
    } while (TStack_110.CurrentBitIndex < (TStack_110.Array)->NumBits);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return;
}

// ForEachConsoleObjectThatStartsWith @ 14163c630

void __thiscall
FConsoleManager::ForEachConsoleObjectThatStartsWith
          (FConsoleManager *this,
          TDelegate<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy>
          *param_1,wchar_t *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  wchar_t wVar14;
  uint *puVar15;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  FReadAccessScope local_60 [2];
  undefined4 local_2c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,local_60);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_60);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Visitor.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x9fc,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_60);
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThatStartsWith",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x9fd,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_b8 = &this->ConsoleObjects;
  iStack_b0 = 0;
  iVar3 = *(int *)&(this->ConsoleObjects).field_0x28;
  local_a8 = &(this->ConsoleObjects).field_0x10;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ConsoleObjects).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_a8;
    }
    uVar4 = *puVar15;
    while (uVar4 == 0) {
      lVar10 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14163c7ad;
      uVar4 = puVar15[lVar10 + 1];
    }
    uStack_ac = -uVar4 & uVar4;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_9c = local_98 + -1 + (int)lVar10;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14163c7ad:
  uStack_a0 = 0xffffffff;
  uStack_94 = local_2c;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = local_2c;
  TStack_80.BaseBitIndex = local_98;
  local_88 = local_b8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  TStack_80.CurrentBitIndex = iStack_9c;
  if (iStack_9c < iVar3) {
    do {
      puVar12 = (undefined8 *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)local_88);
      plVar5 = *(longlong **)
                ((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)local_88);
      cVar7 = (**(code **)(*plVar5 + 0x88))(plVar5);
      if (cVar7 == '\0') {
        if (*(int *)(puVar12 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar12;
        }
        wVar14 = *param_2;
        if (wVar14 != L'\0') {
          pwVar9 = param_2;
          do {
            uVar2 = *(ushort *)(((longlong)pwVar13 - (longlong)param_2) + (longlong)pwVar9);
            if ((wchar_t)((-(ushort)(uVar2 - 0x41 < 0x1a) & 0x20) + uVar2) !=
                (wchar_t)((-(ushort)((ushort)wVar14 - 0x41 < 0x1a) & 0x20) + wVar14))
            goto LAB_14163c8e0;
            wVar14 = pwVar9[1];
            pwVar9 = pwVar9 + 1;
          } while (wVar14 != L'\0');
        }
        if (*(int *)(puVar12 + 1) == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)*puVar12;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
                   (FReadAccessScope *)&local_b8);
        if (*(int *)&param_1->field_0x10 == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)&param_1->field_0x8;
        }
        (**(code **)(*plVar11 + 0x60))(plVar11,pwVar13,plVar5);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_b8);
      }
LAB_14163c8e0:
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetConsoleHistory @ 14163f060

void __thiscall
FConsoleManager::GetConsoleHistory
          (FConsoleManager *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  int local_res8 [2];
  FString *local_res18;
  FString local_28;
  
  LoadHistoryIfNeeded(this);
  ::FString::FString(&local_28,param_1);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
  iVar4 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->HistoryEntriesMap,uVar3,&local_28);
  if ((iVar4 == -1) ||
     (lVar6 = *(longlong *)&this->HistoryEntriesMap + (longlong)iVar4 * 0x28, lVar6 == 0)) {
    local_res18 = &local_28;
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->HistoryEntriesMap,(uint)local_res8,
               (TKeyInitializer<FString_&&> *)(ulonglong)uVar3,(bool *)&local_res18);
    lVar6 = *(longlong *)&this->HistoryEntriesMap + (longlong)local_res8[0] * 0x28;
  }
  if (param_2 != (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x10)) {
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    iVar4 = *(int *)(lVar6 + 0x18);
    piVar1 = &param_2->ArrayMax;
    pFVar2 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar6 + 0x10))->AllocatorInstance).
             Data;
    param_2->ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar1,&param_2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FString,FString,int>((param_2->AllocatorInstance).Data,(FString *)pFVar2,iVar4)
      ;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetTextSection @ 141646e20

FString * __cdecl FConsoleManager::GetTextSection(FString *__return_storage_ptr__,wchar_t **param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pwVar2 = *param_1;
  wVar1 = *pwVar2;
  while ((wVar1 != L'\0' && (wVar1 != L' '))) {
    *param_1 = pwVar2 + 1;
    ::FString::AppendChar(__return_storage_ptr__,wVar1);
    pwVar2 = *param_1;
    wVar1 = *pwVar2;
  }
  wVar1 = *pwVar2;
  while (wVar1 == L' ') {
    pwVar2 = pwVar2 + 1;
    *param_1 = pwVar2;
    wVar1 = *pwVar2;
  }
  return __return_storage_ptr__;
}

// GetThreadPropagationCallback @ 141647070

IConsoleThreadPropagation * __thiscall
FConsoleManager::GetThreadPropagationCallback(FConsoleManager *this)

{
  return this->ThreadPropagationCallback;
}

// IsNameRegistered @ 14164a070

bool __thiscall FConsoleManager::IsNameRegistered(FConsoleManager *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_18,param_1);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar5 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  iVar5 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                      *)&this->ConsoleObjects,uVar4,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar5 != -1;
}

// IsThreadPropagationThread @ 14164a3c0

bool __thiscall FConsoleManager::IsThreadPropagationThread(FConsoleManager *this)

{
  DWORD DVar1;
  char acStackX_8 [8];
  undefined1 auStackX_10 [24];
  undefined1 *puStack_18;
  char *pcStack_10;
  
  acStackX_8[0] =
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9f0) == 0x10;
  DVar1 = GetCurrentThreadId();
  auStackX_10[0] = DVar1 == GRenderThreadId;
  if (auStackX_10[0] != acStackX_8[0]) {
    puStack_18 = auStackX_10;
    pcStack_10 = acStackX_8;
    `IsInActualRenderingThread'::__l3::<lambda_1>::operator()(&puStack_18);
  }
  return (bool)auStackX_10[0];
}

// LoadAllPlatformCVars @ 14164b650

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleManager::LoadAllPlatformCVars(FConsoleManager *this,FName param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  ForElementType<FSetElementId> FVar7;
  FName local_res8;
  FName local_res10;
  longlong local_res20;
  FString local_78;
  code *local_68;
  FName *local_60;
  FString local_58;
  FName local_48;
  longlong local_40;
  FConsoleManager *local_38;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res10 = param_1;
  MakePlatformKey((FName)&local_res20,(FString *)param_1);
  lpCriticalSection = &this->CachedPlatformsAndDeviceProfilesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar3 = local_res20;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_res20);
  if (*(int *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x8 !=
      *(int *)&(this->CachedPlatformsAndDeviceProfiles).Elements.field_0x34) {
    FVar7 = (this->CachedPlatformsAndDeviceProfiles).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->CachedPlatformsAndDeviceProfiles).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->CachedPlatformsAndDeviceProfiles).HashSize - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->CachedPlatformsAndDeviceProfiles).Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == lVar3) goto LAB_14164b7eb;
        iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->CachedPlatformsAndDeviceProfiles,&local_res8,(bool *)&local_res20);
  local_48 = local_res10;
  local_40 = local_res20;
  local_60 = &local_48;
  iVar5 = (param_2->Data).ArrayNum;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FConsoleManager::LoadAllPlatformCVars'::__l2::<lambda_1>,void,FString_const_&,FString_const_&,enum_EConsoleVariableFlags>
             ::Call;
  bVar2 = 1 < iVar5;
  local_38 = this;
  if (bVar2) {
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = iVar5;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)&local_78,iVar5,&local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
    pFVar6 = &local_78;
  }
  else {
    pFVar6 = ::FName::ToString(&local_res10,&local_58);
  }
  IConsoleManager::VisitPlatformCVarsForEmulation
            (local_res10,pFVar6,
             (TFunctionRef<void___cdecl(FString_const_&,FString_const_&,EConsoleVariableFlags)> *)
             &local_68);
  if (bVar2) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14164b7eb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// LoadHistoryIfNeeded @ 14164b820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014164c191) */

void __thiscall FConsoleManager::LoadHistoryIfNeeded(FConsoleManager *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FName _Src;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  FString *pFVar8;
  byte bVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint *puVar21;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar22;
  wchar_t *pwVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_568 [32];
  undefined1 local_518;
  undefined1 local_517 [7];
  ForAnyElementType local_510;
  undefined8 local_508;
  int local_500 [2];
  FString local_4f8;
  int local_4e8;
  uint uStack_4e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4e0;
  uint local_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  undefined4 uStack_4cc;
  FString local_4c8;
  FString local_4b8;
  int local_4a8;
  uint uStack_4a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4a0;
  undefined4 local_498;
  int iStack_494;
  int iStack_490;
  undefined4 uStack_48c;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_488;
  FString *local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_478;
  undefined8 local_458;
  FString local_450;
  FString local_440;
  FString *local_430;
  uint uStack_428;
  uint uStack_424;
  TBitArray<FDefaultBitArrayAllocator> *local_420;
  undefined4 uStack_418;
  uint uStack_414;
  uint local_410;
  uint uStack_40c;
  int iStack_408;
  undefined4 uStack_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  FString *local_3f0;
  FString *local_3e8;
  FName local_3e0;
  FString local_3d8;
  FString *local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c0;
  int iStack_3a0;
  undefined4 uStack_39c;
  FString *local_398;
  longlong lStack_390;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_388;
  uint uStack_380;
  int iStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  int local_370;
  undefined4 uStack_36c;
  FString local_368;
  FString local_358;
  FString *local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  uint uStack_330;
  uint uStack_32c;
  uint local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  undefined1 local_318 [32];
  uint *local_2f8;
  uint local_2f0;
  int local_2e4;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_568;
  uVar15 = 0;
  local_500[0] = 0;
  if (this->bHistoryWasLoaded == false) {
    this_00 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->HistoryEntriesMap;
    this->bHistoryWasLoaded = true;
    local_488 = this_00;
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(this_00);
    FConfigFile::FConfigFile((FConfigFile *)local_318);
    local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.Data.ArrayNum = 0;
    local_450.Data.ArrayMax = 0;
    FConfigContext::FConfigContext
              (&local_228,(FConfigCacheIni *)0x0,false,&local_450,(FConfigFile *)local_318);
    pFVar7 = FPaths::GeneratedConfigDir(&local_368);
    ::FString::ConcatFC(&local_3d8,pFVar7,L"ConsoleHistory.ini");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_3d8.Data.ArrayNum != 0) {
      FVar11.Data = local_3d8.Data.AllocatorInstance.Data;
    }
    FConfigContext::Load(&local_228,(wchar_t *)FVar11.Data);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    FConfigContext::~FConfigContext(&local_228);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_440,L"ConsoleHistory");
    ::FName::FName(&local_3e0,L"History");
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    uStack_424 = 1;
    uStack_414 = 0;
    uStack_428 = 0;
    local_410 = 0;
    if (local_2f0 != 0) {
      puVar21 = (uint *)(local_318 + 0x10);
      if (local_2f8 != (uint *)0x0) {
        puVar21 = local_2f8;
      }
      uVar22 = *puVar21;
      uStack_428 = uVar15;
      local_410 = uVar15;
      while (uVar22 == 0) {
        lVar10 = (longlong)(int)uStack_428;
        local_410 = local_410 + 0x20;
        uStack_428 = uStack_428 + 1;
        uStack_414 = local_2f0;
        if ((int)((local_2f0 - 1) + ((int)(local_2f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_428)
        goto LAB_14164b9f0;
        uVar22 = puVar21[lVar10 + 1];
      }
      uStack_424 = -uVar22 & uVar22;
      uVar3 = (ulonglong)uStack_424 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_400 = (int)lVar10;
      uStack_414 = (local_410 - 1) + local_400;
      if ((int)local_2f0 < (int)uStack_414) {
        uStack_414 = local_2f0;
      }
    }
LAB_14164b9f0:
    local_430 = (FString *)local_318;
    local_420 = (TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10);
    iStack_408 = local_318._8_4_ - local_2e4;
    TStack_3c0._padding_ = CONCAT44(uStack_424,uStack_428);
    uStack_418 = 0xffffffff;
    TStack_3c0.UnvisitedBitMask = 0xffffffff;
    uStack_39c = uStack_404;
    uStack_40c = uStack_414;
    local_3c8 = local_430;
    TStack_3c0.CurrentBitIndex = uStack_414;
    TStack_3c0.BaseBitIndex = local_410;
    TStack_3c0._28_4_ = uStack_414;
    iStack_3a0 = iStack_408;
    TStack_3c0.Array = local_420;
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    uVar4 = local_2f0;
    uStack_4d4 = local_2f0;
    bVar9 = (byte)local_2f0 & 0x1f;
    uStack_4e4 = 1 << bVar9;
    iVar18 = (int)local_2f0 >> 5;
    uVar22 = -1 << bVar9;
    uVar16 = local_2f0 & 0xffffffe0;
    pTStack_4e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10);
    local_4e8 = iVar18;
    local_4d8 = uVar22;
    uStack_4d0 = uVar16;
    if ((int)local_2f0 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (uVar4 != local_2f0) {
      puVar21 = (uint *)(local_318 + 0x10);
      if (local_2f8 != (uint *)0x0) {
        puVar21 = local_2f8;
      }
      uVar22 = uVar22 & puVar21[iVar18];
      while (uVar22 == 0) {
        uStack_4d0 = uVar16 + 0x20;
        local_4e8 = iVar18 + 1;
        uStack_4d4 = local_2f0;
        if ((int)((local_2f0 - 1) + ((int)(local_2f0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_4e8)
        goto LAB_14164bb71;
        uVar22 = puVar21[(longlong)iVar18 + 1];
        local_4d8 = 0xffffffff;
        iVar18 = local_4e8;
        uVar16 = uStack_4d0;
      }
      uStack_4e4 = -uVar22 & uVar22;
      uVar3 = (ulonglong)uStack_4e4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_3fc = (int)lVar10;
      uStack_4d4 = local_3fc + -1 + uVar16;
      if ((int)local_2f0 < (int)uStack_4d4) {
        uStack_4d4 = local_2f0;
      }
    }
LAB_14164bb71:
    TStack_478._padding_ = CONCAT44(uStack_4e4,local_4e8);
    local_480 = (FString *)local_318;
    TStack_478.CurrentBitIndex = uStack_4d4;
    TStack_478.UnvisitedBitMask = local_4d8;
    TStack_478._28_4_ = uStack_4cc;
    TStack_478.BaseBitIndex = uStack_4d0;
    iStack_320 = local_318._8_4_ - local_2e4;
    TStack_478.Array = pTStack_4e0;
    pTVar1 = TStack_478.Array;
    local_458 = CONCAT44(local_458._4_4_,iStack_320);
    TStack_478.Array._0_4_ = SUB84(pTStack_4e0,0);
    TStack_478.Array._4_4_ = (undefined4)((ulonglong)pTStack_4e0 >> 0x20);
    local_338 = TStack_478.Array._0_4_;
    uStack_334 = TStack_478.Array._4_4_;
    uStack_330 = local_4d8;
    uStack_32c = uStack_4d4;
    local_328 = uStack_4d0;
    uStack_324 = uStack_4cc;
    uStack_31c = local_458._4_4_;
    TStack_478.Array = pTVar1;
    local_348 = local_480;
    lStack_340 = TStack_478._padding_;
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    while( true ) {
      pFVar7 = local_3c8;
      pwVar23 = (wchar_t *)0x0;
      if ((local_3c8->Data).ArrayNum -
          *(int *)((longlong)&local_3c8[3].Data.AllocatorInstance.Data + 4) != iStack_3a0) {
        local_518 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_518);
      }
      FVar11.Data = local_440.Data.AllocatorInstance.Data;
      if (((TStack_3c0.CurrentBitIndex == uStack_32c) &&
          (TStack_3c0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_334,local_338))) &&
         (pFVar7 == local_348)) break;
      local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar24 = (pFVar7->Data).AllocatorInstance.Data + (longlong)TStack_3c0.CurrentBitIndex * 0x110
      ;
      iVar19 = 0;
      local_4f8.Data.ArrayNum = 0;
      local_4f8.Data.ArrayMax = 0;
      iVar18 = *(int *)(pFVar24 + 8);
      iVar17 = local_440.Data.ArrayNum;
      if (iVar18 == iVar17) {
        if (1 < iVar18) {
          iVar18 = StricmpImpl<wchar_t,wchar_t>
                             ((wchar_t *)
                              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar24->field_0x0)
                              ->AllocatorInstance).Data,
                              (wchar_t *)local_440.Data.AllocatorInstance.Data);
          bVar6 = iVar18 == 0;
          goto LAB_14164bc7c;
        }
LAB_14164bd20:
        iVar18 = 0;
        if (iVar19 == 0) {
          pwVar23 = L"";
        }
        else {
          iVar18 = iVar19 + -1;
        }
        uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar23);
        iVar18 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(this_00,uVar22,&local_4f8);
        if ((iVar18 == -1) ||
           (lVar10 = *(longlong *)&this_00->Elements + (longlong)iVar18 * 0x28, lVar10 == 0)) {
          local_3f0 = &local_4f8;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    (this_00,(uint)local_500,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar22,
                     (bool *)&local_3f0);
          lVar10 = *(longlong *)&this_00->Elements + (longlong)local_500[0] * 0x28;
        }
        iVar18 = (((FString *)(pFVar24 + 0x30))->Data).ArrayNum;
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar24 + 0x20);
        uStack_4a4 = 1;
        local_3e8 = (FString *)(pFVar24 + 0x10);
        local_4a8 = 0;
        pTStack_4a0 = pTVar1;
        local_498 = 0xffffffff;
        iStack_494 = 0;
        iStack_490 = 0;
        if (iVar18 != 0) {
          pTVar20 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)&pFVar24[0x30].field_0x0 !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)&pFVar24[0x30].field_0x0;
          }
          uVar22 = *(uint *)&((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data;
          while (uVar22 == 0) {
            lVar13 = (longlong)local_4a8;
            iStack_490 = iStack_490 + 0x20;
            local_4a8 = local_4a8 + 1;
            if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < local_4a8)
            goto LAB_14164be4b;
            uVar22 = *(uint *)((longlong)
                               &((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data
                              + lVar13 * 4 + 4);
            local_498 = 0xffffffff;
          }
          uStack_4a4 = -uVar22 & uVar22;
          uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_3f8 = (int)lVar13;
          iStack_494 = (int)lVar13 + -1 + iStack_490;
          if (iVar18 < iStack_494) {
LAB_14164be4b:
            iStack_494 = iVar18;
          }
        }
        local_498 = 0xffffffff;
        uVar22 = *(uint *)(pFVar24 + 0x38);
        local_398 = local_3e8;
        local_370 = *(int *)(pFVar24 + 0x18) - *(int *)(pFVar24 + 0x44);
        uVar16 = uVar22 & 0xffffffe0;
        lStack_390 = CONCAT44(uStack_4a4,local_4a8);
        pTStack_388 = pTVar1;
        iVar19 = (int)uVar22 >> 5;
        uStack_380 = 0xffffffff;
        iStack_37c = iStack_494;
        iStack_378 = iStack_490;
        uStack_374 = uStack_48c;
        local_480 = local_3e8;
        TStack_478._padding_ = CONCAT44(uStack_4a4,local_4a8);
        TStack_478.Array = pTVar1;
        TStack_478.UnvisitedBitMask = 0xffffffff;
        TStack_478.CurrentBitIndex = iStack_494;
        TStack_478.BaseBitIndex = iStack_490;
        TStack_478._28_4_ = uStack_48c;
        local_458 = CONCAT44(uStack_36c,*(int *)(pFVar24 + 0x18) - *(int *)(pFVar24 + 0x44));
        if (((int)uVar22 < 0) || (iVar18 < (int)uVar22)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar7 = local_3e8;
        uVar4 = *(uint *)(pFVar24 + 0x38);
        if (uVar22 != uVar4) {
          pTVar20 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)&pFVar24[0x30].field_0x0 !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)&pFVar24[0x30].field_0x0;
          }
          uVar22 = -1 << ((byte)uVar22 & 0x1f) &
                   *(uint *)((longlong)
                             &((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data +
                            (longlong)iVar19 * 4);
          while (uVar22 == 0) {
            lVar13 = (longlong)iVar19;
            uVar16 = uVar16 + 0x20;
            iVar19 = iVar19 + 1;
            uVar22 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_14164bf70;
            uVar22 = *(uint *)((longlong)
                               &((ForAnyElementType *)(pTVar20->AllocatorInstance).InlineData)->Data
                              + lVar13 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_3f4 = (int)lVar13;
          uVar22 = (int)lVar13 + -1 + uVar16;
          if ((int)uVar4 < (int)uVar22) {
            uVar22 = uVar4;
          }
        }
LAB_14164bf70:
        while( true ) {
          pFVar8 = local_480;
          if ((local_480->Data).ArrayNum -
              *(int *)((longlong)&local_480[3].Data.AllocatorInstance.Data + 4) != (int)local_458) {
            local_517[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_517);
          }
          if (((TStack_478.CurrentBitIndex == uVar22) && (TStack_478.Array == pTVar1)) &&
             (pFVar8 == pFVar7)) break;
          pFVar2 = (FName *)((pFVar8->Data).AllocatorInstance.Data +
                            (longlong)TStack_478.CurrentBitIndex * 0x28);
          if (*pFVar2 == local_3e0) {
            if (*(char *)((longlong)&pFVar2[3].Number + 1) == '\0') {
              uVar16 = pFVar2[2].ComparisonIndex.Value;
              _Src = pFVar2[1];
              uVar15 = uVar15 | 2;
              local_4c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_4c8.Data.ArrayNum = uVar16;
              if (uVar16 == 0) {
                local_4c8.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar16,0,(ForAnyElementType *)&local_4c8,uVar16,
                           &local_4c8.Data.ArrayMax);
                memcpy(local_4c8.Data.AllocatorInstance.Data,(void *)_Src,(longlong)(int)uVar16 * 2)
                ;
              }
              pFVar8 = &local_4c8;
            }
            else {
              uVar15 = uVar15 | 1;
              pFVar8 = FConfigValue::ExpandValue(&local_358,(FString *)(pFVar2 + 1));
            }
            local_510.Data = (FScriptContainerElement *)0x0;
            iVar18 = (pFVar8->Data).ArrayNum;
            pFVar24 = (pFVar8->Data).AllocatorInstance.Data;
            local_508 = CONCAT44(local_508._4_4_,iVar18);
            if (iVar18 == 0) {
              local_508 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar18,0,&local_510,iVar18,(int *)((longlong)&local_508 + 4));
              memcpy(local_510.Data,pFVar24,(longlong)iVar18 * 2);
            }
            if (((uVar15 & 2) != 0) &&
               (uVar15 = uVar15 & 0xfffffffd,
               local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
            }
            if (((uVar15 & 1) != 0) &&
               (uVar15 = uVar15 & 0xfffffffe,
               local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
            if ((*(ForAnyElementType **)(lVar10 + 0x10) <= &local_510) &&
               (&local_510 <
                *(ForAnyElementType **)(lVar10 + 0x10) + (longlong)*(int *)(lVar10 + 0x1c) * 2)) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar18 = *(int *)(lVar10 + 0x18);
            if (iVar18 == *(int *)(lVar10 + 0x1c)) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c))
              ;
            }
            *(int *)(lVar10 + 0x18) = iVar18 + 1;
            puVar14 = (undefined8 *)((longlong)iVar18 * 0x10 + *(longlong *)(lVar10 + 0x10));
            *puVar14 = 0;
            *puVar14 = local_510.Data;
            local_510.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)(puVar14 + 1) = (undefined4)local_508;
            *(undefined4 *)((longlong)puVar14 + 0xc) = local_508._4_4_;
            local_508 = 0;
          }
          TStack_478.UnvisitedBitMask = TStack_478.UnvisitedBitMask & ~TStack_478._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_478);
        }
        this_00 = local_488;
        if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
          this_00 = local_488;
        }
      }
      else {
        bVar6 = iVar18 + iVar17 == 1;
LAB_14164bc7c:
        if (bVar6) goto LAB_14164bd20;
        if (iVar17 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = iVar17 + -1;
        }
        FVar12.Data = (FScriptContainerElement *)L"";
        if (iVar17 != 0) {
          FVar12.Data = FVar11.Data;
        }
        bVar6 = ::FString::StartsWith((FString *)pFVar24,(wchar_t *)FVar12.Data,iVar18,IgnoreCase);
        if (bVar6) {
          iVar18 = local_440.Data.ArrayNum + -1;
          if (local_440.Data.ArrayNum == 0) {
            iVar18 = 0;
          }
          ::FString::RightChop((FString *)pFVar24,&local_4b8,iVar18);
          if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
          }
          pwVar23 = (wchar_t *)local_4b8.Data.AllocatorInstance.Data;
          iVar19 = local_4b8.Data.ArrayNum;
          local_4f8.Data.AllocatorInstance.Data = local_4b8.Data.AllocatorInstance.Data;
          local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4f8.Data.ArrayNum = local_4b8.Data.ArrayNum;
          local_4f8.Data.ArrayMax = local_4b8.Data.ArrayMax;
          local_4b8.Data.ArrayNum = 0;
          local_4b8.Data.ArrayMax = 0;
          goto LAB_14164bd20;
        }
        if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
        }
      }
      TStack_3c0.UnvisitedBitMask = TStack_3c0.UnvisitedBitMask & ~TStack_3c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c0);
    }
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    FConfigFile::~FConfigFile((FConfigFile *)local_318);
  }
  return;
}

// MatchPartialName @ 14164daa0

bool __cdecl FConsoleManager::MatchPartialName(wchar_t *param_1,wchar_t *param_2)

{
  ushort uVar1;
  wchar_t wVar2;
  longlong lVar3;
  
  wVar2 = *param_2;
  if (wVar2 != L'\0') {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(ushort *)(lVar3 + (longlong)param_2);
      if ((wchar_t)((-(ushort)(uVar1 - 0x41 < 0x1a) & 0x20) + uVar1) !=
          (wchar_t)((-(ushort)((ushort)wVar2 - 0x41 < 0x1a) & 0x20) + wVar2)) {
        return false;
      }
      wVar2 = param_2[1];
      param_2 = param_2 + 1;
    } while (wVar2 != L'\0');
  }
  return true;
}

// MatchSubstring @ 14164db00

bool __cdecl FConsoleManager::MatchSubstring(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  
  if (*param_1 != L'\0') {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    pwVar2 = param_2;
    do {
      do {
        wVar1 = *pwVar2;
        if (wVar1 == L'\0') {
          return true;
        }
      } while (((wchar_t)((-(ushort)(*(ushort *)(lVar3 + (longlong)pwVar2) - 0x41 < 0x1a) & 0x20) +
                         *(ushort *)(lVar3 + (longlong)pwVar2)) ==
                (wchar_t)((-(ushort)((ushort)wVar1 - 0x41 < 0x1a) & 0x20) + wVar1)) &&
              ((pwVar2 = pwVar2 + 1, *(short *)(lVar3 + (longlong)pwVar2) != 0 || (*pwVar2 == L'\0')
               )));
      param_1 = param_1 + 1;
      lVar3 = lVar3 + 2;
      pwVar2 = param_2;
    } while (*param_1 != L'\0');
  }
  return false;
}

// OnCVarChanged @ 14164ea30

void __thiscall FConsoleManager::OnCVarChanged(FConsoleManager *this)

{
  this->bCallAllConsoleVariableSinks = true;
  return;
}

// OnCVarUnregistered @ 14164ea40

TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> * __thiscall
FConsoleManager::OnCVarUnregistered(FConsoleManager *this)

{
  return &this->ConsoleVariableUnregisteredDelegate;
}

// OnConsoleObjectUnregistered @ 14164f030

TMulticastDelegate<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy> *
__thiscall FConsoleManager::OnConsoleObjectUnregistered(FConsoleManager *this)

{
  return &this->ConsoleObjectUnregisteredDelegate;
}

// OnCreatedPlatformCVar @ 14164f0a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleManager::OnCreatedPlatformCVar
          (FConsoleManager *this,IConsoleVariable *param_1,TSharedPtr<IConsoleVariable,1> *param_2,
          FName param_3)

{
  undefined8 *puVar1;
  IConsoleVariable *pIVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  TMultiMap<FString,TTuple<FString,EConsoleVariableFlags>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<FString,EConsoleVariableFlags>,1>_>
  *this_00;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  TArray<TTuple<FString,EConsoleVariableFlags>_*,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  undefined8 local_b8;
  FName local_b0;
  FScriptContainerElement *local_a8;
  TMultiMap<FString,TTuple<FString,EConsoleVariableFlags>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<FString,EConsoleVariableFlags>,1>_>
  *local_a0;
  LPCRITICAL_SECTION local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  FString local_70;
  void *local_60 [2];
  undefined1 local_50 [24];
  
  local_b0 = param_3;
  (**(code **)(this->_padding_ + 0xd0))(this,local_60,param_1);
  ::FName::ToString(&local_b0,&local_70);
  ::FString::PrintfImpl(&local_c8,L"%s@%s");
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60[0] != (void *)0x0) {
    FMemory::Free(local_60[0]);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CachedPlatformsAndDeviceProfilesLock;
  local_98 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  local_a0 = &this->UnknownCVarCache;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  TMultiMap<FString,TTuple<FString,enum_EConsoleVariableFlags>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<FString,enum_EConsoleVariableFlags>,1>_>
  ::MultiFindPointer<TSizedDefaultAllocator<32>_>(local_a0,&local_c8,&local_d8,true);
  uVar5 = local_d8._8_8_;
  uVar11 = (ulonglong)local_d8.ArrayNum;
  if (0 < local_d8.ArrayNum) {
    local_a8 = local_d8.AllocatorInstance.Data + uVar11 * 8;
    uVar12 = uVar11;
    FVar14.Data = local_d8.AllocatorInstance.Data;
    while( true ) {
      pFVar6 = local_a8;
      if ((int)uVar11 != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,enum_EConsoleVariableFlags>_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      lpCriticalSection = local_98;
      this_00 = local_a0;
      if (FVar14.Data == pFVar6) break;
      puVar1 = *(undefined8 **)FVar14.Data;
      if ((param_2->Object == (IConsoleVariable *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar2 = param_2->Object;
      local_90 = *(undefined4 *)(puVar1 + 2);
      local_b8 = 0;
      if (*(int *)(puVar1 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar1;
      }
      lVar3 = *(longlong *)pIVar2;
      local_8c = 0;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0xf000000;
      local_78 = 0x1000000;
      uVar9 = (**(code **)(lVar3 + 0xa8))(pIVar2,local_50,&local_90);
      (**(code **)(lVar3 + 0xb0))(pIVar2,pwVar13,uVar9);
      if (5 < (byte)LogConsoleManager._0_1_) {
        GetConsoleVariableSetByName(*(EConsoleVariableFlags *)(puVar1 + 2));
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
      uVar11 = local_d8._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 8;
      uVar12 = uVar5 & 0xffffffff;
    }
    if (*(int *)&local_a0->field_0x8 != *(int *)&local_a0->field_0x34) {
      iVar10 = local_c8.Data.ArrayNum + -1;
      FVar14.Data = local_c8.Data.AllocatorInstance.Data;
      if (local_c8.Data.ArrayNum == 0) {
        iVar10 = 0;
        FVar14.Data = (FScriptContainerElement *)L"";
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar14.Data);
      TSet<TTuple<FString,TTuple<FString,enum_EConsoleVariableFlags>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<FString,enum_EConsoleVariableFlags>,1>,FDefaultSetAllocator>
      ::RemoveImpl<FString>(this_00,uVar8,&local_c8);
    }
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  LeaveCriticalSection(lpCriticalSection);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// PreviewPlatformCVars @ 1416507d0

void __thiscall
FConsoleManager::PreviewPlatformCVars
          (FConsoleManager *this,FName param_1,FString *param_2,FName param_3)

{
  (**(code **)(this->_padding_ + 0x120))();
  return;
}

// ProcessUserConsoleInput @ 141650840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall
FConsoleManager::ProcessUserConsoleInput
          (FConsoleManager *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  wchar_t wVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  IConsoleManager *pIVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  EConsoleVariableFlags EVar14;
  longlong lVar15;
  size_t sVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  FName *pFVar19;
  longlong *plVar20;
  FString *pFVar21;
  longlong *plVar22;
  IConsoleVariable *this_00;
  TSharedPtr<IConsoleVariable,1> *pTVar23;
  ulong64 uVar24;
  FWriteBuffer *pFVar25;
  ForAnyElementType FVar26;
  ushort *puVar27;
  FOutputDevice *pFVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  wchar_t *pwVar32;
  ulonglong _Size;
  undefined1 auStackY_1228 [32];
  FString local_11f0;
  wchar_t *local_11e0;
  FOutputDevice *local_11d8;
  FString local_11d0;
  FName local_11b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_11b0;
  undefined4 local_11a0;
  undefined4 uStack_119c;
  FString local_1198;
  FString local_1188;
  FString local_1178;
  undefined8 local_1168;
  FString local_1160;
  wchar_t *local_1150;
  FName local_1148;
  FName local_1140;
  UWorld *local_1138;
  FString local_1130;
  TSharedPtr<IConsoleVariable,1> local_1120;
  FString local_1110;
  FString local_1100;
  FName local_10f0;
  void *local_10e8 [2];
  FString local_10d8;
  undefined1 local_10c8 [8];
  TReferenceControllerBase<1> *local_10c0;
  FString local_10b8;
  FString local_10a8;
  FString local_1098;
  void *local_1088 [2];
  FScriptContainerElement *local_1078 [2];
  undefined1 local_1068 [16];
  undefined4 local_1058;
  undefined1 local_1054 [4092];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14165085f;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1228;
  local_11e0 = param_1;
  local_11d8 = param_2;
  local_1138 = param_3;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInput",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0xb4e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  bVar7 = false;
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuConsoleCmdFields>
              ((TLogScope<1> *)local_1068);
    iVar31 = 0;
    wVar1 = *local_11e0;
    pwVar32 = local_11e0;
    while (wVar1 != L'\0') {
      pwVar32 = pwVar32 + 1;
      iVar31 = iVar31 + 1;
      wVar1 = *pwVar32;
    }
    UE::Trace::Private::Field_WriteStringWide(0,local_11e0,iVar31);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar15 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar15;
    if (lVar4 != local_1068._8_8_) {
      *(longlong *)(lVar4 + 0x28) = lVar15;
    }
    bVar7 = true;
    *(undefined8 *)(local_1068._8_8_ + 0x28) = *(undefined8 *)(local_1068._8_8_ + 0x20);
  }
  FCsvProfiler::RecordEventfInternal(0,L"Cmd: %s");
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint2901 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint2901,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                 ,0xb55,L"Cmd: %s");
      __BookmarkPoint2901 = true;
    }
    pwVar32 = local_11e0;
    uVar11 = CallstackTrace_GetCurrentId();
    if (pwVar32 == (wchar_t *)0x0) {
      uVar30 = 4;
      local_1058 = 0xc201;
      puVar18 = local_1054;
    }
    else {
      sVar16 = wcslen(pwVar32);
      iVar31 = (int)sVar16 * 2 + 2;
      if (0xffff < iVar31) {
        iVar31 = 0xffff;
      }
      uVar30 = (longlong)iVar31 + 2;
      param_2 = local_11d8;
      if (0x1000 < uVar30) goto LAB_141650ae3;
      local_1058 = CONCAT22(local_1058._2_2_,0xc201);
      sVar16 = wcslen(pwVar32);
      uVar12 = (int)sVar16 * 2 + 2;
      uVar17 = (ulonglong)uVar12;
      if (0xffff < (int)uVar12) {
        uVar17 = 0xffff;
      }
      _Size = uVar17 & 0xffff;
      memcpy((void *)((longlong)&local_1058 + 2),pwVar32,_Size);
      if ((short)uVar17 == -1) {
        local_11a0 = 0x2e002e;
        uStack_119c = 0x2e;
        *(undefined8 *)(local_1068 + (_Size - ((uint)_Size & 1)) + 10) = 0x2e002e002e;
      }
      puVar18 = local_1054 + (_Size - 2);
    }
    if (((longlong)puVar18 - (longlong)&local_1058 != uVar30) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PayloadBufferPtr - Buffer == FormatArgsSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                           ,0x44,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    param_2 = local_11d8;
    if ((ushort)uVar30 != 0) {
      FMiscTrace::OutputBookmarkInternal
                (&__BookmarkPoint2901,uVar11,(ushort)uVar30,(uchar *)&local_1058);
      param_2 = local_11d8;
    }
  }
LAB_141650ae3:
  bVar9 = FParse::Command(&local_11e0,L"dumpcvars",true);
  if (bVar9) {
    DumpObjects(this,local_11e0,param_2,false);
    uVar8 = 1;
    goto LAB_141651621;
  }
  bVar9 = FParse::Command(&local_11e0,L"dumpccmds",true);
  if (bVar9) {
    DumpObjects(this,local_11e0,param_2,true);
    uVar8 = 1;
    goto LAB_141651621;
  }
  bVar9 = FParse::Command(&local_11e0,L"setcvar",true);
  if (bVar9) {
    SetUnsetCVar(&this->ConsoleObjects,local_11e0,param_2,true);
    uVar8 = 1;
    goto LAB_141651621;
  }
  bVar9 = FParse::Command(&local_11e0,L"unsetcvar",true);
  if (bVar9) {
    SetUnsetCVar(&this->ConsoleObjects,local_11e0,param_2,false);
    uVar8 = 1;
    goto LAB_141651621;
  }
  bVar9 = FParse::Command(&local_11e0,L"unsetcvartag",true);
  if (bVar9) {
    local_1150 = local_11e0;
    FParse::Token(&local_1130,&local_1150,false);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pIVar6 = IConsoleManager::Singleton;
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_1130.Data.ArrayNum != 0) {
      FVar26.Data = local_1130.Data.AllocatorInstance.Data;
    }
    pcVar5 = *(code **)((longlong)*IConsoleManager::Singleton + 0x130);
    pFVar19 = ::FName::FName(&local_10f0,(wchar_t *)FVar26.Data);
    (*pcVar5)(pIVar6,*pFVar19,0xff000000);
    if (local_1130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1130.Data.AllocatorInstance.Data);
    }
    uVar8 = 1;
    goto LAB_141651621;
  }
  local_11f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11f0.Data.ArrayNum = 0;
  local_11f0.Data.ArrayMax = 0;
  wVar1 = *local_11e0;
  pwVar32 = local_11e0;
  while ((wVar1 != L'\0' && (wVar1 != L' '))) {
    pwVar32 = pwVar32 + 1;
    ::FString::AppendChar(&local_11f0,wVar1);
    wVar1 = *pwVar32;
  }
  wVar1 = *pwVar32;
  while (wVar1 == L' ') {
    pwVar32 = pwVar32 + 1;
    wVar1 = *pwVar32;
  }
  if (local_11f0.Data.ArrayNum < 2) {
    uVar8 = 0;
  }
  else {
    puVar27 = (ushort *)&u__;
    bVar9 = ::FString::EndsWith(&local_11f0,L"?",1,CaseSensitive);
    if (bVar9) {
      iVar31 = local_11f0.Data.ArrayNum + -2;
      if (local_11f0.Data.ArrayNum == 0) {
        iVar31 = -1;
      }
      if (iVar31 < 0x7fffffff) {
        iVar29 = local_11f0.Data.ArrayNum + -1;
        if (local_11f0.Data.ArrayNum == 0) {
          iVar29 = 0;
        }
        iVar13 = iVar29;
        if (iVar31 < iVar29) {
          iVar13 = iVar31;
        }
        iVar31 = 0;
        if (0 < iVar13) {
          iVar31 = iVar13;
        }
        ::FString::RemoveAt(&local_11f0,iVar31,iVar29 - iVar31,No);
      }
      ::FString::RemoveAt(&local_11f0,0,0,No);
    }
    local_11b8.ComparisonIndex.Value = 0;
    local_11b8.Number = 0;
    local_1160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1160.Data.ArrayNum = 0;
    local_1160.Data.ArrayMax = 0;
    iVar31 = ::FString::Find(&local_11f0,L"@",1,IgnoreCase,FromStart,-1);
    if (iVar31 != -1) {
      local_1178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1178.Data.ArrayNum = 0;
      local_1178.Data.ArrayMax = 0;
      local_1198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1198.Data.ArrayNum = 0;
      local_1198.Data.ArrayMax = 0;
      ::FString::FString(&local_1110,L"@");
      ::FString::Split(&local_11f0,&local_1110,&local_1178,&local_1198);
      if (local_1110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1110.Data.AllocatorInstance.Data);
      }
      iVar29 = 0;
      iVar31 = local_1178.Data.ArrayNum + -1;
      if (local_1178.Data.ArrayNum == 0) {
        iVar31 = iVar29;
      }
      if (iVar31 != 0) {
        iVar31 = local_1198.Data.ArrayNum + -1;
        if (local_1198.Data.ArrayNum == 0) {
          iVar31 = iVar29;
        }
        if (iVar31 != 0) {
          if (local_1178.Data.ArrayNum != 0) {
            iVar29 = local_1178.Data.ArrayNum + -1;
          }
          ::FString::AssignRange
                    (&local_11f0,(wchar_t *)local_1178.Data.AllocatorInstance.Data,iVar29);
          iVar31 = ::FString::Find(&local_1198,L"/",1,IgnoreCase,FromStart,-1);
          if (iVar31 == -1) {
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_1198.Data.ArrayNum != 0) {
              FVar26.Data = local_1198.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_1140,(wchar_t *)FVar26.Data);
            local_11b8 = local_1140;
          }
          else {
            local_1188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1188.Data.ArrayNum = 0;
            local_1188.Data.ArrayMax = 0;
            ::FString::FString(&local_1100,L"/");
            ::FString::Split(&local_1198,&local_1100,&local_1188,&local_1160);
            if (local_1100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1100.Data.AllocatorInstance.Data);
            }
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_1188.Data.ArrayNum != 0) {
              FVar26.Data = local_1188.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_1148,(wchar_t *)FVar26.Data);
            local_11b8 = local_1148;
            if (local_1188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1188.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      if (local_1198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1198.Data.AllocatorInstance.Data);
      }
      if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1178.Data.AllocatorInstance.Data);
      }
    }
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_11f0.Data.ArrayNum != 0) {
      FVar26.Data = local_11f0.Data.AllocatorInstance.Data;
    }
    plVar20 = (longlong *)(**(code **)(this->_padding_ + 200))(this,FVar26.Data,1);
    if ((plVar20 == (longlong *)0x0) ||
       (uVar30 = (**(code **)(*plVar20 + 0x18))(plVar20), (uVar30 & 8) != 0)) {
      uVar8 = 0;
    }
    else {
      pFVar21 = (FString *)(**(code **)(this->_padding_ + 0xd0))(this,local_10e8,plVar20);
      if (&local_11f0 != pFVar21) {
        if (local_11f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11f0.Data.AllocatorInstance.Data);
        }
        local_11f0.Data.AllocatorInstance.Data = (pFVar21->Data).AllocatorInstance.Data;
        (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_11f0.Data.ArrayNum = (pFVar21->Data).ArrayNum;
        local_11f0.Data.ArrayMax = (pFVar21->Data).ArrayMax;
        (pFVar21->Data).ArrayNum = 0;
        (pFVar21->Data).ArrayMax = 0;
      }
      if (local_10e8[0] != (void *)0x0) {
        FMemory::Free(local_10e8[0]);
      }
      plVar22 = (longlong *)(**(code **)(*plVar20 + 0x80))(plVar20);
      this_00 = (IConsoleVariable *)(**(code **)(*plVar20 + 0x38))(plVar20);
      local_1120.Object = (IConsoleVariable *)0x0;
      local_1120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar28 = local_11d8;
      if (local_11b8 != (FName)0x0) {
        if (this_00 == (IConsoleVariable *)0x0) {
          ::FName::ToString(&local_11b8,&local_10d8);
          pFVar28 = local_11d8;
          FOutputDevice::LogfImpl
                    (local_11d8,
                     L"Ignoring platform portion (@%s), which is only valid for looking up CVars");
          if (local_10d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10d8.Data.AllocatorInstance.Data);
          }
        }
        else {
          pTVar23 = (TSharedPtr<IConsoleVariable,1> *)
                    (**(code **)(*(longlong *)this_00 + 0x100))(this_00,local_10c8);
          TSharedPtr<IConsoleVariable,1>::operator=(&local_1120,pTVar23);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_10c0);
          this_00 = local_1120.Object;
          pFVar28 = local_11d8;
          if (local_1120.Object == (IConsoleVariable *)0x0) {
            ::FName::ToString(&local_11b8,&local_10b8);
            FOutputDevice::LogfImpl
                      (local_11d8,
                       L"Unable find CVar %s for platform %s (possibly invalid platform name?)");
            if (local_10b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_10b8.Data.AllocatorInstance.Data);
            }
            uVar8 = 0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1120.SharedReferenceCount.ReferenceController);
            goto LAB_141651604;
          }
        }
      }
      if (plVar22 == (longlong *)0x0) {
        if (this_00 != (IConsoleVariable *)0x0) {
          if (*pwVar32 == L'\0') {
            bVar10 = true;
          }
          else {
            pFVar21 = ::FString::FString(&local_1098,pwVar32);
            ::FString::TrimStartAndEnd(pFVar21,&local_11d0);
            if (local_1098.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1098.Data.AllocatorInstance.Data);
            }
            uVar11 = (**(code **)(*(longlong *)this_00 + 0x18))(this_00);
            iVar31 = local_11d0.Data.ArrayNum + -1;
            if (local_11d0.Data.ArrayNum == 0) {
              iVar31 = 0;
            }
            if (1 < iVar31) {
              if (*(wchar_t *)local_11d0.Data.AllocatorInstance.Data == L'\"') {
                iVar29 = local_11d0.Data.ArrayNum + -2;
                iVar31 = local_11d0.Data.ArrayNum + -1;
                if (local_11d0.Data.ArrayNum == 0) {
                  iVar29 = -1;
                }
                if (iVar29 < 0) {
code_r0x0001416512a6:
                  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                      ,0x107,
                                      L"String index out of bounds: Index %i from a string with a length of %i"
                                     );
                  if (bVar10) {
                    pcVar5 = (code *)swi(3);
                    uVar8 = (*pcVar5)();
                    return (bool)uVar8;
                  }
                }
                else {
                  if (local_11d0.Data.ArrayNum == 0) {
                    iVar31 = 0;
                  }
                  if (iVar31 <= iVar29) goto code_r0x0001416512a6;
                }
                if (*(short *)(local_11d0.Data.AllocatorInstance.Data + (longlong)iVar29 * 2) ==
                    0x22) {
                  iVar31 = local_11d0.Data.ArrayNum + -3;
                  if (local_11d0.Data.ArrayNum == 0) {
                    iVar31 = -2;
                  }
                  if (iVar31 < 0x7ffffffe) {
                    if (local_11d0.Data.ArrayNum == 0) {
                      iVar29 = 0;
                    }
                    else {
                      iVar29 = local_11d0.Data.ArrayNum + -1;
                    }
                    iVar13 = iVar29;
                    if (iVar31 + 1 < iVar29) {
                      iVar13 = iVar31 + 1;
                    }
                    iVar31 = 0;
                    if (0 < iVar13) {
                      iVar31 = iVar13;
                    }
                    ::FString::RemoveAt(&local_11d0,iVar31,iVar29 - iVar31,No);
                  }
                  ::FString::RemoveAt(&local_11d0,0,1,No);
                }
              }
              iVar31 = local_11d0.Data.ArrayNum + -1;
              if (local_11d0.Data.ArrayNum == 0) {
                iVar31 = 0;
              }
              if ((0 < iVar31) && (*(wchar_t *)local_11d0.Data.AllocatorInstance.Data == L'=')) {
                FOutputDevice::Log(local_11d8,
                                   L"Warning: Processing the console input parameters the leading \'=\' is ignored (only needed for ini files)."
                                  );
                iVar31 = local_11d0.Data.ArrayNum + -1;
                if (local_11d0.Data.ArrayNum == 0) {
                  iVar31 = 0;
                }
                if ((iVar31 + -1 != 0x7fffffff) && (iVar31 + -1 < 0x7ffffffe)) {
                  iVar29 = 0;
                  if (local_11d0.Data.ArrayNum != 0) {
                    iVar29 = local_11d0.Data.ArrayNum + -1;
                  }
                  iVar13 = iVar29;
                  if (iVar31 < iVar29) {
                    iVar13 = iVar31;
                  }
                  iVar31 = 0;
                  if (0 < iVar13) {
                    iVar31 = iVar13;
                  }
                  ::FString::RemoveAt(&local_11d0,iVar31,iVar29 - iVar31,No);
                }
                ::FString::RemoveAt(&local_11d0,0,1,No);
              }
            }
            FVar26.Data = (FScriptContainerElement *)L"";
            if (local_11d0.Data.ArrayNum != 0) {
              FVar26.Data = local_11d0.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar2 = *(ushort *)((longlong)puVar27 + (longlong)(FVar26.Data + -0x15064c5b4));
                uVar3 = *puVar27;
                puVar27 = puVar27 + 1;
                if (uVar2 != uVar3) break;
                if (uVar2 == 0) {
                  bVar9 = true;
                  goto LAB_1416514ff;
                }
              }
              if (((uVar2 | uVar3) & 0xff80) != 0) {
                if (uVar2 == uVar3) {
                  bVar9 = true;
                  goto LAB_1416514ff;
                }
                break;
              }
            } while (""[uVar2] == ""[uVar3]);
            if (local_11b8 == (FName)0x0) {
              if ((uVar11 & 4) == 0) {
                local_1168 = 0;
                FVar26.Data = (FScriptContainerElement *)L"";
                if (local_11d0.Data.ArrayNum != 0) {
                  FVar26.Data = local_11d0.Data.AllocatorInstance.Data;
                }
                IConsoleVariable::Set<wchar_t_const_*>
                          (this_00,(wchar_t *)FVar26.Data,ECVF_SetByConsole,(FName)0x0);
                (**(code **)(*(longlong *)this_00 + 0xd8))(this_00,local_1088);
                FOutputDevice::LogfImpl(local_11d8,L"%s = \"%s\"");
                if (local_1088[0] != (void *)0x0) {
                  FMemory::Free(local_1088[0]);
                }
              }
              else {
                FOutputDevice::LogfImpl(local_11d8,L"Error: %s is read only!");
              }
            }
            else {
              FOutputDevice::LogfImpl
                        (local_11d8,L"Error: Unable to set a value for %s another platform!");
            }
LAB_1416514ff:
            if (local_11d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_11d0.Data.AllocatorInstance.Data);
            }
            bVar10 = false;
          }
          if (bVar9 == false) {
            pFVar28 = local_11d8;
            if (!bVar10) goto LAB_1416515f3;
          }
          else {
            (**(code **)(*(longlong *)this_00 + 0x18))(this_00);
            (**(code **)(*(longlong *)this_00 + 8))(this_00);
            pFVar28 = local_11d8;
            FOutputDevice::LogfImpl(local_11d8,L"HELP for \'%s\'%s:\n%s");
          }
          (**(code **)(*(longlong *)this_00 + 0x118))(this_00,pFVar28);
          EVar14 = (**(code **)(*(longlong *)this_00 + 0x18))(this_00);
          GetConsoleVariableSetByName(EVar14);
          (**(code **)(*(longlong *)this_00 + 0xd8))(this_00,local_1078);
          FOutputDevice::LogfImpl(pFVar28,L"%s = \"%s\"      LastSetBy: %s");
          goto LAB_1416515e9;
        }
LAB_1416515f3:
        uVar8 = 1;
      }
      else {
        local_11b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_11b0.ArrayNum = 0;
        local_11b0.ArrayMax = 0;
        pFVar21 = ::FString::FString(&local_10a8,pwVar32);
        ::FString::ParseIntoArrayWS(pFVar21,&local_11b0,(wchar_t *)0x0,true);
        if (local_10a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10a8.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
LAB_141651138:
          (**(code **)(*plVar22 + 8))(plVar22);
          FOutputDevice::LogfImpl(pFVar28,L"HELP for \'%s\':\n%s");
          DestructItems<FString,int>
                    ((FString *)local_11b0.AllocatorInstance.Data,local_11b0.ArrayNum);
          local_1078[0] = local_11b0.AllocatorInstance.Data;
LAB_1416515e9:
          if (local_1078[0] != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1078[0]);
          }
          goto LAB_1416515f3;
        }
        if (local_11b0.ArrayNum == 1) {
          if (*(int *)(local_11b0.AllocatorInstance.Data + 8) == 0) {
            pwVar32 = L"";
          }
          else {
            pwVar32 = *(wchar_t **)local_11b0.AllocatorInstance.Data;
          }
          do {
            while( true ) {
              uVar2 = *(ushort *)((longlong)puVar27 + (longlong)(pwVar32 + -0xa83262da));
              uVar3 = *puVar27;
              puVar27 = puVar27 + 1;
              if (uVar2 != uVar3) break;
              if (uVar2 == 0) goto LAB_141651138;
            }
            if (((uVar2 | uVar3) & 0xff80) != 0) {
              if (uVar2 == uVar3) goto LAB_141651138;
              break;
            }
          } while (""[uVar2] == ""[uVar3]);
        }
        uVar8 = (**(code **)(*plVar22 + 0xa8))(plVar22,&local_11b0,local_1138,pFVar28);
        DestructItems<FString,int>((FString *)local_11b0.AllocatorInstance.Data,local_11b0.ArrayNum)
        ;
        if (local_11b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11b0.AllocatorInstance.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1120.SharedReferenceCount.ReferenceController);
          goto LAB_141651604;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1120.SharedReferenceCount.ReferenceController);
    }
LAB_141651604:
    if (local_1160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1160.Data.AllocatorInstance.Data);
    }
  }
  if (local_11f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11f0.Data.AllocatorInstance.Data);
  }
LAB_141651621:
  if (bVar7) {
    uVar24 = UE::Trace::Private::TimeGetTimestamp();
    lVar15 = uVar24 - UE::Trace::Private::GStartCycle;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar25 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar25 - *(int *)&pFVar25->Cursor < 8) {
      pFVar25 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar25->Cursor = lVar15 * 0x100 + 0x12;
    pFVar25->Cursor = pFVar25->Cursor + 8;
    pFVar25->Committed = pFVar25->Cursor;
  }
  return (bool)uVar8;
}

// RegisterConsoleCommand @ 1416528d0

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy> *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2363,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2363,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2363,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandWithOutputDevice__6B_;
    TDelegate<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy> *)
               &pIVar4[2].FindCallCount,param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 141652a80

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2333,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2333,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2333,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandWithArgs__6B_;
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *)&pIVar4[2].FindCallCount,param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 141652c30

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2351,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2351,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2351,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommanWithArgsAndOutputDevice__6B_;
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
                *)&pIVar4[2].FindCallCount,param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 141652de0

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2345,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2345,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2345,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandWithWorldAndArgs__6B_;
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                *)&pIVar4[2].FindCallCount,param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 141652f90

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2357,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2357,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2357,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandWithWorldArgsAndOutputDevice__6B_;
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
                *)&pIVar4[2].FindCallCount,param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 141653140

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2339,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2339,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2339,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandWithWorld__6B_;
    TDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
               &pIVar4[2].FindCallCount,param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 1416532f0

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2321,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2321,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2321,true);
  pIVar4 = ::operator_new(0x40);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_4;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommand__6B_;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&pIVar4[2].FindCallCount,
               param_3);
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleCommand @ 1416534a0

IConsoleCommand * __thiscall
FConsoleManager::RegisterConsoleCommand
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleObject *pIVar4;
  IConsoleCommand *pIVar5;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2327,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2327,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2327,true);
  pIVar4 = ::operator_new(0x28);
  if (pIVar4 == (IConsoleObject *)0x0) {
    pIVar4 = (IConsoleObject *)0x0;
  }
  else {
    pIVar4->FindCallCount = 0;
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandBase__6B_;
    ::FString::FString((FString *)(pIVar4 + 1),param_2);
    *(uint *)&pIVar4[2]._padding_ = param_3;
    if (param_2 == (wchar_t *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHelp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x18c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IConsoleCommand *)(*pcVar2)();
        return pIVar5;
      }
    }
    uVar1 = (uint)pIVar4[2]._padding_;
    if ((uVar1 & 0x1040) == 0x40) {
      *(uint *)&pIVar4[2]._padding_ = uVar1 | 0x100;
    }
    pIVar4->_padding_ = (longlong)&___7FConsoleCommandExec__6B_;
  }
  pIVar4 = AddConsoleObject(this,param_1,pIVar4);
  pIVar5 = (IConsoleCommand *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar5;
}

// RegisterConsoleVariable @ 141653640

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariable
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4)

{
  code *pcVar1;
  FString *pFVar2;
  IConsoleVariable *pIVar3;
  FLLMScope local_res8 [2];
  FMemScope local_38;
  FString local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2276,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name2276,false,None,Default,true);
  FMemScope::FMemScope(&local_38,&LLMScope_Name2276,true);
  pcVar1 = *(code **)this->_padding_;
  pFVar2 = ::FString::FString(&local_30,param_2);
  pIVar3 = (IConsoleVariable *)(*pcVar1)(this,param_1,pFVar2,param_3,param_4);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return pIVar3;
}

// RegisterConsoleVariable @ 141653770

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariable
          (FConsoleManager *this,wchar_t *param_1,FString *param_2,wchar_t *param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  IConsoleVariable *pIVar4;
  FConsoleVariableExtendedData<FString> *this_00;
  FString *pFVar5;
  FString *pFVar6;
  IConsoleObject *pIVar7;
  FLLMScope local_38 [2];
  FMemScope local_30;
  FString local_28;
  FString local_18;
  
  if ((param_4 & 0x20) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Flags & (uint32)ECVF_RenderThreadSafe) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x8eb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IConsoleVariable *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2284,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_38,LLMScope_Name2284,false,None,Default,true);
  FMemScope::FMemScope(&local_30,&LLMScope_Name2284,true);
  this_00 = ::operator_new(0xe0);
  if (this_00 == (FConsoleVariableExtendedData<FString> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<FString> *)0x0;
  }
  else {
    pFVar5 = ::FString::FString(&local_28,param_2);
    FConsoleVariableExtendedData<FString>::FConsoleVariableExtendedData<FString>
              (this_00,pFVar5,param_3,param_4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable_VFString____6B_;
    pFVar6 = ::FString::FString(&local_18,pFVar5);
    TConsoleVariableData<FString>::TConsoleVariableData<FString>
              ((TConsoleVariableData<FString> *)(this_00 + 1),pFVar6);
    this_00[1]._padding_ = 0;
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  pIVar7 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar4 = (IConsoleVariable *)(**(code **)(pIVar7->_padding_ + 0x38))(pIVar7);
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_38);
  return pIVar4;
}

// RegisterConsoleVariable @ 141653930

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariable
          (FConsoleManager *this,wchar_t *param_1,int param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<int> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_28 [2];
  int local_20 [2];
  FMemScope local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2264,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_28,LLMScope_Name2264,false,None,Default,true);
  FMemScope::FMemScope(local_18,&LLMScope_Name2264,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<int> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<int> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<int>::FConsoleVariableExtendedData<int>
              (this_00,local_20,param_3,param_4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable_H__6B_;
    *(int *)&this_00[1]._padding_ = param_2;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = param_2;
    this_00[1]._padding_ = 0;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_28);
  return pIVar2;
}

// RegisterConsoleVariable @ 141653aa0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariable
          (FConsoleManager *this,wchar_t *param_1,float param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<float> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_38 [2];
  float local_30 [2];
  FMemScope local_28 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2270,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_38,LLMScope_Name2270,false,None,Default,true);
  FMemScope::FMemScope(local_28,&LLMScope_Name2270,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<float> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<float> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<float>::FConsoleVariableExtendedData<float>
              (this_00,local_30,param_3,param_4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable_M__6B_;
    *(float *)&this_00[1]._padding_ = param_2;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = param_2;
    this_00[1]._padding_ = 0;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_38);
  return pIVar2;
}

// RegisterConsoleVariable @ 141653c10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariable
          (FConsoleManager *this,wchar_t *param_1,bool param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<bool> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  bool local_28 [8];
  FLLMScope local_20 [2];
  FMemScope local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2258,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_20,LLMScope_Name2258,false,None,Default,true);
  FMemScope::FMemScope(local_18,&LLMScope_Name2258,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<bool> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<bool> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<bool>::FConsoleVariableExtendedData<bool>
              (this_00,local_28,param_3,param_4);
    this_00->_padding_ = (longlong)&___7__FConsoleVariable__N__6B_;
    *(bool *)&this_00[1]._padding_ = param_2;
    *(bool *)((longlong)&this_00[1]._padding_ + 1) = param_2;
    this_00[1]._padding_ = 0;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_20);
  return pIVar2;
}

// RegisterConsoleVariableBitRef @ 141653d80

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariableBitRef
          (FConsoleManager *this,wchar_t *param_1,wchar_t *param_2,uint param_3,uchar *param_4,
          uchar *param_5,wchar_t *param_6,uint param_7)

{
  code *UNRECOVERED_JUMPTABLE;
  FConsoleVariableExtendedData<int> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  int local_18 [4];
  
  this_00 = ::operator_new(0xd0);
  if (this_00 == (FConsoleVariableExtendedData<int> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<int> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<int>::FConsoleVariableExtendedData<int>
              (this_00,local_18,param_6,param_7);
    this_00[1]._padding_ = (longlong)param_4;
    this_00[1]._padding_ = (longlong)param_5;
    this_00->_padding_ = (longlong)&___7FConsoleVariableBitRef__6B_;
    *(uint *)&this_00[1]._padding_ = param_3;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000141653e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (IConsoleVariable *)(*UNRECOVERED_JUMPTABLE)(pIVar1,UNRECOVERED_JUMPTABLE);
  return pIVar2;
}

// RegisterConsoleVariableRef @ 141653e30

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariableRef
          (FConsoleManager *this,wchar_t *param_1,int *param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<int> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2296,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2296,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2296,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<int> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<int> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<int>::FConsoleVariableExtendedData<int>
              (this_00,param_2,param_3,param_4);
    this_00[1]._padding_ = (longlong)param_2;
    this_00->_padding_ = (longlong)&___7__FConsoleVariableRef_H__6B_;
    *(int *)&this_00[1]._padding_ = *param_2;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar2;
}

// RegisterConsoleVariableRef @ 141653f90

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariableRef
          (FConsoleManager *this,wchar_t *param_1,float *param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<float> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2302,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2302,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2302,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<float> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<float> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<float>::FConsoleVariableExtendedData<float>
              (this_00,param_2,param_3,param_4);
    this_00[1]._padding_ = (longlong)param_2;
    this_00->_padding_ = (longlong)&___7__FConsoleVariableRef_M__6B_;
    *(float *)&this_00[1]._padding_ = *param_2;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar2;
}

// RegisterConsoleVariableRef @ 1416540f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariableRef
          (FConsoleManager *this,wchar_t *param_1,FName *param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<FString> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_28 [2];
  FMemScope local_20;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2314,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_28,LLMScope_Name2314,false,None,Default,true);
  FMemScope::FMemScope(&local_20,&LLMScope_Name2314,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<FString> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<FString> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<FString>::FConsoleVariableExtendedData<FString>
              (this_00,&local_18,param_3,param_4);
    this_00[1]._padding_ = (longlong)param_2;
    this_00->_padding_ = (longlong)&___7FConsoleVariableNameRef__6B_;
    this_00[1]._padding_ = (longlong)*param_2;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_28);
  return pIVar2;
}

// RegisterConsoleVariableRef @ 141654250

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariableRef
          (FConsoleManager *this,wchar_t *param_1,FString *param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<FString> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_28 [2];
  FMemScope local_20;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2308,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_28,LLMScope_Name2308,false,None,Default,true);
  FMemScope::FMemScope(&local_20,&LLMScope_Name2308,true);
  this_00 = ::operator_new(0xd0);
  if (this_00 == (FConsoleVariableExtendedData<FString> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<FString> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<FString>::FConsoleVariableExtendedData<FString>
              (this_00,&local_18,param_3,param_4);
    this_00[1]._padding_ = (longlong)param_2;
    this_00->_padding_ = (longlong)&___7FConsoleVariableStringRef__6B_;
    ::FString::FString((FString *)&this_00[1]._padding_,param_2);
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_28);
  return pIVar2;
}

// RegisterConsoleVariableRef @ 1416543c0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall
FConsoleManager::RegisterConsoleVariableRef
          (FConsoleManager *this,wchar_t *param_1,bool *param_2,wchar_t *param_3,uint param_4)

{
  FConsoleVariableExtendedData<bool> *this_00;
  IConsoleObject *pIVar1;
  IConsoleVariable *pIVar2;
  FLLMScope local_18 [2];
  FMemScope local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2290,L"EngineMisc/ConsoleCommands");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_18,LLMScope_Name2290,false,None,Default,true);
  FMemScope::FMemScope(&local_10,&LLMScope_Name2290,true);
  this_00 = ::operator_new(200);
  if (this_00 == (FConsoleVariableExtendedData<bool> *)0x0) {
    this_00 = (FConsoleVariableExtendedData<bool> *)0x0;
  }
  else {
    FConsoleVariableExtendedData<bool>::FConsoleVariableExtendedData<bool>
              (this_00,param_2,param_3,param_4);
    this_00[1]._padding_ = (longlong)param_2;
    this_00->_padding_ = (longlong)&___7__FConsoleVariableRef__N__6B_;
    *(bool *)&this_00[1]._padding_ = *param_2;
  }
  pIVar1 = AddConsoleObject(this,param_1,(IConsoleObject *)this_00);
  pIVar2 = (IConsoleVariable *)(**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_18);
  return pIVar2;
}

// RegisterConsoleVariableSink_Handle @ 141654520

FConsoleVariableSinkHandle __thiscall
FConsoleManager::RegisterConsoleVariableSink_Handle
          (FConsoleManager *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FConsoleVariableSinkHandle FVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  pTVar2 = &this->ConsoleVariableChangeSinks;
  pTVar3 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
           (pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= in_R8) && (in_R8 < pTVar3 + (this->ConsoleVariableChangeSinks).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar8.Handle.ID = (FDelegateHandle)(*pcVar5)();
      return (FConsoleVariableSinkHandle)FVar8.Handle.ID;
    }
  }
  iVar7 = (this->ConsoleVariableChangeSinks).ArrayNum;
  piVar1 = &(this->ConsoleVariableChangeSinks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ConsoleVariableChangeSinks).ArrayNum = iVar7 + 1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x18),in_R8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_28);
  if ((*(int *)&in_R8->field_0x10 == 0) ||
     (plVar4 = *(longlong **)&in_R8->field_0x8, plVar4 == (longlong *)0x0)) {
    uVar10 = 0;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
    uVar10 = *puVar9;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)param_1 = uVar10;
  return (FConsoleVariableSinkHandle)(FDelegateHandle)param_1;
}

// RegisterThreadPropagation @ 141654ad0

void __thiscall
FConsoleManager::RegisterThreadPropagation
          (FConsoleManager *this,uint param_1,IConsoleThreadPropagation *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (IConsoleThreadPropagation *)0x0) {
    if (param_1 == 0) goto LAB_141654b61;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd50,L"");
    if (!bVar2) {
      this->ThreadPropagationCallback = (IConsoleThreadPropagation *)0x0;
      return;
    }
  }
  else {
    if (this->ThreadPropagationCallback == (IConsoleThreadPropagation *)0x0) {
LAB_141654b61:
      this->ThreadPropagationCallback = param_2;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ThreadPropagationCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd4b,L"");
    if (!bVar2) {
      this->ThreadPropagationCallback = param_2;
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SaveHistory @ 141659700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConsoleManager::SaveHistory(FConsoleManager *this)

{
  undefined1 *puVar1;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  FString *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  FString *pFVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  FString local_1f0;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  FName local_1a8;
  FString local_1a0;
  FString local_190;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  FString local_150;
  FString local_140;
  FConfigFile local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  FConfigFile::FConfigFile(&local_128);
  ::FString::FString(&local_190,L"ConsoleHistory");
  ::FName::FName(&local_1a8,L"History");
  puVar1 = &(this->HistoryEntriesMap).field_0x10;
  iStack_1d8 = 0;
  iVar4 = *(int *)&(this->HistoryEntriesMap).field_0x28;
  pTVar2 = &this->HistoryEntriesMap;
  local_1c0 = 0;
  uStack_1d4 = 1;
  iStack_1c4 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->HistoryEntriesMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_1d8;
      local_1c0 = local_1c0 + 0x20;
      iStack_1d8 = iStack_1d8 + 1;
      iStack_1c4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8) goto LAB_1416597ee;
      uVar15 = puVar17[lVar10 + 1];
    }
    uStack_1d4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1b0 = (int)lVar10;
    iStack_1c4 = local_1c0 + -1 + local_1b0;
    if (iVar4 < iStack_1c4) {
      iStack_1c4 = iVar4;
    }
  }
LAB_1416597ee:
  iStack_1b8 = *(int *)&(this->HistoryEntriesMap).field_0x8 -
               *(int *)&(this->HistoryEntriesMap).field_0x34;
  uVar15 = *(uint *)&(this->HistoryEntriesMap).field_0x28;
  uStack_1c8 = 0xffffffff;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_178._padding_ = CONCAT44(uStack_1d4,iStack_1d8);
  TStack_178.CurrentBitIndex = iStack_1c4;
  TStack_178.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_178._28_4_ = iStack_1c4;
  TStack_178.BaseBitIndex = local_1c0;
  uStack_158 = CONCAT44(uStack_1b4,iStack_1b8);
  local_1e0 = pTVar2;
  local_1d0 = puVar1;
  iStack_1bc = iStack_1c4;
  local_180 = pTVar2;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->HistoryEntriesMap).field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->HistoryEntriesMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141659900;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_141659900:
  while( true ) {
    pTVar7 = local_180;
    if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    if (((TStack_178.CurrentBitIndex == uVar15) &&
        (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = *(longlong *)pTVar7 + (longlong)TStack_178.CurrentBitIndex * 0x28;
    ::FString::PrintfImpl(&local_1a0,L"%s%s");
    iVar4 = *(int *)(lVar10 + 0x18);
    pFVar9 = *(FString **)(lVar10 + 0x10);
    pFVar14 = pFVar9 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x18) != iVar4) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1f7);
      }
      if (pFVar9 == pFVar14) break;
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_1a0.Data.ArrayNum != 0) {
        FVar11.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      FConfigFile::AddToSection(&local_128,(wchar_t *)FVar11.Data,local_1a8,pFVar9);
      pFVar9 = pFVar9 + 1;
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
  }
  pFVar9 = FPaths::GeneratedConfigDir(&local_140);
  ::FString::ConcatFC(&local_150,pFVar9,L"ConsoleHistory.ini");
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  local_128.Dirty = true;
  local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.Data.ArrayNum = 0;
  local_1f0.Data.ArrayMax = 0;
  FConfigFile::Write(&local_128,&local_150,true,&local_1f0);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_128);
  return;
}

// StompPlatformCVars @ 141661320

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConsoleManager::StompPlatformCVars
          (FConsoleManager *this,FName param_1,FString *param_2,FName param_3,
          EConsoleVariableFlags param_4,EConsoleVariableFlags param_5,EConsoleVariableFlags param_6)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *pTVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  EConsoleVariableFlags EVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  FString *pFVar16;
  uint uVar17;
  wchar_t *pwVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *pTVar25;
  ulonglong local_res8;
  FName local_res10;
  int local_res18;
  FName local_res20;
  FString local_178;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  undefined8 local_158;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_150;
  FString local_148;
  FScriptContainerElement *local_138;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  EConsoleVariableFlags local_fc;
  undefined1 local_f8;
  FName local_f4;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  TMap<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  void *local_80 [2];
  void *local_70 [2];
  undefined1 local_60 [32];
  
  iVar14 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_1;
  local_res20 = param_3;
  if (3 < (byte)LogConsoleManager._0_1_) {
    ::FName::ToString(&local_res20,&local_a0);
    ::FName::ToString(&local_res10,&local_b0);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  uVar24 = 1;
  iVar2 = (param_2->Data).ArrayNum;
  local_res8 = 1;
  pcVar3 = *(code **)(this->_padding_ + 0x110);
  iVar21 = 0;
  iVar15 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar15 = iVar21;
  }
  if (iVar15 == 0) {
    pFVar16 = ::FName::ToString(&local_res10,&local_90);
    uVar20 = 2;
  }
  else {
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = iVar2;
    if (iVar2 == 0) {
      pFVar16 = &local_178;
      uVar20 = 1;
      local_178.Data.ArrayMax = 0;
      uVar24 = 1;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,(ForAnyElementType *)&local_178,iVar2,&local_178.Data.ArrayMax);
      memcpy(local_178.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
      pFVar16 = &local_178;
      uVar20 = local_res8 & 0xffffffff;
      uVar24 = local_res8;
    }
  }
  uVar8 = (uint)uVar24;
  (*pcVar3)(this,local_res10,pFVar16);
  if (((uVar20 & 2) != 0) &&
     (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffd),
     local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (((uVar20 & 1) != 0) &&
     (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  MakePlatformKey((FName)&local_158,(FString *)local_res10);
  iVar2 = *(int *)&(this->ConsoleObjects).field_0x28;
  puVar1 = &(this->ConsoleObjects).field_0x10;
  pTVar25 = &this->ConsoleObjects;
  iStack_114 = iVar21;
  if (iVar2 != 0) {
    puVar23 = *(uint **)&(this->ConsoleObjects).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar19 = *puVar23;
    iVar21 = 0;
    iVar14 = 0;
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar14;
      iVar21 = iVar21 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_114 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141661571;
      uVar19 = puVar23[lVar13 + 1];
    }
    uVar8 = -uVar19 & uVar19;
    uVar24 = (ulonglong)uVar8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_114 = iVar21 + -1 + local_res18;
    if (iVar2 < iStack_114) {
      iStack_114 = iVar2;
    }
  }
LAB_141661571:
  iStack_108 = *(int *)&(this->ConsoleObjects).field_0x8 -
               *(int *)&(this->ConsoleObjects).field_0x34;
  uVar19 = *(uint *)&(this->ConsoleObjects).field_0x28;
  uStack_118 = 0xffffffff;
  uVar17 = uVar19 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uVar8,iVar14);
  TStack_d8.CurrentBitIndex = iStack_114;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_d8._28_4_ = iStack_114;
  TStack_d8.BaseBitIndex = iVar21;
  uStack_b8 = CONCAT44(uStack_104,iStack_108);
  local_150 = pTVar25;
  local_130 = pTVar25;
  iStack_128 = iVar14;
  uStack_124 = uVar8;
  local_120 = puVar1;
  local_110 = iVar21;
  iStack_10c = iStack_114;
  local_e0 = pTVar25;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar2 < (int)uVar19)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = *(uint *)&(this->ConsoleObjects).field_0x28;
  if (uVar19 != uVar8) {
    puVar22 = *(undefined1 **)&(this->ConsoleObjects).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar15 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141661680;
      uVar19 = *(uint *)(puVar22 + lVar13 * 4 + 4);
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_100 = (int)lVar13;
    uVar19 = local_100 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar19) {
      uVar19 = uVar8;
    }
  }
LAB_141661680:
  while( true ) {
    pTVar5 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FString,IConsoleObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_d8.CurrentBitIndex == uVar19) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar25))
    break;
    pFVar16 = (FString *)(*(longlong *)pTVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x20);
    ::FString::FString(&local_148,pFVar16);
    local_138 = pFVar16[1].Data.AllocatorInstance.Data;
    cVar7 = (**(code **)(*(longlong *)local_138 + 0x88))();
    if (((cVar7 == '\0') &&
        (plVar10 = (longlong *)(**(code **)(*(longlong *)local_138 + 0x38))(),
        plVar10 != (longlong *)0x0)) &&
       (EVar9 = (**(code **)(*plVar10 + 0x18))(plVar10), (EVar9 & (param_5 | param_6)) == param_5))
    {
      uVar24 = (**(code **)(*plVar10 + 0x18))(plVar10);
      EVar9 = param_4 | ECVF_Set_SetOnly_Unsafe;
      if ((uVar24 & 0x80) == 0) {
        EVar9 = param_4;
      }
      cVar7 = (**(code **)(*plVar10 + 0x108))
                        (plVar10,local_158,&GSpecialDPNameForPremadePlatformKey);
      pTVar25 = local_150;
      if (cVar7 != '\0') {
        (**(code **)(*plVar10 + 0x100))
                  (plVar10,&local_168,local_158,&GSpecialDPNameForPremadePlatformKey);
        FVar4 = local_res20;
        if ((local_168 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar11 = (undefined8 *)(**(code **)(*local_168 + 0xd8))(local_168,local_80);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)*puVar11;
        }
        local_f4 = FVar4;
        lVar13 = *plVar10;
        local_f8 = 0;
        local_ec = 0;
        local_e8 = 0xf000000;
        local_e4 = 0x1000000;
        local_fc = EVar9;
        uVar12 = (**(code **)(lVar13 + 0xa8))(plVar10,local_60,&local_fc);
        (**(code **)(lVar13 + 0xb0))(plVar10,pwVar18,uVar12);
        if (local_80[0] != (void *)0x0) {
          FMemory::Free(local_80[0]);
        }
        if (3 < (byte)LogConsoleManager._0_1_) {
          if ((local_168 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(*local_168 + 0xd8))(local_168,local_70);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
          if (local_70[0] != (void *)0x0) {
            FMemory::Free(local_70[0]);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_160);
        pTVar25 = local_150;
      }
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  return;
}

// UnregisterConsoleObject @ 141666c80

void __thiscall
FConsoleManager::UnregisterConsoleObject(FConsoleManager *this,wchar_t *param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  IConsoleVariable *pIVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  undefined7 in_register_00000081;
  longlong lVar14;
  FString local_68;
  FDestructionSentinel local_58;
  
  if (&this->ConsoleObjectsSynchronizationObject == (FWindowsRecursiveMutex *)0x0) {
    in_register_00000081 = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ConsoleObjectsSynchronizationObject);
  plVar9 = (longlong *)
           (**(code **)(this->_padding_ + 200))(this,param_1,CONCAT71(in_register_00000081,1));
  if (plVar9 != (longlong *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ConsoleObjectUnregisteredDelegate,(FWriteAccessScope *)&local_58);
    puVar1 = &(this->ConsoleObjectUnregisteredDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar13 = *(int *)&(this->ConsoleObjectUnregisteredDelegate).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar13 < *(int *)&(this->ConsoleObjectUnregisteredDelegate).field_0x10) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->ConsoleObjectUnregisteredDelegate).field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar14 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,plVar9), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    iVar12 = 0;
    puVar1 = &(this->ConsoleObjectUnregisteredDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ConsoleObjectUnregisteredDelegate,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    pIVar10 = (IConsoleVariable *)(**(code **)(*plVar9 + 0x38))(plVar9);
    if ((pIVar10 == (IConsoleVariable *)0x0) ||
       (TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->ConsoleVariableUnregisteredDelegate,pIVar10), !param_2)) {
      ::FString::FString(&local_68,param_1);
      if (*(int *)&(this->ConsoleObjects).field_0x8 != *(int *)&(this->ConsoleObjects).field_0x34) {
        if (local_68.Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          iVar12 = local_68.Data.ArrayNum + -1;
          pwVar11 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar11);
        TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
                    *)&this->ConsoleObjects,uVar13,&local_68);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      (**(code **)(*plVar9 + 0xa0))(plVar9);
    }
    else {
      (**(code **)(*(longlong *)pIVar10 + 0x20))(pIVar10,8);
    }
  }
  if (&this->ConsoleObjectsSynchronizationObject != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ConsoleObjectsSynchronizationObject);
  }
  return;
}

// UnregisterConsoleObject @ 141666f10

void __thiscall
FConsoleManager::UnregisterConsoleObject(FConsoleManager *this,IConsoleObject *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  void *local_18;
  int local_10;
  
  if (param_1 != (IConsoleObject *)0x0) {
    lpCriticalSection = &this->ConsoleObjectsSynchronizationObject;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(this->_padding_ + 0xd0))(this,&local_18,param_1);
    if (1 < local_10) {
      (**(code **)(this->_padding_ + 0xb0))(this,local_18,param_2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// UnregisterConsoleVariableSink_Handle @ 141666fe0

void __thiscall
FConsoleManager::UnregisterConsoleVariableSink_Handle
          (FConsoleManager *this,FConsoleVariableSinkHandle param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].Handle.Handle.ID =
       (FConsoleVariableSinkHandle)(FConsoleVariableSinkHandle)param_1.Handle.ID;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_FConsoleManager::UnregisterConsoleVariableSink_Handle_::__l2::<lambda_1>_>
            (&this->ConsoleVariableChangeSinks,local_res8);
  return;
}

// UnsetAllConsoleVariablesWithTag @ 1416689f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleManager::UnsetAllConsoleVariablesWithTag
          (FConsoleManager *this,FName param_1,EConsoleVariableFlags param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar6;
  bool bVar7;
  TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
  *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  uint uStackX_14;
  undefined1 local_res20 [8];
  FName local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar8 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                   *)&UE::ConsoleManager::Private::TaggedCVars,param_1);
  if ((pTVar8 != (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                  *)0x0) && (plVar4 = *(longlong **)&pTVar8->field_0x8, plVar4 != (longlong *)0x0))
  {
    iVar12 = (int)plVar4[5];
    iStack_90 = 0;
    local_78 = 0;
    uStack_8c = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar4 + 2);
    iVar10 = 0;
    iStack_7c = 0;
    if (iVar12 != 0) {
      pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar9 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) {
          iVar10 = (int)plVar4[5];
          iStack_7c = iVar12;
          goto LAB_141668ae4;
        }
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      iVar10 = (int)plVar4[5];
      uStack_8c = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar9;
      if (iVar10 < iStack_7c) {
        iStack_7c = iVar12;
      }
    }
LAB_141668ae4:
    uVar11 = *(uint *)(plVar4 + 5);
    uVar14 = uVar11 & 0xffffffe0;
    iStack_70 = (int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34);
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = plVar4;
    local_88 = pTVar1;
    iStack_74 = iStack_7c;
    local_68 = plVar4;
    TStack_60.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar10 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = *(uint *)(plVar4 + 5);
    if (uVar11 != uVar3) {
      pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar4[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar4[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_141668bf0;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar14;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_141668bf0:
    while( true ) {
      plVar5 = local_68;
      if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) &&
         (plVar5 == plVar4)) break;
      plVar5 = *(longlong **)(*plVar5 + (longlong)TStack_60.CurrentBitIndex * 0x10);
      (**(code **)(*plVar5 + 0xb8))(plVar5,param_2,param_1);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    pTVar8 = TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                     *)&UE::ConsoleManager::Private::TaggedCVars,param_1);
    if ((pTVar8 != (TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>
                    *)0x0) &&
       (this_00 = *(TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    **)&pTVar8->field_0x8,
       this_00 !=
       (TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *)0x0)) {
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<IConsoleVariable_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      ::operator_delete(this_00,0x50);
    }
    if (UE::ConsoleManager::Private::TaggedCVars._8_4_ !=
        UE::ConsoleManager::Private::TaggedCVars._52_4_) {
      local_a0 = param_1;
      uVar11 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      uStackX_14 = param_1.Number;
      TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*>,TDefaultMapHashableKeyFuncs<FName,TSet<IConsoleVariable_*,DefaultKeyFuncs<IConsoleVariable_*,0>,FDefaultSetAllocator>_*,0>,FDefaultSetAllocator>
                           *)&UE::ConsoleManager::Private::TaggedCVars,uStackX_14 + uVar11,&local_a0
                         );
    }
  }
  return;
}

