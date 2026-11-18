// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b401030

UClass * __cdecl UDS_AbilitySystemComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilitySystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilitySystemComponent",
               &Z_Registration_Info_UClass_UDS_AbilitySystemComponent.InnerSingleton,
               StaticRegisterNativesUDS_AbilitySystemComponent,0x2b8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AbilitySystemComponent>,
               InternalVTableHelperCtorCaller<UDS_AbilitySystemComponent>,local_res8,
               UWN_AbilitySystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilitySystemComponent.InnerSingleton;
}

// UDS_AbilitySystemComponent @ 14b406620

UDS_AbilitySystemComponent * __thiscall
UDS_AbilitySystemComponent::UDS_AbilitySystemComponent
          (UDS_AbilitySystemComponent *this,FVTableHelper *param_1)

{
  UWN_AbilitySystemComponent::UWN_AbilitySystemComponent((UWN_AbilitySystemComponent *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  *(undefined8 *)&this->AbilityInstHandleMap = 0;
  *(undefined8 *)&(this->AbilityInstHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbilityInstHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbilityInstHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x48 = 0;
  this->bIsRemoveAllAbilities = false;
  (this->BlockInputAbilityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockInputAbilityList).ArrayNum = 0;
  (this->BlockInputAbilityList).ArrayMax = 0;
  return this;
}

// UDS_AbilitySystemComponent @ 14b4066e0

UDS_AbilitySystemComponent * __thiscall
UDS_AbilitySystemComponent::UDS_AbilitySystemComponent
          (UDS_AbilitySystemComponent *this,FObjectInitializer *param_1)

{
  UWN_AbilitySystemComponent::UWN_AbilitySystemComponent((UWN_AbilitySystemComponent *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  *(undefined8 *)&this->AbilityInstHandleMap = 0;
  *(undefined8 *)&(this->AbilityInstHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->AbilityInstHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AbilityInstHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x48 = 0;
  this->bIsRemoveAllAbilities = false;
  (this->BlockInputAbilityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockInputAbilityList).ArrayNum = 0;
  (this->BlockInputAbilityList).ArrayMax = 0;
  return this;
}

// ~UDS_AbilitySystemComponent @ 14b407ab0

void __thiscall
UDS_AbilitySystemComponent::~UDS_AbilitySystemComponent(UDS_AbilitySystemComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  pFVar1 = (this->BlockInputAbilityList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AbilityInstHandleMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AbilityInstHandleMap);
  UWN_AbilitySystemComponent::~UWN_AbilitySystemComponent((UWN_AbilitySystemComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b409840

UClass * __cdecl UDS_AbilitySystemComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbilitySystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbilitySystemComponent",
               &Z_Registration_Info_UClass_UDS_AbilitySystemComponent.InnerSingleton,
               StaticRegisterNativesUDS_AbilitySystemComponent,0x2b8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AbilitySystemComponent>,
               InternalVTableHelperCtorCaller<UDS_AbilitySystemComponent>,local_res8,
               UWN_AbilitySystemComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbilitySystemComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_AbilitySystemComponent @ 14b40adb0

void __cdecl UDS_AbilitySystemComponent::StaticRegisterNativesUDS_AbilitySystemComponent(void)

{
  return;
}

// AddAbilityByTag @ 14b79cc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_AbilitySystemComponent::AddAbilityByTag(UDS_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_00;
  FName FVar5;
  UObject *pUVar6;
  FName FVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 local_188 [16];
  TPairInitializer<FGameplayTag_const_&,FWN_AbilityInstanceHandle_&> local_178;
  FName local_168;
  FWN_AbilityInstanceHandle local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  UDS_GameplayAbility::GetAbilityClassByTag((FGameplayTag *)&local_168);
  FVar7 = local_168;
  if ((local_168 == (FName)0x0) ||
     (pUVar3 = Z_Construct_UClass_UWN_Ability_NoRegister(), pUVar3 == (UClass *)0x0)) {
LAB_14b79cf83:
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      ::FName::ToString(&param_1->TagName,(FString *)local_188);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_AbilitySystemComponent::AddAbilityByTag",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x116,L"abilityClass is nullptr. (%s)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
    }
    return;
  }
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)((longlong)FVar7 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar7 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (local_168 == (FName)0x0)) goto LAB_14b79cf83;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_188._0_4_ = local_168.ComparisonIndex.Value;
  local_188._4_4_ = local_168.Number;
  local_178.Key = (FGameplayTag *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  UWN_AbilitySystemComponent::AddAbility
            ((UWN_AbilitySystemComponent *)this,&local_160,(TSubclassOf<UWN_Ability>)local_188,
             param_1,(TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> *)&local_178);
  if (local_160.HandleImpl.Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b79cf74;
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&param_1->TagName,(FString *)local_188);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_AbilitySystemComponent::AddAbilityByTag",0x2b,Yes);
    pwVar9 = L"instHandle is invalid. (%s)";
    uVar8 = 0x11e;
  }
  else {
    this_00 = UWN_AbilitySystemComponent::GetAbility
                        ((UWN_AbilitySystemComponent *)this,(FWN_AbilityInstanceHandle *)&local_178)
    ;
    FVar5 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
    if (FVar5 == (FName)0x0) {
LAB_14b79ce1a:
      FVar5 = FVar7;
    }
    else {
      pUVar3 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_14b79ce1a;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5);
    }
    local_178.Value = (FWN_AbilityInstanceHandle *)0x0;
    local_188._0_8_ = FVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_178.Value,(FObjectPtr)local_188);
    bVar2 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_178.Value,
                       (void *)0x0);
    if (!bVar2) {
      local_188._8_8_ = &local_160;
      local_188._0_8_ = param_1;
      TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FWN_AbilityInstanceHandle_&>_>
                ((TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
                  *)&this->AbilityInstHandleMap,&local_178,(bool *)local_188);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_178.Value);
      (**(code **)(*(longlong *)pUVar6 + 0x330))(pUVar6);
      goto LAB_14b79cf74;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b79cf74;
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&param_1->TagName,(FString *)local_188);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_AbilitySystemComponent::AddAbilityByTag",0x2b,Yes);
    pwVar9 = L"ability is nullptr. (%s)";
    uVar8 = 0x125;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  if ((FName)local_188._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_188._0_8_);
    FWN_AbilityInstanceHandle::~FWN_AbilityInstanceHandle(&local_160);
    return;
  }
LAB_14b79cf74:
  FWN_AbilityInstanceHandle::~FWN_AbilityInstanceHandle(&local_160);
  return;
}

// AddStateTag @ 14b79d0a0

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

void __cdecl
UDS_AbilitySystemComponent::AddStateTag
          (TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> param_1,
          EDS_StateTagType *param_2)

{
  code *pcVar1;
  bool bVar2;
  FGameplayTag *pFVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  UWN_AbilitySystemComponent *pUVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res8 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar2) {
    pFVar3 = FDS_GameplayTags::GetStateTag(param_2);
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[0xe].field_0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    if ((pFVar5 != (FDS_EntityBase *)0x0) && (pFVar5->EntityType == MainCharacter)) {
      pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
      bVar2 = UWN_AbilitySystemComponent::HasTag(pUVar6,pFVar3);
      if (bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2335328732794847260>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AbilitySystemComponent.cpp"
                           ,0x1c,"InASC->HasTag(stateTag) == false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
    UWN_AbilitySystemComponent::AddTag(pUVar6,pFVar3,1);
  }
  return;
}

// DeactivateAbilityByTag @ 14b7a3b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_AbilitySystemComponent::DeactivateAbilityByTag
          (UDS_AbilitySystemComponent *this,FGameplayTag *param_1,EDS_AbilityDeactivateType *param_2
          )

{
  FName FVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FWN_AbilityInstanceHandle *pFVar7;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_00;
  UObject *pUVar8;
  UClass *pUVar9;
  undefined1 *puVar10;
  undefined1 auStackY_1b8 [32];
  wchar_t *pwVar11;
  FWeakObjectPtr local_178;
  FString local_170;
  UObject *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FVar1 = param_1->TagName;
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  if (FVar1 == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_AbilitySystemComponent::DeactivateAbilityByTag",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x9a,L"InAbilityTag is invalid.");
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
LAB_14b7a3e25:
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
LAB_14b7a3e2f:
    bVar3 = false;
  }
  else {
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->AbilityInstHandleMap).field_0x8 !=
        *(int *)&(this->AbilityInstHandleMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->AbilityInstHandleMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->AbilityInstHandleMap).field_0x38;
      }
      iVar5 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->AbilityInstHandleMap).field_0x48 - 1U & uVar4 + FVar1.Number)
                      * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)&this->AbilityInstHandleMap;
        do {
          if (*(FName *)((longlong)iVar5 * 0x20 + lVar2) == param_1->TagName) {
            pFVar7 = TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                                    *)&this->AbilityInstHandleMap,param_1);
            if ((pFVar7->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b7a3e2f;
              pUVar6 = UDS_LogManager::GetInst();
              ::FName::ToString(&param_1->TagName,&local_170);
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_AbilitySystemComponent::DeactivateAbilityByTag",0x32,Yes);
              pwVar11 = L"instHandle is invalid. (%s)";
              uVar4 = 0xa8;
            }
            else {
              this_00 = UWN_AbilitySystemComponent::GetAbility
                                  ((UWN_AbilitySystemComponent *)this,
                                   (FWN_AbilityInstanceHandle *)&local_170);
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
              if (pUVar8 == (UObject *)0x0) {
LAB_14b7a3d2c:
                pUVar8 = (UObject *)0x0;
              }
              else {
                pUVar9 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
                iVar5 = (int)pUVar9->_padding_;
                if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar5) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8)
                    != &pUVar9->_padding_)) goto LAB_14b7a3d2c;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar8);
              }
              local_178.ObjectIndex = 0;
              local_178.ObjectSerialNumber = 0;
              local_160 = pUVar8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar8);
              }
              FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_160);
              bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_178,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar8 = FWeakObjectPtr::Get(&local_178);
                if (pUVar8[1].field_0x8 != '\0') {
                  pUVar8 = FWeakObjectPtr::Get(&local_178);
                  pUVar8[7].field_0x20 = *param_2;
                  bVar3 = UWN_AbilitySystemComponent::DeactivateAbility
                                    ((UWN_AbilitySystemComponent *)this,pFVar7);
                  return bVar3;
                }
                break;
              }
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14b7a3e2f;
              pUVar6 = UDS_LogManager::GetInst();
              ::FName::ToString(&param_1->TagName,&local_170);
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_AbilitySystemComponent::DeactivateAbilityByTag",0x32,Yes);
              pwVar11 = L"ability is nullptr. (%s)";
              uVar4 = 0xaf;
            }
            UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar4,pwVar11);
            if ((FScriptContainerElement *)local_158._padding_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
            goto LAB_14b7a3e25;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar2);
        } while (iVar5 != -1);
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// DeactivateAllAbility @ 14b7a3e80

