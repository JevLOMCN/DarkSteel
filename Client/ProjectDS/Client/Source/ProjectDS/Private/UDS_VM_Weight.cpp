// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b6fa6d0

UClass * __cdecl UDS_VM_Weight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Weight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Weight",
               &Z_Registration_Info_UClass_UDS_VM_Weight.InnerSingleton,
               StaticRegisterNativesUDS_VM_Weight,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Weight>,InternalVTableHelperCtorCaller<UDS_VM_Weight>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Weight.InnerSingleton;
}

// UDS_VM_Weight @ 14b7004c0

UDS_VM_Weight * __thiscall UDS_VM_Weight::UDS_VM_Weight(UDS_VM_Weight *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_Weight__6B_;
  return this;
}

// UDS_VM_Weight @ 14b700500

UDS_VM_Weight * __thiscall
UDS_VM_Weight::UDS_VM_Weight(UDS_VM_Weight *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_Weight__6B_;
  return this;
}

// ~UDS_VM_Weight @ 14b702d60

void __thiscall UDS_VM_Weight::~UDS_VM_Weight(UDS_VM_Weight *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_Weight__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705e40

IClassDescriptor * __thiscall UDS_VM_Weight::GetFieldNotificationDescriptor(UDS_VM_Weight *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Weight::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706890

UClass * __cdecl UDS_VM_Weight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Weight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Weight",
               &Z_Registration_Info_UClass_UDS_VM_Weight.InnerSingleton,
               StaticRegisterNativesUDS_VM_Weight,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Weight>,InternalVTableHelperCtorCaller<UDS_VM_Weight>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Weight.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Weight @ 14b707640

void __cdecl UDS_VM_Weight::StaticRegisterNativesUDS_VM_Weight(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Weight_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCurrWeight @ 14b708720

void __cdecl UDS_VM_Weight::execCurrWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = CurrWeight((UDS_VM_Weight *)param_1,&local_58);
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

// execInventoryIconID @ 14b708790

void __cdecl UDS_VM_Weight::execInventoryIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = InventoryIconID((UDS_VM_Weight *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIsItemWeight @ 14b708810

void __cdecl UDS_VM_Weight::execIsItemWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsItemWeight((UDS_VM_Weight *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execLoadCapacity @ 14b708850

void __cdecl UDS_VM_Weight::execLoadCapacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = LoadCapacity((UDS_VM_Weight *)param_1,&local_58);
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

// BindModel @ 14be138b0

void __thiscall UDS_VM_Weight::BindModel(UDS_VM_Weight *this)

{
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if (*(longlong **)&this->field_0xa0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014be138d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0xa0 + 0x2c8))();
    return;
  }
  return;
}

// CurrWeight @ 14be1a720

FDS_Text * __thiscall
UDS_VM_Weight::CurrWeight(UDS_VM_Weight *this,FDS_Text *__return_storage_ptr__)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  UDS_M_Weight *this_01;
  FString *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FString local_18;
  
  this_00 = &this->field_0xa0;
  pUVar7 = (UObject *)0x0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Weight_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar7 = *(UObject **)this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Weight *)FWeakObjectPtr::Get(&local_res8);
    iVar3 = UDS_M_Weight::GetCurrWeight(this_01);
    pFVar6 = DS_Util::GetInfoViewValueFormattedString(&local_18,Weight,(float)iVar3);
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
    FDS_Text::SetTextFromUniqueString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7025577932223414237>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Weight.cpp"
                     ,0x23,"false");
  if (!bVar2) {
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
  pcVar1 = (code *)swi(3);
  pFVar5 = (FDS_Text *)(*pcVar1)();
  return pFVar5;
}

// InventoryIconID @ 14be25ee0

int __thiscall UDS_VM_Weight::InventoryIconID(UDS_VM_Weight *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UDS_M_Weight *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->field_0xa0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Weight_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = *(UObject **)this_00;
      goto LAB_14be25f0e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be25f0e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7025577932223414223>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Weight.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
  this_01 = (UDS_M_Weight *)FWeakObjectPtr::Get(&local_res8);
  iVar3 = UDS_M_Weight::GetInventoryIconID(this_01);
  return iVar3;
}

// IsItemWeight @ 14be269b0

bool __thiscall UDS_VM_Weight::IsItemWeight(UDS_VM_Weight *this)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UEnum *this_01;
  FString *pFVar9;
  longlong lVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  wchar_t *_Str;
  undefined4 local_res8 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res10;
  FName local_res20;
  FName local_48;
  UObject *local_40;
  undefined4 *local_38;
  FName *local_30;
  
  this_00 = &this->field_0xa0;
  pUVar12 = (UObject *)0x0;
  local_40 = pUVar12;
  if (*(longlong *)this_00 != 0) {
    pUVar7 = Z_Construct_UClass_UDS_M_Weight_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if (bVar4) {
      local_40 = *(UObject **)this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_40);
  }
  local_res10.Value = (FName *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_40);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_40);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res10.Value);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7025577932223414217>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Weight.cpp"
                       ,0x37,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    return false;
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res10.Value);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Str = L"";
  local_res8[0] = 2;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar10 = 0x154cf8458;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar10 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
               ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar10 + (ulonglong)
                              (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                               ::__l2::EnumNameCache._72_4_ - 1 & 2) * 4);
    while (iVar1 != -1) {
      lVar10 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
               ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(int *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                   ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == 2) {
        pUVar11 = (UObject *)(lVar10 + 4);
        if (lVar10 == 0) {
          pUVar11 = pUVar12;
        }
        if (pUVar11 != (UObject *)0x0) {
          local_res20.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x0;
          local_res20.Number = *(uint *)&pUVar11->field_0x4;
          goto LAB_14be26bc0;
        }
        break;
      }
      iVar1 = *(int *)(lVar10 + 0xc);
    }
  }
  this_01 = StaticEnum<enum_EDS_WeightData>();
  if (this_01 == (UEnum *)0x0) {
    ::FName::FName(&local_res20,L"");
  }
  else {
    UEnum::GetNameByValue(this_01,(long64)&local_48);
    local_38 = local_res8;
    local_30 = &local_48;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WeightData>(EDS_WeightData)___ptr64'
                   ::__l2::EnumNameCache,&local_res10,(bool *)&local_38);
    local_res20 = local_48;
  }
