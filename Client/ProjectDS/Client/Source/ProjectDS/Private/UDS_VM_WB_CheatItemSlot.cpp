// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetCheckBoxCheckedEvent_WrapperImpl @ 14b6ed950

void __cdecl
UDS_VM_WB_CheatItemSlot::SetCheckBoxCheckedEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CheatData *pUVar2;
  FDS_CheatItemInfo *pFVar3;
  bool abStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x174));
  if (bVar1) {
    pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x174));
    pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,*(int *)((longlong)param_1 + 0xb8));
    abStackX_8[0] = pFVar3->bIsTradeAble == false;
    pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x174));
    UDS_CheatData::SetCheatItemTradeAble(pUVar2,*(int *)((longlong)param_1 + 0xb8),abStackX_8);
    FStack_18 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
    if ((bool)*(char *)((longlong)param_1 + 0x150) != abStackX_8[0]) {
      iStack_10 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
      *(bool *)((longlong)param_1 + 0x150) = abStackX_8[0];
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  return;
}

// SetClickConfirmButton_WrapperImpl @ 14b6ed960

void __cdecl UDS_VM_WB_CheatItemSlot::SetClickConfirmButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_CheatData *pUVar2;
  FDS_CheatItemInfo *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  FString FStack_28;
  FString FStack_18;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x174));
  if (bVar1) {
    ::FString::FString(&FStack_28,L"ds.chat Item ");
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    ::FString::AppendInt64(&FStack_18,*(long64 *)((longlong)param_1 + 0xb8));
    iVar5 = FStack_18.Data.ArrayNum + -1;
    if (FStack_18.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&FStack_28,(wchar_t *)FStack_18.Data.AllocatorInstance.Data,iVar5);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&FStack_28,L" ",1);
    pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x174));
    pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,*(int *)((longlong)param_1 + 0xb8));
    if (pFVar3->bIsTradeAble == true) {
      ::FString::AppendChars(&FStack_28,L"0 ",2);
      pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x174));
      pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,*(int *)((longlong)param_1 + 0xb8));
      iVar6 = (pFVar3->ItemQuantity).Data.ArrayNum;
      pwVar4 = (wchar_t *)(pFVar3->ItemQuantity).Data.AllocatorInstance.Data;
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
    }
    else {
      pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x174));
      pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,*(int *)((longlong)param_1 + 0xb8));
      iVar5 = (pFVar3->ItemQuantity).Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (&FStack_28,(wchar_t *)(pFVar3->ItemQuantity).Data.AllocatorInstance.Data,iVar6);
      pwVar4 = L" 0";
      iVar5 = 2;
    }
    ::FString::AppendChars(&FStack_28,pwVar4,iVar5);
    UDS_GameInstance::ConsoleCommand(&FStack_28);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetTextChangedEvent_WrapperImpl @ 14b6ed970

void __cdecl UDS_VM_WB_CheatItemSlot::SetTextChangedEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  
  pFVar2 = FText::ToString(param_2);
  iVar1 = (pFVar2->Data).ArrayNum;
  if (iVar1 == *(int *)((longlong)param_1 + 0x108)) {
    if (iVar1 < 2) {
      return;
    }
    iVar1 = wcscmp((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                   *(wchar_t **)((longlong)param_1 + 0x100));
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = *(int *)((longlong)param_1 + 0x108) + iVar1 == 1;
  }
  if (!bVar3) {
    pFVar2 = FText::ToString(param_2);
    SetItemCount(param_1,pFVar2);
  }
  return;
}

// SetCheckedState_WrapperImpl @ 14b6ed980

void __cdecl UDS_VM_WB_CheatItemSlot::SetCheckedState_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
  if (*(char *)((longlong)param_1 + 0x150) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x150) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetSlotBackColor_WrapperImpl @ 14b6ed990

void __cdecl UDS_VM_WB_CheatItemSlot::SetSlotBackColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x154)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x158))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x15c))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x160))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::SlotBackColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::SlotBackColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x154) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x158) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x15c) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x160) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetGradeColor_WrapperImpl @ 14b6ed9a0

void __cdecl UDS_VM_WB_CheatItemSlot::SetGradeColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x164)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x168))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x16c))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x170))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::GradeColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::GradeColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x168) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x170) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6ed9b0

