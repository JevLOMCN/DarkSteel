// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 16

// StaticClass @ 146724390

UClass * __cdecl UMovieSceneAudioSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioSystem",
               &Z_Registration_Info_UClass_UMovieSceneAudioSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioSystem,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneAudioSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioSystem.InnerSingleton;
}

// UMovieSceneAudioSystem @ 1467616b0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneAudioSystem * __thiscall
UMovieSceneAudioSystem::UMovieSceneAudioSystem(UMovieSceneAudioSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneAudioSystem__6B_;
  *(undefined8 *)&this->AudioComponentsByActorKey = 0;
  *(undefined8 *)&(this->AudioComponentsByActorKey).field_0x8 = 0;
  *(undefined8 *)&(this->AudioComponentsByActorKey).field_0x20 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x28 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x34 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AudioComponentsByActorKey).field_0x40 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x48 = 0;
  *(undefined8 *)&this->AudioInputsBySectionKey = 0;
  *(undefined8 *)&(this->AudioInputsBySectionKey).field_0x8 = 0;
  *(undefined8 *)&(this->AudioInputsBySectionKey).field_0x20 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x28 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x34 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AudioInputsBySectionKey).field_0x40 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x48 = 0;
  (this->PreAnimatedStorage).Object = (FPreAnimatedAudioStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneAudioSystem @ 146761760

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneAudioSystem * __thiscall
UMovieSceneAudioSystem::UMovieSceneAudioSystem
          (UMovieSceneAudioSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  longlong lVar4;
  TComponentTypeID<double> *pTVar5;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneAudioSystem__6B_;
  *(undefined8 *)&this->AudioComponentsByActorKey = 0;
  *(undefined8 *)&(this->AudioComponentsByActorKey).field_0x8 = 0;
  *(undefined8 *)&(this->AudioComponentsByActorKey).field_0x20 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x28 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x34 = 0;
  *(undefined8 *)&(this->AudioComponentsByActorKey).field_0x40 = 0;
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x48 = 0;
  *(undefined8 *)&this->AudioInputsBySectionKey = 0;
  *(undefined8 *)&(this->AudioInputsBySectionKey).field_0x8 = 0;
  *(undefined8 *)&(this->AudioInputsBySectionKey).field_0x20 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x28 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x34 = 0;
  *(undefined8 *)&(this->AudioInputsBySectionKey).field_0x40 = 0;
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x48 = 0;
  (this->PreAnimatedStorage).Object = (FPreAnimatedAudioStorage *)0x0;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneAudioComponentData> *)&this->_padding_ = pFVar2->Audio;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  if ((this->_padding_ & 0x10) != 0) {
    pFVar3 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pTVar5 = pFVar3->DoubleResult;
    lVar4 = 9;
    do {
      local_res8 = (UObject *)this->_padding_;
      FVar1.Value = *(ushort *)pTVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      UMovieSceneEntitySystem::DefineComponentConsumer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
      pTVar5 = pTVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->StringResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->IntegerResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar3->BoolResult;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->AudioTriggerName;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneAudioSystem @ 146769cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneAudioSystem::~UMovieSceneAudioSystem(UMovieSceneAudioSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneAudioSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStorage).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->AudioInputsBySectionKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AudioInputsBySectionKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AudioInputsBySectionKey);
  *(undefined4 *)&(this->AudioComponentsByActorKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AudioComponentsByActorKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AudioComponentsByActorKey);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// AddBoundObjectAudioComponent @ 146775630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAudioComponentEvaluationData * __thiscall
UMovieSceneAudioSystem::AddBoundObjectAudioComponent
          (UMovieSceneAudioSystem *this,FInstanceHandle param_1,UMovieSceneAudioSection *param_2,
          UObject *param_3)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  FObjectKey FVar3;
  UAudioComponent *pUVar4;
  FAudioComponentEvaluationData *pFVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  UAudioComponent *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  TObjectPtr<USceneComponent>_u_0 TVar18;
  ForAnyElementType FVar19;
  TObjectPtr<USceneComponent>_u_0 TVar20;
  TObjectPtr<USceneComponent>_u_0 TVar21;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  FWeakObjectPtr local_128;
  FName local_120;
  FObjectKey local_118;
  UAudioComponent *local_110;
  FString local_108;
  FInstanceHandle local_f8;
  FObjectKey local_f4;
  FCreateComponentParams local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  TVar18.DebugPtr = (USceneComponent *)0x0;
  iVar16 = 0;
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  uVar15 = 0;
  if (param_3 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_3);
    }
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_120 = (FName)param_3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_3);
    }
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_120);
    local_118.ObjectIndex = local_128.ObjectIndex;
    local_118.ObjectSerialNumber = local_128.ObjectSerialNumber;
    FVar3 = local_118;
    iVar16 = local_128.ObjectIndex;
    local_118.ObjectSerialNumber = local_128.ObjectSerialNumber;
    uVar15 = local_118.ObjectSerialNumber;
    local_118 = FVar3;
  }
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  if (param_2 != (UMovieSceneAudioSection *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_120 = (FName)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_120);
    uVar15 = local_118.ObjectSerialNumber;
    iVar16 = local_118.ObjectIndex;
  }
  FVar1 = local_128;
  uVar12 = iVar16 - uVar15 ^ uVar15 >> 0xd;
  uVar9 = (-0x61c88647 - uVar12) - uVar15 ^ uVar12 << 8;
  uVar17 = (uVar15 - uVar9) - uVar12 ^ uVar9 >> 0xd;
  uVar12 = (uVar12 - uVar17) - uVar9 ^ uVar17 >> 0xc;
  uVar9 = (uVar9 - uVar17) - uVar12 ^ uVar12 << 0x10;
  uVar17 = (uVar17 - uVar9) - uVar12 ^ uVar9 >> 5;
  uVar12 = (uVar12 - uVar17) - uVar9 ^ uVar17 >> 3;
  uVar9 = (uVar9 - uVar12) - uVar17 ^ uVar12 << 10;
  uVar9 = (uVar17 - uVar9) - uVar12 ^ uVar9 >> 0xf;
  if (*(int *)&(this->AudioComponentsByActorKey).field_0x8 !=
      *(int *)&(this->AudioComponentsByActorKey).field_0x34) {
    puVar13 = *(undefined1 **)&(this->AudioComponentsByActorKey).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->AudioComponentsByActorKey).field_0x38;
    }
    iVar14 = *(int *)(puVar13 +
                     (ulonglong)(*(int *)&(this->AudioComponentsByActorKey).field_0x48 - 1U & uVar9)
                     * 4);
    if (iVar14 != -1) {
      lVar11 = *(longlong *)&this->AudioComponentsByActorKey;
      do {
        lVar10 = (longlong)iVar14 * 0x60;
        if ((*(int *)(lVar10 + lVar11) == iVar16) && (*(uint *)(lVar10 + 4 + lVar11) == uVar15)) {
          if ((iVar14 != -1) && (lVar11 = (longlong)iVar14 * 0x60 + lVar11, lVar11 != 0))
          goto LAB_146775851;
          break;
        }
        iVar14 = *(int *)(lVar10 + 0x58 + lVar11);
      } while (iVar14 != -1);
    }
  }
  local_120 = (FName)&local_118;
  local_138 = 0;
  TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_const_&>_>
            ((TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
              *)&this->AudioComponentsByActorKey,(uint)&local_128,
             (TKeyInitializer<FObjectKey_const_&> *)(ulonglong)uVar9,(bool *)&local_120);
  lVar11 = (longlong)local_128.ObjectIndex * 0x60 + *(longlong *)&this->AudioComponentsByActorKey;
