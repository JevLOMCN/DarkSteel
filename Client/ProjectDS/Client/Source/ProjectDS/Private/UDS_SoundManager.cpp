// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 42

// StaticClass @ 14b59a3e0

UClass * __cdecl UDS_SoundManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SoundManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SoundManager",
               &Z_Registration_Info_UClass_UDS_SoundManager.InnerSingleton,
               StaticRegisterNativesUDS_SoundManager,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SoundManager>,
               InternalVTableHelperCtorCaller<UDS_SoundManager>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SoundManager.InnerSingleton;
}

// UDS_SoundManager @ 14b59cce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_SoundManager * __thiscall
UDS_SoundManager::UDS_SoundManager(UDS_SoundManager *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTimerManager::FTimerManager(&this->TimerManager,(UGameInstance *)0x0);
  (this->BGMSoundParam).FadeInTime = 0.5;
  (this->BGMTimerHandle).Handle = 0;
  (this->AmbientTimerHandle).Handle = 0;
  (this->BGMAudio).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  (this->OverlapBGMAudio).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  (this->BGMSound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->BGMSoundParam).bPlayLocation = false;
  (this->BGMSoundParam).FadeOutTime = 0.5;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BGMSoundParam).DelayTime = 0.0;
  local_res8 = 0;
  (this->BGMSoundParam).Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BGMSoundParam).Location.field0_0x0._s_0.Y = (double)uVar1;
  (this->BGMSoundParam).Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->SpawnedSoundMap = 0;
  *(undefined8 *)&(this->SpawnedSoundMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnedSoundMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x34 = 0;
  *(undefined8 *)&(this->SpawnedSoundMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x48 = 0;
  *(undefined8 *)&this->SoundVolumeInfoMap = 0;
  *(undefined8 *)&(this->SoundVolumeInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundVolumeInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->SoundVolumeInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x48 = 0;
  (this->CurBgmVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurBgmVolume).WeakPtr,(FObjectPtr)&local_res8);
  this->CurrentZoneDistrictId = 0;
  return this;
}

// UDS_SoundManager @ 14b59ce30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_SoundManager * __thiscall UDS_SoundManager::UDS_SoundManager(UDS_SoundManager *this)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTimerManager::FTimerManager(&this->TimerManager,(UGameInstance *)0x0);
  (this->BGMSoundParam).FadeInTime = 0.5;
  (this->BGMTimerHandle).Handle = 0;
  (this->AmbientTimerHandle).Handle = 0;
  (this->BGMAudio).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  (this->OverlapBGMAudio).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  (this->BGMSound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->BGMSoundParam).bPlayLocation = false;
  (this->BGMSoundParam).FadeOutTime = 0.5;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BGMSoundParam).DelayTime = 0.0;
  local_res8 = 0;
  (this->BGMSoundParam).Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BGMSoundParam).Location.field0_0x0._s_0.Y = (double)uVar1;
  (this->BGMSoundParam).Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->SpawnedSoundMap = 0;
  *(undefined8 *)&(this->SpawnedSoundMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnedSoundMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x34 = 0;
  *(undefined8 *)&(this->SpawnedSoundMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x48 = 0;
  *(undefined8 *)&this->SoundVolumeInfoMap = 0;
  *(undefined8 *)&(this->SoundVolumeInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundVolumeInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->SoundVolumeInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x48 = 0;
  (this->CurBgmVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurBgmVolume).WeakPtr,(FObjectPtr)&local_res8);
  this->CurrentZoneDistrictId = 0;
  return this;
}

// ~UDS_SoundManager @ 14b59d480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::~UDS_SoundManager(UDS_SoundManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined4 *)&(this->SoundVolumeInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundVolumeInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SoundType,FDS_SoundVolumeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SoundType,FDS_SoundVolumeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SoundVolumeInfoMap);
  *(undefined4 *)&(this->SpawnedSoundMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpawnedSoundMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDS_SpawnedSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDS_SpawnedSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDS_SpawnedSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpawnedSoundMap);
  FTimerManager::~FTimerManager(&this->TimerManager);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14b59e240

UClass * __cdecl UDS_SoundManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SoundManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SoundManager",
               &Z_Registration_Info_UClass_UDS_SoundManager.InnerSingleton,
               StaticRegisterNativesUDS_SoundManager,0x2b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SoundManager>,
               InternalVTableHelperCtorCaller<UDS_SoundManager>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SoundManager.InnerSingleton;
}

// IsTickableInEditor @ 14b59e480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_SoundManager::IsTickableInEditor(UDS_SoundManager *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].SoundVolumeInfoMap.field_0x30 >> 4) & 1);
}

// IsTickableWhenPaused @ 14b59e4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_SoundManager::IsTickableWhenPaused(UDS_SoundManager *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].SoundVolumeInfoMap.field_0x30 >> 4) & 1);
}

// StaticRegisterNativesUDS_SoundManager @ 14b59e560

void __cdecl UDS_SoundManager::StaticRegisterNativesUDS_SoundManager(void)

{
  return;
}

// ChangeSoundVolume @ 14bbaec90

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
UDS_SoundManager::ChangeSoundVolume
          (UDS_SoundManager *this,EDS_SoundType param_1,float param_2,float param_3)