void __thiscall
UDS_AbilitySystemComponent::DeactivateAllAbility
          (UDS_AbilitySystemComponent *this,FGameplayTagContainer *param_1,
          EDS_AbilityDeactivateType *param_2)

{
  FName *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  FName *pFVar6;
  longlong lVar7;
  FName *pFVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iStack_48 = 0;
  iVar3 = *(int *)&(this->AbilityInstHandleMap).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AbilityInstHandleMap).field_0x10
  ;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)&(this->AbilityInstHandleMap).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_70.Array;
    }
    uVar4 = *puVar9;
    while (uVar4 == 0) {
      lVar7 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14b7a3f2d;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_44 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_44 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar7;
    if (iVar3 < iStack_34) {
      iStack_34 = iVar3;
    }
  }
LAB_14b7a3f2d:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = &this->AbilityInstHandleMap;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar3) {
    do {
      pFVar8 = (FName *)((longlong)TStack_70.CurrentBitIndex * 0x20 +
                        *(longlong *)&this->AbilityInstHandleMap);
      FVar5 = *pFVar8;
      if (FVar5 != (FName)0x0) {
        pFVar6 = (FName *)(param_1->GameplayTags).AllocatorInstance.Data;
        pFVar1 = pFVar6 + (param_1->GameplayTags).ArrayNum;
        for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
          if (*pFVar6 == FVar5) goto LAB_14b7a3fc0;
        }
      }
      DeactivateAbilityByTag(this,(FGameplayTag *)pFVar8,param_2);
LAB_14b7a3fc0:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return;
}

