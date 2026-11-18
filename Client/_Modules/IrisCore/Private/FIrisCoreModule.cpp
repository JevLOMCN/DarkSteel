// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// StartupModule @ 1441f2290

void __thiscall FIrisCoreModule::StartupModule(FIrisCoreModule *this)

{
  UReplicationSystem **ppUVar1;
  FName FVar2;
  UReplicationSystem *pUVar3;
  bool bVar4;
  FName *pFVar5;
  FModuleManager *pFVar6;
  wchar_t *pwVar7;
  FDelegateHandle FVar8;
  TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> *pTVar9;
  int iVar10;
  FName local_res8;
  TArrayView<UReplicationSystem_*,int> local_18;
  
  pFVar5 = ::FName::FName(&local_res8,"NetCore");
  FVar2 = *pFVar5;
  pFVar6 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(pFVar6,FVar2);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FIrisCoreModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnAllModuleLoadingPhasesComplete,(FIrisCoreModule *)&local_res8,
             (pmf_20682e56)this);
  local_res8.ComparisonIndex.Value = 0;
  pwVar7 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar7,L"UseIrisReplication=",(int *)&local_res8);
  if (bVar4) {
    UE::Net::CVarUseIrisReplication = (int)(0 < (int)local_res8.ComparisonIndex.Value);
  }
  UE::Net::FPropertyNetSerializerInfoRegistry::Registry.ArrayNum = 0;
  if (UE::Net::FPropertyNetSerializerInfoRegistry::Registry.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&UE::Net::FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance,0,
               &UE::Net::FPropertyNetSerializerInfoRegistry::Registry.ArrayMax);
  }
  UE::Net::FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = false;
  UE::Net::Private::FInternalNetSerializerDelegates::BroadcastPreFreezeNetSerializerRegistry();
  UE::Net::Private::RegisterDefaultPropertyNetSerializerInfos();
  if (UE::Net::FPropertyNetSerializerInfoRegistry::bRegistryIsDirty != false) {
    AlgoImpl::
    IntroSortInternal<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,_UE::Net::FPropertyNetSerializerInfoRegistry::Freeze_::__l5::<lambda_1>_>_>
              ((TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)
               UE::Net::FPropertyNetSerializerInfoRegistry::Registry.AllocatorInstance.Data,
               UE::Net::FPropertyNetSerializerInfoRegistry::Registry.ArrayNum,
               local_res8.ComparisonIndex.Value._0_1_,(<lambda_1> *)&local_res8);
    UE::Net::FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = false;
  }
  UE::Net::Private::FInternalNetSerializerDelegates::BroadcastPostFreezeNetSerializerRegistry();
  pFVar6 = FModuleManager::Get();
  FVar8 = TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
          ::AddRaw<FIrisCoreModule>
                    (&pFVar6->ModulesChangedEvent,(FIrisCoreModule *)&local_res8,(pmf_a9821835)this)
  ;
                    /* WARNING: Load size is inaccurate */
  (this->ModulesChangedHandle).ID = *FVar8.ID;
  pTVar9 = UE::Net::FReplicationSystemFactory::GetReplicationSystemCreatedDelegate();
  FVar8 = TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
          ::AddRaw<FIrisCoreModule>
                    ((TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
                      *)pTVar9,(FIrisCoreModule *)&local_res8,(pmf_07da096c)this);
                    /* WARNING: Load size is inaccurate */
  (this->RepSysCreatedHandle).ID = *FVar8.ID;
  pTVar9 = UE::Net::FReplicationSystemFactory::GetReplicationSystemDestroyedDelegate();
  FVar8 = TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
          ::AddRaw<FIrisCoreModule>
                    ((TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
                      *)pTVar9,(FIrisCoreModule *)&local_res8,(pmf_07da096c)this);
                    /* WARNING: Load size is inaccurate */
  (this->RepSysDestroyedHandle).ID = *FVar8.ID;
  UE::Net::FReplicationSystemFactory::GetAllReplicationSystems(&local_18);
  ppUVar1 = local_18.DataPtr + local_18.ArrayNum;
  if (local_18.DataPtr != ppUVar1) {
    iVar10 = this->RepSystemCount;
    do {
      pUVar3 = *local_18.DataPtr;
      local_18.DataPtr = local_18.DataPtr + 1;
      iVar10 = iVar10 + (uint)(pUVar3 != (UReplicationSystem *)0x0);
      this->RepSystemCount = iVar10;
    } while (local_18.DataPtr != ppUVar1);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddLambda<_FIrisCoreModule::StartupModule_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             &FNetTrace::OnResetPersistentNetDebugNames,(<lambda_1> *)&local_res8);
  return;
}