LAB_146775851:
  local_110 = (UAudioComponent *)(lVar11 + 8);
  pFVar5 = GetAudioComponentEvaluationData(this,param_1,local_118,(FObjectKey)FVar1);
  if (pFVar5 != (FAudioComponentEvaluationData *)0x0) {
    return pFVar5;
  }
  pUVar6 = GetTransientPackageAsObject();
  local_128 = (FWeakObjectPtr)NewObject<USoundCue>(pUVar6);
  FVar19.Data = (FScriptContainerElement *)0x0;
  pUVar7 = Z_Construct_UClass_AActor_NoRegister();
  iVar16 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar16) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
      &pUVar7->_padding_)) {
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar16 = (int)pUVar7->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
        &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar16 = (int)pUVar7->_padding_;
      TVar20.DebugPtr = TVar18.DebugPtr;
      if ((iVar16 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar7->_padding_)) {
        TVar20 = (TObjectPtr<USceneComponent>_u_0)param_3;
      }
      param_3 = (UObject *)(TVar20.DebugPtr)->_padding_;
      pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar16 = (int)pUVar7->_padding_;
      if ((*(int *)((TVar20.DebugPtr)->_padding_ + 0x38) < iVar16) ||
         (TVar21 = TVar20,
         (longlong *)
         *(undefined1 **)(*(longlong *)((TVar20.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8)
         != &pUVar7->_padding_)) {
        TVar21.DebugPtr = TVar18.DebugPtr;
      }
      local_120 = (FName)(TVar20.DebugPtr)->_padding_;
      goto LAB_146775968;
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_AActor_NoRegister();
    iVar16 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar7->_padding_)) {
      param_3 = (UObject *)TVar18.DebugPtr;
    }
    TVar21 = (TObjectPtr<USceneComponent>_u_0)
             (((TObjectPtr<USceneComponent> *)
              ((longlong)&((USceneComponent *)param_3)->TransformUpdated + 8))->field0_0x0).DebugPtr
    ;
    local_120 = (FName)((USceneComponent *)param_3)->_padding_;
LAB_146775968:
    ::FName::ToString(&local_120,&local_108);
    FVar19.Data = local_108.Data.AllocatorInstance.Data;
    if (((AActor *)param_3 != (AActor *)0x0) && (TVar21.DebugPtr != (USceneComponent *)0x0)) {
      pUVar8 = AActor::GetWorld((AActor *)param_3);
      FAudioDevice::FCreateComponentParams::FCreateComponentParams
                (&local_e8,pUVar8,(AActor *)param_3);
      this_00 = FAudioDevice::CreateComponent((USoundBase *)local_128,&local_e8);
      if (this_00 != (UAudioComponent *)0x0) {
        UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transient);
        local_128.ObjectIndex = 0;
        local_128.ObjectSerialNumber = 0;
        (**(code **)(*(longlong *)this_00 + 0x508))
                  (this_00,TVar21.DebugPtr,&FAttachmentTransformRules::KeepRelativeTransform,0);
        pUVar4 = local_110;
        FVar2 = local_128;
        local_128.ObjectIndex = FVar1.ObjectIndex;
        local_128.ObjectSerialNumber = FVar1.ObjectSerialNumber;
        local_f4.ObjectIndex = local_128.ObjectIndex;
        local_f4.ObjectSerialNumber = local_128.ObjectSerialNumber;
        local_120 = (FName)&local_f8;
        local_128 = FVar2;
        local_f8 = param_1;
        TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&>_>
                  ((TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
                    *)local_110,
                   (TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&> *)
                   &local_128,(bool *)&local_120);
        pFVar5 = (FAudioComponentEvaluationData *)
                 (*(longlong *)&pUVar4->field_0x0 + 0x10 + (longlong)local_128.ObjectIndex * 0x50);
        local_110 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar5,(FObjectPtr)&local_110);
        pFVar5->bAudioComponentHasBeenPlayed = false;
        local_e8.ConcurrencySet.HashSize = 0;
        if (local_e8.ConcurrencySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.ConcurrencySet.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_e8.ConcurrencySet.Elements);
        if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pFVar5;
        }
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
        return pFVar5;
      }
      if (2 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      local_e8.ConcurrencySet.HashSize = 0;
      if (local_e8.ConcurrencySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.ConcurrencySet.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.ConcurrencySet.Elements);
      goto LAB_146775b29;
    }
  }
  if (2 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
LAB_146775b29:
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
  return (FAudioComponentEvaluationData *)0x0;
}

// AddReferencedObjects @ 146778420

void __cdecl
UMovieSceneAudioSystem::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  return;
}

// AddRootAudioComponent @ 146778430

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

FAudioComponentEvaluationData * __thiscall
UMovieSceneAudioSystem::AddRootAudioComponent
          (UMovieSceneAudioSystem *this,FInstanceHandle param_1,UMovieSceneAudioSection *param_2,
          UWorld *param_3)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  int *piVar3;
  FAudioComponentEvaluationData *this_00;
  UObject *pUVar4;
  USoundCue *pUVar5;
  UAudioComponent *this_01;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FWeakObjectPtr local_118;
  UAudioComponent *local_110;
  FObjectKey local_108;
  FInstanceHandle local_100;
  FObjectKey local_fc;
  FCreateComponentParams local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_108.ObjectIndex = 0;
  local_108.ObjectSerialNumber = 0;
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  uVar10 = 0;
  iVar11 = 0;
  if (param_2 != (UMovieSceneAudioSection *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_118.ObjectIndex = 0;
    local_118.ObjectSerialNumber = 0;
    local_110 = (UAudioComponent *)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_110);
    uVar10 = local_108.ObjectSerialNumber;
    iVar11 = local_108.ObjectIndex;
  }
  FVar1 = local_118;
  uVar7 = iVar11 - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar10 ^ uVar7 << 8;
  uVar12 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar12) - uVar6 ^ uVar12 >> 0xc;
  uVar6 = (uVar6 - uVar12) - uVar7 ^ uVar7 << 0x10;
  uVar12 = (uVar12 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar12) - uVar6 ^ uVar12 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar12 ^ uVar7 << 10;
  uVar6 = (uVar12 - uVar6) - uVar7 ^ uVar6 >> 0xf;
  if (*(int *)&(this->AudioComponentsByActorKey).field_0x8 !=
      *(int *)&(this->AudioComponentsByActorKey).field_0x34) {
    puVar8 = *(undefined1 **)&(this->AudioComponentsByActorKey).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->AudioComponentsByActorKey).field_0x38;
    }
    iVar9 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->AudioComponentsByActorKey).field_0x48 - 1U & uVar6) *
                              4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar9 * 0x60 + *(longlong *)&this->AudioComponentsByActorKey);
        if ((*piVar3 == iVar11) && (piVar3[1] == uVar10)) {
          if ((iVar9 != -1) && (piVar3 != (int *)0x0)) goto LAB_1467785f6;
          break;
        }
        iVar9 = piVar3[0x16];
      } while (iVar9 != -1);
    }
  }
  local_110 = (UAudioComponent *)&local_108;
  local_128 = 0;
  TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_const_&>_>
            ((TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
              *)&this->AudioComponentsByActorKey,(uint)&local_118,
             (TKeyInitializer<FObjectKey_const_&> *)(ulonglong)uVar6,(bool *)&local_110);
  piVar3 = (int *)((longlong)local_118.ObjectIndex * 0x60 +
                  *(longlong *)&this->AudioComponentsByActorKey);
