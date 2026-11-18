// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetShareCookingButtonClickEvent_WrapperImpl @ 14b6268d0

void __cdecl
UDS_VM_Cooking::SetShareCookingButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Cooking *this_00;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14bdde36e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bdde36e:
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
    this_00 = (UDS_M_Cooking *)FWeakObjectPtr::Get(aFStackX_8);
    UDS_M_Cooking::OnClickedShareCooking(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742816>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x60,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetAloneCookingButtonClickEvent_WrapperImpl @ 14b6268e0

void __cdecl
UDS_VM_Cooking::SetAloneCookingButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Cooking *this_00;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14bdc9e6e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bdc9e6e:
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
    this_00 = (UDS_M_Cooking *)FWeakObjectPtr::Get(aFStackX_8);
    UDS_M_Cooking::OnClickedAloneCooking(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742810>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x66,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b6268f0

UClass * __cdecl UDS_VM_Cooking::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Cooking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Cooking",
               &Z_Registration_Info_UClass_UDS_VM_Cooking.InnerSingleton,
               StaticRegisterNativesUDS_VM_Cooking,0x2e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Cooking>,InternalVTableHelperCtorCaller<UDS_VM_Cooking>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Cooking.InnerSingleton;
}

// UDS_VM_Cooking @ 14b62d8b0

UDS_VM_Cooking * __thiscall
UDS_VM_Cooking::UDS_VM_Cooking(UDS_VM_Cooking *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Cooking__6B_;
  *(undefined8 *)&(this->ShareCookingButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ShareCookingButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ShareCookingButtonClickEvent).Delegate.field_0x10 = 0;
  (this->AloneCookingButtonClickEvent)._padding_ = '\0';
  (this->AloneCookingButtonClickEvent).bIsCustomSelected = false;
  (this->AloneCookingButtonClickEvent).bIsLacked = false;
  (this->AloneCookingButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->AloneCookingButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->AloneCookingButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->AloneCookingButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_AloneDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AloneDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_AloneDesc).DateTime.Ticks = 0;
  (this->FixedText_AloneDesc).TimeSpan.Ticks = 0;
  (this->FixedText_AloneDesc).TimeExpressionType = None;
  (this->FixedText_AloneDesc).IsExpression = false;
  (this->FixedText_AloneDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AloneDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AloneDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AloneDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_AloneDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_AloneDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_ShareDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ShareDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_ShareDesc).DateTime.Ticks = 0;
  (this->FixedText_ShareDesc).TimeSpan.Ticks = 0;
  (this->FixedText_ShareDesc).TimeExpressionType = None;
  (this->FixedText_ShareDesc).IsExpression = false;
  (this->FixedText_ShareDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ShareDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ShareDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ShareDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ShareDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_ShareDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_SuccessRateDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SuccessRateDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_SuccessRateDesc).DateTime.Ticks = 0;
  (this->FixedText_SuccessRateDesc).TimeSpan.Ticks = 0;
  (this->FixedText_SuccessRateDesc).TimeExpressionType = None;
  (this->FixedText_SuccessRateDesc).IsExpression = false;
  (this->FixedText_SuccessRateDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SuccessRateDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SuccessRateDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SuccessRateDesc).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SuccessRateDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_SuccessRateDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_EmptyDesc).DateTime.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeSpan.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeExpressionType = None;
  (this->FixedText_EmptyDesc).IsExpression = false;
  (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Share).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Share).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Share).DateTime.Ticks = 0;
  (this->FixedText_Btn_Share).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Share).TimeExpressionType = None;
  (this->FixedText_Btn_Share).IsExpression = false;
  (this->FixedText_Btn_Share).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Share).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Share).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Share).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Share).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Share).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Eat).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Eat).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Eat).DateTime.Ticks = 0;
  (this->FixedText_Btn_Eat).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Eat).TimeExpressionType = None;
  (this->FixedText_Btn_Eat).IsExpression = false;
  (this->FixedText_Btn_Eat).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Eat).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Eat).UniqueString.Data.ArrayMax = 0;
  (this->ShareCookingButtonClickEvent)._padding_ = '\0';
  (this->ShareCookingButtonClickEvent).bIsCustomSelected = false;
  (this->ShareCookingButtonClickEvent).bIsLacked = false;
  (this->ShareCookingButtonClickEvent).bIsCustomDisabled = false;
  (this->FixedText_AloneDesc).StringTableType = StringUi;
  (this->FixedText_AloneDesc).StringTableID = 0x4d270;
  (this->FixedText_ShareDesc).StringTableType = StringUi;
  (this->FixedText_ShareDesc).StringTableID = 0x4d269;
  (this->FixedText_SuccessRateDesc).StringTableType = StringUi;
  (this->FixedText_SuccessRateDesc).StringTableID = 0x4d268;
  (this->FixedText_EmptyDesc).StringTableType = StringUi;
  (this->FixedText_EmptyDesc).StringTableID = 0x4d265;
  (this->FixedText_Btn_Share).StringTableType = StringUi;
  (this->FixedText_Btn_Share).StringTableID = 0x4d26a;
  (this->FixedText_Btn_Eat).StringTableType = StringUi;
  (this->FixedText_Btn_Eat).StringTableID = 0x4d26b;
  (this->FixedText_Btn_Eat).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Eat).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Eat).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_Cooking @ 14b62db10