{
  USoundMix *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_SoundVolumeInfo *pFVar4;
  USoundClass *pUVar5;
  UWorld *pUVar6;
  FWeakObjectPtr local_res8;
  EDS_SoundType local_res10 [2];
  
  if (this->SoundDataAsset != (UDS_SoundDataAsset *)0x0) {
    local_res10[0] = param_1;
    UDS_SoundDataAsset::FindSoundClass(this->SoundDataAsset,(EDS_SoundType)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      if (param_2 <= __real_3951b717) {
        param_2 = __real_3951b717;
      }
      pFVar4 = TMapBase<enum_EDS_SoundType,FDS_SoundVolumeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SoundType,FDS_SoundVolumeInfo,0>_>
               ::FindOrAddImpl<enum_EDS_SoundType_const_&>
                         (&this->SoundVolumeInfoMap,local_res10[0],local_res10);
      pFVar4->Volume = param_2;
      if (pFVar4->bIsMute == false) {
        pUVar5 = (USoundClass *)FWeakObjectPtr::Get(&local_res8);
        pUVar1 = this->SoundDataAsset->Mix_MasterSound;
        pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
        UGameplayStatics::SetSoundMixClassOverride
                  ((UObject *)pUVar6,pUVar1,pUVar5,param_2,__real_3f800000,param_3,true);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3800313868115246466>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                         ,0x27e,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// FinishDestroy @ 14bbba620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::FinishDestroy(UDS_SoundManager *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0x10 & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObject::DestroyNonNativeProperties((UObject *)this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(UDS_SoundManager **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetInst @ 14bbbc660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_SoundManager * __cdecl UDS_SoundManager::GetInst(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_SoundManager *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return (UDS_SoundManager *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UDS_SoundManager_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14bba3af2;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14bba3af2:
    pUVar4 = Z_Construct_UClass_UDS_SoundManager_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14bba3b22;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14bba3b22:
  pUVar5 = (UDS_SoundManager *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetInst @ 14bbbc680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_SoundManager * __cdecl UDS_SoundManager::GetInst(void)

{
  UWorld *this;
  UDS_SoundManager *pUVar1;
  
  this = UDS_GameInstance::GetGameInstanceWorld();
  if (this != (UWorld *)0x0) {
    pUVar1 = UWorld::GetSubsystem<UDS_SoundManager>(this);
    return pUVar1;
  }
  return (UDS_SoundManager *)0x0;
}

// GetStatId @ 14bbbe1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall UDS_SoundManager::GetStatId(UDS_SoundManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_SoundManager::GetStatId(void)const_::_2_::FStat_UDS_SoundManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UDS_SoundManager ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_SoundManager::GetStatId(void)const_::_2_::FStat_UDS_SoundManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UDS_SoundManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UDS_SoundManager,*pFVar1,
                   L"UDS_SoundManager","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UDS_SoundManager;
  if (StatPtr_UDS_SoundManager ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_SoundManager::GetStatId(void)const_::_2_::FStat_UDS_SoundManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UDS_SoundManager");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UDS_SoundManager::GetStatId(void)const_::_2_::FStat_UDS_SoundManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UDS_SoundManager,*pFVar1,
                         L"UDS_SoundManager","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 14bbbe390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UDS_SoundManager::GetTickableGameObjectWorld(UDS_SoundManager *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].SoundVolumeInfoMap.field_0x28);
  return pUVar1;
}

// Initialize @ 14bbc0620

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
UDS_SoundManager::Initialize(UDS_SoundManager *this,FSubsystemCollectionBase *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<EDS_SoundType,USoundClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_SoundType,USoundClass_*,0>_>
  *pTVar8;
  bool bVar9;
  FString *pFVar10;
  UDS_SoundDataAsset *pUVar11;
  UClass *pUVar12;
  UDS_GameOptionManager *pUVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TMap<EDS_SoundType,USoundClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_SoundType,USoundClass_*,0>_>
  *pTVar19;
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_128;
  FSoftObjectPath local_120;
  TMap<EDS_SoundType,USoundClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_SoundType,USoundClass_*,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [16];
  undefined4 uStack_c0;
  uint uStack_bc;
  TMap<EDS_SoundType,USoundClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_SoundType,USoundClass_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 *local_70;
  TStringView<wchar_t> local_68;
  FString local_58;
  code *local_48;
  longlong lStack_40;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  pFVar10 = ::FString::FString(&local_58,"/Game/Sounds/DA_SoundData");
  local_120.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_120.AssetPath.PackageName.Number = 0;
  local_120.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_120.AssetPath.AssetName.Number = 0;
  local_120.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.SubPathString.Data.ArrayNum = 0;
  local_120.SubPathString.Data.ArrayMax = 0;
  local_88 = (pFVar10->Data).AllocatorInstance.Data;
  iVar3 = (pFVar10->Data).ArrayNum;
  iStack_80 = iVar3 + -1;
  if (iVar3 == 0) {
    iStack_80 = 0;
  }
  local_68._12_4_ = uStack_7c;
  local_68.Size = iStack_80;
  local_68.DataPtr = (wchar_t *)local_88;
  FSoftObjectPath::SetPath(&local_120,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pUVar11 = (UDS_SoundDataAsset *)
            FSoftObjectPath::TryLoad(&local_120,(FUObjectSerializeContext *)0x0);
  if (pUVar11 != (UDS_SoundDataAsset *)0x0) {
    pUVar12 = Z_Construct_UClass_UDS_SoundDataAsset_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((iVar3 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar12->_padding_)) {
      this->SoundDataAsset = pUVar11;
      pUVar13 = UDS_GameOptionManager::GetInst();
      if (pUVar13 != (UDS_GameOptionManager *)0x0) {
        uStack_c0 = 0;
        local_d0._8_8_ = OnGameOptionLoaded;
        lStack_40 = (ulonglong)uStack_bc << 0x20;
        local_48 = OnGameOptionLoaded;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_SoundManager>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar13->LoadedGameOptionDeviceDelegate,(UDS_SoundManager *)(local_d0 + 8),
                   (pmf_132c9f23 *)this);
      }
      pUVar11 = this->SoundDataAsset;
      iStack_f8 = 0;
      pTVar19 = &pUVar11->SoundClassMap;
      uStack_f4 = 1;
      iVar3 = *(int *)&(pUVar11->SoundClassMap).field_0x28;
      puVar1 = &(pUVar11->SoundClassMap).field_0x10;
      iStack_e4 = iStack_f8;
      local_e0 = iStack_f8;
      if (iVar3 != 0) {
        puVar18 = *(uint **)&(pUVar11->SoundClassMap).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar16 = *puVar18;
        iStack_f8 = 0;
        local_e0 = 0;
        while (uVar16 == 0) {
          iStack_f8 = iStack_f8 + 1;
          local_e0 = local_e0 + 0x20;
          iStack_e4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14bbc07cb;
          uVar16 = puVar18[iStack_f8];
        }
        uStack_f4 = -uVar16 & uVar16;
        uVar2 = (ulonglong)uStack_f4 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_res20 = (int)lVar6;
        iStack_e4 = local_res20 + -1 + local_e0;
        if (iVar3 < iStack_e4) {
          iStack_e4 = iVar3;
        }
      }
LAB_14bbc07cb:
      uVar16 = *(uint *)&(pUVar11->SoundClassMap).field_0x28;
      uVar15 = uVar16 & 0xffffffe0;
      iStack_d8 = *(int *)&(pUVar11->SoundClassMap).field_0x8 -
                  *(int *)&(pUVar11->SoundClassMap).field_0x34;
      uStack_e8 = 0xffffffff;
      TStack_b0._padding_ = CONCAT44(uStack_f4,iStack_f8);
      TStack_b0.CurrentBitIndex = iStack_e4;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_b0._28_4_ = iStack_e4;
      TStack_b0.BaseBitIndex = local_e0;
      uStack_90 = CONCAT44(uStack_d4,iStack_d8);
      local_100 = pTVar19;
      local_f0 = puVar1;
      iStack_dc = iStack_e4;
      local_b8 = pTVar19;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar4 = *(uint *)&(pUVar11->SoundClassMap).field_0x28;
      if (uVar16 != uVar4) {
        puVar5 = *(undefined1 **)&(pUVar11->SoundClassMap).field_0x20;
        puVar17 = puVar1;
        if (puVar5 != (undefined1 *)0x0) {
          puVar17 = puVar5;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          iVar14 = iVar14 + 1;
          uVar15 = uVar15 + 0x20;
          uVar16 = uVar4;
          if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar14)
          goto LAB_14bbc08d0;
          uVar16 = *(uint *)(puVar17 + (longlong)iVar14 * 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar16 = (int)lVar6 + -1 + uVar15;
        if ((int)uVar4 < (int)uVar16) {
          uVar16 = uVar4;
        }
      }
LAB_14bbc08d0:
      while( true ) {
        pTVar8 = local_b8;
        if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
          `TSparseArray<TSparseSetElement<TTuple<enum_EDS_SoundType,USoundClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_b0.CurrentBitIndex == uVar16) &&
            (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar8 == pTVar19)) break;
        local_128 = 0x3f80000000000000;
        local_78 = *(longlong *)pTVar8 + (longlong)TStack_b0.CurrentBitIndex * 0x18;
        local_70 = &local_128;
        TSet<TTuple<enum_EDS_SoundType,FDS_SoundVolumeInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SoundType,FDS_SoundVolumeInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_SoundType_const_&,FDS_SoundVolumeInfo_&&>_>
                  (&this->SoundVolumeInfoMap,
                   (TPairInitializer<EDS_SoundType_const_&,FDS_SoundVolumeInfo_&&> *)local_d0,
                   (bool *)&local_78);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
    }
  }
  if (local_120.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// MuteSound @ 14bbc5bc0

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
UDS_SoundManager::MuteSound(UDS_SoundManager *this,EDS_SoundType param_1,bool param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  USoundMix *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  USoundClass *pUVar7;
  UWorld *pUVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FWeakObjectPtr local_res8;
  
  UDS_SoundDataAsset::FindSoundClass(this->SoundDataAsset,(EDS_SoundType)&local_res8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    if (*(int *)&(this->SoundVolumeInfoMap).field_0x8 !=
        *(int *)&(this->SoundVolumeInfoMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->SoundVolumeInfoMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->SoundVolumeInfoMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->SoundVolumeInfoMap).field_0x48 - MASTER & param_1)
                      * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *(longlong *)&this->SoundVolumeInfoMap + (longlong)iVar6 * 0x14;
          if (*(EDS_SoundType *)(*(longlong *)&this->SoundVolumeInfoMap + (longlong)iVar6 * 0x14) ==
              param_1) {
            lVar9 = lVar1 + 4;
            if (lVar1 == 0) {
              lVar9 = 0;
            }
            if (lVar9 == 0) {
              return;
            }
            *(bool *)lVar9 = param_2;
            if (param_2) {
              pUVar7 = (USoundClass *)FWeakObjectPtr::Get(&local_res8);
              pUVar3 = this->SoundDataAsset->Mix_MasterSound;
              pUVar8 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
              UGameplayStatics::SetSoundMixClassOverride
                        ((UObject *)pUVar8,pUVar3,pUVar7,0.0,0.0,0.0,true);
              return;
            }
            fVar2 = *(float *)(lVar9 + 4);
            pUVar7 = (USoundClass *)FWeakObjectPtr::Get(&local_res8);
            pUVar3 = this->SoundDataAsset->Mix_MasterSound;
            pUVar8 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
            UGameplayStatics::SetSoundMixClassOverride
                      ((UObject *)pUVar8,pUVar3,pUVar7,fVar2,__real_3f800000,param_3,true);
            return;
          }
          iVar6 = *(int *)(lVar1 + 0xc);
        } while (iVar6 != -1);
      }
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3800313868115246441>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                       ,0x297,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// OnAmbientLoaded @ 14bbc7230

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
UDS_SoundManager::OnAmbientLoaded(UDS_SoundManager *this,FWN_AmbientSoundInfo *param_1)

{
  FGuid *pFVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  FDS_SpawnedSoundInfo *pFVar9;
  FDS_SpawnedSoundInfo *pFVar10;
  FUObjectItem *pFVar11;
  UClass *pUVar12;
  UDS_LogManager *pUVar13;
  ulong64 uVar14;
  USoundBase *pUVar15;
  undefined8 *puVar16;
  undefined1 auStackY_368 [32];
  FWeakObjectPtr local_328;
  FDelegateAllocation local_320;
  FString local_308;
  TPairInitializer<FGuid_const_&,FDS_SpawnedSoundInfo_&> local_2f8;
  FDS_SpawnedSoundInfo *local_2e8;
  UDS_SoundManager *local_2e0;
  FString local_2d8;
  FGuid *local_2c8;
  undefined8 local_2c0;
  UAudioComponent *local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined1 local_2a4;
  double local_2a0;
  double dStack_298;
  double local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pUVar8 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar8 == (UWorld *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3800313868115246569>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                       ,0x217,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar2 = *(void **)&(param_1->AmbientSound).SoftObjectPtr.field_0x18;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    FMemory::Free(pvVar2);
    return;
  }
  pFVar9 = (FDS_SpawnedSoundInfo *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->AmbientSound);
  if ((pFVar9 == (FDS_SpawnedSoundInfo *)0x0) &&
     (*(longlong *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8 != 0)) {
    pFVar10 = (FDS_SpawnedSoundInfo *)
              FSoftObjectPath::ResolveObject
                        ((FSoftObjectPath *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar10 != (FDS_SpawnedSoundInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pFVar10);
    }
    bVar6 = (*IsInAsyncLoadingThread)();
    if (((bVar6) && (pFVar10 != (FDS_SpawnedSoundInfo *)0x0)) &&
       (pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,(int)(pFVar10->Param).FadeOutTime),
       ((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14bbc736d:
      if (((uint)(pFVar10->Param).FadeInTime >> 0x1e & 1) != 0) goto LAB_14bbc737b;
      bVar6 = true;
    }
    else {
      local_2f8.Value = pFVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pFVar10 != (FDS_SpawnedSoundInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pFVar10);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)&param_1->AmbientSound,(FObjectPtr)&local_2f8.Value);
      if (pFVar10 != (FDS_SpawnedSoundInfo *)0x0) goto LAB_14bbc736d;
LAB_14bbc737b:
      bVar6 = false;
    }
    pFVar9 = (FDS_SpawnedSoundInfo *)0x0;
    if (bVar6) {
      pFVar9 = pFVar10;
    }
  }
  if (pFVar9 == (FDS_SpawnedSoundInfo *)0x0) {
LAB_14bbc73ae:
    pFVar9 = (FDS_SpawnedSoundInfo *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_USoundBase_NoRegister();
    lVar3 = *(longlong *)&(pFVar9->Param).DelayTime;
    iVar7 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar12->_padding_)) goto LAB_14bbc73ae;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar9 != (FDS_SpawnedSoundInfo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar9);
  }
  local_328.ObjectIndex = 0;
  local_328.ObjectSerialNumber = 0;
  local_2e8 = pFVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar9 != (FDS_SpawnedSoundInfo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar9);
  }
  FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_2e8);
  bVar6 = TWeakObjectPtr<USoundBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USoundBase,FWeakObjectPtr> *)&local_328,(void *)0x0);
  if (bVar6) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bbc7751;
    pUVar13 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString
              ((FSoftObjectPath *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8,&local_2d8);
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_SoundManager::OnAmbientLoaded",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar13,1,Display,local_288.Ptr,0x21e,L"Not Exist Sound : %s");
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
  else {
    pFVar1 = &param_1->Guid;
    uVar14 = CityHash64((char *)pFVar1,0x10);
    iVar7 = TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                        *)&this->SpawnedSoundMap,(uint)uVar14,pFVar1);
    if (iVar7 == -1) {
      pUVar15 = (USoundBase *)FWeakObjectPtr::Get(&local_328);
      local_2b8 = UGameplayStatics::SpawnSound2D
                            ((UObject *)pUVar8,pUVar15,__real_3f800000,__real_3f800000,0.0,
                             (USoundConcurrency *)0x0,false,true);
      local_2b8->bAutoDestroy = '\0';
      local_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_2b8);
      }
      local_2b0 = param_1->SoundFadeInTime;
      local_2c0 = &local_2b8;
      local_2a8 = param_1->SoundDelayTime;
      local_2ac = param_1->SoundFadeOutTime;
      local_2a4 = 0;
      local_2c8 = pFVar1;
      TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FDS_SpawnedSoundInfo_&>_>
                ((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                  *)&this->SpawnedSoundMap,&local_2f8,(bool *)&local_2c8);
      local_308.Data.ArrayNum = 0;
      local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnDelayedPlayAmbientSound;
      local_308.Data.ArrayMax = local_2c0._4_4_;
      local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_320.DelegateSize = 0;
      puVar16 = UE::Core::Private::DelegateAllocate(0x38,&local_320);
      if (puVar16 != (undefined8 *)0x0) {
        *puVar16 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFGuid____6B_
        ;
        uVar5 = *(undefined8 *)&(param_1->Guid).C;
        puVar16[1] = *(undefined8 *)pFVar1;
        puVar16[2] = uVar5;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar16[3] = uVar14;
        *puVar16 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFGuid____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_SoundManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar16[4] = 0;
        local_2e0 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_SoundManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 4),(FObjectPtr)&local_2e0);
        puVar16[5] = local_308.Data.AllocatorInstance.Data;
        puVar16[6] = CONCAT44(local_308.Data.ArrayMax,local_308.Data.ArrayNum);
      }
      FTimerManager::SetTimer
                (&this->TimerManager,&this->AmbientTimerHandle,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_320,__real_3f800000,false,local_2a8);
      local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_320.DelegateAllocator
      ;
      if (local_320.DelegateSize != 0) {
        if (local_320.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
        goto LAB_14bbc7751;
        (*(code *)**(undefined8 **)local_320.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_320,0,0,0x10);
        local_320.DelegateSize = 0;
        local_2d8.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_320.DelegateAllocator;
      }
    }
    else {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bbc7751;
      pUVar13 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString
                ((FSoftObjectPath *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8,&local_308);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_SoundManager::OnAmbientLoaded",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Display,local_168.Ptr,0x224,L"Already Played Sound : %s");
      local_2d8.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
        local_2d8.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
      }
    }
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_2d8.Data.AllocatorInstance.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
LAB_14bbc7751:
  pvVar2 = *(void **)&(param_1->AmbientSound).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// OnBGMLoaded @ 14bbc77b0

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
UDS_SoundManager::OnBGMLoaded
          (UDS_SoundManager *this,FSoftObjectPath *param_1,FDS_PlaySoundParam *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar4 = FSoftObjectPath::ResolveObject(param_1);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_USoundBase_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bbc780f;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bbc780f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_168.ObjectIndex = 0;
  local_168.ObjectSerialNumber = 0;
  local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
  bVar3 = TWeakObjectPtr<USoundBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USoundBase,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_160);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_SoundManager::OnBGMLoaded",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Display,local_148.Ptr,0x19a,L"Not Exist Sound : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if ((UObject *)local_160.Data.AllocatorInstance.Data != (UObject *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    PlayBGMInternal(this,(TWeakObjectPtr<USoundBase,FWeakObjectPtr>)local_168,param_2);
  }
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OnBGMVolumeChanged @ 14bbc7970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::OnBGMVolumeChanged(UDS_SoundManager *this,AWN_BGMVolume *param_1)

{
  AWN_BGMVolume *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_BGMVolume *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CurBgmVolume).WeakPtr,(FObjectPtr)local_res8);
  RefreshBGM(this);
  return;
}

// OnBackgroundAudioChanged @ 14bbc79c0

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
UDS_SoundManager::OnBackgroundAudioChanged
          (UDS_SoundManager *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = UDS_GameOptionData::GetGameOptionValue(param_1,0);
  fVar3 = __real_3f800000;
  if (iVar2 != 1) {
    fVar3 = 0.0;
  }
  FApp::SetUnfocusedVolumeMultiplier(fVar3);
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// OnDelayedPlayAmbientSound @ 14bbc88e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::OnDelayedPlayAmbientSound(UDS_SoundManager *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  ulonglong in_stack_ffffffffffffffe8;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                      *)&this->SpawnedSoundMap,(uint)uVar5,param_1);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&(this->SpawnedSoundMap).field_0x0 + (longlong)iVar4 * 0x48;
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)*puVar6 + 0x650))((longlong *)*puVar6,0);
      (**(code **)(*(longlong *)*puVar6 + 0x640))
                ((longlong *)*puVar6,*(undefined4 *)(puVar6 + 1),__real_3f800000,0,
                 in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3800313868115246532>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                     ,0x23c,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// OnFadeInAfterFadeOut @ 14bbc9810

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
UDS_SoundManager::OnFadeInAfterFadeOut
          (UDS_SoundManager *this,TWeakObjectPtr<USoundBase,FWeakObjectPtr> param_1,
          FDS_PlaySoundParam *param_2)

{
  UAudioComponent *pUVar1;
  bool bVar2;
  USoundBase *pUVar3;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar1 = (this->BGMAudio).field0_0x0.DebugPtr;
    pUVar3 = (USoundBase *)FWeakObjectPtr::Get(&local_res10);
    UAudioComponent::SetSound(pUVar1,pUVar3);
    pUVar1 = (this->BGMAudio).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x650))(pUVar1,0);
    pUVar1 = (this->BGMAudio).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x640))(pUVar1,param_2->FadeInTime,__real_3f800000,0,0);
  }
  return;
}

// OnGameOptionLoaded @ 14bbc98b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::OnGameOptionLoaded(UDS_SoundManager *this)

{
  EDS_SoundType EVar1;
  longlong lVar2;
  void *pvVar3;
  USoundMix *pUVar4;
  code *pcVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  USoundClass *pUVar14;
  UWorld *pUVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  float fVar22;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UDS_SoundManager *local_res20;
  ForAnyElementType local_168;
  undefined8 local_160;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FDelegateAllocation local_150;
  FString local_138;
  UDS_GameOptionManager *local_128;
  FScriptContainerElement *local_120;
  code *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  code *local_108;
  undefined8 uStack_100;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  undefined1 local_90 [40];
  FReadAccessScope local_68 [2];
  
  this_00 = UDS_GameOptionManager::GetInst();
  if (this_00 != (UDS_GameOptionManager *)0x0) {
    local_128 = this_00;
    pUVar11 = UDS_GameOptionManager::GetGameOptionData(this_00,SoundAllowBackgroundAudio);
    if (pUVar11 != (UDS_GameOptionData *)0x0) {
      local_138.Data._8_8_ = local_138.Data._8_8_ & 0xffffffff00000000;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnBackgroundAudioChanged;
      local_108 = OnBackgroundAudioChanged;
      uStack_100._0_4_ = local_138.Data.ArrayNum;
      uStack_100._4_4_ = local_138.Data.ArrayMax;
      TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_SoundManager>
                ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                  *)&pUVar11->GameOptionDataChangedFromVM,(UDS_SoundManager *)local_90,
                 (pmf_73d74ad5 *)this);
      UDS_GameOptionData::GetGameOptionValue(pUVar11,0);
      iVar9 = UDS_GameOptionData::GetGameOptionValue(pUVar11,0);
      fVar22 = __real_3f800000;
      if (iVar9 != 1) {
        fVar22 = 0.0;
      }
      FApp::SetUnfocusedVolumeMultiplier(fVar22);
    }
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_168,(int *)((longlong)&local_160 + 4));
    iVar9 = iVar10 + 1;
    *(undefined4 *)(local_168.Data + (longlong)iVar10 * 8) = 0x1f6;
    *(undefined4 *)(local_168.Data + (longlong)iVar10 * 8 + 4) = 1;
    if (iVar9 == local_160._4_4_) {
      local_160._0_4_ = iVar9;
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_168,(int *)((longlong)&local_160 + 4));
    }
    local_160._0_4_ = iVar9 + 1;
    *(undefined4 *)(local_168.Data + (longlong)iVar9 * 8) = 0x1f8;
    *(undefined4 *)(local_168.Data + (longlong)iVar9 * 8 + 4) = 2;
    if ((int)local_160 == local_160._4_4_) {
      local_160._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_168,(int *)((longlong)&local_160 + 4));
    }
    iVar9 = (int)local_160 + 1;
    *(undefined4 *)(local_168.Data + (longlong)(int)local_160 * 8) = 0x1fa;
    *(undefined4 *)(local_168.Data + (longlong)(int)local_160 * 8 + 4) = 4;
    if (iVar9 == local_160._4_4_) {
      local_160._0_4_ = iVar9;
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_168,(int *)((longlong)&local_160 + 4));
    }
    local_160._0_4_ = iVar9 + 1;
    *(undefined4 *)(local_168.Data + (longlong)iVar9 * 8) = 0x1fc;
    *(undefined4 *)(local_168.Data + (longlong)iVar9 * 8 + 4) = 3;
    if ((int)local_160 == local_160._4_4_) {
      local_160._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_168,(int *)((longlong)&local_160 + 4));
    }
    iVar9 = (int)local_160 + 1;
    *(undefined4 *)(local_168.Data + (longlong)(int)local_160 * 8) = 0x200;
    *(undefined4 *)(local_168.Data + (longlong)(int)local_160 * 8 + 4) = 5;
    if (iVar9 == local_160._4_4_) {
      local_160._0_4_ = iVar9;
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_168,(int *)((longlong)&local_160 + 4));
    }
    uVar6 = uStack_100._4_4_;
    local_res18.ObjectIndex = iVar9 + 1;
    local_160 = CONCAT44(local_160._4_4_,local_res18.ObjectIndex);
    *(undefined4 *)(local_168.Data + (longlong)iVar9 * 8) = 0x1fe;
    *(undefined4 *)(local_168.Data + (longlong)iVar9 * 8 + 4) = 6;
    uVar16 = (ulonglong)local_res18.ObjectIndex;
    pFVar21 = local_168.Data + uVar16 * 8;
    uVar18 = uVar16;
    FVar20.Data = local_168.Data;
    local_120 = pFVar21;
    while( true ) {
      if ((int)uVar16 != (int)uVar18) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<`UDS_SoundManager::OnGameOptionLoaded'::__l2::FTempOptionPair,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar20.Data == pFVar21) break;
      pUVar11 = UDS_GameOptionManager::GetGameOptionData(this_00,*(EDS_GameOptionType *)FVar20.Data)
      ;
      if (pUVar11 != (UDS_GameOptionData *)0x0) {
        uStack_10c = uVar6;
        local_118 = OnVolumeOptionChanged;
        uStack_110 = 0;
        local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_150.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_158,(FWriteAccessScope *)&local_b0);
        local_98 = &local_150;
        puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_150);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_GameOptionData__HHVFString___ZUFDefaultDelegateUserPolicy__W4EDS_SoundType____6B_
          ;
          *(EDS_GameOptionType *)(puVar12 + 1) = *(EDS_GameOptionType *)(FVar20.Data + 4);
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXPEAVUDS_GameOptionData__HHVFString___ZUFDefaultDelegateUserPolicy__W4EDS_SoundType____6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_SoundManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar12[3] = 0;
          local_res20 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_SoundManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res20);
          puVar12[4] = local_118;
          puVar12[5] = CONCAT44(uStack_10c,uStack_110);
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pUVar11->GameOptionDataChangedFromVM,(FWriteAccessScope *)&local_e0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_158,(FReadAccessScope *)(local_90 + 0x10));
        if (((local_150.DelegateSize == 0) ||
            (local_150.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
           (cVar7 = (**(code **)(*(longlong *)local_150.DelegateAllocator + 0x38))(), cVar7 == '\0')
           ) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)(local_90 + 0x10));
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)(local_90 + 0x10));
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar11->GameOptionDataChangedFromVM,true);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (&local_158,local_68);
          if ((local_150.DelegateSize != 0) &&
             (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (**(code **)(*(longlong *)local_150.DelegateAllocator + 0x40))
                      (local_150.DelegateAllocator,local_90 + 8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_68);
          iVar9 = *(int *)&(pUVar11->GameOptionDataChangedFromVM).field_0x10;
          puVar17 = &(pUVar11->GameOptionDataChangedFromVM).field_0x14;
          if (iVar9 == *(int *)puVar17) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)
                                     &(pUVar11->GameOptionDataChangedFromVM).field_0x8,
                               (int *)puVar17);
            *(int *)&(pUVar11->GameOptionDataChangedFromVM).field_0x10 = iVar9;
          }
          lVar2 = *(longlong *)&(pUVar11->GameOptionDataChangedFromVM).field_0x8;
          *(int *)&(pUVar11->GameOptionDataChangedFromVM).field_0x10 = iVar9 + 1;
          lVar19 = (longlong)iVar9;
          *(undefined8 *)(lVar2 + lVar19 * 0x10) = 0;
          *(undefined4 *)(lVar2 + 8 + lVar19 * 0x10) = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_158,(FWriteAccessScope *)&local_f8);
          pvVar3 = *(void **)(lVar2 + lVar19 * 0x10);
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          *(ForElementType<TAlignedBytes<16,16>_> *)(lVar2 + lVar19 * 0x10) =
               local_150.DelegateAllocator;
          local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(int *)(lVar2 + 8 + lVar19 * 0x10) = local_150.DelegateSize;
          local_150.DelegateSize = 0;
          if (local_f8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
          }
        }
        if (local_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_158,(FWriteAccessScope *)&local_c8);
        if ((local_150.DelegateSize != 0) &&
           (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_150,0,0,0x10);
          local_150.DelegateSize = 0;
        }
        if (local_c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
        }
        if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_150.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
        EVar1 = *(EDS_SoundType *)(FVar20.Data + 4);
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        iVar9 = UDS_GameOptionData::GetGameOptionValue(pUVar11,0);
        OnVolumeOptionChanged(this,pUVar11,0,iVar9,&local_138,EVar1);
        this_00 = local_128;
        pFVar21 = local_120;
      }
      uVar16 = local_160 & 0xffffffff;
      FVar20.Data = FVar20.Data + 8;
      uVar18 = (ulonglong)(uint)local_res18.ObjectIndex;
    }
    UDS_SoundDataAsset::FindSoundClass(this->SoundDataAsset,(EDS_SoundType)&local_res18);
    bVar8 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar8) {
      if (*(int *)&(this->SoundVolumeInfoMap).field_0x8 !=
          *(int *)&(this->SoundVolumeInfoMap).field_0x34) {
        puVar17 = *(undefined1 **)&(this->SoundVolumeInfoMap).field_0x40;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &(this->SoundVolumeInfoMap).field_0x38;
        }
        iVar9 = *(int *)(puVar17 +
                        (ulonglong)(*(int *)&(this->SoundVolumeInfoMap).field_0x48 - 1U & 3) * 4);
        if (iVar9 != -1) {
          do {
            lVar2 = *(longlong *)&this->SoundVolumeInfoMap + (longlong)iVar9 * 0x14;
            if (*(int *)(*(longlong *)&this->SoundVolumeInfoMap + (longlong)iVar9 * 0x14) == 3) {
              puVar17 = (undefined1 *)(lVar2 + 4);
              if (lVar2 == 0) {
                puVar17 = (undefined1 *)0x0;
              }
              if (puVar17 != (undefined1 *)0x0) {
                *puVar17 = 1;
                pUVar14 = (USoundClass *)FWeakObjectPtr::Get(&local_res18);
                pUVar4 = this->SoundDataAsset->Mix_MasterSound;
                pUVar15 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
                UGameplayStatics::SetSoundMixClassOverride
                          ((UObject *)pUVar15,pUVar4,pUVar14,0.0,0.0,0.0,true);
              }
              break;
            }
            iVar9 = *(int *)(lVar2 + 0xc);
          } while (iVar9 != -1);
        }
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3800313868115246441>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                         ,0x297,"false");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  return;
}