LAB_1467785f6:
  this_00 = GetAudioComponentEvaluationData(this,param_1,local_108,(FObjectKey)FVar1);
  if (this_00 == (FAudioComponentEvaluationData *)0x0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar5 = NewObject<USoundCue>(pUVar4);
    FAudioDevice::FCreateComponentParams::FCreateComponentParams(&local_e8,param_3,(AActor *)0x0);
    this_01 = FAudioDevice::CreateComponent((USoundBase *)pUVar5,&local_e8);
    if (this_01 == (UAudioComponent *)0x0) {
      if (2 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      local_e8.ConcurrencySet.HashSize = 0;
      if (local_e8.ConcurrencySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.ConcurrencySet.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.ConcurrencySet.Elements);
      this_00 = (FAudioComponentEvaluationData *)0x0;
    }
    else {
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_Transient);
      FVar2 = local_118;
      local_110 = (UAudioComponent *)&local_100;
      local_118.ObjectIndex = FVar1.ObjectIndex;
      local_118.ObjectSerialNumber = FVar1.ObjectSerialNumber;
      local_fc.ObjectIndex = local_118.ObjectIndex;
      local_fc.ObjectSerialNumber = local_118.ObjectSerialNumber;
      local_118 = FVar2;
      local_100 = param_1;
      TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&>_>
                ((TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
                  *)(piVar3 + 2),
                 (TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&> *)
                 &local_118,(bool *)&local_110);
      this_00 = (FAudioComponentEvaluationData *)
                (*(longlong *)
                  &((TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
                     *)(piVar3 + 2))->Elements + (longlong)local_118.ObjectIndex * 0x50 + 0x10);
      local_110 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_110);
      this_00->bAudioComponentHasBeenPlayed = false;
      local_e8.ConcurrencySet.HashSize = 0;
      if (local_e8.ConcurrencySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.ConcurrencySet.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.ConcurrencySet.Elements);
    }
  }
  return this_00;
}

// GetAudioComponentEvaluationData @ 146794010

/* WARNING: Type propagation algorithm not settling */

FAudioComponentEvaluationData * __thiscall
UMovieSceneAudioSystem::GetAudioComponentEvaluationData
          (UMovieSceneAudioSystem *this,FInstanceHandle param_1,FObjectKey param_2,
          FObjectKey param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  char cVar8;
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
  *this_00;
  FAudioComponentEvaluationData *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *pTVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FObjectKey local_res18;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  char local_94;
  undefined4 local_90;
  char local_8c;
  undefined4 local_88;
  char local_84;
  undefined1 local_80;
  undefined1 local_7f;
  int local_78;
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  undefined4 *local_40;
  undefined8 *local_38;
  
  local_res18 = param_2;
  this_00 = (TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
             *)TMapBase<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
               ::Find((TMapBase<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
                       *)&this->AudioComponentsByActorKey,&local_res18);
  if (this_00 !=
      (TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
       *)0x0) {
    local_f0._0_4_ = param_1;
    local_f0._4_8_ = param_3;
    pFVar9 = TMapBase<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
             ::Find((TMapBase<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
                     *)this_00,(TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *)local_f0);
    if ((pFVar9 != (FAudioComponentEvaluationData *)0x0) &&
       (bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar9), bVar7)) {
      return pFVar9;
    }
    iVar4 = *(int *)&(this_00->Elements).field_0x28;
    puVar1 = &(this_00->Elements).field_0x10;
    iStack_d8 = 0;
    uStack_d4 = 1;
    local_c0 = 0;
    iStack_c4 = 0;
    if (iVar4 != 0) {
      puVar18 = *(uint **)&(this_00->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar14 = *puVar18;
      while (uVar14 == 0) {
        lVar11 = (longlong)iStack_d8;
        local_c0 = local_c0 + 0x20;
        iStack_d8 = iStack_d8 + 1;
        iStack_c4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14679410d;
        uVar14 = puVar18[lVar11 + 1];
      }
      uStack_d4 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_d4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_78 = (int)lVar11;
      iStack_c4 = local_c0 + -1 + local_78;
      if (iVar4 < iStack_c4) {
        iStack_c4 = iVar4;
      }
    }
LAB_14679410d:
    uVar14 = *(uint *)&(this_00->Elements).field_0x28;
    uVar19 = uVar14 & 0xffffffe0;
    iStack_b8 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
    uStack_c8 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_d4,iStack_d8);
    TStack_68.CurrentBitIndex = iStack_c4;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar14 >> 5;
    TStack_68._28_4_ = iStack_c4;
    TStack_68.BaseBitIndex = local_c0;
    uStack_48 = CONCAT44(uStack_b4,iStack_b8);
    local_e0 = this_00;
    local_d0 = puVar1;
    iStack_bc = iStack_c4;
    local_70 = this_00;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FAudioComponentEvaluationData *)(*pcVar5)();
      return pFVar9;
    }
    uVar12 = *(uint *)&(this_00->Elements).field_0x28;
    if (uVar14 != uVar12) {
      puVar16 = *(undefined1 **)&(this_00->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar13;
        uVar19 = uVar19 + 0x20;
        iVar13 = iVar13 + 1;
        uVar14 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_146794220;
        uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar14 = (int)lVar11 + -1 + uVar19;
      if ((int)uVar12 < (int)uVar14) {
        uVar14 = uVar12;
      }
    }
LAB_146794220:
    while( true ) {
      pTVar6 = local_70;
      if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
          (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_68.CurrentBitIndex == uVar14) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == this_00)) break;
      pTVar15 = (TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *)
                ((longlong)TStack_68.CurrentBitIndex * 0x50 + *(longlong *)&pTVar6->Elements);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pTVar15[1].field_0x4);
      if ((pUVar10 != (UObject *)0x0) &&
         (cVar8 = (**(code **)(*(longlong *)&pUVar10[0xe].field_0x20 + 0xa8))(), cVar8 == '\0')) {
        local_b0 = *(undefined8 *)&pTVar15[1].field_0x4;
        local_a8 = *(undefined8 *)(pTVar15 + 2);
        uStack_a0 = *(undefined8 *)&pTVar15[2].field_0x8;
        local_94 = pTVar15[3].field_0x8;
        if (local_94 != '\0') {
          local_98 = *(undefined4 *)&pTVar15[3].field_0x4;
        }
        local_8c = pTVar15[4].field_0x4;
        if (local_8c != '\0') {
          local_90 = *(undefined4 *)(pTVar15 + 4);
        }
        local_84 = *(char *)(pTVar15 + 5);
        if (local_84 != '\0') {
          local_88 = *(undefined4 *)&pTVar15[4].field_0x8;
        }
        local_80 = pTVar15[5].field_0x4;
        local_7f = pTVar15[5].field_0x5;
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          uVar14 = *(uint *)&pTVar15->field_0x8;
          uVar3 = *(ushort *)pTVar15;
          uVar12 = *(int *)&pTVar15->field_0x4 - uVar14 ^ uVar14 >> 0xd;
          uVar19 = (-0x61c88647 - uVar12) - uVar14 ^ uVar12 << 8;
          uVar17 = (uVar14 - uVar12) - uVar19 ^ uVar19 >> 0xd;
          uVar12 = (uVar12 - uVar17) - uVar19 ^ uVar17 >> 0xc;
          uVar14 = (uVar19 - uVar12) - uVar17 ^ uVar12 << 0x10;
          uVar17 = (uVar17 - uVar14) - uVar12 ^ uVar14 >> 5;
          uVar19 = (uVar12 - uVar17) - uVar14 ^ uVar17 >> 3;
          uVar14 = (uVar14 - uVar19) - uVar17 ^ uVar19 << 10;
          TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
          ::RemoveImpl<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_>
                    (this_00,(uint)(uVar3 >> 2) +
                             ((uVar17 - uVar14) - uVar19 ^ uVar14 >> 0xf) +
                             (uint)uVar3 * 0x40 + -0x61c88647 ^ (uint)uVar3,pTVar15);
        }
        local_40 = (undefined4 *)local_f0;
        local_94 = 0;
        local_38 = &local_b0;
        local_8c = 0;
        local_84 = 0;
        TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&,UE::MovieScene::FAudioComponentEvaluationData_const_&>_>
                  (this_00,(TPairInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&,UE::MovieScene::FAudioComponentEvaluationData_const_&>
                            *)local_f8,(bool *)&local_40);
        return (FAudioComponentEvaluationData *)
               (*(longlong *)&this_00->Elements + (longlong)(int)local_f8._0_4_ * 0x50 + 0x10);
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return (FAudioComponentEvaluationData *)0x0;
}

