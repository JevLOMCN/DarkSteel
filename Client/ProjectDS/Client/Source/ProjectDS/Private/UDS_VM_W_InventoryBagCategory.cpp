// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b73d5b0

UClass * __cdecl UDS_VM_W_InventoryBagCategory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_InventoryBagCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_InventoryBagCategory",
               &Z_Registration_Info_UClass_UDS_VM_W_InventoryBagCategory.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_InventoryBagCategory,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_InventoryBagCategory>,
               InternalVTableHelperCtorCaller<UDS_VM_W_InventoryBagCategory>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_InventoryBagCategory.InnerSingleton;
}

// UDS_VM_W_InventoryBagCategory @ 14b7415d0

UDS_VM_W_InventoryBagCategory * __thiscall
UDS_VM_W_InventoryBagCategory::UDS_VM_W_InventoryBagCategory
          (UDS_VM_W_InventoryBagCategory *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->IsPointerScrollingEnabled = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBagCategory__6B_;
  (this->CategoryName).StringTableID = 0;
  (this->CategoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryName).StringEnumTableNameID.Number = 0;
  (this->CategoryName).DateTime.Ticks = 0;
  (this->CategoryName).TimeSpan.Ticks = 0;
  (this->CategoryName).TimeExpressionType = None;
  (this->CategoryName).IsExpression = false;
  (this->CategoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).UniqueString.Data.ArrayNum = 0;
  (this->CategoryName).UniqueString.Data.ArrayMax = 0;
  (this->CategoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).FormatArgs.ArrayNum = 0;
  (this->CategoryName).FormatArgs.ArrayMax = 0;
  (this->CategoryName).StringTableType = None;
  return this;
}

// UDS_VM_W_InventoryBagCategory @ 14b741670

UDS_VM_W_InventoryBagCategory * __thiscall
UDS_VM_W_InventoryBagCategory::UDS_VM_W_InventoryBagCategory
          (UDS_VM_W_InventoryBagCategory *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->IsPointerScrollingEnabled = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBagCategory__6B_;
  (this->CategoryName).StringTableID = 0;
  (this->CategoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CategoryName).StringEnumTableNameID.Number = 0;
  (this->CategoryName).DateTime.Ticks = 0;
  (this->CategoryName).TimeSpan.Ticks = 0;
  (this->CategoryName).TimeExpressionType = None;
  (this->CategoryName).IsExpression = false;
  (this->CategoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).UniqueString.Data.ArrayNum = 0;
  (this->CategoryName).UniqueString.Data.ArrayMax = 0;
  (this->CategoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryName).FormatArgs.ArrayNum = 0;
  (this->CategoryName).FormatArgs.ArrayMax = 0;
  (this->CategoryName).StringTableType = None;
  return this;
}

// ~UDS_VM_W_InventoryBagCategory @ 14b742cf0

void __thiscall
UDS_VM_W_InventoryBagCategory::~UDS_VM_W_InventoryBagCategory(UDS_VM_W_InventoryBagCategory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBagCategory__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CategoryName).FormatArgs.AllocatorInstance.Data,
             (this->CategoryName).FormatArgs.ArrayNum);
  pFVar1 = (this->CategoryName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CategoryName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744d50

IClassDescriptor * __thiscall
UDS_VM_W_InventoryBagCategory::GetFieldNotificationDescriptor(UDS_VM_W_InventoryBagCategory *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_InventoryBagCategory::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745500

UClass * __cdecl UDS_VM_W_InventoryBagCategory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_InventoryBagCategory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_InventoryBagCategory",
               &Z_Registration_Info_UClass_UDS_VM_W_InventoryBagCategory.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_InventoryBagCategory,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_InventoryBagCategory>,
               InternalVTableHelperCtorCaller<UDS_VM_W_InventoryBagCategory>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_InventoryBagCategory.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_InventoryBagCategory @ 14b745cb0

void __cdecl UDS_VM_W_InventoryBagCategory::StaticRegisterNativesUDS_VM_W_InventoryBagCategory(void)

{
  return;
}

// UpdateView @ 14c04f450

void __thiscall
UDS_VM_W_InventoryBagCategory::UpdateView
          (UDS_VM_W_InventoryBagCategory *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FName FVar10;
  FString *pFVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  wchar_t *_Str;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FName local_res20;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FDS_Text local_b8;
  undefined1 local_68 [8];
  FName local_60;
  undefined1 local_58 [32];
  
  pUVar9 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar8 = Z_Construct_UClass_UDS_M_InventoryBagCategory_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar5) {
      pUVar9 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  iVar4 = FFieldNotificationClassDescriptor::CategoryName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CategoryName.FieldName;
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                       ((FDS_DataContainer *)&pUVar9[1].field_0x18,
                        (EDS_InventoryBagCategoryData)local_68);
    uVar1 = *(undefined8 *)FVar10;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar9[1].field_0x18,uVar6 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar10);
    _Str = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar12 = ::FName::FName(&local_60,pwVar13);
    local_res20 = *pFVar12;
    local_b8.StringTableType = None;
    local_b8.StringTableID = 0;
    local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_b8.StringEnumTableNameID.Number = 0;
    local_b8.DateTime.Ticks = 0;
    local_b8.TimeSpan.Ticks = 0;
    local_b8.TimeExpressionType = None;
    local_b8.IsExpression = false;
    local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.UniqueString.Data.ArrayNum = 0;
    local_b8.UniqueString.Data.ArrayMax = 0;
    local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.FormatArgs.ArrayNum = 0;
    local_b8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_b8,&local_res20);
    FDS_Text::operator=(&this->CategoryName,&local_b8);
    local_d8 = FVar3;
    local_d0 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
               local_b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar4 = FFieldNotificationClassDescriptor::CategoryIconID.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CategoryIconID.FieldName;
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagCategoryData>
                       ((FDS_DataContainer *)&pUVar9[1].field_0x18,
                        (EDS_InventoryBagCategoryData)local_58);
    uVar1 = *(undefined8 *)FVar10;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar9[1].field_0x18,uVar6 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar10);
    if ((pFVar11->Data).ArrayNum != 0) {
      _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(_Str);
    if (this->CategoryIconID != iVar7) {
      this->CategoryIconID = iVar7;
      local_c8 = FVar3;
      local_c0 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8216951166634819573>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagCategory.cpp"
                       ,0xb,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

