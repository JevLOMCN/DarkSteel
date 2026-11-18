// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// FPCGInstanceDataProviderProxy @ 149737ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGInstanceDataProviderProxy * __thiscall
FPCGInstanceDataProviderProxy::FPCGInstanceDataProviderProxy
          (FPCGInstanceDataProviderProxy *this,FParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IPCGRuntimePrimitiveFactory *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPCGInstanceDataProviderProxy *pFVar6;
  UObject *pUVar7;
  longlong lVar8;
  int iVar9;
  
  this->bIsValid = false;
  this->_padding_ = (longlong)&___7FPCGInstanceDataProviderProxy__6B_;
  (this->PrimitiveFactory).Object = (param_1->PrimitiveFactory).Object;
  pTVar1 = (param_1->PrimitiveFactory).SharedReferenceCount.ReferenceController;
  (this->PrimitiveFactory).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar9 = 0;
  this->InstanceData = (FRDGBuffer *)0x0;
  this->InstanceDataSRV = (FRDGBufferSRV *)0x0;
  this->InstanceDataUAV = (FRDGBufferUAV *)0x0;
  this->InstanceCustomFloatData = (FRDGBuffer *)0x0;
  this->InstanceCustomFloatDataSRV = (FRDGBufferSRV *)0x0;
  this->InstanceCustomFloatDataUAV = (FRDGBufferUAV *)0x0;
  this->WriteCounters = (FRDGBuffer *)0x0;
  this->WriteCountersSRV = (FRDGBufferSRV *)0x0;
  this->WriteCountersUAV = (FRDGBufferUAV *)0x0;
  this->NumInstancesAllPrimitives = param_1->NumInstancesAllPrimitives;
  this->NumCustomFloatsPerInstance = param_1->NumCustomFloatsPerInstance;
  this->Seed = param_1->Seed;
  (this->DataProvider).WeakPtr = (param_1->DataProvider).WeakPtr;
  this->DataProviderGeneration = 0;
  (this->ContextHandle).Object = (param_1->ContextHandle).Object;
  pTVar1 = (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
  (this->ContextHandle).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->bIsValid = true;
  bVar4 = FWeakObjectPtr::IsValid(&(this->DataProvider).WeakPtr);
  if (bVar4) {
    pUVar7 = FWeakObjectPtr::Get(&(this->DataProvider).WeakPtr);
    this->DataProviderGeneration = *(ulong64 *)&pUVar7[3].field_0x18;
    if (this->NumInstancesAllPrimitives == 0) {
      pUVar7 = FWeakObjectPtr::Get(&(this->DataProvider).WeakPtr);
      pUVar7[4].field_0x10 = 1;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<801890460250407160>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
                       ,0xf8,"DataProvider.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPCGInstanceDataProviderProxy *)(*pcVar3)();
      return pFVar6;
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bIsValid = false;
  }
  if ((this->PrimitiveFactory).Object != (IPCGRuntimePrimitiveFactory *)0x0) {
    while( true ) {
      if (((this->PrimitiveFactory).Object == (IPCGRuntimePrimitiveFactory *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPCGInstanceDataProviderProxy *)(*pcVar3)();
        return pFVar6;
      }
      iVar5 = (**(code **)((longlong)*(this->PrimitiveFactory).Object + 8))();
      if (iVar5 <= iVar9) {
        return this;
      }
      if (((this->PrimitiveFactory).Object == (IPCGRuntimePrimitiveFactory *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPCGInstanceDataProviderProxy *)(*pcVar3)();
        return pFVar6;
      }
      pIVar2 = (this->PrimitiveFactory).Object;
      lVar8 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,iVar9);
      if (lVar8 == 0) break;
      iVar9 = iVar9 + 1;
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bIsValid = false;
  }
  return this;
}

// ~<lambda_1> @ 14973d010

void __thiscall
`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// operator() @ 149741760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  int *piVar1;
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  atomic<int> aVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  int iVar11;
  UObject *pUVar12;
  IPCGGraphExecutionSource *pIVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_258 [32];
  int local_238;
  int local_234;
  int local_230;
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  void *local_210;
  longlong *local_208;
  code *local_200;
  UObject *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FGPUSceneWriteDelegate local_1b0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_210 = this;
  pUVar12 = FWeakObjectPtr::Get(this);
  local_1f8 = pUVar12;
  if ((pUVar12 == (UObject *)0x0) ||
     (*(longlong *)&pUVar12[3].field_0x18 != *(longlong *)((longlong)this + 8))) {
    if ((byte)LogPCG._0_1_ < 6) {
      return false;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    return false;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  plVar19 = (longlong *)0x0;
  local_238 = 0;
  local_208 = (longlong *)0x0;
  plVar14 = plVar19;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar3->SharedReferenceCount;
    do {
      if (aVar8 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_149741871;
      }
      LOCK();
      aVar10 = pTVar3->SharedReferenceCount;
      bVar20 = aVar8 == aVar10;
      if (bVar20) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar10 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar10;
    } while (!bVar20);
    if ((*(longlong *)((longlong)this + 0x28) != 0) &&
       (lVar15 = *(longlong *)(*(longlong *)((longlong)this + 0x28) + 0x10), this = local_210,
       plVar14 = (longlong *)0x0, lVar15 != 0)) {
      if ((*(longlong *)(lVar15 + 0x70) == 0) ||
         (bVar20 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar15 + 0x68)), !bVar20)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        goto LAB_149741871;
      }
      pIVar13 = TWeakInterfacePtr<IPCGGraphExecutionSource>::operator->
                          ((TWeakInterfacePtr<IPCGGraphExecutionSource> *)(lVar15 + 0x68));
      plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x18))(pIVar13);
      lVar15 = (**(code **)(*plVar14 + 0x20))(plVar14);
      this = local_210;
      plVar14 = plVar19;
      if (lVar15 != 0) {
        local_208 = *(longlong **)(lVar15 + 600);
        plVar14 = local_208;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (plVar14 != (longlong *)0x0) {
    plVar19 = *(longlong **)&pUVar12[3].field_0x20;
    local_1f0 = *(TReferenceControllerBase<1> **)(pUVar12 + 4);
    if (local_1f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1f0->SharedReferenceCount = (atomic<int>)((int)local_1f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar18 = 0;
LAB_1497418cc:
    do {
      local_234 = iVar18;
      if ((plVar19 == (longlong *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = (**(code **)(*plVar19 + 8))(plVar19);
      if (iVar11 <= iVar18) {
        local_1f8[4].field_0x10 = 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f0);
        return false;
      }
      if ((plVar19 == (longlong *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      local_230 = (**(code **)(*plVar19 + 0x18))(plVar19,iVar18);
      if (local_230 < 1) {
        if (2 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          iVar18 = iVar18 + 1;
          this = local_210;
          goto LAB_1497418cc;
        }
      }
      else {
        if ((plVar19 == (longlong *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        lVar15 = (**(code **)(*plVar19 + 0x10))(plVar19);
        if ((lVar15 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("SceneProxy",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
                                ,0x19a,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if ((*(int *)(*(longlong *)(lVar15 + 0x228) + 0x224) == -1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("SceneProxy->GetPrimitiveSceneInfo()->GetInstanceSceneDataOffset() != -1"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
                                ,0x19b,L""), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        local_188 = 0;
        uStack_180 = 0;
        local_160 = 1;
        bVar20 = 0 < PCGInstanceDataInterface::TriggerGPUCaptureDispatchIndex;
        local_15c = 2;
        iVar18 = PCGInstanceDataInterface::TriggerGPUCaptureDispatchIndex + -1;
        local_178 = 0;
        local_168 = 0;
        local_50 = 0;
        PCGInstanceDataInterface::TriggerGPUCaptureDispatchIndex = 0;
        if (0 < iVar18) {
          PCGInstanceDataInterface::TriggerGPUCaptureDispatchIndex = iVar18;
        }
        local_48 = 0;
        puVar4 = *(undefined8 **)((longlong)this + 0x10);
        uVar2 = *(undefined4 *)((longlong)this + 0x38);
        local_200 = *(code **)(*plVar14 + 1000);
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
        }
        puVar5 = *(undefined8 **)((longlong)this + 0x18);
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
          UNLOCK();
        }
        puVar6 = *(undefined8 **)((longlong)this + 0x20);
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
          UNLOCK();
        }
        local_228 = (undefined1  [8])0x0;
        local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_220.DelegateSize = 0;
        local_170 = lVar15;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                   (FWriteAccessScope *)&local_1d0);
        local_1b8 = &local_220;
        puVar16 = UE::Core::Private::DelegateAllocate(0x48,&local_220);
        if (puVar16 != (undefined8 *)0x0) {
          *puVar16 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar17 = FDelegateHandle::GenerateNewID();
          puVar16[2] = uVar17;
          *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::`2'::<lambda_1>::operator()'::`38'::<lambda_1>_>
                      ::_vftable_;
          *(int *)(puVar16 + 3) = local_234;
          *(int *)((longlong)puVar16 + 0x1c) = local_230;
          *(int *)(puVar16 + 4) = local_238;
          *(undefined4 *)((longlong)puVar16 + 0x24) = uVar2;
          *(bool *)(puVar16 + 5) = bVar20;
          puVar16[6] = puVar4;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
            UNLOCK();
          }
          puVar16[7] = puVar5;
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            UNLOCK();
          }
          puVar16[8] = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
            UNLOCK();
          }
        }
        if (local_1d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
        }
        FGPUSceneWriteDelegate::FGPUSceneWriteDelegate
                  (&local_1b0,
                   (TDelegate<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
                    *)local_228);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                   (FWriteAccessScope *)&local_1e8);
        if ((local_220.DelegateSize != 0) &&
           (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_220.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_220,0,0,0x10);
          local_220.DelegateSize = 0;
        }
        if (local_1e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
        }
        if (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_220.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_228);
        (*local_200)(local_208,&local_188);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b0.Delegate);
        local_1b0._padding_ = (longlong)&___7FOneFrameResource__6B_;
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar6 + 1);
          LOCK();
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar18 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          LOCK();
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar18 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar18 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        local_238 = local_238 + local_230;
        plVar14 = local_208;
        iVar18 = local_234;
      }
      iVar18 = iVar18 + 1;
      this = local_210;
    } while( true );
  }
LAB_149741871:
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return false;
}

// AllocateResources @ 149746c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGInstanceDataProviderProxy::AllocateResources
          (FPCGInstanceDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  IPCGRuntimePrimitiveFactory *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGBufferSRV *pFVar5;
  FRDGBufferUAV *pFVar6;
  byte bVar7;
  ForElementType<unsigned_int> FVar8;
  longlong lVar9;
  undefined1 auStackY_1f8 [32];
  FRDGBufferUAVDesc local_1c8;
  undefined8 local_1b8;
  FLLMScope local_1b0 [2];
  FRDGBufferUAVDesc local_1a8;
  FRDGBufferUAVDesc local_198;
  FName local_188;
  FMemScope local_180;
  FRDGBufferSRVDesc local_178;
  FRDGBufferSRVDesc local_158;
  FRDGBufferSRVDesc local_138;
  FRDGBufferDesc local_118;
  undefined1 local_100 [16];
  FShaderParametersMetadata *local_f0;
  undefined1 local_e8 [16];
  FShaderParametersMetadata *local_d8;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FLLMScope::FLLMScope(local_1b0,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_188 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_180,&local_188,true);
  local_1c8.Buffer._0_4_ = 0x10109;
  local_1c8._padding_._0_1_ = 0x10;
  local_1c8._padding_._1_1_ = 0;
  local_1c8._padding_._2_1_ = 0;
  local_1c8._padding_._3_1_ = 0;
  local_1b8 = 0;
  local_1c8._padding_._4_4_ = this->NumInstancesAllPrimitives;
  if (this->NumInstancesAllPrimitives == 0) {
    local_1c8._padding_._4_4_ = 1;
  }
  local_118.Metadata = (FShaderParametersMetadata *)0x0;
  local_1c8._padding_._4_4_ = local_1c8._padding_._4_4_ * 3;
  local_118.NumElements = local_1c8._padding_._4_4_;
  local_118.BytesPerElement = 0x10;
  local_118.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_118._12_4_ = local_1c8.Buffer._4_4_;
  local_178.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_118,L"PCGInstanceDataBuffer",None);
  this->InstanceData = local_178.Buffer;
  uVar4 = 0;
  local_178._padding_._4_4_ = 0;
  local_178._padding_._0_4_ = 0xffffffff;
  local_178._padding_ = 0;
  local_178._padding_._0_1_ = 0;
  if ((((local_178.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_178._padding_._0_1_ = 0x1c;
  }
  pFVar5 = FRDGBuilder::CreateSRV(param_1,&local_178);
  this->InstanceDataSRV = pFVar5;
  local_1a8.Buffer = this->InstanceData;
  bVar7 = 0;
  local_1a8._padding_._2_1_ = 0;
  if ((((local_1a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_1a8._padding_._0_2_ = (ushort)bVar7;
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_1a8,None);
  this->InstanceDataUAV = pFVar6;
  local_1c8._padding_._4_4_ = this->NumCustomFloatsPerInstance * this->NumInstancesAllPrimitives;
  local_1c8.Buffer =
       (FRDGBuffer *)
       CONCAT44(local_1c8.Buffer._4_4_,StructuredBuffer|ShaderResource|UnorderedAccess|Static);
  local_1c8._padding_._0_1_ = 4;
  local_1c8._padding_._1_1_ = 0;
  local_1c8._padding_._2_1_ = 0;
  local_1c8._padding_._3_1_ = 0;
  local_1b8 = 0;
  local_f0 = (FShaderParametersMetadata *)0x0;
  if (local_1c8._padding_._4_4_ == 0) {
    local_1c8._padding_._4_4_ = 1;
  }
  local_100._4_4_ = local_1c8._padding_._4_4_;
  local_100._0_4_ = 4;
  local_100._8_8_ = local_1c8.Buffer;
  local_158.Buffer =
       FRDGBuilder::CreateBuffer
                 (param_1,(FRDGBufferDesc *)local_100,L"PCGInstanceCustomFloatDataBuffer",None);
  this->InstanceCustomFloatData = local_158.Buffer;
  local_158._padding_._0_1_ = 0;
  local_158._padding_._4_4_ = 0;
  local_158._padding_._0_4_ = 0xffffffff;
  local_158._padding_ = 0;
  if ((((local_158.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_158._padding_._0_1_ = 0x1c;
  }
  pFVar5 = FRDGBuilder::CreateSRV(param_1,&local_158);
  this->InstanceCustomFloatDataSRV = pFVar5;
  local_198.Buffer = this->InstanceCustomFloatData;
  bVar7 = 0;
  local_198._padding_._2_1_ = 0;
  if ((((local_198.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_198._padding_._0_2_ = (ushort)bVar7;
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_198,None);
  pIVar1 = (this->PrimitiveFactory).Object;
  this->InstanceCustomFloatDataUAV = pFVar6;
  if (pIVar1 != (IPCGRuntimePrimitiveFactory *)0x0) {
    uVar4 = (**(code **)((longlong)*pIVar1 + 8))();
  }
  local_1c8.Buffer =
       (FRDGBuffer *)
       CONCAT44(local_1c8.Buffer._4_4_,StructuredBuffer|ShaderResource|UnorderedAccess|Static);
  local_1c8._padding_._0_1_ = 4;
  local_1c8._padding_._1_1_ = 0;
  local_1c8._padding_._2_1_ = 0;
  local_1c8._padding_._3_1_ = 0;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  local_1b8 = 0;
  local_e8._4_4_ = uVar4;
  local_e8._0_4_ = 4;
  local_d8 = (FShaderParametersMetadata *)0x0;
  local_e8._8_8_ = local_1c8.Buffer;
  local_1c8._padding_._4_4_ = uVar4;
  local_138.Buffer =
       FRDGBuilder::CreateBuffer(param_1,(FRDGBufferDesc *)local_e8,L"PCGWriteCounters",None);
  this->WriteCounters = local_138.Buffer;
  local_138._padding_._0_1_ = 0;
  local_138._padding_._4_4_ = 0;
  local_138._padding_._0_4_ = 0xffffffff;
  local_138._padding_ = 0;
  if ((((local_138.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_138._padding_._0_1_ = 0x1c;
  }
  pFVar5 = FRDGBuilder::CreateSRV(param_1,&local_138);
  this->WriteCountersSRV = pFVar5;
  local_1c8.Buffer = this->WriteCounters;
  local_1c8._padding_._1_1_ = 0;
  local_1c8._padding_._0_1_ = 0;
  local_1c8._padding_._2_1_ = 0;
  if ((((local_1c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_1c8._padding_._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_1c8,None);
  this->WriteCountersUAV = pFVar6;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0x20;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&local_c8,uVar4,Default);
  lVar9 = (longlong)local_c8.ArrayNum;
  FVar8 = (ForElementType<unsigned_int>)&local_c8;
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar8 = local_c8.AllocatorInstance.SecondaryData;
  }
  if ((local_c8.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FRDGBuilder::QueueBufferUpload(param_1,this->WriteCounters,(void *)FVar8,lVar9 << 2,None);
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  FMemScope::~FMemScope(&local_180);
  FLLMScope::~FLLMScope(local_1b0);
  return;
}

// GatherDispatchData @ 149751dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGInstanceDataProviderProxy::GatherDispatchData
          (FPCGInstanceDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  IPCGRuntimePrimitiveFactory *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar8 = param_1->ParameterBufferOffset;
  puVar3 = param_1->ParameterBuffer;
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = 0;
  if (0 < iVar1) {
    puVar10 = (uint *)(puVar3 + (longlong)iVar8 + 0x1004);
    do {
      if ((iVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar4 = (this->PrimitiveFactory).Object;
      if (pIVar4 == (IPCGRuntimePrimitiveFactory *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)((longlong)*pIVar4 + 8))();
      }
      puVar10[-1] = uVar7;
      *puVar10 = this->NumInstancesAllPrimitives;
      puVar10[1] = this->NumCustomFloatsPerInstance;
      *(FRDGBufferUAV **)(puVar10 + 3) = this->InstanceDataUAV;
      *(FRDGBufferUAV **)(puVar10 + 5) = this->InstanceCustomFloatDataUAV;
      *(FRDGBufferUAV **)(puVar10 + 7) = this->WriteCountersUAV;
      if ((this->PrimitiveFactory).Object != (IPCGRuntimePrimitiveFactory *)0x0) {
        uVar7 = 0;
        uVar11 = 0;
        while( true ) {
          if (((this->PrimitiveFactory).Object == (IPCGRuntimePrimitiveFactory *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (**(code **)((longlong)*(this->PrimitiveFactory).Object + 8))();
          if (iVar8 <= (int)uVar11) break;
          if (((this->PrimitiveFactory).Object == (IPCGRuntimePrimitiveFactory *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pIVar4 = (this->PrimitiveFactory).Object;
          uVar9 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,uVar11);
          puVar10[uVar11 * 4 + -0x401] = uVar9;
          puVar10[uVar11 * 4 + -0x400] = uVar7;
          uVar7 = uVar7 + uVar9;
          (puVar10 + uVar11 * 4 + -0x3ff)[0] = 0;
          (puVar10 + uVar11 * 4 + -0x3ff)[1] = 0;
          uVar11 = (ulonglong)((int)uVar11 + 1);
        }
      }
      iVar12 = iVar12 + 1;
      puVar10 = (uint *)((longlong)puVar10 + (longlong)iVar2);
    } while (iVar12 < iVar1);
  }
  return;
}

// IsValid @ 14976c030

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGInstanceDataProviderProxy::IsValid(FPCGInstanceDataProviderProxy *this,FValidationData *param_1)

{
  if ((this->bIsValid != false) && (param_1->ParameterStructSize == 0x1030)) {
    return true;
  }
  return false;
}

// PostSubmit @ 14976e940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGInstanceDataProviderProxy::PostSubmit
          (FPCGInstanceDataProviderProxy *this,FComputeContext *param_1)

{
  atomic<int> *paVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  uint uVar4;
  FRDGPooledBuffer *this_00;
  FRDGPooledBuffer *this_01;
  FRDGPooledBuffer *pFVar5;
  code *pcVar6;
  FWeakObjectPtr FVar7;
  FPCGContextHandle *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  TRefCountPtr<FRDGPooledBuffer> *pTVar11;
  FTSTicker *this_02;
  code **ppcVar12;
  bool bVar13;
  undefined1 auStackY_c8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId340,"FPCGInstanceDataProviderProxy::PostSubmit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
               ,0x154);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId340);
  }
  if (this->NumInstancesAllPrimitives != 0) {
    pTVar11 = FRDGBuilder::ConvertToExternalBuffer(param_1->GraphBuilder,this->InstanceData);
    this_00 = pTVar11->Reference;
    if (this_00 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
      UNLOCK();
    }
    pTVar11 = FRDGBuilder::ConvertToExternalBuffer
                        (param_1->GraphBuilder,this->InstanceCustomFloatData);
    this_01 = pTVar11->Reference;
    if (this_01 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
      UNLOCK();
    }
    pTVar11 = FRDGBuilder::ConvertToExternalBuffer(param_1->GraphBuilder,this->WriteCounters);
    pFVar5 = pTVar11->Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    this_02 = FTSTicker::GetCoreTicker();
    pcVar6 = (code *)this->DataProviderGeneration;
    FVar7 = (this->DataProvider).WeakPtr;
    uVar4 = this->Seed;
    if (this_00 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
      UNLOCK();
    }
    if (this_01 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    pFVar8 = (this->ContextHandle).Object;
    pTVar9 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x48,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_50[2] = pcVar6;
    *(FWeakObjectPtr *)(local_50 + 1) = FVar7;
    local_50[3] = (code *)this_00;
    if (this_00 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
      UNLOCK();
    }
    local_50[4] = (code *)this_01;
    if (this_01 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
      UNLOCK();
    }
    local_50[5] = (code *)pFVar5;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    *(uint *)(local_50 + 8) = uVar4;
    local_50[6] = (code *)pFVar8;
    local_50[7] = (code *)pTVar9;
    if ((FWeakObjectPtr *)(local_50 + 1) != (FWeakObjectPtr *)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this_02,&local_88,L"ApplyPrimitiveSceneUpdates",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar12 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar12 = local_50;
      }
      (**(code **)(*ppcVar12 + 0x10))();
    }
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    if (this_01 != (FRDGPooledBuffer *)0x0) {
      plVar2 = &this_01->_padding_;
      LOCK();
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    if (this_00 != (FRDGPooledBuffer *)0x0) {
      plVar2 = &this_00->_padding_;
      LOCK();
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    if (this_01 != (FRDGPooledBuffer *)0x0) {
      FRefCountBase::Release((FRefCountBase *)this_01);
    }
    if (this_00 != (FRDGPooledBuffer *)0x0) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