// GetPrivateStaticClass @ 1467974e0

UClass * __cdecl UMovieSceneAudioSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneAudioSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneAudioSystem",
               &Z_Registration_Info_UClass_UMovieSceneAudioSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneAudioSystem,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneAudioSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneAudioSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneAudioSystem.InnerSingleton;
}

// OnLink @ 1467a9960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneAudioSystem::OnLink(UMovieSceneAudioSystem *this)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> local_18;
  
  UE::MovieScene::FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedAudioStorage>
            ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468),&local_18,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedAudioStorage>)
             UE::MovieScene::FPreAnimatedAudioStorage::StorageID);
  if (&this->PreAnimatedStorage != &local_18) {
    (this->PreAnimatedStorage).Object = local_18.Object;
    local_18.Object = (FPreAnimatedAudioStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedStorage).SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 1467ad260

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

void __thiscall
UMovieSceneAudioSystem::OnRun
          (UMovieSceneAudioSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  TComponentTypeID<UObject_*> TVar4;
  FBaseGraphTask *pFVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [8];
  undefined8 uVar8;
  uint uVar9;
  char cVar10;
  byte bVar11;
  FBuiltInComponentTypes *pFVar12;
  FMovieSceneTracksComponentTypes *pFVar13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar16;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  undefined1 local_190 [32];
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  undefined1 local_160 [8];
  undefined1 local_158 [2];
  undefined2 uStack_156;
  TComponentTypeID<double> TStack_154;
  TComponentTypeID<FMovieSceneAudioComponentData> TStack_152;
  undefined8 uStack_150;
  ForElementType<unsigned_int> local_148;
  ForElementType<unsigned_int> FStack_140;
  undefined1 local_138 [8];
  undefined1 auStack_130 [8];
  FSystemTaskPrerequisites local_128;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_a8;
  TComponentTypeID<FMovieSceneAudioComponentData> local_a6;
  TComponentTypeID<FMovieSceneAudioInputData> local_a4;
  undefined8 local_a2;
  uchar auStack_9a [8];
  ForElementType<unsigned_int> local_92;
  ForElementType<unsigned_int> FStack_8a;
  undefined1 local_82 [18];
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (GEngine != (UEngine *)0x0) {
    cVar10 = (**(code **)(GEngine->_padding_ + 0x418))();
    if (cVar10 != '\0') {
      pFVar12 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar13 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      ResetSharedData(this);
      local_190._24_8_ = &TStatId::TStatId_NAME_None;
      local_128.Prereqs.AllocatorInstance.SecondaryData =
           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
      local_128.Prereqs.ArrayNum = 0;
      local_128.Prereqs.ArrayMax = 4;
      local_128.AllTasks.AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_128.AllTasks.ArrayNum = 0;
      local_128.AllTasks.ArrayMax = 4;
      local_158 = *(undefined1 (*) [2])pFVar12->DoubleResult;
      TStack_154 = pFVar12->DoubleResult[1];
      uStack_150._0_2_ = pFVar12->DoubleResult[2];
      uStack_150._4_2_ = pFVar12->DoubleResult[3];
      local_a8 = pFVar12->InstanceHandle;
      local_a6 = pFVar13->Audio;
      local_a4 = pFVar13->AudioInputs;
      uStack_156 = (TComponentTypeID<UE::MovieScene::FRootInstanceHandle>)0x7fff;
      TStack_152 = (TComponentTypeID<FMovieSceneAudioComponentData>)0x7fff;
      uStack_150._2_1_ = 0xff;
      uStack_150._3_1_ = '\x7f';
      uStack_150._6_1_ = 0xff;
      uStack_150._7_1_ = '\x7f';
      uVar8 = uStack_150;
      local_a2._2_2_ = 0x7fff;
      local_a2._0_2_ = local_158;
      local_a2._4_2_ = TStack_154;
      local_a2._6_2_ = 0x7fff;
      local_148._2_2_ = 0x7fff;
      local_148._0_2_ = pFVar12->DoubleResult[4];
      local_148._4_2_ = pFVar12->DoubleResult[5];
      local_148._6_2_ = 0x7fff;
      uStack_150._2_1_ = (uchar)0x7fff;
      uStack_150._3_1_ = (uchar)(0x7fff >> 8);
      auStack_9a[0] = (uchar)uStack_150;
      auStack_9a[1] = uStack_150._1_1_;
      auStack_9a[2] = uStack_150._2_1_;
      auStack_9a[3] = uStack_150._3_1_;
      auStack_9a[4] = uStack_150._4_1_;
      auStack_9a[5] = uStack_150._5_1_;
      auStack_9a[6] = 0xff;
      auStack_9a[7] = '\x7f';
      FStack_140._2_2_ = 0x7fff;
      FStack_140._0_2_ = pFVar12->DoubleResult[6];
      FStack_140._4_2_ = pFVar12->DoubleResult[7];
      FStack_140._6_2_ = 0x7fff;
      local_138._2_2_ = 0x7fff;
      local_138._0_2_ = pFVar12->DoubleResult[8];
      local_138._4_2_ = pFVar12->StringResult;
      local_138._6_2_ = 0x7fff;
      auStack_130._2_2_ = 0x7fff;
      auStack_130._0_2_ = pFVar12->IntegerResult;
      auStack_130._4_2_ = pFVar12->BoolResult;
      auStack_130._6_2_ = 0x7fff;
      local_190._16_8_ = 0;
      uStack_168 = 0x6ff;
      uStack_164 = uStack_164 & 0xffffff00;
      local_92 = local_148;
      FStack_8a = FStack_140;
      local_82._0_8_ = local_138;
      local_82._8_8_ = auStack_130;
      local_60 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
      uStack_58._4_4_ = uStack_164;
      uStack_58._0_4_ = 0x6ff;
      local_70._0_8_ = 0;
      local_70._8_8_ = &TStatId::TStatId_NAME_None;
      local_198 = (undefined1  [8])this;
      local_170 = local_170 & 0xe0;
      uStack_150 = uVar8;
      UE::MovieScene::
      TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
      ::Dispatch_PerAllocation<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*>
                ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                  *)&local_a8,(FEntityManager *)local_190,
                 (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                 (FSystemSubsequentTasks *)param_1,(UMovieSceneAudioSystem **)0x0);
      if ((FBaseGraphTask *)local_190._0_8_ != (FBaseGraphTask *)0x0) {
        UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                  ((FSystemTaskPrerequisites *)(auStack_130 + 8),(FComponentTypeID)0xffff,
                   (TRefCountPtr<FBaseGraphTask> *)local_190);
      }
      local_190._24_8_ = &TStatId::TStatId_NAME_None;
      local_158 = *(undefined1 (*) [2])&pFVar12->InstanceHandle;
      uStack_156 = *(TComponentTypeID<UE::MovieScene::FRootInstanceHandle> *)&pFVar13->Audio;
      TStack_154 = *(TComponentTypeID<double> *)&pFVar13->AudioTriggerName;
      local_190._16_8_ = 0;
      uStack_168 = 0x6ff;
      uStack_164 = uStack_164 & 0xffffff00;
      FStack_140 = (ForElementType<unsigned_int>)
                   (CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0);
      local_138._4_4_ = uStack_164;
      local_138._0_4_ = 0x6ff;
      uStack_150._0_1_ = '\0';
      uStack_150._1_1_ = '\0';
      uStack_150._2_1_ = '\0';
      uStack_150._3_1_ = '\0';
      uStack_150._4_1_ = '\0';
      uStack_150._5_1_ = '\0';
      uStack_150._6_1_ = '\0';
      uStack_150._7_1_ = '\0';
      local_148 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
      local_198 = (undefined1  [8])this;
      local_170 = local_170 & 0xe0;
      TVar14 = UE::MovieScene::
               TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
               ::
               Dispatch_PerAllocation<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*>
                         ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                           *)local_158,(FEntityManager *)local_160,
                          (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                          (FSystemSubsequentTasks *)param_1,(UMovieSceneAudioSystem **)0x0);
      uVar8 = local_190._0_8_;
      pFVar5 = (FBaseGraphTask *)local_190._0_8_;
      if ((FBaseGraphTask *)local_190 != TVar14.Reference) {
                    /* WARNING: Load size is inaccurate */
        pFVar5 = *TVar14.Reference;
        *(undefined8 *)TVar14.Reference = 0;
        if ((FBaseGraphTask *)local_190._0_8_ != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = (undefined1 *)(local_190._0_8_ + 0x30);
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            puVar6 = *(undefined8 **)local_190._0_8_;
            local_190._0_8_ = pFVar5;
            (*(code *)*puVar6)(uVar8,1);
            pFVar5 = (FBaseGraphTask *)local_190._0_8_;
          }
        }
      }
      local_190._0_8_ = pFVar5;
      if (local_160 != (undefined1  [8])0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (local_160 != (undefined1  [8])0x0)) {
          (*(code *)**(undefined8 **)local_160)(local_160,1);
        }
      }
      if ((FBaseGraphTask *)local_190._0_8_ != (FBaseGraphTask *)0x0) {
        UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                  ((FSystemTaskPrerequisites *)(auStack_130 + 8),(FComponentTypeID)0xffff,
                   (TRefCountPtr<FBaseGraphTask> *)local_190);
      }
      uVar9 = uStack_164;
      local_170 = local_170 & 0xe0;
      local_190._24_8_ = &TStatId::TStatId_NAME_None;
      TVar4 = pFVar12->BoundObject;
      local_198._2_2_ = 0x7fff;
      local_198._0_2_ = TVar4;
      auVar7 = local_198;
      uStack_156 = pFVar12->RootInstanceHandle;
      TStack_154 = *(TComponentTypeID<double> *)&pFVar12->InstanceHandle;
      TStack_152 = pFVar13->Audio;
      uStack_164 = uStack_164 & 0xffffff00;
      local_190._16_8_ = 0;
      uStack_168 = 0x6ff;
      iVar3 = *(int *)(this->_padding_ + 0x2c8);
      local_198[0] = TVar4._0_1_;
      local_198[1] = TVar4._1_1_;
      local_198[2] = (undefined1)0x7fff;
      local_198[3] = (undefined1)(0x7fff >> 8);
      uStack_150._4_1_ = local_198[0];
      uStack_150._5_1_ = local_198[1];
      uStack_150._6_1_ = local_198[2];
      uStack_150._7_1_ = local_198[3];
      uStack_150._0_4_ = *(undefined4 *)pFVar12->DoubleResult;
      auStack_130 = (undefined1  [8])(CONCAT44(uVar9,iVar3) & 0xffffff00ffffffff);
      local_148 = (ForElementType<unsigned_int>)0x0;
      FStack_140 = (ForElementType<unsigned_int>)&TStatId::TStatId_NAME_None;
      if ((iVar3 == 1) || (iVar3 == 0x101)) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      local_138._1_7_ = uStack_16f;
      local_138[0] = local_170 | bVar11;
      local_198 = auVar7;
      local_160 = (undefined1  [8])this;
      UE::MovieScene::
      TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
      ::Dispatch_PerAllocation<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*>
                ((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                  *)local_158,(FEntityManager *)local_198,
                 (FSystemTaskPrerequisites *)(this->_padding_ + 0x28),
                 (FSystemSubsequentTasks *)(auStack_130 + 8),(UMovieSceneAudioSystem **)param_2);
      if (local_198 != (undefined1  [8])0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_198 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_198)(local_198,1);
        }
      }
      if ((FBaseGraphTask *)local_190._0_8_ != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = (undefined1 *)(local_190._0_8_ + 0x30);
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && ((FBaseGraphTask *)local_190._0_8_ != (FBaseGraphTask *)0x0)) {
          (*(code *)**(undefined8 **)local_190._0_8_)(local_190._0_8_,1);
        }
      }
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_128.AllTasks;
      if (local_128.AllTasks.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar15 = local_128.AllTasks.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar15,local_128.AllTasks.ArrayNum);
      if (local_128.AllTasks.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_128.AllTasks.AllocatorInstance.SecondaryData);
      }
      FVar16 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
               (auStack_130 + 8);
      if (local_128.Prereqs.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar16 = local_128.Prereqs.AllocatorInstance.SecondaryData;
      }
      DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                ((FPrerequisite *)FVar16,local_128.Prereqs.ArrayNum);
      if (local_128.Prereqs.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FMemory::Free((void *)local_128.Prereqs.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 1467afc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieSceneAudioSystem::OnSchedulePersistentTasks
          (UMovieSceneAudioSystem *this,IEntitySystemScheduler *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStackY_2c8 [32];
  FTaskID local_288;
  TComponentTypeID<UObject_*> local_284;
  undefined2 uStack_282;
  FTaskID local_280;
  FTaskID local_27c;
  FTaskID local_278;
  UMovieSceneAudioSystem *local_270;
  UMovieSceneAudioSystem *local_268;
  UMovieSceneAudioSystem *local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [4];
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_244;
  TComponentTypeID<FMovieSceneAudioComponentData> local_242;
  TComponentTypeID<double> local_240;
  TComponentTypeID<double> local_23e;
  uchar local_23c [4];
  uchar local_238 [8];
  TStatIdData *pTStack_230;
  ForElementType<unsigned_int> local_228;
  ulonglong uStack_220;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_218;
  byte local_208;
  undefined1 local_200 [16];
  ulonglong local_1f0;
  undefined1 local_1e8 [16];
  ulonglong local_1d8;
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [16];
  byte local_1a0;
  undefined7 uStack_19f;
  undefined4 uStack_198;
  TTypeCompatibleBytes<unsigned_int> TStack_194;
  undefined8 local_188;
  TStatIdData *pTStack_180;
  byte local_178;
  undefined7 uStack_177;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined1 local_160 [16];
  byte local_150;
  undefined7 uStack_14f;
  undefined4 uStack_148;
  uint uStack_144;
  code *local_140;
  undefined1 local_138;
  UMovieSceneAudioSystem *local_130;
  undefined1 local_128 [8];
  UMovieSceneAudioSystem *local_120;
  undefined1 local_118;
  UMovieSceneAudioSystem *local_110;
  undefined1 local_108;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_100;
  TComponentTypeID<FMovieSceneAudioComponentData> local_fe;
  TComponentTypeID<FName> local_fc;
  undefined8 local_f8;
  TStatIdData *pTStack_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  TComponentTypeID<double> local_d8;
  uchar auStack_d6 [2];
  TComponentTypeID<double> TStack_d4;
  uchar auStack_d2 [2];
  TComponentTypeID<double> TStack_d0;
  uchar auStack_ce [2];
  TComponentTypeID<double> TStack_cc;
  uchar auStack_ca [2];
  TComponentTypeID<double> local_c8;
  uchar auStack_c6 [2];
  TComponentTypeID<double> TStack_c4;
  uchar auStack_c2 [2];
  TComponentTypeID<double> TStack_c0;
  uchar auStack_be [2];
  TComponentTypeID<double> TStack_bc;
  uchar auStack_ba [2];
  TComponentTypeID<double> local_b8;
  uchar auStack_b6 [2];
  TComponentTypeID<FString> TStack_b4;
  uchar auStack_b2 [2];
  TComponentTypeID<__int64> TStack_b0;
  uchar auStack_ae [2];
  TComponentTypeID<bool> TStack_ac;
  uchar auStack_aa [2];
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_a8;
  TComponentTypeID<FMovieSceneAudioComponentData> local_a6;
  TComponentTypeID<FMovieSceneAudioInputData> local_a4;
  undefined8 local_a2;
  TTypeCompatibleBytes<unsigned_int> aTStack_9a [2];
  TTypeCompatibleBytes<unsigned_int> local_92 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_8a [2];
  TTypeCompatibleBytes<unsigned_int> local_82 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_7a [2];
  undefined8 local_70;
  TStatIdData *pTStack_68;
  ulonglong local_60;
  TTypeCompatibleBytes<unsigned_int> aTStack_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (GEngine != (UEngine *)0x0) {
    cVar5 = (**(code **)(GEngine->_padding_ + 0x418))();
    if (cVar5 != '\0') {
      pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      local_208 = local_208 & 0xe0;
      local_218.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
      local_138 = 0;
      local_218.Object = (ITaskContext *)0x15132a278;
      local_140 = UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneAudioSystem>::Execute;
      pTVar10 = ::operator_new(0x28);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        local_258._0_8_ = ___xmm_00000000000000000000000000000010;
        local_258._8_8_ = _UNK_150651568;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TMemberFunctionTaskWrapper_VUMovieSceneAudioSystem___MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar10[1]._padding_ =
             (longlong)
             &___7__TMemberFunctionTaskWrapper_VUMovieSceneAudioSystem___MovieScene_UE__6B_;
        pTVar10[2]._padding_ = (longlong)ResetSharedData;
        *(UMovieSceneAudioSystem **)&pTVar10[1].SharedReferenceCount = this;
        if (pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        local_258._0_8_ = pTVar10 + 1;
        local_258._8_8_ = pTVar10;
      }
      UE::MovieScene::IEntitySystemScheduler::AddTask
                (param_1,(FTaskParams *)&local_288,&local_218,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_258);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      local_d8 = pFVar8->DoubleResult[0];
      TStack_d4 = pFVar8->DoubleResult[1];
      TStack_d0 = pFVar8->DoubleResult[2];
      TStack_cc = pFVar8->DoubleResult[3];
      local_c8 = pFVar8->DoubleResult[4];
      TStack_c4 = pFVar8->DoubleResult[5];
      TStack_c0 = pFVar8->DoubleResult[6];
      TStack_bc = pFVar8->DoubleResult[7];
      local_b8 = pFVar8->DoubleResult[8];
      TStack_b4 = pFVar8->StringResult;
      TStack_b0 = pFVar8->IntegerResult;
      TStack_ac = pFVar8->BoolResult;
      local_a8 = pFVar8->InstanceHandle;
      local_a6 = pFVar9->Audio;
      local_a4 = pFVar9->AudioInputs;
      auStack_d6[0] = 0xff;
      auStack_d6[1] = '\x7f';
      auStack_d2[0] = 0xff;
      auStack_d2[1] = '\x7f';
      auStack_ce[0] = 0xff;
      auStack_ce[1] = '\x7f';
      auStack_ca[0] = 0xff;
      auStack_ca[1] = '\x7f';
      local_a2._2_2_ = 0x7fff;
      local_a2._0_2_ = local_d8;
      local_a2._4_2_ = TStack_d4;
      local_a2._6_2_ = 0x7fff;
      aTStack_9a[0].Pad[2] = 0xff;
      aTStack_9a[0].Pad[3] = '\x7f';
      aTStack_9a[0].Pad._0_2_ = TStack_d0;
      aTStack_9a[1].Pad._0_2_ = TStack_cc;
      aTStack_9a[1].Pad[2] = 0xff;
      aTStack_9a[1].Pad[3] = '\x7f';
      auStack_c6[0] = 0xff;
      auStack_c6[1] = '\x7f';
      auStack_c2[0] = 0xff;
      auStack_c2[1] = '\x7f';
      auStack_be[0] = 0xff;
      auStack_be[1] = '\x7f';
      auStack_ba[0] = 0xff;
      auStack_ba[1] = '\x7f';
      local_92[0].Pad[2] = 0xff;
      local_92[0].Pad[3] = '\x7f';
      local_92[0].Pad._0_2_ = local_c8;
      local_92[1].Pad._0_2_ = TStack_c4;
      local_92[1].Pad[2] = 0xff;
      local_92[1].Pad[3] = '\x7f';
      aTStack_8a[0].Pad[2] = 0xff;
      aTStack_8a[0].Pad[3] = '\x7f';
      aTStack_8a[0].Pad._0_2_ = TStack_c0;
      aTStack_8a[1].Pad._0_2_ = TStack_bc;
      aTStack_8a[1].Pad[2] = 0xff;
      aTStack_8a[1].Pad[3] = '\x7f';
      auStack_b6[0] = 0xff;
      auStack_b6[1] = '\x7f';
      auStack_b2[0] = 0xff;
      auStack_b2[1] = '\x7f';
      auStack_ae[0] = 0xff;
      auStack_ae[1] = '\x7f';
      auStack_aa[0] = 0xff;
      auStack_aa[1] = '\x7f';
      local_82[0].Pad[2] = 0xff;
      local_82[0].Pad[3] = '\x7f';
      local_82[0].Pad._0_2_ = local_b8;
      local_82[1].Pad._0_2_ = TStack_b4;
      local_82[1].Pad[2] = 0xff;
      local_82[1].Pad[3] = '\x7f';
      aTStack_7a[0].Pad[2] = 0xff;
      aTStack_7a[0].Pad[3] = '\x7f';
      aTStack_7a[0].Pad._0_2_ = TStack_b0;
      aTStack_7a[1].Pad._0_2_ = TStack_ac;
      aTStack_7a[1].Pad[2] = 0xff;
      aTStack_7a[1].Pad[3] = '\x7f';
      local_1b0._0_8_ = 0;
      local_1b0._8_8_ = &TStatId::TStatId_NAME_None;
      uStack_198 = 0x6ff;
      TStack_194.Pad = TStack_194.Pad & 0xffffff00;
      local_60 = CONCAT71(uStack_19f,local_1a0) & 0xffffffffffffffe0;
      aTStack_58[1].Pad[0] = TStack_194.Pad[0];
      aTStack_58[1].Pad[1] = TStack_194.Pad[1];
      aTStack_58[1].Pad[2] = TStack_194.Pad[2];
      aTStack_58[1].Pad[3] = TStack_194.Pad[3];
      aTStack_58[0].Pad[0] = 0xff;
      aTStack_58[0].Pad[1] = '\x06';
      aTStack_58[0].Pad[2] = '\0';
      aTStack_58[0].Pad[3] = '\0';
      local_128[0] = 3;
      local_200._8_8_ = &TStatId::TStatId_NAME_None;
      local_200._0_8_ = L"struct UE::MovieScene::FGatherAudioInputs";
      local_130 = (UMovieSceneAudioSystem *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FGatherAudioInputs,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                  ::ScheduledRun_PerAllocation;
      local_70._0_1_ = '\0';
      local_70._1_1_ = '\0';
      local_70._2_1_ = '\0';
      local_70._3_1_ = '\0';
      local_70._4_1_ = '\0';
      local_70._5_1_ = '\0';
      local_70._6_1_ = '\0';
      local_70._7_1_ = '\0';
      pTStack_68 = &TStatId::TStatId_NAME_None;
      local_1f0._1_7_ = (undefined7)(local_60 >> 8);
      local_1f0 = CONCAT71(local_1f0._1_7_,local_1a0) & 0xffffffffffffffe0;
      local_270 = this;
      local_1a0 = local_1a0 & 0xe0;
      UE::MovieScene::
      TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
      ::ScheduleImpl<UE::MovieScene::FGatherAudioInputs,UMovieSceneAudioSystem_*>
                ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FMovieSceneAudioInputData>,UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>_>
                  *)&local_a8,(FEntityManager *)&local_280,
                 (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_200,&local_130);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_288,local_280);
      local_100 = pFVar8->InstanceHandle;
      local_fe = pFVar9->Audio;
      local_fc = pFVar9->AudioTriggerName;
      local_188 = 0;
      pTStack_180 = &TStatId::TStatId_NAME_None;
      uStack_170 = 0x6ff;
      uStack_16c = uStack_16c & 0xffffff00;
      local_e8 = CONCAT71(uStack_177,local_178) & 0xffffffffffffffe0;
      uStack_e0._4_4_ = uStack_16c;
      uStack_e0._0_4_ = 0x6ff;
      local_1e8._8_8_ = &TStatId::TStatId_NAME_None;
      local_1e8._0_8_ = L"struct UE::MovieScene::FGatherAudioTriggers";
      local_120 = (UMovieSceneAudioSystem *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FGatherAudioTriggers,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                  ::ScheduledRun_PerAllocation;
      local_1d8._1_7_ = (undefined7)(local_e8 >> 8);
      local_1d8 = CONCAT71(local_1d8._1_7_,local_178) & 0xffffffffffffffe0;
      local_f8 = 0;
      pTStack_f0 = &TStatId::TStatId_NAME_None;
      local_118 = 3;
      local_268 = this;
      local_178 = local_178 & 0xe0;
      UE::MovieScene::
      TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
      ::ScheduleImpl<UE::MovieScene::FGatherAudioTriggers,UMovieSceneAudioSystem_*>
                ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<FName>_>
                  *)&local_100,(FEntityManager *)&local_27c,
                 (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_1e8,&local_120);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_288,local_27c);
      uVar4 = uStack_144;
      local_23e = pFVar8->DoubleResult[1];
      local_150 = local_150 & 0xe0;
      local_160._8_8_ = &TStatId::TStatId_NAME_None;
      local_284 = pFVar8->BoundObject;
      local_248._2_2_ = pFVar8->RootInstanceHandle;
      local_244 = pFVar8->InstanceHandle;
      local_242 = pFVar9->Audio;
      local_240 = pFVar8->DoubleResult[0];
      uStack_282._0_1_ = 0xff;
      uStack_282._1_1_ = '\x7f';
      uVar3 = _local_284;
      local_160._0_8_ = 0;
      local_23c[0] = local_284._0_1_;
      local_23c[1] = local_284._1_1_;
      local_23c[2] = 0xff;
      local_23c[3] = '\x7f';
      uStack_148 = 0x6ff;
      uStack_144 = uStack_144 & 0xffffff00;
      local_238[0] = '\0';
      local_238[1] = '\0';
      local_238[2] = '\0';
      local_238[3] = '\0';
      local_238[4] = '\0';
      local_238[5] = '\0';
      local_238[6] = '\0';
      local_238[7] = '\0';
      pTStack_230 = &TStatId::TStatId_NAME_None;
      iVar1 = *(int *)(this->_padding_ + 0x2c8);
      uStack_220 = CONCAT44(uVar4,iVar1) & 0xffffff00ffffffff;
      if ((iVar1 == 1) || (iVar1 == 0x101)) {
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
      local_228._1_7_ = uStack_14f;
      local_228._0_1_ = bVar7 | local_150;
      local_1d0._17_7_ = uStack_14f;
      local_1d0[0x10] = bVar7 | local_150;
      local_1d0._8_8_ = &TStatId::TStatId_NAME_None;
      local_1d0._0_8_ = L"struct UE::MovieScene::FEvaluateAudio";
      local_110 = (UMovieSceneAudioSystem *)
                  UE::MovieScene::
                  TScheduledEntityTask<UE::MovieScene::FEvaluateAudio,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                  ::ScheduledRun_PerAllocation;
      local_108 = 3;
      _local_284 = uVar3;
      local_260 = this;
      UE::MovieScene::
      TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
      ::ScheduleImpl<UE::MovieScene::FEvaluateAudio,UMovieSceneAudioSystem_*>
                ((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneAudioComponentData>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<UObject_*>_>
                  *)local_248,(FEntityManager *)&local_278,
                 (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_1d0,&local_110);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_280,local_278);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_27c,local_278);
      UE::MovieScene::IEntitySystemScheduler::AddPrerequisite(param_1,local_288,local_278);
    }
  }
  return;
}

