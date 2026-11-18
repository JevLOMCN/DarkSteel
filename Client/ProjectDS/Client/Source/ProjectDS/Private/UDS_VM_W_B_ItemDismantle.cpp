// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b71c000

UClass * __cdecl UDS_VM_W_B_ItemDismantle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_ItemDismantle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_ItemDismantle",
               &Z_Registration_Info_UClass_UDS_VM_W_B_ItemDismantle.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_ItemDismantle,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_ItemDismantle>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_ItemDismantle>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_ItemDismantle.InnerSingleton;
}

// UDS_VM_W_B_ItemDismantle @ 14b71dbc0

UDS_VM_W_B_ItemDismantle * __thiscall
UDS_VM_W_B_ItemDismantle::UDS_VM_W_B_ItemDismantle
          (UDS_VM_W_B_ItemDismantle *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_ItemDismantle__6B_;
  (this->VM_ResetButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_DismantleButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_Money).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_AllCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->VM_EquipableCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->VM_UnEquipableCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->FixedText_InfoTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_InfoTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_InfoTitle).DateTime.Ticks = 0;
  (this->FixedText_InfoTitle).TimeSpan.Ticks = 0;
  (this->FixedText_InfoTitle).TimeExpressionType = None;
  (this->FixedText_InfoTitle).IsExpression = false;
  (this->FixedText_InfoTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_InfoTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_InfoTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_InfoTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_InfoTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_InfoTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_DismantleCost).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DismantleCost).StringEnumTableNameID.Number = 0;
  (this->FixedText_DismantleCost).DateTime.Ticks = 0;
  (this->FixedText_DismantleCost).TimeSpan.Ticks = 0;
  (this->FixedText_DismantleCost).TimeExpressionType = None;
  (this->FixedText_DismantleCost).IsExpression = false;
  (this->FixedText_DismantleCost).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DismantleCost).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DismantleCost).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DismantleCost).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_DismantleCost).FormatArgs.ArrayNum = 0;
  (this->FixedText_DismantleCost).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_SelectItem).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_SelectItem).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_SelectItem).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_SelectItem).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_SelectItem).TimeExpressionType = None;
  (this->FixedText_SubTitle_SelectItem).IsExpression = false;
  (this->FixedText_SubTitle_SelectItem).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_SelectItem).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_SelectItem).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_SelectItem).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_SelectItem).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_SelectItem).FormatArgs.ArrayMax = 0;
  (this->FixedText_InfoTitle).StringTableType = StringUi;
  (this->FixedText_InfoTitle).StringTableID = 0x9efd;
  (this->FixedText_DismantleCost).StringTableType = StringUi;
  (this->FixedText_DismantleCost).StringTableID = 0x9f06;
  (this->FixedText_SubTitle_SelectItem).StringTableType = StringUi;
  (this->FixedText_SubTitle_SelectItem).StringTableID = 0x9f16;
  return this;
}

// UDS_VM_W_B_ItemDismantle @ 14b71dd20

UDS_VM_W_B_ItemDismantle * __thiscall
UDS_VM_W_B_ItemDismantle::UDS_VM_W_B_ItemDismantle
          (UDS_VM_W_B_ItemDismantle *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_ItemDismantle__6B_;
  (this->VM_ResetButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_DismantleButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_Money).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_AllCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->VM_EquipableCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->VM_UnEquipableCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->FixedText_InfoTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_InfoTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_InfoTitle).DateTime.Ticks = 0;
  (this->FixedText_InfoTitle).TimeSpan.Ticks = 0;
  (this->FixedText_InfoTitle).TimeExpressionType = None;
  (this->FixedText_InfoTitle).IsExpression = false;
  (this->FixedText_InfoTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_InfoTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_InfoTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_InfoTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_InfoTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_InfoTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_DismantleCost).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DismantleCost).StringEnumTableNameID.Number = 0;
  (this->FixedText_DismantleCost).DateTime.Ticks = 0;
  (this->FixedText_DismantleCost).TimeSpan.Ticks = 0;
  (this->FixedText_DismantleCost).TimeExpressionType = None;
  (this->FixedText_DismantleCost).IsExpression = false;
  (this->FixedText_DismantleCost).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DismantleCost).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DismantleCost).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DismantleCost).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_DismantleCost).FormatArgs.ArrayNum = 0;
  (this->FixedText_DismantleCost).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_SelectItem).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_SelectItem).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_SelectItem).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_SelectItem).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_SelectItem).TimeExpressionType = None;
  (this->FixedText_SubTitle_SelectItem).IsExpression = false;
  (this->FixedText_SubTitle_SelectItem).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_SelectItem).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_SelectItem).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_SelectItem).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_SelectItem).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_SelectItem).FormatArgs.ArrayMax = 0;
  (this->FixedText_InfoTitle).StringTableType = StringUi;
  (this->FixedText_InfoTitle).StringTableID = 0x9efd;
  (this->FixedText_DismantleCost).StringTableType = StringUi;
  (this->FixedText_DismantleCost).StringTableID = 0x9f06;
  (this->FixedText_SubTitle_SelectItem).StringTableType = StringUi;
  (this->FixedText_SubTitle_SelectItem).StringTableID = 0x9f16;
  return this;
}

