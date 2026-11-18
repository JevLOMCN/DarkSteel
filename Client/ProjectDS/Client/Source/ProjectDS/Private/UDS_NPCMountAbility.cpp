// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5481c0

UClass * __cdecl UDS_NPCMountAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountAbility",
               &Z_Registration_Info_UClass_UDS_NPCMountAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountAbility,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCMountAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCMountAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountAbility.InnerSingleton;
}

// UDS_NPCMountAbility @ 14b54a540

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

UDS_NPCMountAbility * __thiscall
UDS_NPCMountAbility::UDS_NPCMountAbility(UDS_NPCMountAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->ActiveStateTagMap = 0;
  *(undefined8 *)&(this->ActiveStateTagMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveStateTagMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveStateTagMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x48 = 0;
  this->IsMounting = false;
  this->IsDespawn = false;
  this->IsDisappearStart = false;
  this->IsDisappearOpacityReverse = false;
  this->DisappearTime = 0.0;
  this->ElapsedDisappearTime = 0.0;
  this->MountOwnerEntityID = 0;
  (this->DisMountActionTimerHandle).Handle = 0;
  return this;
}

// UDS_NPCMountAbility @ 14b54a5e0

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

UDS_NPCMountAbility * __thiscall
UDS_NPCMountAbility::UDS_NPCMountAbility(UDS_NPCMountAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->ActiveStateTagMap = 0;
  *(undefined8 *)&(this->ActiveStateTagMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveStateTagMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveStateTagMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x48 = 0;
  this->IsMounting = false;
  this->IsDespawn = false;
  this->IsDisappearStart = false;
  this->IsDisappearOpacityReverse = false;
  this->DisappearTime = 0.0;
  this->ElapsedDisappearTime = 0.0;
  this->MountOwnerEntityID = 0;
  (this->DisMountActionTimerHandle).Handle = 0;
  return this;
}

// ~UDS_NPCMountAbility @ 14b54b3a0

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

void __thiscall UDS_NPCMountAbility::~UDS_NPCMountAbility(UDS_NPCMountAbility *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveStateTagMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveStateTagMap);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b54c740

UClass * __cdecl UDS_NPCMountAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountAbility",
               &Z_Registration_Info_UClass_UDS_NPCMountAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountAbility,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCMountAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCMountAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b54d720

bool __thiscall UDS_NPCMountAbility::ShouldTickComponent(UDS_NPCMountAbility *this)

{
  return this->IsDisappearStart;
}

// StaticRegisterNativesUDS_NPCMountAbility @ 14b54d730

void __cdecl UDS_NPCMountAbility::StaticRegisterNativesUDS_NPCMountAbility(void)

{
  return;
}

// operator() @ 14b823670

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall `UDS_NPCMountAbility::SetDespawn'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UDS_GameplayAbility *this_00;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  ADS_NPC *this_01;
  FDS_NpcBaseTableRow *pFVar6;
  undefined1 auStackY_188 [32];
  EDS_StateTagType local_158 [8];
  FWeakObjectPtr local_150;
  UObject *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = *(UDS_GameplayAbility **)this;
  if (*(char *)((longlong)&this_00[1]._padding_ + 1) == '\0') {
    local_158[0] = Mount_Fly;
    UDS_GameplayAbility::RemoveStateTagToASC(this_00,local_158);
    local_158[0] = AirWalk_Falling;
    UDS_GameplayAbility::RemoveStateTagToASC(*(UDS_GameplayAbility **)this,local_158);
    local_158[0] = AirWalk_Jump02;
    UDS_GameplayAbility::RemoveStateTagToASC(*(UDS_GameplayAbility **)this,local_158);
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this_00->OwnerActor).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b82371e;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b82371e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_148[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)local_148);
  bVar2 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCMountAbility::SetDespawn::<lambda_1>::operator ()",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xd6,L"npcSourceEntity is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_01 = (ADS_NPC *)FWeakObjectPtr::Get(&local_150);
    pFVar6 = ADS_NPC::GetNpcBaseTable(this_01);
    *(float *)(*(longlong *)this + 0x1ac) = pFVar6->DisappearClearTime;
    *(undefined4 *)(*(longlong *)this + 0x1b0) = 0;
    local_148[0] = (UObject *)CONCAT44(local_148[0]._4_4_,0x3f800000);
    FDS_EntityBase::SetMaterialOpacity
              (*(FDS_EntityBase **)(*(longlong *)this + 200),(float *)local_148);
    *(undefined1 *)(*(longlong *)this + 0x1ab) = 0;
    *(undefined1 *)(*(longlong *)this + 0x1aa) = 1;
  }
  return;
}

// AddStateTagMap @ 14b824c90

void __thiscall UDS_NPCMountAbility::AddStateTagMap(UDS_NPCMountAbility *this,FGameplayTag *param_1)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  FName FVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_res8 [4];
  FGameplayTag *local_18;
  undefined4 *local_10;
  
  FVar1 = param_1->TagName;
  this_00 = &this->ActiveStateTagMap;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ActiveStateTagMap).field_0x8 != *(int *)&(this->ActiveStateTagMap).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->ActiveStateTagMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ActiveStateTagMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ActiveStateTagMap).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x14) ==
            param_1->TagName) {
          if (iVar5 != -1) {
            piVar3 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                    *)this_00,param_1);
            *piVar3 = *piVar3 + 1;
            return;
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  local_10 = local_res8;
  local_res8[0] = 1;
  local_18 = param_1;
  TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGameplayTag_const_&,int_&&>_>
            ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FGameplayTag_const_&,int_&&> *)(local_res8 + 2),
             (bool *)&local_18);
  return;
}

// ContextUpdate @ 14b828730

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

void __thiscall UDS_NPCMountAbility::ContextUpdate(UDS_NPCMountAbility *this)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  undefined8 uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  int *piVar9;
  FName *pFVar10;
  UDS_NPCMountData *this_01;
  UDS_CharStateData *this_02;
  FGameplayTag *pFVar11;
  undefined1 *puVar12;
  float fVar13;
  float local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  UDS_NPCMountAbility *local_38 [2];
  
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar5) {
    return;
  }
  if (this->IsMounting == false) {
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar8[1].field_0x8 == '\x01') {
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,(FGameplayTag *)(pUVar8 + 1));
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    AddStateTagMap(this,(FGameplayTag *)(pUVar8 + 1));
  }
  else {
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)(pUVar8 + 1));
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    uVar1 = *(undefined8 *)(pUVar8 + 1);
    this_00 = &this->ActiveStateTagMap;
    pUVar8 = pUVar8 + 1;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    if (*(int *)&(this->ActiveStateTagMap).field_0x8 !=
        *(int *)&(this->ActiveStateTagMap).field_0x34) {
      puVar12 = *(undefined1 **)&(this->ActiveStateTagMap).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->ActiveStateTagMap).field_0x38;
      }
      iVar7 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ActiveStateTagMap).field_0x48 - 1U &
                      (int)((ulonglong)uVar1 >> 0x20) + uVar6) * 4);
      if (iVar7 != -1) {
        FVar2.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x0;
        FVar2.Number = *(uint *)&pUVar8->field_0x4;
        do {
          if (*(FName *)(*(longlong *)this_00 + (longlong)iVar7 * 0x14) == FVar2) {
            piVar9 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                    *)this_00,(FGameplayTag *)pUVar8);
            if (0 < *piVar9) {
              piVar9 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                       ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                      *)this_00,(FGameplayTag *)pUVar8);
              *piVar9 = *piVar9 + -1;
            }
            break;
          }
          iVar7 = *(int *)(*(longlong *)this_00 + 0xc + (longlong)iVar7 * 0x14);
        } while (iVar7 != -1);
      }
    }
  }
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&local_res20,
                     (void *)0x0);
  if ((!bVar5) && (pUVar8 = FWeakObjectPtr::Get(&local_res20), pUVar8[1].field_0x8 != '\0')) {
    pUVar8 = FWeakObjectPtr::Get(&local_res20);
    local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,0x6e);
    pFVar10 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10)->TagName;
    FVar3.ComparisonIndex.Value = *(uint *)&pUVar8[1].field_0x0;
    FVar3.Number = *(uint *)&pUVar8[1].field_0x4;
    if (FVar3 == *pFVar10) {
      FDS_MountBaseTableRow::GetRefByEntityID(this->_padding_,true);
      fVar13 = DS_CommonDataHelper::MountDissolveTime();
      this->DisappearTime = fVar13;
      this->ElapsedDisappearTime = 0.0;
      local_res10[0] = 0.0;
      FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res10);
      this->IsDisappearStart = true;
      this->IsDisappearOpacityReverse = true;
    }
  }
  local_res10[0]._0_1_ = 0x7a;
  bVar5 = UDS_GameplayAbility::HasStateTag
                    ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
  if (!bVar5) goto LAB_14b828a2d;
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&local_res20,
                     (void *)0x0);
  if (bVar5) goto LAB_14b828a2d;
  pUVar8 = FWeakObjectPtr::Get(&local_res20);
  this->IsDespawn = (bool)pUVar8[1].field_0x1c;
  UDS_NPCMountData::GetData((ulong64)&local_48);
  bVar5 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_48,(void *)0x0);
  if (bVar5) goto LAB_14b828a2d;
  local_res10[0]._0_1_ = 0x73;
  local_38[0] = this;
  bVar5 = UDS_GameplayAbility::HasStateTag
                    ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
  if (bVar5) {
LAB_14b828988:
    local_res10[0]._0_1_ = 0x7a;
    bVar5 = UDS_GameplayAbility::HasStateTag
                      ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
    if (!bVar5) goto LAB_14b8289a0;
  }
  else {
    local_res10[0]._0_1_ = 0x2c;
    bVar5 = UDS_GameplayAbility::HasStateTag
                      ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
    if (bVar5) goto LAB_14b828988;
LAB_14b8289a0:
    this_01 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_48);
    UDS_NPCMountData::GetDriverEntityID(this_01);
    UDS_CharStateData::GetData((ulong64)&local_40);
    bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_40,(void *)0x0);
    if (bVar5) goto LAB_14b828a2d;
    this_02 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_40);
    local_res10[0]._0_1_ = 0x22;
    local_res10[0]._1_3_ = 0;
    bVar5 = UDS_CharStateData::HasCharDetailState(this_02,(EDS_CharDetailState *)local_res10);
    if (!bVar5) goto LAB_14b828a2d;
    if (this->IsDespawn == true) {
      local_res10[0]._0_1_ = 0x2c;
      pFVar11 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar11);
      local_res10[0]._0_1_ = 0x2c;
      pFVar11 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10);
      AddStateTagMap(this,pFVar11);
    }
  }
  `UDS_NPCMountAbility::SetDespawn'::__l2::<lambda_1>::operator()(local_38);
LAB_14b828a2d:
  pUVar8 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar8[1].field_0x8 == '\x01') {
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,0x7a);
    pFVar10 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10)->TagName;
    FVar4.ComparisonIndex.Value = *(uint *)&pUVar8[1].field_0x0;
    FVar4.Number = *(uint *)&pUVar8[1].field_0x4;
    if (FVar4 == *pFVar10) {
      this->IsMounting = false;
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b837ab0

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

void __thiscall UDS_NPCMountAbility::OnAbilityRetryActivate(UDS_NPCMountAbility *this)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  undefined8 uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  int *piVar9;
  FName *pFVar10;
  UDS_NPCMountData *this_01;
  UDS_CharStateData *this_02;
  FGameplayTag *pFVar11;
  undefined1 *puVar12;
  float fVar13;
  float afStackX_10 [2];
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_48;
  FWeakObjectPtr FStack_40;
  UDS_NPCMountAbility *apUStack_38 [2];
  
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&FStackX_18,
                     (void *)0x0);
  if (bVar5) {
    return;
  }
  if (this->IsMounting == false) {
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
  if (pUVar8[1].field_0x8 == '\x01') {
    pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,(FGameplayTag *)(pUVar8 + 1));
    pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
    AddStateTagMap(this,(FGameplayTag *)(pUVar8 + 1));
  }
  else {
    pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)(pUVar8 + 1));
    pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
    uVar1 = *(undefined8 *)(pUVar8 + 1);
    this_00 = &this->ActiveStateTagMap;
    pUVar8 = pUVar8 + 1;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    if (*(int *)&(this->ActiveStateTagMap).field_0x8 !=
        *(int *)&(this->ActiveStateTagMap).field_0x34) {
      puVar12 = *(undefined1 **)&(this->ActiveStateTagMap).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->ActiveStateTagMap).field_0x38;
      }
      iVar7 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ActiveStateTagMap).field_0x48 - 1U &
                      (int)((ulonglong)uVar1 >> 0x20) + uVar6) * 4);
      if (iVar7 != -1) {
        FVar2.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x0;
        FVar2.Number = *(uint *)&pUVar8->field_0x4;
        do {
          if (*(FName *)(*(longlong *)this_00 + (longlong)iVar7 * 0x14) == FVar2) {
            piVar9 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                     ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                    *)this_00,(FGameplayTag *)pUVar8);
            if (0 < *piVar9) {
              piVar9 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                       ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                      *)this_00,(FGameplayTag *)pUVar8);
              *piVar9 = *piVar9 + -1;
            }
            break;
          }
          iVar7 = *(int *)(*(longlong *)this_00 + 0xc + (longlong)iVar7 * 0x14);
        } while (iVar7 != -1);
      }
    }
  }
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&FStackX_20,
                     (void *)0x0);
  if ((!bVar5) && (pUVar8 = FWeakObjectPtr::Get(&FStackX_20), pUVar8[1].field_0x8 != '\0')) {
    pUVar8 = FWeakObjectPtr::Get(&FStackX_20);
    afStackX_10[0] = (float)CONCAT31(afStackX_10[0]._1_3_,0x6e);
    pFVar10 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)afStackX_10)->TagName;
    FVar3.ComparisonIndex.Value = *(uint *)&pUVar8[1].field_0x0;
    FVar3.Number = *(uint *)&pUVar8[1].field_0x4;
    if (FVar3 == *pFVar10) {
      FDS_MountBaseTableRow::GetRefByEntityID(this->_padding_,true);
      fVar13 = DS_CommonDataHelper::MountDissolveTime();
      this->DisappearTime = fVar13;
      this->ElapsedDisappearTime = 0.0;
      afStackX_10[0] = 0.0;
      FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,afStackX_10);
      this->IsDisappearStart = true;
      this->IsDisappearOpacityReverse = true;
    }
  }
  afStackX_10[0]._0_1_ = 0x7a;
  bVar5 = UDS_GameplayAbility::HasStateTag
                    ((UDS_GameplayAbility *)this,(EDS_StateTagType *)afStackX_10);
  if (!bVar5) goto LAB_14b828a2d;
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar5 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&FStackX_20,
                     (void *)0x0);
  if (bVar5) goto LAB_14b828a2d;
  pUVar8 = FWeakObjectPtr::Get(&FStackX_20);
  this->IsDespawn = (bool)pUVar8[1].field_0x1c;
  UDS_NPCMountData::GetData((ulong64)&FStack_48);
  bVar5 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&FStack_48,(void *)0x0);
  if (bVar5) goto LAB_14b828a2d;
  afStackX_10[0]._0_1_ = 0x73;
  apUStack_38[0] = this;
  bVar5 = UDS_GameplayAbility::HasStateTag
                    ((UDS_GameplayAbility *)this,(EDS_StateTagType *)afStackX_10);
  if (bVar5) {
LAB_14b828988:
    afStackX_10[0]._0_1_ = 0x7a;
    bVar5 = UDS_GameplayAbility::HasStateTag
                      ((UDS_GameplayAbility *)this,(EDS_StateTagType *)afStackX_10);
    if (!bVar5) goto LAB_14b8289a0;
  }
  else {
    afStackX_10[0]._0_1_ = 0x2c;
    bVar5 = UDS_GameplayAbility::HasStateTag
                      ((UDS_GameplayAbility *)this,(EDS_StateTagType *)afStackX_10);
    if (bVar5) goto LAB_14b828988;
LAB_14b8289a0:
    this_01 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&FStack_48);
    UDS_NPCMountData::GetDriverEntityID(this_01);
    UDS_CharStateData::GetData((ulong64)&FStack_40);
    bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&FStack_40,(void *)0x0);
    if (bVar5) goto LAB_14b828a2d;
    this_02 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStack_40);
    afStackX_10[0]._0_1_ = 0x22;
    afStackX_10[0]._1_3_ = 0;
    bVar5 = UDS_CharStateData::HasCharDetailState(this_02,(EDS_CharDetailState *)afStackX_10);
    if (!bVar5) goto LAB_14b828a2d;
    if (this->IsDespawn == true) {
      afStackX_10[0]._0_1_ = 0x2c;
      pFVar11 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)afStackX_10);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar11);
      afStackX_10[0]._0_1_ = 0x2c;
      pFVar11 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)afStackX_10);
      AddStateTagMap(this,pFVar11);
    }
  }
  `UDS_NPCMountAbility::SetDespawn'::__l2::<lambda_1>::operator()(apUStack_38);
LAB_14b828a2d:
  pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
  if (pUVar8[1].field_0x8 == '\x01') {
    pUVar8 = FWeakObjectPtr::Get(&FStackX_18);
    afStackX_10[0] = (float)CONCAT31(afStackX_10[0]._1_3_,0x7a);
    pFVar10 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)afStackX_10)->TagName;
    FVar4.ComparisonIndex.Value = *(uint *)&pUVar8[1].field_0x0;
    FVar4.Number = *(uint *)&pUVar8[1].field_0x4;
    if (FVar4 == *pFVar10) {
      this->IsMounting = false;
    }
  }
  return;
}

// OnCanActivate @ 14b839520

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

bool __thiscall UDS_NPCMountAbility::OnCanActivate(UDS_NPCMountAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)local_res10,
                     (void *)0x0);
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  this->MountOwnerEntityID = *(ulong64 *)&pUVar2[1].field_0x10;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83f100

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

void __thiscall UDS_NPCMountAbility::OnDeactivateAbility(UDS_NPCMountAbility *this,bool *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x250),this);
  puVar2 = &(this->ActiveStateTagMap).field_0x10;
  iVar10 = 0;
  iVar3 = *(int *)&(this->ActiveStateTagMap).field_0x28;
  this_00 = &this->ActiveStateTagMap;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->ActiveStateTagMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14b83f1bd;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14b83f1bd:
  uVar9 = *(uint *)&(this->ActiveStateTagMap).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ActiveStateTagMap).field_0x8 -
                       *(int *)&(this->ActiveStateTagMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ActiveStateTagMap).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->ActiveStateTagMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14b83f2d0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14b83f2d0:
  while( true ) {
    if (*(int *)&(this->ActiveStateTagMap).field_0x8 - *(int *)&(this->ActiveStateTagMap).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,
               (FGameplayTag *)
               (*(longlong *)&this_00->field_0x0 + (longlong)TStack_60.CurrentBitIndex * 0x14));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->ActiveStateTagMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->ActiveStateTagMap).field_0xc;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->ActiveStateTagMap).field_0x2c;
  *(undefined4 *)&(this->ActiveStateTagMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ActiveStateTagMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveStateTagMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ActiveStateTagMap).field_0x48 = 1;
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// OnPostActivateAbility @ 14b843e90

void __thiscall UDS_NPCMountAbility::OnPostActivateAbility(UDS_NPCMountAbility *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x250),this);
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_NPCMountAbility>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)(this->_padding_ + 0x250),(UDS_NPCMountAbility *)&stack0x00000008,
             (pmf_3ec27401 *)this);
  this->IsMounting = true;
  this->IsDespawn = false;
  ContextUpdate(this);
  return;
}

// OnRemoveEntity @ 14b846e00

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
UDS_NPCMountAbility::OnRemoveEntity(UDS_NPCMountAbility *this,FDS_EntityBase *param_1)

{
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148;
  EDS_AbilityTagType local_147 [15];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (((param_1 != (FDS_EntityBase *)0x0) &&
      (local_18 = __security_cookie.value ^ (ulonglong)auStackY_188, this->IsMounting != false)) &&
     (this_00 = FDS_EntityBase::GetEntityBase(&this->MountOwnerEntityID),
     this_00 != (FDS_EntityBase *)0x0)) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NPCMountAbility::OnRemoveEntity",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x98,L"Invalid DisMount (%dll)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148 = Cancel;
    local_147[0] = Mount;
    FDS_EntityBase::DeactivateAbility(this_00,local_147,&local_148);
  }
  return;
}

// OnTickComponent @ 14b849190

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

void __thiscall UDS_NPCMountAbility::OnTickComponent(UDS_NPCMountAbility *this,float param_1)

{
  float fVar1;
  float local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if ((this->IsDisappearStart != false) && (this->DisappearTime != 0.0)) {
    fVar1 = param_1 + this->ElapsedDisappearTime;
    this->ElapsedDisappearTime = fVar1;
    fVar1 = fVar1 / this->DisappearTime;
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_res8[0] = fVar1;
    if (this->IsDisappearOpacityReverse == false) {
      local_res8[0] = __real_3f800000 - fVar1;
    }
    FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res8);
    if (__real_3f800000 <= fVar1) {
      this->IsDisappearStart = false;
    }
  }
  return;
}

// RemoveStateTagMap @ 14b84d320

void __thiscall
UDS_NPCMountAbility::RemoveStateTagMap(UDS_NPCMountAbility *this,FGameplayTag *param_1)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  FName FVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  FVar1 = param_1->TagName;
  this_00 = &this->ActiveStateTagMap;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ActiveStateTagMap).field_0x8 != *(int *)&(this->ActiveStateTagMap).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->ActiveStateTagMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ActiveStateTagMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ActiveStateTagMap).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      while (*(FName *)(*(longlong *)this_00 + (longlong)iVar3 * 0x14) != param_1->TagName) {
        iVar3 = *(int *)(*(longlong *)this_00 + 0xc + (longlong)iVar3 * 0x14);
        if (iVar3 == -1) {
          return;
        }
      }
      piVar4 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
               ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                              *)this_00,param_1);
      if (0 < *piVar4) {
        piVar4 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                 ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                *)this_00,param_1);
        *piVar4 = *piVar4 + -1;
      }
    }
  }
  return;
}

// SetDespawn @ 14b84f500

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

void __thiscall UDS_NPCMountAbility::SetDespawn(UDS_NPCMountAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_NPCMountData *this_00;
  UDS_CharStateData *this_01;
  FGameplayTag *pFVar3;
  EDS_CharDetailState local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  UDS_NPCMountAbility *local_10;
  
  local_res10[0]._0_1_ = NPCClientControl_Hide;
  bVar1 = UDS_GameplayAbility::HasStateTag
                    ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
  if (!bVar1) {
    return;
  }
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  this->IsDespawn = (bool)pUVar2[1].field_0x1c;
  UDS_NPCMountData::GetData((ulong64)&local_res20);
  bVar1 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar1) {
    return;
  }
  local_res10[0]._0_1_ = CharSwitch;
  local_10 = this;
  bVar1 = UDS_GameplayAbility::HasStateTag
                    ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
  if (bVar1) {
LAB_14b84f5a6:
    local_res10[0]._0_1_ = NPCClientControl_Hide;
    bVar1 = UDS_GameplayAbility::HasStateTag
                      ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
    if (bVar1) goto LAB_14b84f642;
  }
  else {
    local_res10[0]._0_1_ = Sleep;
    bVar1 = UDS_GameplayAbility::HasStateTag
                      ((UDS_GameplayAbility *)this,(EDS_StateTagType *)local_res10);
    if (bVar1) goto LAB_14b84f5a6;
  }
  this_00 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_res20);
  UDS_NPCMountData::GetDriverEntityID(this_00);
  UDS_CharStateData::GetData((ulong64)&local_18);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_18,(void *)0x0);
  if (bVar1) {
    return;
  }
  this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_18);
  local_res10[0]._0_1_ = Falling;
  local_res10[0]._1_3_ = None >> 8;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_01,local_res10);
  if (!bVar1) {
    return;
  }
  if (this->IsDespawn == bVar1) {
    local_res10[0]._0_1_ = Sleep;
    pFVar3 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10);
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
    local_res10[0]._0_1_ = Sleep;
    pFVar3 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10);
    AddStateTagMap(this,pFVar3);
  }
LAB_14b84f642:
  `UDS_NPCMountAbility::SetDespawn'::__l2::<lambda_1>::operator()(&local_10);
  return;
}