// OnUnlink @ 1467b0680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneAudioSystem::OnUnlink(UMovieSceneAudioSystem *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  UObject *this_00;
  UObject *this_01;
  UObject *this_02;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  int *piVar18;
  TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
  *this_03;
  uint uVar19;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  TMap<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
  *local_138;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  this_03 = (TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
             *)&this->AudioComponentsByActorKey;
  bVar6 = false;
  bVar10 = false;
  local_168 = &(this->AudioComponentsByActorKey).field_0x10;
  local_res10[0] = 0;
  iVar2 = *(int *)&(this->AudioComponentsByActorKey).field_0x28;
  iStack_170 = 0;
  local_158 = 0;
  uStack_16c = 1;
  iStack_15c = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(this->AudioComponentsByActorKey).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_168;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      iStack_15c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_1467b0730;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_16c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_16c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_148 = (int)lVar11;
    iStack_15c = local_158 + -1 + local_148;
    if (iVar2 < iStack_15c) {
      iStack_15c = iVar2;
    }
  }
LAB_1467b0730:
  uVar12 = *(uint *)&(this->AudioComponentsByActorKey).field_0x28;
  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AudioComponentsByActorKey).field_0x10;
  iStack_150 = *(int *)&(this->AudioComponentsByActorKey).field_0x8 -
               *(int *)&(this->AudioComponentsByActorKey).field_0x34;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_16c,iStack_170);
  uStack_160 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_15c;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_158;
  uStack_a0 = CONCAT44(uStack_14c,iStack_150);
  local_res20 = uVar12;
  local_178 = (TMap<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
               *)this_03;
  local_138 = this_03;
  local_130 = pTVar17;
  local_c8 = this_03;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_168;
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->AudioComponentsByActorKey).field_0x28;
  bVar9 = false;
  bVar5 = false;
  if (uVar12 != uVar3) {
    puVar14 = *(undefined1 **)&(this->AudioComponentsByActorKey).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar17;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (bVar9 = bVar10, bVar5 = bVar6, uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar3;
      local_res20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1467b0870;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_144 = (int)lVar11;
    uVar12 = local_144 + -1 + uVar19;
    local_res20 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
      local_res20 = uVar3;
    }
  }
