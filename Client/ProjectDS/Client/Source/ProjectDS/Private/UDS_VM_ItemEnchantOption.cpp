// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b689440

UClass * __cdecl UDS_VM_ItemEnchantOption::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemEnchantOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemEnchantOption",
               &Z_Registration_Info_UClass_UDS_VM_ItemEnchantOption.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemEnchantOption,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemEnchantOption>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemEnchantOption>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemEnchantOption.InnerSingleton;
}

// UDS_VM_ItemEnchantOption @ 14b68d620

UDS_VM_ItemEnchantOption * __thiscall
UDS_VM_ItemEnchantOption::UDS_VM_ItemEnchantOption
          (UDS_VM_ItemEnchantOption *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchantOption__6B_;
  (this->FixedText_TargetSlot).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_TargetSlot).StringEnumTableNameID.Number = 0;
  (this->FixedText_TargetSlot).DateTime.Ticks = 0;
  (this->FixedText_TargetSlot).TimeSpan.Ticks = 0;
  (this->FixedText_TargetSlot).TimeExpressionType = None;
  (this->FixedText_TargetSlot).IsExpression = false;
  (this->FixedText_TargetSlot).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_TargetSlot).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_TargetSlot).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_TargetSlot).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_TargetSlot).FormatArgs.ArrayNum = 0;
  (this->FixedText_TargetSlot).FormatArgs.ArrayMax = 0;
  (this->FixedText_ScrollSlot).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ScrollSlot).StringEnumTableNameID.Number = 0;
  (this->FixedText_ScrollSlot).DateTime.Ticks = 0;
  (this->FixedText_ScrollSlot).TimeSpan.Ticks = 0;
  (this->FixedText_ScrollSlot).TimeExpressionType = None;
  (this->FixedText_ScrollSlot).IsExpression = false;
  (this->FixedText_ScrollSlot).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ScrollSlot).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ScrollSlot).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ScrollSlot).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ScrollSlot).FormatArgs.ArrayNum = 0;
  (this->FixedText_ScrollSlot).FormatArgs.ArrayMax = 0;
  (this->FixedText_TargetSlot).StringTableType = StringUi;
  (this->FixedText_TargetSlot).StringTableID = 0xa02f;
  (this->FixedText_ScrollSlot).StringTableType = StringUi;
  (this->FixedText_ScrollSlot).StringTableID = 0xa031;
  return this;
}

// UDS_VM_ItemEnchantOption @ 14b68d700

UDS_VM_ItemEnchantOption * __thiscall
UDS_VM_ItemEnchantOption::UDS_VM_ItemEnchantOption
          (UDS_VM_ItemEnchantOption *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchantOption__6B_;
  (this->FixedText_TargetSlot).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_TargetSlot).StringEnumTableNameID.Number = 0;
  (this->FixedText_TargetSlot).DateTime.Ticks = 0;
  (this->FixedText_TargetSlot).TimeSpan.Ticks = 0;
  (this->FixedText_TargetSlot).TimeExpressionType = None;
  (this->FixedText_TargetSlot).IsExpression = false;
  (this->FixedText_TargetSlot).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_TargetSlot).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_TargetSlot).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_TargetSlot).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_TargetSlot).FormatArgs.ArrayNum = 0;
  (this->FixedText_TargetSlot).FormatArgs.ArrayMax = 0;
  (this->FixedText_ScrollSlot).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ScrollSlot).StringEnumTableNameID.Number = 0;
  (this->FixedText_ScrollSlot).DateTime.Ticks = 0;
  (this->FixedText_ScrollSlot).TimeSpan.Ticks = 0;
  (this->FixedText_ScrollSlot).TimeExpressionType = None;
  (this->FixedText_ScrollSlot).IsExpression = false;
  (this->FixedText_ScrollSlot).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ScrollSlot).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ScrollSlot).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ScrollSlot).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ScrollSlot).FormatArgs.ArrayNum = 0;
  (this->FixedText_ScrollSlot).FormatArgs.ArrayMax = 0;
  (this->FixedText_TargetSlot).StringTableType = StringUi;
  (this->FixedText_TargetSlot).StringTableID = 0xa02f;
  (this->FixedText_ScrollSlot).StringTableType = StringUi;
  (this->FixedText_ScrollSlot).StringTableID = 0xa031;
  return this;
}

