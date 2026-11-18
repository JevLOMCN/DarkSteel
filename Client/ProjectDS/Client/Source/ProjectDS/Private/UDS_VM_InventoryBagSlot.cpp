// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b681e50

UClass * __cdecl UDS_VM_InventoryBagSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InventoryBagSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InventoryBagSlot",
               &Z_Registration_Info_UClass_UDS_VM_InventoryBagSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_InventoryBagSlot,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_InventoryBagSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_InventoryBagSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InventoryBagSlot.InnerSingleton;
}

// UDS_VM_InventoryBagSlot @ 14b683440

UDS_VM_InventoryBagSlot * __thiscall
UDS_VM_InventoryBagSlot::UDS_VM_InventoryBagSlot
          (UDS_VM_InventoryBagSlot *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_InventoryBagSlot__6B_;
  return this;
}

// UDS_VM_InventoryBagSlot @ 14b683480

UDS_VM_InventoryBagSlot * __thiscall
UDS_VM_InventoryBagSlot::UDS_VM_InventoryBagSlot
          (UDS_VM_InventoryBagSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_InventoryBagSlot__6B_;
  return this;
}

// ~UDS_VM_InventoryBagSlot @ 14b684160

void __thiscall UDS_VM_InventoryBagSlot::~UDS_VM_InventoryBagSlot(UDS_VM_InventoryBagSlot *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_InventoryBagSlot__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b684ed0

IClassDescriptor * __thiscall
UDS_VM_InventoryBagSlot::GetFieldNotificationDescriptor(UDS_VM_InventoryBagSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_InventoryBagSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6851c0

UClass * __cdecl UDS_VM_InventoryBagSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InventoryBagSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InventoryBagSlot",
               &Z_Registration_Info_UClass_UDS_VM_InventoryBagSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_InventoryBagSlot,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_InventoryBagSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_InventoryBagSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InventoryBagSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_InventoryBagSlot @ 14b685590

void __cdecl UDS_VM_InventoryBagSlot::StaticRegisterNativesUDS_VM_InventoryBagSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_InventoryBagSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsShowBagItemSlot0 @ 14b686550

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagItemSlot0(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagItemSlot0((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowBagItemSlot1 @ 14b686590

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagItemSlot1(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagItemSlot1((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowBagItemSlot2 @ 14b6865d0

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagItemSlot2(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagItemSlot2((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowBagItemSlot3 @ 14b686610

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagItemSlot3(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagItemSlot3((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowBagItemSlot4 @ 14b686650

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagItemSlot4(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagItemSlot4((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowBagSlotList @ 14b686690

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagSlotList(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagSlotList((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowBagTitle @ 14b6866d0

void __cdecl
UDS_VM_InventoryBagSlot::execIsShowBagTitle(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowBagTitle((UDS_VM_InventoryBagSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// IsShowBagItemSlot0 @ 14be277a0

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagItemSlot0(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 0 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 0 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017503>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x21,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsShowBagItemSlot1 @ 14be27870

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagItemSlot1(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 1 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 1 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017497>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x27,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsShowBagItemSlot2 @ 14be27940

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagItemSlot2(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 2 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 2 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017491>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x2d,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsShowBagItemSlot3 @ 14be27a10

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagItemSlot3(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 3 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 3 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017485>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x33,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsShowBagItemSlot4 @ 14be27ae0

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagItemSlot4(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar8;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum != 0) {
      iVar7 = _wtoi((wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
      return 4 < iVar7;
    }
    iVar7 = _wtoi(L"");
    return 4 < iVar7;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017479>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x39,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsShowBagSlotList @ 14be27bb0

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagSlotList(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      bVar4 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return bVar4;
    }
    bVar4 = FToBoolHelper::FromCStringWide(L"");
    return bVar4;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017509>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x1b,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsShowBagTitle @ 14be27c70

bool __thiscall UDS_VM_InventoryBagSlot::IsShowBagTitle(UDS_VM_InventoryBagSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      bVar4 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return bVar4;
    }
    bVar4 = FToBoolHelper::FromCStringWide(L"");
    return bVar4;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3498115854590017515>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_InventoryBagSlot.cpp"
                     ,0x15,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// UpdateView @ 14be59f00

void __thiscall
UDS_VM_InventoryBagSlot::UpdateView
          (UDS_VM_InventoryBagSlot *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::IsShowBagTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagTitle.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowBagSlotList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagSlotList.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowBagItemSlot0.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagItemSlot0.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowBagItemSlot1.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagItemSlot1.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowBagItemSlot2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagItemSlot2.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowBagItemSlot3.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagItemSlot3.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowBagItemSlot4.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowBagItemSlot4.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

