// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b4fdf80

UClass * __cdecl UDS_MountManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountManager",
               &Z_Registration_Info_UClass_UDS_MountManager.InnerSingleton,
               StaticRegisterNativesUDS_MountManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MountManager>,
               InternalVTableHelperCtorCaller<UDS_MountManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountManager.InnerSingleton;
}

// UDS_MountManager @ 14b501380

UDS_MountManager * __thiscall
UDS_MountManager::UDS_MountManager(UDS_MountManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountManager__6B_;
  *(undefined8 *)&this->AbilityTagToMountStepMap = 0;
  *(undefined8 *)&(this->AbilityTagToMountStepMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbilityTagToMountStepMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbilityTagToMountStepMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x48 = 0;
  return this;
}

// UDS_MountManager @ 14b5013d0

UDS_MountManager * __thiscall
UDS_MountManager::UDS_MountManager(UDS_MountManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountManager__6B_;
  *(undefined8 *)&this->AbilityTagToMountStepMap = 0;
  *(undefined8 *)&(this->AbilityTagToMountStepMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbilityTagToMountStepMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbilityTagToMountStepMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x48 = 0;
  return this;
}

// ~UDS_MountManager @ 14b502770

void __thiscall UDS_MountManager::~UDS_MountManager(UDS_MountManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_MountManager__6B_;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AbilityTagToMountStepMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AbilityTagToMountStepMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b504960

UClass * __cdecl UDS_MountManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountManager",
               &Z_Registration_Info_UClass_UDS_MountManager.InnerSingleton,
               StaticRegisterNativesUDS_MountManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_MountManager>,
               InternalVTableHelperCtorCaller<UDS_MountManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountManager.InnerSingleton;
}

// StaticRegisterNativesUDS_MountManager @ 14b505b60

void __cdecl UDS_MountManager::StaticRegisterNativesUDS_MountManager(void)

{
  return;
}

// AttachMountActor @ 14baf2850

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_MountManager::AttachMountActor(UDS_MountManager *this,ulong64 *param_1,ulong64 *param_2)

{
  float fVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  FDS_EntityBase *pFVar4;
  AActor *pAVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  UDS_MountEvent *pUVar8;
  FWeakObjectPtr *this_00;
  float fVar9;
  undefined1 auStackY_218 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_1d8;
  undefined8 local_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_1b0;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_1a8 [2];
  TVector<double>_u_0 local_198 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar3 = FDS_EntityBase::GetEntityBase(param_1);
  pFVar4 = FDS_EntityBase::GetEntityBase(param_2);
  if ((pFVar3 == (FDS_EntityBase *)0x0) || (pFVar4 == (FDS_EntityBase *)0x0)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_MountManager::AttachMountActor",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_158.Ptr,0x5c,L"entity is nullptr. (%llu) (%llu)");
  }
  else {
    (**(code **)(pFVar3->_padding_ + 0x150))(pFVar3,&local_1c8);
    (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4);
    bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1c8,(void *)0x0);
    if ((bVar2) ||
       (bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1d8,(void *)0x0), bVar2))
    {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_MountManager::AttachMountActor",0x22,Yes);
      pwVar11 = L"actor is nullptr.";
      uVar10 = 0x65;
    }
    else {
      (**(code **)(pFVar3->_padding_ + 0x160))(pFVar3,&local_1b8);
      (**(code **)(pFVar4->_padding_ + 0x160))(pFVar4);
      bVar2 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_1b8,(void *)0x0)
      ;
      if (bVar2) {
        return false;
      }
      bVar2 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_1c0,(void *)0x0)
      ;
      if (bVar2) {
        return false;
      }
      pAVar5 = (AActor *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = 0;
      pUVar6 = FWeakObjectPtr::Get(&local_1c8);
      AActor::AttachToComponent
                (pAVar5,*(USceneComponent **)(pUVar6 + 0xb),
                 &FAttachmentTransformRules::SnapToTargetIncludingScale,(FName)0x0);
      pAVar5 = (AActor *)FWeakObjectPtr::Get(&local_1d8);
      pUVar6 = FWeakObjectPtr::Get(&local_1c0);
      local_198[0]._16_8_ = *(undefined8 *)&pUVar6[0xe].field_0x10;
      fVar9 = (float)(double)local_198[0]._16_8_;
      fVar1 = *(float *)&pUVar6[0x22].field_0x18;
      pUVar6 = FWeakObjectPtr::Get(&local_1b8);
      local_198[0]._s_0.X = 0.0;
      local_198[0]._s_0.Y = 0.0;
      local_198[0]._16_8_ =
           (undefined8)
           (fVar9 * fVar1 -
           (float)*(double *)&pUVar6[0xe].field_0x10 * *(float *)&pUVar6[0x22].field_0x18);
      AActor::SetActorRelativeLocation
                (pAVar5,(TVector<double> *)&local_198[0]._s_0,false,(FHitResult *)0x0,None);
      (**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,&local_1b0);
      (**(code **)(pFVar4->_padding_ + 0x80))(pFVar4);
      bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        (&local_1b0,(void *)0x0);
      if (!bVar2) {
        bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          (local_1a8,(void *)0x0);
        if (bVar2) {
          return false;
        }
        pUVar8 = UDS_MountEvent::GetEvent();
        if (pUVar8 == (UDS_MountEvent *)0x0) {
          return false;
        }
        FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::Broadcast
                  (&pUVar8->OnMountOwnerChanged_Filtered,&pFVar4->EntityID,&pFVar3->EntityID);
        this_00 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x78))(pFVar4,&local_1d0);
        pUVar6 = FWeakObjectPtr::Get(this_00);
        (**(code **)(*(longlong *)pUVar6 + 0x448))(pUVar6,0);
        return true;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_MountManager::AttachMountActor",0x22,Yes);
      pwVar11 = L"playerSoulSkm is nullptr.";
      uVar10 = 0x79;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar10,pwVar11);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// Created @ 14bb01580

