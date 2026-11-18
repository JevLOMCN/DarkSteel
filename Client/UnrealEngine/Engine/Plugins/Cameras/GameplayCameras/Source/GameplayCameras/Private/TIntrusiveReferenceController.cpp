// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 22

// DestroyObject @ 14d59de40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraNodeEvaluationResult,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraNodeEvaluationResult,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x9e8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x9c8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x250);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UE::Cameras::FCameraContextDataTable::~FCameraContextDataTable
            ((FCameraContextDataTable *)((this->ObjectStorage).Pad + 0xf8));
  UE::Cameras::FCameraVariableTable::~FCameraVariableTable
            ((FCameraVariableTable *)((this->ObjectStorage).Pad + 0x88));
  return;
}

// DestroyObject @ 14d59dea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FBlueprintCameraDirectorEvaluator,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::FBlueprintCameraDirectorEvaluator,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)((this->ObjectStorage).Pad + 0x40);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d59dedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d59def0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraModifierService,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraModifierService,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
  UE::Cameras::FCameraEvaluationService::~FCameraEvaluationService
            ((FCameraEvaluationService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d59df20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraParameterSetterService,1>
::DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraParameterSetterService,1> *this)

{
  UE::Cameras::FCameraParameterSetterService::~FCameraParameterSetterService
            ((FCameraParameterSetterService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d59df30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraRigCombinationRegistry,1>
::DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraRigCombinationRegistry,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d59df70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraShakeService,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraShakeService,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30));
  UE::Cameras::FCameraEvaluationService::~FCameraEvaluationService
            ((FCameraEvaluationService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d59dfa0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FOrientationInitializationService,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::FOrientationInitializationService,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x288);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  UE::Cameras::FCameraEvaluationService::~FCameraEvaluationService
            ((FCameraEvaluationService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d59e000

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FPriorityQueueCameraDirectorEvaluator,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::FPriorityQueueCameraDirectorEvaluator,1> *this
          )

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int>
            (*(FEntry **)((this->ObjectStorage).Pad + 0x38),
             *(int *)((this->ObjectStorage).Pad + 0x40));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d59e053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d59e070

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FSingleCameraDirectorEvaluator,1>
::DestroyObject(TIntrusiveReferenceController<UE::Cameras::FSingleCameraDirectorEvaluator,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d59e09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d59e0b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FStateTreeCameraDirectorEvaluator,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::FStateTreeCameraDirectorEvaluator,1> *this)

{
  UE::Cameras::FStateTreeCameraDirectorEvaluator::~FStateTreeCameraDirectorEvaluator
            ((FStateTreeCameraDirectorEvaluator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d613240

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TInitialValueProcessor<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>,1>
                *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInitialValueProcessor_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14d613270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TPreAnimatedPropertyStorageImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>,1>
                *this)

{
  UE::MovieScene::
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
  ::
  ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
            ((TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d613280

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14d6132a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14d6132c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FActorCameraEvaluationContext,1>
::DestroyObject(TIntrusiveReferenceController<UE::Cameras::FActorCameraEvaluationContext,1> *this)

{
  UE::Cameras::FCameraEvaluationContext::~FCameraEvaluationContext
            ((FCameraEvaluationContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d6132d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraEvaluationContext,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraEvaluationContext,1> *this)

{
  UE::Cameras::FCameraEvaluationContext::~FCameraEvaluationContext
            ((FCameraEvaluationContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d6132e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraSystemEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::FCameraSystemEvaluator,1> *this)

{
  UE::Cameras::FCameraSystemEvaluator::~FCameraSystemEvaluator
            ((FCameraSystemEvaluator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d6132f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>
              *this)

{
  UE::Cameras::FCameraEvaluationContext::~FCameraEvaluationContext
            ((FCameraEvaluationContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d613300

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FPlayerControlRotationEvaluationService,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::FPlayerControlRotationEvaluationService,1>
           *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x140);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x120);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UE::Cameras::FCameraEvaluationService::~FCameraEvaluationService
            ((FCameraEvaluationService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d65e3c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FDrivenControlRotationHelperService,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::FDrivenControlRotationHelperService,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x60);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x20));
  UE::Cameras::FCameraEvaluationService::~FCameraEvaluationService
            ((FCameraEvaluationService *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d65e410

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator,1>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d65e43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d65e450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::Test::FNamedObjectRegistry,1>::
DestroyObject(TIntrusiveReferenceController<UE::Cameras::Test::FNamedObjectRegistry,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

