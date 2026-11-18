// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b70a360

UClass * __cdecl UDS_VM_W_AirWalkSlot_Attack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Attack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalkSlot_Attack",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Attack.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalkSlot_Attack,1000,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_AirWalkSlot_Attack>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalkSlot_Attack>,local_res8,
               UDS_VM_W_AirWalkSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Attack.InnerSingleton;
}

// UDS_VM_W_AirWalkSlot_Attack @ 14b710b80

UDS_VM_W_AirWalkSlot_Attack * __thiscall
UDS_VM_W_AirWalkSlot_Attack::UDS_VM_W_AirWalkSlot_Attack
          (UDS_VM_W_AirWalkSlot_Attack *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalkSlot_Attack__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->JumpSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_W_AirWalkSlot_Attack @ 14b710bf0

UDS_VM_W_AirWalkSlot_Attack * __thiscall
UDS_VM_W_AirWalkSlot_Attack::UDS_VM_W_AirWalkSlot_Attack
          (UDS_VM_W_AirWalkSlot_Attack *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalkSlot_Attack__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->JumpSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_W_AirWalkSlot_Attack @ 14b713130

void __thiscall
UDS_VM_W_AirWalkSlot_Attack::~UDS_VM_W_AirWalkSlot_Attack(UDS_VM_W_AirWalkSlot_Attack *this)

{
  this->_padding_ = (longlong)&UDS_VM_W_AirWalkSlot::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_VM_W_AirWalkSlot::_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_AirWalkSlot__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b7177d0

UClass * __cdecl UDS_VM_W_AirWalkSlot_Attack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Attack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalkSlot_Attack",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Attack.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalkSlot_Attack,1000,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_AirWalkSlot_Attack>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalkSlot_Attack>,local_res8,
               UDS_VM_W_AirWalkSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Attack.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_AirWalkSlot_Attack @ 14b7189b0

void __cdecl UDS_VM_W_AirWalkSlot_Attack::StaticRegisterNativesUDS_VM_W_AirWalkSlot_Attack(void)

{
  return;
}

// OnChangedAirWalkData @ 14bfb5e60

void __thiscall
UDS_VM_W_AirWalkSlot_Attack::OnChangedAirWalkData
          (UDS_VM_W_AirWalkSlot_Attack *this,UDS_DataBase *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    UpdateSlot(this);
    bVar1 = FWeakObjectPtr::IsValid(&(this->JumpSkillData).WeakPtr);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->JumpSkillData).WeakPtr);
      UDS_VM_W_CommonSkillSlot::SetIcon
                ((UDS_VM_W_CommonSkillSlot *)this,*(int *)&pUVar2[5].field_0x8);
    }
  }
  return;
}

// OnClickSkillSlot @ 14bfbaac0

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

void __thiscall UDS_VM_W_AirWalkSlot_Attack::OnClickSkillSlot(UDS_VM_W_AirWalkSlot_Attack *this)

{
  longlong *this_00;
  bool bVar1;
  UDS_DataBase *this_01;
  FDS_EntityBase *this_02;
  UObject *pUVar2;
  EDS_AbilityTagType local_res8 [8];
  ulong64 local_res10;
  undefined8 local_res18;
  
  this_00 = &this->_padding_;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    this_01 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    local_res10 = UDS_DataBase::GetEntityID(this_01);
    this_02 = FDS_EntityBase::GetEntityBase(&local_res10);
    if ((this_02 != (FDS_EntityBase *)0x0) &&
       ((pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar2[4].field_0x20 == '\x01' ||
        (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar2[4].field_0x20 == '\x02'))))
    {
      local_res18 = 0;
      local_res8[0] = AirNormalAttack;
      FDS_EntityBase::TryActivateAbility
                (this_02,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_res18);
    }
  }
  return;
}

// OnSetViewModel @ 14bfc3e60

void __thiscall
UDS_VM_W_AirWalkSlot_Attack::OnSetViewModel
          (UDS_VM_W_AirWalkSlot_Attack *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *local_res10;
  TSharedPtr<FDS_ViewModelContext_AirWalkSlot,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_28.Object = param_1->Object;
  pFVar1 = &param_1->SharedReferenceCount;
  local_28.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_W_AirWalkSlot::OnSetViewModel((UDS_VM_W_AirWalkSlot *)this,&local_28);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_AirWalkSlot>(&local_38,&local_18);
  if (local_38.Object == (FDS_ViewModelContext_AirWalkSlot *)0x0) goto LAB_14bfc3f30;
  local_res10 = FWeakObjectPtr::Get(&((local_38.Object)->JumpSkillData).WeakPtr);
  if (local_res10 == (UObject *)0x0) {
LAB_14bfc3f02:
    local_res10 = (UObject *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_SkillData_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&local_res10->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res10->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar3->_padding_)) goto LAB_14bfc3f02;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&(this->JumpSkillData).WeakPtr,(FObjectPtr)&local_res10);
