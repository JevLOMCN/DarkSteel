// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetCancelButtonEventField_WrapperImpl @ 14b6ecbb0

void __cdecl
UDS_VM_WaitCompleteSlot::SetCancelButtonEventField_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14be2933e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2933e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(aFStackX_8);
    (**(code **)(*(longlong *)pUVar4 + 0x330))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594790>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x26,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetCompleteButtonEventField_WrapperImpl @ 14b6ecbc0

void __cdecl
UDS_VM_WaitCompleteSlot::SetCompleteButtonEventField_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14be2d45e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2d45e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(aFStackX_8);
    (**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594796>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetAccelButtonEventField_WrapperImpl @ 14b6ecbd0

void __cdecl
UDS_VM_WaitCompleteSlot::SetAccelButtonEventField_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14be28dfe;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be28dfe:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(aFStackX_8);
    (**(code **)(*(longlong *)pUVar4 + 0x340))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594802>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetClickedSlotButtonEventField_WrapperImpl @ 14b6ecbe0

void __cdecl
UDS_VM_WaitCompleteSlot::SetClickedSlotButtonEventField_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14be2cfbe;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2cfbe:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(aFStackX_8);
    (**(code **)(*(longlong *)pUVar4 + 0x348))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594808>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x38,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b6ecbf0

UClass * __cdecl UDS_VM_WaitCompleteSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WaitCompleteSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WaitCompleteSlot",
               &Z_Registration_Info_UClass_UDS_VM_WaitCompleteSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WaitCompleteSlot,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WaitCompleteSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WaitCompleteSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WaitCompleteSlot.InnerSingleton;
}

// UDS_VM_WaitCompleteSlot @ 14b6f3df0

UDS_VM_WaitCompleteSlot * __thiscall
UDS_VM_WaitCompleteSlot::UDS_VM_WaitCompleteSlot
          (UDS_VM_WaitCompleteSlot *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteSlot__6B_;
  *(undefined8 *)&(this->CancelButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->CancelButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CancelButtonEventField).Delegate.field_0x10 = 0;
  (this->CompleteButtonEventField)._padding_ = '\0';
  (this->CompleteButtonEventField).bIsCustomSelected = false;
  (this->CompleteButtonEventField).bIsLacked = false;
  (this->CompleteButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CompleteButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->CompleteButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CompleteButtonEventField).Delegate.field_0x10 = 0;
  (this->AccelButtonEventField)._padding_ = '\0';
  (this->AccelButtonEventField).bIsCustomSelected = false;
  (this->AccelButtonEventField).bIsLacked = false;
  (this->AccelButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->AccelButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->AccelButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->AccelButtonEventField).Delegate.field_0x10 = 0;
  (this->ClickedSlotButtonEventField)._padding_ = '\0';
  (this->ClickedSlotButtonEventField).bIsCustomSelected = false;
  (this->ClickedSlotButtonEventField).bIsLacked = false;
  (this->ClickedSlotButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedSlotButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickedSlotButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedSlotButtonEventField).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeExpressionType = None;
  (this->FixedText_Btn_Accel).IsExpression = false;
  (this->FixedText_Btn_Accel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Complete).DateTime.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeExpressionType = None;
  (this->FixedText_Btn_Complete).IsExpression = false;
  (this->FixedText_Btn_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->CancelButtonEventField)._padding_ = '\0';
  (this->CancelButtonEventField).bIsCustomSelected = false;
  (this->CancelButtonEventField).bIsLacked = false;
  (this->CancelButtonEventField).bIsCustomDisabled = false;
  (this->FixedText_Btn_Accel).StringTableType = StringUi;
  (this->FixedText_Btn_Accel).StringTableID = 6;
  (this->FixedText_Btn_Complete).StringTableType = StringUi;
  (this->FixedText_Btn_Complete).StringTableID = 0x1870d;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// UDS_VM_WaitCompleteSlot @ 14b6f3f90

UDS_VM_WaitCompleteSlot * __thiscall
UDS_VM_WaitCompleteSlot::UDS_VM_WaitCompleteSlot
          (UDS_VM_WaitCompleteSlot *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteSlot__6B_;
  *(undefined8 *)&(this->CancelButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->CancelButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CancelButtonEventField).Delegate.field_0x10 = 0;
  (this->CompleteButtonEventField)._padding_ = '\0';
  (this->CompleteButtonEventField).bIsCustomSelected = false;
  (this->CompleteButtonEventField).bIsLacked = false;
  (this->CompleteButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CompleteButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->CompleteButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CompleteButtonEventField).Delegate.field_0x10 = 0;
  (this->AccelButtonEventField)._padding_ = '\0';
  (this->AccelButtonEventField).bIsCustomSelected = false;
  (this->AccelButtonEventField).bIsLacked = false;
  (this->AccelButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->AccelButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->AccelButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->AccelButtonEventField).Delegate.field_0x10 = 0;
  (this->ClickedSlotButtonEventField)._padding_ = '\0';
  (this->ClickedSlotButtonEventField).bIsCustomSelected = false;
  (this->ClickedSlotButtonEventField).bIsLacked = false;
  (this->ClickedSlotButtonEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickedSlotButtonEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickedSlotButtonEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickedSlotButtonEventField).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accel).TimeExpressionType = None;
  (this->FixedText_Btn_Accel).IsExpression = false;
  (this->FixedText_Btn_Accel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Complete).DateTime.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeExpressionType = None;
  (this->FixedText_Btn_Complete).IsExpression = false;
  (this->FixedText_Btn_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->CancelButtonEventField)._padding_ = '\0';
  (this->CancelButtonEventField).bIsCustomSelected = false;
  (this->CancelButtonEventField).bIsLacked = false;
  (this->CancelButtonEventField).bIsCustomDisabled = false;
  (this->FixedText_Btn_Accel).StringTableType = StringUi;
  (this->FixedText_Btn_Accel).StringTableID = 6;
  (this->FixedText_Btn_Complete).StringTableType = StringUi;
  (this->FixedText_Btn_Complete).StringTableID = 0x1870d;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_WaitCompleteSlot @ 14b6f4dd0

void __thiscall UDS_VM_WaitCompleteSlot::~UDS_VM_WaitCompleteSlot(UDS_VM_WaitCompleteSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Complete).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Complete).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Accel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Accel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Accel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickedSlotButtonEventField).Delegate);
  pvVar2 = *(void **)&(this->ClickedSlotButtonEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickedSlotButtonEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AccelButtonEventField).Delegate);
  pvVar2 = *(void **)&(this->AccelButtonEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AccelButtonEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CompleteButtonEventField).Delegate
            );
  pvVar2 = *(void **)&(this->CompleteButtonEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CompleteButtonEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CancelButtonEventField).Delegate);
  pvVar2 = *(void **)&(this->CancelButtonEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CancelButtonEventField).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f7340