// SetReady @ 14b850070

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

void __thiscall UDS_NPCMountAbility::SetReady(UDS_NPCMountAbility *this)

{
  FName FVar1;
  bool bVar2;
  UObject *pUVar3;
  FName *pFVar4;
  float fVar5;
  float local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  UDS_GameplayAbility::GetContextData<UDS_NPCMountAbilityContext>((UDS_GameplayAbility *)this);
  bVar2 = TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountAbilityContext,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (pUVar3[1].field_0x8 != '\0') {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,0x6e);
      pFVar4 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res10)->TagName;
      FVar1.ComparisonIndex.Value = *(uint *)&pUVar3[1].field_0x0;
      FVar1.Number = *(uint *)&pUVar3[1].field_0x4;
      if (FVar1 == *pFVar4) {
        FDS_MountBaseTableRow::GetRefByEntityID(this->_padding_,true);
        fVar5 = DS_CommonDataHelper::MountDissolveTime();
        this->DisappearTime = fVar5;
        this->ElapsedDisappearTime = 0.0;
        local_res10[0] = 0.0;
        FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res10);
        this->IsDisappearStart = true;
        this->IsDisappearOpacityReverse = true;
      }
    }
  }
  return;
}

// TryActivate @ 14b852f00

bool __cdecl UDS_NPCMountAbility::TryActivate(ulong64 param_1)

{
  return false;
}

// UpdateDisappearProcess @ 14b856d40

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

void __thiscall UDS_NPCMountAbility::UpdateDisappearProcess(UDS_NPCMountAbility *this,float param_1)

{
  float fVar1;
  float local_res8 [8];
  
  if ((this->IsDisappearStart != false) && (this->DisappearTime != 0.0)) {
    fVar1 = param_1 + this->ElapsedDisappearTime;
    this->ElapsedDisappearTime = fVar1;
    fVar1 = fVar1 / this->DisappearTime;
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_res8[0] = fVar1;
    if (this->IsDisappearOpacityReverse == false) {
      local_res8[0] = __real_3f800000 - fVar1;
    }
    FDS_EntityBase::SetMaterialOpacity((FDS_EntityBase *)this->_padding_,local_res8);
    if (__real_3f800000 <= fVar1) {
      this->IsDisappearStart = false;
    }
  }
  return;
}

