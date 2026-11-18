// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b70a4a0

UClass * __cdecl UDS_VM_W_AirWalkSlot_Jump::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Jump.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalkSlot_Jump",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Jump.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalkSlot_Jump,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_AirWalkSlot_Jump>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalkSlot_Jump>,local_res8,
               UDS_VM_W_AirWalkSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Jump.InnerSingleton;
}

// UDS_VM_W_AirWalkSlot_Jump @ 14b710c60

UDS_VM_W_AirWalkSlot_Jump * __thiscall
UDS_VM_W_AirWalkSlot_Jump::UDS_VM_W_AirWalkSlot_Jump
          (UDS_VM_W_AirWalkSlot_Jump *this,FVTableHelper *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  *(undefined8 *)&this->field_0x3a8 = 0;
  *(undefined8 *)&this->field_0x3b0 = 0;
  *(undefined8 *)&this->field_0x3b8 = 0;
  *(undefined8 *)&this->field_0x3c8 = 0;
  *(undefined8 *)&this->field_0x3d0 = 0;
  *(undefined8 *)&this->field_0x3d8 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_AirWalkSlot_Jump__6B_;
  return this;
}

// UDS_VM_W_AirWalkSlot_Jump @ 14b710cd0

UDS_VM_W_AirWalkSlot_Jump * __thiscall
UDS_VM_W_AirWalkSlot_Jump::UDS_VM_W_AirWalkSlot_Jump
          (UDS_VM_W_AirWalkSlot_Jump *this,FObjectInitializer *param_1)

{
  UDS_VM_W_CommonSkillSlot::UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this,param_1);
  *(undefined8 *)&this->field_0x3a8 = 0;
  *(undefined8 *)&this->field_0x3b0 = 0;
  *(undefined8 *)&this->field_0x3b8 = 0;
  *(undefined8 *)&this->field_0x3c8 = 0;
  *(undefined8 *)&this->field_0x3d0 = 0;
  *(undefined8 *)&this->field_0x3d8 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_AirWalkSlot_Jump__6B_;
  return this;
}

// ~UDS_VM_W_AirWalkSlot_Jump @ 14b713180

void __thiscall
UDS_VM_W_AirWalkSlot_Jump::~UDS_VM_W_AirWalkSlot_Jump(UDS_VM_W_AirWalkSlot_Jump *this)

{
  *(undefined ***)this = &UDS_VM_W_AirWalkSlot::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_VM_W_AirWalkSlot::_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_AirWalkSlot__6B_;
  if (*(void **)&this->field_0x3c8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x3c8);
  }
  UDS_VM_W_CommonSkillSlot::~UDS_VM_W_CommonSkillSlot((UDS_VM_W_CommonSkillSlot *)this);
  return;
}

// GetPrivateStaticClass @ 14b717890

UClass * __cdecl UDS_VM_W_AirWalkSlot_Jump::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Jump.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_AirWalkSlot_Jump",
               &Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Jump.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_AirWalkSlot_Jump,0x3e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_AirWalkSlot_Jump>,
               InternalVTableHelperCtorCaller<UDS_VM_W_AirWalkSlot_Jump>,local_res8,
               UDS_VM_W_AirWalkSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_AirWalkSlot_Jump.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_AirWalkSlot_Jump @ 14b7189c0

void __cdecl UDS_VM_W_AirWalkSlot_Jump::StaticRegisterNativesUDS_VM_W_AirWalkSlot_Jump(void)

{
  return;
}

// InitViewModel @ 14bfaf970

void __thiscall UDS_VM_W_AirWalkSlot_Jump::InitViewModel(UDS_VM_W_AirWalkSlot_Jump *this)

{
  UDS_VM_Progress *pUVar1;
  UDS_VM_StackSkillCount *pUVar2;
  
  UDS_VM_W_CommonSkillSlot::InitViewModel((UDS_VM_W_CommonSkillSlot *)this);
  if (*(longlong *)&this->field_0x3b0 == 0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UDS_VM_Progress **)&this->field_0x3b0 = pUVar1;
  }
  if (*(longlong *)&this->field_0x3b8 == 0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(UDS_VM_Progress **)&this->field_0x3b8 = pUVar1;
  }
  if (*(longlong *)&this->field_0xa0 == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UDS_VM_StackSkillCount **)&this->field_0xa0 = pUVar2;
  }
  if (*(longlong *)&this->field_0xa8 == 0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_StackSkillCount>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_VM_StackSkillCount *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UDS_VM_StackSkillCount **)&this->field_0xa8 = pUVar2;
  }
  return;
}

// OnChangedAirWalkData @ 14bfb5ed0

void __thiscall
UDS_VM_W_AirWalkSlot_Jump::OnChangedAirWalkData
          (UDS_VM_W_AirWalkSlot_Jump *this,UDS_DataBase *param_1)