// ForcedAddAbilityByTag @ 14b7aa080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_AbilitySystemComponent::ForcedAddAbilityByTag
          (UDS_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_00;
  FName FVar5;
  UObject *pUVar6;
  FName FVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 auStack_188 [16];
  TPairInitializer<FGameplayTag_const_&,FWN_AbilityInstanceHandle_&> TStack_178;
  FName FStack_168;
  FWN_AbilityInstanceHandle FStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  UDS_GameplayAbility::GetAbilityClassByTag((FGameplayTag *)&FStack_168);
  FVar7 = FStack_168;
  if ((FStack_168 == (FName)0x0) ||
     (pUVar3 = Z_Construct_UClass_UWN_Ability_NoRegister(), pUVar3 == (UClass *)0x0)) {
LAB_14b79cf83:
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      ::FName::ToString(&param_1->TagName,(FString *)auStack_188);
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_AbilitySystemComponent::AddAbilityByTag",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,TStack_148.Ptr,0x116,L"abilityClass is nullptr. (%s)");
      if ((void *)TStack_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
      if ((FScriptContainerElement *)auStack_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_188._0_8_);
      }
    }
    return;
  }
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)((longlong)FVar7 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar7 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (FStack_168 == (FName)0x0)) goto LAB_14b79cf83;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  auStack_188._0_4_ = FStack_168.ComparisonIndex.Value;
  auStack_188._4_4_ = FStack_168.Number;
  TStack_178.Key = (FGameplayTag *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FStack_168);
  }
  UWN_AbilitySystemComponent::AddAbility
            ((UWN_AbilitySystemComponent *)this,&FStack_160,(TSubclassOf<UWN_Ability>)auStack_188,
             param_1,(TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> *)&TStack_178);
  if (FStack_160.HandleImpl.Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b79cf74;
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&param_1->TagName,(FString *)auStack_188);
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_AbilitySystemComponent::AddAbilityByTag",0x2b,Yes);
    pwVar9 = L"instHandle is invalid. (%s)";
    uVar8 = 0x11e;
  }
  else {
    this_00 = UWN_AbilitySystemComponent::GetAbility
                        ((UWN_AbilitySystemComponent *)this,(FWN_AbilityInstanceHandle *)&TStack_178
                        );
    FVar5 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
    if (FVar5 == (FName)0x0) {
LAB_14b79ce1a:
      FVar5 = FVar7;
    }
    else {
      pUVar3 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_14b79ce1a;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5);
    }
    TStack_178.Value = (FWN_AbilityInstanceHandle *)0x0;
    auStack_188._0_8_ = FVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&TStack_178.Value,(FObjectPtr)auStack_188);
    bVar2 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&TStack_178.Value,
                       (void *)0x0);
    if (!bVar2) {
      auStack_188._8_8_ = &FStack_160;
      auStack_188._0_8_ = param_1;
      TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGameplayTag_const_&,FWN_AbilityInstanceHandle_&>_>
                ((TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
                  *)&this->AbilityInstHandleMap,&TStack_178,(bool *)auStack_188);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&TStack_178.Value);
      (**(code **)(*(longlong *)pUVar6 + 0x330))(pUVar6);
      goto LAB_14b79cf74;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b79cf74;
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&param_1->TagName,(FString *)auStack_188);
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_AbilitySystemComponent::AddAbilityByTag",0x2b,Yes);
    pwVar9 = L"ability is nullptr. (%s)";
    uVar8 = 0x125;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_148.Ptr,uVar8,pwVar9);
  if ((void *)TStack_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  if ((FName)auStack_188._0_8_ != (FName)0x0) {
    FMemory::Free((void *)auStack_188._0_8_);
    FWN_AbilityInstanceHandle::~FWN_AbilityInstanceHandle(&FStack_160);
    return;
  }
LAB_14b79cf74:
  FWN_AbilityInstanceHandle::~FWN_AbilityInstanceHandle(&FStack_160);
  return;
}