LAB_1467b0870:
  do {
    pTVar8 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar12) && (TStack_c0.Array == pTVar17)) &&
       (pTVar8 == this_03)) {
      TSet<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>,FDefaultSetAllocator>
      ::Reset(this_03);
      TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
               *)&this->AudioInputsBySectionKey);
      return;
    }
    iStack_120 = 0;
    local_108 = 0;
    piVar18 = (int *)((longlong)TStack_c0.CurrentBitIndex * 0x60 + *(longlong *)&pTVar8->Elements);
    uStack_11c = 1;
    iVar2 = piVar18[0xc];
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar18 + 6);
    local_128 = (longlong *)(piVar18 + 2);
    iStack_10c = 0;
    if (iVar2 != 0) {
      pTVar15 = pTVar17;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar18 + 10) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar18 + 10);
      }
      uVar12 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
      while (uVar12 == 0) {
        lVar11 = (longlong)iStack_120;
        local_108 = local_108 + 0x20;
        iStack_120 = iStack_120 + 1;
        iStack_10c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_1467b093f;
        uVar12 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uStack_11c = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_11c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_140 = (int)lVar11;
      iStack_10c = local_108 + -1 + local_140;
      if (iVar2 < iStack_10c) {
        iStack_10c = iVar2;
      }
    }