// OnSoundLoaded @ 14bbcbe90

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

void __thiscall UDS_SoundManager::OnSoundLoaded(UDS_SoundManager *this,int param_1)

{
  int iVar1;
  FDS_ResourceSoundTableRow *pFVar2;
  USoundBase *pUVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_ResourceSoundTableRow::GetRef((longlong)param_1,true);
  pUVar3 = (USoundBase *)FSoftObjectPath::ResolveObject(&pFVar2->FilePath);
  if (pUVar3 != (USoundBase *)0x0) {
    pUVar4 = Z_Construct_UClass_USoundBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      UGameplayStatics::PlaySound2D
                ((UObject *)pUVar5,pUVar3,__real_3f800000,__real_3f800000,0.0,
                 (USoundConcurrency *)0x0,(AActor *)0x0,true);
      return;
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&pFVar2->FilePath,&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SoundManager::OnSoundLoaded",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Display,local_138.Ptr,0x152,L"Not Exist Sound : %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSpawnSoundLoaded @ 14bbcc010

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
UDS_SoundManager::OnSpawnSoundLoaded
          (UDS_SoundManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1,int param_2,
          TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  FDS_ResourceSoundTableRow *pFVar4;
  USoundBase *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UAudioComponent *pUVar8;
  UDS_LogManager *pUVar9;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FReadAccessScope local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_res10[0] = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar3) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
    if (*(void **)&param_3->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_3->field_0x8);
    }
    goto LAB_14bbcc2b9;
  }
  pFVar4 = FDS_ResourceSoundTableRow::GetRef((longlong)param_2,true);
  pUVar5 = (USoundBase *)FSoftObjectPath::ResolveObject(&pFVar4->FilePath);
  if (pUVar5 == (USoundBase *)0x0) {
LAB_14bbcc1df:
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(&pFVar4->FilePath,(FString *)&local_178);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SoundManager::OnSpawnSoundLoaded",0x24,Yes);
      pwVar11 = L"Not Exist Sound : %s";
      uVar10 = 0x175;
LAB_14bbcc257:
      UDS_LogManager::PrintLog(pUVar9,1,Display,local_158.Ptr,uVar10,pwVar11);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if ((void *)local_178.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_178.DestructionSentinel._0_8_);
      }
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_USoundBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14bbcc1df;
    pUVar7 = FWeakObjectPtr::Get(local_res10);
    pUVar8 = UGameplayStatics::SpawnSound2D
                       (pUVar7,pUVar5,__real_3f800000,__real_3f800000,0.0,(USoundConcurrency *)0x0,
                        false,true);
    if (pUVar8 == (UAudioComponent *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14bbcc293;
      pUVar9 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(&pFVar4->FilePath,(FString *)&local_178);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SoundManager::OnSpawnSoundLoaded",0x24,Yes);
      pwVar11 = L"Fail Spawn Sound : %s";
      uVar10 = 0x17c;
      goto LAB_14bbcc257;
    }
    (**(code **)(*(longlong *)pUVar8 + 0x640))(pUVar8,pFVar4->SoundFadeInTime,__real_3f800000,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_178);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&param_3->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pUVar8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
  }