void __thiscall UDS_MountManager::Created(UDS_MountManager *this)

{
  TMap<EDS_AbilityTagType,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AbilityTagType,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined4 *local_38;
  ForAnyElementType *local_30;
  
  this_00 = &this->AbilityTagToMountStepMap;
  *(undefined1 *)&this->_padding_ = 0;
  bVar3 = 1 < *(int *)&(this->AbilityTagToMountStepMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->AbilityTagToMountStepMap).field_0x8);
  puVar1 = &(this->AbilityTagToMountStepMap).field_0xc;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->AbilityTagToMountStepMap).field_0x2c;
  *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AbilityTagToMountStepMap).field_0x10,
               0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->AbilityTagToMountStepMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  local_res10._0_4_ = 0x18190a03;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,4);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,&local_48,4,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,4);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x4a;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res10._0_2_ = 0x215;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,2);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x4d;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res10._0_2_ = 0x605;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,2);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x2a;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res10._0_2_ = 0xc0b;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,2);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x4e;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res8[0]._0_1_ = 0x1a;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_48,1,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res8,1);
  local_38 = (undefined4 *)local_res10;
  local_res10[0] = 0x4f;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res8[0]._0_1_ = 9;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_48,1,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res8,1);
  local_38 = (undefined4 *)local_res10;
  local_res10[0] = 0x4c;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res10._0_2_ = 0xe0d;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,2);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x51;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res10._0_2_ = 0x100f;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,2);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x52;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res10._0_2_ = 0x1211;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res10,2);
  local_38 = local_res8;
  local_res8[0]._0_1_ = 0x53;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_res8[0]._0_1_ = 0x1b;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,1,0,&local_48,1,(int *)((longlong)&local_40 + 4));
  memcpy(local_48.Data,local_res8,1);
  local_38 = (undefined4 *)local_res10;
  local_res10[0] = 0x4b;
  local_30 = &local_48;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_res10 + 8),(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_38 = local_res8;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_30 = &local_48;
  local_40 = 0;
  local_res8[0]._0_1_ = 0;
  TSet<TTuple<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_AbilityTagType_&&,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<EDS_AbilityTagType_&&,TArray<EDS_MountStep,TSizedDefaultAllocator<32>_>_&&>
                      *)local_res10,(bool *)&local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// Destroyed @ 14bb02f10

void __thiscall UDS_MountManager::Destroyed(UDS_MountManager *this)

{
  return;
}

