// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetPlayerUID_WrapperImpl @ 14b6d5330

void __cdecl UDS_VM_RaidPartyMemberSync::SetPlayerUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCharId_WrapperImpl @ 14b6d5340

void __cdecl UDS_VM_RaidPartyMemberSync::SetCharId_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::CharId.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CharId.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsDead_WrapperImpl @ 14b6d5350

void __cdecl UDS_VM_RaidPartyMemberSync::SetIsDead_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xac) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsDead.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsDead.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCurHP_WrapperImpl @ 14b6d5360

void __cdecl UDS_VM_RaidPartyMemberSync::SetCurHP_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::CurHP.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CurHP.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMaxHP_WrapperImpl @ 14b6d5370

void __cdecl UDS_VM_RaidPartyMemberSync::SetMaxHP_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::MaxHP.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MaxHP.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetHP_Ratio_WrapperImpl @ 14b6d5380

void __cdecl UDS_VM_RaidPartyMemberSync::SetHP_Ratio_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::HP_Ratio.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::HP_Ratio.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6d5390

UClass * __cdecl UDS_VM_RaidPartyMemberSync::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberSync.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyMemberSync",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberSync.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyMemberSync,0xf0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_RaidPartyMemberSync>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyMemberSync>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberSync.InnerSingleton;
}

// UDS_VM_RaidPartyMemberSync @ 14b6d7aa0

UDS_VM_RaidPartyMemberSync * __thiscall
UDS_VM_RaidPartyMemberSync::UDS_VM_RaidPartyMemberSync
          (UDS_VM_RaidPartyMemberSync *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->RaidPartySlotIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyMemberSync__6B_;
  return this;
}

// UDS_VM_RaidPartyMemberSync @ 14b6d7af0

UDS_VM_RaidPartyMemberSync * __thiscall
UDS_VM_RaidPartyMemberSync::UDS_VM_RaidPartyMemberSync
          (UDS_VM_RaidPartyMemberSync *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->RaidPartySlotIndex = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyMemberSync__6B_;
  return this;
}

// ~UDS_VM_RaidPartyMemberSync @ 14b6d9f40

void __thiscall
UDS_VM_RaidPartyMemberSync::~UDS_VM_RaidPartyMemberSync(UDS_VM_RaidPartyMemberSync *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyMemberSync__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcad0

IClassDescriptor * __thiscall
UDS_VM_RaidPartyMemberSync::GetFieldNotificationDescriptor(UDS_VM_RaidPartyMemberSync *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidPartyMemberSync::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd440

UClass * __cdecl UDS_VM_RaidPartyMemberSync::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberSync.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyMemberSync",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberSync.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyMemberSync,0xf0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_RaidPartyMemberSync>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyMemberSync>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberSync.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidPartyMemberSync @ 14b6ddec0

void __cdecl UDS_VM_RaidPartyMemberSync::StaticRegisterNativesUDS_VM_RaidPartyMemberSync(void)

{
  return;
}

// BindModel @ 14be12e60

void __thiscall UDS_VM_RaidPartyMemberSync::BindModel(UDS_VM_RaidPartyMemberSync *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *this_00;
  UDS_DungeonEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
  if (bVar1) {
    pUVar2 = UDS_DungeonEvent::GetEvent();
    if (pUVar2 != (UDS_DungeonEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar2->OnChangedRaidPartyMemberSync,this);
      TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_RaidPartyMemberSync>
                ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *
                 )&pUVar2->OnChangedRaidPartyMemberSync,
                 (UDS_VM_RaidPartyMemberSync *)&stack0x00000010,(pmf_24d5bc87 *)this);
    }
  }
  return;
}

// GetBuffMap @ 14be207b0

TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_> *
__thiscall
UDS_VM_RaidPartyMemberSync::GetBuffMap
          (UDS_VM_RaidPartyMemberSync *this,
          TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
          *__return_storage_ptr__)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->RaidPartySlotIndex);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)__return_storage_ptr__,
              (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)&(pFVar1->RaidPartyMemberSyncData).BuffMap);
  return __return_storage_ptr__;
}

// GetStatusCurMap @ 14be23060

TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
* __thiscall
UDS_VM_RaidPartyMemberSync::GetStatusCurMap
          (UDS_VM_RaidPartyMemberSync *this,
          TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
          *__return_storage_ptr__)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->RaidPartySlotIndex);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,
              (TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
               *)&(pFVar1->RaidPartyMemberSyncData).StatusCurMap);
  return __return_storage_ptr__;
}

