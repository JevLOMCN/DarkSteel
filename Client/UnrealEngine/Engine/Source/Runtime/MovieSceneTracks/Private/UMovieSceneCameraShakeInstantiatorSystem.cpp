// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 13

// StaticClass @ 146725a60

UClass * __cdecl UMovieSceneCameraShakeInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeInstantiatorSystem,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeInstantiatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.InnerSingleton;
}

// UMovieSceneCameraShakeInstantiatorSystem @ 1467623e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCameraShakeInstantiatorSystem * __thiscall
UMovieSceneCameraShakeInstantiatorSystem::UMovieSceneCameraShakeInstantiatorSystem
          (UMovieSceneCameraShakeInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCameraShakeInstantiatorSystem__6B_;
  (this->PreAnimatedCameraShakeStorage).Object = (FPreAnimatedCameraShakeStateStorage *)0x0;
  (this->PreAnimatedCameraShakeStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreAnimatedCameraComponentShakeStorage).Object =
       (FPreAnimatedCameraComponentShakeStateStorage *)0x0;
  (this->PreAnimatedCameraComponentShakeStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreAnimatedCameraSourceShakeStorage).Object =
       (FPreAnimatedCameraSourceShakeStateStorage *)0x0;
  (this->PreAnimatedCameraSourceShakeStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->TriggersByInstance = 0;
  *(undefined8 *)&(this->TriggersByInstance).field_0x8 = 0;
  *(undefined8 *)&(this->TriggersByInstance).field_0x20 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x28 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriggersByInstance).field_0x34 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TriggersByInstance).field_0x40 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x48 = 0;
  return this;
}

