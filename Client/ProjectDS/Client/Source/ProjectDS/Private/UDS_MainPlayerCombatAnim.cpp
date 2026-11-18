// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b4e5ca0

UClass * __cdecl UDS_MainPlayerCombatAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerCombatAnim",
               &Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerCombatAnim,0x870,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerCombatAnim>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerCombatAnim>,local_res8,
               UDS_BattleAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton;
}

// UDS_MainPlayerCombatAnim @ 14b4e9070

UDS_MainPlayerCombatAnim * __thiscall
UDS_MainPlayerCombatAnim::UDS_MainPlayerCombatAnim
          (UDS_MainPlayerCombatAnim *this,FVTableHelper *param_1)

{
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
  *(undefined ***)this = &___7UDS_MainPlayerCombatAnim__6B_;
  *(undefined8 *)&this->WeaponAnimLayerDescriptorMap = 0;
  *(undefined8 *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 = 0;
  *(undefined8 *)&(this->WeaponAnimLayerDescriptorMap).field_0x20 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x28 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x34 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeaponAnimLayerDescriptorMap).field_0x40 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x48 = 0;
  *(undefined8 *)&this->WeaponAnimLayerInstanceMap = 0;
  *(undefined8 *)&(this->WeaponAnimLayerInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->WeaponAnimLayerInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x34 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeaponAnimLayerInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->UnlinkWeaponAnimLayerTimerMap = 0;
  *(undefined8 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 = 0;
  this->CurWeaponType = None;
  this->PreWeaponType = None;
  return this;
}

// ~UDS_MainPlayerCombatAnim @ 14b4e9d70

void __thiscall UDS_MainPlayerCombatAnim::~UDS_MainPlayerCombatAnim(UDS_MainPlayerCombatAnim *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7UDS_MainPlayerCombatAnim__6B_;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UnlinkWeaponAnimLayerTimerMap);
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WeaponAnimLayerInstanceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,UAnimInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,UAnimInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->WeaponAnimLayerInstanceMap);
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WeaponAnimLayerDescriptorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->WeaponAnimLayerDescriptorMap);
  UDS_BattleAnim::~UDS_BattleAnim((UDS_BattleAnim *)this);
  return;
}

// GetPrivateStaticClass @ 14b4ebbd0

UClass * __cdecl UDS_MainPlayerCombatAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainPlayerCombatAnim",
               &Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton,
               StaticRegisterNativesUDS_MainPlayerCombatAnim,0x870,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainPlayerCombatAnim>,
               InternalVTableHelperCtorCaller<UDS_MainPlayerCombatAnim>,local_res8,
               UDS_BattleAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainPlayerCombatAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_MainPlayerCombatAnim @ 14b4ec260

void __cdecl UDS_MainPlayerCombatAnim::StaticRegisterNativesUDS_MainPlayerCombatAnim(void)

{
  return;
}

// UDS_MainPlayerCombatAnim @ 14b864f80

UDS_MainPlayerCombatAnim * __thiscall
UDS_MainPlayerCombatAnim::UDS_MainPlayerCombatAnim
          (UDS_MainPlayerCombatAnim *this,FObjectInitializer *param_1)

