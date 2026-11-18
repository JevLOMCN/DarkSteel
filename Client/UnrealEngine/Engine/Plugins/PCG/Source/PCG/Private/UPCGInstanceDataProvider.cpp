// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972d2d0

UClass * __cdecl UPCGInstanceDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataProvider",
               &Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGInstanceDataProvider,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGInstanceDataProvider>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton;
}

// UPCGInstanceDataProvider @ 14973bbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGInstanceDataProvider * __thiscall
UPCGInstanceDataProvider::UPCGInstanceDataProvider
          (UPCGInstanceDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGInstanceDataProvider__6B_;
  (this->PrimitiveFactory).Object = (IPCGRuntimePrimitiveFactory *)0x0;
  (this->PrimitiveFactory).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NumInstancesAllPrimitives = 0;
  this->NumCustomFloatsPerInstance = 0;
  this->bWroteInstances = false;
  (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
  (this->ContextHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPCGInstanceDataProvider @ 14973bc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGInstanceDataProvider * __thiscall
UPCGInstanceDataProvider::UPCGInstanceDataProvider
          (UPCGInstanceDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGInstanceDataProvider__6B_;
  (this->PrimitiveFactory).Object = (IPCGRuntimePrimitiveFactory *)0x0;
  (this->PrimitiveFactory).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NumInstancesAllPrimitives = 0;
  this->NumCustomFloatsPerInstance = 0;
  this->bWroteInstances = false;
  (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
  (this->ContextHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPCGInstanceDataProvider @ 14973e240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGInstanceDataProvider::~UPCGInstanceDataProvider(UPCGInstanceDataProvider *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UPCGInstanceDataProvider__6B_;
  pTVar3 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrimitiveFactory).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975bec0

UClass * __cdecl UPCGInstanceDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGInstanceDataProvider",
               &Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGInstanceDataProvider,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGInstanceDataProvider>,
               InternalVTableHelperCtorCaller<UPCGInstanceDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGInstanceDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UPCGInstanceDataProvider::GetRenderProxy(UPCGInstanceDataProvider *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UObject *pUVar3;
  UPCGSettings *this_00;
  FPCGInstanceDataProviderProxy *this_01;
  UPCGSettings *pUVar4;
  bool bVar5;
  UPCGInstanceDataProvider *local_res8;
  FParams local_48;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId210,"UPCGInstanceDataProvider::GetRenderProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
               ,0xd2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
  }
  pUVar4 = (UPCGSettings *)0x0;
  this_00 = pUVar4;
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar3 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    this_00 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
  }
  local_48.PrimitiveFactory.Object = (this->PrimitiveFactory).Object;
  local_48.PrimitiveFactory.SharedReferenceCount.ReferenceController =
       (this->PrimitiveFactory).SharedReferenceCount.ReferenceController;
  if (local_48.PrimitiveFactory.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.PrimitiveFactory.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.PrimitiveFactory.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.NumInstancesAllPrimitives = this->NumInstancesAllPrimitives;
  local_48.NumCustomFloatsPerInstance = this->NumCustomFloatsPerInstance;
  if (this_00 == (UPCGSettings *)0x0) {
    local_48.Seed = 0x2a;
  }
  else {
    local_48.Seed = UPCGSettings::GetSeed(this_00,(IPCGGraphExecutionSource *)0x0);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_48.DataProvider.WeakPtr.ObjectIndex = 0;
  local_48.DataProvider.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_48.DataProvider.WeakPtr,(FObjectPtr)&local_res8);
  local_48.ContextHandle.Object = (this->ContextHandle).Object;
  local_48.ContextHandle.WeakReferenceCount.ReferenceController =
       (this->ContextHandle).WeakReferenceCount.ReferenceController;
  if (local_48.ContextHandle.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.ContextHandle.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.ContextHandle.WeakReferenceCount.ReferenceController)->WeakReferenceCount +
         1);
    UNLOCK();
  }
  this_01 = ::operator_new(0x98);
  if (this_01 != (FPCGInstanceDataProviderProxy *)0x0) {
    pUVar4 = (UPCGSettings *)
             FPCGInstanceDataProviderProxy::FPCGInstanceDataProviderProxy(this_01,&local_48);
  }
  if (local_48.ContextHandle.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.ContextHandle.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.ContextHandle.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.ContextHandle.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.PrimitiveFactory.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FComputeDataProviderRenderProxy *)pUVar4;
}

// PostExecute @ 14976e850

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
UPCGInstanceDataProvider::PostExecute(UPCGInstanceDataProvider *this,UPCGDataBinding *param_1)

{
  return this->bWroteInstances;
}

// PrepareForExecute_GameThread @ 149770c10

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
UPCGInstanceDataProvider::PrepareForExecute_GameThread
          (UPCGInstanceDataProvider *this,UPCGDataBinding *param_1)

{
  atomic<int> *paVar1;
  TSharedPtr<IPCGRuntimePrimitiveFactory,1> *this_00;
  atomic<int> aVar2;
  UObject *pUVar3;
  FPCGContextHandle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  FPCGSpawnerPrimitives *pFVar12;
  IPCGRuntimePrimitiveFactory *pIVar13;
  longlong lVar14;
  FString *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  wchar_t *pwVar17;
  bool bVar18;
  UObject *local_res10;
  UObject *local_res18;
  FString local_48;
  undefined8 local_38 [2];
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId148,"UPCGInstanceDataProvider::PrepareForExecute_GameThread"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId148);
  }
  if (param_1 == (UPCGDataBinding *)0x0) {
    pFVar15 = GetTypeName<UPCGDataBinding>(&local_48);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar17);
  }
  pUVar3 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  bVar7 = UPCGDataBinding::IsMeshSpawnerKernelComplete
                    (param_1,(TObjectPtr<UComputeKernel_const_>)&local_res10);
  if (!bVar7) {
    bVar7 = false;
    goto LAB_149770f41;
  }
  pUVar3 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pFVar12 = UPCGDataBinding::FindMeshSpawnerPrimitives
                      (param_1,(TObjectPtr<UComputeKernel_const_>)&local_res18);
  if (pFVar12 != (FPCGSpawnerPrimitives *)0x0) {
    pIVar13 = (pFVar12->PrimitiveFactory).Object;
    this_00 = &this->PrimitiveFactory;
    pTVar16 = (pFVar12->PrimitiveFactory).SharedReferenceCount.ReferenceController;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->PrimitiveFactory).SharedReferenceCount.ReferenceController;
    this_00->Object = pIVar13;
    (this->PrimitiveFactory).SharedReferenceCount.ReferenceController = pTVar16;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (this_00->Object != (IPCGRuntimePrimitiveFactory *)0x0) {
      pIVar13 = TSharedPtr<IPCGRuntimePrimitiveFactory,1>::operator->(this_00);
      iVar10 = (**(code **)((longlong)*pIVar13 + 8))(pIVar13);
      if (iVar10 < 0x101) {
        pIVar13 = TSharedPtr<IPCGRuntimePrimitiveFactory,1>::operator->(this_00);
        cVar9 = (**(code **)((longlong)*pIVar13 + 0x20))(pIVar13);
        if (cVar9 == '\0') {
          if (5 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
          bVar7 = false;
          goto LAB_149770f41;
        }
        iVar10 = 0;
        this->NumInstancesAllPrimitives = 0;
        while( true ) {
          if ((this_00->Object == (IPCGRuntimePrimitiveFactory *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar11 = (**(code **)((longlong)*this_00->Object + 8))();
          if (iVar11 <= iVar10) break;
          if ((this_00->Object == (IPCGRuntimePrimitiveFactory *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar11 = (**(code **)((longlong)*this_00->Object + 0x18))(this_00->Object,iVar10);
          this->NumInstancesAllPrimitives = this->NumInstancesAllPrimitives + iVar11;
          iVar10 = iVar10 + 1;
        }
        this->NumCustomFloatsPerInstance = pFVar12->NumCustomFloats;
        pTVar16 = (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
        pFVar4 = (param_1->ContextHandle).Object;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
          UNLOCK();
        }
        if (&this->ContextHandle == (TWeakPtr<FPCGContextHandle,1> *)local_38) {
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar16->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              lVar14 = pTVar16->_padding_;
              goto LAB_149770f37;
            }
          }
        }
        else {
          pTVar5 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
          (this->ContextHandle).Object = pFVar4;
          (this->ContextHandle).WeakReferenceCount.ReferenceController = pTVar16;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar5->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              lVar14 = pTVar5->_padding_;
              pTVar16 = pTVar5;
LAB_149770f37:
              (**(code **)(lVar14 + 8))(pTVar16,1);
            }
          }
        }
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<801890460250407083>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGInstanceDataInterface.cpp"
                           ,0xab,
                           "PrimitiveFactory->GetNumPrimitives() <= PCGComputeConstants::MAX_PRIMITIVE_COMPONENTS_PER_SPAWNER"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (1 < (byte)LogPCG._0_1_) {
          pIVar13 = TSharedPtr<IPCGRuntimePrimitiveFactory,1>::operator->(this_00);
          (**(code **)((longlong)*pIVar13 + 8))(pIVar13);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
      }
    }
  }
  bVar7 = true;
LAB_149770f41:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// Reset @ 149774cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGInstanceDataProvider::Reset(UPCGInstanceDataProvider *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18 [2];
  
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->PrimitiveFactory != (TSharedPtr<IPCGRuntimePrimitiveFactory,1> *)&local_28) {
    (this->PrimitiveFactory).Object = (IPCGRuntimePrimitiveFactory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PrimitiveFactory).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  this->NumInstancesAllPrimitives = 0;
  this->NumCustomFloatsPerInstance = 0;
  this->bWroteInstances = false;
  if (&this->ContextHandle != (TWeakPtr<FPCGContextHandle,1> *)local_18) {
    pTVar3 = (this->ContextHandle).WeakReferenceCount.ReferenceController;
    (this->ContextHandle).Object = (FPCGContextHandle *)0x0;
    (this->ContextHandle).WeakReferenceCount.ReferenceController =
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
  return;
}

// StaticRegisterNativesUPCGInstanceDataProvider @ 149778770

void __cdecl UPCGInstanceDataProvider::StaticRegisterNativesUPCGInstanceDataProvider(void)

{
  return;
}