// UMovieSceneCameraShakeInstantiatorSystem @ 146762460

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCameraShakeInstantiatorSystem * __thiscall
UMovieSceneCameraShakeInstantiatorSystem::UMovieSceneCameraShakeInstantiatorSystem
          (UMovieSceneCameraShakeInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  UClass *local_res8;
  UObject *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCameraShakeInstantiatorSystem__6B_;
  (this->PreAnimatedCameraShakeStorage).Object = (FPreAnimatedCameraShakeStateStorage *)0x0;
  (this->PreAnimatedCameraShakeStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreAnimatedCameraComponentShakeStorage).Object =
       (FPreAnimatedCameraComponentShakeStateStorage *)0x0;
  (this->PreAnimatedCameraComponentShakeStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreAnimatedCameraSourceShakeStorage).Object =
       (FPreAnimatedCameraSourceShakeStateStorage *)0x0;
  (this->PreAnimatedCameraSourceShakeStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->TriggersByInstance = 0;
  *(undefined8 *)&(this->TriggersByInstance).field_0x8 = 0;
  *(undefined8 *)&(this->TriggersByInstance).field_0x20 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x28 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriggersByInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriggersByInstance).field_0x34 = 0;
  *(undefined8 *)&(this->TriggersByInstance).field_0x40 = 0;
  *(undefined4 *)&(this->TriggersByInstance).field_0x48 = 0;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneCameraShakeComponentData> *)&this->_padding_ = pFVar2->CameraShake;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneCameraShakeInstantiatorSystem @ 146769ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeInstantiatorSystem::~UMovieSceneCameraShakeInstantiatorSystem
          (UMovieSceneCameraShakeInstantiatorSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCameraShakeInstantiatorSystem__6B_;
  *(undefined4 *)&(this->TriggersByInstance).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TriggersByInstance).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TriggersByInstance);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedCameraSourceShakeStorage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedCameraComponentShakeStorage).SharedReferenceCount.ReferenceController
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedCameraShakeStorage).SharedReferenceCount.ReferenceController);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// operator() @ 14676d410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UMovieSceneCameraShakeInstantiatorSystem::OnRun'::__l2::<lambda_1>::operator()
          (void *this,FMovieSceneEntityID param_1,FInstanceHandle param_2,UObject *param_3,
          FMovieSceneCameraShakeComponentData *param_4,FMovieSceneCameraShakeInstanceData *param_5)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  UCameraShakeBase *pUVar14;
  FPreAnimatedCameraShakeStateStorage *pFVar15;
  FPreAnimatedCameraComponentShakeStateStorage *pFVar16;
  longlong *plVar17;
  UCameraShakeSourceComponent *this_00;
  longlong lVar18;
  UClass *pUVar19;
  undefined1 auStack_198 [32];
  UCameraComponent *local_178;
  undefined1 local_168;
  FCachePreAnimatedValueParams local_167 [7];
  UCameraComponent *local_160;
  longlong *local_158;
  float local_150;
  char local_14c;
  FName local_148;
  FMovieSceneCameraShakeComponentData *local_140;
  UPackage *local_138;
  UClass *local_130;
  float local_128;
  ECameraShakePlaySpace local_124;
  double local_120;
  ForAnyElementType FStack_118;
  double local_110;
  float local_108;
  undefined1 local_104;
  TObjectPtr<APlayerCameraManager>_u_0 local_100;
  float local_f8;
  ECameraShakePlaySpace local_f4;
  ForAnyElementType local_f0;
  double dStack_e8;
  double local_e0;
  float local_d8;
  undefined1 local_d4;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_148 = *(FName *)(*(longlong *)((longlong)this + 0x18) + 8);
  lVar18 = ((ulonglong)(uint)param_2 & 0xffff) * 0x140;
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar18 + 0x120 + (longlong)local_148);
  local_140 = (FMovieSceneCameraShakeComponentData *)((longlong)local_148 + 0x68 + lVar18);
  lVar18 = *(longlong *)(lVar18 + 0x118 + (longlong)local_148);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158 = this;
  local_138 = (UPackage *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar18 + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pUVar19 = (param_4->SectionData).ShakeClass.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  this_00 = (UCameraShakeSourceComponent *)0x0;
  if (param_3 != (UObject *)0x0) {
    pUVar12 = Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar12->_padding_)) {
      this_00 = (UCameraShakeSourceComponent *)param_3;
    }
  }
  if ((pUVar19 == (UClass *)0x0) ||
     (pUVar12 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar12 == (UClass *)0x0)) {
LAB_14676d521:
    if (this_00 != (UCameraShakeSourceComponent *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar19 = (this_00->CameraShake).Class.field0_0x0.DebugPtr, pUVar19 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      pUVar19 = (this_00->CameraShake).Class.field0_0x0.DebugPtr;
    }
    if (pUVar19 == (UClass *)0x0) {
      return;
    }
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if (((int)pUVar19->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14676d521;
  }
  pUVar12 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar12->_padding_;
  if (((int)pUVar19->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar1 * 8) != &pUVar12->_padding_)
     ) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  UE::MovieScene::ComputeCameraShakeDurationOverride((FMovieSceneContext *)&local_150,local_140);
  local_168 = UE::MovieScene::FEntityManager::HasComponent
                        ((FEntityManager *)local_158[2],param_1,
                         (FComponentTypeID)*(ushort *)(local_158[1] + 0x120));
  local_167[0].bForcePersist = false;
  if (this_00 != (UCameraShakeSourceComponent *)0x0) {
    bVar4 = true;
    if (((((param_5->SectionSignature).D == (param_4->SectionSignature).D &&
          (param_5->SectionSignature).C == (param_4->SectionSignature).C) &&
         (param_5->SectionSignature).B == (param_4->SectionSignature).B) &&
         (param_5->SectionSignature).A == (param_4->SectionSignature).A) &&
       (pUVar14 = (param_5->ShakeInstance).field0_0x0.DebugPtr, pUVar14 != (UCameraShakeBase *)0x0))
    {
      bVar4 = true;
      if (pUVar14->bIsActive != false) {
        bVar4 = false;
      }
    }
    local_160 = (UCameraComponent *)*local_158;
    if ((*(longlong *)((longlong)local_160 + 0x68) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar17 = (longlong *)(*(longlong *)((longlong)local_160 + 0x68) + 0xd8);
    local_178 = (UCameraComponent *)this_00;
    (**(code **)(*plVar17 + 8))(plVar17,param_1.Value,local_168);
    lVar18 = *local_158;
    if ((*(longlong *)(lVar18 + 0x68) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::MovieScene::
    TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
    CachePreAnimatedValue
              (*(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
                 **)(lVar18 + 0x68),local_167,(UObject *)this_00,CacheIfTracked);
    if (bVar4) {
      local_104 = 0;
      local_120 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      FStack_118.Data = (FScriptContainerElement *)UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_110 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      local_128 = (param_4->SectionData).PlayScale;
      local_124 = (param_4->SectionData).PlaySpace;
      local_110 = (param_4->SectionData).UserDefinedPlaySpace.Roll;
      local_120 = (param_4->SectionData).UserDefinedPlaySpace.Pitch;
      FStack_118.Data = (FScriptContainerElement *)(param_4->SectionData).UserDefinedPlaySpace.Yaw;
      if (local_14c != '\0') {
        local_108 = local_150;
        local_104 = 1;
      }
      local_130 = pUVar19;
      UCameraShakeSourceComponent::StartCameraShake
                (this_00,(FCameraShakeSourceComponentStartParams *)&local_130);
    }
    uVar5 = (param_4->SectionSignature).B;
    uVar6 = (param_4->SectionSignature).C;
    uVar7 = (param_4->SectionSignature).D;
    (param_5->SectionSignature).A = (param_4->SectionSignature).A;
    (param_5->SectionSignature).B = uVar5;
    (param_5->SectionSignature).C = uVar6;
    (param_5->SectionSignature).D = uVar7;
    return;
  }
  local_160 = MovieSceneHelpers::CameraComponentFromRuntimeObject(param_3);
  if (local_160 == (UCameraComponent *)0x0) {
    return;
  }
  if ((((((param_5->SectionSignature).D == (param_4->SectionSignature).D &&
         (param_5->SectionSignature).C == (param_4->SectionSignature).C) &&
        (param_5->SectionSignature).B == (param_4->SectionSignature).B) &&
        (param_5->SectionSignature).A == (param_4->SectionSignature).A) &&
      (pUVar14 = (param_5->ShakeInstance).field0_0x0.DebugPtr, pUVar14 != (UCameraShakeBase *)0x0))
     && (pUVar14->bIsActive != false)) {
    bVar4 = false;
    goto LAB_14676d88b;
  }
  pUVar13 = local_138;
  if (local_138 == (UPackage *)0x0) {
    pUVar13 = GetTransientPackage();
  }
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  pUVar12 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  FVar9 = local_148;
  if (pUVar12 == (UClass *)0x0) {
LAB_14676d805:
    pUVar19 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if (((int)pUVar19->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14676d805;
  }
  local_140 = (FMovieSceneCameraShakeComponentData *)0x0;
  if (local_148 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar13,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar12 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar12,pUVar19);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar19);
  FVar10 = local_148;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_148.ComparisonIndex = FVar9.ComparisonIndex.Value;
  local_148.Number = FVar9.Number;
  local_c8._16_4_ = local_148.ComparisonIndex.Value;
  local_c8._20_4_ = local_148.Number;
  local_148 = FVar10;
  local_c8._8_8_ = pUVar13;
  pUVar14 = (UCameraShakeBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar17 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  bVar4 = true;
LAB_14676d88b:
  plVar17 = local_158;
  pFVar15 = TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1>::operator->
                      ((TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *)
                       (*local_158 + 0x48));
  local_178 = (UCameraComponent *)pUVar14;
  (**(code **)(*(longlong *)&pFVar15->field_0xd8 + 8))(&pFVar15->field_0xd8,param_1.Value,local_168)
  ;
  pFVar15 = TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1>::operator->
                      ((TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *)
                       (*plVar17 + 0x48));
  UE::MovieScene::
  TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
  CachePreAnimatedValue
            ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits> *
             )pFVar15,local_167,(UObject *)pUVar14,CacheIfTracked);
  pFVar16 = TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1>::operator->
                      ((TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *
                       )(*plVar17 + 0x58));
  local_178 = local_160;
  (**(code **)(*(longlong *)&pFVar16->field_0xd8 + 8))(&pFVar16->field_0xd8,param_1.Value,local_168)
  ;
  pFVar16 = TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1>::operator->
                      ((TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *
                       )(*plVar17 + 0x58));
  UE::MovieScene::
  TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
  CachePreAnimatedValue
            ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
              *)pFVar16,local_167,(UObject *)local_160,CacheIfTracked);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UCameraShakeBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (param_5->ShakeInstance).field0_0x0.DebugPtr = pUVar14;
  uVar5 = (param_4->SectionSignature).A;
  uVar6 = (param_4->SectionSignature).B;
  uVar7 = (param_4->SectionSignature).C;
  uVar8 = (param_4->SectionSignature).D;
  param_5->bManagedByPreviewer = false;
  (param_5->SectionSignature).A = uVar5;
  (param_5->SectionSignature).B = uVar6;
  (param_5->SectionSignature).C = uVar7;
  (param_5->SectionSignature).D = uVar8;
  if (bVar4) {
    local_f8 = (param_4->SectionData).PlayScale;
    local_d4 = local_14c != '\0';
    local_e0 = (param_4->SectionData).UserDefinedPlaySpace.Roll;
    local_f0.Data = (FScriptContainerElement *)(param_4->SectionData).UserDefinedPlaySpace.Pitch;
    dStack_e8 = (param_4->SectionData).UserDefinedPlaySpace.Yaw;
    local_100.DebugPtr = (APlayerCameraManager *)0x0;
    local_f4 = (param_4->SectionData).PlaySpace;
    if ((bool)local_d4) {
      local_d8 = local_150;
    }
    UCameraShakeBase::StartShake(pUVar14,(FCameraShakeBaseStartParams *)&local_100.ObjectPtr);
  }
  return;
}

// AddShakeTrigger @ 146778cb0

void __thiscall
UMovieSceneCameraShakeInstantiatorSystem::AddShakeTrigger
          (UMovieSceneCameraShakeInstantiatorSystem *this,FInstanceHandle param_1,FGuid *param_2,
          FFrameTime *param_3,FMovieSceneCameraShakeSourceTrigger *param_4)

{
  TMap<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int local_res8 [2];
  FInstanceHandle local_res10 [2];
  FInstanceHandle *local_res18 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  FFrameTime local_58;
  UClass *local_50;
  float local_48;
  FScriptContainerElement local_44;
  double local_40;
  double dStack_38;
  double local_30;
  
  this_00 = &this->TriggersByInstance;
  uVar7 = param_1.InstanceID;
  local_res10[0] = param_1;
  if (*(int *)&(this->TriggersByInstance).field_0x8 !=
      *(int *)&(this->TriggersByInstance).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TriggersByInstance).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TriggersByInstance).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->TriggersByInstance).field_0x48 - 1) &
                              (ulonglong)uVar7) * 4);
    if (iVar5 != -1) {
      local_res10[0].InstanceSerial = param_1.InstanceSerial;
      do {
        puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (((ushort)*puVar6 == uVar7) &&
           ((ushort)((uint)*puVar6 >> 0x10) == local_res10[0].InstanceSerial)) {
          if ((iVar5 != -1) && (puVar6 != (undefined4 *)0x0)) goto LAB_146778d70;
          break;
        }
        iVar5 = puVar6[6];
      } while (iVar5 != -1);
    }
  }
  local_res18[0] = local_res10;
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::MovieScene::FInstanceHandle_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,
             (TKeyInitializer<UE::MovieScene::FInstanceHandle_const_&> *)(ulonglong)uVar7,
             (bool *)local_res18);
  puVar6 = (undefined4 *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_146778d70:
  pFVar1 = (ForAnyElementType *)(puVar6 + 2);
  local_68._0_4_ = param_2->A;
  local_68._4_4_ = param_2->B;
  uStack_60._0_4_ = param_2->C;
  uStack_60._4_4_ = param_2->D;
  local_58 = *param_3;
  local_50 = (param_4->ShakeClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_50);
  }
  local_48 = param_4->PlayScale;
  local_44 = (FScriptContainerElement)param_4->PlaySpace;
  local_30 = (param_4->UserDefinedPlaySpace).Roll;
  local_40 = (param_4->UserDefinedPlaySpace).Pitch;
  dStack_38 = (param_4->UserDefinedPlaySpace).Yaw;
  if (((pFVar1->Data <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar1->Data + (longlong)(int)puVar6[5] * 0x40)) &&
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
  iVar5 = puVar6[4];
  if (iVar5 == puVar6[5]) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,pFVar1,puVar6 + 5);
  }
  puVar6[4] = iVar5 + 1;
  pFVar2 = pFVar1->Data;
  lVar8 = (longlong)iVar5 * 0x40;
  *(undefined8 *)(pFVar2 + lVar8) = local_68;
  *(undefined8 *)(pFVar2 + lVar8 + 8) = uStack_60;
  *(FFrameTime *)(pFVar2 + lVar8 + 0x10) = local_58;
  *(UClass **)(pFVar2 + lVar8 + 0x18) = local_50;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_50);
  }
  *(float *)(pFVar2 + lVar8 + 0x20) = local_48;
  pFVar2[lVar8 + 0x24] = local_44;
  *(double *)(pFVar2 + lVar8 + 0x28) = local_40;
  *(double *)(pFVar2 + lVar8 + 0x28 + 8) = dStack_38;
  *(double *)(pFVar2 + lVar8 + 0x38) = local_30;
  return;
}