// GetAbilityByTag @ 14b7aa930

TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> __thiscall
UDS_AbilitySystemComponent::GetAbilityByTag(UDS_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  FGameplayTag FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_00;
  UObject *pUVar5;
  UClass *pUVar6;
  FName *in_R8;
  undefined1 *puVar7;
  UObject *local_res8;
  
  FVar1.TagName = *in_R8;
  uVar3 = ::GetTypeHash(FVar1.TagName.ComparisonIndex.Value);
  if (*(int *)&(this->AbilityInstHandleMap).field_0x8 !=
      *(int *)&(this->AbilityInstHandleMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->AbilityInstHandleMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AbilityInstHandleMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->AbilityInstHandleMap).field_0x48 - 1U &
                              uVar3 + FVar1.TagName.Number) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->AbilityInstHandleMap;
      do {
        if (*(FName *)((longlong)iVar4 * 0x20 + lVar2) == *in_R8) {
          TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
          ::FindChecked((TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                         *)&this->AbilityInstHandleMap,(FGameplayTag *)in_R8);
          this_00 = UWN_AbilitySystemComponent::GetAbility
                              ((UWN_AbilitySystemComponent *)this,
                               (FWN_AbilityInstanceHandle *)&stack0x00000018);
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
          if (pUVar5 == (UObject *)0x0) {
LAB_14b7aaa22:
            pUVar5 = (UObject *)0x0;
          }
          else {
            pUVar6 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar6->_padding_)) goto LAB_14b7aaa22;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          param_1->TagName = (FName)0x0;
          local_res8 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14b7aa9af;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  param_1->TagName = (FName)0x0;
  local_res8 = (UObject *)0x0;
LAB_14b7aa9af:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetActivatedAbilityList @ 14b7aae90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_AbilitySystemComponent::GetActivatedAbilityList
          (UDS_AbilitySystemComponent *this,
          TArray<TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_00;
  UObject *pUVar8;
  UClass *pUVar9;
  UDS_LogManager *pUVar10;
  uint uVar11;
  uint uVar12;
  UObject *pUVar13;
  uint *puVar14;
  UObject *pUVar15;
  longlong lVar16;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1d8;
  FString local_1d0;
  undefined1 *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  TMap<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  UObject *local_178;
  undefined1 local_170 [264];
  void *local_68;
  wchar_t *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar15 = (UObject *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar11 = *(int *)&(this->AbilityInstHandleMap).field_0x8 -
           *(int *)&(this->AbilityInstHandleMap).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_1c0 = &(this->AbilityInstHandleMap).field_0x10;
  uVar11 = *(uint *)&(this->AbilityInstHandleMap).field_0x28;
  local_1d0.Data.ArrayMax = 1;
  local_1b0 = 0;
  uStack_1b4 = local_1b0;
  if (uVar11 != 0) {
    puVar14 = *(uint **)&(this->AbilityInstHandleMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_1c0;
    }
    uVar3 = *puVar14;
    pUVar8 = pUVar15;
    pUVar13 = pUVar15;
    uVar12 = 0;
    local_1b0 = 0;
    while (uVar3 == 0) {
      uVar12 = (int)pUVar8 + 1;
      pUVar8 = (UObject *)(ulonglong)uVar12;
      local_1b0 = (int)pUVar13 + 0x20;
      pUVar13 = (UObject *)(ulonglong)local_1b0;
      uStack_1b4 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < (int)uVar12)
      goto LAB_14b7aaf8b;
      uVar3 = puVar14[(int)uVar12];
    }
    local_1d0.Data.ArrayMax = ~(uVar3 - 1) & uVar3;
    uVar2 = (ulonglong)(uint)local_1d0.Data.ArrayMax * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uStack_1b4 = (int)lVar5 + -1 + local_1b0;
    if ((int)uVar11 < (int)uStack_1b4) {
      uStack_1b4 = uVar11;
    }
  }
LAB_14b7aaf8b:
  uStack_1b8 = 0xffffffff;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198._padding_ = CONCAT44(local_1d0.Data.ArrayMax,uVar12);
  TStack_198._28_4_ = uStack_1b4;
  TStack_198.BaseBitIndex = local_1b0;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->AbilityInstHandleMap;
  local_1d0.Data.ArrayNum = uVar12;
  uStack_1ac = uStack_1b4;
  local_1a0 = &this->AbilityInstHandleMap;
  TStack_198.CurrentBitIndex = uStack_1b4;
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c0;
  if ((int)uStack_1b4 < *(int *)&(this->AbilityInstHandleMap).field_0x28) {
    do {
      lVar16 = (longlong)TStack_198.CurrentBitIndex;
      lVar5 = *(longlong *)local_1a0;
      this_00 = UWN_AbilitySystemComponent::GetAbility
                          ((UWN_AbilitySystemComponent *)this,(FWN_AbilityInstanceHandle *)local_170
                          );
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
      if (pUVar8 == (UObject *)0x0) {
LAB_14b7ab042:
        pUVar8 = pUVar15;
      }
      else {
        pUVar9 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
        iVar7 = (int)pUVar9->_padding_;
        if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) goto LAB_14b7ab042;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      local_1d8.ObjectIndex = 0;
      local_1d8.ObjectSerialNumber = 0;
      local_178 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_178);
      bVar6 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_1d8,
                         (void *)0x0);
      if (bVar6) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          ::FName::ToString((FName *)(lVar16 * 0x20 + lVar5),&local_1d0);
          local_68 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_170 + 8),
                     "UDS_AbilitySystemComponent::GetActivatedAbilityList",0x33,Yes);
          UDS_LogManager::PrintLog(pUVar10,1,Warning,local_60,0xf4,L"ability is nullptr. (%s)");
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar8 = FWeakObjectPtr::Get(&local_1d8);
        if (pUVar8[1].field_0x8 == '\x01') {
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(FWeakObjectPtr *)(pFVar4 + (longlong)iVar7 * 8) = local_1d8;
        }
      }
      TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    } while (TStack_198.CurrentBitIndex < (TStack_198.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// HasStateTag @ 14b7ae190

bool __cdecl
UDS_AbilitySystemComponent::HasStateTag
          (TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> param_1,
          EDS_StateTagType *param_2)

{
  bool bVar1;
  UWN_AbilitySystemComponent *this;
  FGameplayTag *pFVar2;
  FWeakObjectPtr local_res8;
  
  local_res8 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar1) {
    return false;
  }
  this = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
  pFVar2 = FDS_GameplayTags::GetStateTag(param_2);
  bVar1 = UWN_AbilitySystemComponent::HasTag(this,pFVar2);
  return bVar1;
}

// IsActiveAbility @ 14b7b1a80

bool __thiscall
UDS_AbilitySystemComponent::IsActiveAbility(UDS_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FWN_AbilityInstanceHandle *pFVar6;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_00;
  UObject *pUVar7;
  UClass *pUVar8;
  undefined1 *puVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [2];
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->AbilityInstHandleMap).field_0x8 !=
      *(int *)&(this->AbilityInstHandleMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AbilityInstHandleMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AbilityInstHandleMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->AbilityInstHandleMap).field_0x48 - 1U &
                              uVar4 + FVar1.Number) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->AbilityInstHandleMap;
      do {
        if (*(FName *)((longlong)iVar5 * 0x20 + lVar2) == param_1->TagName) {
          pFVar6 = TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                                  *)&this->AbilityInstHandleMap,param_1);
          if ((pFVar6->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
            return false;
          }
          this_00 = UWN_AbilitySystemComponent::GetAbility
                              ((UWN_AbilitySystemComponent *)this,
                               (FWN_AbilityInstanceHandle *)(local_res10 + 1));
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
          if (pUVar7 != (UObject *)0x0) {
            pUVar8 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
            iVar5 = (int)pUVar8->_padding_;
            if ((iVar5 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
                &pUVar8->_padding_)) goto LAB_14b7b1b5d;
          }
          pUVar7 = (UObject *)0x0;
LAB_14b7b1b5d:
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10[0] = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
          bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_res8,
                             (void *)0x0);
          if (bVar3) {
            return false;
          }
          pUVar7 = FWeakObjectPtr::Get(&local_res8);
          return (bool)pUVar7[1].field_0x8;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar2);
      } while (iVar5 != -1);
    }
  }
  return false;
}