// ShutdownModule @ 1441f2460

void __thiscall FIrisCoreModule::ShutdownModule(FIrisCoreModule *this)

{
  TMulticastDelegate<void___cdecl(FName,EModuleChangeReason),FDefaultTSDelegateUserPolicy> *this_00;
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FModuleManager *pFVar5;
  ulong64 *puVar6;
  TMulticastDelegate<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy> *pTVar7;
  ulonglong uVar8;
  ForAnyElementType *this_01;
  uint uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  if ((this->ModulesChangedHandle).ID != 0) {
    pFVar5 = FModuleManager::Get();
    uVar1 = (this->ModulesChangedHandle).ID;
    this_00 = &pFVar5->ModulesChangedEvent;
    if (uVar1 != 0) {
      if ((this_00 ==
           (TMulticastDelegate<void___cdecl(FName,EModuleChangeReason),FDefaultTSDelegateUserPolicy>
            *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      uVar10 = uVar8;
      if (0 < *(int *)&(pFVar5->ModulesChangedEvent).field_0x30) {
        do {
          uVar9 = (uint)uVar10;
          uVar4 = 0;
          if ((int)uVar9 < *(int *)&(pFVar5->ModulesChangedEvent).field_0x30) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_01 = (ForAnyElementType *)
                    (*(longlong *)&(pFVar5->ModulesChangedEvent).field_0x28 + uVar8);
          if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
             && (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_01->Data + 0x40))(),
                *puVar6 == uVar1)) {
            if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_01->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10)
              ;
              *(undefined4 *)&this_01[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
            break;
          }
          uVar8 = uVar8 + 0x10;
          uVar10 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < *(int *)&(pFVar5->ModulesChangedEvent).field_0x30);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    }
    (this->ModulesChangedHandle).ID = 0;
  }
  pTVar7 = UE::Net::FReplicationSystemFactory::GetReplicationSystemCreatedDelegate();
  TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::
  Remove((TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
          *)pTVar7,(FDelegateHandle)(this->RepSysCreatedHandle).ID);
  pTVar7 = UE::Net::FReplicationSystemFactory::GetReplicationSystemDestroyedDelegate();
  TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::
  Remove((TMulticastDelegateRegistration<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
          *)pTVar7,(FDelegateHandle)(this->RepSysDestroyedHandle).ID);
  (this->RepSysCreatedHandle).ID = 0;
  (this->RepSysDestroyedHandle).ID = 0;
  return;
}

// SupportsDynamicReloading @ 1441f2610

bool __thiscall FIrisCoreModule::SupportsDynamicReloading(FIrisCoreModule *this)

{
  return false;
}

// BroadcastLoadedModulesUpdated @ 1441fc2b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FIrisCoreModule::BroadcastLoadedModulesUpdated(FIrisCoreModule *this,float param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  if (this->LoadedModulesCountAtTickerCreation != this->LoadedModulesCount) {
    this->LoadedModulesCountAtTickerCreation = this->LoadedModulesCount;
    return true;
  }
  if (this->RepSystemCount < 1) {
    if (3 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`private:_bool___cdecl_FIrisCoreModule::BroadcastLoadedModulesUpdated(float)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else if (2 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`private:_bool___cdecl_FIrisCoreModule::BroadcastLoadedModulesUpdated(float)___ptr64'
                ::__l11::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if (&this->BroadcastModulesUpdatedHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
    pTVar3 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController;
    (this->BroadcastModulesUpdatedHandle).Object = (FElement *)0x0;
    (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  UE::Net::Private::FInternalNetSerializerDelegates::BroadcastLoadedModulesUpdated();
  return false;
}

// ForceBroadcastLoadedModulesUpdated @ 144209b90

void __thiscall FIrisCoreModule::ForceBroadcastLoadedModulesUpdated(FIrisCoreModule *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  undefined8 local_18 [2];
  
  pTVar1 = &this->BroadcastModulesUpdatedHandle;
  if ((((this->BroadcastModulesUpdatedHandle).Object != (FElement *)0x0) &&
      (pTVar4 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar1->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  this->LoadedModulesCountAtTickerCreation = this->LoadedModulesCount;
  BroadcastLoadedModulesUpdated(this,0.0);
  return;
}

// OnAllModuleLoadingPhasesComplete @ 144212eb0

void __thiscall FIrisCoreModule::OnAllModuleLoadingPhasesComplete(FIrisCoreModule *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnAllModuleLoadingPhasesComplete,this);
  this->bAllowLoadedModulesUpdatedCallback = true;
  if ((0 < this->RepSystemCount) &&
     (((((this->BroadcastModulesUpdatedHandle).Object != (FElement *)0x0 &&
        (pTVar1 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount))
      || (this->LoadedModulesCountAtTickerCreation != this->LoadedModulesCount)))) {
    ForceBroadcastLoadedModulesUpdated(this);
    return;
  }
  return;
}

// OnModulesChanged @ 144212f30

void __thiscall
FIrisCoreModule::OnModulesChanged(FIrisCoreModule *this,FName param_1,EModuleChangeReason param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTSTicker *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TWeakPtr<FTSTicker::FElement,1> *pTVar6;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_2 == ModuleLoaded) {
    this->LoadedModulesCount = this->LoadedModulesCount + 1;
    if (((this->bAllowLoadedModulesUpdatedCallback != false) && (0 < this->RepSystemCount)) &&
       (((this->BroadcastModulesUpdatedHandle).Object == (FElement *)0x0 ||
        ((pTVar3 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController,
         pTVar3 == (TReferenceControllerBase<1> *)0x0 || ((int)pTVar3->SharedReferenceCount < 1)))))
       ) {
      this->LoadedModulesCountAtTickerCreation = this->LoadedModulesCount;
      this_00 = FTSTicker::GetCoreTicker();
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar4[4] = BroadcastLoadedModulesUpdated;
        puVar4[3] = this;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      pTVar6 = FTSTicker::AddTicker
                         (this_00,&local_68,
                          (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,0.0)
      ;
      TWeakPtr<FTSTicker::FElement,1>::operator=(&this->BroadcastModulesUpdatedHandle,pTVar6);
      if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_68.WeakReferenceCount.ReferenceController,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
    }
    UE::Net::Private::FInternalNetSerializerDelegates::BroadcastPreFreezeNetSerializerRegistry();
    UE::Net::Private::FInternalNetSerializerDelegates::BroadcastPostFreezeNetSerializerRegistry();
  }
  return;
}

// OnRepSystemCreated @ 144213110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIrisCoreModule::OnRepSystemCreated(FIrisCoreModule *this,UReplicationSystem *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((this->BroadcastModulesUpdatedHandle).Object == (FElement *)0x0) ||
       (pTVar1 = (this->BroadcastModulesUpdatedHandle).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (this->LoadedModulesCountAtTickerCreation == this->LoadedModulesCount)) {
    if ((this->RepSystemCount == 0) && (3 < (byte)LogIris._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`private:_void___cdecl_FIrisCoreModule::OnRepSystemCreated(UReplicationSystem*___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogIris);
      this->RepSystemCount = this->RepSystemCount + 1;
      return;
    }
    this->RepSystemCount = this->RepSystemCount + 1;
    return;
  }
  ForceBroadcastLoadedModulesUpdated(this);
  this->RepSystemCount = this->RepSystemCount + 1;
  return;
}

// OnRepSystemDestroyed @ 144213190

void __thiscall
FIrisCoreModule::OnRepSystemDestroyed(FIrisCoreModule *this,UReplicationSystem *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &this->RepSystemCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4629585621050982594>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\IrisCoreModule.cpp"
                       ,0xc2,"RepSystemCount >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

