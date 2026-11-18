// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 41

// StaticClass @ 146100bb0

UClass * __cdecl UMovieSceneEntitySystemLinker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntitySystemLinker",
               &Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntitySystemLinker,0x798,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntitySystemLinker>,
               InternalVTableHelperCtorCaller<UMovieSceneEntitySystemLinker>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton;
}

// UMovieSceneEntitySystemLinker @ 14611aed0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker
          (UMovieSceneEntitySystemLinker *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystemLinker__6B_;
  UE::MovieScene::FEntityManager::FEntityManager(&this->EntityManager);
  FMovieSceneEntitySystemGraph::FMovieSceneEntitySystemGraph(&this->SystemGraph);
  UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedStateExtension(&this->PreAnimatedState);
  (this->InstanceRegistry).Ptr = (FInstanceRegistry *)0x0;
  *(undefined8 *)&this->EntitySystemsByGlobalGraphID = 0;
  *(undefined8 *)&(this->EntitySystemsByGlobalGraphID).field_0x8 = 0;
  *(undefined8 *)&(this->EntitySystemsByGlobalGraphID).field_0x20 = 0;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x28 = 0;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x34 = 0;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->EntitySystemsRecyclingPool = 0;
  *(undefined8 *)&(this->EntitySystemsRecyclingPool).field_0x8 = 0;
  *(undefined8 *)&(this->EntitySystemsRecyclingPool).field_0x20 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x28 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x34 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntitySystemsRecyclingPool).field_0x40 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x48 = 0;
  (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->Runner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RunnerReentrancyFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->RunnerReentrancyFlags).NumBits = 0;
  (this->RunnerReentrancyFlags).MaxBits = 0x80;
  *(undefined8 *)&this->ExtensionsByID = 0;
  *(undefined8 *)&(this->ExtensionsByID).field_0x8 = 0;
  *(undefined8 *)&(this->ExtensionsByID).field_0x20 = 0;
  *(undefined4 *)&(this->ExtensionsByID).field_0x28 = 0;
  *(undefined4 *)&(this->ExtensionsByID).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtensionsByID).field_0x34 = 0;
  *(undefined4 *)&(this->ExtensionsByID).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Events).PostSpawnEvent = 0;
  *(undefined8 *)&(this->Events).PostSpawnEvent.field_0x8 = 0;
  *(undefined8 *)&(this->Events).PostSpawnEvent.field_0x10 = 0;
  *(undefined8 *)&(this->Events).TagGarbage = 0;
  *(undefined8 *)&(this->Events).TagGarbage.field_0x8 = 0;
  *(undefined8 *)&(this->Events).TagGarbage.field_0x10 = 0;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage = 0;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage.field_0x8 = 0;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage.field_0x10 = 0;
  *(undefined8 *)&(this->Events).AddReferencedObjects = 0;
  *(undefined8 *)&(this->Events).AddReferencedObjects.field_0x8 = 0;
  *(undefined8 *)&(this->Events).AddReferencedObjects.field_0x10 = 0;
  *(undefined8 *)&(this->Events).AbandonLinker = 0;
  *(undefined8 *)&(this->Events).AbandonLinker.field_0x8 = 0;
  *(undefined8 *)&(this->Events).AbandonLinker.field_0x10 = 0;
  (this->GlobalStateCaptureToken).Object = (bool *)0x0;
  (this->GlobalStateCaptureToken).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SystemFilter).SystemsAllowed.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  *(undefined8 *)&(this->Events).PostSpawnEvent.field_0x18 = 2;
  *(undefined8 *)&(this->Events).TagGarbage.field_0x18 = 2;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage.field_0x18 = 2;
  *(undefined8 *)&(this->Events).AddReferencedObjects.field_0x18 = 2;
  *(undefined8 *)&(this->Events).AbandonLinker.field_0x18 = 2;
  (this->SystemFilter).SystemsAllowed.NumBits = 0;
  (this->SystemFilter).SystemsAllowed.MaxBits = 0x80;
  (this->SystemFilter).SystemsDisallowed.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SystemFilter).SystemsDisallowed.NumBits = 0;
  (this->SystemFilter).SystemsDisallowed.MaxBits = 0x80;
  (this->SystemFilter).CategoriesDisallowed = None;
  (this->SystemFilter).CategoriesAllowed = All;
  return this;
}