// DettachMountActor @ 14bb03050

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MountManager::DettachMountActor(UDS_MountManager *this,ulong64 *param_1,ulong64 *param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UDS_MountEvent *pUVar5;
  AActor *this_00;
  FWeakObjectPtr *this_01;
  UObject *pUVar6;
  undefined1 auStackY_1a8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_168;
  TWeakObjectPtr<AActor,FWeakObjectPtr> local_160;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_158;
  undefined1 local_150 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  pFVar3 = FDS_EntityBase::GetEntityBase(param_2);
  if ((pFVar2 == (FDS_EntityBase *)0x0) || (pFVar3 == (FDS_EntityBase *)0x0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MountManager::DettachMountActor",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_148.Ptr,0x9e,L"entity is nullptr. (%llu) (%llu)");
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,&local_160);
    (**(code **)(pFVar3->_padding_ + 0x150))(pFVar3);
    bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&local_160,(void *)0x0);
    if ((bVar1) ||
       (bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_168,(void *)0x0), bVar1))
    {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MountManager::DettachMountActor",0x23,Yes);
      pwVar8 = L"actor is nullptr.";
      uVar7 = 0xad;
    }
    else {
      (**(code **)(pFVar2->_padding_ + 0x80))(pFVar2);
      bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        (&local_158,(void *)0x0);
      if (!bVar1) {
        pUVar5 = UDS_MountEvent::GetEvent();
        if (pUVar5 == (UDS_MountEvent *)0x0) {
          return;
        }
        (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2);
        this_00 = (AActor *)FWeakObjectPtr::Get(&local_168);
        AActor::DetachFromActor(this_00,&FDetachmentTransformRules::KeepWorldTransform);
        this_01 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,local_150);
        pUVar6 = FWeakObjectPtr::Get(this_01);
        (**(code **)(*(longlong *)pUVar6 + 0x448))(pUVar6,3);
        FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::Broadcast
                  (&pUVar5->OnMountOwnerChanged_Filtered,&pFVar3->EntityID,&pFVar3->EntityID);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MountManager::DettachMountActor",0x23,Yes);
      pwVar8 = L"soulSkm is nullptr.";
      uVar7 = 0xb5;
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// GetInst @ 14bb0bc50

UDS_MountManager * __cdecl UDS_MountManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_MountManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_MountManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_MountManager_NoRegister();
  pUVar3 = (UDS_MountManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_MountManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_MountManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_MountManager *)0x0;
}

// GetMountAbilityTagTypeFromStep @ 14bb0c2d0

EDS_AbilityTagType __cdecl UDS_MountManager::GetMountAbilityTagTypeFromStep(EDS_MountStep param_1)

{
  switch(param_1) {
  case MountSprint:
  case MountAirSprint:
    return Mount_Sprint;
  case DisMount:
  case MoveDisMount:
  case MoveAirDisMount:
  case AirDisMount:
    return Mount;
  default:
    return None;
  case MountJump:
  case MountSprintJump:
    return AirWalk_Jump;
  case MountOwnAction:
    return Mount_InherenceAction;
  case MountLeap:
  case MountSprintLeap:
    return Mount_Leap;
  case MountAscent:
  case MountSprintAscent:
    return Mount_Ascent;
  case MountDescent:
  case MountSprintDescent:
    return Mount_Descent;
  case MountLand:
  case MountSprintLand:
    return Mount_Land;
  case MountDash:
    return Mount_Dash;
  case MountBackMove:
    return Mount_BackMove;
  }
}

// GetMountEntityByCharEntityID @ 14bb0c390

ulong64 __cdecl UDS_MountManager::GetMountEntityByCharEntityID(ulong64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_res10);
  bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  return *(ulong64 *)(pUVar2 + 5);
}

// GetMountIdByMainPlayer @ 14bb0c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UDS_MountManager::GetMountIdByMainPlayer(void)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_148);
  bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MountManager::GetMountIdByMainPlayer",0x28,Yes);
    pwVar5 = L"mountDataSet is nullptr.";
    uVar4 = 0x12e;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&local_148);
    if (*(longlong *)&pUVar3[4].field_0x20 == 0) {
      return 0;
    }
    pUVar3 = FWeakObjectPtr::Get(&local_148);
    UDS_MountData::GetData
              ((ulong64)&local_140,UDS_PlayerData::MainPlayerEntityID,
               SUB81(*(undefined8 *)&pUVar3[4].field_0x20,0));
    bVar1 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_140);
      return *(int *)&pUVar3[2].field_0x18;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MountManager::GetMountIdByMainPlayer",0x28,Yes);
    pwVar5 = L"mountData is nullptr";
    uVar4 = 0x13b;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return 0;
}

// GetMountStepArrayByAbilityTag @ 14bb0c570

TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MountManager::GetMountStepArrayByAbilityTag(UDS_MountManager *this,EDS_AbilityTagType param_1)

{
  int iVar1;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_MountManager::GetMountStepArrayByAbilityTag'::__l2::
             _dynamic_atexit_destructor_for__EmptyMountStepArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)&(this->AbilityTagToMountStepMap).field_0x8 !=
      *(int *)&(this->AbilityTagToMountStepMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->AbilityTagToMountStepMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->AbilityTagToMountStepMap).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->AbilityTagToMountStepMap).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_AbilityTagType *)
             ((longlong)iVar1 * 0x20 + *(longlong *)&this->AbilityTagToMountStepMap) == param_1) {
          pTVar2 = TMapBase<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->AbilityTagToMountStepMap,param_1);
          return pTVar2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 +
                        *(longlong *)&this->AbilityTagToMountStepMap);
      } while (iVar1 != -1);
    }
  }
  return &EmptyMountStepArray;
}

// Init @ 14bb13890

void __thiscall UDS_MountManager::Init(UDS_MountManager *this)

{
  return;
}

