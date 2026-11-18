// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b682360

UClass * __cdecl UDS_VM_InventoryQuantity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InventoryQuantity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InventoryQuantity",
               &Z_Registration_Info_UClass_UDS_VM_InventoryQuantity.InnerSingleton,
               StaticRegisterNativesUDS_VM_InventoryQuantity,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_InventoryQuantity>,
               InternalVTableHelperCtorCaller<UDS_VM_InventoryQuantity>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InventoryQuantity.InnerSingleton;
}

// UDS_VM_InventoryQuantity @ 14b6834c0

UDS_VM_InventoryQuantity * __thiscall
UDS_VM_InventoryQuantity::UDS_VM_InventoryQuantity
          (UDS_VM_InventoryQuantity *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InventoryQuantity__6B_;
  (this->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ItemData).WeakPtr,(FObjectPtr)local_res8);
  this->InventoryType = None;
  this->InventoryDisable = false;
  return this;
}

// UDS_VM_InventoryQuantity @ 14b683530

UDS_VM_InventoryQuantity * __thiscall
UDS_VM_InventoryQuantity::UDS_VM_InventoryQuantity
          (UDS_VM_InventoryQuantity *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InventoryQuantity__6B_;
  (this->ItemData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->ItemData).WeakPtr,(FObjectPtr)local_res8);
  this->InventoryType = None;
  this->InventoryDisable = false;
  return this;
}

// ~UDS_VM_InventoryQuantity @ 14b684190

void __thiscall UDS_VM_InventoryQuantity::~UDS_VM_InventoryQuantity(UDS_VM_InventoryQuantity *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InventoryQuantity__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b684f40

IClassDescriptor * __thiscall
UDS_VM_InventoryQuantity::GetFieldNotificationDescriptor(UDS_VM_InventoryQuantity *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_InventoryQuantity::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b685280

UClass * __cdecl UDS_VM_InventoryQuantity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InventoryQuantity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InventoryQuantity",
               &Z_Registration_Info_UClass_UDS_VM_InventoryQuantity.InnerSingleton,
               StaticRegisterNativesUDS_VM_InventoryQuantity,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_InventoryQuantity>,
               InternalVTableHelperCtorCaller<UDS_VM_InventoryQuantity>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InventoryQuantity.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_InventoryQuantity @ 14b6855d0

void __cdecl UDS_VM_InventoryQuantity::StaticRegisterNativesUDS_VM_InventoryQuantity(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_InventoryQuantity_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInventoryIconID @ 14b686290

void __cdecl
UDS_VM_InventoryQuantity::execInventoryIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = InventoryIconID((UDS_VM_InventoryQuantity *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIsShow @ 14b686510

void __cdecl UDS_VM_InventoryQuantity::execIsShow(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShow((UDS_VM_InventoryQuantity *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execTextStyleID @ 14b6870c0

void __cdecl
UDS_VM_InventoryQuantity::execTextStyleID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = TextStyleID((UDS_VM_InventoryQuantity *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execTotalQuantity @ 14b687100

void __cdecl
UDS_VM_InventoryQuantity::execTotalQuantity(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = TotalQuantity((UDS_VM_InventoryQuantity *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execTradableQuantity @ 14b687140

void __cdecl
UDS_VM_InventoryQuantity::execTradableQuantity(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = TradableQuantity((UDS_VM_InventoryQuantity *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// BindModel @ 14be11980

void __thiscall UDS_VM_InventoryQuantity::BindModel(UDS_VM_InventoryQuantity *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014be119a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
    return;
  }
  return;
}

// InventoryIconID @ 14be25e30

int __thiscall UDS_VM_InventoryQuantity::InventoryIconID(UDS_VM_InventoryQuantity *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  FDS_InventoryBaseTableRow::GetAll(&local_18);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
  uVar3 = local_18._8_8_;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FDS_InventoryBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar3 = local_18._8_8_;
    }
    if (FVar4.Data == pFVar1) break;
    if (*(EDS_InventoryType *)(*(longlong *)FVar4.Data + 0x10) == this->InventoryType) {
      iVar2 = *(int *)(*(longlong *)FVar4.Data + 0x1c);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return iVar2;
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return 0;
}

// IsShow @ 14be27710

bool __thiscall UDS_VM_InventoryQuantity::IsShow(UDS_VM_InventoryQuantity *this)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    return false;
  }
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>
                    ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryQuantityData)local_res8);
  uVar2 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)(lVar1 + 0x40),uVar4 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum != 0) {
    bVar3 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
    return bVar3;
  }
  bVar3 = FToBoolHelper::FromCStringWide(L"");
  return bVar3;
}

// TextStyleID @ 14be549c0

int __thiscall UDS_VM_InventoryQuantity::TextStyleID(UDS_VM_InventoryQuantity *this)

{
  int iVar1;
  
  iVar1 = 0x836;
  if (this->InventoryDisable != false) {
    iVar1 = 0x84a;
  }
  return iVar1;
}

// TotalQuantity @ 14be54cc0

int __thiscall UDS_VM_InventoryQuantity::TotalQuantity(UDS_VM_InventoryQuantity *this)

{
  bool bVar1;
  UObject *pUVar2;
  int *piVar3;
  int *piVar4;
  EDS_InventoryType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemData).WeakPtr);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
  local_res8[0] = this->InventoryType;
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&pUVar2[10].field_0x18,(uint)local_res8[0],local_res8);
  piVar4 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&pUVar2[8].field_0x18,(uint)local_res8[0],local_res8);
  return *piVar4 + *piVar3;
}

// TradableQuantity @ 14be54d50

int __thiscall UDS_VM_InventoryQuantity::TradableQuantity(UDS_VM_InventoryQuantity *this)

{
  bool bVar1;
  UObject *pUVar2;
  int *piVar3;
  EDS_InventoryType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemData).WeakPtr);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->ItemData).WeakPtr);
  local_res8[0] = this->InventoryType;
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                     (&pUVar2[10].field_0x18,(uint)local_res8[0],local_res8);
  return *piVar3;
}

// UnbindModel @ 14be55420

void __thiscall UDS_VM_InventoryQuantity::UnbindModel(UDS_VM_InventoryQuantity *this)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = (UObject *)this->_padding_;
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
    }
    pUVar1 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if ((pvVar2 == (void *)0x0) || (*(char *)((longlong)pvVar2 + 0x10) != '\x01')) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2d0))();
    }
  }
  return;
}