// UMovieSceneEntitySystemLinker @ 14611b0f0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UMovieSceneEntitySystemLinker::UMovieSceneEntitySystemLinker
          (UMovieSceneEntitySystemLinker *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FString *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FInstanceRegistry *pFVar10;
  FInstanceRegistry *pFVar11;
  UMovieSceneEntitySystemLinker *pUVar12;
  FInstanceRegistry *pFVar13;
  FMovieSceneEntitySystemRunner *pFVar14;
  FName local_res8;
  UMovieSceneEntitySystemLinker *local_res18 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  FMovieSceneEntitySystemRunner *local_60;
  FSharedReferencer<1> local_58;
  FString local_50;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystemLinker__6B_;
  UE::MovieScene::FEntityManager::FEntityManager(&this->EntityManager);
  FMovieSceneEntitySystemGraph::FMovieSceneEntitySystemGraph(&this->SystemGraph);
  UE::MovieScene::FPreAnimatedStateExtension::FPreAnimatedStateExtension(&this->PreAnimatedState);
  pFVar13 = (FInstanceRegistry *)0x0;
  (this->InstanceRegistry).Ptr = (FInstanceRegistry *)0x0;
  *(undefined8 *)&this->EntitySystemsByGlobalGraphID = 0;
  *(undefined8 *)&(this->EntitySystemsByGlobalGraphID).field_0x8 = 0;
  *(undefined8 *)&(this->EntitySystemsByGlobalGraphID).field_0x20 = 0;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x28 = 0;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x34 = 0;
  *(undefined8 *)&this->EntitySystemsRecyclingPool = 0;
  *(undefined8 *)&(this->EntitySystemsRecyclingPool).field_0x8 = 0;
  *(undefined8 *)&(this->EntitySystemsRecyclingPool).field_0x20 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x28 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x34 = 0;
  *(undefined8 *)&(this->EntitySystemsRecyclingPool).field_0x40 = 0;
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x48 = 0;
  (this->Runner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->Runner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RunnerReentrancyFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->RunnerReentrancyFlags).NumBits = 0;
  (this->RunnerReentrancyFlags).MaxBits = 0x80;
  *(undefined8 *)&this->ExtensionsByID = 0;
  *(undefined8 *)&(this->ExtensionsByID).field_0x8 = 0;
  *(undefined8 *)&(this->ExtensionsByID).field_0x20 = 0;
  *(undefined4 *)&(this->ExtensionsByID).field_0x28 = 0;
  *(undefined4 *)&(this->ExtensionsByID).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtensionsByID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExtensionsByID).field_0x34 = 0;
  *(undefined8 *)&(this->Events).PostSpawnEvent = 0;
  *(undefined8 *)&(this->Events).PostSpawnEvent.field_0x8 = 0;
  *(undefined8 *)&(this->Events).PostSpawnEvent.field_0x10 = 0;
  *(undefined8 *)&(this->Events).PostSpawnEvent.field_0x18 = 2;
  *(undefined8 *)&(this->Events).TagGarbage = 0;
  *(undefined8 *)&(this->Events).TagGarbage.field_0x8 = 0;
  *(undefined8 *)&(this->Events).TagGarbage.field_0x10 = 0;
  *(undefined8 *)&(this->Events).TagGarbage.field_0x18 = 2;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage = 0;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage.field_0x8 = 0;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage.field_0x10 = 0;
  *(undefined8 *)&(this->Events).CleanTaggedGarbage.field_0x18 = 2;
  *(undefined8 *)&(this->Events).AddReferencedObjects = 0;
  *(undefined8 *)&(this->Events).AddReferencedObjects.field_0x8 = 0;
  *(undefined8 *)&(this->Events).AddReferencedObjects.field_0x10 = 0;
  *(undefined8 *)&(this->Events).AddReferencedObjects.field_0x18 = 2;
  *(undefined8 *)&(this->Events).AbandonLinker = 0;
  *(undefined8 *)&(this->Events).AbandonLinker.field_0x8 = 0;
  *(undefined8 *)&(this->Events).AbandonLinker.field_0x10 = 0;
  *(undefined8 *)&(this->Events).AbandonLinker.field_0x18 = 2;
  (this->GlobalStateCaptureToken).Object = (bool *)0x0;
  (this->GlobalStateCaptureToken).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SystemFilter).SystemsAllowed.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SystemFilter).SystemsAllowed.NumBits = 0;
  (this->SystemFilter).SystemsAllowed.MaxBits = 0x80;
  (this->SystemFilter).SystemsDisallowed.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SystemFilter).SystemsDisallowed.NumBits = 0;
  (this->SystemFilter).SystemsDisallowed.MaxBits = 0x80;
  (this->SystemFilter).CategoriesAllowed = All;
  (this->SystemFilter).CategoriesDisallowed = None;
  this->Role = Unknown;
  this->LastSystemLinkVersion = 0;
  this->LastSystemUnlinkVersion = 0;
  this->LastInstantiationVersion = 0;
  this->AutoLinkMode = Enabled;
  if ((this->_padding_ & 0x10) != 0) {
    return this;
  }
  UE::MovieScene::FPreAnimatedStateExtension::Initialize(&this->PreAnimatedState,this);
  pTVar9 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMovieSceneEntitySystemLinker>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar9
             ,(UMovieSceneEntitySystemLinker *)(local_res18 + 1),(pmf_2c9a9adc)this);
  pTVar9 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMovieSceneEntitySystemLinker>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar9
             ,(UMovieSceneEntitySystemLinker *)local_78,(pmf_2c9a9adc)this);
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_50);
  ::FString::ConcatFC((FString *)(local_78 + 8),&local_50,L"[Entity Manager]");
  pFVar3 = &(this->EntityManager).ManagerDebugName;
  if (pFVar3 != (FString *)(local_78 + 8)) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_78._8_8_;
    (this->EntityManager).ManagerDebugName.Data.ArrayNum = (int)local_68;
    (this->EntityManager).ManagerDebugName.Data.ArrayMax = local_68._4_4_;
    local_68 = 0;
    local_78._8_8_ = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_78._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  (this->EntityManager).ComponentRegistry = &UE::MovieScene::GComponentRegistry;
  pFVar10 = ::operator_new(0x98);
  pFVar11 = pFVar13;
  if (pFVar10 != (FInstanceRegistry *)0x0) {
    *(undefined8 *)&pFVar10->Instances = 0;
    *(undefined8 *)&(pFVar10->Instances).field_0x8 = 0;
    *(undefined8 *)&(pFVar10->Instances).field_0x20 = 0;
    pFVar10->Linker = this;
    *(undefined4 *)&(pFVar10->Instances).field_0x28 = 0;
    *(undefined4 *)&(pFVar10->Instances).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar10->Instances).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar10->Instances).field_0x34 = 0;
    pFVar10->InstanceSerialNumber = 0;
    *(undefined8 *)&(pFVar10->InvalidatedObjectBindings).Elements = 0;
    *(undefined8 *)&(pFVar10->InvalidatedObjectBindings).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar10->InvalidatedObjectBindings).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar10->InvalidatedObjectBindings).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar10->InvalidatedObjectBindings).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar10->InvalidatedObjectBindings).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar10->InvalidatedObjectBindings).Elements.field_0x34 = 0;
    (pFVar10->InvalidatedObjectBindings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar10->InvalidatedObjectBindings).HashSize = 0;
    pFVar11 = pFVar10;
  }
  pFVar10 = (this->InstanceRegistry).Ptr;
  if ((pFVar10 != pFVar11) &&
     ((this->InstanceRegistry).Ptr = pFVar11, pFVar10 != (FInstanceRegistry *)0x0)) {
    UE::MovieScene::FInstanceRegistry::~FInstanceRegistry(pFVar10);
    ::operator_delete(pFVar10,0x98);
  }
  pFVar11 = ::operator_new(0xa8);
  if (pFVar11 == (FInstanceRegistry *)0x0) {
    pFVar14 = (FMovieSceneEntitySystemRunner *)&DAT_00000010;
  }
  else {
    *(undefined4 *)&pFVar11->Instances = 1;
    *(undefined4 *)&(pFVar11->Instances).field_0x4 = 1;
    pFVar11->Linker =
         (UMovieSceneEntitySystemLinker *)
         &
         ___7__TIntrusiveReferenceController_VFMovieSceneEntitySystemRunner___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&(pFVar11->Instances).field_0x8 = 0;
    *(undefined8 *)&(pFVar11->Instances).field_0x10 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(undefined8 *)&(pFVar11->Instances).field_0x18 = 0;
    local_res18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&(pFVar11->Instances).field_0x18,(FObjectPtr)local_res18);
    pFVar14 = (FMovieSceneEntitySystemRunner *)&(pFVar11->Instances).field_0x8;
    *(undefined8 *)&(pFVar11->Instances).field_0x20 = 0;
    *(undefined8 *)&(pFVar11->Instances).field_0x28 = 0;
    *(undefined8 *)&(pFVar11->Instances).field_0x30 = 0;
    pFVar11->InstanceSerialNumber = 0;
    *(undefined2 *)&pFVar11->field_0x42 = 0;
    pFVar11->_padding_ = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements.field_0x10 = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements.field_0x18 = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements.field_0x20 = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements.field_0x28 = 0;
    *(undefined8 *)&(pFVar11->InvalidatedObjectBindings).Elements.field_0x30 = 0;
    (pFVar11->InvalidatedObjectBindings).Hash.InlineData[0] = '\x02';
    (pFVar11->InvalidatedObjectBindings).Hash.InlineData[1] = '\0';
    (pFVar11->InvalidatedObjectBindings).Hash.InlineData[2] = '\0';
    (pFVar11->InvalidatedObjectBindings).Hash.InlineData[3] = '\0';
    (pFVar11->InvalidatedObjectBindings).Hash._padding_ = 0;
    (pFVar11->InvalidatedObjectBindings).HashSize = 0x101;
    (pFVar11->InvalidatedObjectBindings).field_0x4c = 0;
    pFVar11[1].Linker = (UMovieSceneEntitySystemLinker *)0x0;
    *(undefined2 *)&pFVar11[1].Instances.field_0x1 = 0;
    pFVar13 = pFVar11;
    if (pFVar14 == (FMovieSceneEntitySystemRunner *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pUVar12 = (UMovieSceneEntitySystemLinker *)(*pcVar7)();
        return pUVar12;
      }
      goto LAB_14611b61b;
    }
  }
  if (((pFVar14->_padding_ == 0) || (pFVar14->_padding_ == 0)) ||
     (*(int *)(pFVar14->_padding_ + 8) < 1)) {
    if (pFVar13 != (FInstanceRegistry *)0x0) {
      LOCK();
      *(int *)&pFVar13->Instances = *(int *)&pFVar13->Instances + 1;
      UNLOCK();
    }
    pFVar14->_padding_ = (longlong)pFVar14;
    if (pFVar13 != (FInstanceRegistry *)pFVar14->_padding_) {
      if (pFVar13 != (FInstanceRegistry *)0x0) {
        LOCK();
        puVar1 = &(pFVar13->Instances).field_0x4;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)pFVar14->_padding_;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      pFVar14->_padding_ = (longlong)pFVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
  }
LAB_14611b61b:
  if (pFVar13 != (FInstanceRegistry *)0x0) {
    LOCK();
    *(int *)&pFVar13->Instances = *(int *)&pFVar13->Instances + 1;
    UNLOCK();
  }
  local_60 = pFVar14;
  local_58.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
  if (&this->Runner != (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)&local_60) {
    (this->Runner).Object = pFVar14;
    local_60 = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Runner).SharedReferenceCount,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  return this;
}