// GetPrivateStaticClass @ 146797ae0

UClass * __cdecl UMovieSceneCameraShakeInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeInstantiatorSystem,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeInstantiatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeInstantiatorSystem.InnerSingleton;
}

// IsRelevantImpl @ 1467a5be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneCameraShakeInstantiatorSystem::IsRelevantImpl
          (UMovieSceneCameraShakeInstantiatorSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return 0 < *(int *)&(this->TriggersByInstance).field_0x8 -
             *(int *)&(this->TriggersByInstance).field_0x34;
}

// OnLink @ 1467a99e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeInstantiatorSystem::OnLink(UMovieSceneCameraShakeInstantiatorSystem *this)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> local_38;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> local_28;
  TSharedPtr<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage,1> local_18;
  
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraShakeStateStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_38,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraShakeStateStorage>)
             UE::MovieScene::FPreAnimatedCameraShakeStateStorage::StorageID);
  if (&this->PreAnimatedCameraShakeStorage != &local_38) {
    (this->PreAnimatedCameraShakeStorage).Object = local_38.Object;
    local_38.Object = (FPreAnimatedCameraShakeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedCameraShakeStorage).SharedReferenceCount,
               &local_38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_28,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage>)
             UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage::StorageID);
  if (&this->PreAnimatedCameraComponentShakeStorage != &local_28) {
    (this->PreAnimatedCameraComponentShakeStorage).Object = local_28.Object;
    local_28.Object = (FPreAnimatedCameraComponentShakeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedCameraComponentShakeStorage).SharedReferenceCount,
               &local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage>)
             UE::MovieScene::FPreAnimatedCameraSourceShakeStateStorage::StorageID);
  if (&this->PreAnimatedCameraSourceShakeStorage != &local_18) {
    (this->PreAnimatedCameraSourceShakeStorage).Object = local_18.Object;
    local_18.Object = (FPreAnimatedCameraSourceShakeStateStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedCameraSourceShakeStorage).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 1467ae140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeInstantiatorSystem::OnRun
          (UMovieSceneCameraShakeInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  undefined1 auStack_1f8 [32];
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6 [7];
  undefined8 local_1c8;
  TStatIdData *pTStack_1c0;
  byte local_1b8;
  undefined7 uStack_1b7;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  <lambda_1> local_198;
  undefined2 local_178;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_176;
  TComponentTypeID<UObject_*> TStack_174;
  TComponentTypeID<FMovieSceneCameraShakeComponentData> TStack_172;
  TComponentTypeID<FMovieSceneCameraShakeInstanceData> TStack_170;
  undefined6 uStack_16e;
  undefined1 local_148 [4];
  FComponentAccess FStack_144;
  FComponentAccess FStack_142;
  FComponentAccess aFStack_140 [4];
  wchar_t *local_138;
  TStatIdData *pTStack_130;
  ulonglong local_128;
  undefined8 uStack_120;
  FEntityComponentFilter local_118;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x580) == 0) {
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
  local_198.EntityManager = (FEntityManager *)(lVar1 + 0x28);
  local_198.InstanceRegistry = *(FInstanceRegistry **)(lVar1 + 0x580);
  pTStack_1c0 = &TStatId::TStatId_NAME_None;
  TStack_176 = pFVar4->InstanceHandle;
  TStack_174 = pFVar4->BoundObject;
  TStack_172 = pFVar5->CameraShake;
  TStack_170 = pFVar5->CameraShakeInstance;
  local_148._2_2_ = TStack_176;
  local_148._0_2_ = local_178;
  unique0x100001e0 = TStack_174;
  unique0x100001e2 = TStack_172;
  aFStack_140._2_6_ = uStack_16e;
  aFStack_140[0].ComponentType.Value = TStack_170;
  local_1d8.Value = (pFVar4->Tags).NeedsLink.Value;
  local_1c8 = 0;
  uStack_1ac = uStack_1ac & 0xffffff00;
  local_118.AllMask.Bits.NumBits = 0;
  local_118.NoneMask.Bits.NumBits = 0;
  local_118.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ComplexMasks.ArrayNum = 0;
  local_118.ComplexMasks.ArrayMax = 0;
  local_68 = 0;
  local_30 = 0;
  uStack_1b0 = 0x6ff;
  local_128 = CONCAT71(uStack_1b7,local_1b8) & 0xffffffffffffffe0;
  uStack_120._4_4_ = uStack_1ac;
  uStack_120._0_4_ = AnyHiPriThreadHiPriTask;
  local_138 = (wchar_t *)0x0;
  pTStack_130 = &TStatId::TStatId_NAME_None;
  local_118.AllMask.Bits.MaxBits = 0x180;
  local_118.NoneMask.Bits.MaxBits = 0x180;
  local_64 = 0x180;
  local_2c = 0x180;
  local_1b8 = local_1b8 & 0xe0;
  local_198.__this = this;
  local_198.BuiltInComponents = pFVar4;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_118);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 4),&local_118);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 6),&local_118);
  UE::MovieScene::AddAccessorToFilter(aFStack_140,&local_118);
  local_1a8._First = &local_1d8;
  local_1a8._Last = local_1d6;
  UE::MovieScene::FComponentMask::SetAll(&local_118.AllMask,&local_1a8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TWriteAccess<FMovieSceneCameraShakeInstanceData>_>
  ::Iterate_PerEntityImpl<_UMovieSceneCameraShakeInstantiatorSystem::OnRun_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TWriteAccess<FMovieSceneCameraShakeInstanceData>_>
              *)local_148,(FEntityManager *)(this->_padding_ + 0x28),&local_118,&local_198);
  if (local_118.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ComplexMasks.AllocatorInstance.Data);
  }
  if (0 < *(int *)&(this->TriggersByInstance).field_0x8 -
          *(int *)&(this->TriggersByInstance).field_0x34) {
    TriggerOneShotShakes(this);
  }
  return;
}

