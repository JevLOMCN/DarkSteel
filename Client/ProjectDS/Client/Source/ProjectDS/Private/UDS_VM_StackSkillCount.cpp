// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6e0c50

UClass * __cdecl UDS_VM_StackSkillCount::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StackSkillCount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StackSkillCount",
               &Z_Registration_Info_UClass_UDS_VM_StackSkillCount.InnerSingleton,
               StaticRegisterNativesUDS_VM_StackSkillCount,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StackSkillCount>,
               InternalVTableHelperCtorCaller<UDS_VM_StackSkillCount>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StackSkillCount.InnerSingleton;
}

// UDS_VM_StackSkillCount @ 14b6e5eb0

UDS_VM_StackSkillCount * __thiscall
UDS_VM_StackSkillCount::UDS_VM_StackSkillCount(UDS_VM_StackSkillCount *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_StackSkillCount = Collapsed;
  this->Vis_StackCount_1 = Collapsed;
  this->Vis_StackCount_2 = Collapsed;
  this->Vis_StackCount_3 = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StackSkillCount__6B_;
  (this->StackSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  this->StackSkillCount = 0;
  this->Vis_StackCount_4 = Collapsed;
  this->Vis_StackCount_5 = Collapsed;
  this->Vis_StackCountMax_1 = Collapsed;
  this->Vis_StackCountMax_2 = Collapsed;
  this->Vis_StackCountMax_3 = Collapsed;
  this->Vis_StackCountMax_4 = Collapsed;
  this->Vis_StackCountMax_5 = Collapsed;
  return this;
}

// UDS_VM_StackSkillCount @ 14b6e5f20

UDS_VM_StackSkillCount * __thiscall
UDS_VM_StackSkillCount::UDS_VM_StackSkillCount
          (UDS_VM_StackSkillCount *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_StackSkillCount = Collapsed;
  this->Vis_StackCount_1 = Collapsed;
  this->Vis_StackCount_2 = Collapsed;
  this->Vis_StackCount_3 = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StackSkillCount__6B_;
  (this->StackSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  this->StackSkillCount = 0;
  this->Vis_StackCount_4 = Collapsed;
  this->Vis_StackCount_5 = Collapsed;
  this->Vis_StackCountMax_1 = Collapsed;
  this->Vis_StackCountMax_2 = Collapsed;
  this->Vis_StackCountMax_3 = Collapsed;
  this->Vis_StackCountMax_4 = Collapsed;
  this->Vis_StackCountMax_5 = Collapsed;
  return this;
}

// ~UDS_VM_StackSkillCount @ 14b6e7330

void __thiscall UDS_VM_StackSkillCount::~UDS_VM_StackSkillCount(UDS_VM_StackSkillCount *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_StackSkillCount__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e98a0

IClassDescriptor * __thiscall
UDS_VM_StackSkillCount::GetFieldNotificationDescriptor(UDS_VM_StackSkillCount *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_StackSkillCount::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea3c0

UClass * __cdecl UDS_VM_StackSkillCount::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_StackSkillCount.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_StackSkillCount",
               &Z_Registration_Info_UClass_UDS_VM_StackSkillCount.InnerSingleton,
               StaticRegisterNativesUDS_VM_StackSkillCount,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_StackSkillCount>,
               InternalVTableHelperCtorCaller<UDS_VM_StackSkillCount>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_StackSkillCount.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_StackSkillCount @ 14b6eac50

void __cdecl UDS_VM_StackSkillCount::StaticRegisterNativesUDS_VM_StackSkillCount(void)

{
  return;
}

// OnChangedStackCount @ 14bf60bc0

void __thiscall
UDS_VM_StackSkillCount::OnChangedStackCount(UDS_VM_StackSkillCount *this,int param_1)

{
  TWeakObjectPtr<UDS_StackSkillData,FWeakObjectPtr> *this_00;
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FName FStack_18;
  int iStack_10;
  
  this_00 = &this->StackSkillData;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((bVar3) && (this->StackSkillCount != param_1)) {
    this->StackSkillCount = param_1;
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_1.FieldName;
    if (this->Vis_StackCount_1 != Collapsed) {
      this->Vis_StackCount_1 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_2.FieldName;
    if (this->Vis_StackCount_2 != Collapsed) {
      this->Vis_StackCount_2 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_3.FieldName;
    if (this->Vis_StackCount_3 != Collapsed) {
      this->Vis_StackCount_3 = Collapsed;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_4.FieldName;
    if (this->Vis_StackCount_4 != Collapsed) {
      this->Vis_StackCount_4 = Collapsed;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_5.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_5.FieldName;
    if (this->Vis_StackCount_5 != Collapsed) {
      this->Vis_StackCount_5 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_1.FieldName;
    if ((0 < param_1) && (this->Vis_StackCount_1 != SelfHitTestInvisible)) {
      this->Vis_StackCount_1 = SelfHitTestInvisible;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_2.FieldName;
    if ((1 < param_1) && (this->Vis_StackCount_2 != SelfHitTestInvisible)) {
      this->Vis_StackCount_2 = SelfHitTestInvisible;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_3.FieldName;
    if ((2 < param_1) && (this->Vis_StackCount_3 != SelfHitTestInvisible)) {
      this->Vis_StackCount_3 = SelfHitTestInvisible;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_4.FieldName;
    if ((3 < param_1) && (this->Vis_StackCount_4 != SelfHitTestInvisible)) {
      this->Vis_StackCount_4 = SelfHitTestInvisible;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_5.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_5.FieldName;
    if ((4 < param_1) && (this->Vis_StackCount_5 != SelfHitTestInvisible)) {
      this->Vis_StackCount_5 = SelfHitTestInvisible;
      FStack_18 = FVar1;
      iStack_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.FieldName;
    if (this->Vis_StackCountMax_1 != Collapsed) {
      this->Vis_StackCountMax_1 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.FieldName;
    if (this->Vis_StackCountMax_2 != Collapsed) {
      this->Vis_StackCountMax_2 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.FieldName;
    if (this->Vis_StackCountMax_3 != Collapsed) {
      this->Vis_StackCountMax_3 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.FieldName;
    if (this->Vis_StackCountMax_4 != Collapsed) {
      this->Vis_StackCountMax_4 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.FieldName;
    if (this->Vis_StackCountMax_5 != Collapsed) {
      this->Vis_StackCountMax_5 = Collapsed;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.FieldName;
    if ((0 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_1 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_1 = SelfHitTestInvisible;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.FieldName;
    if ((1 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_2 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_2 = SelfHitTestInvisible;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.FieldName;
    if ((2 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_3 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_3 = SelfHitTestInvisible;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.FieldName;
    if ((3 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_4 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_4 = SelfHitTestInvisible;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iStack_10 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.FieldName;
    if ((4 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_5 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_5 = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
    }
  }
  return;
}

// OnSetViewModel @ 14bf6df80

void __thiscall
UDS_VM_StackSkillCount::OnSetViewModel
          (UDS_VM_StackSkillCount *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_SkillData,1> local_28;
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
  SafeCast<FDS_ViewModelContext_SkillData>(&local_28,&local_18);
  iVar3 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.FieldName;
  if (local_28.Object == (FDS_ViewModelContext_SkillData *)0x0) {
    if (this->Vis_StackSkillCount != Collapsed) {
      this->Vis_StackSkillCount = Collapsed;
      local_30 = iVar3;
      local_38 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  else {
    if (local_28.Object == (FDS_ViewModelContext_SkillData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UpdateStackCount(this,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)
                          ((local_28.Object)->SkillData).WeakPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetStackSkillCount @ 14bf7da30

void __thiscall UDS_VM_StackSkillCount::SetStackSkillCount(UDS_VM_StackSkillCount *this,int param_1)

{
  TWeakObjectPtr<UDS_StackSkillData,FWeakObjectPtr> *this_00;
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FName local_18;
  int local_10;
  
  this_00 = &this->StackSkillData;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((bVar3) && (this->StackSkillCount != param_1)) {
    this->StackSkillCount = param_1;
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_1.FieldName;
    if (this->Vis_StackCount_1 != Collapsed) {
      this->Vis_StackCount_1 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_2.FieldName;
    if (this->Vis_StackCount_2 != Collapsed) {
      this->Vis_StackCount_2 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_3.FieldName;
    if (this->Vis_StackCount_3 != Collapsed) {
      this->Vis_StackCount_3 = Collapsed;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_4.FieldName;
    if (this->Vis_StackCount_4 != Collapsed) {
      this->Vis_StackCount_4 = Collapsed;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_5.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_5.FieldName;
    if (this->Vis_StackCount_5 != Collapsed) {
      this->Vis_StackCount_5 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_1.FieldName;
    if ((0 < param_1) && (this->Vis_StackCount_1 != SelfHitTestInvisible)) {
      this->Vis_StackCount_1 = SelfHitTestInvisible;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_2.FieldName;
    if ((1 < param_1) && (this->Vis_StackCount_2 != SelfHitTestInvisible)) {
      this->Vis_StackCount_2 = SelfHitTestInvisible;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_3.FieldName;
    if ((2 < param_1) && (this->Vis_StackCount_3 != SelfHitTestInvisible)) {
      this->Vis_StackCount_3 = SelfHitTestInvisible;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_4.FieldName;
    if ((3 < param_1) && (this->Vis_StackCount_4 != SelfHitTestInvisible)) {
      this->Vis_StackCount_4 = SelfHitTestInvisible;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCount_5.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCount_5.FieldName;
    if ((4 < param_1) && (this->Vis_StackCount_5 != SelfHitTestInvisible)) {
      this->Vis_StackCount_5 = SelfHitTestInvisible;
      local_18 = FVar1;
      local_10 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.FieldName;
    if (this->Vis_StackCountMax_1 != Collapsed) {
      this->Vis_StackCountMax_1 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.FieldName;
    if (this->Vis_StackCountMax_2 != Collapsed) {
      this->Vis_StackCountMax_2 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.FieldName;
    if (this->Vis_StackCountMax_3 != Collapsed) {
      this->Vis_StackCountMax_3 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.FieldName;
    if (this->Vis_StackCountMax_4 != Collapsed) {
      this->Vis_StackCountMax_4 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.FieldName;
    if (this->Vis_StackCountMax_5 != Collapsed) {
      this->Vis_StackCountMax_5 = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_1.FieldName;
    if ((0 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_1 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_1 = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_2.FieldName;
    if ((1 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_2 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_2 = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_3.FieldName;
    if ((2 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_3 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_3 = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar2 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Vis_StackCountMax_4.FieldName;
    if ((3 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_4 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_4 = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_10 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Vis_StackCountMax_5.FieldName;
    if ((4 < *(int *)&pUVar4[0x10].field_0xc) && (this->Vis_StackCountMax_5 != SelfHitTestInvisible)
       ) {
      this->Vis_StackCountMax_5 = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetVis_StackSkillCount @ 14bf81d10

void __thiscall
UDS_VM_StackSkillCount::SetVis_StackSkillCount
          (UDS_VM_StackSkillCount *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.FieldName;
  if (this->Vis_StackSkillCount != param_1) {
    this->Vis_StackSkillCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdateStackCount @ 14bf8aad0

void __thiscall
UDS_VM_StackSkillCount::UpdateStackCount
          (UDS_VM_StackSkillCount *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  TWeakObjectPtr<UDS_StackSkillData,FWeakObjectPtr> *this_00;
  FName FVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FName local_28;
  undefined8 uStack_20;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
LAB_14bf8acdf:
    iVar4 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.FieldName;
    if (this->Vis_StackSkillCount == Collapsed) {
      return;
    }
    this->Vis_StackSkillCount = Collapsed;
    uStack_20 = CONCAT44(uStack_20._4_4_,iVar4);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    cVar3 = (**(code **)(*(longlong *)pUVar5 + 0x300))(pUVar5);
    if (cVar3 == '\0') goto LAB_14bf8acdf;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_StackSkillData_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bf8ab5a;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bf8ab5a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  iVar4 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.FieldName;
  if (!bVar2) {
    if (this->Vis_StackSkillCount != Collapsed) {
      this->Vis_StackSkillCount = Collapsed;
      uStack_20 = CONCAT44(uStack_20._4_4_,iVar4);
      local_28 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    return;
  }
  this_00 = &this->StackSkillData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[0xf].field_0x10,this);
  }
  this_00->WeakPtr = local_res18;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[0xf].field_0x10,this);
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    local_28 = (FName)OnChangedStackCount;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_StackSkillCount>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar5[0xf].field_0x10,(UDS_VM_StackSkillCount *)&local_res20,(pmf_5093bda5 *)this);
  }
  iVar4 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Vis_StackSkillCount.FieldName;
  if (this->Vis_StackSkillCount != SelfHitTestInvisible) {
    this->Vis_StackSkillCount = SelfHitTestInvisible;
    uStack_20 = CONCAT44(uStack_20._4_4_,iVar4);
    local_28 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x2f0))(pUVar5);
  SetStackSkillCount(this,iVar4);
  return;
}