LAB_14bbcc293:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
LAB_14bbcc2b9:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// OnStopBGMAfterFadeOut @ 14bbcc2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::OnStopBGMAfterFadeOut(UDS_SoundManager *this)

{
  UAudioComponent *this_00;
  
  this_00 = (this->BGMAudio).field0_0x0.DebugPtr;
  if (this_00 != (UAudioComponent *)0x0) {
    UAudioComponent::SetSound(this_00,(USoundBase *)0x0);
  }
  if ((this->BGMSound).field0_0x0.DebugPtr != (USoundBase *)0x0) {
    (this->BGMSound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  }
  return;
}

// OnVolumeOptionChanged @ 14bbcc590

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
UDS_SoundManager::OnVolumeOptionChanged
          (UDS_SoundManager *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4,EDS_SoundType param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  EDS_GameOptionType EVar3;
  int iVar4;
  int iVar5;
  FDS_GameOptionBaseTableRow *pFVar6;
  float fVar7;
  
  EVar3 = UDS_GameOptionData::GetGameOptionID(param_1);
  pFVar6 = FDS_GameOptionBaseTableRow::GetRef((longlong)(int)EVar3,true);
  iVar1 = pFVar6->Value2;
  iVar4 = UDS_GameOptionData::GetGameOptionValue(param_1,0);
  iVar5 = UDS_GameOptionData::GetGameOptionValue(param_1,1);
  if (iVar5 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)iVar4 / (float)iVar1;
  }
  ChangeSoundVolume(this,param_5,fVar7,__real_3f800000);
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OnWorldBeginPlay @ 14bbcc640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::OnWorldBeginPlay(UDS_SoundManager *this,UWorld *param_1)

{
  USoundMix *pUVar1;
  UWorld *pUVar2;
  
  if (this->SoundDataAsset != (UDS_SoundDataAsset *)0x0) {
    UWorldSubsystem::OnWorldBeginPlay((UWorldSubsystem *)this,param_1);
    pUVar1 = this->SoundDataAsset->Mix_MasterSound;
    pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    UGameplayStatics::PushSoundMixModifier((UObject *)pUVar2,pUVar1);
  }
  return;
}

// OnZoneDistrictChanged @ 14bbcc690

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
UDS_SoundManager::OnZoneDistrictChanged
          (UDS_SoundManager *this,uint param_1,uint param_2,UWorld *param_3)

{
  this->CurrentZoneDistrictId = param_2;
  RefreshBGM(this);
  RefreshZoneVolumeAmbient(this);
  return;
}

// PauseBGM @ 14bbccfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::PauseBGM(UDS_SoundManager *this,bool param_1)

{
  USoundBase *pUVar1;
  ulong64 uVar2;
  UAudioComponent *this_00;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  TStatId TVar5;
  FName FStackX_8;
  undefined4 uStackX_10;
  FString FStack_88;
  FString FStack_78;
  undefined1 uStack_68;
  undefined7 uStack_67;
  code *apcStack_58 [5];
  undefined8 *puStack_30;
  
  this_00 = (this->BGMAudio).field0_0x0.DebugPtr;
  if (this_00 == (UAudioComponent *)0x0) {
    return;
  }
  uStackX_10 = 0;
  if (this_00->bIsPaused != param_1) {
    this_00->field_0x4ca = this_00->field_0x4ca & 0xef | param_1 << 4;
    if ((this_00->field_0x9a & 0x10) != 0) {
      if (5 < (byte)LogAudio._0_1_) {
        pUVar1 = (this_00->Sound).field0_0x0.DebugPtr;
        if (pUVar1 != (USoundBase *)0x0) {
          FStackX_8 = (FName)pUVar1->_padding_;
          ::FName::ToString(&FStackX_8,&FStack_88);
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&FStack_78,(UObject *)0x0,None);
        UAudioComponent::GetAudioTimeSeconds(this_00);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
        if ((pUVar1 != (USoundBase *)0x0) &&
           (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = (FScriptContainerElement *)(**(code **)(*(longlong *)&this_00->field_0x250 + 0x88))()
      ;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_AudioPauseActiveSound ==
              (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPaused(bool)_::_29_::FStat_STAT_AudioPauseActiveSound>
               )0x0) {
            pFVar4 = ::FName::FName(&FStackX_8,"STAT_AudioPauseActiveSound");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPauseActiveSound,*pFVar4,
                       L"FAudioThreadTask.PauseActiveSound","STATGROUP_AudioThreadCommands",
                       "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        uVar2 = this_00->AudioComponentID;
        TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioPauseActiveSound;
        if (StatPtr_STAT_AudioPauseActiveSound ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPaused(bool)_::_29_::FStat_STAT_AudioPauseActiveSound>
             )0x0) {
          pFVar4 = ::FName::FName(&FStackX_8,"STAT_AudioPauseActiveSound");
          TVar5.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPauseActiveSound,*pFVar4,
                          L"FAudioThreadTask.PauseActiveSound","STATGROUP_AudioThreadCommands",
                          "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                          MCR_Invalid);
        }
        apcStack_58[0] = (code *)0x0;
        FStack_78.Data.AllocatorInstance.Data = pFVar3;
        FStack_78.Data._8_8_ = uVar2;
        uStack_68 = param_1;
        puStack_30 = FMemory::Malloc(0x20,8);
        *puStack_30 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UAudioComponent::SetPaused'::`29'::<lambda_1>,1,1>::
                       _vftable_;
        puStack_30[1] = FStack_78.Data.AllocatorInstance.Data;
        puStack_30[2] = FStack_78.Data._8_8_;
        puStack_30[3] = CONCAT71(uStack_67,uStack_68);
        if (puStack_30 + 1 != (longlong *)0x0) {
          apcStack_58[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UAudioComponent::SetPaused'::__l29::<lambda_1>,void>::Call;
        }
        FAudioThread::RunCommandOnAudioThread
                  ((TUniqueFunction<void___cdecl(void)> *)apcStack_58,TVar5);
      }
    }
    UAudioComponent::BroadcastPlayState(this_00);
  }
  return;
}

// PlayAmbient @ 14bbccfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::PlayAmbient(UDS_SoundManager *this,FWN_AmbientSoundInfo *param_1)

{
  undefined8 uVar1;
  UAssetManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_SoundManager *local_res10;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [24];
  code *local_88;
  FMRSWRecursiveAccessDetector *pFStack_80;
  char *local_78;
  FString local_68;
  TSharedPtr<FStreamableHandle,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pUVar2 = UAssetManager::Get();
  local_a0._0_4_ = 0x20f;
  local_a0._4_4_ = 0x28;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp";
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_a0._16_8_ =
       "void __cdecl UDS_SoundManager::PlayAmbient(const struct FWN_AmbientSoundInfo &)";
  local_88 = OnAmbientLoaded;
  pFStack_80 = (FMRSWRecursiveAccessDetector *)
               ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_b0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x78,&local_b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFWN_AmbientSoundInfo____6B_
    ;
    puVar3[1] = &___7FWN_AmbientSoundInfo__6B_;
    puVar3[2] = *(undefined8 *)&(param_1->AmbientSound).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(puVar3 + 3),
               (FSoftObjectPath *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8);
    *(float *)(puVar3 + 7) = param_1->SoundFadeInTime;
    *(float *)((longlong)puVar3 + 0x3c) = param_1->SoundFadeOutTime;
    *(float *)(puVar3 + 8) = param_1->SoundDelayTime;
    *(int *)((longlong)puVar3 + 0x44) = param_1->AmbientSoundPriority;
    uVar1 = *(undefined8 *)&(param_1->Guid).C;
    puVar3[9] = *(undefined8 *)&param_1->Guid;
    puVar3[10] = uVar1;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[0xb] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFDefaultDelegateUserPolicy__UFWN_AmbientSoundInfo____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SoundManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[0xc] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SoundManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 0xc),(FObjectPtr)&local_res10);
    puVar3[0xd] = local_88;
    puVar3[0xe] = pFStack_80;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_88._4_4_ = local_a0._4_4_;
  local_88._0_4_ = local_a0._0_4_;
  pFStack_80 = (FMRSWRecursiveAccessDetector *)local_a0._8_8_;
  local_78 = (char *)local_a0._16_8_;
  FStreamableManager::
  RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar2->StreamableManager,&local_58,
             (FSoftObjectPath *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8,0,false,false,
             &local_68,(FSourceLocation *)&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      local_58.SharedReferenceCount.ReferenceController._0_4_));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)local_a0);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0._8_8_,(FDestructionSentinel *)local_a0);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  return;
}