// OnPreRemoveAllAbilities @ 14b7bc6e0

void __thiscall
UDS_AbilitySystemComponent::OnPreRemoveAllAbilities(UDS_AbilitySystemComponent *this)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  int *piVar2;
  TMap<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
  *this_01;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  uint *puVar8;
  EDS_AbilityDeactivateType local_res8 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  this->bIsRemoveAllAbilities = true;
  this_01 = &this->AbilityInstHandleMap;
  local_res8[0] = Cancel;
  iVar4 = *(int *)&(this->AbilityInstHandleMap).field_0x28;
  this_00 = &(this->AbilityInstHandleMap).field_0x10;
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)&(this->AbilityInstHandleMap).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)this_00;
    }
    uVar5 = *puVar8;
    local_30 = 0;
    while (uVar5 == 0) {
      lVar7 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14b7bc78b;
      uVar5 = puVar8[lVar7 + 1];
    }
    uStack_44 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uStack_44 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar7;
    if (iVar4 < iStack_34) {
      iStack_34 = iVar4;
    }
  }
LAB_14b7bc78b:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  local_50 = this_01;
  local_40 = this_00;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar4) {
    do {
      DeactivateAbilityByTag
                (this,(FGameplayTag *)
                      ((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)&this_01->field_0x0
                      ),local_res8);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  bVar6 = 1 < *(int *)&(this->AbilityInstHandleMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->AbilityInstHandleMap).field_0x8);
  puVar1 = &(this->AbilityInstHandleMap).field_0xc;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AbilityInstHandleMap).field_0x2c;
  *(undefined4 *)&(this->AbilityInstHandleMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AbilityInstHandleMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (bVar6) {
    *(undefined4 *)&(this->AbilityInstHandleMap).field_0x48 = 1;
    TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGameplayTag,FWN_AbilityInstanceHandle>,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>,FDefaultSetAllocator>
              *)this_01);
  }
  piVar2 = &(this->BlockInputAbilityList).ArrayMax;
  (this->BlockInputAbilityList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->BlockInputAbilityList).AllocatorInstance,0,piVar2);
  }
  this->bIsRemoveAllAbilities = false;
  return;
}

// RemoveStateTag @ 14b7c1d50

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

void __cdecl
UDS_AbilitySystemComponent::RemoveStateTag
          (TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> param_1,
          EDS_StateTagType *param_2)