{
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
  *(undefined ***)this = &___7UDS_MainPlayerCombatAnim__6B_;
  *(undefined8 *)&this->WeaponAnimLayerDescriptorMap = 0;
  *(undefined8 *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 = 0;
  *(undefined8 *)&(this->WeaponAnimLayerDescriptorMap).field_0x20 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x28 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x34 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeaponAnimLayerDescriptorMap).field_0x40 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerDescriptorMap).field_0x48 = 0;
  *(undefined8 *)&this->WeaponAnimLayerInstanceMap = 0;
  *(undefined8 *)&(this->WeaponAnimLayerInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->WeaponAnimLayerInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x34 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeaponAnimLayerInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x48 = 0;
  *(undefined8 *)&this->UnlinkWeaponAnimLayerTimerMap = 0;
  *(undefined8 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 = 0;
  *(undefined8 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x20 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x28 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x40 = 0;
  *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 = 0;
  this->CurWeaponType = None;
  this->PreWeaponType = None;
  return this;
}

// IsValidReferencedPtr @ 14b87ebc0

bool __thiscall UDS_MainPlayerCombatAnim::IsValidReferencedPtr(UDS_MainPlayerCombatAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_BattleAnim::IsValidReferencedPtr((UDS_BattleAnim *)this);
  return bVar1;
}

// LinkWeaponAnimLayer @ 14b87f0a0

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
UDS_MainPlayerCombatAnim::LinkWeaponAnimLayer
          (UDS_MainPlayerCombatAnim *this,EDS_WeaponType param_1,FDS_AnimLayerDescriptor *param_2)

{
  TMap<EDS_WeaponType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FTimerHandle,0>_>
  *this_00;
  longlong lVar1;
  UClass *pUVar2;
  bool bVar3;
  int iVar4;
  FTimerHandle *pFVar5;
  FTimerManager *this_01;
  FTimerData *pFVar6;
  TObjectPtr<UClass>_u_0 TVar7;
  UClass *pUVar8;
  USkeletalMeshComponent *pUVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  TObjectPtr<UClass>_u_0 local_res8;
  EDS_WeaponType local_res10 [16];
  FWeakObjectPtr local_res20;
  FTimerHandle local_48;
  UAnimInstance **local_40;
  UAnimInstance *local_38 [2];
  
  this_00 = &this->UnlinkWeaponAnimLayerTimerMap;
  uVar11 = (ulonglong)param_1;
  local_res10[0] = param_1;
  if (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 !=
      *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->UnlinkWeaponAnimLayerTimerMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 - 1 & uVar11) * 4);
    if (iVar4 != -1) {
      do {
        if (*(EDS_WeaponType *)(*(longlong *)this_00 + (longlong)iVar4 * 0x18) == param_1) {
          pFVar5 = TMapBase<enum_EDS_WeaponType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>_>
                   ::FindChecked(this_00,param_1);
          local_48.Handle = pFVar5->Handle;
          this_01 = FDS_TimerManager::Get((UObject *)0x0);
          pFVar6 = FTimerManager::FindTimer(this_01,&local_48);
          if (pFVar6 != (FTimerData *)0x0) {
            FTimerManager::InternalClearTimer(this_01,local_48);
          }
          uVar11 = (ulonglong)local_res10[0];
          local_res8._0_1_ = local_res10[0];
          local_48.Handle = 0;
          if (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 !=
              *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34) {
            TSet<TTuple<enum_EDS_WeaponType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EDS_WeaponType>
                      (this_00,(uint)local_res10[0],(EDS_WeaponType *)&local_res8);
            uVar11 = (ulonglong)local_res10[0];
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->WeaponAnimLayerInstanceMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->WeaponAnimLayerInstanceMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x48 - 1 & uVar11) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->WeaponAnimLayerInstanceMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar4 * 0x18) == (char)uVar11) {
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  TVar7.DebugPtr = (UClass *)UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((USkeletalMeshComponent *)TVar7.DebugPtr != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res8.DebugPtr = TVar7.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((USkeletalMeshComponent *)TVar7.DebugPtr != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (((bVar3) &&
      (pUVar2 = (param_2->LayerClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) &&
     (pUVar8 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar4 = (int)pUVar8->_padding_;
    if (((int)pUVar2->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar4 * 8) != &pUVar8->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((param_2->LayerClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      pUVar9 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res20);
      local_res8 = (TObjectPtr<UClass>_u_0)(param_2->LayerClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      USkeletalMeshComponent::LinkAnimClassLayers(pUVar9,(TSubclassOf<UAnimInstance>)&local_res8);
      pUVar9 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res20);
      local_res8 = (TObjectPtr<UClass>_u_0)(param_2->LayerClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      local_38[0] = USkeletalMeshComponent::GetLinkedAnimLayerInstanceByClass
                              (pUVar9,(TSubclassOf<UAnimInstance>)&local_res8);
      if (local_38[0] != (UAnimInstance *)0x0) {
        local_48.Handle = (ulong64)local_res10;
        local_40 = local_38;
        TSet<TTuple<enum_EDS_WeaponType,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,UAnimInstance_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_EDS_WeaponType_&,UAnimInstance_*_&>_>
                  (&this->WeaponAnimLayerInstanceMap,
                   (TPairInitializer<EDS_WeaponType_&,UAnimInstance_*_&> *)&local_res8.ObjectPtr,
                   (bool *)&local_48);
      }
    }
  }
  return;
}

// OnBindAnimationEvents @ 14b881470

void __thiscall UDS_MainPlayerCombatAnim::OnBindAnimationEvents(UDS_MainPlayerCombatAnim *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  
  UDS_BattleAnim::OnBindAnimationEvents((UDS_BattleAnim *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x10,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WeaponType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MainPlayerCombatAnim>
              (&pUVar2[7].field_0x10,(UDS_MainPlayerCombatAnim *)(local_res8 + 1),(pmf_63f9fa41)this
              );
  }
  return;
}

// OnChangedCharState @ 14b885e40

void __thiscall
UDS_MainPlayerCombatAnim::OnChangedCharState
          (UDS_MainPlayerCombatAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [8];
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_BattleAnim::OnChangedCharState((UDS_BattleAnim *)this,param_1,&local_38);
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res8[0] = SkillMode_Aim;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
  this->field_0x71c = bVar1;
  return;
}

// OnChangedWeaponType @ 14b8868b0

void __thiscall
UDS_MainPlayerCombatAnim::OnChangedWeaponType(UDS_MainPlayerCombatAnim *this,EDS_WeaponType param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
  *this_00;
  EDS_WeaponType EVar3;
  FDS_AnimLayerDescriptor *pFVar4;
  undefined1 *puVar5;
  int iVar6;
  
  EVar3 = this->CurWeaponType;
  this_00 = &this->WeaponAnimLayerDescriptorMap;
  this->PreWeaponType = EVar3;
  puVar1 = &(this->WeaponAnimLayerDescriptorMap).field_0x38;
  this->CurWeaponType = param_1;
  puVar2 = &(this->WeaponAnimLayerDescriptorMap).field_0x48;
  if (*(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WeaponAnimLayerDescriptorMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar1;
    }
    iVar6 = *(int *)(puVar5 + ((ulonglong)(*(int *)puVar2 - 1) & (ulonglong)EVar3) * 4);
    if (iVar6 != -1) {
      do {
        if (*(EDS_WeaponType *)((longlong)iVar6 * 0x20 + *(longlong *)this_00) == EVar3) {
          if (iVar6 != -1) {
            pFVar4 = TMapBase<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
                     ::FindChecked(this_00,EVar3);
            UnlinkWeaponAnimLayer(this,this->PreWeaponType,pFVar4);
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar6 != -1);
    }
  }
  EVar3 = this->CurWeaponType;
  if (*(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WeaponAnimLayerDescriptorMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar1;
    }
    iVar6 = *(int *)(puVar5 + ((ulonglong)(*(int *)puVar2 - 1) & (ulonglong)EVar3) * 4);
    if (iVar6 != -1) {
      while (*(EDS_WeaponType *)((longlong)iVar6 * 0x20 + *(longlong *)this_00) != EVar3) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)this_00);
        if (iVar6 == -1) {
          return;
        }
      }
      pFVar4 = TMapBase<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
               ::FindChecked(this_00,EVar3);
      LinkWeaponAnimLayer(this,this->CurWeaponType,pFVar4);
    }
  }
  return;
}

// OnClearVariables @ 14b887ab0

void __thiscall UDS_MainPlayerCombatAnim::OnClearVariables(UDS_MainPlayerCombatAnim *this)

{
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x6c0 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x6c4 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x438 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x43c = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x6c8 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x6cc = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x6d0 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x6d4 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x764 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x768 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x75c = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x760 = FStackX_8.ObjectSerialNumber;
  return;
}

// OnInitVariables @ 14b889d20

void __thiscall UDS_MainPlayerCombatAnim::OnInitVariables(UDS_MainPlayerCombatAnim *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_BattleAnim::OnInitVariables((UDS_BattleAnim *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    RefreshLinkedWeaponAnimLayer(this,pUVar2[0x17].field_0x10);
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88b200

void __thiscall
UDS_MainPlayerCombatAnim::OnNativeThreadSafeUpdateAnimation
          (UDS_MainPlayerCombatAnim *this,float param_1)

{
  EDS_CardinalDirection EVar1;
  float fVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  
  UDS_BattleAnim::OnNativeThreadSafeUpdateAnimation((UDS_BattleAnim *)this,param_1);
  if (this->field_0x499 == '\x02') {
    if (this->field_0x598 == '\x01') {
      auVar3 = roundps(in_XMM2,ZEXT416((uint)(*(float *)&this->field_0x554 + __real_3f000000)),1);
      fVar2 = (float)((uint)auVar3._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar2 <= __real_42700000) {
        this->field_0x71a = 0;
        return;
      }
      if (__real_42f00000 <= fVar2) {
        this->field_0x71a = 3;
        return;
      }
      this->field_0x71a = (0.0 < auVar3._0_4_) + '\x01';
      return;
    }
  }
  else if ((this->field_0x499 == '\x04') && (this->field_0x598 == '\x01')) {
    EVar1 = UDS_CharacterAnimBase::GetCardinalDirectionFromAngle
                      ((UDS_CharacterAnimBase *)this,*(float *)&this->field_0x554,__real_41700000);
    this->field_0x71b = EVar1;
  }
  return;
}

// OnUnBindAnimationEvents @ 14b8943a0

void __thiscall UDS_MainPlayerCombatAnim::OnUnBindAnimationEvents(UDS_MainPlayerCombatAnim *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_BattleAnim::OnUnBindAnimationEvents((UDS_BattleAnim *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x10,this);
  }
  return;
}

// OnUnlinkWeaponAnimLayerTimerEnd @ 14b894ca0

void __thiscall
UDS_MainPlayerCombatAnim::OnUnlinkWeaponAnimLayerTimerEnd
          (UDS_MainPlayerCombatAnim *this,EDS_WeaponType param_1,TSubclassOf<UAnimInstance> param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *this_00;
  undefined1 *puVar5;
  FWeakObjectPtr local_res8;
  EDS_WeaponType local_res10 [8];
  USkeletalMeshComponent *local_res20;
  
  if (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 !=
      *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->UnlinkWeaponAnimLayerTimerMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)
                               (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->UnlinkWeaponAnimLayerTimerMap;
      do {
        if (*(EDS_WeaponType *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          local_res10[0] = param_1;
          TSet<TTuple<enum_EDS_WeaponType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>,FDefaultSetAllocator>
          ::RemoveImpl<enum_EDS_WeaponType>
                    (&this->UnlinkWeaponAnimLayerTimerMap,(uint)param_1,local_res10);
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_res20 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (((bVar2) && (lVar1 = *(longlong *)param_2.Class.field0_0x0, lVar1 != 0)) &&
     (pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar4->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
      this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res8);
      local_res20 = *(USkeletalMeshComponent **)param_2.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res20 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      USkeletalMeshComponent::UnlinkAnimClassLayers
                (this_00,(TSubclassOf<UAnimInstance>)&local_res20);
      if (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x8 !=
          *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x34) {
        local_res10[0] = param_1;
        TSet<TTuple<enum_EDS_WeaponType,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,UAnimInstance_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<enum_EDS_WeaponType>
                  (&this->WeaponAnimLayerInstanceMap,(uint)param_1,local_res10);
      }
    }
  }
  return;
}

// RefreshAttackState @ 14b896260

bool __thiscall
UDS_MainPlayerCombatAnim::RefreshAttackState
          (UDS_MainPlayerCombatAnim *this,FGameplayTag *param_1,bool param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res20 [2];
  
  bVar1 = UDS_BattleAnim::RefreshAttackState((UDS_BattleAnim *)this,param_1,param_2);
  if (!bVar1) {
    *(undefined8 *)&this->field_0x6e0 = 0;
    return false;
  }
  this->field_0x758 = param_2;
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res20[0] = NormalAttack;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res20);
  this->field_0x6dc = !bVar1 + '\x01';
  return true;
}

// RefreshLinkedWeaponAnimLayer @ 14b897160

void __thiscall
UDS_MainPlayerCombatAnim::RefreshLinkedWeaponAnimLayer
          (UDS_MainPlayerCombatAnim *this,EDS_WeaponType param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
  *this_00;
  EDS_WeaponType EVar3;
  FDS_AnimLayerDescriptor *pFVar4;
  undefined1 *puVar5;
  int iVar6;
  
  EVar3 = this->CurWeaponType;
  this_00 = &this->WeaponAnimLayerDescriptorMap;
  this->PreWeaponType = EVar3;
  puVar1 = &(this->WeaponAnimLayerDescriptorMap).field_0x38;
  this->CurWeaponType = param_1;
  puVar2 = &(this->WeaponAnimLayerDescriptorMap).field_0x48;
  if (*(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WeaponAnimLayerDescriptorMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar1;
    }
    iVar6 = *(int *)(puVar5 + ((ulonglong)(*(int *)puVar2 - 1) & (ulonglong)EVar3) * 4);
    if (iVar6 != -1) {
      do {
        if (*(EDS_WeaponType *)((longlong)iVar6 * 0x20 + *(longlong *)this_00) == EVar3) {
          if (iVar6 != -1) {
            pFVar4 = TMapBase<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
                     ::FindChecked(this_00,EVar3);
            UnlinkWeaponAnimLayer(this,this->PreWeaponType,pFVar4);
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)this_00);
      } while (iVar6 != -1);
    }
  }
  EVar3 = this->CurWeaponType;
  if (*(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WeaponAnimLayerDescriptorMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar1;
    }
    iVar6 = *(int *)(puVar5 + ((ulonglong)(*(int *)puVar2 - 1) & (ulonglong)EVar3) * 4);
    if (iVar6 != -1) {
      while (*(EDS_WeaponType *)((longlong)iVar6 * 0x20 + *(longlong *)this_00) != EVar3) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)this_00);
        if (iVar6 == -1) {
          return;
        }
      }
      pFVar4 = TMapBase<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
               ::FindChecked(this_00,EVar3);
      LinkWeaponAnimLayer(this,this->CurWeaponType,pFVar4);
    }
  }
  return;
}

// UnLinkAllWeaponAnimLayers @ 14b89d030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_MainPlayerCombatAnim::UnLinkAllWeaponAnimLayers(UDS_MainPlayerCombatAnim *this)

{
  TMap<EDS_WeaponType,UAnimInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,UAnimInstance_*,0>_>
  *this_00;
  ulonglong uVar1;
  EDS_WeaponType EVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TMap<EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  FTimerHandle *pFVar9;
  FTimerManager *this_01;
  FTimerData *pFVar10;
  USkeletalMeshComponent *this_02;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  TMap<EDS_WeaponType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FTimerHandle,0>_>
  *pTVar15;
  uint *puVar16;
  uint uVar17;
  EDS_WeaponType *pEVar18;
  EDS_WeaponType local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FWeakObjectPtr local_res20;
  FTimerHandle local_c8;
  TMap<EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  USkeletalMeshComponent *local_90;
  UObject *local_88;
  TMap<EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  if (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x34) {
    local_90 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_90 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_90 != (USkeletalMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_90);
    bVar7 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar7) {
      uStack_b4 = 1;
      local_a0 = 0;
      local_c0 = &this->WeaponAnimLayerDescriptorMap;
      puVar4 = &(this->WeaponAnimLayerDescriptorMap).field_0x10;
      iVar8 = *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x28;
      iStack_a4 = local_a0;
      iStack_b8 = 0;
      if (iVar8 != 0) {
        puVar16 = *(uint **)&(this->WeaponAnimLayerDescriptorMap).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)puVar4;
        }
        uVar14 = *puVar16;
        local_a0 = 0;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_b8;
          local_a0 = local_a0 + 0x20;
          iStack_b8 = iStack_b8 + 1;
          iStack_a4 = iVar8;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14b89d16d;
          uVar14 = puVar16[lVar11 + 1];
        }
        uStack_b4 = -uVar14 & uVar14;
        uVar1 = (ulonglong)uStack_b4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res18 = (int)lVar11;
        iStack_a4 = local_a0 + -1 + local_res18;
        if (iVar8 < iStack_a4) {
          iStack_a4 = iVar8;
        }
      }
LAB_14b89d16d:
      uVar14 = *(uint *)&(this->WeaponAnimLayerDescriptorMap).field_0x28;
      iStack_98 = *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x8 -
                  *(int *)&(this->WeaponAnimLayerDescriptorMap).field_0x34;
      uVar17 = uVar14 & 0xffffffe0;
      TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
      uStack_a8 = 0xffffffff;
      TStack_78.CurrentBitIndex = iStack_a4;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_78._28_4_ = iStack_a4;
      TStack_78.BaseBitIndex = local_a0;
      uStack_58 = CONCAT44(uStack_94,iStack_98);
      local_b0 = puVar4;
      iStack_9c = iStack_a4;
      local_80 = local_c0;
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
      if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(uint *)&(this->WeaponAnimLayerDescriptorMap).field_0x28;
      if (uVar14 != uVar3) {
        puVar12 = *(undefined1 **)&(this->WeaponAnimLayerDescriptorMap).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar4;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14b89d26b;
          uVar14 = *(uint *)(puVar12 + lVar11 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar17;
        if ((int)uVar3 < (int)uVar14) {
          uVar14 = uVar3;
        }
      }
LAB_14b89d26b:
LAB_14b89d280:
      pTVar6 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,FDS_AnimLayerDescriptor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_78.CurrentBitIndex != uVar14) ||
          (TStack_78.Array !=
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->WeaponAnimLayerDescriptorMap).field_0x10)
          ) || (pTVar6 != &this->WeaponAnimLayerDescriptorMap)) {
        pEVar18 = (EDS_WeaponType *)
                  ((longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
        EVar2 = *pEVar18;
        if (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x8 !=
            *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->WeaponAnimLayerInstanceMap).field_0x40;
          puVar12 = &(this->WeaponAnimLayerInstanceMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar12 = puVar4;
          }
          iVar8 = *(int *)(puVar12 +
                          ((ulonglong)(*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x48 - 1) &
                          (ulonglong)EVar2) * 4);
          if (iVar8 != -1) {
            do {
              if (*(EDS_WeaponType *)
                   (*(longlong *)&this->WeaponAnimLayerInstanceMap + (longlong)iVar8 * 0x18) ==
                  EVar2) {
                pTVar15 = &this->UnlinkWeaponAnimLayerTimerMap;
                if (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 ==
                    *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34) goto LAB_14b89d3d8;
                puVar4 = *(undefined1 **)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x40;
                puVar12 = &(this->UnlinkWeaponAnimLayerTimerMap).field_0x38;
                if (puVar4 != (undefined1 *)0x0) {
                  puVar12 = puVar4;
                }
                iVar8 = *(int *)(puVar12 +
                                ((ulonglong)
                                 (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 - 1) &
                                (ulonglong)EVar2) * 4);
                if (iVar8 == -1) goto LAB_14b89d3d8;
                goto LAB_14b89d362;
              }
              iVar8 = *(int *)(*(longlong *)&this->WeaponAnimLayerInstanceMap + 0x10 +
                              (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        goto LAB_14b89d40b;
      }
      this_00 = &this->WeaponAnimLayerInstanceMap;
      bVar7 = 1 < *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EDS_WeaponType,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,UAnimInstance_*,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      puVar4 = &(this->WeaponAnimLayerInstanceMap).field_0xc;
      *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x34 = 0;
      iVar8 = *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x2c;
      *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->WeaponAnimLayerInstanceMap).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->WeaponAnimLayerInstanceMap).field_0x48 = 1;
        TSet<TTuple<enum_EDS_WeaponType,UAnimInstance_*>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,UAnimInstance_*,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      pTVar15 = &this->UnlinkWeaponAnimLayerTimerMap;
      bVar7 = 1 < *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EDS_WeaponType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>,FDefaultSetAllocator>
        ::UnhashElements(pTVar15);
      }
      puVar4 = &(this->UnlinkWeaponAnimLayerTimerMap).field_0xc;
      *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 = 0;
      if (*(int *)puVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)pTVar15,0,(int *)puVar4);
      }
      *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34 = 0;
      *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x30 = 0xffffffff;
      iVar8 = *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x2c;
      *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x28 = 0;
      if ((iVar8 < 0) || (0x80 < iVar8)) {
        *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->UnlinkWeaponAnimLayerTimerMap).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x48 = 1;
        TSet<TTuple<enum_EDS_WeaponType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>,FDefaultSetAllocator>
        ::Rehash(pTVar15);
      }
    }
  }
  return;
  while (iVar8 = *(int *)(*(longlong *)pTVar15 + 0x10 + (longlong)iVar8 * 0x18), iVar8 != -1) {
LAB_14b89d362:
    if (*(EDS_WeaponType *)(*(longlong *)pTVar15 + (longlong)iVar8 * 0x18) == EVar2) {
      pFVar9 = TMapBase<enum_EDS_WeaponType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>_>
               ::FindChecked(pTVar15,EVar2);
      local_c8.Handle = pFVar9->Handle;
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar10 = FTimerManager::FindTimer(this_01,&local_c8);
      if (pFVar10 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_01,local_c8);
      }
      local_c8.Handle = 0;
      local_res8[0] = EVar2;
      if (*(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x8 !=
          *(int *)&(this->UnlinkWeaponAnimLayerTimerMap).field_0x34) {
        TSet<TTuple<enum_EDS_WeaponType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>,FDefaultSetAllocator>
        ::RemoveImpl<enum_EDS_WeaponType>(pTVar15,(uint)EVar2,local_res8);
      }
      break;
    }
  }
LAB_14b89d3d8:
  this_02 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res20);
  local_88 = *(UObject **)(pEVar18 + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_88);
  }
  USkeletalMeshComponent::UnlinkAnimClassLayers(this_02,(TSubclassOf<UAnimInstance>)&local_88);
LAB_14b89d40b:
  TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  goto LAB_14b89d280;
}

// UnlinkWeaponAnimLayer @ 14b89e580

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

void __thiscall
UDS_MainPlayerCombatAnim::UnlinkWeaponAnimLayer
          (UDS_MainPlayerCombatAnim *this,EDS_WeaponType param_1,FDS_AnimLayerDescriptor *param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FTimerManager *this_00;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  EDS_WeaponType local_res10 [8];
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d0;
  int local_c8;
  FDelegateAllocation local_c0;
  FTimerHandle local_b0;
  TPairInitializer<EDS_WeaponType_&,FTimerHandle_&> local_a8;
  EDS_WeaponType *local_98;
  FTimerHandle *local_90;
  undefined1 local_88;
  FDelegateAllocation *local_80;
  FTimerUnifiedDelegate local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((param_2->bAlwaysLinked != true) &&
     (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x8 !=
      *(int *)&(this->WeaponAnimLayerInstanceMap).field_0x34)) {
    puVar7 = *(undefined1 **)&(this->WeaponAnimLayerInstanceMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->WeaponAnimLayerInstanceMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)
                               (*(int *)&(this->WeaponAnimLayerInstanceMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(EDS_WeaponType *)
             (*(longlong *)&this->WeaponAnimLayerInstanceMap + (longlong)iVar4 * 0x18) == param_1) {
          local_88 = 0;
          local_80 = &local_c0;
          local_b0.Handle = 0;
          local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_c0.DelegateSize = 0;
          local_res10[0] = param_1;
          puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_WeaponType__V__TSubclassOf_VUAnimInstance______6B_
            ;
            *(EDS_WeaponType *)(puVar5 + 1) = local_res10[0];
            pUVar1 = (param_2->LayerClass).Class.field0_0x0.DebugPtr;
            puVar5[2] = pUVar1;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar1);
            }
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[3] = uVar6;
            *puVar5 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainPlayerCombatAnim____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_WeaponType__V__TSubclassOf_VUAnimInstance______6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_MainPlayerCombatAnim *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar5[4] = 0;
            local_a8.Value = (FTimerHandle *)this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_MainPlayerCombatAnim *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 4),(FObjectPtr)&local_a8.Value);
            puVar5[5] = OnUnlinkWeaponAnimLayerTimerEnd;
          }
          this_00 = FDS_TimerManager::Get((UObject *)0x0);
          local_78.VariantDelegate._0_8_ = (FScriptContainerElement *)0x0;
          local_c8 = 0;
          local_78.VariantDelegate._8_4_ = 0;
          local_d0.Data = (FScriptContainerElement *)0x0;
          FVar8.Data = (FScriptContainerElement *)0x0;
          iVar4 = 0;
          if ((local_c0.DelegateSize != 0) &&
             (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x48))
                      (local_c0.DelegateAllocator,&local_d0);
            FVar8.Data = local_d0.Data;
            iVar4 = local_c8;
          }
          local_c8 = 0;
          local_d0.Data = (FScriptContainerElement *)0x0;
          if (local_78.VariantDelegate._8_4_ == 0) {
LAB_14b89e789:
            if ((FScriptContainerElement *)local_78.VariantDelegate._0_8_ !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_78.VariantDelegate._0_8_);
            }
          }
          else if ((FScriptContainerElement *)local_78.VariantDelegate._0_8_ !=
                   (FScriptContainerElement *)0x0) {
            (*(code *)**(undefined8 **)local_78.VariantDelegate._0_8_)
                      (local_78.VariantDelegate._0_8_);
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_78,0,0,0x10);
            local_78.VariantDelegate._8_4_ = 0;
            goto LAB_14b89e789;
          }
          local_78.VariantDelegate._0_8_ = FVar8.Data;
          local_78.VariantDelegate._8_4_ = iVar4;
          if (local_c8 == 0) {
LAB_14b89e7d3:
            if (local_d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data);
            }
          }
          else if (local_d0.Data != (FScriptContainerElement *)0x0) {
            (*(code *)**(undefined8 **)local_d0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10)
            ;
            local_c8 = 0;
            goto LAB_14b89e7d3;
          }
          local_78.VariantDelegate.TypeIndex = 1;
          FTimerManager::InternalSetTimer
                    (this_00,&local_b0,&local_78,__real_41200000,false,__real_bf800000);
          uVar9 = (ulonglong)local_78.VariantDelegate.TypeIndex;
          if ((3 < local_78.VariantDelegate.TypeIndex) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar9] ==
              UE::Core::Private::
              TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>
              ::Destruct) {
            if (local_78.VariantDelegate._8_4_ != 0) {
              if ((FScriptContainerElement *)local_78.VariantDelegate._0_8_ ==
                  (FScriptContainerElement *)0x0) goto LAB_14b89e8a6;
              (*(code *)**(undefined8 **)local_78.VariantDelegate._0_8_)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_78,0,0,0x10);
              local_78.VariantDelegate._8_4_ = 0;
            }
            if ((FScriptContainerElement *)local_78.VariantDelegate._0_8_ !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_78.VariantDelegate._0_8_);
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar9])(&local_78);
          }
LAB_14b89e8a6:
          local_98 = local_res10;
          local_90 = &local_b0;
          TSet<TTuple<enum_EDS_WeaponType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_WeaponType_&,FTimerHandle_&>_>
                    (&this->UnlinkWeaponAnimLayerTimerMap,&local_a8,(bool *)&local_98);
          if ((local_c0.DelegateSize != 0) &&
             (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_c0,0,0,0x10);
            local_c0.DelegateSize = 0;
          }
          if (local_c0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            return;
          }
          FMemory::Free((void *)local_c0.DelegateAllocator);
          return;
        }
        iVar4 = *(int *)(*(longlong *)&this->WeaponAnimLayerInstanceMap + 0x10 +
                        (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  return;
}