// PlayBGM @ 14bbcd210

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
UDS_SoundManager::PlayBGM
          (UDS_SoundManager *this,FSoftObjectPath *param_1,FDS_PlaySoundParam *param_2)

{
  undefined8 uVar1;
  double dVar2;
  UAssetManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_SoundManager *local_res20;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [24];
  code *local_88;
  FMRSWRecursiveAccessDetector *pFStack_80;
  char *local_78;
  FString local_68;
  TSharedPtr<FStreamableHandle,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pUVar3 = UAssetManager::Get();
  local_a0._0_4_ = 0x192;
  local_a0._4_4_ = 0x28;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp";
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_a0._16_8_ =
       "void __cdecl UDS_SoundManager::PlayBGM(const struct FSoftObjectPath &,const struct FDS_PlaySoundParam &)"
  ;
  local_88 = OnBGMLoaded;
  pFStack_80 = (FMRSWRecursiveAccessDetector *)
               ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_b0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x70,&local_b0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath__UFDS_PlaySoundParam____6B_
    ;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(puVar4 + 1),param_1);
    uVar1 = *(undefined8 *)&param_2->DelayTime;
    puVar4[5] = *(undefined8 *)param_2;
    puVar4[6] = uVar1;
    dVar2 = (param_2->Location).field0_0x0._s_0.Y;
    puVar4[7] = (param_2->Location).field0_0x0._s_0.X;
    puVar4[8] = dVar2;
    puVar4[9] = (param_2->Location).field0_0x0._s_0.Z;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[10] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath__UFDS_PlaySoundParam____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SoundManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[0xb] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SoundManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 0xb),(FObjectPtr)&local_res20);
    puVar4[0xc] = local_88;
    puVar4[0xd] = pFStack_80;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_88._4_4_ = local_a0._4_4_;
  local_88._0_4_ = local_a0._0_4_;
  pFStack_80 = (FMRSWRecursiveAccessDetector *)local_a0._8_8_;
  local_78 = (char *)local_a0._16_8_;
  FStreamableManager::
  RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar3->StreamableManager,&local_58,param_1,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8,0,false,false,
             &local_68,(FSourceLocation *)&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      local_58.SharedReferenceCount.ReferenceController._0_4_));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)local_a0);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0._8_8_,(FDestructionSentinel *)local_a0);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  return;
}

// PlayBGM @ 14bbcd480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::PlayBGM(UDS_SoundManager *this,int param_1)

{
  FDS_ResourceSoundTableRow *pFVar1;
  
  if (param_1 == 0) {
    StopBGM(this);
    return;
  }
  pFVar1 = FDS_ResourceSoundTableRow::GetRef((longlong)param_1,true);
  PlayBGM(this,&pFVar1->FilePath,&FDS_PlaySoundParam::Default);
  return;
}

