// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b689d20

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Time::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Time.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Time",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Time.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Time,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Time>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Time>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Time.InnerSingleton;
}

// UDS_VM_ItemCraft_Crafting_Info_Time @ 14b68cd40

UDS_VM_ItemCraft_Crafting_Info_Time * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::UDS_VM_ItemCraft_Crafting_Info_Time
          (UDS_VM_ItemCraft_Crafting_Info_Time *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Time__6B_;
  FText::FText(&this->CraftTime);
  this->CraftQuantity = 1;
  return this;
}

// UDS_VM_ItemCraft_Crafting_Info_Time @ 14b68cda0

UDS_VM_ItemCraft_Crafting_Info_Time * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::UDS_VM_ItemCraft_Crafting_Info_Time
          (UDS_VM_ItemCraft_Crafting_Info_Time *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Time__6B_;
  FText::FText(&this->CraftTime);
  this->CraftQuantity = 1;
  return this;
}

// ~UDS_VM_ItemCraft_Crafting_Info_Time @ 14b68dec0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::~UDS_VM_ItemCraft_Crafting_Info_Time
          (UDS_VM_ItemCraft_Crafting_Info_Time *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Time__6B_;
  pIVar1 = (this->CraftTime).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fe10

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::GetFieldNotificationDescriptor
          (UDS_VM_ItemCraft_Crafting_Info_Time *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Crafting_Info_Time::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690760

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Time::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Time.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Time",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Time.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Time,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Time>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Time>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Time.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Time @ 14b691060

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Time::StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Time(void)

{
  return;
}

// BindModel @ 14be77390

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::BindModel(UDS_VM_ItemCraft_Crafting_Info_Time *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Time>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,
               (UDS_VM_ItemCraft_Crafting_Info_Time *)&stack0x00000010,(pmf_bc5d036c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftQuantity,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Time>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftQuantity,
               (UDS_VM_ItemCraft_Crafting_Info_Time *)&stack0x00000010,(pmf_bc5d036c *)this);
  }
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be90820

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::OnChangeCraftManager_ItemCraftListTID
          (UDS_VM_ItemCraft_Crafting_Info_Time *this)

{
  int iVar1;
  UDS_CraftManager *this_00;
  FString *pFVar2;
  FText *pFVar3;
  double dVar4;
  FText local_38;
  FString local_28 [2];
  
  this->CraftQuantity = 1;
  this_00 = UDS_CraftManager::GetInst();
  if (this_00 != (UDS_CraftManager *)0x0) {
    iVar1 = this->CraftQuantity;
    dVar4 = UDS_CraftManager::GetSelectedCraftTime(this_00);
    pFVar2 = UDS_TimeUtilManager::ConvertStringFromSec
                       (local_28,(float)(dVar4 * (double)iVar1 + __real_3fefae1480000000),DayHourSec
                        ,false);
    pFVar3 = FText::FromString(&local_38,pFVar2);
    SetCraftTime(this,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnChangeCraftManager_ItemCraftQuantity @ 14be90970

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::OnChangeCraftManager_ItemCraftQuantity
          (UDS_VM_ItemCraft_Crafting_Info_Time *this)

{
  int iVar1;
  UDS_CraftManager *this_00;
  FString *pFVar2;
  FText *pFVar3;
  double dVar4;
  FText local_28;
  FString local_18;
  
  this_00 = UDS_CraftManager::GetInst();
  if (this_00 != (UDS_CraftManager *)0x0) {
    iVar1 = this_00->CraftQuantity;
    this->CraftQuantity = iVar1;
    dVar4 = UDS_CraftManager::GetSelectedCraftTime(this_00);
    pFVar2 = UDS_TimeUtilManager::ConvertStringFromSec
                       (&local_18,(float)(dVar4 * (double)iVar1 + __real_3fefae1480000000),
                        DayHourSec,false);
    pFVar3 = FText::FromString(&local_28,pFVar2);
    SetCraftTime(this,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSetViewModel @ 14bea3cb0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::OnSetViewModel
          (UDS_VM_ItemCraft_Crafting_Info_Time *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_CraftManager *this_00;
  FString *pFVar3;
  FText *pFVar4;
  double dVar5;
  FText local_38;
  FString local_28 [2];
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this_00 = UDS_CraftManager::GetInst();
  if (this_00 != (UDS_CraftManager *)0x0) {
    iVar1 = this->CraftQuantity;
    dVar5 = UDS_CraftManager::GetSelectedCraftTime(this_00);
    pFVar3 = UDS_TimeUtilManager::ConvertStringFromSec
                       (local_28,(float)(dVar5 * (double)iVar1 + __real_3fefae1480000000),DayHourSec
                        ,false);
    pFVar4 = FText::FromString(&local_38,pFVar3);
    SetCraftTime(this,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCraftTime @ 14beadb60

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::SetCraftTime
          (UDS_VM_ItemCraft_Crafting_Info_Time *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->CraftTime).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->CraftTime).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->CraftTime).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::CraftTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CraftTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc900

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Time::UnbindModel(UDS_VM_ItemCraft_Crafting_Info_Time *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftQuantity,this);
  }
  return;
}