// IsMountAble @ 14bb15890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl UDS_MountManager::IsMountAble(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  FDS_EntityBase *pFVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_MountBaseTableRow *pFVar9;
  UDS_ZoneManager *pUVar10;
  FDS_ZoneDistrictTableRow *this;
  FDS_MountBaseTableRow *pFVar11;
  UDS_CharStateData *pUVar12;
  long64 lVar13;
  uint uVar14;
  ulonglong uVar15;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar16;
  ulonglong uVar17;
  undefined1 auStackY_3b8 [32];
  undefined2 local_374;
  undefined1 local_372;
  FWeakObjectPtr local_370;
  EDS_CharDetailState local_368 [2];
  TArray<EDS_MountActionType,TSizedDefaultAllocator<32>_> local_360;
  FWeakObjectPtr local_350;
  ulong64 local_348;
  EDS_CharState local_340 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_330;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_318;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_300;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2e8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2d0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2b8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2a0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  pTVar16 = &local_2b8;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar2 = IsMountAbleBySpecialBuff();
  if (!bVar2) {
    return false;
  }
  pFVar6 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar6 == (FDS_EntityBase *)0x0) {
    return false;
  }
  local_348 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
            ((ulong64 *)&local_350,(EDS_AbilityTagType *)&local_348);
  bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&local_350,(void *)0x0);
  if (bVar2) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_MountManager::IsMountAble",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_268.Ptr,0x1c8,L"abilityData is nullptr.");
    if ((void *)local_268._padding_ == (void *)0x0) {
      return false;
    }
    FMemory::Free((void *)local_268._padding_);
    return false;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_350);
  if (*(char *)(pUVar8 + 3) == '\x01') {
    pTVar16 = &local_330;
    local_330._0_8_ = 0;
    lVar13 = 0x4da35;
    local_330._8_8_ = 0;
    local_330._16_4_ = 0;
  }
  else {
    bVar2 = UDS_TimeCoolDownManager::HasCoolDown(ActionMount,0);
    if (bVar2) {
      pTVar16 = &local_318;
      local_318._0_8_ = 0;
      lVar13 = 0x4da31;
      local_318._8_8_ = 0;
      local_318._16_4_ = 0;
    }
    else {
      iVar4 = GetMountIdByMainPlayer();
      if (iVar4 == 0) {
        pTVar16 = &local_300;
        local_300._0_8_ = 0;
        lVar13 = 0x4da36;
        local_300._8_8_ = 0;
        local_300._16_4_ = 0;
      }
      else {
        pFVar9 = FDS_MountBaseTableRow::Get((longlong)iVar4,true);
        if (pFVar9 == (FDS_MountBaseTableRow *)0x0) {
          pTVar16 = &local_2e8;
          local_2e8._0_8_ = 0;
          lVar13 = 0x4da36;
          local_2e8._8_8_ = 0;
          local_2e8._16_4_ = 0;
        }
        else {
          pUVar10 = UDS_ZoneManager::GetInst();
          uVar15 = 0;
          if (pUVar10 != (UDS_ZoneManager *)0x0) {
            uVar5 = pUVar10->DistrictID;
            iVar4 = GetMountIdByMainPlayer();
            if ((uVar5 != 0) && (iVar4 != 0)) {
              this = FDS_ZoneDistrictTableRow::GetRef((longlong)(int)uVar5,true);
              pFVar11 = FDS_MountBaseTableRow::GetRef((longlong)iVar4,true);
              bVar2 = FDS_ZoneDistrictTableRow::IsValid(this);
              if (bVar2) {
                bVar2 = IsMountLocationCompare(&pFVar11->MountActionType,&this->MountLocationType);
              }
              else {
                local_374 = 0x100;
                local_372 = 2;
                local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_360.ArrayNum = 3;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,3,0,&local_360.AllocatorInstance,3,&local_360.ArrayMax);
                memcpy(local_360.AllocatorInstance.Data,&local_374,3);
                bVar2 = IsMountLocationCompare(&pFVar11->MountActionType,&local_360);
                if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_360.AllocatorInstance.Data);
                }
              }
              if (bVar2 != false) {
                UDS_CharStateData::GetData((ulong64)&local_370);
                bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_370,
                                   (void *)0x0);
                if (bVar2) {
                  pUVar7 = UDS_LogManager::GetInst();
                  if (pUVar7 == (UDS_LogManager *)0x0) {
                    return false;
                  }
                  pUVar7 = UDS_LogManager::GetInst();
                  local_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_148,"UDS_MountManager::IsMountAble",0x1d,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar7,1,Warning,local_148.Ptr,499,L"charStateData is nullptr. (%llu)")
                  ;
                  if ((void *)local_148._padding_ == (void *)0x0) {
                    return false;
                  }
                  FMemory::Free((void *)local_148._padding_);
                  return false;
                }
                pUVar12 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_370);
                local_340[0] = CharSwitch|Dead|Warp|PlayerSkill|Interaction|Abnormal_NonControl|
                               Abnormal|Battle|Swim;
                bVar2 = UDS_CharStateData::HasCharState(pUVar12,local_340);
                if (bVar2) {
                  local_2d0._0_8_ = 0;
                  pTVar16 = &local_2d0;
                  local_2d0._8_8_ = 0;
                  lVar13 = 0x4da33;
                  local_2d0._16_4_ = 0;
                }
                else {
                  pUVar12 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_370);
                  local_340[1] = 0x800;
                  bVar2 = UDS_CharStateData::HasCharState(pUVar12,local_340 + 1);
                  if (!bVar2) {
                    return true;
                  }
                  pUVar12 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_370);
                  local_368[0] = FallingHigher;
                  bVar2 = UDS_CharStateData::HasCharDetailState(pUVar12,local_368);
                  if (bVar2) {
                    local_2b8._0_8_ = 0;
                    local_2b8._8_8_ = 0;
                    lVar13 = 0x4da33;
                    local_2b8._16_4_ = 0;
                  }
                  else {
                    uVar17 = uVar15;
                    if (0 < (pFVar9->MountActionType).ArrayNum) {
                      do {
                        uVar14 = (uint)uVar15;
                        uVar5 = 0;
                        if ((int)uVar14 < (pFVar9->MountActionType).ArrayNum) {
                          uVar5 = ~uVar14 >> 0x1f;
                        }
                        if ((uVar5 == 0) &&
                           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar2)) {
                          pcVar1 = (code *)swi(3);
                          uVar3 = (*pcVar1)();
                          return (bool)uVar3;
                        }
                        if ((pFVar9->MountActionType).AllocatorInstance.Data[uVar17] ==
                            (FScriptContainerElement)0x1) {
                          return true;
                        }
                        uVar15 = (ulonglong)(uVar14 + 1);
                        uVar17 = uVar17 + 1;
                      } while ((int)(uVar14 + 1) < (pFVar9->MountActionType).ArrayNum);
                    }
                    local_2a0._0_8_ = 0;
                    pTVar16 = &local_2a0;
                    local_2a0._8_8_ = 0;
                    lVar13 = 0x4da33;
                    local_2a0._16_4_ = 0;
                  }
                }
                goto LAB_14bb15d1c;
              }
            }
          }
          local_288._0_8_ = 0;
          pTVar16 = &local_288;
          local_288._8_8_ = 0;
          lVar13 = 0x4da34;
          local_288._16_4_ = 0;
        }
      }
    }
  }