// ~UMovieSceneEntitySystemLinker @ 14611e700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::~UMovieSceneEntitySystemLinker(UMovieSceneEntitySystemLinker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<unsigned_int> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  FInstanceRegistry *this_00;
  
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystemLinker__6B_;
  FVar3 = (this->SystemFilter).SystemsDisallowed.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->SystemFilter).SystemsAllowed.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pTVar4 = (this->GlobalStateCaptureToken).WeakReferenceCount.ReferenceController;
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
  <unnamed-type-Events>::~<unnamed_type_Events>(&this->Events);
  TSparseArray<void_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<void_*,FDefaultSparseArrayAllocator>(&this->ExtensionsByID);
  FVar3 = (this->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Runner).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->EntitySystemsRecyclingPool).field_0x48 = 0;
  pvVar5 = *(void **)&(this->EntitySystemsRecyclingPool).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntitySystemsRecyclingPool);
  TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UMovieSceneEntitySystem_*,FDefaultSparseArrayAllocator>
            (&this->EntitySystemsByGlobalGraphID);
  this_00 = (this->InstanceRegistry).Ptr;
  if (this_00 != (FInstanceRegistry *)0x0) {
    UE::MovieScene::FInstanceRegistry::~FInstanceRegistry(this_00);
    ::operator_delete(this_00,0x98);
  }
  UE::MovieScene::FPreAnimatedStateExtension::~FPreAnimatedStateExtension(&this->PreAnimatedState);
  FMovieSceneEntitySystemGraph::~FMovieSceneEntitySystemGraph(&this->SystemGraph);
  UE::MovieScene::FEntityManager::~FEntityManager(&this->EntityManager);
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 146123500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneEntitySystemLinker::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FString *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FString local_68;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<UMovieSceneEntitySystemLinker>(&local_68);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = GetPrivateStaticClass();
  iVar8 = (int)pUVar6->_padding_;
  if ((iVar8 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
      &pUVar6->_padding_)) {
    UE::MovieScene::FEntityManager::AddReferencedObjects((FEntityManager *)(param_1 + 1),param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[0x2b].field_0x20,
               (FWriteAccessScope *)&local_38);
    *(int *)&param_1[0x2c].field_0x14 = *(int *)&param_1[0x2c].field_0x14 + 1;
    bVar3 = false;
    iVar8 = *(int *)&param_1[0x2c].field_0x8 + -1;
    if (-1 < iVar8) {
      lVar10 = (longlong)iVar8 << 4;
      bVar3 = false;
      do {
        if ((*(int *)&param_1[0x2c].field_0x8 <= iVar8) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x2c)) == 0) ||
            (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x2c)),
            plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0'))
        {
          bVar3 = true;
        }
        lVar10 = lVar10 + -0x10;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    *(int *)&param_1[0x2c].field_0x14 = *(int *)&param_1[0x2c].field_0x14 + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1[0x2b].field_0x20,
                 false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    FReferenceCollector::
    AddReferencedObjects<UClass,UMovieSceneEntitySystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>_>
              (param_2,(TMapBase<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>_>
                        *)&param_1[0x24].field_0x20,(UObject *)0x0,(FProperty *)0x0);
    return;
  }
  pFVar7 = GetTypeName<UMovieSceneEntitySystemLinker>(&local_58);
  pwVar9 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&local_48,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar11);
}

// AutoLinkRelevantSystems @ 146125320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::AutoLinkRelevantSystems(UMovieSceneEntitySystemLinker *this)

{
  if ((this->AutoLinkMode == Enabled) &&
     ((this->LastSystemLinkVersion == 0 ||
      (this->LastSystemLinkVersion < (this->EntityManager).StructureMutationSystemSerialNumber)))) {
    UMovieSceneEntitySystem::LinkRelevantSystems(this);
    this->LastSystemLinkVersion = (this->EntityManager).SystemSerialNumber;
  }
  return;
}

// AutoUnlinkIrrelevantSystems @ 146125370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::AutoUnlinkIrrelevantSystems(UMovieSceneEntitySystemLinker *this)

{
  if ((this->AutoLinkMode == Enabled) &&
     ((this->LastSystemUnlinkVersion == 0 ||
      (this->LastSystemUnlinkVersion < (this->EntityManager).StructureMutationSystemSerialNumber))))
  {
    FMovieSceneEntitySystemGraph::RemoveIrrelevantSystems(&this->SystemGraph,this);
    this->LastSystemUnlinkVersion = (this->EntityManager).SystemSerialNumber;
  }
  return;
}

// BeginDestroy @ 1461253c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystemLinker::BeginDestroy(UMovieSceneEntitySystemLinker *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  TMulticastDelegate<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>::
  Broadcast(&(this->Events).AbandonLinker,this);
  FMovieSceneEntitySystemGraph::Shutdown(&this->SystemGraph);
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CleanGarbage @ 146126190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystemLinker::CleanGarbage(UMovieSceneEntitySystemLinker *this)