// OnUnlink @ 1467b0c60

void __thiscall
UMovieSceneCameraShakeInstantiatorSystem::OnUnlink(UMovieSceneCameraShakeInstantiatorSystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&(this->TriggersByInstance).field_0x8 ==
      *(int *)&(this->TriggersByInstance).field_0x34) {
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2896800096479871336>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCameraShakeSystem.cpp"
                     ,0x168,"TriggersByInstance.Num() == 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->TriggersByInstance);
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeInstantiatorSystem @ 1467c2720

void __cdecl
UMovieSceneCameraShakeInstantiatorSystem::
StaticRegisterNativesUMovieSceneCameraShakeInstantiatorSystem(void)

{
  return;
}

// TriggerOneShotShakes @ 1467c3f60

void __thiscall
UMovieSceneCameraShakeInstantiatorSystem::TriggerOneShotShakes
          (UMovieSceneCameraShakeInstantiatorSystem *this)

{
  FGuid *pFVar1;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  double dVar5;
  ECameraShakePlaySpace EVar6;
  uint uVar7;
  undefined1 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  UCameraShakeSourceComponent *this_00;
  code *pcVar11;
  double dVar12;
  double dVar13;
  FGuid *pFVar14;
  TMap<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar15;
  bool bVar16;
  int iVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  longlong lVar27;
  FWeakObjectPtr *pFVar28;
  undefined1 *puVar29;
  uint *puVar30;
  TMap<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar31;
  int *piVar32;
  longlong lVar33;
  TBitArray<FDefaultBitArrayAllocator> *pTVar34;
  FSharedPlaybackState *this_01;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  UObject *local_1a0;
  FMovieSceneSequenceID local_198;
  uint local_194;
  int local_190;
  int local_18c;
  longlong local_188;
  FWeakObjectPtr local_180;
  UClass *local_178;
  longlong local_170;
  FGuid *local_168;
  longlong local_160;
  longlong local_158;
  FSharedPlaybackState *local_150;
  TReferenceControllerBase<1> *local_148;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  TMap<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>_>
  *local_138;
  TMap<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TMap<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_d0;
  TRotator<double> local_b8 [2];
  undefined4 local_7c;
  
  lVar33 = this->_padding_;
  if ((*(longlong *)(lVar33 + 0x580) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_188 = *(longlong *)(lVar33 + 0x580);
  pTVar31 = &this->TriggersByInstance;
  iVar17 = *(int *)&(this->TriggersByInstance).field_0x28;
  pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriggersByInstance).field_0x10;
  iStack_128 = 0;
  uStack_124 = 1;
  local_110 = 0;
  iStack_114 = iStack_128;
  if (iVar17 != 0) {
    puVar30 = *(uint **)&(this->TriggersByInstance).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)pTVar34;
    }
    uVar26 = *puVar30;
    iStack_128 = 0;
    local_110 = 0;
    while (uVar26 == 0) {
      iStack_128 = iStack_128 + 1;
      local_110 = local_110 + 0x20;
      iStack_114 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_1467c405d;
      uVar26 = puVar30[iStack_128];
    }
    uStack_124 = ~(uVar26 - 1) & uVar26;
    uVar21 = (ulonglong)uStack_124 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_190 = (int)lVar33;
    iStack_114 = local_190 + -1 + local_110;
    if (iVar17 < iStack_114) {
      iStack_114 = iVar17;
    }
  }
LAB_1467c405d:
  uVar26 = *(uint *)&(this->TriggersByInstance).field_0x28;
  uStack_10c = local_7c;
  uVar23 = uVar26 & 0xffffffe0;
  iStack_108 = *(int *)&(this->TriggersByInstance).field_0x8 -
               *(int *)&(this->TriggersByInstance).field_0x34;
  uStack_118 = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
  TStack_f8.CurrentBitIndex = iStack_114;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar26 >> 5;
  TStack_f8._28_4_ = local_7c;
  TStack_f8.BaseBitIndex = local_110;
  uStack_d8 = CONCAT44(uStack_104,iStack_108);
  local_1a8 = uVar26;
  local_140 = pTVar34;
  local_138 = pTVar31;
  local_130 = pTVar31;
  local_120 = (undefined1 *)pTVar34;
  local_100 = pTVar31;
  TStack_f8.Array = pTVar34;
  if ((((int)uVar26 < 0) || (iVar17 < (int)uVar26)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar7 = *(uint *)&(this->TriggersByInstance).field_0x28;
  if (uVar26 != uVar7) {
    puVar8 = *(undefined1 **)&(this->TriggersByInstance).field_0x20;
    puVar29 = (undefined1 *)pTVar34;
    if (puVar8 != (undefined1 *)0x0) {
      puVar29 = puVar8;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar22 * 4);
    while (uVar26 == 0) {
      iVar22 = iVar22 + 1;
      uVar23 = uVar23 + 0x20;
      uVar26 = uVar7;
      local_1a8 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar22) goto LAB_1467c4170;
      uVar26 = *(uint *)(puVar29 + (longlong)iVar22 * 4);
    }
    uVar21 = (ulonglong)(~(uVar26 - 1) & uVar26) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_18c = (int)lVar33;
    uVar26 = (uVar23 - 1) + local_18c;
    local_1a8 = uVar26;
    if ((int)uVar7 < (int)uVar26) {
      uVar26 = uVar7;
      local_1a8 = uVar7;
    }
  }
LAB_1467c4170:
  do {
    pTVar15 = local_100;
    if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_f8.CurrentBitIndex == uVar26) && (TStack_f8.Array == pTVar34)) &&
       (pTVar15 == pTVar31)) {
      pTVar31 = &this->TriggersByInstance;
      bVar16 = *(int *)&(this->TriggersByInstance).field_0x48 < 2;
      if (bVar16) {
        TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)pTVar31);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar31,0,*(int *)&(this->TriggersByInstance).field_0x8);
      *(undefined4 *)&(this->TriggersByInstance).field_0x8 = 0;
      if (*(int *)&(this->TriggersByInstance).field_0xc != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)pTVar31,0,
                   (int *)&(this->TriggersByInstance).field_0xc);
      }
      *(undefined4 *)&(this->TriggersByInstance).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->TriggersByInstance).field_0x34 = 0;
      iVar17 = *(int *)&(this->TriggersByInstance).field_0x2c;
      *(undefined4 *)&(this->TriggersByInstance).field_0x28 = 0;
      if ((iVar17 < 0) || (0x80 < iVar17)) {
        *(undefined4 *)&(this->TriggersByInstance).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TriggersByInstance).field_0x10,0)
        ;
      }
      if (bVar16) {
        return;
      }
      *(undefined4 *)&(this->TriggersByInstance).field_0x48 = 1;
      TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)pTVar31);
      return;
    }
    lVar33 = *(longlong *)pTVar15;
    lVar27 = (longlong)TStack_f8.CurrentBitIndex * 0x20;
    lVar24 = (ulonglong)*(ushort *)(lVar27 + lVar33) * 0x140 + *(longlong *)(local_188 + 8);
    pTVar9 = *(TReferenceControllerBase<1> **)(lVar24 + 0x120);
    this_01 = *(FSharedPlaybackState **)(lVar24 + 0x118);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_170 = lVar27;
    local_160 = lVar24;
    local_158 = lVar33;
    local_150 = this_01;
    local_148 = pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (*(int *)(lVar24 + 0x88) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return;
    }
    local_194 = *(uint *)(lVar27 + 0x10 + lVar33);
    uVar21 = (ulonglong)(int)local_194;
    lVar10 = *(longlong *)(lVar27 + 8 + lVar33);
    local_168 = (FGuid *)(uVar21 * 0x40 + lVar10);
    piVar32 = (int *)(lVar10 + 8);
    while( true ) {
      pFVar14 = local_168;
      if (*(int *)(lVar27 + 0x10 + lVar33) != (int)uVar21) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMovieSceneCameraShakeInstantiatorSystem::FTimedTrigger,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      pFVar1 = (FGuid *)(piVar32 + -2);
      if (pFVar1 == pFVar14) break;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      if (((piVar32[-1] != 0 || piVar32[1] != 0) || *piVar32 != 0) || pFVar1->A != 0) {
        local_198.Value = *(uint *)(lVar24 + 0x128);
        UE::MovieScene::FSharedPlaybackState::FindBoundObjects(this_01,&local_d0,pFVar1,&local_198);
        pTVar2 = local_d0.DataPtr + local_d0.ArrayNum;
        for (pFVar28 = &(local_d0.DataPtr)->WeakPtr; pFVar28 != &pTVar2->WeakPtr;
            pFVar28 = pFVar28 + 1) {
          local_180 = *pFVar28;
          pUVar18 = FWeakObjectPtr::Get(&local_180);
          if (pUVar18 != (UObject *)0x0) {
            pUVar19 = Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
            iVar17 = (int)pUVar19->_padding_;
            if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar17) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
                &pUVar19->_padding_)) {
              local_1a0 = (UObject *)0x0;
            }
            else {
              local_1a0 = pUVar18;
              if (((local_1b8.Data <= (FScriptContainerElement *)&local_1a0) &&
                  ((FScriptContainerElement *)&local_1a0 <
                   local_1b8.Data + (longlong)local_1b0._4_4_ * 8)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar17 = (int)local_1b0;
              if ((int)local_1b0 == local_1b0._4_4_) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1b8,(int *)((longlong)&local_1b0 + 4));
              }
              local_1b0 = CONCAT44(local_1b0._4_4_,iVar17 + 1);
              *(UObject **)(local_1b8.Data + (longlong)iVar17 * 8) = local_1a0;
            }
          }
        }
      }
      iVar17 = (int)local_1b0;
      pFVar3 = local_1b8.Data + (longlong)(int)local_1b0 * 8;
      FVar25.Data = local_1b8.Data;
      while( true ) {
        if ((int)local_1b0 != iVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UCameraShakeSourceComponent_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (FVar25.Data == pFVar3) break;
        this_00 = *(UCameraShakeSourceComponent **)FVar25.Data;
        pUVar19 = *(UClass **)(piVar32 + 4);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar19 != (UClass *)0x0) goto LAB_1467c440f;
LAB_1467c443d:
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar19 = (this_00->CameraShake).Class.field0_0x0.DebugPtr, pUVar19 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar19);
          }
          pUVar19 = (this_00->CameraShake).Class.field0_0x0.DebugPtr;
          if (pUVar19 != (UClass *)0x0) goto LAB_1467c4463;
        }
        else {
          if (pUVar19 == (UClass *)0x0) goto LAB_1467c443d;
          UE::GC::MarkAsReachable((UObject *)pUVar19);
LAB_1467c440f:
          pUVar20 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
          if (pUVar20 == (UClass *)0x0) goto LAB_1467c443d;
          iVar22 = (int)pUVar20->_padding_;
          if (((int)pUVar19->_padding_ < iVar22) ||
             ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar22 * 8) !=
              &pUVar20->_padding_)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if (!bVar16) goto LAB_1467c443d;