LAB_14bb15d1c:
  UDS_UIMessageManager::OpenMsgByStringUi(lVar13,Alert_System_01,pTVar16);
  return false;
}

// IsMountAbleBySpecialBuff @ 14bb15d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_MountManager::IsMountAbleBySpecialBuff(void)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  FDS_MountBaseTableRow *pFVar5;
  UDS_CharBuffData *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_178 [32];
  EDS_SpecialBuffType local_148 [2];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharBuffData::GetData((ulong64)&local_140);
  bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountManager::IsMountAbleBySpecialBuff",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x199,L"charBuffData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  else {
    local_148[1] = 0;
    iVar3 = GetMountIdByMainPlayer();
    if (iVar3 != 0) {
      pFVar5 = FDS_MountBaseTableRow::GetRef((longlong)iVar3,true);
      pUVar6 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_140);
      local_148[0] = ForbidMountGround;
      bVar2 = UDS_CharBuffData::HasSpecialBuffInfo(pUVar6,local_148,(int *)(local_148 + 1));
      if (bVar2) {
        pFVar1 = (pFVar5->MountActionType).AllocatorInstance.Data;
        for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (pFVar5->MountActionType).ArrayNum;
            pFVar7 = pFVar7 + 1) {
          if (*pFVar7 == (FScriptContainerElement)0x0) {
            if ((int)pFVar7 - (int)pFVar1 != -1) {
              local_148[0] = ForbidMountGround;
              UDS_CharBuffData::ShowForbidSpecialBuffMessage((int *)(local_148 + 1),local_148);
              return false;
            }
            break;
          }
        }
      }
      pUVar6 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_140);
      local_148[0] = ForbidMountAir;
      bVar2 = UDS_CharBuffData::HasSpecialBuffInfo(pUVar6,local_148,(int *)(local_148 + 1));
      if (bVar2) {
        pFVar1 = (pFVar5->MountActionType).AllocatorInstance.Data;
        for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (pFVar5->MountActionType).ArrayNum;
            pFVar7 = pFVar7 + 1) {
          if (*pFVar7 == (FScriptContainerElement)0x1) {
            if ((int)pFVar7 - (int)pFVar1 != -1) {
              local_148[0] = ForbidMountAir;
              UDS_CharBuffData::ShowForbidSpecialBuffMessage((int *)(local_148 + 1),local_148);
              return false;
            }
            break;
          }
        }
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