{
  FMovieSceneEntitySystemGraph *this_00;
  ForElementType<unsigned_short> FVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  ERunnerFlushState EVar4;
  FMovieSceneEntitySystemRunner *pFVar5;
  code *pcVar6;
  FBuiltInComponentTypes *pFVar7;
  longlong *plVar8;
  bool bVar9;
  FComponentMask *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ForElementType<unsigned_short> FVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_498 [32];
  undefined1 local_468;
  undefined1 local_467 [3];
  FComponentTypeID local_464;
  FComponentTypeID local_462;
  FComponentTypeID local_460;
  ushort local_45e;
  FComponentTypeID local_45c [2];
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_458;
  undefined8 *local_448;
  int local_440;
  int local_43c;
  UMovieSceneEntitySystem *local_438;
  UMovieSceneEntitySystem *local_430;
  FBuiltInComponentTypes *local_428;
  <lambda_2> local_420;
  IMovieSceneEntityMutation local_418;
  ushort local_410;
  longlong *local_408;
  uint uStack_400;
  uint uStack_3fc;
  TBitArray<FDefaultBitArrayAllocator> *local_3f8;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  uint local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  longlong *local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d0;
  undefined8 uStack_3b0;
  undefined8 local_3a0;
  TStatIdData *pTStack_398;
  byte local_390;
  undefined7 uStack_38f;
  undefined4 uStack_388;
  uint uStack_384;
  initializer_list<UE::MovieScene::FComponentTypeID> local_378;
  initializer_list<UE::MovieScene::FComponentTypeID> local_368;
  initializer_list<UE::MovieScene::FComponentTypeID> local_358;
  TComponentTypeID<UObject_*> local_348;
  TComponentTypeID<UE::MovieScene::FMovieSceneEntityID> TStack_346;
  undefined4 uStack_344;
  undefined8 uStack_340;
  TStatIdData *pTStack_338;
  ulonglong uStack_330;
  undefined8 uStack_328;
  undefined4 local_304;
  FComponentTypeID local_300;
  ushort local_2fe;
  ushort local_2fc;
  FComponentTypeID local_2fa;
  undefined1 local_2f8 [32];
  uint *local_2d8;
  uint local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [32];
  void *local_288;
  undefined4 local_280;
  uint local_27c;
  undefined4 local_278;
  undefined4 local_274;
  ForElementType<FSetElementId> local_268;
  int local_260;
  FEntityComponentFilter local_258;
  FEntityComponentFilter local_1d8;
  undefined1 local_158 [8];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  UE::MovieScene::FPreAnimatedStateExtension::DiscardStaleObjectState(&this->PreAnimatedState);
  local_428 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar3 = (local_428->Tags).NeedsUnlink.Value;
  pFVar10 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&this->EntityManager);
  if (((uVar3 != 0xffff) && ((int)(uint)uVar3 < (pFVar10->Bits).NumBits)) &&
     ((*(uint *)(pFVar10->Bits).AllocatorInstance.InlineData[uVar3 >> 5].Pad >> (uVar3 & 0x1f) & 1)
      != 0)) {
    local_448 = (undefined8 *)local_2f8;
    this_00 = &this->SystemGraph;
    this->LastInstantiationVersion = 0;
    local_2f8._0_8_ = 0;
    local_2f8._8_8_ = 0;
    local_2d8 = (uint *)0x0;
    uVar16 = 0;
    local_2d0 = 0;
    local_2c4 = 0;
    local_2b8 = (void *)0x0;
    local_2b0 = 0;
    local_2cc = 0x80;
    local_2c8 = 0xffffffff;
    FMovieSceneEntitySystemGraph::UpdateCache(this_00);
    FVar14 = (this->SystemGraph).SpawnPhase.AllocatorInstance.SecondaryData;
    iVar13 = (this->SystemGraph).SpawnPhase.ArrayNum;
    if (FVar14 == (ForElementType<unsigned_short>)0x0) {
      FVar14 = (ForElementType<unsigned_short>)this_00;
    }
    if ((iVar13 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar1 = (ForElementType<unsigned_short>)((longlong)FVar14 + (longlong)iVar13 * 2);
    for (; FVar14 != FVar1; FVar14 = (ForElementType<unsigned_short>)((longlong)FVar14 + 2)) {
      local_438 = *(UMovieSceneEntitySystem **)
                   (*(longlong *)&(this->SystemGraph).Nodes.Array + 0x20 +
                   (ulonglong)*(ushort *)FVar14 * 0x28);
      UE::Core::Private::Function::
      TFunctionRefCaller<`UMovieSceneEntitySystemLinker::CleanGarbage'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
      ::Call(&local_448,&local_438);
    }
    FMovieSceneEntitySystemGraph::UpdateCache(this_00);
    FVar14 = (this->SystemGraph).InstantiationPhase.AllocatorInstance.SecondaryData;
    iVar13 = (this->SystemGraph).InstantiationPhase.ArrayNum;
    if (FVar14 == (ForElementType<unsigned_short>)0x0) {
      FVar14 = (ForElementType<unsigned_short>)&(this->SystemGraph).InstantiationPhase;
    }
    if ((iVar13 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar1 = (ForElementType<unsigned_short>)((longlong)FVar14 + (longlong)iVar13 * 2);
    uVar18 = local_2d0;
    for (; local_2d0 = uVar18, FVar14 != FVar1;
        FVar14 = (ForElementType<unsigned_short>)((longlong)FVar14 + 2)) {
      local_430 = *(UMovieSceneEntitySystem **)
                   (*(longlong *)&(this->SystemGraph).Nodes.Array + 0x20 +
                   (ulonglong)*(ushort *)FVar14 * 0x28);
      UE::Core::Private::Function::
      TFunctionRefCaller<`UMovieSceneEntitySystemLinker::CleanGarbage'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
      ::Call(&local_448,&local_430);
      uVar18 = local_2d0;
    }
    uStack_3fc = 1;
    local_3e8 = 0;
    uStack_3ec = local_3e8;
    if (uVar18 != 0) {
      puVar17 = (uint *)(local_2f8 + 0x10);
      if (local_2d8 != (uint *)0x0) {
        puVar17 = local_2d8;
      }
      uVar19 = *puVar17;
      local_3e8 = 0;
      uVar16 = 0;
      while (uVar19 == 0) {
        lVar11 = (longlong)(int)uVar16;
        local_3e8 = local_3e8 + 0x20;
        uVar16 = uVar16 + 1;
        uStack_3ec = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_146126424;
        uVar19 = puVar17[lVar11 + 1];
      }
      uStack_3fc = -uVar19 & uVar19;
      uVar12 = (ulonglong)uStack_3fc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_440 = (int)lVar11;
      uStack_3ec = (local_3e8 - 1) + local_440;
      if ((int)uVar18 < (int)uStack_3ec) {
        uStack_3ec = uVar18;
      }
    }
LAB_146126424:
    local_408 = (longlong *)local_2f8;
    local_3f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
    uVar19 = uVar18 & 0xffffffe0;
    iStack_3e0 = local_2f8._8_4_ - local_2c4;
    uStack_3f0 = 0xffffffff;
    TStack_3d0.CurrentBitIndex = uStack_3ec;
    TStack_3d0.UnvisitedBitMask = 0xffffffff;
    TStack_3d0._padding_ = CONCAT44(uStack_3fc,uVar16);
    iVar13 = (int)uVar18 >> 5;
    TStack_3d0._28_4_ = local_304;
    TStack_3d0.BaseBitIndex = local_3e8;
    uStack_3b0 = CONCAT44(uStack_3dc,iStack_3e0);
    uStack_400 = uVar16;
    local_3d8 = local_408;
    TStack_3d0.Array = local_3f8;
    if (((int)uVar18 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar18 != local_2d0) {
      puVar17 = (uint *)(local_2f8 + 0x10);
      if (local_2d8 != (uint *)0x0) {
        puVar17 = local_2d8;
      }
      uVar16 = -1 << ((byte)uVar18 & 0x1f) & puVar17[iVar13];
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar13;
        uVar19 = uVar19 + 0x20;
        iVar13 = iVar13 + 1;
        uVar18 = local_2d0;
        if ((int)((local_2d0 - 1) + ((int)(local_2d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_146126542;
        uVar16 = puVar17[lVar11 + 1];
      }
      uVar12 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_43c = (int)lVar11;
      uVar18 = (uVar19 - 1) + local_43c;
      if ((int)local_2d0 < (int)uVar18) {
        uVar18 = local_2d0;
      }
    }
LAB_146126542:
    while( true ) {
      plVar8 = local_3d8;
      if ((int)local_3d8[1] - *(int *)((longlong)local_3d8 + 0x34) != (int)uStack_3b0) {
        local_468 = 0;
        `TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_468);
      }
      if (((TStack_3d0.CurrentBitIndex == uVar18) &&
          (TStack_3d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10))) &&
         (plVar8 == (longlong *)local_2f8)) break;
      (**(code **)(**(longlong **)(*plVar8 + (longlong)TStack_3d0.CurrentBitIndex * 0x10) + 0x2e8))
                ();
      TStack_3d0.UnvisitedBitMask = TStack_3d0.UnvisitedBitMask & ~TStack_3d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d0);
    }
    TMulticastDelegate<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>::
    Broadcast(&(this->Events).CleanTaggedGarbage,this);
    pFVar7 = local_428;
    pTStack_398 = &TStatId::TStatId_NAME_None;
    local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_458.ArrayNum = 0;
    local_458.ArrayMax = 0;
    local_348 = local_428->BoundObject;
    TStack_346 = local_428->ParentEntity;
    local_300.Value = (local_428->Tags).NeedsUnlink.Value;
    local_3a0 = 0;
    uStack_384 = uStack_384 & 0xffffff00;
    local_2fe = (local_428->Tags).Ignored.Value;
    uStack_340 = 0;
    pTStack_338 = &TStatId::TStatId_NAME_None;
    local_158._2_2_ = TStack_346;
    local_158._0_2_ = local_348;
    local_158._4_4_ = uStack_344;
    local_2fc = (local_428->Tags).Finished.Value;
    local_130.AllMask.Bits.NumBits = 0;
    local_130.NoneMask.Bits.NumBits = 0;
    local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ComplexMasks.ArrayNum = 0;
    local_130.ComplexMasks.ArrayMax = 0;
    local_80 = 0;
    local_48 = 0;
    uStack_388 = 0x6ff;
    uStack_330 = CONCAT71(uStack_38f,local_390) & 0xffffffffffffffe0;
    uStack_328._4_4_ = uStack_384;
    uStack_328._0_4_ = AnyHiPriThreadHiPriTask;
    pwStack_150 = (wchar_t *)0x0;
    local_130.AllMask.Bits.MaxBits = 0x180;
    local_130.NoneMask.Bits.MaxBits = 0x180;
    local_148 = &TStatId::TStatId_NAME_None;
    local_7c = 0x180;
    local_44 = 0x180;
    local_390 = local_390 & 0xe0;
    uStack_140 = uStack_330;
    local_138 = uStack_328;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_158,&local_130);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
    local_378._First = &local_300;
    local_378._Last = &local_2fa;
    UE::MovieScene::FComponentMask::SetAll(&local_130.NoneMask,&local_378);
    local_420.UnresolvedEntities = &local_458;
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>_>
    ::Iterate_PerEntityImpl<_UMovieSceneEntitySystemLinker::CleanGarbage_::__l2::<lambda_2>_>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FMovieSceneEntityID>_>
                *)local_158,&this->EntityManager,&local_130,&local_420);
    if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
    }
    iVar13 = local_458.ArrayNum;
    uVar12 = (ulonglong)local_458.ArrayNum;
    pFVar2 = local_458.AllocatorInstance.Data + uVar12 * 2;
    FVar15.Data = local_458.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar13) {
        local_467[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_467);
      }
      if (FVar15.Data == pFVar2) break;
      UE::MovieScene::FEntityManager::AddComponent
                (&this->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar15.Data,
                 (FComponentTypeID)(pFVar7->Tags).HasUnresolvedBinding.Value);
      uVar12 = local_458._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 2;
    }
    local_410 = (pFVar7->Tags).NeedsLink.Value;
    local_418 = (IMovieSceneEntityMutation)&___7FRemoveSingleMutation_MovieScene_UE__6B_;
    local_460.Value = (pFVar7->Tags).NeedsLink.Value;
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_368._First = &local_460;
    local_368._Last = local_45c;
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_258.AllMask.Bits.NumBits = 0;
    local_258.AllMask.Bits.MaxBits = 0x180;
    local_258.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_258.NoneMask.Bits.NumBits = 0;
    local_258.NoneMask.Bits.MaxBits = 0x180;
    local_258.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_258.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_258.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_258.ComplexMasks.ArrayNum = 0;
    local_258.ComplexMasks.ArrayMax = 0;
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_258.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_45e = uVar3;
    UE::MovieScene::FComponentMask::SetAll(&local_258.AllMask,&local_368);
    UE::MovieScene::FEntityManager::MutateAll(&this->EntityManager,&local_258,&local_418,Mandatory);
    if (local_258.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ComplexMasks.AllocatorInstance.Data);
    }
    local_2a8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_358._First = &local_464;
    local_2a8._8_8_ = 0;
    local_358._Last = &local_462;
    local_288 = (void *)0x0;
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_280 = 0;
    local_27c = 0x80;
    local_278 = 0xffffffff;
    local_274 = 0;
    local_268 = (ForElementType<FSetElementId>)0x0;
    local_260 = 0;
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_1d8.AllMask.Bits.NumBits = 0;
    local_1d8.AllMask.Bits.MaxBits = 0x180;
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_1d8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.NumBits = 0;
    local_1d8.NoneMask.Bits.MaxBits = 0x180;
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_1d8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_1d8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_1d8.ComplexMasks.ArrayNum = 0;
    local_1d8.ComplexMasks.ArrayMax = 0;
    local_464.Value = uVar3;
    UE::MovieScene::FComponentMask::SetAll(&local_1d8.AllMask,&local_358);
    UE::MovieScene::FEntityManager::FreeEntities
              (&this->EntityManager,&local_1d8,
               (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                *)local_2a8);
    if (local_1d8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.ComplexMasks.AllocatorInstance.Data);
    }
    UE::MovieScene::FInstanceRegistry::CleanupLinkerEntities
              ((this->InstanceRegistry).Ptr,
               (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                *)local_2a8);
    if (((this->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->Runner).Object;
    EVar4 = pFVar5->FlushState;
    if (((EVar4 & (EventTriggers|Finalization|Evaluation|Instantiation)) != None) &&
       ((EVar4 & (Spawn|Import)) == None)) {
      pFVar5->FlushState = UE::MovieScene::FlushState::LoopEval & ~Import;
    }
    local_260 = 0;
    if (local_268 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_268);
    }
    iVar13 = SUB84(local_2a8._8_8_,4);
    local_2a8._8_8_ = local_2a8._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_2a8,0,(int *)(local_2a8 + 0xc));
    }
    local_278 = 0xffffffff;
    local_274 = 0;
    local_280 = 0;
    if (0x80 < local_27c) {
      local_27c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10),0);
    }
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
    if ((FScriptContainerElement *)local_2a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2a8._0_8_);
    }
    local_418 = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
    if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.AllocatorInstance.Data);
    }
    local_2b0 = 0;
    if (local_2b8 != (void *)0x0) {
      FMemory::Free(local_2b8);
    }
    TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2f8);
  }
  return;
}

// CleanupInvalidBoundObjects @ 146126c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::CleanupInvalidBoundObjects(UMovieSceneEntitySystemLinker *this)

{
  TagInvalidBoundObjects(this);
  TMulticastDelegate<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>::
  Broadcast(&(this->Events).TagGarbage,this);
  CleanGarbage(this);
  return;
}

// CreateLinker @ 14612a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl
UMovieSceneEntitySystemLinker::CreateLinker(UObject *param_1,EEntitySystemLinkerRole param_2)

{
  UClass *pUVar1;
  UMovieSceneEntitySystemLinker *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)GetTransientPackage();
  }
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMovieSceneEntitySystemLinker *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ == 0) {
    pUVar2->Role = param_2;
  }
  else {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
    pUVar2->Role = param_2;
  }
  return pUVar2;
}

// DestroyInstanceImmediately @ 14612c310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::DestroyInstanceImmediately
          (UMovieSceneEntitySystemLinker *this,FRootInstanceHandle param_1)

{
  ulong64 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = &(this->EntityManager).SystemSerialNumber;
  *puVar1 = *puVar1 + 1;
  if ((this->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::MovieScene::FInstanceRegistry::DestroyInstance
            ((this->InstanceRegistry).Ptr,(FInstanceHandle)param_1);
  CleanGarbage(this);
  ResetRunner(this);
  return;
}

// EndEvaluation @ 14612f7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystemLinker::EndEvaluation(UMovieSceneEntitySystemLinker *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  
  iVar2 = (this->RunnerReentrancyFlags).NumBits;
  uVar1 = iVar2 - 1;
  if (((int)uVar1 < 0) || (iVar2 <= (int)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5 = (this->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->RunnerReentrancyFlags;
  }
  if ((*(uint *)((longlong)FVar5 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (uVar1 & 0x1f) & 1) != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1595841733583699618>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0x15e,"RunnerReentrancyFlags[LastIndex] == false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->RunnerReentrancyFlags,uVar1,1);
  return;
}

// FindOrCreateLinker @ 146131aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __cdecl
UMovieSceneEntitySystemLinker::FindOrCreateLinker
          (UObject *param_1,EEntitySystemLinkerRole param_2,wchar_t *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  FName *pFVar8;
  longlong *plVar9;
  undefined1 auStackY_108 [32];
  undefined4 uStack_cc;
  FName local_c8 [2];
  TStringView<wchar_t> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)GetTransientPackage();
  }
  iVar4 = 0;
  if (param_3 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_3);
    iVar4 = (int)sVar5;
  }
  pUVar6 = StaticClass();
  local_b8._12_4_ = uStack_cc;
  local_b8.Size = iVar4;
  local_b8.DataPtr = param_3;
  pUVar7 = (UMovieSceneEntitySystemLinker *)StaticFindObject(pUVar6,param_1,&local_b8,None);
  if (pUVar7 == (UMovieSceneEntitySystemLinker *)0x0) {
    pFVar8 = ::FName::FName(local_c8,param_3);
    FVar1 = *pFVar8;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar6 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = param_1;
    local_a8._16_8_ = FVar1;
    pUVar7 = (UMovieSceneEntitySystemLinker *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar9 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    pUVar7->Role = param_2;
  }
  if (pUVar7->Role != param_2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1595841733583699760>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0xd0,"Existing->Role == LinkerRole");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UMovieSceneEntitySystemLinker *)(*pcVar2)();
      return pUVar7;
    }
  }
  return pUVar7;
}

// FindSystem @ 146132100

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
UMovieSceneEntitySystemLinker::FindSystem
          (UMovieSceneEntitySystemLinker *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UMovieSceneEntitySystem *pUVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar3 == 0) {
    return (UMovieSceneEntitySystem *)0x0;
  }
  pUVar7 = UMovieSceneEntitySystem::StaticClass();
  if (pUVar7 == (UClass *)0x0) {
    return (UMovieSceneEntitySystem *)0x0;
  }
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar7->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return (UMovieSceneEntitySystem *)0x0;
  }
  pUVar7 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar7 == (UClass *)0x0) {
    return (UMovieSceneEntitySystem *)0x0;
  }
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar9 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar9 != (UObject *)0x0) {
    pUVar7 = UMovieSceneEntitySystem::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_1461321a6;
  }
  pUVar9 = (UObject *)0x0;
LAB_1461321a6:
  if (pUVar9 != (UObject *)0x0) {
    uVar1 = *(ushort *)&pUVar9[1].field_0xe;
    if ((int)(uint)uVar1 < *(int *)&(this->EntitySystemsByGlobalGraphID).field_0x28) {
      if ((*(int *)&(this->EntitySystemsByGlobalGraphID).field_0x28 <= (int)(uint)uVar1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UMovieSceneEntitySystem *)(*pcVar5)();
        return pUVar8;
      }
      puVar4 = *(undefined1 **)&(this->EntitySystemsByGlobalGraphID).field_0x20;
      puVar10 = &(this->EntitySystemsByGlobalGraphID).field_0x10;
      if (puVar4 != (undefined1 *)0x0) {
        puVar10 = puVar4;
      }
      if ((*(uint *)(puVar10 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        return *(UMovieSceneEntitySystem **)
                (*(longlong *)&this->EntitySystemsByGlobalGraphID + (ulonglong)uVar1 * 8);
      }
    }
  }
  return (UMovieSceneEntitySystem *)0x0;
}

// GetComponents @ 14613a600

FComponentRegistry * __cdecl UMovieSceneEntitySystemLinker::GetComponents(void)

{
  return &UE::MovieScene::GComponentRegistry;
}

// GetInstanceRegistry @ 14613b900

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceRegistry * __thiscall
UMovieSceneEntitySystemLinker::GetInstanceRegistry(UMovieSceneEntitySystemLinker *this)

{
  code *pcVar1;
  bool bVar2;
  FInstanceRegistry *pFVar3;
  
  if ((this->InstanceRegistry).Ptr != (FInstanceRegistry *)0x0) {
    return (this->InstanceRegistry).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InstanceRegistry.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                     ,0x96,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstanceRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (this->InstanceRegistry).Ptr;
}

// GetPrivateStaticClass @ 14613c2d0

UClass * __cdecl UMovieSceneEntitySystemLinker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntitySystemLinker",
               &Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntitySystemLinker,0x798,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntitySystemLinker>,
               InternalVTableHelperCtorCaller<UMovieSceneEntitySystemLinker>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.InnerSingleton;
}

// GetRunner @ 14613caa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FMovieSceneEntitySystemRunner,1> * __thiscall
UMovieSceneEntitySystemLinker::GetRunner
          (UMovieSceneEntitySystemLinker *this,
          TSharedRef<FMovieSceneEntitySystemRunner,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar4;
  
  if ((this->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMovieSceneEntitySystemRunner,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (this->Runner).Object;
  pTVar1 = (this->Runner).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMovieSceneEntitySystemRunner *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMovieSceneEntitySystemRunner,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetWorld @ 14613d0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UMovieSceneEntitySystemLinker::GetWorld(UMovieSceneEntitySystemLinker *this)

{
  bool bVar1;
  UWorld *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakWorld).WeakPtr);
  if (bVar1) {
    pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->WeakWorld).WeakPtr);
    return pUVar2;
  }
  pUVar2 = UObject::GetWorld((UObject *)this);
  return pUVar2;
}

// HandlePostGarbageCollection @ 14613d3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::HandlePostGarbageCollection(UMovieSceneEntitySystemLinker *this)

{
  ulong64 *puVar1;
  FMovieSceneEntitySystemGraph *this_00;
  ForElementType<unsigned_short> FVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  ForElementType<unsigned_short> FVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined8 *local_130;
  int local_128;
  UMovieSceneEntitySystem *local_120;
  UMovieSceneEntitySystem *local_118;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &(this->EntityManager).SystemSerialNumber;
  *puVar1 = *puVar1 + 1;
  UE::MovieScene::FInstanceRegistry::TagGarbage((this->InstanceRegistry).Ptr);
  TagInvalidBoundObjects(this);
  TMulticastDelegate<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>::
  Broadcast(&(this->Events).TagGarbage,this);
  local_5c = 0x80;
  local_130 = (undefined8 *)local_88;
  local_88._0_8_ = 0;
  this_00 = &this->SystemGraph;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar11 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FMovieSceneEntitySystemGraph::UpdateCache(this_00);
  FVar9 = (this->SystemGraph).SpawnPhase.AllocatorInstance.SecondaryData;
  iVar8 = (this->SystemGraph).SpawnPhase.ArrayNum;
  if (FVar9 == (ForElementType<unsigned_short>)0x0) {
    FVar9 = (ForElementType<unsigned_short>)this_00;
  }
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (ForElementType<unsigned_short>)((longlong)FVar9 + (longlong)iVar8 * 2);
  for (; FVar9 != FVar2; FVar9 = (ForElementType<unsigned_short>)((longlong)FVar9 + 2)) {
    local_120 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)&(this->SystemGraph).Nodes.Array + 0x20 +
                 (ulonglong)*(ushort *)FVar9 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneEntitySystemLinker::HandlePostGarbageCollection'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_130,&local_120);
  }
  FMovieSceneEntitySystemGraph::UpdateCache(this_00);
  FVar9 = (this->SystemGraph).InstantiationPhase.AllocatorInstance.SecondaryData;
  iVar8 = (this->SystemGraph).InstantiationPhase.ArrayNum;
  if (FVar9 == (ForElementType<unsigned_short>)0x0) {
    FVar9 = (ForElementType<unsigned_short>)&(this->SystemGraph).InstantiationPhase;
  }
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (ForElementType<unsigned_short>)((longlong)FVar9 + (longlong)iVar8 * 2);
  uVar10 = local_60;
  for (; local_60 = uVar10, FVar9 != FVar2;
      FVar9 = (ForElementType<unsigned_short>)((longlong)FVar9 + 2)) {
    local_118 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)&(this->SystemGraph).Nodes.Array + 0x20 +
                 (ulonglong)*(ushort *)FVar9 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneEntitySystemLinker::HandlePostGarbageCollection'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_130,&local_118);
    uVar10 = local_60;
  }
  uStack_104 = 1;
  local_f0 = 0;
  uStack_f4 = local_f0;
  if (uVar10 != 0) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar13 = *puVar12;
    local_f0 = 0;
    uVar11 = 0;
    while (uVar13 == 0) {
      lVar7 = (longlong)(int)uVar11;
      local_f0 = local_f0 + 0x20;
      uVar11 = uVar11 + 1;
      uStack_f4 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_14613d601;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_104 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_128 = (int)lVar7;
    uStack_f4 = (local_f0 - 1) + local_128;
    if ((int)uVar10 < (int)uStack_f4) {
      uStack_f4 = uVar10;
    }
  }
LAB_14613d601:
  local_110 = (longlong *)local_88;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_e8 = local_88._8_4_ - local_54;
  uVar13 = uVar10 & 0xffffffe0;
  uStack_f8 = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_104,uVar11);
  iVar8 = (int)uVar10 >> 5;
  TStack_d8._28_4_ = local_94;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  uStack_108 = uVar11;
  local_e0 = local_110;
  TStack_d8.Array = local_100;
  if (((int)uVar10 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar10 != local_60) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar11 = -1 << ((byte)uVar10 & 0x1f) & puVar12[iVar8];
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar8;
      uVar13 = uVar13 + 0x20;
      iVar8 = iVar8 + 1;
      uVar10 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_14613d710;
      uVar11 = puVar12[lVar7 + 1];
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar13;
    if ((int)local_60 < (int)uVar10) {
      uVar10 = local_60;
    }
  }
LAB_14613d710:
  while( true ) {
    plVar5 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_d8.CurrentBitIndex == uVar10) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) break;
    (**(code **)(**(longlong **)(*plVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x10) + 0x2e0))();
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  CleanGarbage(this);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UMovieSceneEntitySystem_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// HandlePreGarbageCollection @ 14613d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::HandlePreGarbageCollection(UMovieSceneEntitySystemLinker *this)

{
  return;
}

// HasLinkedSystem @ 14613dcb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEntitySystemLinker::HasLinkedSystem(UMovieSceneEntitySystemLinker *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((int)(uint)param_1 < *(int *)&(this->EntitySystemsByGlobalGraphID).field_0x28) {
    if (*(int *)&(this->EntitySystemsByGlobalGraphID).field_0x28 <= (int)(uint)param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->EntitySystemsByGlobalGraphID).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EntitySystemsByGlobalGraphID).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// HasStructureChangedSinceLastRun @ 14613dec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEntitySystemLinker::HasStructureChangedSinceLastRun(UMovieSceneEntitySystemLinker *this)

{
  if ((this->LastInstantiationVersion != 0) &&
     ((this->EntityManager).StructureMutationSystemSerialNumber <= this->LastInstantiationVersion))
  {
    return false;
  }
  return true;
}

// InvalidateObjectBinding @ 146140b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::InvalidateObjectBinding
          (UMovieSceneEntitySystemLinker *this,FGuid *param_1,FInstanceHandle param_2)

{
  bool bVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  FInstanceHandle local_18;
  
  bVar1 = UE::MovieScene::FInstanceRegistry::IsHandleValid((this->InstanceRegistry).Ptr,param_2);
  if (bVar1) {
    local_28._0_4_ = param_1->A;
    local_28._4_4_ = param_1->B;
    uStack_20._0_4_ = param_1->C;
    uStack_20._4_4_ = param_1->D;
    local_18 = param_2;
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::Emplace<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>
              (&((this->InstanceRegistry).Ptr)->InvalidatedObjectBindings,
               (TTuple<FGuid,UE::MovieScene::FInstanceHandle> *)&stack0x00000008,(bool *)&local_28);
  }
  return;
}

// LinkRelevantSystems @ 1461424f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::LinkRelevantSystems(UMovieSceneEntitySystemLinker *this)

{
  if ((this->LastSystemLinkVersion == 0) ||
     (this->LastSystemLinkVersion < (this->EntityManager).StructureMutationSystemSerialNumber)) {
    UMovieSceneEntitySystem::LinkRelevantSystems(this);
    this->LastSystemLinkVersion = (this->EntityManager).SystemSerialNumber;
  }
  return;
}

// LinkSystem @ 146142530

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystem
          (UMovieSceneEntitySystemLinker *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  UMovieSceneEntitySystem *pUVar1;
  UObject *local_res10 [3];
  
  local_res10[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  pUVar1 = FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)local_res10);
  if (pUVar1 == (UMovieSceneEntitySystem *)0x0) {
    local_res10[0] = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    pUVar1 = LinkSystemImpl(this,(TSubclassOf<UMovieSceneEntitySystem>)local_res10);
  }
  return pUVar1;
}

// LinkSystemIfAllowed @ 1461425b0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystemIfAllowed
          (UMovieSceneEntitySystemLinker *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  bool bVar1;
  UMovieSceneEntitySystem *pUVar2;
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0] = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0].DebugPtr);
  }
  pUVar2 = FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)local_res10);
  if (pUVar2 == (UMovieSceneEntitySystem *)0x0) {
    local_res10[0] = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10[0].DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0].DebugPtr);
    }
    pUVar2 = TSubclassOf<UMovieSceneEntitySystem>::GetDefaultObject
                       ((TSubclassOf<UMovieSceneEntitySystem> *)&local_res10[0].ObjectPtr);
    if (pUVar2 != (UMovieSceneEntitySystem *)0x0) {
      bVar1 = UE::MovieScene::FSystemFilter::CheckSystem(&this->SystemFilter,pUVar2);
      if (!bVar1) {
        return (UMovieSceneEntitySystem *)0x0;
      }
    }
    local_res10[0] = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10[0].DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0].DebugPtr);
    }
    pUVar2 = LinkSystemImpl(this,(TSubclassOf<UMovieSceneEntitySystem>)local_res10);
  }
  return pUVar2;
}

// LinkSystemImpl @ 146142670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystemImpl
          (UMovieSceneEntitySystemLinker *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UMovieSceneEntitySystem *pUVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  longlong *plVar10;
  TObjectPtr<UClass_const_>_u_0 TVar11;
  TObjectPtr<UClass_const_>_u_0 TVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  TObjectPtr<UClass_const_>_u_0 local_f0;
  TObjectPtr<UClass_const_>_u_0 local_e8;
  FName local_e0;
  FString local_d8;
  FSparseArrayAllocationInfo local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)param_1.Class.field0_0x0;
  TVar12.DebugPtr = (UClass *)0x0;
  TVar11.DebugPtr = TVar12.DebugPtr;
  if ((lVar1 != 0) && (pUVar6 = UMovieSceneEntitySystem::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TVar11 = *(TObjectPtr<UClass_const_>_u_0 *)param_1.Class.field0_0x0;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
  }
  local_f0 = TVar11;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar11.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UClass *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
    }
  }
  uVar9 = ((uint)((ulonglong)TVar11.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar11.DebugPtr >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  iVar5 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                    ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
                      *)&this->EntitySystemsRecyclingPool,uVar9 >> 0x10 ^ uVar9,
                     (TObjectPtr<UClass_const_> *)&local_f0.ObjectPtr);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this->EntitySystemsRecyclingPool + (longlong)iVar5 * 0x18;
    TVar11.DebugPtr = (UClass *)(lVar1 + 8);
    if (lVar1 == 0) {
      TVar11.DebugPtr = TVar12.DebugPtr;
    }
    if (TVar11.DebugPtr != (UClass *)0x0) {
      pUVar7 = (UMovieSceneEntitySystem *)(TVar11.DebugPtr)->_padding_;
      if ((pUVar7 == (UMovieSceneEntitySystem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewSystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                             ,0x221,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UMovieSceneEntitySystem *)(*pcVar3)();
        return pUVar7;
      }
      lVar1 = *(longlong *)param_1.Class.field0_0x0;
      TVar11.DebugPtr = TVar12.DebugPtr;
      if ((lVar1 != 0) && (pUVar6 = UMovieSceneEntitySystem::StaticClass(), pUVar6 != (UClass *)0x0)
         ) {
        iVar5 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar1 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          TVar11 = *(TObjectPtr<UClass_const_>_u_0 *)param_1.Class.field0_0x0;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UClass *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
      }
      local_e8 = TVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UClass *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
      }
      if (*(int *)&(this->EntitySystemsRecyclingPool).field_0x8 !=
          *(int *)&(this->EntitySystemsRecyclingPool).field_0x34) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar11.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
        }
        uVar9 = ((uint)((ulonglong)TVar11.DebugPtr >> 0x14) & 0xffff ^
                (uint)((ulonglong)TVar11.DebugPtr >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectPtr<UClass_const_>_>
                  ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
                    *)&this->EntitySystemsRecyclingPool,uVar9 >> 0x10 ^ uVar9,
                   (TObjectPtr<UClass_const_> *)&local_e8.ObjectPtr);
      }
      if (5 < (byte)LogMovieSceneECS._0_1_) {
        lVar1 = *(longlong *)param_1.Class.field0_0x0;
        if ((lVar1 != 0) &&
           (pUVar6 = UMovieSceneEntitySystem::StaticClass(), pUVar6 != (UClass *)0x0)) {
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)(lVar1 + 0x38) < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            TVar12 = *(TObjectPtr<UClass_const_>_u_0 *)param_1.Class.field0_0x0;
          }
        }
        local_e0 = (FName)(TVar12.DebugPtr)->_padding_;
        ::FName::ToString(&local_e0,&local_d8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1461429f5;
    }
  }
  lVar1 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar1 != 0) && (pUVar6 = UMovieSceneEntitySystem::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TVar12 = *(TObjectPtr<UClass_const_>_u_0 *)param_1.Class.field0_0x0;
    }
  }
  FVar2 = (FName)(TVar12.DebugPtr)->_padding_;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UMovieSceneEntitySystem::StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,TVar12.DebugPtr);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,TVar12.DebugPtr);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  local_b8._16_8_ = FVar2;
  pUVar7 = (UMovieSceneEntitySystem *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_1461429f5:
  bVar4 = UE::MovieScene::FSystemFilter::CheckSystem(&this->SystemFilter,pUVar7);
  if (!bVar4) {
    local_f8[0] = bVar4;
    `UMovieSceneEntitySystemLinker::LinkSystemImpl'::__l2::<lambda_1>::operator()(local_f8);
  }
  FMovieSceneEntitySystemGraph::AddSystem(&this->SystemGraph,pUVar7);
  if ((pUVar7->GraphID == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphID != TNumericLimits<uint16>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                         ,0x311,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UMovieSceneEntitySystem *)(*pcVar3)();
    return pUVar7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar7->Linker).field0_0x0.DebugPtr = this;
  pFVar8 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                      &this->EntitySystemsByGlobalGraphID,&local_c8,
                      (uint)pUVar7->GlobalDependencyGraphID);
  if (pFVar8->Pointer != (undefined8 *)0x0) {
    *(UMovieSceneEntitySystem **)pFVar8->Pointer = pUVar7;
  }
  (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7);
  return pUVar7;
}

// OnObjectsReplaced @ 146145c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::OnObjectsReplaced
          (UMovieSceneEntitySystemLinker *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  UE::MovieScene::FPreAnimatedStateExtension::OnObjectsReplaced(&this->PreAnimatedState,param_1);
  return;
}

// PostInstantation @ 146149ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystemLinker::PostInstantation(UMovieSceneEntitySystemLinker *this)

{
  undefined1 *puVar1;
  int iVar2;
  FInstanceRegistry *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar3 = (this->InstanceRegistry).Ptr;
  this->LastInstantiationVersion = (this->EntityManager).SystemSerialNumber;
  if ((pFVar3 == (FInstanceRegistry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->InstanceRegistry).Ptr;
  bVar5 = 1 < (pFVar3->InvalidatedObjectBindings).HashSize;
  if (!bVar5) {
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::UnhashElements(&pFVar3->InvalidatedObjectBindings);
  }
  puVar1 = &(pFVar3->InvalidatedObjectBindings).Elements.field_0xc;
  *(undefined4 *)&(pFVar3->InvalidatedObjectBindings).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)&pFVar3->InvalidatedObjectBindings,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar3->InvalidatedObjectBindings).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar3->InvalidatedObjectBindings).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(pFVar3->InvalidatedObjectBindings).Elements.field_0x2c;
  *(undefined4 *)&(pFVar3->InvalidatedObjectBindings).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pFVar3->InvalidatedObjectBindings).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pFVar3->InvalidatedObjectBindings).Elements.field_0x10,0);
  }
  if (bVar5) {
    (pFVar3->InvalidatedObjectBindings).HashSize = 1;
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::Rehash(&pFVar3->InvalidatedObjectBindings);
  }
  TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *)&pFVar3->Instances);
  return;
}