LAB_14be26bc0:
  FVar3 = local_res20;
  uVar6 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar8[1].field_0x18,uVar6 + FVar3.Number,&local_res20);
  if ((pFVar9->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  lVar10 = _wtoi64(_Str);
  return 0 < lVar10;
}

// LoadCapacity @ 14be28980

FDS_Text * __thiscall
UDS_VM_Weight::LoadCapacity(UDS_VM_Weight *this,FDS_Text *__return_storage_ptr__)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  UDS_M_Weight *this_01;
  FString *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FString local_18;
  
  this_00 = &this->field_0xa0;
  pUVar7 = (UObject *)0x0;
  if (*(longlong *)this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Weight_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar7 = *(UObject **)this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Weight *)FWeakObjectPtr::Get(&local_res8);
    iVar3 = UDS_M_Weight::GetLoadCapacity(this_01);
    pFVar6 = DS_Util::GetInfoViewValueFormattedString(&local_18,Weight,(float)iVar3);
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
    FDS_Text::SetTextFromUniqueString(__return_storage_ptr__,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7025577932223414230>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Weight.cpp"
                     ,0x2a,"false");
  if (!bVar2) {
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
  pcVar1 = (code *)swi(3);
  pFVar5 = (FDS_Text *)(*pcVar1)();
  return pFVar5;
}

// UnbindModel @ 14be55e50

void __thiscall UDS_VM_Weight::UnbindModel(UDS_VM_Weight *this)

{
  UObject *this_00;
  UClass *pUVar1;
  void *pvVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = *(UObject **)&this->field_0xa0;
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
      (**(code **)(**(longlong **)&this->field_0xa0 + 0x2d0))();
    }
  }
  return;
}

// UpdateView @ 14be5aeb0

void __thiscall
UDS_VM_Weight::UpdateView
          (UDS_VM_Weight *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::CurrWeight.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrWeight.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::LoadCapacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LoadCapacity.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::InventoryIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InventoryIconID.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