{
  code *pcVar1;
  bool bVar2;
  FGameplayTag *pFVar3;
  UWN_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res8 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar2) {
    pFVar3 = FDS_GameplayTags::GetStateTag(param_2);
    pUVar4 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
    UWN_AbilitySystemComponent::RemoveTag(pUVar4,pFVar3,-1);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[0xe].field_0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    if ((pFVar6 != (FDS_EntityBase *)0x0) && (pFVar6->EntityType == MainCharacter)) {
      pUVar4 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
      bVar2 = UWN_AbilitySystemComponent::HasTag(pUVar4,pFVar3);
      if ((bVar2) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2335328732794847282>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AbilitySystemComponent.cpp"
                             ,0x32,"InASC->HasTag(stateTag) == false"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// SetIgnoreInput @ 14b7c3950

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
UDS_AbilitySystemComponent::SetIgnoreInput
          (UDS_AbilitySystemComponent *this,FGameplayTag *param_1,bool *param_2)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UWN_AbilitySystemComponent *pUVar6;
  FGameplayTag *pFVar7;
  UObject *pUVar8;
  FDS_EntityBase *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  EDS_StateTagType local_res18 [8];
  EDS_StateTagType local_res20 [8];
  EDS_StateTagType local_d8 [8];
  FWeakObjectPtr local_d0;
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *local_80;
  UDS_AbilitySystemComponent *local_78;
  UDS_AbilitySystemComponent *local_70;
  UObject *local_68;
  UDS_AbilitySystemComponent *local_60;
  UDS_AbilitySystemComponent *local_58;
  UObject *local_50 [2];
  
  pTVar1 = &this->BlockInputAbilityList;
  pFVar14 = (FName *)(pTVar1->AllocatorInstance).Data;
  iVar4 = (this->BlockInputAbilityList).ArrayNum;
  local_80 = pTVar1;
  if (*param_2 == true) {
    pFVar5 = pFVar14 + iVar4;
    if (pFVar14 != pFVar5) {
      do {
        if (*pFVar14 == param_1->TagName) goto LAB_14b7c3b19;
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar5);
    }
    if (iVar4 == (this->BlockInputAbilityList).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar1->AllocatorInstance,&(this->BlockInputAbilityList).ArrayMax);
    }
    (this->BlockInputAbilityList).ArrayNum = iVar4 + 1;
    *(FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 8) = param_1->TagName;
  }
  else if (pFVar14 != pFVar14 + iVar4) {
    pFVar5 = pFVar14;
    do {
      if (*pFVar5 == param_1->TagName) {
        if (((pFVar14 <= param_1) && (param_1 < pFVar14 + (this->BlockInputAbilityList).ArrayMax))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->BlockInputAbilityList).ArrayNum;
        lVar10 = (longlong)iVar4;
        if (iVar4 != 0) {
          iVar12 = 0;
          pFVar14 = (FName *)(pTVar1->AllocatorInstance).Data;
          bVar3 = *pFVar14 != param_1->TagName;
          lVar11 = 0;
          iVar4 = 0;
          do {
            lVar11 = lVar11 + 1;
            iVar13 = iVar4 + 1;
            if (lVar11 < lVar10) {
              do {
                if (bVar3 != (pFVar14[lVar11] != param_1->TagName)) break;
                iVar13 = iVar13 + 1;
                lVar11 = lVar11 + 1;
              } while (lVar11 < lVar10);
            }
            if (bVar3 != false) {
              if (iVar12 != iVar4) {
                memmove(pFVar14 + iVar12,pFVar14 + iVar4,(longlong)(iVar13 - iVar4) << 3);
              }
              iVar12 = iVar12 + (iVar13 - iVar4);
            }
            bVar3 = (bool)(bVar3 ^ 1);
            iVar4 = iVar13;
          } while (lVar11 < lVar10);
          local_80->ArrayNum = iVar12;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar14 + iVar4);
  }
LAB_14b7c3b19:
  if ((this->BlockInputAbilityList).ArrayNum < 1) {
    local_d8[0] = Lock_Input;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    local_60 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_60);
    local_88 = local_a8;
    bVar3 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_88,
                       (void *)0x0);
    if (!bVar3) {
      pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_88);
      pFVar7 = FDS_GameplayTags::GetStateTag(local_d8);
      bVar3 = UWN_AbilitySystemComponent::HasTag(pUVar6,pFVar7);
      if (bVar3) {
        local_d8[1] = 0x24;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_AbilitySystemComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_a0.ObjectIndex = 0;
        local_a0.ObjectSerialNumber = 0;
        local_58 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_AbilitySystemComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_58);
        local_c8 = local_a0;
        bVar3 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_c8,
                           (void *)0x0);
        if (!bVar3) {
          pFVar7 = FDS_GameplayTags::GetStateTag(local_d8 + 1);
          pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_c8);
          UWN_AbilitySystemComponent::RemoveTag(pUVar6,pFVar7,-1);
          pUVar8 = FWeakObjectPtr::Get(&local_c8);
          local_50[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar8[0xe].field_0x10);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_50[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_50[0]);
          }
          local_98.ObjectIndex = 0;
          local_98.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_50[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_50[0]);
          }
          FWeakObjectPtr::operator=(&local_98,(FObjectPtr)local_50);
          pFVar9 = FDS_EntityBase::GetEntityBaseFromActor
                             ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_98);
          if ((pFVar9 != (FDS_EntityBase *)0x0) && (pFVar9->EntityType == MainCharacter)) {
            pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_c8);
            bVar3 = UWN_AbilitySystemComponent::HasTag(pUVar6,pFVar7);
            if ((bVar3) &&
               (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<2335328732794847282>,true,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AbilitySystemComponent.cpp"
                                   ,0x32,"InASC->HasTag(stateTag) == false"), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
    }
  }
  else {
    local_res18[0] = Lock_Input;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_78 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_78);
    local_90 = local_c0;
    bVar3 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_90,
                       (void *)0x0);
    if (!bVar3) {
      pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_90);
      pFVar7 = FDS_GameplayTags::GetStateTag(local_res18);
      bVar3 = UWN_AbilitySystemComponent::HasTag(pUVar6,pFVar7);
      if (bVar3) {
        return;
      }
    }
    local_res20[0] = Lock_Input;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    local_70 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AbilitySystemComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_70);
    local_d0 = local_b8;
    bVar3 = TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr> *)&local_d0,
                       (void *)0x0);
    if (!bVar3) {
      pFVar7 = FDS_GameplayTags::GetStateTag(local_res20);
      pUVar8 = FWeakObjectPtr::Get(&local_d0);
      local_68 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar8[0xe].field_0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_68);
      }
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_68);
      }
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_68);
      pFVar9 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_b0);
      if ((pFVar9 != (FDS_EntityBase *)0x0) && (pFVar9->EntityType == MainCharacter)) {
        pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_d0);
        bVar3 = UWN_AbilitySystemComponent::HasTag(pUVar6,pFVar7);
        if ((bVar3) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2335328732794847260>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AbilitySystemComponent.cpp"
                               ,0x1c,"InASC->HasTag(stateTag) == false"), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar6 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_d0);
      UWN_AbilitySystemComponent::AddTag(pUVar6,pFVar7,1);
      return;
    }
  }
  return;
}

