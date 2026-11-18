// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 1467ce230

UClass * __cdecl UMovieSceneSkeletalAnimationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationSystem",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneSkeletalAnimationSystem,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.InnerSingleton;
}

// UMovieSceneSkeletalAnimationSystem @ 14680bd10

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSkeletalAnimationSystem * __thiscall
UMovieSceneSkeletalAnimationSystem::UMovieSceneSkeletalAnimationSystem
          (UMovieSceneSkeletalAnimationSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSkeletalAnimationSystem__6B_;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations = 0;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations.field_0x8 = 0;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations.field_0x20 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x28 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x34 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations.field_0x40 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x48 = 0;
  *(undefined8 *)&(this->SystemData).MontageData = 0;
  *(undefined8 *)&(this->SystemData).MontageData.field_0x8 = 0;
  *(undefined8 *)&(this->SystemData).MontageData.field_0x20 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x28 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x34 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemData).MontageData.field_0x40 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x48 = 0;
  (this->GroupingKey).Index = -1;
  return this;
}

// UMovieSceneSkeletalAnimationSystem @ 14680bdc0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSkeletalAnimationSystem * __thiscall
UMovieSceneSkeletalAnimationSystem::UMovieSceneSkeletalAnimationSystem
          (UMovieSceneSkeletalAnimationSystem *this,FObjectInitializer *param_1)

{
  EEntitySystemCategory EVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  UClass *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSkeletalAnimationSystem__6B_;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations = 0;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations.field_0x8 = 0;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations.field_0x20 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x28 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x34 = 0;
  *(undefined8 *)&(this->SystemData).SkeletalAnimations.field_0x40 = 0;
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x48 = 0;
  *(undefined8 *)&(this->SystemData).MontageData = 0;
  *(undefined8 *)&(this->SystemData).MontageData.field_0x8 = 0;
  *(undefined8 *)&(this->SystemData).MontageData.field_0x20 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x28 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x34 = 0;
  *(undefined8 *)&(this->SystemData).MontageData.field_0x40 = 0;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x48 = 0;
  (this->GroupingKey).Index = -1;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> *)&this->_padding_ =
       pFVar2->SkeletalAnimation;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0xc;
  EVar1 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->_padding_ = (EEntitySystemCategory)this->_padding_ | EVar1;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = UMovieSceneObjectPropertySystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    local_res8[0] = Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    local_res18[0] = (UClass *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieSceneSkeletalAnimationSystem @ 14680fd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSystem::~UMovieSceneSkeletalAnimationSystem
          (UMovieSceneSkeletalAnimationSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSkeletalAnimationSystem__6B_;
  *(undefined4 *)&(this->SystemData).MontageData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemData).MontageData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SystemData).MontageData);
  *(undefined4 *)&(this->SystemData).SkeletalAnimations.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemData).SkeletalAnimations.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemData);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// CleanSystemData @ 146820eb0

void __thiscall
UMovieSceneSkeletalAnimationSystem::CleanSystemData(UMovieSceneSkeletalAnimationSystem *this)