// PlayBGMInternal @ 14bbcd530

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
UDS_SoundManager::PlayBGMInternal
          (UDS_SoundManager *this,TWeakObjectPtr<USoundBase,FWeakObjectPtr> param_1,
          FDS_PlaySoundParam *param_2)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  undefined3 uVar6;
  bool bVar7;
  char cVar8;
  UWorld *pUVar9;
  USoundBase *pUVar10;
  UAudioComponent *pUVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FWeakObjectPtr local_res10;
  UDS_SoundManager *local_res20;
  FDelegateAllocation local_88;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FDS_PlaySoundParam local_68;
  
  local_res10 = param_1.WeakPtr;
  pUVar9 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (pUVar9 == (UWorld *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3800313868115246682>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                       ,0x1a6,"false");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    bVar7 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar7) {
      pUVar10 = (USoundBase *)FWeakObjectPtr::Get(&local_res10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (USoundBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      (this->BGMSound).field0_0x0.DebugPtr = pUVar10;
      cVar8 = '\0';
      pUVar11 = (this->BGMAudio).field0_0x0.DebugPtr;
      if (pUVar11 != (UAudioComponent *)0x0) {
        cVar8 = (**(code **)(*(longlong *)&pUVar11->field_0x250 + 0xa8))();
      }
      if ((this->BGMAudio).field0_0x0.DebugPtr == (UAudioComponent *)0x0) {
        pUVar10 = (USoundBase *)FWeakObjectPtr::Get(&local_res10);
        pUVar11 = UGameplayStatics::SpawnSound2D
                            ((UObject *)pUVar9,pUVar10,__real_3f800000,__real_3f800000,0.0,
                             (USoundConcurrency *)0x0,false,true);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (pUVar11 == (UAudioComponent *)0x0)) {
          (this->BGMAudio).field0_0x0.DebugPtr = pUVar11;
          if (pUVar11 == (UAudioComponent *)0x0) {
            return;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
          (this->BGMAudio).field0_0x0.DebugPtr = pUVar11;
        }
        pUVar11->bAutoDestroy = '\0';
      }
      fVar1 = param_2->FadeOutTime;
      fVar5 = param_2->DelayTime;
      bVar7 = param_2->bPlayLocation;
      uVar6 = *(undefined3 *)&param_2->field_0xd;
      (this->BGMSoundParam).FadeInTime = param_2->FadeInTime;
      (this->BGMSoundParam).FadeOutTime = fVar1;
      (this->BGMSoundParam).DelayTime = fVar5;
      (this->BGMSoundParam).bPlayLocation = bVar7;
      *(undefined3 *)&(this->BGMSoundParam).field_0xd = uVar6;
      dVar3 = (param_2->Location).field0_0x0._s_0.Y;
      (this->BGMSoundParam).Location.field0_0x0._s_0.X = (param_2->Location).field0_0x0._s_0.X;
      (this->BGMSoundParam).Location.field0_0x0._s_0.Y = dVar3;
      (this->BGMSoundParam).Location.field0_0x0._s_0.Z = (param_2->Location).field0_0x0._s_0.Z;
      if (cVar8 == '\x01') {
        pUVar11 = (this->BGMAudio).field0_0x0.DebugPtr;
        (**(code **)(*(longlong *)pUVar11 + 0x648))(pUVar11,param_2->FadeOutTime,0,0);
        fVar1 = param_2->DelayTime;
        local_78 = OnFadeInAfterFadeOut;
        uStack_70 = 0;
        local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_88.DelegateSize = 0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x58,&local_88);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__TWeakObjectPtr_VUSoundBase__UFWeakObjectPtr____UFDS_PlaySoundParam____6B_
          ;
          *(FWeakObjectPtr *)(puVar12 + 1) = local_res10;
          uVar4 = *(undefined8 *)&param_2->DelayTime;
          puVar12[2] = *(undefined8 *)param_2;
          puVar12[3] = uVar4;
          dVar3 = (param_2->Location).field0_0x0._s_0.Y;
          puVar12[4] = (param_2->Location).field0_0x0._s_0.X;
          puVar12[5] = dVar3;
          puVar12[6] = (param_2->Location).field0_0x0._s_0.Z;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[7] = uVar13;
          *puVar12 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__U__TWeakObjectPtr_VUSoundBase__UFWeakObjectPtr____UFDS_PlaySoundParam____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar12[8] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 8),(FObjectPtr)&local_res20);
          puVar12[9] = local_78;
          puVar12[10] = CONCAT44(uStack_6c,uStack_70);
        }
        FTimerManager::SetTimer
                  (&this->TimerManager,&this->BGMTimerHandle,
                   (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                   &local_88,__real_3f800000,false,fVar1);
        if (local_88.DelegateSize != 0) {
          if (local_88.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            return;
          }
          (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_88,0,0,0x10);
          local_88.DelegateSize = 0;
        }
        if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_88.DelegateAllocator);
        }
      }
      else {
        local_68.FadeInTime = param_2->FadeInTime;
        local_68.FadeOutTime = param_2->FadeOutTime;
        local_68.DelayTime = param_2->DelayTime;
        local_68.bPlayLocation = param_2->bPlayLocation;
        local_68._13_3_ = *(undefined3 *)&param_2->field_0xd;
        local_68.Location.field0_0x0._s_0.X = (param_2->Location).field0_0x0._s_0.X;
        local_68.Location.field0_0x0._s_0.Y = (param_2->Location).field0_0x0._s_0.Y;
        local_68.Location.field0_0x0._s_0.Z = (param_2->Location).field0_0x0._s_0.Z;
        OnFadeInAfterFadeOut(this,(TWeakObjectPtr<USoundBase,FWeakObjectPtr>)local_res10,&local_68);
      }
    }
  }
  return;
}

// PlaySound @ 14bbcd890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::PlaySound(UDS_SoundManager *this,int param_1)

{
  bool bVar1;
  FDS_ResourceSoundTableRow *this_00;
  UAssetManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_SoundManager *local_res18 [2];
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [24];
  code *local_88;
  FMRSWRecursiveAccessDetector *pFStack_80;
  char *local_78;
  FString local_68;
  TSharedPtr<FStreamableHandle,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this_00 = FDS_ResourceSoundTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_ResourceSoundTableRow::IsValid(this_00);
  if (bVar1) {
    pUVar2 = UAssetManager::Get();
    local_a0._0_4_ = 0x149;
    local_a0._4_4_ = 0x28;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp";
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_a0._16_8_ = "void __cdecl UDS_SoundManager::PlaySound(int)";
    local_88 = OnSoundLoaded;
    pFStack_80 = (FMRSWRecursiveAccessDetector *)
                 ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    local_b8 = (undefined1  [8])0x0;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_b0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
      *(int *)(puVar3 + 1) = param_1;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SoundManager *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_SoundManager *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)local_res18);
      puVar3[4] = local_88;
      puVar3[5] = pFStack_80;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    local_88._4_4_ = local_a0._4_4_;
    local_88._0_4_ = local_a0._0_4_;
    pFStack_80 = (FMRSWRecursiveAccessDetector *)local_a0._8_8_;
    local_78 = (char *)local_a0._16_8_;
    FStreamableManager::
    RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
              (&pUVar2->StreamableManager,&local_58,&this_00->FilePath,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8,0,false,false,
               &local_68,(FSourceLocation *)&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                        local_58.SharedReferenceCount.ReferenceController._0_4_));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
               (FWriteAccessScope *)local_a0);
    if ((local_b0.DelegateSize != 0) &&
       (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b0,0,0,0x10);
      local_b0.DelegateSize = 0;
    }
    if (local_a0[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_a0._8_8_,(FDestructionSentinel *)local_a0);
    }
    if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b8);
  }
  return;
}

// PostInitialize @ 14bbcdb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::PostInitialize(UDS_SoundManager *this)

{
  bool bVar1;
  UWorld *this_00;
  UWN_WorldUtils_Subsystem *this_01;
  FDS_WorldInfoBaseTableRow *pFVar2;
  FSoftObjectPath *pFVar3;
  UDS_ZoneManager *pUVar4;
  UDS_SoundManager *local_res8;
  FSoftObjectPath local_28;
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    this_01 = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_00);
    if (this_01 != (UWN_WorldUtils_Subsystem *)0x0) {
      local_28.AssetPath.AssetName =
           (FName)((ulonglong)local_28.AssetPath.AssetName & 0xffffffff00000000);
      local_28.AssetPath.PackageName = (FName)OnBGMVolumeChanged;
      TMulticastDelegateRegistration<void___cdecl(AWN_BGMVolume_*),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_SoundManager>
                ((TMulticastDelegateRegistration<void___cdecl(AWN_BGMVolume_*),FDefaultDelegateUserPolicy>
                  *)&this_01->WN_OnBGMVolumeChange,(UDS_SoundManager *)&local_res8,
                 (pmf_20e90ad4 *)this);
      bVar1 = UWorld::IsGameWorld(this_00);
      if (bVar1) {
        pFVar2 = FDS_WorldInfoBaseTableRow::GetRef(1,true);
        pFVar3 = FSoftObjectPath::FSoftObjectPath(&local_28,&pFVar2->MapInfoPath);
        UWN_WorldUtils_Subsystem::LoadWorldInfo(this_01,pFVar3);
      }
      local_28.AssetPath.AssetName =
           (FName)((ulonglong)local_28.AssetPath.AssetName & 0xffffffff00000000);
      local_28.AssetPath.PackageName = (FName)RefreshZoneVolumeAmbient;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_SoundManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this_01->WN_OnAmbientSoundChange,(UDS_SoundManager *)&local_res8,
                 (pmf_132c9f23 *)this);
    }
    pUVar4 = UDS_ZoneManager::GetInst();
    if (pUVar4 != (UDS_ZoneManager *)0x0) {
      local_res8 = this;
      TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
      ::AddWeakLambda<UDS_SoundManager,_UDS_SoundManager::PostInitialize_::__l14::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                  *)&pUVar4->ZoneDistrictChangedDelegate,(UDS_SoundManager *)&stack0x00000010,
                 (<lambda_1> *)this);
    }
  }
  return;
}

// RefreshBGM @ 14bbd7660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::RefreshBGM(UDS_SoundManager *this)