// TryActivateAbilityByTag @ 14b7c69b0

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

bool __thiscall
UDS_AbilitySystemComponent::TryActivateAbilityByTag
          (UDS_AbilitySystemComponent *this,FGameplayTag *param_1,
          TObjectPtr<UWN_AbilityContext> param_2)

{
  TMap<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
  *this_00;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  FWN_AbilityInstanceHandle *pFVar7;
  TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> this_01;
  UObject *pUVar8;
  UClass *pUVar9;
  FDS_EntityBase *pFVar10;
  UDS_AbilityDataSet *this_02;
  undefined1 *puVar11;
  int iVar12;
  undefined1 auStackY_5a8 [32];
  FWeakObjectPtr local_568;
  FWeakObjectPtr local_560;
  FWeakObjectPtr local_558;
  FWeakObjectPtr local_550;
  undefined8 local_548;
  FWeakObjectPtr local_540;
  FWeakObjectPtr local_538;
  UObject *local_530;
  UObject *local_528;
  undefined8 local_520;
  undefined8 local_518;
  UObject *local_510;
  undefined8 local_508;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  undefined1 local_4d0 [264];
  FScriptContainerElement *local_3c8;
  wchar_t *local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  if (this->bIsRemoveAllAbilities == true) {
    return true;
  }
  FVar1 = param_1->TagName;
  local_548 = 0;
  if (FVar1 == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_3c8 = (FScriptContainerElement *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_4d0 + 8),
               "UDS_AbilitySystemComponent::TryActivateAbilityByTag",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3c0,0x5a,L"InAbilityTag is invalid.");
    local_500.Data.AllocatorInstance.Data = local_3c8;
  }
  else {
    this_00 = &this->AbilityInstHandleMap;
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->AbilityInstHandleMap).field_0x8 !=
        *(int *)&(this->AbilityInstHandleMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->AbilityInstHandleMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->AbilityInstHandleMap).field_0x38;
      }
      iVar12 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->AbilityInstHandleMap).field_0x48 - 1U & FVar1.Number + uVar5
                       ) * 4);
      if (iVar12 != -1) {
        do {
          if (*(FName *)((longlong)iVar12 * 0x20 + *(longlong *)this_00) == param_1->TagName) {
            if (iVar12 != -1) goto LAB_14b7c6b0f;
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)this_00);
        } while (iVar12 != -1);
      }
    }
    AddAbilityByTag(this,param_1);