{
  undefined1 *this_00;
  UDS_VM_Progress *pUVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_AirWalkAbilityData *pUVar6;
  FDS_AirWalkStepInfo *pFVar7;
  char cVar8;
  double dVar9;
  FName local_18;
  int local_10;
  
  this_00 = &this->field_0x3a8;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    cVar8 = pUVar5[4].field_0x20;
    pUVar6 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pFVar7 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar6,(cVar8 == '\x01') + Jump1);
    if (0 < pFVar7->IconID) {
      UDS_VM_W_CommonSkillSlot::SetIcon((UDS_VM_W_CommonSkillSlot *)this,pFVar7->IconID);
    }
    iVar3 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_ToggleSkill.BitNumber;
    FVar2 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::Vis_ToggleSkill.FieldName;
    if (pFVar7->bToggleStep == true) {
      cVar8 = '\x01';
      if (pFVar7->IsActive != false) {
        cVar8 = '\x04';
      }
      if (this->field_0x340 != cVar8) {
        this->field_0x340 = cVar8;
        local_10 = iVar3;
        local_18 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_18);
      }
    }
    if (*(UDS_VM_Progress **)&this->field_0x3b0 != (UDS_VM_Progress *)0x0) {
      UDS_VM_Progress::SetIncreaseType(*(UDS_VM_Progress **)&this->field_0x3b0,DeltaTime);
      pUVar1 = *(UDS_VM_Progress **)&this->field_0x3b0;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      UDS_VM_Progress::SetMaxValue(pUVar1,(float)*(double *)&pUVar5[5].field_0x18);
      pUVar1 = *(UDS_VM_Progress **)&this->field_0x3b0;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      UDS_VM_Progress::SetTargetValue(pUVar1,(float)*(double *)&pUVar5[5].field_0x18);
      pUVar1 = *(UDS_VM_Progress **)&this->field_0x3b0;
      pUVar6 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      dVar9 = UDS_AirWalkAbilityData::GetElapsedTimeCooltime(pUVar6);
      UDS_VM_Progress::SetCurrentValue(pUVar1,(float)dVar9);
    }
  }
  return;
}

// OnSetViewModel @ 14bfc3f60

void __thiscall
UDS_VM_W_AirWalkSlot_Jump::OnSetViewModel
          (UDS_VM_W_AirWalkSlot_Jump *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  EDS_AbilityTagType EVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_W_AirWalkSlot::OnSetViewModel((UDS_VM_W_AirWalkSlot *)this,&local_18);
  puVar2 = &this->field_0x3c8;
  puVar1 = &this->field_0x3d4;
  *(undefined4 *)&this->field_0x3d0 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)puVar2,0,(int *)puVar1);
  }
  iVar6 = *(int *)&this->field_0x3d0;
  if (iVar6 == *(int *)puVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(int *)&this->field_0x3d0 = iVar6 + 1;
  *(undefined1 *)(*(longlong *)puVar2 + (longlong)iVar6) = 1;
  iVar6 = *(int *)&this->field_0x3d0;
  if (iVar6 == *(int *)puVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(int *)&this->field_0x3d0 = iVar6 + 1;
  *(undefined1 *)(*(longlong *)puVar2 + (longlong)iVar6) = 2;
  EVar4 = UDS_AirWalkAbilityData::GetAirWalkAbilityTagType(Jump1);
  this->field_0x3c0 = EVar4;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x3a8);
  if (bVar5) {
    pcVar3 = *(code **)(*(longlong *)this + 0x340);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3a8);
    (*pcVar3)(this,pUVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd0790

void __thiscall UDS_VM_W_AirWalkSlot_Jump::OnUpdate(UDS_VM_W_AirWalkSlot_Jump *this,float param_1)

{
  FName FVar1;
  bool bVar2;
  UDS_CharStateData *pUVar3;
  UObject *pUVar4;
  EDS_CharState local_res8;
  FName local_18;
  int local_10;
  
  UDS_VM_W_AirWalkSlot::OnUpdate((UDS_VM_W_AirWalkSlot *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x3a8);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x3d8);
    if (bVar2) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3d8);
      local_res8 = Battle;
      bVar2 = UDS_CharStateData::HasCharState(pUVar3,&local_res8);
      if (bVar2) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3d8);
        local_res8 = Battle;
        bVar2 = UDS_CharStateData::HasCharState(pUVar3,&local_res8);
        FVar1 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
                FieldName;
        if ((bool)this->field_0x1c8 != bVar2) {
          local_10 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::IsButtonDisabled.
                     BitNumber;
          this->field_0x1c8 = bVar2;
          local_18 = FVar1;
          (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_18);
        }
      }
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3a8);
    if ((pUVar4[4].field_0x20 == '\x03') || (pUVar4[4].field_0x20 == '\x04')) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3a8);
      local_10 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::WidgetEnabled.
                 BitNumber;
      local_18 = UDS_VM_W_CommonSkillSlot::FFieldNotificationClassDescriptor::WidgetEnabled.
                 FieldName;
      if ((pUVar4[5].field_0x10 == '\0') && (this->field_0x11c != '\x01')) {
        this->field_0x11c = 1;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_18);
      }
    }
  }
  return;
}