// ~UDS_VM_W_B_ItemDismantle @ 14b71f660

void __thiscall UDS_VM_W_B_ItemDismantle::~UDS_VM_W_B_ItemDismantle(UDS_VM_W_B_ItemDismantle *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_ItemDismantle__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SubTitle_SelectItem).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SubTitle_SelectItem).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SubTitle_SelectItem).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SubTitle_SelectItem).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_DismantleCost).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_DismantleCost).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_DismantleCost).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_DismantleCost).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_InfoTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_InfoTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_InfoTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_InfoTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b721100

IClassDescriptor * __thiscall
UDS_VM_W_B_ItemDismantle::GetFieldNotificationDescriptor(UDS_VM_W_B_ItemDismantle *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_ItemDismantle::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7216a0

UClass * __cdecl UDS_VM_W_B_ItemDismantle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_ItemDismantle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_ItemDismantle",
               &Z_Registration_Info_UClass_UDS_VM_W_B_ItemDismantle.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_ItemDismantle,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_B_ItemDismantle>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_ItemDismantle>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_ItemDismantle.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_ItemDismantle @ 14b721b60

void __cdecl UDS_VM_W_B_ItemDismantle::StaticRegisterNativesUDS_VM_W_B_ItemDismantle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_B_ItemDismantle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEmpty @ 14b722bc0

void __cdecl UDS_VM_W_B_ItemDismantle::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEmpty((UDS_VM_W_B_ItemDismantle *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// IsEmpty @ 14bfb2d90

bool __thiscall UDS_VM_W_B_ItemDismantle::IsEmpty(UDS_VM_W_B_ItemDismantle *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_ItemDismantle *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfb2dbe;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfb2dbe:
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
                      (&bGEnsureHasExecuted<_3951022269077126971>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0xc5,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_ItemDismantle::IsEmpty(this_01);
  return bVar2;
}

// OnChangedFilter @ 14bfb6920

void __thiscall
UDS_VM_W_B_ItemDismantle::OnChangedFilter(UDS_VM_W_B_ItemDismantle *this,uint param_1,uint param_2)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_ItemDismantle *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfb6954;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfb6954:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_ItemDismantle::OnChangedFilter(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077126983>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0xb9,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedAutoRegisterButton @ 14bfbb390

void __thiscall
UDS_VM_W_B_ItemDismantle::OnClickedAutoRegisterButton
          (UDS_VM_W_B_ItemDismantle *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_ItemDismantle *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbb3be;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbb3be:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(local_res8);
    UDS_M_ItemDismantle::OnClickedAutoRegisterButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077126989>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0xb3,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedDismantleButton @ 14bfbb7e0

void __thiscall
UDS_VM_W_B_ItemDismantle::OnClickedDismantleButton
          (UDS_VM_W_B_ItemDismantle *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_ItemDismantle *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbb80e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbb80e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(local_res8);
    UDS_M_ItemDismantle::OnClickedDismantleButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077126995>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0xad,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedResetButton @ 14bfbbae0

void __thiscall
UDS_VM_W_B_ItemDismantle::OnClickedResetButton
          (UDS_VM_W_B_ItemDismantle *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_ItemDismantle *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbbb0e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbbb0e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(local_res8);
    UDS_M_ItemDismantle::OnClickedResetButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127001>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0xa7,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnGradeTypeFilterChanged @ 14bfbd5d0

void __thiscall
UDS_VM_W_B_ItemDismantle::OnGradeTypeFilterChanged(UDS_VM_W_B_ItemDismantle *this,int param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_ItemDismantle *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbd604;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbd604:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_ItemDismantle::OnChangedGradeFilter(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077126977>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0xbf,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfc5650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_ItemDismantle::OnSetViewModel
          (UDS_VM_W_B_ItemDismantle *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  FDS_ViewModelContext_Dropdown *pFVar4;
  undefined8 uVar5;
  FDS_ViewModelContext_CommonIconTextButton *pFVar6;
  bool bVar7;
  EDS_ItemDismantleFilter EVar8;
  int iVar9;
  UClass *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UDS_VM_CommonIconTextButton *pUVar13;
  UDS_VM_Common_Check_Text *pUVar14;
  UDS_M_ItemDismantle *pUVar15;
  FDS_ViewModelContext_CommonCheckText *pFVar16;
  UDS_VM_MoneyDisplay *pUVar17;
  FDS_ViewModelContext_MoneyDisplay *pFVar18;
  UDS_LogManager *pUVar19;
  FDS_ViewModelContext_Dropdown *pFVar20;
  UObject *pUVar21;
  UEnum *pUVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  size_t _Size;
  ForAnyElementType FVar25;
  FSharedReferencer<1> *pFVar26;
  UObject *pUVar27;
  undefined1 auStackY_698 [32];
  undefined1 local_658 [16];
  code *local_648;
  undefined4 uStack_640;
  uint uStack_63c;
  FWeakObjectPtr local_638;
  FWeakObjectPtr local_630;
  ForAnyElementType local_628;
  int local_620;
  int local_61c;
  undefined1 local_618 [8];
  FDelegateAllocation local_610;
  TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> local_5f8;
  FDS_Text local_5e8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_598;
  TSharedPtr<FDS_ViewModelContext,1> local_588;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_578;
  FName local_568;
  UDS_VM_W_B_ItemDismantle *local_560;
  FName local_558;
  UDS_VM_W_B_ItemDismantle *local_550;
  FName local_548;
  FName local_540;
  UObject *local_538;
  undefined1 local_530 [48];
  ForAnyElementType FStack_500;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_4f8;
  TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> local_4e8;
  TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> local_4d8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_4c8;
  UObject *local_4b8;
  FName local_4b0;
  UDS_VM_W_B_ItemDismantle *local_4a8;
  FDS_Text local_4a0;
  FDS_Text local_450;
  FDS_Text local_400;
  FDS_Text local_3b0;
  FDS_Text local_360;
  FDS_Text local_310;
  TSharedPtr<FDS_ViewModelContext,1> local_2c0;
  FDestructionSentinel local_2b0;
  FDestructionSentinel local_298;
  undefined1 *local_280;
  FDestructionSentinel local_278;
  undefined1 *local_260;
  FDestructionSentinel local_258;
  FDelegateAllocation *local_240;
  FDestructionSentinel local_238;
  undefined1 *local_220;
  FDestructionSentinel local_218;
  UStruct **local_200;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  code *local_1e8;
  longlong lStack_1e0;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  code *local_1c8;
  longlong lStack_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_2c0.Object = param_1->Object;
  pFVar26 = &param_1->SharedReferenceCount;
  local_2c0.SharedReferenceCount.ReferenceController = pFVar26->ReferenceController;
  if (local_2c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_530._8_8_ = pFVar26;
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_2c0);
  pUVar27 = (UObject *)0x0;
  pUVar21 = pUVar27;
  if (this->_padding_ != 0) {
    pUVar10 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar10);
    if (bVar7) {
      pUVar21 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar21);
  }
  local_638.ObjectIndex = 0;
  local_638.ObjectSerialNumber = 0;
  local_4b8 = pUVar21;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar21);
  }
  FWeakObjectPtr::operator=(&local_638,(FObjectPtr)&local_4b8);
  bVar7 = FWeakObjectPtr::IsValid(&local_638);
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127147>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x15,"false");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14bfc6ab4;
  }
  if ((this->VM_ResetButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>
              ((TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> *)(local_530 + 0x28));
    uVar5 = local_530._40_8_;
    if (((FDS_ViewModelContext *)local_530._40_8_ == (FDS_ViewModelContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(EDS_ViewModelTemplateKey *)(uVar5 + 0x18) = CommonIconTextButton;
    ::FName::FName(&local_4b0,"DS_VM_CommonIconTextButton_Reset");
    *(FName *)(uVar5 + 0x10) = local_4b0;
    local_4a0.StringTableType = None;
    local_4a0.StringTableID = 0;
    local_4a0.DateTime.Ticks = 0;
    local_4a0.TimeSpan.Ticks = 0;
    local_4a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_4a0.StringEnumTableNameID.Number = 0;
    local_4a0.TimeExpressionType = None;
    local_4a0.IsExpression = false;
    local_4a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.UniqueString.Data.ArrayNum = 0;
    local_4a0.UniqueString.Data.ArrayMax = 0;
    local_4a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.FormatArgs.ArrayNum = 0;
    local_4a0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_4a0,StringUi,0x9f03);
    FDS_Text::operator=((FDS_Text *)&((FDS_ViewModelContext *)(uVar5 + 0x20))->DerivedStaticStruct,
                        &local_4a0);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_4a0.FormatArgs.AllocatorInstance.Data,
               local_4a0.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_4a0.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_4a0.FormatArgs.AllocatorInstance.Data);
    }
    if (local_4a0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.UniqueString.Data.AllocatorInstance.Data);
    }
    uStack_640 = 0;
    local_648 = OnClickedResetButton;
    uStack_63c = local_588.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(uVar5 + 0xe0),
               (FWriteAccessScope *)&local_218);
    local_200 = &((FDS_ViewModelContext *)(uVar5 + 0xe0))->DerivedStaticStruct;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_200);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_ItemDismantle____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_4a8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_4a8);
      puVar11[4] = local_648;
      puVar11[5] = CONCAT44(uStack_63c,uStack_640);
    }
    if (local_218.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
    }
    local_188.Object = (FDS_ViewModelContext *)local_530._40_8_;
    local_188.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)FStack_500.Data;
    if ((TReferenceControllerBase<1> *)FStack_500.Data != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(FStack_500.Data + 8) =
           (atomic<int>)((int)*(atomic<int> *)(FStack_500.Data + 8) + 1);
      UNLOCK();
    }
    pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
                        ((UObject *)this,&local_188);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->VM_ResetButton).field0_0x0.DebugPtr = pUVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_500.Data);
  }
  if ((this->VM_DismantleButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_4f8);
    pFVar6 = local_4f8.Object;
    if ((local_4f8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar6->_padding_ = 0x15b;
    ::FName::FName(&local_568,"DS_VM_CommonIconTextButton_Dismantle");
    pFVar6->_padding_ = (longlong)local_568;
    local_450.StringTableType = None;
    local_450.StringTableID = 0;
    local_450.DateTime.Ticks = 0;
    local_450.TimeSpan.Ticks = 0;
    local_450.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_450.StringEnumTableNameID.Number = 0;
    local_450.TimeExpressionType = None;
    local_450.IsExpression = false;
    local_450.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.UniqueString.Data.ArrayNum = 0;
    local_450.UniqueString.Data.ArrayMax = 0;
    local_450.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.FormatArgs.ArrayNum = 0;
    local_450.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_450,StringUi,0x9efd);
    FDS_Text::operator=(&pFVar6->DSText,&local_450);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_450.FormatArgs.AllocatorInstance.Data,
               local_450.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_450.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_450.FormatArgs.AllocatorInstance.Data);
    }
    if (local_450.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.UniqueString.Data.AllocatorInstance.Data);
    }
    uStack_640 = 0;
    local_648 = OnClickedDismantleButton;
    uStack_63c = local_588.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
               (FWriteAccessScope *)&local_298);
    local_280 = &(pFVar6->OnClickDelegate).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_280);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_ItemDismantle____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_560 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_560);
      puVar11[4] = local_648;
      puVar11[5] = CONCAT44(uStack_63c,uStack_640);
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    local_178.Object = (FDS_ViewModelContext *)local_4f8.Object;
    local_178.SharedReferenceCount.ReferenceController =
         local_4f8.SharedReferenceCount.ReferenceController;
    if (local_4f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
                        ((UObject *)this,&local_178);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->VM_DismantleButton).field0_0x0.DebugPtr = pUVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4f8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_AllCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    pUVar14 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_Check_Text>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar14 == (UDS_VM_Common_Check_Text *)0x0)) {
      (this->VM_AllCheck).field0_0x0.DebugPtr = pUVar14;
      if (pUVar14 == (UDS_VM_Common_Check_Text *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3951022269077127120>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                           ,0x30,"false");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14bfc6ab4;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
      (this->VM_AllCheck).field0_0x0.DebugPtr = pUVar14;
    }
    MakeContext<FDS_ViewModelContext_CommonCheckText>(&local_4e8);
    pFVar16 = local_4e8.Object;
    if ((local_4e8.Object == (FDS_ViewModelContext_CommonCheckText *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar16->_padding_ = 0x164;
    ::FName::FName(&local_558,"DS_VM_Common_Check_Text_All");
    pFVar16->_padding_ = (longlong)local_558;
    local_400.StringTableType = None;
    local_400.StringTableID = 0;
    local_400.DateTime.Ticks = 0;
    local_400.TimeSpan.Ticks = 0;
    local_400.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_400.StringEnumTableNameID.Number = 0;
    local_400.TimeExpressionType = None;
    local_400.IsExpression = false;
    local_400.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_400.UniqueString.Data.ArrayNum = 0;
    local_400.UniqueString.Data.ArrayMax = 0;
    local_400.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_400.FormatArgs.ArrayNum = 0;
    local_400.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_400,StringUi,0x9f0f);
    FDS_Text::operator=(&pFVar16->CheckTextName,&local_400);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_400.FormatArgs.AllocatorInstance.Data,
               local_400.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_400.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_400.FormatArgs.AllocatorInstance.Data);
    }
    if (local_400.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.UniqueString.Data.AllocatorInstance.Data);
    }
    pFVar16->Index = 0;
    pUVar15 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_638);
    EVar8 = UDS_M_ItemDismantle::GetFilter(pUVar15);
    local_648 = OnChangedFilter;
    uStack_640 = 0;
    pFVar16->Value = EVar8 == All;
    uStack_63c = local_588.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar16->OnDelegateChangedCheckState,(FWriteAccessScope *)&local_278);
    local_260 = &(pFVar16->OnDelegateChangedCheckState).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_260);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_ItemDismantle____A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_550 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_550);
      puVar11[4] = local_648;
      puVar11[5] = CONCAT44(uStack_63c,uStack_640);
    }
    if (local_278.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
    }
    pUVar14 = (this->VM_AllCheck).field0_0x0.DebugPtr;
    local_1f8.Object = (FDS_ViewModelContext *)local_4e8.Object;
    local_1f8.SharedReferenceCount.ReferenceController =
         local_4e8.SharedReferenceCount.ReferenceController;
    if (local_4e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4e8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_EquipableCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    pUVar14 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_Check_Text>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar14 == (UDS_VM_Common_Check_Text *)0x0)) {
      (this->VM_EquipableCheck).field0_0x0.DebugPtr = pUVar14;
      if (pUVar14 == (UDS_VM_Common_Check_Text *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3951022269077127103>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                           ,0x41,"false");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14bfc6ab4;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
      (this->VM_EquipableCheck).field0_0x0.DebugPtr = pUVar14;
    }
    MakeContext<FDS_ViewModelContext_CommonCheckText>(&local_4d8);
    pFVar16 = local_4d8.Object;
    if ((local_4d8.Object == (FDS_ViewModelContext_CommonCheckText *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar16->_padding_ = 0x164;
    ::FName::FName(&local_548,"DS_VM_Common_Check_Text_Equipable");
    pFVar16->_padding_ = (longlong)local_548;
    local_3b0.StringTableType = None;
    local_3b0.StringTableID = 0;
    local_3b0.DateTime.Ticks = 0;
    local_3b0.TimeSpan.Ticks = 0;
    local_3b0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_3b0.StringEnumTableNameID.Number = 0;
    local_3b0.TimeExpressionType = None;
    local_3b0.IsExpression = false;
    local_3b0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b0.UniqueString.Data.ArrayNum = 0;
    local_3b0.UniqueString.Data.ArrayMax = 0;
    local_3b0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3b0.FormatArgs.ArrayNum = 0;
    local_3b0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_3b0,StringUi,0x9f10);
    FDS_Text::operator=(&pFVar16->CheckTextName,&local_3b0);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_3b0.FormatArgs.AllocatorInstance.Data,
               local_3b0.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_3b0.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_3b0.FormatArgs.AllocatorInstance.Data);
    }
    if (local_3b0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.UniqueString.Data.AllocatorInstance.Data);
    }
    pFVar16->Index = 1;
    pUVar15 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_638);
    EVar8 = UDS_M_ItemDismantle::GetFilter(pUVar15);
    local_648 = OnChangedFilter;
    uStack_640 = 0;
    lStack_1e0 = (ulonglong)uStack_63c << 0x20;
    local_1e8 = OnChangedFilter;
    pFVar16->Value = EVar8 == All;
    TDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
    BindUObject<UDS_VM_W_B_ItemDismantle>
              ((TDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pFVar16->OnDelegateChangedCheckState,this,(pmf_bf18d5c4 *)&local_1e8);
    pUVar14 = (this->VM_EquipableCheck).field0_0x0.DebugPtr;
    local_1d8.Object = (FDS_ViewModelContext *)local_4d8.Object;
    local_1d8.SharedReferenceCount.ReferenceController =
         local_4d8.SharedReferenceCount.ReferenceController;
    if (local_4d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,&local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_UnEquipableCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    pUVar14 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_Check_Text>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar14 == (UDS_VM_Common_Check_Text *)0x0)) {
      (this->VM_UnEquipableCheck).field0_0x0.DebugPtr = pUVar14;
      if (pUVar14 == (UDS_VM_Common_Check_Text *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3951022269077127086>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                           ,0x52,"false");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14bfc6ab4;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
      (this->VM_UnEquipableCheck).field0_0x0.DebugPtr = pUVar14;
    }
    MakeContext<FDS_ViewModelContext_CommonCheckText>(&local_5f8);
    pFVar16 = TSharedPtr<FDS_ViewModelContext_CommonCheckText,1>::operator->(&local_5f8);
    *(undefined4 *)&pFVar16->_padding_ = 0x164;
    ::FName::FName(&local_540,"DS_VM_Common_Check_Text_UnEquipable");
    pFVar16 = TSharedPtr<FDS_ViewModelContext_CommonCheckText,1>::operator->(&local_5f8);
    local_360.StringTableType = None;
    local_360.StringTableID = 0;
    local_360.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_360.StringEnumTableNameID.Number = 0;
    pFVar16->_padding_ = (longlong)local_540;
    local_360.DateTime.Ticks = 0;
    local_360.TimeSpan.Ticks = 0;
    local_360.TimeExpressionType = None;
    local_360.IsExpression = false;
    local_360.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_360.UniqueString.Data.ArrayNum = 0;
    local_360.UniqueString.Data.ArrayMax = 0;
    local_360.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_360.FormatArgs.ArrayNum = 0;
    local_360.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_360,StringUi,0x9f11);
    pFVar16 = TSharedPtr<FDS_ViewModelContext_CommonCheckText,1>::operator->(&local_5f8);
    FDS_Text::operator=(&pFVar16->CheckTextName,&local_360);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_360.FormatArgs.AllocatorInstance.Data,
               local_360.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_360.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_360.FormatArgs.AllocatorInstance.Data);
    }
    if (local_360.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.UniqueString.Data.AllocatorInstance.Data);
    }
    pFVar16 = TSharedPtr<FDS_ViewModelContext_CommonCheckText,1>::operator->(&local_5f8);
    pFVar16->Index = 2;
    pUVar15 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_638);
    EVar8 = UDS_M_ItemDismantle::GetFilter(pUVar15);
    pFVar16 = TSharedPtr<FDS_ViewModelContext_CommonCheckText,1>::operator->(&local_5f8);
    local_648 = OnChangedFilter;
    uStack_640 = 0;
    lStack_1c0 = (ulonglong)uStack_63c << 0x20;
    pFVar16->Value = EVar8 == All;
    local_1c8 = OnChangedFilter;
    pFVar16 = TSharedPtr<FDS_ViewModelContext_CommonCheckText,1>::operator->(&local_5f8);
    TDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>::
    BindUObject<UDS_VM_W_B_ItemDismantle>
              ((TDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pFVar16->OnDelegateChangedCheckState,this,(pmf_bf18d5c4 *)&local_1c8);
    pUVar14 = (this->VM_UnEquipableCheck).field0_0x0.DebugPtr;
    local_1b8.Object = (FDS_ViewModelContext *)local_5f8.Object;
    local_1b8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,&local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5f8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_Money).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar17 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar17 == (UDS_VM_MoneyDisplay *)0x0)) {
      (this->VM_Money).field0_0x0.DebugPtr = pUVar17;
      if (pUVar17 == (UDS_VM_MoneyDisplay *)0x0) goto LAB_14bfc6369;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
      (this->VM_Money).field0_0x0.DebugPtr = pUVar17;
    }
    MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_578);
    pFVar18 = TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1>::operator->(&local_578);
    *(undefined4 *)&pFVar18->_padding_ = 0x192;
    pFVar18 = TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1>::operator->(&local_578);
    pFVar18->MoneyId = 1;
    pFVar18 = TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1>::operator->(&local_578);
    local_1a8.Object = (FDS_ViewModelContext *)local_578.Object;
    local_1a8.SharedReferenceCount.ReferenceController =
         local_578.SharedReferenceCount.ReferenceController;
    pFVar18->Quantity = 0;
    pUVar17 = (this->VM_Money).field0_0x0.DebugPtr;
    if (local_578.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar17,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_578.SharedReferenceCount.ReferenceController);
  }
