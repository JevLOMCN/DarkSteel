// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 32

// StaticClass @ 14aba7ff0

UClass * __cdecl UCustomizableObjectSystemPrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectSystemPrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectSystemPrivate",
               &Z_Registration_Info_UClass_UCustomizableObjectSystemPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectSystemPrivate,0x410,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectSystemPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableObjectSystemPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectSystemPrivate.InnerSingleton;
}

// UCustomizableObjectSystemPrivate @ 14abbd8c0

UCustomizableObjectSystemPrivate * __thiscall
UCustomizableObjectSystemPrivate::UCustomizableObjectSystemPrivate
          (UCustomizableObjectSystemPrivate *this,FVTableHelper *param_1)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  undefined8 *local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IStreamingManager__;
  (this->MutableSystem).Object = (FSystem *)0x0;
  (this->MutableSystem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LastWorkingMemoryBytes = 0;
  (this->Streamer).Object = (FUnrealMutableModelBulkReader *)0x0;
  (this->Streamer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMutablePendingInstanceWork::FMutablePendingInstanceWork(&this->MutablePendingInstanceWork);
  this->bReplaceDiscardedWithReferenceMesh = false;
  this->bSupport16BitBoneIndex = false;
  (this->CurrentInstanceBeingUpdated).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->CurrentMutableOperation).Object = (FUpdateContextPrivate *)0x0;
  (this->CurrentMutableOperation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickWarningsDelegateHandle).Object = (FElement *)0x0;
  (this->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMutableTaskGraph::FMutableTaskGraph(&this->MutableTaskGraph);
  TVar3 = UE::Tasks::MakeCompletedTask<void>();
  (this->LastUpdateMutableTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->LastUpdateMutableTask).Pimpl.Reference = *(FTaskBase **)TVar3;
  *(undefined8 *)TVar3 = 0;
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  FLogBenchmarkUtil::FLogBenchmarkUtil(&this->LogBenchmarkUtil);
  this->NumSkeletalMeshes = 0;
  this->bAutoCompileCommandletEnabled = false;
  (this->PendingReleaseSkeletalMesh).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingReleaseSkeletalMesh).ArrayNum = 0;
  (this->PendingReleaseSkeletalMesh).ArrayMax = 0;
  (this->DefaultInstanceLODManagement).field0_0x0.DebugPtr =
       (UCustomizableInstanceLODManagementBase *)0x0;
  (this->CurrentInstanceLODManagement).field0_0x0.DebugPtr =
       (UCustomizableInstanceLODManagementBase *)0x0;
  MakeShared<FMutableStreamableManager,1>(&this->StreamableManager);
  this->NumLODUpdatesLastTick = 0;
  this->LogStartedUpdateUnmute = 0.0;
  this->LogStartedUpdateLast = 0.0;
  return this;
}

// UCustomizableObjectSystemPrivate @ 14abbd9f0

UCustomizableObjectSystemPrivate * __thiscall
UCustomizableObjectSystemPrivate::UCustomizableObjectSystemPrivate
          (UCustomizableObjectSystemPrivate *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  undefined8 *local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IStreamingManager__;
  (this->MutableSystem).Object = (FSystem *)0x0;
  (this->MutableSystem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LastWorkingMemoryBytes = 0;
  (this->Streamer).Object = (FUnrealMutableModelBulkReader *)0x0;
  (this->Streamer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMutablePendingInstanceWork::FMutablePendingInstanceWork(&this->MutablePendingInstanceWork);
  this->bReplaceDiscardedWithReferenceMesh = false;
  this->bSupport16BitBoneIndex = false;
  (this->CurrentInstanceBeingUpdated).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->CurrentMutableOperation).Object = (FUpdateContextPrivate *)0x0;
  (this->CurrentMutableOperation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TickWarningsDelegateHandle).Object = (FElement *)0x0;
  (this->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMutableTaskGraph::FMutableTaskGraph(&this->MutableTaskGraph);
  TVar3 = UE::Tasks::MakeCompletedTask<void>();
  (this->LastUpdateMutableTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->LastUpdateMutableTask).Pimpl.Reference = *(FTaskBase **)TVar3;
  *(undefined8 *)TVar3 = 0;
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  FLogBenchmarkUtil::FLogBenchmarkUtil(&this->LogBenchmarkUtil);
  this->NumSkeletalMeshes = 0;
  this->bAutoCompileCommandletEnabled = false;
  (this->PendingReleaseSkeletalMesh).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingReleaseSkeletalMesh).ArrayNum = 0;
  (this->PendingReleaseSkeletalMesh).ArrayMax = 0;
  (this->DefaultInstanceLODManagement).field0_0x0.DebugPtr =
       (UCustomizableInstanceLODManagementBase *)0x0;
  (this->CurrentInstanceLODManagement).field0_0x0.DebugPtr =
       (UCustomizableInstanceLODManagementBase *)0x0;
  MakeShared<FMutableStreamableManager,1>(&this->StreamableManager);
  this->NumLODUpdatesLastTick = 0;
  this->LogStartedUpdateUnmute = 0.0;
  this->LogStartedUpdateLast = 0.0;
  return this;
}

// ~UCustomizableObjectSystemPrivate @ 14abbf960

void __thiscall
UCustomizableObjectSystemPrivate::~UCustomizableObjectSystemPrivate
          (UCustomizableObjectSystemPrivate *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  FTaskBase *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IStreamingManager__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamableManager).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->PendingReleaseSkeletalMesh).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FLogBenchmarkUtil::~FLogBenchmarkUtil(&this->LogBenchmarkUtil);
  pFVar6 = (this->LastUpdateMutableTask).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  FMutableTaskGraph::~FMutableTaskGraph(&this->MutableTaskGraph);
  pTVar7 = (this->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar7->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentMutableOperation).SharedReferenceCount.ReferenceController);
  FMutablePendingInstanceWork::~FMutablePendingInstanceWork(&this->MutablePendingInstanceWork);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Streamer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MutableSystem).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddLevel @ 14abc3300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystemPrivate::AddLevel(UCustomizableObjectSystemPrivate *this,ULevel *param_1)