{
  TWeakObjectPtr<AWN_BGMVolume,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *this_01;
  UObject *pUVar3;
  UWN_WorldUtils_Subsystem *this_02;
  TArray<FWN_AmbientSoundInfo,TSizedDefaultAllocator<32>_> local_a8;
  FDS_PlaySoundParam local_98;
  FDS_PlaySoundParam local_70;
  undefined1 local_48 [16];
  FSoftObjectPath local_38;
  float local_18;
  float local_14;
  float local_10;
  
  this_01 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_01 == (UWorld *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3800313868115246888>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                       ,0xd8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = &this->CurBgmVolume;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (*(longlong *)(pUVar3 + 0x12) != 0) {
        local_98.bPlayLocation = false;
        local_98.Location.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_98.Location.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_98.Location.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_98.DelayTime = *(float *)(pUVar3 + 0x13);
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_98.FadeInTime = *(float *)&pUVar3[0x12].field_0x20;
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_98.FadeOutTime = *(float *)&pUVar3[0x12].field_0x24;
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        PlayBGM(this,(FSoftObjectPath *)(pUVar3 + 0x12),&local_98);
        return;
      }
    }
    else if (this->CurrentZoneDistrictId != 0) {
      this_02 = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_01);
      if (this_02 == (UWN_WorldUtils_Subsystem *)0x0) {
        return;
      }
      FWN_BGMSoundInfo::FWN_BGMSoundInfo((FWN_BGMSoundInfo *)local_48);
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      UWN_WorldUtils_Subsystem::GetSoundInfos
                (this_02,this->CurrentZoneDistrictId,(FWN_BGMSoundInfo *)local_48,&local_a8);
      if (local_38.AssetPath.PackageName == (FName)0x0) {
        StopBGM(this);
      }
      else {
        local_70.bPlayLocation = false;
        local_70.Location.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_70.Location.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_70.Location.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_70.DelayTime = local_10;
        local_70.FadeInTime = local_18;
        local_70.FadeOutTime = local_14;
        PlayBGM(this,&local_38,&local_70);
      }
      DestructItems<FWN_AmbientSoundInfo,int>
                ((FWN_AmbientSoundInfo *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((FWN_AmbientSoundInfo *)local_a8.AllocatorInstance.Data != (FWN_AmbientSoundInfo *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_38.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
      return;
    }
    StopBGM(this);
  }
  return;
}

// RefreshZoneVolumeAmbient @ 14bbd7870

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

void __thiscall UDS_SoundManager::RefreshZoneVolumeAmbient(UDS_SoundManager *this)

{
  TMap<FGuid,FDS_SpawnedSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>_>
  *this_00;
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  TMap<FGuid,FDS_SpawnedSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>_>
  *pTVar5;
  longlong *plVar6;
  bool bVar7;
  UWorld *this_01;
  UWN_WorldUtils_Subsystem *this_02;
  ulong64 uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  FGuid *pFVar15;
  uint *puVar16;
  uint uVar17;
  FWN_AmbientSoundInfo *pFVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStackY_268 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [6];
  TArray<FWN_AmbientSoundInfo,TSizedDefaultAllocator<32>_> local_230;
  FGuid local_218;
  ulonglong local_208;
  TMap<FGuid,FDS_SpawnedSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>_>
  *local_200;
  int iStack_1f8;
  uint uStack_1f4;
  undefined1 *local_1f0;
  undefined4 uStack_1e8;
  int iStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8 [16];
  int iStack_1b8;
  undefined4 uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  TMap<FGuid,FDS_SpawnedSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 uStack_120;
  UObject *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8 [92];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_01 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_01 == (UWorld *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3800313868115246622>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
                       ,0x1e2,"false");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_02 = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_01);
    if (this_02 != (UWN_WorldUtils_Subsystem *)0x0) {
      FWN_BGMSoundInfo::FWN_BGMSoundInfo((FWN_BGMSoundInfo *)local_e8);
      local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_230.ArrayNum = 0;
      local_230.ArrayMax = 0;
      UWN_WorldUtils_Subsystem::GetSoundInfos
                (this_02,this->CurrentZoneDistrictId,(FWN_BGMSoundInfo *)local_e8,&local_230);
      local_88._0_8_ = 0;
      this_00 = &this->SpawnedSoundMap;
      local_88._8_8_ = 0;
      local_1f0 = &(this->SpawnedSoundMap).field_0x10;
      local_68 = (uint *)0x0;
      iStack_1f8 = 0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_1e0 = 0;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      iVar14 = *(int *)&(this->SpawnedSoundMap).field_0x28;
      local_208 = 1;
      uStack_1f4 = 1;
      iStack_1e4 = local_1e0;
      if (iVar14 != 0) {
        puVar21 = *(uint **)&(this->SpawnedSoundMap).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)local_1f0;
        }
        uStack_1f4 = *puVar21;
        local_1e0 = 0;
        iStack_1f8 = 0;
        while (uStack_1f4 == 0) {
          lVar10 = (longlong)iStack_1f8;
          local_1e0 = local_1e0 + 0x20;
          iStack_1f8 = iStack_1f8 + 1;
          uStack_1f4 = 1;
          iStack_1e4 = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8)
          goto LAB_14bbd7a1d;
          uStack_1f4 = puVar21[lVar10 + 1];
        }
        uStack_1f4 = -uStack_1f4 & uStack_1f4;
        uVar11 = (ulonglong)uStack_1f4 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1d0 = (int)lVar10;
        iStack_1e4 = local_1e0 + -1 + local_1d0;
        if (iVar14 < iStack_1e4) {
          iStack_1e4 = iVar14;
        }
      }
LAB_14bbd7a1d:
      uVar19 = *(uint *)&(this->SpawnedSoundMap).field_0x28;
      uStack_1dc = local_8c;
      iStack_1d8 = *(int *)&(this->SpawnedSoundMap).field_0x8 -
                   *(int *)&(this->SpawnedSoundMap).field_0x34;
      uVar17 = uVar19 & 0xffffffe0;
      TStack_188._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
      uStack_1e8 = 0xffffffff;
      TStack_188.CurrentBitIndex = iStack_1e4;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar19 >> 5;
      TStack_188._28_4_ = local_8c;
      TStack_188.BaseBitIndex = local_1e0;
      uStack_168 = CONCAT44(uStack_1d4,iStack_1d8);
      local_200 = this_00;
      local_190 = this_00;
      TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f0;
      if ((((int)uVar19 < 0) || (iVar14 < (int)uVar19)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(uint *)&(this->SpawnedSoundMap).field_0x28;
      if (uVar19 != uVar2) {
        puVar20 = *(undefined1 **)&(this->SpawnedSoundMap).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(this->SpawnedSoundMap).field_0x10;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar13 * 4);
        while (uVar19 == 0) {
          lVar10 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar19 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14bbd7b3d;
          uVar19 = *(uint *)(puVar20 + lVar10 * 4 + 4);
        }
        uVar11 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1cc = (int)lVar10;
        uVar19 = local_1cc + -1 + uVar17;
        if ((int)uVar2 < (int)uVar19) {
          uVar19 = uVar2;
        }
      }
LAB_14bbd7b3d:
      while( true ) {
        pTVar5 = local_190;
        if (*(int *)(&local_190->field_0x0 + 8) - *(int *)(&local_190->field_0x0 + 0x34) !=
            (int)uStack_168) {
          local_238 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FGuid,FDS_SpawnedSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_238);
        }
        lVar10 = (longlong)TStack_188.CurrentBitIndex;
        if (((TStack_188.CurrentBitIndex == uVar19) &&
            (TStack_188.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->SpawnedSoundMap).field_0x10)) &&
           (pTVar5 == this_00)) break;
        lVar3 = *(longlong *)&pTVar5->field_0x0;
        puVar1 = (undefined8 *)(lVar3 + lVar10 * 0x48);
        local_128 = *puVar1;
        uStack_120 = puVar1[1];
        local_118 = *(UObject **)(lVar3 + 0x10 + lVar10 * 0x48);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_118);
        }
        puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar10 * 0x48);
        local_110 = *puVar1;
        uStack_108 = puVar1[1];
        puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar10 * 0x48);
        local_100 = *puVar1;
        uStack_f8 = puVar1[1];
        local_f0 = *(undefined8 *)(lVar3 + 0x38 + lVar10 * 0x48);
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_88,
                   (FGuid *)local_1c8,(bool *)&local_128);
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
      iVar14 = local_230.ArrayNum;
      uVar11 = (ulonglong)local_230.ArrayNum;
      pFVar15 = (FGuid *)(local_230.AllocatorInstance.Data + 0x40);
      pFVar18 = (FWN_AmbientSoundInfo *)(local_230.AllocatorInstance.Data + uVar11 * 0x50);
      while( true ) {
        if ((int)uVar11 != iVar14) {
          local_237 = 0;
          `TCheckedPointerIterator<FWN_AmbientSoundInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_237);
        }
        uVar19 = local_60;
        if ((FWN_AmbientSoundInfo *)(pFVar15 + -4) == pFVar18) break;
        uVar8 = CityHash64((char *)pFVar15,0x10);
        iVar13 = TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>
                           ((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                             *)this_00,(uint)uVar8,pFVar15);
        if (iVar13 == -1) {
          PlayAmbient(this,(FWN_AmbientSoundInfo *)(pFVar15 + -4));
LAB_14bbd7c9d:
          uVar11 = local_230._8_8_ & 0xffffffff;
          pFVar15 = pFVar15 + 5;
        }
        else {
          if (local_88._8_4_ == local_54) goto LAB_14bbd7c9d;
          uVar8 = CityHash64((char *)pFVar15,0x10);
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                    ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_88,
                     (uint)uVar8,pFVar15);
          uVar11 = local_230._8_8_ & 0xffffffff;
          pFVar15 = pFVar15 + 5;
        }
      }
      iStack_1b8 = 0;
      local_1a0 = 0;
      uStack_1a4 = 0;
      if (local_60 != 0) {
        puVar21 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar21 = local_68;
        }
        uVar17 = *puVar21;
        local_1a0 = 0;
        while (uVar17 == 0) {
          lVar10 = (longlong)iStack_1b8;
          local_1a0 = local_1a0 + 0x20;
          iStack_1b8 = iStack_1b8 + 1;
          uStack_1a4 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
          goto LAB_14bbd7d33;
          uVar17 = puVar21[lVar10 + 1];
        }
        local_208 = (ulonglong)(-uVar17 & uVar17);
        uVar11 = local_208 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_1c8._4_4_ = (undefined4)lVar10;
        uStack_1a4 = local_1a0 + -1 + local_1c8._4_4_;
        if ((int)local_60 < (int)uStack_1a4) {
          uStack_1a4 = local_60;
        }
      }
LAB_14bbd7d33:
      local_1c8._8_8_ = local_88;
      uVar17 = local_60 & 0xffffffe0;
      uStack_1b4 = (undefined4)local_208;
      iStack_19c = iStack_1e4;
      local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      iStack_198 = local_88._8_4_ - local_54;
      uStack_1a8 = 0xffffffff;
      TStack_158.CurrentBitIndex = uStack_1a4;
      TStack_158.UnvisitedBitMask = 0xffffffff;
      TStack_158._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
      iVar14 = (int)local_60 >> 5;
      TStack_158._28_4_ = iStack_1e4;
      TStack_158.BaseBitIndex = local_1a0;
      uStack_138 = CONCAT44(uStack_194,iStack_198);
      bVar9 = (byte)local_60;
      local_160 = (longlong *)local_1c8._8_8_;
      TStack_158.Array = local_1b0;
      if (((int)local_60 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar19 != local_60) {
        puVar21 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar21 = local_68;
        }
        uVar19 = -1 << (bVar9 & 0x1f) & puVar21[iVar14];
        while (uVar19 == 0) {
          lVar10 = (longlong)iVar14;
          uVar17 = uVar17 + 0x20;
          iVar14 = iVar14 + 1;
          uVar19 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14bbd7e41;
          uVar19 = puVar21[lVar10 + 1];
        }
        uVar11 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar19 = (int)lVar10 + -1 + uVar17;
        if ((int)local_60 < (int)uVar19) {
          uVar19 = local_60;
        }
      }
LAB_14bbd7e41:
      while( true ) {
        plVar6 = local_160;
        if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
          `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_236);
        }
        if (((TStack_158.CurrentBitIndex == uVar19) &&
            (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar6 == (longlong *)local_88)) break;
        puVar1 = (undefined8 *)(*plVar6 + (longlong)TStack_158.CurrentBitIndex * 0x18);
        local_218._0_8_ = *puVar1;
        local_218._8_8_ = puVar1[1];
        uVar8 = CityHash64((char *)&local_218,0x10);
        if (*(int *)&(this->SpawnedSoundMap).field_0x8 !=
            *(int *)&(this->SpawnedSoundMap).field_0x34) {
          puVar20 = *(undefined1 **)&(this->SpawnedSoundMap).field_0x40;
          puVar12 = &(this->SpawnedSoundMap).field_0x38;
          if (puVar20 != (undefined1 *)0x0) {
            puVar12 = puVar20;
          }
          uVar17 = *(uint *)(puVar12 +
                            ((ulonglong)(*(int *)&(this->SpawnedSoundMap).field_0x48 - 1) &
                            uVar8 & 0xffffffff) * 4);
          if (uVar17 != 0xffffffff) {
            do {
              puVar21 = (uint *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)uVar17 * 0x48);
              if (((local_218.D == puVar21[3] &&
                   local_218.C ==
                   *(uint *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)uVar17 * 0x48))
                  && local_218.B == puVar21[1]) && local_218.A == *puVar21) {
                puVar16 = puVar21 + 4;
                if (puVar21 == (uint *)0x0) {
                  puVar16 = (uint *)0x0;
                }
                if (puVar16 != (uint *)0x0) {
                  *(byte *)(*(longlong *)puVar16 + 0x4c8) =
                       *(byte *)(*(longlong *)puVar16 + 0x4c8) | 1;
                  (**(code **)(**(longlong **)puVar16 + 0x648))
                            (*(longlong **)puVar16,puVar16[3],0,0);
                  UAudioComponent::StopDelayed(*(UAudioComponent **)puVar16,(float)puVar16[3]);
                  if (*(int *)&(this->SpawnedSoundMap).field_0x8 !=
                      *(int *)&(this->SpawnedSoundMap).field_0x34) {
                    uVar8 = CityHash64((char *)&local_218,0x10);
                    TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                                         *)this_00,(uint)uVar8,&local_218);
                  }
                }
                break;
              }
              uVar17 = puVar21[0x10];
            } while (uVar17 != 0xffffffff);
          }
        }
        TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
      }
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      DestructItems<FWN_AmbientSoundInfo,int>
                ((FWN_AmbientSoundInfo *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
      if ((FWN_AmbientSoundInfo *)local_230.AllocatorInstance.Data != (FWN_AmbientSoundInfo *)0x0) {
        FMemory::Free(local_230.AllocatorInstance.Data);
      }
      if ((void *)local_e8._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._32_8_);
      }
    }
  }
  return;
}