UDS_VM_Cooking * __thiscall
UDS_VM_Cooking::UDS_VM_Cooking(UDS_VM_Cooking *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Cooking__6B_;
  *(undefined8 *)&(this->ShareCookingButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ShareCookingButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ShareCookingButtonClickEvent).Delegate.field_0x10 = 0;
  (this->AloneCookingButtonClickEvent)._padding_ = '\0';
  (this->AloneCookingButtonClickEvent).bIsCustomSelected = false;
  (this->AloneCookingButtonClickEvent).bIsLacked = false;
  (this->AloneCookingButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->AloneCookingButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->AloneCookingButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->AloneCookingButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_AloneDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_AloneDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_AloneDesc).DateTime.Ticks = 0;
  (this->FixedText_AloneDesc).TimeSpan.Ticks = 0;
  (this->FixedText_AloneDesc).TimeExpressionType = None;
  (this->FixedText_AloneDesc).IsExpression = false;
  (this->FixedText_AloneDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_AloneDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_AloneDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_AloneDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_AloneDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_AloneDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_ShareDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ShareDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_ShareDesc).DateTime.Ticks = 0;
  (this->FixedText_ShareDesc).TimeSpan.Ticks = 0;
  (this->FixedText_ShareDesc).TimeExpressionType = None;
  (this->FixedText_ShareDesc).IsExpression = false;
  (this->FixedText_ShareDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ShareDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ShareDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ShareDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ShareDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_ShareDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_SuccessRateDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SuccessRateDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_SuccessRateDesc).DateTime.Ticks = 0;
  (this->FixedText_SuccessRateDesc).TimeSpan.Ticks = 0;
  (this->FixedText_SuccessRateDesc).TimeExpressionType = None;
  (this->FixedText_SuccessRateDesc).IsExpression = false;
  (this->FixedText_SuccessRateDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SuccessRateDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SuccessRateDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SuccessRateDesc).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SuccessRateDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_SuccessRateDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_EmptyDesc).DateTime.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeSpan.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeExpressionType = None;
  (this->FixedText_EmptyDesc).IsExpression = false;
  (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Share).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Share).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Share).DateTime.Ticks = 0;
  (this->FixedText_Btn_Share).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Share).TimeExpressionType = None;
  (this->FixedText_Btn_Share).IsExpression = false;
  (this->FixedText_Btn_Share).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Share).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Share).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Share).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Share).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Share).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Eat).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Eat).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Eat).DateTime.Ticks = 0;
  (this->FixedText_Btn_Eat).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Eat).TimeExpressionType = None;
  (this->FixedText_Btn_Eat).IsExpression = false;
  (this->FixedText_Btn_Eat).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Eat).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Eat).UniqueString.Data.ArrayMax = 0;
  (this->ShareCookingButtonClickEvent)._padding_ = '\0';
  (this->ShareCookingButtonClickEvent).bIsCustomSelected = false;
  (this->ShareCookingButtonClickEvent).bIsLacked = false;
  (this->ShareCookingButtonClickEvent).bIsCustomDisabled = false;
  (this->FixedText_AloneDesc).StringTableType = StringUi;
  (this->FixedText_AloneDesc).StringTableID = 0x4d270;
  (this->FixedText_ShareDesc).StringTableType = StringUi;
  (this->FixedText_ShareDesc).StringTableID = 0x4d269;
  (this->FixedText_SuccessRateDesc).StringTableType = StringUi;
  (this->FixedText_SuccessRateDesc).StringTableID = 0x4d268;
  (this->FixedText_EmptyDesc).StringTableType = StringUi;
  (this->FixedText_EmptyDesc).StringTableID = 0x4d265;
  (this->FixedText_Btn_Share).StringTableType = StringUi;
  (this->FixedText_Btn_Share).StringTableID = 0x4d26a;
  (this->FixedText_Btn_Eat).StringTableType = StringUi;
  (this->FixedText_Btn_Eat).StringTableID = 0x4d26b;
  (this->FixedText_Btn_Eat).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Eat).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Eat).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Cooking @ 14b62f3c0

