// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetTextStyleTableID_WrapperImpl @ 14b6a17d0

void __cdecl UDS_VM_MoneyDisplay::SetTextStyleTableID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x140) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::TextStyleTableID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TextStyleTableID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6a17e0

UClass * __cdecl UDS_VM_MoneyDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyDisplay",
               &Z_Registration_Info_UClass_UDS_VM_MoneyDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyDisplay,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MoneyDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyDisplay>,local_res8,
               UDS_VM_Common_Money::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyDisplay.InnerSingleton;
}

// UDS_VM_MoneyDisplay @ 14b6a4dd0

UDS_VM_MoneyDisplay * __thiscall
UDS_VM_MoneyDisplay::UDS_VM_MoneyDisplay(UDS_VM_MoneyDisplay *this,FVTableHelper *param_1)

{
  UDS_VM_Common_Money::UDS_VM_Common_Money((UDS_VM_Common_Money *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyDisplay__6B_;
  return this;
}

// UDS_VM_MoneyDisplay @ 14b6a4e10

UDS_VM_MoneyDisplay * __thiscall
UDS_VM_MoneyDisplay::UDS_VM_MoneyDisplay(UDS_VM_MoneyDisplay *this,FObjectInitializer *param_1)

{
  UDS_VM_Common_Money::UDS_VM_Common_Money((UDS_VM_Common_Money *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyDisplay__6B_;
  return this;
}

// ~UDS_VM_MoneyDisplay @ 14b6a6fa0

void __thiscall UDS_VM_MoneyDisplay::~UDS_VM_MoneyDisplay(UDS_VM_MoneyDisplay *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyDisplay__6B_;
  UDS_VM_Common_Money::~UDS_VM_Common_Money((UDS_VM_Common_Money *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9630

IClassDescriptor * __thiscall
UDS_VM_MoneyDisplay::GetFieldNotificationDescriptor(UDS_VM_MoneyDisplay *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MoneyDisplay::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6a9e00

UClass * __cdecl UDS_VM_MoneyDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyDisplay",
               &Z_Registration_Info_UClass_UDS_VM_MoneyDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyDisplay,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MoneyDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyDisplay>,local_res8,
               UDS_VM_Common_Money::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyDisplay.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MoneyDisplay @ 14b6aac30

void __cdecl UDS_VM_MoneyDisplay::StaticRegisterNativesUDS_VM_MoneyDisplay(void)

{
  return;
}

// OnSetViewModel @ 14be3a190

void __thiscall
UDS_VM_MoneyDisplay::OnSetViewModel
          (UDS_VM_MoneyDisplay *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_38);
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
  SafeCast<FDS_ViewModelContext_MoneyDisplay>(&local_48,&local_28);
  if ((local_48.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
     ((local_48.Object)->_padding_ == 0)) {
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
    SetByContext(this,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetByContext @ 14be49440

void __thiscall
UDS_VM_MoneyDisplay::SetByContext
          (UDS_VM_MoneyDisplay *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FDS_MoneyBaseTableRow *this_00;
  ESlateVisibility EVar6;
  FName *pFVar7;
  EDS_MoneyType local_res10 [8];
  long64 local_res18 [2];
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_d8;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FDS_Text local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MoneyDisplay>(&local_d8,&local_48);
  if (local_d8.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8195743945272066007>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_MoneyDisplay.cpp"
                       ,0x29,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
  }
  else {
    local_res18[0] = (local_d8.Object)->Quantity;
    lVar3 = (local_d8.Object)->MoneyId;
    iVar2 = (local_d8.Object)->TextStyleId;
    bVar5 = (local_d8.Object)->IsHideDisplay;
    local_res10[0] = (EDS_MoneyType)lVar3;
    (**(code **)(this->_padding_ + 0x338))(this,local_res10);
    EVar6 = SelfHitTestInvisible;
    if (bVar5 == true) {
      EVar6 = Collapsed;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar6);
    if (lVar3 == 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      this_00 = FDS_MoneyBaseTableRow::GetRef(lVar3,true);
      bVar5 = FDS_MoneyBaseTableRow::IsValid(this_00);
      if (bVar5) {
        (**(code **)(this->_padding_ + 0x340))(this,&this_00->ID_MoneyIcon);
        local_98.StringTableType = None;
        local_98.DateTime.Ticks = 0;
        local_98.TimeSpan.Ticks = 0;
        pcVar4 = *(code **)(this->_padding_ + 0x348);
        local_98.StringTableID = 0;
        local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_98.StringEnumTableNameID.Number = 0;
        local_98.TimeExpressionType = None;
        local_98.IsExpression = false;
        local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.UniqueString.Data.ArrayNum = 0;
        local_98.UniqueString.Data.ArrayMax = 0;
        local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.FormatArgs.ArrayNum = 0;
        local_98.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_98,&this_00->ID_MoneyName);
        (*pcVar4)(this,&local_98);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
                   local_98.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
        }
        if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
        }
        (**(code **)(this->_padding_ + 0x350))(this,local_res18);
        plVar1 = &this->_padding_;
        if (0 < iVar2) {
          this->TextStyleTableID = iVar2;
          local_c0 = FFieldNotificationClassDescriptor::TextStyleTableID.BitNumber;
          local_c8 = FFieldNotificationClassDescriptor::TextStyleTableID.FieldName;
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_c8);
        }
        if ((local_d8.Object)->IsLackMoney == true) {
          bVar5 = UDS_MoneyDataSet::CheckEnoughMoney((EDS_MoneyType)lVar3,local_res18[0]);
          if (bVar5) {
            this->TextStyleTableID = 0x836;
            pFVar7 = &local_b8;
            local_b8 = FFieldNotificationClassDescriptor::TextStyleTableID.FieldName;
            local_b0 = FFieldNotificationClassDescriptor::TextStyleTableID.BitNumber;
          }
          else {
            this->TextStyleTableID = 0x84a;
            pFVar7 = &local_a8;
            local_a8 = FFieldNotificationClassDescriptor::TextStyleTableID.FieldName;
            local_a0 = FFieldNotificationClassDescriptor::TextStyleTableID.BitNumber;
          }
          (**(code **)(*plVar1 + 0x38))(plVar1,pFVar7);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTextStyleTableID @ 14be52100

void __thiscall UDS_VM_MoneyDisplay::SetTextStyleTableID(UDS_VM_MoneyDisplay *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->TextStyleTableID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::TextStyleTableID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextStyleTableID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateView @ 14be5aa60

void __thiscall
UDS_VM_MoneyDisplay::UpdateView
          (UDS_VM_MoneyDisplay *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x310))(plVar1,local_18);
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
    local_28.Object = (FDS_ViewModelContext *)*puVar2;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SetByContext(this,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