// GetStatusMaxMap @ 14be230d0

TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_> *
__thiscall
UDS_VM_RaidPartyMemberSync::GetStatusMaxMap
          (UDS_VM_RaidPartyMemberSync *this,
          TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
          *__return_storage_ptr__)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_00,this->RaidPartySlotIndex);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,
              (TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
               *)&(pFVar1->RaidPartyMemberSyncData).StatusMaxMap);
  return __return_storage_ptr__;
}

// OnRaidPartyMemberSync @ 14be32850

void __thiscall
UDS_VM_RaidPartyMemberSync::OnRaidPartyMemberSync(UDS_VM_RaidPartyMemberSync *this,long64 param_1)

{
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *this_00;
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  FDS_RaidPartyRepo *this_01;
  FDS_RaidPartyMemberInfo *pFVar4;
  float *pfVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  float fVar9;
  FName local_18;
  int local_10;
  
  this_01 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar4 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(this_01,this->RaidPartySlotIndex);
  if (pFVar4->PlayerUID != param_1) {
    return;
  }
  if (pFVar4->SlotIndex == this->RaidPartySlotIndex) {
    this->PlayerEntityId = (pFVar4->RaidPartyMemberSyncData).PlayerEntityId;
    this->CharEntityId = (pFVar4->RaidPartyMemberSyncData).CharEntityId;
    dVar2 = (pFVar4->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
    (this->Position).field0_0x0._s_0.X =
         (pFVar4->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
    (this->Position).field0_0x0._s_0.Y = dVar2;
    (this->Position).field0_0x0._s_0.Z =
         (pFVar4->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
    this->PlayerUID = (pFVar4->RaidPartyMemberSyncData).PlayerUID;
    local_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->CharId = (pFVar4->RaidPartyMemberSyncData).CharId;
    local_10 = FFieldNotificationClassDescriptor::CharId.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::CharId.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->IsDead = (pFVar4->RaidPartyMemberSyncData).IsDead;
    local_10 = FFieldNotificationClassDescriptor::IsDead.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsDead.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this_00 = &(pFVar4->RaidPartyMemberSyncData).StatusCurMap;
    if (*(int *)&(pFVar4->RaidPartyMemberSyncData).StatusCurMap.field_0x8 ==
        *(int *)&(pFVar4->RaidPartyMemberSyncData).StatusCurMap.field_0x34) {
      return;
    }
    puVar7 = *(undefined1 **)&(pFVar4->RaidPartyMemberSyncData).StatusCurMap.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar4->RaidPartyMemberSyncData).StatusCurMap.field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar4->RaidPartyMemberSyncData).StatusCurMap.field_0x48 -
                               1U & 1) * 4);
    if (iVar8 == -1) {
      return;
    }
    lVar1 = *(longlong *)this_00;
    while (*(int *)(lVar1 + (longlong)iVar8 * 0x10) != 1) {
      iVar8 = *(int *)(lVar1 + 8 + (longlong)iVar8 * 0x10);
      if (iVar8 == -1) {
        return;
      }
    }
    if (*(int *)&(pFVar4->RaidPartyMemberSyncData).StatusMaxMap.field_0x8 ==
        *(int *)&(pFVar4->RaidPartyMemberSyncData).StatusMaxMap.field_0x34) {
      return;
    }
    puVar7 = *(undefined1 **)&(pFVar4->RaidPartyMemberSyncData).StatusMaxMap.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar4->RaidPartyMemberSyncData).StatusMaxMap.field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar4->RaidPartyMemberSyncData).StatusMaxMap.field_0x48 -
                               1U & 1) * 4);
    if (iVar8 == -1) {
      return;
    }
    lVar1 = *(longlong *)&(pFVar4->RaidPartyMemberSyncData).StatusMaxMap;
    while (*(int *)(lVar1 + (longlong)iVar8 * 0x10) != 1) {
      iVar8 = *(int *)(lVar1 + 8 + (longlong)iVar8 * 0x10);
      if (iVar8 == -1) {
        return;
      }
    }
    pfVar5 = TMapBase<enum_EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>_>
             ::FindChecked(this_00,Hp);
    SetCurHP(this,pfVar5);
    piVar6 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
             ::FindChecked(&(pFVar4->RaidPartyMemberSyncData).StatusMaxMap,Hp);
    SetMaxHP(this,piVar6);
    if (this->MaxHP == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = this->CurHP / (float)this->MaxHP;
    }
    this->HP_Ratio = fVar9;
  }
  else {
    this->PlayerEntityId = 0;
    this->CharEntityId = 0;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Position).field0_0x0._s_0.Y = (double)uVar3;
    (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->PlayerUID = 0;
    local_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
    (**(code **)(this->_padding_ + 0x38))();
    this->CharId = 0;
    local_10 = FFieldNotificationClassDescriptor::CharId.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::CharId.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->IsDead = false;
    local_10 = FFieldNotificationClassDescriptor::IsDead.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsDead.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->CurHP = 0.0;
    local_10 = FFieldNotificationClassDescriptor::CurHP.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::CurHP.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->MaxHP = 0;
    local_10 = FFieldNotificationClassDescriptor::MaxHP.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MaxHP.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->HP_Ratio = 0.0;
  }
  local_10 = FFieldNotificationClassDescriptor::HP_Ratio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HP_Ratio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14be3dbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidPartyMemberSync::OnSetViewModel
          (UDS_VM_RaidPartyMemberSync *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_RaidPartyMemberInfo,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyMemberInfo>(&local_168,&local_158);
  if (local_168.Object == (FDS_ViewModelContext_RaidPartyMemberInfo *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_RaidPartyMemberSync::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xf,L"context.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2f8))(this);
    if (local_168.Object == (FDS_ViewModelContext_RaidPartyMemberInfo *)0x0) {
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
    iVar1 = (local_168.Object)->PartyMemberSlotIndex;
    this->RaidPartySlotIndex = iVar1;
    if (0 < iVar1) {
      (**(code **)(this->_padding_ + 0x2f0))(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14be47f50

void __thiscall UDS_VM_RaidPartyMemberSync::Reset(UDS_VM_RaidPartyMemberSync *this)

{
  undefined8 uVar1;
  FName local_18;
  int local_10;
  
  this->PlayerEntityId = 0;
  this->CharEntityId = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PlayerUID = 0;
  local_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->CharId = 0;
  local_10 = FFieldNotificationClassDescriptor::CharId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->IsDead = false;
  local_10 = FFieldNotificationClassDescriptor::IsDead.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDead.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->CurHP = 0.0;
  local_10 = FFieldNotificationClassDescriptor::CurHP.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurHP.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->MaxHP = 0;
  local_10 = FFieldNotificationClassDescriptor::MaxHP.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxHP.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->HP_Ratio = 0.0;
  local_10 = FFieldNotificationClassDescriptor::HP_Ratio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HP_Ratio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCharId @ 14be496d0

void __thiscall UDS_VM_RaidPartyMemberSync::SetCharId(UDS_VM_RaidPartyMemberSync *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->CharId = *param_1;
  local_10 = FFieldNotificationClassDescriptor::CharId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCurHP @ 14be4a540

void __thiscall
UDS_VM_RaidPartyMemberSync::SetCurHP(UDS_VM_RaidPartyMemberSync *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  this->CurHP = *param_1;
  local_10 = FFieldNotificationClassDescriptor::CurHP.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurHP.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetHP_Ratio @ 14be4b5b0

void __thiscall
UDS_VM_RaidPartyMemberSync::SetHP_Ratio(UDS_VM_RaidPartyMemberSync *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  this->HP_Ratio = *param_1;
  local_10 = FFieldNotificationClassDescriptor::HP_Ratio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HP_Ratio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsDead @ 14be4bac0

void __thiscall
UDS_VM_RaidPartyMemberSync::SetIsDead(UDS_VM_RaidPartyMemberSync *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsDead = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsDead.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsDead.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMaxHP @ 14be4dcf0

void __thiscall UDS_VM_RaidPartyMemberSync::SetMaxHP(UDS_VM_RaidPartyMemberSync *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->MaxHP = *param_1;
  local_10 = FFieldNotificationClassDescriptor::MaxHP.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxHP.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetPlayerUID @ 14be4f250

void __thiscall
UDS_VM_RaidPartyMemberSync::SetPlayerUID(UDS_VM_RaidPartyMemberSync *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  this->PlayerUID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14be55b10

void __thiscall UDS_VM_RaidPartyMemberSync::UnbindModel(UDS_VM_RaidPartyMemberSync *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyMemberSync,this);
    return;
  }
  return;
}