LAB_1467b093f:
    uVar12 = piVar18[0xc];
    iStack_104 = iStack_15c;
    iStack_100 = piVar18[4] - piVar18[0xf];
    uVar19 = uVar12 & 0xffffffe0;
    TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
    uStack_110 = 0xffffffff;
    TStack_f0.CurrentBitIndex = iStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_f0._28_4_ = iStack_15c;
    TStack_f0.BaseBitIndex = local_108;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    local_118 = pTVar17;
    local_f8 = local_128;
    TStack_f0.Array = pTVar17;
    if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = piVar18[0xc];
    if (uVar12 != uVar3) {
      pTVar15 = pTVar17;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar18 + 10) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar18 + 10);
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) &
               *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar19 = uVar19 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1467b0a50;
        uVar12 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_13c = (int)lVar11;
      uVar12 = local_13c + -1 + uVar19;
      if ((int)uVar3 < (int)uVar12) {
        uVar12 = uVar3;
      }
    }
LAB_1467b0a50:
    while( true ) {
      plVar7 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_f0.CurrentBitIndex == uVar12) && (TStack_f0.Array == pTVar17)) &&
         (plVar7 == (longlong *)(piVar18 + 2))) break;
      lVar11 = *plVar7 + (longlong)TStack_f0.CurrentBitIndex * 0x50;
      this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar11 + 0x10));
      if (this_00 != (UObject *)0x0) {
        local_188.ObjectIndex = *piVar18;
        local_188.ObjectSerialNumber = piVar18[1];
        this_01 = FWeakObjectPtr::Get(&local_188);
        local_180.ObjectIndex = *(int *)(lVar11 + 4);
        local_180.ObjectSerialNumber = *(int *)(lVar11 + 8);
        this_02 = FWeakObjectPtr::Get(&local_180);
        if (2 < (byte)LogMovieScene._0_1_) {
          if (this_01 != (UObject *)0x0) {
            bVar5 = true;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,local_78,(UObject *)0x0);
          }
          if (this_02 != (UObject *)0x0) {
            bVar9 = true;
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_88,(UObject *)0x0);
          }
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_98,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if ((bVar9) &&
             (bVar9 = false, local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if ((bVar5) &&
             (bVar5 = false,
             local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    pTVar17 = local_130;
    this_03 = local_138;
    uVar12 = local_res20;
  } while( true );
}

// ResetSharedData @ 1467ba400

void __thiscall UMovieSceneAudioSystem::ResetSharedData(UMovieSceneAudioSystem *this)

{
  undefined1 *puVar1;
  TMap<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  TMap<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int iVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_11c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData,0>,FDefaultSetAllocator>
           *)&this->AudioInputsBySectionKey);
  iVar5 = *(int *)&(this->AudioComponentsByActorKey).field_0x28;
  puVar1 = &(this->AudioComponentsByActorKey).field_0x10;
  iVar17 = 0;
  iVar20 = 0;
  pTVar2 = &this->AudioComponentsByActorKey;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->AudioComponentsByActorKey).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      iVar20 = iVar20 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1467ba4c1;
      uVar16 = puVar21[lVar12 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar10 = local_res18 + -1 + iVar20;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_1467ba4c1:
  uVar16 = *(uint *)&(this->AudioComponentsByActorKey).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar9,iVar17);
  TStack_98.CurrentBitIndex = iVar10;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar20;
  uStack_78 = CONCAT44(uStack_11c,
                       *(int *)&(this->AudioComponentsByActorKey).field_0x8 -
                       *(int *)&(this->AudioComponentsByActorKey).field_0x34);
  local_a0 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->AudioComponentsByActorKey).field_0x28;
  if (uVar16 != uVar9) {
    puVar18 = *(undefined1 **)&(this->AudioComponentsByActorKey).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1467ba5d0;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar16 = local_res20 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_1467ba5d0:
  do {
    pTVar7 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar16) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      return;
    }
    iVar20 = 0;
    iVar17 = 0;
    lVar12 = (longlong)TStack_98.CurrentBitIndex * 0x60 + *(longlong *)pTVar7;
    uVar9 = 1;
    iVar5 = *(int *)(lVar12 + 0x30);
    pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x18);
    iVar11 = 0;
    if (iVar5 != 0) {
      pTVar19 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28);
      }
      uVar14 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar20;
        iVar17 = iVar17 + 0x20;
        iVar20 = iVar20 + 1;
        iVar11 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1467ba68d;
        uVar14 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar9 = -uVar14 & uVar14;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar17 + -1 + (int)lVar13;
      if (iVar5 < iVar11) {
        iVar11 = iVar5;
      }
    }