UClass * __cdecl UDS_VM_WB_CheatItemSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatItemSlot",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatItemSlot,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatItemSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatItemSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlot.InnerSingleton;
}

// UDS_VM_WB_CheatItemSlot @ 14b6f3470

UDS_VM_WB_CheatItemSlot * __thiscall
UDS_VM_WB_CheatItemSlot::UDS_VM_WB_CheatItemSlot
          (UDS_VM_WB_CheatItemSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->IconID = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatItemSlot__6B_;
  ::FString::FString(&this->ItemName,L"");
  this->ItemTID = 0;
  ::FString::FString(&this->ItemType,L"");
  ::FString::FString(&this->ItemGrade,L"");
  ::FString::FString(&this->EquipType,L"");
  ::FString::FString(&this->CharName,L"");
  ::FString::FString(&this->ItemCount,L"");
  (this->CheckBoxCheckedEvent).bIsActivate = false;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->SlotBackColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->GradeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->CheatData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_WB_CheatItemSlot @ 14b6f3590

UDS_VM_WB_CheatItemSlot * __thiscall
UDS_VM_WB_CheatItemSlot::UDS_VM_WB_CheatItemSlot
          (UDS_VM_WB_CheatItemSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->IconID = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatItemSlot__6B_;
  ::FString::FString(&this->ItemName,L"");
  this->ItemTID = 0;
  ::FString::FString(&this->ItemType,L"");
  ::FString::FString(&this->ItemGrade,L"");
  ::FString::FString(&this->EquipType,L"");
  ::FString::FString(&this->CharName,L"");
  ::FString::FString(&this->ItemCount,L"");
  (this->CheckBoxCheckedEvent).bIsActivate = false;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->SlotBackColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->GradeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->CheatData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_WB_CheatItemSlot @ 14b6f4900

void __thiscall UDS_VM_WB_CheatItemSlot::~UDS_VM_WB_CheatItemSlot(UDS_VM_WB_CheatItemSlot *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatItemSlot__6B_;
  pIVar1 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirmButton).Delegate);
  pvVar2 = *(void **)&(this->ClickConfirmButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirmButton).Delegate);
  pFVar3 = (this->ItemCount).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CharName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EquipType).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ItemGrade).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ItemType).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ItemName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f7110