{
  return;
}

// CancelForcedResources @ 14abd2fc0

void __thiscall
UCustomizableObjectSystemPrivate::CancelForcedResources(UCustomizableObjectSystemPrivate *this)

{
  return;
}

// GetPrivateStaticClass @ 14abdfec0

UClass * __cdecl UCustomizableObjectSystemPrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectSystemPrivate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectSystemPrivate",
               &Z_Registration_Info_UClass_UCustomizableObjectSystemPrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectSystemPrivate,0x410,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectSystemPrivate>,
               InternalVTableHelperCtorCaller<UCustomizableObjectSystemPrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectSystemPrivate.InnerSingleton;
}

// NotifyLevelChange @ 14abeb0b0

void __thiscall
UCustomizableObjectSystemPrivate::NotifyLevelChange(UCustomizableObjectSystemPrivate *this)

{
  return;
}

// NotifyLevelOffset @ 14abeb0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystemPrivate::NotifyLevelOffset
          (UCustomizableObjectSystemPrivate *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// RemoveLevel @ 14abeef60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystemPrivate::RemoveLevel
          (UCustomizableObjectSystemPrivate *this,ULevel *param_1)

{
  return;
}

// SetDisregardWorldResourcesForFrames @ 14abf0b60

void __thiscall
UCustomizableObjectSystemPrivate::SetDisregardWorldResourcesForFrames
          (UCustomizableObjectSystemPrivate *this,int param_1)

{
  return;
}

// StaticRegisterNativesUCustomizableObjectSystemPrivate @ 14abf2080

void __cdecl
UCustomizableObjectSystemPrivate::StaticRegisterNativesUCustomizableObjectSystemPrivate(void)

{
  return;
}

// BlockTillAllRequestsFinished @ 14ac15c00

int __thiscall
UCustomizableObjectSystemPrivate::BlockTillAllRequestsFinished
          (UCustomizableObjectSystemPrivate *this,float param_1,bool param_2)

{
  UCustomizableObjectSystem *pUVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_48 [8];
  
  QueryPerformanceCounter(&local_res20);
  dVar4 = __real_4170000000000000;
  iVar6 = 0x7fffffff;
  dVar3 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_1 +
          __real_4170000000000000;
  if (param_1 == 0.0) {
    do {
      pUVar1 = *(UCustomizableObjectSystem **)&this[-1].LogStartedUpdateLast;
      if ((pUVar1 == (UCustomizableObjectSystem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Public",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                             ,0x3a3,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar6 = UCustomizableObjectSystem::TickInternal(pUVar1,true);
    } while (0 < iVar6);
  }
  else {
    do {
      QueryPerformanceCounter(local_48);
      if (dVar3 < (double)local_48[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) {
        return iVar6;
      }
      pUVar1 = *(UCustomizableObjectSystem **)&this[-1].LogStartedUpdateLast;
      if ((pUVar1 == (UCustomizableObjectSystem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Public",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                             ,0x3a3,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      iVar6 = UCustomizableObjectSystem::TickInternal(pUVar1,true);
    } while (0 < iVar6);
  }
  return 0;
}

// EnqueueUpdateSkeletalMesh @ 14ac19e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh
          (UCustomizableObjectSystemPrivate *this,TSharedRef<FUpdateContextPrivate,1> *param_1)

{
  TSharedPtr<FUpdateContextPrivate,1> *this_00;
  code *pcVar1;
  bool bVar2;
  EUpdateRequired EVar3;
  char cVar4;
  UObject *pUVar5;
  UCustomizableObjectInstance *this_01;
  UCustomizableInstancePrivate *pUVar6;
  TSharedRef<FUpdateContextPrivate,1> *pTVar7;
  FMutablePendingInstanceUpdate *pFVar8;
  FUpdateContextPrivate *pFVar9;
  FUpdateContextPrivate *pFVar10;
  FCustomizableObjectInstanceDescriptor *this_02;
  EUpdateResult EVar11;
  int iVar12;
  bool bVar13;
  FMutablePendingInstanceDiscard local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_f8;
  FString local_f0;
  FName local_e0;
  FName local_d8;
  UCustomizableObjectInstance *local_d0;
  UObject *local_c8;
  UCustomizableObjectInstance *local_c0;
  FString local_b8;
  FString local_a8;
  FMutablePendingInstanceUpdate local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1572,
               "Mutable_FCustomizableObjectSystemPrivate::EnqueueUpdateSkeletalMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0x624);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1572);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x625,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&(param_1->Object->Object).WeakPtr);
  this_01 = (UCustomizableObjectInstance *)FWeakObjectPtr::Get(&(param_1->Object->Instance).WeakPtr)
  ;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = local_e0;
  if (pUVar5 != (UObject *)0x0) {
    local_d8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    local_d8.Number = *(uint *)&pUVar5->field_0x1c;
  }
  if (this_01 != (UCustomizableObjectInstance *)0x0) {
    local_e0 = (FName)this_01->_padding_;
  }
  if (5 < (byte)LogMutable._0_1_) {
    ::FName::ToString(&local_e0,&local_78);
    ::FName::ToString(&local_d8,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = param_1->Object;
  if (pFVar9->bValid == false) {
LAB_14ac1a549:
    pFVar9->UpdateResult = Error;
  }
  else {
    if ((pUVar5 == (UObject *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x635,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_01 == (UCustomizableObjectInstance *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x636,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (bIsMutableEnabled == false) {
      param_1->Object->UpdateResult = Success;
      pUVar6 = UCustomizableObjectInstance::GetPrivate(this_01);
      UCustomizableInstancePrivate::SetReferenceSkeletalMesh(pUVar6);
    }
    else {
      pUVar6 = UCustomizableObjectInstance::GetPrivate(this_01);
      bVar2 = UCustomizableInstancePrivate::CanUpdateInstance(pUVar6);
      pFVar9 = param_1->Object;
      if (bVar2) {
        EVar3 = IsUpdateRequired(this,this_01,pFVar9->bOnlyUpdateIfNotGenerated,false,
                                 pFVar9->bIgnoreCloseDist);
        if (EVar3 == NoUpdate) {
          pFVar9 = param_1->Object;
          goto LAB_14ac1a549;
        }
        if (EVar3 == Update) {
          if (param_1->Object->bForce == false) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UCustomizableObjectInstance *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            local_f8.ObjectIndex = 0;
            local_f8.ObjectSerialNumber = 0;
            local_c0 = this_01;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UCustomizableObjectInstance *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_c0);
            pFVar8 = TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
                     ::Find(&(this->MutablePendingInstanceWork).PendingInstanceUpdates,
                            (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)
                            local_f8);
            if ((pFVar8 != (FMutablePendingInstanceUpdate *)0x0) &&
               (bVar2 = FDescriptorHash::IsSubset
                                  (&param_1->Object->CapturedDescriptorHash,
                                   &((pFVar8->Context).Object)->CapturedDescriptorHash), bVar2)) {
LAB_14ac1a2d0:
              param_1->Object->bOptimizedUpdate = true;
              param_1->Object->UpdateResult = ErrorOptimized;
              goto LAB_14ac1a550;
            }
            this_00 = &this->CurrentMutableOperation;
            if (this_00->Object != (FUpdateContextPrivate *)0x0) {
              pFVar9 = TSharedPtr<FUpdateContextPrivate,1>::operator->(this_00);
              bVar2 = TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr>::
                      UEOpEquals<UCustomizableObjectInstance,bool>(&pFVar9->Instance,this_01);
              if (bVar2) {
                pFVar9 = param_1->Object;
                pFVar10 = TSharedPtr<FUpdateContextPrivate,1>::operator->(this_00);
                bVar2 = FDescriptorHash::IsSubset
                                  (&pFVar9->CapturedDescriptorHash,&pFVar10->CapturedDescriptorHash)
                ;
                if (bVar2) goto LAB_14ac1a2d0;
              }
            }
            pFVar9 = param_1->Object;
            pUVar6 = UCustomizableObjectInstance::GetPrivate(this_01);
            bVar2 = FDescriptorHash::IsSubset
                              (&pFVar9->CapturedDescriptorHash,&pUVar6->CommittedDescriptorHash);
            if (bVar2) {
              if (this_00->Object != (FUpdateContextPrivate *)0x0) {
                pFVar9 = TSharedPtr<FUpdateContextPrivate,1>::operator->(this_00);
                bVar2 = TWeakObjectPtr<UCustomizableObjectInstance,FWeakObjectPtr>::
                        UEOpEquals<UCustomizableObjectInstance,bool>(&pFVar9->Instance,this_01);
                if (bVar2) goto LAB_14ac1a3ab;
              }
              bVar2 = TAutoConsoleVariable<bool>::GetValueOnGameThread
                                (&CVarEnableUpdateOptimization);
              if (bVar2) {
                param_1->Object->bOptimizedUpdate = true;
                UpdateSkeletalMesh(param_1);
                pFVar9 = param_1->Object;
                EVar11 = Success;
                if (*(int *)&(pFVar9->AttachedParentUpdated).Elements.field_0x8 ==
                    *(int *)&(pFVar9->AttachedParentUpdated).Elements.field_0x34) {
                  EVar11 = ErrorOptimized;
                }
                pFVar9->UpdateResult = EVar11;
                FinishUpdateGlobal(param_1);
              }
              else {
                param_1->Object->bOptimizedUpdate = false;
                UpdateSkeletalMesh(param_1);
                param_1->Object->UpdateResult = Success;
                FinishUpdateGlobal(param_1);
              }
            }
          }
LAB_14ac1a3ab:
          cVar4 = (**(code **)(*(longlong *)CVarDescriptorDebugPrint._8_8_ + 0xc0))();
          if (cVar4 != '\0') {
            ::FString::FString(&local_f0,L"DESCRIPTOR DEBUG PRINT\n");
            ::FString::AppendChars(&local_f0,"================================\n",0x21);
            FDescriptorHash::ToString(&param_1->Object->CapturedDescriptorHash,&local_68);
            ::FString::PrintfImpl(&local_b8,L"=== DESCRIPTOR HASH ===\n%s\n");
            iVar12 = local_b8.Data.ArrayNum + -1;
            if (local_b8.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            ::FString::AppendChars(&local_f0,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar12)
            ;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            pUVar6 = UCustomizableObjectInstance::GetPrivate(this_01);
            this_02 = UCustomizableInstancePrivate::GetDescriptor(pUVar6);
            FCustomizableObjectInstanceDescriptor::ToString(this_02,&local_58);
            ::FString::PrintfImpl(&local_a8,L"=== DESCRIPTOR ===\n%s");
            iVar12 = local_a8.Data.ArrayNum + -1;
            if (local_a8.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            ::FString::AppendChars(&local_f0,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar12)
            ;
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            ::FString::AppendChars(&local_f0,"================================",0x20);
            if (4 < (byte)LogMutable._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
          }
          local_98.Context.Object = param_1->Object;
          local_98.Context.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_98.Context.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.Context.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.Context.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FMutablePendingInstanceWork::AddUpdate(&this->MutablePendingInstanceWork,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.Context.SharedReferenceCount.ReferenceController);
          goto LAB_14ac1a558;
        }
        if (EVar3 != Discard) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unimplemented function called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                             ,0x6a2,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto LAB_14ac1a558;
        }
        bVar2 = IsInGameThread();
        if ((!bVar2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                               ,0x6a9,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((this_01 != (UCustomizableObjectInstance *)0x0) &&
           (bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01), bVar2)) {
          pUVar6 = UCustomizableObjectInstance::GetPrivate(this_01);
          if ((pUVar6 == (UCustomizableInstancePrivate *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCustomizableObjectInstance->GetPrivate() != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                 ,0x6ad,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_d0 = this_01;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_d0);
          local_c8 = FWeakObjectPtr::Get(&local_res18);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_c8);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_c8);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_c8);
          pTVar7 = &TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
                    ::Find(&(this->MutablePendingInstanceWork).PendingInstanceUpdates,
                           (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)
                           local_res20)->Context;
          if (pTVar7 != (TSharedRef<FUpdateContextPrivate,1> *)0x0) {
            pTVar7->Object->UpdateResult = ErrorDiscarded;
            FinishUpdateGlobal(pTVar7);
            FMutablePendingInstanceWork::RemoveUpdate
                      (&this->MutablePendingInstanceWork,&pTVar7->Object->Instance);
          }
          TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>
          ::Emplace<FMutablePendingInstanceDiscard_const_&>
                    (&(this->MutablePendingInstanceWork).PendingInstanceDiscards,&local_res10,
                     (bool *)&local_res18);
        }
        param_1->Object->UpdateResult = ErrorDiscarded;
      }
      else {
        pFVar9->UpdateResult = Error;
      }
    }
  }
LAB_14ac1a550:
  FinishUpdateGlobal(param_1);
LAB_14ac1a558:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetMipStreamingConfig @ 14ac1f0b0

void __thiscall
UCustomizableObjectSystemPrivate::GetMipStreamingConfig
          (UCustomizableObjectSystemPrivate *this,UCustomizableObjectInstance *param_1,bool param_2,
          bool *param_3,int *param_4)

{
  bool bVar1;
  UCustomizableObject *this_00;
  UCustomizableObjectPrivate *this_01;
  UModelResources *pUVar2;
  FMutableStateData *pFVar3;
  FStreamingManagerCollection *this_02;
  FString local_18;
  
  *param_3 = false;
  UCustomizableObjectInstance::GetCurrentState(param_1,&local_18);
  this_00 = UCustomizableObjectInstance::GetCustomizableObject(param_1);
  this_01 = UCustomizableObject::GetPrivate(this_00);
  pUVar2 = UCustomizableObjectPrivate::GetModelResources(this_01);
  if (pUVar2 != (UModelResources *)0x0) {
    pFVar3 = TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
             ::Find((TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                     *)&pUVar2->StateUIDataMap,&local_18);
    if (pFVar3 != (FMutableStateData *)0x0) {
      *param_3 = pFVar3->bDisableTextureStreaming;
    }
  }
  *param_4 = 0;
  this_02 = IStreamingManager::Get();
  bVar1 = FStreamingManagerCollection::IsTextureStreamingEnabled(this_02);
  if ((bVar1) && (param_2)) {
    if (*param_3 == false) {
      *param_4 = 0xff;
    }
  }
  else {
    *param_3 = true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumSkeletalMeshes @ 14ac20780

int __thiscall
UCustomizableObjectSystemPrivate::GetNumSkeletalMeshes(UCustomizableObjectSystemPrivate *this)

{
  return this->NumSkeletalMeshes;
}

// GetPublic @ 14ac246a0

UCustomizableObjectSystem * __thiscall
UCustomizableObjectSystemPrivate::GetPublic(UCustomizableObjectSystemPrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystem *pUVar3;
  
  pUVar3 = (UCustomizableObjectSystem *)this->_padding_;
  if (pUVar3 == (UCustomizableObjectSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x3a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableObjectSystem *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetUpdatePriority @ 14ac25980

EQueuePriorityType __thiscall
UCustomizableObjectSystemPrivate::GetUpdatePriority
          (UCustomizableObjectSystemPrivate *this,UCustomizableObjectInstance *param_1,bool param_2)

{
  ECOInstanceFlags EVar1;
  bool bVar2;
  UCustomizableInstancePrivate *pUVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar3 = UCustomizableObjectInstance::GetPrivate(param_1);
  EVar1 = pUVar3->InstanceFlagsPrivate;
  uVar4 = EVar1 >> 9;
  uVar5 = EVar1 >> 10;
  if (!param_2) {
    if ((pUVar3->SkeletalMeshStatus == NotGenerated) ||
       (bVar2 = UCustomizableObjectInstance::HasAnySkeletalMesh(param_1), !bVar2)) {
      return Med;
    }
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      return Med_Low;
    }
    if ((EVar1 >> 7 & 1) == 0) {
      if ((uVar4 & 1) == 0) {
        return Low;
      }
      if ((uVar5 & 1) == 0) {
        return Med;
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        return High;
      }
      if ((uVar5 & 1) == 0) {
        return High;
      }
    }
    if ((EVar1 >> 7 & 1) == 0) {
      return Low;
    }
  }
  return High;
}

// InitDiscardResourcesSkeletalMesh @ 14ac262d0

void __thiscall
UCustomizableObjectSystemPrivate::InitDiscardResourcesSkeletalMesh
          (UCustomizableObjectSystemPrivate *this,UCustomizableObjectInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableInstancePrivate *pUVar3;
  TSharedRef<FUpdateContextPrivate,1> *pTVar4;
  FMutablePendingInstanceDiscard local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UCustomizableObjectInstance *local_28;
  UObject *local_20;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x6a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (UCustomizableObjectInstance *)0x0) {
    bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1);
    if (bVar2) {
      pUVar3 = UCustomizableObjectInstance::GetPrivate(param_1);
      if (pUVar3 == (UCustomizableInstancePrivate *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCustomizableObjectInstance->GetPrivate() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x6ad,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_28 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
      local_20 = FWeakObjectPtr::Get(&local_res18);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_20);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_20);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
      pTVar4 = &TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
                ::Find(&(this->MutablePendingInstanceWork).PendingInstanceUpdates,
                       (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)
                       local_res20)->Context;
      if (pTVar4 != (TSharedRef<FUpdateContextPrivate,1> *)0x0) {
        pTVar4->Object->UpdateResult = ErrorDiscarded;
        FinishUpdateGlobal(pTVar4);
        FMutablePendingInstanceWork::RemoveUpdate
                  (&this->MutablePendingInstanceWork,&pTVar4->Object->Instance);
      }
      TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>::
      Emplace<FMutablePendingInstanceDiscard_const_&>
                (&(this->MutablePendingInstanceWork).PendingInstanceDiscards,&local_res10,
                 (bool *)&local_res18);
    }
  }
  return;
}

// InitInstanceIDRelease @ 14ac26450

void __thiscall
UCustomizableObjectSystemPrivate::InitInstanceIDRelease
          (UCustomizableObjectSystemPrivate *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint local_res8 [2];
  uint local_res10 [2];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x6b5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10[0] = param_1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>
            (&(this->MutablePendingInstanceWork).PendingIDsToRelease,local_res8,(bool *)local_res10)
  ;
  return;
}

// IsMutableAnimInfoDebuggingEnabled @ 14ac27ba0

bool __thiscall
UCustomizableObjectSystemPrivate::IsMutableAnimInfoDebuggingEnabled
          (UCustomizableObjectSystemPrivate *this)

{
  return false;
}

// IsReplaceDiscardedWithReferenceMeshEnabled @ 14ac27e70

bool __thiscall
UCustomizableObjectSystemPrivate::IsReplaceDiscardedWithReferenceMeshEnabled
          (UCustomizableObjectSystemPrivate *this)

{
  return this->bReplaceDiscardedWithReferenceMesh;
}

// IsUpdateRequired @ 14ac286b0

EUpdateRequired __thiscall
UCustomizableObjectSystemPrivate::IsUpdateRequired
          (UCustomizableObjectSystemPrivate *this,UCustomizableObjectInstance *param_1,bool param_2,
          bool param_3,bool param_4)

{
  float fVar1;
  ESkeletalMeshStatus EVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UCustomizableObjectSystem *this_00;
  UCustomizableInstancePrivate *pUVar9;
  UCustomizableInstancePrivate *this_01;
  UCustomizableInstanceLODManagementBase *pUVar10;
  UCustomizableObjectSystemPrivate *pUVar11;
  float fVar12;
  
  this_00 = UCustomizableObjectSystem::GetInstance();
  pUVar9 = UCustomizableObjectInstance::GetPrivate(param_1);
  this_01 = UCustomizableObjectInstance::GetPrivate(param_1);
  bVar4 = UCustomizableInstancePrivate::CanUpdateInstance(this_01);
  if (bVar4) {
    EVar2 = pUVar9->SkeletalMeshStatus;
    pUVar10 = UCustomizableObjectSystem::GetInstanceLODManagement(this_00);
    iVar6 = (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10);
    pUVar10 = UCustomizableObjectSystem::GetInstanceLODManagement(this_00);
    iVar7 = (**(code **)(*(longlong *)pUVar10 + 0x2c0))(pUVar10);
    pUVar10 = UCustomizableObjectSystem::GetInstanceLODManagement(this_00);
    iVar8 = (**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
    if (((EVar2 != NotGenerated) || (iVar6 < 1)) ||
       (pUVar11 = UCustomizableObjectSystem::GetPrivate(this_00),
       pUVar11->NumSkeletalMeshes <= iVar7 + iVar8 + iVar6)) {
      pUVar10 = UCustomizableObjectSystem::GetInstanceLODManagement(this_00);
      fVar12 = (float)(**(code **)(*(longlong *)pUVar10 + 0x2d0))(pUVar10);
      fVar1 = pUVar9->LastMinSquareDistFromComponentToPlayer;
      pUVar10 = UCustomizableObjectSystem::GetInstanceLODManagement(this_00);
      cVar5 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))();
      if (((cVar5 == '\0') || (fVar1 <= fVar12 * fVar12)) || (param_4)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((pUVar9->InstanceFlagsPrivate >> 8 & 1) != 0) || (bVar4)) {
        return -(EVar2 != NotGenerated) & Discard;
      }
      if ((param_3) && ((pUVar9->InstanceFlagsPrivate >> 9 & 1) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((param_2) && (EVar2 != NotGenerated)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (((!bVar4) || (!bVar3)) || (pUVar9->bAutomaticUpdateRequired != false)) {
        return Update;
      }
    }
  }
  return NoUpdate;
}

// IsUpdating @ 14ac28930

bool __thiscall
UCustomizableObjectSystemPrivate::IsUpdating
          (UCustomizableObjectSystemPrivate *this,UCustomizableObjectInstance *param_1)

{
  FUpdateContextPrivate *pFVar1;
  UCustomizableObjectInstance *pUVar2;
  FMutablePendingInstanceUpdate *pFVar3;
  FWeakObjectPtr local_res8;
  UCustomizableObjectInstance *local_res18 [2];
  
  pFVar1 = (this->CurrentMutableOperation).Object;
  if (pFVar1 != (FUpdateContextPrivate *)0x0) {
    pUVar2 = (UCustomizableObjectInstance *)FWeakObjectPtr::Get(&(pFVar1->Instance).WeakPtr);
    if (pUVar2 == param_1) {
      return true;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableObjectInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCustomizableObjectInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pFVar3 = TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::
           Find(&(this->MutablePendingInstanceWork).PendingInstanceUpdates,
                (TWeakObjectPtr<UCustomizableObjectInstance_const_,FWeakObjectPtr>)local_res8);
  return pFVar3 != (FMutablePendingInstanceUpdate *)0x0;
}

// IsUsingBenchmarkingSettings @ 14ac289e0

bool __cdecl UCustomizableObjectSystemPrivate::IsUsingBenchmarkingSettings(void)

{
  return bUseBenchmarkingSettings;
}

// OnMutableEnabledChanged @ 14ac2b240

void __cdecl UCustomizableObjectSystemPrivate::OnMutableEnabledChanged(IConsoleVariable *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UCustomizableObjectSystemPrivate *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UCustomizableObjectSystem *pUVar7;
  FStreamingManagerCollection *pFVar8;
  FTSTicker *this;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  IStreamingManager *pIVar12;
  TWeakPtr<FTSTicker::FElement,1> *pTVar13;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (SSystem != (UCustomizableObjectSystem *)0x0) {
    pUVar7 = UCustomizableObjectSystem::GetInstance();
    if (((pUVar7->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x32c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = (pUVar7->Private).field0_0x0.DebugPtr;
    if (bIsMutableEnabled != false) {
      pFVar8 = IStreamingManager::Get();
      pIVar12 = (IStreamingManager *)&pUVar3->_padding_;
      if (pUVar3 == (UCustomizableObjectSystemPrivate *)0x0) {
        pIVar12 = (IStreamingManager *)0x0;
      }
      FStreamingManagerCollection::RemoveStreamingManager(pFVar8,pIVar12);
      pFVar8 = IStreamingManager::Get();
      FStreamingManagerCollection::AddStreamingManager(pFVar8,pIVar12);
      pTVar13 = &pUVar3->TickWarningsDelegateHandle;
      if (((pTVar13->Object == (FElement *)0x0) ||
          (pTVar4 = (pUVar3->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController,
          pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
      {
        this = FTSTicker::GetCoreTicker();
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_28);
        local_10 = &local_50;
        puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar9[3] = TickWarnings;
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
        pTVar11 = FTSTicker::AddTicker
                            (this,&local_68,
                             (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,
                             __real_40a00000);
        if (pTVar13 != pTVar11) {
          pTVar13->Object = pTVar11->Object;
          pTVar11->Object = (FElement *)0x0;
          pTVar4 = (pUVar3->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController;
          (pUVar3->TickWarningsDelegateHandle).WeakReferenceCount.ReferenceController =
               (pTVar11->WeakReferenceCount).ReferenceController;
          (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
        }
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
    }
  }
  return;
}

// SetReplaceDiscardedWithReferenceMeshEnabled @ 14ac381f0

void __thiscall
UCustomizableObjectSystemPrivate::SetReplaceDiscardedWithReferenceMeshEnabled
          (UCustomizableObjectSystemPrivate *this,bool param_1)

{
  this->bReplaceDiscardedWithReferenceMesh = param_1;
  return;
}

// SetUsageOfBenchmarkingSettings @ 14ac391b0

void __cdecl UCustomizableObjectSystemPrivate::SetUsageOfBenchmarkingSettings(bool param_1)

{
  bUseBenchmarkingSettings = param_1;
  return;
}

// StartUpdateSkeletalMesh @ 14ac395b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh
          (UCustomizableObjectSystemPrivate *this,TSharedRef<FUpdateContextPrivate,1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  TSharedPtr<FUpdateContextPrivate,1> *pTVar2;
  float fVar3;
  atomic<unsigned_int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  FName FVar10;
  undefined ***pppuVar11;
  float fVar12;
  undefined1 auStackY_128 [32];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_e8;
  FTaskHandle local_d8;
  FUpdateContextPrivate *local_d0;
  FSharedReferencer<1> local_c8;
  LARGE_INTEGER local_c0;
  FName local_b8;
  FName local_b0;
  LARGE_INTEGER local_a8;
  FString local_a0;
  FString local_90;
  code *local_78 [2];
  undefined **local_68;
  FUpdateContextPrivate *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar2 = &this->CurrentMutableOperation;
  if ((pTVar2->Object != (FUpdateContextPrivate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentMutableOperation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x11c8,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->Object->bValid == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x11c9,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FWeakObjectPtr::IsValid(&(param_1->Object->Instance).WeakPtr);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->Instance.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x11ca,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FWeakObjectPtr::IsValid(&(param_1->Object->Object).WeakPtr);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->Object.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x11cb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&(param_1->Object->Object).WeakPtr);
  QueryPerformanceCounter(&local_c0);
  dVar7 = __real_4170000000000000;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  if ((double)this->LogStartedUpdateUnmute <
      (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) {
    if (pUVar9 != (UObject *)0x0) {
      FVar10.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      FVar10.Number = *(uint *)&pUVar9->field_0x1c;
    }
    local_b0 = FVar10;
    pUVar9 = FWeakObjectPtr::Get(&(param_1->Object->Instance).WeakPtr);
    local_b8.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
    local_b8.Number = *(uint *)&pUVar9->field_0x1c;
    if (4 < (byte)LogMutable._0_1_) {
      ::FName::ToString(&local_b8,&local_90);
      ::FName::ToString(&local_b0,&local_a0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    QueryPerformanceCounter(&local_a8);
    fVar12 = (float)((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7);
    fVar3 = this->LogStartedUpdateLast;
    this->LogStartedUpdateLast = fVar12;
    if (fVar12 - fVar3 < __real_3f000000) {
      if (4 < (byte)LogMutable._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
      }
      this->LogStartedUpdateUnmute = fVar12 + __real_40a00000;
    }
  }
  UpdateMemoryLimit(this);
  if ((pTVar2->Object != (FUpdateContextPrivate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentMutableOperation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x11e6,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_c8.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_d0 = param_1->Object;
  if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<FUpdateContextPrivate,1> *)&local_d0) {
    pTVar2->Object = local_d0;
    local_d0 = (FUpdateContextPrivate *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentMutableOperation).SharedReferenceCount,&local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  local_d8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->LastUpdateMutableTask).Pimpl.Reference;
  if (local_d8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_d8.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_d8.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_e8.AllocatorInstance.Data,&local_d8,1);
  local_60 = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh'::__l2::<lambda_1>,void>
                ::Call;
  local_58 = pTVar5;
  FMutableTaskGraph::AddGameThreadTask
            (&this->MutableTaskGraph,L"Task_Game_StartUpdate",
             (TUniqueFunction<void___cdecl(void)> *)local_78,true,&local_e8);
  if (local_78[0] != (code *)0x0) {
    pppuVar11 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar11 = local_50;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>
            ((FTaskHandle *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_d8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_d8.Pimpl.Reference + 0x30);
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_d8.Pimpl.Reference)(local_d8.Pimpl.Reference,1);
    }
  }
  return;
}

// UpdateMemoryLimit @ 14ac4aab0

void __thiscall
UCustomizableObjectSystemPrivate::UpdateMemoryLimit(UCustomizableObjectSystemPrivate *this)

{
  FSystem *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x776,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (**(code **)(*(longlong *)CVarWorkingMemoryKB._8_8_ + 200))();
  uVar5 = (longlong)iVar4 * 0x400;
  if (uVar5 != this->LastWorkingMemoryBytes) {
    pFVar1 = (this->MutableSystem).Object;
    this->LastWorkingMemoryBytes = uVar5;
    if (pFVar1 == (FSystem *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MutableSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0x77c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->MutableSystem).Object == (FSystem *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    UE::Mutable::Private::FSystem::SetWorkingMemoryBytes((this->MutableSystem).Object,uVar5);
  }
  return;
}

// UpdateResourceStreaming @ 14ac4ac60

void __thiscall
UCustomizableObjectSystemPrivate::UpdateResourceStreaming
          (UCustomizableObjectSystemPrivate *this,float param_1,bool param_2)

{
  UCustomizableObjectSystem *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = *(UCustomizableObjectSystem **)&this[-1].LogStartedUpdateLast;
  if (this_00 == (UCustomizableObjectSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0x3a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UCustomizableObjectSystem::TickInternal(this_00,false);
  return;
}

// UpdateStats @ 14ac4c700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCustomizableObjectSystemPrivate::UpdateStats(UCustomizableObjectSystemPrivate *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  UCustomizableInstancePrivate *pUVar6;
  longlong lVar7;
  TObjectIterator<UCustomizableObjectInstance> local_28;
  
  local_28.Index = 0xffffffff;
  this->NumSkeletalMeshes = 0;
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UCustomizableObjectInstance>::Advance(&local_28);
    lVar7 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) != 0) &&
       ((*(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8) + 8) >>
         0x1e & 1) == 0)) {
      lVar7 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar6 = UCustomizableObjectInstance::GetPrivate
                         (*(UCustomizableObjectInstance **)
                           (local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8));
      this->NumSkeletalMeshes =
           this->NumSkeletalMeshes +
           (*(int *)&(pUVar6->SkeletalMeshes).field_0x8 -
           *(int *)&(pUVar6->SkeletalMeshes).field_0x34);
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