LAB_14bfc3f30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// OnUpdate @ 14bfd05c0

void __thiscall
UDS_VM_W_AirWalkSlot_Attack::OnUpdate(UDS_VM_W_AirWalkSlot_Attack *this,float param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  char cVar4;
  float fVar5;
  FName FVar6;
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar3[4].field_0x20 == '\x01') ||
     (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
     iVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.BitNumber
     , FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
               FieldName, pUVar3[4].field_0x20 == '\x02')) {
    iVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.BitNumber;
    FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.FieldName;
    if ((char)this->_padding_ == '\0') goto LAB_14bfd0667;
    *(undefined1 *)&this->_padding_ = 0;
  }
  else {
    if ((char)this->_padding_ == '\x01') goto LAB_14bfd0667;
    *(undefined1 *)&this->_padding_ = 1;
  }
  local_18 = FVar6;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
LAB_14bfd0667:
  if ((UDS_VM_Progress *)this->_padding_ != (UDS_VM_Progress *)0x0) {
    bVar1 = UDS_VM_Progress::GetIsUpdateCurrentValue((UDS_VM_Progress *)this->_padding_);
    if (bVar1) {
      fVar5 = UDS_VM_Progress::GetCurrentPercent((UDS_VM_Progress *)this->_padding_);
      UDS_VM_W_CommonSkillSlot::SetCooldownProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar5);
      fVar5 = UDS_VM_Progress::GetCurrentValue((UDS_VM_Progress *)this->_padding_);
      UDS_VM_W_CommonSkillSlot::SetCooldownValue((UDS_VM_W_CommonSkillSlot *)this,fVar5);
    }
    iVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
            BitNumber;
    FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_CooldownProgress.
            FieldName;
    cVar4 = '\x01';
    if (bVar1) {
      cVar4 = '\x04';
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != cVar4) {
      *(char *)((longlong)&this->_padding_ + 4) = cVar4;
      local_10 = iVar2;
      local_18 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  if ((UDS_VM_Progress *)this->_padding_ != (UDS_VM_Progress *)0x0) {
    bVar1 = UDS_VM_Progress::GetIsUpdateCurrentValue((UDS_VM_Progress *)this->_padding_);
    if (bVar1) {
      fVar5 = UDS_VM_Progress::GetCurrentPercent((UDS_VM_Progress *)this->_padding_);
      UDS_VM_W_CommonSkillSlot::SetAvailableProgressRatio((UDS_VM_W_CommonSkillSlot *)this,fVar5);
    }
    iVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_AvailableProgress.
            BitNumber;
    FVar6 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_AvailableProgress.
            FieldName;
    cVar4 = '\x01';
    if (bVar1) {
      cVar4 = '\x04';
    }
    if (*(char *)((longlong)&this->_padding_ + 6) != cVar4) {
      *(char *)((longlong)&this->_padding_ + 6) = cVar4;
      local_10 = iVar2;
      local_18 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  UpdateSlot(this);
  return;
}

// UpdateSlot @ 14bfe5800

void __thiscall UDS_VM_W_AirWalkSlot_Attack::UpdateSlot(UDS_VM_W_AirWalkSlot_Attack *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AirWalkAbilityData *this_00;
  char cVar3;
  FName local_18;
  int local_10;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  cVar3 = '\0';
  if (((pUVar2[4].field_0x20 == '\x01') ||
      (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
      pUVar2[4].field_0x20 == '\x02')) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->JumpSkillData).WeakPtr), bVar1)) {
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2 = FWeakObjectPtr::Get(&(this->JumpSkillData).WeakPtr);
    bVar1 = UDS_AirWalkAbilityData::IsNextSkillPossible(this_00,*(int *)&pUVar2[2].field_0x1c);
    cVar3 = '\0';
    if (bVar1) {
      cVar3 = '\x01';
    }
  }
  local_10 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::WidgetEnabled.BitNumber;
  local_18 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::WidgetEnabled.FieldName;
  if (*(char *)((longlong)&this->_padding_ + 4) != cVar3) {
    *(char *)((longlong)&this->_padding_ + 4) = cVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