LAB_1467c4463:
          pUVar20 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
          if (pUVar20 != (UClass *)0x0) {
            iVar22 = (int)pUVar20->_padding_;
            if (((int)pUVar19->_padding_ < iVar22) ||
               ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar22 * 8) !=
                &pUVar20->_padding_)) {
              bVar16 = false;
            }
            else {
              bVar16 = true;
            }
            if (bVar16) {
              dVar12 = *(double *)(piVar32 + 8);
              dVar13 = *(double *)(piVar32 + 10);
              EVar6 = *(ECameraShakePlaySpace *)(piVar32 + 7);
              dVar5 = *(double *)(piVar32 + 0xc);
              fVar4 = (float)piVar32[6];
              local_178 = pUVar19;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar19);
              }
              local_b8[0].Pitch = dVar12;
              local_b8[0].Yaw = dVar13;
              local_b8[0].Roll = dVar5;
              UCameraShakeSourceComponent::StartCameraShake
                        (this_00,(TSubclassOf<UCameraShakeBase>)&local_178,fVar4,EVar6,local_b8);
            }
          }
        }
        FVar25.Data = FVar25.Data + 8;
      }
      if (local_1b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      piVar32 = piVar32 + 0x10;
      uVar21 = (ulonglong)local_194;
      lVar24 = local_160;
      lVar27 = local_170;
      lVar33 = local_158;
      this_01 = local_150;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    pTVar31 = local_138;
    pTVar34 = local_140;
    uVar26 = local_1a8;
  } while( true );
}