// RegisterExtension @ 14614be90

FEntitySystemLinkerExtensionID __cdecl UMovieSceneEntitySystemLinker::RegisterExtension(void)

{
  int iVar1;
  
  iVar1 = ::StaticID;
  ::StaticID = ::StaticID + 1;
  return (FEntitySystemLinkerExtensionID)iVar1;
}

// Reset @ 146151460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystemLinker::Reset(UMovieSceneEntitySystemLinker *this)

{
  FDestructionSentinel local_28;
  
  TMulticastDelegate<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>::
  Broadcast(&(this->Events).AbandonLinker,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Events).TagGarbage,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&(this->Events).TagGarbage);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->Events).CleanTaggedGarbage,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(this->Events).CleanTaggedGarbage);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->Events).AddReferencedObjects,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(this->Events).AddReferencedObjects);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Events).AbandonLinker
             ,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&(this->Events).AbandonLinker);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  FMovieSceneEntitySystemGraph::Shutdown(&this->SystemGraph);
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x8 = 0;
  if (*(int *)&(this->EntitySystemsByGlobalGraphID).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->EntitySystemsByGlobalGraphID,0,
               (int *)&(this->EntitySystemsByGlobalGraphID).field_0xc);
  }
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x34 = 0;
  *(undefined4 *)&(this->EntitySystemsByGlobalGraphID).field_0x28 = 0;
  UE::MovieScene::FEntityManager::Destroy(&this->EntityManager);
  return;
}