// ~UDS_VM_ItemEnchantOption @ 14b68e240

void __thiscall UDS_VM_ItemEnchantOption::~UDS_VM_ItemEnchantOption(UDS_VM_ItemEnchantOption *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemEnchantOption__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_ScrollSlot).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_ScrollSlot).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_ScrollSlot).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_ScrollSlot).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_TargetSlot).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_TargetSlot).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_TargetSlot).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_TargetSlot).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b690190

IClassDescriptor * __thiscall
UDS_VM_ItemEnchantOption::GetFieldNotificationDescriptor(UDS_VM_ItemEnchantOption *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemEnchantOption::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690d60

UClass * __cdecl UDS_VM_ItemEnchantOption::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemEnchantOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemEnchantOption",
               &Z_Registration_Info_UClass_UDS_VM_ItemEnchantOption.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemEnchantOption,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemEnchantOption>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemEnchantOption>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemEnchantOption.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemEnchantOption @ 14b691230

void __cdecl UDS_VM_ItemEnchantOption::StaticRegisterNativesUDS_VM_ItemEnchantOption(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemEnchantOption_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnchantOption @ 14b691ac0

void __cdecl
UDS_VM_ItemEnchantOption::execEnchantOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = EnchantOption((UDS_VM_ItemEnchantOption *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execEnchantSwitcher @ 14b691b40

void __cdecl
UDS_VM_ItemEnchantOption::execEnchantSwitcher(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = EnchantSwitcher((UDS_VM_ItemEnchantOption *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIsTargetOption @ 14b691d30

void __cdecl
UDS_VM_ItemEnchantOption::execIsTargetOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsVisibleScrollOptionName @ 14b691d50

void __cdecl
UDS_VM_ItemEnchantOption::execIsVisibleScrollOptionName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsVisibleScrollOptionName((UDS_VM_ItemEnchantOption *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsVisibleTargetOptionName @ 14b691d90

void __cdecl
UDS_VM_ItemEnchantOption::execIsVisibleTargetOptionName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsVisibleTargetOptionName((UDS_VM_ItemEnchantOption *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execScrollOptionName @ 14b6922b0

void __cdecl
UDS_VM_ItemEnchantOption::execScrollOptionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ScrollOptionName((UDS_VM_ItemEnchantOption *)param_1,&local_58);
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

// execTargetOption @ 14b692450

void __cdecl
UDS_VM_ItemEnchantOption::execTargetOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TargetOption((UDS_VM_ItemEnchantOption *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execTargetOptionName @ 14b6924d0

void __cdecl
UDS_VM_ItemEnchantOption::execTargetOptionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TargetOptionName((UDS_VM_ItemEnchantOption *)param_1,&local_58);
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

// execTargetSwitcher @ 14b692540

void __cdecl
UDS_VM_ItemEnchantOption::execTargetSwitcher(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = TargetSwitcher((UDS_VM_ItemEnchantOption *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// EnchantOption @ 14bd53b50

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemEnchantOption::EnchantOption
          (UDS_VM_ItemEnchantOption *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EDS_EnchantOptionState EVar7;
  FDS_EntryBindingEventField *pFVar8;
  FName FVar9;
  FString *pFVar10;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2081488632228609866>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                       ,0xb6,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDS_EntryBindingEventField *)(*pcVar3)();
      return pFVar8;
    }
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                    ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemEnchantOptionData)local_res8);
  uVar2 = *(undefined8 *)FVar9;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  iVar6 = _wtoi(_Str);
  EVar7 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                    ((FDS_DataContainer *)(this->_padding_ + 0x40),ScrollOptionState);
  if (EVar7 != SetOption) {
    if (EVar7 != PrefixOption) {
      (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
      (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    GetPrefixOption(this,__return_storage_ptr__,iVar6);
    return __return_storage_ptr__;
  }
  GetSetEffectOption(this,__return_storage_ptr__,iVar6);
  return __return_storage_ptr__;
}

// EnchantSwitcher @ 14bd53c90

int __thiscall UDS_VM_ItemEnchantOption::EnchantSwitcher(UDS_VM_ItemEnchantOption *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EDS_EnchantOptionState EVar4;
  
  if (this->_padding_ != 0) {
    EVar4 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),ScrollOptionState);
    return EVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2081488632228609878>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                     ,0xaa,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetOption @ 14bd5e420

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemEnchantOption::GetOption
          (UDS_VM_ItemEnchantOption *this,FDS_EntryBindingEventField *__return_storage_ptr__,
          EDS_EnchantOptionState param_1,int param_2)

{
  if (param_1 == SetOption) {
    GetSetEffectOption(this,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  if (param_1 != PrefixOption) {
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  GetPrefixOption(this,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetOptionName @ 14bd5e660

FDS_Text * __thiscall
UDS_VM_ItemEnchantOption::GetOptionName
          (UDS_VM_ItemEnchantOption *this,FDS_Text *__return_storage_ptr__,
          EDS_EnchantOptionState param_1,int param_2)

{
  FDS_ItemSetEffectTableRow *pFVar1;
  
  if (param_1 == SetOption) {
    pFVar1 = FDS_ItemSetEffectTableRow::Get((longlong)param_2,true);
  }
  else {
    if (param_1 != PrefixOption) {
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
    pFVar1 = (FDS_ItemSetEffectTableRow *)FDS_ItemPrefixTableRow::Get((longlong)param_2,true);
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
  if (pFVar1 != (FDS_ItemSetEffectTableRow *)0x0) {
    FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar1->ID_SetTitle);
  }
  return __return_storage_ptr__;
}

// GetPrefixOption @ 14bd5f220

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemEnchantOption::GetPrefixOption
          (UDS_VM_ItemEnchantOption *this,FDS_EntryBindingEventField *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_UserObjectListItem *this_00;
  UDS_M_ItemDetail_StatusSlot *this_01;
  undefined8 *puVar5;
  FDS_EntryBindingEventField *pFVar6;
  atomic<unsigned_char> *paVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res20;
  TArray<FDS_ItemStatusData,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  DS_ItemDataUtil::GetPrefixStatus(&local_58,param_1);
  iVar8 = local_58.ArrayNum;
  pFVar9 = local_58.AllocatorInstance.Data + 8;
  pFVar1 = local_58.AllocatorInstance.Data + (longlong)iVar8 * 0x18;
  do {
    if (local_58.ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_ItemStatusData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 + -8 == pFVar1) goto LAB_14bd5f3e7;
    pUVar4 = GetTransientPackageAsObject();
    this_00 = NewObject<UDS_UserObjectListItem>(pUVar4);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bd5f3ba;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bd5f3ba:
        iVar8 = 0x41;
        paVar7 = &bGEnsureHasExecuted<_2081488632228609983>;
        goto LAB_14bd5f3c7;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar4 = GetTransientPackageAsObject();
    this_01 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar4);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 == (UDS_M_ItemDetail_StatusSlot *)0x0) goto LAB_14bd5f3ab;
    }
    else {
      if (this_01 == (UDS_M_ItemDetail_StatusSlot *)0x0) {
LAB_14bd5f3ab:
        iVar8 = 0x44;
        paVar7 = &bGEnsureHasExecuted<_2081488632228609980>;
LAB_14bd5f3c7:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar7,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                           ,iVar8,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar6;
        }
LAB_14bd5f3e7:
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    UDS_M_ItemDetail_StatusSlot::SetStatusType(this_01,*(EDS_StatusType *)(pFVar9 + -8));
    UDS_M_ItemDetail_StatusSlot::SetStatusValue(this_01,*(int *)(pFVar9 + -4));
    UDS_M_ItemDetail_StatusSlot::SetStatusIconID(this_01,*(int *)pFVar9);
    UDS_M_ItemDetail_StatusSlot::SetStatusNameID(this_01,*(long64 *)(pFVar9 + 8));
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)this_01 + 0x310))(this_01,local_38);
    local_48.Object = (FDS_ViewModelContext *)*puVar5;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    local_res20 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_res20);
    pFVar9 = pFVar9 + 0x18;
  } while( true );
}

// GetSetEffectOption @ 14bd60a60

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemEnchantOption::GetSetEffectOption
          (UDS_VM_ItemEnchantOption *this,FDS_EntryBindingEventField *__return_storage_ptr__,
          int param_1)

{
  EDS_ViewModelTemplateKey *pEVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FLinearColor FVar3;
  bool bVar4;
  uint uVar5;
  FDS_ItemSetEffectTableRow *pFVar6;
  FDS_EntryBindingEventField *pFVar7;
  FDS_SkillPassiveTableRow *pFVar8;
  ForAnyElementType *pFVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar11;
  FDS_StatusTableRow *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong local_res20;
  UDS_UserObjectListItem *local_a8;
  longlong local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FString local_48;
  
  uVar18 = 0;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  pFVar6 = FDS_ItemSetEffectTableRow::Get((longlong)param_1,true);
  if (pFVar6 == (FDS_ItemSetEffectTableRow *)0x0) {
    return __return_storage_ptr__;
  }
  local_a0 = (longlong)(pFVar6->SetOptionType).ArrayNum;
  if (0 < local_a0) {
    local_res20 = 0;
    uVar20 = uVar18;
    do {
      uVar19 = (uint)uVar20;
      uVar16 = ~uVar19 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar19 < (pFVar6->SetOptionType).ArrayNum) {
        uVar5 = uVar16;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
        return pFVar7;
      }
      iVar17 = *(int *)((pFVar6->SetOptionType).AllocatorInstance.Data + local_res20);
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      if (iVar17 == 1) {
        uVar5 = 0;
        if ((int)uVar19 < (pFVar6->StatusType).ArrayNum) {
          uVar5 = uVar16;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar7;
        }
        pFVar12 = FDS_StatusTableRow::Get
                            ((longlong)
                             *(int *)((pFVar6->StatusType).AllocatorInstance.Data + uVar18 * 4),true
                            );
        if (pFVar12 != (FDS_StatusTableRow *)0x0) {
          uVar5 = 0;
          if ((int)uVar19 < (pFVar6->StatusValue).ArrayNum) {
            uVar5 = uVar16;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
            return pFVar7;
          }
          DS_Util::GetInfoViewValueFormattedString
                    (&local_48,pFVar12->InfoViewValueFormat,
                     (float)*(int *)((pFVar6->StatusValue).AllocatorInstance.Data + uVar18 * 4));
          (**(code **)((pFVar12->ID_StatusName)._padding_ + 8))(&pFVar12->ID_StatusName);
          ::FString::PrintfImpl(&local_78,L"%s %s");
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data);
          }
          local_98.Data = local_78.Data.AllocatorInstance.Data;
          local_90._0_4_ = local_78.Data.ArrayNum;
          local_90._4_4_ = local_78.Data.ArrayMax;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (iVar17 == 2) {
        uVar5 = 0;
        if ((int)uVar19 < (pFVar6->ID_Passive).ArrayNum) {
          uVar5 = uVar16;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar7;
        }
        pFVar8 = FDS_SkillPassiveTableRow::Get
                           ((longlong)
                            *(int *)((pFVar6->ID_Passive).AllocatorInstance.Data + uVar18 * 4),true)
        ;
        if ((pFVar8 != (FDS_SkillPassiveTableRow *)0x0) &&
           (pFVar9 = (ForAnyElementType *)
                     (**(code **)((pFVar8->ID_Explain)._padding_ + 8))(&pFVar8->ID_Explain),
           &local_98 != pFVar9)) {
          iVar17 = *(int *)&pFVar9[1].Data;
          _Src = pFVar9->Data;
          local_90._0_4_ = iVar17;
          if ((iVar17 == 0) && (local_90._4_4_ == 0)) {
            local_90._0_4_ = 0;
            local_90._4_4_ = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar17,local_90._4_4_,&local_98,iVar17,(int *)((longlong)&local_90 + 4));
            if (iVar17 != 0) {
              memcpy(local_98.Data,_Src,(longlong)iVar17 * 2);
            }
          }
        }
      }
      pFVar15 = (FDS_ViewModelContext *)0x0;
      pUVar10 = GetTransientPackageAsObject();
      this_00 = NewObject<UDS_UserObjectListItem>(pUVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar11 = ::operator_new(0x60);
      if (pFVar11 != (FDS_ViewModelContext *)0x0) {
        *(undefined4 *)&pFVar11->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 2) = 0;
        *(undefined2 *)((longlong)&pFVar11[1]._padding_ + 6) = 0;
        *(undefined4 *)&pFVar11[2].field_0x1c = 0;
        (pFVar11->ViewModelName).ComparisonIndex = 0;
        (pFVar11->ViewModelName).Number = 0;
        pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonVariation__6B_;
        pFVar11->DerivedStaticStruct = (UStruct *)0x0;
        pFVar11->ViewModelTemplateKey = None;
        *(undefined2 *)&pFVar11[1]._padding_ = 0x101;
        pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
        pFVar11[1].ViewModelName.ComparisonIndex = 0;
        pFVar11[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar11[1].ViewModelTemplateKey = 0;
        pFVar11[2]._padding_ = 0;
        FVar3 = FLinearColor::White;
        pFVar11[2].ViewModelTemplateKey = None;
        *(FLinearColor_u_0 *)&pFVar11[2].DerivedStaticStruct =
             (FLinearColor_u_0_s_0)FVar3.field0_0x0;
        pFVar15 = pFVar11;
      }
      pTVar13 = ::operator_new(0x20);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonVariation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar13[1].SharedReferenceCount = pFVar15;
      }
      if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
        return pFVar7;
      }
      pUVar14 = FDS_ViewModelContext_CommonVariation::StaticStruct();
      pFVar15->DerivedStaticStruct = (UStruct *)pUVar14;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar15;
        local_68.SharedReferenceCount.ReferenceController = pTVar13;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar15->ViewModelTemplateKey = Common_Variation;
      *(undefined1 *)&pFVar15[1]._padding_ = 4;
      iVar17 = (int)local_90 + -1;
      if ((int)local_90 == 0) {
        iVar17 = 0;
      }
      ::FString::AssignRange
                ((FString *)&pFVar15[1].DerivedStaticStruct,(wchar_t *)local_98.Data,iVar17);
      uVar5 = 0;
      if ((int)uVar19 < (pFVar6->SetCount).ArrayNum) {
        uVar5 = uVar16;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
        return pFVar7;
      }
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      ::FString::AppendInt
                (&local_88,*(int *)((pFVar6->SetCount).AllocatorInstance.Data + uVar18 * 4));
      pEVar1 = &pFVar15[1].ViewModelTemplateKey;
      if ((FString *)pEVar1 != &local_88) {
        if (*(void **)pEVar1 != (void *)0x0) {
          FMemory::Free(*(void **)pEVar1);
        }
        *(FScriptContainerElement **)pEVar1 = local_88.Data.AllocatorInstance.Data;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar15[2]._padding_ = local_88.Data.ArrayNum;
        *(int *)((longlong)&pFVar15[2]._padding_ + 4) = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar15;
      local_58.SharedReferenceCount.ReferenceController = pTVar13;
      UDS_UserObjectListItem::AddContext(this_00,&local_58);
      local_a8 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      local_res20 = local_res20 + 4;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < local_a0);
  }
  return __return_storage_ptr__;
}

// IsVisibleScrollOptionName @ 14bd6ce60

bool __thiscall UDS_VM_ItemEnchantOption::IsVisibleScrollOptionName(UDS_VM_ItemEnchantOption *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EDS_EnchantOptionState EVar4;
  
  if (this->_padding_ != 0) {
    EVar4 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),ScrollOptionState);
    return EVar4 != NoOption;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2081488632228609848>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                     ,200,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// IsVisibleTargetOptionName @ 14bd6ced0

bool __thiscall UDS_VM_ItemEnchantOption::IsVisibleTargetOptionName(UDS_VM_ItemEnchantOption *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EDS_EnchantOptionState EVar4;
  
  if (this->_padding_ != 0) {
    EVar4 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),TargetOptionState);
    return EVar4 != NoOption;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2081488632228609860>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                     ,0xbc,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// ScrollOptionName @ 14bd86880

FDS_Text * __thiscall
UDS_VM_ItemEnchantOption::ScrollOptionName
          (UDS_VM_ItemEnchantOption *this,FDS_Text *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EDS_EnchantOptionState EVar7;
  FDS_Text *pFVar8;
  FName FVar9;
  FString *pFVar10;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemEnchantOptionData)local_res8);
    uVar2 = *(undefined8 *)FVar9;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar9);
    if ((pFVar10->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar6 = _wtoi(_Str);
    EVar7 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),ScrollOptionState);
    GetOptionName(this,__return_storage_ptr__,EVar7,iVar6);
    return __return_storage_ptr__;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2081488632228609842>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                     ,0xce,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDS_Text *)(*pcVar3)();
    return pFVar8;
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

// TargetOption @ 14bd8af60

FDS_EntryBindingEventField * __thiscall
UDS_VM_ItemEnchantOption::TargetOption
          (UDS_VM_ItemEnchantOption *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EDS_EnchantOptionState EVar7;
  FDS_EntryBindingEventField *pFVar8;
  FName FVar9;
  FString *pFVar10;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2081488632228609872>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                       ,0xb0,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDS_EntryBindingEventField *)(*pcVar3)();
      return pFVar8;
    }
    (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
    (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                    ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemEnchantOptionData)local_res8);
  uVar2 = *(undefined8 *)FVar9;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  iVar6 = _wtoi(_Str);
  EVar7 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                    ((FDS_DataContainer *)(this->_padding_ + 0x40),TargetOptionState);
  if (EVar7 != SetOption) {
    if (EVar7 != PrefixOption) {
      (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
      (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    GetPrefixOption(this,__return_storage_ptr__,iVar6);
    return __return_storage_ptr__;
  }
  GetSetEffectOption(this,__return_storage_ptr__,iVar6);
  return __return_storage_ptr__;
}

// TargetOptionName @ 14bd8b0a0

FDS_Text * __thiscall
UDS_VM_ItemEnchantOption::TargetOptionName
          (UDS_VM_ItemEnchantOption *this,FDS_Text *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EDS_EnchantOptionState EVar7;
  FDS_Text *pFVar8;
  FName FVar9;
  FString *pFVar10;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_ItemEnchantOptionData)local_res8);
    uVar2 = *(undefined8 *)FVar9;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar9);
    if ((pFVar10->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar6 = _wtoi(_Str);
    EVar7 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),TargetOptionState);
    GetOptionName(this,__return_storage_ptr__,EVar7,iVar6);
    return __return_storage_ptr__;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2081488632228609854>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                     ,0xc2,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDS_Text *)(*pcVar3)();
    return pFVar8;
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

// TargetSwitcher @ 14bd8b1c0

int __thiscall UDS_VM_ItemEnchantOption::TargetSwitcher(UDS_VM_ItemEnchantOption *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EDS_EnchantOptionState EVar4;
  
  if (this->_padding_ != 0) {
    EVar4 = FDS_DataContainer::GetData<enum_EDS_EnchantOptionState,enum_EDS_ItemEnchantOptionData>
                      ((FDS_DataContainer *)(this->_padding_ + 0x40),TargetOptionState);
    return EVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2081488632228609884>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_VM_ItemEnchantOption.cpp"
                     ,0xa4,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// UpdateView @ 14bd93e40

void __thiscall
UDS_VM_ItemEnchantOption::UpdateView
          (UDS_VM_ItemEnchantOption *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::TargetSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetSwitcher.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EnchantSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnchantSwitcher.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TargetOption.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetOption.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EnchantOption.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnchantOption.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsVisibleTargetOptionName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsVisibleTargetOptionName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TargetOptionName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TargetOptionName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsVisibleScrollOptionName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsVisibleScrollOptionName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ScrollOptionName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ScrollOptionName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