LAB_14b7c6b0f:
    FVar1 = param_1->TagName;
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->AbilityInstHandleMap).field_0x8 !=
        *(int *)&(this->AbilityInstHandleMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->AbilityInstHandleMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->AbilityInstHandleMap).field_0x38;
      }
      iVar12 = *(int *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->AbilityInstHandleMap).field_0x48 - 1U & uVar5 + FVar1.Number
                       ) * 4);
      if (iVar12 != -1) {
        do {
          if (*(FName *)((longlong)iVar12 * 0x20 + *(longlong *)this_00) == param_1->TagName) {
            pFVar7 = TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
                                    *)this_00,param_1);
            if ((pFVar7->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar6 = UDS_LogManager::GetInst();
              ::FName::ToString(&param_1->TagName,&local_500);
              local_3a8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_3a8,"UDS_AbilitySystemComponent::TryActivateAbilityByTag",0x33,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Warning,local_3a8.Ptr,0x6e,L"AddAbilityByTag() failed. (%s)");
              if ((void *)local_3a8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_3a8._padding_);
              }
            }
            else {
              this_01 = UWN_AbilitySystemComponent::GetAbility
                                  ((UWN_AbilitySystemComponent *)this,
                                   (FWN_AbilityInstanceHandle *)local_4d0);
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
              if (pUVar8 == (UObject *)0x0) {
LAB_14b7c6d4c:
                pUVar8 = (UObject *)0x0;
              }
              else {
                pUVar9 = Z_Construct_UClass_UDS_GameplayAbility_NoRegister();
                iVar12 = (int)pUVar9->_padding_;
                if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar12) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar12 * 8)
                    != &pUVar9->_padding_)) goto LAB_14b7c6d4c;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar8);
              }
              local_560.ObjectIndex = 0;
              local_560.ObjectSerialNumber = 0;
              local_530 = pUVar8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar8);
              }
              FWeakObjectPtr::operator=(&local_560,(FObjectPtr)&local_530);
              bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_560,
                                 (void *)0x0);
              if (!bVar3) {
                pUVar8 = FWeakObjectPtr::Get(&local_560);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (*(UObject **)param_2.field0_0x0 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(*(UObject **)param_2.field0_0x0);
                }
                *(undefined8 *)&pUVar8[1].field_0x18 = *(undefined8 *)param_2.field0_0x0;
                pUVar8 = FWeakObjectPtr::Get(&local_560);
                if (pUVar8[1].field_0x8 == '\x01') {
                  pUVar8 = FWeakObjectPtr::Get(&local_560);
                  (**(code **)(*(longlong *)pUVar8 + 0x358))(pUVar8);
                  return true;
                }
                bVar3 = UWN_AbilitySystemComponent::TryActivateAbility
                                  ((UWN_AbilitySystemComponent *)this,pFVar7);
                if (bVar3) {
                  return true;
                }
                local_528 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_528 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_528);
                }
                local_550.ObjectIndex = 0;
                local_550.ObjectSerialNumber = 0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_528 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_528);
                }
                FWeakObjectPtr::operator=(&local_550,(FObjectPtr)&local_528);
                pFVar10 = FDS_EntityBase::GetEntityBaseFromActor
                                    ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_550);
                if (pFVar10 != (FDS_EntityBase *)0x0) {
                  TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_540);
                  bVar3 = TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> *)&local_540
                                     ,(void *)0x0);
                  if (bVar3) {
                    local_568.ObjectIndex = 0;
                    local_568.ObjectSerialNumber = 0;
                    local_520 = 0;
                    FWeakObjectPtr::operator=(&local_568,(FObjectPtr)&local_520);
                  }
                  else {
                    this_02 = (UDS_AbilityDataSet *)FWeakObjectPtr::Get(&local_540);
                    UDS_AbilityDataSet::FindOrAddAbilityData(this_02,(FGameplayTag *)&local_538);
                    bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                                      ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_538,
                                       (void *)0x0);
                    if (bVar3) {
                      local_568.ObjectIndex = 0;
                      local_568.ObjectSerialNumber = 0;
                      local_518 = 0;
                      FWeakObjectPtr::operator=(&local_568,(FObjectPtr)&local_518);
                    }
                    else {
                      local_510 = FWeakObjectPtr::Get(&local_538);
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (local_510 != (UObject *)0x0)) {
                        UE::GC::MarkAsReachable(local_510);
                      }
                      local_558.ObjectIndex = 0;
                      local_558.ObjectSerialNumber = 0;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (local_510 != (UObject *)0x0)) {
                        UE::GC::MarkAsReachable(local_510);
                      }
                      FWeakObjectPtr::operator=(&local_558,(FObjectPtr)&local_510);
                      bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                                        ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)
                                         &local_558,(void *)0x0);
                      if (bVar3) {
                        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<7240961574226100306>,false,
                                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_AbilityData.h"
                                           ,0x52,"false");
                        if (bVar3) {
                          pcVar2 = (code *)swi(3);
                          uVar4 = (*pcVar2)();
                          return (bool)uVar4;
                        }
                        local_568.ObjectIndex = 0;
                        local_568.ObjectSerialNumber = 0;
                        local_508 = 0;
                        FWeakObjectPtr::operator=(&local_568,(FObjectPtr)&local_508);
                      }
                      else {
                        local_568 = local_558;
                      }
                    }
                  }
                  bVar3 = TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_AbilityData,FWeakObjectPtr> *)&local_568,
                                     (void *)0x0);
                  if (!bVar3) {
                    pUVar8 = FWeakObjectPtr::Get(&local_568);
                    (**(code **)(*(longlong *)pUVar8 + 0x2c8))(pUVar8);
                    return false;
                  }
                  return false;
                }
                return false;
              }
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar6 = UDS_LogManager::GetInst();
              ::FName::ToString(&param_1->TagName,&local_4f0);
              local_288._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_288,"UDS_AbilitySystemComponent::TryActivateAbilityByTag",0x33,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Warning,local_288.Ptr,0x75,L"AddAbilityByTag() failed. (%s)");
              local_500.Data.AllocatorInstance.Data = local_4f0.Data.AllocatorInstance.Data;
              if ((void *)local_288._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_288._padding_);
                local_500.Data.AllocatorInstance.Data = local_4f0.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_14b7c6c09;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)this_00);
        } while (iVar12 != -1);
      }
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    ::FName::ToString(&param_1->TagName,&local_4e0);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_AbilitySystemComponent::TryActivateAbilityByTag",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x67,L"AddAbilityByTag() failed. (%s)");
    local_500.Data.AllocatorInstance.Data = local_4e0.Data.AllocatorInstance.Data;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      local_500.Data.AllocatorInstance.Data = local_4e0.Data.AllocatorInstance.Data;
    }
  }
LAB_14b7c6c09:
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  return false;
}