{
  int iVar1;
  UObject *pUVar2;
  TMap<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>_>
  *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  FWeakObjectPtr local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  UE::MovieScene::FSkeletalAnimationSystemData::ResetSkeletalAnimations(&this->SystemData);
  pTVar3 = &(this->SystemData).MontageData;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
              *)pTVar3);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
              *)pTVar3;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar6 = (longlong)(int)uVar4 * 0x60;
      local_res8.ObjectIndex = *(int *)(lVar6 + *local_48);
      local_res8.ObjectSerialNumber = *(int *)(lVar6 + 4 + *local_48);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar2 == (UObject *)0x0) {
        TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar4);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar1 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar1 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar1)) || (iVar1 < local_18->HashSize)) {
        local_18->HashSize = iVar1;
        TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// GetInitialActorTransform @ 146834690

TOptional<UE::Math::TTransform<double>_> * __thiscall
UMovieSceneSkeletalAnimationSystem::GetInitialActorTransform
          (UMovieSceneSkeletalAnimationSystem *this,
          TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,UObject *param_1)

{
  double dVar1;
  int iVar2;
  FWeakObjectPtr FVar3;
  UClass *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  
  __return_storage_ptr__->bIsSet = false;
  FVar3 = (FWeakObjectPtr)ResolveSkeletalMeshComponentBinding(param_1);
  if (FVar3 != (FWeakObjectPtr)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = FVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      local_res20 = local_res10;
      iVar2 = TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
                          *)&this->SystemData,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)
                         &local_res20);
      if ((((iVar2 != -1) &&
           (lVar5 = (longlong)iVar2 * 0x420 + *(longlong *)&(this->SystemData).SkeletalAnimations,
           lVar5 != 0)) && (lVar5 != -0x10)) &&
         ((TOptional<UE::Math::TTransform<double>_> *)(lVar5 + 0x360) != __return_storage_ptr__)) {
        if (*(char *)(lVar5 + 0x3c0) != '\0') {
          dVar1 = *(double *)(lVar5 + 0x368);
          (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[0] =
               (((TOptional<UE::Math::TTransform<double>_> *)(lVar5 + 0x360))->TypedValue).Rotation.
               XY.m128d_f64[0];
          (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[1] = dVar1;
          dVar1 = *(double *)(lVar5 + 0x378);
          (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[0] = *(double *)(lVar5 + 0x370)
          ;
          (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[1] = dVar1;
          dVar1 = *(double *)(lVar5 + 0x388);
          (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[0] =
               *(double *)(lVar5 + 0x380);
          (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[1] = dVar1;
          dVar1 = *(double *)(lVar5 + 0x398);
          (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[0] =
               *(double *)(lVar5 + 0x390);
          (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[1] = dVar1;
          dVar1 = *(double *)(lVar5 + 0x3a8);
          (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[0] = *(double *)(lVar5 + 0x3a0);
          (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[1] = dVar1;
          dVar1 = *(double *)(lVar5 + 0x3b8);
          (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar5 + 0x3b0);
          (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[1] = dVar1;
          __return_storage_ptr__->bIsSet = true;
          return __return_storage_ptr__;
        }
        if (__return_storage_ptr__->bIsSet != false) {
          __return_storage_ptr__->bIsSet = false;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetInverseMeshToActorRotation @ 1468347e0

TOptional<UE::Math::TQuat<double>_> * __thiscall
UMovieSceneSkeletalAnimationSystem::GetInverseMeshToActorRotation
          (UMovieSceneSkeletalAnimationSystem *this,
          TOptional<UE::Math::TQuat<double>_> *__return_storage_ptr__,UObject *param_1)

{
  double dVar1;
  int iVar2;
  FWeakObjectPtr FVar3;
  UClass *pUVar4;
  longlong lVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  
  __return_storage_ptr__->bIsSet = false;
  FVar3 = (FWeakObjectPtr)ResolveSkeletalMeshComponentBinding(param_1);
  if (FVar3 != (FWeakObjectPtr)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = FVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      local_res20 = local_res10;
      iVar2 = TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
                          *)&this->SystemData,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)
                         &local_res20);
      if ((((iVar2 != -1) &&
           (lVar5 = (longlong)iVar2 * 0x420 + *(longlong *)&(this->SystemData).SkeletalAnimations,
           lVar5 != 0)) && (lVar5 != -0x10)) &&
         ((TOptional<UE::Math::TQuat<double>_> *)(lVar5 + 0x3d0) != __return_storage_ptr__)) {
        if (*(char *)(lVar5 + 0x3f0) != '\0') {
          dVar1 = *(double *)(lVar5 + 0x3d8);
          (__return_storage_ptr__->TypedValue).X =
               (((TOptional<UE::Math::TQuat<double>_> *)(lVar5 + 0x3d0))->TypedValue).X;
          (__return_storage_ptr__->TypedValue).Y = dVar1;
          dVar1 = *(double *)(lVar5 + 1000);
          (__return_storage_ptr__->TypedValue).Z = *(double *)(lVar5 + 0x3e0);
          (__return_storage_ptr__->TypedValue).W = dVar1;
          __return_storage_ptr__->bIsSet = true;
          return __return_storage_ptr__;
        }
        if (__return_storage_ptr__->bIsSet != false) {
          __return_storage_ptr__->bIsSet = false;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146836ea0

UClass * __cdecl UMovieSceneSkeletalAnimationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationSystem",
               &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneSkeletalAnimationSystem,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSkeletalAnimationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSkeletalAnimationSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSystem.InnerSingleton;
}

// GetRootMotionOffset @ 146837320

TTransform<double> * __thiscall
UMovieSceneSkeletalAnimationSystem::GetRootMotionOffset
          (UMovieSceneSkeletalAnimationSystem *this,TTransform<double> *__return_storage_ptr__,
          UObject *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  int iVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  TTransform<double> *pTVar16;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  FWeakObjectPtr local_58 [2];
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  pUVar13 = ResolveSkeletalMeshComponentBinding(param_1);
  if (pUVar13 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar12 = (int)pUVar14->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar14->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = pUVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      local_58[0] = local_res10;
      iVar12 = TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                         ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
                           *)&this->SystemData,
                          local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                          (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)local_58);
      if (((iVar12 != -1) &&
          (lVar15 = (longlong)iVar12 * 0x420 + *(longlong *)&(this->SystemData).SkeletalAnimations,
          lVar15 != 0)) && (lVar15 != -0x10)) {
        dVar10 = *(double *)(lVar15 + 0x308);
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar15 + 0x300);
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
        dVar10 = *(double *)(lVar15 + 0x318);
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(lVar15 + 0x310);
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
        dVar10 = *(double *)(lVar15 + 0x328);
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar15 + 800);
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
        dVar10 = *(double *)(lVar15 + 0x338);
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(lVar15 + 0x330);
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
        dVar10 = *(double *)(lVar15 + 0x348);
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(lVar15 + 0x340);
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
        dVar10 = *(double *)(lVar15 + 0x358);
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)(lVar15 + 0x350);
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
        if ((*(char *)(lVar15 + 0x2f8) == '\x01') && (*(char *)(lVar15 + 0x3f0) != '\0')) {
          if (*(char *)(lVar15 + 0x3f0) == '\0') {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar11) {
              pcVar1 = (code *)swi(3);
              pTVar16 = (TTransform<double> *)(*pcVar1)();
              return pTVar16;
            }
          }
          local_48._s_0.X = (__return_storage_ptr__->Translation).XY.m128d_f64[0];
          local_48._s_0.Y = (__return_storage_ptr__->Translation).XY.m128d_f64[1];
          local_48._s_0.Z = (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
          UE::Math::TQuat<double>::RotateVector
                    ((TQuat<double> *)(lVar15 + 0x3d0),(TVector<double> *)&local_28._s_0,
                     (TVector<double> *)&local_48._s_0);
          (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_28._s_0.X;
          (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_28._s_0.Y;
          (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_28._s_0.Z;
          (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// IsRelevantImpl @ 14683f320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneSkeletalAnimationSystem::IsRelevantImpl
          (UMovieSceneSkeletalAnimationSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  bool bVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined1 auStack_d8 [32];
  FComponentTypeID local_b8;
  FComponentTypeID local_b6 [7];
  initializer_list<UE::MovieScene::FComponentTypeID> local_a8;
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.AllMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  local_a8._First = &local_b8;
  local_b8.Value = *(ushort *)&pFVar2->SkeletalAnimation;
  local_a8._Last = local_b6;
  UE::MovieScene::FComponentMask::SetAll(&local_98.AllMask,&local_a8);
  local_b8.Value = (pFVar2->Tags).AnimMixerPoseProducer.Value;
  local_a8._First = &local_b8;
  local_a8._Last = local_b6;
  UE::MovieScene::FComponentMask::SetAll(&local_98.NoneMask,&local_a8);
  bVar1 = UE::MovieScene::FEntityManager::Contains(&param_1->EntityManager,&local_98);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return bVar1;
}

// OnLink @ 146843180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSkeletalAnimationSystem::OnLink(UMovieSceneSkeletalAnimationSystem *this)

{
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> TVar1;
  TComponentTypeID<UObject_*> TVar2;
  int iVar3;
  UMovieSceneEntityGroupingSystem *pUVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  FBuiltInComponentTypes *pFVar6;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this_00;
  undefined1 auStack_f8 [32];
  FComponentTypeID local_d8;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_d6;
  FComponentTypeID local_d4 [2];
  FAnimationGroupingPolicy local_d0 [8];
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_c8 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_b8;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar4 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieSceneEntityGroupingSystem>
                     ((UMovieSceneEntitySystemLinker *)this->_padding_);
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  TVar1 = pFVar5->SkeletalAnimation;
  local_c8[0] = TVar1;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  TVar2 = pFVar6->BoundObject;
  local_d8.Value = (ushort)TVar2;
  iVar3 = TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
          ::Emplace<>(&pUVar4->GroupHandlers);
  this_00 = (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *)
            (*(longlong *)&pUVar4->GroupHandlers + (longlong)iVar3 * 0x188);
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
  Emplace<UE::MovieScene::TEntityGroupingHandler<UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,UObject_*,FMovieSceneSkeletalAnimationComponentData>,UMovieSceneSkeletalAnimationSystem::FAnimationGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FMovieSceneSkeletalAnimationComponentData>_&>
            (this_00,local_d0,(TComponentTypeID<UObject_*> *)&local_d8,local_c8);
  UE::MovieScene::FEntityComponentFilter::operator=
            ((FEntityComponentFilter *)(this_00 + 1),&local_a8);
  local_b8._First = &local_d8;
  local_b8._Last = local_d4;
  local_d8.Value = (ushort)TVar2;
  local_d6 = TVar1;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(this_00 + 1),&local_b8);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  (this->GroupingKey).Index = iVar3;
  return;
}

// OnRun @ 14684b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSystem::OnRun
          (UMovieSceneSkeletalAnimationSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  TMap<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>_>
  *pTVar4;
  TComponentTypeID<UObject_*> TVar5;
  code *pcVar6;
  FComplexMask *pFVar7;
  TTypeCompatibleBytes<unsigned_int> TVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations> FVar13;
  FBuiltInComponentTypes *pFVar14;
  FMovieSceneTracksComponentTypes *pFVar15;
  UObject *pUVar16;
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
  *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  FSkeletalAnimationSystemData *pFVar23;
  undefined1 auStackY_668 [32];
  FComponentTypeID local_608;
  ushort local_606;
  FComponentTypeID local_604;
  ushort local_602;
  FComponentTypeID local_600;
  undefined2 uStack_5fe;
  TComponentTypeID<double> local_5fc;
  undefined2 uStack_5fa;
  undefined1 local_5f8 [8];
  undefined1 local_5f0 [16];
  undefined1 auStack_5e0 [16];
  uint uStack_5d0;
  uint uStack_5cc;
  longlong local_5c8;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  *pTStack_5c0;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  *local_5b8;
  uchar local_5b0 [8];
  ForElementType<unsigned_int> local_5a8;
  FSkeletalAnimationSystemData *local_5a0;
  FSkeletalAnimationSystemData *local_598;
  undefined1 local_590 [8];
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> local_588;
  undefined8 local_570;
  TStatIdData *pTStack_568;
  byte local_560;
  undefined7 uStack_55f;
  undefined4 uStack_558;
  uint uStack_554;
  uchar local_548 [8];
  TStatIdData *pTStack_540;
  byte local_538;
  undefined7 uStack_537;
  undefined1 auStack_530 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_528;
  initializer_list<UE::MovieScene::FComponentTypeID> local_518;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_508;
  undefined1 local_4f8 [24];
  byte local_4e0;
  int local_4d8;
  undefined1 local_4d4;
  undefined1 local_4d0 [4];
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_4cc;
  TComponentTypeID<UObject_*> local_4ca;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_4c8;
  undefined4 local_4c6;
  undefined4 local_4c2;
  undefined8 local_4b8;
  TStatIdData *pTStack_4b0;
  ulonglong local_4a8;
  undefined1 auStack_4a0 [12];
  TComponentTypeID<UObject_*> TStack_494;
  undefined2 uStack_492;
  undefined8 uStack_490;
  TStatIdData *pTStack_488;
  ulonglong uStack_480;
  undefined8 uStack_478;
  FName local_470;
  FName local_468;
  undefined1 local_460 [32];
  longlong local_440;
  TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
  *pTStack_438;
  TBitArray<TFixedAllocator<12>_> local_428;
  TBitArray<TFixedAllocator<12>_> local_3f0;
  FComplexMask *local_3b8;
  undefined8 local_3b0;
  FSystemTaskPrerequisites local_3a8;
  <lambda_1> local_328;
  undefined1 local_298 [4];
  FComponentAccess aFStack_294 [2];
  wchar_t *pwStack_290;
  TStatIdData *local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  FEntityComponentFilter local_270;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_188;
  undefined4 local_184;
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
  local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_668;
  FVar13 = StatPtr_MovieSceneEval_GatherSkeletalAnimations;
  if (StatPtr_MovieSceneEval_GatherSkeletalAnimations ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations>)0x0) {
    pFVar12 = ::FName::FName(&local_470,"MovieSceneEval_GatherSkeletalAnimations");
    FVar13 = (FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_MovieSceneEval_GatherSkeletalAnimations,*pFVar12,
                        L"Gather skeletal animations","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  pFVar14 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar15 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  plVar1 = &this->_padding_;
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_508);
  if ((local_508.Object)->CurrentPhase == Instantiation) {
    if ((UE::MovieScene::GAnimationUIFlickerFix == true) ||
       ((UE::MovieScene::ShouldUseLegacyControlRigTemplate != (_func___cdecl_bool *)0x0 &&
        (bVar10 = (*UE::MovieScene::ShouldUseLegacyControlRigTemplate)(), !bVar10)))) {
      UE::MovieScene::FPreAnimatedStateExtension::
      GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage>
                ((FPreAnimatedStateExtension *)(*plVar1 + 0x468),&local_588,
                 (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage>)
                 UE::MovieScene::FPreAnimatedSkeletalAnimationStorage::StorageID);
      local_608.Value = *(ushort *)&pFVar15->SkeletalAnimation;
      local_606 = (pFVar14->Tags).NeedsLink.Value;
      local_528._First = &local_608;
      local_528._Last = &local_604;
      local_428.NumBits._0_1_ = '\0';
      local_428.NumBits._1_1_ = '\0';
      local_428.NumBits._2_1_ = '\0';
      local_428.NumBits._3_1_ = '\0';
      local_428.MaxBits._0_1_ = 0x80;
      local_428.MaxBits._1_1_ = '\x01';
      local_428.MaxBits._2_1_ = '\0';
      local_428.MaxBits._3_1_ = '\0';
      local_3f0.NumBits._0_1_ = '\0';
      local_3f0.NumBits._1_1_ = '\0';
      local_3f0.NumBits._2_1_ = '\0';
      local_3f0.NumBits._3_1_ = '\0';
      local_3f0.MaxBits._0_1_ = 0x80;
      local_3f0.MaxBits._1_1_ = '\x01';
      local_3f0.MaxBits._2_1_ = '\0';
      local_3f0.MaxBits._3_1_ = '\0';
      local_3b8 = (FComplexMask *)0x0;
      local_3b0._0_1_ = '\0';
      local_3b0._1_1_ = '\0';
      local_3b0._2_1_ = '\0';
      local_3b0._3_1_ = '\0';
      local_3b0._4_1_ = '\0';
      local_3b0._5_1_ = '\0';
      local_3b0._6_1_ = '\0';
      local_3b0._7_1_ = '\0';
      UE::MovieScene::FComponentMask::SetAll((FComponentMask *)&local_428,&local_528);
      if ((local_588.Object == (FPreAnimatedSkeletalAnimationStorage *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar5 = pFVar14->BoundObject;
      lVar22 = *plVar1;
      local_328.__this =
           (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits> *)
           local_588.Object;
      local_328.InParams.AdditionalFilter.AllMask.Bits.NumBits = 0;
      local_328.InParams.AdditionalFilter.AllMask.Bits.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)&local_328.InParams,&local_428);
      local_328.InParams.AdditionalFilter.NoneMask.Bits.NumBits = 0;
      local_328.InParams.AdditionalFilter.NoneMask.Bits.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_328.InParams.AdditionalFilter.NoneMask.Bits,&local_3f0);
      uVar9 = local_3b0;
      TVar8.Pad = local_3b0._0_4_;
      local_328.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_328.InParams.AdditionalFilter.ComplexMasks.ArrayNum._0_1_ = (uchar)local_3b0;
      local_328.InParams.AdditionalFilter.ComplexMasks.ArrayNum._1_1_ = local_3b0._1_1_;
      local_328.InParams.AdditionalFilter.ComplexMasks.ArrayNum._2_1_ = local_3b0._2_1_;
      local_328.InParams.AdditionalFilter.ComplexMasks.ArrayNum._3_1_ = local_3b0._3_1_;
      local_3b0 = uVar9;
      if (local_3b0._0_4_ == (uchar  [4])0x0) {
        local_328.InParams.AdditionalFilter.ComplexMasks.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3c,4,(int)TVar8.Pad,0,
                   &local_328.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance,
                   (int)TVar8.Pad,&local_328.InParams.AdditionalFilter.ComplexMasks.ArrayMax);
        ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                  (local_328.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data,local_3b8
                   ,(int)TVar8.Pad);
      }
      pFVar14 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pTStack_568 = &TStatId::TStatId_NAME_None;
      local_570 = 0;
      auStack_4a0._10_2_ = pFVar14->RootInstanceHandle;
      uStack_490 = 0;
      pTStack_488 = &TStatId::TStatId_NAME_None;
      uStack_558 = 0x6ff;
      uStack_554 = uStack_554 & 0xffffff00;
      uStack_480 = CONCAT71(uStack_55f,local_560) & 0xffffffffffffffe0;
      uStack_478._4_4_ = uStack_554;
      uStack_478._0_4_ = AnyHiPriThreadHiPriTask;
      local_298._2_2_ = auStack_4a0._10_2_;
      local_298._0_2_ = auStack_4a0._8_2_;
      unique0x1000070a = TVar5;
      unique0x1000070c = uStack_492;
      local_270.AllMask.Bits.NumBits = 0;
      local_270.AllMask.Bits.MaxBits = 0;
      pwStack_290 = (wchar_t *)0x0;
      local_288 = &TStatId::TStatId_NAME_None;
      local_560 = local_560 & 0xe0;
      TStack_494 = TVar5;
      uStack_280 = uStack_480;
      local_278 = uStack_478;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                ((TBitArray<TFixedAllocator<12>_> *)&local_270,&local_428);
      local_270.NoneMask.Bits.NumBits = 0;
      local_270.NoneMask.Bits.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_270.NoneMask.Bits,&local_3f0);
      uVar9 = local_3b0;
      pFVar7 = local_3b8;
      TVar8.Pad = local_3b0._0_4_;
      local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ComplexMasks.ArrayNum._0_1_ = (uchar)local_3b0;
      local_270.ComplexMasks.ArrayNum._1_1_ = local_3b0._1_1_;
      local_270.ComplexMasks.ArrayNum._2_1_ = local_3b0._2_1_;
      local_270.ComplexMasks.ArrayNum._3_1_ = local_3b0._3_1_;
      local_3b0 = uVar9;
      if (local_3b0._0_4_ == (uchar  [4])0x0) {
        local_270.ComplexMasks.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3c,4,(int)TVar8.Pad,0,&local_270.ComplexMasks.AllocatorInstance,(int)TVar8.Pad,
                   &local_270.ComplexMasks.ArrayMax);
        ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                  (local_270.ComplexMasks.AllocatorInstance.Data,pFVar7,(int)TVar8.Pad);
      }
      local_1c0 = 0;
      local_1bc = 0x180;
      local_188 = 0;
      local_184 = 0x180;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_270);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_298 + 4),&local_270);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>_>
      ::
      Iterate_PerAllocationImpl<_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::BeginTrackingAndCachePreAnimatedValuesTask<_UMovieSceneSkeletalAnimationSystem::OnRun_::__l8::FTask,UObject_*>_::__l2::<lambda_1>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>_>
                  *)local_298,(FEntityManager *)(lVar22 + 0x28),&local_270,&local_328);
      if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
      }
      if (local_328.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.InParams.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
      }
      if (pFVar7 != (FComplexMask *)0x0) {
        FMemory::Free(pFVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_588.SharedReferenceCount.ReferenceController);
    }
    UE::MovieScene::FSkeletalAnimationSystemData::ResetSkeletalAnimations(&this->SystemData);
    pTVar4 = &(this->SystemData).MontageData;
    TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_460,
               (TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                *)pTVar4);
    local_5b0[0] = '\0';
    local_5b0[1] = '\0';
    stack0xfffffffffffffa28 = local_460._16_16_;
    local_5f0._8_8_ = local_460._0_8_;
    auStack_5e0._0_8_ = local_460._8_8_;
    local_5c8 = local_440;
    pTStack_5c0 = pTStack_438;
    uVar20 = local_460._24_8_ >> 0x20;
    local_5b8 = (TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                 *)pTVar4;
    if (local_460._28_4_ < *(int *)(local_460._16_8_ + 0x18)) {
      do {
        lVar22 = (longlong)(int)uVar20 * 0x60;
        local_5f0._0_4_ = *(undefined4 *)(lVar22 + *(longlong *)local_5f0._8_8_);
        local_5f0._4_4_ = *(undefined4 *)(lVar22 + 4 + *(longlong *)local_5f0._8_8_);
        pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_5f8 + 8));
        if (pUVar16 == (UObject *)0x0) {
          TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_5c0,(int)uVar20);
          local_5b0[0] = '\x01';
        }
        uStack_5d0 = uStack_5d0 & ~auStack_5e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_5e0);
        uVar20 = (ulonglong)uStack_5cc;
      } while ((int)uStack_5cc < *(int *)(auStack_5e0._8_8_ + 0x18));
      if ((local_5b0[0] != '\0') && (local_5b0[1] != '\0')) {
        iVar19 = 1;
        uVar21 = *(int *)&(local_5b8->Elements).field_0x8 -
                 *(int *)&(local_5b8->Elements).field_0x34;
        if (3 < uVar21) {
          uVar20 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar19 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar21) && (local_5b8->HashSize < iVar19)) || (iVar19 < local_5b8->HashSize))
        {
          local_5b8->HashSize = iVar19;
          TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_5b8);
        }
      }
    }
  }
  else {
    local_4d0._2_2_ = pFVar14->RootInstanceHandle;
    local_4cc = pFVar14->InstanceHandle;
    local_4ca = pFVar14->BoundObject;
    local_4c8 = pFVar15->SkeletalAnimation;
    pTStack_540 = &TStatId::TStatId_NAME_None;
    uStack_5fe = 0x7fff;
    local_600.Value = (ushort)pFVar14->EvalTime;
    local_4c6 = _local_600;
    uStack_5fa = 0x7fff;
    local_5fc = pFVar14->WeightAndEasingResult;
    local_4c2 = _local_5fc;
    local_604.Value = (pFVar14->Tags).Ignored.Value;
    local_602 = (pFVar15->Tags).AnimMixerPoseProducer.Value;
    local_518._First = &local_604;
    local_518._Last = &local_600;
    local_548[0] = '\0';
    local_548[1] = '\0';
    local_548[2] = '\0';
    local_548[3] = '\0';
    local_548[4] = '\0';
    local_548[5] = '\0';
    local_548[6] = '\0';
    local_548[7] = '\0';
    auStack_530._0_4_ = 0x6ff;
    auStack_530._4_4_ = auStack_530._4_4_ & 0xffffff00;
    local_4a8 = CONCAT71(uStack_537,local_538) & 0xffffffffffffffe0;
    auStack_4a0._4_4_ = auStack_530._4_4_;
    auStack_4a0._0_4_ = 0x6ff;
    local_4b8 = 0;
    pTStack_4b0 = &TStatId::TStatId_NAME_None;
    local_538 = local_538 & 0xe0;
    this_00 = UE::MovieScene::
              TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
              ::FilterNone((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
                            *)local_4d0,&local_178,&local_518);
    pFVar23 = &this->SystemData;
    *(FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations> *)
     &(this_00->Components).field_0x20 = FVar13;
    lVar22 = *plVar1;
    local_5a8 = (ForElementType<unsigned_int>)pFVar23;
    if ((*(longlong *)(lVar22 + 0x580) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceRegistry.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                            ,0x96,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_5a0 = *(FSkeletalAnimationSystemData **)(lVar22 + 0x580);
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::
    Dispatch_PerAllocation<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FInstanceRegistry_*,UE::MovieScene::FSkeletalAnimationSystemData_*>
              (this_00,(FEntityManager *)local_5f8,(FSystemTaskPrerequisites *)(*plVar1 + 0x28),
               (FSystemSubsequentTasks *)param_1,(FInstanceRegistry **)0x0,&local_5a0);
    if (local_178.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Filter.ComplexMasks.AllocatorInstance.Data);
    }
    local_3a8.Prereqs.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
    local_3a8.Prereqs.ArrayNum._0_1_ = '\0';
    local_3a8.Prereqs.ArrayNum._1_1_ = '\0';
    local_3a8.Prereqs.ArrayNum._2_1_ = '\0';
    local_3a8.Prereqs.ArrayNum._3_1_ = '\0';
    local_3a8.Prereqs.ArrayMax._0_1_ = '\x04';
    local_3a8.Prereqs.ArrayMax._1_1_ = '\0';
    local_3a8.Prereqs.ArrayMax._2_1_ = '\0';
    local_3a8.Prereqs.ArrayMax._3_1_ = '\0';
    local_3a8.AllTasks.AllocatorInstance.SecondaryData =
         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_3a8.AllTasks.ArrayNum = 0;
    local_3a8.AllTasks.ArrayMax = 4;
    if (local_5f8 != (undefined1  [8])0x0) {
      UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
                (&local_3a8,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_5f8);
    }
    local_4f8._8_8_ = 0;
    local_4d4 = 0;
    local_4f8._16_8_ = StatPtr_MovieSceneEval_EvaluateSkeletalAnimations;
    if (StatPtr_MovieSceneEval_EvaluateSkeletalAnimations ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateSkeletalAnimations>)0x0) {
      pFVar12 = ::FName::FName(&local_468,"MovieSceneEval_EvaluateSkeletalAnimations");
      local_4f8._16_8_ =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_MovieSceneEval_EvaluateSkeletalAnimations,*pFVar12,
                      L"Evaluate skeletal animations","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                      L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_4d8 = *(int *)(*plVar1 + 0x2c8);
    if ((local_4d8 == 1) || (local_4d8 == 0x101)) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    local_4e0 = bVar11 | local_4e0 & 0xe0;
    local_598 = pFVar23;
    UE::MovieScene::TEntityTaskComponents<>::
    Dispatch<UE::MovieScene::FEvaluateSkeletalAnimations,TObjectPtr<UMovieSceneEntitySystemLinker>_&,UE::MovieScene::FSkeletalAnimationSystemData_*>
              ((TEntityTaskComponents<> *)local_4f8,(FEntityManager *)local_590,
               (FSystemTaskPrerequisites *)(*plVar1 + 0x28),(FSystemSubsequentTasks *)&local_3a8,
               (TObjectPtr<UMovieSceneEntitySystemLinker> *)param_2,
               (FSkeletalAnimationSystemData **)plVar1);
    if (local_590 != (undefined1  [8])0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_590 + 0x30);
      iVar19 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (*(code *)**(undefined8 **)local_590)(local_590,1);
      }
    }
    FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_3a8.AllTasks;
    if (local_3a8.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = local_3a8.AllTasks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar17,local_3a8.AllTasks.ArrayNum);
    if (local_3a8.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_3a8.AllTasks.AllocatorInstance.SecondaryData);
    }
    FVar18 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_3a8;
    if (local_3a8.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar18 = local_3a8.Prereqs.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)FVar18,local_3a8.Prereqs.ArrayNum);
    if (local_3a8.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FMemory::Free((void *)local_3a8.Prereqs.AllocatorInstance.SecondaryData);
    }
    if (local_5f8 != (undefined1  [8])0x0) {
      LOCK();
      puVar3 = (undefined1 *)((longlong)local_5f8 + 0x30);
      iVar19 = *(int *)puVar3;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      UNLOCK();
      if ((iVar19 == 1) && (local_5f8 != (undefined1  [8])0x0)) {
        (*(code *)**(undefined8 **)local_5f8)(local_5f8,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_508.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 146850530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks
          (UMovieSceneSkeletalAnimationSystem *this,IEntitySystemScheduler *param_1)

{
  FSkeletalAnimationSystemData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStackY_558 [32];
  FComponentTypeID local_4f8;
  FComponentTypeID local_4f6;
  FComponentTypeID local_4f4;
  ushort local_4f2;
  undefined1 local_4f0 [6];
  undefined2 uStack_4ea;
  TComponentTypeID<double> local_4e8;
  undefined2 uStack_4e6;
  TComponentTypeID<FFrameTime> local_4e4;
  undefined2 uStack_4e2;
  TComponentTypeID<double> local_4e0;
  undefined2 uStack_4de;
  FTaskID local_4dc;
  FTaskID local_4d8;
  FTaskID local_4d4;
  FSkeletalAnimationSystemData *local_4d0;
  FSkeletalAnimationSystemData *local_4c8;
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  ulonglong local_4a0;
  undefined1 local_498 [16];
  ForElementType<unsigned_int> local_488;
  undefined1 local_480 [16];
  ulonglong local_470;
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_468;
  byte local_458;
  uint local_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint local_440;
  uint uStack_43c;
  uint uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  TStatIdData *pTStack_420;
  ulonglong uStack_418;
  undefined8 uStack_410;
  undefined8 local_400;
  TStatIdData *pTStack_3f8;
  byte local_3f0;
  undefined7 uStack_3ef;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  undefined8 local_3d8;
  TStatIdData *pTStack_3d0;
  byte local_3c8;
  undefined7 uStack_3c7;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  undefined8 local_3b0;
  TStatIdData *pTStack_3a8;
  byte local_3a0;
  undefined7 uStack_39f;
  undefined4 uStack_398;
  uint uStack_394;
  undefined2 local_390;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_38e;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_38c;
  TComponentTypeID<UObject_*> TStack_38a;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> TStack_388;
  undefined4 uStack_386;
  TComponentTypeID<double> TStack_382;
  undefined1 auStack_380 [24];
  ulonglong local_368;
  FScriptContainerElement *pFStack_360;
  initializer_list<UE::MovieScene::FComponentTypeID> local_358;
  code *local_348;
  undefined1 local_340;
  initializer_list<UE::MovieScene::FComponentTypeID> local_338;
  FInstanceRegistry *local_328;
  uchar local_320;
  code *local_318;
  uchar local_310;
  code *local_308;
  uchar local_300;
  FName local_2f8;
  FName local_2f0;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_2e8;
  undefined8 local_2e0;
  TStatIdData *pTStack_2d8;
  ulonglong local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2b8 [4];
  FComponentAccess FStack_2b4;
  FComponentAccess FStack_2b2;
  FComponentAccess aFStack_2b0 [8];
  undefined8 uStack_2a0;
  FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations> local_298;
  ulonglong uStack_290;
  ForAnyElementType local_288;
  FEntityComponentFilter local_280;
  int local_1d0;
  int local_1cc;
  int local_198;
  int local_194;
  undefined1 local_188 [56];
  ulonglong uStack_150;
  undefined8 local_148;
  FComponentMask local_140;
  int local_d8;
  int local_d4;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_2e8 = pFVar5->ObjectResult;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTStack_3f8 = &TStatId::TStatId_NAME_None;
  local_400 = 0;
  uStack_3e8 = 0x6ff;
  uStack_3e4 = uStack_3e4 & 0xffffff00;
  local_2d0 = CONCAT71(uStack_3ef,local_3f0) & 0xffffffffffffffe0;
  uStack_2c8._4_4_ = uStack_3e4;
  uStack_2c8._0_4_ = 0x6ff;
  local_300 = '\x03';
  local_498._8_8_ = &TStatId::TStatId_NAME_None;
  local_498._0_8_ =
       L"struct UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks::FWriteObjectResultNoop"
  ;
  local_308 = UE::MovieScene::
              TScheduledEntityTask<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FWriteObjectResultNoop,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
              ::ScheduledRun_PerAllocation;
  local_488._1_7_ = SUB87(local_2d0 >> 8,0);
  local_488 = (ForElementType<unsigned_int>)
              (CONCAT71(local_488._1_7_,local_3f0) & 0xffffffffffffffe0);
  local_2e0 = 0;
  pTStack_2d8 = &TStatId::TStatId_NAME_None;
  local_3f0 = local_3f0 & 0xe0;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::
  ScheduleImpl<_UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks_::__l2::FWriteObjectResultNoop>
            ((TEntityTaskComponents<UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
              *)&local_2e8,(FEntityManager *)&local_4d4,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_498);
  local_450 = (ushort)pFVar5->DoubleResult[0] | 0x7fff0000;
  uStack_4ea = 0x7fff;
  local_4f0._4_2_ = pFVar5->DoubleResult[7];
  uStack_44c = (ushort)pFVar5->DoubleResult[1] | 0x7fff0000;
  local_3d8 = 0;
  uStack_448 = (ushort)pFVar5->DoubleResult[2] | 0x7fff0000;
  pTStack_3d0 = &TStatId::TStatId_NAME_None;
  uStack_444 = (ushort)pFVar5->DoubleResult[3] | 0x7fff0000;
  uStack_3c0 = 0x6ff;
  local_440 = (ushort)pFVar5->DoubleResult[4] | 0x7fff0000;
  uStack_3bc = uStack_3bc & 0xffffff00;
  uStack_418 = CONCAT71(uStack_3c7,local_3c8) & 0xffffffffffffffe0;
  uStack_410._4_4_ = uStack_3bc;
  uStack_410._0_4_ = 0x6ff;
  uStack_43c = (ushort)pFVar5->DoubleResult[5] | 0x7fff0000;
  uStack_4e6 = 0x7fff;
  local_4e8 = pFVar5->DoubleResult[8];
  uStack_438 = (ushort)pFVar5->DoubleResult[6] | 0x7fff0000;
  uStack_434 = stack0xfffffffffffffb14;
  local_430 = _local_4e8;
  local_4f8.Value = (pFVar6->ComponentTransform).PropertyTag.Value;
  uStack_428 = 0;
  pTStack_420 = &TStatId::TStatId_NAME_None;
  local_188._0_8_ =
       (ulonglong)CONCAT24(pFVar5->DoubleResult[1],(uint)(ushort)pFVar5->DoubleResult[0]) |
       0x7fff00007fff0000;
  local_188._8_8_ =
       (ulonglong)CONCAT24(pFVar5->DoubleResult[3],(uint)(ushort)pFVar5->DoubleResult[2]) |
       0x7fff00007fff0000;
  local_358._First = &local_4f8;
  local_188._16_8_ =
       (ulonglong)CONCAT24(pFVar5->DoubleResult[5],(uint)(ushort)pFVar5->DoubleResult[4]) |
       0x7fff00007fff0000;
  local_188._24_8_ =
       CONCAT44(stack0xfffffffffffffb14,(uint)(ushort)pFVar5->DoubleResult[6]) | 0x7fff0000;
  local_358._Last = &local_4f6;
  local_188._36_4_ = uStack_42c;
  local_188._32_4_ = _local_4e8;
  local_140.Bits.NumBits = 0;
  local_140.Bits.MaxBits = 0x180;
  local_188._40_8_ = 0;
  local_188._48_8_ = &TStatId::TStatId_NAME_None;
  local_d8 = 0;
  local_d4 = 0x180;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_90 = 0;
  local_8c = 0x180;
  local_58 = 0;
  local_54 = 0x180;
  local_3c8 = local_3c8 & 0xe0;
  uStack_150 = uStack_418;
  local_148 = uStack_410;
  UE::MovieScene::FComponentMask::SetAll(&local_140,&local_358);
  local_4a0 = uStack_150 | 2;
  local_340 = 3;
  local_4b0._8_8_ = local_188._48_8_;
  local_4b0._0_8_ =
       L"struct UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks::FTransformDependencyTask"
  ;
  local_348 = UE::MovieScene::
              TScheduledEntityTask<`UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks'::__l2::FTransformDependencyTask,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              ::ScheduledRun_PerAllocation;
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
  ::
  ScheduleImpl<_UMovieSceneSkeletalAnimationSystem::OnSchedulePersistentTasks_::__l2::FTransformDependencyTask>
            ((TFilteredEntityTask<UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)local_188,(FEntityManager *)&local_4d8,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_4b0);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  TStack_382 = pFVar5->WeightAndEasingResult;
  TStack_38e = pFVar5->RootInstanceHandle;
  TStack_38c = pFVar5->InstanceHandle;
  TStack_38a = pFVar5->BoundObject;
  TStack_388 = pFVar6->SkeletalAnimation;
  local_3b0 = 0;
  pTStack_3a8 = &TStatId::TStatId_NAME_None;
  uStack_4e2 = 0x7fff;
  local_4e4 = pFVar5->EvalTime;
  uStack_386 = _local_4e4;
  auStack_380._8_8_ = 0;
  auStack_380._16_8_ = &TStatId::TStatId_NAME_None;
  uStack_4de = 0x7fff;
  local_4e0 = TStack_382;
  auStack_380._0_2_ = 0x7fff;
  local_2b8._2_2_ = TStack_38e;
  local_2b8._0_2_ = local_390;
  unique0x100006c7 = TStack_38c;
  unique0x100006c9 = TStack_38a;
  aFStack_2b0._2_4_ = _local_4e4;
  aFStack_2b0[0].ComponentType.Value = TStack_388;
  aFStack_2b0[3].ComponentType.Value = TStack_382;
  local_4f4.Value = (pFVar5->Tags).Ignored.Value;
  aFStack_2b0._10_6_ = auStack_380._2_6_;
  aFStack_2b0[4].ComponentType.Value = 0x7fff;
  local_4f2 = (pFVar6->Tags).AnimMixerPoseProducer.Value;
  uStack_398 = 0x6ff;
  uStack_394 = uStack_394 & 0xffffff00;
  local_368 = CONCAT71(uStack_39f,local_3a0) & 0xffffffffffffffe0;
  pFStack_360 = (FScriptContainerElement *)CONCAT44(uStack_394,0x6ff);
  uStack_2a0 = 0;
  local_280.AllMask.Bits.NumBits = 0;
  local_280.AllMask.Bits.MaxBits = 0x180;
  local_298 = (FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations>)
              &TStatId::TStatId_NAME_None;
  local_280.NoneMask.Bits.NumBits = 0;
  local_280.NoneMask.Bits.MaxBits = 0x180;
  local_280.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ComplexMasks.ArrayNum = 0;
  local_280.ComplexMasks.ArrayMax = 0;
  local_1d0 = 0;
  local_1cc = 0x180;
  local_198 = 0;
  local_194 = 0x180;
  local_3a0 = local_3a0 & 0xe0;
  uStack_290 = local_368;
  local_288.Data = pFStack_360;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2b8 + 2),&local_280);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2b8 + 4),&local_280);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2b8 + 6),&local_280);
  UE::MovieScene::AddAccessorToFilter(aFStack_2b0,&local_280);
  local_338._First = &local_4f4;
  local_338._Last = (FComponentTypeID *)local_4f0;
  UE::MovieScene::FComponentMask::SetAll(&local_280.NoneMask,&local_338);
  FVar8 = StatPtr_MovieSceneEval_GatherSkeletalAnimations;
  if (StatPtr_MovieSceneEval_GatherSkeletalAnimations ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations>)0x0) {
    pFVar7 = ::FName::FName(&local_2f8,"MovieSceneEval_GatherSkeletalAnimations");
    FVar8 = (FThreadSafeStaticStat<FStat_MovieSceneEval_GatherSkeletalAnimations>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GatherSkeletalAnimations
                       ,*pFVar7,L"Gather skeletal animations","STATGROUP_MovieSceneECS",
                       "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                       false,MCR_Invalid);
  }
  lVar2 = this->_padding_;
  pFVar1 = &this->SystemData;
  local_4d0 = pFVar1;
  local_298 = FVar8;
  if (*(longlong *)(lVar2 + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_4c8 = *(FSkeletalAnimationSystemData **)(lVar2 + 0x580);
  local_470 = uStack_290 | 2;
  local_480._8_8_ = local_298;
  local_480._0_8_ = L"struct UE::MovieScene::FGatherSkeletalAnimations";
  local_328 = (FInstanceRegistry *)
              UE::MovieScene::
              TScheduledEntityTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
              ::ScheduledRun_PerAllocation;
  local_320 = '\x03';
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FInstanceRegistry_*,UE::MovieScene::FSkeletalAnimationSystemData_*>
            ((TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_2b8,(FEntityManager *)&local_4dc,
             (IEntitySystemScheduler *)(this->_padding_ + 0x28),(FTaskParams *)param_1,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_480,&local_328,&local_4c8);
  if (local_280.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.ComplexMasks.AllocatorInstance.Data);
  }
  local_468.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)StatPtr_MovieSceneEval_EvaluateSkeletalAnimations;
  if (StatPtr_MovieSceneEval_EvaluateSkeletalAnimations ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateSkeletalAnimations>)0x0) {
    pFVar7 = ::FName::FName(&local_2f0,"MovieSceneEval_EvaluateSkeletalAnimations");
    local_468.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_EvaluateSkeletalAnimations,
                    *pFVar7,L"Evaluate skeletal animations","STATGROUP_MovieSceneECS",
                    "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_468.Object = (ITaskContext *)0x0;
  local_458 = local_458 & 0xe1 | 1;
  local_310 = '\0';
  local_318 = UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FEvaluateSkeletalAnimations>::Execute
  ;
  pTVar9 = ::operator_new(0x58);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    local_4c0._0_8_ = ___xmm_00000000000000000000000000000010;
    local_4c0._8_8_ = _UNK_150651568;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TAnonTaskWrapper_UFEvaluateSkeletalAnimations_MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ =
         (longlong)
         &___7__TAnonTaskWrapper_UFEvaluateSkeletalAnimations_MovieScene_UE___MovieScene_UE__6B_;
    UE::MovieScene::FEvaluateSkeletalAnimations::FEvaluateSkeletalAnimations
              ((FEvaluateSkeletalAnimations *)&pTVar9[1].SharedReferenceCount,
               (UMovieSceneEntitySystemLinker *)this->_padding_,pFVar1);
    local_4c0._0_8_ = pTVar9 + 1;
    if ((TReferenceControllerBase<1> *)local_4c0._0_8_ == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTVar9;
    local_4c0._8_8_ = pTVar9;
  }
  UE::MovieScene::IEntitySystemScheduler::AddTask
            (param_1,(FTaskParams *)local_4f0,&local_468,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_4c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite
            (param_1,local_4dc,(FTaskID)local_4f0._0_4_);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite
            (param_1,local_4d8,(FTaskID)local_4f0._0_4_);
  UE::MovieScene::IEntitySystemScheduler::AddPrerequisite
            (param_1,local_4d4,(FTaskID)local_4f0._0_4_);
  return;
}

// OnUnlink @ 146851ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSystem::OnUnlink(UMovieSceneSkeletalAnimationSystem *this)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntityGroupingSystem *this_00;
  
  this_00 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEntityGroupingSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (this_00 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8775670319571532460>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneSkeletalAnimationSystem.cpp"
                       ,0x554,"GroupingSystem");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_00,(FEntityGroupingPolicyKey)(this->GroupingKey).Index);
  }
  (this->GroupingKey).Index = -1;
  return;
}

// ResolveSkeletalMeshComponentBinding @ 146860d10

UObject * __cdecl
UMovieSceneSkeletalAnimationSystem::ResolveSkeletalMeshComponentBinding(UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UClass *local_res8;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return param_1;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
LAB_146860dbb:
      pcVar3 = *(code **)(*(longlong *)param_1 + 0x738);
      local_res8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pUVar5 = (UObject *)(*pcVar3)(param_1,&local_res8);
      return pUVar5;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) &&
         (param_1 = *(UObject **)(param_1 + 0xf), param_1 != (UObject *)0x0)) goto LAB_146860dbb;
    }
  }
  return (UObject *)0x0;
}

// StaticRegisterNativesUMovieSceneSkeletalAnimationSystem @ 14686cc50

void __cdecl
UMovieSceneSkeletalAnimationSystem::StaticRegisterNativesUMovieSceneSkeletalAnimationSystem(void)

{
  return;
}

// UpdateRootMotionOffset @ 146871c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneSkeletalAnimationSystem::UpdateRootMotionOffset
          (UMovieSceneSkeletalAnimationSystem *this,UObject *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  int iVar6;
  FWeakObjectPtr this_00;
  UClass *pUVar7;
  TTransform<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar17;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar18;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_238 [32];
  FWeakObjectPtr local_218 [2];
  FWeakObjectPtr local_208 [2];
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_238;
  this_00 = (FWeakObjectPtr)ResolveSkeletalMeshComponentBinding(param_1);
  if (this_00 != (FWeakObjectPtr)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)((longlong)this_00 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)this_00 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_218[0].ObjectIndex = 0;
      local_218[0].ObjectSerialNumber = 0;
      local_208[0] = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(local_218,(FObjectPtr)local_208);
      local_208[0] = local_218[0];
      iVar6 = TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
                          *)&this->SystemData,
                         local_218[0].ObjectSerialNumber ^ local_218[0].ObjectIndex,
                         (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)local_208);
      if ((((iVar6 != -1) &&
           (lVar10 = (longlong)iVar6 * 0x420 + *(longlong *)&(this->SystemData).SkeletalAnimations,
           lVar10 != 0)) && (lVar10 != -0x10)) && (*(char *)(lVar10 + 0x3c0) != '\0')) {
        GetRootMotionOffset(this,&local_198,param_1);
        fVar44 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar45 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar46 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar47 = GlobalVectorConstants::Float0001.m128_f32[3];
        fVar48 = GlobalVectorConstants::FloatZero.m128_f32[0];
        fVar49 = GlobalVectorConstants::FloatZero.m128_f32[1];
        fVar50 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar51 = GlobalVectorConstants::FloatZero.m128_f32[3];
        bVar1 = *(byte *)(lVar10 + 0x2f8);
        pTVar8 = (TTransform<double> *)(ulonglong)bVar1;
        local_1f8.Rotation.XY.m128d_f64[0] = (double)fVar44;
        local_1f8.Rotation.XY.m128d_f64[1] = (double)fVar45;
        local_1f8.Rotation.ZW.m128d_f64[0] = (double)fVar46;
        local_1f8.Rotation.ZW.m128d_f64[1] = (double)fVar47;
        local_1f8.Translation.XY.m128d_f64[0] = (double)fVar48;
        local_1f8.Translation.XY.m128d_f64[1] = (double)fVar49;
        local_1f8.Translation.ZW.m128d_f64[0] = (double)fVar50;
        local_1f8.Translation.ZW.m128d_f64[1] = (double)fVar51;
        local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        if ((bVar1 == 0) ||
           (((bVar1 == 1 &&
             (pTVar8 = *(TTransform<double> **)((longlong)this_00 + 0xa8),
             pTVar8 != (TTransform<double> *)0x0)) &&
            (this_00 = *(FWeakObjectPtr *)(pTVar8[4].Translation.ZW.m128d_f64 + 1),
            this = (UMovieSceneSkeletalAnimationSystem *)this_00, this_00 != (FWeakObjectPtr)0x0))))
        {
          pTVar8 = USceneComponent::GetRelativeTransform((USceneComponent *)this_00,&local_138);
          fVar48 = GlobalVectorConstants::FloatZero.m128_f32[0];
          fVar49 = GlobalVectorConstants::FloatZero.m128_f32[1];
          fVar50 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar51 = GlobalVectorConstants::FloatZero.m128_f32[3];
          fVar44 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar45 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar46 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar47 = GlobalVectorConstants::Float0001.m128_f32[3];
          local_1f8.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
          local_1f8.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
          local_1f8.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
          local_1f8.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
          local_1f8.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
          local_1f8.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
          local_1f8.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
          local_1f8.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
          local_1f8.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
          local_1f8.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
          local_1f8.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
          local_1f8.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
          this = (UMovieSceneSkeletalAnimationSystem *)this_00;
        }
        auVar13._8_8_ = local_198.Scale3D.XY.m128d_f64[1];
        auVar13._0_8_ = local_198.Scale3D.XY.m128d_f64[0];
        uVar2 = (uint)((ulonglong)local_198.Scale3D.ZW.m128d_f64[0] >> 0x20);
        dVar33 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
        dVar34 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
        auVar19._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar2,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              SUB84(local_198.Scale3D.ZW.m128d_f64[0],0));
        auVar19._8_4_ = _UNK_15061cc88 & SUB84(local_198.Scale3D.ZW.m128d_f64[1],0);
        auVar19._12_4_ =
             _UNK_15061cc8c & (uint)((ulonglong)local_198.Scale3D.ZW.m128d_f64[1] >> 0x20);
        dVar35 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
        auVar29._0_8_ =
             (double)CONCAT44((uint)((ulonglong)local_198.Scale3D.XY.m128d_f64[0] >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_198.Scale3D.XY.m128d_f64[0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar29._8_4_ = SUB84(local_198.Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88;
        auVar29._12_4_ =
             (uint)((ulonglong)local_198.Scale3D.XY.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
        auVar23._8_4_ = SUB84(dVar34,0);
        auVar23._0_8_ = dVar33;
        auVar23._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        auVar37._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
        auVar37._0_8_ = dVar35;
        auVar37._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20);
        auVar12._8_8_ = -(ulonglong)(auVar37._8_8_ < auVar19._8_8_);
        auVar12._0_8_ = -(ulonglong)(dVar35 < auVar19._0_8_);
        uVar9 = movmskpd((int)this,auVar12);
        auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < auVar29._8_8_);
        auVar24._0_8_ = -(ulonglong)(dVar33 < auVar29._0_8_);
        iVar6 = movmskpd((int)pTVar8,auVar24);
        if ((uVar9 & 0x3fffffff) == 0 && iVar6 == 0) {
          local_138.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_138.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_138.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_138.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_138.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_138.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        }
        else {
          auVar5._4_8_ = auVar19._8_8_;
          auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar20._0_8_ = auVar5._0_8_ << 0x20;
          auVar20._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar20._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar21._8_8_ = auVar20._8_8_;
          auVar21._0_8_ = local_198.Scale3D.ZW.m128d_f64[0];
          auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
          lVar11 = -(ulonglong)(auVar29._8_8_ <= dVar34);
          local_208[0] = (FWeakObjectPtr)
                         CONCAT44(~(uint)(-(ulonglong)(auVar29._0_8_ <= dVar33) >> 0x20) &
                                  auVar13._4_4_,
                                  ~(uint)-(ulonglong)(auVar29._0_8_ <= dVar33) & auVar13._0_4_);
          local_208[1].ObjectIndex = ~(uint)lVar11 & auVar13._8_4_;
          local_208[1].ObjectSerialNumber = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar13._12_4_;
          local_198.Translation.XY.m128d_f64[0] =
               (double)local_208[0] * local_198.Translation.XY.m128d_f64[0];
          dVar33 = (double)CONCAT44(local_208[1].ObjectSerialNumber,local_208[1].ObjectIndex);
          dVar33 = dVar33 * local_198.Translation.XY.m128d_f64[1];
          uVar17 = (undefined4)((ulonglong)dVar33 >> 0x20);
          auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
          lVar11 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar2,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                      SUB84(local_198.Scale3D.ZW.m128d_f64[0],0)) <= dVar35);
          local_138.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar13._4_4_,
                                ~(uint)lVar11 & auVar13._0_4_);
          local_198.Rotation.ZW.m128d_f64[0] =
               local_198.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          local_198.Rotation.ZW.m128d_f64[1] =
               local_198.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar41 = SUB84(local_198.Rotation.ZW.m128d_f64[1],0);
          uVar42 = (undefined4)((ulonglong)local_198.Rotation.ZW.m128d_f64[1] >> 0x20);
          auVar38._8_4_ = SUB84(dVar33,0);
          auVar38._0_8_ = local_198.Translation.XY.m128d_f64[0];
          auVar38._12_4_ = uVar17;
          local_198.Rotation.XY.m128d_f64[0] =
               local_198.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_198.Rotation.XY.m128d_f64[1] =
               local_198.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar43 = (undefined4)((ulonglong)local_198.Rotation.XY.m128d_f64[1] >> 0x20);
          auVar25._8_4_ = SUB84(dVar33,0);
          auVar25._0_8_ = local_198.Translation.XY.m128d_f64[0];
          auVar25._12_4_ = uVar17;
          local_198.Translation.ZW.m128d_f64[0] =
               local_138.Scale3D.ZW.m128d_f64[0] * local_198.Translation.ZW.m128d_f64[0];
          local_198.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1] * 0.0;
          auVar36._8_4_ = SUB84(local_198.Rotation.XY.m128d_f64[1],0);
          auVar36._0_8_ = local_198.Rotation.XY.m128d_f64[0];
          auVar36._12_4_ = uVar43;
          auVar14._8_4_ = SUB84(local_198.Rotation.ZW.m128d_f64[0],0);
          auVar14._0_8_ = local_198.Rotation.XY.m128d_f64[1];
          auVar14._12_4_ = (int)((ulonglong)local_198.Rotation.ZW.m128d_f64[0] >> 0x20);
          auVar3._8_4_ = SUB84(local_198.Translation.ZW.m128d_f64[1],0);
          auVar3._0_8_ = local_198.Translation.ZW.m128d_f64[0];
          auVar3._12_4_ = (int)((ulonglong)local_198.Translation.ZW.m128d_f64[1] >> 0x20);
          auVar13 = blendpd(auVar25,auVar3,2);
          auVar30._8_4_ = uVar41;
          auVar30._0_8_ = local_198.Rotation.ZW.m128d_f64[0];
          auVar30._12_4_ = uVar42;
          auVar4._8_4_ = uVar41;
          auVar4._0_8_ = local_198.Rotation.ZW.m128d_f64[0];
          auVar4._12_4_ = uVar42;
          auVar37 = blendpd(auVar36,auVar4,2);
          auVar39._0_8_ =
               auVar38._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
               local_198.Rotation.XY.m128d_f64[1] * local_198.Translation.XY.m128d_f64[0];
          auVar39._8_8_ =
               local_198.Translation.ZW.m128d_f64[0] * local_198.Rotation.XY.m128d_f64[1] -
               auVar14._8_8_ * dVar33;
          auVar15._8_4_ = SUB84(auVar39._8_8_,0);
          auVar15._0_8_ = auVar39._0_8_;
          auVar15._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
          auVar26._0_8_ =
               auVar13._0_8_ * local_198.Rotation.ZW.m128d_f64[0] -
               auVar37._0_8_ * local_198.Translation.ZW.m128d_f64[0];
          auVar26._8_8_ =
               auVar13._8_8_ * local_198.Rotation.ZW.m128d_f64[1] -
               auVar37._8_8_ * local_198.Translation.ZW.m128d_f64[1];
          dVar34 = auVar15._8_8_ + auVar15._8_8_;
          dVar35 = auVar26._0_8_ + auVar26._0_8_;
          auVar13 = blendpd(auVar39,auVar26,2);
          uVar17 = SUB84(dVar35,0);
          auVar22._8_4_ = uVar17;
          auVar22._0_8_ = dVar34;
          uVar18 = (undefined4)((ulonglong)dVar35 >> 0x20);
          auVar22._12_4_ = uVar18;
          auVar27._8_4_ = uVar17;
          auVar27._0_8_ = dVar34;
          auVar27._12_4_ = uVar18;
          auVar40._0_8_ = auVar13._0_8_ + auVar13._0_8_;
          auVar40._8_8_ = auVar13._8_8_ + auVar13._8_8_;
          auVar13 = blendpd(auVar27,auVar40,2);
          auVar31._8_4_ = uVar17;
          auVar31._0_8_ = dVar34;
          auVar31._12_4_ = uVar18;
          auVar32._0_8_ =
               auVar31._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
               dVar34 * local_198.Rotation.XY.m128d_f64[1];
          auVar32._8_8_ =
               auVar40._0_8_ * local_198.Rotation.XY.m128d_f64[1] -
               dVar35 * local_198.Rotation.ZW.m128d_f64[0];
          auVar16._8_4_ = SUB84(auVar32._8_8_,0);
          auVar16._0_8_ = auVar32._0_8_;
          auVar16._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
          auVar28._0_8_ =
               auVar13._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - auVar40._0_8_ * auVar37._0_8_;
          auVar28._8_8_ =
               auVar13._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - auVar40._8_8_ * auVar37._8_8_;
          auVar13 = blendpd(auVar32,auVar28,2);
          local_138.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(local_198.Rotation.XY.m128d_f64[1],0);
          local_138.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
          local_138.Rotation.XY.m128d_f64[1]._4_4_ = uVar43;
          local_138.Translation.ZW.m128d_f64[1] = 0.0;
          local_138.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar13._0_8_ +
                     auVar40._0_8_ * auVar30._8_8_ + local_198.Translation.ZW.m128d_f64[0]);
          local_138.Rotation.ZW.m128d_f64[1]._0_4_ = uVar41;
          local_138.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
          local_138.Rotation.ZW.m128d_f64[1]._4_4_ = uVar42;
          local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_138.Translation.XY.m128d_f64[1] =
               0.0 - (auVar28._0_8_ + auVar22._8_8_ * local_198.Rotation.ZW.m128d_f64[1] + dVar33);
          local_138.Translation.XY.m128d_f64[0] =
               0.0 - (auVar16._8_8_ + dVar34 * auVar30._8_8_ + local_198.Translation.XY.m128d_f64[0]
                     );
          local_138.Scale3D.XY.m128d_f64 = (double  [2])local_208;
        }
        local_198.Rotation.XY.m128d_f64[0] = (double)fVar44;
        local_198.Rotation.XY.m128d_f64[1] = (double)fVar45;
        local_198.Translation.XY.m128d_f64[0] = (double)fVar48;
        local_198.Translation.XY.m128d_f64[1] = (double)fVar49;
        local_198.Rotation.ZW.m128d_f64[0] = (double)fVar46;
        local_198.Rotation.ZW.m128d_f64[1] = (double)fVar47;
        local_198.Translation.ZW.m128d_f64[0] = (double)fVar50;
        local_198.Translation.ZW.m128d_f64[1] = (double)fVar51;
        local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_198,&local_138,&local_1f8);
        if (&local_1f8 != (TTransform<double> *)(lVar10 + 0x360)) {
          (((TTransform<double> *)(lVar10 + 0x360))->Rotation).XY.m128d_f64[0] =
               local_198.Rotation.XY.m128d_f64[0];
          *(double *)(lVar10 + 0x368) = local_198.Rotation.XY.m128d_f64[1];
          *(double *)(lVar10 + 0x370) = local_198.Rotation.ZW.m128d_f64[0];
          *(double *)(lVar10 + 0x378) = local_198.Rotation.ZW.m128d_f64[1];
          *(double *)(lVar10 + 0x380) = local_198.Translation.XY.m128d_f64[0];
          *(double *)(lVar10 + 0x388) = local_198.Translation.XY.m128d_f64[1];
          *(double *)(lVar10 + 0x390) = local_198.Translation.ZW.m128d_f64[0];
          *(double *)(lVar10 + 0x398) = local_198.Translation.ZW.m128d_f64[1];
          *(double *)(lVar10 + 0x3a0) = local_198.Scale3D.XY.m128d_f64[0];
          *(double *)(lVar10 + 0x3a8) = local_198.Scale3D.XY.m128d_f64[1];
          *(double *)(lVar10 + 0x3b0) = local_198.Scale3D.ZW.m128d_f64[0];
          *(double *)(lVar10 + 0x3b8) = local_198.Scale3D.ZW.m128d_f64[1];
          *(undefined1 *)(lVar10 + 0x3c0) = 1;
        }
      }
    }
  }
  return;
}