IClassDescriptor * __thiscall
UDS_VM_WB_CheatItemSlot::GetFieldNotificationDescriptor(UDS_VM_WB_CheatItemSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_CheatItemSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7de0

UClass * __cdecl UDS_VM_WB_CheatItemSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatItemSlot",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatItemSlot,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatItemSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatItemSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatItemSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_CheatItemSlot @ 14b6f8530

void __cdecl UDS_VM_WB_CheatItemSlot::StaticRegisterNativesUDS_VM_WB_CheatItemSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WB_CheatItemSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEmptySlot @ 14b6f9570

void __cdecl
UDS_VM_WB_CheatItemSlot::execIsEmptySlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEmptySlot((UDS_VM_WB_CheatItemSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// InitUI @ 14bfaeb30

void __thiscall UDS_VM_WB_CheatItemSlot::InitUI(UDS_VM_WB_CheatItemSlot *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  EDS_GradeType EVar3;
  EDS_CharEquipType EVar4;
  EDS_ItemType EVar5;
  void *_Src;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FName FVar10;
  ForAnyElementType _Src_00;
  bool bVar11;
  int iVar12;
  FDS_ItemBaseTableRow *pFVar13;
  FString *pFVar14;
  UEnum *this_00;
  FLinearColor *pFVar15;
  FDS_CharacterBaseTableRow *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_158;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  bVar11 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (!bVar11) {
    return;
  }
  local_130 = FFieldNotificationClassDescriptor::IsEmptySlot.BitNumber;
  local_138 = FFieldNotificationClassDescriptor::IsEmptySlot.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
  if (this->ItemTID == 0) {
    return;
  }
  pFVar13 = FDS_ItemBaseTableRow::Get(this->ItemTID,true);
  iVar12 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FVar10 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (pFVar13 == (FDS_ItemBaseTableRow *)0x0) {
    return;
  }
  if (this->IconID != pFVar13->ID_Icon) {
    this->IconID = pFVar13->ID_Icon;
    local_120 = iVar12;
    local_128 = FVar10;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  pFVar14 = (FString *)(**(code **)((pFVar13->ID_Name)._padding_ + 8))(&pFVar13->ID_Name);
  iVar21 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  FVar10 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  iVar12 = (this->ItemName).Data.ArrayNum;
  iVar19 = (pFVar14->Data).ArrayNum;
  if (iVar12 == iVar19) {
    if (1 < iVar12) {
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(this->ItemName).Data.AllocatorInstance.Data,
                          (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
      bVar11 = iVar12 == 0;
      goto LAB_14bfaec5c;
    }
  }
  else {
    bVar11 = iVar19 + iVar12 == 1;
LAB_14bfaec5c:
    if (!bVar11) {
      ::FString::operator=(&this->ItemName,pFVar14);
      local_118 = FVar10;
      local_110 = iVar21;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
  }
  EVar5 = pFVar13->ItemType;
  this_00 = StaticEnum<enum_EDS_ItemType>();
  if (this_00 == (UEnum *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8627520946023956279>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",0xc9,
                        "false");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    iVar12 = 0;
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_78,(longlong)(int)EVar5);
    local_res10 = (FName)this_00->_padding_;
    ::FName::ToString(&local_res10,&local_c8);
    ::FString::PrintfImpl(&local_a8,L"%s_%s");
    DS_Util::GetEnumString(&local_158,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar12 = local_158.Data.ArrayNum;
  }
  iVar21 = FFieldNotificationClassDescriptor::ItemType.BitNumber;
  FVar10 = FFieldNotificationClassDescriptor::ItemType.FieldName;
  pFVar14 = &this->ItemType;
  iVar19 = (this->ItemType).Data.ArrayNum;
  if (iVar19 == iVar12) {
    if (1 < iVar19) {
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                          (wchar_t *)local_158.Data.AllocatorInstance.Data);
      bVar11 = iVar12 == 0;
      iVar12 = local_158.Data.ArrayNum;
      goto LAB_14bfaedbf;
    }
  }
  else {
    bVar11 = iVar19 + iVar12 == 1;
LAB_14bfaedbf:
    _Src_00.Data = local_158.Data.AllocatorInstance.Data;
    if (!bVar11) {
      if (pFVar14 != &local_158) {
        iVar19 = (this->ItemType).Data.ArrayMax;
        piVar1 = &(this->ItemType).Data.ArrayMax;
        (this->ItemType).Data.ArrayNum = iVar12;
        if ((iVar12 == 0) && (iVar19 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,iVar19,(ForAnyElementType *)pFVar14,iVar12,piVar1);
          if (iVar12 != 0) {
            memcpy((pFVar14->Data).AllocatorInstance.Data,_Src_00.Data,(longlong)iVar12 * 2);
          }
        }
      }
      local_108 = FVar10;
      local_100 = iVar21;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  EVar3 = pFVar13->ID_GradeType;
  ::FString::FString(&local_98,L"EDS_GradeType");
  pFVar14 = DS_Util::GetEnumToString(&local_68,&local_98,(ulonglong)EVar3);
  iVar21 = FFieldNotificationClassDescriptor::ItemGrade.BitNumber;
  FVar10 = FFieldNotificationClassDescriptor::ItemGrade.FieldName;
  iVar12 = (this->ItemGrade).Data.ArrayNum;
  iVar19 = (pFVar14->Data).ArrayNum;
  if (iVar12 == iVar19) {
    if (1 < iVar12) {
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(this->ItemGrade).Data.AllocatorInstance.Data,
                          (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
      bVar11 = iVar12 == 0;
      goto LAB_14bfaeea6;
    }
  }
  else {
    bVar11 = iVar19 + iVar12 == 1;
LAB_14bfaeea6:
    if (!bVar11) {
      ::FString::operator=(&this->ItemGrade,pFVar14);
      local_f8 = FVar10;
      local_f0 = iVar21;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  EVar4 = pFVar13->CharEquipType;
  ::FString::FString(&local_88,L"EDS_CharEquipType");
  pFVar14 = DS_Util::GetEnumToString(local_58,&local_88,(ulonglong)EVar4);
  iVar21 = FFieldNotificationClassDescriptor::EquipType.BitNumber;
  FVar10 = FFieldNotificationClassDescriptor::EquipType.FieldName;
  iVar12 = (this->EquipType).Data.ArrayNum;
  iVar19 = (pFVar14->Data).ArrayNum;
  if (iVar12 == iVar19) {
    if (iVar12 < 2) goto LAB_14bfaef7f;
    iVar12 = FGenericPlatformStricmp::Stricmp
                       ((wchar_t *)(this->EquipType).Data.AllocatorInstance.Data,
                        (wchar_t *)(pFVar14->Data).AllocatorInstance.Data);
    bVar11 = iVar12 == 0;
  }
  else {
    bVar11 = iVar19 + iVar12 == 1;
  }
  if (!bVar11) {
    ::FString::operator=(&this->EquipType,pFVar14);
    local_e8 = FVar10;
    local_e0 = iVar21;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
  }
LAB_14bfaef7f:
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar15 = DS_Util::GetGradeColor(&pFVar13->ID_GradeType);
  if (((((pFVar15->field0_0x0)._s_0.R != (this->GradeColor).field0_0x0._s_0.R) ||
       ((pFVar15->field0_0x0)._s_0.G != (this->GradeColor).field0_0x0._s_0.G)) ||
      ((pFVar15->field0_0x0)._s_0.B != (this->GradeColor).field0_0x0._s_0.B)) ||
     ((pFVar15->field0_0x0)._s_0.A != (this->GradeColor).field0_0x0._s_0.A)) {
    fVar7 = (pFVar15->field0_0x0)._s_0.G;
    fVar8 = (pFVar15->field0_0x0)._s_0.B;
    fVar9 = (pFVar15->field0_0x0)._s_0.A;
    local_d0 = FFieldNotificationClassDescriptor::GradeColor.BitNumber;
    local_d8 = FFieldNotificationClassDescriptor::GradeColor.FieldName;
    (this->GradeColor).field0_0x0._s_0.R = (pFVar15->field0_0x0)._s_0.R;
    (this->GradeColor).field0_0x0._s_0.G = fVar7;
    (this->GradeColor).field0_0x0._s_0.B = fVar8;
    (this->GradeColor).field0_0x0._s_0.A = fVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  }
  ::FString::FString(&local_b8,L"");
  pFVar20 = (pFVar13->ID_Character).AllocatorInstance.Data;
  iVar19 = 0;
  iVar12 = (pFVar13->ID_Character).ArrayNum;
  pFVar2 = pFVar20 + (longlong)iVar12 * 4;
  while( true ) {
    if ((pFVar13->ID_Character).ArrayNum != iVar12) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar20 == pFVar2) break;
    pFVar16 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)pFVar20,true);
    puVar17 = (undefined8 *)(**(code **)((pFVar16->ID_Name)._padding_ + 8))(&pFVar16->ID_Name);
    local_148.Data = (FScriptContainerElement *)0x0;
    local_140 = *(int *)(puVar17 + 1);
    lVar18 = (longlong)local_140;
    _Src = (void *)*puVar17;
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_140,0,&local_148,local_140,&local_13c);
      memcpy(local_148.Data,_Src,lVar18 * 2);
    }
    if (0 < iVar19) {
      ::FString::AppendChars(&local_b8,L", ",2);
    }
    iVar21 = local_140 + -1;
    if (local_140 == 0) {
      iVar21 = 0;
    }
    ::FString::AppendChars(&local_b8,(wchar_t *)local_148.Data,iVar21);
    iVar19 = iVar19 + 1;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    pFVar20 = pFVar20 + 4;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// InitViewModel @ 14bfaf180

void __thiscall UDS_VM_WB_CheatItemSlot::InitViewModel(UDS_VM_WB_CheatItemSlot *this)

{
  return;
}

// IsEmptySlot @ 14bfb2f70

bool __thiscall UDS_VM_WB_CheatItemSlot::IsEmptySlot(UDS_VM_WB_CheatItemSlot *this)

{
  return this->ItemTID < 1;
}

// OnCheckBoxCheckedEvent @ 14bfb78f0

void __thiscall
UDS_VM_WB_CheatItemSlot::OnCheckBoxCheckedEvent
          (UDS_VM_WB_CheatItemSlot *this,FDS_WidgetEventField *param_1)

{
  bool bVar1;
  UDS_CheatData *pUVar2;
  FDS_CheatItemInfo *pFVar3;
  bool local_res8 [8];
  FName local_18;
  int local_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar1) {
    pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,(int)this->ItemTID);
    local_res8[0] = pFVar3->bIsTradeAble == false;
    pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    UDS_CheatData::SetCheatItemTradeAble(pUVar2,(int)this->ItemTID,local_res8);
    local_18 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
    if (this->CheckedState != local_res8[0]) {
      local_10 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
      this->CheckedState = local_res8[0];
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnClickConfirmButton @ 14bfb9100

void __thiscall
UDS_VM_WB_CheatItemSlot::OnClickConfirmButton
          (UDS_VM_WB_CheatItemSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_CheatData *pUVar2;
  FDS_CheatItemInfo *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  FString local_28;
  FString local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar1) {
    ::FString::FString(&local_28,L"ds.chat Item ");
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::AppendInt64(&local_18,this->ItemTID);
    iVar5 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_28,L" ",1);
    pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,(int)this->ItemTID);
    if (pFVar3->bIsTradeAble == true) {
      ::FString::AppendChars(&local_28,L"0 ",2);
      pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
      pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,(int)this->ItemTID);
      iVar6 = (pFVar3->ItemQuantity).Data.ArrayNum;
      pwVar4 = (wchar_t *)(pFVar3->ItemQuantity).Data.AllocatorInstance.Data;
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
    }
    else {
      pUVar2 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
      pFVar3 = UDS_CheatData::GetCheatItemInfo(pUVar2,(int)this->ItemTID);
      iVar5 = (pFVar3->ItemQuantity).Data.ArrayNum;
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (&local_28,(wchar_t *)(pFVar3->ItemQuantity).Data.AllocatorInstance.Data,iVar6);
      pwVar4 = L" 0";
      iVar5 = 2;
    }
    ::FString::AppendChars(&local_28,pwVar4,iVar5);
    UDS_GameInstance::ConsoleCommand(&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSetViewModel @ 14bfc16c0

void __thiscall
UDS_VM_WB_CheatItemSlot::OnSetViewModel
          (UDS_VM_WB_CheatItemSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UDS_DataManager *this_00;
  TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr> TVar6;
  UDS_CheatData *pUVar7;
  FDS_CheatItemInfo *pFVar8;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_CheatItemSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_00 = UDS_DataManager::GetInst();
  if (this_00 != (UDS_DataManager *)0x0) {
    TVar6 = UDS_DataManager::GetCheatData(this_00);
                    /* WARNING: Load size is inaccurate */
    (this->CheatData).WeakPtr = *TVar6.WeakPtr;
    bVar5 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
    if ((bVar5) && (pFVar2 = param_1->Object, pFVar2 != (FDS_ViewModelContext *)0x0)) {
      local_18.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = pFVar2;
      SafeCast<FDS_ViewModelContext_CheatItemSlot>(&local_28,&local_18);
      if (local_28.Object != (FDS_ViewModelContext_CheatItemSlot *)0x0) {
        if ((local_28.Object == (FDS_ViewModelContext_CheatItemSlot *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar4 = FFieldNotificationClassDescriptor::ItemTID.FieldName;
        if (this->ItemTID != (local_28.Object)->TId) {
          local_30 = FFieldNotificationClassDescriptor::ItemTID.BitNumber;
          this->ItemTID = (local_28.Object)->TId;
          local_38 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        }
        pUVar7 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
        pFVar8 = UDS_CheatData::GetCheatItemInfo(pUVar7,(int)this->ItemTID);
        SetCheckedState(this,&pFVar8->bIsTradeAble);
        pUVar7 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
        pFVar8 = UDS_CheatData::GetCheatItemInfo(pUVar7,(int)this->ItemTID);
        SetItemCount(this,&pFVar8->ItemQuantity);
        InitUI(this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextChangedEvent @ 14bfcffe0

void __thiscall
UDS_VM_WB_CheatItemSlot::OnTextChangedEvent
          (UDS_VM_WB_CheatItemSlot *this,FDS_TextCommittedEventField *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  
  pFVar3 = FText::ToString(&param_1->NewText);
  iVar2 = (this->ItemCount).Data.ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      return;
    }
    iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                   (wchar_t *)(this->ItemCount).Data.AllocatorInstance.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (!bVar4) {
    pFVar3 = FText::ToString(&param_1->NewText);
    SetItemCount(this,pFVar3);
  }
  return;
}

// SetCharName @ 14bfd62b0

void __thiscall UDS_VM_WB_CheatItemSlot::SetCharName(UDS_VM_WB_CheatItemSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::CharName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::CharName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->CharName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->CharName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->CharName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCheckedState @ 14bfd6e90

void __thiscall
UDS_VM_WB_CheatItemSlot::SetCheckedState(UDS_VM_WB_CheatItemSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
  if (this->CheckedState != *param_1) {
    this->CheckedState = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEquipType @ 14bfd9900

void __thiscall
UDS_VM_WB_CheatItemSlot::SetEquipType(UDS_VM_WB_CheatItemSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::EquipType.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::EquipType.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->EquipType).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->EquipType).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->EquipType,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGradeColor @ 14bfda320

void __thiscall
UDS_VM_WB_CheatItemSlot::SetGradeColor(UDS_VM_WB_CheatItemSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->GradeColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->GradeColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->GradeColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->GradeColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::GradeColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GradeColor.FieldName;
    (this->GradeColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->GradeColor).field0_0x0._s_0.G = fVar1;
    (this->GradeColor).field0_0x0._s_0.B = fVar2;
    (this->GradeColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIconID @ 14bfda5e0

void __thiscall UDS_VM_WB_CheatItemSlot::SetIconID(UDS_VM_WB_CheatItemSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != *param_1) {
    this->IconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemCount @ 14bfdaa60

void __thiscall
UDS_VM_WB_CheatItemSlot::SetItemCount(UDS_VM_WB_CheatItemSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UDS_CheatData *this_00;
  FName local_28;
  int local_20;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  iVar3 = FFieldNotificationClassDescriptor::ItemCount.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ItemCount.FieldName;
  if (!bVar4) {
    return;
  }
  iVar5 = (this->ItemCount).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar5 == iVar1) {
    if (iVar5 < 2) goto LAB_14bfdaaff;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ItemCount).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = iVar5 + iVar1 == 1;
  }
  if (!bVar4) {
    ::FString::operator=(&this->ItemCount,param_1);
    local_28 = FVar2;
    local_20 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
LAB_14bfdaaff:
  this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  UDS_CheatData::SetCheatItemQuantity(this_00,(int)this->ItemTID,param_1);
  return;
}

// SetItemGrade @ 14bfdab40

void __thiscall
UDS_VM_WB_CheatItemSlot::SetItemGrade(UDS_VM_WB_CheatItemSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ItemGrade.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ItemGrade.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->ItemGrade).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ItemGrade).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->ItemGrade,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemName @ 14bfdb550

void __thiscall UDS_VM_WB_CheatItemSlot::SetItemName(UDS_VM_WB_CheatItemSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ItemName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ItemName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->ItemName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ItemName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->ItemName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemTID @ 14bfdb600

void __thiscall UDS_VM_WB_CheatItemSlot::SetItemTID(UDS_VM_WB_CheatItemSlot *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemTID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemTID.FieldName;
  if (this->ItemTID != *param_1) {
    this->ItemTID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemType @ 14bfdb650

void __thiscall UDS_VM_WB_CheatItemSlot::SetItemType(UDS_VM_WB_CheatItemSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::ItemType.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ItemType.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->ItemType).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ItemType).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->ItemType,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSlotBackColor @ 14bfdd8e0

void __thiscall
UDS_VM_WB_CheatItemSlot::SetSlotBackColor(UDS_VM_WB_CheatItemSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->SlotBackColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->SlotBackColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->SlotBackColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->SlotBackColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::SlotBackColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SlotBackColor.FieldName;
    (this->SlotBackColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->SlotBackColor).field0_0x0._s_0.G = fVar1;
    (this->SlotBackColor).field0_0x0._s_0.B = fVar2;
    (this->SlotBackColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