// ResetRunner @ 1461515f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneEntitySystemLinker::ResetRunner(UMovieSceneEntitySystemLinker *this)

{
  ERunnerFlushState EVar1;
  FMovieSceneEntitySystemRunner *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Runner).Object;
  EVar1 = pFVar2->FlushState;
  if (((EVar1 & (EventTriggers|Finalization|Evaluation|Instantiation)) != None) &&
     ((EVar1 & (Spawn|Import)) == None)) {
    pFVar2->FlushState = UE::MovieScene::FlushState::LoopEval & ~Import;
  }
  return;
}

// StartEvaluation @ 1461556d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneEntitySystemLinker::StartEvaluation(UMovieSceneEntitySystemLinker *this)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ForElementType<unsigned_int> FVar6;
  
  iVar2 = (this->RunnerReentrancyFlags).NumBits;
  if (iVar2 != 0) {
    uVar1 = iVar2 - 1;
    if (((int)uVar1 < 0) || (iVar2 <= (int)uVar1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    FVar6 = (this->RunnerReentrancyFlags).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&this->RunnerReentrancyFlags;
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) == 0) {
      if (2 < (byte)LogMovieSceneECS._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
      }
      return false;
    }
  }
  TBitArray<FDefaultBitArrayAllocator>::Add(&this->RunnerReentrancyFlags,false);
  return true;
}