// IsMountLocationCompare @ 14bb15f50

bool __cdecl
UDS_MountManager::IsMountLocationCompare
          (TArray<EDS_MountActionType,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EDS_MountActionType,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  
  local_res10 = param_2->ArrayNum;
  uVar4 = (ulonglong)(int)local_res10;
  pFVar7 = (param_2->AllocatorInstance).Data;
  iVar6 = 0;
  local_res18 = pFVar7 + uVar4;
  do {
    pFVar1 = local_res18;
    if (param_2->ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<enum_EDS_MountActionType_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return param_1->ArrayNum == iVar6;
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    FVar2 = *pFVar7;
    pFVar1 = pFVar5 + iVar3;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_MountActionType_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) goto LAB_14bb15fc6;
      if (FVar2 == *pFVar5) break;
      pFVar5 = pFVar5 + 1;
    }
    iVar6 = iVar6 + 1;
LAB_14bb15fc6:
    pFVar7 = pFVar7 + 1;
    uVar4 = (ulonglong)local_res10;
  } while( true );
}

// IsRideAbleZone @ 14bb16990

bool __cdecl UDS_MountManager::IsRideAbleZone(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  UDS_ZoneManager *pUVar4;
  FDS_ZoneDistrictTableRow *this;
  FDS_MountBaseTableRow *pFVar5;
  undefined2 local_res8;
  undefined1 local_resa;
  TArray<EDS_MountActionType,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar4 = UDS_ZoneManager::GetInst();
  if (pUVar4 != (UDS_ZoneManager *)0x0) {
    uVar1 = pUVar4->DistrictID;
    iVar3 = GetMountIdByMainPlayer();
    if ((uVar1 != 0) && (iVar3 != 0)) {
      this = FDS_ZoneDistrictTableRow::GetRef((longlong)(int)uVar1,true);
      pFVar5 = FDS_MountBaseTableRow::GetRef((longlong)iVar3,true);
      bVar2 = FDS_ZoneDistrictTableRow::IsValid(this);
      if (bVar2) {
        bVar2 = IsMountLocationCompare(&pFVar5->MountActionType,&this->MountLocationType);
        return bVar2;
      }
      local_res8 = 0x100;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_resa = 2;
      local_18.ArrayNum = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,3,0,&local_18.AllocatorInstance,3,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,&local_res8,3);
      bVar2 = IsMountLocationCompare(&pFVar5->MountActionType,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsUseableMountInventory @ 14bb17200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_MountManager::IsUseableMountInventory(void)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MountManager::IsUseableMountInventory",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x148,L"mountDataSet is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  pUVar3 = FWeakObjectPtr::Get(local_148);
  return *(longlong *)&pUVar3[4].field_0x20 != 0;
}

// TamingMount @ 14bb39900

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MountManager::TamingMount(UDS_MountManager *this,long64 param_1,long64 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FDS_EntityBase *pFVar8;
  FDS_EntityBase *pFVar9;
  UDS_MountDataSet *this_00;
  longlong lVar10;
  AActor *pAVar11;
  USceneComponent *pUVar12;
  UObject *pUVar13;
  UDS_LogManager *pUVar14;
  void *pvVar15;
  undefined1 auStackY_378 [32];
  FWeakObjectPtr local_330;
  FWeakObjectPtr local_328;
  FWeakObjectPtr local_320;
  FWeakObjectPtr local_318;
  FName local_310;
  FWeakObjectPtr local_308;
  ulong64 local_300;
  ulong64 local_2f8;
  long64 local_2f0;
  TWeakObjectPtr<AActor,FWeakObjectPtr> local_2e8;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_2e0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_300 = param_1;
  pFVar8 = FDS_EntityBase::GetEntityBase(&local_300);
  local_2f8 = param_2;
  pFVar9 = FDS_EntityBase::GetEntityBase(&local_2f8);
  if ((pFVar8 == (FDS_EntityBase *)0x0) || (pFVar9 == (FDS_EntityBase *)0x0)) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_MountManager::TamingMount",0x1d,Yes);
    UDS_LogManager::PrintLog
              (pUVar14,1,Warning,local_178.Ptr,0x237,L"Entity is nullptr. (%lld, %lld)");
    pvVar15 = (void *)local_178._padding_;
  }
  else {
    local_2f0 = param_1;
    UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
              ((ulong64 *)&local_308,(EDS_AbilityTagType *)&local_2f0);
    bVar6 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&local_308,(void *)0x0
                      );
    if (bVar6) {
      return;
    }
    (**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,&local_330);
    (**(code **)(pFVar9->_padding_ + 0x150))(pFVar9);
    bVar6 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_330,(void *)0x0);
    if ((!bVar6) &&
       (bVar6 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&local_2e8,(void *)0x0), !bVar6))
    {
      (**(code **)(pFVar9->_padding_ + 0x80))(pFVar9);
      bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_318,
                         (void *)0x0);
      if (bVar6) {
        return;
      }
      (**(code **)(pFVar8->_padding_ + 0x80))(pFVar8);
      bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        (&local_2e0,(void *)0x0);
      if (bVar6) {
        return;
      }
      TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_320);
      bVar6 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_320,(void *)0x0);
      if (!bVar6) {
        this_00 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_320);
        iVar7 = UDS_MountDataSet::GetMountID(this_00);
        FDS_MountBaseTableRow::GetRef((longlong)iVar7,true);
        lVar10 = (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8);
        pAVar11 = (AActor *)FWeakObjectPtr::Get(&local_330);
        local_310.ComparisonIndex.Value = 0;
        local_310.Number = 0;
        pUVar12 = (USceneComponent *)FWeakObjectPtr::Get(&local_318);
        AActor::AttachToComponent
                  (pAVar11,pUVar12,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,
                   local_310);
        pAVar11 = (AActor *)FWeakObjectPtr::Get(&local_330);
        local_2d8._s_0.Z = (double)*(float *)(lVar10 + 0x50);
        local_2d8._s_0.X = 0.0;
        local_2d8._s_0.Y = 0.0;
        AActor::SetActorRelativeLocation
                  (pAVar11,(TVector<double> *)&local_2d8._s_0,false,(FHitResult *)0x0,None);
        (**(code **)(pFVar8->_padding_ + 0x170))(pFVar8,&local_328);
        bVar6 = FWeakObjectPtr::IsValid(&local_328);
        if (!bVar6) {
          return;
        }
        pUVar13 = FWeakObjectPtr::Get(&local_328);
        dVar3 = *(double *)&pUVar13[8].field_0x8;
        dVar4 = *(double *)&pUVar13[8].field_0x10;
        uVar1 = *(undefined8 *)&pUVar13[8].field_0x18;
        pUVar13 = FWeakObjectPtr::Get(&local_308);
        *(double *)&pUVar13[3].field_0x8 = dVar3;
        *(double *)&pUVar13[3].field_0x10 = dVar4;
        *(undefined8 *)&pUVar13[3].field_0x18 = uVar1;
        dVar5 = __real_c059000000000000;
        pUVar12 = (USceneComponent *)FWeakObjectPtr::Get(&local_328);
        local_2b8._s_0.Z = dVar5;
        local_2b8._s_0.X = dVar3;
        local_2b8._s_0.Y = dVar4;
        USceneComponent::SetRelativeLocation
                  (pUVar12,(TVector<double> *)&local_2b8._s_0,false,(FHitResult *)0x0,None);
        return;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9160674649728613799>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_MountManager.cpp"
                         ,0x259,"false");
      if (!bVar6) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_298._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_298,"UDS_MountManager::TamingMount",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar14,1,Warning,local_298.Ptr,0x246,L"Actor is nullptr.");
    pvVar15 = (void *)local_298._padding_;
  }
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  return;
}