// UpdateView @ 14be5a020

void __thiscall
UDS_VM_InventoryQuantity::UpdateView
          (UDS_VM_InventoryQuantity *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  FString *pFVar7;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar8;
  UEnum *this_00;
  FName *pFVar9;
  long64 lVar10;
  int iVar11;
  wchar_t *pwVar12;
  EDS_InventoryType EVar13;
  wchar_t *pwVar14;
  EDS_InventoryType local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_98;
  undefined1 local_90 [8];
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FString local_38;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3333579767763959782>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryQuantity.cpp"
                       ,0x1a,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryQuantityData)local_res8);
    uVar2 = *(undefined8 *)FVar6;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar6);
    pwVar14 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    _wtoi(pwVar12);
    TVar8 = DS_ItemDataUtil::GetItemDataByTID((int)local_res18);
    lVar1 = this->_padding_;
                    /* WARNING: Load size is inaccurate */
    (this->ItemData).WeakPtr = *TVar8.WeakPtr;
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryQuantityData)local_res20);
    uVar2 = *(undefined8 *)FVar6;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_38,pwVar12);
    this_00 = StaticEnum<enum_EDS_InventoryType>();
    EVar13 = local_res8[0];
    if (this_00 != (UEnum *)0x0) {
      iVar11 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      pFVar9 = ::FName::FName(&local_98,iVar11,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                              FNAME_Add);
      lVar10 = UEnum::GetValueByName(this_00,*pFVar9,None);
      EVar13 = (EDS_InventoryType)lVar10;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    lVar1 = this->_padding_;
    this->InventoryType = EVar13;
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryQuantityData)local_90);
    uVar2 = *(undefined8 *)FVar6;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar14);
    this->InventoryDisable = bVar4;
    local_80 = FFieldNotificationClassDescriptor::IsShow.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::IsShow.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_70 = FFieldNotificationClassDescriptor::TotalQuantity.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::TotalQuantity.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    local_60 = FFieldNotificationClassDescriptor::TradableQuantity.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::TradableQuantity.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    local_50 = FFieldNotificationClassDescriptor::InventoryIconID.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::InventoryIconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    local_40 = FFieldNotificationClassDescriptor::TextStyleID.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::TextStyleID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  return;
}