LAB_1467ba68d:
    uVar14 = *(uint *)(lVar12 + 0x30);
    uVar15 = uVar14 & 0xffffffe0;
    TStack_c8._padding_ = CONCAT44(uVar9,iVar20);
    TStack_c8.CurrentBitIndex = iVar11;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar14 >> 5;
    TStack_c8._28_4_ = iVar10;
    TStack_c8.BaseBitIndex = iVar17;
    uStack_a8 = CONCAT44(uStack_d4,*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c));
    TStack_c8.Array = pTVar3;
    if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)(lVar12 + 0x30);
    if (uVar14 != uVar9) {
      pTVar19 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar20;
        uVar15 = uVar15 + 0x20;
        iVar20 = iVar20 + 1;
        uVar14 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_1467ba791;
        uVar14 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar15;
      if ((int)uVar9 < (int)uVar14) {
        uVar14 = uVar9;
      }
    }
LAB_1467ba791:
    while( true ) {
      if (*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c) != (int)uStack_a8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_c8.CurrentBitIndex == uVar14) && (TStack_c8.Array == pTVar3)) break;
      *(undefined1 *)(*(longlong *)(lVar12 + 8) + 0x40 + (longlong)TStack_c8.CurrentBitIndex * 0x50)
           = 0;
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// StaticRegisterNativesUMovieSceneAudioSystem @ 1467c2640

void __cdecl UMovieSceneAudioSystem::StaticRegisterNativesUMovieSceneAudioSystem(void)

{
  return;
}

// StopSound @ 1467c2aa0

void __thiscall
UMovieSceneAudioSystem::StopSound
          (UMovieSceneAudioSystem *this,FInstanceHandle param_1,FObjectKey param_2,
          FObjectKey param_3)

{
  TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
  *this_00;
  FAudioComponentEvaluationData *this_01;
  UObject *pUVar1;
  FObjectKey local_res18 [2];
  FInstanceHandle local_18;
  FObjectKey local_14;
  
  local_res18[0] = param_2;
  this_00 = TMapBase<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
            ::Find((TMapBase<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>,0>_>
                    *)&this->AudioComponentsByActorKey,local_res18);
  if (this_00 !=
      (TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
       *)0x0) {
    local_18 = param_1;
    local_14 = param_3;
    this_01 = TMapBase<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
              ::Find((TMapBase<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
                      *)this_00,(TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *)&local_18);
    if (this_01 != (FAudioComponentEvaluationData *)0x0) {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
      if (pUVar1 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar1 + 0x668))(pUVar1);
      }
      this_01->bAudioComponentHasBeenPlayed = false;
    }
  }
  return;
}