// TamingUnmount @ 14bb39cf0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MountManager::TamingUnmount(UDS_MountManager *this,long64 param_1,long64 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  FDS_EntityBase *pFVar5;
  FDS_EntityBase *pFVar6;
  AActor *pAVar7;
  UObject *pUVar8;
  FPayload *pFVar9;
  TRotator<double> *pTVar10;
  USceneComponent *this_00;
  UDS_LogManager *pUVar11;
  int iVar12;
  FRotationConversionCache *this_01;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8 [2];
  TVector<double>_u_0 local_1a8;
  ulong64 local_188;
  ulong64 local_180;
  long64 local_178;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_170;
  TQuat<double> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_188 = param_1;
  pFVar5 = FDS_EntityBase::GetEntityBase(&local_188);
  local_180 = param_2;
  pFVar6 = FDS_EntityBase::GetEntityBase(&local_180);
  if ((pFVar6 == (FDS_EntityBase *)0x0) || (pFVar5 == (FDS_EntityBase *)0x0)) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MountManager::TamingUnmount",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_148.Ptr,0x276,L"Entity is nullptr. (%lld, lld)");
  }
  else {
    local_178 = param_1;
    UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
              ((ulong64 *)local_1b8,(EDS_AbilityTagType *)&local_178);
    bVar4 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)local_1b8,(void *)0x0)
    ;
    if (bVar4) {
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,&local_1d0);
    (**(code **)(pFVar6->_padding_ + 0x150))(pFVar6);
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1c8,(void *)0x0);
    if ((!bVar4) &&
       (bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1d0,(void *)0x0), !bVar4)
       ) {
      (**(code **)(pFVar5->_padding_ + 0x80))(pFVar5);
      bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        (&local_170,(void *)0x0);
      if (bVar4) {
        return;
      }
      (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5);
      pAVar7 = (AActor *)FWeakObjectPtr::Get(&local_1d0);
      uVar15 = 0x54c3d214;
      AActor::DetachFromActor(pAVar7,&FDetachmentTransformRules::KeepWorldTransform);
      pAVar7 = (AActor *)FWeakObjectPtr::Get(&local_1d0);
      pUVar8 = FWeakObjectPtr::Get(&local_1c8);
      lVar14 = *(longlong *)(pUVar8 + 0xb);
      if (lVar14 == 0) {
        uVar15 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
        uVar16 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
        local_1a8._0_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
        local_1a8._4_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
        local_1a8._8_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
        local_1a8._12_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
      }
      else {
        local_168.X = *(double *)(lVar14 + 0x1f0);
        local_168.Y = *(double *)(lVar14 + 0x1f8);
        local_168.Z = *(double *)(lVar14 + 0x200);
        local_168.W = *(double *)(lVar14 + 0x208);
        this_01 = (FRotationConversionCache *)(lVar14 + 0x1e0);
        pFVar9 = FRotationConversionCache::GetOrCreatePayload(this_01);
        lVar14 = -(ulonglong)((pFVar9->CachedQuat).W != local_168.W);
        auVar2._8_4_ = (int)lVar14;
        auVar2._0_8_ = -(ulonglong)((pFVar9->CachedQuat).Z != local_168.Z);
        auVar2._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar13 = movmskpd(uVar15,auVar2);
        lVar14 = -(ulonglong)((pFVar9->CachedQuat).Y != local_168.Y);
        auVar3._8_4_ = (int)lVar14;
        auVar3._0_8_ = -(ulonglong)((pFVar9->CachedQuat).X != local_168.X);
        auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        iVar12 = movmskpd((int)this_01,auVar3);
        if ((uVar13 & 0x3fffffff) != 0 || iVar12 != 0) {
          (pFVar9->CachedQuat).X = local_168.X;
          (pFVar9->CachedQuat).Y = local_168.Y;
          (pFVar9->CachedQuat).Z = local_168.Z;
          (pFVar9->CachedQuat).W = local_168.W;
          pTVar10 = UE::Math::TQuat<double>::Rotator(&local_168,(TRotator<double> *)&local_1a8._s_0)
          ;
          dVar1 = pTVar10->Yaw;
          (pFVar9->CachedRotator).Pitch = pTVar10->Pitch;
          (pFVar9->CachedRotator).Yaw = dVar1;
          (pFVar9->CachedRotator).Roll = pTVar10->Roll;
        }
        dVar1 = (pFVar9->CachedRotator).Roll;
        uVar15 = SUB84(dVar1,0);
        uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_1a8._0_4_ = *(undefined4 *)&(pFVar9->CachedRotator).Pitch;
        local_1a8._4_4_ = *(undefined4 *)((longlong)&(pFVar9->CachedRotator).Pitch + 4);
        local_1a8._8_4_ = *(undefined4 *)&(pFVar9->CachedRotator).Yaw;
        local_1a8._12_4_ = *(undefined4 *)((longlong)&(pFVar9->CachedRotator).Yaw + 4);
      }
      local_1a8._s_0.Z = (double)CONCAT44(uVar16,uVar15);
      AActor::SetActorRelativeRotation
                (pAVar7,(TRotator<double> *)&local_1a8._s_0,false,(FHitResult *)0x0,None);
      (**(code **)(pFVar5->_padding_ + 0x170))(pFVar5,&local_1c0);
      bVar4 = FWeakObjectPtr::IsValid(&local_1c0);
      if (!bVar4) {
        return;
      }
      this_00 = (USceneComponent *)FWeakObjectPtr::Get(&local_1c0);
      pUVar8 = FWeakObjectPtr::Get(local_1b8);
      local_1a8._s_0.X = (double)*(undefined8 *)&pUVar8[3].field_0x8;
      local_1a8._s_0.Y = (double)*(undefined8 *)&pUVar8[3].field_0x10;
      local_1a8._s_0.Z = (double)*(undefined8 *)&pUVar8[3].field_0x18;
      USceneComponent::SetRelativeLocation
                (this_00,(TVector<double> *)&local_1a8._s_0,false,(FHitResult *)0x0,None);
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_MountManager::TamingUnmount",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_148.Ptr,0x284,L"Actor is nullptr.");
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// Update @ 14bb3f060

void __thiscall UDS_MountManager::Update(UDS_MountManager *this,float *param_1)

{
  return;
}