IClassDescriptor * __thiscall
UDS_VM_WaitCompleteSlot::GetFieldNotificationDescriptor(UDS_VM_WaitCompleteSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WaitCompleteSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f81a0

UClass * __cdecl UDS_VM_WaitCompleteSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WaitCompleteSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WaitCompleteSlot",
               &Z_Registration_Info_UClass_UDS_VM_WaitCompleteSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WaitCompleteSlot,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WaitCompleteSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WaitCompleteSlot>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WaitCompleteSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WaitCompleteSlot @ 14b6f8610

void __cdecl UDS_VM_WaitCompleteSlot::StaticRegisterNativesUDS_VM_WaitCompleteSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WaitCompleteSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCancelVisibility @ 14b6f94b0

void __cdecl
UDS_VM_WaitCompleteSlot::execCancelVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = CancelVisibility((UDS_VM_WaitCompleteSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execSwitcherIndex @ 14b6f99e0

void __cdecl
UDS_VM_WaitCompleteSlot::execSwitcherIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SwitcherIndex((UDS_VM_WaitCompleteSlot *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSwitcherVisibility @ 14b6f9a20

void __cdecl
UDS_VM_WaitCompleteSlot::execSwitcherVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = SwitcherVisibility((UDS_VM_WaitCompleteSlot *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// CancelVisibility @ 14be13f40

bool __thiscall UDS_VM_WaitCompleteSlot::CancelVisibility(UDS_VM_WaitCompleteSlot *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14be13f6e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be13f6e:
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
                      (&bGEnsureHasExecuted<5959935901147594784>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x20,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  uVar3 = (**(code **)(*(longlong *)pUVar5 + 0x328))(pUVar5);
  return (bool)uVar3;
}

// OnAccelButtonEventField @ 14be28dd0

void __thiscall
UDS_VM_WaitCompleteSlot::OnAccelButtonEventField
          (UDS_VM_WaitCompleteSlot *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14be28dfe;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be28dfe:
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
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar4 + 0x340))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594802>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x32,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCancelButtonEventField @ 14be29310

void __thiscall
UDS_VM_WaitCompleteSlot::OnCancelButtonEventField
          (UDS_VM_WaitCompleteSlot *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14be2933e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2933e:
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
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar4 + 0x330))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594790>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x26,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedSlotButtonEventField @ 14be2cf90

void __thiscall
UDS_VM_WaitCompleteSlot::OnClickedSlotButtonEventField
          (UDS_VM_WaitCompleteSlot *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14be2cfbe;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2cfbe:
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
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar4 + 0x348))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594808>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x38,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCompleteButtonEventField @ 14be2d430

void __thiscall
UDS_VM_WaitCompleteSlot::OnCompleteButtonEventField
          (UDS_VM_WaitCompleteSlot *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14be2d45e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2d45e:
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
    pUVar4 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar4 + 0x338))(pUVar4);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594796>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x2c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SwitcherIndex @ 14be545c0

int __thiscall UDS_VM_WaitCompleteSlot::SwitcherIndex(UDS_VM_WaitCompleteSlot *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UDS_M_WaitCompleteListSlot *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14be545ee;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14be545ee:
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
                      (&bGEnsureHasExecuted<5959935901147594770>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x12,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
  this_01 = (UDS_M_WaitCompleteListSlot *)FWeakObjectPtr::Get(&local_res8);
  iVar3 = UDS_M_WaitCompleteListSlot::GetCraftingState(this_01);
  return iVar3;
}

// SwitcherVisibility @ 14be546a0

ESlateVisibility __thiscall
UDS_VM_WaitCompleteSlot::SwitcherVisibility(UDS_VM_WaitCompleteSlot *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_M_WaitCompleteListSlot *this_01;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar2) {
      pUVar6 = (UObject *)*this_00;
      goto LAB_14be546ce;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14be546ce:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5959935901147594777>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteSlot.cpp"
                       ,0x19,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Collapsed;
  }
  this_01 = (UDS_M_WaitCompleteListSlot *)FWeakObjectPtr::Get(&local_res8);
  iVar4 = UDS_M_WaitCompleteListSlot::GetCraftingState(this_01);
  EVar3 = Collapsed;
  if (iVar4 < 2) {
    EVar3 = SelfHitTestInvisible;
  }
  return EVar3;
}

// UpdateView @ 14be5ad90

void __thiscall
UDS_VM_WaitCompleteSlot::UpdateView
          (UDS_VM_WaitCompleteSlot *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::SwitcherVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CancelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CancelVisibility.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

