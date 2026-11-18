// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b6ad370

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotFunction.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotFunction",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotFunction.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotFunction,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotFunction>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotFunction>,local_res8,
               UDS_VM_NpcFunction_MenuSlotBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotFunction.InnerSingleton;
}

// UDS_VM_NpcFunction_MenuSlotFunction @ 14b6b20e0

UDS_VM_NpcFunction_MenuSlotFunction * __thiscall
UDS_VM_NpcFunction_MenuSlotFunction::UDS_VM_NpcFunction_MenuSlotFunction
          (UDS_VM_NpcFunction_MenuSlotFunction *this,FVTableHelper *param_1)

{
  UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,param_1);
  this->InteractionFunctionType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotFunction__6B_;
  return this;
}

// UDS_VM_NpcFunction_MenuSlotFunction @ 14b6b2130

UDS_VM_NpcFunction_MenuSlotFunction * __thiscall
UDS_VM_NpcFunction_MenuSlotFunction::UDS_VM_NpcFunction_MenuSlotFunction
          (UDS_VM_NpcFunction_MenuSlotFunction *this,FObjectInitializer *param_1)

{
  UDS_VM_NpcFunction_MenuSlotBase::UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,param_1);
  this->InteractionFunctionType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotFunction__6B_;
  return this;
}

// ~UDS_VM_NpcFunction_MenuSlotFunction @ 14b6b3f20

void __thiscall
UDS_VM_NpcFunction_MenuSlotFunction::~UDS_VM_NpcFunction_MenuSlotFunction
          (UDS_VM_NpcFunction_MenuSlotFunction *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_MenuSlotFunction__6B_;
  UDS_VM_NpcFunction_MenuSlotBase::~UDS_VM_NpcFunction_MenuSlotBase
            ((UDS_VM_NpcFunction_MenuSlotBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b6b73a0

UClass * __cdecl UDS_VM_NpcFunction_MenuSlotFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotFunction.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_MenuSlotFunction",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotFunction.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotFunction,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_MenuSlotFunction>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_MenuSlotFunction>,local_res8,
               UDS_VM_NpcFunction_MenuSlotBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_MenuSlotFunction.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotFunction @ 14b6b7dc0

void __cdecl
UDS_VM_NpcFunction_MenuSlotFunction::StaticRegisterNativesUDS_VM_NpcFunction_MenuSlotFunction(void)

{
  return;
}

// OnClickButton @ 14bef8940

void __thiscall
UDS_VM_NpcFunction_MenuSlotFunction::OnClickButton
          (UDS_VM_NpcFunction_MenuSlotFunction *this,FDS_ButtonEventField *param_1)

{
  UDS_NpcFunctionEvent *this_00;
  
  this_00 = UDS_NpcFunctionEvent::GetEvent();
  if (this_00 != (UDS_NpcFunctionEvent *)0x0) {
    UDS_NpcFunctionEvent::OnChangedNpcFunction
              (this_00,(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4));
    return;
  }
  return;
}

// OnSetViewModel @ 14bf08de0

void __thiscall
UDS_VM_NpcFunction_MenuSlotFunction::OnSetViewModel
          (UDS_VM_NpcFunction_MenuSlotFunction *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_NPCDataSet *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionMenuSlot,1> local_18;
  
  local_18.Object = (FDS_ViewModelContext_NpcFunctionMenuSlot *)param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_NpcFunction_MenuSlotBase::OnSetViewModel
            ((UDS_VM_NpcFunction_MenuSlotBase *)this,(TSharedPtr<FDS_ViewModelContext,1> *)&local_18
            );
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunctionMenuSlot>(&local_18,&local_28);
  if (local_18.Object == (FDS_ViewModelContext_NpcFunctionMenuSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    pUVar4 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    iVar3 = UDS_NPCDataSet::GetFunctionIconID
                      (pUVar4,(int)this->_padding_,
                       *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4));
    pUVar4 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = (TReferenceControllerBase<1> *)
             UDS_NPCDataSet::GetFunctionNameID
                       (pUVar4,(int)this->_padding_,
                        *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4));
    iVar1 = UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_28.Object =
         (FDS_ViewModelContext *)
         UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::IconID.FieldName;
    if ((int)this->_padding_ != iVar3) {
      *(int *)&this->_padding_ = iVar3;
      local_28.SharedReferenceCount.ReferenceController._0_4_ = iVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_28.Object = (FDS_ViewModelContext *)&___7FDS_StringBaseID__6B_;
    local_28.SharedReferenceCount.ReferenceController = pTVar5;
    FDS_Text::SetTextFromStringID((FDS_Text *)&this->_padding_,(FDS_StringBaseID *)&local_28);
    local_28.SharedReferenceCount.ReferenceController._0_4_ =
         UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::Name.BitNumber;
    local_28.Object =
         (FDS_ViewModelContext *)
         UDS_VM_NpcFunction_MenuSlotBase::FFieldNotificationClassDescriptor::Name.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