// StaticRegisterNativesUMovieSceneEntitySystemLinker @ 1461557e0

void __cdecl UMovieSceneEntitySystemLinker::StaticRegisterNativesUMovieSceneEntitySystemLinker(void)

{
  return;
}

// SystemLinked @ 146155860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::SystemLinked
          (UMovieSceneEntitySystemLinker *this,UMovieSceneEntitySystem *param_1)

{
  FSparseArrayAllocationInfo *pFVar1;
  FSparseArrayAllocationInfo local_18;
  
  pFVar1 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                      &this->EntitySystemsByGlobalGraphID,&local_18,
                      (uint)param_1->GlobalDependencyGraphID);
  if (pFVar1->Pointer != (undefined8 *)0x0) {
    *(UMovieSceneEntitySystem **)pFVar1->Pointer = param_1;
  }
  return;
}

// SystemUnlinked @ 1461558a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::SystemUnlinked
          (UMovieSceneEntitySystemLinker *this,UMovieSceneEntitySystem *param_1)

{
  ushort uVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UMovieSceneEntitySystem>_&&> local_res8;
  UObject *local_res18;
  UMovieSceneEntitySystem *local_res20;
  UObject **local_38;
  UMovieSceneEntitySystem **local_30;
  
  uVar1 = param_1->GlobalDependencyGraphID;
  if (*(UMovieSceneEntitySystem **)
       (*(longlong *)&this->EntitySystemsByGlobalGraphID + (ulonglong)uVar1 * 8) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntitySystemsByGlobalGraphID[GlobalID] == InSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0xf8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
             &this->EntitySystemsByGlobalGraphID,(uint)uVar1,1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->Events,param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&(this->Events).TagGarbage,
             param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(this->Events).CleanTaggedGarbage,param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(this->Events).AddReferencedObjects,param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&(this->Events).AbandonLinker,
             param_1);
  pUVar2 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_res8.Value = (TObjectPtr<UMovieSceneEntitySystem> *)pUVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  uVar6 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar5 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                    ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
                      *)&this->EntitySystemsRecyclingPool,uVar6 >> 0x10 ^ uVar6,
                     (TObjectPtr<UClass_const_> *)&local_res8.Value);
  if (iVar5 != -1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1595841733583699710>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0x102,"EntitySystemsRecyclingPool.Contains(InSystem->GetClass()) == false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res20 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  local_38 = &local_res18;
  local_30 = &local_res20;
  TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<UMovieSceneEntitySystem>_&&>_>
            ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UMovieSceneEntitySystem>,0>,FDefaultSetAllocator>
              *)&this->EntitySystemsRecyclingPool,&local_res8,(bool *)&local_38);
  return;
}