LAB_14bfc6369:
  pUVar21 = (UObject *)this->_padding_;
  if (pUVar21 == (UObject *)0x0) {
LAB_14bfc6395:
    pUVar21 = pUVar27;
  }
  else {
    pUVar10 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar24 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar21->field_0x10 + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar21->field_0x10 + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar10->_padding_)) goto LAB_14bfc6395;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar21);
  }
  local_630.ObjectIndex = 0;
  local_630.ObjectSerialNumber = 0;
  local_538 = pUVar21;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar21);
  }
  FWeakObjectPtr::operator=(&local_630,(FObjectPtr)&local_538);
  bVar7 = FWeakObjectPtr::IsValid(&local_630);
  if (bVar7) {
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_598);
    pFVar4 = local_598.Object;
    if (local_598.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
      pUVar19 = UDS_LogManager::GetInst();
      local_4c8.SharedReferenceCount.ReferenceController =
           local_598.SharedReferenceCount.ReferenceController;
      if (pUVar19 != (UDS_LogManager *)0x0) {
        pUVar19 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_W_B_ItemDismantle::OnSetViewModel",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar19,1,Warning,local_168.Ptr,0x74,L"dropdownContext is invalid.");
        local_4c8.SharedReferenceCount.ReferenceController =
             local_598.SharedReferenceCount.ReferenceController;
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
          local_4c8.SharedReferenceCount.ReferenceController =
               local_598.SharedReferenceCount.ReferenceController;
        }
      }
    }
    else {
      pFVar20 = TSharedPtr<FDS_ViewModelContext_Dropdown,1>::operator->(&local_598);
      *(undefined4 *)&pFVar20->_padding_ = 0x117;
      pUVar21 = FWeakObjectPtr::Get(&local_638);
      local_628.Data = (FScriptContainerElement *)0x0;
      local_620 = *(int *)&pUVar21[0xd].field_0x8;
      _Size = (size_t)local_620;
      _Src = *(void **)(pUVar21 + 0xd);
      if (local_620 == 0) {
        local_61c = 0;
        iVar24 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_620,0,&local_628,local_620,&local_61c);
        memcpy(local_628.Data,_Src,_Size);
        iVar24 = local_620;
      }
      pFVar2 = local_628.Data + iVar24;
      FVar25.Data = local_628.Data;
      iVar9 = iVar24;
      while( true ) {
        if (iVar9 != iVar24) {
          local_658[0] = 0;
          `TCheckedPointerIterator<enum_EDS_GradeType,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_658);
        }
        pFVar26 = (FSharedReferencer<1> *)local_530._8_8_;
        if (FVar25.Data == pFVar2) break;
        if ((pFVar4 == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar22 = StaticEnum<enum_EDS_GradeType>();
        DS_Util::GetStringEnumTableKey((UEnum *)local_530,(int)pUVar22);
        local_5e8.StringTableType = None;
        local_5e8.StringTableID = 0;
        local_5e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_5e8.StringEnumTableNameID.Number = 0;
        local_5e8.TimeExpressionType = None;
        local_5e8.DateTime.Ticks = 0;
        local_5e8.TimeSpan.Ticks = 0;
        local_5e8.IsExpression = false;
        local_5e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5e8.UniqueString.Data.ArrayNum = 0;
        local_5e8.UniqueString.Data.ArrayMax = 0;
        local_5e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5e8.FormatArgs.ArrayNum = 0;
        local_5e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringEnumTable(&local_5e8,(FName *)local_530);
        iVar9 = (pFVar4->DropdownList).ArrayNum;
        piVar1 = &(pFVar4->DropdownList).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(pFVar4->DropdownList).AllocatorInstance,piVar1);
        }
        (pFVar4->DropdownList).ArrayNum = iVar9 + 1;
        pFVar23 = (pFVar4->DropdownList).AllocatorInstance.Data + (longlong)iVar9 * 0x50;
        *pFVar23 = (FScriptContainerElement)local_5e8.StringTableType;
        *(long64 *)(pFVar23 + 8) = local_5e8.StringTableID;
        *(FName *)(pFVar23 + 0x10) = local_5e8.StringEnumTableNameID;
        *(long64 *)(pFVar23 + 0x18) = local_5e8.DateTime.Ticks;
        *(long64 *)(pFVar23 + 0x20) = local_5e8.TimeSpan.Ticks;
        *(EDS_TimeExpression *)(pFVar23 + 0x28) = local_5e8.TimeExpressionType;
        pFVar23[0x2c] = (FScriptContainerElement)local_5e8.IsExpression;
        *(undefined8 *)(pFVar23 + 0x30) = 0;
        *(FScriptContainerElement **)(pFVar23 + 0x30) =
             local_5e8.UniqueString.Data.AllocatorInstance.Data;
        local_5e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar23 + 0x38) = local_5e8.UniqueString.Data.ArrayNum;
        *(int *)(pFVar23 + 0x3c) = local_5e8.UniqueString.Data.ArrayMax;
        local_5e8.UniqueString.Data.ArrayNum = 0;
        local_5e8.UniqueString.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar23 + 0x40) = 0;
        *(FScriptContainerElement **)(pFVar23 + 0x40) = local_5e8.FormatArgs.AllocatorInstance.Data;
        local_5e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar23 + 0x48) = local_5e8.FormatArgs.ArrayNum;
        *(int *)(pFVar23 + 0x4c) = local_5e8.FormatArgs.ArrayMax;
        local_5e8.FormatArgs.ArrayNum = 0;
        local_5e8.FormatArgs.ArrayMax = 0;
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
        if (local_5e8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_5e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e8.UniqueString.Data.AllocatorInstance.Data);
        }
        FVar25.Data = FVar25.Data + 1;
        iVar9 = local_620;
      }
      if (local_628.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_628.Data);
      }
      local_648 = OnGradeTypeFilterChanged;
      uStack_63c = local_588.SharedReferenceCount.ReferenceController._4_4_;
      uStack_640 = 0;
      local_618 = (undefined1  [8])0x0;
      local_610.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_610.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
                 (FWriteAccessScope *)&local_258);
      local_240 = &local_610;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_610);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_ItemDismantle____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_530._16_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_530 + 0x10));
        puVar11[4] = local_648;
        puVar11[5] = CONCAT44(uStack_63c,uStack_640);
      }
      if (local_258.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
      }
      if ((pFVar4 == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->OnClickList,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
                 (FWriteAccessScope *)&local_2b0);
      if ((local_610.DelegateSize != 0) &&
         (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_610.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_610,0,0,0x10);
        local_610.DelegateSize = 0;
      }
      if (local_2b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
      }
      if (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_610.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_618);
      local_198.Object = (FDS_ViewModelContext *)local_598.Object;
      local_198.SharedReferenceCount.ReferenceController =
           local_598.SharedReferenceCount.ReferenceController;
      if (local_598.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_598.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_598.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_630,&local_198,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_598.SharedReferenceCount.ReferenceController);
      MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_4c8);
      pFVar6 = local_4c8.Object;
      if ((local_4c8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar6->_padding_ = 0x15b;
      ::FName::FName((FName *)(local_530 + 0x18),"DS_VM_CommonIconTextButton_AutoRegister");
      pFVar6->_padding_ = local_530._24_8_;
      local_310.StringTableType = None;
      local_310.StringTableID = 0;
      local_310.DateTime.Ticks = 0;
      local_310.TimeSpan.Ticks = 0;
      local_310.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_310.StringEnumTableNameID.Number = 0;
      local_310.TimeExpressionType = None;
      local_310.IsExpression = false;
      local_310.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_310.UniqueString.Data.ArrayNum = 0;
      local_310.UniqueString.Data.ArrayMax = 0;
      local_310.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_310.FormatArgs.ArrayNum = 0;
      local_310.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_310,StringUi,0x9f1b);
      FDS_Text::operator=(&pFVar6->DSText,&local_310);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_310.FormatArgs.AllocatorInstance.Data,
                 local_310.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_310.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_310.FormatArgs.AllocatorInstance.Data);
      }
      if (local_310.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.UniqueString.Data.AllocatorInstance.Data);
      }
      uStack_640 = 0;
      local_648 = OnClickedAutoRegisterButton;
      uStack_63c = local_588.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
                 (FWriteAccessScope *)&local_238);
      local_220 = &(pFVar6->OnClickDelegate).field_0x8;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_ItemDismantle____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_530._32_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_530 + 0x20));
        puVar11[4] = local_648;
        puVar11[5] = CONCAT44(uStack_63c,uStack_640);
      }
      if (local_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
      }
      local_588.Object = (FDS_ViewModelContext *)local_4c8.Object;
      local_588.SharedReferenceCount.ReferenceController =
           local_4c8.SharedReferenceCount.ReferenceController;
      if (local_4c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_630,&local_588,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c8.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127058>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x6e,"false");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_14bfc6ab4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar26->ReferenceController);
  return;
}

// UpdateView @ 14bfe6610

void __thiscall
UDS_VM_W_B_ItemDismantle::UpdateView
          (UDS_VM_W_B_ItemDismantle *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  UDS_VM_MoneyDisplay *pUVar1;
  UDS_VM_CommonIconTextButton *pUVar2;
  UDS_VM_Common_Check_Text *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EDS_ItemDismantleFilter EVar7;
  UClass *pUVar8;
  UDS_M_ItemDismantle *pUVar9;
  UObject *pUVar10;
  bool local_res8 [8];
  bool local_res18 [8];
  FWeakObjectPtr local_res20;
  UObject *local_28;
  longlong local_20;
  FName local_18;
  int local_10;
  
  if ((this->VM_ResetButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127021>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x93,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bfe686d;
  }
  if ((this->VM_DismantleButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127020>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x94,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bfe686d;
  }
  if ((this->VM_Money).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127019>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x95,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bfe686d;
  }
  if ((this->VM_AllCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127018>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x96,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bfe686d;
  }
  if ((this->VM_EquipableCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127017>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x97,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bfe686d;
  }
  if ((this->VM_UnEquipableCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127016>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x98,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bfe686d;
  }
  if (this->_padding_ == 0) {
LAB_14bfe67e0:
    pUVar10 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (!bVar5) goto LAB_14bfe67e0;
    pUVar10 = (UObject *)this->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar5) {
    pUVar1 = (this->VM_Money).field0_0x0.DebugPtr;
    pUVar9 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res20);
    iVar6 = UDS_M_ItemDismantle::GetDeismantleCost(pUVar9);
    local_20 = (longlong)iVar6;
    (**(code **)(pUVar1->_padding_ + 0x350))(pUVar1,&local_20);
    pUVar2 = (this->VM_ResetButton).field0_0x0.DebugPtr;
    pUVar9 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res20);
    local_res8[0] = UDS_M_ItemDismantle::IsDisabledResetButton(pUVar9);
    UDS_VM_CommonIconTextButton::SetIsDisabled(pUVar2,local_res8);
    pUVar2 = (this->VM_DismantleButton).field0_0x0.DebugPtr;
    pUVar9 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res20);
    local_res18[0] = UDS_M_ItemDismantle::IsDisabledDismantleButton(pUVar9);
    UDS_VM_CommonIconTextButton::SetIsDisabled(pUVar2,local_res18);
    pUVar3 = (this->VM_AllCheck).field0_0x0.DebugPtr;
    pUVar9 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res20);
    EVar7 = UDS_M_ItemDismantle::GetFilter(pUVar9);
    UDS_VM_Common_Check_Text::SetChecked(pUVar3,EVar7 == All);
    pUVar3 = (this->VM_EquipableCheck).field0_0x0.DebugPtr;
    pUVar9 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res20);
    EVar7 = UDS_M_ItemDismantle::GetFilter(pUVar9);
    UDS_VM_Common_Check_Text::SetChecked(pUVar3,EVar7 == Equipable);
    pUVar3 = (this->VM_UnEquipableCheck).field0_0x0.DebugPtr;
    pUVar9 = (UDS_M_ItemDismantle *)FWeakObjectPtr::Get(&local_res20);
    EVar7 = UDS_M_ItemDismantle::GetFilter(pUVar9);
    UDS_VM_Common_Check_Text::SetChecked(pUVar3,EVar7 == UnEquipable);
    local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3951022269077127015>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_B_ItemDismantle.cpp"
                       ,0x99,"false");
    if (bVar5) {
code_r0x00014bfe686d:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

