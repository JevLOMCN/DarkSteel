// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b687f90

UClass * __cdecl UDS_VM_ItemDetail_ItemSetSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemDetail_ItemSetSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemDetail_ItemSetSlot",
               &Z_Registration_Info_UClass_UDS_VM_ItemDetail_ItemSetSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemDetail_ItemSetSlot,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemDetail_ItemSetSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemDetail_ItemSetSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemDetail_ItemSetSlot.InnerSingleton;
}

// UDS_VM_ItemDetail_ItemSetSlot @ 14b68d340

UDS_VM_ItemDetail_ItemSetSlot * __thiscall
UDS_VM_ItemDetail_ItemSetSlot::UDS_VM_ItemDetail_ItemSetSlot
          (UDS_VM_ItemDetail_ItemSetSlot *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ItemDetail_ItemSetSlot__6B_;
  return this;
}

// UDS_VM_ItemDetail_ItemSetSlot @ 14b68d380

UDS_VM_ItemDetail_ItemSetSlot * __thiscall
UDS_VM_ItemDetail_ItemSetSlot::UDS_VM_ItemDetail_ItemSetSlot
          (UDS_VM_ItemDetail_ItemSetSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ItemDetail_ItemSetSlot__6B_;
  return this;
}

// ~UDS_VM_ItemDetail_ItemSetSlot @ 14b68e130

void __thiscall
UDS_VM_ItemDetail_ItemSetSlot::~UDS_VM_ItemDetail_ItemSetSlot(UDS_VM_ItemDetail_ItemSetSlot *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_ItemDetail_ItemSetSlot__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b690040

IClassDescriptor * __thiscall
UDS_VM_ItemDetail_ItemSetSlot::GetFieldNotificationDescriptor(UDS_VM_ItemDetail_ItemSetSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemDetail_ItemSetSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690b20

UClass * __cdecl UDS_VM_ItemDetail_ItemSetSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemDetail_ItemSetSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemDetail_ItemSetSlot",
               &Z_Registration_Info_UClass_UDS_VM_ItemDetail_ItemSetSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemDetail_ItemSetSlot,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemDetail_ItemSetSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemDetail_ItemSetSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemDetail_ItemSetSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemDetail_ItemSetSlot @ 14b691170

void __cdecl UDS_VM_ItemDetail_ItemSetSlot::StaticRegisterNativesUDS_VM_ItemDetail_ItemSetSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemDetail_ItemSetSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetItemName @ 14b692320

void __cdecl
UDS_VM_ItemDetail_ItemSetSlot::execSetItemName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SetItemName((UDS_VM_ItemDetail_ItemSetSlot *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execStyleID @ 14b692390

void __cdecl
UDS_VM_ItemDetail_ItemSetSlot::execStyleID(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = StyleID((UDS_VM_ItemDetail_ItemSetSlot *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execVisibleEquip @ 14b692760

void __cdecl
UDS_VM_ItemDetail_ItemSetSlot::execVisibleEquip(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleEquip((UDS_VM_ItemDetail_ItemSetSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// SetItemName @ 14bf14fe0

FDS_Text * __thiscall
UDS_VM_ItemDetail_ItemSetSlot::SetItemName
          (UDS_VM_ItemDetail_ItemSetSlot *this,FDS_Text *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_Text *pFVar5;
  FName FVar6;
  FString *pFVar7;
  longlong lVar8;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar8 = *(longlong *)&this->field_0xa0;
  if (lVar8 != 0) {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSetSlotData>
                      ((FDS_DataContainer *)(lVar8 + 0x40),(EDS_ItemSetSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar8 + 0x40),uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    lVar8 = _wtoi64(_Str);
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringItem,lVar8);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4469942171989966873>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_ItemSetSlot.cpp"
                     ,0x19,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_Text *)(*pcVar2)();
    return pFVar5;
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// StyleID @ 14bf1c9f0

long64 __thiscall UDS_VM_ItemDetail_ItemSetSlot::StyleID(UDS_VM_ItemDetail_ItemSetSlot *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  FName FVar6;
  FString *pFVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  lVar8 = *(longlong *)&this->field_0xa0;
  if (lVar8 != 0) {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSetSlotData>
                      ((FDS_DataContainer *)(lVar8 + 0x40),(EDS_ItemSetSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar8 + 0x40),uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum != 0) {
      lVar8 = _wtoi64((wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      return lVar8;
    }
    lVar8 = _wtoi64(L"");
    return lVar8;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4469942171989966879>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_ItemSetSlot.cpp"
                     ,0x1f,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  return 0;
}

// UpdateView @ 14bf25dc0

void __thiscall
UDS_VM_ItemDetail_ItemSetSlot::UpdateView
          (UDS_VM_ItemDetail_ItemSetSlot *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::VisibleEquip.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleEquip.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SetItemName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SetItemName.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::StyleID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StyleID.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

// VisibleEquip @ 14bf26250

ESlateVisibility __thiscall
UDS_VM_ItemDetail_ItemSetSlot::VisibleEquip(UDS_VM_ItemDetail_ItemSetSlot *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ESlateVisibility EVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)&this->field_0xa0;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSetSlotData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemSetSlotData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    EVar5 = Collapsed;
    if (bVar4) {
      EVar5 = SelfHitTestInvisible;
    }
    return EVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4469942171989966867>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_ItemDetail_ItemSetSlot.cpp"
                     ,0x13,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  return Collapsed;
}