// TagInvalidBoundObjects @ 146156040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::TagInvalidBoundObjects(UMovieSceneEntitySystemLinker *this)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  FMovieSceneEntityID FVar3;
  FComponentTypeID FVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FEntityManager *this_00;
  undefined1 auStack_188 [32];
  FComponentTypeID local_168;
  FComponentTypeID local_166;
  undefined1 local_164 [4];
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_160;
  <lambda_1> local_150 [2];
  undefined8 local_140;
  TStatIdData *pTStack_138;
  byte local_130;
  undefined7 uStack_12f;
  undefined4 uStack_128;
  uint uStack_124;
  initializer_list<UE::MovieScene::FComponentTypeID> local_118;
  <lambda_1> local_108;
  <lambda_1> local_f8;
  undefined1 local_e8 [8];
  wchar_t *local_e0;
  TStatIdData *pTStack_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  bVar2 = local_130 & 0xe0;
  local_140 = 0;
  local_150[0].ExpiredBoundObjects = &local_160;
  uStack_128 = 0x6ff;
  pTStack_138 = &TStatId::TStatId_NAME_None;
  uStack_124 = uStack_124 & 0xffffff00;
  local_d0 = CONCAT71(uStack_12f,local_130) & 0xffffffffffffffe0;
  uStack_c8._4_4_ = uStack_124;
  uStack_c8._0_4_ = AnyHiPriThreadHiPriTask;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  local_168.Value = *(ushort *)&pFVar8->BoundObjectKey;
  local_b8.AllMask.Bits.NumBits = 0;
  local_b8.AllMask.Bits.MaxBits = 0x180;
  local_b8.NoneMask.Bits.NumBits = 0;
  local_b8.NoneMask.Bits.MaxBits = 0x180;
  local_b8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComplexMasks.ArrayNum = 0;
  local_b8.ComplexMasks.ArrayMax = 0;
  local_e0 = (wchar_t *)0x0;
  pTStack_d8 = &TStatId::TStatId_NAME_None;
  local_130 = bVar2;
  local_e8._2_2_ = local_168.Value;
  if ((TComponentTypeID<FObjectKey>)local_168.Value == (TComponentTypeID<FObjectKey>)0xffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("In->ComponentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1a8,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_118._First = &local_168;
  local_118._Last = &local_166;
  UE::MovieScene::FComponentMask::SetAll(&local_b8.AllMask,&local_118);
  this_00 = &this->EntityManager;
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FObjectKey>_>
  ::
  Iterate_PerEntityImpl<_UMovieSceneEntitySystemLinker::TagInvalidBoundObjects_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<FObjectKey>_>
              *)local_e8,this_00,&local_b8,local_150);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  iVar6 = local_160.ArrayNum;
  uVar9 = (ulonglong)local_160.ArrayNum;
  pFVar1 = local_160.AllocatorInstance.Data + uVar9 * 2;
  FVar10.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar6) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_164);
    }
    if (FVar10.Data == pFVar1) break;
    FVar3.Value = *(ushort *)FVar10.Data;
    FVar4.Value = (pFVar8->Tags).NeedsLink.Value;
    UE::MovieScene::FEntityManager::RemoveComponent(this_00,FVar3,FVar4);
    local_108.__this = this_00;
    local_108.ComponentTypeID.Value = FVar4.Value;
    UE::MovieScene::FEntityManager::
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_>
              (this_00,FVar3,&local_108);
    FVar4.Value = (pFVar8->Tags).NeedsUnlink.Value;
    UE::MovieScene::FEntityManager::AddComponent(this_00,FVar3,FVar4);
    local_f8.__this = this_00;
    local_f8.ComponentTypeID.Value = FVar4.Value;
    UE::MovieScene::FEntityManager::
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
              (this_00,FVar3,&local_f8);
    uVar9 = local_160._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 2;
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// UnlinkIrrelevantSystems @ 14615bc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntitySystemLinker::UnlinkIrrelevantSystems(UMovieSceneEntitySystemLinker *this)

{
  if ((this->LastSystemUnlinkVersion == 0) ||
     (this->LastSystemUnlinkVersion < (this->EntityManager).StructureMutationSystemSerialNumber)) {
    FMovieSceneEntitySystemGraph::RemoveIrrelevantSystems(&this->SystemGraph,this);
    this->LastSystemUnlinkVersion = (this->EntityManager).SystemSerialNumber;
  }
  return;
}

// operator() @ 1504e3e20

bool __thiscall
`UMovieSceneEntitySystemLinker::LinkSystemImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1595841733583699409>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1595841733583699409>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