// SpawnSoundAsync @ 14bbe1c70

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
UDS_SoundManager::SpawnSoundAsync
          (UDS_SoundManager *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1,int param_2,
          TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *param_3)

{
  bool bVar1;
  FDS_ResourceSoundTableRow *this_00;
  UAssetManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res10;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  code *local_98;
  FMRSWRecursiveAccessDetector *pFStack_90;
  char *local_88;
  UDS_SoundManager *local_78;
  FString local_70;
  TSharedPtr<FStreamableHandle,1> local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res10 = param_1.WeakPtr;
  this_00 = FDS_ResourceSoundTableRow::GetRef((longlong)param_2,true);
  bVar1 = FDS_ResourceSoundTableRow::IsValid(this_00);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar2 = UAssetManager::Get();
      local_b0._0_4_ = 0x167;
      local_b0._4_4_ = 0x28;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Sound\\DS_SoundManager.cpp"
      ;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      local_b0._16_8_ =
           "void __cdecl UDS_SoundManager::SpawnSoundAsync(struct TWeakObjectPtr<class UObject,struct FWeakObjectPtr>,int,class TDelegate<void __cdecl(class UAudioComponent *),struct FDefaultDelegateUserPolicy>)"
      ;
      local_98 = OnSpawnSoundLoaded;
      pFStack_90 = (FMRSWRecursiveAccessDetector *)
                   ((ulonglong)local_60.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_c0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x50,&local_c0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUObject__UFWeakObjectPtr____HV__TDelegate___A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy______6B_
        ;
        *(FWeakObjectPtr *)(puVar3 + 1) = local_res10;
        *(int *)(puVar3 + 2) = param_2;
        TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *)
                   (puVar3 + 3),param_3);
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[6] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUObject__UFWeakObjectPtr____HV__TDelegate___A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy______6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_SoundManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[7] = 0;
        local_78 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_SoundManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 7),(FObjectPtr)&local_78);
        puVar3[8] = local_98;
        puVar3[9] = pFStack_90;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      local_98._4_4_ = local_b0._4_4_;
      local_98._0_4_ = local_b0._0_4_;
      pFStack_90 = (FMRSWRecursiveAccessDetector *)local_b0._8_8_;
      local_88 = (char *)local_b0._16_8_;
      FStreamableManager::
      RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                (&pUVar2->StreamableManager,&local_60,&this_00->FilePath,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,100,false,
                 false,&local_70,(FSourceLocation *)&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_60.SharedReferenceCount.ReferenceController._4_4_,
                          local_60.SharedReferenceCount.ReferenceController._0_4_));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)local_b0);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c0,0,0,0x10);
        local_c0.DelegateSize = 0;
      }
      if (local_b0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
      }
      if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// StopAmbientSound @ 14bbe2170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::StopAmbientSound(UDS_SoundManager *this,FGuid *param_1)

{
  TMap<FGuid,FDS_SpawnedSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  longlong *plVar4;
  
  this_00 = &this->SpawnedSoundMap;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x48;
    plVar4 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      *(byte *)(*plVar4 + 0x4c8) = *(byte *)(*plVar4 + 0x4c8) | 1;
      (**(code **)(*(longlong *)*plVar4 + 0x648))
                ((longlong *)*plVar4,*(undefined4 *)((longlong)plVar4 + 0xc),0,0);
      UAudioComponent::StopDelayed((UAudioComponent *)*plVar4,*(float *)((longlong)plVar4 + 0xc));
      if (*(int *)&(this->SpawnedSoundMap).field_0x8 != *(int *)&(this->SpawnedSoundMap).field_0x34)
      {
        uVar3 = CityHash64((char *)param_1,0x10);
        TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FDS_SpawnedSoundInfo>,TDefaultMapHashableKeyFuncs<FGuid,FDS_SpawnedSoundInfo,0>,FDefaultSetAllocator>
                             *)this_00,(uint)uVar3,param_1);
      }
    }
  }
  return;
}

// StopBGM @ 14bbe2230

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

void __thiscall UDS_SoundManager::StopBGM(UDS_SoundManager *this)

{
  float fVar1;
  UAudioComponent *pUVar2;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ForElementType<TAlignedBytes<16,16>_> FVar6;
  undefined1 auStackY_1a8 [32];
  FDelegateAllocation local_178;
  code *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  UDS_SoundManager *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar2 = (this->BGMAudio).field0_0x0.DebugPtr;
  if (pUVar2 == (UAudioComponent *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_SoundManager::StopBGM",0x19,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,599,L"BGM is Not Played");
    FVar6 = (ForElementType<TAlignedBytes<16,16>_>)local_148._padding_;
  }
  else {
    (**(code **)(*(longlong *)pUVar2 + 0x648))(pUVar2,(this->BGMSoundParam).FadeOutTime,0,0);
    fVar1 = (this->BGMSoundParam).FadeOutTime;
    local_168 = OnStopBGMAfterFadeOut;
    uStack_160 = 0;
    local_178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_178.DelegateSize = 0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_178);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SoundManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_158[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_158);
      puVar4[4] = local_168;
      puVar4[5] = CONCAT44(uStack_15c,uStack_160);
    }
    FTimerManager::SetTimer
              (&this->TimerManager,&this->BGMTimerHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &local_178,__real_3f800000,false,fVar1);
    FVar6 = local_178.DelegateAllocator;
    if (local_178.DelegateSize != 0) {
      if (local_178.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_178.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_178,0,0,0x10);
      local_178.DelegateSize = 0;
      FVar6 = local_178.DelegateAllocator;
    }
  }
  if (FVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  return;
}

// Tick @ 14bbe2540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_SoundManager::Tick(UDS_SoundManager *this,float param_1)

{
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  FTimerManager::Tick((FTimerManager *)&this->_padding_,param_1);
  return;
}