void __thiscall UDS_VM_Cooking::~UDS_VM_Cooking(UDS_VM_Cooking *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Cooking__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Eat).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Eat).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Eat).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Eat).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Share).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Share).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Share).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Share).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_EmptyDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SuccessRateDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SuccessRateDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SuccessRateDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SuccessRateDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_ShareDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_ShareDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_ShareDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_ShareDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_AloneDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_AloneDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_AloneDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_AloneDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AloneCookingButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->AloneCookingButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AloneCookingButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ShareCookingButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->ShareCookingButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShareCookingButtonClickEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631d70

IClassDescriptor * __thiscall UDS_VM_Cooking::GetFieldNotificationDescriptor(UDS_VM_Cooking *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Cooking::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632ba0

UClass * __cdecl UDS_VM_Cooking::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Cooking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Cooking",
               &Z_Registration_Info_UClass_UDS_VM_Cooking.InnerSingleton,
               StaticRegisterNativesUDS_VM_Cooking,0x2e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Cooking>,InternalVTableHelperCtorCaller<UDS_VM_Cooking>,
               local_res8,UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Cooking.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Cooking @ 14b633120

void __cdecl UDS_VM_Cooking::StaticRegisterNativesUDS_VM_Cooking(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Cooking_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsEnableShare @ 14b6341e0

void __cdecl UDS_VM_Cooking::execIsEnableShare(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEnableShare((UDS_VM_Cooking *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSelectedCookingShared @ 14b634260

void __cdecl
UDS_VM_Cooking::execIsSelectedCookingShared(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelectedCookingShared((UDS_VM_Cooking *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsTargetEmpty @ 14b6342a0

void __cdecl UDS_VM_Cooking::execIsTargetEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsTargetEmpty((UDS_VM_Cooking *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnChangedCampNPCData @ 14b6342e0

void __cdecl
UDS_VM_Cooking::execOnChangedCampNPCData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCampNPCData((UDS_VM_Cooking *)param_1,local_res10);
  return;
}

// execShareCostTicketValue @ 14b634740

void __cdecl
UDS_VM_Cooking::execShareCostTicketValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = ShareCostTicketValue((UDS_VM_Cooking *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execShareSuccessRate @ 14b634780

void __cdecl UDS_VM_Cooking::execShareSuccessRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = ShareSuccessRate((UDS_VM_Cooking *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execShareSuccessRateStyleID @ 14b6347c0

void __cdecl
UDS_VM_Cooking::execShareSuccessRateStyleID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = ShareSuccessRateStyleID((UDS_VM_Cooking *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// BindModel @ 14bdb15f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_Cooking::BindModel(UDS_VM_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  char *pcVar6;
  UObject *this_00;
  UFunction *pUVar7;
  char *pcVar8;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  FName local_d0;
  UDS_VM_Cooking *local_c8;
  FName *local_c0;
  undefined1 local_b8 [24];
  FName local_a0;
  FDestructionSentinel local_98;
  code *local_78;
  longlong lStack_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UDS_VM_ModelBase::BindModel((UDS_VM_ModelBase *)this);
  pUVar3 = UDS_EntityManager::GetInst();
  if (pUVar3 == (UDS_EntityManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742854>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x3a,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bdb171c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b8._0_8_ = OnRemoveCamp;
  local_b8._8_4_ = 0;
  lStack_70 = (ulonglong)(uint)local_b8._12_4_ << 0x20;
  local_78 = OnRemoveCamp;
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_Cooking>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar3->OnRemoveEntityEvent,(UDS_VM_Cooking *)local_b8,(pmf_938a8d33 *)this);
  if (this->_padding_ == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742850>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x3e,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bdb171c;
  }
  pcVar8 = &DAT_00000002;
  FDS_DataContainer::GetData<unsigned___int64,enum_EDS_CookingData>
            ((FDS_DataContainer *)(this->_padding_ + 0x40),CampEntityID);
  UDS_NPCCampData::GetData((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742847>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x41,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bdb171c;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  pcVar5 = strstr("&UDS_VM_Cooking::OnChangedCampNPCData","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bdb179a:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 == (char *)0x0) || (pcVar8 = pcVar6 + 2, pcVar6[2] == '0')) goto LAB_14bdb179a;
  }
  ::FName::FName(&local_d0,pcVar8);
  local_res20 = local_d0;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_c8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Cooking *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_c8);
  local_d8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_68);
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar7 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14bdb1886;
  }
  local_c0 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_Cooking>'::__l2::<lambda_1>::operator()(&local_c0);
LAB_14bdb1886:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_50);
  local_b8._16_4_ = local_e0.ObjectIndex;
  local_b8._20_4_ = local_e0.ObjectSerialNumber;
  local_a0 = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_b8 + 0x10));
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// InitViewModelCDO @ 14bdc76b0

void __thiscall UDS_VM_Cooking::InitViewModelCDO(UDS_VM_Cooking *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  UDS_VM_Cooking *local_res18;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_78._0_8_ = OnLoadWindowCallbackMenual;
  local_78.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_78.Accessor & 0xffffffff00000000);
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Cooking____A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Cooking *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Cooking *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
    puVar2[4] = local_78._0_8_;
    puVar2[5] = local_78.Accessor;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  local_res10[0] = 0x44f;
  if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._8_4_ !=
      UDS_ContentsController::OnLoadWindowCallbackManualDelegate._52_4_) {
    lVar4 = 0x154cef9f8;
    if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_ != 0) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._72_4_ - 1
                             & 0x44f) * 4);
    while (iVar1 != -1) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
              (longlong)iVar1 * 0x28;
      if (*(int *)(UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
                  (longlong)iVar1 * 0x28) == 0x44f) {
        if (lVar4 != 0) goto LAB_14bdc7853;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x20);
    }
  }
  local_78._0_8_ = local_res10;
  local_78.Accessor = &local_58.AccessDetector;
  TSet<TTuple<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>_>
            (&UDS_ContentsController::OnLoadWindowCallbackManualDelegate,(uint)&local_res18,
             (TPairInitializer<EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>
              *)0x44f,(bool *)&local_78);
LAB_14bdc7853:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// IsEnableShare @ 14bdc8740

bool __thiscall UDS_VM_Cooking::IsEnableShare(UDS_VM_Cooking *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EDS_ShareState EVar4;
  UClass *pUVar5;
  UDS_M_Cooking *this_01;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar2) {
      pUVar6 = (UObject *)*this_00;
      goto LAB_14bdc876e;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14bdc876e:
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
                      (&bGEnsureHasExecuted<_2700093132648742775>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x89,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(&local_res8);
  EVar4 = UDS_M_Cooking::GetShareState(this_01);
  return EVar4 == Enable;
}

// IsSelectedCookingShared @ 14bdc9480

bool __thiscall UDS_VM_Cooking::IsSelectedCookingShared(UDS_VM_Cooking *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_Cooking *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdc94ae;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdc94ae:
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
                      (&bGEnsureHasExecuted<_2700093132648742798>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x72,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_Cooking::IsSelectedCookingShared(this_01);
  return bVar2;
}

// IsTargetEmpty @ 14bdc9590

bool __thiscall UDS_VM_Cooking::IsTargetEmpty(UDS_VM_Cooking *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_Cooking *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bdc95be;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bdc95be:
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
                      (&bGEnsureHasExecuted<_2700093132648742804>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x6c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_Cooking::IsTargetEmpty(this_01);
  return bVar2;
}

// OnAloneCookingButtonClickEvent @ 14bdc9e40

void __thiscall
UDS_VM_Cooking::OnAloneCookingButtonClickEvent(UDS_VM_Cooking *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Cooking *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bdc9e6e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bdc9e6e:
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
    this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(local_res8);
    UDS_M_Cooking::OnClickedAloneCooking(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742810>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x66,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnChangedCampNPCData @ 14bdca4a0

void __thiscall UDS_VM_Cooking::OnChangedCampNPCData(UDS_VM_Cooking *this,UDS_DataBase *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Cooking *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bdca4d5;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bdca4d5:
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
    this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Cooking::OnChangedCampNPCData(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742769>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x8f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCloseInit @ 14bdcdb90

void __thiscall UDS_VM_Cooking::OnCloseInit(UDS_VM_Cooking *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnLoadWindowCallbackMenual @ 14bdcff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_Cooking::OnLoadWindowCallbackMenual
          (UDS_VM_Cooking *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr> param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName *pFVar9;
  FName FVar10;
  FString *pFVar11;
  longlong *plVar12;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FWeakObjectPtr local_d8;
  UDS_UserWidget *local_d0;
  FName local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_res20 = param_3.WeakPtr;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UObject *)0x0) goto LAB_14bdcffe8;
  }
  else {
    if (pUVar6 == (UObject *)0x0) {
LAB_14bdcffe8:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2700093132648742883>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                         ,0x1d,"false");
      if (!bVar4) {
        return;
      }
      goto code_r0x00014bdcffdd;
    }
    UE::GC::MarkAsReachable(pUVar6);
  }
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    pUVar8 = FWeakObjectPtr::Get(&local_res20);
    pFVar9 = ::FName::FName(&local_c8,L"CampEntityID");
    TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
    ::Find((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
            *)(pUVar8 + 9),*pFVar9);
    ::FString::PrintfImpl(&local_e8,L"%lld");
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_CookingData>
                       ((FDS_DataContainer *)&pUVar6[1].field_0x18,(EDS_CookingData)local_c0);
    uVar1 = *(undefined8 *)FVar10;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar6[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar10);
    if (pFVar11 != &local_e8) {
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar11->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Data).ArrayNum = local_e8.Data.ArrayNum;
      (pFVar11->Data).ArrayMax = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    pcVar3 = *(code **)(*(longlong *)pUVar6 + 0x2e8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    (*pcVar3)(pUVar6,local_d8);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742881>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x1f,"false");
    if (bVar4) {
code_r0x00014bdcffdd:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// OnRemoveCamp @ 14bdd19c0

void __thiscall UDS_VM_Cooking::OnRemoveCamp(UDS_VM_Cooking *this,ulong64 *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Cooking *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bdd19f5;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bdd19f5:
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
    this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Cooking::OnRemoveCamp(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742863>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x31,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnShareCookingButtonClickEvent @ 14bdde340

void __thiscall
UDS_VM_Cooking::OnShareCookingButtonClickEvent(UDS_VM_Cooking *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Cooking *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Cooking_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bdde36e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bdde36e:
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
    this_01 = (UDS_M_Cooking *)FWeakObjectPtr::Get(local_res8);
    UDS_M_Cooking::OnClickedShareCooking(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742816>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x60,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ShareCostTicketValue @ 14bdea800

int __thiscall UDS_VM_Cooking::ShareCostTicketValue(UDS_VM_Cooking *this)

{
  int iVar1;
  FDS_CommonDataTableRow *pFVar2;
  
  pFVar2 = FDS_CommonDataTableRow::GetRef(0xb79b,true);
  if (pFVar2 == &FDS_CommonDataTableRow::DefaultObject) {
    return 0;
  }
  if ((pFVar2->OptionValue).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014b9132da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(pFVar2->OptionValue).Data.AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b9132ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// ShareSuccessRate @ 14bdea810

float __thiscall UDS_VM_Cooking::ShareSuccessRate(UDS_VM_Cooking *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  FString *pFVar7;
  float fVar8;
  double dVar9;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_CookingData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_CookingData)local_res8);
    uVar2 = *(undefined8 *)FVar6;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar5 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum != 0) {
      dVar9 = _wtof((wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      return (float)dVar9;
    }
    dVar9 = _wtof(L"");
    return (float)dVar9;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2700093132648742792>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                     ,0x78,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    fVar8 = (float)(*pcVar3)();
    return fVar8;
  }
  return 0.0;
}

// ShareSuccessRateStyleID @ 14bdea8e0

int __thiscall UDS_VM_Cooking::ShareSuccessRateStyleID(UDS_VM_Cooking *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_CookingData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_CookingData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      iVar5 = _wtoi((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return iVar5;
    }
    iVar5 = _wtoi(L"");
    return iVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2700093132648742786>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                     ,0x7e,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return 0;
}

// UnbindModel @ 14bdecb20

void __thiscall UDS_VM_Cooking::UnbindModel(UDS_VM_Cooking *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [4];
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  pUVar3 = UDS_EntityManager::GetInst();
  if (pUVar3 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnRemoveEntityEvent,
               this);
  }
  if (this->_padding_ == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2700093132648742832>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Cooking.cpp"
                       ,0x50,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FDS_DataContainer::GetData<unsigned___int64,enum_EDS_CookingData>
              ((FDS_DataContainer *)(this->_padding_ + 0x40),CampEntityID);
    UDS_NPCCampData::GetData((ulong64)local_res8);
    bVar2 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_res8);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
                 (UObject *)this);
    }
  }
  return;
}

// UpdateView @ 14bdfa0c0

void __thiscall
UDS_VM_Cooking::UpdateView
          (UDS_VM_Cooking *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::IsTargetEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsTargetEmpty.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSelectedCookingShared.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedCookingShared.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ShareSuccessRate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ShareSuccessRate.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ShareSuccessRateStyleID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ShareSuccessRateStyleID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ShareCostTicketValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ShareCostTicketValue.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsEnableShare.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEnableShare.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

